// ===== class CCharmRebuildResultInfo  (2 recovered methods) =====

/* --- CCharmRebuildResultInfo::GetManagers @ 115bf0e0 --- */
// [RE-AUTO c3]
// id: CCharmRebuildResultInfo::GetManagers
// strings:
//   ""CCharmRebuildResultInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmRebuildResultInfo::GetManagers
   strings:
     ""CCharmRebuildResultInfo::GetManagers"" */

undefined * CCharmRebuildResultInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30ce0;
  if (param_3 == 0) {
    if ((DAT_122df64c & 1) == 0) {
      DAT_122df64c = DAT_122df64c | 1;
      FUN_102500e0("CCharmRebuildResultInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca43d0);
    }
    if ((undefined *)*DAT_122df630 != (undefined *)0x0) {
      return (undefined *)*DAT_122df630;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df86c & 1) == 0) {
      DAT_122df86c = DAT_122df86c | 1;
      FUN_115c05f0();
      FUN_11a8911f(&LAB_11ca3e90);
    }
    puVar1 = &DAT_122df834;
  }
  return puVar1;
}



/* --- CCharmRebuildResultInfo::GetManagers_115c40e0 @ 115c40e0 --- */
// [RE-AUTO c3]
// id: CCharmRebuildResultInfo::GetManagers
// strings:
//   ""CCharmRebuildResultInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmRebuildResultInfo::GetManagers
   strings:
     ""CCharmRebuildResultInfo::GetManagers"" */

undefined4 CCharmRebuildResultInfo__GetManagers_115c40e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df64c & 1) == 0) {
      DAT_122df64c = DAT_122df64c | 1;
      FUN_102500e0("CCharmRebuildResultInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca43d0);
    }
    return *DAT_122df630;
  }
  return 0;
}



