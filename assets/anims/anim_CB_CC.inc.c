#include "animation_table.h"

const u16 anim_CB_CC_indices[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0001, 0x0003, 0x0001, 0x0000,
    0x0011, 0x0280, 0x0011, 0x0291, 0x0011, 0x02A2,
    0x0011, 0x024D, 0x0011, 0x025E, 0x0011, 0x026F,
    0x0011, 0x021A, 0x0011, 0x022B, 0x0011, 0x023C,
    0x0011, 0x01E4, 0x0011, 0x01F5, 0x0011, 0x0206,
    0x0011, 0x0048, 0x0011, 0x0059, 0x0011, 0x006A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0011, 0x0037,
    0x0011, 0x0004, 0x0011, 0x0015, 0x0011, 0x0026,
    0x0001, 0x01E0, 0x0001, 0x01E1, 0x0001, 0x01E2,
    0x0011, 0x00BF, 0x0011, 0x00D0, 0x0011, 0x00E1,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0011, 0x00AE,
    0x0011, 0x007B, 0x0011, 0x008C, 0x0011, 0x009D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x01E3,
    0x0011, 0x01AD, 0x0011, 0x01BE, 0x0011, 0x01CF,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0011, 0x019C,
    0x0011, 0x0169, 0x0011, 0x017A, 0x0011, 0x018B,
    0x0001, 0x0217, 0x0001, 0x0218, 0x0001, 0x0219,
    0x0011, 0x0136, 0x0011, 0x0147, 0x0011, 0x0158,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0011, 0x0125,
    0x0011, 0x00F2, 0x0011, 0x0103, 0x0011, 0x0114
};

