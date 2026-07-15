// ===== class CTutorialInfo  (1 recovered methods) =====

/* --- CTutorialInfo::GetManagers @ 1080b0d0 --- */
// [RE-AUTO c3]
// id: CTutorialInfo::GetManagers
// strings:
//   ""CTutorialInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTutorialInfo::GetManagers
   strings:
     ""CTutorialInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTutorialInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf280 & 1) == 0) {
    DAT_123bf280 = DAT_123bf280 | 1;
    _DAT_123bf258 = &DAT_123bf248;
    DAT_123bf25c = &DAT_123bf248;
    DAT_123bf248 = 0;
    FUN_100d83d0("CTutorialInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71b20);
  }
  return DAT_123bf244;
}



