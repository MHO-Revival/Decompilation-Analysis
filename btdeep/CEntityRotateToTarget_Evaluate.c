
// ===== [d0] FUN_10578a00 @10578a00  (450 bytes) =====

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


// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// ===== [d1] FUN_10578bd0 @10578bd0  (2058 bytes) =====

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


// ===== [d1] FUN_10579750 @10579750  (2718 bytes) =====

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


// [d1] FUN_101c3720 @101c3720  (emitted in an earlier root)

// [d1] FUN_10551270 @10551270  (emitted in an earlier root)

// ===== [d1] FUN_1057a1f0 @1057a1f0  (348 bytes) =====

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


// [d2] FUN_10552e20 @10552e20  (emitted in an earlier root)

// ===== [d2] FUN_10552be0 @10552be0  (189 bytes) =====

/* [RE-AUTO c0]
   calls: _CIasin */

float * __thiscall FUN_10552be0(float *param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)_CIasin();
  param_1[1] = (float)fVar1;
  if ((float10)DAT_112fca7c <= ABS(ABS(fVar1) - (float10)DAT_11301cf0)) {
    fVar1 = (float10)fpatan((float10)param_2[7],(float10)param_2[8]);
    *param_1 = (float)fVar1;
    fVar1 = (float10)fpatan((float10)param_2[3],(float10)*param_2);
    param_1[2] = (float)fVar1;
    return param_1;
  }
  *param_1 = 0.0;
  fVar1 = (float10)fpatan(-(float10)param_2[1],(float10)param_2[4]);
  param_1[2] = (float)fVar1;
  return param_1;
}


// [d2] FUN_10a5d620 @10a5d620  (emitted in an earlier root)

// ===== [d2] FUN_10552f00 @10552f00  (1015 bytes) =====

/* [RE-AUTO c0] */

void FUN_10552f00(float *param_1,float *param_2,float *param_3,float param_4)

