// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSetTarget vtbl[4] @105c5700 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105c5700(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_7;
  char local_6;
  char local_5;
  
  local_10 = 0;
  cVar1 = FUN_103f8050(0,&local_10);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  piVar4 = *(int **)(param_1 + 0x2c);
  local_6 = '\0';
  if (((1 < (uint)(piVar4[1] - *piVar4 >> 2)) && (4 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar4[3] + 4))) {
    FUN_103d8940(*(int *)(piVar4[3] + 4),&local_6);
    FUN_101c36a0();
    if (local_6 != '\0') {
      FUN_10551c20(2,&local_14);
      piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_14);
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar4 + 0x2c8))();
        iVar6 = (**(code **)(*piVar3 + 0x2c8))();
        if (iVar5 == iVar6) {
          FUN_105c5ad0(local_14);
          return 2;
        }
      }
    }
  }
  (**(code **)(*piVar3 + 0x94))();
  piVar3 = *(int **)(param_1 + 0x2c);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0x3f800000;
  if (((8 < (uint)(piVar3[1] - *piVar3 >> 2)) && (0x20 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar3[3] + 0x20))) {
    FUN_103d8940(*(int *)(piVar3[3] + 0x20),&local_24);
    FUN_101c35a0();
  }
  piVar3 = *(int **)(param_1 + 0x2c);
  if (((9 < (uint)(piVar3[1] - *piVar3 >> 2)) && (0x24 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar3[3] + 0x24))) {
    FUN_103d8940(*(int *)(piVar3[3] + 0x24),&local_28);
    FUN_101c35a0();
  }
  piVar3 = *(int **)(param_1 + 0x2c);
  if (((10 < (uint)(piVar3[1] - *piVar3 >> 2)) &&
      (0x28 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar3[3] + 0x28))) {
    FUN_103d8940(*(int *)(piVar3[3] + 0x28),&local_2c);
    FUN_101c35a0();
  }
  if (*(int **)(DAT_113f3a18 + 0xd0) == (int *)0x0) {
    return 1;
  }
  iVar5 = (**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
  if (iVar5 == 0) {
    return 1;
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
  iVar5 = (**(code **)(*piVar3 + 0x28))();
  if (iVar5 == 0) {
    return 1;
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x28))();
  iVar5 = (**(code **)(*piVar3 + 0x28))();
  if (iVar5 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x28))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x28))();
    iVar5 = *piVar3;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar5 + 0xc))(&local_30,uVar2);
    piVar3 = (int *)*piVar3;
    if (local_30 != (undefined4 *)0x0) {
      piVar4 = local_30 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*local_30)(1);
      }
    }
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    local_7 = '\0';
    FUN_10569560(0xc,&local_7);
    local_5 = '\0';
    FUN_103db9b0(0xd,&local_5);
    if (local_5 != '\0') {
      (**(code **)(*piVar3 + 0xc))(local_10);
      cVar1 = (**(code **)(*piVar3 + 0x20))(&local_c);
      if (cVar1 != '\0') {
        FUN_105c5ad0(local_c);
        return 2;
      }
    }
    local_20 = CONCAT31(local_20._1_3_,1);
    local_1c = CONCAT31(local_1c._1_3_,1);
    local_18 = CONCAT31(local_18._1_3_,1);
    local_14 = CONCAT31(local_14._1_3_,1);
    FUN_103db9b0(0xe,&local_20);
    FUN_103db9b0(0xf,&local_1c);
    FUN_103db9b0(0x10,&local_18);
    FUN_103db9b0(0x11,&local_14);
    (**(code **)(*piVar3 + 0x4c))(local_10,local_20,local_1c,local_18,local_14);
    if (((local_7 == '\0') ||
        (cVar1 = (**(code **)(*piVar3 + 0x10))(&local_c,local_10,1), cVar1 == '\0')) &&
       ((cVar1 = (**(code **)(*piVar3 + 0x14))(&local_c), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*piVar3 + 0x10))(&local_c,local_10,0), cVar1 == '\0')))) {
      return 1;
    }
    FUN_105c5ad0(local_c);
    if (local_5 != '\0') {
      (**(code **)(*piVar3 + 0x44))(local_c);
    }
    return 2;
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSetTarget vtbl[7] @10622220 =====

char * FUN_10622220(void)

{
  return "CSetTarget";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSetTarget vtbl[10] @10627550 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10627550(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CSetTarget vtbl[13] @105c64f0 =====

void FUN_105c64f0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
