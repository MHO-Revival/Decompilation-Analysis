// ===== class CProjectileExplosionInfo  (2 recovered methods) =====

/* --- CProjectileExplosionInfo::GetManagers @ 10d83be0 --- */
// [RE-AUTO c3]
// id: CProjectileExplosionInfo::GetManagers
// strings:
//   ""CProjectileExplosionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileExplosionInfo::GetManagers
   strings:
     ""CProjectileExplosionInfo::GetManagers"" */

undefined * CProjectileExplosionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ce6d60;
  if (param_3 == 0) {
    if ((DAT_120309a4 & 1) == 0) {
      DAT_120309a4 = DAT_120309a4 | 1;
      FUN_102500e0("CProjectileExplosionInfo::GetManagers");
      FUN_11a8911f(&LAB_11c89b70);
    }
    if ((undefined *)*DAT_12030988 != (undefined *)0x0) {
      return (undefined *)*DAT_12030988;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12030a20 & 1) == 0) {
      DAT_12030a20 = DAT_12030a20 | 1;
      FUN_10d84850();
      FUN_11a8911f(&LAB_11c89ab0);
    }
    puVar1 = &DAT_120309e8;
  }
  return puVar1;
}



/* --- CProjectileExplosionInfo::GetManagers_10d856e0 @ 10d856e0 --- */
// [RE-AUTO c3]
// id: CProjectileExplosionInfo::GetManagers
// strings:
//   ""CProjectileExplosionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileExplosionInfo::GetManagers
   strings:
     ""CProjectileExplosionInfo::GetManagers"" */

undefined4 CProjectileExplosionInfo__GetManagers_10d856e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120309a4 & 1) == 0) {
      DAT_120309a4 = DAT_120309a4 | 1;
      FUN_102500e0("CProjectileExplosionInfo::GetManagers");
      FUN_11a8911f(&LAB_11c89b70);
    }
    return *DAT_12030988;
  }
  return 0;
}



