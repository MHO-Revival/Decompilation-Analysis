
//######## CAnimSequenceIsPlaying  vtbl=11306150 ########
// -- Evaluate slot10@0x28 = 10554160

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10554160(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar1 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
  if (piVar3 != (int *)0x0) {
    FUN_10a5d660();
    cVar2 = FUN_103dbbb0(0,&local_8);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar3 + 0xc0))();
      if (cVar2 != '\0') {
        return 2;
      }
    }
    else {
      iVar1 = *piVar3;
      uVar4 = FUN_10a5ec80();
      cVar2 = (**(code **)(iVar1 + 0xb8))(uVar4);
      if (cVar2 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 10554150
// <no fn @10554150>

// -- slot13@0x34 = 105542d0
// <no fn @105542d0>


//######## CAnimSequencePlay  vtbl=113061cc ########
// -- Evaluate slot10@0x28 = 10554370

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


// -- slot4@0x10 = 10554360
// <no fn @10554360>

// -- slot13@0x34 = 10555e80
// <no fn @10555e80>


//######## CAnimSequenceSetInput  vtbl=113063e8 ########
// -- Evaluate slot10@0x28 = 10555f60

/* [RE-AUTO c0]
   strings:
     ""False""
     ""_Lemon"" */

undefined4 __fastcall FUN_10555f60(int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  int local_c4 [25];
  int *local_60;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  byte local_40;
  undefined3 uStack_3f;
  float local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  char local_1d;
  int local_1c;
  float local_18;
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = param_1;
  FUN_10a5d660();
  cVar4 = FUN_103dbbb0();
  if (cVar4 == '\0') {
    return 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  iVar6 = *piVar5;
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar5 = (int *)(**(code **)(iVar6 + 0xc))();
  if ((piVar5 == (int *)0x0) || (local_24 = piVar5, iVar6 = FUN_10a5f050(), iVar6 == 0)) {
    return 1;
  }
  local_12 = '\x01';
  cVar4 = FUN_103db9b0();
  if ((cVar4 != '\0') && (local_12 == '\0')) {
    (**(code **)(*piVar5 + 0xa4))();
    FUN_10a5d620();
    FUN_10424220();
    if (local_1c == local_34) {
      return 1;
    }
  }
  local_44 = 0;
  local_18 = (float)(**(code **)(*piVar5 + 800))();
  local_11 = '\0';
  FUN_103db9b0();
  if ((local_11 == '\0') && (local_18 != 0.0)) {
    iVar6 = *piVar5;
    FUN_10a5d940();
    (**(code **)(iVar6 + 0xc4))();
    piVar7 = *(int **)((int)local_18 + 0x14);
    FUN_103dba30();
    piVar5 = local_24;
    if (0 < local_44) {
      local_18 = 0.0;
      iVar6 = (**(code **)(*piVar7 + 0x24))();
      if (iVar6 == 0) {
        return 1;
      }
      (**(code **)(*piVar7 + 0x14))();
      piVar5 = local_24;
    }
  }
  FUN_10a5d660();
  local_34 = CONCAT31(local_34._1_3_,1);
  cVar4 = FUN_103dbbb0();
  if ((cVar4 != '\0') && (cVar4 = FUN_10a5d8d0(), cVar4 != '\0')) {
    iVar6 = *piVar5;
    FUN_10a5ec80();
    cVar4 = (**(code **)(iVar6 + 0xb8))();
    local_34 = local_34 & 0xff;
    if (cVar4 != '\0') {
      local_34 = 0;
    }
  }
  local_18 = 1.0;
  local_3c = 1.0;
  cVar4 = FUN_103f8050();
  if (cVar4 != '\0') {
    fVar12 = ((local_3c + DAT_112fcac4) - (float)((uint)(local_3c - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = ((float)((uint)(fVar12 - DAT_112fca80) & DAT_112fcb10) + fVar12 + DAT_112fca80) *
               DAT_113c12b8;
  }
  cVar4 = FUN_10552dd0();
  if (cVar4 != '\0') {
    fVar12 = ((local_3c + DAT_112fcac4) - (float)((uint)(local_3c - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = ((float)((uint)(fVar12 - DAT_112fca80) & DAT_112fcb10) + fVar12 + DAT_112fca80) *
               DAT_113c12b8;
  }
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_10551c20();
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))();
  local_30 = piVar5;
  if (piVar5 != (int *)0x0) {
    local_2c = (int *)(**(code **)(*piVar5 + 0x288))();
    piVar7 = (int *)(**(code **)(*local_24 + 800))();
    if ((local_2c != (int *)0x0) && (piVar7 != (int *)0x0)) {
      iVar6 = (**(code **)(*piVar7 + 0x88))();
      iVar8 = (**(code **)(*local_2c + 0x88))();
      piVar5 = local_30;
      if (iVar8 != iVar6) goto LAB_10556293;
    }
    puVar9 = (undefined4 *)(**(code **)(*piVar5 + 200))();
    local_54 = *puVar9;
    local_50 = puVar9[1];
    local_4c = puVar9[2];
  }
LAB_10556293:
  cVar4 = FUN_103db9b0();
  bVar1 = local_40 & -(cVar4 != '\0');
  _local_40 = CONCAT31(uStack_3f,bVar1);
  local_38 = (uint)(bVar1 != 0);
  cVar4 = FUN_103db9b0();
  if ((cVar4 != '\0') && (local_1d != '\0')) {
    FUN_10552e20();
  }
  FUN_103dba30();
  local_c4[0] = 0;
  local_c4[1] = 0;
  local_c4[2] = 0;
  local_c4[3] = 0;
  local_c4[4] = 0;
  local_c4[5] = 0;
  local_c4[6] = 0;
  local_c4[7] = 0;
  local_c4[8] = 0;
  local_c4[9] = 0;
  local_c4[10] = 0;
  local_c4[0xb] = 0;
  local_c4[0xc] = 0;
  local_c4[0xd] = 0;
  local_c4[0xe] = 0;
  local_c4[0xf] = 0;
  local_c4[0x10] = 0;
  local_c4[0x11] = 0;
  local_c4[0x12] = 0;
  local_c4[0x13] = 0;
  local_c4[0x14] = 0;
  local_10 = 0;
  local_c4[0x15] = 0;
  local_c = 0;
  local_8 = 0;
  local_c4[0x16] = 0;
  local_c4[0x17] = 0;
  if (0 < (int)local_38) {
    local_60 = (int *)(**(code **)(*local_24 + 800))();
    if (0 < (int)local_38) {
      local_2c = local_c4;
      iVar6 = local_28;
      uVar11 = 7;
      do {
        piVar5 = *(int **)(iVar6 + 0x2c);
        if ((((uVar11 < (uint)(piVar5[1] - *piVar5 >> 2)) &&
             ((int)uVar11 < piVar5[4] - piVar5[3] >> 2)) &&
            (uVar2 = *(uint *)(piVar5[3] + uVar11 * 4), -1 < (int)uVar2)) &&
           ((local_30 = (int *)FUN_103d8940(), iVar6 = local_28, uVar2 != 0xffffffff &&
            (uVar2 < 1000000)))) {
          if ((uVar2 < (uint)(local_30[3] - local_30[2] >> 2)) &&
             (cVar4 = FUN_101c4430(), cVar4 != '\0')) {
            bVar3 = true;
          }
          else {
            FUN_103c5000();
            bVar3 = false;
          }
          iVar6 = local_28;
          if ((bVar3) &&
             (piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(),
             iVar6 = local_28, local_58 = piVar5, piVar5 != (int *)0x0)) {
            local_30 = (int *)(**(code **)(*piVar5 + 0x288))();
            if ((local_30 != (int *)0x0) && (local_60 != (int *)0x0)) {
              iVar6 = (**(code **)(*local_60 + 0x88))();
              iVar8 = (**(code **)(*local_30 + 0x88))();
              piVar5 = local_58;
              if (iVar8 != iVar6) break;
            }
            (**(code **)(*piVar5 + 200))();
            piVar5 = local_2c;
            *local_2c = local_10;
            piVar5[1] = local_c;
            piVar5[2] = local_8;
            iVar6 = local_28;
          }
        }
        local_2c = local_2c + 3;
        iVar8 = uVar11 - 6;
        uVar11 = uVar11 + 1;
      } while (iVar8 < (int)local_38);
    }
    _local_40 = CONCAT31(uStack_3f,1);
  }
  piVar5 = local_24;
  (**(code **)(*local_24 + 1000))();
  (**(code **)(*piVar5 + 0x3fc))();
  piVar7 = (int *)(**(code **)(*piVar5 + 800))();
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 0xa8))(), iVar6 == 1)) {
    FUN_10a5d940();
    cVar4 = FUN_10a68b30();
    if (cVar4 != '\0') {
      FUN_10a5dbf0();
    }
  }
  if ((char)local_34 != '\0') {
    iVar6 = *piVar5;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    uVar10 = FUN_10a5ec80(local_18);
    iVar6 = (**(code **)(iVar6 + 0x88))(uVar10);
    if (iVar6 == 0) {
      return 1;
    }
  }
  return 2;
}


// -- slot4@0x10 = 10555f50
// <no fn @10555f50>

// -- slot13@0x34 = 10556f90
// <no fn @10556f90>


//######## CExecuteAIBehavior  vtbl=11307f60 ########
// -- Evaluate slot10@0x28 = 1057a970

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1057a970(uint param_1)

{
  int *piVar1;
  undefined4 uStack_8;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    piVar1 = *(int **)(param_1 + 0x2c);
    uStack_8 = param_1 & 0xffffff;
    if (((piVar1[1] - *piVar1 >> 2 != 0) && (0 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) &&
       (-1 < *(int *)piVar1[3])) {
      FUN_103d8940(*(int *)piVar1[3],(int)&uStack_8 + 3);
      FUN_101c36a0();
      if (uStack_8._3_1_ != '\0') {
        return 2;
      }
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x2c);
    uStack_8._3_1_ = (char)(param_1 >> 0x18);
    uStack_8._0_3_ = CONCAT12(1,(short)param_1);
    if (((piVar1[1] - *piVar1 >> 2 != 0) && (0 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) &&
       (-1 < *(int *)piVar1[3])) {
      FUN_103d8940(*(int *)piVar1[3],(int)&uStack_8 + 2);
      FUN_101c3550();
      return 3;
    }
  }
  return 3;
}


// -- slot4@0x10 = 1057a960
// <no fn @1057a960>

// -- slot13@0x34 = 1057ab50
// <no fn @1057ab50>


//######## CDecisionTreeSelector  vtbl=113097a0 ########
// -- Evaluate slot10@0x28 = 105a27d0

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105a27d0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_105a2840();
  uStack_8 = uStack_8 & 0xffffff;
  FUN_103db9b0(2,(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    FUN_105a2b90();
    iVar1 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) != iVar1) {
      uVar2 = FUN_105a2fa0(iVar1,iVar1,*(int *)(param_1 + 0x60),(int)&uStack_8 + 2,0);
      FUN_105a3200(uVar2,*(undefined4 *)(param_1 + 100),0,(int)&uStack_8 + 2);
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
  }
  return 2;
}


// -- slot4@0x10 = 105a2710

/* [RE-AUTO c0] */

void __fastcall FUN_105a2710(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_38 [20];
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 local_8 [4];
  
  FUN_103dc9d0();
  FUN_10a5d660();
  FUN_103dbbb0(0,local_8);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar3 = FUN_103dd050(uVar2);
  local_10 = local_20;
  local_c = local_10;
  FUN_1001ea30(*(undefined4 *)(iVar3 + 0x154),*(undefined4 *)(iVar3 + 0x150));
  puVar1 = local_c;
  uVar2 = FUN_10a5d940();
  uVar2 = FUN_103e1c60(local_38,puVar1,uVar2);
  FUN_10a5d820(uVar2);
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_24);
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10653dc0(local_c);
  }
  uVar2 = FUN_10a5ec80();
  FUN_1059d410(uVar2);
  return;
}


// -- slot13@0x34 = 105a3760
// <no fn @105a3760>


//######## CGetRandomPosAround  vtbl=11309eac ########
// -- Evaluate slot10@0x28 = 105ad070

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ad070(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 local_94 [36];
  float local_70;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float *local_10;
  float local_c;
  float local_8;
  
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(uVar3);
  if (piVar4 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*piVar4 + 200))(&local_54);
  local_20 = 1.5;
  local_18 = 2.0;
  local_14 = 2.0;
  cVar2 = FUN_101c35a0(*(undefined4 *)(param_1 + 0x68),&local_20);
  if (cVar2 != '\0') {
    fVar8 = ((local_20 + DAT_112fe0c0) - (float)((uint)(local_20 - DAT_112fe0c0) & DAT_112fcb10)) *
            DAT_113c12b8;
    local_20 = ((float)((uint)(fVar8 - DAT_113c12b8) & DAT_112fcb10) + fVar8 + DAT_113c12b8) *
               DAT_113c12b8;
  }
  cVar2 = FUN_101c35a0(*(undefined4 *)(param_1 + 100),&local_14);
  if (cVar2 != '\0') {
    fVar8 = ((local_14 + DAT_11302dac) - (float)((uint)(local_14 - DAT_11302dac) & DAT_112fcb10)) *
            DAT_113c12b8;
    local_14 = ((float)((uint)(fVar8 - DAT_113c12b8) & DAT_112fcb10) + fVar8 + DAT_113c12b8) *
               DAT_113c12b8;
  }
  cVar2 = FUN_101c35a0(*(undefined4 *)(param_1 + 0x60),&local_18);
  if (cVar2 != '\0') {
    fVar8 = ((local_18 + DAT_11302dac) - (float)((uint)(local_18 - DAT_11302dac) & DAT_112fcb10)) *
            DAT_113c12b8;
    local_18 = ((float)((uint)(fVar8 - DAT_113c12b8) & DAT_112fcb10) + fVar8 + DAT_113c12b8) *
               DAT_113c12b8;
  }
  local_10 = &local_c;
  iVar5 = 10;
  local_1c = &local_3c;
  fVar6 = (float10)FUN_10655dd0();
  fVar7 = (float10)(float)(fVar6 * (float10)DAT_11301ccc * (float10)DAT_113c129c);
  fVar6 = (float10)fcos(fVar7);
  fVar7 = (float10)fsin(fVar7);
  *local_10 = (float)fVar6;
  *local_1c = (float)fVar7;
  local_38 = 1.0;
  local_34 = 0.0;
  local_30 = 0.0;
  fVar8 = local_3c * local_3c + local_c * local_c;
  if (fVar8 <= DAT_112fce4c) {
    local_2c = 1.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_8 = 0.0;
    local_10 = (float *)0x0;
    local_1c = (float *)0x3f800000;
  }
  else {
    auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    local_8 = auVar9._0_4_;
    local_8 = (DAT_112fcaac - local_8 * fVar8 * local_8 * DAT_113c12b8) * local_8;
    local_1c = (float *)(local_3c * local_8);
    local_10 = (float *)(local_c * local_8);
    local_8 = local_8 * DAT_113c1280;
  }
  do {
    fVar6 = (float10)FUN_10655dd0();
    fVar8 = local_8;
    iVar5 = iVar5 + -1;
    local_c = (float)(fVar6 * (float10)local_18);
    if ((float10)DAT_112fcab0 <= fVar6 * (float10)local_18) break;
  } while (0 < iVar5);
  local_8 = 0.0;
  local_38 = local_54 + (float)local_1c * local_c;
  local_34 = local_50 + (float)local_10 * local_c;
  local_24 = fVar8 * local_c + local_4c;
  local_30 = local_4c + DAT_112fe0c0;
  local_2c = local_38;
  local_28 = local_34;
  if (*(int *)(DAT_113f3a18 + 0x40) != 0) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0xc1a00000;
    iVar5 = FUN_1052a700(&local_38,&local_48,0x11f,0xf,0x100000,local_94,1,0,0,0,0,
                         "RayWorldIntersection(Action)",0,4);
    if (iVar5 != 0) {
      local_8 = local_70;
    }
  }
  fVar6 = (float10)FUN_10655dd0();
  uVar1 = *(uint *)(param_1 + 0x6c);
  local_c = *(float *)(*(int *)(param_1 + 0x20) + 0xb4);
  local_30 = (float)((float10)local_8 + (float10)local_20 + fVar6 * (float10)local_14);
  if (uVar1 != 0xffffffff) {
    FUN_103c9820(uVar1);
    if (uVar1 < 1000000) {
      FUN_10551520(uVar1,local_2c,local_28,local_30);
    }
  }
  if (-1 < DAT_113cc000) {
    iVar5 = FUN_106542c0(&DAT_113cc000);
    if (iVar5 < 1) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - DAT_113cc008);
      FUN_106540f0(&DAT_113cc000);
    }
  }
  return 2;
}


