// ===== class CEffectAOEInfo  (2 recovered methods) =====

/* --- CEffectAOEInfo::GetManagers @ 115f1b20 --- */
// [RE-AUTO c3]
// id: CEffectAOEInfo::GetManagers
// strings:
//   ""CEffectAOEInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEffectAOEInfo::GetManagers
   strings:
     ""CEffectAOEInfo::GetManagers"" */

undefined * CEffectAOEInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d330b8;
  if (param_3 == 0) {
    if ((DAT_122dfdf8 & 1) == 0) {
      DAT_122dfdf8 = DAT_122dfdf8 | 1;
      FUN_102500e0("CEffectAOEInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca51b0);
    }
    if ((undefined *)*DAT_122dfddc != (undefined *)0x0) {
      return (undefined *)*DAT_122dfddc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dfe80 & 1) == 0) {
      DAT_122dfe80 = DAT_122dfe80 | 1;
      FUN_115f2000();
      FUN_11a8911f(&LAB_11ca5090);
    }
    puVar1 = &DAT_122dfe48;
  }
  return puVar1;
}



/* --- CEffectAOEInfo::GetManagers_115f2b50 @ 115f2b50 --- */
// [RE-AUTO c3]
// id: CEffectAOEInfo::GetManagers
// strings:
//   ""CEffectAOEInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEffectAOEInfo::GetManagers
   strings:
     ""CEffectAOEInfo::GetManagers"" */

undefined4 CEffectAOEInfo__GetManagers_115f2b50(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dfdf8 & 1) == 0) {
      DAT_122dfdf8 = DAT_122dfdf8 | 1;
      FUN_102500e0("CEffectAOEInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca51b0);
    }
    return *DAT_122dfddc;
  }
  return 0;
}



