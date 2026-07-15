// ===== class CEquipRandBaseItemRuleInfo  (2 recovered methods) =====

/* --- CEquipRandBaseItemRuleInfo::GetManagers @ 1184cf00 --- */
// [RE-AUTO c3]
// id: CEquipRandBaseItemRuleInfo::GetManagers
// strings:
//   ""CEquipRandBaseItemRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandBaseItemRuleInfo::GetManagers
   strings:
     ""CEquipRandBaseItemRuleInfo::GetManagers"" */

undefined *
CEquipRandBaseItemRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4f8f4;
  if (param_3 == 0) {
    if ((DAT_12398618 & 1) == 0) {
      DAT_12398618 = DAT_12398618 | 1;
      FUN_102500e0("CEquipRandBaseItemRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad640);
    }
    if ((undefined *)*DAT_123985fc != (undefined *)0x0) {
      return (undefined *)*DAT_123985fc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239896c & 1) == 0) {
      DAT_1239896c = DAT_1239896c | 1;
      FUN_1184fab0();
      FUN_11a8911f(&LAB_11cad490);
    }
    puVar1 = &DAT_12398934;
  }
  return puVar1;
}



/* --- CEquipRandBaseItemRuleInfo::GetManagers_118518c0 @ 118518c0 --- */
// [RE-AUTO c3]
// id: CEquipRandBaseItemRuleInfo::GetManagers
// strings:
//   ""CEquipRandBaseItemRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandBaseItemRuleInfo::GetManagers
   strings:
     ""CEquipRandBaseItemRuleInfo::GetManagers"" */

undefined4 CEquipRandBaseItemRuleInfo__GetManagers_118518c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398618 & 1) == 0) {
      DAT_12398618 = DAT_12398618 | 1;
      FUN_102500e0("CEquipRandBaseItemRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad640);
    }
    return *DAT_123985fc;
  }
  return 0;
}