// -- slot4@0x10 = 105ad060
// <no fn @105ad060>

// -- slot13@0x34 = 105ad590
// <no fn @105ad590>


//######## CGetRandomPosAwayFromTarget  vtbl=11309f44 ########
// -- Evaluate slot10@0x28 = 105ad940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ad940(int param_1)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int *local_8;
  
  FUN_103f8050(0,param_1 + 0x6c);
  FUN_103f8050(1,param_1 + 0x70);
  FUN_103f8050(2,param_1 + 0x74);
  pfVar3 = (float *)(param_1 + 0x78);
  FUN_103f8050(3,pfVar3);
  FUN_103db9b0(4,param_1 + 0x7c);
  fVar9 = *(float *)(param_1 + 0x6c);
  if (*(float *)(param_1 + 0x70) <= fVar9 && fVar9 != *(float *)(param_1 + 0x70)) {
    *(float *)(param_1 + 0x70) = fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x74);
  if (*pfVar3 <= fVar9 && fVar9 != *pfVar3) {
    *pfVar3 = fVar9;
  }
  piVar2 = (int *)FUN_105f3b20();
  if (piVar2 != (int *)0x0) {
    local_8 = (int *)FUN_105f3ca0();
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x94))();
    local_2c = *pfVar3;
    local_28 = pfVar3[1];
    local_24 = pfVar3[2];
    if (local_8 != (int *)0x0) {
      pfVar3 = (float *)(**(code **)(*local_8 + 0x94))();
      local_38 = *pfVar3;
      local_44 = local_2c - local_38;
      local_34 = pfVar3[1];
      local_30 = pfVar3[2];
      local_40 = local_28 - local_34;
      local_3c = local_24 - local_30;
      local_20 = local_44;
      local_1c = local_40;
      local_18 = local_3c;
    }
    if (((*(char *)(param_1 + 0x7c) != '\0') || (local_8 == (int *)0x0)) ||
       (cVar1 = (**(code **)(*local_8 + 0xdc))(piVar2,1,&local_20,0), cVar1 == '\0')) {
      puVar4 = (uint *)(**(code **)(*piVar2 + 0xd4))(&local_44);
      local_44 = (float)(*puVar4 ^ DAT_113c1410);
      local_40 = (float)(puVar4[1] ^ DAT_113c1410);
      local_3c = (float)(puVar4[2] ^ DAT_113c1410);
      local_20 = local_44;
      local_1c = local_40;
      local_18 = local_3c;
    }
    local_10 = *(float *)(param_1 + 0x6c);
    local_c = *(float *)(param_1 + 0x70);
    FUN_10021c80();
    iVar5 = FUN_10021c60();
    local_14 = (float)iVar5 * (float)_DAT_113c12c0 * (local_c - local_10) + local_10;
    local_8 = *(int **)(param_1 + 0x74);
    local_c = *(float *)(param_1 + 0x78);
    FUN_10021c80();
    iVar5 = FUN_10021c60();
    fVar6 = local_1c * local_1c + local_20 * local_20 + local_18 * local_18;
    local_10 = (float)iVar5 * (float)_DAT_113c12c0 * (local_c - (float)local_8) + (float)local_8;
    fVar9 = DAT_113cc5f0;
    fVar10 = DAT_113cc5e8;
    fVar7 = DAT_113cc5ec;
    if (DAT_112fce4c < fVar6) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = (DAT_112fcaac - fVar7 * fVar6 * fVar7 * DAT_113c12b8) * fVar7;
      fVar9 = local_18 * fVar7;
      fVar10 = local_20 * fVar7;
      fVar7 = local_1c * fVar7;
    }
    local_50 = fVar10 * local_14 + local_2c;
    local_4c = fVar7 * local_14 + local_28;
    local_3c = fVar9 * local_14 + local_24;
    local_48 = local_3c + local_10;
    local_44 = local_50;
    local_40 = local_4c;
    FUN_105f3d40(&local_50);
    return 2;
  }
  return 1;
}


