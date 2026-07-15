// ===== class CPianShouWeaponInfo  (2 recovered methods) =====

/* --- CPianShouWeaponInfo::GetManagers @ 119dac50 --- */
// [RE-AUTO c3]
// id: CPianShouWeaponInfo::GetManagers
// strings:
//   ""CPianShouWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPianShouWeaponInfo::GetManagers
   strings:
     ""CPianShouWeaponInfo::GetManagers"" */

undefined * CPianShouWeaponInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d6aa18;
  if (param_3 == 0) {
    if ((DAT_1239cb08 & 1) == 0) {
      DAT_1239cb08 = DAT_1239cb08 | 1;
      FUN_102500e0("CPianShouWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa30);
    }
    if ((undefined *)*DAT_1239caec != (undefined *)0x0) {
      return (undefined *)*DAT_1239caec;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a3dc8 & 1) == 0) {
      DAT_123a3dc8 = DAT_123a3dc8 | 1;
      FUN_119dacf0();
      FUN_11a8911f(&LAB_11cb4ee0);
    }
    puVar1 = &DAT_123a3d90;
  }
  return puVar1;
}



/* --- CPianShouWeaponInfo::GetManagers_119daf00 @ 119daf00 --- */
// [RE-AUTO c3]
// id: CPianShouWeaponInfo::GetManagers
// strings:
//   ""CPianShouWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPianShouWeaponInfo::GetManagers
   strings:
     ""CPianShouWeaponInfo::GetManagers"" */

undefined4 CPianShouWeaponInfo__GetManagers_119daf00(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239cb08 & 1) == 0) {
      DAT_1239cb08 = DAT_1239cb08 | 1;
      FUN_102500e0("CPianShouWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa30);
    }
    return *DAT_1239caec;
  }
  return 0;
}



