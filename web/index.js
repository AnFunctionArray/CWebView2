import glslangModule from './node_modules/@webgpu/glslang/dist/web-devel/glslang.js'

async function createTextureFromImage(device, src, usage) {
    const img = document.createElement('img')
    img.src = src
    await img.decode()

    const imageCanvas = document.createElement('canvas')
    imageCanvas.width = img.width
    imageCanvas.height = img.height

    const imageCanvasContext = imageCanvas.getContext('2d')
    //imageCanvasContext.translate(0, img.height)
    //imageCanvasContext.scale(1, -1)
    imageCanvasContext.drawImage(img, 0, 0, img.width, img.height)
    const imageData = imageCanvasContext.getImageData(0, 0, img.width, img.height)

    let data = null

    const rowPitch = Math.ceil(img.width * 4 / 256) * 256
    if (rowPitch == img.width * 4) {
        data = imageData.data
    } else {
        data = new Uint8Array(rowPitch * img.height)
        for (let y = 0; y < img.height; ++y) {
            for (let x = 0; x < img.width; ++x) {
                let i = x * 4 + y * rowPitch
                data[i] = imageData.data[i]
                data[i + 1] = imageData.data[i + 1]
                data[i + 2] = imageData.data[i + 2]
                data[i + 3] = imageData.data[i + 3]
            }
        }
    }

    const texture = device.createTexture({
        size: {
            width: img.width,
            height: img.height,
            depth: 1,
        },
        format: "rgba8unorm",
        usage: GPUTextureUsage.COPY_DST | usage,
    })

    const textureDataBuffer = device.createBuffer({
        size: data.byteLength,
        usage: GPUBufferUsage.COPY_DST | GPUBufferUsage.COPY_SRC,
    })

    textureDataBuffer.setSubData(0, data)

    const commandEncoder = device.createCommandEncoder({})
    commandEncoder.copyBufferToTexture({
        buffer: textureDataBuffer,
        bytesPerRow: rowPitch,
        imageHeight: 0,
    }, {
        texture: texture,
    }, {
        width: img.width,
        height: img.height,
        depth: 1,
    })

    device.defaultQueue.submit([commandEncoder.finish()])

    return texture
}

/** @type {Map<Promise, []>}*/
const promises = new Map()

let globalpromise

