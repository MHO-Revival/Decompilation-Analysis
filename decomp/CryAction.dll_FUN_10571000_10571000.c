
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

