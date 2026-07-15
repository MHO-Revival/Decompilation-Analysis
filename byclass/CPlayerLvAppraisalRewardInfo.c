// ===== class CPlayerLvAppraisalRewardInfo  (2 recovered methods) =====

/* --- CPlayerLvAppraisalRewardInfo::GetManagers @ 11984c10 --- */
// [RE-AUTO c3]
// id: CPlayerLvAppraisalRewardInfo::GetManagers
// strings:
//   ""CPlayerLvAppraisalRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLvAppraisalRewardInfo::GetManagers
   strings:
     ""CPlayerLvAppraisalRewardInfo::GetManagers"" */

undefined *
CPlayerLvAppraisalRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d652e8;
  if (param_3 == 0) {
    if ((DAT_123a17b8 & 1) == 0) {
      DAT_123a17b8 = DAT_123a17b8 | 1;
      FUN_102500e0("CPlayerLvAppraisalRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb38d0);
    }
    if ((undefined *)*DAT_123a179c != (undefined *)0x0) {
      return (undefined *)*DAT_123a179c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a18b4 & 1) == 0) {
      DAT_123a18b4 = DAT_123a18b4 | 1;
      FUN_11985730();
      FUN_11a8911f(&LAB_11cb3870);
    }
    puVar1 = &DAT_123a187c;
  }
  return puVar1;
}



/* --- CPlayerLvAppraisalRewardInfo::GetManagers_11986ae0 @ 11986ae0 --- */
// [RE-AUTO c3]
// id: CPlayerLvAppraisalRewardInfo::GetManagers
// strings:
//   ""CPlayerLvAppraisalRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLvAppraisalRewardInfo::GetManagers
   strings:
     ""CPlayerLvAppraisalRewardInfo::GetManagers"" */

undefined4 CPlayerLvAppraisalRewardInfo__GetManagers_11986ae0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a17b8 & 1) == 0) {
      DAT_123a17b8 = DAT_123a17b8 | 1;
      FUN_102500e0("CPlayerLvAppraisalRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb38d0);
    }
    return *DAT_123a179c;
  }
  return 0;
}



