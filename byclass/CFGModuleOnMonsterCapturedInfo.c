// ===== class CFGModuleOnMonsterCapturedInfo  (2 recovered methods) =====

/* --- CFGModuleOnMonsterCapturedInfo::GetManagers @ 116ffbc0 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterCapturedInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterCapturedInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterCapturedInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterCapturedInfo::GetManagers"" */

undefined *
CFGModuleOnMonsterCapturedInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4287c;
  if (param_3 == 0) {
    if ((DAT_1238ecc8 & 1) == 0) {
      DAT_1238ecc8 = DAT_1238ecc8 | 1;
      FUN_102500e0("CFGModuleOnMonsterCapturedInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca85e0);
    }
    if ((undefined *)*DAT_1238ecac != (undefined *)0x0) {
      return (undefined *)*DAT_1238ecac;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238ee80 & 1) == 0) {
      DAT_1238ee80 = DAT_1238ee80 | 1;
      FUN_117010c0();
      FUN_11a8911f(&LAB_11ca8340);
    }
    puVar1 = &DAT_1238ee48;
  }
  return puVar1;
}



/* --- CFGModuleOnMonsterCapturedInfo::GetManagers_11704a70 @ 11704a70 --- */
// [RE-AUTO c3]
// id: CFGModuleOnMonsterCapturedInfo::GetManagers
// strings:
//   ""CFGModuleOnMonsterCapturedInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFGModuleOnMonsterCapturedInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterCapturedInfo::GetManagers"" */

undefined4 CFGModuleOnMonsterCapturedInfo__GetManagers_11704a70(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ecc8 & 1) == 0) {
      DAT_1238ecc8 = DAT_1238ecc8 | 1;
      FUN_102500e0("CFGModuleOnMonsterCapturedInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca85e0);
    }
    return *DAT_1238ecac;
  }
  return 0;
}



