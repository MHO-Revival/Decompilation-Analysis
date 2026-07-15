// ===== class CBowWeaponInfo  (1 recovered methods) =====

/* --- CBowWeaponInfo::GetManagers @ 10856490 --- */
// [RE-AUTO c3]
// id: CBowWeaponInfo::GetManagers
// strings:
//   ""CBowWeaponInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBowWeaponInfo::GetManagers
   strings:
     ""CBowWeaponInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CBowWeaponInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf7c4 & 1) == 0) {
    DAT_123bf7c4 = DAT_123bf7c4 | 1;
    _DAT_123bf7dc = &DAT_123bf7cc;
    DAT_123bf7e0 = &DAT_123bf7cc;
    DAT_123bf7cc = 0;
    FUN_100d83d0("CBowWeaponInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72f50);
  }
  return DAT_123bf7c8;
}



