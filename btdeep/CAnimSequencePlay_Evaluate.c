
// ===== [d0] FUN_10554370 @10554370  (3135 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""_Lemon""
     ""False"" */

char __fastcall FUN_10554370(float param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f4 [25];
  uint local_90;
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  float local_3c;
  float local_38;
  int *local_34;
  char local_2d;
  float local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  float local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  local_90 = 0;
  local_14 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar4 = *piVar3;
  (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar4 + 0xc))();
  if (piVar3 == (int *)0x0) {
    return '\x01';
  }
  local_48 = piVar3;
  FUN_10a5d660();
  fVar10 = local_14;
  cVar2 = FUN_103dbbb0();
  if (cVar2 == '\0') {
    return '\x01';
  }
  local_5c = 1.0;
  local_58 = 1.0;
  local_54 = 1.0;
  FUN_10552e70();
  local_1b = '\0';
  FUN_103db9b0();
  local_18 = (int *)(*(int *)((int)fVar10 + 0x20) + 0x14);
  if (local_18 == (int *)0x0) {
    return '\x01';
  }
  local_50 = (int *)(**(code **)(*piVar3 + 800))();
  if ((local_50 != (int *)0x0) && (iVar4 = (**(code **)(*local_50 + 0xa8))(), iVar4 == 1)) {
    if ((char)local_18[0x1b] == '\0') {
      FUN_10a5d940();
      cVar2 = FUN_10a68b30();
      if (cVar2 == '\0') goto LAB_1055447c;
    }
    FUN_10a5dbf0();
    *(undefined1 *)(local_18 + 0x1b) = 1;
  }
