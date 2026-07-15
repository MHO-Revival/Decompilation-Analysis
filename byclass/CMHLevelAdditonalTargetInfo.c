// ===== class CMHLevelAdditonalTargetInfo  (2 recovered methods) =====

/* --- CMHLevelAdditonalTargetInfo::GetManagers @ 11735220 --- */
// [RE-AUTO c3]
// id: CMHLevelAdditonalTargetInfo::GetManagers
// strings:
//   ""CMHLevelAdditonalTargetInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHLevelAdditonalTargetInfo::GetManagers
   strings:
     ""CMHLevelAdditonalTargetInfo::GetManagers"" */

undefined *
CMHLevelAdditonalTargetInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d44b60;
  if (param_3 == 0) {
    if ((DAT_12390200 & 1) == 0) {
      DAT_12390200 = DAT_12390200 | 1;
      FUN_102500e0("CMHLevelAdditonalTargetInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca93d0);
    }
    if ((undefined *)*DAT_123901e4 != (undefined *)0x0) {
      return (undefined *)*DAT_123901e4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12390730 & 1) == 0) {
      DAT_12390730 = DAT_12390730 | 1;
      FUN_11736540();
      FUN_11a8911f(&LAB_11ca92b0);
    }
    puVar1 = &DAT_123906fc;
  }
  return puVar1;
}



/* --- CMHLevelAdditonalTargetInfo::GetManagers_11738250 @ 11738250 --- */
// [RE-AUTO c3]
// id: CMHLevelAdditonalTargetInfo::GetManagers
// strings:
//   ""CMHLevelAdditonalTargetInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMHLevelAdditonalTargetInfo::GetManagers
   strings:
     ""CMHLevelAdditonalTargetInfo::GetManagers"" */

undefined4 CMHLevelAdditonalTargetInfo__GetManagers_11738250(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12390200 & 1) == 0) {
      DAT_12390200 = DAT_12390200 | 1;
      FUN_102500e0("CMHLevelAdditonalTargetInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca93d0);
    }
    return *DAT_123901e4;
  }
  return 0;
}



