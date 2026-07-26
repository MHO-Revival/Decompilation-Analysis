// CJumpTo  name-getter slot 0x113141b0
// -6  0x11314198 -> 0x103d8b60
// -5  0x1131419c -> 0x103dca70
// -4  0x113141a0 -> 0x103dc9e0
// -3  0x113141a4 -> 0x1059b950   <== Evaluate
// -2  0x113141a8 -> 0x103d7a00
// -1  0x113141ac -> 0x103d7a30
// +0  0x113141b0 -> 0x10621e20   <== name getter
// +1  0x113141b4 -> 0x103dc6d0
// +2  0x113141b8 -> 0x103dc830


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1059b950(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
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
  undefined1 *local_14;
  float local_10;
  float local_c;
  char local_5;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) != '\0') {
    local_10 = DAT_1130962c;
    local_18 = DAT_112fcac4;
    local_5 = '\0';
    local_14 = &DAT_41200000;
    cVar2 = FUN_103f8050(0,&local_c);
    if (cVar2 != '\0') {
      fVar6 = ((local_c + DAT_11309628) - (float)((uint)(local_c - DAT_11309628) & DAT_112fcb10)) *
              DAT_113c12b8;
      local_18 = ((float)((uint)(fVar6 - DAT_113c12b8) & DAT_112fcb10) + fVar6 + DAT_113c12b8) *
                 DAT_113c12b8;
    }
    cVar2 = FUN_103f8050(1,&local_c);
    if (cVar2 != '\0') {
      fVar6 = ((local_c - DAT_112fe0c0) - (float)((uint)(local_c - _DAT_11301944) & DAT_112fcb10)) *
              DAT_113c12b8;
      local_10 = ((float)((uint)(fVar6 - _DAT_11309630) & DAT_112fcb10) + (fVar6 - DAT_11309628)) *
                 DAT_113c12b8;
    }
    piVar4 = *(int **)(param_1 + 0x2c);
    if (((4 < (uint)(piVar4[1] - *piVar4 >> 2)) &&
        (0x10 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar4[3] + 0x10))) {
      FUN_103d8940(*(int *)(piVar4[3] + 0x10),&local_24);
      cVar2 = FUN_10552d10();
      if (cVar2 != '\0') {
        piVar4 = *(int **)(param_1 + 0x2c);
        if (((2 < (uint)(piVar4[1] - *piVar4 >> 2)) &&
            (8 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar4[3] + 8))) {
          FUN_103d8940(*(int *)(piVar4[3] + 8),&local_5);
          FUN_101c36a0();
        }
        if (local_5 != '\0') {
          FUN_10552dd0(3,&local_14);
          local_30 = 1.0;
          local_2c = 1.0;
          local_28 = 1.0;
          cVar2 = FUN_10552e20(5,&local_30);
          if (cVar2 == '\0') {
            return 1;
          }
          fVar7 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
          fVar6 = DAT_113cc048;
          fVar10 = DAT_113cc04c;
          fVar8 = DAT_113cc050;
          if (DAT_112fce4c < fVar7) {
            auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar8 = auVar9._0_4_;
            fVar8 = (DAT_112fcaac - fVar8 * fVar7 * fVar8 * DAT_113c12b8) * fVar8;
            fVar6 = local_30 * fVar8;
            fVar10 = local_2c * fVar8;
            fVar8 = local_28 * fVar8;
          }
          local_30 = local_24 + fVar6 * (float)local_14;
          local_2c = local_20 + fVar10 * (float)local_14;
          local_28 = local_1c + fVar8 * (float)local_14;
          local_24 = local_30;
          local_20 = local_2c;
          local_1c = local_28;
        }
        iVar1 = **(int **)(DAT_113f3a18 + 0x50);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
        piVar4 = (int *)(**(code **)(iVar1 + 0x2c))(uVar3);
        if (piVar4 != (int *)0x0) {
          pfVar5 = (float *)(**(code **)(*piVar4 + 0x98))(&local_30,&local_24);
          local_24 = *pfVar5;
          local_20 = pfVar5[1];
          local_1c = pfVar5[2];
          pfVar5 = (float *)(**(code **)(*piVar4 + 0x94))();
          local_30 = *pfVar5;
          local_2c = pfVar5[1];
          fVar6 = local_24 - local_30;
          fVar10 = local_20 - local_2c;
          local_28 = pfVar5[2];
          fVar8 = fVar10 * fVar10 + fVar6 * fVar6;
          local_34 = SQRT(fVar8);
          if (SQRT(fVar8) <= DAT_112fca64) {
            local_34 = DAT_112fca80;
          }
          local_34 = local_34 / local_18;
          local_34 = ((local_1c - local_28) - local_10 * DAT_113c12b8 * local_34 * local_34) /
                     local_34;
          if (fVar8 <= DAT_112fce4c) {
            local_30 = DAT_113cc5e8;
            local_2c = DAT_113cc5ec;
            local_28 = DAT_113cc5f0;
            local_3c = DAT_113cc5e8;
            local_38 = DAT_113cc5ec;
          }
          else {
            auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
            fVar7 = auVar9._0_4_;
            fVar7 = (DAT_112fcaac - fVar7 * fVar8 * fVar7 * DAT_113c12b8) * fVar7;
            local_3c = fVar6 * fVar7;
            local_38 = fVar10 * fVar7;
          }
          local_3c = local_3c * local_18;
          local_38 = local_38 * local_18;
          (**(code **)(*piVar4 + 0x94))();
          (**(code **)(*piVar4 + 0xb4))();
          (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x24))(piVar4,&local_3c,local_10,3);
          return 2;
        }
      }
    }
  }
  return 1;
}

