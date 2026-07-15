// ===== class CCutSceneInfo  (2 recovered methods) =====

/* --- CCutSceneInfo::GetManagers @ 111602c0 --- */
// [RE-AUTO c3]
// id: CCutSceneInfo::GetManagers
// strings:
//   ""CCutSceneInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCutSceneInfo::GetManagers
   strings:
     ""CCutSceneInfo::GetManagers"" */

undefined * CCutSceneInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d15d80;
  if (param_3 == 0) {
    if ((DAT_1203f19c & 1) == 0) {
      DAT_1203f19c = DAT_1203f19c | 1;
      FUN_102500e0("CCutSceneInfo::GetManagers");
      FUN_11a8911f(&LAB_11c96e80);
    }
    if ((undefined *)*DAT_1203f180 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f180;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f1e0 & 1) == 0) {
      DAT_1203f1e0 = DAT_1203f1e0 | 1;
      FUN_11160890();
      FUN_11a8911f(&LAB_11c96c40);
    }
    puVar1 = &DAT_1203f1a8;
  }
  return puVar1;
}



/* --- CCutSceneInfo::GetManagers_11162e40 @ 11162e40 --- */
// [RE-AUTO c3]
// id: CCutSceneInfo::GetManagers
// strings:
//   ""CCutSceneInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCutSceneInfo::GetManagers
   strings:
     ""CCutSceneInfo::GetManagers"" */

undefined4 CCutSceneInfo__GetManagers_11162e40(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f19c & 1) == 0) {
      DAT_1203f19c = DAT_1203f19c | 1;
      FUN_102500e0("CCutSceneInfo::GetManagers");
      FUN_11a8911f(&LAB_11c96e80);
    }
    return *DAT_1203f180;
  }
  return 0;
}



