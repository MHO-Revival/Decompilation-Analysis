
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __thiscall FUN_10e9cf30(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    return;
  }
  if ((*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x1a8))(), cVar2 != '\0')) {
    return;
  }
  piVar1 = param_3;
  if (param_2 != 1) {
    if (param_2 != 4) {
      return;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    FUN_10e9d570(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = param_1 + 8;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x14) = param_1 + 8;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  puVar4 = (uint *)param_3[4];
  if ((*puVar4 >> 1 & 1) == 0) {
    return;
  }
  param_2 = 1;
  if (*(int *)(puVar4[2] & 0xfffffffc) == 1) {
    puVar3 = puVar4 + 3;
  }
  else {
    puVar3 = (uint *)0x0;
  }
  local_8 = *puVar3;
  if (*(int *)(puVar4[4] & 0xfffffffc) == 1) {
    puVar4 = puVar4 + 5;
  }
  else {
    puVar4 = (uint *)0x0;
  }
  local_c = *puVar4;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x6c))();
    param_3 = (int *)CLevelSpawnBatchInfo__GetRecordByIndex(uVar5);
    if (param_3 != (int *)0x0) {
      FUN_10e977b0();
      local_10 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0xd8);
      cVar2 = FUN_116fc4b0(param_1 + 8,*(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0xbc),
                           &local_10);
      if (cVar2 == '\0') {
        FUN_10e977b0();
      }
    }
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_10e9d0a0;
  }
  param_3 = (int *)FUN_10e97c50(local_8,local_c);
  if (param_3 != (int *)0x0) {
    param_2 = CONCAT13(1,(undefined3)param_2);
    iVar7 = 3;
    piVar6 = (int *)*param_3;
    if (piVar6 != param_3) {
      do {
        if (10 < iVar7) break;
        FUN_10b9c510(piVar1,iVar7,piVar6 + 2);
        piVar6 = (int *)*piVar6;
        iVar7 = iVar7 + 1;
      } while (piVar6 != param_3);
    }
  }
LAB_10e9d0a0:
  param_3 = (int *)CONCAT22(0x100,(short)piVar1[1]);
  (**(code **)(*(int *)*piVar1 + 4))(param_3,(int)&param_2 + 3);
  param_3 = (int *)CONCAT22(0x101,(short)piVar1[1]);
  if (*piVar1 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(*piVar1 + 0x14);
  }
  (**(code **)(*piVar6 + 4))(param_3,&local_8);
  param_3 = (int *)CONCAT22(0x102,(short)piVar1[1]);
  if (*piVar1 == 0) {
    (**(code **)(_DAT_00000000 + 4))(param_3,&local_c);
    return;
  }
  (**(code **)(*(int *)(*piVar1 + 0x14) + 4))(param_3,&local_c);
  return;
}

