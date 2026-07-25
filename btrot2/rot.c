
// ===== Evaluate (slot 4) of vtable 1130e6e0 -> FUN_105d3220 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d3220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 local_7c [36];
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined4 local_48;
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
  int *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_103d8610(0);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    if ((uint)(piVar3[1] - *piVar3 >> 2) < 3) {
      return 1;
    }
    if ((int)(piVar3[4] - piVar3[3] & 0xfffffffcU) < 9) {
      return 1;
    }
    if (*(int *)(piVar3[3] + 8) < 0) {
      return 1;
    }
    FUN_103d8940(*(int *)(piVar3[3] + 8),&local_8);
    cVar1 = FUN_101c3720();
  }
  else {
    if (piVar3[1] - *piVar3 >> 2 == 0) {
      return 1;
    }
    if ((int)(piVar3[4] - piVar3[3] & 0xfffffffcU) < 1) {
      return 1;
    }
    if (*(int *)piVar3[3] < 0) {
      return 1;
    }
    FUN_103d8940(*(int *)piVar3[3],&local_8);
    cVar1 = FUN_101c3720();
  }
  if ((cVar1 != '\0') &&
     (local_c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_8),
     local_c != (int *)0x0)) {
    iVar5 = **(int **)(DAT_113f3a18 + 0x50);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    (**(code **)(*local_c + 200))(&local_40);
    FUN_10551270(1,&local_40);
    pfVar4 = (float *)(**(code **)(*piVar3 + 0xd8))();
    local_34 = *pfVar4;
    local_30 = pfVar4[1];
    local_2c = pfVar4[2];
    local_28 = local_40;
    local_24 = local_3c;
    local_20 = local_38;
    pfVar4 = (float *)(**(code **)(*piVar3 + 200))(local_58);
    local_1c = *pfVar4;
    local_18 = pfVar4[1];
    local_14 = pfVar4[2];
    local_4c = 0;
    local_48 = 0;
    local_44 = 0.0;
    if (((DAT_112fca68 < (float)((uint)(local_1c - local_28) & DAT_112fcb10)) ||
        (DAT_112fca68 < (float)((uint)(local_18 - local_24) & DAT_112fcb10))) ||
       (DAT_112fca68 < (float)((uint)(local_14 - local_20) & DAT_112fcb10))) {
      fVar8 = local_28 - *pfVar4;
      fVar7 = local_24 - pfVar4[1];
      local_1c = fVar8 * DAT_112fcb00;
      local_28 = 0.0;
      local_24 = 0.0;
      local_18 = fVar7 * DAT_112fcb00;
      local_20 = 1.0;
      local_10 = local_30 * fVar8 - local_34 * fVar7;
      fVar7 = local_18 * local_18 + local_1c * local_1c + DAT_112fca5c;
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      local_14 = auVar6._0_4_;
      local_14 = (DAT_112fcaac - local_14 * fVar7 * local_14 * DAT_113c12b8) * local_14;
      local_1c = local_1c * local_14;
      local_18 = local_18 * local_14;
      local_14 = local_14 * DAT_113c1280;
      uVar2 = FUN_10552f00(local_7c,&local_1c,&local_28,0);
      FUN_10552be0(uVar2);
      local_c = (int *)(local_20 * DAT_1130193c);
      FUN_104878c0(&local_34);
      FUN_10552be0(local_7c);
      local_44 = (float)((uint)(local_2c * DAT_1130193c - (float)local_c) & DAT_112fcb10);
      if (DAT_11301d98 < local_44) {
        local_44 = DAT_11301ccc - local_44;
      }
      if (local_10 <= DAT_113c1280) {
        iVar5 = -1;
      }
      else {
        iVar5 = 1;
      }
      local_44 = (float)iVar5 * local_44;
    }
    FUN_10551270(3,&local_4c);
    return 2;
  }
  return 1;
}


