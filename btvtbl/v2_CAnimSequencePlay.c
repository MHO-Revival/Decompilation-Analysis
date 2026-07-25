
// ===== CAnimSequencePlay vtbl[0] @103d8a40 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d8a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_10653d70(0x24);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_103d8a90(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ===== CAnimSequencePlay vtbl[1] @103d8b60 =====

void __fastcall FUN_103d8b60(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x103d8b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    return;
  }
  return;
}


// ===== CAnimSequencePlay vtbl[2] @103dca70 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dca70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  return;
}


// ===== CAnimSequencePlay vtbl[3] @10554fc0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10554fc0(int param_1,undefined4 param_2)

{
  FUN_103dc9e0(param_2);
  if (*(int *)(param_1 + 0x20) != -0x14) {
    *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x80) = 0;
  }
  return;
}


// ===== CAnimSequencePlay vtbl[4] @10554370 =====

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


// ===== CAnimSequencePlay vtbl[5] @103d7a00 =====

void FUN_103d7a00(void)

{
  return;
}


// ===== CAnimSequencePlay vtbl[6] @103d7a30 =====

undefined4 __fastcall FUN_103d7a30(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== CAnimSequencePlay vtbl[7] @10555e80 =====

char * FUN_10555e80(void)

{
  return "CAnimSequencePlay";
}


// ===== CAnimSequencePlay vtbl[8] @103dc6d0 =====

void FUN_103dc6d0(void)

{
  FUN_10a5ec80();
  return;
}


// ===== CAnimSequencePlay vtbl[9] @103dc830 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc830(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  (**(code **)(*param_1 + 0x38))();
  pcVar1 = (code *)(**(code **)(*param_3 + 8))(param_1 + 0x16,param_2,param_1[0x15],param_1);
  (*pcVar1)();
  return;
}


// ===== CAnimSequencePlay vtbl[10] @10555ea0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10555ea0(undefined4 param_1,int *param_2)

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


// ===== CAnimSequencePlay vtbl[11] @103d9af0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d9af0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)FUN_10653d70(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
    *puVar3 = &PTR_FUN_113bf23c;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 2) != '\0')) {
    puVar3[1] = puVar3[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 **)(param_1 + 0x44) = puVar3;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar5 = 0;
  uVar4 = (uint)((int)*(undefined4 **)(param_1 + 0x14) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x14) < puVar3) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x44))();
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}


// ===== CAnimSequencePlay vtbl[12] @103d9b80 =====

/* [RE-AUTO c0]
   calls: _snprintf_s */

void __thiscall FUN_103d9b80(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 ***pppuVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined1 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int **ppiStack_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 *puStack_c0;
  int ***pppiStack_bc;
  int ***pppiStack_b8;
  undefined1 *puStack_b4;
  undefined1 **ppuStack_b0;
  undefined1 **ppuStack_ac;
  undefined1 **ppuStack_a4;
  undefined1 **ppuStack_a0;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&ppiStack_cc;
  local_c4 = param_2;
  if (*(char *)(*(int *)(param_1 + 0x44) + 0xc) == '\0') {
    puStack_e4 = local_c8;
    piStack_dc = (int *)0x0;
    piStack_e0 = (int *)&DAT_113bf21c;
    piStack_e8 = (int *)0x103d9bcf;
    (**(code **)(**(int **)(DAT_116f75dc + 8) + 4))();
    ppuStack_a4 = &puStack_b4;
    puStack_b4 = (undefined1 *)((uint)puStack_b4 & 0xffffff00);
    piStack_e8 = (int *)0x103d9be8;
    ppuStack_a0 = ppuStack_a4;
    uStack_ec = (int *)FUN_10a5ec80();
    pppiStack_bc = &ppiStack_cc;
    piVar5 = uStack_ec;
    do {
      piStack_e8 = piVar5;
      piVar5 = (int *)((int)piStack_e8 + 1);
    } while ((char)*piStack_e8 != '\0');
    pppiStack_b8 = pppiStack_bc;
    FUN_1001ea30();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100208d0();
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_1001ea30();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((puStack_c0 != &stack0xffffff2c) && (puStack_c0 != (undefined1 *)0x0)) {
      FUN_10653dc0();
    }
    uVar4 = 0;
    iVar2 = param_3[1] - *param_3 >> 0x1f;
    if ((param_3[1] - *param_3) / 0x18 + iVar2 != iVar2) {
      do {
        _snprintf_s((char *)&ppuStack_a4,0x7f,0xffffffff,"%s/");
        pppuVar3 = &ppuStack_a4;
        do {
          cVar1 = *(char *)pppuVar3;
          pppuVar3 = (undefined1 ***)((int)pppuVar3 + 1);
        } while (cVar1 != '\0');
        FUN_10028a60();
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((param_3[1] - *param_3) / 0x18));
    }
    iVar2 = param_3[1];
    if (iVar2 != *param_3) {
      param_3[1] = iVar2 + -0x18;
      if ((*(int *)(iVar2 + -4) != iVar2 + -0x18) && (*(int *)(iVar2 + -4) != 0)) {
        FUN_10653dc0();
      }
    }
    (**(code **)(*piStack_dc + 0xa4))();
    (**(code **)(*(int *)*piStack_e0 + 0x60))();
    if ((puStack_b4 != local_c8) && (puStack_b4 != (undefined1 *)0x0)) {
      FUN_10653dc0();
    }
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
      FUN_112bed8e();
      return;
    }
  }
  else {
    piStack_dc = (int *)0x103d9d7e;
    piStack_e0 = (int *)FUN_10a5ec80();
    ppuStack_b0 = &puStack_c0;
    piVar5 = piStack_e0;
    do {
      piStack_dc = piVar5;
      piVar5 = (int *)((int)piStack_dc + 1);
    } while ((char)*piStack_dc != '\0');
    puStack_e4 = (undefined1 *)0x103d9da8;
    ppuStack_ac = ppuStack_b0;
    FUN_1001ea30();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100208d0(iVar2,&piStack_e0,(int)&uStack_ec + 3);
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_1001ea30();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((ppiStack_cc != &piStack_e0) && (ppiStack_cc != (int **)0x0)) {
      FUN_10653dc0();
    }
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    piVar5 = (int *)0x0;
    piStack_e8 = (int *)((uint)((int)*(undefined4 **)(param_1 + 0x14) + (3 - (int)puVar6)) >> 2);
    if (*(undefined4 **)(param_1 + 0x14) < puVar6) {
      piStack_e8 = (int *)0x0;
    }
    if (piStack_e8 != (int *)0x0) {
      do {
        (**(code **)(*(int *)*puVar6 + 0x48))();
        piVar5 = (int *)((int)piVar5 + 1);
        puVar6 = puVar6 + 1;
      } while (piVar5 != piStack_e8);
    }
    iVar2 = param_3[1];
    if (iVar2 != *param_3) {
      param_3[1] = iVar2 + -0x18;
      if ((*(int *)(iVar2 + -4) != iVar2 + -0x18) && (*(int *)(iVar2 + -4) != 0)) {
        FUN_10653dc0();
      }
    }
  }
  FUN_112bed8e();
  return;
}


// ===== CAnimSequencePlay vtbl[13] @10554fb0 =====

void FUN_10554fb0(void)

{
  return;
}


// ===== CAnimSequencePlay vtbl[14] @103dc6f0 =====

void __fastcall FUN_103dc6f0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x103dc6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  return;
}

