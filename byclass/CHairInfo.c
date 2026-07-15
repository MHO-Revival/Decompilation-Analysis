// ===== class CHairInfo  (1 recovered methods) =====

/* --- CHairInfo::GetManagers @ 10849840 --- */
// [RE-AUTO c3]
// id: CHairInfo::GetManagers
// strings:
//   ""CHairInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHairInfo::GetManagers
   strings:
     ""CHairInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHairInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c74dc & 1) == 0) {
    DAT_123c74dc = DAT_123c74dc | 1;
    _DAT_123c74f4 = &DAT_123c74e4;
    DAT_123c74f8 = &DAT_123c74e4;
    DAT_123c74e4 = 0;
    FUN_100d83d0("CHairInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72b10);
  }
  return DAT_123c74e0;
}



