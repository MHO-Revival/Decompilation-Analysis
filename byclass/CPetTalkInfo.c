// ===== class CPetTalkInfo  (2 recovered methods) =====

/* --- CPetTalkInfo::GetManagers @ 112b6800 --- */
// [RE-AUTO c3]
// id: CPetTalkInfo::GetManagers
// strings:
//   ""CPetTalkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetTalkInfo::GetManagers
   strings:
     ""CPetTalkInfo::GetManagers"" */

undefined * CPetTalkInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1e2f4;
  if (param_3 == 0) {
    if ((DAT_12040964 & 1) == 0) {
      DAT_12040964 = DAT_12040964 | 1;
      FUN_102500e0("CPetTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99d40);
    }
    if ((undefined *)*DAT_12040948 != (undefined *)0x0) {
      return (undefined *)*DAT_12040948;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120409ac & 1) == 0) {
      DAT_120409ac = DAT_120409ac | 1;
      FUN_112b6aa0();
      FUN_11a8911f(&LAB_11c99ce0);
    }
    puVar1 = &DAT_12040974;
  }
  return puVar1;
}



/* --- CPetTalkInfo::GetManagers_112b7440 @ 112b7440 --- */
// [RE-AUTO c3]
// id: CPetTalkInfo::GetManagers
// strings:
//   ""CPetTalkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetTalkInfo::GetManagers
   strings:
     ""CPetTalkInfo::GetManagers"" */

undefined4 CPetTalkInfo__GetManagers_112b7440(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040964 & 1) == 0) {
      DAT_12040964 = DAT_12040964 | 1;
      FUN_102500e0("CPetTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99d40);
    }
    return *DAT_12040948;
  }
  return 0;
}