LAB_1055447c:
  if (*(char *)(*(int *)((int)fVar10 + 0x20) + 0xd8) == '\0') {
    iVar4 = *piVar3;
    FUN_10a5ec80();
    cVar2 = (**(code **)(iVar4 + 0xb8))();
    if (cVar2 != '\0') {
      return '\x03';
    }
    *(undefined1 *)(local_18 + 0x1b) = 0;
    return '\x02';
  }
  local_68 = 0;
  iVar4 = **(int **)(DAT_113f3a18 + 0x50);
  (**(code **)(**(int **)((int)fVar10 + 0x54) + 0xc))();
  local_50 = (int *)(**(code **)(iVar4 + 0x2c))();
  if ((local_50 == (int *)0x0) || (iVar4 = FUN_10a5f050(), iVar4 == 0)) {
    return '\x01';
  }
  local_1c = '\x01';
  cVar2 = FUN_103db9b0();
  piVar3 = local_48;
  if ((cVar2 != '\0') && (local_1c == '\0')) {
    (**(code **)(*local_48 + 0xa4))();
    FUN_10a5d620();
    FUN_10424220();
    if (local_20 == local_18) {
      return '\x01';
    }
  }
  local_1a = '\0';
  FUN_103db9b0();
  if (local_1a == '\0') {
    iVar4 = (**(code **)(*piVar3 + 800))();
    local_c = (double)CONCAT44(iVar4,(undefined4)local_c);
    if (iVar4 != 0) {
      iVar4 = *piVar3;
      FUN_10a5d940();
      local_68 = (**(code **)(iVar4 + 0xc4))();
      local_18 = *(int **)((int)local_c._4_4_ + 0x14);
      FUN_103dba30();
      if (0 < local_68) {
        local_c = (double)((ulonglong)local_c & 0xffffffff);
        iVar4 = (**(code **)(*local_18 + 0x24))();
        piVar3 = local_48;
        if (iVar4 == 0) {
          return '\x01';
        }
        (**(code **)(*local_18 + 0x14))();
      }
    }
  }
  FUN_10a5d660();
  local_84 = CONCAT31(local_84._1_3_,1);
  cVar2 = FUN_103dbbb0();
  if ((cVar2 != '\0') && (cVar2 = FUN_10a5d8d0(), cVar2 != '\0')) {
    iVar4 = *piVar3;
    FUN_10a5ec80();
    cVar2 = (**(code **)(iVar4 + 0xb8))();
    local_84 = local_84 & 0xff;
    if (cVar2 != '\0') {
      local_84 = 0;
    }
  }
  local_18 = (int *)0x3f800000;
  local_60 = 1.0;
  cVar2 = FUN_103f8050();
  if (cVar2 != '\0') {
    fVar10 = ((local_60 + DAT_112fcac4) - (float)((uint)(local_60 - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = (int *)(((float)((uint)(fVar10 - DAT_112fca80) & DAT_112fcb10) +
                       fVar10 + DAT_112fca80) * DAT_113c12b8);
  }
  cVar2 = FUN_10552dd0();
  if (cVar2 != '\0') {
    fVar10 = ((local_60 + DAT_112fcac4) - (float)((uint)(local_60 - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = (int *)(((float)((uint)(fVar10 - DAT_112fca80) & DAT_112fcb10) +
                       fVar10 + DAT_112fca80) * DAT_113c12b8);
  }
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  FUN_10551c20();
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))();
  local_c._4_4_ = piVar5;
  if (piVar5 != (int *)0x0) {
    local_24 = (int *)(**(code **)(*piVar5 + 0x288))();
    piVar6 = (int *)(**(code **)(*piVar3 + 800))();
    if ((local_24 != (int *)0x0) && (piVar6 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar6 + 0x88))();
      iVar7 = (**(code **)(*local_24 + 0x88))();
      piVar5 = local_c._4_4_;
      if (iVar7 != iVar4) goto LAB_1055479e;
    }
    pfVar8 = (float *)(**(code **)(*piVar5 + 200))();
    local_80 = *pfVar8;
    local_7c = pfVar8[1];
    local_78 = pfVar8[2];
    (**(code **)(*piVar5 + 0x274))();
  }
LAB_1055479e:
  local_28 = 0;
  cVar2 = FUN_103db9b0();
  if (cVar2 == '\0') {
    local_64 = local_64 & 0xffffff00;
  }
  else if ((char)local_64 != '\0') {
    local_28 = 1;
  }
  cVar2 = FUN_103db9b0();
  if ((cVar2 != '\0') && (local_2d != '\0')) {
    FUN_10552e20();
  }
  FUN_103dba30();
  local_f4[0] = 0.0;
  local_f4[1] = 0.0;
  local_f4[2] = 0.0;
  local_f4[3] = 0.0;
  local_f4[4] = 0.0;
  local_f4[5] = 0.0;
  local_f4[6] = 0.0;
  local_f4[7] = 0.0;
  local_f4[8] = 0.0;
  local_f4[9] = 0.0;
  local_f4[10] = 0.0;
  local_f4[0xb] = 0.0;
  local_f4[0xc] = 0.0;
  local_f4[0xd] = 0.0;
  local_f4[0xe] = 0.0;
  local_f4[0xf] = 0.0;
  local_f4[0x10] = 0.0;
  local_f4[0x11] = 0.0;
  local_f4[0x12] = 0.0;
  local_f4[0x13] = 0.0;
  local_f4[0x14] = 0.0;
  local_10 = 0;
  local_f4[0x15] = 0.0;
  local_c = 0.0;
  local_f4[0x16] = 0.0;
  local_f4[0x17] = 0.0;
  if (0 < local_28) {
    local_24 = (int *)(**(code **)(*piVar3 + 800))();
    local_2c = 0.0;
    if (0 < local_28) {
      pfVar8 = local_f4;
      do {
        cVar2 = FUN_10551c20();
        if ((cVar2 != '\0') &&
           (local_4c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(),
           local_4c != (int *)0x0)) {
          piVar3 = (int *)(**(code **)(*local_4c + 0x288))();
          if ((piVar3 != (int *)0x0) && (local_24 != (int *)0x0)) {
            iVar4 = (**(code **)(*piVar3 + 0x88))();
            iVar7 = (**(code **)(*local_24 + 0x88))();
            piVar3 = local_48;
            if (iVar4 != iVar7) break;
          }
          (**(code **)(*local_4c + 200))();
          *pfVar8 = local_3c;
          pfVar8[1] = local_38;
          pfVar8[2] = (float)local_34;
        }
        pfVar8 = pfVar8 + 3;
        local_2c = (float)((int)local_2c + 1);
        piVar3 = local_48;
      } while ((int)local_2c < local_28);
    }
    local_64 = CONCAT31(local_64._1_3_,1);
  }
  (**(code **)(*piVar3 + 1000))();
  (**(code **)(*piVar3 + 0x3fc))();
  local_88 = local_88 & 0xffffff00;
  local_44 = 0;
  cVar2 = FUN_103db9b0();
  if (cVar2 != '\0') {
    pfVar8 = (float *)(**(code **)(*local_50 + 0x94))();
    local_74 = *pfVar8;
    fVar10 = local_80 - local_74;
    local_70 = pfVar8[1];
    local_6c = pfVar8[2];
    fVar12 = local_7c - local_70;
    local_34 = (int *)(local_78 - local_6c);
    local_4c = DAT_11305a58;
    local_24 = (int *)((float)local_34 * DAT_112fcab0 * DAT_11305a54);
    fVar11 = SQRT(fVar10 * fVar10 + fVar12 * fVar12);
    local_14 = DAT_113c1280;
    local_2c = DAT_113c1280;
    if ((float)DAT_113c12b0 < fVar11) {
      fVar10 = fVar10 * (1.0 / fVar11);
      fVar13 = (1.0 / fVar11) * fVar12 + 1.0;
      local_c = (double)fVar13;
      fVar11 = fVar11 + 1.0;
      fVar1 = SQRT(fVar10 * fVar10 + fVar13 * fVar13);
      fVar12 = 0.0;
      local_38 = (float)DAT_11305a60;
      if ((float)DAT_113c12b0 < fVar1) {
        fVar12 = fVar13 / fVar1;
        local_38 = (local_38 / fVar1) * fVar10;
      }
      local_3c = 1.0 / SQRT(fVar11 * fVar11 + (float)local_34 * (float)local_34);
      fVar11 = fVar11 * local_3c;
      local_3c = (float)local_34 * local_3c;
      local_4c = (int *)(fVar11 * fVar12);
      local_40 = (int *)(local_3c * fVar12);
      local_3c = local_3c * local_38;
      local_38 = local_38 * fVar11;
      local_34 = local_4c;
      local_2c = local_38;
      local_24 = local_40;
      local_14 = local_3c;
    }
    if ((char)local_88 != '\0') {
      local_44 = 1;
      FUN_103dba30();
      if ((0 < local_44) && (local_c = (double)((ulonglong)local_c & 0xffffffff), 0 < local_44)) {
        pfVar8 = local_f4;
        do {
          local_74 = 0.0;
          local_70 = 0.0;
          local_6c = 0.0;
          FUN_10552e70();
          iVar4 = (int)local_c._4_4_ + 1;
          local_c = (double)CONCAT44(iVar4,(undefined4)local_c);
          fVar13 = (local_14 * local_6c - local_2c * local_70) + local_74 * (float)local_4c;
          fVar12 = (local_2c * local_74 - (float)local_24 * local_6c) + local_70 * (float)local_4c;
          fVar11 = ((float)local_24 * local_70 - local_14 * local_74) + local_6c * (float)local_4c;
          fVar10 = local_14 * fVar11 - local_2c * fVar12;
          fVar11 = local_2c * fVar13 - (float)local_24 * fVar11;
          local_38 = fVar11 + local_70 + fVar11 + local_7c;
          fVar11 = (float)local_24 * fVar12 - local_14 * fVar13;
          local_3c = local_80 + local_74 + fVar10 + fVar10;
          fVar10 = fVar11 + local_6c;
          *pfVar8 = local_3c;
          pfVar8[1] = local_38;
          local_34 = (int *)(fVar10 + fVar11 + local_78);
          pfVar8[2] = (float)local_34;
          pfVar8 = pfVar8 + 3;
          piVar3 = local_48;
        } while (iVar4 < local_44);
      }
      (**(code **)(*piVar3 + 1000))();
      (**(code **)(*piVar3 + 0x3fc))();
      local_28 = local_44;
    }
  }
  piVar5 = (int *)(**(code **)(*piVar3 + 800))();
  if ((piVar5 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar5 + 0xa8))(), piVar5 = local_50, iVar4 == 1)) {
    if (local_1b == '\0') {
      iVar4 = FUN_10555db0();
      if (iVar4 != 0) {
        iVar4 = FUN_10555db0();
        fVar10 = DAT_113c12c8 / ((float)iVar4 * DAT_112fca7c);
        local_5c = fVar10 * local_5c;
        local_58 = fVar10 * local_58;
        local_54 = fVar10 * local_54;
      }
    }
    else {
      pfVar8 = (float *)(**(code **)(*local_50 + 0xbc))();
      if (((*pfVar8 != DAT_113c1280) &&
          (iVar4 = (**(code **)(*piVar5 + 0xbc))(), *(float *)(iVar4 + 4) != DAT_113c1280)) &&
         (iVar4 = (**(code **)(*piVar5 + 0xbc))(), *(float *)(iVar4 + 8) != DAT_113c1280)) {
        pfVar8 = (float *)(**(code **)(*piVar5 + 0xbc))();
        local_5c = local_5c / *pfVar8;
        iVar4 = (**(code **)(*piVar5 + 0xbc))();
        local_58 = local_58 / *(float *)(iVar4 + 4);
        iVar4 = (**(code **)(*piVar5 + 0xbc))();
        local_54 = local_54 / *(float *)(iVar4 + 8);
      }
    }
  }
  (**(code **)(*piVar3 + 0x3ec))();
  if ((char)local_84 != '\0') {
    local_90 = 1;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = (int *)0x0;
    FUN_10a5d940();
    puVar9 = (undefined4 *)FUN_10423fd0();
    iVar4 = (**(code **)(*piVar3 + 0x88))(*puVar9,local_18);
    local_19 = '\0';
    if (iVar4 == 0) goto LAB_10554f53;
  }
  local_19 = '\x01';
LAB_10554f53:
  if ((local_90 & 1) != 0) {
    FUN_10424220();
  }
  return (local_19 != '\0') * '\x02' + '\x01';
}


