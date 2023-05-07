#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_150806A8.s")

void func_15080718(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg2 = 1 << (arg0 & 7);
    *arg1 = arg0 >> 3;
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080738.s")


#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080784.s")

void func_150807F4(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 32) {
        func_15080784();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080C64.s")

u8 func_15080CF4(void) {
    if (D_800D1941 == 0) {
        return 1;
    }
    return 0;
}
