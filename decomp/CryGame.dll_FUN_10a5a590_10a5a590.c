
/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10a5a590(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x2f] != 0) {
    iVar1 = (**(code **)(*param_1 + 800))();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x648))();
      (**(code **)(*param_1 + 0x648))();
    }
    else {
      (**(code **)(*param_1 + 800))();
      iVar1 = (**(code **)(*param_1 + 800))();
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x14))();
    }
    uVar2 = FUN_11077e10(param_2,param_3);
    return uVar2;
  }
  return 0;
}

