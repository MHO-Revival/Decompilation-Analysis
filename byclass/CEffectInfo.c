// ===== class CEffectInfo  (3 recovered methods) =====

/* --- CEffectInfo::GetManagers @ 10a9f020 --- */
// [RE-AUTO c3]
// id: CEffectInfo::GetManagers
// strings:
//   ""CEffectInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEffectInfo::GetManagers
   strings:
     ""CEffectInfo::GetManagers"" */

undefined * CEffectInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc05a8;
  if (param_3 == 0) {
    if ((DAT_12020ac4 & 1) == 0) {
      DAT_12020ac4 = DAT_12020ac4 | 1;
      FUN_102500e0("CEffectInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7eb60);
    }
    if ((undefined *)*DAT_12020aa8 != (undefined *)0x0) {
      return (undefined *)*DAT_12020aa8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12020b20 & 1) == 0) {
      DAT_12020b20 = DAT_12020b20 | 1;
      FUN_10a9f290();
      FUN_11a8911f(&LAB_11c7eb00);
    }
    puVar1 = &DAT_12020ae8;
  }
  return puVar1;
}



/* --- CEffectInfo::GetManagers_10a9f800 @ 10a9f800 --- */
// [RE-AUTO c3]
// id: CEffectInfo::GetManagers
// strings:
//   ""CEffectInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEffectInfo::GetManagers
   strings:
     ""CEffectInfo::GetManagers"" */

undefined4 CEffectInfo__GetManagers_10a9f800(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12020ac4 & 1) == 0) {
      DAT_12020ac4 = DAT_12020ac4 | 1;
      FUN_102500e0("CEffectInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7eb60);
    }
    return *DAT_12020aa8;
  }
  return 0;
}



/* --- CEffectInfo::GetManagers_116e91f0 @ 116e91f0 --- */
// [RE-AUTO c3]
// id: CEffectInfo::GetManagers
// strings:
//   ""CEffectInfo::GetManagers""
//   ""CEffectInfo""

/* [RE-AUTO c3]
   id: CEffectInfo::GetManagers
   strings:
     ""CEffectInfo::GetManagers""
     ""CEffectInfo"" */

void CEffectInfo__GetManagers_116e91f0(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1;
  uVar3 = 0;
  iVar2 = (int)*param_1;
  if ((int)param_1[1] - iVar2 >> 2 != 0) {
    do {
      if (*(int *)(iVar2 + uVar3 * 4) != 0) {
        param_1 = &PTR_FUN_11cc05a8;
        if ((DAT_12020ac4 & 1) == 0) {
          DAT_12020ac4 = DAT_12020ac4 | 1;
          FUN_102500e0("CEffectInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7eb60);
        }
        if (((*DAT_12020aa8 == 0) && (iVar2 = FUN_11679e10(&param_1,"CEffectInfo",0), iVar2 == 0))
           && ((DAT_12020b20 & 1) == 0)) {
          DAT_12020b20 = DAT_12020b20 | 1;
          FUN_10a9f290();
          FUN_11a8911f(&LAB_11ca8060);
        }
      }
      uVar3 = uVar3 + 1;
      iVar2 = *piVar1;
    } while (uVar3 < (uint)(piVar1[1] - iVar2 >> 2));
  }
  return;
}



