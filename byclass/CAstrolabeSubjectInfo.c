// ===== class CAstrolabeSubjectInfo  (3 recovered methods) =====

/* --- CAstrolabeSubjectInfo::GetManagers @ 109a85a0 --- */
// [RE-AUTO c3]
// id: CAstrolabeSubjectInfo::GetManagers
// strings:
//   ""CAstrolabeSubjectInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeSubjectInfo::GetManagers
   strings:
     ""CAstrolabeSubjectInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAstrolabeSubjectInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8b14 & 1) == 0) {
    DAT_123c8b14 = DAT_123c8b14 | 1;
    _DAT_123c8b2c = &DAT_123c8b1c;
    DAT_123c8b30 = &DAT_123c8b1c;
    DAT_123c8b1c = 0;
    FUN_100d83d0("CAstrolabeSubjectInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b3a0);
  }
  return DAT_123c8b18;
}



/* --- CAstrolabeSubjectInfo::GetManagers_119b0840 @ 119b0840 --- */
// [RE-AUTO c3]
// id: CAstrolabeSubjectInfo::GetManagers
// strings:
//   ""CAstrolabeSubjectInfo""
//   ""CAstrolabeSubjectInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeSubjectInfo::GetManagers
   strings:
     ""CAstrolabeSubjectInfo""
     ""CAstrolabeSubjectInfo::GetManagers"" */

void CAstrolabeSubjectInfo__GetManagers_119b0840(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109abac0(0,"CAstrolabeSubjectInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de1c6c;
      if ((DAT_123c8b14 & 1) == 0) {
        DAT_123c8b14 = DAT_123c8b14 | 1;
        FUN_102500e0("CAstrolabeSubjectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b3a0);
      }
      if (((*DAT_123c8b18 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeSubjectInfo",0), iVar3 == 0)) &&
         ((DAT_123c8b64 & 1) == 0)) {
        DAT_123c8b6c = 0;
        DAT_123c8b7c = 0;
        DAT_123c8b80 = 0;
        _DAT_123c8b84 = 0;
        DAT_123c8b88 = 0;
        DAT_123c8b64 = DAT_123c8b64 | 1;
        _DAT_123c8b68 = &PTR_FUN_11de1c88;
        DAT_123c8b8c = _DAT_11de9ae0;
        DAT_123c8b90 = _UNK_11de9ae4;
        uRam123c8b94 = _UNK_11de9ae8;
        DAT_123c8b98 = _UNK_11de9aec;
        DAT_123c8b9c = 1;
        DAT_123c8b70 = iVar3;
        _DAT_123c8b74 = iVar3;
        _DAT_123c8b78 = iVar3;
        FUN_11a8911f(&LAB_11cb4170);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76760();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAstrolabeSubjectInfo::GetManagers_119b0990 @ 119b0990 --- */
// [RE-AUTO c3]
// id: CAstrolabeSubjectInfo::GetManagers
// strings:
//   ""CAstrolabeSubjectInfo""
//   ""CAstrolabeSubjectInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeSubjectInfo::GetManagers
   strings:
     ""CAstrolabeSubjectInfo""
     ""CAstrolabeSubjectInfo::GetManagers"" */

void CAstrolabeSubjectInfo__GetManagers_119b0990(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109abac0(0,"CAstrolabeSubjectInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de1c6c;
      if ((DAT_123c8b14 & 1) == 0) {
        DAT_123c8b14 = DAT_123c8b14 | 1;
        FUN_102500e0("CAstrolabeSubjectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b3a0);
      }
      if (((*DAT_123c8b18 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeSubjectInfo",0), iVar3 == 0)) &&
         ((DAT_123c8b64 & 1) == 0)) {
        DAT_123c8b6c = 0;
        DAT_123c8b7c = 0;
        DAT_123c8b80 = 0;
        _DAT_123c8b84 = 0;
        DAT_123c8b88 = 0;
        DAT_123c8b64 = DAT_123c8b64 | 1;
        _DAT_123c8b68 = &PTR_FUN_11de1c88;
        DAT_123c8b8c = _DAT_11de9ae0;
        DAT_123c8b90 = _UNK_11de9ae4;
        uRam123c8b94 = _UNK_11de9ae8;
        DAT_123c8b98 = _UNK_11de9aec;
        DAT_123c8b9c = 1;
        DAT_123c8b70 = iVar3;
        _DAT_123c8b74 = iVar3;
        _DAT_123c8b78 = iVar3;
        FUN_11a8911f(&LAB_11cb4170);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76750();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