// ===== Evaluate (slot 4) of vtable 1130e734 -> FUN_105d3760 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d3760(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 local_78 [36];
  undefined1 local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  float local_8;
  
  cVar1 = FUN_10552e70(0,&local_48);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  pfVar4 = (float *)(**(code **)(*piVar3 + 0xd8))();
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_28 = pfVar4[2];
  local_24 = local_48;
  local_20 = local_44;
  local_1c = local_40;
  pfVar4 = (float *)(**(code **)(*piVar3 + 200))(local_54);
  local_18 = *pfVar4;
  local_14 = pfVar4[1];
  local_10 = pfVar4[2];
  local_3c = 0;
  local_38 = 0;
  local_34 = 0.0;
  if (((DAT_112fca68 < (float)((uint)(local_18 - local_24) & DAT_112fcb10)) ||
      (DAT_112fca68 < (float)((uint)(local_14 - local_20) & DAT_112fcb10))) ||
     (DAT_112fca68 < (float)((uint)(local_10 - local_1c) & DAT_112fcb10))) {
    fVar8 = local_24 - *pfVar4;
    fVar7 = local_20 - pfVar4[1];
    local_18 = fVar8 * DAT_112fcb00;
    local_24 = 0.0;
    local_20 = 0.0;
    local_14 = fVar7 * DAT_112fcb00;
    local_1c = 1.0;
    local_c = local_2c * fVar8 - local_30 * fVar7;
    fVar7 = local_14 * local_14 + local_18 * local_18 + DAT_112fca5c;
    auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    local_10 = auVar6._0_4_;
    local_10 = (DAT_112fcaac - local_10 * fVar7 * local_10 * DAT_113c12b8) * local_10;
    local_18 = local_18 * local_10;
    local_14 = local_14 * local_10;
    local_10 = local_10 * DAT_113c1280;
    uVar2 = FUN_10552f00(local_78,&local_18,&local_24,0);
    FUN_10552be0(uVar2);
    local_8 = local_1c * DAT_1130193c;
    FUN_104878c0(&local_30);
    FUN_10552be0(local_78);
    local_34 = (float)((uint)(local_28 * DAT_1130193c - local_8) & DAT_112fcb10);
    if (DAT_11301d98 < local_34) {
      local_34 = DAT_11301ccc - local_34;
    }
    if (local_c <= DAT_113c1280) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    local_34 = (float)iVar5 * local_34;
  }
  FUN_10551270(1,&local_3c);
  return 2;
}


// ===== Evaluate (slot 4) of vtable 11307ed0 -> FUN_10578a00 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10578a00(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  float local_8;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar4 = FUN_10578bd0();
    return uVar4;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar5[1] - *piVar5 >> 2)) && (8 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar5[3] + 8))) {
    FUN_103d8940(*(int *)(piVar5[3] + 8),&local_c);
    cVar3 = FUN_101c3720();
    if (cVar3 != '\0') {
      iVar2 = **(int **)(DAT_113f3a18 + 0x50);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      local_8 = (float)(**(code **)(iVar2 + 0x2c))(uVar4);
      piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_c);
      if ((local_8 != 0.0) && (piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x274))();
        FUN_10579750(local_8,piVar5,&local_1c,local_10);
        cVar3 = FUN_1057a1f0(&local_1c,&local_28);
        if (cVar3 != '\0') {
          FUN_10551270(5,&local_28);
          local_8 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
          if (DAT_112fca80 <= SQRT(local_8)) {
            fVar6 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
            fVar1 = (float)fVar6;
            if (local_24 * fVar1 * local_24 * fVar1 + local_28 * fVar1 * local_28 * fVar1 +
                local_20 * fVar1 * local_20 * fVar1 + DAT_112fca7c <= local_8) {
              return 3;
            }
          }
          return 2;
        }
      }
      return 1;
    }
  }
  return 1;
}


// ######## rotToTarget_Evaluate_10578a00 @10578a00  (450 bytes) ########

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10578a00(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  float local_8;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar4 = FUN_10578bd0();
    return uVar4;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar5[1] - *piVar5 >> 2)) && (8 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar5[3] + 8))) {
    FUN_103d8940(*(int *)(piVar5[3] + 8),&local_c);
    cVar3 = FUN_101c3720();
    if (cVar3 != '\0') {
      iVar2 = **(int **)(DAT_113f3a18 + 0x50);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      local_8 = (float)(**(code **)(iVar2 + 0x2c))(uVar4);
      piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_c);
      if ((local_8 != 0.0) && (piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x274))();
        FUN_10579750(local_8,piVar5,&local_1c,local_10);
        cVar3 = FUN_1057a1f0(&local_1c,&local_28);
        if (cVar3 != '\0') {
          FUN_10551270(5,&local_28);
          local_8 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
          if (DAT_112fca80 <= SQRT(local_8)) {
            fVar6 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
            fVar1 = (float)fVar6;
            if (local_24 * fVar1 * local_24 * fVar1 + local_28 * fVar1 * local_28 * fVar1 +
                local_20 * fVar1 * local_20 * fVar1 + DAT_112fca7c <= local_8) {
              return 3;
            }
          }
          return 2;
        }
      }
      return 1;
    }
  }
  return 1;
}