// -- slot4@0x10 = 105ad930
// <no fn @105ad930>

// -- slot13@0x34 = 105adcd0
// <no fn @105adcd0>


//######## CGetRandomPosInCurrentRegion  vtbl=1130a008 ########
// -- Evaluate slot10@0x28 = 105add30

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105add30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 local_38 [12];
  undefined1 local_2c [8];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  char local_5;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(uVar2);
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x68))(), iVar4 == 0)) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    iVar4 = *piVar3;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar4 + 0xc))(uVar2);
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x364))();
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      piVar3 = (int *)(**(code **)(*piVar3 + 800))();
      if ((piVar3 != (int *)0x0) && (*(int *)(param_1 + 0x60) != 0)) {
        local_5 = '\x01';
        cVar1 = FUN_103db9b0(1,&local_5);
        if ((cVar1 == '\0') || (local_5 != '\0')) {
          uVar2 = (**(code **)(*piVar3 + 0x88))();
          local_c = DAT_112fcad4;
          local_10 = uVar2;
          FUN_103f8050(0,&local_c);
          puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x30))(local_38);
          local_20 = *puVar5;
          local_1c = puVar5[1];
          local_18 = puVar5[2];
          cVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x8c))
                            (uVar2,local_c,local_20,local_1c,local_18,local_2c);
          if (cVar1 == '\0') {
            return 1;
          }
        }
        else {
          local_10 = (**(code **)(**(int **)(param_1 + 0x60) + 0x84))(local_2c);
        }
        cVar1 = FUN_103f8050(4,&local_14);
        if ((cVar1 != '\0') && (cVar1 = FUN_103f8050(5,&local_c), cVar1 != '\0')) {
          fVar6 = (float10)FUN_10655dd0();
          local_24 = (float)((float10)local_14 + ((float10)local_c - (float10)local_14) * fVar6 +
                            (float10)local_24);
        }
        FUN_10551270(2,local_2c);
        FUN_105572f0(3,&local_10);
        return 2;
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 105add20
// <no fn @105add20>

