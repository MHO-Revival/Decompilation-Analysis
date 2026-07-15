// ===== class CCharmFoundLockCostInfo  (2 recovered methods) =====

/* --- CCharmFoundLockCostInfo::GetManagers @ 11636200 --- */
// [RE-AUTO c3]
// id: CCharmFoundLockCostInfo::GetManagers
// strings:
//   ""CCharmFoundLockCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundLockCostInfo::GetManagers
   strings:
     ""CCharmFoundLockCostInfo::GetManagers"" */

undefined * CCharmFoundLockCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d36424;
  if (param_3 == 0) {
    if ((DAT_122e0450 & 1) == 0) {
      DAT_122e0450 = DAT_122e0450 | 1;
      FUN_102500e0("CCharmFoundLockCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6590);
    }
    if ((undefined *)*DAT_122e0434 != (undefined *)0x0) {
      return (undefined *)*DAT_122e0434;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e057c & 1) == 0) {
      DAT_122e057c = DAT_122e057c | 1;
      FUN_116372b0();
      FUN_11a8911f(&LAB_11ca6380);
    }
    puVar1 = &DAT_122e0544;
  }
  return puVar1;
}



/* --- CCharmFoundLockCostInfo::GetManagers_11639e40 @ 11639e40 --- */
// [RE-AUTO c3]
// id: CCharmFoundLockCostInfo::GetManagers
// strings:
//   ""CCharmFoundLockCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundLockCostInfo::GetManagers
   strings:
     ""CCharmFoundLockCostInfo::GetManagers"" */

undefined4 CCharmFoundLockCostInfo__GetManagers_11639e40(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0450 & 1) == 0) {
      DAT_122e0450 = DAT_122e0450 | 1;
      FUN_102500e0("CCharmFoundLockCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6590);
    }
    return *DAT_122e0434;
  }
  return 0;
}