// ######## rotToTarget_notEnabled_10578bd0 @10578bd0  (2058 bytes) ########

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10578bd0(int param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  int local_18;
  float local_14;
  undefined4 local_10;
  int *local_c;
  float local_8;
  
  iVar7 = **(int **)(DAT_113f3a18 + 0x50);
  local_18 = param_1;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar7 + 0x2c))(uVar3);
  piVar5 = *(int **)(local_18 + 0x2c);
  if (((2 < (uint)(piVar5[1] - *piVar5 >> 2)) && (8 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar5[3] + 8))) {
    FUN_103d8940(*(int *)(piVar5[3] + 8),&local_10);
    cVar2 = FUN_101c3720();
    if (cVar2 != '\0') {
      local_c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_10);
      piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0xc))(local_10);
      if (((piVar4 != (int *)0x0) && (local_c != (int *)0x0)) &&
         ((piVar5 != (int *)0x0 && (cVar2 = (**(code **)(*piVar5 + 0xf4))(), cVar2 == '\0')))) {
        local_8 = 0.0;
        FUN_10579750(piVar4,local_c,&local_48,&local_8);
        FUN_10551270(4,&local_48);
        FUN_10552e20(5,&local_54);
        iVar7 = *piVar4;
        uVar3 = (**(code **)(*local_c + 200))(&local_3c);
        (**(code **)(iVar7 + 0x98))(&local_60,uVar3);
        fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
        local_14 = (float)fVar10;
        if (local_54 * local_14 * local_54 * local_14 + local_50 * local_14 * local_50 * local_14 +
            local_4c * local_14 * local_4c * local_14 + DAT_112fca7c <=
            local_48 * local_48 + local_44 * local_44 + local_40 * local_40) {
          fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
          fVar15 = (float)((float10)local_50 * fVar10);
          fVar16 = (float)(fVar10 * (float10)local_4c);
          fVar12 = local_54 * (float)fVar10;
          if ((float)((uint)local_48 & DAT_112fcb10) <= local_54 * (float)fVar10) {
            fVar12 = (float)((uint)local_48 & DAT_112fcb10);
          }
          fVar17 = fVar15;
          if ((float)((uint)local_44 & DAT_112fcb10) <= fVar15) {
            fVar17 = (float)((uint)local_44 & DAT_112fcb10);
          }
          fVar13 = fVar16;
          if ((float)((uint)local_40 & DAT_112fcb10) <= fVar16) {
            fVar13 = (float)((uint)local_40 & DAT_112fcb10);
          }
          if (local_48 <= DAT_113c1280) {
            iVar7 = 1;
          }
          else {
            iVar7 = -1;
          }
          if (local_44 <= DAT_113c1280) {
            iVar8 = 1;
          }
          else {
            iVar8 = -1;
          }
          if (local_40 <= DAT_113c1280) {
            iVar9 = 1;
          }
          else {
            iVar9 = -1;
          }
          fVar11 = (float10)((float)iVar7 * fVar12 * DAT_113c129c * DAT_113c12b8);
          fVar10 = (float10)fcos(fVar11);
          fVar11 = (float10)fsin(fVar11);
                    /* WARNING: Ignoring partial resolution of indirect */
          local_30._4_4_ = (float)fVar10;
          fVar12 = (float)fVar11;
          fVar11 = (float10)((float)iVar8 * fVar17 * DAT_113c129c * DAT_113c12b8);
          fVar10 = (float10)fcos(fVar11);
          fVar11 = (float10)fsin(fVar11);
          fVar17 = (float)fVar10;
          fVar19 = (float)fVar11;
          fVar11 = (float10)((float)iVar9 * fVar13 * DAT_113c129c * DAT_113c12b8);
          fVar10 = (float10)fcos(fVar11);
          fVar11 = (float10)fsin(fVar11);
                    /* WARNING: Ignoring partial resolution of indirect */
          local_38._4_4_ = (float)fVar10;
          dVar1 = local_38;
          fVar13 = (float)fVar11;
          local_38._4_4_ = SUB84(dVar1,4);
          local_14 = fVar19 * fVar12 * fVar13 + fVar17 * local_30._4_4_ * local_38._4_4_;
          fVar18 = local_38._4_4_ * fVar19;
          local_c = (int *)(local_38._4_4_ * fVar17 * fVar12 - fVar13 * fVar19 * local_30._4_4_);
          local_38._4_4_ = local_30._4_4_ * fVar18 + fVar12 * fVar13 * fVar17;
          local_8 = local_30._4_4_ * fVar13 * fVar17 - fVar12 * fVar18;
          local_38._0_4_ = SUB84(dVar1,0);
          local_44 = fVar15;
          local_40 = fVar16;
          pfVar6 = (float *)(**(code **)(*piVar4 + 0xb4))();
          fVar15 = *pfVar6;
          fVar16 = pfVar6[1];
          fVar12 = pfVar6[2];
          fVar17 = pfVar6[3];
          local_28 = fVar17 * local_14 -
                     (fVar16 * local_38._4_4_ + fVar15 * (float)local_c + fVar12 * local_8);
          fVar13 = fVar15 * local_38._4_4_;
          fVar19 = local_38._4_4_ * fVar17;
          local_48 = fVar16 * local_8 - fVar12 * local_38._4_4_;
          local_38 = (double)CONCAT44(local_48,(float)local_38);
          local_44 = fVar12 * (float)local_c - fVar15 * local_8;
          local_30 = (double)CONCAT44(local_44,(undefined4)local_30);
          local_44 = local_44 + fVar19 + fVar16 * local_14;
          local_48 = local_48 + (float)local_c * fVar17 + fVar15 * local_14;
          local_40 = (fVar13 - fVar16 * (float)local_c) + local_8 * fVar17 + fVar12 * local_14;
          fVar15 = local_28 * local_28 + local_48 * local_48 + local_44 * local_44 +
                   local_40 * local_40;
          if (fVar15 <= _DAT_11305a50) {
            local_64 = 1.0;
            local_70 = 0.0;
            local_6c = 0.0;
            local_68 = 0.0;
          }
          else {
            auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            local_68 = auVar14._0_4_;
            local_68 = (DAT_112fcaac - local_68 * fVar15 * local_68 * DAT_113c12b8) * local_68;
            local_6c = local_44 * local_68;
            local_64 = local_28 * local_68;
            local_70 = local_48 * local_68;
            local_68 = local_40 * local_68;
          }
          (**(code **)(*piVar4 + 0xb0))(&local_70,0);
          piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
          piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
          iVar7 = *piVar5;
          uVar3 = (**(code **)(**(int **)(local_18 + 0x54) + 0xc))();
          (**(code **)(iVar7 + 0xc))(uVar3);
          return 3;
        }
        pfVar6 = (float *)(**(code **)(*piVar4 + 0x94))();
        local_60 = local_60 - *pfVar6;
        local_5c = local_5c - pfVar6[1];
        fVar15 = local_5c * local_5c + local_60 * local_60;
        if (fVar15 <= DAT_112fce4c) {
          local_40 = DAT_113cc050;
          local_48 = DAT_113cc048;
          local_44 = DAT_113cc04c;
        }
        else {
          auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar16 = auVar14._0_4_;
          fVar16 = (DAT_112fcaac - fVar16 * fVar15 * fVar16 * DAT_113c12b8) * fVar16;
          local_40 = fVar16 * DAT_113c1280;
          local_48 = local_60 * fVar16;
          local_44 = local_5c * fVar16;
        }
        if (local_8 != 0.0) {
          local_3c = local_44 - local_40 * DAT_113c1280;
          fVar15 = local_40 * DAT_113c1280 - local_48;
          fVar16 = local_48 * DAT_113c1280 - local_44 * DAT_113c1280;
          local_38 = (double)CONCAT44(fVar16,fVar15);
          if (local_8 != 1.4013e-45) {
            if (local_8 == 2.8026e-45) {
              local_3c = (float)((uint)local_3c ^ DAT_113c1410);
              local_38 = (double)CONCAT44((uint)fVar16 ^ DAT_113c1410,(uint)fVar15 ^ DAT_113c1410);
            }
            else {
              if (local_8 != 4.2039e-45) goto LAB_10578ef6;
              local_3c = (float)((uint)local_48 ^ DAT_113c1410);
              local_38 = (double)CONCAT44((uint)local_40 ^ DAT_113c1410,
                                          (uint)local_44 ^ DAT_113c1410);
            }
          }
          local_48 = local_3c;
          local_44 = (float)local_38;
          local_40 = local_38._4_4_;
        }
LAB_10578ef6:
        local_74 = 0.70710677;
        local_7c = 0.0;
        local_80 = local_40 * DAT_112fcab0 * DAT_11305a54;
        local_78 = 0.0;
        fVar15 = SQRT(local_48 * local_48 + local_44 * local_44);
        if ((float)DAT_113c12b0 < fVar15) {
          fVar12 = local_48 * (1.0 / fVar15);
          fVar16 = (1.0 / fVar15) * local_44 + 1.0;
          fVar15 = fVar15 + 1.0;
          fVar17 = SQRT(fVar12 * fVar12 + fVar16 * fVar16);
          local_38 = (double)fVar17;
          local_7c = SQRT(fVar15 * fVar15 + local_40 * local_40);
          local_30 = (double)local_7c;
          local_80 = 0.0;
          local_78 = (float)DAT_11305a60;
          if (DAT_113c12b0 < local_38) {
            fVar17 = 1.0 / fVar17;
            local_80 = fVar16 * fVar17;
            local_78 = -(fVar17 * fVar12);
          }
          local_7c = 1.0 / local_7c;
          fVar15 = fVar15 * local_7c;
          local_7c = local_7c * local_40;
          local_74 = fVar15 * local_80;
          local_80 = local_7c * local_80;
          local_7c = local_7c * local_78;
          local_78 = local_78 * fVar15;
        }
        (**(code **)(*piVar4 + 0xb0))(&local_80,0);
        return 2;
      }
    }
  }
  return 1;
}


