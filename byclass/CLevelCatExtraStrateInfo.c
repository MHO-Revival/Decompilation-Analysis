// ===== class CLevelCatExtraStrateInfo  (2 recovered methods) =====

/* --- CLevelCatExtraStrateInfo::GetManagers @ 11573fd0 --- */
// [RE-AUTO c3]
// id: CLevelCatExtraStrateInfo::GetManagers
// strings:
//   ""CLevelCatExtraStrateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelCatExtraStrateInfo::GetManagers
   strings:
     ""CLevelCatExtraStrateInfo::GetManagers"" */

undefined * CLevelCatExtraStrateInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2dc4c;
  if (param_3 == 0) {
    if ((DAT_122df14c & 1) == 0) {
      DAT_122df14c = DAT_122df14c | 1;
      FUN_102500e0("CLevelCatExtraStrateInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca28f0);
    }
    if ((undefined *)*DAT_122df130 != (undefined *)0x0) {
      return (undefined *)*DAT_122df130;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df190 & 1) == 0) {
      DAT_122df190 = DAT_122df190 | 1;
      FUN_115742c0();
      FUN_11a8911f(&LAB_11ca2770);
    }
    puVar1 = &DAT_122df158;
  }
  return puVar1;
}



/* --- CLevelCatExtraStrateInfo::GetManagers_11574fb0 @ 11574fb0 --- */
// [RE-AUTO c3]
// id: CLevelCatExtraStrateInfo::GetManagers
// strings:
//   ""CLevelCatExtraStrateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelCatExtraStrateInfo::GetManagers
   strings:
     ""CLevelCatExtraStrateInfo::GetManagers"" */

undefined4 CLevelCatExtraStrateInfo__GetManagers_11574fb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df14c & 1) == 0) {
      DAT_122df14c = DAT_122df14c | 1;
      FUN_102500e0("CLevelCatExtraStrateInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca28f0);
    }
    return *DAT_122df130;
  }
  return 0;
}



