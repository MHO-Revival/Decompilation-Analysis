// ===== class CEquipFoundCostInfo  (2 recovered methods) =====

/* --- CEquipFoundCostInfo::GetManagers @ 118335c0 --- */
// [RE-AUTO c3]
// id: CEquipFoundCostInfo::GetManagers
// strings:
//   ""CEquipFoundCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundCostInfo::GetManagers
   strings:
     ""CEquipFoundCostInfo::GetManagers"" */

undefined * CEquipFoundCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4e754;
  if (param_3 == 0) {
    if ((DAT_12397954 & 1) == 0) {
      DAT_12397954 = DAT_12397954 | 1;
      FUN_102500e0("CEquipFoundCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb50);
    }
    if ((undefined *)*DAT_12397938 != (undefined *)0x0) {
      return (undefined *)*DAT_12397938;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12397a38 & 1) == 0) {
      DAT_12397a38 = DAT_12397a38 | 1;
      FUN_118341b0();
      FUN_11a8911f(&LAB_11cac940);
    }
    puVar1 = &DAT_12397a00;
  }
  return puVar1;
}



/* --- CEquipFoundCostInfo::GetManagers_11836050 @ 11836050 --- */
// [RE-AUTO c3]
// id: CEquipFoundCostInfo::GetManagers
// strings:
//   ""CEquipFoundCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundCostInfo::GetManagers
   strings:
     ""CEquipFoundCostInfo::GetManagers"" */

undefined4 CEquipFoundCostInfo__GetManagers_11836050(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12397954 & 1) == 0) {
      DAT_12397954 = DAT_12397954 | 1;
      FUN_102500e0("CEquipFoundCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacb50);
    }
    return *DAT_12397938;
  }
  return 0;
}



