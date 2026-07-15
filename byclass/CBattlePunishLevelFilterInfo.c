// ===== class CBattlePunishLevelFilterInfo  (3 recovered methods) =====

/* --- CBattlePunishLevelFilterInfo::GetManagers @ 11a72ef0 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBattlePunishLevelFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelFilterInfo::GetManagers"" */

undefined *
CBattlePunishLevelFilterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d72e00;
  if (param_3 == 0) {
    if ((DAT_123a24a8 & 1) == 0) {
      DAT_123a24a8 = DAT_123a24a8 | 1;
      FUN_102500e0("CBattlePunishLevelFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4050);
    }
    if ((undefined *)*DAT_123a248c != (undefined *)0x0) {
      return (undefined *)*DAT_123a248c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123ace48 & 1) == 0) {
      DAT_123ace48 = DAT_123ace48 | 1;
      FUN_11a73030();
      FUN_11a8911f(&LAB_11cb7790);
    }
    puVar1 = &DAT_123ace10;
  }
  return puVar1;
}



/* --- CBattlePunishLevelFilterInfo::GetManagers_11a73340 @ 11a73340 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBattlePunishLevelFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelFilterInfo::GetManagers"" */

undefined4 CBattlePunishLevelFilterInfo__GetManagers_11a73340(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a24a8 & 1) == 0) {
      DAT_123a24a8 = DAT_123a24a8 | 1;
      FUN_102500e0("CBattlePunishLevelFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4050);
    }
    return *DAT_123a248c;
  }
  return 0;
}



/* --- CBattlePunishLevelFilterInfo::GetManagers_11a73430 @ 11a73430 --- */
// [RE-AUTO c3]
// id: CBattlePunishLevelFilterInfo::GetManagers
// calls: CBattlePunishLevelFilterInfo::GetManagers
// strings:
//   ""CBattlePunishLevelFilterInfo""
//   ""CBattlePunishLevelFilterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBattlePunishLevelFilterInfo::GetManagers
   calls: CBattlePunishLevelFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelFilterInfo""
     ""CBattlePunishLevelFilterInfo::GetManagers"" */

uint CBattlePunishLevelFilterInfo__GetManagers_11a73430(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined3 uVar5;
  int iVar6;
  undefined **local_8;
  
  piVar1 = (int *)CBattlePunishLevelFilterInfo__GetManagers(0,"CBattlePunishLevelFilterInfo",0);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  puVar4 = puVar2;
  if (0 < (int)puVar2) {
    do {
      local_8 = &PTR_FUN_11d72e00;
      if ((DAT_123a24a8 & 1) == 0) {
        DAT_123a24a8 = DAT_123a24a8 | 1;
        FUN_102500e0("CBattlePunishLevelFilterInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4050);
      }
      puVar3 = (undefined4 *)*DAT_123a248c;
      puVar4 = DAT_123a248c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CBattlePunishLevelFilterInfo",0),
         puVar4 = puVar3, puVar3 == (undefined4 *)0x0)) {
        puVar4 = DAT_123ace48;
        if (((uint)DAT_123ace48 & 1) == 0) {
          DAT_123ace14 = 0;
          DAT_123ace24 = 0;
          DAT_123ace28 = 0;
          _DAT_123ace2c = 0;
          uRam123ace30 = 0;
          DAT_123ace48 = (undefined4 *)((uint)DAT_123ace48 | 1);
          _DAT_123ace10 = &PTR_FUN_11d67228;
          _DAT_123ace34 = _DAT_11de9ae0;
          uRam123ace38 = _UNK_11de9ae4;
          uRam123ace3c = _UNK_11de9ae8;
          uRam123ace40 = _UNK_11de9aec;
          DAT_123ace44 = 1;
          DAT_123ace18 = puVar3;
          _DAT_123ace1c = puVar3;
          _DAT_123ace20 = puVar3;
          puVar4 = (undefined4 *)FUN_11a8911f(&LAB_11cb7790);
        }
        puVar3 = (undefined4 *)&DAT_123ace10;
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



