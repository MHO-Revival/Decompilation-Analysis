
// ===== [d0] FUN_10571000 @10571000  (3006 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_10571000(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0 [5];
  undefined4 local_bc;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int *local_90;
  int *local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  char local_39;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int *local_14;
  
  uVar3 = FUN_103d9ed0(3);
  iVar8 = **(int **)(DAT_113f3a18 + 0x50);
  uVar4 = (**(code **)(*(int *)local_14[0x15] + 0xc))();
  local_90 = (int *)(**(code **)(iVar8 + 0x2c))(uVar4);
  local_6c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(uVar3);
  uVar4 = (**(code **)(*(int *)local_14[0x15] + 0xc))();
  FUN_103dd050(uVar4);
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  local_8c = (int *)(**(code **)(*piVar5 + 0xc))(uVar3);
  piVar1 = local_14;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  piVar5 = (int *)local_14[0xb];
  if (((2 < (uint)(piVar5[1] - *piVar5 >> 2)) && (8 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar5[3] + 8))) {
    FUN_103d8940(*(int *)(piVar5[3] + 8),&local_20);
    FUN_10552d10();
  }
  piVar5 = (int *)piVar1[0xb];
  local_39 = '\0';
  if (((7 < (uint)(piVar5[1] - *piVar5 >> 2)) && (0x1c < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar5[3] + 0x1c))) {
    FUN_103d8940(*(int *)(piVar5[3] + 0x1c),&local_39);
    FUN_101c36a0();
  }
  piVar5 = local_90;
  if (local_90 == (int *)0x0) {
    return 1;
  }
  if (((local_6c == (int *)0x0) || (local_8c == (int *)0x0)) ||
     (cVar2 = (**(code **)(*local_8c + 0xf4))(), cVar2 != '\0')) {
    (**(code **)(*piVar1 + 0x24))(1);
    return 1;
  }
  iVar8 = *piVar5;
  uVar3 = (**(code **)(*local_6c + 200))(&local_38);
  (**(code **)(iVar8 + 0x98))(&local_a4,uVar3);
  pfVar6 = (float *)(**(code **)(*piVar5 + 0x94))();
  local_78 = *pfVar6;
  local_94 = local_a4 - local_78;
  local_74 = pfVar6[1];
  local_70 = pfVar6[2];
  local_8c = (int *)(local_a0 - local_74);
  local_6c = (int *)(local_9c - local_70);
  local_38 = local_94;
  local_34 = (float)local_8c;
  local_30 = (float)local_6c;
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  iVar8 = *piVar5;
  uVar3 = (**(code **)(*(int *)local_14[0x15] + 0xc))();
  piVar5 = (int *)(**(code **)(iVar8 + 0xc))(uVar3);
  local_98 = (float)local_8c * (float)local_8c + local_94 * local_94 +
             (float)local_6c * (float)local_6c;
  local_d0[0] = SQRT(local_98);
  local_d0[1] = 0.0;
  local_d0[2] = 0.0;
  local_d0[3] = 0.0;
  if (local_d0[0] < DAT_113c12b8) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x380))(&DAT_1139eb9e);
    }
    piVar5 = (int *)(**(code **)(*local_90 + 0x16c))();
    if (piVar5 != (int *)0x0) {
      local_74 = 0.0;
      local_d0[2] = 0.0;
      local_70 = 0.0;
      local_d0[3] = 0.0;
      local_d0[0] = 2.52234e-44;
      local_bc = 0;
      local_78 = 0.0;
      local_d0[1] = 0.0;
      fVar9 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
      local_bc = 0;
      local_d0[4] = (float)fVar9;
      (**(code **)(*piVar5 + 0x1c))(local_d0,0);
    }
    return 2;
  }
  fVar9 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
  local_4c = (float)fVar9;
  local_28 = DAT_113c1280;
  local_2c = DAT_113c1280;
  local_24 = DAT_113c1280;
  if (local_39 == '\0') {
    local_5c = local_20 * local_4c;
    local_58 = local_1c * local_4c;
    local_54 = local_18 * local_4c;
    local_48 = local_5c;
    local_44 = local_58;
    local_40 = local_54;
    local_2c = local_58;
    local_28 = local_5c;
    local_24 = local_54;
    goto LAB_10571845;
  }
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  FUN_10552e20(8,&local_68);
  local_7c = 0.0;
  FUN_10552dd0(9,&local_7c);
  local_50 = 0.0;
  FUN_10552dd0(10,&local_50);
  local_78 = local_20;
  local_74 = local_1c;
  local_70 = local_18;
  cVar2 = FUN_10552e20(0xc,&local_78);
  if (cVar2 == '\0') {
    return 1;
  }
  local_20 = local_78;
  local_1c = local_74;
  local_18 = local_70;
  local_14 = (int *)0x0;
  cVar2 = FUN_10552dd0(0xb,&local_14);
  if (cVar2 == '\0') {
    return 1;
  }
  if (local_7c <= (float)local_14) {
LAB_1057153e:
    if (((float)local_14 < local_7c) || (local_50 < (float)local_14 + local_4c)) {
      if ((local_50 <= (float)local_14) || ((float)local_14 + local_4c <= local_50)) {
        if (local_50 < (float)local_14) goto LAB_10571762;
      }
      else {
        fVar11 = local_50 - (float)local_14;
        fVar10 = local_18 * DAT_112fcab0;
        local_18 = local_60 * fVar11 + local_18;
        local_58 = (local_1c * DAT_112fcab0 + local_64 * fVar11) * DAT_113c12b8 * fVar11;
        local_54 = (fVar10 + local_60 * fVar11) * DAT_113c12b8 * fVar11;
        local_5c = (local_20 * DAT_112fcab0 + local_68 * fVar11) * DAT_113c12b8 * fVar11;
        local_1c = local_64 * fVar11 + local_1c;
        local_20 = local_68 * fVar11 + local_20;
        fVar10 = (local_4c - local_50) + (float)local_14;
        local_28 = local_20 * fVar10 + local_5c;
        local_2c = local_1c * fVar10 + local_58;
        local_24 = local_18 * fVar10 + local_54;
        local_48 = local_5c;
        local_44 = local_58;
        local_40 = local_54;
      }
    }
    else {
      fVar11 = local_18 * DAT_112fcab0;
      fVar10 = local_1c * DAT_112fcab0;
      local_18 = local_60 * local_4c + local_18;
      local_28 = (local_20 * DAT_112fcab0 + local_68 * local_4c) * DAT_113c12b8 * local_4c;
      local_1c = local_64 * local_4c + local_1c;
      local_24 = (fVar11 + local_60 * local_4c) * DAT_113c12b8 * local_4c;
      local_20 = local_68 * local_4c + local_20;
      local_2c = (fVar10 + local_64 * local_4c) * DAT_113c12b8 * local_4c;
    }
  }
  else if ((float)local_14 + local_4c <= local_7c) {
LAB_10571762:
    local_5c = local_20 * local_4c;
    local_58 = local_1c * local_4c;
    local_54 = local_18 * local_4c;
    local_48 = local_5c;
    local_44 = local_58;
    local_40 = local_54;
    local_2c = local_58;
    local_28 = local_5c;
    local_24 = local_54;
  }
  else {
    if ((float)local_14 + local_4c <= local_7c) goto LAB_1057153e;
    local_54 = local_7c - (float)local_14;
    local_5c = local_20 * local_54;
    fVar14 = (local_4c - local_7c) + (float)local_14;
    local_58 = local_1c * local_54;
    local_54 = local_18 * local_54;
    fVar10 = local_20 * DAT_112fcab0;
    fVar11 = local_1c * DAT_112fcab0;
    fVar13 = local_18 * DAT_112fcab0;
    local_20 = local_68 * fVar14 + local_20;
    local_18 = local_60 * fVar14 + local_18;
    local_1c = local_64 * fVar14 + local_1c;
    local_28 = local_5c + fVar14 * (fVar10 + local_68 * fVar14) * DAT_113c12b8;
    local_2c = local_58 + fVar14 * (fVar11 + local_64 * fVar14) * DAT_113c12b8;
    local_24 = local_54 + fVar14 * (fVar13 + local_60 * fVar14) * DAT_113c12b8;
    local_48 = local_5c;
    local_44 = local_58;
    local_40 = local_54;
  }
  local_14 = (int *)((float)local_14 + local_4c);
  FUN_105595d0(0xb,&local_14);
  FUN_10551270(0xc,&local_20);
