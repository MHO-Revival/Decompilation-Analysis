// FUN_10c20c60 @ 10c20c60  (996 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 4, 5, 7, 12, 16, 19, 20, 23, 24, 27, 28]


/* [RE-AUTO c0]
   calls: CBuffInfo::GetManagers_10c09270 */

void FUN_10c20c60(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  float local_58;
  undefined4 local_38;
  char local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_c;
  char local_6;
  char local_5;
  
  if (*(int *)(param_3 + 0x3c) < 4) {
    CBuffInfo__AddBuffEffectsForHit(param_1,param_3,param_4,param_5);
  }
  FUN_10ba9b00(*param_1);
  piVar5 = (int *)FUN_10c007c0();
  FUN_10ba9b00(param_1[1]);
  piVar6 = (int *)FUN_10c007c0();
  if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0xf4))(), cVar4 != '\0')) {
    return;
  }
  if (piVar5 == (int *)0x0) {
    param_4._3_1_ = '\0';
  }
  else {
    param_4._3_1_ = (**(code **)(*piVar5 + 0x1c4))();
  }
  if (piVar6 == (int *)0x0) {
    param_5._3_1_ = '\0';
  }
  else {
    param_5._3_1_ = (**(code **)(*piVar6 + 0x1c4))();
  }
  if (param_4._3_1_ == '\0') {
LAB_10c20d18:
    local_6 = '\0';
  }
  else {
    cVar4 = (**(code **)(*piVar5 + 0x228))();
    local_6 = '\x01';
    if (cVar4 == '\0') goto LAB_10c20d18;
  }
  if (param_5._3_1_ == '\0') {
LAB_10c20d36:
    local_5 = '\0';
  }
  else {
    cVar4 = (**(code **)(*piVar6 + 0x228))();
    local_5 = '\x01';
    if (cVar4 == '\0') goto LAB_10c20d36;
  }
  piVar7 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
  local_c = (int *)(**(code **)(*piVar7 + 0x2c))(param_1[3]);
  bVar2 = false;
  bVar3 = false;
  if (local_c != (int *)0x0) {
    iVar8 = (**(code **)(*local_c + 0x288))();
    if (iVar8 != 0) {
      piVar7 = (int *)(**(code **)(*local_c + 0x288))();
      iVar8 = (**(code **)(*piVar7 + 0xa8))();
      if (((iVar8 == 0xc) || (iVar8 == 7)) || (iVar8 == 5)) {
        bVar2 = true;
        bVar3 = true;
        goto LAB_10c20d9e;
      }
    }
    bVar2 = false;
  }
LAB_10c20d9e:
  if (piVar6 == (int *)0x0) {
    (**(code **)(*(int *)DAT_1202e818[0x14] + 0x2c))(param_1[1]);
    piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(param_1[1]);
    if (piVar5 != (int *)0x0) {
      local_24 = 0x126;
      local_20 = 0x4ffff;
      local_1c = 0;
      local_18 = param_1;
      local_14 = param_3;
      (**(code **)(*piVar5 + 0x24))(&local_24);
    }
  }
  else {
    if (((local_6 != '\0') && (param_5._3_1_ != '\0')) && ((!bVar2 && (piVar5 != piVar6)))) {
      FUN_10bab970(param_1,param_3);
    }
    if ((local_5 != '\0') && (((param_4._3_1_ == '\0' || (piVar6 == piVar5)) || (bVar3)))) {
      iVar8 = (**(code **)(*piVar6 + 800))();
      piVar7 = *(int **)(iVar8 + 0x10);
      iVar8 = (**(code **)(*piVar7 + 100))();
      if (iVar8 != 0) {
        (**(code **)(*piVar7 + 100))(param_3);
        FUN_10fd2f7c();
      }
      piVar7 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar7 + 0x5c))(param_3);
      (**(code **)(*piVar6 + 700))(param_3);
    }
    if ((*(char *)((int)DAT_1202e818 + 0x209) == '\0') &&
       (cVar4 = (**(code **)(*piVar6 + 0x6e4))(), cVar4 == '\0')) {
      return;
    }
    cVar4 = (**(code **)(*piVar6 + 0x1c4))();
    if (cVar4 == '\0') {
      piVar5 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar5 + 0x5c))(param_3);
      FUN_10c38b70(param_1,param_3);
      local_38 = *param_1;
      local_6c = 0x8a7;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
      local_28 = 0;
      FUN_10bd00a0(param_1,local_60);
      iVar8 = FUN_10a12600();
      local_58 = (float)iVar8;
      (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x98) + 0x14))(&local_6c);
      return;
    }
    if (local_5 == '\0') {
      iVar8 = (**(code **)(*piVar6 + 800))();
      piVar7 = *(int **)(iVar8 + 0x10);
      iVar8 = (**(code **)(*piVar7 + 100))();
      if (iVar8 != 0) {
        (**(code **)(*piVar7 + 100))(param_3);
        FUN_10fd2f7c();
      }
      piVar7 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar7 + 0x5c))(param_3);
      (**(code **)(*piVar6 + 700))(param_3);
    }
    if ((piVar5 != (int *)0x0) && (local_28 = (**(code **)(*piVar5 + 0x1c4))(), local_28 == '\0')) {
      local_6c = 0x8a6;
      local_68 = 0xffffffff;
      local_38 = *param_1;
      local_64 = 0xffffffff;
      FUN_10bd00a0(param_1,local_60);
      iVar8 = FUN_10a12600();
      local_58 = (float)iVar8;
      (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x98) + 0x14))(&local_6c);
      uVar1 = param_1[1];
      local_18 = (undefined4 *)(**(code **)(*piVar5 + 800))();
      local_24 = 0x70e;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      local_14 = uVar1;
      iVar8 = (**(code **)(*piVar5 + 800))();
      (**(code **)(**(int **)(iVar8 + 0x1c) + 0x14))(&local_24);
      return;
    }
  }
  return;
}

