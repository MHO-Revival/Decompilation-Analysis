
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105e83f0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  piVar1 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x68))();
  iVar3 = *piVar1;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar1 = (int *)(**(code **)(iVar3 + 0xc))(uVar2);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 800))();
    if (iVar3 != 0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x68))();
      iVar3 = (**(code **)(*piVar1 + 0x14))(5);
      if (iVar3 == 1) {
        return 3;
      }
      if (iVar3 == 0) {
        uStack_8 = uStack_8 & 0xffffff;
        FUN_10562100(0,(int)&uStack_8 + 3);
        FUN_10562100(2,(int)&uStack_8 + 3);
        return 2;
      }
    }
  }
  return 1;
}

