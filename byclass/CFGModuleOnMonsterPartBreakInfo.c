// ===== class CFGModuleOnMonsterPartBreakInfo  (2 recovered methods) =====

/* --- CFGModuleOnMonsterPartBreakInfo::GetManagers @ 116ffc60 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterPartBreakInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterPartBreakInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterPartBreakInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterPartBreakInfo::GetManagers"" */

undefined *
CFGModuleOnMonsterPartBreakInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4291c;
  if (param_3 == 0) {
    if ((DAT_1238ece8 & 1) == 0) {
      DAT_1238ece8 = DAT_1238ece8 | 1;
      FUN_102500e0("CFGModuleOnMonsterPartBreakInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8610);
    }
    if ((undefined *)*DAT_1238eccc != (undefined *)0x0) {
      return (undefined *)*DAT_1238eccc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238eebc & 1) == 0) {
      DAT_1238eebc = DAT_1238eebc | 1;
      FUN_11701120();
      FUN_11a8911f(&LAB_11ca83a0);
    }
    puVar1 = &DAT_1238ee84;
  }
  return puVar1;
}



/* --- CFGModuleOnMonsterPartBreakInfo::GetManagers_11704ac0 @ 11704ac0 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterPartBreakInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterPartBreakInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterPartBreakInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterPartBreakInfo::GetManagers"" */

undefined4 CFGModuleOnMonsterPartBreakInfo__GetManagers_11704ac0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ece8 & 1) == 0) {
      DAT_1238ece8 = DAT_1238ece8 | 1;
      FUN_102500e0("CFGModuleOnMonsterPartBreakInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8610);
    }
    return *DAT_1238eccc;
  }
  return 0;
}



