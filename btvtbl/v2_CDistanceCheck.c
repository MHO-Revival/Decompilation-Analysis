// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CDistanceCheck vtbl[4] @105f6ba0 =====

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
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int *piStack_18;
  char cStack_12;
  char cStack_11;
  
  fStack_20 = param_1;
  if ((DAT_113f395c & 1) == 0) {
    DAT_113f395c = DAT_113f395c | 1;
    FUN_10a5d660();
  }
  iStack_1c = 0;
  cVar2 = FUN_103dba30(0,&iStack_1c);
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
  piStack_18 = piVar4;
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
    piVar4 = piStack_18;
    if (uVar6 == 0) {
      cVar2 = FUN_10552e20(6,&fStack_2c);
      piVar4 = piStack_18;
      if (cVar2 == '\0') {
        return 1;
      }
      pfVar7 = (float *)(**(code **)(*piStack_18 + 0x98))(&uStack_3c,&fStack_2c);
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
  FUN_103d8940(*(int *)(piVar8[3] + 0x14),&piStack_18);
  cVar2 = FUN_101c3720();
  if (cVar2 == '\0') {
    return 1;
  }
  piVar8 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(piStack_18);
  if (piVar8 == (int *)0x0) {
    return 1;
  }
  pfVar7 = (float *)(**(code **)(*piVar8 + 200))(&uStack_3c);
LAB_105f6d44:
  fStack_2c = *pfVar7;
  fStack_28 = pfVar7[1];
  fStack_24 = pfVar7[2];
  if (piVar4 != (int *)0x0) {
    cStack_11 = '\0';
    cVar2 = FUN_103db9b0(8,&cStack_11);
    if ((cVar2 == '\0') || (cStack_11 == '\0')) {
      if (*(char *)((int)param_1 + 0x60) == '\0') {
        pfVar7 = (float *)(**(code **)(*piVar4 + 200))(&uStack_3c);
        fStack_40 = SQRT((pfVar7[1] - fStack_28) * (pfVar7[1] - fStack_28) +
                         (*pfVar7 - fStack_2c) * (*pfVar7 - fStack_2c) +
                         (pfVar7[2] - fStack_24) * (pfVar7[2] - fStack_24));
      }
      else {
        pfVar7 = (float *)(**(code **)(*piVar4 + 200))(&uStack_3c);
        fStack_40 = SQRT((pfVar7[1] - fStack_28) * (pfVar7[1] - fStack_28) +
                         (*pfVar7 - fStack_2c) * (*pfVar7 - fStack_2c));
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
      }
    }
    else {
      iVar9 = (**(code **)(*piVar4 + 200))(&uStack_3c);
      fStack_40 = (float)((uint)(*(float *)(iVar9 + 8) - fStack_24) & DAT_112fcb10);
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
    }
    piStack_18 = (int *)(float)iStack_1c;
    cStack_12 = '\0';
    cVar2 = FUN_103db9b0(7,&cStack_12);
    if ((cVar2 != '\0') && (cStack_12 != '\0')) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
      iVar9 = *piVar4;
      uVar3 = (**(code **)(**(int **)((int)fStack_20 + 0x54) + 0xc))();
      piVar4 = (int *)(**(code **)(iVar9 + 0xc))(uVar3);
      if ((piVar4 != (int *)0x0) &&
         ((piVar4 = (int *)(**(code **)(*piVar4 + 800))(), piVar4 != (int *)0x0 &&
          (iVar9 = (**(code **)(*piVar4 + 0xa8))(), iVar9 == 1)))) {
        fVar12 = (float10)FUN_105f73f0();
        fStack_20 = (float)fVar12;
        if ((float10)_DAT_1130d5f0 < ABS(fVar12)) {
          fStack_40 = fStack_40 / fStack_20;
        }
      }
    }
    fStack_40 = fStack_40 - (float)piStack_18;
    if (fStack_40 < DAT_113c1280) {
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
    if (fStack_40 == DAT_113c1280) {
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
    if (DAT_113c1280 < fStack_40) {
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

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CDistanceCheck vtbl[7] @106217e0 =====

char * FUN_106217e0(void)

{
  return "CDistanceCheck";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CDistanceCheck vtbl[10] @106241e0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_106241e0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,100,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CDistanceCheck vtbl[13] @105f73e0 =====

void FUN_105f73e0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
