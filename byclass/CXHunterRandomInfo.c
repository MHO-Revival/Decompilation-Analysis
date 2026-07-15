// ===== class CXHunterRandomInfo  (2 recovered methods) =====

/* --- CXHunterRandomInfo::GetManagers @ 10e2b420 --- */
// [RE-AUTO c3]
// id: CXHunterRandomInfo::GetManagers
// strings:
//   ""CXHunterRandomInfo::GetManagers""

/* [RE-AUTO c3]
   id: CXHunterRandomInfo::GetManagers
   strings:
     ""CXHunterRandomInfo::GetManagers"" */

undefined * CXHunterRandomInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ceed1c;
  if (param_3 == 0) {
    if ((DAT_1203383c & 1) == 0) {
      DAT_1203383c = DAT_1203383c | 1;
      FUN_102500e0("CXHunterRandomInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8d2e0);
    }
    if ((undefined *)*DAT_12033820 != (undefined *)0x0) {
      return (undefined *)*DAT_12033820;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203528c & 1) == 0) {
      DAT_1203528c = DAT_1203528c | 1;
      FUN_10e2cc70();
      FUN_11a8911f(&LAB_11c8c4c0);
    }
    puVar1 = &DAT_12035254;
  }
  return puVar1;
}



/* --- CXHunterRandomInfo::GetManagers_10e38fe0 @ 10e38fe0 --- */
// [RE-AUTO c3]
// id: CXHunterRandomInfo::GetManagers
// strings:
//   ""CXHunterRandomInfo::GetManagers""

/* [RE-AUTO c3]
   id: CXHunterRandomInfo::GetManagers
   strings:
     ""CXHunterRandomInfo::GetManagers"" */

undefined4 CXHunterRandomInfo__GetManagers_10e38fe0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203383c & 1) == 0) {
      DAT_1203383c = DAT_1203383c | 1;
      FUN_102500e0("CXHunterRandomInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8d2e0);
    }
    return *DAT_12033820;
  }
  return 0;
}