LAB_10571845:
  piVar5 = local_90;
  (**(code **)(*local_90 + 0x78))(&local_100);
  local_88 = local_fc * local_2c + local_100 * local_28 + local_f8 * local_24;
  local_84 = local_ec * local_2c + local_f0 * local_28 + local_e8 * local_24;
  local_80 = local_dc * local_2c + local_e0 * local_28 + local_d8 * local_24;
  if ((float)((uint)local_6c & DAT_112fcb10) < (float)((uint)local_80 & DAT_112fcb10)) {
    local_80 = (float)local_6c;
  }
  cVar2 = FUN_103d9e70(1);
  if (cVar2 == '\0') {
    iVar8 = (**(code **)(*piVar5 + 0x16c))();
    if (iVar8 == 0) {
      return 3;
    }
    pfVar6 = &local_88;
  }
  else {
    cVar2 = FUN_103d9e70(0);
    if (cVar2 == '\0') {
      pfVar6 = (float *)(**(code **)(*piVar5 + 0x94))();
      local_68 = *pfVar6 + local_88;
      local_60 = pfVar6[2] + local_80;
      local_64 = pfVar6[1] + local_84;
      local_50 = local_9c;
      if (((DAT_113c1280 <= local_18) || (local_9c <= local_60)) &&
         ((local_18 <= DAT_113c1280 || (local_60 <= local_9c)))) {
        local_50 = local_60;
      }
      local_38 = local_68;
      local_34 = local_64;
      local_30 = local_60;
      (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 8))(piVar5,2);
    }
    else {
      local_7c = 0.0;
      FUN_10552dd0(5,&local_7c);
      fVar10 = local_7c * local_4c;
      if ((float)((uint)fVar10 & DAT_112fcb10) < local_d0[0]) {
        local_30 = DAT_113cc5f0;
        local_34 = DAT_113cc5ec;
        local_38 = DAT_113cc5e8;
        if (DAT_112fce4c < local_98) {
          auVar12 = rsqrtss(ZEXT416((uint)local_98),ZEXT416((uint)local_98));
          fVar11 = auVar12._0_4_;
          fVar11 = (DAT_112fcaac - fVar11 * local_98 * fVar11 * DAT_113c12b8) * fVar11;
          local_30 = (float)local_6c * fVar11;
          local_34 = (float)local_8c * fVar11;
          local_38 = local_94 * fVar11;
        }
        local_38 = local_38 * fVar10;
        local_34 = local_34 * fVar10;
        local_30 = local_30 * fVar10;
      }
      local_88 = local_38;
      local_84 = local_34;
      local_80 = local_30;
      pfVar6 = (float *)(**(code **)(*piVar5 + 0x94))();
      local_68 = *pfVar6 + local_88;
      local_64 = pfVar6[1] + local_84;
      local_60 = pfVar6[2] + local_80;
      local_38 = local_68;
      local_34 = local_64;
      local_30 = local_60;
      (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 8))(piVar5,1);
      local_50 = local_60;
    }
    pfVar7 = (float *)(**(code **)(*piVar5 + 0x94))();
    pfVar6 = &local_48;
    local_38 = *pfVar7;
    local_48 = local_68 - local_38;
    local_34 = pfVar7[1];
    local_30 = pfVar7[2];
    local_44 = local_64 - local_34;
    local_40 = local_50 - local_30;
  }
  (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x1c))(piVar5,pfVar6,3);
  return 3;
}


