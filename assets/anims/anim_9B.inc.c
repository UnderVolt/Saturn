#include "animation_table.h"

const u16 anim_9B_indices[] = {
    0x0001, 0x0000, 0x0008, 0x0001, 0x0001, 0x0009, 0x0001, 0x0000, 0x0001, 0x000A, 0x0001, 0x0000,
    0x0008, 0x0123, 0x0008, 0x012B, 0x0008, 0x0133,
    0x0008, 0x010B, 0x0008, 0x0113, 0x0008, 0x011B,
    0x0008, 0x00F3, 0x0008, 0x00FB, 0x0008, 0x0103,
    0x0001, 0x00EF, 0x0001, 0x00F0, 0x0001, 0x00F1,
    0x0008, 0x002B, 0x0008, 0x0033, 0x0008, 0x003B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x0023,
    0x0008, 0x000B, 0x0008, 0x0013, 0x0008, 0x001B,
    0x0001, 0x00EB, 0x0001, 0x00EC, 0x0001, 0x00ED,
    0x0008, 0x0063, 0x0008, 0x006B, 0x0008, 0x0073,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x005B,
    0x0008, 0x0043, 0x0008, 0x004B, 0x0008, 0x0053,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00EE,
    0x0008, 0x00D3, 0x0008, 0x00DB, 0x0008, 0x00E3,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x00CB,
    0x0008, 0x00B3, 0x0008, 0x00BB, 0x0008, 0x00C3,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00F2,
    0x0008, 0x009B, 0x0008, 0x00A3, 0x0008, 0x00AB,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x0093,
    0x0008, 0x007B, 0x0008, 0x0083, 0x0008, 0x008B
};

const s16 anim_9B_values[] = {
    0x0000, 0x0069, 0x006B, 0x0073, 0x0088, 0x0099, 0x0082, 0x0069,
    0x005B, 0xFFDD, 0x3FFF, 0xB870, 0xBDC5, 0xCB83, 0xDE4E, 0xF2C7,
    0x0591, 0x134F, 0x18A4, 0xE53A, 0xE661, 0xE959, 0xED69, 0xF1D6,
    0xF5E6, 0xF8DE, 0xFA05, 0xF329, 0xF24C, 0xF013, 0xED0A, 0xE9BA,
    0xE6B1, 0xE478, 0xE39B, 0xD1A5, 0xD16B, 0xD0D6, 0xD00A, 0xCF2C,
    0xCE60, 0xCDCB, 0xCD92, 0x4683, 0x516A, 0x6D87, 0x93FC, 0xBDDF,
    0xE450, 0x006D, 0x0B54, 0xC85D, 0xCA0E, 0xCE69, 0xD45F, 0xDADE,
    0xE0D4, 0xE52F, 0xE6E0, 0x1427, 0x0D75, 0xFC30, 0xE493, 0xCAD7,
    0xB33A, 0xA1F4, 0x9B42, 0x4035, 0x3B9E, 0x2FC7, 0x1F97, 0x0DF4,
    0xFDC5, 0xF1EE, 0xED57, 0x1B99, 0x19FA, 0x15CB, 0x1013, 0x09D8,
    0x0420, 0xFFF3, 0xFE53, 0xFAFE, 0xFA2F, 0xF81A, 0xF541, 0xF227,
    0xEF4E, 0xED39, 0xEC6A, 0xD3AE, 0xD478, 0xD682, 0xD94B, 0xDC54,
    0xDF1D, 0xE126, 0xE1F1, 0xDDA1, 0xD076, 0xAE80, 0x800F, 0x4D74,
    0x1F03, 0xFD0E, 0xEFE3, 0x2F11, 0x2D72, 0x2944, 0x238C, 0x1D52,
    0x179A, 0x136C, 0x11CD, 0x3498, 0x2A6E, 0x1037, 0xEC5F, 0xC551,
    0xA179, 0x8742, 0x7D14, 0x0012, 0x000D, 0xFFFF, 0xFFEB, 0xFFD5,
    0xFFC2, 0xFFB3, 0xFFAD, 0xFF31, 0xFF71, 0x0016, 0x00FA, 0x01F1,
    0x02D5, 0x037B, 0x03BB, 0xC62D, 0xC74E, 0xCA35, 0xCE2F, 0xD283,
    0xD67C, 0xD964, 0xDA84, 0x44FE, 0x4566, 0x4672, 0x47E1, 0x4971,
    0x4ADF, 0x4BEC, 0x4C54, 0x0283, 0x0253, 0x01D7, 0x012C, 0x0073,
    0xFFCA, 0xFF4D, 0xFF1D, 0x1549, 0x1536, 0x1506, 0x14C5, 0x147E,
    0x143D, 0x140D, 0x13FB, 0x735F, 0x7542, 0x7A20, 0x80CB, 0x880C,
    0x8EB4, 0x9392, 0x9575, 0xFA4C, 0xFA23, 0xF9BA, 0xF92A, 0xF88C,
    0xF7FC, 0xF792, 0xF769, 0x0000, 0xFF8B, 0xFE5D, 0xFCBF, 0xFAFD,
    0xF95F, 0xF831, 0xF7BB, 0xBB2D, 0xBCA0, 0xC05C, 0xC578, 0xCB09,
    0xD024, 0xD3E0, 0xD553, 0x4C54, 0x4C88, 0x4D0E, 0x4DC5, 0x4E8D,
    0x4F44, 0x4FCA, 0x4FFE, 0x0259, 0x020C, 0x0146, 0x0037, 0xFF11,
    0xFE02, 0xFD3B, 0xFCEF, 0xED25, 0xECC9, 0xEBDC, 0xEA98, 0xE937,
    0xE7F2, 0xE705, 0xE6A9, 0x7774, 0x78BC, 0x7C0B, 0x8093, 0x8580,
    0x8A05, 0x8D53, 0x8E9B, 0x8001, 0x8001, 0x4171, 0xBF5F, 0x8001,
    0x8001, 0x4171, 0xBF5F, 0x0000, 0x0049, 0x00C4, 0x00DD, 0x0000,
    0xFC88, 0xF7B1, 0xF53F, 0x0000, 0xFFF1, 0xFFD6, 0xFFD1, 0x0000,
    0x00C0, 0x01CC, 0x0253, 0xDBCA, 0xDD40, 0xE06F, 0xE38D, 0xE4CE,
    0xE1D8, 0xDCA1, 0xD9D9, 0x0000, 0xFFD7, 0xFF85, 0xFF47, 0xFF5B,
    0x0000, 0x03C6, 0x070C, 0x0000, 0x0056, 0x0103, 0x0184, 0x0159,
    0x0000, 0xF817, 0xF13C, 0x34EF, 0x31D4, 0x29E6, 0x1F39, 0x13DE,
    0x09E8, 0xFF4C, 0xF8F7, 0x0000, 0x000E, 0x0026, 0x002A, 0x0000,
    0xFF54, 0xFE64, 0xFDEB, 0x0000, 0xFFD0, 0xFF80, 0xFF70, 0x0000,
    0x0245, 0x056F, 0x0708, 0x50ED, 0x5242, 0x55B1, 0x5A62, 0x5F7F,
    0x671A, 0x6FF2, 0x7431
};

const struct Animation anim_9B[] = {
    1,
    189,
    0,
    0,
    0x08,
    ANIMINDEX_NUMPARTS(anim_9B_indices),
    anim_9B_values,
    anim_9B_indices,
    0
};
