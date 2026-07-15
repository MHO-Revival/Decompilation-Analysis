// ===== class CManufactureIngredientLearnInfo  (2 recovered methods) =====

/* --- CManufactureIngredientLearnInfo::GetManagers @ 11207500 --- */
// [RE-AUTO c3]
// id: CManufactureIngredientLearnInfo::GetManagers
// strings:
//   ""CManufactureIngredientLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureIngredientLearnInfo::GetManagers
   strings:
     ""CManufactureIngredientLearnInfo::GetManagers"" */

undefined4 *
CManufactureIngredientLearnInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d186f0;
  if (param_3 == 0) {
    if ((DAT_1203f70c & 1) == 0) {
      DAT_1203f70c = DAT_1203f70c | 1;
      FUN_102500e0("CManufactureIngredientLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97de0);
    }
    if ((undefined4 *)*DAT_1203f6f0 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f6f0;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f7e4 & 1) == 0) {
      DAT_1203f7e4 = DAT_1203f7e4 | 1;
      FUN_11208140();
      FUN_11a8911f(&LAB_11c97c60);
    }
    puVar1 = &DAT_1203f7ac;
  }
  return puVar1;
}



/* --- CManufactureIngredientLearnInfo::GetManagers_11209f60 @ 11209f60 --- */
// [RE-AUTO c3]
// id: CManufactureIngredientLearnInfo::GetManagers
// strings:
//   ""CManufactureIngredientLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureIngredientLearnInfo::GetManagers
   strings:
     ""CManufactureIngredientLearnInfo::GetManagers"" */

undefined4 CManufactureIngredientLearnInfo__GetManagers_11209f60(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f70c & 1) == 0) {
      DAT_1203f70c = DAT_1203f70c | 1;
      FUN_102500e0("CManufactureIngredientLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97de0);
    }
    return *DAT_1203f6f0;
  }
  return 0;
}