// ######## rotHelper_10579750 @10579750  (2718 bytes) ########

/* [RE-AUTO c0]
   strings:
     ""right"" */

undefined4 __thiscall
FUN_10579750(int param_1,int *param_2,int *param_3,float *param_4,undefined4 *param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [36];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [4];
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
  char local_11;
  float local_10;
  float local_c;
  float local_8;
  
  local_11 = '\0';
  *param_5 = 0;
  FUN_10a5d620(&DAT_113bef10);
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) && (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 4))) {
    FUN_103d8940(*(int *)(piVar1[3] + 4),&local_11);
    FUN_101c36a0();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((piVar1[1] - *piVar1 >> 2 != 0) && (0 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) &&
     (-1 < *(int *)piVar1[3])) {
    FUN_103d8940(*(int *)piVar1[3],local_48);
    FUN_103dc170();
  }
  iVar6 = *param_2;
  uVar3 = (**(code **)(*param_3 + 200))(&local_38);
  (**(code **)(iVar6 + 0x98))(&local_60,uVar3);
  if (local_11 == '\0') {
    pfVar5 = (float *)(**(code **)(*param_2 + 0xd4))(local_a8);
    local_2c = *pfVar5;
    local_28 = pfVar5[1];
    local_24 = pfVar5[2];
    local_44 = local_60;
    local_40 = local_5c;
    local_3c = local_58;
    pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
    local_8 = pfVar5[2];
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    if (((DAT_112fca68 < (float)((uint)(*pfVar5 - local_44) & DAT_112fcb10)) ||
        (DAT_112fca68 < (float)((uint)(pfVar5[1] - local_40) & DAT_112fcb10))) ||
       (local_38 = local_20, local_34 = local_1c, local_30 = local_18,
       DAT_112fca68 < (float)((uint)(local_8 - local_3c) & DAT_112fcb10))) {
      local_10 = *pfVar5;
      local_c = pfVar5[1];
      fVar9 = local_28 * (local_44 - local_10);
      local_54 = (local_44 - local_10) * DAT_112fcb00;
      local_38 = 0.0;
      fVar8 = local_2c * (local_40 - local_c);
      local_34 = 0.0;
      local_50 = (local_40 - local_c) * DAT_112fcb00;
      local_30 = 1.0;
      fVar10 = local_50 * local_50 + local_54 * local_54 + DAT_112fca5c;
      auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      local_4c = auVar7._0_4_;
      local_4c = (DAT_112fcaac - local_4c * fVar10 * local_4c * DAT_113c12b8) * local_4c;
      local_54 = local_54 * local_4c;
      local_50 = local_50 * local_4c;
      local_4c = local_4c * DAT_113c1280;
      uVar3 = FUN_10552f00(local_90,&local_54,&local_38,0);
      FUN_10552be0(uVar3);
      fVar10 = local_30 * DAT_1130193c;
      FUN_104878c0(&local_2c);
      FUN_10552be0(local_90);
      local_30 = (float)((uint)(local_30 * DAT_1130193c - fVar10) & DAT_112fcb10);
      if (DAT_11301d98 < local_30) {
        local_30 = DAT_11301ccc - local_30;
      }
      if (fVar9 - fVar8 <= DAT_113c1280) {
        iVar6 = -1;
      }
      else {
        iVar6 = 1;
      }
      local_30 = (float)iVar6 * local_30;
      local_38 = local_20;
      local_34 = local_1c;
    }
  }
  else {
    cVar2 = FUN_10a5d8d0(&DAT_11307f38);
    if (cVar2 == '\0') {
      cVar2 = FUN_10a5d8d0("right");
      if (cVar2 == '\0') {
        cVar2 = FUN_10a5d8d0(&DAT_11307f48);
        if (cVar2 != '\0') {
          puVar4 = (uint *)(**(code **)(*param_2 + 0xd4))(local_a8);
          fVar8 = (float)(*puVar4 ^ DAT_113c1410);
          fVar10 = (float)(puVar4[1] ^ DAT_113c1410);
          local_30 = (float)(puVar4[2] ^ DAT_113c1410);
          local_44 = local_60;
          local_40 = local_5c;
          local_3c = local_58;
          local_38 = fVar8;
          local_34 = fVar10;
          local_10 = fVar8;
          local_c = fVar10;
          local_8 = local_30;
          pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
          local_10 = *pfVar5;
          local_c = pfVar5[1];
          local_24 = pfVar5[2];
          local_20 = 0.0;
          local_1c = 0.0;
          local_18 = 0.0;
          if (((DAT_112fca68 < (float)((uint)(local_10 - local_44) & DAT_112fcb10)) ||
              (DAT_112fca68 < (float)((uint)(local_c - local_40) & DAT_112fcb10))) ||
             (DAT_112fca68 < (float)((uint)(local_24 - local_3c) & DAT_112fcb10))) {
            local_2c = *pfVar5;
            local_28 = pfVar5[1];
            fVar12 = local_44 - local_2c;
            fVar11 = local_40 - local_28;
            local_54 = 0.0;
            local_6c = fVar12 * DAT_112fcb00;
            local_50 = 0.0;
            local_4c = 1.0;
            local_68 = fVar11 * DAT_112fcb00;
            fVar9 = local_68 * local_68 + local_6c * local_6c + DAT_112fca5c;
            auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
            local_64 = auVar7._0_4_;
            local_64 = (DAT_112fcaac - local_64 * fVar9 * local_64 * DAT_113c12b8) * local_64;
            local_6c = local_6c * local_64;
            local_68 = local_68 * local_64;
            local_64 = local_64 * DAT_113c1280;
            local_8 = local_24;
            uVar3 = FUN_10552f00(local_90,&local_6c,&local_54,0);
            FUN_10552be0(uVar3);
            fVar9 = local_4c * DAT_1130193c;
            FUN_104878c0(&local_38);
            FUN_10552be0(local_90);
            local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
            if (DAT_11301d98 < local_18) {
              local_18 = DAT_11301ccc - local_18;
            }
            if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
              iVar6 = -1;
            }
            else {
              iVar6 = 1;
            }
            local_18 = (float)iVar6 * local_18;
          }
          *param_5 = 3;
          local_38 = local_20;
          local_34 = local_1c;
          local_30 = local_18;
        }
      }
      else {
        pfVar5 = (float *)(**(code **)(*param_2 + 0x78))(local_9c);
        fVar8 = *pfVar5;
        fVar10 = pfVar5[4];
        local_4c = pfVar5[8];
        local_44 = local_60;
        local_40 = local_5c;
        local_3c = local_58;
        local_54 = fVar8;
        local_50 = fVar10;
        local_10 = fVar8;
        local_c = fVar10;
        local_8 = local_4c;
        pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
        local_10 = *pfVar5;
        local_c = pfVar5[1];
        local_8 = pfVar5[2];
        local_20 = 0.0;
        local_1c = 0.0;
        local_18 = 0.0;
        if (((DAT_112fca68 < (float)((uint)(local_10 - local_44) & DAT_112fcb10)) ||
            (DAT_112fca68 < (float)((uint)(local_c - local_40) & DAT_112fcb10))) ||
           (DAT_112fca68 < (float)((uint)(local_8 - local_3c) & DAT_112fcb10))) {
          fVar12 = local_44 - *pfVar5;
          fVar11 = local_40 - pfVar5[1];
          local_6c = 0.0;
          local_2c = fVar12 * DAT_112fcb00;
          local_68 = 0.0;
          local_64 = 1.0;
          local_28 = fVar11 * DAT_112fcb00;
          fVar9 = local_28 * local_28 + local_2c * local_2c + DAT_112fca5c;
          auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          local_24 = auVar7._0_4_;
          local_24 = (DAT_112fcaac - local_24 * fVar9 * local_24 * DAT_113c12b8) * local_24;
          local_2c = local_2c * local_24;
          local_28 = local_28 * local_24;
          local_24 = local_24 * DAT_113c1280;
          uVar3 = FUN_10552f00(local_90,&local_2c,&local_6c,0);
          FUN_10552be0(uVar3);
          fVar9 = local_30 * DAT_1130193c;
          FUN_104878c0(&local_54);
          FUN_10552be0(local_90);
          local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
          if (DAT_11301d98 < local_18) {
            local_18 = DAT_11301ccc - local_18;
          }
          if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
            iVar6 = -1;
          }
          else {
            iVar6 = 1;
          }
          local_18 = (float)iVar6 * local_18;
        }
        *param_5 = 2;
        local_38 = local_20;
        local_34 = local_1c;
        local_30 = local_18;
      }
    }
    else {
      puVar4 = (uint *)(**(code **)(*param_2 + 0x78))(local_9c);
      fVar8 = (float)(*puVar4 ^ DAT_113c1410);
      fVar10 = (float)(puVar4[4] ^ DAT_113c1410);
      local_64 = (float)(puVar4[8] ^ DAT_113c1410);
      local_10 = local_60;
      local_c = local_5c;
      local_8 = local_58;
      local_6c = fVar8;
      local_68 = fVar10;
      local_20 = fVar8;
      local_1c = fVar10;
      local_18 = local_64;
      pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
      local_44 = *pfVar5;
      local_40 = pfVar5[1];
      local_3c = pfVar5[2];
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0.0;
      if (((DAT_112fca68 < (float)((uint)(local_44 - local_10) & DAT_112fcb10)) ||
          (DAT_112fca68 < (float)((uint)(local_40 - local_c) & DAT_112fcb10))) ||
         (DAT_112fca68 < (float)((uint)(local_3c - local_8) & DAT_112fcb10))) {
        fVar12 = local_10 - *pfVar5;
        fVar11 = local_c - pfVar5[1];
        local_2c = 0.0;
        local_10 = fVar12 * DAT_112fcb00;
        local_28 = 0.0;
        local_24 = 1.0;
        local_c = fVar11 * DAT_112fcb00;
        fVar9 = local_c * local_c + local_10 * local_10 + DAT_112fca5c;
        auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        local_8 = auVar7._0_4_;
        local_8 = (DAT_112fcaac - local_8 * fVar9 * local_8 * DAT_113c12b8) * local_8;
        local_10 = local_10 * local_8;
        local_c = local_c * local_8;
        local_8 = local_8 * DAT_113c1280;
        uVar3 = FUN_10552f00(local_90,&local_10,&local_2c,0);
        FUN_10552be0(uVar3);
        fVar9 = local_30 * DAT_1130193c;
        FUN_104878c0(&local_6c);
        FUN_10552be0(local_90);
        local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
        if (DAT_11301d98 < local_18) {
          local_18 = DAT_11301ccc - local_18;
        }
        if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
        }
        local_18 = (float)iVar6 * local_18;
      }
      *param_5 = 1;
      local_38 = local_20;
      local_34 = local_1c;
      local_30 = local_18;
    }
  }
  *param_4 = local_38;
  param_4[1] = local_34;
  param_4[2] = local_30;
  return 1;
}


