
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


// ===== [d1] FUN_10a5d660 @10a5d660  (25 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __fastcall FUN_10a5d660(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10a5dda0(&DAT_1139eb9e);
  *param_1 = uVar1;
  return param_1;
}


// [d1] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// ===== [d1] FUN_103dba30 @103dba30  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dba30(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4280(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c3620();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// [d1] FUN_10552e20 @10552e20  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// ===== [d1] FUN_101c3720 @101c3720  (90 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c3720(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 < 1000000)) {
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_101c4430(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// [d1] FUN_103dbbb0 @103dbbb0  (emitted in an earlier root)

// [d1] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

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


// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)

// ===== [d2] FUN_101c3620 @101c3620  (113 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c3620(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != 0xffffffff) {
    if (999999 < param_2) {
      uVar2 = FUN_101c3140(param_2 - 1000000,param_3);
      return uVar2;
    }
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_101c4280(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d2] FUN_101c4280 @101c4280  (31 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c4280(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar1 = FUN_101c48a0(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_101c3cd0(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    *param_2 = (int)*(float *)(param_1 + 0x1c);
    return 1;
  case 3:
    *param_2 = (uint)(*(char *)(param_1 + 0x1c) != '\0');
    return 1;
  case 7:
    uVar1 = FUN_101c48d0(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_101c4900(param_1 + 0x1c,param_2);
    return uVar1;
  case 0xffffffff:
  case 4:
  case 5:
  case 6:
    *param_2 = *(uint *)(param_1 + 0x1c);
    return 1;
  default:
    return 0;
  }
}


// [d2] FUN_10552d10 @10552d10  (emitted in an earlier root)

// ===== [d2] FUN_101c4430 @101c4430  (31 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c4430(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar2 = FUN_101c49e0(param_1 + 0x1c,param_2);
    return uVar2;
  case 1:
    uVar2 = FUN_101c3d00(param_1 + 0x1c,param_2);
    return uVar2;
  case 2:
    uVar1 = FUN_112beda0();
    *param_2 = uVar1;
    return 1;
  case 3:
    *param_2 = (uint)(*(char *)(param_1 + 0x1c) != '\0');
    return 1;
  case 7:
    uVar2 = FUN_101c4a10(param_1 + 0x1c,param_2);
    return uVar2;
  case 8:
    uVar2 = FUN_101c4a40(param_1 + 0x1c,param_2);
    return uVar2;
  case 0xffffffff:
  case 4:
  case 5:
  case 6:
    *param_2 = *(uint *)(param_1 + 0x1c);
    return 1;
  default:
    return 0;
  }
}


// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// [d2] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// [d2] FUN_101c4350 @101c4350  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

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

