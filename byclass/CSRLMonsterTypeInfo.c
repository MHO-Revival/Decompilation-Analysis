// ===== class CSRLMonsterTypeInfo  (2 recovered methods) =====

/* --- CSRLMonsterTypeInfo::GetManagers @ 1153b520 --- */
// [RE-AUTO c3]
// id: CSRLMonsterTypeInfo::GetManagers
// strings:
//   ""CSRLMonsterTypeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMonsterTypeInfo::GetManagers
   strings:
     ""CSRLMonsterTypeInfo::GetManagers"" */

undefined * CSRLMonsterTypeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2cab8;
  if (param_3 == 0) {
    if ((DAT_122decc0 & 1) == 0) {
      DAT_122decc0 = DAT_122decc0 | 1;
      FUN_102500e0("CSRLMonsterTypeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1900);
    }
    if ((undefined *)*DAT_122deca4 != (undefined *)0x0) {
      return (undefined *)*DAT_122deca4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dee5c & 1) == 0) {
      DAT_122dee5c = DAT_122dee5c | 1;
      FUN_1153c280();
      FUN_11a8911f(&LAB_11ca17b0);
    }
    puVar1 = &DAT_122dee24;
  }
  return puVar1;
}



/* --- CSRLMonsterTypeInfo::GetManagers_1153e880 @ 1153e880 --- */
// [RE-AUTO c3]
// id: CSRLMonsterTypeInfo::GetManagers
// strings:
//   ""CSRLMonsterTypeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMonsterTypeInfo::GetManagers
   strings:
     ""CSRLMonsterTypeInfo::GetManagers"" */

undefined4 CSRLMonsterTypeInfo__GetManagers_1153e880(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122decc0 & 1) == 0) {
      DAT_122decc0 = DAT_122decc0 | 1;
      FUN_102500e0("CSRLMonsterTypeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1900);
    }
    return *DAT_122deca4;
  }
  return 0;
}



