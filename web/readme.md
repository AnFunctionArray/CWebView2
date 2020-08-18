# Project WebGPU
It's an experimental WebGPU project that uses shaders to display scrolling images (3) simulating case opening.

The results of each iteration are displayed in the console.

Use `npm i` to install required packages.

Launch a web server (with configured `application/wasm` response for wasm files) at current directory.

Don't forget to enable unsafe WebGPU in latest chrome (or ideally Chrome - Canary) release ([chrome://flags/#enable-unsafe-webgpu](chrome://flags/#enable-unsafe-webgpu) - I think you would have to manually copy this URI in your browser).

