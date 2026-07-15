// ===== class CAbnormalStateRelationInfo  (2 recovered methods) =====

/* --- CAbnormalStateRelationInfo::GetManagers @ 117cc2f0 --- */
// [RE-AUTO c3]
// id: CAbnormalStateRelationInfo::GetManagers
// strings:
//   ""CAbnormalStateRelationInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAbnormalStateRelationInfo::GetManagers
   strings:
     ""CAbnormalStateRelationInfo::GetManagers"" */

undefined *
CAbnormalStateRelationInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4992c;
  if (param_3 == 0) {
    if ((DAT_123936a8 & 1) == 0) {
      DAT_123936a8 = DAT_123936a8 | 1;
      FUN_102500e0("CAbnormalStateRelationInfo::GetManagers");
      FUN_11a8911f(&LAB_11caaae0);
    }
    if ((undefined *)*DAT_1239368c != (undefined *)0x0) {
      return (undefined *)*DAT_1239368c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239371c & 1) == 0) {
      DAT_1239371c = DAT_1239371c | 1;
      FUN_117cc720();
      FUN_11a8911f(&LAB_11caaa40);
    }
    puVar1 = &DAT_123936e4;
  }
  return puVar1;
}



/* --- CAbnormalStateRelationInfo::GetManagers_117ccd10 @ 117ccd10 --- */
// [RE-AUTO c3]
// id: CAbnormalStateRelationInfo::GetManagers
// strings:
//   ""CAbnormalStateRelationInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAbnormalStateRelationInfo::GetManagers
   strings:
     ""CAbnormalStateRelationInfo::GetManagers"" */

undefined4 CAbnormalStateRelationInfo__GetManagers_117ccd10(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123936a8 & 1) == 0) {
      DAT_123936a8 = DAT_123936a8 | 1;
      FUN_102500e0("CAbnormalStateRelationInfo::GetManagers");
      FUN_11a8911f(&LAB_11caaae0);
    }
    return *DAT_1239368c;
  }
  return 0;
}



