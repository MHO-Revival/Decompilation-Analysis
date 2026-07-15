// ===== class CNpcAtdOrgInfo  (2 recovered methods) =====

/* --- CNpcAtdOrgInfo::GetManagers @ 107ec020 --- */
// [RE-AUTO c3]
// id: CNpcAtdOrgInfo::GetManagers
// strings:
//   ""CNpcAtdOrgInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdOrgInfo::GetManagers
   strings:
     ""CNpcAtdOrgInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNpcAtdOrgInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bef3c & 1) == 0) {
    DAT_123bef3c = DAT_123bef3c | 1;
    _DAT_123bef54 = &DAT_123bef44;
    DAT_123bef58 = &DAT_123bef44;
    DAT_123bef44 = 0;
    FUN_100d83d0("CNpcAtdOrgInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71240);
  }
  return DAT_123bef40;
}



/* --- CNpcAtdOrgInfo::GetManagers_11931c10 @ 11931c10 --- */
// [RE-AUTO c3]
// id: CNpcAtdOrgInfo::GetManagers
// strings:
//   ""CNpcAtdOrgInfo""
//   ""CNpcAtdOrgInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdOrgInfo::GetManagers
   strings:
     ""CNpcAtdOrgInfo""
     ""CNpcAtdOrgInfo::GetManagers"" */

void CNpcAtdOrgInfo__GetManagers_11931c10(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10804040(0,"CNpcAtdOrgInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dcaedc;
      if ((DAT_123bef3c & 1) == 0) {
        DAT_123bef3c = DAT_123bef3c | 1;
        FUN_102500e0("CNpcAtdOrgInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71240);
      }
      if (((*DAT_123bef40 == 0) && (iVar3 = FUN_11679e10(&local_8,"CNpcAtdOrgInfo",0), iVar3 == 0))
         && ((DAT_123bf06c & 1) == 0)) {
        DAT_123bf0ac = 0;
        DAT_123bf0bc = 0;
        DAT_123bf0c0 = 0;
        _DAT_123bf0c4 = 0;
        DAT_123bf0c8 = 0;
        DAT_123bf06c = DAT_123bf06c | 1;
        _DAT_123bf0a8 = &PTR_FUN_11dcb068;
        DAT_123bf0cc = _DAT_11de9ae0;
        DAT_123bf0d0 = _UNK_11de9ae4;
        uRam123bf0d4 = _UNK_11de9ae8;
        DAT_123bf0d8 = _UNK_11de9aec;
        DAT_123bf0dc = 1;
        DAT_123bf0b0 = iVar3;
        _DAT_123bf0b4 = iVar3;
        _DAT_123bf0b8 = iVar3;
        FUN_11a8911f(&LAB_11cb2220);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1172ec70();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



