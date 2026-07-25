// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CEntityRotateToPos vtbl[3] @10574400 =====

/* [RE-AUTO c0] */

void FUN_10574400(void)

{
  FUN_103dc9e0();
  return;
}


// ===== CEntityRotateToPos vtbl[4] @10574410 =====

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

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CEntityRotateToPos vtbl[7] @10575c20 =====

char * FUN_10575c20(void)

{
  return "CEntityRotateToPos";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CEntityRotateToPos vtbl[10] @10575c30 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10575c30(undefined4 param_1,int *param_2)

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

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CEntityRotateToPos vtbl[13] @10575b30 =====

void FUN_10575b30(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
