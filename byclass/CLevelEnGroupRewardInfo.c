// ===== class CLevelEnGroupRewardInfo  (1 recovered methods) =====

/* --- CLevelEnGroupRewardInfo::GetManagers @ 108f2d70 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupRewardInfo::GetManagers
// strings:
//   ""CLevelEnGroupRewardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupRewardInfo::GetManagers
   strings:
     ""CLevelEnGroupRewardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelEnGroupRewardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfc6c & 1) == 0) {
    DAT_123bfc6c = DAT_123bfc6c | 1;
    _DAT_123bfc84 = &DAT_123bfc74;
    DAT_123bfc88 = &DAT_123bfc74;
    DAT_123bfc74 = 0;
    FUN_100d83d0("CLevelEnGroupRewardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76790);
  }
  return DAT_123bfc70;
}



