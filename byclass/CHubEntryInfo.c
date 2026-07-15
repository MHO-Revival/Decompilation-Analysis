// ===== class CHubEntryInfo  (1 recovered methods) =====

/* --- CHubEntryInfo::GetManagers @ 10912d10 --- */
// [RE-AUTO c3]
// id: CHubEntryInfo::GetManagers
// strings:
//   ""CHubEntryInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryInfo::GetManagers
   strings:
     ""CHubEntryInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfea4 & 1) == 0) {
    DAT_123bfea4 = DAT_123bfea4 | 1;
    _DAT_123bfe9c = &DAT_123bfe8c;
    DAT_123bfea0 = &DAT_123bfe8c;
    DAT_123bfe8c = 0;
    FUN_100d83d0("CHubEntryInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77410);
  }
  return DAT_123bfe88;
}



