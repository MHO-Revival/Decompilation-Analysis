// ===== class CSpoorRoadInfo  (1 recovered methods) =====

/* --- CSpoorRoadInfo::GetManagers @ 10947b00 --- */
// [RE-AUTO c3]
// id: CSpoorRoadInfo::GetManagers
// strings:
//   ""CSpoorRoadInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorRoadInfo::GetManagers
   strings:
     ""CSpoorRoadInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpoorRoadInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8564 & 1) == 0) {
    DAT_123c8564 = DAT_123c8564 | 1;
    _DAT_123c857c = &DAT_123c856c;
    DAT_123c8580 = &DAT_123c856c;
    DAT_123c856c = 0;
    FUN_100d83d0("CSpoorRoadInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c78620);
  }
  return DAT_123c8568;
}



