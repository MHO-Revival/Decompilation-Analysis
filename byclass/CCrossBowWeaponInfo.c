// ===== class CCrossBowWeaponInfo  (1 recovered methods) =====

/* --- CCrossBowWeaponInfo::GetManagers @ 10856310 --- */
// [RE-AUTO c3]
// id: CCrossBowWeaponInfo::GetManagers
// strings:
//   ""CCrossBowWeaponInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCrossBowWeaponInfo::GetManagers
   strings:
     ""CCrossBowWeaponInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCrossBowWeaponInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf840 & 1) == 0) {
    DAT_123bf840 = DAT_123bf840 | 1;
    _DAT_123bf858 = &DAT_123bf848;
    DAT_123bf85c = &DAT_123bf848;
    DAT_123bf848 = 0;
    FUN_100d83d0("CCrossBowWeaponInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72f20);
  }
  return DAT_123bf844;
}