// ######## rotHelper_1057a1f0 @1057a1f0  (348 bytes) ########

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1057a1f0(int param_1,uint *param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  char local_5;
  
  local_5 = FUN_103d9e70(6);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (((5 < (uint)(piVar3[1] - *piVar3 >> 2)) && (0x14 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar3[3] + 0x14))) {
    FUN_103d8940(*(int *)(piVar3[3] + 0x14),&local_18);
    cVar2 = FUN_10552d10();
    if (cVar2 != '\0') {
      if (local_5 != '\0') {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        local_c = (int *)(**(code **)(*piVar3 + 0x68))();
        if (local_c == (int *)0x0) {
          return 0;
        }
        iVar1 = *local_c;
        uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
        piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
        fVar5 = (float10)(**(code **)(*piVar3 + 0xac))();
        local_c = (int *)(float)fVar5;
        local_10 = DAT_113c12c8 / (float)local_c;
        local_18 = (float)(*param_2 & DAT_112fcb10) * local_10;
        local_14 = (float)(param_2[1] & DAT_112fcb10) * local_10;
        local_10 = (float)(param_2[2] & DAT_112fcb10) * local_10;
        fVar5 = (float10)(**(code **)(*piVar3 + 0xb4))();
        local_18 = (float)((float10)local_18 * fVar5);
        local_14 = (float)((float10)local_14 * fVar5);
        local_10 = (float)(fVar5 * (float10)local_10);
      }
      *param_3 = local_18;
      param_3[1] = local_14;
      param_3[2] = local_10;
      return 1;
    }
  }
  return 0;
}


