// ===== class CTadaoWeaponInfo  (2 recovered methods) =====

/* --- CTadaoWeaponInfo::GetManagers @ 119dbe10 --- */
// [RE-AUTO c3]
// id: CTadaoWeaponInfo::GetManagers
// strings:
//   ""CTadaoWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTadaoWeaponInfo::GetManagers
   strings:
     ""CTadaoWeaponInfo::GetManagers"" */

undefined * CTadaoWeaponInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d6aae4;
  if (param_3 == 0) {
    if ((DAT_1239cb48 & 1) == 0) {
      DAT_1239cb48 = DAT_1239cb48 | 1;
      FUN_102500e0("CTadaoWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa90);
    }
    if ((undefined *)*DAT_1239cb2c != (undefined *)0x0) {
      return (undefined *)*DAT_1239cb2c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a3f30 & 1) == 0) {
      DAT_123a3f30 = DAT_123a3f30 | 1;
      FUN_119dbeb0();
      FUN_11a8911f(&LAB_11cb4fc0);
    }
    puVar1 = &DAT_123a3ef8;
  }
  return puVar1;
}



/* --- CTadaoWeaponInfo::GetManagers_119dc0f0 @ 119dc0f0 --- */
// [RE-AUTO c3]
// id: CTadaoWeaponInfo::GetManagers
// strings:
//   ""CTadaoWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTadaoWeaponInfo::GetManagers
   strings:
     ""CTadaoWeaponInfo::GetManagers"" */

undefined4 CTadaoWeaponInfo__GetManagers_119dc0f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239cb48 & 1) == 0) {
      DAT_1239cb48 = DAT_1239cb48 | 1;
      FUN_102500e0("CTadaoWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11cafa90);
    }
    return *DAT_1239cb2c;
  }
  return 0;
}



