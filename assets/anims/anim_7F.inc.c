#include "animation_table.h"

const u16 anim_7F_indices[] = {
    0x0001, 0x0000, 0x0040, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0041, 0x0001, 0x0000,
    0x0040, 0x0653, 0x0040, 0x0693, 0x0040, 0x06D3,
    0x0040, 0x0593, 0x0040, 0x05D3, 0x0040, 0x0613,
    0x0040, 0x04D3, 0x0040, 0x0513, 0x0040, 0x0553,
    0x0001, 0x04CF, 0x0001, 0x04D0, 0x0001, 0x04D1,
    0x0040, 0x0046, 0x0040, 0x0086, 0x0040, 0x00C6,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0045,
    0x0001, 0x0042, 0x0001, 0x0043, 0x0001, 0x0044,
    0x0001, 0x04CB, 0x0001, 0x04CC, 0x0001, 0x04CD,
    0x0040, 0x010A, 0x0040, 0x014A, 0x0040, 0x018A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0109,
    0x0001, 0x0106, 0x0001, 0x0107, 0x0001, 0x0108,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x04CE,
    0x0040, 0x040B, 0x0040, 0x044B, 0x0040, 0x048B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0040, 0x03CB,
    0x0040, 0x038A, 0x0001, 0x0000, 0x0001, 0x03CA,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x04D2,
    0x0040, 0x02CA, 0x0040, 0x030A, 0x0040, 0x034A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0040, 0x028A,
    0x0040, 0x01CA, 0x0040, 0x020A, 0x0040, 0x024A
};

