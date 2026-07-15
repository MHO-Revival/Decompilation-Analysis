// ===== class CProjectileSpawnEffectInfo  (2 recovered methods) =====

/* --- CProjectileSpawnEffectInfo::GetManagers @ 10d83c80 --- */
// [RE-AUTO c3]
// id: CProjectileSpawnEffectInfo::GetManagers
// strings:
//   ""CProjectileSpawnEffectInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileSpawnEffectInfo::GetManagers
   strings:
     ""CProjectileSpawnEffectInfo::GetManagers"" */

undefined *
CProjectileSpawnEffectInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ce6df8;
  if (param_3 == 0) {
    if ((DAT_120309c4 & 1) == 0) {
      DAT_120309c4 = DAT_120309c4 | 1;
      FUN_102500e0("CProjectileSpawnEffectInfo::GetManagers");
      FUN_11a8911f(&LAB_11c89ba0);
    }
    if ((undefined *)*DAT_120309a8 != (undefined *)0x0) {
      return (undefined *)*DAT_120309a8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12030a5c & 1) == 0) {
      DAT_12030a5c = DAT_12030a5c | 1;
      FUN_10d848b0();
      FUN_11a8911f(&LAB_11c89b10);
    }
    puVar1 = &DAT_12030a24;
  }
  return puVar1;
}



/* --- CProjectileSpawnEffectInfo::GetManagers_10d85730 @ 10d85730 --- */
// [RE-AUTO c3]
// id: CProjectileSpawnEffectInfo::GetManagers
// strings:
//   ""CProjectileSpawnEffectInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileSpawnEffectInfo::GetManagers
   strings:
     ""CProjectileSpawnEffectInfo::GetManagers"" */

undefined4 CProjectileSpawnEffectInfo__GetManagers_10d85730(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120309c4 & 1) == 0) {
      DAT_120309c4 = DAT_120309c4 | 1;
      FUN_102500e0("CProjectileSpawnEffectInfo::GetManagers");
      FUN_11a8911f(&LAB_11c89ba0);
    }
    return *DAT_120309a8;
  }
  return 0;
}



