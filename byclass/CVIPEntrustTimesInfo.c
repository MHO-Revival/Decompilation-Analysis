// ===== class CVIPEntrustTimesInfo  (2 recovered methods) =====

/* --- CVIPEntrustTimesInfo::GetManagers @ 11546ce0 --- */
// [RE-AUTO c3]
// id: CVIPEntrustTimesInfo::GetManagers
// strings:
//   ""CVIPEntrustTimesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPEntrustTimesInfo::GetManagers
   strings:
     ""CVIPEntrustTimesInfo::GetManagers"" */

undefined * CVIPEntrustTimesInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2d158;
  if (param_3 == 0) {
    if ((DAT_122dee98 & 1) == 0) {
      DAT_122dee98 = DAT_122dee98 | 1;
      FUN_102500e0("CVIPEntrustTimesInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1d20);
    }
    if ((undefined *)*DAT_122dee7c != (undefined *)0x0) {
      return (undefined *)*DAT_122dee7c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122def30 & 1) == 0) {
      DAT_122def30 = DAT_122def30 | 1;
      FUN_11547420();
      FUN_11a8911f(&LAB_11ca1bd0);
    }
    puVar1 = &DAT_122deef8;
  }
  return puVar1;
}



/* --- CVIPEntrustTimesInfo::GetManagers_115490f0 @ 115490f0 --- */
// [RE-AUTO c3]
// id: CVIPEntrustTimesInfo::GetManagers
// strings:
//   ""CVIPEntrustTimesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPEntrustTimesInfo::GetManagers
   strings:
     ""CVIPEntrustTimesInfo::GetManagers"" */

undefined4 CVIPEntrustTimesInfo__GetManagers_115490f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dee98 & 1) == 0) {
      DAT_122dee98 = DAT_122dee98 | 1;
      FUN_102500e0("CVIPEntrustTimesInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1d20);
    }
    return *DAT_122dee7c;
  }
  return 0;
}



