// ===== class CEquipFoundInfo  (1 recovered methods) =====

/* --- CEquipFoundInfo::GetManagers @ 1083bad0 --- */
// [RE-AUTO c3]
// id: CEquipFoundInfo::GetManagers
// strings:
//   ""CEquipFoundInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipFoundInfo::GetManagers
   strings:
     ""CEquipFoundInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipFoundInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf3ac & 1) == 0) {
    DAT_123bf3ac = DAT_123bf3ac | 1;
    _DAT_123bf3a4 = &DAT_123bf394;
    DAT_123bf3a8 = &DAT_123bf394;
    DAT_123bf394 = 0;
    FUN_100d83d0("CEquipFoundInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72430);
  }
  return DAT_123bf390;
}



