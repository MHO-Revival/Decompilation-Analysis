// ===== class CGunLanceWeaponInfo  (2 recovered methods) =====

/* --- CGunLanceWeaponInfo::GetManagers @ 10b682c0 --- */
// [RE-AUTO c3]
// id: CGunLanceWeaponInfo::GetManagers
// strings:
//   ""CGunLanceWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGunLanceWeaponInfo::GetManagers
   strings:
     ""CGunLanceWeaponInfo::GetManagers"" */

undefined * CGunLanceWeaponInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc8264;
  if (param_3 == 0) {
    if ((DAT_12025278 & 1) == 0) {
      DAT_12025278 = DAT_12025278 | 1;
      FUN_102500e0("CGunLanceWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11c83aa0);
    }
    if ((undefined *)*DAT_1202525c != (undefined *)0x0) {
      return (undefined *)*DAT_1202525c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120252bc & 1) == 0) {
      DAT_120252bc = DAT_120252bc | 1;
      FUN_10b68530();
      FUN_11a8911f(&LAB_11c83980);
    }
    puVar1 = &DAT_12025284;
  }
  return puVar1;
}



/* --- CGunLanceWeaponInfo::GetManagers_10b68cc0 @ 10b68cc0 --- */
// [RE-AUTO c3]
// id: CGunLanceWeaponInfo::GetManagers
// strings:
//   ""CGunLanceWeaponInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGunLanceWeaponInfo::GetManagers
   strings:
     ""CGunLanceWeaponInfo::GetManagers"" */

undefined4 CGunLanceWeaponInfo__GetManagers_10b68cc0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12025278 & 1) == 0) {
      DAT_12025278 = DAT_12025278 | 1;
      FUN_102500e0("CGunLanceWeaponInfo::GetManagers");
      FUN_11a8911f(&LAB_11c83aa0);
    }
    return *DAT_1202525c;
  }
  return 0;
}



