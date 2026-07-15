// ===== class CUIOpenProcessInfo  (1 recovered methods) =====

/* --- CUIOpenProcessInfo::GetManagers @ 10856940 --- */
// [RE-AUTO c3]
// id: CUIOpenProcessInfo::GetManagers
// strings:
//   ""CUIOpenProcessInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CUIOpenProcessInfo::GetManagers
   strings:
     ""CUIOpenProcessInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CUIOpenProcessInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7650 & 1) == 0) {
    DAT_123c7650 = DAT_123c7650 | 1;
    _DAT_123c7668 = &DAT_123c7658;
    DAT_123c766c = &DAT_123c7658;
    DAT_123c7658 = 0;
    FUN_100d83d0("CUIOpenProcessInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72fe0);
  }
  return DAT_123c7654;
}



