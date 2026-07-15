// ===== class CLevelCatExtRewardCfgInfo  (2 recovered methods) =====

/* --- CLevelCatExtRewardCfgInfo::GetManagers @ 11824e00 --- */
// [RE-AUTO c3]
// id: CLevelCatExtRewardCfgInfo::GetManagers
// strings:
//   ""CLevelCatExtRewardCfgInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelCatExtRewardCfgInfo::GetManagers
   strings:
     ""CLevelCatExtRewardCfgInfo::GetManagers"" */

undefined *
CLevelCatExtRewardCfgInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4dfc0;
  if (param_3 == 0) {
    if ((DAT_12396e68 & 1) == 0) {
      DAT_12396e68 = DAT_12396e68 | 1;
      FUN_102500e0("CLevelCatExtRewardCfgInfo::GetManagers");
      FUN_11a8911f(&LAB_11cac7d0);
    }
    if ((undefined *)*DAT_12396e4c != (undefined *)0x0) {
      return (undefined *)*DAT_12396e4c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12397560 & 1) == 0) {
      DAT_12397560 = DAT_12397560 | 1;
      FUN_118261b0();
      FUN_11a8911f(&LAB_11cac750);
    }
    puVar1 = &DAT_1239752c;
  }
  return puVar1;
}



/* --- CLevelCatExtRewardCfgInfo::GetManagers_11827100 @ 11827100 --- */
// [RE-AUTO c3]
// id: CLevelCatExtRewardCfgInfo::GetManagers
// strings:
//   ""CLevelCatExtRewardCfgInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelCatExtRewardCfgInfo::GetManagers
   strings:
     ""CLevelCatExtRewardCfgInfo::GetManagers"" */

undefined4 CLevelCatExtRewardCfgInfo__GetManagers_11827100(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12396e68 & 1) == 0) {
      DAT_12396e68 = DAT_12396e68 | 1;
      FUN_102500e0("CLevelCatExtRewardCfgInfo::GetManagers");
      FUN_11a8911f(&LAB_11cac7d0);
    }
    return *DAT_12396e4c;
  }
  return 0;
}



