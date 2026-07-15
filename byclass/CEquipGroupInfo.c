// ===== class CEquipGroupInfo  (2 recovered methods) =====

/* --- CEquipGroupInfo::GetManagers @ 11461720 --- */
// [RE-AUTO c3]
// id: CEquipGroupInfo::GetManagers
// strings:
//   ""CEquipGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipGroupInfo::GetManagers
   strings:
     ""CEquipGroupInfo::GetManagers"" */

undefined * CEquipGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2839c;
  if (param_3 == 0) {
    if ((DAT_122de05c & 1) == 0) {
      DAT_122de05c = DAT_122de05c | 1;
      FUN_102500e0("CEquipGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9de80);
    }
    if ((undefined *)*DAT_122de040 != (undefined *)0x0) {
      return (undefined *)*DAT_122de040;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de0c8 & 1) == 0) {
      DAT_122de0c8 = DAT_122de0c8 | 1;
      FUN_11462760();
      FUN_11a8911f(&LAB_11c9dc40);
    }
    puVar1 = &DAT_122de090;
  }
  return puVar1;
}



/* --- CEquipGroupInfo::GetManagers_11464e00 @ 11464e00 --- */
// [RE-AUTO c3]
// id: CEquipGroupInfo::GetManagers
// strings:
//   ""CEquipGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipGroupInfo::GetManagers
   strings:
     ""CEquipGroupInfo::GetManagers"" */

undefined4 CEquipGroupInfo__GetManagers_11464e00(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de05c & 1) == 0) {
      DAT_122de05c = DAT_122de05c | 1;
      FUN_102500e0("CEquipGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9de80);
    }
    return *DAT_122de040;
  }
  return 0;
}