// -- slot13@0x34 = 105ae220
// <no fn @105ae220>


//######## CGetRandomPosInRange  vtbl=1130a08c ########
// -- Evaluate slot10@0x28 = 105ae2d0

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ae2d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 local_b4 [12];
  float local_a8;
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  int *local_50;
  float local_4c;
  float local_48;
  int *local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int *local_18;
  float local_14;
  float local_10;
  int *local_c;
  char local_6;
  byte local_5;
  
  local_28 = param_1;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  local_2c = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x68))();
  if (iVar4 != 0) {
    return 1;
  }
  pfVar5 = (float *)(**(code **)(*piVar3 + 0x94))();
  local_54 = *pfVar5;
  local_58 = pfVar5[1];
  local_50 = (int *)pfVar5[2];
  local_4c = local_54;
  local_48 = local_58;
  local_44 = local_50;
  FUN_10a5d660();
  local_5 = 0;
  cVar1 = FUN_103db9b0(0,&local_5);
  local_40 = 0.0;
  local_5 = local_5 & -(cVar1 != '\0');
  if (local_5 != 0) {
    FUN_10552dd0(5,&local_40);
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar4 = *piVar3;
  uVar2 = (**(code **)(**(int **)(local_28 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar4 + 0xc))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  uVar2 = (**(code **)(*piVar3 + 0x364))();
  iVar4 = local_28;
  *(undefined4 *)(local_28 + 0x6c) = uVar2;
  piVar3 = (int *)(**(code **)(*piVar3 + 800))();
  if (*(int *)(iVar4 + 0x6c) == 0) {
    return 1;
  }
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  cVar1 = FUN_103f8050(1,&local_24);
  if (cVar1 == '\0') {
    return 1;
  }
  local_3c = (**(code **)(*piVar3 + 0x88))();
  local_38 = local_54;
  local_34 = local_58;
  local_30 = local_50;
  if ((local_5 == 0) || (*(int *)(DAT_113f3a18 + 0x80) == 0)) {
    local_6 = '\x01';
    cVar1 = FUN_103db9b0(2,&local_6);
    if ((cVar1 == '\0') || (local_6 == '\0')) {
      pfVar5 = (float *)(**(code **)(*piVar3 + 0x30))(local_68);
      local_20 = *pfVar5;
      local_1c = pfVar5[1];
      local_18 = (int *)pfVar5[2];
      local_14 = local_20;
      local_10 = local_1c;
      local_c = local_18;
    }
    else {
      FUN_10552e20(3,&local_14);
    }
    cVar1 = (**(code **)(**(int **)(iVar4 + 0x6c) + 0x8c))
                      (local_3c,local_24,local_14,local_10,local_c,&local_38);
    if (cVar1 != '\0') goto LAB_105ae707;
    FUN_105aeaf0();
    fVar6 = local_1c * local_1c + local_20 * local_20;
    if (fVar6 <= DAT_112fce4c) {
      local_20 = 1.0;
      fVar6 = 1.0;
      local_1c = 0.0;
      fVar9 = 0.0;
      local_18 = (int *)0x0;
      fVar7 = 0.0;
    }
    else {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = (DAT_112fcaac - fVar7 * fVar6 * fVar7 * DAT_113c12b8) * fVar7;
      fVar6 = local_20 * fVar7;
      fVar9 = local_1c * fVar7;
      fVar7 = fVar7 * DAT_113c1280;
    }
    local_14 = fVar6 * local_24 + local_4c;
    local_10 = fVar9 * local_24 + local_48;
    local_c = (int *)(fVar7 * local_24 + (float)local_44);
  }
  else {
    FUN_104b42d0();
    (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(local_2c,local_b4);
    local_20 = 1.0;
    local_1c = 1.0;
    local_18 = (int *)&DAT_3f800000;
    local_2c = (int *)(local_a8 + local_40 + local_24);
    FUN_105aeaf0();
    fVar6 = local_20 * local_20 + local_1c * local_1c + (float)local_18 * (float)local_18;
    if (fVar6 <= DAT_112fce4c) {
      local_20 = 1.0;
      fVar6 = 1.0;
      local_1c = 1.0;
      fVar9 = 1.0;
      local_18 = (int *)&DAT_3f800000;
      fVar7 = 1.0;
    }
    else {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = (DAT_112fcaac - fVar7 * fVar6 * fVar7 * DAT_113c12b8) * fVar7;
      fVar6 = local_20 * fVar7;
      fVar9 = local_1c * fVar7;
      fVar7 = (float)local_18 * fVar7;
    }
    local_c = local_44;
    if ((float)local_44 < (float)local_2c) {
      local_c = local_2c;
    }
    local_c = (int *)(fVar7 * local_24 + (float)local_c);
    local_14 = local_4c + fVar6 * local_24;
    local_10 = local_48 + fVar9 * local_24;
  }
  local_38 = local_14;
  local_34 = local_10;
  local_30 = local_c;
LAB_105ae707:
  FUN_10551270(3,&local_38);
  FUN_105572f0(4,&local_3c);
  return 2;
}


// -- slot4@0x10 = 105ae2c0
// <no fn @105ae2c0>

// -- slot13@0x34 = 105aea80
// <no fn @105aea80>


//######## CGetRandomPosNearTarget  vtbl=1130a110 ########
// -- Evaluate slot10@0x28 = 105aec10

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105aec10(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  piVar3 = *(int **)(param_1 + 0x2c);
  local_c = param_1;
  if (((1 < (uint)(piVar3[1] - *piVar3 >> 2)) && (4 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar3[3] + 4))) {
    FUN_103d8940(*(int *)(piVar3[3] + 4),&local_1c);
    FUN_10552d10();
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar1 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x364))();
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    piVar3 = (int *)(**(code **)(*piVar3 + 800))();
    if ((*(int *)(param_1 + 0x60) != 0) && (piVar3 != (int *)0x0)) {
      local_8 = DAT_112fcad4;
      FUN_103f8050(0,&local_8);
      local_10 = (**(code **)(*piVar3 + 0x88))();
      cVar2 = (**(code **)(**(int **)(local_c + 0x60) + 0x8c))
                        (local_10,local_8,local_1c,local_18,local_14,local_28);
      if (cVar2 != '\0') {
        FUN_10551270(1,local_28);
        FUN_105572f0(2,&local_10);
        return 2;
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 105aec00
// <no fn @105aec00>

// -- slot13@0x34 = 105aef20
// <no fn @105aef20>


//######## CRandomAnimsPlayByNum  vtbl=1130a83c ########
// -- Evaluate slot10@0x28 = 105b6cf0

/* WARNING: Removing unreachable block (ram,0x105b6df8) */
/* WARNING: Removing unreachable block (ram,0x105b6e19) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""False""
     ""_Lemon"" */

undefined4 __fastcall FUN_105b6cf0(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  float fVar8;
  int local_24;
  float local_20;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x6c) < 1) {
    return 1;
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar4 = *piVar3;
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar4 + 0xc))();
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    FUN_10a5d940();
    FUN_10423fd0();
    cVar2 = (**(code **)(*piVar3 + 0xb8))();
    if ((-1 < _DAT_fffffff4) && (iVar4 = FUN_106542c0(), iVar4 < 1)) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - iRamfffffffc);
      FUN_106540f0();
    }
    if (cVar2 == '\0') {
      return 1;
    }
    iVar4 = *piVar3;
    FUN_10a5ec80();
    cVar2 = (**(code **)(iVar4 + 0xb8))();
    if (cVar2 == '\0') {
      return 2;
    }
    iVar4 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar4;
    if (*(int *)(param_1 + 0x68) < 1) {
      return 3;
    }
    if (iVar4 <= *(int *)(param_1 + 0x68)) {
      return 3;
    }
    return 2;
  }
  FUN_103dba30();
  cVar2 = FUN_105b75a0();
  if (cVar2 == '\0') {
    return 1;
  }
  iVar4 = **(int **)(DAT_113f3a18 + 0x50);
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 == 0) {
    return 1;
  }
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  iVar4 = FUN_10a5f050();
  if (iVar4 == 0) {
    return 1;
  }
  iVar4 = (**(code **)(*piVar3 + 800))();
  if (iVar4 != 0) {
    FUN_103dba30();
  }
  FUN_10a5d660();
  bVar7 = true;
  cVar2 = FUN_103dbbb0();
  if ((cVar2 != '\0') && (piVar5 = (int *)FUN_10a5d620(), local_24 == *piVar5)) {
    FUN_10a5d940();
    FUN_10423fd0();
    cVar2 = (**(code **)(*piVar3 + 0xb8))();
    FUN_10424220();
    if (cVar2 != '\0') {
      iVar4 = *piVar3;
      FUN_10a5ec80();
      cVar2 = (**(code **)(iVar4 + 0xb8))();
      bVar7 = cVar2 == '\0';
    }
  }
  local_20 = 1.0;
  cVar2 = FUN_103f8050();
  if (cVar2 != '\0') {
    fVar8 = ((DAT_112fcac4 + 1.0) - (float)((uint)(1.0 - DAT_112fcac4) & DAT_112fcb10)) *
            DAT_113c12b8;
    local_20 = ((float)((uint)(fVar8 - DAT_112fca80) & DAT_112fcb10) + fVar8 + DAT_112fca80) *
               DAT_113c12b8;
  }
  cVar2 = FUN_10552dd0();
  if (cVar2 != '\0') {
    fVar8 = ((DAT_112fcac4 + 1.0) - (float)((uint)(1.0 - DAT_112fcac4) & DAT_112fcb10)) *
            DAT_113c12b8;
    local_20 = ((float)((uint)(fVar8 - DAT_112fca80) & DAT_112fcb10) + fVar8 + DAT_112fca80) *
               DAT_113c12b8;
  }
  piVar5 = (int *)(**(code **)(*piVar3 + 800))();
  if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0xa8))(), iVar4 == 1)) {
    FUN_10a5d940();
    cVar2 = FUN_10a68b30();
    if (cVar2 != '\0') {
      FUN_10a5dbf0();
    }
  }
  if (bVar7) {
    bVar1 = true;
    FUN_10a5d940();
    puVar6 = (undefined4 *)FUN_10423fd0();
    iVar4 = (**(code **)(*piVar3 + 0x88))(*puVar6,local_20);
    bVar7 = false;
    if (iVar4 == 0) goto LAB_105b7047;
  }
  bVar7 = true;
