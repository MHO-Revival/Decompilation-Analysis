// ===== class CRandomWeaponInfo  (1 recovered methods) =====

/* --- CRandomWeaponInfo::GetManagers @ 1052c940 --- */
// [RE-AUTO c3]
// id: CRandomWeaponInfo::GetManagers
// strings:
//   ""CRandomWeaponInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponInfo::GetManagers
   strings:
     ""CRandomWeaponInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CRandomWeaponInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be8a4 & 1) == 0) {
    DAT_123be8a4 = DAT_123be8a4 | 1;
    _DAT_123be87c = &DAT_123be86c;
    DAT_123be880 = &DAT_123be86c;
    DAT_123be86c = 0;
    FUN_100d83d0("CRandomWeaponInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ff00);
  }
  return DAT_123be868;
}



