// ===== class CEquipEnforceRuleInfo  (2 recovered methods) =====

/* --- CEquipEnforceRuleInfo::GetManagers @ 1184cdc0 --- */
// [RE-AUTO c3]
// id: CEquipEnforceRuleInfo::GetManagers
// strings:
//   ""CEquipEnforceRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipEnforceRuleInfo::GetManagers
   strings:
     ""CEquipEnforceRuleInfo::GetManagers"" */

undefined * CEquipEnforceRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4fa40;
  if (param_3 == 0) {
    if ((DAT_12398658 & 1) == 0) {
      DAT_12398658 = DAT_12398658 | 1;
      FUN_102500e0("CEquipEnforceRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad5e0);
    }
    if ((undefined *)*DAT_1239863c != (undefined *)0x0) {
      return (undefined *)*DAT_1239863c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123989e4 & 1) == 0) {
      DAT_123989e4 = DAT_123989e4 | 1;
      FUN_1184f9f0();
      FUN_11a8911f(&LAB_11cad3d0);
    }
    puVar1 = &DAT_123989ac;
  }
  return puVar1;
}



/* --- CEquipEnforceRuleInfo::GetManagers_11851820 @ 11851820 --- */
// [RE-AUTO c3]
// id: CEquipEnforceRuleInfo::GetManagers
// strings:
//   ""CEquipEnforceRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipEnforceRuleInfo::GetManagers
   strings:
     ""CEquipEnforceRuleInfo::GetManagers"" */

undefined4 CEquipEnforceRuleInfo__GetManagers_11851820(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398658 & 1) == 0) {
      DAT_12398658 = DAT_12398658 | 1;
      FUN_102500e0("CEquipEnforceRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad5e0);
    }
    return *DAT_1239863c;
  }
  return 0;
}



