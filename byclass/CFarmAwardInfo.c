// ===== class CFarmAwardInfo  (2 recovered methods) =====

/* --- CFarmAwardInfo::GetManagers @ 1141ff10 --- */
// [RE-AUTO c3]
// id: CFarmAwardInfo::GetManagers
// strings:
//   ""CFarmAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFarmAwardInfo::GetManagers
   strings:
     ""CFarmAwardInfo::GetManagers"" */

undefined * CFarmAwardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d25c18;
  if (param_3 == 0) {
    if ((DAT_1218fe54 & 1) == 0) {
      DAT_1218fe54 = DAT_1218fe54 | 1;
      FUN_102500e0("CFarmAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9cf40);
    }
    if ((undefined *)*DAT_1218fe38 != (undefined *)0x0) {
      return (undefined *)*DAT_1218fe38;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1219010c & 1) == 0) {
      DAT_1219010c = DAT_1219010c | 1;
      FUN_11420320();
      FUN_11a8911f(&LAB_11c9cc80);
    }
    puVar1 = &DAT_121900d4;
  }
  return puVar1;
}



/* --- CFarmAwardInfo::GetManagers_114217c0 @ 114217c0 --- */
// [RE-AUTO c3]
// id: CFarmAwardInfo::GetManagers
// strings:
//   ""CFarmAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFarmAwardInfo::GetManagers
   strings:
     ""CFarmAwardInfo::GetManagers"" */

undefined4 CFarmAwardInfo__GetManagers_114217c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1218fe54 & 1) == 0) {
      DAT_1218fe54 = DAT_1218fe54 | 1;
      FUN_102500e0("CFarmAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9cf40);
    }
    return *DAT_1218fe38;
  }
  return 0;
}