const s16 anim_CB_CC_values[] = {
    0x0000, 0x00C3, 0xFFBD, 0x3FFF, 0x1292, 0x12A8, 0x12DE, 0x1321,
    0x135D, 0x1380, 0x1377, 0x132E, 0x1292, 0x116A, 0x0FB0, 0x0D9D,
    0x0B6A, 0x0951, 0x078A, 0x064F, 0x05DA, 0x0362, 0x037C, 0x03BB,
    0x0409, 0x0450, 0x0479, 0x046E, 0x0418, 0x0362, 0x0207, 0x0001,
    0xFD94, 0xFB01, 0xF88B, 0xF676, 0xF505, 0xF47B, 0xDC1E, 0xDC2B,
    0xDC4A, 0xDC6F, 0xDC92, 0xDCA5, 0xDCA0, 0xDC77, 0xDC1E, 0xDB77,
    0xDA7D, 0xD950, 0xD811, 0xD6E1, 0xD5DF, 0xD52D, 0xD4EA, 0xF163,
    0xF0C6, 0xEF1D, 0xECAC, 0xE9B9, 0xE689, 0xE361, 0xE086, 0xDE3D,
    0xDC49, 0xDA4F, 0xD864, 0xD6A0, 0xD519, 0xD3E6, 0xD31D, 0xD2D5,
    0x2209, 0x2210, 0x2221, 0x2236, 0x2249, 0x2254, 0x2251, 0x223A,
    0x2209, 0x21AB, 0x2120, 0x2078, 0x1FC7, 0x1F1D, 0x1E8E, 0x1E2A,
    0x1E05, 0x065B, 0x0683, 0x06E5, 0x075E, 0x07CC, 0x080C, 0x07FA,
    0x0776, 0x065B, 0x0442, 0x0120, 0xFD5E, 0xF961, 0xF592, 0xF259,
    0xF01E, 0xEF48, 0x86DD, 0x86D2, 0x86B8, 0x8699, 0x867C, 0x866B,
    0x866F, 0x8692, 0x86DD, 0x876A, 0x883E, 0x893C, 0x8A49, 0x8B4A,
    0x8C23, 0x8CBA, 0x8CF2, 0xE2F8, 0xE323, 0xE36C, 0xE37A, 0xE2F8,
    0xE12D, 0xDE7D, 0xDC3C, 0xDBBE, 0xDD1E, 0xDF5D, 0xE229, 0xE52D,
    0xE817, 0xEA92, 0xEC4D, 0xECF3, 0x147F, 0x1500, 0x15D6, 0x1601,
    0x147F, 0x0FED, 0x0933, 0x02C3, 0xFF11, 0xFE0A, 0xFDDA, 0xFE4A,
    0xFF23, 0x002B, 0x012E, 0x01F2, 0x023F, 0xDCAB, 0xDC50, 0xDBB8,
    0xDB9A, 0xDCAB, 0xE004, 0xE4F8, 0xE98E, 0xEBD1, 0xEBBB, 0xEAC6,
    0xE938, 0xE756, 0xE566, 0xE3AD, 0xE271, 0xE1F9, 0xD87F, 0xD57D,
    0xCF52, 0xCA47, 0xCAA1, 0xD49C, 0xE4E8, 0xF47E, 0xFC56, 0xFC4A,
    0xF975, 0xF4B5, 0xEEE4, 0xE8DF, 0xE382, 0xDFA9, 0xDE30, 0x464D,
    0x4509, 0x421F, 0x3EE7, 0x3CB8, 0x3C3D, 0x3CA4, 0x3D09, 0x3C89,
    0x3AF3, 0x38D5, 0x366A, 0x33EB, 0x3195, 0x2FA1, 0x2E4A, 0x2DCA,
    0x27A4, 0x21A4, 0x141D, 0x05C6, 0xFD55, 0xFD7E, 0x025E, 0x08C9,
    0x0D92, 0x1099, 0x13C1, 0x16E0, 0x19CC, 0x1C5B, 0x1E63, 0x1FBA,
    0x2036, 0xD360, 0xD358, 0xD340, 0xD319, 0xD2E4, 0xD222, 0xD0FD,
    0xD075, 0xD18B, 0xD475, 0xD871, 0xDD0C, 0xE1D3, 0xE652, 0xEA17,
    0xECAF, 0xEDA6, 0xEACE, 0xEBF5, 0xEED1, 0xF27A, 0xF60C, 0xF8A0,
    0xF97F, 0xF946, 0xF90F, 0xF933, 0xF952, 0xF971, 0xF997, 0xF9CA,
    0xFA0F, 0xFAE6, 0xFB94, 0x023F, 0x01D4, 0x00CF, 0xFF8F, 0xFE6D,
    0xFDC7, 0xFE40, 0xFF65, 0xFFF4, 0xFFB1, 0xFF3F, 0xFEA7, 0xFDF4,
    0xFD30, 0xFC67, 0xFAD9, 0xF9B0, 0xB9FE, 0xBC20, 0xC181, 0xC89A,
    0xCFE4, 0xD5D8, 0xDAEC, 0xDF1D, 0xE02A, 0xDE53, 0xDB7C, 0xD7DB,
    0xD3A9, 0xCF1C, 0xCA6C, 0xC162, 0xBAB0, 0x5EA1, 0x54DA, 0x3E60,
    0x257D, 0x147A, 0x0E1D, 0x0CE5, 0x0EB8, 0x1178, 0x1566, 0x1B52,
    0x21F7, 0x2812, 0x2C5D, 0x2D95, 0x1C5D, 0x0B84, 0x0B6D, 0x0BA4,
    0x0C33, 0x0CF7, 0x0DD1, 0x0E9F, 0x0FE9, 0x114E, 0x114F, 0x0F96,
    0x0D17, 0x0A3F, 0x077B, 0x0536, 0x03DD, 0x076E, 0x0B5D, 0x01E2,
    0x020F, 0x0283, 0x0322, 0x03CE, 0x046B, 0x0503, 0x05A6, 0x063E,
    0x06E2, 0x07A4, 0x0863, 0x08FE, 0x0955, 0x0945, 0x0679, 0x03D3,
    0x9CFC, 0x9F6D, 0xA5A7, 0xAE03, 0xB6D9, 0xBE83, 0xC67C, 0xCE42,
    0xD134, 0xCEAE, 0xC9DC, 0xC3D5, 0xBDAF, 0xB880, 0xB55E, 0xBBDD,
    0xC33B, 0xF4EA, 0xF573, 0xF6B5, 0xF829, 0xF948, 0xFA19, 0xFAF8,
    0xFBDF, 0xFCC8, 0xFDAC, 0xFE86, 0xFF4F, 0x0000, 0x0095, 0x0107,
    0x0150, 0x016A, 0xF1ED, 0xF2F5, 0xF541, 0xF79F, 0xF8DC, 0xF90B,
    0xF90E, 0xF8ED, 0xF8B1, 0xF85F, 0xF801, 0xF79C, 0xF739, 0xF6DF,
    0xF696, 0xF664, 0xF652, 0xD482, 0xD5F2, 0xD8ED, 0xDB6F, 0xDB76,
    0xD927, 0xD61C, 0xD281, 0xCE86, 0xCA57, 0xC622, 0xC215, 0xBE5E,
    0xBB2B, 0xB8A9, 0xB706, 0xB671, 0x1FFC, 0x2678, 0x34F5, 0x4403,
    0x4C30, 0x4DEB, 0x4EB6, 0x4EB7, 0x4E14, 0x4CF4, 0x4B7E, 0x49D7,
    0x4827, 0x4694, 0x4544, 0x445F, 0x440A, 0x0C64, 0x0B07, 0x079B,
    0x0321, 0xFE9B, 0xFB06, 0xF96A, 0xF8FB, 0xF88F, 0xF825, 0xF7BF,
    0xF760, 0xF70D, 0xF6C6, 0xF690, 0xF66E, 0xF662, 0x089E, 0x07FC,
    0x0664, 0x0447, 0x0217, 0x0046, 0xFF3E, 0xFE42, 0xFCB6, 0xFAEB,
    0xF8FD, 0xF70B, 0xF532, 0xF38F, 0xF23F, 0xF160, 0xF10F, 0xBD10,
    0xB86B, 0xACD9, 0x9DE1, 0x8F0E, 0x83E9, 0x81F0, 0x8428, 0x8474,
    0x84CE, 0x852F, 0x8592, 0x85F1, 0x8646, 0x8689, 0x86B6, 0x86C7,
    0x7FFF, 0x7FFF, 0x4171, 0xBF62, 0x7FFF, 0x7FFF, 0x8000, 0x8002,
    0x8004, 0x8006, 0x8008, 0x8009, 0x800A, 0x800B, 0x800B, 0x800B,
    0x800B, 0x800B, 0x800B, 0x800B, 0x800A, 0x7FFF, 0x7CDC, 0x7478,
    0x685A, 0x5A07, 0x4B07, 0x3CE0, 0x3118, 0x2936, 0x250F, 0x231C,
    0x22DB, 0x23CA, 0x2566, 0x272E, 0x289F, 0x2936, 0x4171, 0x4172,
    0x4177, 0x417E, 0x4185, 0x418D, 0x4195, 0x419C, 0x41A0, 0x41A2,
    0x41A3, 0x41A3, 0x41A3, 0x41A2, 0x41A1, 0x41A0, 0x41A0, 0xFCC9,
    0x054B, 0xB893, 0x1DE4, 0x1D1E, 0x1B13, 0x1830, 0x14E1, 0x1194,
    0x0EB4, 0x0CAF, 0x0B54, 0x0A2A, 0x092F, 0x0860, 0x07BB, 0x073E,
    0x06E8, 0x06B6, 0x06A6, 0x0F0A, 0x0E4F, 0x0C63, 0x09AE, 0x0699,
    0x038D, 0x00F2, 0xFF32, 0xFE24, 0xFD58, 0xFCC3, 0xFC5F, 0xFC20,
    0xFBFF, 0xFBF3, 0xFBF2, 0xFBF4, 0xEC1C, 0xEC91, 0xEDCA, 0xEF92,
    0xF1B1, 0xF3F1, 0xF61A, 0xF7F7, 0xF9C3, 0xFBC7, 0xFDE6, 0x0003,
    0x0200, 0x03C0, 0x0525, 0x0611, 0x0666, 0xFD44, 0xFD7A, 0xFE08,
    0xFECF, 0xFFB0, 0x008C, 0x0144, 0x01BA, 0x01F6, 0x021A, 0x0229,
    0x0229, 0x021E, 0x020D, 0x01FB, 0x01ED, 0x01E7, 0xFB67, 0xFBB0,
    0xFC6F, 0xFD78, 0xFE9F, 0xFFB9, 0x009A, 0x0118, 0x0139, 0x0127,
    0x00F0, 0x009F, 0x0042, 0xFFE4, 0xFF92, 0xFF57, 0xFF41, 0x3308,
    0x2FB0, 0x2705, 0x1B11, 0x0DDD, 0x0174, 0xF7E0, 0xF329, 0xF335,
    0xF60D, 0xFAF2, 0x0122, 0x07E1, 0x0E6D, 0x1408, 0x17F1, 0x196A,
    0xD07F, 0xD236, 0xD6B4, 0xDCFC, 0xE413, 0xEAFB, 0xF0B8, 0xF44E,
    0xF600, 0xF6D6, 0xF6FD, 0xF6A2, 0xF5F3, 0xF51C, 0xF44A, 0xF3AC,
    0xF36D, 0xFAF9, 0xFB6A, 0xFC97, 0xFE50, 0x005E, 0x0291, 0x04B3,
    0x0693, 0x057F, 0x0426, 0x02B7, 0x0148, 0xFFED, 0xFEBB, 0xFDC6,
    0xFD24, 0xFCEA, 0x50F2, 0x50BD, 0x502F, 0x4F5E, 0x4E66, 0x4D5C,
    0x4C5C, 0x4B7C, 0x486D, 0x44EF, 0x413D, 0x3D8B, 0x3A0D, 0x36FA,
    0x3486, 0x32E6, 0x324F
};

const struct Animation anim_CB[] = {
    1,
    189,
    0,
    0,
    0x11,
    ANIMINDEX_NUMPARTS(anim_CB_CC_indices),
    anim_CB_CC_values,
    anim_CB_CC_indices,
    0
};

const struct Animation anim_CC[] = {
    1,
    189,
    0,
    0,
    0x01,
    ANIMINDEX_NUMPARTS(anim_CB_CC_indices),
    anim_CB_CC_values,
    anim_CB_CC_indices,
    0
};
