#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF



typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;



#endif

#define STB_FONT_consolas_12_usascii_BITMAP_WIDTH         128
#define STB_FONT_consolas_12_usascii_BITMAP_HEIGHT         54
#define STB_FONT_consolas_12_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_consolas_12_usascii_FIRST_CHAR            32
#define STB_FONT_consolas_12_usascii_NUM_CHARS             95

#define STB_FONT_consolas_12_usascii_LINE_SPACING           8

static unsigned int stb__consolas_12_usascii_pixels[]={
    0x2a206671,0x300a881a,0x260700c4,0x00315540,0x03dc8822,0x0880006e,
    0x82209811,0x06620301,0x511326b1,0x80bf8899,0x3203a27a,0xf265ec44,
    0x6400ec55,0x11366fa2,0x7f541bd7,0x26aa5403,0x10e88ecb,0x970785fb,
    0xa834588f,0x50202544,0x20e8698d,0x80950f0d,0x0f896a68,0x7c15d7d1,
    0x9a540688,0x0b2ae366,0x3c0787e2,0x12a0f162,0x0bddb095,0x4ea16c3b,
    0x3a0f2baa,0x43c8ee00,0x3a1ad31e,0xefd985b9,0x56edcd34,0xeaf87604,
    0xd1623c0e,0x02b89501,0x7c4ee1e2,0x575ece40,0xe80ee0f3,0x6c3d0f20,
    0xd04fb86e,0x4234d2a5,0x7c6c980e,0x2c478b54,0x74950fa6,0xacc3c405,
    0xd8d8e869,0x41a20f3a,0x03e25c4a,0x33a63df7,0x4a9a678d,0x835590b3,
    0xf1a2783c,0x540ec588,0x0f1016c4,0x2ba1e2b5,0x40f2acac,0x7cc1d82c,
    0xb5750b70,0xb52eecf2,0x6cc48a54,0x206e1ecb,0x588f1a27,0x1d44a83c,
    0x74970f10,0x6e66cf40,0x222cc0f0,0x41bdf706,0x532b7570,0x223e23f8,
    0xd8e8514e,0x9e0262b8,0xf1623c4b,0x409512a0,0x0f21e878,0x3c373739,
    0x202c8360,0xdffe9868,0x3f9fdd10,0x7aa5f7e4,0xd06f54ae,0x21bddd07,
    0x8b14efed,0x04a89507,0xe88b71a6,0x40780aa0,0x3f201a4a,0x00006c2e,
    0x00000000,0x889b3588,0x10be84ca,0x074c5d77,0x9599134c,0x08202af8,
    0x00014000,0x00000000,0x22066b10,0x541301aa,0x2020081a,0x015540a9,
    0x93000000,0x00000099,0x01440000,0x00000000,0x00000000,0x00333100,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40c09003,
    0x3bbb6601,0x12543300,0x24eed88b,0x3220eead,0x06665c3d,0x2e207b91,
    0x82f7221c,0x16e540fa,0x32e3bb91,0x7801f0cc,0x7c0f0f70,0x99d105b0,
    0x225c3e21,0xaa7c952e,0xe9366fa5,0x6cd7419a,0xf04df4c3,0x22cc9915,
    0x2fe299dc,0x1f331099,0x77f5c03e,0xf03c043e,0x40ee0b21,0x534c3b3c,
    0x96ad13c9,0x96603a78,0x0f80746a,0x983c4097,0x21f0f807,0x5ec8783c,
    0x3a0dfbf8,0x205905ee,0x52d468e9,0x0f2d33c9,0xa8733a3d,0x5f44fb94,
    0x373aa0cc,0xed816a00,0x647c3e02,0x7c3c0f04,0x403a2793,0xe85eefea,
    0x4e8b443d,0xe8794c9e,0x2e5d7311,0x4f4cf3ed,0x3b7a65b9,0x405a96a0,
    0xf0f80eda,0x0f03c099,0xfddd254f,0x7dc05907,0x24bcec80,0x8970deef,
    0x3f54b80f,0x5e2689e2,0x7ccb70f8,0x16e00f11,0x80757c3e,0x54f0f01e,
    0x643c4b54,0x2a012e02,0xb874c1e4,0x43e25b05,0x35a87c4b,0x41f1354d,
    0x56e010cd,0x35c7cf30,0x43c4eea8,0x55fcd2a7,0xc982c85c,0x1e4a800e,
    0x360defb8,0x6f7543ee,0x90777540,0x076a3ddd,0x3e69dd71,0x5fdd0dee,
    0xb005c87c,0x953c9dfd,0x2c80d544,0x86200298,0x00020002,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x951214c0,0x116edc7b,
    0x8e679999,0x43706e48,0x506e2dc9,0xa81502a3,0x3383220c,0x999324c9,
    0x4c552479,0x3324cccc,0x248532cc,0x33bb3c4a,0x30fcccc7,0xc8f49b33,
    0x64699aa3,0xe8991e99,0x361c8390,0x693e60fd,0x989f63f5,0x22f15b99,
    0x27aa620e,0x5427aa61,0xbc4a9e25,0x303b0069,0x434f541d,0x9e405b2d,
    0x42c9a669,0xb307c61d,0x4665da1d,0x7c47606d,0x20d301e8,0x4f12d469,
    0x314bbc4a,0x3d04ba83,0x3d303fb0,0x47a1e80d,0x6da6ae3b,0x33260f80,
    0x2afaaed3,0x3e26980e,0x4c1a602d,0x3dd57546,0x2a797895,0x20f6547c,
    0x203f904b,0x913201fc,0xecbb83a7,0x64c1f069,0xd75768e8,0xf88b603a,
    0x4c1a602e,0x3dd57546,0x24bbc4b5,0x74cb5078,0x306ae980,0x74c2dc0d,
    0x5d75d468,0xca4c1f06,0x3651596b,0x23e234c0,0x260d301e,0x44f12d46,
    0x88fc56e6,0x81747907,0x0d307b2e,0x43ce816e,0xf06e8cea,0x96e8a4c1,
    0x216c1d85,0xd301d578,0x44b51a60,0x307775c7,0x7774bddd,0x5ffffea4,
    0xd303e25c,0x8dffff10,0xd8fcc0fc,0x9b7fffc6,0x360edb64,0xc9e21a61,
    0xfed86985,0x03c4b53e,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x32000000,0x6665c2cc,0x26599972,
    0x054e02cc,0x32a0b332,0x33212a00,0x06a0222c,0x83016e44,0x1d50deeb,
    0x3206f6c4,0x37ba62ee,0x22ea9f80,0x35d099ad,0x3aa76a13,0x9f81b582,
    0x8176c2d9,0xea9f87e9,0x82c81d54,0xb82d89e8,0xb33c820e,0x264970e8,
    0x42dc3a21,0xe81d8f27,0xa9264a81,0x9e1efefe,0x416ba24b,0x9a67879e,
    0x2a0b21e9,0x20b916a5,0x5d304cb9,0x5407cd75,0x754fc3c4,0x74266b61,
    0x78950aab,0xbaf86a4c,0x207d2e0d,0x2dcf0f3b,0x4c164ba2,0xb04d9a66,
    0x3a609957,0x203a2aaa,0x767c3c4a,0xe8e66ec2,0xf8950aab,0x57c34ea0,
    0x16c762ec,0x767c3cd1,0x2c87540e,0x54bbdd90,0x2993440e,0x6407e249,
    0x0b50e883,0xd03b1a6f,0x93d49503,0x278dfddd,0xbd99f169,0x067e66ec,
    0xc8b9013f,0x74c4a802,0xba6776c1,0x8f7bea0f,0x3ae2eec8,0x8b6780de,
    0x4a81e81d,0x499c87d3,0x56dd6e78,0x75530faa,0x4b83c15f,0x074c02c8,
    0x20000744,0x27800000,0x3ba07669,0x7dff52ee,0xdf093390,0x5b0761bf,
    0x9001e1e0,0x6f6c9ddd,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xdb300000,0x6c95341d,0x5d750deb,0x4950609b,0x43907268,
    0x1d12eeee,0x1ed9c96a,0x225a8498,0x2313cccc,0x4c098318,0x0b10b501,
    0x24a9e03b,0x276e793f,0x2148468f,0x32c92a78,0xb83a2036,0x23760e8d,
    0x542cd859,0x4266660f,0x88f1b569,0x3a9bd51d,0x85881f90,0x953c0aeb,
    0x22ee953c,0x1ddcb8d5,0x5770f4b6,0x6c0f41af,0xa850ec2e,0x322688d3,
    0x2ad33ccc,0x46a1078d,0x372a04fb,0x0fe4c4cf,0xa54f254f,0xc88d58ab,
    0x2346cc3e,0xc869ccca,0x0d83f903,0x3b74a960,0x51199998,0x00001462,
    0x4067aa62,0xf26c3a3c,0xd58aba54,0x7419c8b8,0x6ceec43c,0x9da82d45,
    0x0000360e,0xbb800000,0x4401bbbb,0x20eeee85,0xa9e4beeb,0x41ab1574,
    0x7f01f703,0x9dddf13a,0x1b2dc3a6,0x00000000,0x55555540,0x0881c401,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_12_usascii_x[95]={ 0,2,1,0,0,0,0,2,1,1,0,0,1,1,
2,0,0,0,0,0,0,1,0,0,0,0,2,1,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,2,1,0, };
static signed short stb__consolas_12_usascii_y[95]={ 8,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,1,6,4,
6,-1,0,0,0,0,0,0,0,0,0,0,2,2,1,3,1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,9,-1,2,-1,2,-1,2,-1,2,-1,-1,
-1,-1,-1,2,2,2,2,2,2,2,0,2,2,2,2,2,2,-1,-2,-1,3, };
static unsigned short stb__consolas_12_usascii_w[95]={ 0,3,5,7,6,7,7,2,5,4,6,7,4,5,
3,6,7,6,6,6,7,5,6,6,6,6,3,4,6,6,5,5,7,7,6,6,7,5,5,6,6,5,5,7,
5,7,6,7,6,7,7,6,7,6,7,7,7,7,6,3,6,4,6,7,4,6,6,6,6,6,7,7,6,5,
6,6,5,7,6,7,6,6,6,5,6,6,7,7,7,7,6,6,2,5,7, };
static unsigned short stb__consolas_12_usascii_h[95]={ 0,10,4,8,11,10,10,4,12,12,6,7,5,2,
3,11,9,8,8,9,8,9,9,8,9,8,7,9,8,4,8,10,12,8,8,9,8,8,8,9,8,8,9,8,
8,8,8,9,8,11,8,9,8,9,8,8,8,8,8,12,11,12,5,2,4,7,10,7,10,7,9,9,9,9,
12,9,9,6,6,7,9,9,6,7,9,7,6,6,6,9,6,12,13,12,3, };
static unsigned short stb__consolas_12_usascii_s[95]={ 127,96,104,29,74,100,81,101,34,29,37,
1,89,81,123,59,80,68,45,15,52,74,88,90,95,79,100,102,86,94,67,
108,40,44,37,107,21,15,9,8,119,113,121,97,73,82,75,66,60,66,1,
114,105,1,52,60,29,37,22,48,52,10,82,115,110,93,114,111,89,104,36,
28,21,15,22,1,121,29,22,118,59,52,75,9,8,15,44,52,67,44,60,
15,1,4,115, };
static unsigned short stb__consolas_12_usascii_t[95]={ 1,1,44,35,1,1,1,44,1,1,44,
44,44,12,44,1,15,25,25,25,35,15,15,25,15,35,35,15,35,44,35,
1,1,35,35,15,35,35,35,25,25,25,15,25,35,25,25,15,35,1,35,
15,25,25,25,25,25,25,25,1,1,1,44,48,44,35,1,35,1,35,15,
15,15,15,1,15,1,44,44,35,15,15,44,44,15,44,44,44,44,15,44,
1,1,1,44, };
static unsigned short stb__consolas_12_usascii_a[95]={ 106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_12_usascii_BITMAP_HEIGHT or STB_FONT_consolas_12_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_12_usascii(stb_fontchar font[STB_FONT_consolas_12_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_12_usascii_BITMAP_HEIGHT][STB_FONT_consolas_12_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_12_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_12_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_12_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_12_usascii_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_consolas_12_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_12_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_12_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_12_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_12_usascii_s[i] + stb__consolas_12_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_12_usascii_t[i] + stb__consolas_12_usascii_h[i]) * recip_height;
            font[i].x0 = stb__consolas_12_usascii_x[i];
            font[i].y0 = stb__consolas_12_usascii_y[i];
            font[i].x1 = stb__consolas_12_usascii_x[i] + stb__consolas_12_usascii_w[i];
            font[i].y1 = stb__consolas_12_usascii_y[i] + stb__consolas_12_usascii_h[i];
            font[i].advance_int = (stb__consolas_12_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_12_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_12_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_12_usascii_s[i] + stb__consolas_12_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_12_usascii_t[i] + stb__consolas_12_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_12_usascii_x[i] - 0.5f;
            font[i].y0f = stb__consolas_12_usascii_y[i] - 0.5f;
            font[i].x1f = stb__consolas_12_usascii_x[i] + stb__consolas_12_usascii_w[i] + 0.5f;
            font[i].y1f = stb__consolas_12_usascii_y[i] + stb__consolas_12_usascii_h[i] + 0.5f;

            font[i].advance = stb__consolas_12_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_12_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_12_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_12_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_12_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_12_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_12_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_12_usascii_LINE_SPACING
#endif

// ---------------------------------------------------------
#ifndef JADI_FONT_H
#include <jadi/Utils.h>
#include <jadi/GL.h>
#include <string>

static const char* FONT_VS = GLSL(120, 
  uniform mat4 u_pm;
  attribute vec4 a_pos;
  attribute vec2 a_tex;
  varying vec2 v_tex; 
  void main() {
    gl_Position = u_pm * a_pos; // vec4(a_pos.x, a_pos.y, 0.5, 1.0);
    v_tex = a_tex;
  }
);

static const char* FONT_FS = GLSL(120, 
  uniform sampler2D u_tex;
  uniform vec3 u_col;
  varying vec2 v_tex; 
  void main() {
    vec4 col = texture2D(u_tex, v_tex);
    gl_FragColor.rgb = u_col;
    gl_FragColor.a = 1.0 * col.a;
  }
);

struct Font {
  void init();
  
  GLuint vao;
  GLuint vbo;
  GLuint prog;
  GLuint tex;
  GLint u_pm;
  GLint u_tex;
  GLint u_col;
  size_t allocated;
  size_t num_vertices;
  stb_fontchar fontdata[STB_SOMEFONT_NUM_CHARS];
  unsigned char pixels[STB_SOMEFONT_BITMAP_HEIGHT][STB_SOMEFONT_BITMAP_WIDTH];
  float* buffer;
  float pm[16];
};

inline void Font::init() {
  STB_SOMEFONT_CREATE(fontdata, pixels, STB_SOMEFONT_BITMAP_HEIGHT);

  // Texture
  glGenTextures(1, &tex);
  glBindTexture(GL_TEXTURE_2D, tex);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, STB_SOMEFONT_BITMAP_WIDTH, STB_SOMEFONT_BITMAP_HEIGHT, 0, GL_ALPHA, GL_UNSIGNED_BYTE, pixels);

  // Shader 
  GLuint vert_id = glCreateShader(GL_VERTEX_SHADER);
  GLuint frag_id = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(vert_id, 1, &FONT_VS, NULL);
  glShaderSource(frag_id, 1, &FONT_FS, NULL);
  glCompileShader(vert_id); eglGetShaderInfoLog(vert_id);
  glCompileShader(frag_id); eglGetShaderInfoLog(frag_id);
  prog = glCreateProgram();
  glAttachShader(prog, vert_id);
  glAttachShader(prog, frag_id);
  glLinkProgram(prog);
  glUseProgram(prog);

  u_pm = glGetUniformLocation(prog, "u_pm");
  u_tex = glGetUniformLocation(prog, "u_tex");
  u_col = glGetUniformLocation(prog, "u_col");

  // vao
  glGenVertexArrays(1, &vao);
  glBindVertexArray(vao);
  
  glGenBuffers(1, &vbo);
  glBindBuffer(GL_ARRAY_BUFFER, vbo);

  glEnableVertexAttribArray(glGetAttribLocation(prog, "a_pos"));
  glEnableVertexAttribArray(glGetAttribLocation(prog, "a_tex"));
  glVertexAttribPointer(glGetAttribLocation(prog, "a_pos"), 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (GLvoid*)0);
  glVertexAttribPointer(glGetAttribLocation(prog, "a_tex"), 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (GLvoid*)8);

  // ortho pm
  float n = 0.0;
  float f = 1.0;
  float ww = 1024.0f;
  float hh = 768.0f;
  float fmn = f - n;
  pm[1]  = 0.0f;
  pm[2]  = 0.0f;
  pm[3]  = 0.0f;
  pm[4]  = 0.0f;
  pm[6]  = 0.0f;
  pm[7]  = 0.0f;
  pm[8]  = 0.0f;
  pm[9]  = 0.0f;
  pm[11] = 0.0f;
  pm[15] = 1.0f;
  pm[0]  = 2.0f / ww;
  pm[5]  = 2.0f / -hh;
  pm[10] = -2.0f / fmn;
  pm[12] = -(ww)/ww;
  pm[13] = -(hh)/-hh;
  pm[14] = -(f+n)/fmn;
}

extern Font jadi_font;

static void draw_string(const std::string& str, float x, float y, float r = 1.0, float g = 1.0, float b = 1.0) {
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  
  // to allocate
  size_t to_allocate = str.size() * sizeof(float) * 4 * 6; // 4-floats per vertex, 6 floats (two tris) per char
  if(to_allocate > jadi_font.allocated) {
    while(jadi_font.allocated < to_allocate) {
      jadi_font.allocated = std::max<size_t>(jadi_font.allocated * 2, 4096);
    }
    glBindVertexArray(jadi_font.vao);
    glBindBuffer(GL_ARRAY_BUFFER, jadi_font.vbo);
    glBufferData(GL_ARRAY_BUFFER, jadi_font.allocated, NULL, GL_DYNAMIC_DRAW);

    delete[] jadi_font.buffer; 
    jadi_font.buffer = new float[jadi_font.allocated];
  }

  size_t floats_per_vertex = 4; // 2-xy, 2-st
  size_t num_vertices = str.size() * floats_per_vertex * 6;
  size_t dx = 0;
  const char* ptr = str.c_str();
  for(int i = 0; i < str.size(); ++i) {
    int c = str[i];
    int dd = c - STB_SOMEFONT_FIRST_CHAR;

    stb_fontchar* cd = &jadi_font.fontdata[c - STB_SOMEFONT_FIRST_CHAR];
    if(str[i] == ' ') {
      x += 5;
      continue;
    }

    jadi_font.buffer[dx++] = x + cd->x0f;
    jadi_font.buffer[dx++] = y + cd->y1f;
    jadi_font.buffer[dx++] = cd->s0f;
    jadi_font.buffer[dx++] = cd->t1f;

    jadi_font.buffer[dx++] = x + cd->x1f;
    jadi_font.buffer[dx++] = y + cd->y1f;
    jadi_font.buffer[dx++] = cd->s1f;
    jadi_font.buffer[dx++] = cd->t1f;

    jadi_font.buffer[dx++] = x + cd->x1f;
    jadi_font.buffer[dx++] = y + cd->y0f;
    jadi_font.buffer[dx++] = cd->s1f;
    jadi_font.buffer[dx++] = cd->t0f;

    // --
    jadi_font.buffer[dx++] = x + cd->x0f;
    jadi_font.buffer[dx++] = y + cd->y1f;
    jadi_font.buffer[dx++] = cd->s0f;
    jadi_font.buffer[dx++] = cd->t1f;

    jadi_font.buffer[dx++] = x + cd->x1f;
    jadi_font.buffer[dx++] = y + cd->y0f;
    jadi_font.buffer[dx++] = cd->s1f;
    jadi_font.buffer[dx++] = cd->t0f;

    jadi_font.buffer[dx++] = x + cd->x0f;
    jadi_font.buffer[dx++] = y + cd->y0f;
    jadi_font.buffer[dx++] = cd->s0f;
    jadi_font.buffer[dx++] = cd->t0f;
    x += cd->x1f;
  }

  glUseProgram(jadi_font.prog);
  glBindVertexArray(jadi_font.vao);

  // @todo WHY DOES glBufferSubData NOT WORK???? (ATI CARD?)
  glBindBuffer(GL_ARRAY_BUFFER, jadi_font.vbo);
  glBufferData(GL_ARRAY_BUFFER, dx * sizeof(float), jadi_font.buffer, GL_DYNAMIC_DRAW);
  glEnableVertexAttribArray(glGetAttribLocation(jadi_font.prog, "a_pos"));
  glEnableVertexAttribArray(glGetAttribLocation(jadi_font.prog, "a_tex"));
  glVertexAttribPointer(glGetAttribLocation(jadi_font.prog, "a_pos"), 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (GLvoid*)0);
  glVertexAttribPointer(glGetAttribLocation(jadi_font.prog, "a_tex"), 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (GLvoid*)8);
  
  float col[3] = {r,g,b};
  glUniform3fv(jadi_font.u_col, 1, col);

  glActiveTexture(GL_TEXTURE0);
  glBindTexture(GL_TEXTURE_2D, jadi_font.tex);
  glUniform1i(jadi_font.u_tex, 0);
  
  glUniformMatrix4fv(jadi_font.u_pm, 1, GL_FALSE, jadi_font.pm);
  glDrawArrays(GL_TRIANGLES, 0, num_vertices);
}


#endif