// ######## writeVec3_10551270 @10551270  (120 bytes) ########

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


// ######## setTargetPosOri_105d3760 @105d3760  (654 bytes) ########

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d3760(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 local_78 [36];
  undefined1 local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  float local_8;
  
  cVar1 = FUN_10552e70(0,&local_48);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  pfVar4 = (float *)(**(code **)(*piVar3 + 0xd8))();
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_28 = pfVar4[2];
  local_24 = local_48;
  local_20 = local_44;
  local_1c = local_40;
  pfVar4 = (float *)(**(code **)(*piVar3 + 200))(local_54);
  local_18 = *pfVar4;
  local_14 = pfVar4[1];
  local_10 = pfVar4[2];
  local_3c = 0;
  local_38 = 0;
  local_34 = 0.0;
  if (((DAT_112fca68 < (float)((uint)(local_18 - local_24) & DAT_112fcb10)) ||
      (DAT_112fca68 < (float)((uint)(local_14 - local_20) & DAT_112fcb10))) ||
     (DAT_112fca68 < (float)((uint)(local_10 - local_1c) & DAT_112fcb10))) {
    fVar8 = local_24 - *pfVar4;
    fVar7 = local_20 - pfVar4[1];
    local_18 = fVar8 * DAT_112fcb00;
    local_24 = 0.0;
    local_20 = 0.0;
    local_14 = fVar7 * DAT_112fcb00;
    local_1c = 1.0;
    local_c = local_2c * fVar8 - local_30 * fVar7;
    fVar7 = local_14 * local_14 + local_18 * local_18 + DAT_112fca5c;
    auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    local_10 = auVar6._0_4_;
    local_10 = (DAT_112fcaac - local_10 * fVar7 * local_10 * DAT_113c12b8) * local_10;
    local_18 = local_18 * local_10;
    local_14 = local_14 * local_10;
    local_10 = local_10 * DAT_113c1280;
    uVar2 = FUN_10552f00(local_78,&local_18,&local_24,0);
    FUN_10552be0(uVar2);
    local_8 = local_1c * DAT_1130193c;
    FUN_104878c0(&local_30);
    FUN_10552be0(local_78);
    local_34 = (float)((uint)(local_28 * DAT_1130193c - local_8) & DAT_112fcb10);
    if (DAT_11301d98 < local_34) {
      local_34 = DAT_11301ccc - local_34;
    }
    if (local_c <= DAT_113c1280) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    local_34 = (float)iVar5 * local_34;
  }
  FUN_10551270(1,&local_3c);
  return 2;
}

