// ===== class CLevelAppraiseRewardBoxInfo  (1 recovered methods) =====

/* --- CLevelAppraiseRewardBoxInfo::GetManagers @ 1095c1a0 --- */
// [RE-AUTO c3]
// id: CLevelAppraiseRewardBoxInfo::GetManagers
// strings:
//   ""CLevelAppraiseRewardBoxInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelAppraiseRewardBoxInfo::GetManagers
   strings:
     ""CLevelAppraiseRewardBoxInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelAppraiseRewardBoxInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c00e0 & 1) == 0) {
    DAT_123c00e0 = DAT_123c00e0 | 1;
    _DAT_123c00d4 = &DAT_123c00c4;
    DAT_123c00d8 = &DAT_123c00c4;
    DAT_123c00c4 = 0;
    FUN_100d83d0("CLevelAppraiseRewardBoxInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79310);
  }
  return DAT_123c00c0;
}



