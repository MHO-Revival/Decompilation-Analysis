// ===== class CLoadingTutorialInfo  (1 recovered methods) =====

/* --- CLoadingTutorialInfo::GetManagers @ 10962230 --- */
// [RE-AUTO c3]
// id: CLoadingTutorialInfo::GetManagers
// strings:
//   ""CLoadingTutorialInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLoadingTutorialInfo::GetManagers
   strings:
     ""CLoadingTutorialInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLoadingTutorialInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c03b4 & 1) == 0) {
    DAT_123c03b4 = DAT_123c03b4 | 1;
    _DAT_123c036c = &DAT_123c035c;
    DAT_123c0370 = &DAT_123c035c;
    DAT_123c035c = 0;
    FUN_100d83d0("CLoadingTutorialInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c795f0);
  }
  return DAT_123c0358;
}



