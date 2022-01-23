#include "animation_table.h"

const u16 anim_47_indices[] = {
    0x000B, 0x0001, 0x000B, 0x000C, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0017, 0x0001, 0x0000,
    0x000B, 0x0182, 0x000B, 0x018D, 0x000B, 0x0198,
    0x000B, 0x0161, 0x000B, 0x016C, 0x000B, 0x0177,
    0x000B, 0x0140, 0x000B, 0x014B, 0x000B, 0x0156,
    0x0001, 0x013C, 0x0001, 0x013D, 0x0001, 0x013E,
    0x000B, 0x0044, 0x000B, 0x004F, 0x000B, 0x005A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000B, 0x0039,
    0x000B, 0x0018, 0x000B, 0x0023, 0x000B, 0x002E,
    0x0001, 0x0138, 0x0001, 0x0139, 0x0001, 0x013A,
    0x000B, 0x0091, 0x0001, 0x009C, 0x0001, 0x009D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000B, 0x0086,
    0x000B, 0x0065, 0x000B, 0x0070, 0x000B, 0x007B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x013B,
    0x000B, 0x0117, 0x000B, 0x0122, 0x000B, 0x012D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000B, 0x010C,
    0x000B, 0x00EB, 0x000B, 0x00F6, 0x000B, 0x0101,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x013F,
    0x000B, 0x00CA, 0x000B, 0x00D5, 0x000B, 0x00E0,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000B, 0x00BF,
    0x000B, 0x009E, 0x000B, 0x00A9, 0x000B, 0x00B4
};

