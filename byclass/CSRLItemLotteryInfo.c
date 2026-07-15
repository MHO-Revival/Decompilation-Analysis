// ===== class CSRLItemLotteryInfo  (2 recovered methods) =====

/* --- CSRLItemLotteryInfo::GetManagers @ 1153b2a0 --- */
// [RE-AUTO c3]
// id: CSRLItemLotteryInfo::GetManagers
// strings:
//   ""CSRLItemLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemLotteryInfo::GetManagers
   strings:
     ""CSRLItemLotteryInfo::GetManagers"" */

undefined * CSRLItemLotteryInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c880;
  if (param_3 == 0) {
    if ((DAT_122dec40 & 1) == 0) {
      DAT_122dec40 = DAT_122dec40 | 1;
      FUN_102500e0("CSRLItemLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1840);
    }
    if ((undefined *)*DAT_122dec24 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec24;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122ded6c & 1) == 0) {
      DAT_122ded6c = DAT_122ded6c | 1;
      FUN_1153c100();
      FUN_11a8911f(&LAB_11ca1630);
    }
    puVar1 = &DAT_122ded34;
  }
  return puVar1;
}



/* --- CSRLItemLotteryInfo::GetManagers_1153e740 @ 1153e740 --- */
// [RE-AUTO c3]
// id: CSRLItemLotteryInfo::GetManagers
// strings:
//   ""CSRLItemLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemLotteryInfo::GetManagers
   strings:
     ""CSRLItemLotteryInfo::GetManagers"" */

undefined4 CSRLItemLotteryInfo__GetManagers_1153e740(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dec40 & 1) == 0) {
      DAT_122dec40 = DAT_122dec40 | 1;
      FUN_102500e0("CSRLItemLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1840);
    }
    return *DAT_122dec24;
  }
  return 0;
}



