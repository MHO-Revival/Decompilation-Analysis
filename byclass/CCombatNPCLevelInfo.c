// ===== class CCombatNPCLevelInfo  (2 recovered methods) =====

/* --- CCombatNPCLevelInfo::GetManagers @ 1130eec0 --- */
// [RE-AUTO c3]
// id: CCombatNPCLevelInfo::GetManagers
// strings:
//   ""CCombatNPCLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCLevelInfo::GetManagers
   strings:
     ""CCombatNPCLevelInfo::GetManagers"" */

undefined * CCombatNPCLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d22394;
  if (param_3 == 0) {
    if ((DAT_12040d14 & 1) == 0) {
      DAT_12040d14 = DAT_12040d14 | 1;
      FUN_102500e0("CCombatNPCLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b130);
    }
    if ((undefined *)*DAT_12040cf8 != (undefined *)0x0) {
      return (undefined *)*DAT_12040cf8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040d58 & 1) == 0) {
      DAT_12040d58 = DAT_12040d58 | 1;
      FUN_1130f130();
      FUN_11a8911f(&LAB_11c9b0d0);
    }
    puVar1 = &DAT_12040d20;
  }
  return puVar1;
}



/* --- CCombatNPCLevelInfo::GetManagers_1130f910 @ 1130f910 --- */
// [RE-AUTO c3]
// id: CCombatNPCLevelInfo::GetManagers
// strings:
//   ""CCombatNPCLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCLevelInfo::GetManagers
   strings:
     ""CCombatNPCLevelInfo::GetManagers"" */

undefined4 CCombatNPCLevelInfo__GetManagers_1130f910(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040d14 & 1) == 0) {
      DAT_12040d14 = DAT_12040d14 | 1;
      FUN_102500e0("CCombatNPCLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b130);
    }
    return *DAT_12040cf8;
  }
  return 0;
}



