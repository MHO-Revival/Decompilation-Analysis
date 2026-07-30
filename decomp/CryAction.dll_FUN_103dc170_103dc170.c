
/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dc170(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 unaff_ESI;
  undefined1 local_c [8];
  
  if (param_2 != 0xffffffff) {
    if (param_2 < 1000000) {
      if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
        cVar1 = FUN_101cec60(param_3);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
      return 0;
    }
    FUN_10a5d660();
    cVar1 = FUN_103dac40(param_2 - 1000000,local_c);
    if (cVar1 != '\0') {
      FUN_10a5d8a0(unaff_ESI);
    }
  }
  return 0;
}

