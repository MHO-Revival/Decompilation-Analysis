// ===== class CManufactureInitUnlockInfo  (2 recovered methods) =====

/* --- CManufactureInitUnlockInfo::GetManagers @ 1151c7e0 --- */
// [RE-AUTO c3]
// id: CManufactureInitUnlockInfo::GetManagers
// strings:
//   ""CManufactureInitUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureInitUnlockInfo::GetManagers
   strings:
     ""CManufactureInitUnlockInfo::GetManagers"" */

undefined *
CManufactureInitUnlockInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c064;
  if (param_3 == 0) {
    if ((DAT_122de99c & 1) == 0) {
      DAT_122de99c = DAT_122de99c | 1;
      FUN_102500e0("CManufactureInitUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0940);
    }
    if ((undefined *)*DAT_122de980 != (undefined *)0x0) {
      return (undefined *)*DAT_122de980;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de9e0 & 1) == 0) {
      DAT_122de9e0 = DAT_122de9e0 | 1;
      FUN_1151cdd0();
      FUN_11a8911f(&LAB_11ca0880);
    }
    puVar1 = &DAT_122de9a8;
  }
  return puVar1;
}



/* --- CManufactureInitUnlockInfo::GetManagers_1151e260 @ 1151e260 --- */
// [RE-AUTO c3]
// id: CManufactureInitUnlockInfo::GetManagers
// strings:
//   ""CManufactureInitUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureInitUnlockInfo::GetManagers
   strings:
     ""CManufactureInitUnlockInfo::GetManagers"" */

undefined4 CManufactureInitUnlockInfo__GetManagers_1151e260(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de99c & 1) == 0) {
      DAT_122de99c = DAT_122de99c | 1;
      FUN_102500e0("CManufactureInitUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0940);
    }
    return *DAT_122de980;
  }
  return 0;
}



