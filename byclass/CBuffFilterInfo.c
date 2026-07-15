// ===== class CBuffFilterInfo  (2 recovered methods) =====

/* --- CBuffFilterInfo::GetManagers @ 1143ea60 --- */
// [RE-AUTO c3]
// id: CBuffFilterInfo::GetManagers
// strings:
//   ""CBuffFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo::GetManagers"" */

undefined * CBuffFilterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d268f0;
  if (param_3 == 0) {
    if ((DAT_122dde00 & 1) == 0) {
      DAT_122dde00 = DAT_122dde00 | 1;
      FUN_102500e0("CBuffFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d680);
    }
    if ((undefined *)*DAT_122ddde4 != (undefined *)0x0) {
      return (undefined *)*DAT_122ddde4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dde4c & 1) == 0) {
      DAT_122dde4c = DAT_122dde4c | 1;
      FUN_1143ecd0();
      FUN_11a8911f(&LAB_11c9d5c0);
    }
    puVar1 = &DAT_122dde14;
  }
  return puVar1;
}



/* --- CBuffFilterInfo::GetManagers_1143f4b0 @ 1143f4b0 --- */
// [RE-AUTO c3]
// id: CBuffFilterInfo::GetManagers
// strings:
//   ""CBuffFilterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo::GetManagers"" */

undefined4 CBuffFilterInfo__GetManagers_1143f4b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dde00 & 1) == 0) {
      DAT_122dde00 = DAT_122dde00 | 1;
      FUN_102500e0("CBuffFilterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d680);
    }
    return *DAT_122ddde4;
  }
  return 0;
}



