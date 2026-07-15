// ===== class CEquipRandRuleInInfo  (2 recovered methods) =====

/* --- CEquipRandRuleInInfo::GetManagers @ 115fada0 --- */
// [RE-AUTO c3]
// id: CEquipRandRuleInInfo::GetManagers
// strings:
//   ""CEquipRandRuleInInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandRuleInInfo::GetManagers
   strings:
     ""CEquipRandRuleInInfo::GetManagers"" */

undefined * CEquipRandRuleInInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d33974;
  if (param_3 == 0) {
    if ((DAT_122dfff8 & 1) == 0) {
      DAT_122dfff8 = DAT_122dfff8 | 1;
      FUN_102500e0("CEquipRandRuleInInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca56c0);
    }
    if ((undefined *)*DAT_122dffdc != (undefined *)0x0) {
      return (undefined *)*DAT_122dffdc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e003c & 1) == 0) {
      DAT_122e003c = DAT_122e003c | 1;
      FUN_115fb010();
      FUN_11a8911f(&LAB_11ca5600);
    }
    puVar1 = &DAT_122e0004;
  }
  return puVar1;
}



/* --- CEquipRandRuleInInfo::GetManagers_115fb7e0 @ 115fb7e0 --- */
// [RE-AUTO c3]
// id: CEquipRandRuleInInfo::GetManagers
// strings:
//   ""CEquipRandRuleInInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandRuleInInfo::GetManagers
   strings:
     ""CEquipRandRuleInInfo::GetManagers"" */

undefined4 CEquipRandRuleInInfo__GetManagers_115fb7e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dfff8 & 1) == 0) {
      DAT_122dfff8 = DAT_122dfff8 | 1;
      FUN_102500e0("CEquipRandRuleInInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca56c0);
    }
    return *DAT_122dffdc;
  }
  return 0;
}



