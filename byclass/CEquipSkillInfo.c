// ===== class CEquipSkillInfo  (2 recovered methods) =====

/* --- CEquipSkillInfo::GetManagers @ 113f3cc0 --- */
// [RE-AUTO c3]
// id: CEquipSkillInfo::GetManagers
// strings:
//   ""CEquipSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipSkillInfo::GetManagers
   strings:
     ""CEquipSkillInfo::GetManagers"" */

undefined * CEquipSkillInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d24a38;
  if (param_3 == 0) {
    if ((DAT_1218f7b8 & 1) == 0) {
      DAT_1218f7b8 = DAT_1218f7b8 | 1;
      FUN_102500e0("CEquipSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9c340);
    }
    if ((undefined *)*DAT_1218f79c != (undefined *)0x0) {
      return (undefined *)*DAT_1218f79c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1218f840 & 1) == 0) {
      DAT_1218f840 = DAT_1218f840 | 1;
      FUN_113f5630();
      FUN_11a8911f(&LAB_11c9c0a0);
    }
    puVar1 = &DAT_1218f808;
  }
  return puVar1;
}



/* --- CEquipSkillInfo::GetManagers_113fa4f0 @ 113fa4f0 --- */
// [RE-AUTO c3]
// id: CEquipSkillInfo::GetManagers
// strings:
//   ""CEquipSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipSkillInfo::GetManagers
   strings:
     ""CEquipSkillInfo::GetManagers"" */

undefined4 CEquipSkillInfo__GetManagers_113fa4f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1218f7b8 & 1) == 0) {
      DAT_1218f7b8 = DAT_1218f7b8 | 1;
      FUN_102500e0("CEquipSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9c340);
    }
    return *DAT_1218f79c;
  }
  return 0;
}



