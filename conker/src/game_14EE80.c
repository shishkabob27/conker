#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_14EE80/func_151219D0.s")
/*void func_151219D0(struct108 *arg0) {
    struct127 *var_v0;
    struct127 *var_v0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f2;
    f32 var_f2_2;

    var_f12 = D_800A3420;
    var_f14 = D_800A3424;
    var_f2 = D_800A3420;
    var_f16 = D_800A3424;
    var_f0 = 0.0f;
    if (D_8008FD8C > 0) {
        var_v0 = &D_800CC2D0;
        do {
            temp_f20 = var_v0->x_position;
            if (temp_f20 < var_f2) {
                var_f2 = temp_f20;
            }
            if (var_f16 < temp_f20) {
                var_f16 = temp_f20;
            }
            temp_f20_2 = var_v0->z_position;
            temp_f4 = var_v0->y_position;
            var_v0 += 0x32C;
            var_f0 += temp_f4;
            if (temp_f20_2 < var_f12) {
                var_f12 = temp_f20_2;
            }
            if (var_f14 < temp_f20_2) {
                var_f14 = temp_f20_2;
            }
        } while ((u32) var_v0 < (u32) ((D_8008FD8C * 0x32C) + &D_800CC2D0));
    }
    arg0->unk2BC = var_f16;
    var_f2_2 = 0.0f;
    var_v0_2 = &D_800CC2D0;
    temp_f22 = (var_f12 + var_f14) * 0.5f;
    arg0->unk2C4 = temp_f22;
    arg0->unk2C0 = (f32) ((var_f0 / (f32) D_8008FD8C) + 150.0f);
    if (D_8008FD8C > 0) {
        do {
            var_f0_2 = (var_v0_2->x_position - var_f16) * 0.5f;
            if (var_f0_2 < 0.0f) {
                var_f0_2 = 0.0f;
            }
            temp_f4_2 = var_v0_2->z_position;
            var_v0_2 += 0x32C;
            var_f12_2 = temp_f4_2 - temp_f22;
            if (var_f12_2 < 0.0f) {
                var_f12_2 = -var_f12_2;
            }
            if (var_f12_2 < var_f0_2) {
                var_f12_2 = var_f0_2;
            }
            if (var_f2_2 < var_f12_2) {
                var_f2_2 = var_f12_2;
            }
        } while ((u32) var_v0_2 < (u32) ((D_8008FD8C * 0x32C) + &D_800CC2D0));
    }
    if (var_f2_2 < 300.0f) {
        var_f2_2 = 300.0f;
    }
    temp_f2 = var_f2_2 + 100.0f;
    arg0->unk2F8 = (f32) (arg0->unk2BC + (2.0f * temp_f2));
    arg0->unk300 = (f32) arg0->unk2C4;
    arg0->unk2FC = (f32) (arg0->unk2C0 + (temp_f2 * 0.5f));
}*/


#pragma GLOBAL_ASM("asm/nonmatchings/game_14EE80/func_15121C00.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/game_14EE80/func_15121C64.s")
void func_15121C64(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {

}
