// ===== class CItemConvInfo  (2 recovered methods) =====

/* --- CItemConvInfo::GetManagers @ 115f72d0 --- */
// [RE-AUTO c3]
// id: CItemConvInfo::GetManagers
// strings:
//   ""CItemConvInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemConvInfo::GetManagers
   strings:
     ""CItemConvInfo::GetManagers"" */

undefined * CItemConvInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d335f4;
  if (param_3 == 0) {
    if ((DAT_122dff24 & 1) == 0) {
      DAT_122dff24 = DAT_122dff24 | 1;
      FUN_102500e0("CItemConvInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5570);
    }
    if ((undefined *)*DAT_122dff08 != (undefined *)0x0) {
      return (undefined *)*DAT_122dff08;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dff68 & 1) == 0) {
      DAT_122dff68 = DAT_122dff68 | 1;
      FUN_115f7540();
      FUN_11a8911f(&LAB_11ca5510);
    }
    puVar1 = &DAT_122dff30;
  }
  return puVar1;
}



/* --- CItemConvInfo::GetManagers_115f80f0 @ 115f80f0 --- */
// [RE-AUTO c3]
// id: CItemConvInfo::GetManagers
// strings:
//   ""CItemConvInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemConvInfo::GetManagers
   strings:
     ""CItemConvInfo::GetManagers"" */

undefined4 CItemConvInfo__GetManagers_115f80f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dff24 & 1) == 0) {
      DAT_122dff24 = DAT_122dff24 | 1;
      FUN_102500e0("CItemConvInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5570);
    }
    return *DAT_122dff08;
  }
  return 0;
}



