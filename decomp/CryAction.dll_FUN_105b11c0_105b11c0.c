
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b11c0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_c;
  uint local_8;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar1 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
  if (piVar3 != (int *)0x0) {
    local_8 = local_8 & 0xffffff00;
    cVar2 = FUN_103db9b0(1,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x290))(local_8);
      return 2;
    }
    cVar2 = FUN_103db9b0(0,&local_c);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x280))(local_c);
      return 2;
    }
  }
  return 1;
}

