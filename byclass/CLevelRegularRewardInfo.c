// ===== class CLevelRegularRewardInfo  (1 recovered methods) =====

/* --- CLevelRegularRewardInfo::GetManagers @ 10976f50 --- */
// [RE-AUTO c3]
// id: CLevelRegularRewardInfo::GetManagers
// strings:
//   ""CLevelRegularRewardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelRegularRewardInfo::GetManagers
   strings:
     ""CLevelRegularRewardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelRegularRewardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c04c4 & 1) == 0) {
    DAT_123c04c4 = DAT_123c04c4 | 1;
    _DAT_123c049c = &DAT_123c048c;
    DAT_123c04a0 = &DAT_123c048c;
    DAT_123c048c = 0;
    FUN_100d83d0("CLevelRegularRewardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79f80);
  }
  return DAT_123c0488;
}