// [d1] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d1] FUN_103dbbb0 @103dbbb0  (emitted in an earlier root)

// [d1] FUN_10552e20 @10552e20  (emitted in an earlier root)

// ===== [d1] FUN_10a5f050 @10a5f050  (49 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_10a5f050(int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_10033350(*(undefined4 *)(*param_1 + 0x14),*(undefined4 *)(*param_1 + 0x10),param_2,pcVar2);
  return;
}


// ===== [d1] FUN_10a68b30 @10a68b30  (25 bytes) =====

/* [RE-AUTO c0] */

undefined1 __fastcall FUN_10a68b30(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x40b4) == 0) {
    return 0;
  }
  uVar1 = FUN_10ba30d0();
  return uVar1;
}


// ===== [d1] FUN_10555db0 @10555db0  (199 bytes) =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffb : 0x10555dd9 */
/* WARNING: Removing unreachable block (ram,0x10555dd5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0] */

void __fastcall FUN_10555db0(int param_1)

{
  if (*(char *)(param_1 + 0x38) != *(char *)(param_1 + 0x39)) {
    FUN_101cb830();
    return;
  }
  FUN_101cb830();
  FUN_101cb830();
  FUN_101cb830();
  FUN_101cb830();
  FUN_101cb830();
  FUN_101cb830();
  FUN_112be700();
  return;
}


