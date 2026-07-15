// ===== class CManufactureProficiencyInfo  (2 recovered methods) =====

/* --- CManufactureProficiencyInfo::GetManagers @ 112075a0 --- */
// [RE-AUTO c3]
// id: CManufactureProficiencyInfo::GetManagers
// strings:
//   ""CManufactureProficiencyInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureProficiencyInfo::GetManagers
   strings:
     ""CManufactureProficiencyInfo::GetManagers"" */

undefined *
CManufactureProficiencyInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d18654;
  if (param_3 == 0) {
    if ((DAT_1203f6ec & 1) == 0) {
      DAT_1203f6ec = DAT_1203f6ec | 1;
      FUN_102500e0("CManufactureProficiencyInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e10);
    }
    if ((undefined *)*DAT_1203f6d0 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f6d0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f7a8 & 1) == 0) {
      DAT_1203f7a8 = DAT_1203f7a8 | 1;
      FUN_112081a0();
      FUN_11a8911f(&LAB_11c97cc0);
    }
    puVar1 = &DAT_1203f770;
  }
  return puVar1;
}



/* --- CManufactureProficiencyInfo::GetManagers_11209fb0 @ 11209fb0 --- */
// [RE-AUTO c3]
// id: CManufactureProficiencyInfo::GetManagers
// strings:
//   ""CManufactureProficiencyInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureProficiencyInfo::GetManagers
   strings:
     ""CManufactureProficiencyInfo::GetManagers"" */

undefined4 CManufactureProficiencyInfo__GetManagers_11209fb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f6ec & 1) == 0) {
      DAT_1203f6ec = DAT_1203f6ec | 1;
      FUN_102500e0("CManufactureProficiencyInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e10);
    }
    return *DAT_1203f6d0;
  }
  return 0;
}



