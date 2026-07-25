
// ===== [d0] FUN_10570c80 @10570c80  (895 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10570c80(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  float local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  local_10 = param_1;
  if (*(char *)(*(int *)((int)param_1 + 0x20) + 0xd8) == '\0') {
    uVar2 = FUN_10571000();
    return uVar2;
  }
  piVar3 = *(int **)((int)param_1 + 0x2c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (((2 < (uint)(piVar3[1] - *piVar3 >> 2)) && (8 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar3[3] + 8))) {
    FUN_103d8940(*(int *)(piVar3[3] + 8),&local_2c);
    cVar1 = FUN_10552d10();
    if (((cVar1 != '\0') &&
        (piVar3 = *(int **)((int)param_1 + 0x2c), 3 < (uint)(piVar3[1] - *piVar3 >> 2))) &&
       ((0xc < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU) && (-1 < *(int *)(piVar3[3] + 0xc))))) {
      FUN_103d8940(*(int *)(piVar3[3] + 0xc),&local_1c);
      cVar1 = FUN_101c3720();
      if (cVar1 != '\0') {
        FUN_10a5d660();
        cVar1 = FUN_103d9e70(0);
        local_18 = 0;
        if ((cVar1 != '\0') && (cVar1 = FUN_10552dd0(5,&local_18), cVar1 == '\0')) {
          return 1;
        }
        iVar6 = **(int **)(DAT_113f3a18 + 0x50);
        uVar2 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))();
        piVar3 = (int *)(**(code **)(iVar6 + 0x2c))(uVar2);
        local_c = piVar3;
        local_14 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_1c);
        if ((piVar3 != (int *)0x0) && (local_14 != (int *)0x0)) {
          local_5 = '\0';
          cVar1 = FUN_10569560(6,&local_5);
          if (cVar1 != '\0') {
            if (local_5 != '\0') {
              piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
              piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
              iVar6 = *piVar3;
              uVar2 = (**(code **)(**(int **)((int)local_10 + 0x54) + 0xc))();
              piVar3 = (int *)(**(code **)(iVar6 + 0xc))(uVar2);
              puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x9c))(&local_50);
              local_2c = *puVar4;
              local_28 = puVar4[1];
              local_24 = puVar4[2];
              FUN_10551270(2,&local_2c);
              piVar3 = local_c;
            }
            iVar6 = *piVar3;
            uVar2 = (**(code **)(*local_14 + 200))(&local_50);
            (**(code **)(iVar6 + 0x98))(&local_44,uVar2);
            pfVar5 = (float *)(**(code **)(*local_c + 0x94))();
            local_38 = *pfVar5;
            local_34 = pfVar5[1];
            local_30 = pfVar5[2];
            if (SQRT((local_40 - local_34) * (local_40 - local_34) +
                     (local_44 - local_38) * (local_44 - local_38) +
                     (local_3c - local_30) * (local_3c - local_30)) < DAT_113c12b8) {
              return 2;
            }
            iVar6 = (**(code **)(*local_14 + 0x274))();
            if (iVar6 != -1) {
              local_6 = '\0';
              FUN_10569560(7,&local_6);
              if (local_6 == '\0') {
                return 3;
              }
              local_14 = (int *)0x0;
              cVar1 = FUN_10552dd0(0xb,&local_14);
              if (cVar1 != '\0') {
                FUN_105595d0(0xb,&local_14);
                local_38 = 0.0;
                local_34 = 0.0;
                local_30 = 0.0;
                cVar1 = FUN_10552e20(0xc,&local_38);
                if (cVar1 != '\0') {
                  FUN_10551270(0xc,&local_2c);
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  FUN_10552e20(8,&local_50);
                  local_c = (int *)0x0;
                  FUN_10552dd0(9,&local_c);
                  local_10 = 0.0;
                  FUN_10552dd0(10,&local_10);
                  if (DAT_112fca80 <= local_10 - (float)local_c) {
                    return 3;
                  }
                }
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 1;
}


// [d1] FUN_103d9e70 @103d9e70  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d1] FUN_10569560 @10569560  (emitted in an earlier root)

// ===== [d1] FUN_10571000 @10571000  (3006 bytes) =====

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


// ===== [d1] FUN_10a5d660 @10a5d660  (25 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __fastcall FUN_10a5d660(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10a5dda0(&DAT_1139eb9e);
  *param_1 = uVar1;
  return param_1;
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


// [d1] FUN_10552d10 @10552d10  (emitted in an earlier root)

// [d1] FUN_10551270 @10551270  (emitted in an earlier root)

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


// [d2] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// ===== [d2] FUN_103d9ed0 @103d9ed0  (38 bytes) =====

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


// [d2] FUN_103dd050 @103dd050  (emitted in an earlier root)

// ===== [d2] FUN_10a5dda0 @10a5dda0  (160 bytes) =====

/* [RE-AUTO c0]
   calls: EnterCriticalSection, LeaveCriticalSection */

int __thiscall FUN_10a5dda0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  int local_8;
  
  pbVar4 = &DAT_1139eb9e;
  pbVar2 = &DAT_1139eb9e;
  pbVar5 = &DAT_1139eb9e;
  if (param_2 != (byte *)0x0) {
    pbVar2 = param_2;
    pbVar5 = param_2;
  }
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_10a5dde2:
      uVar3 = -(uint)bVar6 | 1;
      goto LAB_10a5dde7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_10a5dde2;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_10a5dde7:
  if (uVar3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    param_2 = pbVar5;
    FUN_10a5cd80(&local_8,&param_2);
    if ((local_8 == 0) || (local_8 = local_8 + 4, local_8 == 0)) {
      local_8 = FUN_10a5dec0(pbVar5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return local_8;
  }
  return *(int *)(param_1 + 0x1c);
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

// [d2] FUN_10551180 @10551180  (emitted in an earlier root)

// [d2] FUN_103c9820 @103c9820  (emitted in an earlier root)

// [d2] FUN_10551520 @10551520  (emitted in an earlier root)

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

