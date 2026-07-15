// ===== class CWeaponWakeUpRandRuleInfo  (2 recovered methods) =====

/* --- CWeaponWakeUpRandRuleInfo::GetManagers @ 1184cfa0 --- */
// [RE-AUTO c3]
// id: CWeaponWakeUpRandRuleInfo::GetManagers
// strings:
//   ""CWeaponWakeUpRandRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWeaponWakeUpRandRuleInfo::GetManagers
   strings:
     ""CWeaponWakeUpRandRuleInfo::GetManagers"" */

undefined *
CWeaponWakeUpRandRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4f9a8;
  if (param_3 == 0) {
    if ((DAT_12398638 & 1) == 0) {
      DAT_12398638 = DAT_12398638 | 1;
      FUN_102500e0("CWeaponWakeUpRandRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad670);
    }
    if ((undefined *)*DAT_1239861c != (undefined *)0x0) {
      return (undefined *)*DAT_1239861c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123989a8 & 1) == 0) {
      DAT_123989a8 = DAT_123989a8 | 1;
      FUN_1184fb10();
      FUN_11a8911f(&LAB_11cad550);
    }
    puVar1 = &DAT_12398970;
  }
  return puVar1;
}



/* --- CWeaponWakeUpRandRuleInfo::GetManagers_11851910 @ 11851910 --- */
// [RE-AUTO c3]
// id: CWeaponWakeUpRandRuleInfo::GetManagers
// strings:
//   ""CWeaponWakeUpRandRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWeaponWakeUpRandRuleInfo::GetManagers
   strings:
     ""CWeaponWakeUpRandRuleInfo::GetManagers"" */

undefined4 CWeaponWakeUpRandRuleInfo__GetManagers_11851910(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398638 & 1) == 0) {
      DAT_12398638 = DAT_12398638 | 1;
      FUN_102500e0("CWeaponWakeUpRandRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad670);
    }
    return *DAT_1239861c;
  }
  return 0;
}



