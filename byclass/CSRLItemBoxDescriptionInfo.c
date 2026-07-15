// ===== class CSRLItemBoxDescriptionInfo  (2 recovered methods) =====

/* --- CSRLItemBoxDescriptionInfo::GetManagers @ 1153b200 --- */
// [RE-AUTO c3]
// id: CSRLItemBoxDescriptionInfo::GetManagers
// strings:
//   ""CSRLItemBoxDescriptionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemBoxDescriptionInfo::GetManagers
   strings:
     ""CSRLItemBoxDescriptionInfo::GetManagers"" */

undefined *
CSRLItemBoxDescriptionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c7e8;
  if (param_3 == 0) {
    if ((DAT_122dec20 & 1) == 0) {
      DAT_122dec20 = DAT_122dec20 | 1;
      FUN_102500e0("CSRLItemBoxDescriptionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1810);
    }
    if ((undefined *)*DAT_122dec04 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec04;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122ded30 & 1) == 0) {
      DAT_122ded30 = DAT_122ded30 | 1;
      FUN_1153c0a0();
      FUN_11a8911f(&LAB_11ca15d0);
    }
    puVar1 = &DAT_122decf8;
  }
  return puVar1;
}



/* --- CSRLItemBoxDescriptionInfo::GetManagers_1153e6f0 @ 1153e6f0 --- */
// [RE-AUTO c3]
// id: CSRLItemBoxDescriptionInfo::GetManagers
// strings:
//   ""CSRLItemBoxDescriptionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemBoxDescriptionInfo::GetManagers
   strings:
     ""CSRLItemBoxDescriptionInfo::GetManagers"" */

undefined4 CSRLItemBoxDescriptionInfo__GetManagers_1153e6f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dec20 & 1) == 0) {
      DAT_122dec20 = DAT_122dec20 | 1;
      FUN_102500e0("CSRLItemBoxDescriptionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1810);
    }
    return *DAT_122dec04;
  }
  return 0;
}



