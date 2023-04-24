#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_150BB700(struct26 *arg0) {
    if (func_1509BE40(1, 16455, 6, 8192) != 0) {
        arg0->unk84 = (s32) (arg0->unk84 | 4096);
        return;
    }
    arg0->unk84 = (s32) (arg0->unk84 & -4097);
}