// ===== [d1] FUN_10a5d940 @10a5d940  (13 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10a5d940(int *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x14);
  }
  return 0;
}


// ===== [d1] FUN_103f8050 @103f8050  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103f8050(int param_1,uint param_2,undefined4 param_3)

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
      cVar3 = FUN_101c4190(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c35a0();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// [d1] FUN_10551c20 @10551c20  (emitted in an earlier root)

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


// ===== [d1] FUN_10423fd0 @10423fd0  (121 bytes) =====

/* [RE-AUTO c0]
   calls: memcpy */

int * __thiscall FUN_10423fd0(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  *param_1 = (int)&DAT_113cc00c;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar3 - (int)(param_2 + 1);
    if (_Size != 0) {
      puVar2 = (undefined4 *)FUN_10653f70(_Size + 0xd);
      DAT_113f26c0 = DAT_113f26c0 + _Size + 0xd;
      *puVar2 = 1;
      *param_1 = (int)(puVar2 + 3);
      puVar2[1] = _Size;
      puVar2[2] = _Size;
      *(undefined1 *)(_Size + *param_1) = 0;
      if ((char *)*param_1 != param_2) {
        memcpy((char *)*param_1,param_2,_Size);
      }
    }
    return param_1;
  }
  return param_1;
}


// [d1] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

