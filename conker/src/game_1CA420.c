#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519CF70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519CFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519CFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519D030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519D240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519D454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519D9F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E3BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E61C.s")
/*void func_1519E61C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) || (temp_t6 == 9)) {
        func_1516972C(temp_t6);
    }
}*/



void func_1519E65C(s32 arg0) {
    func_1519CF70(3);
    func_1519CF70(4);
}

void func_1519E688() {
    func_1519CF70(3);
    func_1519CF70(4);
    func_15147D64(0, 9);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E6BC.s")
/*void func_1519E6BC(struct127 *arg0) {
    s32 sp34;
    s32 sp30;
    s32 *sp2C;
    s32 temp_v0;

    func_1519E688();
    if (D_800E0920 == 0) {
        sp34 = 0;
        sp2C = arg0;
        sp30 = arg0->unk3B;
        temp_v0 = func_151491F4(0x12C, -1, 9, 0, 4, 0xC, 0xFF, 0);
        D_800E0920 = temp_v0;
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp2C, 0xC);
        }
    }
}*/



#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E8CC.s")
/*void func_1519E8CC(u8 *arg0) {
    func_1514EDF0(arg0->unk28);
    func_1514933C(arg0);
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E8F8.s")


#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E924.s")
/*void func_1519E924(void) {
    D_800E0920 = 0;
    func_1514933C();
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/game_1CA420/func_1519E948.s")
