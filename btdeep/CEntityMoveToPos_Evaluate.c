
// ===== [d0] FUN_1056e300 @1056e300  (961 bytes) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""NORMAL_RUN"" */

undefined4 __fastcall FUN_1056e300(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined8 uVar8;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined1 local_13;
  char local_12;
  char local_11;
  
  local_1c = param_1;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar2 = FUN_1056e6d0();
    return uVar2;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  local_20 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (local_20 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    iVar5 = *piVar3;
    uVar2 = (**(code **)(**(int **)(local_1c + 0x54) + 0xc))();
    local_18 = (int *)(**(code **)(iVar5 + 0xc))(uVar2);
    if (local_18 != (int *)0x0) {
      FUN_10a5d620("NORMAL_RUN");
      iVar5 = local_1c;
      FUN_103dbbb0(8,&local_24);
      local_34 = 0.0;
      local_30 = 0.0;
      local_2c = 0.0;
      cVar1 = FUN_10552e20(4,&local_34);
      if ((cVar1 != '\0') && (cVar1 = FUN_10552e20(5,&local_40), cVar1 != '\0')) {
        pfVar4 = (float *)(**(code **)(*local_20 + 0x98))(&fStack_4c,&local_40);
        piVar3 = local_18;
        local_40 = *pfVar4;
        local_3c = pfVar4[1];
        local_38 = pfVar4[2];
        (**(code **)(*local_18 + 0x3f4))(*pfVar4,pfVar4[1],pfVar4[2]);
        local_13 = 1;
        FUN_103db9b0(2,&local_13);
        local_11 = '\0';
        FUN_103db9b0(0,&local_11);
        local_28 = 0;
        if ((local_11 == '\0') || (cVar1 = FUN_10552dd0(6,&local_28), cVar1 != '\0')) {
          local_12 = '\0';
          cVar1 = FUN_10569560(7,&local_12);
          if (cVar1 != '\0') {
            if (local_12 != '\0') {
              pfVar4 = (float *)(**(code **)(*piVar3 + 0x9c))(&fStack_4c);
              local_34 = *pfVar4;
              local_30 = pfVar4[1];
              local_2c = pfVar4[2];
              FUN_10551270(4,&local_34);
            }
            pfVar4 = (float *)(**(code **)(*local_20 + 0x94))();
            piVar3 = local_18;
            fStack_4c = *pfVar4;
            fStack_48 = pfVar4[1];
            fStack_44 = pfVar4[2];
            (**(code **)(*local_18 + 0x404))(*pfVar4,pfVar4[1],pfVar4[2]);
            fVar7 = SQRT((local_3c - fStack_48) * (local_3c - fStack_48) +
                         (local_40 - fStack_4c) * (local_40 - fStack_4c) +
                         (local_38 - fStack_44) * (local_38 - fStack_44));
            fStack_4c = 0.0;
            fStack_48 = 0.0;
            fStack_44 = 0.0;
            (**(code **)(*piVar3 + 0x3b4))
                      ((fVar7 / SQRT(local_30 * local_30 + local_34 * local_34 + local_2c * local_2c
                                    )) * _DAT_11307984);
            (**(code **)(*piVar3 + 0x3ac))(0);
            if (DAT_113c12b8 <= fVar7) {
              if ((*(char *)(DAT_113f3a18 + 0x209) != '\0') ||
                 (cVar1 = (**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x168))(), cVar1 != '\0'))
              {
                FUN_10a5d660();
                FUN_10553c60(0xb,&local_20);
                if (local_20 != local_24) {
                  uVar2 = (**(code **)(**(int **)(iVar5 + 0x54) + 0xc))();
                  iVar5 = FUN_103dd050(uVar2);
                  piVar3 = local_18;
                  if (iVar5 != 0) {
                    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
                    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
                    iVar5 = *piVar3;
                    uVar2 = (**(code **)(**(int **)(local_1c + 0x54) + 0xc))();
                    iVar5 = (**(code **)(iVar5 + 0xc))(uVar2);
                    piVar3 = local_18;
                    if (iVar5 != 0) {
                      FUN_103d9e70(1);
                      piVar3 = local_18;
                    }
                  }
                }
                piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
                iVar5 = *piVar3;
                uVar8 = (**(code **)(*piVar6 + 0x228))();
                (**(code **)(iVar5 + 0x3a4))(uVar8);
              }
              return 3;
            }
            return 2;
          }
        }
      }
    }
  }
  return 1;
}