const s16 anim_7F_values[] = {
    0x0000, 0x00AA, 0x00AA, 0x00AA, 0x00AA, 0x00AA, 0x00AA, 0x00AA,
    0x00AA, 0x00AB, 0x00AB, 0x00AB, 0x00AB, 0x00AC, 0x00AC, 0x00AC,
    0x00AC, 0x00AC, 0x00AC, 0x00AC, 0x00AC, 0x00AC, 0x00AC, 0x00AB,
    0x00AB, 0x00AA, 0x00A9, 0x00A7, 0x00A6, 0x00A4, 0x00A2, 0x00A0,
    0x009E, 0x009C, 0x009A, 0x0098, 0x0097, 0x0096, 0x0095, 0x0094,
    0x0094, 0x0094, 0x0094, 0x0095, 0x0095, 0x0096, 0x0097, 0x0098,
    0x0099, 0x009B, 0x009C, 0x009D, 0x009F, 0x00A0, 0x00A1, 0x00A3,
    0x00A4, 0x00A5, 0x00A6, 0x00A7, 0x00A8, 0x00A9, 0x00A9, 0x00AA,
    0x00AA, 0x3FFF, 0x268B, 0x119F, 0xE81F, 0xF5E7, 0xF8EB, 0xF8EB,
    0xF8EB, 0xF8EB, 0xF8E6, 0xF8DA, 0xF8C5, 0xF8A9, 0xF886, 0xF85D,
    0xF82E, 0xF7F9, 0xF7C0, 0xF782, 0xF740, 0xF6FB, 0xF6B2, 0xF668,
    0xF61B, 0xF5CD, 0xF57E, 0xF52E, 0xF4DE, 0xF48F, 0xF441, 0xF3F5,
    0xF3AA, 0xF362, 0xF31C, 0xF2DA, 0xF29C, 0xF263, 0xF22E, 0xF1FF,
    0xF1D6, 0xF1B3, 0xF197, 0xF183, 0xF176, 0xF172, 0xF17B, 0xF197,
    0xF1C4, 0xF1FF, 0xF248, 0xF29C, 0xF2FB, 0xF362, 0xF3CF, 0xF441,
    0xF4B7, 0xF52E, 0xF5A5, 0xF61B, 0xF68D, 0xF6FB, 0xF761, 0xF7C0,
    0xF814, 0xF85D, 0xF898, 0xF8C5, 0xF8E1, 0xF8EB, 0xDC09, 0xDC09,
    0xDC09, 0xDC09, 0xDC03, 0xDBF3, 0xDBDA, 0xDBB7, 0xDB8B, 0xDB58,
    0xDB1D, 0xDADB, 0xDA93, 0xDA46, 0xD9F3, 0xD99D, 0xD942, 0xD8E5,
    0xD885, 0xD824, 0xD7C1, 0xD75D, 0xD6FA, 0xD697, 0xD635, 0xD5D5,
    0xD578, 0xD51D, 0xD4C7, 0xD474, 0xD427, 0xD3DF, 0xD39E, 0xD363,
    0xD32F, 0xD303, 0xD2E1, 0xD2C7, 0xD2B7, 0xD2B1, 0xD2BE, 0xD2E1,
    0xD318, 0xD363, 0xD3BE, 0xD427, 0xD49D, 0xD51D, 0xD5A6, 0xD635,
    0xD6C8, 0xD75D, 0xD7F2, 0xD885, 0xD914, 0xD99D, 0xDA1D, 0xDA93,
    0xDAFD, 0xDB58, 0xDBA2, 0xDBDA, 0xDBFD, 0xDC09, 0xD5A4, 0xD5A4,
    0xD5A4, 0xD5A4, 0xD5A9, 0xD5B7, 0xD5CF, 0xD5EE, 0xD616, 0xD645,
    0xD67B, 0xD6B7, 0xD6F9, 0xD73F, 0xD78A, 0xD7D9, 0xD82C, 0xD881,
    0xD8D9, 0xD932, 0xD98C, 0xD9E7, 0xDA42, 0xDA9C, 0xDAF5, 0xDB4D,
    0xDBA2, 0xDBF4, 0xDC43, 0xDC8E, 0xDCD5, 0xDD17, 0xDD53, 0xDD88,
    0xDDB8, 0xDDDF, 0xDDFF, 0xDE17, 0xDE25, 0xDE2A, 0xDE1F, 0xDDFF,
    0xDDCC, 0xDD88, 0xDD35, 0xDCD5, 0xDC69, 0xDBF4, 0xDB78, 0xDAF5,
    0xDA6F, 0xD9E7, 0xD95F, 0xD8D9, 0xD856, 0xD7D9, 0xD764, 0xD6F9,
    0xD698, 0xD645, 0xD601, 0xD5CF, 0xD5AF, 0xD5A4, 0xD7CE, 0xF12D,
    0xF18E, 0xF8EA, 0x07C7, 0x07C7, 0x07C7, 0x07C7, 0x07CC, 0x07D9,
    0x07EF, 0x080C, 0x082E, 0x0856, 0x0882, 0x08B0, 0x08E1, 0x0912,
    0x0944, 0x0974, 0x09A3, 0x09CF, 0x09F6, 0x0A19, 0x0A36, 0x0A4B,
    0x0A59, 0x0A5E, 0x0A5D, 0x0A59, 0x0A53, 0x0A4B, 0x0A41, 0x0A36,
    0x0A28, 0x0A19, 0x0A08, 0x09F6, 0x09E3, 0x09CF, 0x09B9, 0x09A3,
    0x098C, 0x0974, 0x095C, 0x0944, 0x092B, 0x0912, 0x08FA, 0x08E1,
    0x08C8, 0x08B0, 0x0899, 0x0882, 0x086B, 0x0856, 0x0842, 0x082E,
    0x081C, 0x080C, 0x07FD, 0x07EF, 0x07E3, 0x07D9, 0x07D2, 0x07CC,
    0x07C8, 0x07C7, 0x2335, 0x2335, 0x2335, 0x2335, 0x2344, 0x236E,
    0x23B1, 0x2409, 0x2473, 0x24ED, 0x2573, 0x2602, 0x2697, 0x272F,
    0x27C7, 0x285C, 0x28EB, 0x2971, 0x29EB, 0x2A55, 0x2AAD, 0x2AF0,
    0x2B1A, 0x2B29, 0x2B25, 0x2B1A, 0x2B08, 0x2AF0, 0x2AD1, 0x2AAD,
    0x2A84, 0x2A55, 0x2A22, 0x29EB, 0x29B0, 0x2971, 0x2930, 0x28EB,
    0x28A5, 0x285C, 0x2812, 0x27C7, 0x277B, 0x272F, 0x26E3, 0x2697,
    0x264C, 0x2602, 0x25B9, 0x2573, 0x252E, 0x24ED, 0x24AE, 0x2473,
    0x243C, 0x2409, 0x23DA, 0x23B1, 0x238D, 0x236E, 0x2356, 0x2344,
    0x2339, 0x2335, 0xCCB8, 0xCCB8, 0xCCB8, 0xCCB8, 0xCCBE, 0xCCCF,
    0xCCE9, 0xCD0C, 0xCD36, 0xCD66, 0xCD9B, 0xCDD3, 0xCE0E, 0xCE4A,
    0xCE87, 0xCEC2, 0xCEFA, 0xCF2F, 0xCF5F, 0xCF89, 0xCFAC, 0xCFC6,
    0xCFD7, 0xCFDD, 0xCFDB, 0xCFD7, 0xCFD0, 0xCFC6, 0xCFBA, 0xCFAC,
    0xCF9B, 0xCF89, 0xCF75, 0xCF5F, 0xCF48, 0xCF2F, 0xCF15, 0xCEFA,
    0xCEDE, 0xCEC2, 0xCEA4, 0xCE87, 0xCE69, 0xCE4A, 0xCE2C, 0xCE0E,
    0xCDF1, 0xCDD3, 0xCDB7, 0xCD9B, 0xCD80, 0xCD66, 0xCD4D, 0xCD36,
    0xCD20, 0xCD0C, 0xCCFA, 0xCCE9, 0xCCDB, 0xCCCF, 0xCCC5, 0xCCBE,
    0xCCBA, 0xCCB8, 0xFD6E, 0xFD6E, 0xFD6E, 0xFD6E, 0xFD6E, 0xFD6E,
    0xFD6F, 0xFD70, 0xFD71, 0xFD72, 0xFD74, 0xFD76, 0xFD77, 0xFD79,
    0xFD7B, 0xFD7D, 0xFD7F, 0xFD81, 0xFD83, 0xFD85, 0xFD87, 0xFD89,
    0xFD8B, 0xFD8C, 0xFD8E, 0xFD8F, 0xFD90, 0xFD91, 0xFD92, 0xFD93,
    0xFD94, 0xFD95, 0xFD96, 0xFD97, 0xFD98, 0xFD9A, 0xFD9B, 0xFD9D,
    0xFDA0, 0xFDA2, 0xFDA6, 0xFDAB, 0xFDB1, 0xFDB8, 0xFDBE, 0xFDC4,
    0xFDC9, 0xFDCC, 0xFDCD, 0xFDCE, 0xFDCE, 0xFDCD, 0xFDCB, 0xFDC8,
    0xFDC4, 0xFDBF, 0xFDB7, 0xFDAC, 0xFD9E, 0xFD90, 0xFD83, 0xFD78,
    0xFD70, 0xFD6E, 0x000E, 0x000E, 0x000E, 0x000E, 0x000F, 0x0011,
    0x0014, 0x0019, 0x001E, 0x0024, 0x002C, 0x0033, 0x003C, 0x0044,
    0x004D, 0x0057, 0x0060, 0x006A, 0x0073, 0x007C, 0x0085, 0x008D,
    0x0095, 0x009C, 0x00A3, 0x00A9, 0x00B0, 0x00B6, 0x00BC, 0x00C2,
    0x00C9, 0x00CF, 0x00D5, 0x00DB, 0x00E1, 0x00E7, 0x00EE, 0x00F4,
    0x00FB, 0x0102, 0x0109, 0x0113, 0x011D, 0x0127, 0x0130, 0x0138,
    0x013D, 0x013F, 0x013F, 0x013D, 0x013A, 0x0135, 0x012D, 0x0123,
    0x0115, 0x0104, 0x00EB, 0x00C8, 0x00A0, 0x0076, 0x004F, 0x002E,
    0x0017, 0x000E, 0xC079, 0xC079, 0xC079, 0xC079, 0xC085, 0xC0A6,
    0xC0DB, 0xC123, 0xC17B, 0xC1E1, 0xC254, 0xC2D2, 0xC359, 0xC3E8,
    0xC47C, 0xC513, 0xC5AD, 0xC646, 0xC6DE, 0xC773, 0xC801, 0xC889,
    0xC908, 0xC97C, 0xC9E8, 0xCA51, 0xCAB8, 0xCB1D, 0xCB80, 0xCBE2,
    0xCC44, 0xCCA6, 0xCD08, 0xCD6B, 0xCDD0, 0xCE36, 0xCE9F, 0xCF0B,
    0xCF7A, 0xCFEE, 0xD078, 0xD122, 0xD1DD, 0xD29A, 0xD34A, 0xD3DF,
    0xD449, 0xD47B, 0xD483, 0xD476, 0xD44E, 0xD403, 0xD38E, 0xD2E8,
    0xD209, 0xD0EB, 0xCF41, 0xCCF1, 0xCA40, 0xC772, 0xC4CC, 0xC293,
    0xC10B, 0xC079, 0x248D, 0x248D, 0x248D, 0x248D, 0x2480, 0x245D,
    0x2426, 0x23DD, 0x2385, 0x2321, 0x22B2, 0x223C, 0x21C1, 0x2144,
    0x20C8, 0x204E, 0x1FD9, 0x1F6D, 0x1F0B, 0x1EB6, 0x1E71, 0x1E3E,
    0x1E20, 0x1E19, 0x1E34, 0x1E75, 0x1ED7, 0x1F53, 0x1FE5, 0x2087,
    0x2133, 0x21E3, 0x2292, 0x233A, 0x23D6, 0x245F, 0x24D0, 0x2524,
    0x2555, 0x255D, 0x2507, 0x2439, 0x2313, 0x21B7, 0x2046, 0x1EE1,
    0x1DAB, 0x1CC3, 0x1C0E, 0x1B5E, 0x1ABE, 0x1A39, 0x19DB, 0x19AE,
    0x19BC, 0x1A12, 0x1AE4, 0x1C41, 0x1DF5, 0x1FCC, 0x2193, 0x2318,
    0x2427, 0x248D, 0x3319, 0x3319, 0x3319, 0x3319, 0x3318, 0x3318,
    0x3316, 0x3315, 0x3312, 0x330F, 0x330B, 0x3306, 0x3301, 0x32FA,
    0x32F3, 0x32EB, 0x32E1, 0x32D7, 0x32CB, 0x32BE, 0x32B0, 0x32A1,
    0x3290, 0x327E, 0x3268, 0x324E, 0x322F, 0x320C, 0x31E7, 0x31C0,
    0x3197, 0x316E, 0x3146, 0x311E, 0x30F8, 0x30D5, 0x30B5, 0x309A,
    0x3083, 0x3072, 0x306D, 0x3077, 0x308D, 0x30AC, 0x30CF, 0x30F3,
    0x3114, 0x3130, 0x3146, 0x315B, 0x316F, 0x3184, 0x3199, 0x31B0,
    0x31C9, 0x31E6, 0x320B, 0x3238, 0x326B, 0x329E, 0x32CD, 0x32F4,
    0x330F, 0x3319, 0x14A2, 0x14A2, 0x14A2, 0x14A2, 0x14A2, 0x14A3,
    0x14A5, 0x14A9, 0x14AE, 0x14B5, 0x14BF, 0x14CB, 0x14DB, 0x14ED,
    0x1503, 0x151D, 0x153B, 0x155D, 0x1584, 0x15B1, 0x15E2, 0x161A,
    0x1657, 0x169B, 0x16ED, 0x1753, 0x17CA, 0x1850, 0x18E1, 0x197A,
    0x1A18, 0x1AB8, 0x1B57, 0x1BF2, 0x1C86, 0x1D11, 0x1D8E, 0x1DFB,
    0x1E55, 0x1E99, 0x1EAE, 0x1E89, 0x1E36, 0x1DC4, 0x1D40, 0x1CB9,
    0x1C3C, 0x1BD7, 0x1B87, 0x1B3E, 0x1AF9, 0x1AB4, 0x1A6B, 0x1A1A,
    0x19BE, 0x1953, 0x18C7, 0x1816, 0x1750, 0x1687, 0x15CD, 0x1532,
    0x14C9, 0x14A2, 0xB8A0, 0xB8A0, 0xB8A0, 0xB8A0, 0xB8A0, 0xB89F,
    0xB89E, 0xB89C, 0xB898, 0xB894, 0xB88F, 0xB888, 0xB880, 0xB877,
    0xB86C, 0xB85F, 0xB851, 0xB840, 0xB82E, 0xB819, 0xB802, 0xB7E9,
    0xB7CD, 0xB7AF, 0xB78A, 0xB75C, 0xB727, 0xB6EC, 0xB6AC, 0xB669,
    0xB623, 0xB5DC, 0xB596, 0xB552, 0xB511, 0xB4D4, 0xB49D, 0xB46D,
    0xB446, 0xB428, 0xB41F, 0xB430, 0xB455, 0xB488, 0xB4C3, 0xB500,
    0xB538, 0xB566, 0xB58B, 0xB5AD, 0xB5CD, 0xB5EE, 0xB610, 0xB636,
    0xB660, 0xB690, 0xB6CE, 0xB71D, 0xB774, 0xB7CC, 0xB81D, 0xB861,
    0xB88F, 0xB8A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001,
    0x0004, 0x0007, 0x000A, 0x000F, 0x0014, 0x001A, 0x0020, 0x0027,
    0x002E, 0x0036, 0x003D, 0x0046, 0x004E, 0x0056, 0x005F, 0x0068,
    0x0070, 0x0079, 0x0082, 0x008A, 0x0092, 0x009A, 0x00A2, 0x00A9,
    0x00B0, 0x00B6, 0x00BC, 0x00C1, 0x00C5, 0x00C9, 0x00CC, 0x00CE,
    0x00D0, 0x00D0, 0x00CF, 0x00CC, 0x00C7, 0x00C1, 0x00B9, 0x00B0,
    0x00A5, 0x009A, 0x008E, 0x0082, 0x0075, 0x0068, 0x005B, 0x004E,
    0x0042, 0x0036, 0x002A, 0x0020, 0x0017, 0x000F, 0x0008, 0x0004,
    0x0001, 0x0000, 0xBF40, 0x2537, 0x2537, 0x2537, 0x2537, 0x2538,
    0x253D, 0x2545, 0x2551, 0x2562, 0x2578, 0x2593, 0x25B5, 0x25DD,
    0x260C, 0x2643, 0x2682, 0x26C9, 0x2719, 0x2773, 0x27D6, 0x2845,
    0x28BE, 0x2942, 0x29D3, 0x2A89, 0x2B76, 0x2C92, 0x2DD3, 0x2F2F,
    0x309C, 0x3211, 0x3385, 0x34ED, 0x3641, 0x3776, 0x3883, 0x395E,
    0x39FE, 0x3A59, 0x3A66, 0x3A30, 0x39CA, 0x3939, 0x3883, 0x37AA,
    0x36B3, 0x35A4, 0x347F, 0x334A, 0x320A, 0x30C1, 0x2F76, 0x2E2C,
    0x2CE7, 0x2BAC, 0x2A80, 0x2967, 0x2865, 0x277E, 0x26B8, 0x2616,
    0x259D, 0x2551, 0x2537, 0xCDB1, 0xCDB1, 0xCDB1, 0xCDB1, 0xCDB9,
    0xCDD1, 0xCDF7, 0xCE2C, 0xCE6E, 0xCEBB, 0xCF14, 0xCF77, 0xCFE3,
    0xD057, 0xD0D3, 0xD156, 0xD1DE, 0xD26A, 0xD2FA, 0xD38D, 0xD422,
    0xD4B8, 0xD54E, 0xD5E3, 0xD676, 0xD706, 0xD793, 0xD81B, 0xD89D,
    0xD919, 0xD98D, 0xD9FA, 0xDA5C, 0xDAB5, 0xDB03, 0xDB44, 0xDB79,
    0xDBA0, 0xDBB8, 0xDBC0, 0xDBAE, 0xDB79, 0xDB25, 0xDAB5, 0xDA2C,
    0xD98D, 0xD8DC, 0xD81B, 0xD74D, 0xD676, 0xD599, 0xD4B8, 0xD3D8,
    0xD2FA, 0xD223, 0xD156, 0xD094, 0xCFE3, 0xCF44, 0xCEBB, 0xCE4B,
    0xCDF7, 0xCDC3, 0xCDB1, 0xEA61, 0xEA61, 0xEA61, 0xEA61, 0xEA54,
    0xEA2C, 0xE9EC, 0xE995, 0xE928, 0xE8A8, 0xE815, 0xE771, 0xE6BE,
    0xE5FD, 0xE52F, 0xE458, 0xE376, 0xE28E, 0xE19F, 0xE0AB, 0xDFB4,
    0xDEBC, 0xDDC4, 0xDCCE, 0xDBDA, 0xDAEB, 0xDA02, 0xD921, 0xD849,
    0xD77C, 0xD6BB, 0xD608, 0xD564, 0xD4D1, 0xD451, 0xD3E4, 0xD38D,
    0xD34D, 0xD325, 0xD318, 0xD336, 0xD38D, 0xD418, 0xD4D1, 0xD5B4,
    0xD6BB, 0xD7E1, 0xD921, 0xDA76, 0xDBDA, 0xDD49, 0xDEBC, 0xE030,
    0xE19F, 0xE303, 0xE458, 0xE598, 0xE6BE, 0xE7C5, 0xE8A8, 0xE961,
    0xE9EC, 0xEA43, 0xEA61, 0xB9D0, 0xB9D0, 0xB9D0, 0xB9D0, 0xB9C5,
    0xB9A6, 0xB973, 0xB92F, 0xB8D9, 0xB873, 0xB800, 0xB77E, 0xB6F1,
    0xB659, 0xB5B7, 0xB50C, 0xB45B, 0xB3A3, 0xB2E6, 0xB226, 0xB163,
    0xB0A0, 0xAFDC, 0xAF19, 0xAE59, 0xAD9C, 0xACE5, 0xAC33, 0xAB89,
    0xAAE7, 0xAA4E, 0xA9C1, 0xA940, 0xA8CC, 0xA866, 0xA811, 0xA7CC,
    0xA799, 0xA77A, 0xA76F, 0xA787, 0xA7CC, 0xA839, 0xA8CC, 0xA97F,
    0xAA4E, 0xAB36, 0xAC33, 0xAD40, 0xAE59, 0xAF7A, 0xB0A0, 0xB1C5,
    0xB2E6, 0xB3FF, 0xB50C, 0xB609, 0xB6F1, 0xB7C0, 0xB873, 0xB906,
    0xB973, 0xB9B8, 0xB9D0, 0x8001, 0x8001, 0x4171, 0xBF5F, 0x8001,
    0x8001, 0x4171, 0xBF5F, 0x248C, 0x248C, 0x248C, 0x248C, 0x248C,
    0x248A, 0x2488, 0x2485, 0x2481, 0x247D, 0x2479, 0x2474, 0x246F,
    0x246A, 0x2465, 0x2460, 0x245C, 0x2458, 0x2454, 0x2451, 0x244F,
    0x244E, 0x244E, 0x244E, 0x2451, 0x2455, 0x245A, 0x2461, 0x2469,
    0x2472, 0x247B, 0x2484, 0x248E, 0x2497, 0x24A0, 0x24A8, 0x24AF,
    0x24B5, 0x24B9, 0x24BB, 0x24BD, 0x24BD, 0x24BD, 0x24BC, 0x24BB,
    0x24B9, 0x24B7, 0x24B5, 0x24B2, 0x24AF, 0x24AC, 0x24A8, 0x24A5,
    0x24A2, 0x249E, 0x249B, 0x2498, 0x2495, 0x2493, 0x2491, 0x248F,
    0x248D, 0x248D, 0x248C, 0xFBA8, 0xFBA8, 0xFBA8, 0xFBA8, 0xFBA3,
    0xFB95, 0xFB7F, 0xFB62, 0xFB40, 0xFB19, 0xFAF0, 0xFAC4, 0xFA98,
    0xFA6C, 0xFA41, 0xFA19, 0xF9F6, 0xF9D7, 0xF9BF, 0xF9AE, 0xF9A6,
    0xF9A8, 0xF9B5, 0xF9CE, 0xF9FC, 0xFA42, 0xFA9D, 0xFB0A, 0xFB84,
    0xFC08, 0xFC92, 0xFD1F, 0xFDAA, 0xFE31, 0xFEAF, 0xFF20, 0xFF82,
    0xFFCF, 0x0004, 0x001F, 0x0024, 0x001C, 0x0009, 0xFFEC, 0xFFC5,
    0xFF95, 0xFF5E, 0xFF21, 0xFEDF, 0xFE9A, 0xFE51, 0xFE07, 0xFDBD,
    0xFD73, 0xFD2B, 0xFCE5, 0xFCA4, 0xFC68, 0xFC32, 0xFC03, 0xFBDD,
    0xFBC0, 0xFBAE, 0xFBA8, 0x0A20, 0x0A20, 0x0A20, 0x0A20, 0x0A24,
    0x0A2F, 0x0A41, 0x0A58, 0x0A74, 0x0A93, 0x0AB5, 0x0AD8, 0x0AFD,
    0x0B20, 0x0B43, 0x0B63, 0x0B80, 0x0B99, 0x0BAD, 0x0BBB, 0x0BC2,
    0x0BC1, 0x0BB7, 0x0BA3, 0x0B7E, 0x0B46, 0x0AFD, 0x0AA6, 0x0A45,
    0x09DB, 0x096C, 0x08FB, 0x088C, 0x0820, 0x07BB, 0x0760, 0x0712,
    0x06D4, 0x06A8, 0x0693, 0x068E, 0x0694, 0x06A3, 0x06BB, 0x06DA,
    0x0700, 0x072C, 0x075C, 0x0790, 0x07C8, 0x0801, 0x083C, 0x0877,
    0x08B2, 0x08EC, 0x0923, 0x0957, 0x0987, 0x09B2, 0x09D7, 0x09F6,
    0x0A0C, 0x0A1B, 0x0A20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0002,
    0x0002, 0x0002, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0003, 0x0003, 0x0002, 0x0002, 0x0001, 0x0001, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0007,
    0x001E, 0x0041, 0x0070, 0x00A9, 0x00EB, 0x0134, 0x0182, 0x01D4,
    0x0229, 0x027F, 0x02D4, 0x0327, 0x0377, 0x03C1, 0x0405, 0x0441,
    0x0473, 0x049A, 0x04B5, 0x04BE, 0x04B6, 0x049D, 0x0477, 0x0445,
    0x040B, 0x03CA, 0x0384, 0x033D, 0x02F5, 0x02B1, 0x0271, 0x0231,
    0x01EA, 0x019E, 0x014D, 0x00F9, 0x00A4, 0x004F, 0xFFFC, 0xFFAA,
    0xFF5B, 0xFF12, 0xFECF, 0xFE94, 0xFE61, 0xFE39, 0xFE1D, 0xFE13,
    0xFE22, 0xFE43, 0xFE72, 0xFEAD, 0xFEED, 0xFF2F, 0xFF6F, 0xFFA8,
    0xFFD6, 0xFFF5, 0x0000, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA, 0xF9DA,
    0xF9DA, 0xF9DA, 0xF9DA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001,
    0x0001, 0x0001, 0x0002, 0x0002, 0x0002, 0x0002, 0x0003, 0x0003,
    0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xFFFF, 0xFFFD, 0xFFF9, 0xFFF5, 0xFFEF, 0xFFE8,
    0xFFDE, 0xFFD2, 0xFFC4, 0xFFB3, 0xFFA0, 0xFF89, 0xFF6F, 0xFF52,
    0xFF31, 0xFF0C, 0xFEE2, 0xFEAD, 0xFE67, 0xFE13, 0xFDB3, 0xFD4B,
    0xFCDE, 0xFC6E, 0xFBFE, 0xFB91, 0xFB2B, 0xFACD, 0xFA7B, 0xFA38,
    0xFA06, 0xF9EA, 0xF9E4, 0xF9F2, 0xFA0F, 0xFA38, 0xFA6C, 0xFAAA,
    0xFAF1, 0xFB3F, 0xFB93, 0xFBEC, 0xFC49, 0xFCA8, 0xFD08, 0xFD67,
    0xFDC5, 0xFE21, 0xFE78, 0xFEC9, 0xFF14, 0xFF57, 0xFF91, 0xFFC0,
    0xFFE3, 0xFFF9, 0x0000, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F00,
    0x3F00, 0x3F00, 0x3F00
};

const struct Animation anim_7F[] = {
    0,
    189,
    0,
    0,
    0x40,
    ANIMINDEX_NUMPARTS(anim_7F_indices),
    anim_7F_values,
    anim_7F_indices,
    0
};