// ===== [d1] FUN_103d8940 @103d8940  (10 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_103d8940(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4);
}


// ===== [d1] FUN_10552d10 @10552d10  (83 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10552d10(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 < 1000000)) {
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_10551180(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d1] FUN_103dd050 @103dd050  (179 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dd050(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined1 local_c [8];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = param_1 + 8;
  iVar5 = iVar4;
  if (iVar1 != 0) {
    do {
      if (*(uint *)(iVar1 + 0x10) < param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar5 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar5 == iVar4) goto LAB_103dd0c4;
    if (param_2 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (piVar3 = (int *)FUN_103de9f0(local_c,&param_2), *piVar3 != param_1 + 0x38)) {
      return 0;
    }
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_103dd0c4:
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     (FUN_103de910(local_c,&param_2), unaff_ESI != param_1 + 0x20)) {
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}


// ===== [d1] FUN_103d9e70 @103d9e70  (44 bytes) =====

/* [RE-AUTO c0] */

undefined1 FUN_103d9e70(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_5;
  
  uVar2 = DAT_116f8908;
  cVar1 = FUN_103db9b0(param_1,&local_5);
  if (cVar1 != '\0') {
    uVar2 = local_5;
  }
  return uVar2;
}


// ===== [d1] FUN_101c36a0 @101c36a0  (113 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c36a0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != 0xffffffff) {
    if (999999 < param_2) {
      uVar2 = FUN_101c3380(param_2 - 1000000,param_3);
      return uVar2;
    }
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_101c4350(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d1] FUN_10552dd0 @10552dd0  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10552dd0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_101c35a0();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// ===== [d1] FUN_105595d0 @105595d0  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_105595d0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_101c3510();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// ===== [d1] FUN_103d9ed0 @103d9ed0  (38 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_103d9ed0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = DAT_116f8904;
  cVar1 = FUN_103dbab0(param_1,&local_8);
  if (cVar1 != '\0') {
    uVar2 = local_8;
  }
  return uVar2;
}


// ===== [d1] FUN_10551270 @10551270  (120 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10551270(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar3 = piVar1[1] - *piVar1 >> 2;
  if ((param_2 < uVar3) && (uVar3 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar3)) {
    uVar3 = piVar1[3];
    uVar2 = *(uint *)(uVar3 + param_2 * 4);
    if (-1 < (int)uVar2) {
      uVar3 = FUN_103d8940();
      if (uVar2 != 0xffffffff) {
        uVar3 = FUN_103c9820(uVar2);
        if (uVar2 < 1000000) {
          uVar3 = FUN_10551520(uVar2,*param_3,param_3[1],param_3[2]);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}


// ===== [d1] FUN_10552e20 @10552e20  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10552e20(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_10552d10();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// ===== [d2] FUN_10551180 @10551180  (29 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10551180(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) + 1;
  switch(uVar1) {
  case 0:
  case 7:
    uVar1 = FUN_10550ea0(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_105fc040(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    uVar1 = FUN_10551110(param_1 + 0x1c,param_2);
    return uVar1;
  case 3:
    uVar1 = FUN_10550f00(param_1 + 0x1c,param_2);
    return uVar1;
  case 4:
    uVar1 = FUN_10551140(param_1 + 0x1c,param_2);
    return uVar1;
  case 5:
    uVar1 = FUN_10550ed0(param_1 + 0x1c,param_2);
    return uVar1;
  case 6:
    uVar1 = FUN_10550e70(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_10550f60(param_1 + 0x1c,param_2);
    return uVar1;
  case 9:
    uVar1 = FUN_10550f30(param_1 + 0x1c,param_2);
    return uVar1;
  default:
    return uVar1 & 0xffffff00;
  }
}


// ===== [d2] FUN_103c5000 @103c5000  (386 bytes) =====

/* [RE-AUTO c0]
   calls: _snprintf_s
   strings:
     ""SetFact Fail: invalid index ""
     ""GetFact Fail: invalid index ""
     ""bb %s, ""
     ""entity %s, ""
     ""bt %s, "" */

void FUN_103c5000(char param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  char *pcStack_138;
  char *pcStack_134;
  undefined1 local_128 [4];
  char **ppcStack_124;
  char acStack_120 [8];
  undefined1 *local_118;
  undefined1 *local_114;
  undefined1 local_110;
  uint local_c;
  
  local_118 = local_128;
  local_114 = local_128;
  local_c = DAT_113dd8c0 ^ (uint)local_128;
  local_128[0] = 0;
  local_110 = 0;
  if (param_1 == '\0') {
    pcStack_134 = "GetFact Fail: invalid index ";
    pcStack_138 = "GetFact Fail: invalid index ";
  }
  else {
    pcStack_134 = "SetFact Fail: invalid index ";
    pcStack_138 = "SetFact Fail: invalid index ";
  }
  pcStack_134 = pcStack_134 + 0x1c;
  FUN_100282d0();
  _snprintf_s((char *)&local_118,0xff,0xffffffff,"%d, ");
  ppuVar3 = &local_118;
  do {
    cVar1 = *(char *)ppuVar3;
    ppuVar3 = (undefined1 **)((int)ppuVar3 + 1);
  } while (cVar1 != '\0');
  FUN_10028a60();
  if (param_3 != 0) {
    _snprintf_s(acStack_120,0xff,0xffffffff,"bb %s, ");
    pcVar4 = acStack_120;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_10028a60();
    iVar2 = *(int *)(param_3 + 0x94);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x16c) != *(int *)(iVar2 + 0x168)) {
        _snprintf_s(acStack_120,0xff,0xffffffff,"entity %s, ");
        FUN_1002bca0();
      }
      if (*(int *)(iVar2 + 0x124) != 0) {
        _snprintf_s(acStack_120,0xff,0xffffffff,"bt %s, ");
        FUN_1002bca0();
      }
    }
  }
  if ((ppcStack_124 != &pcStack_138) && (ppcStack_124 != (char **)0x0)) {
    FUN_10653dc0();
  }
  FUN_112bed8e();
  return;
}


// ===== [d2] FUN_103de910 @103de910  (67 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103de910(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != param_1) {
      if (*param_3 < *(uint *)(iVar3 + 0x10)) {
        iVar3 = param_1;
      }
      *param_2 = iVar3;
      return;
    }
  }
  *param_2 = iVar3;
  return;
}


// ===== [d2] FUN_103de9f0 @103de9f0  (67 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103de9f0(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != param_1) {
      if (*param_3 < *(uint *)(iVar3 + 0x10)) {
        iVar3 = param_1;
      }
      *param_2 = iVar3;
      return;
    }
  }
  *param_2 = iVar3;
  return;
}


