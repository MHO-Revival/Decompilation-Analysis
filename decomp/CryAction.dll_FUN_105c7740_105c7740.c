
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105c7740(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *local_10;
  undefined4 *local_c;
  char local_5;
  
  bVar3 = false;
  bVar2 = false;
  local_10 = (undefined4 *)0x0;
  if ((*(int **)(DAT_113f3a18 + 0xd0) != (int *)0x0) &&
     (iVar5 = (**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))(), iVar5 != 0)) {
    piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
    iVar5 = (**(code **)(*piVar6 + 0x24))();
    if (iVar5 != 0) {
      piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0x24))();
      bVar3 = true;
      bVar2 = false;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x38))(&local_10);
      if (*piVar6 != 0) {
        piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x24))();
        bVar3 = true;
        bVar2 = true;
        piVar6 = (int *)(**(code **)(*piVar6 + 0x38))(&local_c);
        local_5 = '\x01';
        if (*(int *)(*piVar6 + 8) != 0) goto LAB_105c77fa;
      }
    }
  }
  local_5 = '\0';
LAB_105c77fa:
  if ((bVar2) && (local_c != (undefined4 *)0x0)) {
    piVar6 = local_c + 1;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*local_c)(1);
    }
  }
  if ((bVar3) && (local_10 != (undefined4 *)0x0)) {
    piVar6 = local_10 + 1;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*local_10)(1);
    }
  }
  if (local_5 != '\0') {
    piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x24))();
    (**(code **)(*piVar6 + 0x38))(&local_10);
    uVar7 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar6 = (int *)FUN_103dd050(uVar7);
    if (local_10 != (undefined4 *)0x0) {
      piVar1 = local_10 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_10)(1);
      }
    }
    if ((piVar6 != (int *)0x0) && (piVar6[0x48] != *(int *)(param_1 + 0x20))) {
      (**(code **)(*piVar6 + 0x48))();
    }
  }
  iVar5 = FUN_103d8550(0);
  if ((((iVar5 != 0) && (iVar5 = FUN_103d8550(1), iVar5 != 0)) &&
      (cVar4 = FUN_103c2e40(iVar5), cVar4 != '\0')) && (cVar4 = FUN_103d88f0(0), cVar4 != '\0')) {
    return 2;
  }
  return 1;
}

