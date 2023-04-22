#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1E30A0/func_151B5BF0.s")

void func_151B5E8C(void) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E30A0/func_151B5E94.s")

//there is no struct with unk170, unk3C, unk1C, unk18
/*void func_151B5E94(struct127 *arg0) {
    void *sp38;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    void *temp_v0;

    arg0->unk170 = (f32) (arg0->unk170 + (D_800AA434 * D_800BE9A4));
    if (D_800AA438 < arg0->unk170) {
        arg0->unk170 = 0.0f;
        func_10010F88(0x502, 0x5DC0, 0, 0, -1, (s32) arg0->unk38, (s32) arg0->unk3C, (s32) arg0->unk40, 0x64, 0x1F4);
    }
    temp_v0 = arg0 + 0x170;
    var_f12 = temp_v0->unk0;
    if (var_f12 < D_800AA43C) {
        sp38 = temp_v0;
        temp_f0 = sinf(var_f12);
        var_f12 = temp_v0->unk4;
        temp_f2 = var_f12 + (temp_f0 * (D_800AA440 * var_f12));
        arg0->unk1C = temp_f2;
        arg0->unk18 = temp_f2;
    } else {
        temp_f2_2 = temp_v0->unk4;
        arg0->unk1C = temp_f2_2;
        arg0->unk18 = temp_f2_2;
    }
    func_15133894(var_f12, arg0);
}*/



void func_151B5FCC(struct26 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk88;
    if (temp_v0 != 0) {
        func_100111C8(temp_v0);
        arg0->unk88 = 0;
    }
}
