// ===== class CCalculateInfo  (1 recovered methods) =====

/* --- CCalculateInfo::GetManagers @ 108d14b0 --- */
// [RE-AUTO c3]
// id: CCalculateInfo::GetManagers
// strings:
//   ""CCalculateInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCalculateInfo::GetManagers
   strings:
     ""CCalculateInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCalculateInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7cb4 & 1) == 0) {
    DAT_123c7cb4 = DAT_123c7cb4 | 1;
    _DAT_123c7ccc = &DAT_123c7cbc;
    DAT_123c7cd0 = &DAT_123c7cbc;
    DAT_123c7cbc = 0;
    FUN_100d83d0("CCalculateInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75bb0);
  }
  return DAT_123c7cb8;
}



