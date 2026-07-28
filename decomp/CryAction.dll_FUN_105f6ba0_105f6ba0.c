
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_105f6ba0(float param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  float10 fVar12;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int *local_18;
  char local_12;
  char local_11;
  
  local_20 = param_1;
  if ((DAT_113f395c & 1) == 0) {
    DAT_113f395c = DAT_113f395c | 1;
    FUN_10a5d660();
  }
  local_1c = 0;
  cVar2 = FUN_103dba30(0,&local_1c);
  if (cVar2 == '\0') {
    return 1;
  }
  cVar2 = FUN_103dbbb0(3,&DAT_113f3958);
  if (cVar2 == '\0') {
    return 1;
  }
  iVar9 = **(int **)(DAT_113f3a18 + 0x50);
  uVar3 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar9 + 0x2c))(uVar3);
  local_18 = piVar4;
  if ((DAT_113f395c & 2) == 0) {
    DAT_113f395c = DAT_113f395c | 2;
    FUN_10a5d660();
  }
  cVar2 = FUN_103dbbb0(1,&DAT_113f3960);
  if (cVar2 != '\0') {
    pbVar10 = &DAT_113069fc;
    pbVar5 = (byte *)FUN_10a5ec80();
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_105f6c91:
        uVar6 = -(uint)bVar11 | 1;
        goto LAB_105f6c96;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_105f6c91;
      pbVar5 = pbVar5 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_105f6c96:
    piVar4 = local_18;
    if (uVar6 == 0) {
      cVar2 = FUN_10552e20(6,&local_2c);
      piVar4 = local_18;
      if (cVar2 == '\0') {
        return 1;
      }
      pfVar7 = (float *)(**(code **)(*local_18 + 0x98))(&uStack_3c,&local_2c);
      goto LAB_105f6d44;
    }
  }
  piVar8 = *(int **)((int)param_1 + 0x2c);
  if ((uint)(piVar8[1] - *piVar8 >> 2) < 6) {
    return 1;
  }
  if ((int)(piVar8[4] - piVar8[3] & 0xfffffffcU) < 0x15) {
    return 1;
  }
  if (*(int *)(piVar8[3] + 0x14) < 0) {
    return 1;
  }
  FUN_103d8940(*(int *)(piVar8[3] + 0x14),&local_18);
  cVar2 = FUN_101c3720();
  if (cVar2 == '\0') {
    return 1;
  }
  piVar8 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_18);
  if (piVar8 == (int *)0x0) {
    return 1;
  }
  pfVar7 = (float *)(**(code **)(*piVar8 + 200))(&uStack_3c);
LAB_105f6d44:
  local_2c = *pfVar7;
  local_28 = pfVar7[1];
  local_24 = pfVar7[2];
  if (piVar4 != (int *)0x0) {
    local_11 = '\0';
    cVar2 = FUN_103db9b0(8,&local_11);
    if ((cVar2 == '\0') || (local_11 == '\0')) {
      if (*(char *)((int)param_1 + 0x60) == '\0') {
        pfVar7 = (float *)(**(code **)(*piVar4 + 200))(&uStack_3c);
        local_40 = SQRT((pfVar7[1] - local_28) * (pfVar7[1] - local_28) +
                        (*pfVar7 - local_2c) * (*pfVar7 - local_2c) +
                        (pfVar7[2] - local_24) * (pfVar7[2] - local_24));
      }
      else {
        pfVar7 = (float *)(**(code **)(*piVar4 + 200))(&uStack_3c);
        local_40 = SQRT((pfVar7[1] - local_28) * (pfVar7[1] - local_28) +
                        (*pfVar7 - local_2c) * (*pfVar7 - local_2c));
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
      }
    }
    else {
      iVar9 = (**(code **)(*piVar4 + 200))(&uStack_3c);
      local_40 = (float)((uint)(*(float *)(iVar9 + 8) - local_24) & DAT_112fcb10);
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
    }
    local_18 = (int *)(float)local_1c;
    local_12 = '\0';
    cVar2 = FUN_103db9b0(7,&local_12);
    if ((cVar2 != '\0') && (local_12 != '\0')) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
      iVar9 = *piVar4;
      uVar3 = (**(code **)(**(int **)((int)local_20 + 0x54) + 0xc))();
      piVar4 = (int *)(**(code **)(iVar9 + 0xc))(uVar3);
      if ((piVar4 != (int *)0x0) &&
         ((piVar4 = (int *)(**(code **)(*piVar4 + 800))(), piVar4 != (int *)0x0 &&
          (iVar9 = (**(code **)(*piVar4 + 0xa8))(), iVar9 == 1)))) {
        fVar12 = (float10)FUN_105f73f0();
        local_20 = (float)fVar12;
        if ((float10)_DAT_1130d5f0 < ABS(fVar12)) {
          local_40 = local_40 / local_20;
        }
      }
    }
    local_40 = local_40 - (float)local_18;
    if (local_40 < DAT_113c1280) {
      pbVar10 = &DAT_113a33e4;
      pbVar5 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_105f6f22:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_105f6f27;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_105f6f22;
        pbVar5 = pbVar5 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_105f6f27:
      if (uVar6 == 0) {
        return 2;
      }
    }
    if (local_40 == DAT_113c1280) {
      pbVar10 = &DAT_113bed9c;
      pbVar5 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_105f6f80:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_105f6f85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_105f6f80;
        pbVar5 = pbVar5 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_105f6f85:
      if (uVar6 == 0) {
        return 2;
      }
    }
    if (DAT_113c1280 < local_40) {
      pbVar10 = &DAT_113a3314;
      pbVar5 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_105f6fd0:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_105f6fd5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_105f6fd0;
        pbVar5 = pbVar5 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_105f6fd5:
      if (uVar6 == 0) {
        return 2;
      }
    }
  }
  return 1;
}

