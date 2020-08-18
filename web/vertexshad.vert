#version 450
layout(set = 0, binding = 0) uniform UniformsValues {
    uvec4 values[6];
} values;
layout(set = 0, binding = 6) uniform UniformsAdjust {
    float adj1;
} adj1;

//layout(location = 0) in vec4 position;
//layout(location = 1) in vec2 uv;

layout(location = 0) out vec2 fragUV;
layout(location = 1) out vec4 fragPosition;
layout(location = 2) out uint rand;
layout(location = 3) out uint iscursor;

void main() {
    uint originalI = gl_VertexIndex / 6;
    const float diff = 2.2;
    const int vI =  gl_VertexIndex % 6;
    //const bool drawcursor = originalI < 1;
    //if(!drawcursor) --originalI;
    fragUV = vI != 3 ? vec2((vI > 2 ? vI - 3 : vI)&1, (vI > 2 ? vI - 3 : vI)>>1) : vec2(1,1);
    /*if (vI < 3)
        fragUV = vec2(vI&1, vI>>1);
    else switch(vI - 3) {
        case 0:
        fragUV = vec2(1,1);
        break;
        case 1:
        fragUV = vec2((vI-3)&1, (vI-3)>>1);
        break;
        case 2:
        fragUV = vec2((vI-3)&1, (vI-3)>>1);
        break;
    }*/

    float floatbackground;
    //fragPosition = vec4((fragUV.x - 0.5f), -(fragUV.y - 0.5f), 0, 1);
    /*if (originalI < 3) {
        if (originalI < 1) floatbackground = adj1.adj1 - diff;
        else if (originalI > 1) floatbackground = (diff / 3) * 2 + adj1.adj1 - diff;
        else floatbackground = (diff / 3) * 1 + adj1.adj1 - diff;
    }
    else {
        if (originalI < 1 + 3) floatbackground = adj1.adj1;
        else if (originalI > 1 + 3) floatbackground = (diff / 3) * 2 + adj1.adj1;
        else floatbackground = (diff / 3) * 1 + adj1.adj1;
    }*/

    if (originalI >= 6)
        gl_Position = vec4((fragUV.x - 0.5) / 90, -(fragUV.y - 0.5) * 2, 0, 1),
        iscursor = originalI;
    else
        gl_Position = vec4((fragUV.x - 0.5) + (float(originalI) / 3 - 1) * diff + adj1.adj1, -(fragUV.y - 0.5) * 2, 0, 1),
        iscursor = originalI, rand = values.values[originalI].x;
}
