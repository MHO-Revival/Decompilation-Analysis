
// ===== [d0] FUN_105f6ba0 @105f6ba0  (1100 bytes) =====

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


// [d1] FUN_103dba30 @103dba30  (emitted in an earlier root)

// [d1] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d1] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d1] FUN_103dbbb0 @103dbbb0  (emitted in an earlier root)

// [d1] FUN_10552e20 @10552e20  (emitted in an earlier root)

// [d1] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// [d1] FUN_101c3720 @101c3720  (emitted in an earlier root)

// ===== [d1] FUN_105f73f0 @105f73f0  (175 bytes) =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffb : 0x105f7411 */
/* WARNING: Removing unreachable block (ram,0x105f740d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0] */

float10 __fastcall FUN_105f73f0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(char *)(param_1 + 0x38) != *(char *)(param_1 + 0x39)) {
    fVar1 = (float10)FUN_101d15e0();
    return fVar1;
  }
  fVar1 = (float10)FUN_101d15e0();
  fVar2 = (float10)FUN_101d15e0();
  fVar3 = (float10)FUN_101d15e0();
  fVar4 = (float10)FUN_101d15e0();
  fVar5 = (float10)FUN_101d15e0();
  fVar6 = (float10)FUN_101d15e0();
  return ((float10)(float)fVar5 * (float10)DAT_113063e0 + (float10)DAT_113c12d0) *
         ((float10)(float)fVar2 + (float10)(float)fVar1 + (float10)(float)fVar3 +
         (float10)(float)fVar4) + fVar6;
}


// [d2] FUN_101c3620 @101c3620  (emitted in an earlier root)

// [d2] FUN_101c4280 @101c4280  (emitted in an earlier root)

// [d2] FUN_101c4350 @101c4350  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)

// [d2] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// [d2] FUN_10552d10 @10552d10  (emitted in an earlier root)

// [d2] FUN_101c4430 @101c4430  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// ===== [d2] FUN_101d15e0 @101d15e0  (96 bytes) =====

/* [RE-AUTO c0] */

float10 __fastcall FUN_101d15e0(float *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = *param_1;
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    *(ushort *)((int)&local_8 + uVar4) =
         *(ushort *)((int)&local_8 + uVar4) ^ *(ushort *)((int)param_1 + uVar4 + 4);
    uVar3 = uVar4 + 2;
  } while (uVar4 + 3 < 4);
  if (uVar4 + 2 < 4) {
    pbVar1 = (byte *)((int)&local_8 + uVar4 + 2);
    *pbVar1 = *pbVar1 ^ *(byte *)(uVar4 + 6 + (int)param_1);
  }
  uVar3 = 3;
  uVar4 = 0;
  do {
    if (3 < uVar3) break;
    uVar2 = *(undefined1 *)((int)&local_8 + uVar4);
    *(undefined1 *)((int)&local_8 + uVar4) = *(undefined1 *)((int)&local_8 + uVar3);
    uVar4 = uVar4 + 2;
    *(undefined1 *)((int)&local_8 + uVar3) = uVar2;
    uVar3 = uVar3 - 2;
  } while (uVar4 < 4);
  return (float10)local_8;
}

