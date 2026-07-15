// ===== class CProjectileVehicleWeaponInfo  (3 recovered methods) =====

/* --- CProjectileVehicleWeaponInfo::GetManagers @ 11289f10 --- */
// [RE-AUTO c3]
// id: CProjectileVehicleWeaponInfo::GetManagers
// strings:
//   ""CProjectileVehicleWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileVehicleWeaponInfo::GetManagers
   strings:
     ""CProjectileVehicleWeaponInfo::GetManagers"" */

undefined *
CProjectileVehicleWeaponInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1c588;
  if (param_3 == 0) {
    if ((DAT_12040708 & 1) == 0) {
      DAT_12040708 = DAT_12040708 | 1;
      FUN_102500e0("CProjectileVehicleWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99370);
    }
    if ((undefined *)*DAT_120406ec != (undefined *)0x0) {
      return (undefined *)*DAT_120406ec;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1204074c & 1) == 0) {
      DAT_1204074c = DAT_1204074c | 1;
      FUN_1128a1a0();
      FUN_11a8911f(&LAB_11c99310);
    }
    puVar1 = &DAT_12040714;
  }
  return puVar1;
}



/* --- CProjectileVehicleWeaponInfo::GetManagers_1128a940 @ 1128a940 --- */
// [RE-AUTO c3]
// id: CProjectileVehicleWeaponInfo::GetManagers
// strings:
//   ""CProjectileVehicleWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileVehicleWeaponInfo::GetManagers
   strings:
     ""CProjectileVehicleWeaponInfo::GetManagers"" */

undefined4 CProjectileVehicleWeaponInfo__GetManagers_1128a940(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040708 & 1) == 0) {
      DAT_12040708 = DAT_12040708 | 1;
      FUN_102500e0("CProjectileVehicleWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99370);
    }
    return *DAT_120406ec;
  }
  return 0;
}



/* --- CProjectileVehicleWeaponInfo::GetManagers_1128ae70 @ 1128ae70 --- */
// [RE-AUTO c3]
// id: CProjectileVehicleWeaponInfo::GetManagers
// strings:
//   ""Abrams_Cannon""
//   ""CProjectileVehicleWeaponInfo::GetManagers""
//   ""CProjectileVehicleWeaponInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CProjectileVehicleWeaponInfo::GetManagers
   strings:
     ""Abrams_Cannon""
     ""CProjectileVehicleWeaponInfo::GetManagers""
     ""CProjectileVehicleWeaponInfo"" */

void __thiscall CProjectileVehicleWeaponInfo__GetManagers_1128ae70(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined **local_1c;
  int local_18 [5];
  
  local_18[4] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_115430c0(param_2);
  pcVar1 = (char *)(param_2 + 0xea);
  param_1[0x36] = *(int *)(param_2 + 0xe2);
  param_1[0x37] = *(int *)(param_2 + 0xe6);
  param_1[0x38] = (int)*(short *)(param_2 + 0x12a);
  pcVar7 = pcVar1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_100d83d0(pcVar1,pcVar1 + ((int)pcVar7 - (param_2 + 0xeb)));
  uVar3 = FUN_1143de90(*(undefined4 *)(param_2 + 0x7e));
  piVar4 = (int *)(**(code **)(**(int **)(param_1[3] + 0x90) + 0x7c))
                            (*(undefined4 *)(param_2 + 0x82));
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0xa8))(), iVar5 == 0)) {
    cVar2 = (**(code **)(*piVar4 + 0x98))();
    if (cVar2 != '\0') {
      piVar4[0xb4f] = param_1[1];
      local_18[0] = param_1[1];
      local_18[1] = 0;
      local_18[2] = 1;
      local_18[3] = 0;
      FUN_111c40f0(local_18);
    }
    cVar2 = (**(code **)(*piVar4 + 0x98))();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1d0))(piVar4[1]);
      (**(code **)(*param_1 + 0x1f0))(piVar4);
    }
    else {
      FUN_1156f2d0(param_1);
    }
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0xd8))();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xa8))(uVar3);
  }
  iVar5 = FUN_1143d9c0();
  if ((iVar5 != 0) && (iVar5 = FUN_11708970("Abrams_Cannon"), iVar5 != 0)) {
    iVar8 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20);
    uVar9 = 0;
    iVar6 = iVar8 >> 0x1f;
    if (iVar8 / 0xc + iVar6 != iVar6) {
      do {
        local_1c = &PTR_FUN_11d1c588;
        if ((DAT_12040708 & 1) == 0) {
          DAT_12040708 = DAT_12040708 | 1;
          FUN_102500e0("CProjectileVehicleWeaponInfo::GetManagers");
          FUN_11a8911f(&LAB_11c99370);
        }
        if (((*DAT_120406ec == 0) &&
            (iVar6 = FUN_11679e10(&local_1c,"CProjectileVehicleWeaponInfo",0), iVar6 == 0)) &&
           ((DAT_1204074c & 1) == 0)) {
          DAT_1204074c = DAT_1204074c | 1;
          FUN_1128a1a0();
          FUN_11a8911f(&LAB_11c99310);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20)) / 0xc));
    }
    if (*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x2c) >> 3 != 0) {
      uVar9 = 0;
      do {
        local_1c = &PTR_FUN_11d1c588;
        if ((DAT_12040708 & 1) == 0) {
          DAT_12040708 = DAT_12040708 | 1;
          FUN_102500e0("CProjectileVehicleWeaponInfo::GetManagers");
          FUN_11a8911f(&LAB_11c99370);
        }
        if (((*DAT_120406ec == 0) &&
            (iVar6 = FUN_11679e10(&local_1c,"CProjectileVehicleWeaponInfo",0), iVar6 == 0)) &&
           ((DAT_1204074c & 1) == 0)) {
          DAT_12040718 = 0;
          DAT_12040728 = 0;
          uRam1204072c = 0;
          _DAT_12040730 = 0;
          uRam12040734 = 0;
          DAT_1204074c = DAT_1204074c | 1;
          DAT_1204071c = 0;
          _DAT_12040720 = 0;
          _DAT_12040724 = 0;
          _DAT_12040714 = &PTR_FUN_11d1c5dc;
          _DAT_12040738 = _DAT_11de9ae0;
          uRam1204073c = _UNK_11de9ae4;
          uRam12040740 = _UNK_11de9ae8;
          uRam12040744 = _UNK_11de9aec;
          DAT_12040748 = 1;
          FUN_11a8911f(&LAB_11c99310);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x2c) >> 3));
    }
  }
  FUN_11a89daa();
  return;
}



