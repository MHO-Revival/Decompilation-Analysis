// ===== class CGuildLevelUpInfo  (3 recovered methods) =====

/* --- CGuildLevelUpInfo::GetManagers @ 108ad960 --- */
// [RE-AUTO c3]
// id: CGuildLevelUpInfo::GetManagers
// strings:
//   ""CGuildLevelUpInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildLevelUpInfo::GetManagers
   strings:
     ""CGuildLevelUpInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGuildLevelUpInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfab4 & 1) == 0) {
    DAT_123bfab4 = DAT_123bfab4 | 1;
    _DAT_123bfaac = &DAT_123bfa9c;
    DAT_123bfab0 = &DAT_123bfa9c;
    DAT_123bfa9c = 0;
    FUN_100d83d0("CGuildLevelUpInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c751b0);
  }
  return DAT_123bfa98;
}



/* --- CGuildLevelUpInfo::GetManagers_1190afa0 @ 1190afa0 --- */
// [RE-AUTO c3]
// id: CGuildLevelUpInfo::GetManagers
// strings:
//   ""CGuildLevelUpInfo""
//   ""CGuildLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildLevelUpInfo::GetManagers
   strings:
     ""CGuildLevelUpInfo""
     ""CGuildLevelUpInfo::GetManagers"" */

void CGuildLevelUpInfo__GetManagers_1190afa0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108b8120(0,"CGuildLevelUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd4ee0;
      if ((DAT_123bfab4 & 1) == 0) {
        DAT_123bfab4 = DAT_123bfab4 | 1;
        FUN_102500e0("CGuildLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c751b0);
      }
      if (((*DAT_123bfa98 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildLevelUpInfo",0), iVar3 == 0)) &&
         ((DAT_123bfa8c & 1) == 0)) {
        DAT_123bfa58 = 0;
        DAT_123bfa68 = 0;
        DAT_123bfa6c = 0;
        _DAT_123bfa70 = 0;
        DAT_123bfa74 = 0;
        DAT_123bfa8c = DAT_123bfa8c | 1;
        _DAT_123bfa54 = &PTR_FUN_11dd4ee8;
        DAT_123bfa78 = _DAT_11de9ae0;
        DAT_123bfa7c = _UNK_11de9ae4;
        uRam123bfa80 = _UNK_11de9ae8;
        DAT_123bfa84 = _UNK_11de9aec;
        DAT_123bfa88 = 1;
        DAT_123bfa5c = iVar3;
        _DAT_123bfa60 = iVar3;
        _DAT_123bfa64 = iVar3;
        FUN_11a8911f(&LAB_11cb1290);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a01c90();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildLevelUpInfo::GetManagers_1190b0f0 @ 1190b0f0 --- */
// [RE-AUTO c3]
// id: CGuildLevelUpInfo::GetManagers
// strings:
//   ""CGuildLevelUpInfo""
//   ""CGuildLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildLevelUpInfo::GetManagers
   strings:
     ""CGuildLevelUpInfo""
     ""CGuildLevelUpInfo::GetManagers"" */

void CGuildLevelUpInfo__GetManagers_1190b0f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108b8120(0,"CGuildLevelUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd4ee0;
      if ((DAT_123bfab4 & 1) == 0) {
        DAT_123bfab4 = DAT_123bfab4 | 1;
        FUN_102500e0("CGuildLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c751b0);
      }
      if (((*DAT_123bfa98 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildLevelUpInfo",0), iVar3 == 0)) &&
         ((DAT_123bfa8c & 1) == 0)) {
        DAT_123bfa58 = 0;
        DAT_123bfa68 = 0;
        DAT_123bfa6c = 0;
        _DAT_123bfa70 = 0;
        DAT_123bfa74 = 0;
        DAT_123bfa8c = DAT_123bfa8c | 1;
        _DAT_123bfa54 = &PTR_FUN_11dd4ee8;
        DAT_123bfa78 = _DAT_11de9ae0;
        DAT_123bfa7c = _UNK_11de9ae4;
        uRam123bfa80 = _UNK_11de9ae8;
        DAT_123bfa84 = _UNK_11de9aec;
        DAT_123bfa88 = 1;
        DAT_123bfa5c = iVar3;
        _DAT_123bfa60 = iVar3;
        _DAT_123bfa64 = iVar3;
        FUN_11a8911f(&LAB_11cb1290);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a01c80();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



