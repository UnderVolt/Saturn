#include "animation_table.h"

const u16 anim_22_indices[] = {
    0x0001, 0x0000, 0x001B, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x001C, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x036A,
    0x001B, 0x0334, 0x0001, 0x0000, 0x001B, 0x034F,
    0x001B, 0x02E3, 0x001B, 0x02FE, 0x001B, 0x0319,
    0x0001, 0x02DF, 0x0001, 0x02E0, 0x0001, 0x02E1,
    0x001B, 0x0089, 0x001B, 0x00A4, 0x001B, 0x00BF,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001B, 0x006E,
    0x001B, 0x001D, 0x001B, 0x0038, 0x001B, 0x0053,
    0x0001, 0x02DB, 0x0001, 0x02DC, 0x0001, 0x02DD,
    0x001B, 0x0146, 0x001B, 0x0161, 0x001B, 0x017C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001B, 0x012B,
    0x001B, 0x00DA, 0x001B, 0x00F5, 0x001B, 0x0110,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x02DE,
    0x001B, 0x028A, 0x001B, 0x02A5, 0x001B, 0x02C0,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001B, 0x026F,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001B, 0x0254,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x02E2,
    0x001B, 0x0203, 0x001B, 0x021E, 0x001B, 0x0239,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001B, 0x01E8,
    0x001B, 0x0197, 0x001B, 0x01B2, 0x001B, 0x01CD
};

