// ===== class CVIPExpLimitInfo  (2 recovered methods) =====

/* --- CVIPExpLimitInfo::GetManagers @ 113adbe0 --- */
// [RE-AUTO c3]
// id: CVIPExpLimitInfo::GetManagers
// strings:
//   ""CVIPExpLimitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPExpLimitInfo::GetManagers
   strings:
     ""CVIPExpLimitInfo::GetManagers"" */

undefined * CVIPExpLimitInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2403c;
  if (param_3 == 0) {
    if ((DAT_120e84ec & 1) == 0) {
      DAT_120e84ec = DAT_120e84ec | 1;
      FUN_102500e0("CVIPExpLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9bd90);
    }
    if ((undefined *)*DAT_120e84d0 != (undefined *)0x0) {
      return (undefined *)*DAT_120e84d0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120e8530 & 1) == 0) {
      DAT_120e8530 = DAT_120e8530 | 1;
      FUN_113ade70();
      FUN_11a8911f(&LAB_11c9bd30);
    }
    puVar1 = &DAT_120e84f8;
  }
  return puVar1;
}



/* --- CVIPExpLimitInfo::GetManagers_113b3970 @ 113b3970 --- */
// [RE-AUTO c3]
// id: CVIPExpLimitInfo::GetManagers
// strings:
//   ""CVIPExpLimitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVIPExpLimitInfo::GetManagers
   strings:
     ""CVIPExpLimitInfo::GetManagers"" */

undefined4 CVIPExpLimitInfo__GetManagers_113b3970(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120e84ec & 1) == 0) {
      DAT_120e84ec = DAT_120e84ec | 1;
      FUN_102500e0("CVIPExpLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9bd90);
    }
    return *DAT_120e84d0;
  }
  return 0;
}



