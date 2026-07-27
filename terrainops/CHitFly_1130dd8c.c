// CHitFly  name-getter slot 0x1130dd8c
// -6  0x1130dd74 -> 0x103d8b60
// -5  0x1130dd78 -> 0x103dca70
// -4  0x1130dd7c -> 0x103dc9e0
// -3  0x1130dd80 -> 0x10599990   <== Evaluate
// -2  0x1130dd84 -> 0x103d7a00
// -1  0x1130dd88 -> 0x103d7a30
// +0  0x1130dd8c -> 0x10621d00   <== name getter
// +1  0x1130dd90 -> 0x103dc6d0
// +2  0x1130dd94 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10599990(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  char local_5;
  
  FUN_10a5d660();
  local_14 = 0xc11ccccd;
  local_5 = '\0';
  FUN_103f8050(0,&local_14);
  piVar4 = *(int **)(param_1 + 0x2c);
  if (((3 < (uint)(piVar4[1] - *piVar4 >> 2)) && (0xc < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar4[3] + 0xc))) {
    FUN_103d8940(*(int *)(piVar4[3] + 0xc),&local_24);
    cVar1 = FUN_10552d10();
    local_10 = &DAT_40a00000;
    cVar2 = local_5;
    if (cVar1 != '\0') {
      cVar2 = '\x01';
    }
    cVar1 = '\0';
    if (cVar2 != '\0') {
      local_5 = '\0';
      cVar2 = FUN_103f8050(1,&local_10);
      cVar1 = local_5;
      if (cVar2 != '\0') {
        cVar1 = '\x01';
      }
    }
    local_c = &DAT_40a00000;
    if ((cVar1 != '\0') && (cVar2 = FUN_103f8050(2,&local_c), cVar2 != '\0')) {
      iVar5 = **(int **)(DAT_113f3a18 + 0x50);
      uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      piVar4 = (int *)(**(code **)(iVar5 + 0x2c))(uVar3);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x94))();
        (**(code **)(*piVar4 + 0xb4))();
        iVar5 = (**(code **)(*piVar4 + 0x16c))();
        if (iVar5 != 0) {
          local_5 = '\0';
          cVar2 = FUN_103db9b0(4,&local_5);
          if ((cVar2 != '\0') && (local_5 != '\0')) {
            puVar6 = (uint *)(**(code **)(*piVar4 + 0xd4))(local_3c);
            local_24 = (float)(*puVar6 ^ DAT_113c1410);
            local_20 = (float)(puVar6[1] ^ DAT_113c1410);
          }
          fVar8 = local_20 * local_20 + local_24 * local_24;
          local_28 = DAT_113cc050;
          local_30 = DAT_113cc048;
          local_2c = DAT_113cc04c;
          if (DAT_112fce4c < fVar8) {
            auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
            fVar9 = auVar7._0_4_;
            fVar9 = (DAT_112fcaac - fVar9 * fVar8 * fVar9 * DAT_113c12b8) * fVar9;
            local_28 = fVar9 * DAT_113c1280;
            local_30 = local_24 * fVar9;
            local_2c = local_20 * fVar9;
          }
          local_30 = local_30 * (float)local_c;
          local_2c = local_2c * (float)local_c;
          local_28 = local_28 * (float)local_c;
          local_1c = local_10;
          local_24 = local_30;
          local_20 = local_2c;
          (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x24))(piVar4,&local_24,local_14,3);
          return 2;
        }
      }
    }
  }
  return 1;
}

