// ===== class CMHWinLevelConditionInfo  (2 recovered methods) =====

/* --- CMHWinLevelConditionInfo::GetManagers @ 11735360 --- */
// [RE-AUTO c3]
// id: CMHWinLevelConditionInfo::GetManagers
// strings:
//   ""CMHWinLevelConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHWinLevelConditionInfo::GetManagers
   strings:
     ""CMHWinLevelConditionInfo::GetManagers"" */

undefined * CMHWinLevelConditionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d449d0;
  if (param_3 == 0) {
    if ((DAT_123901c0 & 1) == 0) {
      DAT_123901c0 = DAT_123901c0 | 1;
      FUN_102500e0("CMHWinLevelConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9430);
    }
    if ((undefined *)*DAT_123901a4 != (undefined *)0x0) {
      return (undefined *)*DAT_123901a4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123906c0 & 1) == 0) {
      DAT_123906c0 = DAT_123906c0 | 1;
      FUN_11736600();
      FUN_11a8911f(&LAB_11ca9370);
    }
    puVar1 = &DAT_1239068c;
  }
  return puVar1;
}



/* --- CMHWinLevelConditionInfo::GetManagers_117382f0 @ 117382f0 --- */
// [RE-AUTO c3]
// id: CMHWinLevelConditionInfo::GetManagers
// strings:
//   ""CMHWinLevelConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHWinLevelConditionInfo::GetManagers
   strings:
     ""CMHWinLevelConditionInfo::GetManagers"" */

undefined4 CMHWinLevelConditionInfo__GetManagers_117382f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123901c0 & 1) == 0) {
      DAT_123901c0 = DAT_123901c0 | 1;
      FUN_102500e0("CMHWinLevelConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9430);
    }
    return *DAT_123901a4;
  }
  return 0;
}



