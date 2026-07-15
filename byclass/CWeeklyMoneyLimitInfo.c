// ===== class CWeeklyMoneyLimitInfo  (1 recovered methods) =====

/* --- CWeeklyMoneyLimitInfo::GetManagers @ 108d1c00 --- */
// [RE-AUTO c3]
// id: CWeeklyMoneyLimitInfo::GetManagers
// strings:
//   ""CWeeklyMoneyLimitInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeeklyMoneyLimitInfo::GetManagers
   strings:
     ""CWeeklyMoneyLimitInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CWeeklyMoneyLimitInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7d14 & 1) == 0) {
    DAT_123c7d14 = DAT_123c7d14 | 1;
    _DAT_123c7d2c = &DAT_123c7d1c;
    DAT_123c7d30 = &DAT_123c7d1c;
    DAT_123c7d1c = 0;
    FUN_100d83d0("CWeeklyMoneyLimitInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75cc0);
  }
  return DAT_123c7d18;
}



