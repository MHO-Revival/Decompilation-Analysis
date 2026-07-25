
// ===== [d0] FUN_10574410 @10574410  (2803 bytes) =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10574410(int param_1)

{
  uint uVar1;
  float10 fVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  int local_40;
  char local_39;
  float local_38;
  undefined8 local_34;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  undefined8 local_1c;
  float local_14 [4];
  
  local_40 = param_1;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar4 = FUN_10574f10();
    return uVar4;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  if (((piVar5[1] - *piVar5 >> 2 != 0) && (0 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU))) &&
     (-1 < *(int *)piVar5[3])) {
    FUN_103d8940(*(int *)piVar5[3],&local_68);
    cVar3 = FUN_10552d10();
    if (cVar3 != '\0') {
      local_39 = FUN_103d9e70(2);
      piVar5 = *(int **)(param_1 + 0x2c);
      if (((1 < (uint)(piVar5[1] - *piVar5 >> 2)) &&
          (4 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar5[3] + 4))) {
        FUN_103d8940(*(int *)(piVar5[3] + 4),&local_74);
        cVar3 = FUN_10552d10();
        if (cVar3 != '\0') {
          iVar7 = **(int **)(DAT_113f3a18 + 0x50);
          uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
          piVar5 = (int *)(**(code **)(iVar7 + 0x2c))(uVar4);
          local_34 = (double)CONCAT44(piVar5,(float)local_34);
          if (piVar5 == (int *)0x0) {
            return 1;
          }
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x98))(local_14 + 1,&local_68);
          local_68 = *pfVar6;
          local_64 = pfVar6[1];
          local_60 = pfVar6[2];
          pfVar6 = (float *)(**(code **)(*piVar5 + 0xd4))(&local_58);
          local_14[1] = *pfVar6;
          local_14[2] = pfVar6[1];
          local_14[3] = pfVar6[2];
          local_4c = local_68;
          local_48 = (double)CONCAT44(local_60,local_64);
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x94))();
          local_2c = *pfVar6;
          local_28 = pfVar6[1];
          local_24 = pfVar6[2];
          local_14[0] = DAT_113c1280;
          if (((DAT_112fca68 < (float)((uint)(local_2c - local_4c) & DAT_112fcb10)) ||
              (DAT_112fca68 < (float)((uint)(local_28 - (float)local_48) & DAT_112fcb10))) ||
             (DAT_112fca68 < (float)((uint)(local_24 - local_48._4_4_) & DAT_112fcb10))) {
            local_2c = 0.0;
            fVar20 = (local_4c - *pfVar6) * DAT_112fcb00;
            local_28 = 0.0;
            fVar19 = ((float)local_48 - pfVar6[1]) * DAT_112fcb00;
            local_24 = 1.0;
            local_1c = (double)CONCAT44(local_14[2] * (local_4c - *pfVar6) -
                                        local_14[1] * ((float)local_48 - pfVar6[1]),(float)local_1c)
            ;
            fVar17 = fVar19 * fVar19 + fVar20 * fVar20 + DAT_112fca5c;
            auVar16 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
            fVar18 = auVar16._0_4_;
            fVar18 = (DAT_112fcaac - fVar18 * fVar17 * fVar18 * DAT_113c12b8) * fVar18;
            local_4c = fVar20 * fVar18;
            local_48 = (double)CONCAT44(fVar18 * DAT_113c1280,fVar19 * fVar18);
            uVar4 = FUN_10552f00(local_98,&local_4c,&local_2c,0);
            FUN_10552be0(uVar4);
            local_14[0] = local_24 * DAT_1130193c;
            FUN_104878c0(local_14 + 1);
            FUN_10552be0(local_98);
            local_14[0] = (float)((uint)(local_14[3] * DAT_1130193c - local_14[0]) & DAT_112fcb10);
            if (DAT_11301d98 < local_14[0]) {
              local_14[0] = DAT_11301ccc - local_14[0];
            }
            if (local_1c._4_4_ <= DAT_113c1280) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
            local_14[0] = (float)iVar7 * local_14[0];
          }
          if (DAT_112fca80 <= SQRT(local_14[0] * local_14[0])) {
            piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
            piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
            iVar7 = *piVar5;
            uVar4 = (**(code **)(**(int **)(local_40 + 0x54) + 0xc))();
            piVar5 = (int *)(**(code **)(iVar7 + 0xc))(uVar4);
            if (local_39 != '\0') {
              local_48 = (double)CONCAT44((uint)DAT_113c1280 & DAT_112fcb10,(float)local_48);
              local_14[0] = (float)((uint)local_14[0] & DAT_112fcb10);
              fVar11 = (float10)(**(code **)(*piVar5 + 0xac))();
              local_6c = (float)((float10)1 / fVar11);
              local_1c = (double)CONCAT44(local_6c,(float)local_1c);
              local_74 = local_6c * local_48._4_4_;
              local_6c = local_14[0] * local_6c;
              local_70 = local_74;
              local_14[1] = local_74;
              local_14[2] = local_74;
              local_14[3] = local_6c;
              fVar11 = (float10)(**(code **)(*piVar5 + 0xb4))();
              local_74 = (float)((float10)local_74 * fVar11);
              local_70 = (float)((float10)local_70 * fVar11);
              local_6c = (float)(fVar11 * (float10)local_6c);
              FUN_10551270(1,&local_74);
            }
            piVar5 = local_34._4_4_;
            pfVar6 = (float *)(**(code **)(*local_34._4_4_ + 0x94))();
            local_14[1] = *pfVar6;
            local_14[2] = pfVar6[1];
            local_14[3] = pfVar6[2];
            local_34._4_4_ = (int *)(local_64 - local_14[2]);
            local_48._4_4_ = local_68 - local_14[1];
            (**(code **)(*piVar5 + 0xd4))(&local_20);
            fVar18 = (float)local_34._4_4_ * (float)local_34._4_4_ + local_48._4_4_ * local_48._4_4_
            ;
            if (fVar18 <= DAT_112fce4c) {
              local_38 = (float)local_20;
              local_34._0_4_ = (float)local_1c;
              local_34._4_4_ = (int *)0x0;
            }
            else {
              auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
              fVar17 = auVar16._0_4_;
              fVar17 = (DAT_112fcaac - fVar17 * fVar18 * fVar17 * DAT_113c12b8) * fVar17;
              local_38 = local_48._4_4_ * fVar17;
              local_34._0_4_ = (float)local_34._4_4_ * fVar17;
              local_34._4_4_ = (int *)(fVar17 * DAT_113c1280);
            }
            local_14[1] = 0.0;
            local_14[2] = 1.0;
            local_14[3] = 0.0;
            fVar18 = (float)local_1c * (float)local_1c + (float)local_20 * (float)local_20;
            if (fVar18 <= DAT_112fce4c) {
              local_20 = 0;
              local_1c._0_4_ = 1.0;
              local_1c._4_4_ = 0.0;
            }
            else {
              auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
              fVar17 = auVar16._0_4_;
              fVar17 = (DAT_112fcaac - fVar17 * fVar18 * fVar17 * DAT_113c12b8) * fVar17;
              local_20 = (uint)((float)local_20 * fVar17);
              local_1c._0_4_ = (float)local_1c * fVar17;
              local_1c._4_4_ = fVar17 * DAT_113c1280;
            }
            fVar18 = local_1c._4_4_ * (float)local_34._4_4_ +
                     (float)local_20 * local_38 + (float)local_1c * (float)local_34 + 1.0;
            if (fVar18 <= (float)_DAT_112fca90) {
              local_14[0] = DAT_113c1280;
              iVar7 = (int)(((float)local_1c * (float)local_1c + (float)local_20 * (float)local_20 +
                            local_1c._4_4_ * local_1c._4_4_) * _DAT_112fca9c -
                           (float)local_20 * (float)local_20) >> 0x1f;
              iVar8 = -iVar7;
              local_14[1 - iVar7] = 0.0;
              iVar7 = (iVar8 + -1 >> 0x1f & 3U) + iVar8;
              uVar10 = iVar8 + -2 >> 0x1f & iVar8 + 1U;
              uVar1 = (&local_20)[uVar10];
              local_14[uVar10 + 1] = (&local_24)[iVar7];
              local_14[iVar7] = (float)(uVar1 ^ DAT_113c1410);
              fVar18 = local_14[1] * local_14[1] + local_14[2] * local_14[2] +
                       local_14[3] * local_14[3] + DAT_112fca5c;
              auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
              local_54 = auVar16._0_4_;
              local_54 = (DAT_112fcaac - local_54 * fVar18 * local_54 * DAT_113c12b8) * local_54;
              local_5c = local_14[1] * local_54;
              local_58 = local_14[2] * local_54;
              local_54 = local_14[3] * local_54;
              local_14[3] = local_54;
            }
            else {
              local_5c = (float)local_1c * (float)local_34._4_4_ - (float)local_34 * local_1c._4_4_;
              local_58 = local_38 * local_1c._4_4_ - (float)local_20 * (float)local_34._4_4_;
              fVar17 = (float)local_34 * (float)local_20 - local_38 * (float)local_1c;
              local_54 = 1.0 / SQRT(fVar17 * fVar17 +
                                    local_58 * local_58 + fVar18 * fVar18 + local_5c * local_5c);
              local_50 = local_54 * fVar18;
              local_5c = local_54 * local_5c;
              local_58 = local_54 * local_58;
              local_54 = local_54 * fVar17;
              local_14[0] = local_50;
            }
            fVar18 = (local_5c - local_58 * DAT_113c1280) + local_14[0] * DAT_113c1280;
            local_14[2] = local_54 *
                          ((local_58 * DAT_113c1280 - local_54) + local_14[0] * DAT_113c1280) -
                          local_5c * fVar18;
            local_14[1] = (local_58 * fVar18 -
                          local_54 *
                          ((local_54 * DAT_113c1280 - local_5c * DAT_113c1280) + local_14[0])) *
                          DAT_112fcab0;
            local_14[2] = local_14[2] + DAT_113c12c8 + local_14[2];
            fVar11 = (float10)fpatan(-(float10)local_14[1],(float10)local_14[2]);
            local_34 = (double)CONCAT44((float)fVar11,(float)local_34);
            piVar5 = (int *)(**(code **)(*piVar5 + 0x1b8))(0);
            if ((piVar5 != (int *)0x0) &&
               (piVar5 = (int *)(**(code **)(*piVar5 + 0x4c))(), piVar5 != (int *)0x0)) {
              iVar7 = (**(code **)(*piVar5 + 0x58))(0);
              local_48 = (double)CONCAT44(iVar7,(float)local_48);
              fVar11 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
              local_40 = 0;
              local_14[0] = (float)fVar11;
              if (0 < iVar7) {
                do {
                  piVar9 = (int *)(**(code **)(*piVar5 + 0x5c))(0,local_40);
                  if (*piVar9 != 0) {
                    *(undefined4 *)(*piVar9 + 0x184) = 1;
                    *(undefined1 **)(*piVar9 + 0x198) = &DAT_bf800000;
                    *(undefined1 *)(*piVar9 + 0x1a0) = 0;
                    *(undefined1 **)(*piVar9 + 0x1d4) = &DAT_bf800000;
                    *(undefined1 *)(*piVar9 + 0x1dc) = 0;
                    (**(code **)(*piVar5 + 0x24))(1);
                    (**(code **)(*piVar5 + 0x78))(*piVar9,0,local_34._4_4_,local_14[0],1);
                    (**(code **)(*piVar5 + 0x78))(*piVar9,1,0x3f800000,local_14[0],1);
                    (**(code **)(*piVar5 + 0x7c))(*piVar9,0x3f800000);
                    (**(code **)(*piVar5 + 0x80))(piVar9,local_14[0]);
                  }
                  local_40 = local_40 + 1;
                } while (local_40 < (int)local_48._4_4_);
              }
            }
            return 3;
          }
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x94))();
          local_14[1] = *pfVar6;
          local_14[2] = pfVar6[1];
          local_2c = local_68 - local_14[1];
          local_14[3] = pfVar6[2];
          local_28 = local_64 - local_14[2];
          fVar18 = local_28 * local_28 + local_2c * local_2c;
          if (fVar18 <= DAT_112fce4c) {
            local_2c = DAT_113cc048;
            local_28 = DAT_113cc04c;
            local_24 = DAT_113cc050;
          }
          else {
            auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
            fVar17 = auVar16._0_4_;
            fVar17 = (DAT_112fcaac - fVar17 * fVar18 * fVar17 * DAT_113c12b8) * fVar17;
            local_2c = local_2c * fVar17;
            local_28 = local_28 * fVar17;
            local_24 = fVar17 * DAT_113c1280;
          }
          fVar11 = (float10)local_28;
          local_50 = 0.70710677;
          fVar12 = (float10)local_2c;
          local_5c = local_24 * DAT_112fcab0 * DAT_11305a54;
          local_58 = 0.0;
          local_54 = 0.0;
          fVar13 = SQRT(fVar12 * fVar12 + fVar11 * fVar11);
          if ((float10)DAT_113c12b0 < fVar13) {
            fVar2 = (float10)1;
            fVar12 = fVar12 * (fVar2 / fVar13);
            fVar11 = (fVar2 / fVar13) * fVar11 + fVar2;
            local_48 = (double)fVar11;
            fVar13 = fVar13 + fVar2;
            local_34 = (double)SQRT(fVar12 * fVar12 + fVar11 * fVar11);
            fVar14 = SQRT(fVar13 * fVar13 + (float10)local_24 * (float10)local_24);
            local_1c = (double)fVar14;
            fVar11 = (float10)0;
            fVar15 = (float10)DAT_11305a60;
            if ((float10)DAT_113c12b0 < (float10)local_34) {
              fVar15 = fVar2 / (float10)local_34;
              fVar11 = fVar15 * (float10)local_48;
              fVar15 = -(fVar15 * fVar12);
              fVar14 = (float10)local_1c;
            }
            fVar13 = (fVar2 / fVar14) * fVar13;
            fVar12 = (fVar2 / fVar14) * (float10)local_24;
            local_50 = (float)(fVar13 * fVar11);
            local_5c = (float)(fVar12 * fVar11);
            local_58 = (float)(fVar12 * fVar15);
            local_54 = (float)(fVar15 * fVar13);
          }
          (**(code **)(*piVar5 + 0xb0))(&local_5c,0);
          return 2;
        }
      }
    }
  }
  return 1;
}


