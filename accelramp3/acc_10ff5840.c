// FUN_10ff5840 @ 10ff5840
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: libm_sse2_sin_precise */

void __thiscall FUN_10ff5840(int param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_84;
  float local_80;
  float local_7c;
  ulonglong local_78;
  float local_70;
  float local_64;
  float local_60;
  undefined8 uStack_5c;
  float fStack_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  char local_31;
  float local_30;
  float local_2c;
  float local_28;
  char local_21;
  float local_20;
  float local_1c;
  float local_18;
  char local_11;
  
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  local_64 = 0.0;
  local_c8 = 0.0;
  local_cc = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  FUN_10ff7970(param_2,&fStack_9c,&local_44);
  iVar5 = *(int *)(param_1 + 0x148);
  fVar14 = 0.0;
  local_78 = 0;
  local_2c = 0.0;
  local_20 = 0.0;
  if (DAT_11cbf074 < *(float *)(iVar5 + 0x140)) {
    local_70 = DAT_11de9918 / *(float *)(iVar5 + 0x140);
    local_2c = *(float *)(iVar5 + 0x54) * local_70;
    fVar14 = local_70 * *(float *)(iVar5 + 0x50);
    local_70 = *(float *)(iVar5 + 0x58) * local_70;
    uStack_5c = CONCAT44(local_2c,fVar14);
    local_78 = (ulonglong)(uint)fVar14;
    fStack_54 = local_70;
    local_20 = local_70;
  }
  fVar17 = SQRT(local_2c * local_2c + fVar14 * fVar14 + local_20 * local_20);
  if (DAT_11de9938 < fVar17) {
    fVar6 = DAT_11de9918 / fVar17;
    local_70 = local_20 * fVar6 * DAT_11de9938;
    fVar14 = fVar14 * fVar6 * DAT_11de9938;
    local_2c = local_2c * fVar6 * DAT_11de9938;
    uStack_5c = CONCAT44(local_2c,fVar14);
    local_78 = (ulonglong)(uint)fVar14;
    fStack_54 = local_70;
    local_20 = local_70;
  }
  local_1c = 0.0;
  if ((DAT_11cbf074 < *(float *)(iVar5 + 0x140)) &&
     (local_1c = (*(float *)(iVar5 + 0x34) / *(float *)(iVar5 + 0x140)) * _DAT_11cbf11c,
     DAT_11de9938 <= local_1c)) {
    local_1c = DAT_11de9938;
  }
  if ((*(int *)(iVar5 + 0x138) != 0xd) || (*(float *)(iVar5 + 0x4c) <= DAT_11cbf084)) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
  }
  local_31 = '\0';
  local_21 = '\0';
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0xc))(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0xb4));
  if ((((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x1c4))(), cVar3 != '\0')) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x188))(0), piVar4 != (int *)0x0)) &&
     ((piVar4 = (int *)(**(code **)(*piVar4 + 0x14c))(), piVar4 != (int *)0x0 &&
      (piVar4 != (int *)0x34c)))) {
    local_31 = (**(code **)(*piVar4 + 200))();
    local_21 = (**(code **)(*piVar4 + 0xcc))();
    if ((local_31 != '\0') || (local_21 != '\0')) {
      local_11 = '\0';
    }
  }
  fVar11 = DAT_11de9990;
  fVar6 = DAT_11cbf08c;
  fVar14 = DAT_11cbf084;
  iVar5 = *(int *)(param_1 + 0x148);
  if (DAT_11cbf084 < *(float *)(iVar5 + 0x3c) || DAT_11cbf084 == *(float *)(iVar5 + 0x3c)) {
    *(undefined4 *)(param_1 + 500) = 0;
    if (*(float *)(iVar5 + 0x50) * *(float *)(iVar5 + 0x50) +
        *(float *)(iVar5 + 0x54) * *(float *)(iVar5 + 0x54) +
        *(float *)(iVar5 + 0x58) * *(float *)(iVar5 + 0x58) <= DAT_11cbf074) {
      local_70 = fStack_94;
      local_18 = fStack_98;
      local_38 = fStack_9c;
      local_2c = local_3c;
      local_28 = local_40;
      local_20 = local_44;
    }
    else {
      fVar14 = *(float *)(param_1 + 0x188);
      fVar6 = *(float *)(param_1 + 0x18c);
      fVar12 = *(float *)(param_1 + 0x194);
      fVar9 = *(float *)(param_1 + 0x194);
      fVar10 = *(float *)(param_1 + 400);
      fVar18 = (*(float *)(param_1 + 0x18c) * fVar14 + *(float *)(param_1 + 400) * fVar9) *
               DAT_11de9990 * local_2c +
               ((fVar14 * fVar14 + fVar9 * fVar9) * DAT_11de9990 - DAT_11de9918) * (float)local_78 +
               (*(float *)(param_1 + 400) * fVar14 - *(float *)(param_1 + 0x18c) * fVar9) *
               DAT_11de9990 * local_20;
      fVar20 = (fVar10 * *(float *)(param_1 + 0x18c) - *(float *)(param_1 + 0x188) * fVar9) *
               DAT_11de9990 * local_2c +
               (*(float *)(param_1 + 0x188) * fVar10 + *(float *)(param_1 + 0x18c) * fVar9) *
               DAT_11de9990 * (float)local_78 +
               ((fVar10 * fVar10 + fVar9 * fVar9) * DAT_11de9990 - DAT_11de9918) * local_20;
      fVar7 = fVar20 * DAT_11d060d4;
      fVar13 = fVar18 * DAT_11d060d4;
      fVar9 = *(float *)(param_1 + 400);
      fVar10 = *(float *)(param_1 + 0x194);
      fVar15 = *(float *)(param_1 + 0x18c);
      fVar12 = (((fVar12 * fVar12 + fVar6 * fVar6) * DAT_11de9990 - DAT_11de9918) * local_2c +
                (fVar14 * fVar6 - *(float *)(param_1 + 400) * fVar12) * fVar11 * (float)local_78 +
               (fVar12 * fVar14 + *(float *)(param_1 + 400) * fVar6) * DAT_11de9990 * local_20) *
               _DAT_11d060d0;
      fVar14 = *(float *)(param_1 + 0x188);
      fVar19 = (fVar15 * fVar7 - fVar12 * fVar9) + fVar10 * fVar13;
      fVar16 = (fVar9 * fVar13 - fVar14 * fVar7) + fVar12 * fVar10;
      fVar11 = (fVar12 * fVar14 - fVar15 * fVar13) + fVar10 * fVar7;
      fVar6 = fVar11 * fVar15 - fVar16 * fVar9;
      fVar10 = fVar16 * fVar14 - fVar19 * *(float *)(param_1 + 0x18c);
      fVar14 = fVar19 * fVar9 - fVar11 * fVar14;
      local_38 = fStack_9c + fVar6 + fVar13 + fVar6;
      local_70 = fVar10 + fVar7 + fVar10 + fStack_94;
      local_18 = fVar14 + fVar12 + fVar14 + fStack_98;
      local_20 = fVar20 * DAT_11de9990 + local_44;
      local_28 = fVar18 * DAT_11cbf0b8 + local_40;
      local_2c = local_3c - fVar18 * DAT_11de9990;
    }
  }
  else {
    local_64 = DAT_11cbf08c;
    fVar9 = *(float *)(iVar5 + 0x20) * _DAT_11ce8ea8 * local_1c + *(float *)(param_1 + 500);
    *(float *)(param_1 + 500) = fVar9;
    fVar12 = DAT_11de9918;
    if (local_1c < fVar14) {
      fVar9 = *(float *)(iVar5 + 0x20) + fVar9;
      if (DAT_11de9918 < fVar9) {
        fVar9 = DAT_11de9918;
      }
      *(float *)(param_1 + 500) = fVar9;
    }
    if (fVar12 < *(float *)(param_1 + 500)) {
      *(float *)(param_1 + 500) = *(float *)(param_1 + 500) - fVar12;
    }
    fVar14 = fVar11;
    if ((local_11 != '\0') || (fVar14 = DAT_11cded94, *(char *)(iVar5 + 0x144) != '\0')) {
      local_64 = local_1c * fVar14 * fVar6;
    }
    local_80 = *(float *)(param_1 + 500) * DAT_11de99b0;
    dVar8 = (double)(local_80 * fVar11);
    libm_sse2_sin_precise();
    local_7c = (float)dVar8;
    local_18 = local_7c * local_64 * local_1c;
    dVar8 = (double)(local_80 * DAT_11cbf0b4);
    libm_sse2_sin_precise();
    local_18 = local_18 * DAT_11de98d0;
    fVar14 = (float)dVar8 * DAT_11d060b0 * local_1c * DAT_11de98d0;
    if (local_1c <= DAT_11de98bc) {
      local_2c = local_3c;
      local_28 = local_40;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x188);
      fVar11 = *(float *)(param_1 + 0x194);
      fVar6 = (*(float *)(param_1 + 0x18c) * fVar6 + *(float *)(param_1 + 400) * fVar11) *
              DAT_11de9990 * local_2c +
              ((fVar6 * fVar6 + fVar11 * fVar11) * DAT_11de9990 - DAT_11de9918) * (float)local_78 +
              (*(float *)(param_1 + 400) * fVar6 - *(float *)(param_1 + 0x18c) * fVar11) *
              DAT_11de9990 * local_20;
      local_18 = local_18 - fVar6 * DAT_11de98c4;
      if (fVar6 <= 0.0) {
        local_2c = local_3c - fVar6 * DAT_11de9990;
      }
      else {
        local_2c = fVar6 * DAT_11de9938 + local_3c;
      }
      local_28 = fVar6 * DAT_11cbf0b8 + local_40;
    }
    fVar6 = _DAT_11d060b8;
    if (fVar14 < 0.0) {
      local_1c = local_1c * DAT_11cebb88;
      fVar6 = DAT_11cc9b60;
    }
    fVar14 = fVar14 * fVar6;
    fVar6 = *(float *)(param_1 + 400);
    fVar11 = *(float *)(param_1 + 0x18c);
    fVar12 = *(float *)(param_1 + 0x194);
    fVar9 = *(float *)(param_1 + 0x188);
    fVar18 = (fVar11 * fVar14 - fVar6 * 0.0) + fVar12 * local_18;
    fVar15 = (fVar6 * local_18 - fVar9 * fVar14) + fVar12 * 0.0;
    fVar12 = (fVar9 * DAT_11de9890 - fVar11 * local_18) + fVar12 * fVar14;
    fVar10 = fVar12 * fVar11 - fVar15 * fVar6;
    fVar11 = *(float *)(param_1 + 0x1b0);
    fVar12 = fVar18 * fVar6 - fVar12 * fVar9;
    fVar9 = fVar15 * fVar9 - fVar18 * *(float *)(param_1 + 0x18c);
    fVar6 = *(float *)(param_1 + 0x1b4);
    local_38 = (fStack_9c + fVar10 + local_18 + fVar10) -
               (*(float *)(param_1 + 0x1a8) * fVar11 + *(float *)(param_1 + 0x1ac) * fVar6) *
               DAT_11de9990 * DAT_11d060ac * local_1c;
    local_18 = (fVar12 + DAT_11de9890 + fVar12 + fStack_98) -
               (fVar11 * *(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1a8) * fVar6) *
               DAT_11de9990 * DAT_11d060ac * local_1c;
    fVar12 = local_7c * local_1c;
    local_70 = (fVar9 + fVar14 + fVar9 + fStack_94) -
               ((fVar11 * fVar11 + fVar6 * fVar6) * DAT_11de9990 - DAT_11de9918) * DAT_11d060ac *
               local_1c;
    local_28 = local_28 - fVar12 * DAT_11de9938;
    if (local_11 != '\0') {
      local_28 = local_28 * DAT_11cc1020;
    }
    local_20 = local_1c * DAT_11de9938 + local_44;
    if (local_11 != '\0') {
      local_2c = fVar12 * DAT_11cc1020 + local_2c;
    }
    local_64 = (float)dVar8 * DAT_11ce0860 * local_1c + 0.0;
    if (local_11 == '\0') {
      if (*(char *)(iVar5 + 0x144) == '\0') {
        if (*(int *)(iVar5 + 0x138) == 4) {
          if ((local_31 == '\0') && (local_21 == '\0')) {
            local_70 = local_70 + DAT_11d060ac;
            local_18 = local_18 -
                       ((*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
                        *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194)) * DAT_11de9990 -
                       DAT_11de9918) * DAT_11cc8598;
          }
          else if (local_21 != '\0') {
            local_70 = local_70 - DAT_11d060b4;
            local_18 = ((*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
                        *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194)) * DAT_11de9990 -
                       DAT_11de9918) * DAT_11d060b0 + local_18;
          }
        }
      }
      else {
        local_64 = local_64 * DAT_11de99a0;
        local_c8 = fVar12 + 0.0;
        local_cc = 0.0 - local_7c * _DAT_11d060bc * local_1c;
      }
    }
    else {
      local_64 = local_64 * DAT_11de99a0;
      local_c8 = local_7c * DAT_11cded94 * local_1c + 0.0;
      local_cc = 0.0 - local_7c * DAT_11de99a0 * local_1c;
    }
  }
  fVar14 = *(float *)(param_1 + 0x194);
  pfVar1 = (float *)(param_1 + 0x188);
  fVar6 = *pfVar1;
  iVar5 = *(int *)(param_1 + 0x148);
  fVar11 = *(float *)(param_1 + 400);
  fVar18 = *(float *)(param_1 + 0x210) *
           (*(float *)(param_1 + 0x18c) * fVar6 + *(float *)(param_1 + 400) * fVar14) * DAT_11de9990
           + ((fVar6 * fVar6 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918) *
             *(float *)(param_1 + 0x20c) +
           *(float *)(param_1 + 0x214) *
           (*(float *)(param_1 + 400) * fVar6 - *(float *)(param_1 + 0x18c) * fVar14) * DAT_11de9990
  ;
  fVar6 = *(float *)(param_1 + 0x18c);
  local_7c = *(float *)(param_1 + 0x210) *
             (fVar11 * *(float *)(param_1 + 0x18c) - *pfVar1 * fVar14) * DAT_11de9990 +
             (*pfVar1 * fVar11 + *(float *)(param_1 + 0x18c) * fVar14) * DAT_11de9990 *
             *(float *)(param_1 + 0x20c) +
             *(float *)(param_1 + 0x214) *
             ((fVar11 * fVar11 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918);
  local_80 = *(float *)(iVar5 + 0x38) * DAT_11de98c4 + fVar18 * DAT_11cbf084;
  fVar14 = *(float *)(param_1 + 400);
  fVar11 = *(float *)(param_1 + 0x194);
  fVar10 = local_7c * DAT_11cbf084 -
           (float)(double)((ulonglong)(double)*(float *)(iVar5 + 0x38) & DAT_11de9c70) *
           DAT_11de98c4;
  fVar12 = *pfVar1;
  fVar20 = (fVar10 * fVar6 - fVar14 * DAT_11de9890) + local_80 * fVar11;
  fVar15 = (local_80 * fVar14 - fVar10 * fVar12) + fVar11 * DAT_11de9890;
  fVar9 = (fVar12 * DAT_11de9890 - local_80 * fVar6) + fVar10 * fVar11;
  fVar11 = fVar9 * fVar6 - fVar15 * fVar14;
  fVar15 = fVar15 * fVar12 - fVar20 * *(float *)(param_1 + 0x18c);
  fVar6 = fVar20 * fVar14 - fVar9 * fVar12;
  fVar14 = *(float *)(iVar5 + 0x80);
  fVar12 = (fVar15 + fVar10 + fVar15) * fVar14 + local_70;
  local_1c = fVar14 * (fVar6 + 0.0 + fVar6) + local_18;
  local_38 = local_38 + (fVar11 + local_80 + fVar11) * fVar14;
  local_40 = fVar18 * DAT_11cbf0b8 * fVar14;
  local_70 = local_40 + local_2c;
  local_40 = local_40 + local_28;
  local_44 = local_20 - local_7c * DAT_11cbf0b8 * fVar14;
  if (*(float *)(iVar5 + 0x38) < 0.0) {
    local_40 = *(float *)(iVar5 + 0x38) * DAT_11cbf0b8 + local_40;
  }
  local_84 = *(float *)(iVar5 + 0x40);
  local_18 = fVar12;
  if (0.0 < local_84) {
    fVar14 = *(float *)(param_1 + 0x1a4);
    fVar6 = *(float *)(param_1 + 0x1a0);
    local_38 = local_38 -
               (*(float *)(param_1 + 0x198) * fVar6 + *(float *)(param_1 + 0x19c) * fVar14) *
               DAT_11de9990 * DAT_11cbf08c;
    local_1c = local_1c -
               (fVar6 * *(float *)(param_1 + 0x19c) - *(float *)(param_1 + 0x198) * fVar14) *
               DAT_11de9990 * DAT_11cbf08c;
    local_18 = fVar12 - ((fVar6 * fVar6 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918) *
                        DAT_11cbf08c;
  }
  local_3c = local_70;
  local_30 = local_40;
  local_20 = local_44;
  if ((local_84 <= DAT_11cbf084) || (*(char *)(iVar5 + 0x44) != '\0')) {
    if (*(char *)(param_1 + 0x24a) == '\0') {
      if (local_11 == '\0') {
        if ((*(char *)(iVar5 + 0x144) == '\0') || (fVar17 <= DAT_11de98e8)) {
          fVar14 = local_38;
          fVar6 = local_18;
          if ((*(char *)(iVar5 + 0x145) == '\0') || ((local_21 != '\0' || (local_31 != '\0'))))
          goto LAB_10ff68d9;
          fVar14 = *(float *)(param_1 + 400);
          fVar17 = *(float *)(param_1 + 0x194);
          fVar6 = *pfVar1;
          fVar9 = (*(float *)(param_1 + 0x18c) * DAT_11de98c4 - fVar14 * DAT_11cbf0d0) +
                  fVar17 * 0.0;
          fVar12 = (fVar14 * 0.0 - fVar6 * DAT_11de98c4) - fVar17 * DAT_11de98bc;
          fVar17 = (fVar6 * DAT_11cbf0d0 - *(float *)(param_1 + 0x18c) * DAT_11de9890) +
                   fVar17 * DAT_11de98c4;
          fVar11 = fVar17 * *(float *)(param_1 + 0x18c) - fVar12 * fVar14;
          fVar12 = fVar12 * fVar6 - fVar9 * *(float *)(param_1 + 0x18c);
          fVar14 = fVar9 * fVar14 - fVar17 * fVar6;
          fVar11 = fVar11 + DAT_11de9890 + fVar11;
          fVar14 = (fVar14 - DAT_11de98bc) + fVar14;
          fVar17 = fVar12 + DAT_11de98c4;
          local_3c = DAT_11ceb520;
          local_20 = DAT_11cd7e88;
        }
        else {
          fVar14 = *(float *)(param_1 + 400);
          fVar17 = *(float *)(param_1 + 0x194);
          fVar6 = *pfVar1;
          fVar9 = (*(float *)(param_1 + 0x18c) * DAT_11cbf084 - fVar14 * DAT_11cbf0d0) +
                  fVar17 * 0.0;
          fVar12 = (fVar14 * 0.0 - fVar6 * DAT_11cbf084) - fVar17 * DAT_11de98bc;
          fVar17 = (fVar6 * DAT_11cbf0d0 - *(float *)(param_1 + 0x18c) * DAT_11de9890) +
                   fVar17 * DAT_11cbf084;
          fVar11 = fVar17 * *(float *)(param_1 + 0x18c) - fVar12 * fVar14;
          fVar12 = fVar12 * fVar6 - fVar9 * *(float *)(param_1 + 0x18c);
          fVar14 = fVar9 * fVar14 - fVar17 * fVar6;
          fVar11 = fVar11 + DAT_11de9890 + fVar11;
          fVar14 = (fVar14 - DAT_11de98bc) + fVar14;
          fVar17 = fVar12 + DAT_11cbf084;
          local_3c = DAT_11de9a20;
          local_20 = DAT_11cbf7f8;
        }
        local_20 = local_44 - local_20;
        local_3c = local_70 + local_3c;
        local_30 = local_40 + 0.0;
        local_40 = local_40 + 0.0;
        local_1c = fVar14 + local_1c;
        fVar14 = local_38 + fVar11;
        fVar6 = fVar17 + fVar12 + local_18;
        local_70 = local_3c;
        local_44 = local_20;
        goto LAB_10ff68d9;
      }
      fVar14 = *(float *)(param_1 + 0x18c);
      fVar6 = *(float *)(param_1 + 0x194);
      fVar11 = *(float *)(param_1 + 0x1b4);
      local_84 = (*pfVar1 * fVar14 - *(float *)(param_1 + 400) * fVar6) * DAT_11de9990;
      fVar9 = (fVar6 * *pfVar1 + *(float *)(param_1 + 400) * fVar14) * DAT_11de9990;
      fVar12 = *(float *)(param_1 + 0x1b0);
      fVar14 = (fVar6 * fVar6 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918;
      local_bc = (*(float *)(param_1 + 0x1a8) * fVar12 + *(float *)(param_1 + 0x1ac) * fVar11) *
                 DAT_11de9990;
      local_b0 = (fVar12 * *(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1a8) * fVar11) *
                 DAT_11de9990;
      local_a4 = (fVar12 * fVar12 + fVar11 * fVar11) * DAT_11de9990 - DAT_11de9918;
      local_b8 = (float)((uint)(local_a4 * local_84 - local_bc * fVar9) ^ DAT_11de9c90);
      local_c4 = (float)((uint)(local_b0 * fVar9 - local_a4 * fVar14) ^ DAT_11de9c90);
      local_ac = (float)((uint)(local_bc * fVar14 - local_b0 * local_84) ^ DAT_11de9c90);
      local_c0 = local_ac * local_b0 - local_b8 * local_a4;
      local_b4 = local_c4 * local_a4 - local_ac * local_bc;
      local_a8 = local_b8 * local_bc - local_c4 * local_b0;
      local_7c = local_b0;
      local_2c = local_a4;
      local_28 = local_bc;
      FUN_10cdf910();
      fVar14 = local_b4 + local_c4 + local_a4;
      if (fVar14 <= DAT_11de9890) {
        if ((local_c4 < local_b4) || (local_c4 < local_a4)) {
          if ((local_b4 < local_c4) || (local_b4 < local_a4)) {
            if ((local_a4 < local_c4) || (local_a4 < local_b4)) {
              local_60 = _UNK_11cbf0ec;
              uStack_5c = 0;
              fStack_54 = 0.0;
              local_a0 = _DAT_11cbf0e0;
              fStack_9c = 0.0;
              fStack_98 = 0.0;
              fStack_94 = 0.0;
              fVar14 = _UNK_11cbf0e8;
              fVar6 = _UNK_11cbf0e4;
            }
            else {
              fVar14 = SQRT(((local_a4 - local_c4) - local_b4) + DAT_11de9918);
              fVar6 = DAT_11de98e8 / fVar14;
              local_a0 = (local_ac + local_bc) * fVar6;
              local_60 = (local_b8 - local_c0) * fVar6;
              fVar14 = fVar14 * DAT_11de98e8;
              fVar6 = (local_a8 + local_b0) * fVar6;
            }
          }
          else {
            fVar6 = SQRT(((local_b4 - local_a4) - local_c4) + DAT_11de9918);
            fVar14 = DAT_11de98e8 / fVar6;
            local_a0 = (local_b8 + local_c0) * fVar14;
            local_60 = (local_bc - local_ac) * fVar14;
            fVar14 = (local_a8 + local_b0) * fVar14;
            fVar6 = fVar6 * DAT_11de98e8;
          }
        }
        else {
          local_a0 = SQRT(((local_c4 - local_b4) - local_a4) + DAT_11de9918);
          fVar6 = DAT_11de98e8 / local_a0;
          local_a0 = local_a0 * DAT_11de98e8;
          fStack_9c = 0.0;
          fStack_98 = 0.0;
          fStack_94 = 0.0;
          local_60 = (local_a8 - local_b0) * fVar6;
          fVar14 = (local_ac + local_bc) * fVar6;
          fVar6 = (local_b8 + local_c0) * fVar6;
        }
      }
      else {
        local_60 = SQRT(fVar14 + DAT_11de9918);
        fVar6 = DAT_11de98e8 / local_60;
        local_a0 = (local_a8 - local_b0) * fVar6;
        local_60 = local_60 * DAT_11de98e8;
        fStack_9c = 0.0;
        fStack_98 = 0.0;
        fStack_94 = 0.0;
        uStack_5c = 0;
        fStack_54 = 0.0;
        fVar14 = (local_b8 - local_c0) * fVar6;
        fVar6 = (local_bc - local_ac) * fVar6;
      }
      fVar10 = (float)((uint)*pfVar1 ^ DAT_11de9c90);
      fVar12 = (float)(*(uint *)(param_1 + 0x18c) ^ DAT_11de9c90);
      fVar11 = *(float *)(param_1 + 0x194);
      fVar9 = (float)(*(uint *)(param_1 + 400) ^ DAT_11de9c90);
      local_dc = (fVar14 * fVar12 - fVar6 * fVar9) + local_a0 * fVar11 + fVar10 * local_60;
      local_d8 = (local_a0 * fVar9 - fVar14 * fVar10) + fVar6 * fVar11 + fVar12 * local_60;
      local_d4 = (fVar6 * fVar10 - local_a0 * fVar12) + fVar14 * fVar11 + fVar9 * local_60;
      local_d0 = fVar11 * local_60 - (fVar6 * fVar12 + local_a0 * fVar10 + fVar14 * fVar9);
      FUN_10abc150(&local_dc);
      fVar14 = *(float *)(param_1 + 0x1b0);
      local_30 = uStack_5c._4_4_ * DAT_11de9a28 * DAT_11de98e8 + local_30;
      local_70 = fStack_54 * DAT_11de9a28 * DAT_11de98e8 + local_70;
      fVar9 = (float)uStack_5c * DAT_11de9a28 * DAT_11de98e8 + local_20;
      fVar6 = *(float *)(param_1 + 0x1b4);
      fVar11 = *(float *)(param_1 + 0x194);
      local_84 = (*(float *)(param_1 + 0x1a8) * fVar14 + *(float *)(param_1 + 0x1ac) * fVar6) *
                 DAT_11de9990;
      fVar12 = *(float *)(param_1 + 0x18c);
      local_7c = (fVar14 * fVar14 + fVar6 * fVar6) * DAT_11de9990 - DAT_11de9918;
      local_20 = (float)((uint)(((fVar11 * fVar11 + fVar12 * fVar12) * DAT_11de9990 - DAT_11de9918)
                                * (fVar14 * *(float *)(param_1 + 0x1ac) -
                                  *(float *)(param_1 + 0x1a8) * fVar6) * DAT_11de9990 +
                                (*pfVar1 * fVar12 - *(float *)(param_1 + 400) * fVar11) *
                                DAT_11de9990 * local_84 +
                               (fVar11 * *pfVar1 + *(float *)(param_1 + 400) * fVar12) *
                               DAT_11de9990 * local_7c) ^ DAT_11de9c90);
      if (local_20 < 0.0) {
        local_20 = 0.0;
      }
      local_20 = local_20 * DAT_11de9a5c;
      fVar14 = *(float *)(param_1 + 0x1b0);
      fVar6 = *(float *)(param_1 + 0x1ac);
      fVar11 = *(float *)(param_1 + 0x1b4);
      fVar12 = *(float *)(param_1 + 0x1a8);
      fVar18 = (fVar6 * DAT_11d060d4 - fVar14 * local_20) + fVar11 * 0.0;
      fVar15 = (fVar14 * 0.0 - fVar12 * DAT_11d060d4) + fVar11 * local_20;
      fVar10 = (fVar12 * local_20 - fVar6 * DAT_11de9890) - fVar11 * DAT_11de98c4;
      fVar11 = fVar10 * fVar6 - fVar15 * fVar14;
      fVar6 = fVar18 * fVar14 - fVar10 * fVar12;
      fVar12 = fVar15 * fVar12 - fVar18 * *(float *)(param_1 + 0x1ac);
      fVar14 = local_38 + fVar11 + DAT_11de9890 + fVar11;
      local_1c = fVar6 + local_20 + fVar6 + local_1c;
      fVar6 = local_18 + (fVar12 - DAT_11de98c4) + fVar12;
      if (fVar9 <= 0.0) {
        fVar11 = fVar9 / _DAT_11d060d8;
        if (DAT_11de98e8 <= fVar9 / _DAT_11d060d8) {
          fVar11 = DAT_11de98e8;
        }
        local_44 = DAT_11de9918 - fVar11;
        fVar14 = fVar14 * fVar11;
        local_1c = fVar11 * local_1c;
        fVar6 = fVar11 * fVar6;
        local_3c = local_44 * local_70;
        local_40 = local_44 * local_30;
      }
      else {
        local_3c = local_70;
        local_40 = local_30;
        local_44 = fVar9 / DAT_11cd7e88;
        if (DAT_11de98e8 <= fVar9 / DAT_11cd7e88) {
          local_44 = DAT_11de98e8;
        }
      }
      local_44 = local_44 * fVar9;
      if (DAT_11cbf084 < fVar17) {
        local_44 = local_44 - DAT_11ceb520;
        local_3c = local_3c - _DAT_11d060c4;
        local_40 = local_40 + 0.0;
      }
    }
    else {
      FUN_10abc150(pfVar1);
      local_44 = local_20 - (float)uStack_5c * DAT_11de9a28 * DAT_11de98e8;
      local_40 = local_30 - uStack_5c._4_4_ * DAT_11de9a28 * DAT_11de98e8;
      local_3c = local_70 - DAT_11de9890;
      fVar14 = local_38;
      fVar6 = local_18;
    }
  }
  else {
    FUN_10abc150(pfVar1);
    fVar14 = (float)uStack_5c;
    if ((float)uStack_5c < 0.0) {
      fVar14 = 0.0;
    }
    local_44 = local_20 - fVar14 * DAT_11de9a28 * DAT_11de9900;
    local_40 = local_30 - uStack_5c._4_4_ * DAT_11de9a28 * DAT_11de9900;
    local_3c = local_70 - 0.0;
    fVar14 = local_38;
    fVar6 = local_18;
  }
  iVar5 = *(int *)(param_1 + 0x148);
LAB_10ff68d9:
  fVar17 = *(float *)(iVar5 + 0xa0);
  fVar14 = fVar14 * fVar17;
  local_28 = fVar17 * local_1c;
  fVar17 = fVar17 * fVar6;
  fVar6 = *(float *)(param_1 + 0x150);
  fStack_94 = fVar6 * DAT_11de98d0;
  fStack_9c = fStack_94 * local_64;
  fStack_98 = fStack_94 * local_c8;
  fStack_94 = fStack_94 * local_cc;
  if (fVar6 * fVar6 != DAT_11de9918) {
    fVar14 = fVar14 * fVar6;
    local_28 = fVar6 * local_28;
    fVar17 = fVar6 * fVar17;
    local_44 = fVar6 * local_44;
    local_40 = fVar6 * local_40;
    local_3c = fVar6 * local_3c;
  }
  local_80 = DAT_11de9918;
  if (DAT_11de9930 < (double)*(float *)(iVar5 + 0x40)) {
    local_80 = DAT_11de9900;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x218);
  fStack_54 = *(float *)(param_1 + 0x220);
  uStack_5c._0_4_ = (float)uVar2;
  uStack_5c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar6 = local_80 * _DAT_11d060c0 * *(float *)(iVar5 + 0x20);
  if (DAT_11de9918 < fVar6) {
    fVar6 = DAT_11de9918;
  }
  *(float *)(param_1 + 0x21c) = (local_28 - uStack_5c._4_4_) * fVar6 + *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0x220) = (fVar17 - fStack_54) * fVar6 + *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x218) + (fVar14 - (float)uStack_5c) * fVar6;
  uStack_5c = uVar2;
  FUN_10b51470(param_1 + 0x200,&local_44,local_80 * DAT_11de9a20,
               *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),0);
  fVar14 = *(float *)(param_1 + 0x18c);
  fVar17 = *(float *)(param_1 + 0x194);
  fStack_54 = *(float *)(param_1 + 0x214);
  local_84 = (*pfVar1 * fVar14 - *(float *)(param_1 + 400) * fVar17) * DAT_11de9990;
  uVar2 = *(undefined8 *)(param_1 + 0x20c);
  fVar6 = local_80 * DAT_11cbf0b8 * *(float *)(*(int *)(param_1 + 0x148) + 0x20);
  fVar11 = (fVar17 * fVar17 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918;
  uStack_5c._0_4_ = (float)uVar2;
  fVar14 = (fVar17 * *pfVar1 + *(float *)(param_1 + 400) * fVar14) * DAT_11de9990;
  uStack_5c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  if (DAT_11de9918 < fVar6) {
    fVar6 = DAT_11de9918;
  }
  *(float *)(param_1 + 0x20c) = (local_84 - (float)uStack_5c) * fVar6 + *(float *)(param_1 + 0x20c);
  *(float *)(param_1 + 0x210) = (fVar11 - uStack_5c._4_4_) * fVar6 + *(float *)(param_1 + 0x210);
  *(float *)(param_1 + 0x214) = (fVar14 - fStack_54) * fVar6 + *(float *)(param_1 + 0x214);
  uStack_5c = uVar2;
  FUN_10b51470(param_1 + 0x230,&fStack_9c,&DAT_41200000,
               *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),0x3b03126f);
  fVar14 = DAT_11de9918;
  if (local_21 != '\0') {
    fVar17 = *(float *)(param_1 + 0x18c);
    fVar6 = *(float *)(param_1 + 0x194);
    fVar11 = (fVar6 * *pfVar1 + *(float *)(param_1 + 400) * fVar17) * DAT_11de9990;
    *(ulonglong *)(param_1 + 0x20c) =
         CONCAT44((fVar6 * fVar6 + fVar17 * fVar17) * DAT_11de9990 - DAT_11de9918,
                  (*pfVar1 * fVar17 - *(float *)(param_1 + 400) * fVar6) * DAT_11de9990);
    *(float *)(param_1 + 0x214) = fVar11;
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x148);
  if (*(char *)(iVar5 + 0x144) != '\0') {
    fVar17 = *(float *)(iVar5 + 0x34) / *(float *)(iVar5 + 0x140);
    if (fVar14 <= fVar17) {
      fVar17 = fVar14;
    }
    fVar6 = *(float *)(param_1 + 0x220) * DAT_11de99a0;
    fVar14 = *(float *)(DAT_120286b8 + 0x20);
    *(ulonglong *)(param_1 + 0x224) =
         CONCAT44(*(float *)(param_1 + 0x21c) * DAT_11de99a0 * fVar14 * fVar17,
                  *(float *)(param_1 + 0x218) * DAT_11de99a0 * fVar14 * fVar17);
    *(float *)(param_1 + 0x22c) = fVar6 * fVar14 * fVar17;
    fVar14 = *(float *)(DAT_120286b8 + 0x24);
    fVar17 = *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x224) +
             *(float *)(param_1 + 0x228) * *(float *)(param_1 + 0x228) +
             *(float *)(param_1 + 0x22c) * *(float *)(param_1 + 0x22c);
    if (fVar14 * fVar14 < fVar17) {
      fVar14 = fVar14 / SQRT(fVar17);
      *(float *)(param_1 + 0x224) = fVar14 * *(float *)(param_1 + 0x224);
      *(float *)(param_1 + 0x228) = fVar14 * *(float *)(param_1 + 0x228);
      *(float *)(param_1 + 0x22c) = fVar14 * *(float *)(param_1 + 0x22c);
    }
    fVar14 = *(float *)(param_1 + 0x22c);
    uVar2 = *(undefined8 *)(param_1 + 0x224);
    uStack_5c._0_4_ = (float)uVar2;
    *param_2 = (float)uStack_5c + *param_2;
    uStack_5c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    param_2[1] = uStack_5c._4_4_ + param_2[1];
    param_2[2] = fVar14 + param_2[2];
  }
  return;
}

