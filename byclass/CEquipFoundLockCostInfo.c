// ===== class CEquipFoundLockCostInfo  (2 recovered methods) =====

/* --- CEquipFoundLockCostInfo::GetManagers @ 11833660 --- */
// [RE-AUTO c3]
// id: CEquipFoundLockCostInfo::GetManagers
// strings:
//   ""CEquipFoundLockCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundLockCostInfo::GetManagers
   strings:
     ""CEquipFoundLockCostInfo::GetManagers"" */

undefined * CEquipFoundLockCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4e878;
  if (param_3 == 0) {
    if ((DAT_12397994 & 1) == 0) {
      DAT_12397994 = DAT_12397994 | 1;
      FUN_102500e0("CEquipFoundLockCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb80);
    }
    if ((undefined *)*DAT_12397978 != (undefined *)0x0) {
      return (undefined *)*DAT_12397978;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12397ab0 & 1) == 0) {
      DAT_12397ab0 = DAT_12397ab0 | 1;
      FUN_11834210();
      FUN_11a8911f(&LAB_11caca00);
    }
    puVar1 = &DAT_12397a78;
  }
  return puVar1;
}



/* --- CEquipFoundLockCostInfo::GetManagers_118360a0 @ 118360a0 --- */
// [RE-AUTO c3]
// id: CEquipFoundLockCostInfo::GetManagers
// strings:
//   ""CEquipFoundLockCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundLockCostInfo::GetManagers
   strings:
     ""CEquipFoundLockCostInfo::GetManagers"" */

undefined4 CEquipFoundLockCostInfo__GetManagers_118360a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12397994 & 1) == 0) {
      DAT_12397994 = DAT_12397994 | 1;
      FUN_102500e0("CEquipFoundLockCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb80);
    }
    return *DAT_12397978;
  }
  return 0;
}