// [d1] FUN_103d9e70 @103d9e70  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// ===== [d1] FUN_10574f10 @10574f10  (2720 bytes) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10574f10(float param_1)

{
  float10 fVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_12c [48];
  undefined1 local_fc [48];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [4];
  double local_8c;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [8];
  undefined8 local_34;
  float local_2c;
  int *local_28;
  char local_21;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int *local_10;
  char local_a;
  char local_9;
  float local_8;
  
  iVar8 = **(int **)(DAT_113f3a18 + 0x50);
  local_20 = param_1;
  uVar3 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar8 + 0x2c))(uVar3);
  fVar20 = local_20;
  if ((((piVar4 != (int *)0x0) &&
       (piVar5 = *(int **)((int)local_20 + 0x2c), piVar5[1] - *piVar5 >> 2 != 0)) &&
      (0 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU))) && (-1 < *(int *)piVar5[3])) {
    local_10 = piVar4;
    FUN_103d8940(*(int *)piVar5[3],&local_84);
    cVar2 = FUN_10552d10();
    if (((cVar2 != '\0') &&
        (piVar5 = *(int **)((int)fVar20 + 0x2c), 1 < (uint)(piVar5[1] - *piVar5 >> 2))) &&
       ((4 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU) && (-1 < *(int *)(piVar5[3] + 4))))) {
      FUN_103d8940(*(int *)(piVar5[3] + 4),&local_9c);
      cVar2 = FUN_10552d10();
      if (cVar2 != '\0') {
        local_a = '\0';
        local_9 = '\0';
        local_21 = '\0';
        piVar5 = (int *)(**(code **)(*piVar4 + 0x1b8))(0);
        if ((piVar5 != (int *)0x0) &&
           (local_28 = (int *)(**(code **)(*piVar5 + 0x4c))(), local_28 != (int *)0x0)) {
          local_8 = (float)(**(code **)(*local_28 + 0x44))(0);
          fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
          piVar5 = local_28;
          iVar8 = 0;
          local_2c = (float)fVar10;
          if (0 < (int)local_8) {
            do {
              piVar4 = (int *)(**(code **)(*piVar5 + 0x4c))(0,iVar8);
              if (*piVar4 != 0) {
                local_a = '\x01';
                if ((*(short *)((int)piVar4 + 0x32) != 0) && ((float)piVar4[4] != DAT_113c12c8)) {
                  local_9 = '\x01';
                }
                if ((float)piVar4[6] == DAT_113c12c8) {
                  local_21 = '\x01';
                }
              }
              iVar8 = iVar8 + 1;
              piVar4 = local_10;
            } while (iVar8 < (int)local_8);
          }
          pfVar6 = (float *)(**(code **)(*piVar4 + 0xd4))(local_90);
          local_74 = *pfVar6;
          local_70 = *(double *)(pfVar6 + 1);
          local_54[7] = local_84;
          local_34 = (double)CONCAT44(local_7c,local_80);
          pfVar6 = (float *)(**(code **)(*piVar4 + 0x94))();
          local_1c = *pfVar6;
          local_18 = pfVar6[1];
          local_14 = pfVar6[2];
          if (((DAT_112fca68 < (float)((uint)(local_1c - local_54[7]) & DAT_112fcb10)) ||
              (DAT_112fca68 < (float)((uint)(local_18 - (float)local_34) & DAT_112fcb10))) ||
             (fVar20 = DAT_113c1280,
             DAT_112fca68 < (float)((uint)(local_14 - local_34._4_4_) & DAT_112fcb10))) {
            fVar23 = (local_54[7] - *pfVar6) * DAT_112fcb00;
            local_1c = 0.0;
            local_18 = 0.0;
            fVar21 = ((float)local_34 - pfVar6[1]) * DAT_112fcb00;
            local_14 = 1.0;
            local_8 = (float)local_70 * (local_54[7] - *pfVar6) -
                      local_74 * ((float)local_34 - pfVar6[1]);
            fVar19 = fVar21 * fVar21 + fVar23 * fVar23 + DAT_112fca5c;
            auVar18 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
            fVar20 = auVar18._0_4_;
            fVar20 = (DAT_112fcaac - fVar20 * fVar19 * fVar20 * DAT_113c12b8) * fVar20;
            local_54[7] = fVar23 * fVar20;
            local_34 = (double)CONCAT44(fVar20 * DAT_113c1280,fVar21 * fVar20);
            uVar3 = FUN_10552f00(&local_5c,local_54 + 7,&local_1c,0);
            FUN_10552be0(uVar3);
            local_20 = local_14 * DAT_1130193c;
            FUN_104878c0(&local_74);
            FUN_10552be0(&local_5c);
            fVar20 = (float)((uint)(local_14 * DAT_1130193c - local_20) & DAT_112fcb10);
            if (DAT_11301d98 < fVar20) {
              fVar20 = DAT_11301ccc - fVar20;
            }
            if (local_8 <= DAT_113c1280) {
              iVar8 = -1;
            }
            else {
              iVar8 = 1;
            }
            fVar20 = (float)iVar8 * fVar20;
          }
          if ((fVar20 * fVar20 < DAT_11304ef4) && ((local_a == '\0' || (local_9 == '\0')))) {
            pfVar6 = (float *)(**(code **)(*piVar4 + 0x94))();
            local_84 = local_84 - *pfVar6;
            local_80 = local_80 - pfVar6[1];
            fVar20 = local_80 * local_80 + local_84 * local_84;
            if (fVar20 <= DAT_112fce4c) {
              local_1c = DAT_113cc048;
              local_18 = DAT_113cc04c;
              local_14 = DAT_113cc050;
            }
            else {
              auVar18 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
              fVar19 = auVar18._0_4_;
              fVar19 = (DAT_112fcaac - fVar19 * fVar20 * fVar19 * DAT_113c12b8) * fVar19;
              local_1c = local_84 * fVar19;
              local_18 = local_80 * fVar19;
              local_14 = fVar19 * DAT_113c1280;
            }
            fVar10 = (float10)local_18;
            local_54[6] = 0.70710677;
            fVar11 = (float10)local_1c;
            local_54[3] = local_14 * DAT_112fcab0 * DAT_11305a54;
            local_54[4] = 0.0;
            local_54[5] = 0.0;
            fVar12 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
            if ((float10)DAT_113c12b0 < fVar12) {
              fVar1 = (float10)1;
              fVar11 = fVar11 * (fVar1 / fVar12);
              fVar10 = (fVar1 / fVar12) * fVar10 + fVar1;
              local_70 = (double)fVar10;
              fVar12 = fVar12 + fVar1;
              local_34 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10);
              fVar13 = SQRT(fVar12 * fVar12 + (float10)local_14 * (float10)local_14);
              local_8c = (double)fVar13;
              fVar10 = (float10)0;
              fVar14 = (float10)DAT_11305a60;
              if ((float10)DAT_113c12b0 < (float10)local_34) {
                fVar14 = fVar1 / (float10)local_34;
                fVar10 = fVar14 * (float10)local_70;
                fVar14 = -(fVar14 * fVar11);
                fVar13 = (float10)local_8c;
              }
              fVar12 = (fVar1 / fVar13) * fVar12;
              fVar11 = (fVar1 / fVar13) * (float10)local_14;
              local_54[6] = (float)(fVar12 * fVar10);
              local_54[3] = (float)(fVar11 * fVar10);
              local_54[4] = (float)(fVar11 * fVar14);
              local_54[5] = (float)(fVar14 * fVar12);
            }
            (**(code **)(*piVar4 + 0xb0))(local_54 + 3,0);
            return 2;
          }
          if ((local_a == '\0') || (local_9 == '\0')) {
            fVar21 = (float)((uint)DAT_113c1280 & DAT_112fcb10);
            fVar19 = local_9c * local_2c;
            if (fVar21 <= local_9c * local_2c) {
              fVar19 = fVar21;
            }
            fVar23 = local_98 * local_2c;
            if (fVar21 <= local_98 * local_2c) {
              fVar23 = fVar21;
            }
            fVar21 = local_94 * local_2c;
            if ((float)((uint)fVar20 & DAT_112fcb10) <= local_94 * local_2c) {
              fVar21 = (float)((uint)fVar20 & DAT_112fcb10);
            }
            if (fVar20 <= DAT_113c1280) {
              iVar8 = 1;
            }
            else {
              iVar8 = -1;
            }
            fVar11 = (float10)(fVar19 * DAT_113c129c * DAT_113c12b8);
            fVar10 = (float10)fcos(fVar11);
            fVar11 = (float10)fsin(fVar11);
                    /* WARNING: Ignoring partial resolution of indirect */
            local_70._4_4_ = (float)fVar10;
            fVar20 = (float)fVar11;
            fVar11 = (float10)(fVar23 * DAT_113c129c * DAT_113c12b8);
            fVar10 = (float10)fcos(fVar11);
            fVar11 = (float10)fsin(fVar11);
            fVar19 = (float)fVar10;
            fVar23 = (float)fVar11;
            local_2c = (float)iVar8 * fVar21 * DAT_113c129c * DAT_113c12b8;
            fVar10 = (float10)fcos((float10)local_2c);
            fVar11 = (float10)fsin((float10)local_2c);
                    /* WARNING: Ignoring partial resolution of indirect */
            local_34._4_4_ = (float)fVar10;
            fVar21 = (float)fVar11;
            local_20 = fVar23 * fVar20 * fVar21 + fVar19 * local_70._4_4_ * local_34._4_4_;
            local_10 = (int *)(local_34._4_4_ * fVar19 * fVar20 - fVar21 * fVar23 * local_70._4_4_);
            local_28 = (int *)(local_34._4_4_ * fVar23 * local_70._4_4_ + fVar21 * fVar19 * fVar20);
            local_8 = fVar21 * fVar19 * local_70._4_4_ - local_34._4_4_ * fVar23 * fVar20;
            pfVar6 = (float *)(**(code **)(*piVar4 + 0xb4))();
            fVar20 = *pfVar6;
            fVar19 = pfVar6[1];
            fVar21 = pfVar6[2];
            fVar23 = pfVar6[3];
            fVar15 = fVar21 * (float)local_28;
            local_54[6] = fVar23 * local_20 -
                          (fVar19 * (float)local_28 + fVar20 * (float)local_10 + fVar21 * local_8);
            fVar17 = fVar20 * (float)local_28;
            local_34 = (double)CONCAT44(local_54[6],(float)local_34);
            fVar22 = fVar19 * local_8;
            fVar16 = fVar20 * local_8;
            local_28 = (int *)((float)local_28 * fVar23);
            local_8 = local_8 * fVar23;
            local_18 = (float)local_28 + fVar19 * local_20 + (fVar21 * (float)local_10 - fVar16);
            local_1c = (float)local_10 * fVar23 + fVar20 * local_20 + (fVar22 - fVar15);
            local_14 = local_8 + fVar21 * local_20 + (fVar17 - fVar19 * (float)local_10);
            fVar20 = local_54[6] * local_54[6] + local_1c * local_1c + local_18 * local_18 +
                     local_14 * local_14;
            if (fVar20 <= _DAT_11305a50) {
              local_54[6] = 1.0;
              local_54[3] = 0.0;
              local_54[4] = 0.0;
              local_54[5] = 0.0;
            }
            else {
              auVar18 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
              local_54[5] = auVar18._0_4_;
              local_54[5] = (DAT_112fcaac - local_54[5] * fVar20 * local_54[5] * DAT_113c12b8) *
                            local_54[5];
              local_54[6] = local_54[6] * local_54[5];
              local_54[3] = local_54[5] * local_1c;
              local_54[4] = local_18 * local_54[5];
              local_54[5] = local_14 * local_54[5];
            }
            local_10 = (int *)local_1c;
            (**(code **)(*piVar4 + 0xb0))(local_54 + 3,0);
          }
          else {
            pfVar6 = (float *)(**(code **)(*local_28 + 0xa8))();
            pfVar9 = local_54;
            for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar9 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar9 = pfVar9 + 1;
            }
            puVar7 = (undefined4 *)FUN_1051f140(local_54);
            piVar4 = local_10;
            local_5c = 0;
            local_54[2] = 0.0;
            local_68 = *puVar7;
            local_64 = puVar7[1];
            local_60 = puVar7[2];
            local_58 = puVar7[3];
            local_54[0] = (float)puVar7[4];
            local_54[1] = (float)puVar7[5];
            local_54[4] = (float)puVar7[7];
            local_54[3] = (float)puVar7[6];
            local_54[5] = (float)puVar7[8];
            local_54[6] = 0.0;
            uVar3 = (**(code **)(*local_10 + 0x78))(local_fc,&local_68);
            puVar7 = (undefined4 *)FUN_10491d70(local_12c,uVar3);
            local_cc = *puVar7;
            local_c8 = puVar7[1];
            local_c4 = puVar7[2];
            local_c0 = puVar7[3];
            local_bc = puVar7[4];
            local_b8 = puVar7[5];
            local_b4 = puVar7[6];
            local_b0 = puVar7[7];
            local_ac = puVar7[8];
            local_a8 = puVar7[9];
            local_a4 = puVar7[10];
            local_a0 = puVar7[0xb];
            if (local_21 != '\0') {
              (**(code **)(*piVar4 + 0x70))(&local_cc,0);
              return 3;
            }
          }
        }
        return 3;
      }
    }
  }
  return 1;
}


