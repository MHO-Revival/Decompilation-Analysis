// ===== class CLevelSpawnBatchInfo  (2 recovered methods) =====

/* --- CLevelSpawnBatchInfo::GetManagers @ 10e95b00 --- */
// [RE-AUTO c3]
// id: CLevelSpawnBatchInfo::GetManagers
// strings:
//   ""CLevelSpawnBatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelSpawnBatchInfo::GetManagers
   strings:
     ""CLevelSpawnBatchInfo::GetManagers"" */

undefined * CLevelSpawnBatchInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cf492c;
  if (param_3 == 0) {
    if ((DAT_12039c14 & 1) == 0) {
      DAT_12039c14 = DAT_12039c14 | 1;
      FUN_102500e0("CLevelSpawnBatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fb90);
    }
    if ((undefined *)*DAT_12039bf8 != (undefined *)0x0) {
      return (undefined *)*DAT_12039bf8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203a5f4 & 1) == 0) {
      DAT_1203a5f4 = DAT_1203a5f4 | 1;
      FUN_10e96400();
      FUN_11a8911f(&LAB_11c8f830);
    }
    puVar1 = &DAT_1203a5bc;
  }
  return puVar1;
}



/* --- CLevelSpawnBatchInfo::GetManagers_10e9add0 @ 10e9add0 --- */
// [RE-AUTO c3]
// id: CLevelSpawnBatchInfo::GetManagers
// strings:
//   ""CLevelSpawnBatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelSpawnBatchInfo::GetManagers
   strings:
     ""CLevelSpawnBatchInfo::GetManagers"" */

undefined4 CLevelSpawnBatchInfo__GetManagers_10e9add0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12039c14 & 1) == 0) {
      DAT_12039c14 = DAT_12039c14 | 1;
      FUN_102500e0("CLevelSpawnBatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fb90);
    }
    return *DAT_12039bf8;
  }
  return 0;
}



