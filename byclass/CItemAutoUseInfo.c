// ===== class CItemAutoUseInfo  (2 recovered methods) =====

/* --- CItemAutoUseInfo::GetManagers @ 1122e850 --- */
// [RE-AUTO c3]
// id: CItemAutoUseInfo::GetManagers
// strings:
//   ""CItemAutoUseInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemAutoUseInfo::GetManagers
   strings:
     ""CItemAutoUseInfo::GetManagers"" */

undefined * CItemAutoUseInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d19d74;
  if (param_3 == 0) {
    if ((DAT_1203fbf8 & 1) == 0) {
      DAT_1203fbf8 = DAT_1203fbf8 | 1;
      FUN_102500e0("CItemAutoUseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c98830);
    }
    if ((undefined *)*DAT_1203fbdc != (undefined *)0x0) {
      return (undefined *)*DAT_1203fbdc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203fc64 & 1) == 0) {
      DAT_1203fc64 = DAT_1203fc64 | 1;
      FUN_1122edc0();
      FUN_11a8911f(&LAB_11c98590);
    }
    puVar1 = &DAT_1203fc2c;
  }
  return puVar1;
}



/* --- CItemAutoUseInfo::GetManagers_112304b0 @ 112304b0 --- */
// [RE-AUTO c3]
// id: CItemAutoUseInfo::GetManagers
// strings:
//   ""CItemAutoUseInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemAutoUseInfo::GetManagers
   strings:
     ""CItemAutoUseInfo::GetManagers"" */

undefined4 CItemAutoUseInfo__GetManagers_112304b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203fbf8 & 1) == 0) {
      DAT_1203fbf8 = DAT_1203fbf8 | 1;
      FUN_102500e0("CItemAutoUseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c98830);
    }
    return *DAT_1203fbdc;
  }
  return 0;
}



