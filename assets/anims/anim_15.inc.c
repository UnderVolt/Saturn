#include "animation_table.h"

const u16 anim_15_indices[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000,
    0x000F, 0x01C1, 0x0001, 0x0000, 0x0001, 0x01D0,
    0x000F, 0x01B1, 0x0001, 0x0000, 0x0001, 0x01C0,
    0x0001, 0x0192, 0x000F, 0x0193, 0x000F, 0x01A2,
    0x0001, 0x018E, 0x0001, 0x018F, 0x0001, 0x0190,
    0x000F, 0x003E, 0x000F, 0x004D, 0x000F, 0x005C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000F, 0x002F,
    0x000F, 0x0002, 0x000F, 0x0011, 0x000F, 0x0020,
    0x0001, 0x018A, 0x0001, 0x018B, 0x0001, 0x018C,
    0x000F, 0x00A7, 0x000F, 0x00B6, 0x000F, 0x00C5,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000F, 0x0098,
    0x000F, 0x006B, 0x000F, 0x007A, 0x000F, 0x0089,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x018D,
    0x000F, 0x015D, 0x000F, 0x016C, 0x000F, 0x017B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x015C,
    0x000F, 0x012F, 0x000F, 0x013E, 0x000F, 0x014D,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0191,
    0x000F, 0x0102, 0x000F, 0x0111, 0x000F, 0x0120,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0101,
    0x000F, 0x00D4, 0x000F, 0x00E3, 0x000F, 0x00F2
};

