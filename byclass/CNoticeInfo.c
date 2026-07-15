// ===== class CNoticeInfo  (2 recovered methods) =====

/* --- CNoticeInfo::GetManagers @ 11294820 --- */
// [RE-AUTO c3]
// id: CNoticeInfo::GetManagers
// strings:
//   ""CNoticeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNoticeInfo::GetManagers
   strings:
     ""CNoticeInfo::GetManagers"" */

undefined * CNoticeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1cb78;
  if (param_3 == 0) {
    if ((DAT_120407a8 & 1) == 0) {
      DAT_120407a8 = DAT_120407a8 | 1;
      FUN_102500e0("CNoticeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c998b0);
    }
    if ((undefined *)*DAT_1204078c != (undefined *)0x0) {
      return (undefined *)*DAT_1204078c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040840 & 1) == 0) {
      DAT_12040840 = DAT_12040840 | 1;
      FUN_11295790();
      FUN_11a8911f(&LAB_11c99760);
    }
    puVar1 = &DAT_12040808;
  }
  return puVar1;
}



/* --- CNoticeInfo::GetManagers_1129b740 @ 1129b740 --- */
// [RE-AUTO c3]
// id: CNoticeInfo::GetManagers
// strings:
//   ""CNoticeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNoticeInfo::GetManagers
   strings:
     ""CNoticeInfo::GetManagers"" */

undefined4 CNoticeInfo__GetManagers_1129b740(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120407a8 & 1) == 0) {
      DAT_120407a8 = DAT_120407a8 | 1;
      FUN_102500e0("CNoticeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c998b0);
    }
    return *DAT_1204078c;
  }
  return 0;
}