// [d1] FUN_10552be0 @10552be0  (emitted in an earlier root)

// [d1] FUN_10552f00 @10552f00  (emitted in an earlier root)

// [d1] FUN_104878c0 @104878c0  (emitted in an earlier root)

// [d1] FUN_10552d10 @10552d10  (emitted in an earlier root)

// [d1] FUN_10551270 @10551270  (emitted in an earlier root)

// [d2] FUN_103db9b0 @103db9b0  (emitted in an earlier root)

// ===== [d2] FUN_10491d70 @10491d70  (509 bytes) =====

/* [RE-AUTO c0] */

float * FUN_10491d70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[9];
  fVar2 = param_3[4];
  fVar3 = *param_3;
  fVar4 = param_3[8];
  fVar5 = param_2[8];
  fVar6 = param_2[10];
  fVar7 = param_2[5];
  *param_1 = fVar3 * *param_2 + fVar2 * param_2[1] + param_2[2] * fVar4;
  fVar8 = param_3[9];
  param_1[4] = param_2[4] * fVar3 + fVar7 * fVar2 + param_2[6] * fVar4;
  fVar7 = param_3[1];
  fVar9 = param_3[5];
  fVar10 = *param_2;
  param_1[8] = fVar1 * fVar2 + fVar5 * fVar3 + fVar6 * fVar4;
  fVar2 = param_2[5];
  param_1[1] = fVar9 * param_2[1] + fVar7 * fVar10 + fVar8 * param_2[2];
  fVar3 = param_3[6];
  fVar4 = param_2[1];
  fVar10 = param_3[10];
  param_1[5] = fVar7 * param_2[4] + fVar9 * fVar2 + fVar8 * param_2[6];
  param_1[9] = fVar7 * fVar5 + fVar9 * fVar1 + fVar8 * fVar6;
  fVar2 = param_3[2];
  fVar7 = param_2[5];
  param_1[2] = fVar2 * *param_2 + fVar3 * fVar4 + fVar10 * param_2[2];
  fVar4 = param_3[7];
  param_1[6] = fVar2 * param_2[4] + fVar3 * fVar7 + fVar10 * param_2[6];
  fVar7 = param_2[1];
  fVar8 = param_3[0xb];
  param_1[10] = fVar2 * fVar5 + fVar3 * fVar1 + fVar10 * fVar6;
  fVar2 = param_3[3];
  fVar3 = param_2[5];
  param_1[3] = fVar2 * *param_2 + fVar4 * fVar7 + fVar8 * param_2[2] + param_2[3];
  fVar7 = param_2[0xb];
  param_1[7] = fVar2 * param_2[4] + fVar4 * fVar3 + fVar8 * param_2[6] + param_2[7];
  param_1[0xb] = fVar2 * fVar5 + fVar4 * fVar1 + fVar8 * fVar6 + fVar7;
  return param_1;
}


