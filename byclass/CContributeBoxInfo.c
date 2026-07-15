// ===== class CContributeBoxInfo  (2 recovered methods) =====

/* --- CContributeBoxInfo::GetManagers @ 1183ed70 --- */
// [RE-AUTO c3]
// id: CContributeBoxInfo::GetManagers
// strings:
//   ""CContributeBoxInfo::GetManagers""

/* [RE-AUTO c3]
   id: CContributeBoxInfo::GetManagers
   strings:
     ""CContributeBoxInfo::GetManagers"" */

undefined * CContributeBoxInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4ec9c;
  if (param_3 == 0) {
    if ((DAT_12397f78 & 1) == 0) {
      DAT_12397f78 = DAT_12397f78 | 1;
      FUN_102500e0("CContributeBoxInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad010);
    }
    if ((undefined *)*DAT_12397f5c != (undefined *)0x0) {
      return (undefined *)*DAT_12397f5c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239804c & 1) == 0) {
      DAT_1239804c = DAT_1239804c | 1;
      FUN_1183f0f0();
      FUN_11a8911f(&LAB_11cacfb0);
    }
    puVar1 = &DAT_12398018;
  }
  return puVar1;
}



/* --- CContributeBoxInfo::GetManagers_1183f930 @ 1183f930 --- */
// [RE-AUTO c3]
// id: CContributeBoxInfo::GetManagers
// strings:
//   ""CContributeBoxInfo::GetManagers""

/* [RE-AUTO c3]
   id: CContributeBoxInfo::GetManagers
   strings:
     ""CContributeBoxInfo::GetManagers"" */

undefined4 CContributeBoxInfo__GetManagers_1183f930(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12397f78 & 1) == 0) {
      DAT_12397f78 = DAT_12397f78 | 1;
      FUN_102500e0("CContributeBoxInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad010);
    }
    return *DAT_12397f5c;
  }
  return 0;
}



