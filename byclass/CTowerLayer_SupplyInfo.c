// ===== class CTowerLayer_SupplyInfo  (1 recovered methods) =====

/* --- CTowerLayer_SupplyInfo::GetManagers @ 109166e0 --- */
// [RE-AUTO c3]
// id: CTowerLayer_SupplyInfo::GetManagers
// strings:
//   ""CTowerLayer_SupplyInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTowerLayer_SupplyInfo::GetManagers
   strings:
     ""CTowerLayer_SupplyInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTowerLayer_SupplyInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c81c8 & 1) == 0) {
    DAT_123c81c8 = DAT_123c81c8 | 1;
    _DAT_123c81e0 = &DAT_123c81d0;
    DAT_123c81e4 = &DAT_123c81d0;
    DAT_123c81d0 = 0;
    FUN_100d83d0("CTowerLayer_SupplyInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77560);
  }
  return DAT_123c81cc;
}



