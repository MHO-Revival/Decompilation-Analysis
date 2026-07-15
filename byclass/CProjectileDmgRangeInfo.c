// ===== class CProjectileDmgRangeInfo  (2 recovered methods) =====

/* --- CProjectileDmgRangeInfo::GetManagers @ 10f2cc30 --- */
// [RE-AUTO c3]
// id: CProjectileDmgRangeInfo::GetManagers
// strings:
//   ""CProjectileDmgRangeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileDmgRangeInfo::GetManagers
   strings:
     ""CProjectileDmgRangeInfo::GetManagers"" */

undefined * CProjectileDmgRangeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cfa3a4;
  if (param_3 == 0) {
    if ((DAT_1203cb10 & 1) == 0) {
      DAT_1203cb10 = DAT_1203cb10 | 1;
      FUN_102500e0("CProjectileDmgRangeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c91b90);
    }
    if ((undefined *)*DAT_1203caf4 != (undefined *)0x0) {
      return (undefined *)*DAT_1203caf4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203cb78 & 1) == 0) {
      DAT_1203cb78 = DAT_1203cb78 | 1;
      FUN_10f2cea0();
      FUN_11a8911f(&LAB_11c91ad0);
    }
    puVar1 = &DAT_1203cb40;
  }
  return puVar1;
}



/* --- CProjectileDmgRangeInfo::GetManagers_10f2d510 @ 10f2d510 --- */
// [RE-AUTO c3]
// id: CProjectileDmgRangeInfo::GetManagers
// strings:
//   ""CProjectileDmgRangeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileDmgRangeInfo::GetManagers
   strings:
     ""CProjectileDmgRangeInfo::GetManagers"" */

undefined4 CProjectileDmgRangeInfo__GetManagers_10f2d510(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203cb10 & 1) == 0) {
      DAT_1203cb10 = DAT_1203cb10 | 1;
      FUN_102500e0("CProjectileDmgRangeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c91b90);
    }
    return *DAT_1203caf4;
  }
  return 0;
}



