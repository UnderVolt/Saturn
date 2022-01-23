#include "animation_table.h"

const u16 anim_BA_indices[] = {
    0x0001, 0x0000, 0x0014, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0015, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x01D9,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x01C5,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x01B1,
    0x0001, 0x01AD, 0x0001, 0x01AE, 0x0001, 0x01AF,
    0x0014, 0x002C, 0x0014, 0x0040, 0x0014, 0x0054,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0018,
    0x0001, 0x0000, 0x0001, 0x0016, 0x0001, 0x0017,
    0x0001, 0x01A9, 0x0001, 0x01AA, 0x0001, 0x01AB,
    0x0014, 0x007D, 0x0014, 0x0091, 0x0014, 0x00A5,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0069,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0068,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x01AC,
    0x0014, 0x016D, 0x0014, 0x0181, 0x0014, 0x0195,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0159,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x0145,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x01B0,
    0x0014, 0x0109, 0x0014, 0x011D, 0x0014, 0x0131,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0014, 0x00F5,
    0x0014, 0x00B9, 0x0014, 0x00CD, 0x0014, 0x00E1
};

const s16 anim_BA_values[] = {
    0x0000, 0x00AA, 0x00AA, 0x00A9, 0x00A8, 0x00A7, 0x00A5, 0x00A4,
    0x00A3, 0x00A1, 0x00A1, 0x00A0, 0x00A1, 0x00A1, 0x00A3, 0x00A4,
    0x00A5, 0x00A7, 0x00A8, 0x00A9, 0x00AA, 0x3FFF, 0xF97C, 0xED8C,
    0xEC20, 0xEC2F, 0xEC56, 0xEC91, 0xECD8, 0xED25, 0xED72, 0xEDB9,
    0xEDF3, 0xEE1B, 0xEE2A, 0xEE1B, 0xEDF3, 0xEDB9, 0xED72, 0xED25,
    0xECD8, 0xEC91, 0xEC56, 0xEC2F, 0x2D12, 0x2D37, 0x2D9C, 0x2E32,
    0x2EE7, 0x2FAC, 0x3072, 0x3127, 0x31BC, 0x3222, 0x3247, 0x3222,
    0x31BC, 0x3127, 0x3072, 0x2FAC, 0x2EE7, 0x2E32, 0x2D9C, 0x2D37,
    0xEBCE, 0xEBB4, 0xEB6C, 0xEB03, 0xEA83, 0xE9F8, 0xE96C, 0xE8EC,
    0xE883, 0xE83B, 0xE821, 0xE83B, 0xE883, 0xE8EC, 0xE96C, 0xE9F8,
    0xEA83, 0xEB03, 0xEB6C, 0xEBB4, 0x9631, 0x95E9, 0x9525, 0x9405,
    0x92A6, 0x9129, 0x8FAB, 0x8E4C, 0x8D2C, 0x8C68, 0x8C20, 0x8C68,
    0x8D2C, 0x8E4C, 0x8FAB, 0x9129, 0x92A6, 0x9405, 0x9525, 0x95E9,
    0xF549, 0xE3FA, 0xE429, 0xE4A8, 0xE563, 0xE646, 0xE73D, 0xE834,
    0xE917, 0xE9D1, 0xEA50, 0xEA7F, 0xEA50, 0xE9D1, 0xE917, 0xE834,
    0xE73D, 0xE646, 0xE563, 0xE4A8, 0xE429, 0xD331, 0xD310, 0xD2B5,
    0xD22F, 0xD18C, 0xD0DB, 0xD02A, 0xCF87, 0xCF01, 0xCEA6, 0xCE84,
    0xCEA6, 0xCF01, 0xCF87, 0xD02A, 0xD0DB, 0xD18C, 0xD22F, 0xD2B5,
    0xD310, 0x18EF, 0x18E0, 0x18B9, 0x187F, 0x1838, 0x17EB, 0x179F,
    0x1758, 0x171E, 0x16F7, 0x16E8, 0x16F7, 0x171E, 0x1758, 0x179F,
    0x17EB, 0x1838, 0x187F, 0x18B9, 0x18E0, 0x92E2, 0x92A1, 0x91F1,
    0x90EC, 0x8FB1, 0x8E59, 0x8D01, 0x8BC5, 0x8AC1, 0x8A10, 0x89CF,
    0x8A10, 0x8AC1, 0x8BC5, 0x8D01, 0x8E59, 0x8FB1, 0x90EC, 0x91F1,
    0x92A1, 0x0000, 0x0001, 0x0004, 0x0009, 0x000F, 0x0015, 0x001B,
    0x0020, 0x0023, 0x0024, 0x0023, 0x0021, 0x001E, 0x0019, 0x0014,
    0x000F, 0x000B, 0x0006, 0x0003, 0x0000, 0xFF30, 0xFF30, 0xFF30,
    0xFF31, 0xFF31, 0xFF32, 0xFF32, 0xFF33, 0xFF33, 0xFF33, 0xFF33,
    0xFF33, 0xFF33, 0xFF32, 0xFF32, 0xFF31, 0xFF31, 0xFF31, 0xFF30,
    0xFF30, 0xC9D8, 0xC998, 0xC8EB, 0xC7F1, 0xC6C9, 0xC591, 0xC469,
    0xC36F, 0xC2C3, 0xC282, 0xC2AE, 0xC326, 0xC3D9, 0xC4B7, 0xC5AE,
    0xC6AD, 0xC7A4, 0xC881, 0xC934, 0xC9AC, 0x1E4A, 0x1EB7, 0x1FDD,
    0x2186, 0x237E, 0x2590, 0x2788, 0x2932, 0x2A57, 0x2AC5, 0x2A7A,
    0x29AE, 0x287E, 0x2705, 0x2561, 0x23AE, 0x220A, 0x2091, 0x1F60,
    0x1E94, 0x1B09, 0x1AF5, 0x1AC0, 0x1A74, 0x1A19, 0x19BA, 0x195F,
    0x1913, 0x18DE, 0x18CA, 0x18D7, 0x18FC, 0x1933, 0x1977, 0x19C2,
    0x1A10, 0x1A5C, 0x1AA0, 0x1AD7, 0x1AFB, 0x1144, 0x1161, 0x11AF,
    0x121F, 0x12A4, 0x1330, 0x13B5, 0x1425, 0x1473, 0x1490, 0x147C,
    0x1446, 0x13F6, 0x1392, 0x1323, 0x12B1, 0x1242, 0x11DE, 0x118E,
    0x1158, 0xA486, 0xA43F, 0xA37F, 0xA269, 0xA11F, 0x9FC4, 0x9E7B,
    0x9D65, 0x9CA5, 0x9C5D, 0x9C8E, 0x9D13, 0x9DDA, 0x9ED1, 0x9FE3,
    0xA100, 0xA212, 0xA309, 0xA3D0, 0xA456, 0xBF40, 0xBF23, 0xBED4,
    0xBE5F, 0xBDD1, 0xBD37, 0xBC9C, 0xBC0F, 0xBB9A, 0xBB4B, 0xBB2D,
    0xBB4B, 0xBB9A, 0xBC0F, 0xBC9C, 0xBD37, 0xBDD1, 0xBE5F, 0xBED4,
    0xBF23, 0x2537, 0x2574, 0x261A, 0x2710, 0x283A, 0x297E, 0x2AC2,
    0x2BEC, 0x2CE1, 0x2D88, 0x2DC5, 0x2D88, 0x2CE1, 0x2BEC, 0x2AC2,
    0x297E, 0x283A, 0x2710, 0x261A, 0x2574, 0xD64A, 0xD653, 0xD66C,
    0xD690, 0xD6BC, 0xD6EC, 0xD71C, 0xD748, 0xD76C, 0xD785, 0xD78E,
    0xD785, 0xD76C, 0xD748, 0xD71C, 0xD6EC, 0xD6BC, 0xD690, 0xD66C,
    0xD653, 0xEC41, 0xEC28, 0xEBE5, 0xEB82, 0xEB0A, 0xEA87, 0xEA05,
    0xE98D, 0xE92A, 0xE8E7, 0xE8CE, 0xE8E7, 0xE92A, 0xE98D, 0xEA05,
    0xEA87, 0xEB0A, 0xEB82, 0xEBE5, 0xEC28, 0xAC3F, 0xAC16, 0xABA6,
    0xAB00, 0xAA37, 0xA95C, 0xA882, 0xA7B9, 0xA713, 0xA6A3, 0xA679,
    0xA6A3, 0xA713, 0xA7B9, 0xA882, 0xA95C, 0xAA37, 0xAB00, 0xABA6,
    0xAC16, 0x8001, 0x8001, 0x4171, 0xBF5F, 0x8001, 0x8001, 0x4171,
    0xBF5F, 0xE732, 0xE68E, 0xE4E4, 0xE299, 0xE012, 0xDDB1, 0xDBDD,
    0xDAF9, 0xDB18, 0xDBE7, 0xDD31, 0xDEC3, 0xE069, 0xE1EE, 0xE31F,
    0xE416, 0xE507, 0xE5E0, 0xE691, 0xE707, 0x1C7A, 0x1CC3, 0x1D8A,
    0x1EAE, 0x2010, 0x2192, 0x2314, 0x2477, 0x259B, 0x2661, 0x26AA,
    0x2661, 0x259B, 0x2477, 0x2314, 0x2192, 0x2010, 0x1EAE, 0x1D8A,
    0x1CC3, 0x48C7, 0x48DE, 0x491E, 0x497B, 0x49ED, 0x4A68, 0x4AE4,
    0x4B55, 0x4BB3, 0x4BF2, 0x4C09, 0x4BF2, 0x4BB3, 0x4B55, 0x4AE4,
    0x4A68, 0x49ED, 0x497B, 0x491E, 0x48DE
};

const struct Animation anim_BA[] = {
    0,
    189,
    0,
    0,
    0x14,
    ANIMINDEX_NUMPARTS(anim_BA_indices),
    anim_BA_values,
    anim_BA_indices,
    0
};