// ===== [d1] FUN_10552e70 @10552e70  (124 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_10552e70(int param_1,uint param_2,undefined4 param_3)

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
      cVar3 = FUN_10551180(param_3);
      return cVar3 != '\0';
    }
    if (((int)param_2 < piVar1[4] - piVar1[3] >> 2) &&
       (iVar4 = *(int *)(piVar1[3] + param_2 * 4), -1 < iVar4)) {
      FUN_103d8940(iVar4,param_3);
      uVar2 = FUN_10552d10();
      return (bool)uVar2;
    }
  }
  return false;
}


// [d1] FUN_10a5d620 @10a5d620  (emitted in an earlier root)

// [d1] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// ===== [d1] FUN_10a5dbf0 @10a5dbf0  (207 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_10a5dbf0(int *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_113dd8c0 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x14) == *(int *)(iVar2 + 0x10))) {
    if (param_2 == (char *)0x0) {
      param_2 = "";
    }
    iVar2 = FUN_10a5dda0(param_2);
    *param_1 = iVar2;
  }
  else {
    local_10 = local_20;
    local_c = local_10;
    FUN_1001ea30(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x10));
    pcVar1 = param_2;
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    FUN_10028a60(param_2,pcVar3);
    puVar4 = local_c;
    if (local_c == local_10) {
      puVar4 = &DAT_1139eb9e;
    }
    iVar2 = FUN_10a5dda0(puVar4);
    *param_1 = iVar2;
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10653dc0(local_c);
      FUN_112bed8e();
      return;
    }
  }
  FUN_112bed8e();
  return;
}


// [d1] FUN_10552dd0 @10552dd0  (emitted in an earlier root)

// ===== [d1] FUN_10424220 @10424220  (49 bytes) =====

/* [RE-AUTO c0] */

void __fastcall FUN_10424220(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_106542c0(piVar3);
    if (iVar2 < 1) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(iVar1 + -4));
      FUN_106540f0(piVar3);
    }
  }
  return;
}


// [d1] FUN_10a5d8d0 @10a5d8d0  (emitted in an earlier root)

// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)

// [d2] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// [d2] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d2] FUN_10552d10 @10552d10  (emitted in an earlier root)

// ===== [d2] FUN_10033350 @10033350  (152 bytes) =====

/* [RE-AUTO c0] */

uint FUN_10033350(byte *param_1,uint param_2,byte *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = param_1;
  param_1 = (byte *)(param_2 - (int)param_1);
  param_2 = param_4 - (int)param_3;
  puVar2 = &param_2;
  if ((int)param_1 <= (int)param_2) {
    puVar2 = (uint *)&param_1;
  }
  uVar3 = *puVar2;
  while (uVar1 = uVar3 - 4, 3 < uVar3) {
    if (*(int *)pbVar4 != *(int *)param_3) goto LAB_10033396;
    pbVar4 = pbVar4 + 4;
    param_3 = param_3 + 4;
    uVar3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_10033396:
    bVar5 = *pbVar4 < *param_3;
    if ((*pbVar4 != *param_3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar5 = pbVar4[1] < param_3[1], pbVar4[1] != param_3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar5 = pbVar4[2] < param_3[2], pbVar4[2] != param_3[2] ||
           ((uVar1 != 0xffffffff && (bVar5 = pbVar4[3] < param_3[3], pbVar4[3] != param_3[3]))))))))
        )))) {
      uVar3 = -(uint)bVar5 | 1;
      goto LAB_100333cc;
    }
  }
  uVar3 = 0;
LAB_100333cc:
  if (uVar3 == 0) {
    if ((int)param_1 < (int)param_2) {
      return 0xffffffff;
    }
    uVar3 = (uint)((int)param_2 < (int)param_1);
  }
  return uVar3;
}


