#include "animation_table.h"

const u16 anim_85_indices[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0001, 0x0003, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00A1,
    0x0001, 0x009E, 0x0001, 0x009F, 0x0001, 0x00A0,
    0x0028, 0x0026, 0x0028, 0x004E, 0x0028, 0x0076,
    0x0001, 0x0022, 0x0001, 0x0023, 0x0001, 0x0024,
    0x0001, 0x0008, 0x0001, 0x0009, 0x0001, 0x000A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0007,
    0x0001, 0x0004, 0x0001, 0x0005, 0x0001, 0x0006,
    0x0001, 0x001E, 0x0001, 0x001F, 0x0001, 0x0020,
    0x0001, 0x000F, 0x0001, 0x0010, 0x0001, 0x0011,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x000E,
    0x0001, 0x000B, 0x0001, 0x000C, 0x0001, 0x000D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0021,
    0x0001, 0x001B, 0x0001, 0x001C, 0x0001, 0x001D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x001A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0019,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0025,
    0x0001, 0x0016, 0x0001, 0x0017, 0x0001, 0x0018,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0015,
    0x0001, 0x0012, 0x0001, 0x0013, 0x0001, 0x0014
};

const s16 anim_85_values[] = {
    0x0000, 0x0035, 0xFF5A, 0x3FFF, 0x0816, 0xE285, 0xEA2F, 0xF5E7,
    0x6E83, 0x9FAC, 0x5146, 0xF345, 0x2351, 0xDF86, 0xFA63, 0x131C,
    0xEC4C, 0xE0B0, 0xFFB8, 0xFF3D, 0xD81B, 0x0366, 0x0CE2, 0x0EFE,
    0x961D, 0xCEBC, 0x0710, 0xF169, 0xF279, 0x973B, 0x9524, 0x5D21,
    0x475E, 0xBF5F, 0x90BE, 0x7987, 0x4B8C, 0xBF5F, 0xFD76, 0xFD7A,
    0xFD7F, 0xFD85, 0xFD8B, 0xFD92, 0xFD99, 0xFDA0, 0xFDA7, 0xFDAE,
    0xFDB4, 0xFDBA, 0xFDBF, 0xFDC3, 0xFDC7, 0xFDC9, 0xFDC9, 0xFDC9,
    0xFDC8, 0xFDC6, 0xFDC3, 0xFDC1, 0xFDBD, 0xFDB9, 0xFDB5, 0xFDB1,
    0xFDAC, 0xFDA7, 0xFDA2, 0xFD9E, 0xFD99, 0xFD95, 0xFD90, 0xFD8D,
    0xFD89, 0xFD86, 0xFD84, 0xFD82, 0xFD81, 0xFD80, 0xFEEE, 0xFEE6,
    0xFEDE, 0xFED4, 0xFECB, 0xFEC0, 0xFEB6, 0xFEAC, 0xFEA2, 0xFE99,
    0xFE90, 0xFE88, 0xFE81, 0xFE7B, 0xFE76, 0xFE74, 0xFE73, 0xFE73,
    0xFE75, 0xFE79, 0xFE7D, 0xFE83, 0xFE89, 0xFE90, 0xFE98, 0xFEA0,
    0xFEA8, 0xFEB1, 0xFEBA, 0xFEC2, 0xFECB, 0xFED3, 0xFEDA, 0xFEE1,
    0xFEE8, 0xFEED, 0xFEF2, 0xFEF5, 0xFEF7, 0xFEF8, 0x26D8, 0x2656,
    0x25C1, 0x251C, 0x2469, 0x23AF, 0x22F0, 0x2231, 0x2174, 0x20C0,
    0x2016, 0x1F7C, 0x1EF5, 0x1E85, 0x1E30, 0x1DFB, 0x1DE8, 0x1DF4,
    0x1E19, 0x1E53, 0x1EA0, 0x1EFE, 0x1F6A, 0x1FE3, 0x2067, 0x20F2,
    0x2183, 0x2217, 0x22AC, 0x2341, 0x23D1, 0x245D, 0x24E0, 0x2559,
    0x25C6, 0x2624, 0x2671, 0x26AB, 0x26CF, 0x26DC, 0xFF6C, 0x00A3,
    0x0F98, 0x2968
};

const struct Animation anim_85[] = {
    0,
    189,
    0,
    0,
    0x28,
    ANIMINDEX_NUMPARTS(anim_85_indices),
    anim_85_values,
    anim_85_indices,
    0
};
