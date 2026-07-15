// ===== class CPetGiftSkillInfo  (2 recovered methods) =====

/* --- CPetGiftSkillInfo::GetManagers @ 112f0a60 --- */
// [RE-AUTO c3]
// id: CPetGiftSkillInfo::GetManagers
// strings:
//   ""CPetGiftSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetGiftSkillInfo::GetManagers
   strings:
     ""CPetGiftSkillInfo::GetManagers"" */

undefined * CPetGiftSkillInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d217f0;
  if (param_3 == 0) {
    if ((DAT_12040b88 & 1) == 0) {
      DAT_12040b88 = DAT_12040b88 | 1;
      FUN_102500e0("CPetGiftSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a7d0);
    }
    if ((undefined *)*DAT_12040b6c != (undefined *)0x0) {
      return (undefined *)*DAT_12040b6c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040c80 & 1) == 0) {
      DAT_12040c80 = DAT_12040c80 | 1;
      FUN_112f3c20();
      FUN_11a8911f(&LAB_11c9a590);
    }
    puVar1 = &DAT_12040c48;
  }
  return puVar1;
}



/* --- CPetGiftSkillInfo::GetManagers_112f6030 @ 112f6030 --- */
// [RE-AUTO c3]
// id: CPetGiftSkillInfo::GetManagers
// strings:
//   ""CPetGiftSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetGiftSkillInfo::GetManagers
   strings:
     ""CPetGiftSkillInfo::GetManagers"" */

undefined4 CPetGiftSkillInfo__GetManagers_112f6030(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040b88 & 1) == 0) {
      DAT_12040b88 = DAT_12040b88 | 1;
      FUN_102500e0("CPetGiftSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a7d0);
    }
    return *DAT_12040b6c;
  }
  return 0;
}



