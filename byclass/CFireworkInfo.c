// ===== class CFireworkInfo  (1 recovered methods) =====

/* --- CFireworkInfo::GetManagers @ 109920d0 --- */
// [RE-AUTO c3]
// id: CFireworkInfo::GetManagers
// strings:
//   ""CFireworkInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFireworkInfo::GetManagers
   strings:
     ""CFireworkInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFireworkInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c896c & 1) == 0) {
    DAT_123c896c = DAT_123c896c | 1;
    _DAT_123c8984 = &DAT_123c8974;
    DAT_123c8988 = &DAT_123c8974;
    DAT_123c8974 = 0;
    FUN_100d83d0("CFireworkInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7aaa0);
  }
  return DAT_123c8970;
}



