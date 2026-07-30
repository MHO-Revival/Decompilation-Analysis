
/* [RE-AUTO c0]
   strings:
     ""GoDown""
     ""SmallSize""
     ""Normal"" */

undefined4 __fastcall FUN_105c3ac0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined1 local_c [7];
  char local_5;
  
  local_10 = param_1;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar4 = *piVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(iVar4 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  iVar4 = (**(code **)(*piVar2 + 800))();
  if (iVar4 == 0) {
    return 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0xcc))();
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  piVar5 = (int *)(**(code **)(*piVar5 + 4))();
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  piVar5 = (int *)(**(code **)(*piVar5 + 0xc))(*(undefined4 *)(iVar4 + 4));
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_105c0740();
  FUN_10a5d660();
  cVar1 = FUN_103dbbb0(0,local_c);
  if (cVar1 == '\0') {
    (**(code **)(*piVar5 + 0x44))(&local_20,0xffffffff);
  }
  else {
    uVar3 = 0;
    cVar1 = FUN_10a5d8d0(&DAT_1130acf0);
    if (cVar1 == '\0') {
      cVar1 = FUN_10a5d8d0(&DAT_11309e90);
      if (cVar1 == '\0') {
        cVar1 = FUN_10a5d8d0(&DAT_1130ac4c);
        if (cVar1 == '\0') {
          cVar1 = FUN_10a5d8d0("GoDown");
          if (cVar1 == '\0') {
            cVar1 = FUN_10a5d8d0("SmallSize");
            if (cVar1 != '\0') {
              uVar3 = 5;
            }
            (**(code **)(*piVar5 + 0x40))(&local_20,uVar3,0xffffffff);
          }
          else {
            (**(code **)(*piVar5 + 0x40))(&local_20,4,0xffffffff);
          }
        }
        else {
          (**(code **)(*piVar5 + 0x40))(&local_20,2,0xffffffff);
        }
      }
      else {
        (**(code **)(*piVar5 + 0x40))(&local_20,3,0xffffffff);
      }
    }
    else {
      (**(code **)(*piVar5 + 0x40))(&local_20,1,0xffffffff);
    }
  }
  iVar4 = local_1c - local_20 >> 2;
  local_14 = iVar4;
  if (0 < iVar4) {
    FUN_10655dd0();
    iVar6 = FUN_112be700();
    if ((iVar6 < iVar4) && (iVar4 = *(int *)(local_20 + iVar6 * 4), iVar4 != 0)) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x364))();
      (**(code **)(*piVar2 + 0xa8))(iVar4);
      local_5 = '\0';
      FUN_103db9b0(9,&local_5);
      if (local_5 == '\0') {
        local_10 = *(int *)(iVar4 + 4);
      }
      else {
        local_10 = *(int *)(iVar4 + 0x14);
      }
      FUN_105572f0(1,&local_10);
      iVar6 = *(int *)(iVar4 + 0x5c);
      FUN_10a5d620(&DAT_113bf04c);
      FUN_10a5d620("Normal");
      FUN_10a5d620(&DAT_1130ac4c);
      FUN_10a5d620(&DAT_11309e90);
      FUN_10a5d620("GoDown");
      FUN_10a5d620("SmallSize");
      FUN_1055ace0(2,local_58 + iVar6 * 4);
      local_3c = *(undefined4 *)(iVar4 + 8);
      local_38 = *(undefined4 *)(iVar4 + 0xc);
      local_34 = *(undefined4 *)(iVar4 + 0x10);
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_10551270(3,&local_3c);
      local_3c = *(undefined4 *)(iVar4 + 0x18);
      local_38 = *(undefined4 *)(iVar4 + 0x1c);
      local_34 = *(undefined4 *)(iVar4 + 0x20);
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_10551270(4,&local_3c);
      local_3c = *(undefined4 *)(iVar4 + 0x40);
      local_38 = *(undefined4 *)(iVar4 + 0x44);
      local_34 = *(undefined4 *)(iVar4 + 0x48);
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_10551270(6,&local_3c);
      local_40 = *(undefined4 *)(iVar4 + 0x24);
      local_3c = *(undefined4 *)(iVar4 + 0x28);
      local_38 = *(undefined4 *)(iVar4 + 0x2c);
      local_34 = *(undefined4 *)(iVar4 + 0x30);
      local_30 = local_40;
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_105bff60(5,&local_30);
      if (local_5 == '\0') {
        local_3c = *(undefined4 *)(iVar4 + 0x34);
        local_38 = *(undefined4 *)(iVar4 + 0x38);
        local_34 = *(undefined4 *)(iVar4 + 0x3c);
      }
      else {
        local_3c = *(undefined4 *)(iVar4 + 0x40);
        local_38 = *(undefined4 *)(iVar4 + 0x44);
        local_34 = *(undefined4 *)(iVar4 + 0x48);
      }
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_10551270(7,&local_2c);
      local_3c = *(undefined4 *)(iVar4 + 0x50);
      local_38 = *(undefined4 *)(iVar4 + 0x54);
      local_34 = *(undefined4 *)(iVar4 + 0x58);
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_10551270(8,&local_2c);
      uVar3 = 2;
      goto LAB_105c3ee7;
    }
  }
  uVar3 = 1;
LAB_105c3ee7:
  if (local_20 != 0) {
    FUN_10653dc0(local_20);
  }
  return uVar3;
}