LAB_105b7047:
  if (bVar1) {
    FUN_10424220();
  }
  if (bVar7) {
    return 3;
  }
  return 1;
}


// -- slot4@0x10 = 105b6c10

/* WARNING: Removing unreachable block (ram,0x105b6c48) */
/* WARNING: Removing unreachable block (ram,0x105b6c70) */
/* [RE-AUTO c0]
   calls: memmove */

void __fastcall FUN_105b6c10(int param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int local_8;
  
  local_8 = param_1;
  FUN_103dc9d0();
  piVar1 = (int *)(param_1 + 0x6c);
  cVar3 = FUN_103dba30(7,piVar1);
  if (cVar3 == '\0') {
    *piVar1 = 0;
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x74)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x80)) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x7c);
  }
  local_8 = 0;
  FUN_103f7e60(*piVar1,&local_8);
  local_8 = 0;
  FUN_103f7e60(*piVar1,&local_8);
  fVar2 = DAT_113c12f4;
  if (0 < *piVar1) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar4 * 4) = 0;
      *(float *)(*(int *)(param_1 + 0x70) + iVar4 * 4) = fVar2 / (float)*piVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar1);
  }
  return;
}


// -- slot13@0x34 = 105b7830
// <no fn @105b7830>


//######## CSelectTargetActionPlayer  vtbl=1130afec ########
// -- Evaluate slot10@0x28 = 105c6540

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105c6540(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_103dbab0(0,&local_8);
  if (cVar1 == '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  }
  local_c = 0x3f000000;
  cVar1 = FUN_103f8050(1,&local_c);
  if (cVar1 == '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_8);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x288))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x288))();
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      if (iVar3 == 0) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x288))();
        (**(code **)(*piVar2 + 0xd8))();
        piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
        piVar2 = (int *)(**(code **)(*piVar2 + 0x30))();
        local_10 = (**(code **)(*piVar2 + 0x5c))(local_c);
        if (local_10 != -1) {
          FUN_105603a0(0,&local_10);
          return 2;
        }
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 105c6530
// <no fn @105c6530>

// -- slot13@0x34 = 105c6780
// <no fn @105c6780>


//######## CSelectTargetAttackInvaildPlayer  vtbl=1130b06c ########
// -- Evaluate slot10@0x28 = 105c6820

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105c6820(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_103dbab0(0,&local_8);
  if (cVar1 == '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  }
  local_c = 0x3f000000;
  cVar1 = FUN_103f8050(1,&local_c);
  if (cVar1 == '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_8);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x288))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x288))();
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      if (iVar3 == 0) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x288))();
        (**(code **)(*piVar2 + 0xd8))();
        piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
        piVar2 = (int *)(**(code **)(*piVar2 + 0x30))();
        local_10 = (**(code **)(*piVar2 + 0x54))(local_c);
        if (local_10 != 0) {
          FUN_105603a0(0,&local_10);
          return 2;
        }
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 105c6810
// <no fn @105c6810>

// -- slot13@0x34 = 105c6a60
// <no fn @105c6a60>


//######## CSelectTargetAttackPlayer  vtbl=1130b0e4 ########
// -- Evaluate slot10@0x28 = 105c6b00

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105c6b00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_103dbab0(0,&local_8);
  if (cVar1 == '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  }
  local_c = 0x3f000000;
  cVar1 = FUN_103f8050(1,&local_c);
  if (cVar1 == '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_8);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x288))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x288))();
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      if (iVar3 == 0) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x288))();
        (**(code **)(*piVar2 + 0xd8))();
        piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x128))();
        piVar2 = (int *)(**(code **)(*piVar2 + 0x30))();
        local_10 = (**(code **)(*piVar2 + 0x58))(local_c);
        if (local_10 != -1) {
          FUN_105603a0(0,&local_10);
          return 2;
        }
      }
    }
  }
  return 1;
}


