// ===== class CHunterCardBaseInfo  (1 recovered methods) =====

/* --- CHunterCardBaseInfo::GetManagers @ 104d8610 --- */
// [RE-AUTO c3]
// id: CHunterCardBaseInfo::GetManagers
// strings:
//   ""CHunterCardBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterCardBaseInfo::GetManagers
   strings:
     ""CHunterCardBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterCardBaseInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be204 & 1) == 0) {
    DAT_123be204 = DAT_123be204 | 1;
    _DAT_123be1fc = &DAT_123be1ec;
    DAT_123be200 = &DAT_123be1ec;
    DAT_123be1ec = 0;
    FUN_100d83d0("CHunterCardBaseInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eab0);
  }
  return DAT_123be1e8;
}



