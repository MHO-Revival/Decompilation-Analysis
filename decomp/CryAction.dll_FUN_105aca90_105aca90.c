
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105aca90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = param_1;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(uVar3);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x364))();
    (**(code **)(*piVar2 + 0x68))();
    local_8 = (**(code **)(*piVar2 + 0x70))();
    if ((((local_8 != 6) && (local_8 != 7)) && (local_8 != 3)) && (local_8 != 5)) {
      return 3;
    }
    FUN_105572f0(0,&local_8);
  }
  return 1;
}

