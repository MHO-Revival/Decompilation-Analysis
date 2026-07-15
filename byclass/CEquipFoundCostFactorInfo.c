// ===== class CEquipFoundCostFactorInfo  (2 recovered methods) =====

/* --- CEquipFoundCostFactorInfo::GetManagers @ 11833520 --- */
// [RE-AUTO c3]
// id: CEquipFoundCostFactorInfo::GetManagers
// strings:
//   ""CEquipFoundCostFactorInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundCostFactorInfo::GetManagers
   strings:
     ""CEquipFoundCostFactorInfo::GetManagers"" */

undefined *
CEquipFoundCostFactorInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4e7e0;
  if (param_3 == 0) {
    if ((DAT_12397974 & 1) == 0) {
      DAT_12397974 = DAT_12397974 | 1;
      FUN_102500e0("CEquipFoundCostFactorInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb20);
    }
    if ((undefined *)*DAT_12397958 != (undefined *)0x0) {
      return (undefined *)*DAT_12397958;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12397a74 & 1) == 0) {
      DAT_12397a74 = DAT_12397a74 | 1;
      FUN_11834150();
      FUN_11a8911f(&LAB_11cac8e0);
    }
    puVar1 = &DAT_12397a3c;
  }
  return puVar1;
}



/* --- CEquipFoundCostFactorInfo::GetManagers_11836000 @ 11836000 --- */
// [RE-AUTO c3]
// id: CEquipFoundCostFactorInfo::GetManagers
// strings:
//   ""CEquipFoundCostFactorInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundCostFactorInfo::GetManagers
   strings:
     ""CEquipFoundCostFactorInfo::GetManagers"" */

undefined4 CEquipFoundCostFactorInfo__GetManagers_11836000(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12397974 & 1) == 0) {
      DAT_12397974 = DAT_12397974 | 1;
      FUN_102500e0("CEquipFoundCostFactorInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb20);
    }
    return *DAT_12397958;
  }
  return 0;
}



