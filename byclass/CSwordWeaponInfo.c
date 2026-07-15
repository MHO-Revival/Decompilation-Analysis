// ===== class CSwordWeaponInfo  (2 recovered methods) =====

/* --- CSwordWeaponInfo::GetManagers @ 119db4f0 --- */
// [RE-AUTO c3]
// id: CSwordWeaponInfo::GetManagers
// strings:
//   ""CSwordWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSwordWeaponInfo::GetManagers
   strings:
     ""CSwordWeaponInfo::GetManagers"" */

undefined * CSwordWeaponInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d6aa7c;
  if (param_3 == 0) {
    if ((DAT_1239cb28 & 1) == 0) {
      DAT_1239cb28 = DAT_1239cb28 | 1;
      FUN_102500e0("CSwordWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa60);
    }
    if ((undefined *)*DAT_1239cb0c != (undefined *)0x0) {
      return (undefined *)*DAT_1239cb0c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a3e80 & 1) == 0) {
      DAT_123a3e80 = DAT_123a3e80 | 1;
      FUN_119db590();
      FUN_11a8911f(&LAB_11cb4f40);
    }
    puVar1 = &DAT_123a3e48;
  }
  return puVar1;
}



/* --- CSwordWeaponInfo::GetManagers_119db760 @ 119db760 --- */
// [RE-AUTO c3]
// id: CSwordWeaponInfo::GetManagers
// strings:
//   ""CSwordWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSwordWeaponInfo::GetManagers
   strings:
     ""CSwordWeaponInfo::GetManagers"" */

undefined4 CSwordWeaponInfo__GetManagers_119db760(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239cb28 & 1) == 0) {
      DAT_1239cb28 = DAT_1239cb28 | 1;
      FUN_102500e0("CSwordWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa60);
    }
    return *DAT_1239cb0c;
  }
  return 0;
}



