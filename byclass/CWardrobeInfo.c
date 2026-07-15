// ===== class CWardrobeInfo  (1 recovered methods) =====

/* --- CWardrobeInfo::GetManagers @ 109e7510 --- */
// [RE-AUTO c3]
// id: CWardrobeInfo::GetManagers
// strings:
//   ""CWardrobeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWardrobeInfo::GetManagers
   strings:
     ""CWardrobeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CWardrobeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c90f0 & 1) == 0) {
    DAT_123c90f0 = DAT_123c90f0 | 1;
    _DAT_123c9108 = &DAT_123c90f8;
    DAT_123c910c = &DAT_123c90f8;
    DAT_123c90f8 = 0;
    FUN_100d83d0("CWardrobeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7d010);
  }
  return DAT_123c90f4;
}