// -- slot4@0x10 = 105c6af0
// <no fn @105c6af0>

// -- slot13@0x34 = 105c6d40
// <no fn @105c6d40>


//######## CSelectorVoter  vtbl=1130d0a8 ########
// -- Evaluate slot10@0x28 = 105ed490

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ed490(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_10a5d660();
    FUN_103dbbb0(2,local_8);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    FUN_103dd050(uVar1);
    iVar2 = FUN_103e6980(local_8);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  FUN_10a5d660();
  FUN_103dbbb0(0,local_c);
  FUN_103f8050(1,&local_10);
  FUN_105ede40(local_c,local_10);
  return 2;
}


// -- slot4@0x10 = 105ed530
// <no fn @105ed530>

// -- slot13@0x34 = 105ed590
// <no fn @105ed590>


//######## CVotingSelector  vtbl=1130d140 ########
// -- Evaluate slot10@0x28 = 105ed910

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ed910(int param_1)

{
  int *piVar1;
  char cVar2;
  int local_8;
  
  local_8 = param_1;
  FUN_105ed990(&local_8);
  cVar2 = FUN_103d8660(2);
  if ((((cVar2 != '\0') &&
       (piVar1 = *(int **)(param_1 + 0x2c), 2 < (uint)(piVar1[1] - *piVar1 >> 2))) &&
      (8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar1[3] + 8))) {
    FUN_103d8940(*(int *)(piVar1[3] + 8),&local_8);
    FUN_101cbef0();
  }
  return 2;
}


