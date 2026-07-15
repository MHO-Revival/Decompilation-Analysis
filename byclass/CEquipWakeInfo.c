// ===== class CEquipWakeInfo  (1 recovered methods) =====

/* --- CEquipWakeInfo::GetManagers @ 10856a60 --- */
// [RE-AUTO c3]
// id: CEquipWakeInfo::GetManagers
// strings:
//   ""CEquipWakeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipWakeInfo::GetManagers
   strings:
     ""CEquipWakeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipWakeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf7a4 & 1) == 0) {
    DAT_123bf7a4 = DAT_123bf7a4 | 1;
    _DAT_123bf7bc = &DAT_123bf7ac;
    DAT_123bf7c0 = &DAT_123bf7ac;
    DAT_123bf7ac = 0;
    FUN_100d83d0("CEquipWakeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c73010);
  }
  return DAT_123bf7a8;
}