// ===== [d2] FUN_1051f140 @1051f140  (246 bytes) =====

/* [RE-AUTO c0] */

float * __thiscall FUN_1051f140(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = (float10)(*param_2 * DAT_112fcab0);
  fVar2 = (float10)(param_2[1] * DAT_112fcab0);
  fVar3 = (float10)*param_2;
  fVar4 = (float10)param_2[1];
  fVar5 = (float10)param_2[3];
  fVar6 = (float10)(param_2[2] * DAT_112fcab0);
  fVar7 = (float10)param_2[2] * fVar6;
  fVar8 = (float10)(double)(fVar4 * fVar2);
  *param_1 = (float)(((float10)1 - fVar8) - fVar7);
  param_1[1] = (float)(fVar3 * fVar2 - fVar5 * fVar6);
  param_1[2] = (float)(fVar3 * fVar6 + fVar5 * fVar2);
  param_1[3] = (float)(fVar5 * fVar6 + fVar3 * fVar2);
  fVar9 = (float10)(double)((float10)1 - fVar3 * fVar1);
  param_1[4] = (float)(fVar9 - fVar7);
  fVar4 = (float10)(double)(fVar4 * fVar6);
  fVar1 = (float10)(double)(fVar5 * fVar1);
  param_1[5] = (float)(fVar4 - fVar1);
  param_1[6] = (float)(fVar3 * fVar6 - fVar5 * fVar2);
  param_1[7] = (float)(fVar4 + fVar1);
  param_1[8] = (float)(fVar9 - fVar8);
  return param_1;
}


