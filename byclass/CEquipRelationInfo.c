// ===== class CEquipRelationInfo  (1 recovered methods) =====

/* --- CEquipRelationInfo::GetManagers @ 10855f20 --- */
// [RE-AUTO c3]
// id: CEquipRelationInfo::GetManagers
// strings:
//   ""CEquipRelationInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRelationInfo::GetManagers
   strings:
     ""CEquipRelationInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipRelationInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7630 & 1) == 0) {
    DAT_123c7630 = DAT_123c7630 | 1;
    _DAT_123c7648 = &DAT_123c7638;
    DAT_123c764c = &DAT_123c7638;
    DAT_123c7638 = 0;
    FUN_100d83d0("CEquipRelationInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72ec0);
  }
  return DAT_123c7634;
}



