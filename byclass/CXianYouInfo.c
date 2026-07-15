// ===== class CXianYouInfo  (1 recovered methods) =====

/* --- CXianYouInfo::GetManagers @ 10856d50 --- */
// [RE-AUTO c3]
// id: CXianYouInfo::GetManagers
// strings:
//   ""CXianYouInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CXianYouInfo::GetManagers
   strings:
     ""CXianYouInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CXianYouInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7670 & 1) == 0) {
    DAT_123c7670 = DAT_123c7670 | 1;
    _DAT_123c7688 = &DAT_123c7678;
    DAT_123c768c = &DAT_123c7678;
    DAT_123c7678 = 0;
    FUN_100d83d0("CXianYouInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c73070);
  }
  return DAT_123c7674;
}



