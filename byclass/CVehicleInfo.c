// ===== class CVehicleInfo  (2 recovered methods) =====

/* --- CVehicleInfo::GetManagers @ 10f21210 --- */
// [RE-AUTO c3]
// id: CVehicleInfo::GetManagers
// strings:
//   ""CVehicleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVehicleInfo::GetManagers
   strings:
     ""CVehicleInfo::GetManagers"" */

undefined * CVehicleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cf8fe4;
  if (param_3 == 0) {
    if ((DAT_1203c8a0 & 1) == 0) {
      DAT_1203c8a0 = DAT_1203c8a0 | 1;
      FUN_102500e0("CVehicleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c919f0);
    }
    if ((undefined *)*DAT_1203c884 != (undefined *)0x0) {
      return (undefined *)*DAT_1203c884;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203caf0 & 1) == 0) {
      DAT_1203caf0 = DAT_1203caf0 | 1;
      FUN_10f22090();
      FUN_11a8911f(&LAB_11c91950);
    }
    puVar1 = &DAT_1203cab8;
  }
  return puVar1;
}



/* --- CVehicleInfo::GetManagers_10f26510 @ 10f26510 --- */
// [RE-AUTO c3]
// id: CVehicleInfo::GetManagers
// strings:
//   ""CVehicleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVehicleInfo::GetManagers
   strings:
     ""CVehicleInfo::GetManagers"" */

undefined4 CVehicleInfo__GetManagers_10f26510(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203c8a0 & 1) == 0) {
      DAT_1203c8a0 = DAT_1203c8a0 | 1;
      FUN_102500e0("CVehicleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c919f0);
    }
    return *DAT_1203c884;
  }
  return 0;
}



