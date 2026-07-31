
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b8660(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
  local_8 = param_1;
  cVar1 = FUN_103dba30(0,&local_8);
  if (cVar1 == '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
  iVar4 = *piVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(iVar4 + 0xc))(uVar3);
  if (piVar2 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar2 + 800))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*piVar2 + 800))();
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x4c))(local_8,1);
    }
  }
  return 2;
}

