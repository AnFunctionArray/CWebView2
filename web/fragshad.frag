#version 450
layout(set = 0, binding = 1) uniform sampler mySampler;
layout(set = 0, binding = 2) uniform texture2D onetexture;
layout(set = 0, binding = 3) uniform texture2D twotexture;
layout(set = 0, binding = 4) uniform texture2D xtexture;
layout(set = 0, binding = 5) uniform texture2D shiptexture;

layout(location = 0) in vec2 fragUV;
layout(location = 1) in vec4 fragPosition;
layout(location = 2) flat in uint rand;
layout(location = 3) flat in uint iscursor;
layout(location = 0) out vec4 outColor;

void main() {
    if (iscursor != 6)
    {
        //if(iscursor == 4)
        if (rand > 1431655765) {
                if (rand > 1431655765 * 2) outColor = texture(sampler2D(twotexture, mySampler), fragUV);
            else outColor = texture(sampler2D(xtexture, mySampler), fragUV);
        }
        else outColor = texture(sampler2D(onetexture, mySampler), fragUV);
        //else outColor = vec4(0.5, 0.5, 0.5, 1);

        /*switch(iscursor)
        {
            case 0:
            outColor = vec4(0, 0, 0, 0.4); //black
            break;
            case 1:
            outColor = vec4(1,	1,	1, 0.4); //white
            break;
            case 2:
            outColor = vec4(0, 1.0, 0, 0.4); //green
            break;
            case 3:
            outColor = vec4(1.0, 0, 0, 0.4); //red
            break;
            case 4:
            outColor = vec4(0,	1.00,	1, 0.4); // lighter blue
            break;
            case 5:
            outColor = vec4(0, 0, 1.0, 0.4); //blue
        }

        //outColor = vec4(0.1 * (iscursor + 1), 0.0, 0.0, 0.4);

        /*if(iscursor % 2 != 0)*/ outColor.a = 1.0;
    }
    else outColor =  vec4(1.0, 0.0, 0.0, 0.4); //* fragPosition;
}
