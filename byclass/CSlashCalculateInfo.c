// ===== class CSlashCalculateInfo  (2 recovered methods) =====

/* --- CSlashCalculateInfo::GetManagers @ 115d9210 --- */
// [RE-AUTO c3]
// id: CSlashCalculateInfo::GetManagers
// strings:
//   ""CSlashCalculateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSlashCalculateInfo::GetManagers
   strings:
     ""CSlashCalculateInfo::GetManagers"" */

undefined * CSlashCalculateInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d313bc;
  if (param_3 == 0) {
    if ((DAT_122df9a4 & 1) == 0) {
      DAT_122df9a4 = DAT_122df9a4 | 1;
      FUN_102500e0("CSlashCalculateInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4940);
    }
    if ((undefined *)*DAT_122df988 != (undefined *)0x0) {
      return (undefined *)*DAT_122df988;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dfa10 & 1) == 0) {
      DAT_122dfa10 = DAT_122dfa10 | 1;
      FUN_115d96f0();
      FUN_11a8911f(&LAB_11ca4880);
    }
    puVar1 = &DAT_122df9d8;
  }
  return puVar1;
}



/* --- CSlashCalculateInfo::GetManagers_115da820 @ 115da820 --- */
// [RE-AUTO c3]
// id: CSlashCalculateInfo::GetManagers
// strings:
//   ""CSlashCalculateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSlashCalculateInfo::GetManagers
   strings:
     ""CSlashCalculateInfo::GetManagers"" */

undefined4 CSlashCalculateInfo__GetManagers_115da820(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df9a4 & 1) == 0) {
      DAT_122df9a4 = DAT_122df9a4 | 1;
      FUN_102500e0("CSlashCalculateInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4940);
    }
    return *DAT_122df988;
  }
  return 0;
}



