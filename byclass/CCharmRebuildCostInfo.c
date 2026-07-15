// ===== class CCharmRebuildCostInfo  (1 recovered methods) =====

/* --- CCharmRebuildCostInfo::GetManagers @ 109cd610 --- */
// [RE-AUTO c3]
// id: CCharmRebuildCostInfo::GetManagers
// strings:
//   ""CCharmRebuildCostInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCharmRebuildCostInfo::GetManagers
   strings:
     ""CCharmRebuildCostInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCharmRebuildCostInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8f60 & 1) == 0) {
    DAT_123c8f60 = DAT_123c8f60 | 1;
    _DAT_123c8f78 = &DAT_123c8f68;
    DAT_123c8f7c = &DAT_123c8f68;
    DAT_123c8f68 = 0;
    FUN_100d83d0("CCharmRebuildCostInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c5b0);
  }
  return DAT_123c8f64;
}