// ===== [d2] FUN_10ba30d0 @10ba30d0  (147 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10ba30d0(int param_1,byte *param_2)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if ((*(char *)(param_1 + 0x1c) == '\0') || (*(char *)(param_1 + 0x1d) == '\0')) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = FUN_10a67920();
  iVar2 = *(int *)(iVar2 + 0x98);
  uVar3 = FUN_10a67920();
  if (iVar2 != *(int *)(uVar3 + 0x9c)) {
    do {
      pbVar5 = *(byte **)(iVar2 + 0x14);
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_10ba3135:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_10ba313a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_10ba3135;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_10ba313a:
      if (uVar3 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x24;
      uVar3 = FUN_10a67920();
    } while (iVar2 != *(int *)(uVar3 + 0x9c));
  }
  return uVar3 & 0xffffff00;
}


// ===== [d2] FUN_112be700 @112be700  (28 bytes) =====

/* [RE-AUTO c0] */

ulonglong __fastcall FUN_112be700(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_116f5f00 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ===== [d2] FUN_101cb830 @101cb830  (96 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_101cb830(undefined4 *param_1)

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
    if (3 < uVar3) {
      return local_8;
    }
    uVar2 = *(undefined1 *)((int)&local_8 + uVar4);
    *(undefined1 *)((int)&local_8 + uVar4) = *(undefined1 *)((int)&local_8 + uVar3);
    uVar4 = uVar4 + 2;
    *(undefined1 *)((int)&local_8 + uVar3) = uVar2;
    uVar3 = uVar3 - 2;
  } while (uVar4 < 4);
  return local_8;
}


// [d2] FUN_101c35a0 @101c35a0  (emitted in an earlier root)

// ===== [d2] FUN_101c4190 @101c4190  (29 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c4190(int param_1,float *param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar1 = FUN_101c4800(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_101c3c70(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    *param_2 = *(float *)(param_1 + 0x1c);
    return 1;
  case 3:
    uVar1 = FUN_103c2900(param_1 + 0x1c,param_2);
    return uVar1;
  case 5:
    *param_2 = (float)*(int *)(param_1 + 0x1c);
    return 1;
  case 7:
    uVar1 = FUN_101c4830(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_101c4860(param_1 + 0x1c,param_2);
    return uVar1;
  case 0xffffffff:
  case 4:
  case 6:
    *param_2 = (float)((double)*(int *)(param_1 + 0x1c) +
                      (double)(&DAT_113c13e0)[-(*(int *)(param_1 + 0x1c) >> 0x1f)]);
    return 1;
  default:
    return 0;
  }
}


// [d2] FUN_101c3720 @101c3720  (emitted in an earlier root)

// [d2] FUN_101c3620 @101c3620  (emitted in an earlier root)

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


// ===== [d2] memcpy @112be478  (6 bytes) =====

/* [RE-AUTO c0] */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x112be478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


// ===== [d2] FUN_10653f70 @10653f70  (80 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_10653f70(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_113f3a64 == 0) {
    FUN_106889b0();
  }
  uVar1 = (*DAT_113f3a34)(param_1,&local_8);
  LOCK();
  DAT_113f3a24 = DAT_113f3a24 + local_8;
  UNLOCK();
  LOCK();
  DAT_113f3a2c = DAT_113f3a2c + param_1;
  UNLOCK();
  LOCK();
  DAT_113f3a30 = DAT_113f3a30 + 1;
  UNLOCK();
  return uVar1;
}


// [d2] FUN_101c4350 @101c4350  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// [d2] FUN_10551180 @10551180  (emitted in an earlier root)

// ===== [d2] FUN_1001ea30 @1001ea30  (107 bytes) =====

/* [RE-AUTO c0]
   calls: memcpy */

void __thiscall FUN_1001ea30(int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 *_Dst;
  size_t _Size;
  uint local_8;
  
  _Size = (int)param_3 - (int)param_2;
  local_8 = _Size + 1;
  if (local_8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001fb50();
  }
  if (0x10 < local_8) {
    iVar1 = FUN_1001f4d0(local_8,&local_8);
    param_1[5] = iVar1;
    param_1[4] = iVar1;
    *param_1 = iVar1 + local_8;
  }
  _Dst = (undefined1 *)param_1[5];
  if (param_3 != param_2) {
    pvVar2 = memcpy(_Dst,param_2,_Size);
    _Dst = (undefined1 *)((int)pvVar2 + _Size);
  }
  param_1[4] = (int)_Dst;
  *_Dst = 0;
  return;
}


