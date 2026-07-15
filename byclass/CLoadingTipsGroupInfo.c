// ===== class CLoadingTipsGroupInfo  (1 recovered methods) =====

/* --- CLoadingTipsGroupInfo::GetManagers @ 10961df0 --- */
// [RE-AUTO c3]
// id: CLoadingTipsGroupInfo::GetManagers
// strings:
//   ""CLoadingTipsGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLoadingTipsGroupInfo::GetManagers
   strings:
     ""CLoadingTipsGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLoadingTipsGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0338 & 1) == 0) {
    DAT_123c0338 = DAT_123c0338 | 1;
    _DAT_123c0350 = &DAT_123c0340;
    DAT_123c0354 = &DAT_123c0340;
    DAT_123c0340 = 0;
    FUN_100d83d0("CLoadingTipsGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79530);
  }
  return DAT_123c033c;
}