// ===== [d2] FUN_103de960 @103de960  (133 bytes) =====

/* [RE-AUTO c0] */

uint * __thiscall FUN_103de960(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_c;
  
  local_c = 0;
  puVar1 = param_1;
  if ((uint *)param_1[1] != (uint *)0x0) {
    puVar2 = (uint *)param_1[1];
    do {
      if (puVar2[4] < *param_2) {
        puVar3 = (uint *)puVar2[3];
      }
      else {
        puVar3 = (uint *)puVar2[2];
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != (uint *)0x0);
  }
  if ((puVar1 == param_1) || (*param_2 < puVar1[4])) {
    local_28 = *param_2;
    local_18 = 0;
    uStack_14 = 0;
    local_24 = 0;
    local_1c = 0;
    FUN_103df460(&param_2,puVar1,&local_28);
    puVar1 = param_2;
  }
  return puVar1 + 5;
}


// ===== [d2] FUN_103db9b0 @103db9b0  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103db9b0(int param_1,uint param_2,undefined4 param_3)

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
      cVar3 = FUN_101c4350(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c36a0();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// ===== [d2] FUN_101c4350 @101c4350  (29 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c4350(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar1 = FUN_101c4940(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_101c3ca0(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    *param_2 = DAT_113c1280 < *(float *)(param_1 + 0x1c);
    return 1;
  case 3:
    *param_2 = *(undefined1 *)(param_1 + 0x1c);
    return 1;
  case 5:
    *param_2 = 0 < *(int *)(param_1 + 0x1c);
    return 1;
  case 7:
    uVar1 = FUN_101c4970(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_101c49a0(param_1 + 0x1c,param_2);
    return uVar1;
  case 0xffffffff:
  case 4:
  case 6:
    *param_2 = *(int *)(param_1 + 0x1c) != 0;
    return 1;
  default:
    return 0;
  }
}


// ===== [d2] FUN_101c3380 @101c3380  (295 bytes) =====

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Bool == m_eValueType"" */

void __thiscall FUN_101c3380(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100282d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x3) {
          _wassert(L"E_Type_Bool == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x75);
        }
        *param_3 = (char)uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_3c);
        }
        FUN_112bed8e();
        return;
      }
    }
  }
  FUN_112bed8e();
  return;
}


// ===== [d2] FUN_101c35a0 @101c35a0  (113 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c35a0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != 0xffffffff) {
    if (999999 < param_2) {
      uVar2 = FUN_101c3270(param_2 - 1000000,param_3);
      return uVar2;
    }
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_101c4190(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d2] FUN_101c3510 @101c3510  (64 bytes) =====

/* [RE-AUTO c0] */

uint FUN_101c3510(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_101c3960(param_1);
    return uVar1;
  }
  uVar1 = FUN_101c2f20(param_1 - 1000000,*param_2);
  return uVar1;
}


// ===== [d2] FUN_103dbab0 @103dbab0  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dbab0(int param_1,uint param_2,undefined4 param_3)

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
      cVar3 = FUN_101c4430(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c3720();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// ===== [d2] FUN_10551520 @10551520  (96 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall
FUN_10551520(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    local_10 = param_3;
    local_c = param_4;
    local_8 = param_5;
    cVar1 = FUN_105513b0(&local_10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_103c5000(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}


// ===== [d2] FUN_103c9820 @103c9820  (3 bytes) =====

/* [RE-AUTO c0] */

void FUN_103c9820(void)

{
  return;
}

