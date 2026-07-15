// ===== class CFGModuleOnKillMonsterInfo  (2 recovered methods) =====

/* --- CFGModuleOnKillMonsterInfo::GetManagers @ 116ffb20 --- */
// [RE-AUTO c3]
// id: CFGModuleOnKillMonsterInfo::GetManagers
// strings:
//   ""CFGModuleOnKillMonsterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnKillMonsterInfo::GetManagers
   strings:
     ""CFGModuleOnKillMonsterInfo::GetManagers"" */

undefined *
CFGModuleOnKillMonsterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4275c;
  if (param_3 == 0) {
    if ((DAT_1238ec88 & 1) == 0) {
      DAT_1238ec88 = DAT_1238ec88 | 1;
      FUN_102500e0("CFGModuleOnKillMonsterInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca85b0);
    }
    if ((undefined *)*DAT_1238ec6c != (undefined *)0x0) {
      return (undefined *)*DAT_1238ec6c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238ee08 & 1) == 0) {
      DAT_1238ee08 = DAT_1238ee08 | 1;
      FUN_11701060();
      FUN_11a8911f(&LAB_11ca82e0);
    }
    puVar1 = &DAT_1238edd0;
  }
  return puVar1;
}



/* --- CFGModuleOnKillMonsterInfo::GetManagers_11704a20 @ 11704a20 --- */
// [RE-AUTO c3]
// id: CFGModuleOnKillMonsterInfo::GetManagers
// strings:
//   ""CFGModuleOnKillMonsterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnKillMonsterInfo::GetManagers
   strings:
     ""CFGModuleOnKillMonsterInfo::GetManagers"" */

undefined4 CFGModuleOnKillMonsterInfo__GetManagers_11704a20(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ec88 & 1) == 0) {
      DAT_1238ec88 = DAT_1238ec88 | 1;
      FUN_102500e0("CFGModuleOnKillMonsterInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca85b0);
    }
    return *DAT_1238ec6c;
  }
  return 0;
}



