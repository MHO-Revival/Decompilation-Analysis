// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSetTargetPosOrientation vtbl[4] @105d3760 =====

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

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSetTargetPosOrientation vtbl[7] @10622510 =====

char * FUN_10622510(void)

{
  return "CSetTargetPosOrientation";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSetTargetPosOrientation vtbl[10] @10628440 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10628440(undefined4 param_1,int *param_2)

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

// ===== CSetTargetPosOrientation vtbl[13] @105d3af0 =====

void FUN_105d3af0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
