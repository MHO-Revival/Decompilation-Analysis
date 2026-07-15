// ===== class CItemGroupInfo  (1 recovered methods) =====

/* --- CItemGroupInfo::GetManagers @ 109fdc00 --- */
// [RE-AUTO c3]
// id: CItemGroupInfo::GetManagers
// strings:
//   ""CItemGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemGroupInfo::GetManagers
   strings:
     ""CItemGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CItemGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c92e4 & 1) == 0) {
    DAT_123c92e4 = DAT_123c92e4 | 1;
    _DAT_123c92fc = &DAT_123c92ec;
    DAT_123c9300 = &DAT_123c92ec;
    DAT_123c92ec = 0;
    FUN_100d83d0("CItemGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7dab0);
  }
  return DAT_123c92e8;
}



