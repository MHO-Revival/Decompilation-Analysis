// ===== class CGuildCommodityUnlockInfo  (2 recovered methods) =====

/* --- CGuildCommodityUnlockInfo::GetManagers @ 1145daf0 --- */
// [RE-AUTO c3]
// id: CGuildCommodityUnlockInfo::GetManagers
// strings:
//   ""CGuildCommodityUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo::GetManagers"" */

undefined *
CGuildCommodityUnlockInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2769c;
  if (param_3 == 0) {
    if ((DAT_122ddfa0 & 1) == 0) {
      DAT_122ddfa0 = DAT_122ddfa0 | 1;
      FUN_102500e0("CGuildCommodityUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9da90);
    }
    if ((undefined *)*DAT_122ddf84 != (undefined *)0x0) {
      return (undefined *)*DAT_122ddf84;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de034 & 1) == 0) {
      DAT_122de034 = DAT_122de034 | 1;
      FUN_1145df90();
      FUN_11a8911f(&LAB_11c9d990);
    }
    puVar1 = &DAT_122ddffc;
  }
  return puVar1;
}



/* --- CGuildCommodityUnlockInfo::GetManagers_1145f660 @ 1145f660 --- */
// [RE-AUTO c3]
// id: CGuildCommodityUnlockInfo::GetManagers
// strings:
//   ""CGuildCommodityUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo::GetManagers"" */

undefined4 CGuildCommodityUnlockInfo__GetManagers_1145f660(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122ddfa0 & 1) == 0) {
      DAT_122ddfa0 = DAT_122ddfa0 | 1;
      FUN_102500e0("CGuildCommodityUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9da90);
    }
    return *DAT_122ddf84;
  }
  return 0;
}