// -- slot4@0x10 = 105ed980
// <no fn @105ed980>

// -- slot13@0x34 = 105f0b20
// <no fn @105f0b20>


//######## CPercentageRandomCheck  vtbl=1130d7b4 ########
// -- Evaluate slot10@0x28 = 105fa340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: rand */

undefined4 FUN_105fa340(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float local_8;
  
  FUN_10a5d660();
  FUN_10a5d660();
  uVar2 = rand();
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  fVar4 = (float)(int)uVar2 * _DAT_11309864;
  cVar1 = FUN_103f8050(0,&local_8);
  if ((cVar1 == '\0') || (uVar3 = 2, local_8 <= fVar4)) {
    uVar3 = 1;
  }
  return uVar3;
}


// -- slot4@0x10 = 105fa330
// <no fn @105fa330>

// -- slot13@0x34 = 105fa480
// <no fn @105fa480>


//######## CNop  vtbl=11314384 ########
// -- Evaluate slot10@0x28 = 1062b710
// <no fn @1062b710>

// -- slot4@0x10 = 1062b700
// <no fn @1062b700>

// -- slot13@0x34 = 10621f00
// <no fn @10621f00>


//######## CConditionFailure  vtbl=113143e0 ########
// -- Evaluate slot10@0x28 = 105f3f00
// <no fn @105f3f00>

// -- slot4@0x10 = 105f3ef0
// <no fn @105f3ef0>

// -- slot13@0x34 = 106216b0
// <no fn @106216b0>


//######## CConditionSuccessful  vtbl=11314448 ########
// -- Evaluate slot10@0x28 = 105fc000
// <no fn @105fc000>

// -- slot4@0x10 = 105fbff0
// <no fn @105fbff0>

// -- slot13@0x34 = 106216c0
// <no fn @106216c0>

