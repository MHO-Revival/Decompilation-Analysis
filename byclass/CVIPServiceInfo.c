// ===== class CVIPServiceInfo  (2 recovered methods) =====

/* --- CVIPServiceInfo::GetManagers @ 11546d80 --- */
// [RE-AUTO c3]
// id: CVIPServiceInfo::GetManagers
// strings:
//   ""CVIPServiceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPServiceInfo::GetManagers
   strings:
     ""CVIPServiceInfo::GetManagers"" */

undefined * CVIPServiceInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2d1e8;
  if (param_3 == 0) {
    if ((DAT_122deeb8 & 1) == 0) {
      DAT_122deeb8 = DAT_122deeb8 | 1;
      FUN_102500e0("CVIPServiceInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1d50);
    }
    if ((undefined *)*DAT_122dee9c != (undefined *)0x0) {
      return (undefined *)*DAT_122dee9c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122def6c & 1) == 0) {
      DAT_122def6c = DAT_122def6c | 1;
      FUN_11547480();
      FUN_11a8911f(&LAB_11ca1c30);
    }
    puVar1 = &DAT_122def34;
  }
  return puVar1;
}



/* --- CVIPServiceInfo::GetManagers_11549140 @ 11549140 --- */
// [RE-AUTO c3]
// id: CVIPServiceInfo::GetManagers
// strings:
//   ""CVIPServiceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPServiceInfo::GetManagers
   strings:
     ""CVIPServiceInfo::GetManagers"" */

undefined4 CVIPServiceInfo__GetManagers_11549140(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deeb8 & 1) == 0) {
      DAT_122deeb8 = DAT_122deeb8 | 1;
      FUN_102500e0("CVIPServiceInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1d50);
    }
    return *DAT_122dee9c;
  }
  return 0;
}



