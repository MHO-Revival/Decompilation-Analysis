// ===== class CEquipLevelUpConsumeInfo  (1 recovered methods) =====

/* --- CEquipLevelUpConsumeInfo::GetManagers @ 107ec340 --- */
// [RE-AUTO c3]
// id: CEquipLevelUpConsumeInfo::GetManagers
// strings:
//   ""CEquipLevelUpConsumeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipLevelUpConsumeInfo::GetManagers
   strings:
     ""CEquipLevelUpConsumeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipLevelUpConsumeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bef34 & 1) == 0) {
    DAT_123bef34 = DAT_123bef34 | 1;
    _DAT_123bef28 = &DAT_123bef18;
    DAT_123bef2c = &DAT_123bef18;
    DAT_123bef18 = 0;
    FUN_100d83d0("CEquipLevelUpConsumeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c712a0);
  }
  return DAT_123bef14;
}