/** @param {HTMLCanvasElement[]} canvas*/
async function init(canvas) {
    const vertexShaderGLSL = await (await fetch("./vertexshad.vert")).text()

    const fragmentShaderGLSL = await (await fetch("./fragshad.frag")).text()

    const adapter = await navigator.gpu.requestAdapter()
    const device = await adapter.requestDevice()
    const glslang = await glslangModule()

    //const aspect = Math.abs(canvas.width / canvas.height)

    // @ts-ignore:
    let swapChain = []
    for (const [i, a] of canvas.entries())
        swapChain[i] = a.getContext('gpupresent').configureSwapChain({
            device,
            format: "bgra8unorm",
        })

    //const verticesBuffer = device.createBuffer({
    //    size: 0,//cubeVertexArray.byteLength,
    //    usage: GPUBufferUsage.VERTEX | GPUBufferUsage.COPY_DST
    //})
    //verticesBuffer.setSubData(0, cubeVertexArray)

    const bindGroupLayout = device.createBindGroupLayout({
        entries: [{
            // Transform
            binding: 0,
            visibility: GPUShaderStage.VERTEX,
            type: "uniform-buffer"
        }, {
            // Sampler
            binding: 1,
            visibility: GPUShaderStage.FRAGMENT,
            type: "sampler"
        }, {
            // Texture view
            binding: 2,
            visibility: GPUShaderStage.FRAGMENT,
            type: "sampled-texture"
        }, {
            // Texture view
            binding: 3,
            visibility: GPUShaderStage.FRAGMENT,
            type: "sampled-texture"
        }, {
            // Texture view
            binding: 4,
            visibility: GPUShaderStage.FRAGMENT,
            type: "sampled-texture"
        }, {
            // Texture view
            binding: 5,
            visibility: GPUShaderStage.FRAGMENT,
            type: "sampled-texture"
        }, {
            // Transform
            binding: 6,
            visibility: GPUShaderStage.VERTEX,
            type: "uniform-buffer"
        },]
    })

    const pipelineLayout = device.createPipelineLayout({bindGroupLayouts: [bindGroupLayout]})
    const pipeline = device.createRenderPipeline({
        layout: pipelineLayout,

        vertexStage: {
            module: device.createShaderModule({
                code: glslang.compileGLSL(vertexShaderGLSL, "vertex"),

                // @ts-ignore
                source: vertexShaderGLSL,
                transform: source => glslang.compileGLSL(source, "vertex"),
            }),
            entryPoint: "main"
        },
        fragmentStage: {
            module: device.createShaderModule({
                code: glslang.compileGLSL(fragmentShaderGLSL, "fragment"),

                // @ts-ignore
                source: fragmentShaderGLSL,
                transform: source => glslang.compileGLSL(source, "fragment"),
            }),
            entryPoint: "main"
        },

        primitiveTopology: "triangle-list",
        depthStencilState: {
            depthWriteEnabled: true,
            //depthCompare: "less",
            format: "depth24plus-stencil8",
        },

        /*rasterizationState: {
            cullMode: 'back',
        },*/

        colorStates: [{
            format: "bgra8unorm",

            alphaBlend: {
                srcFactor: 'src-alpha',
                dstFactor: 'one-minus-src-alpha',
                operation: 'add'
            },
            colorBlend: {
                srcFactor: 'src-alpha',
                dstFactor: 'one-minus-src-alpha',
                operation: 'add'
            },
            writeMask: GPUColorWrite.ALL
        }],
    })

    const depthTexture = device.createTexture({
        size: {width: canvas[0].width, height: canvas[0].height, depth: 1},
        format: "depth24plus-stencil8",
        usage: GPUTextureUsage.OUTPUT_ATTACHMENT
    })

    const renderPassDescriptor = {
        colorAttachments: [{
            attachment: undefined, // Assigned later

            loadValue: {r: 0.5, g: 0.5, b: 0.5, a: 1.0},
        }],
        depthStencilAttachment: {
            attachment: depthTexture.createView(),

            depthLoadValue: 1.0,
            depthStoreOp: "store",
            stencilLoadValue: 0,
            stencilStoreOp: "store",
        }
    }

    const uniformBufferSize = 4 * 4 * 6 // 6 integers
    const uniformBuffer = device.createBuffer({
        size: uniformBufferSize,
        usage: GPUBufferUsage.UNIFORM | GPUBufferUsage.COPY_DST,
    })

    const adjsize = 4 // single integers
    const adjBuffer = device.createBuffer({
        size: adjsize,
        usage: GPUBufferUsage.UNIFORM | GPUBufferUsage.COPY_DST,
    })

    const onetexture = await createTextureFromImage(device, './1.jpg', GPUTextureUsage.SAMPLED)

    const twotexture = await createTextureFromImage(device, './2.jpg', GPUTextureUsage.SAMPLED)

    const xtexture = await createTextureFromImage(device, './X6.jpg', GPUTextureUsage.SAMPLED)

    const shiptexture = await createTextureFromImage(device, './test_ship.png', GPUTextureUsage.SAMPLED)

    const sampler = device.createSampler({
        //magFilter: "linear",
        //minFilter: "linear",
    })

    const uniformBindGroup = device.createBindGroup({
        layout: bindGroupLayout,
        entries: [{
            binding: 0,
            resource: {
                buffer: uniformBuffer,
            },
        }, {
            binding: 1,
            resource: sampler,
        }, {
            binding: 2,
            resource: onetexture.createView(),
        }, {
            binding: 3,
            resource: twotexture.createView(),
        }, {
            binding: 4,
            resource: xtexture.createView(),
        }, {
            binding: 5,
            resource: shiptexture.createView(),
        }, {
            binding: 6,
            resource: {
                buffer: adjBuffer,
            },
        }],
    })

    /** @param {number} canvasindex*/
    return function generateframefunction(canvasindex) {

        let resolve

        let alreadyset = false

        let promise = new Promise(resolvearg => resolve = resolvearg)

        promises.set(promise, "")

        const diff = 0.73

        const speedmax = 0.1

        let speed = speedmax, adj1 = -diff //0.976  + 0.266    //-diff

        let randvalues = new Uint32Array(6 * 4)

        crypto.getRandomValues(randvalues)

        return async function frame() {

            if (!(adj1 <= 2 * diff)) {
                adj1 = -diff
                const newrandvalues = new Uint32Array(3)

                crypto.getRandomValues(newrandvalues)

                for (let i = 0; i < 3; ++i)
                    randvalues[(i + 3) * 4] = randvalues[i * 4]

                for (let i = 0; i < 3; ++i)
                    randvalues[i * 4] = newrandvalues[i]
            }


            uniformBuffer.setSubData(0, randvalues)

            adjBuffer.setSubData(0, new Float32Array([adj1]))

            renderPassDescriptor.colorAttachments[0].attachment = swapChain[canvasindex].getCurrentTexture().createView()

            const commandEncoder = device.createCommandEncoder({})
            const passEncoder = commandEncoder.beginRenderPass(renderPassDescriptor)
            passEncoder.setPipeline(pipeline)
            passEncoder.setBindGroup(0, uniformBindGroup)
            //passEncoder.setVertexBuffer(0, verticesBuffer)
            passEncoder.draw(6 * 6 + 6, 1, 0, 0)
            passEncoder.endPass()

            const randval = new Uint8Array(1)

            crypto.getRandomValues(randval);

            /** @param {number} adj */
            function getQuadrant() {
                /*let result = (adj + diff) / (diff / 1.3)
                console.log("quadrant " + canvasindex + " " + result)
                return Math.round(result)*/
                //const diff = 2.2
                const centerrightside = 0.5 / 90, centerleftside = -0.5 / 90

                /*const randval = new Uint8Array(1)

                const levels = [-1, -2 / 3, -1 / 3, 0, 1 / 3, 2 / 3]

                const levelsminusone = [-16 / 11, -1, -2 / 3, -1 / 3, 0, 1 / 3]

                let index

                for (const [[i, y], yminusone] of
                    Array.from(levels.entries()).map((entry, index) => [entry, levelsminusone[index]]))
                    if (centerleftside > 0.5 + adj + yminusone * diff && centerleftside <= 0.5 + adj + y * diff)
                        if (centerrightside > 0.5 + adj + yminusone * diff && centerrightside <= 0.5 + adj + y * diff)
                            if (!index) index = i
                            else throw "second match"
                        else return crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i + 1 : i]
                if(!index) throw "can't find quadrant in canvas " + canvasindex
                return index*/

                let index

                /*for (const i of new Array(6).keys())
                    if (centerleftside >= -0.5 + (i / 3 - 1) * diff + adj1)
                        if (centerrightside <= 0.5 + (i / 3 - 1) * diff + adj1)
                            if (!index) index = i
                            else return crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i : i - 1]
                //else return crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i + 1 : i]*/
                const signwidth = 625 / 2144
                const restwidth = 1075 / 6432
                /*for (let adj2 = -diff, i = 0; adj2 < 2 * diff; adj2 += signwidth + restwidth / 2, ++i)
                    if (centerleftside >= adj1)
                        if (centerrightside <= adj1 + signwidth + restwidth / 2)
                            if (index === undefined) index = i
                            else if (!Array.isArray(index)) index = (crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i : i - 1])
                            else throw "broken alg"*/

                for (let i of new Array(6).keys())
                    if (centerleftside >= -0.5 + (i / 3 - 1) * 2.2 + adj1 - 0.266 / 2)
                        if (centerrightside <= 0.5 + (i / 3 - 1) * 2.2 + adj1 - 0.266 / 2) {
                            //if (centerrightside - (-0.5 + (i / 3 - 1) * 2.2 + adj1) < 0.266 / 2)
                                //console.log(canvasindex + " " + (centerrightside - (-0.5 + (i / 3 - 1) * 2.2 + adj1)))
                            //    i -= 1
                            return i
                            if (index === undefined) index = i
                            else if (!Array.isArray(index)) index = (crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i : i - 1])
                            else console.log("broken alg")
                        }

                if (index === undefined) throw "can't find quadrant in canvas " + canvasindex
                return index
                //const result = Math.round((adj1 + diff) / (signwidth + restwidth / 2))
                //return result
                //if(result < 0) return -result
                //else return result
                //return  Math.round((adj1 + diff) / (signwidth + restwidth / 2))
            }

            /** @param {number|[number]} quadrant */
            function getQuadrantValueAsString(quadrant) {
                if (Array.isArray(quadrant)) return getQuadrantValueAsString(quadrant[0]) + "EX"
                if (randvalues[quadrant * 4] > 1431655765) {
                    if (randvalues[quadrant * 4] > 1431655765 * 2) return "2"
                    else return "X"
                } else return "1"
            }

            let resolvelocal
            (speed -= 0.000001 * randval[0]) > 0 ? adj1 += speed :
                !alreadyset && (alreadyset = true, promises.delete(promise),
                    promises.set(promise = new Promise(resolvearg => resolvelocal = resolvearg),
                        [canvasindex, /*{adj1, randvalues}*/getQuadrantValueAsString(getQuadrant())]),
                    resolve(), resolve = resolvelocal, speed = 0,
                    new Promise(async resolve => (await globalpromise, speed = speedmax, alreadyset = false, resolve())))

            device.defaultQueue.submit([commandEncoder.finish()])
        }
    }

}

