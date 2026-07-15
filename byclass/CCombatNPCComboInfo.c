// ===== class CCombatNPCComboInfo  (2 recovered methods) =====

/* --- CCombatNPCComboInfo::GetManagers @ 10aa46f0 --- */
// [RE-AUTO c3]
// id: CCombatNPCComboInfo::GetManagers
// strings:
//   ""CCombatNPCComboInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCComboInfo::GetManagers
   strings:
     ""CCombatNPCComboInfo::GetManagers"" */

undefined * CCombatNPCComboInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc090c;
  if (param_3 == 0) {
    if ((DAT_12020cac & 1) == 0) {
      DAT_12020cac = DAT_12020cac | 1;
      FUN_102500e0("CCombatNPCComboInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7f370);
    }
    if ((undefined *)*DAT_12020c90 != (undefined *)0x0) {
      return (undefined *)*DAT_12020c90;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12020cf0 & 1) == 0) {
      DAT_12020cf0 = DAT_12020cf0 | 1;
      FUN_10aa4960();
      FUN_11a8911f(&LAB_11c7f310);
    }
    puVar1 = &DAT_12020cb8;
  }
  return puVar1;
}



/* --- CCombatNPCComboInfo::GetManagers_10aa4ee0 @ 10aa4ee0 --- */
// [RE-AUTO c3]
// id: CCombatNPCComboInfo::GetManagers
// strings:
//   ""CCombatNPCComboInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCComboInfo::GetManagers
   strings:
     ""CCombatNPCComboInfo::GetManagers"" */

undefined4 CCombatNPCComboInfo__GetManagers_10aa4ee0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12020cac & 1) == 0) {
      DAT_12020cac = DAT_12020cac | 1;
      FUN_102500e0("CCombatNPCComboInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7f370);
    }
    return *DAT_12020c90;
  }
  return 0;
}



