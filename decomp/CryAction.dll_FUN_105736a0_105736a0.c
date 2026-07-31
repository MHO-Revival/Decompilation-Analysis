
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105736a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float local_78;
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
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  float *local_20;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  piVar7 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar7[1] - *piVar7 >> 2)) && (8 < (int)(piVar7[4] - piVar7[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar7[3] + 8))) {
    FUN_103d8940(*(int *)(piVar7[3] + 8),&local_40);
    cVar5 = FUN_10552d10();
    if (((cVar5 != '\0') &&
        (piVar7 = *(int **)(param_1 + 0x2c), 3 < (uint)(piVar7[1] - *piVar7 >> 2))) &&
       ((0xc < (int)(piVar7[4] - piVar7[3] & 0xfffffffcU) && (-1 < *(int *)(piVar7[3] + 0xc))))) {
      FUN_103d8940(*(int *)(piVar7[3] + 0xc),&local_4c);
      cVar5 = FUN_10552d10();
      if (cVar5 != '\0') {
        local_c = local_4c * DAT_112fcab0;
        local_8 = local_48 * DAT_112fcab0;
        local_14 = local_44 * DAT_112fcab0;
        fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
        local_10 = (float)fVar10;
        iVar9 = **(int **)(DAT_113f3a18 + 0x50);
        pcVar4 = *(code **)(**(int **)(param_1 + 0x54) + 0xc);
        if (local_40 * local_40 + local_3c * local_3c + local_38 * local_38 <
            local_8 * local_10 * local_8 * local_10 + local_c * local_10 * local_c * local_10 +
            local_14 * local_10 * local_14 * local_10 + DAT_112fca7c) {
          uVar6 = (*pcVar4)();
          piVar7 = (int *)(**(code **)(iVar9 + 0x2c))(uVar6);
          fVar11 = (float10)((float)((uint)local_40 ^ DAT_113c1410) * DAT_113c129c * DAT_113c12b8);
          fVar10 = (float10)fcos(fVar11);
          fVar11 = (float10)fsin(fVar11);
          fVar14 = (float)fVar10;
          fVar1 = (float)fVar11;
          fVar11 = (float10)((float)((uint)local_3c ^ DAT_113c1410) * DAT_113c129c * DAT_113c12b8);
          fVar10 = (float10)fcos(fVar11);
          fVar11 = (float10)fsin(fVar11);
          fVar2 = (float)fVar10;
          fVar3 = (float)fVar11;
          local_14 = (float)((uint)local_38 ^ DAT_113c1410) * DAT_113c129c * DAT_113c12b8;
          fVar10 = (float10)fcos((float10)local_14);
          fVar11 = (float10)fsin((float10)local_14);
          fVar12 = (float)fVar10;
          fVar15 = (float)fVar11;
          local_10 = fVar3 * fVar1 * fVar15 + fVar2 * fVar14 * fVar12;
          local_c = fVar12 * fVar2 * fVar1 - fVar15 * fVar3 * fVar14;
          local_28 = fVar12 * fVar3 * fVar14 + fVar15 * fVar2 * fVar1;
          local_8 = fVar15 * fVar2 * fVar14 - fVar12 * fVar3 * fVar1;
          pfVar8 = (float *)(**(code **)(*piVar7 + 0xb4))();
          fVar14 = *pfVar8;
          fVar1 = pfVar8[1];
          fVar2 = pfVar8[2];
          fVar3 = pfVar8[3];
          local_20 = (float *)(fVar3 * local_10 -
                              (fVar1 * local_28 + fVar14 * local_c + fVar2 * local_8));
          fVar12 = fVar14 * local_28;
          fVar15 = local_28 * fVar3;
          local_28 = fVar1 * local_8 - fVar2 * local_28;
          local_24 = (float *)(fVar2 * local_c - fVar14 * local_8);
          local_54 = (float)local_24 + fVar15 + fVar1 * local_10;
          local_58 = local_28 + local_c * fVar3 + fVar14 * local_10;
          local_50 = (fVar12 - fVar1 * local_c) + local_8 * fVar3 + fVar2 * local_10;
          fVar14 = local_58 * local_58 + (float)local_20 * (float)local_20 + local_54 * local_54 +
                   local_50 * local_50;
          if (fVar14 <= _DAT_11305a50) {
            local_5c = 1.0;
            local_68 = 0.0;
            local_64 = 0.0;
            local_60 = 0.0;
          }
          else {
            auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
            local_60 = auVar13._0_4_;
            local_60 = (DAT_112fcaac - local_60 * fVar14 * local_60 * DAT_113c12b8) * local_60;
            local_64 = local_54 * local_60;
            local_5c = (float)local_20 * local_60;
            local_68 = local_58 * local_60;
            local_60 = local_50 * local_60;
          }
          (**(code **)(*piVar7 + 0xb0))(&local_68,0);
          return 2;
        }
        uVar6 = (*pcVar4)();
        piVar7 = (int *)(**(code **)(iVar9 + 0x2c))(uVar6);
        if (piVar7 == (int *)0x0) {
          return 1;
        }
        fVar10 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x20))();
        local_54 = (float)((float10)local_48 * fVar10);
        local_50 = (float)(fVar10 * (float10)local_44);
        local_2c = local_4c * (float)fVar10;
        if ((float)((uint)local_40 & DAT_112fcb10) <= local_4c * (float)fVar10) {
          local_2c = (float)((uint)local_40 & DAT_112fcb10);
        }
        local_30 = local_54;
        if ((float)((uint)local_3c & DAT_112fcb10) <= local_54) {
          local_30 = (float)((uint)local_3c & DAT_112fcb10);
        }
        local_34 = local_50;
        if ((float)((uint)local_38 & DAT_112fcb10) <= local_50) {
          local_34 = (float)((uint)local_38 & DAT_112fcb10);
        }
        if (local_40 <= DAT_113c1280) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
        }
        local_2c = (float)iVar9 * local_2c;
        if (local_3c <= DAT_113c1280) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
        }
        local_30 = (float)iVar9 * local_30;
        if (local_38 <= DAT_113c1280) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
        }
        local_34 = (float)iVar9 * local_34;
        fVar11 = (float10)(local_2c * DAT_113c129c * DAT_113c12b8);
        fVar10 = (float10)fcos(fVar11);
        fVar11 = (float10)fsin(fVar11);
        fVar14 = (float)fVar10;
        fVar1 = (float)fVar11;
        fVar11 = (float10)(local_30 * DAT_113c129c * DAT_113c12b8);
        fVar10 = (float10)fcos(fVar11);
        fVar11 = (float10)fsin(fVar11);
        fVar2 = (float)fVar10;
        fVar3 = (float)fVar11;
        local_24 = &local_8;
        local_20 = &local_14;
        fVar11 = (float10)(local_34 * DAT_113c129c * DAT_113c12b8);
        fVar10 = (float10)fcos(fVar11);
        fVar11 = (float10)fsin(fVar11);
        fVar12 = (float)fVar10;
        local_14 = (float)fVar11;
        local_10 = fVar3 * fVar1 * local_14 + fVar2 * fVar14 * fVar12;
        local_c = fVar12 * fVar2 * fVar1 - local_14 * fVar3 * fVar14;
        local_28 = fVar12 * fVar3 * fVar14 + local_14 * fVar2 * fVar1;
        local_8 = local_14 * fVar2 * fVar14 - fVar12 * fVar3 * fVar1;
        pfVar8 = (float *)(**(code **)(*piVar7 + 0xb4))();
        fVar14 = *pfVar8;
        fVar1 = pfVar8[1];
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[3];
        local_20 = (float *)(fVar3 * local_10 -
                            (fVar1 * local_28 + fVar14 * local_c + fVar2 * local_8));
        fVar12 = fVar14 * local_28;
        fVar15 = local_28 * fVar3;
        local_28 = fVar1 * local_8 - fVar2 * local_28;
        local_24 = (float *)(fVar2 * local_c - fVar14 * local_8);
        local_54 = (float)local_24 + fVar15 + fVar1 * local_10;
        local_58 = local_28 + local_c * fVar3 + fVar14 * local_10;
        local_50 = (fVar12 - fVar1 * local_c) + local_8 * fVar3 + fVar2 * local_10;
        fVar14 = (float)local_20 * (float)local_20 + local_58 * local_58 + local_54 * local_54 +
                 local_50 * local_50;
        if (fVar14 <= _DAT_11305a50) {
          local_6c = 1.0;
          local_78 = 0.0;
          local_74 = 0.0;
          local_70 = 0.0;
        }
        else {
          auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          local_70 = auVar13._0_4_;
          local_70 = (DAT_112fcaac - local_70 * fVar14 * local_70 * DAT_113c12b8) * local_70;
          local_6c = (float)local_20 * local_70;
          local_78 = local_70 * local_58;
          local_74 = local_54 * local_70;
          local_70 = local_50 * local_70;
        }
        (**(code **)(*piVar7 + 0xb0))(&local_78,0);
        local_40 = local_40 - local_2c * DAT_112fcb00;
        local_3c = local_3c - local_30 * DAT_112fcb00;
        local_38 = local_38 - local_34 * DAT_112fcb00;
        FUN_10551270(2,&local_40);
        return 3;
      }
    }
  }
  return 1;
}

