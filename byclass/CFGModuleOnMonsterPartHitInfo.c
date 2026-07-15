// ===== class CFGModuleOnMonsterPartHitInfo  (2 recovered methods) =====

/* --- CFGModuleOnMonsterPartHitInfo::GetManagers @ 116ffd00 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterPartHitInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterPartHitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterPartHitInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterPartHitInfo::GetManagers"" */

undefined *
CFGModuleOnMonsterPartHitInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d429c0;
  if (param_3 == 0) {
    if ((DAT_1238ed08 & 1) == 0) {
      DAT_1238ed08 = DAT_1238ed08 | 1;
      FUN_102500e0("CFGModuleOnMonsterPartHitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8640);
    }
    if ((undefined *)*DAT_1238ecec != (undefined *)0x0) {
      return (undefined *)*DAT_1238ecec;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238eef8 & 1) == 0) {
      DAT_1238eef8 = DAT_1238eef8 | 1;
      FUN_11701180();
      FUN_11a8911f(&LAB_11ca8400);
    }
    puVar1 = &DAT_1238eec0;
  }
  return puVar1;
}



/* --- CFGModuleOnMonsterPartHitInfo::GetManagers_11704b10 @ 11704b10 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterPartHitInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterPartHitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterPartHitInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterPartHitInfo::GetManagers"" */

undefined4 CFGModuleOnMonsterPartHitInfo__GetManagers_11704b10(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ed08 & 1) == 0) {
      DAT_1238ed08 = DAT_1238ed08 | 1;
      FUN_102500e0("CFGModuleOnMonsterPartHitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8640);
    }
    return *DAT_1238ecec;
  }
  return 0;
}



