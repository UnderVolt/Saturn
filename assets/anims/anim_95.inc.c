#include "animation_table.h"

const u16 anim_95_indices[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0002, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x0087,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x0082,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x007D,
    0x0001, 0x0079, 0x0001, 0x007A, 0x0001, 0x007B,
    0x0005, 0x000B, 0x0005, 0x0010, 0x0005, 0x0015,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x0006,
    0x0001, 0x0003, 0x0001, 0x0004, 0x0001, 0x0005,
    0x0001, 0x0075, 0x0001, 0x0076, 0x0001, 0x0077,
    0x0005, 0x0020, 0x0005, 0x0025, 0x0005, 0x002A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x001B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x001A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0078,
    0x0005, 0x0066, 0x0005, 0x006B, 0x0005, 0x0070,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x0061,
    0x0005, 0x0052, 0x0005, 0x0057, 0x0005, 0x005C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x007C,
    0x0005, 0x0043, 0x0005, 0x0048, 0x0005, 0x004D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0005, 0x003E,
    0x0005, 0x002F, 0x0005, 0x0034, 0x0005, 0x0039
};

const s16 anim_95_values[] = {
    0x0000, 0x00BD, 0x3FFF, 0xFF8A, 0xF980, 0xF06F, 0xFB85, 0xFB4B,
    0xFAC7, 0xFA3B, 0xF9E8, 0x85E8, 0x7BDC, 0x6532, 0x4D21, 0x3EE0,
    0x94B7, 0x9980, 0xA44C, 0xAFC3, 0xB68D, 0x3403, 0x4131, 0x5EEC,
    0x7E7E, 0x9130, 0xED8C, 0xF913, 0xF95C, 0xFA01, 0xFAB0, 0xFB18,
    0x031B, 0x0DB6, 0x25A1, 0x3F06, 0x4E11, 0x1597, 0x1A1F, 0x2458,
    0x2F34, 0x35A2, 0xB412, 0xC285, 0xE31E, 0x05B9, 0x1A39, 0xFFEC,
    0x0032, 0x00D2, 0x017C, 0x01E1, 0x025C, 0x0239, 0x01EC, 0x0199,
    0x0168, 0xC7E1, 0xCD6B, 0xD9EA, 0xE72F, 0xEF0B, 0x4AB2, 0x411D,
    0x2B7D, 0x1488, 0x06EF, 0xFFD8, 0xFFB6, 0xFF6B, 0xFF1A, 0xFEEB,
    0xFEAE, 0xFEC3, 0xFEF0, 0xFF20, 0xFF3D, 0x99AF, 0x9E88, 0xA97A,
    0xB518, 0xBBFA, 0x00A8, 0x0083, 0x002E, 0xFFD6, 0xFFA1, 0xFF16,
    0xFF10, 0xFF05, 0xFEF8, 0xFEF1, 0xC900, 0xCE89, 0xDB06, 0xE849,
    0xF023, 0x4613, 0x3D01, 0x288A, 0x12CF, 0x05F1, 0xFFEE, 0xFFFA,
    0x0013, 0x002F, 0x003F, 0x006A, 0x0067, 0x0061, 0x005B, 0x0057,
    0x9C3A, 0xA0CB, 0xAB17, 0xB606, 0xBC7F, 0x7FFF, 0x7FFF, 0x4171,
    0xBF5F, 0x7FFF, 0x7FFF, 0x4171, 0xBF5F, 0x07C9, 0x0529, 0xFF3F,
    0xF8F5, 0xF53C, 0x13EC, 0x1103, 0x0A73, 0x037A, 0xFF5B, 0x4A97,
    0x4911, 0x45A6, 0x4212, 0x400F
};

const struct Animation anim_95[] = {
    1,
    189,
    0,
    0,
    0x05,
    ANIMINDEX_NUMPARTS(anim_95_indices),
    anim_95_values,
    anim_95_indices,
    0
};
