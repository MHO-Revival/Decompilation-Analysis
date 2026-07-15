// ===== class CLevelBalanceInfo  (2 recovered methods) =====

/* --- CLevelBalanceInfo::GetManagers @ 114617c0 --- */
// [RE-AUTO c3]
// id: CLevelBalanceInfo::GetManagers
// strings:
//   ""CLevelBalanceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBalanceInfo::GetManagers
   strings:
     ""CLevelBalanceInfo::GetManagers"" */

undefined * CLevelBalanceInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d28420;
  if (param_3 == 0) {
    if ((DAT_122de07c & 1) == 0) {
      DAT_122de07c = DAT_122de07c | 1;
      FUN_102500e0("CLevelBalanceInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9deb0);
    }
    if ((undefined *)*DAT_122de060 != (undefined *)0x0) {
      return (undefined *)*DAT_122de060;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de104 & 1) == 0) {
      DAT_122de104 = DAT_122de104 | 1;
      FUN_114627c0();
      FUN_11a8911f(&LAB_11c9ddc0);
    }
    puVar1 = &DAT_122de0cc;
  }
  return puVar1;
}



/* --- CLevelBalanceInfo::GetManagers_11464e50 @ 11464e50 --- */
// [RE-AUTO c3]
// id: CLevelBalanceInfo::GetManagers
// strings:
//   ""CLevelBalanceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBalanceInfo::GetManagers
   strings:
     ""CLevelBalanceInfo::GetManagers"" */

undefined4 CLevelBalanceInfo__GetManagers_11464e50(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de07c & 1) == 0) {
      DAT_122de07c = DAT_122de07c | 1;
      FUN_102500e0("CLevelBalanceInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9deb0);
    }
    return *DAT_122de060;
  }
  return 0;
}