const s16 anim_22_values[] = {
    0x0000, 0x00AA, 0x00AA, 0x00A9, 0x00A9, 0x00A8, 0x00A8, 0x00A7,
    0x00A7, 0x00A6, 0x00A6, 0x00A6, 0x00A6, 0x00A7, 0x00A7, 0x00A7,
    0x00A7, 0x00A8, 0x00A8, 0x00A8, 0x00A9, 0x00A9, 0x00A9, 0x00A9,
    0x00AA, 0x00AA, 0x00AA, 0x00AA, 0x3FFF, 0x0000, 0x0000, 0xFFFF,
    0xFFFC, 0xFFF6, 0xFFED, 0xFFDF, 0xFFCD, 0xFFB6, 0xFF98, 0xFF73,
    0xFF47, 0xFF11, 0xFED3, 0xFE8B, 0xFE38, 0xFDD9, 0xFD6E, 0xFCF7,
    0xFC71, 0xFB72, 0xF9C2, 0xF7B1, 0xF58C, 0xF3A2, 0xF242, 0xF1BC,
    0xF97C, 0xF96C, 0xF93D, 0xF8F5, 0xF895, 0xF821, 0xF79C, 0xF70A,
    0xF66F, 0xF5CD, 0xF528, 0xF483, 0xF3E1, 0xF347, 0xF2B7, 0xF234,
    0xF1C3, 0xF166, 0xF121, 0xF0F7, 0xF134, 0xF1FE, 0xF31E, 0xF45E,
    0xF585, 0xF65F, 0xF6B4, 0xED8C, 0xED77, 0xED3A, 0xECD8, 0xEC55,
    0xEBB5, 0xEAF9, 0xEA25, 0xE93E, 0xE845, 0xE73E, 0xE62C, 0xE514,
    0xE3F7, 0xE2D9, 0xE1BD, 0xE0A7, 0xDF9A, 0xDE99, 0xDDA7, 0xDC8D,
    0xDB2E, 0xD9B3, 0xD844, 0xD70B, 0xD631, 0xD5DF, 0xCA4F, 0xCA4A,
    0xCA3C, 0xCA27, 0xCA0D, 0xC9EE, 0xC9CD, 0xC9AC, 0xC98C, 0xC96E,
    0xC955, 0xC942, 0xC937, 0xC936, 0xC93F, 0xC955, 0xC97A, 0xC9AF,
    0xC9F5, 0xCA4F, 0xCB29, 0xCCBB, 0xCEB4, 0xD0C6, 0xD2A3, 0xD3FB,
    0xD47F, 0xFB1D, 0xFB1A, 0xFB13, 0xFB08, 0xFAF8, 0xFAE4, 0xFACD,
    0xFAB3, 0xFA96, 0xFA76, 0xFA54, 0xFA30, 0xFA0B, 0xF9E4, 0xF9BC,
    0xF993, 0xF969, 0xF940, 0xF917, 0xF8EE, 0xF8B5, 0xF862, 0xF804,
    0xF7A4, 0xF751, 0xF716, 0xF6FF, 0xD2DC, 0xD2E5, 0xD300, 0xD32C,
    0xD367, 0xD3B0, 0xD406, 0xD468, 0xD4D4, 0xD549, 0xD5C6, 0xD64A,
    0xD6D3, 0xD761, 0xD7F1, 0xD883, 0xD916, 0xD9A8, 0xDA37, 0xDAC4,
    0xDB81, 0xDC8A, 0xDDB8, 0xDEE6, 0xDFED, 0xE0A7, 0xE0ED, 0xD4B4,
    0xD4A3, 0xD471, 0xD422, 0xD3B6, 0xD32F, 0xD291, 0xD1DC, 0xD113,
    0xD037, 0xCF4C, 0xCE53, 0xCD4D, 0xCC3E, 0xCB26, 0xCA09, 0xC8E8,
    0xC7C5, 0xC6A2, 0xC582, 0xC3E9, 0xC19A, 0xBEED, 0xBC3D, 0xB9E2,
    0xB836, 0xB794, 0x0000, 0x02C9, 0x09F2, 0x13AF, 0x1E32, 0x27B1,
    0x2E5F, 0x2F33, 0x2BF3, 0x2A05, 0x2D75, 0x3237, 0x3184, 0x2877,
    0x1AF1, 0x0C53, 0x0000, 0xFF40, 0x0204, 0x0555, 0x08F5, 0x0CA9,
    0x1036, 0x1360, 0x15EC, 0x179F, 0x183D, 0x0000, 0x003F, 0x00EC,
    0x01EB, 0x0322, 0x0476, 0x05CD, 0x0705, 0x08B2, 0x0BC8, 0x12CF,
    0x1B3F, 0x1E78, 0x1A01, 0x119F, 0x080B, 0x0000, 0xFE9C, 0xFF1A,
    0xFFC1, 0x0082, 0x014E, 0x0217, 0x02CE, 0x0363, 0x03C7, 0x03EC,
    0xF549, 0xF42E, 0xF150, 0xED5B, 0xE8FA, 0xE4D8, 0xE1A2, 0xDFC1,
    0xDEE0, 0xDE8C, 0xDE42, 0xDE86, 0xE06D, 0xE4B6, 0xEA83, 0xF07D,
    0xF549, 0xF33A, 0xEEF6, 0xEA06, 0xE4BA, 0xDF64, 0xDA53, 0xD5D6,
    0xD23F, 0xCFDC, 0xCEFF, 0xC7DD, 0xCAB4, 0xD210, 0xDC34, 0xE762,
    0xF1DC, 0xF9E6, 0xFE07, 0xFF5A, 0x0000, 0x0000, 0x0000, 0x0000,
    0xF434, 0xE454, 0xD355, 0xC42A, 0xB9C6, 0xB99C, 0xC141, 0xC7DD,
    0xCB1C, 0xCE5D, 0xD15C, 0xD3D4, 0xD582, 0xD620, 0x054B, 0x0481,
    0x0265, 0xFF59, 0xFBBF, 0xF7FA, 0xF46B, 0xF176, 0xEFD5, 0xEE8B,
    0xEB27, 0xE798, 0xE83E, 0xEE96, 0xF7CF, 0x01DD, 0x0AB1, 0x103F,
    0x1086, 0x0CD8, 0x0821, 0x054B, 0x04FC, 0x0594, 0x0697, 0x078D,
    0x07FA, 0x2BD6, 0x2AC2, 0x27DD, 0x23AD, 0x1EB5, 0x197B, 0x1482,
    0x1050, 0x0C97, 0x0B1A, 0x0D53, 0x1114, 0x1481, 0x1701, 0x194C,
    0x1B85, 0x1DCB, 0x2040, 0x2343, 0x26A7, 0x29BE, 0x2BD6, 0x2CCC,
    0x2D19, 0x2CFF, 0x2CC0, 0x2C9C, 0xCCF6, 0xC9A9, 0xC0DD, 0xB439,
    0xA566, 0x960A, 0x87CE, 0x7C55, 0x77CF, 0x7749, 0x73BE, 0x70A6,
    0x74BE, 0x8214, 0x9415, 0xA7A1, 0xB994, 0xC6CA, 0xCCFC, 0xCE05,
    0xCCFC, 0xCCF6, 0xCEB3, 0xD0AB, 0xD281, 0xD3DD, 0xD465, 0x0000,
    0x0000, 0x0000, 0x0001, 0x0002, 0x0002, 0x0003, 0x0004, 0x0004,
    0x0005, 0x0005, 0x0004, 0x0004, 0x0004, 0x0004, 0x0003, 0x0003,
    0x0002, 0x0002, 0x0001, 0x0001, 0x0001, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30,
    0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30,
    0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30,
    0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xC9D8, 0xC9CA, 0xC9A3,
    0xC96C, 0xC92A, 0xC8E5, 0xC8A3, 0xC86B, 0xC845, 0xC837, 0xC83B,
    0xC847, 0xC859, 0xC871, 0xC88E, 0xC8AE, 0xC8D1, 0xC8F5, 0xC91A,
    0xC93E, 0xC961, 0xC981, 0xC99E, 0xC9B6, 0xC9C8, 0xC9D4, 0xC9D8,
    0x1E4A, 0x1E78, 0x1EF5, 0x1FA9, 0x207F, 0x2160, 0x2236, 0x22EA,
    0x2367, 0x2395, 0x2388, 0x2362, 0x2326, 0x22D8, 0x227B, 0x2212,
    0x21A1, 0x212B, 0x20B4, 0x203E, 0x1FCD, 0x1F64, 0x1F07, 0x1EB9,
    0x1E7D, 0x1E57, 0x1E4A, 0x1B09, 0x1AFC, 0x1ADB, 0x1AAB, 0x1A71,
    0x1A35, 0x19FC, 0x19CB, 0x19AA, 0x199E, 0x19A1, 0x19AB, 0x19BC,
    0x19D0, 0x19E9, 0x1A05, 0x1A24, 0x1A43, 0x1A63, 0x1A83, 0x1AA1,
    0x1ABD, 0x1AD6, 0x1AEB, 0x1AFB, 0x1B05, 0x1B09, 0x1144, 0x1158,
    0x118C, 0x11D7, 0x1230, 0x128E, 0x12E7, 0x1333, 0x1366, 0x137A,
    0x1374, 0x1364, 0x134B, 0x132B, 0x1304, 0x12D8, 0x12A9, 0x1278,
    0x1246, 0x1215, 0x11E6, 0x11BA, 0x1194, 0x1173, 0x115A, 0x114A,
    0x1144, 0xAC44, 0xAC27, 0xABDB, 0xAB6C, 0xAAE9, 0xAA5E, 0xA9DB,
    0xA96C, 0xA920, 0xA903, 0xA90C, 0xA923, 0xA948, 0xA978, 0xA9B1,
    0xA9F1, 0xAA37, 0xAA7F, 0xAAC8, 0xAB11, 0xAB56, 0xAB96, 0xABCF,
    0xABFF, 0xAC24, 0xAC3C, 0xAC44, 0xBF40, 0xBF36, 0xBF19, 0xBEEF,
    0xBEBE, 0xBE8A, 0xBE59, 0xBE2F, 0xBE12, 0xBE07, 0xBE0B, 0xBE13,
    0xBE21, 0xBE33, 0xBE49, 0xBE61, 0xBE7B, 0xBE96, 0xBEB2, 0xBECD,
    0xBEE7, 0xBEFF, 0xBF14, 0xBF26, 0xBF34, 0xBF3D, 0xBF40, 0x2537,
    0x2565, 0x25E2, 0x2696, 0x276C, 0x284D, 0x2923, 0x29D7, 0x2A54,
    0x2A83, 0x2A75, 0x2A4F, 0x2A13, 0x29C5, 0x2968, 0x28FF, 0x288E,
    0x2818, 0x27A1, 0x272B, 0x26BA, 0x2652, 0x25F5, 0x25A6, 0x256B,
    0x2544, 0x2537, 0xD64A, 0xD654, 0xD66F, 0xD695, 0xD6C2, 0xD6F2,
    0xD720, 0xD746, 0xD760, 0xD76A, 0xD767, 0xD75F, 0xD752, 0xD742,
    0xD72E, 0xD718, 0xD700, 0xD6E7, 0xD6CD, 0xD6B4, 0xD69C, 0xD686,
    0xD673, 0xD662, 0xD655, 0xD64D, 0xD64A, 0xEC41, 0xEC26, 0xEBDC,
    0xEB73, 0xEAF5, 0xEA71, 0xE9F4, 0xE98A, 0xE941, 0xE926, 0xE92E,
    0xE944, 0xE967, 0xE995, 0xE9CC, 0xEA09, 0xEA4B, 0xEA90, 0xEAD6,
    0xEB1B, 0xEB5E, 0xEB9B, 0xEBD1, 0xEBFF, 0xEC22, 0xEC39, 0xEC41,
    0xB59E, 0xB58A, 0xB556, 0xB509, 0xB4AE, 0xB44E, 0xB3F3, 0xB3A7,
    0xB372, 0xB35E, 0xB364, 0xB374, 0xB38E, 0xB3AF, 0xB3D6, 0xB403,
    0xB433, 0xB465, 0xB498, 0xB4CA, 0xB4FA, 0xB526, 0xB54E, 0xB56F,
    0xB588, 0xB598, 0xB59E, 0x8001, 0x8001, 0x4171, 0xBF5F, 0x8001,
    0x8001, 0x4171, 0xBF5F, 0x0000, 0xFF5A, 0xFDC0, 0xFBBB, 0xF9D4,
    0xF7A7, 0xF55E, 0xF457, 0xF4E6, 0xF62F, 0xF7C8, 0xF94A, 0xFA4B,
    0xFAE8, 0xFB83, 0xFC1A, 0xFCAD, 0xFD3A, 0xFDBE, 0xFE39, 0xFEA8,
    0xFF0B, 0xFF5F, 0xFFA3, 0xFFD6, 0xFFF6, 0x0000, 0x0000, 0x0079,
    0x019C, 0x02FF, 0x0436, 0x0566, 0x0688, 0x06EF, 0x066F, 0x057E,
    0x0461, 0x035D, 0x02B9, 0x025E, 0x0209, 0x01B9, 0x0170, 0x012C,
    0x00EF, 0x00B9, 0x0089, 0x0060, 0x003D, 0x0023, 0x000F, 0x0003,
    0x0000, 0xFC62, 0xFF33, 0x05CD, 0x0D6A, 0x1344, 0x16F1, 0x1921,
    0x18B1, 0x155D, 0x105B, 0x0AC5, 0x05B5, 0x0245, 0x0005, 0xFDCF,
    0xFBA8, 0xF994, 0xF79B, 0xF5C0, 0xF409, 0xF27B, 0xF11C, 0xEFF2,
    0xEF00, 0xEE4D, 0xEDDD, 0xEDB7, 0x0000, 0xFF6E, 0xFE2B, 0xFCE8,
    0xFC56, 0xFC5B, 0xFC6C, 0xFC85, 0xFCA8, 0xFCD1, 0xFD01, 0xFD36,
    0xFD70, 0xFDAD, 0xFDEB, 0xFE2B, 0xFE6B, 0xFEAA, 0xFEE6, 0xFF20,
    0xFF55, 0xFF85, 0xFFAF, 0xFFD1, 0xFFEB, 0xFFFB, 0x0000, 0x0884,
    0x0970, 0x0B74, 0x0D6C, 0x0E38, 0x0E00, 0x0DB3, 0x0D51, 0x0CDF,
    0x0C5E, 0x0BD0, 0x0B39, 0x0A9A, 0x09F6, 0x094F, 0x08A7, 0x0802,
    0x0761, 0x06C7, 0x0636, 0x05B0, 0x0539, 0x04D1, 0x047D, 0x043E,
    0x0416, 0x0408, 0x40A1
};

const struct Animation anim_22[] = {
    1,
    189,
    0,
    0,
    0x1B,
    ANIMINDEX_NUMPARTS(anim_22_indices),
    anim_22_values,
    anim_22_indices,
    0
};
