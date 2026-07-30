
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_11398e60(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(*param_1 + 0xd8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xd8))();
    uVar3 = (**(code **)(*piVar2 + 8))();
    if ((uVar3 >> 2 & 1) == 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0xd8))();
      (**(code **)(*piVar2 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x11398e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xd8))();
    return uVar4;
  }
  return 0;
}

