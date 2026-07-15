// ===== class CHunterStarMainBranchInfo  (1 recovered methods) =====

/* --- CHunterStarMainBranchInfo::GetManagers @ 108ba2a0 --- */
// [RE-AUTO c3]
// id: CHunterStarMainBranchInfo::GetManagers
// strings:
//   ""CHunterStarMainBranchInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarMainBranchInfo::GetManagers
   strings:
     ""CHunterStarMainBranchInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterStarMainBranchInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7a5c & 1) == 0) {
    DAT_123c7a5c = DAT_123c7a5c | 1;
    _DAT_123c7a74 = &DAT_123c7a64;
    DAT_123c7a78 = &DAT_123c7a64;
    DAT_123c7a64 = 0;
    FUN_100d83d0("CHunterStarMainBranchInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c752d0);
  }
  return DAT_123c7a60;
}



