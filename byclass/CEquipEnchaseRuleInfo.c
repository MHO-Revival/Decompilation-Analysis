// ===== class CEquipEnchaseRuleInfo  (2 recovered methods) =====

/* --- CEquipEnchaseRuleInfo::GetManagers @ 1184cd20 --- */
// [RE-AUTO c3]
// id: CEquipEnchaseRuleInfo::GetManagers
// strings:
//   ""CEquipEnchaseRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipEnchaseRuleInfo::GetManagers
   strings:
     ""CEquipEnchaseRuleInfo::GetManagers"" */

undefined * CEquipEnchaseRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4fb5c;
  if (param_3 == 0) {
    if ((DAT_12398698 & 1) == 0) {
      DAT_12398698 = DAT_12398698 | 1;
      FUN_102500e0("CEquipEnchaseRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad5b0);
    }
    if ((undefined *)*DAT_1239867c != (undefined *)0x0) {
      return (undefined *)*DAT_1239867c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12398a5c & 1) == 0) {
      DAT_12398a5c = DAT_12398a5c | 1;
      FUN_1184f990();
      FUN_11a8911f(&LAB_11cad370);
    }
    puVar1 = &DAT_12398a24;
  }
  return puVar1;
}



/* --- CEquipEnchaseRuleInfo::GetManagers_118517d0 @ 118517d0 --- */
// [RE-AUTO c3]
// id: CEquipEnchaseRuleInfo::GetManagers
// strings:
//   ""CEquipEnchaseRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipEnchaseRuleInfo::GetManagers
   strings:
     ""CEquipEnchaseRuleInfo::GetManagers"" */

undefined4 CEquipEnchaseRuleInfo__GetManagers_118517d0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398698 & 1) == 0) {
      DAT_12398698 = DAT_12398698 | 1;
      FUN_102500e0("CEquipEnchaseRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad5b0);
    }
    return *DAT_1239867c;
  }
  return 0;
}



