// ===== class CLoadingTipsDataInfo  (1 recovered methods) =====

/* --- CLoadingTipsDataInfo::GetManagers @ 10961ce0 --- */
// [RE-AUTO c3]
// id: CLoadingTipsDataInfo::GetManagers
// strings:
//   ""CLoadingTipsDataInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLoadingTipsDataInfo::GetManagers
   strings:
     ""CLoadingTipsDataInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLoadingTipsDataInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c03b8 & 1) == 0) {
    DAT_123c03b8 = DAT_123c03b8 | 1;
    _DAT_123c0330 = &DAT_123c0320;
    DAT_123c0334 = &DAT_123c0320;
    DAT_123c0320 = 0;
    FUN_100d83d0("CLoadingTipsDataInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79500);
  }
  return DAT_123c031c;
}



