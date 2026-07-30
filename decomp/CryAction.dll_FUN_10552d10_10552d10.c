
/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10552d10(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 < 1000000)) {
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_10551180(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}