{
  float10 fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_88 [36];
  float local_64 [3];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [10];
  float local_c;
  float local_8;
  
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_c = *param_2;
  if (((DAT_113c1280 < (float)((uint)local_c & DAT_112fcb10)) ||
      (DAT_113c1280 < (float)((uint)param_2[1] & DAT_112fcb10))) ||
     (DAT_113c1280 < (float)((uint)param_2[2] & DAT_112fcb10))) {
    local_34[4] = param_2[1];
    local_34[7] = param_2[2];
    fVar5 = local_34[4] * local_34[4] + local_c * local_c + local_34[7] * local_34[7] + DAT_112fca5c
    ;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = (DAT_112fcaac - fVar6 * fVar5 * fVar6 * DAT_113c12b8) * fVar6;
    local_c = local_c * fVar6;
    local_34[4] = local_34[4] * fVar6;
    local_34[7] = local_34[7] * fVar6;
    fVar5 = local_38;
    fVar6 = local_40;
    fVar8 = local_3c;
    if (((local_c == DAT_113c1280) && (local_34[4] == DAT_113c1280)) &&
       (((float)((uint)*param_3 & DAT_112fcb10) <= DAT_113c12a0 &&
        (((float)((uint)param_3[1] & DAT_112fcb10) <= DAT_113c12a0 &&
         ((float)((uint)(param_3[2] - DAT_113c12c8) & DAT_112fcb10) <= DAT_113c12a0)))))) {
      fVar5 = DAT_113c1280;
      fVar6 = (float)((uint)local_34[7] ^ DAT_113c1410);
      fVar8 = DAT_113c1280;
    }
    local_34[0] = fVar8 * local_34[7] - fVar5 * local_34[4];
    local_8 = fVar5 * local_c - fVar6 * local_34[7];
    local_34[9] = fVar6 * local_34[4] - fVar8 * local_c;
    fVar5 = local_8 * local_8 + local_34[0] * local_34[0] + local_34[9] * local_34[9] + DAT_112fca5c
    ;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = (DAT_112fcaac - fVar6 * fVar5 * fVar6 * DAT_113c12b8) * fVar6;
    local_34[9] = local_34[9] * fVar6;
    local_8 = local_8 * fVar6;
    local_34[0] = local_34[0] * fVar6;
    fVar8 = local_8 * local_34[7] - local_34[9] * local_34[4];
    fVar9 = local_34[9] * local_c - local_34[0] * local_34[7];
    fVar10 = local_34[0] * local_34[4] - local_8 * local_c;
    fVar6 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 + DAT_112fca5c;
    auVar7 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar5 = auVar7._0_4_;
    local_34[1] = local_c;
    local_34[3] = local_8;
    fVar5 = (DAT_112fcaac - fVar5 * fVar6 * fVar5 * DAT_113c12b8) * fVar5;
    local_34[2] = fVar8 * fVar5;
    local_34[5] = fVar9 * fVar5;
    local_34[6] = local_34[9];
    local_34[8] = fVar10 * fVar5;
    if (param_4 != DAT_113c1280) {
      fVar1 = (float10)fcos((float10)param_4);
      fVar4 = (float10)fsin((float10)param_4);
      local_64[0] = (float)fVar1;
      local_64[2] = (float)fVar4;
      local_4c = (uint)local_64[2] ^ DAT_113c1410;
      local_64[1] = 0.0;
      local_58 = 0;
      local_54 = 0x3f800000;
      local_50 = 0;
      local_48 = 0;
      local_44 = local_64[0];
      local_34[9] = local_64[0];
      local_c = local_64[2];
      pfVar2 = (float *)FUN_1052c1b0(local_88,local_34,local_64);
      local_34[0] = *pfVar2;
      local_34[1] = pfVar2[1];
      local_34[2] = pfVar2[2];
      local_34[3] = pfVar2[3];
      local_34[4] = pfVar2[4];
      local_34[5] = pfVar2[5];
      local_34[6] = pfVar2[6];
      local_34[7] = pfVar2[7];
      local_34[8] = pfVar2[8];
    }
  }
  else {
    local_34[0] = 1.0;
    local_34[1] = 0.0;
    local_34[2] = 0.0;
    local_34[3] = 0.0;
    local_34[4] = 1.0;
    local_34[5] = 0.0;
    local_34[6] = 0.0;
    local_34[7] = 0.0;
    local_34[8] = 1.0;
  }
  pfVar2 = local_34;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ===== [d2] FUN_104878c0 @104878c0  (192 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_104878c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = (float)((uint)param_2[2] ^ DAT_113c1410);
  param_1[6] = 0.0;
  param_1[7] = param_2[2];
  param_1[8] = 0.0;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if ((float)DAT_112fe838 < fVar3) {
    fVar2 = -fVar2 * (1.0 / fVar3);
    fVar1 = fVar1 * (1.0 / fVar3);
    *param_1 = fVar1;
    param_1[1] = *param_2;
    param_1[2] = param_2[2] * fVar2;
    param_1[3] = fVar2;
    param_1[4] = param_2[1];
    fVar2 = param_2[2];
    param_1[6] = 0.0;
    param_1[5] = -fVar2 * fVar1;
    param_1[7] = param_2[2];
    param_1[8] = fVar3;
    return;
  }
  return;
}


// [d2] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d2] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// ===== [d2] FUN_10a5d8d0 @10a5d8d0  (31 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10a5d8d0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_10033a50(*param_1,param_2);
    return uVar1;
  }
  return 0;
}


// [d2] FUN_101c4430 @101c4430  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// [d2] FUN_103c9820 @103c9820  (emitted in an earlier root)

// [d2] FUN_10551520 @10551520  (emitted in an earlier root)

// [d2] FUN_103d9e70 @103d9e70  (emitted in an earlier root)

// [d2] FUN_10552d10 @10552d10  (emitted in an earlier root)