// ===== [d2] _CIasin @112be7c4  (6 bytes) =====

/* [RE-AUTO c0] */

void _CIasin(void)

{
                    /* WARNING: Could not recover jumptable at 0x112be7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIasin();
  return;
}


// ===== [d2] FUN_1052c1b0 @1052c1b0  (383 bytes) =====

/* [RE-AUTO c0] */

float * FUN_1052c1b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_3[5];
  fVar5 = param_3[2];
  fVar6 = param_3[8];
  fVar7 = param_3[4];
  *param_1 = *param_3 * fVar2 + param_3[3] * fVar1 + param_3[6] * fVar3;
  fVar8 = param_2[3];
  param_1[1] = param_3[1] * fVar2 + fVar7 * fVar1 + param_3[7] * fVar3;
  fVar7 = param_2[5];
  fVar9 = param_2[4];
  fVar10 = param_3[3];
  param_1[2] = fVar5 * fVar2 + fVar4 * fVar1 + fVar6 * fVar3;
  fVar1 = param_3[4];
  param_1[3] = fVar8 * *param_3 + fVar9 * fVar10 + fVar7 * param_3[6];
  fVar2 = param_2[7];
  fVar3 = param_3[3];
  fVar10 = param_2[8];
  param_1[4] = fVar8 * param_3[1] + fVar9 * fVar1 + fVar7 * param_3[7];
  param_1[5] = fVar8 * fVar5 + fVar9 * fVar4 + fVar7 * fVar6;
  fVar1 = param_2[6];
  fVar7 = param_3[4];
  param_1[6] = fVar1 * *param_3 + fVar2 * fVar3 + fVar10 * param_3[6];
  param_1[7] = fVar1 * param_3[1] + fVar2 * fVar7 + fVar10 * param_3[7];
  param_1[8] = fVar1 * fVar5 + fVar2 * fVar4 + fVar10 * fVar6;
  return param_1;
}


// [d2] FUN_10551180 @10551180  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// [d2] FUN_103c9820 @103c9820  (emitted in an earlier root)

// [d2] FUN_10551520 @10551520  (emitted in an earlier root)