// ===== [d1] FUN_10553c60 @10553c60  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10553c60(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_103dc170();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// [d1] FUN_103d9e70 @103d9e70  (emitted in an earlier root)

// [d1] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

// [d1] FUN_10569560 @10569560  (emitted in an earlier root)

// ===== [d1] FUN_10a5d620 @10a5d620  (53 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d620(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_10a5dda0(param_2);
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = FUN_10a5dda0(&DAT_1139eb9e);
  *param_1 = uVar1;
  return param_1;
}


// [d1] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// ===== [d1] FUN_103dbbb0 @103dbbb0  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dbbb0(int param_1,uint param_2,undefined4 param_3)

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
      cVar3 = FUN_101cec60(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_103dc170();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// [d1] FUN_103dd050 @103dd050  (emitted in an earlier root)

// [d1] FUN_10552e20 @10552e20  (emitted in an earlier root)

// [d1] FUN_10551270 @10551270  (emitted in an earlier root)

// [d1] FUN_10552dd0 @10552dd0  (emitted in an earlier root)

// ===== [d1] FUN_1056e6d0 @1056e6d0  (2527 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE"" */

undefined4 __fastcall FUN_1056e6d0(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_104;
  undefined1 local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [5];
  undefined4 local_9c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [4];
  undefined4 local_68;
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
  int local_34;
  float local_30;
  char local_2a;
  char local_29;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int *local_18;
  char local_11;
  
  local_2a = '\0';
  local_34 = param_1;
  FUN_103db9b0(0,&local_2a);
  piVar4 = *(int **)(param_1 + 0x2c);
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  if (((4 < (uint)(piVar4[1] - *piVar4 >> 2)) && (0x10 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar4[3] + 0x10))) {
    FUN_103d8940(*(int *)(piVar4[3] + 0x10),&local_80);
    FUN_10552d10();
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  FUN_103dd050(uVar3);
  iVar7 = **(int **)(DAT_113f3a18 + 0x50);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  local_18 = (int *)(**(code **)(iVar7 + 0x2c))(uVar3);
  piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
  iVar7 = *piVar4;
  uVar3 = (**(code **)(**(int **)(local_34 + 0x54) + 0xc))();
  piVar5 = (int *)(**(code **)(iVar7 + 0xc))(uVar3);
  piVar4 = local_18;
  if ((local_18 == (int *)0x0) || (piVar5 == (int *)0x0)) {
    return 1;
  }
  local_11 = FUN_103d9e70(1);
  if (local_11 == '\0') {
    fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
    local_1c = (float)fVar10;
    fVar10 = (float10)(**(code **)(*piVar5 + 0x3b0))();
    fVar10 = fVar10 + (float10)local_1c;
    local_1c = (float)fVar10;
    local_30 = (float)fVar10;
    (**(code **)(*piVar5 + 0x3ac))((float)fVar10);
    fVar10 = (float10)(**(code **)(*piVar5 + 0x3b8))();
    if ((fVar10 < (float10)local_1c) && (DAT_112fcabc < local_30)) {
      local_138 = 0x8b1;
      local_134 = 0xffffffff;
      local_130 = 0xffffffff;
      local_f4 = 0;
      local_104 = (**(code **)(**(int **)(local_34 + 0x54) + 0xc))();
      (**(code **)(**(int **)(*(int *)(DAT_113f3a18 + 0xd0) + 0x98) + 0x14))(&local_138);
      return 1;
    }
  }
  (**(code **)(*piVar5 + 0x3f8))(&local_bc);
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x94))();
  local_64 = *pfVar6;
  local_60 = pfVar6[1];
  local_5c = pfVar6[2];
  local_48 = *pfVar6;
  local_74 = local_bc - local_48;
  local_44 = pfVar6[1];
  local_40 = pfVar6[2];
  local_70 = local_b8 - local_44;
  local_58 = local_b4 - local_40;
  local_28 = local_74;
  local_24 = local_70;
  local_20 = local_58;
  FUN_10a5d620("NORMAL_IDLE");
  FUN_103dbbb0(9,local_6c);
  cVar2 = FUN_103d9e70(3);
  if ((cVar2 == '\0') || (DAT_113c12c8 <= SQRT(local_70 * local_70 + local_74 * local_74))) {
    local_40 = local_70 * local_70 + local_74 * local_74 + local_58 * local_58;
    local_b0[0] = SQRT(local_40);
    local_b0[1] = 0.0;
    local_b0[2] = 0.0;
    local_b0[3] = 0.0;
    if (DAT_113c12c8 <= local_b0[0]) {
      fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
      local_1c = (float)fVar10;
      local_88 = local_80 * local_1c;
      local_30 = local_7c * local_1c;
      local_84 = local_78 * local_1c;
      (**(code **)(*piVar4 + 0x78))(&local_ec);
      local_29 = '\x01';
      local_54 = local_e8 * local_30 + local_ec * local_88 + local_e4 * local_84;
      local_50 = local_d8 * local_30 + local_dc * local_88 + local_d4 * local_84;
      local_4c = local_c8 * local_30 + local_cc * local_88 + local_c4 * local_84;
      FUN_103db9b0(2,&local_29);
      if (local_29 != '\0') {
        if ((float)((uint)local_74 & DAT_112fcb10) < (float)((uint)local_54 & DAT_112fcb10)) {
          local_54 = local_74;
        }
        if ((float)((uint)local_70 & DAT_112fcb10) < (float)((uint)local_50 & DAT_112fcb10)) {
          local_50 = local_70;
        }
        if ((float)((uint)local_58 & DAT_112fcb10) < (float)((uint)local_4c & DAT_112fcb10)) {
          local_4c = local_58;
        }
      }
      if (local_11 == '\0') {
        piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        uVar13 = (**(code **)(*piVar4 + 0x228))();
        local_1c = (float)((ulonglong)uVar13 >> 0x20);
        local_30 = (float)uVar13;
        uVar13 = (**(code **)(*piVar5 + 0x3a8))();
        iVar9 = (int)((ulonglong)uVar13 >> 0x20);
        uVar1 = (uint)((uint)local_30 < (uint)(float)uVar13);
        iVar7 = (int)local_1c - iVar9;
        local_44 = (float)(iVar7 - uVar1);
        piVar4 = local_18;
        if (((-1 < (int)local_44) &&
            (((local_44 != 0.0 && SBORROW4((int)local_1c,iVar9) == SBORROW4(iVar7,uVar1) ||
              (0xfa < (uint)((int)local_30 - (int)(float)uVar13))) &&
             (iVar7 = (**(code **)(*piVar5 + 800))(), piVar4 = local_18, iVar7 != 0)))) &&
           (iVar7 = (**(code **)(*piVar5 + 800))(), piVar4 = local_18, *(int *)(iVar7 + 0xc) != 0))
        {
          iVar7 = (**(code **)(*piVar5 + 800))();
          cVar2 = (**(code **)(**(int **)(iVar7 + 0xc) + 0x164))();
          piVar4 = local_18;
          if (cVar2 == '\0') {
            (**(code **)(*piVar5 + 0x3a4))(local_30,local_1c);
            piVar4 = local_18;
            pfVar6 = (float *)(**(code **)(*local_18 + 0x94))();
            local_28 = *pfVar6;
            local_24 = pfVar6[1];
            local_20 = pfVar6[2];
            puVar8 = (undefined4 *)(**(code **)(*piVar4 + 0xb4))();
            local_68 = *puVar8;
            local_64 = (float)puVar8[1];
            local_60 = (float)puVar8[2];
            local_5c = (float)puVar8[3];
            cVar2 = (**(code **)(*piVar5 + 0x1cc))();
            if (cVar2 != '\0') {
              iVar7 = (**(code **)(*piVar5 + 800))();
              (**(code **)(*piVar5 + 0x3a0))
                        (*(undefined4 *)(iVar7 + 4),&local_28,&local_68,&local_80);
            }
          }
        }
        iVar7 = (**(code **)(*piVar4 + 0x16c))();
        if (iVar7 != 0) {
          (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x1c))(piVar4,&local_54,3);
        }
        puVar8 = (undefined4 *)(**(code **)(*piVar4 + 0x94))();
        (**(code **)(*piVar5 + 0x404))(*puVar8,puVar8[1],puVar8[2]);
        return 3;
      }
      local_30 = 0.0;
      FUN_10552dd0(6,&local_30);
      if (local_2a == '\0') {
        local_48 = local_64 + local_54;
        local_20 = local_5c + local_4c;
        local_58 = local_60 + local_50;
        local_18 = (int *)local_b4;
        if (((DAT_113c1280 <= local_78) || (local_b4 <= local_20)) &&
           ((local_18 = (int *)local_20, DAT_113c1280 < local_78 && (local_b4 < local_20)))) {
          local_40 = local_b4;
          local_18 = (int *)local_40;
        }
        local_44 = local_58;
        local_40 = (float)local_18;
        local_28 = local_48;
        local_24 = local_58;
        local_1c = local_48;
        (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 8))(piVar4,2);
      }
      else {
        local_1c = local_30 * local_1c;
        if ((float)((uint)local_1c & DAT_112fcb10) < local_b0[0]) {
          local_28 = DAT_113cc5e8;
          local_20 = DAT_113cc5f0;
          local_24 = DAT_113cc5ec;
          if (DAT_112fce4c < local_40) {
            auVar12 = rsqrtss(ZEXT416((uint)local_40),ZEXT416((uint)local_40));
            fVar11 = auVar12._0_4_;
            fVar11 = (DAT_112fcaac - fVar11 * local_40 * fVar11 * DAT_113c12b8) * fVar11;
            local_28 = local_74 * fVar11;
            local_20 = local_58 * fVar11;
            local_24 = local_70 * fVar11;
          }
          local_28 = local_28 * local_1c;
          local_24 = local_24 * local_1c;
          local_20 = local_20 * local_1c;
        }
        local_54 = local_28;
        local_48 = local_64 + local_28;
        local_50 = local_24;
        local_4c = local_20;
        local_58 = local_60 + local_24;
        local_40 = local_5c + local_20;
        local_44 = local_58;
        local_28 = local_48;
        local_24 = local_58;
        local_20 = local_40;
        local_1c = local_48;
        (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 8))(piVar4,1);
        local_18 = (int *)local_40;
      }
      local_28 = local_48 - local_64;
      local_24 = local_44 - local_60;
      local_20 = (float)local_18 - local_5c;
      (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x1c))(piVar4,&local_28,3);
      if ((((DAT_112fca7c < local_80) || (DAT_112fca7c < local_7c)) ||
          (DAT_112fca64 < (float)((uint)(local_5c - (float)local_18) & DAT_112fcb10))) &&
         (((DAT_112fca68 < (float)((uint)(local_64 - local_48) & DAT_112fcb10) ||
           (DAT_112fca68 < (float)((uint)(local_60 - local_44) & DAT_112fcb10))) ||
          (DAT_112fca68 < (float)((uint)(local_5c - (float)local_18) & DAT_112fcb10))))) {
        (**(code **)(*piVar5 + 0x404))(local_1c,local_58,local_40);
        return 3;
      }
      FUN_103dbbb0(9,local_6c);
      local_11 = '\x01';
      FUN_103db9b0(10,&local_11);
      if (local_11 == '\0') {
        return 2;
      }
      iVar7 = *piVar5;
      uVar3 = FUN_10a5ec80();
      (**(code **)(iVar7 + 0x380))(uVar3);
      return 2;
    }
  }
  local_11 = '\x01';
  FUN_103db9b0(10,&local_11);
  if (local_11 != '\0') {
    iVar7 = *piVar5;
    uVar3 = FUN_10a5ec80();
    (**(code **)(iVar7 + 0x380))(uVar3);
    piVar4 = local_18;
  }
  piVar4 = (int *)(**(code **)(*piVar4 + 0x16c))();
  if (piVar4 != (int *)0x0) {
    local_60 = 0.0;
    local_b0[2] = 0.0;
    local_5c = 0.0;
    local_b0[3] = 0.0;
    local_b0[0] = 2.52234e-44;
    local_9c = 0;
    local_64 = 0.0;
    local_b0[1] = 0.0;
    fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
    local_9c = 0;
    local_b0[4] = (float)fVar10;
    (**(code **)(*piVar4 + 0x1c))(local_b0,0);
  }
  return 2;
}


