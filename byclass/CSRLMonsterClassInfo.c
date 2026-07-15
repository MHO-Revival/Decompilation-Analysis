// ===== class CSRLMonsterClassInfo  (2 recovered methods) =====

/* --- CSRLMonsterClassInfo::GetManagers @ 1153b480 --- */
// [RE-AUTO c3]
// id: CSRLMonsterClassInfo::GetManagers
// strings:
//   ""CSRLMonsterClassInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMonsterClassInfo::GetManagers
   strings:
     ""CSRLMonsterClassInfo::GetManagers"" */

undefined * CSRLMonsterClassInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2ca28;
  if (param_3 == 0) {
    if ((DAT_122deca0 & 1) == 0) {
      DAT_122deca0 = DAT_122deca0 | 1;
      FUN_102500e0("CSRLMonsterClassInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca18d0);
    }
    if ((undefined *)*DAT_122dec84 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec84;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dee20 & 1) == 0) {
      DAT_122dee20 = DAT_122dee20 | 1;
      FUN_1153c220();
      FUN_11a8911f(&LAB_11ca1750);
    }
    puVar1 = &DAT_122dede8;
  }
  return puVar1;
}



/* --- CSRLMonsterClassInfo::GetManagers_1153e830 @ 1153e830 --- */
// [RE-AUTO c3]
// id: CSRLMonsterClassInfo::GetManagers
// strings:
//   ""CSRLMonsterClassInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMonsterClassInfo::GetManagers
   strings:
     ""CSRLMonsterClassInfo::GetManagers"" */

undefined4 CSRLMonsterClassInfo__GetManagers_1153e830(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deca0 & 1) == 0) {
      DAT_122deca0 = DAT_122deca0 | 1;
      FUN_102500e0("CSRLMonsterClassInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca18d0);
    }
    return *DAT_122dec84;
  }
  return 0;
}