const s16 anim_15_values[] = {
    0x0000, 0x3FFF, 0xF62C, 0xF64F, 0xF6AB, 0xF729, 0xF7B2, 0xF830,
    0xF88B, 0xF8AF, 0xF88D, 0xF833, 0xF7B9, 0xF732, 0xF6B5, 0xF657,
    0xF62C, 0xF980, 0xF8B2, 0xF6A1, 0xF3CD, 0xF0B8, 0xEDE3, 0xEBD2,
    0xEB04, 0xEBCB, 0xEDCD, 0xF08F, 0xF396, 0xF667, 0xF888, 0xF97C,
    0xF06F, 0xF085, 0xF0BC, 0xF108, 0xF15B, 0xF1A7, 0xF1DF, 0xF1F4,
    0xF1E0, 0xF1AA, 0xF15F, 0xF10E, 0xF0C2, 0xF089, 0xF06F, 0xD468,
    0xD1F1, 0xCCA1, 0xC797, 0xC5F4, 0xCC01, 0xD641, 0xDC26, 0xDA53,
    0xD512, 0xCF54, 0xCC09, 0xCD8F, 0xD1A7, 0xD45D, 0xAA70, 0xADBA,
    0xB634, 0xC1CC, 0xCE6E, 0xDA06, 0xE281, 0xE5CA, 0xE29D, 0xDA63,
    0xCF16, 0xC2AD, 0xB720, 0xAE69, 0xAA7E, 0xDE99, 0xDE6C, 0xDDF9,
    0xDD5B, 0xDCAF, 0xDC11, 0xDB9E, 0xDB71, 0xDB9C, 0xDC0C, 0xDCA6,
    0xDD4F, 0xDDEC, 0xDE63, 0xDE98, 0x0F8B, 0x0B96, 0x0162, 0xF370,
    0xE43D, 0xD64A, 0xCC17, 0xC822, 0xCBF5, 0xD5DB, 0xE374, 0xF262,
    0x0046, 0x0AC3, 0x0F7A, 0xE940, 0xE9D2, 0xEB49, 0xED4A, 0xEF78,
    0xF179, 0xF2F0, 0xF382, 0xF2F5, 0xF189, 0xEF95, 0xED70, 0xEB71,
    0xE9F0, 0xE942, 0xF618, 0xF652, 0xF6E8, 0xF7B5, 0xF895, 0xF962,
    0xF9F8, 0xFA32, 0xF9FA, 0xF968, 0xF8A0, 0xF7C5, 0xF6F8, 0xF65E,
    0xF619, 0xE633, 0xE640, 0xE660, 0xE68D, 0xE6BD, 0xE6EA, 0xE70B,
    0xE717, 0xE70B, 0xE6EB, 0xE6C0, 0xE690, 0xE664, 0xE642, 0xE633,
    0xDF00, 0xDC32, 0xD6F8, 0xD416, 0xD59C, 0xD91C, 0xDC9F, 0xDE30,
    0xDB68, 0xD655, 0xD3AB, 0xD569, 0xD923, 0xDCF5, 0xDEF8, 0x1BA7,
    0x1BA4, 0x1B9C, 0x1B90, 0x1B84, 0x1B79, 0x1B71, 0x1B6E, 0x1B71,
    0x1B79, 0x1B84, 0x1B90, 0x1B9B, 0x1BA3, 0x1BA7, 0x2E1B, 0x2DCD,
    0x2D04, 0x2BF1, 0x2AC6, 0x29B4, 0x28EB, 0x289D, 0x28E8, 0x29AB,
    0x2AB7, 0x2BDD, 0x2CEE, 0x2DBD, 0x2E19, 0xBB91, 0xB95E, 0xB3B3,
    0xABF3, 0xA381, 0x9BC1, 0x9616, 0x93E3, 0x9603, 0x9B83, 0xA311,
    0xAB5D, 0xB315, 0xB8E9, 0xBB87, 0x0183, 0x0179, 0x015E, 0x0139,
    0x0111, 0x00EC, 0x00D2, 0x00C7, 0x00D1, 0x00EB, 0x010F, 0x0137,
    0x015B, 0x0177, 0x0183, 0x01CF, 0x01D5, 0x01E4, 0x01F9, 0x0210,
    0x0225, 0x0234, 0x023A, 0x0234, 0x0226, 0x0211, 0x01FB, 0x01E6,
    0x01D6, 0x01CF, 0xE5A9, 0xE4D8, 0xE2C0, 0xDFE1, 0xDCC2, 0xD9E4,
    0xD7CB, 0xD6FB, 0xD7C4, 0xD9CD, 0xDC98, 0xDFAA, 0xE285, 0xE4AD,
    0xE5A5, 0x1CA8, 0xFEF2, 0xFF31, 0xFFD3, 0x00AF, 0x01A0, 0x027E,
    0x031F, 0x035E, 0x031F, 0x027E, 0x01A0, 0x00AF, 0xFFD3, 0xFF31,
    0xFEF2, 0x0A8D, 0x0ADC, 0x0BA7, 0x0CBD, 0x0DED, 0x0F03, 0x0FCF,
    0x101E, 0x0FCF, 0x0F03, 0x0DED, 0x0CBD, 0x0BA7, 0x0ADC, 0x0A8D,
    0xB85D, 0xB76B, 0xB4FB, 0xB1A6, 0xAE05, 0xAAB0, 0xA840, 0xA74F,
    0xA840, 0xAAB0, 0xAE05, 0xB1A6, 0xB4FB, 0xB76B, 0xB85D, 0xFFFA,
    0xFFFE, 0x0006, 0x0013, 0x0021, 0x002E, 0x0038, 0x003B, 0x0038,
    0x002F, 0x0022, 0x0014, 0x0007, 0xFFFF, 0xFFFA, 0xFEDF, 0xFEE0,
    0xFEE1, 0xFEE2, 0xFEE3, 0xFEE4, 0xFEE5, 0xFEE5, 0xFEE5, 0xFEE4,
    0xFEE3, 0xFEE2, 0xFEE1, 0xFEE0, 0xFEDF, 0xE37D, 0xE2F8, 0xE1A2,
    0xDFCD, 0xDDCE, 0xDBF9, 0xDAA2, 0xDA1E, 0xDA9E, 0xDBEB, 0xDDB4,
    0xDFA9, 0xE17C, 0xE2DD, 0xE37B, 0x1EF6, 0x0460, 0x045A, 0x044A,
    0x0434, 0x041C, 0x0406, 0x03F6, 0x03F0, 0x03F6, 0x0406, 0x041C,
    0x0434, 0x044A, 0x045A, 0x0460, 0xF3FB, 0xF356, 0xF1AE, 0xEF6B,
    0xECF3, 0xEAB0, 0xE908, 0xE864, 0xE908, 0xEAB0, 0xECF3, 0xEF6B,
    0xF1AE, 0xF356, 0xF3FB, 0x9C09, 0x9E04, 0xA322, 0xAA20, 0xB1BF,
    0xB8BD, 0xBDDB, 0xBFD7, 0xBDDB, 0xB8BD, 0xB1BF, 0xAA20, 0xA322,
    0x9E04, 0x9C09, 0x7FFF, 0x7FFF, 0x4171, 0xBF5F, 0x7FFF, 0x7FFF,
    0x4171, 0xBF5F, 0x0007, 0x0271, 0x0254, 0x020A, 0x01A4, 0x0135,
    0x00CF, 0x0085, 0x0068, 0x0085, 0x00CF, 0x0135, 0x01A4, 0x020A,
    0x0254, 0x0271, 0xE591, 0xE591, 0xE591, 0xE591, 0xE591, 0xE591,
    0xE590, 0xE590, 0xE590, 0xE591, 0xE591, 0xE591, 0xE591, 0xE591,
    0xE591, 0x0DDA, 0x0C96, 0x0954, 0x04DF, 0x0004, 0xFB90, 0xF84D,
    0xF70A, 0xF843, 0xFB6C, 0xFFC4, 0x0489, 0x08F9, 0x0C53, 0x0DD4,
    0xF1B4, 0xF8AB, 0xF91F, 0xFA49, 0xFBE0, 0xFD9C, 0xFF34, 0x005D,
    0x00D0, 0x0060, 0xFF40, 0xFDB3, 0xFBFF, 0xFA69, 0xF937, 0xF8AD,
    0x7FFF
};

const struct Animation anim_15[] = {
    0,
    189,
    0,
    0,
    0x0F,
    ANIMINDEX_NUMPARTS(anim_15_indices),
    anim_15_values,
    anim_15_indices,
    0
};
