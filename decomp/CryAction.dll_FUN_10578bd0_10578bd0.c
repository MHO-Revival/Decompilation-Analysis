
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

