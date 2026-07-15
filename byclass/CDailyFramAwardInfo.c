// ===== class CDailyFramAwardInfo  (3 recovered methods) =====

/* --- CDailyFramAwardInfo::GetManagers @ 11515590 --- */
// [RE-AUTO c3]
// id: CDailyFramAwardInfo::GetManagers
// strings:
//   ""CDailyFramAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDailyFramAwardInfo::GetManagers
   strings:
     ""CDailyFramAwardInfo::GetManagers"" */

undefined * CDailyFramAwardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2be24;
  if (param_3 == 0) {
    if ((DAT_122de918 & 1) == 0) {
      DAT_122de918 = DAT_122de918 | 1;
      FUN_102500e0("CDailyFramAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0560);
    }
    if ((undefined *)*DAT_122de8fc != (undefined *)0x0) {
      return (undefined *)*DAT_122de8fc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de960 & 1) == 0) {
      DAT_122de960 = DAT_122de960 | 1;
      FUN_11515e10();
      FUN_11a8911f(&LAB_11ca03e0);
    }
    puVar1 = &DAT_122de928;
  }
  return puVar1;
}



/* --- CDailyFramAwardInfo::GetManagers_11516e30 @ 11516e30 --- */
// [RE-AUTO c3]
// id: CDailyFramAwardInfo::GetManagers
// calls: CItemBoxGroupInfo::GetManagers_11516390
// strings:
//   ""CDailyFramAwardInfo::GetManagers""
//   ""CDailyFramAwardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDailyFramAwardInfo::GetManagers
   calls: CItemBoxGroupInfo::GetManagers_11516390
   strings:
     ""CDailyFramAwardInfo::GetManagers""
     ""CDailyFramAwardInfo"" */

void __thiscall CDailyFramAwardInfo__GetManagers_11516e30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar5 = 0x28;
  iVar6 = 0;
  local_c = param_1;
  do {
    local_10 = (**(code **)(**(int **)(local_c + 0x28) + 0x2b8))();
    local_10 = local_10 + iVar5;
    local_8 = &PTR_FUN_11d2be24;
    if ((DAT_122de918 & 1) == 0) {
      DAT_122de918 = DAT_122de918 | 1;
      FUN_102500e0("CDailyFramAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0560);
    }
    puVar3 = (undefined *)*DAT_122de8fc;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_8,"CDailyFramAwardInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_122de960 & 1) == 0) {
        DAT_122de92c = 0;
        DAT_122de93c = 0;
        uRam122de940 = 0;
        _DAT_122de944 = 0;
        DAT_122de948 = 0;
        DAT_122de960 = DAT_122de960 | 1;
        _DAT_122de928 = &PTR_FUN_11d2be64;
        DAT_122de94c = _DAT_11de9ae0;
        DAT_122de950 = _UNK_11de9ae4;
        uRam122de954 = _UNK_11de9ae8;
        DAT_122de958 = _UNK_11de9aec;
        DAT_122de95c = 1;
        DAT_122de930 = puVar3;
        _DAT_122de934 = puVar3;
        _DAT_122de938 = puVar3;
        FUN_11a8911f(&LAB_11ca03e0);
      }
      puVar3 = &DAT_122de928;
    }
    iVar1 = iVar6 + 1;
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar1 != -1) &&
        (((iVar1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
       ((iVar6 = (iVar6 - *(int *)(puVar3 + 0x30)) + 1, -1 < iVar6 &&
        (iVar6 < *(int *)(puVar3 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar6 / *(int *)(puVar3 + 0x28)) * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar6 % *(int *)(puVar3 + 0x28)) * 4) != 0)) {
        uVar4 = FUN_1025b060();
        FUN_117fd990(uVar4,*(undefined2 *)(local_10 + 4),&local_1c);
      }
    }
    iVar5 = iVar5 + 0x14;
    iVar6 = iVar1;
  } while (iVar5 < 0xa0);
  uVar7 = 0;
  if (local_18 - local_1c >> 2 != 0) {
    do {
      CItemBoxGroupInfo__GetManagers_11516390(*(undefined4 *)(local_1c + uVar7 * 4),param_2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(local_18 - local_1c >> 2));
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  return;
}



/* --- CDailyFramAwardInfo::GetManagers_11517750 @ 11517750 --- */
// [RE-AUTO c3]
// id: CDailyFramAwardInfo::GetManagers
// strings:
//   ""CDailyFramAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDailyFramAwardInfo::GetManagers
   strings:
     ""CDailyFramAwardInfo::GetManagers"" */

undefined4 CDailyFramAwardInfo__GetManagers_11517750(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de918 & 1) == 0) {
      DAT_122de918 = DAT_122de918 | 1;
      FUN_102500e0("CDailyFramAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0560);
    }
    return *DAT_122de8fc;
  }
  return 0;
}



