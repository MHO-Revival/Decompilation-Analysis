// ===== class CFGModuleOnMonsterStateAbnormalInfo  (2 recovered methods) =====

/* --- CFGModuleOnMonsterStateAbnormalInfo::GetManagers @ 116ffda0 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterStateAbnormalInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterStateAbnormalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterStateAbnormalInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterStateAbnormalInfo::GetManagers"" */

undefined *
CFGModuleOnMonsterStateAbnormalInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d42a60;
  if (param_3 == 0) {
    if ((DAT_1238ed28 & 1) == 0) {
      DAT_1238ed28 = DAT_1238ed28 | 1;
      FUN_102500e0("CFGModuleOnMonsterStateAbnormalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8670);
    }
    if ((undefined *)*DAT_1238ed0c != (undefined *)0x0) {
      return (undefined *)*DAT_1238ed0c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238ef34 & 1) == 0) {
      DAT_1238ef34 = DAT_1238ef34 | 1;
      FUN_117011e0();
      FUN_11a8911f(&LAB_11ca8460);
    }
    puVar1 = &DAT_1238eefc;
  }
  return puVar1;
}



/* --- CFGModuleOnMonsterStateAbnormalInfo::GetManagers_11704b60 @ 11704b60 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterStateAbnormalInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterStateAbnormalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterStateAbnormalInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterStateAbnormalInfo::GetManagers"" */

undefined4 CFGModuleOnMonsterStateAbnormalInfo__GetManagers_11704b60(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ed28 & 1) == 0) {
      DAT_1238ed28 = DAT_1238ed28 | 1;
      FUN_102500e0("CFGModuleOnMonsterStateAbnormalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca8670);
    }
    return *DAT_1238ed0c;
  }
  return 0;
}



