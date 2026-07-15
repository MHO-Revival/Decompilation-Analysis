// ===== class CMHLoseLevelConditionInfo  (2 recovered methods) =====

/* --- CMHLoseLevelConditionInfo::GetManagers @ 117352c0 --- */
// [RE-AUTO c3]
// id: CMHLoseLevelConditionInfo::GetManagers
// strings:
//   ""CMHLoseLevelConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHLoseLevelConditionInfo::GetManagers
   strings:
     ""CMHLoseLevelConditionInfo::GetManagers"" */

undefined *
CMHLoseLevelConditionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d44a98;
  if (param_3 == 0) {
    if ((DAT_123901e0 & 1) == 0) {
      DAT_123901e0 = DAT_123901e0 | 1;
      FUN_102500e0("CMHLoseLevelConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9400);
    }
    if ((undefined *)*DAT_123901c4 != (undefined *)0x0) {
      return (undefined *)*DAT_123901c4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123906f8 & 1) == 0) {
      DAT_123906f8 = DAT_123906f8 | 1;
      FUN_117365a0();
      FUN_11a8911f(&LAB_11ca9310);
    }
    puVar1 = &DAT_123906c4;
  }
  return puVar1;
}



/* --- CMHLoseLevelConditionInfo::GetManagers_117382a0 @ 117382a0 --- */
// [RE-AUTO c3]
// id: CMHLoseLevelConditionInfo::GetManagers
// strings:
//   ""CMHLoseLevelConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHLoseLevelConditionInfo::GetManagers
   strings:
     ""CMHLoseLevelConditionInfo::GetManagers"" */

undefined4 CMHLoseLevelConditionInfo__GetManagers_117382a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123901e0 & 1) == 0) {
      DAT_123901e0 = DAT_123901e0 | 1;
      FUN_102500e0("CMHLoseLevelConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9400);
    }
    return *DAT_123901c4;
  }
  return 0;
}



