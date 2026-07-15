// ===== class CSpecRulesInfo  (2 recovered methods) =====

/* --- CSpecRulesInfo::GetManagers @ 115d92b0 --- */
// [RE-AUTO c3]
// id: CSpecRulesInfo::GetManagers
// strings:
//   ""CSpecRulesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSpecRulesInfo::GetManagers
   strings:
     ""CSpecRulesInfo::GetManagers"" */

undefined * CSpecRulesInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d31448;
  if (param_3 == 0) {
    if ((DAT_122df9c4 & 1) == 0) {
      DAT_122df9c4 = DAT_122df9c4 | 1;
      FUN_102500e0("CSpecRulesInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4970);
    }
    if ((undefined *)*DAT_122df9a8 != (undefined *)0x0) {
      return (undefined *)*DAT_122df9a8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dfa4c & 1) == 0) {
      DAT_122dfa4c = DAT_122dfa4c | 1;
      FUN_115d9750();
      FUN_11a8911f(&LAB_11ca48e0);
    }
    puVar1 = &DAT_122dfa14;
  }
  return puVar1;
}



/* --- CSpecRulesInfo::GetManagers_115da870 @ 115da870 --- */
// [RE-AUTO c3]
// id: CSpecRulesInfo::GetManagers
// strings:
//   ""CSpecRulesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSpecRulesInfo::GetManagers
   strings:
     ""CSpecRulesInfo::GetManagers"" */

undefined4 CSpecRulesInfo__GetManagers_115da870(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df9c4 & 1) == 0) {
      DAT_122df9c4 = DAT_122df9c4 | 1;
      FUN_102500e0("CSpecRulesInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4970);
    }
    return *DAT_122df9a8;
  }
  return 0;
}



