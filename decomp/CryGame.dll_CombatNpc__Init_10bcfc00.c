
/* [RE-R1]
   strings:
     ""CombatNpc""
     ""OwnerPlayerID""
     ""SelfFSMState""
     ""NpcName""
     ""NpcWeaponType"" */

undefined1 __thiscall CombatNpc__Init(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_1f4 [4];
  undefined4 local_1f0;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [40];
  undefined4 local_40;
  undefined1 local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_1;
  cVar1 = FUN_10bf2840(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))();
  param_1[0x16] = iVar2;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x20))(param_1[0x16]);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar3 + 0xec))("CombatNpc",2);
  param_1[0x17] = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = CCombatNPCInfo__GetRecordForThisNpc();
  FUN_10b713f0(uVar4);
  FUN_10bd0110(local_2c,0x401,FUN_10bcffb0,0,param_1,0xffffffff,1);
  FUN_10bd0110(local_2c,0x6a9,FUN_10bd0030,0,param_1,0xffffffff,1);
  local_20 = 0xffffffff;
  iVar2 = 0;
  local_1c = 0xffffffff;
  piVar3 = *(int **)(DAT_1202e818 + 0xd0);
  uVar4 = (**(code **)(*param_1 + 0x18))();
  (**(code **)(*piVar3 + 0xe0))(uVar4);
  iVar5 = FUN_104753a0();
  if ((iVar5 != 0) && (iVar2 = iVar5 + 0x60, iVar2 != 0)) {
    uVar4 = FUN_113168d0("OwnerPlayerID",&local_20);
    FUN_1046dc90(uVar4);
    uVar4 = FUN_113168d0("SelfFSMState",&local_1c);
    FUN_1046dc90(uVar4);
  }
  if ((*(char *)(DAT_1202e818 + 0x209) != '\0') ||
     (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))(), cVar1 != '\0')) {
    if (iVar2 == 0) goto LAB_10bcfee6;
    if ((int *)param_2[0xb81] != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*(int *)param_2[0xb81] + 0xd8))();
      local_c = (**(code **)(*piVar3 + 0x18))();
      FUN_1025bc30(local_20,&local_c);
    }
  }
  if (iVar2 != 0) {
    local_8 = (**(code **)(*param_1 + 0x130))();
    FUN_1025bec0(local_1c,&local_8);
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    local_8 = (**(code **)(*piVar3 + 0xc))(param_1[0x16]);
    if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x348);
    }
    piVar6 = param_2 + 0xb83;
    local_8 = 0;
    for (piVar3 = (int *)*piVar6; piVar3 != piVar6; piVar3 = (int *)*piVar3) {
      if (piVar3[7] != piVar3[6]) {
        FUN_1046e140(piVar3[7],piVar3[0xd],0);
      }
      param_1 = local_10;
    }
    local_c = 0xffffffff;
    uVar4 = FUN_113168d0("NpcName",&local_c);
    cVar1 = FUN_1046dc90(uVar4);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)(**(code **)(*param_2 + 0xb8))();
      puVar8 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)*puVar7;
      }
      uVar4 = FUN_113168d0(puVar8);
      FUN_1025bc60(local_c,uVar4);
    }
    local_18[0] = 0xffffffff;
    uVar4 = FUN_113168d0("NpcWeaponType",local_18);
    cVar1 = FUN_1046dc90(uVar4);
    if (cVar1 != '\0') {
      param_2 = (int *)0x0;
      FUN_1025bfc0(local_18[0],&param_2);
      if (param_2 == (int *)0x0) {
        local_10 = *(int **)(local_8 + 0x15b4);
        FUN_1025bd00(local_18[0],&local_10);
      }
    }
  }
LAB_10bcfee6:
  if ((*(char *)(DAT_1202e818 + 0x209) != '\0') ||
     (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))(), cVar1 != '\0')) {
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x14] + 0x68))();
    (**(code **)(*piVar3 + 4))();
  }
  local_74 = 0x8a8;
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_30 = 0;
  piVar3 = (int *)(**(code **)(param_1[1] + 4))();
  local_40 = (**(code **)(*piVar3 + 4))();
  FUN_10bb4150();
  piVar3 = (int *)(**(code **)(param_1[1] + 4))();
  local_1f0 = (**(code **)(*piVar3 + 4))();
  FUN_10bd00a0(local_1f4,local_68);
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_74);
  return 1;
}

