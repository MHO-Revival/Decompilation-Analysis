// ===== class CBenchmarkInfo  (2 recovered methods) =====

/* --- CBenchmarkInfo::GetManagers @ 10b07910 --- */
// [RE-AUTO c3]
// id: CBenchmarkInfo::GetManagers
// strings:
//   ""CBenchmarkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBenchmarkInfo::GetManagers
   strings:
     ""CBenchmarkInfo::GetManagers"" */

undefined * CBenchmarkInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc366c;
  if (param_3 == 0) {
    if ((DAT_12022260 & 1) == 0) {
      DAT_12022260 = DAT_12022260 | 1;
      FUN_102500e0("CBenchmarkInfo::GetManagers");
      FUN_11a8911f(&LAB_11c81020);
    }
    if ((undefined *)*DAT_12022244 != (undefined *)0x0) {
      return (undefined *)*DAT_12022244;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120222c0 & 1) == 0) {
      DAT_120222c0 = DAT_120222c0 | 1;
      FUN_10b07b80();
      FUN_11a8911f(&LAB_11c80fc0);
    }
    puVar1 = &DAT_12022288;
  }
  return puVar1;
}



/* --- CBenchmarkInfo::GetManagers_10b080f0 @ 10b080f0 --- */
// [RE-AUTO c3]
// id: CBenchmarkInfo::GetManagers
// strings:
//   ""CBenchmarkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CBenchmarkInfo::GetManagers
   strings:
     ""CBenchmarkInfo::GetManagers"" */

undefined4 CBenchmarkInfo__GetManagers_10b080f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12022260 & 1) == 0) {
      DAT_12022260 = DAT_12022260 | 1;
      FUN_102500e0("CBenchmarkInfo::GetManagers");
      FUN_11a8911f(&LAB_11c81020);
    }
    return *DAT_12022244;
  }
  return 0;
}