// ===== [d2] FUN_112bed8e @112bed8e  (15 bytes) =====

/* [RE-AUTO c0]
   calls: ___report_gsfailure */

void __fastcall FUN_112bed8e(int param_1)

{
  if (param_1 == DAT_113dd8c0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ===== [d2] FUN_10028a60 @10028a60  (254 bytes) =====

/* [RE-AUTO c0] */

int * __thiscall FUN_10028a60(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (param_2 != param_3) {
    puVar7 = (undefined1 *)param_1[4];
    uVar8 = (int)param_3 - (int)param_2;
    if ((int *)param_1[5] == param_1) {
      uVar4 = (int)param_1 + (0x10 - (int)puVar7);
    }
    else {
      uVar4 = *param_1 - (int)puVar7;
    }
    if (uVar4 <= uVar8) {
      param_3 = (undefined1 *)FUN_10028d10(uVar8);
      puVar3 = (undefined1 *)FUN_1001f4d0(param_3,&param_3);
      puVar7 = (undefined1 *)param_1[5];
      puVar6 = puVar3;
      for (iVar5 = param_1[4] - (int)puVar7; 0 < iVar5; iVar5 = iVar5 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      if (0 < (int)uVar8) {
        iVar5 = (int)param_2 - (int)puVar6;
        do {
          uVar8 = uVar8 - 1;
          *puVar6 = puVar6[iVar5];
          puVar6 = puVar6 + 1;
        } while (0 < (int)uVar8);
      }
      *puVar6 = 0;
      piVar2 = (int *)param_1[5];
      if ((piVar2 != param_1) && (piVar2 != (int *)0x0)) {
        FUN_10653dc0(piVar2);
      }
      param_1[4] = (int)puVar6;
      *param_1 = (int)(puVar3 + (int)param_3);
      param_1[5] = (int)puVar3;
      return param_1;
    }
    puVar6 = param_2 + 1;
    for (iVar5 = (int)param_3 - (int)puVar6; 0 < iVar5; iVar5 = iVar5 + -1) {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar7 = uVar1;
    }
    *(undefined1 *)(uVar8 + param_1[4]) = 0;
    *(undefined1 *)param_1[4] = *param_2;
    param_1[4] = param_1[4] + uVar8;
  }
  return param_1;
}


// ===== [d2] FUN_10653dc0 @10653dc0  (45 bytes) =====

/* [RE-AUTO c0] */

int FUN_10653dc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_113f3a64 == 0) {
    FUN_106889b0();
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = (*DAT_113f3a3c)(param_1);
    LOCK();
    UNLOCK();
    iVar2 = DAT_113f3a28;
    DAT_113f3a28 = DAT_113f3a28 + iVar1;
  }
  return iVar2;
}


// ===== [d2] FUN_106542c0 @106542c0  (16 bytes) =====

/* [RE-AUTO c0] */

int FUN_106542c0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}


// ===== [d2] FUN_106540f0 @106540f0  (53 bytes) =====

/* [RE-AUTO c0] */

int FUN_106540f0(int param_1)

{
  int iVar1;
  
  if (DAT_113f3a64 == 0) {
    FUN_106889b0();
  }
  if (param_1 != 0) {
    iVar1 = (*DAT_113f3a3c)(param_1);
    LOCK();
    DAT_113f3a28 = DAT_113f3a28 + iVar1;
    UNLOCK();
    return iVar1;
  }
  return 0;
}


// ===== [d2] FUN_10033a50 @10033a50  (65 bytes) =====

/* [RE-AUTO c0] */

uint FUN_10033a50(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_2 + 1);
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14) == uVar3) {
    uVar3 = FUN_100200d0(*(int *)(param_1 + 0x14),param_2,uVar3);
    if (uVar3 == 0) {
      return 1;
    }
  }
  return uVar3 & 0xffffff00;
}

