// ===== class CTowerDefenseInfo  (1 recovered methods) =====

/* --- CTowerDefenseInfo::GetManagers @ 109c0710 --- */
// [RE-AUTO c3]
// id: CTowerDefenseInfo::GetManagers
// strings:
//   ""CTowerDefenseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTowerDefenseInfo::GetManagers
   strings:
     ""CTowerDefenseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTowerDefenseInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8dd0 & 1) == 0) {
    DAT_123c8dd0 = DAT_123c8dd0 | 1;
    _DAT_123c8de8 = &DAT_123c8dd8;
    DAT_123c8dec = &DAT_123c8dd8;
    DAT_123c8dd8 = 0;
    FUN_100d83d0("CTowerDefenseInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7bfc0);
  }
  return DAT_123c8dd4;
}



