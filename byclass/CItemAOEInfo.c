// ===== class CItemAOEInfo  (2 recovered methods) =====

/* --- CItemAOEInfo::GetManagers @ 115f1bc0 --- */
// [RE-AUTO c3]
// id: CItemAOEInfo::GetManagers
// strings:
//   ""CItemAOEInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemAOEInfo::GetManagers
   strings:
     ""CItemAOEInfo::GetManagers"" */

undefined * CItemAOEInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d33038;
  if (param_3 == 0) {
    if ((DAT_122dfdd8 & 1) == 0) {
      DAT_122dfdd8 = DAT_122dfdd8 | 1;
      FUN_102500e0("CItemAOEInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca51e0);
    }
    if ((undefined *)*DAT_122dfdbc != (undefined *)0x0) {
      return (undefined *)*DAT_122dfdbc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dfe44 & 1) == 0) {
      DAT_122dfe44 = DAT_122dfe44 | 1;
      FUN_115f2060();
      FUN_11a8911f(&LAB_11ca50f0);
    }
    puVar1 = &DAT_122dfe0c;
  }
  return puVar1;
}



/* --- CItemAOEInfo::GetManagers_115f2ba0 @ 115f2ba0 --- */
// [RE-AUTO c3]
// id: CItemAOEInfo::GetManagers
// strings:
//   ""CItemAOEInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemAOEInfo::GetManagers
   strings:
     ""CItemAOEInfo::GetManagers"" */

undefined4 CItemAOEInfo__GetManagers_115f2ba0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dfdd8 & 1) == 0) {
      DAT_122dfdd8 = DAT_122dfdd8 | 1;
      FUN_102500e0("CItemAOEInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca51e0);
    }
    return *DAT_122dfdbc;
  }
  return 0;
}



