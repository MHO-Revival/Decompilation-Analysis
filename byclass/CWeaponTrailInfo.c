// ===== class CWeaponTrailInfo  (1 recovered methods) =====

/* --- CWeaponTrailInfo::GetManagers @ 109ac470 --- */
// [RE-AUTO c3]
// id: CWeaponTrailInfo::GetManagers
// strings:
//   ""CWeaponTrailInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponTrailInfo::GetManagers
   strings:
     ""CWeaponTrailInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CWeaponTrailInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8bdc & 1) == 0) {
    DAT_123c8bdc = DAT_123c8bdc | 1;
    _DAT_123c8bf4 = &DAT_123c8be4;
    DAT_123c8bf8 = &DAT_123c8be4;
    DAT_123c8be4 = 0;
    FUN_100d83d0("CWeaponTrailInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b4c0);
  }
  return DAT_123c8be0;
}



