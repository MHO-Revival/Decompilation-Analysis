// ===== class CBattlePunishLevelModeFilterInfo  (3 recovered methods) =====

/* --- CBattlePunishLevelModeFilterInfo::GetManagers @ 11a72f90 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelModeFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelModeFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBattlePunishLevelModeFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelModeFilterInfo::GetManagers"" */

undefined *
CBattlePunishLevelModeFilterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d72e38;
  if (param_3 == 0) {
    if ((DAT_123a24c8 & 1) == 0) {
      DAT_123a24c8 = DAT_123a24c8 | 1;
      FUN_102500e0("CBattlePunishLevelModeFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4080);
    }
    if ((undefined *)*DAT_123a24ac != (undefined *)0x0) {
      return (undefined *)*DAT_123a24ac;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123ace84 & 1) == 0) {
      DAT_123ace84 = DAT_123ace84 | 1;
      FUN_11a73090();
      FUN_11a8911f(&LAB_11cb77f0);
    }
    puVar1 = &DAT_123ace4c;
  }
  return puVar1;
}



/* --- CBattlePunishLevelModeFilterInfo::GetManagers_11a73390 @ 11a73390 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelModeFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelModeFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBattlePunishLevelModeFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelModeFilterInfo::GetManagers"" */

undefined4 CBattlePunishLevelModeFilterInfo__GetManagers_11a73390(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a24c8 & 1) == 0) {
      DAT_123a24c8 = DAT_123a24c8 | 1;
      FUN_102500e0("CBattlePunishLevelModeFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4080);
    }
    return *DAT_123a24ac;
  }
  return 0;
}



/* --- CBattlePunishLevelModeFilterInfo::GetManagers_11a73580 @ 11a73580 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelModeFilterInfo::GetManagers
// calls: CBattlePunishLevelModeFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelModeFilterInfo""
//   ""CBattlePunishLevelModeFilterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBattlePunishLevelModeFilterInfo::GetManagers
   calls: CBattlePunishLevelModeFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelModeFilterInfo""
     ""CBattlePunishLevelModeFilterInfo::GetManagers"" */

uint CBattlePunishLevelModeFilterInfo__GetManagers_11a73580(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined3 uVar5;
  int iVar6;
  undefined **local_8;
  
  piVar1 = (int *)CBattlePunishLevelModeFilterInfo__GetManagers
                            (0,"CBattlePunishLevelModeFilterInfo",0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  puVar4 = puVar2;
  if (0 < (int)puVar2) {
    do {
      local_8 = &PTR_FUN_11d72e38;
      if ((DAT_123a24c8 & 1) == 0) {
        DAT_123a24c8 = DAT_123a24c8 | 1;
        FUN_102500e0("CBattlePunishLevelModeFilterInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4080);
      }
      puVar3 = (undefined4 *)*DAT_123a24ac;
      puVar4 = DAT_123a24ac;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CBattlePunishLevelModeFilterInfo",0),
         puVar4 = puVar3, puVar3 == (undefined4 *)0x0)) {
        puVar4 = DAT_123ace84;
        if (((uint)DAT_123ace84 & 1) == 0) {
          DAT_123ace50 = 0;
          DAT_123ace60 = 0;
          DAT_123ace64 = 0;
          _DAT_123ace68 = 0;
          uRam123ace6c = 0;
          DAT_123ace84 = (undefined4 *)((uint)DAT_123ace84 | 1);
          _DAT_123ace4c = &PTR_FUN_11d672c8;
          _DAT_123ace70 = _DAT_11de9ae0;
          uRam123ace74 = _UNK_11de9ae4;
          uRam123ace78 = _UNK_11de9ae8;
          uRam123ace7c = _UNK_11de9aec;
          DAT_123ace80 = 1;
          DAT_123ace54 = puVar3;
          _DAT_123ace58 = puVar3;
          _DAT_123ace5c = puVar3;
          puVar4 = (undefined4 *)FUN_11a8911f(&LAB_11cb77f0);
        }
        puVar3 = (undefined4 *)&DAT_123ace4c;
      }
      if ((((-1 < iVar6) &&
           (puVar4 = (undefined4 *)((int)(puVar3[6] - puVar3[5]) >> 2), iVar6 < (int)puVar4)) &&
          (puVar4 = *(undefined4 **)(puVar3[5] + iVar6 * 4), puVar4 != (undefined4 *)0x0)) &&
         (puVar4[5] == param_1)) {
        uVar5 = (undefined3)((uint)puVar4 >> 8);
        if (param_2 != '\0') {
          return CONCAT31(uVar5,puVar4[6] == 0);
        }
        return CONCAT31(uVar5,1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)puVar2);
  }
  return (uint)puVar4 & 0xffffff00;
}