// [d2] FUN_103d8940 @103d8940  (emitted in an earlier root)

// ===== [d2] FUN_103dc170 @103dc170  (147 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dc170(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 unaff_ESI;
  undefined1 local_c [8];
  
  if (param_2 != 0xffffffff) {
    if (param_2 < 1000000) {
      if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
        cVar1 = FUN_101cec60(param_3);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
      return 0;
    }
    FUN_10a5d660();
    cVar1 = FUN_103dac40(param_2 - 1000000,local_c);
    if (cVar1 != '\0') {
      FUN_10a5d8a0(unaff_ESI);
    }
  }
  return 0;
}


// [d2] FUN_101c4350 @101c4350  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)

// ===== [d2] FUN_101cec60 @101cec60  (29 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101cec60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*(int *)(param_1 + 0xc) + 1) {
  case 0:
  case 7:
    uVar1 = FUN_101c4660(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_101cf4a0(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    FUN_10a5d8a0(*(undefined4 *)(param_1 + 0x1c));
    return 1;
  case 3:
    uVar1 = FUN_101c4600(param_1 + 0x1c,param_2);
    return uVar1;
  case 4:
    uVar1 = FUN_101c4630(param_1 + 0x1c,param_2);
    return uVar1;
  case 5:
    uVar1 = FUN_101cf4d0(param_1 + 0x1c,param_2);
    return uVar1;
  case 6:
    uVar1 = FUN_101cf500(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_101cf530(param_1 + 0x1c,param_2);
    return uVar1;
  case 9:
    uVar1 = FUN_101cf560(param_1 + 0x1c,param_2);
    return uVar1;
  default:
    return 0;
  }
}


// [d2] FUN_103de9f0 @103de9f0  (emitted in an earlier root)

// [d2] FUN_103de960 @103de960  (emitted in an earlier root)

// [d2] FUN_103de910 @103de910  (emitted in an earlier root)

// [d2] FUN_10552d10 @10552d10  (emitted in an earlier root)

// [d2] FUN_103c9820 @103c9820  (emitted in an earlier root)

// [d2] FUN_10551520 @10551520  (emitted in an earlier root)

// [d2] FUN_101c35a0 @101c35a0  (emitted in an earlier root)

// ===== [d2] FUN_10a5ec80 @10a5ec80  (13 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10a5ec80(int *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x14);
  }
  return 0;
}

