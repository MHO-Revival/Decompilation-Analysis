// ===== class CEquipFoundRuleInfo  (2 recovered methods) =====

/* --- CEquipFoundRuleInfo::GetManagers @ 1184ce60 --- */
// [RE-AUTO c3]
// id: CEquipFoundRuleInfo::GetManagers
// strings:
//   ""CEquipFoundRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundRuleInfo::GetManagers
   strings:
     ""CEquipFoundRuleInfo::GetManagers"" */

undefined * CEquipFoundRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4fad0;
  if (param_3 == 0) {
    if ((DAT_12398678 & 1) == 0) {
      DAT_12398678 = DAT_12398678 | 1;
      FUN_102500e0("CEquipFoundRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad610);
    }
    if ((undefined *)*DAT_1239865c != (undefined *)0x0) {
      return (undefined *)*DAT_1239865c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12398a20 & 1) == 0) {
      DAT_12398a20 = DAT_12398a20 | 1;
      FUN_1184fa50();
      FUN_11a8911f(&LAB_11cad430);
    }
    puVar1 = &DAT_123989e8;
  }
  return puVar1;
}



/* --- CEquipFoundRuleInfo::GetManagers_11851870 @ 11851870 --- */
// [RE-AUTO c3]
// id: CEquipFoundRuleInfo::GetManagers
// strings:
//   ""CEquipFoundRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundRuleInfo::GetManagers
   strings:
     ""CEquipFoundRuleInfo::GetManagers"" */

undefined4 CEquipFoundRuleInfo__GetManagers_11851870(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398678 & 1) == 0) {
      DAT_12398678 = DAT_12398678 | 1;
      FUN_102500e0("CEquipFoundRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad610);
    }
    return *DAT_1239865c;
  }
  return 0;
}



