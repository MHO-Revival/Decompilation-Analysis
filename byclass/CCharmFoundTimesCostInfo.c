// ===== class CCharmFoundTimesCostInfo  (2 recovered methods) =====

/* --- CCharmFoundTimesCostInfo::GetManagers @ 116362a0 --- */
// [RE-AUTO c3]
// id: CCharmFoundTimesCostInfo::GetManagers
// strings:
//   ""CCharmFoundTimesCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundTimesCostInfo::GetManagers
   strings:
     ""CCharmFoundTimesCostInfo::GetManagers"" */

undefined * CCharmFoundTimesCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d364b8;
  if (param_3 == 0) {
    if ((DAT_122e0470 & 1) == 0) {
      DAT_122e0470 = DAT_122e0470 | 1;
      FUN_102500e0("CCharmFoundTimesCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca65c0);
    }
    if ((undefined *)*DAT_122e0454 != (undefined *)0x0) {
      return (undefined *)*DAT_122e0454;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e05b8 & 1) == 0) {
      DAT_122e05b8 = DAT_122e05b8 | 1;
      FUN_11637310();
      FUN_11a8911f(&LAB_11ca63e0);
    }
    puVar1 = &DAT_122e0580;
  }
  return puVar1;
}



/* --- CCharmFoundTimesCostInfo::GetManagers_11639e90 @ 11639e90 --- */
// [RE-AUTO c3]
// id: CCharmFoundTimesCostInfo::GetManagers
// strings:
//   ""CCharmFoundTimesCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundTimesCostInfo::GetManagers
   strings:
     ""CCharmFoundTimesCostInfo::GetManagers"" */

undefined4 CCharmFoundTimesCostInfo__GetManagers_11639e90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0470 & 1) == 0) {
      DAT_122e0470 = DAT_122e0470 | 1;
      FUN_102500e0("CCharmFoundTimesCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca65c0);
    }
    return *DAT_122e0454;
  }
  return 0;
}



