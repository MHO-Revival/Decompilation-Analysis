// ===== class CRoadOfGrowthInfo  (1 recovered methods) =====

/* --- CRoadOfGrowthInfo::GetManagers @ 1099b850 --- */
// [RE-AUTO c3]
// id: CRoadOfGrowthInfo::GetManagers
// strings:
//   ""CRoadOfGrowthInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRoadOfGrowthInfo::GetManagers
   strings:
     ""CRoadOfGrowthInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CRoadOfGrowthInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c05ac & 1) == 0) {
    DAT_123c05ac = DAT_123c05ac | 1;
    _DAT_123c05a4 = &DAT_123c0594;
    DAT_123c05a8 = &DAT_123c0594;
    DAT_123c0594 = 0;
    FUN_100d83d0("CRoadOfGrowthInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7acb0);
  }
  return DAT_123c0590;
}



