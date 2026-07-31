
/* [RE-AUTO c0] */

uint __thiscall FUN_10551270(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar3 = piVar1[1] - *piVar1 >> 2;
  if ((param_2 < uVar3) && (uVar3 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar3)) {
    uVar3 = piVar1[3];
    uVar2 = *(uint *)(uVar3 + param_2 * 4);
    if (-1 < (int)uVar2) {
      uVar3 = FUN_103d8940();
      if (uVar2 != 0xffffffff) {
        uVar3 = FUN_103c9820(uVar2);
        if (uVar2 < 1000000) {
          uVar3 = FUN_10551520(uVar2,*param_3,param_3[1],param_3[2]);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}