window.onload = async () => {
    for (const [a] of new Array(4).entries())
        console.log([(a + 0) & 1, (a + 0) >> 1])

    const canvas = Array.from(document.getElementsByTagName('canvas'))

    const generateframefunction = await init(canvas)

    let resolve

    for (const i of canvas.keys()) {
        const frame = generateframefunction(i)
        let callback
        requestAnimationFrame(callback = async () =>
            (frame(), requestAnimationFrame(callback)))
    }

    for (; ;) {
        globalpromise = new Promise(resolvearg => resolve = resolvearg)
        const localpromises = Array.from(promises.keys())
        await Promise.all(localpromises)

        //window.alert(Array.from(promises.values()).join('\n')){

        /** @param {number|[number]} quadrant */
        function getQuadrantValueAsString(quadrant, randvalues) {
            if (Array.isArray(quadrant)) return getQuadrantValueAsString(quadrant[0], randvalues) + "EX"
            if (randvalues[quadrant * 4] > 1431655765) {
                if (randvalues[quadrant * 4] > 1431655765 * 2) return "2"
                else return "X"
            } else return "1"
        }


        //for (let a = -5; a <= 5; a += 1) {
          //  let array = []

            //const diff = 2.2
            /*const signwidth = 625 / 2144
            const restwidth = 1075 / 6432
            const centerrightside = 0.5 / 90, centerleftside = -0.5 / 90

            const randval = new Uint8Array(1)

            //for (const y of new Map(Array.from(promises.values()).sort((elem1, elem2) => elem1[0] - elem2[0])).values()) {
                /*let index
                for (const i of new Array(6).keys())
                    if (centerleftside >= -0.5 + (i / 3 - 1) * 2.2 + y.adj1)
                        if (centerrightside <= 0.5 + (i / 3 - 1) * 2.2 + y.adj1)
                            if (!index) index = i
                            else if (!Array.isArray(index)) index = (crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i : i - 1])
                            else console.log("broken alg")*/
            /*let index
            for (let adj2 = -diff, i = 0; adj2 < 2 * diff; adj2 += signwidth + restwidth / 2, ++i)
                if (centerleftside >= y.adj1)
                    if (centerrightside <= y.adj1 + signwidth + restwidth / 2)
                        if (index === undefined) index = i
                        else if (!Array.isArray(index)) index = (crypto.getRandomValues(randval), [(randval[0] + 1) > 128 ? i : i - 1])
                        else throw "broken alg"
            // const index = Math.round((adj1 + diff) / (signwidth + restwidth / 2))
            array += getQuadrantValueAsString(index, y.randvalues)
        }
        //array += getQuadrantValueAsString(Math.round((y.adj1 + 0.73) / 2.2), y.randvalues)

        console.log("a = " + a + " " + array)*/

            console.log(Array.from(new Map(Array.from(promises.values()).sort((elem1, elem2) => elem1[0] - elem2[0])).values()))
        //}

        setTimeout(resolve, 60000)

        //resolve()

        //resolve()
        //globalpromise = new Promise(resolvearg => resolve = resolvearg)
    }
}