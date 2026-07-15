// ===== class CCombatNPCInfo  (2 recovered methods) =====

/* --- CCombatNPCInfo::GetManagers @ 10aade90 --- */
// [RE-AUTO c3]
// id: CCombatNPCInfo::GetManagers
// strings:
//   ""CCombatNPCInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo::GetManagers"" */

undefined * CCombatNPCInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc0c78;
  if (param_3 == 0) {
    if ((DAT_12020fd4 & 1) == 0) {
      DAT_12020fd4 = DAT_12020fd4 | 1;
      FUN_102500e0("CCombatNPCInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7fd90);
    }
    if ((undefined *)*DAT_12020fb8 != (undefined *)0x0) {
      return (undefined *)*DAT_12020fb8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12021030 & 1) == 0) {
      DAT_12021030 = DAT_12021030 | 1;
      FUN_10aae270();
      FUN_11a8911f(&LAB_11c7fc70);
    }
    puVar1 = &DAT_12020ff8;
  }
  return puVar1;
}



/* --- CCombatNPCInfo::GetManagers_10aaeae0 @ 10aaeae0 --- */
// [RE-AUTO c3]
// id: CCombatNPCInfo::GetManagers
// strings:
//   ""CCombatNPCInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo::GetManagers"" */

undefined4 CCombatNPCInfo__GetManagers_10aaeae0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12020fd4 & 1) == 0) {
      DAT_12020fd4 = DAT_12020fd4 | 1;
      FUN_102500e0("CCombatNPCInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7fd90);
    }
    return *DAT_12020fb8;
  }
  return 0;
}



