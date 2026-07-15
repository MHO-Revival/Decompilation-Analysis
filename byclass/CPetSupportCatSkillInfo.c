// ===== class CPetSupportCatSkillInfo  (2 recovered methods) =====

/* --- CPetSupportCatSkillInfo::GetManagers @ 10bf0950 --- */
// [RE-AUTO c3]
// id: CPetSupportCatSkillInfo::GetManagers
// strings:
//   ""CPetSupportCatSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSupportCatSkillInfo::GetManagers
   strings:
     ""CPetSupportCatSkillInfo::GetManagers"" */

undefined * CPetSupportCatSkillInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cd5bc0;
  if (param_3 == 0) {
    if ((DAT_1202e1ac & 1) == 0) {
      DAT_1202e1ac = DAT_1202e1ac | 1;
      FUN_102500e0("CPetSupportCatSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c86100);
    }
    if ((undefined *)*DAT_1202e190 != (undefined *)0x0) {
      return (undefined *)*DAT_1202e190;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1202e1f0 & 1) == 0) {
      DAT_1202e1f0 = DAT_1202e1f0 | 1;
      FUN_10bf0bc0();
      FUN_11a8911f(&LAB_11c860a0);
    }
    puVar1 = &DAT_1202e1b8;
  }
  return puVar1;
}



/* --- CPetSupportCatSkillInfo::GetManagers_10bf1930 @ 10bf1930 --- */
// [RE-AUTO c3]
// id: CPetSupportCatSkillInfo::GetManagers
// strings:
//   ""CPetSupportCatSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSupportCatSkillInfo::GetManagers
   strings:
     ""CPetSupportCatSkillInfo::GetManagers"" */

undefined4 CPetSupportCatSkillInfo__GetManagers_10bf1930(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1202e1ac & 1) == 0) {
      DAT_1202e1ac = DAT_1202e1ac | 1;
      FUN_102500e0("CPetSupportCatSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c86100);
    }
    return *DAT_1202e190;
  }
  return 0;
}



