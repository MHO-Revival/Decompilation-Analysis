// ===== class CEquipReColorRuleInfo  (1 recovered methods) =====

/* --- CEquipReColorRuleInfo::GetManagers @ 10856e60 --- */
// [RE-AUTO c3]
// id: CEquipReColorRuleInfo::GetManagers
// strings:
//   ""CEquipReColorRuleInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipReColorRuleInfo::GetManagers
   strings:
     ""CEquipReColorRuleInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipReColorRuleInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf764 & 1) == 0) {
    DAT_123bf764 = DAT_123bf764 | 1;
    _DAT_123bf77c = &DAT_123bf76c;
    DAT_123bf780 = &DAT_123bf76c;
    DAT_123bf76c = 0;
    FUN_100d83d0("CEquipReColorRuleInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c730a0);
  }
  return DAT_123bf768;
}