const s16 anim_47_values[] = {
    0x0000, 0x000F, 0x0009, 0x0005, 0x0003, 0x0002, 0x0001, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x008B, 0x008A, 0x008B, 0x008E,
    0x0093, 0x0099, 0x009E, 0x00A4, 0x00A8, 0x00AB, 0x00AC, 0x3FFF,
    0xF06F, 0xEF39, 0xEDCB, 0xEC39, 0xEA99, 0xE900, 0xE782, 0xE635,
    0xE52D, 0xE47F, 0xE441, 0xE5B5, 0xE6F9, 0xE879, 0xEA1D, 0xEBD0,
    0xED7C, 0xEF0B, 0xF068, 0xF17C, 0xF232, 0xF273, 0xE37C, 0xE5E9,
    0xE8C6, 0xEBE9, 0xEF28, 0xF25B, 0xF556, 0xF7F0, 0xFA00, 0xFB5B,
    0xFBD8, 0xE75C, 0xE6FC, 0xE68A, 0xE60D, 0xE58B, 0xE50C, 0xE495,
    0xE42E, 0xE3DB, 0xE3A5, 0xE392, 0xEFD3, 0xED38, 0xEA24, 0xE6C4,
    0xE346, 0xDFD6, 0xDCA2, 0xD9D5, 0xD79D, 0xD628, 0xD5A2, 0xE5EB,
    0xE65E, 0xE6E5, 0xE77A, 0xE814, 0xE8AB, 0xE939, 0xE9B4, 0xEA16,
    0xEA56, 0xEA6D, 0xDD01, 0xDE29, 0xDF85, 0xE103, 0xE28F, 0xE414,
    0xE57F, 0xE6BC, 0xE7B7, 0xE85C, 0xE897, 0x136E, 0x1379, 0x1387,
    0x1396, 0x13A5, 0x13B4, 0x13C2, 0x13CF, 0x13D8, 0x13DF, 0x13E1,
    0xFF10, 0x0007, 0x012D, 0x026E, 0x03BB, 0x0503, 0x0635, 0x0740,
    0x0813, 0x089E, 0x08D0, 0xF18B, 0xF20D, 0xF2A7, 0xF34F, 0xF3FD,
    0xF4A8, 0xF548, 0xF5D4, 0xF642, 0xF68B, 0xF6A5, 0xD699, 0xD808,
    0xD9B9, 0xDB94, 0xDD80, 0xDF64, 0xE127, 0xE2B1, 0xE3E9, 0xE4B7,
    0xE501, 0x959C, 0x9440, 0x92A5, 0x90E4, 0x8F12, 0x8D47, 0x8B9C,
    0x8A26, 0x88FF, 0x883C, 0x87F6, 0x5359, 0x4901, 0x1D8A, 0x2148,
    0x23D4, 0x24CD, 0x258A, 0x2614, 0x2672, 0x26AE, 0x26CE, 0x26DC,
    0x26DE, 0x0837, 0x0AB8, 0x0C6D, 0x0D13, 0x0D92, 0x0DEE, 0x0E2E,
    0x0E56, 0x0E6B, 0x0E74, 0x0E76, 0xD4F7, 0xD021, 0xCCD6, 0xCB94,
    0xCA9F, 0xC9ED, 0xC973, 0xC926, 0xC8FC, 0xC8EB, 0xC8E8, 0x3F34,
    0x3F74, 0x3E6E, 0x3BEC, 0x38BE, 0x3532, 0x3198, 0x2E40, 0x2B79,
    0x2995, 0x28E1, 0x02AC, 0x070F, 0x0A7A, 0x0C90, 0x0E9F, 0x1092,
    0x1256, 0x13D8, 0x1505, 0x15C7, 0x160C, 0x09FB, 0x08BA, 0x082C,
    0x087D, 0x090D, 0x09C5, 0x0A8E, 0x0B52, 0x0BF9, 0x0C6E, 0x0C9B,
    0x9134, 0x9521, 0x98D0, 0x9C03, 0x9F88, 0xA324, 0xA69B, 0xA9B3,
    0xAC32, 0xADDC, 0xAE77, 0xE4FD, 0xEDBB, 0xF237, 0xF15B, 0xEF25,
    0xEC09, 0xE87A, 0xE4EC, 0xE1D4, 0xDFA3, 0xDECF, 0xEFA3, 0xEBEF,
    0xEA16, 0xEA91, 0xEBA6, 0xED20, 0xEECC, 0xF073, 0xF1E3, 0xF2E6,
    0xF348, 0xBE03, 0xB91C, 0xB6A4, 0xB73C, 0xB89D, 0xBA83, 0xBCAA,
    0xBECD, 0xC0A8, 0xC1F7, 0xC276, 0x5575, 0x55A9, 0x549D, 0x521D,
    0x4EF1, 0x4B69, 0x47D4, 0x4481, 0x41BF, 0x3FDD, 0x3F2B, 0x084C,
    0x078F, 0x0782, 0x0849, 0x095C, 0x0A9B, 0x0BE7, 0x0D20, 0x0E27,
    0x0EDB, 0x0F1E, 0xF842, 0xFA53, 0xFC08, 0xFD38, 0xFE73, 0xFFA7,
    0x00C6, 0x01C1, 0x0288, 0x030A, 0x0339, 0x839A, 0x7F34, 0x7DBC,
    0x7FDB, 0x8319, 0x8703, 0x8B2E, 0x8F2B, 0x928D, 0x94E6, 0x95C6,
    0x8001, 0x8001, 0x4171, 0xBF5F, 0x8001, 0x8001, 0x4171, 0xBF5F,
    0x1265, 0x1245, 0x1228, 0x120C, 0x11ED, 0x11DA, 0x11E1, 0x12A9,
    0x12DC, 0x12F2, 0x12F7, 0x007A, 0xFEF2, 0xFD96, 0xFC78, 0xFB61,
    0xFAA5, 0xFA9A, 0xFFBF, 0x0001, 0xFF5D, 0xFEE7, 0xE952, 0xF8B0,
    0x0472, 0x09BE, 0x0C73, 0x0D65, 0x0D67, 0x0376, 0x0339, 0x04C5,
    0x05CC, 0x1122, 0x1089, 0x1033, 0x1035, 0x105B, 0x10AB, 0x112C,
    0x121F, 0x136C, 0x1491, 0x1510, 0xE520, 0xE80D, 0xEA99, 0xEC25,
    0xED4C, 0xEE5E, 0xEFAF, 0xF1B1, 0xF419, 0xF61E, 0xF6F7, 0x1AC5,
    0x1340, 0x0D7D, 0x0B3D, 0x0A7F, 0x0A20, 0x0902, 0x0654, 0x02DA,
    0xFFD8, 0xFE90, 0xCE42, 0xD2BC, 0xD5C8, 0xD6F2, 0xD7D4, 0xD879,
    0xD8EA, 0xD931, 0xD958, 0xD968, 0xD96B, 0x07ED, 0x0780, 0x0736,
    0x0719, 0x0704, 0x06F4, 0x06E9, 0x06E2, 0x06DF, 0x06DD, 0x06DD,
    0x469B, 0x4CAC, 0x4FEF, 0x4FA9, 0x4E89, 0x4CD3, 0x4AD0, 0x48C5,
    0x46F9, 0x45B1, 0x4534
};

const struct Animation anim_47[] = {
    1,
    189,
    0,
    0,
    0x0B,
    ANIMINDEX_NUMPARTS(anim_47_indices),
    anim_47_values,
    anim_47_indices,
    0
};
