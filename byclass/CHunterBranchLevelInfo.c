// ===== class CHunterBranchLevelInfo  (1 recovered methods) =====

/* --- CHunterBranchLevelInfo::GetManagers @ 108babd0 --- */
// [RE-AUTO c3]
// id: CHunterBranchLevelInfo::GetManagers
// strings:
//   ""CHunterBranchLevelInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterBranchLevelInfo::GetManagers
   strings:
     ""CHunterBranchLevelInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterBranchLevelInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7afc & 1) == 0) {
    DAT_123c7afc = DAT_123c7afc | 1;
    _DAT_123c7b14 = &DAT_123c7b04;
    DAT_123c7b18 = &DAT_123c7b04;
    DAT_123c7b04 = 0;
    FUN_100d83d0("CHunterBranchLevelInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c753c0);
  }
  return DAT_123c7b00;
}



