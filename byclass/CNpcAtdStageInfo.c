// ===== class CNpcAtdStageInfo  (2 recovered methods) =====

/* --- CNpcAtdStageInfo::GetManagers @ 104d8b10 --- */
// [RE-AUTO c3]
// id: CNpcAtdStageInfo::GetManagers
// strings:
//   ""CNpcAtdStageInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdStageInfo::GetManagers
   strings:
     ""CNpcAtdStageInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNpcAtdStageInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be1a4 & 1) == 0) {
    DAT_123be1a4 = DAT_123be1a4 | 1;
    _DAT_123be19c = &DAT_123be18c;
    DAT_123be1a0 = &DAT_123be18c;
    DAT_123be18c = 0;
    FUN_100d83d0("CNpcAtdStageInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eb40);
  }
  return DAT_123be188;
}



/* --- CNpcAtdStageInfo::GetManagers_11931ae0 @ 11931ae0 --- */
// [RE-AUTO c3]
// id: CNpcAtdStageInfo::GetManagers
// strings:
//   ""CNpcAtdStageInfo""
//   ""CNpcAtdStageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdStageInfo::GetManagers
   strings:
     ""CNpcAtdStageInfo""
     ""CNpcAtdStageInfo::GetManagers"" */

void CNpcAtdStageInfo__GetManagers_11931ae0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104ee680(0,"CNpcAtdStageInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd90;
      if ((DAT_123be1a4 & 1) == 0) {
        DAT_123be1a4 = DAT_123be1a4 | 1;
        FUN_102500e0("CNpcAtdStageInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb40);
      }
      if (((*DAT_123be188 == 0) && (iVar3 = FUN_11679e10(&local_8,"CNpcAtdStageInfo",0), iVar3 == 0)
          ) && ((DAT_123bdf08 & 1) == 0)) {
        DAT_123bded4 = 0;
        DAT_123bdee4 = 0;
        DAT_123bdee8 = 0;
        _DAT_123bdeec = 0;
        DAT_123bdef0 = 0;
        DAT_123bdf08 = DAT_123bdf08 | 1;
        _DAT_123bded0 = &PTR_FUN_11dbdf4c;
        DAT_123bdef4 = _DAT_11de9ae0;
        DAT_123bdef8 = _UNK_11de9ae4;
        uRam123bdefc = _UNK_11de9ae8;
        DAT_123bdf00 = _UNK_11de9aec;
        DAT_123bdf04 = 1;
        DAT_123bded8 = iVar3;
        _DAT_123bdedc = iVar3;
        _DAT_123bdee0 = iVar3;
        FUN_11a8911f(&LAB_11cb22e0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117304f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



