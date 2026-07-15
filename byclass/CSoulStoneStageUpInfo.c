// ===== class CSoulStoneStageUpInfo  (3 recovered methods) =====

/* --- CSoulStoneStageUpInfo::GetManagers @ 10520620 --- */
// [RE-AUTO c3]
// id: CSoulStoneStageUpInfo::GetManagers
// strings:
//   ""CSoulStoneStageUpInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneStageUpInfo::GetManagers
   strings:
     ""CSoulStoneStageUpInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSoulStoneStageUpInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7240 & 1) == 0) {
    DAT_123c7240 = DAT_123c7240 | 1;
    _DAT_123c7258 = &DAT_123c7248;
    DAT_123c725c = &DAT_123c7248;
    DAT_123c7248 = 0;
    FUN_100d83d0("CSoulStoneStageUpInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fa30);
  }
  return DAT_123c7244;
}



/* --- CSoulStoneStageUpInfo::GetManagers_119be450 @ 119be450 --- */
// [RE-AUTO c3]
// id: CSoulStoneStageUpInfo::GetManagers
// strings:
//   ""CSoulStoneStageUpInfo""
//   ""CSoulStoneStageUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneStageUpInfo::GetManagers
   strings:
     ""CSoulStoneStageUpInfo""
     ""CSoulStoneStageUpInfo::GetManagers"" */

void CSoulStoneStageUpInfo__GetManagers_119be450(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_105298e0(0,"CSoulStoneStageUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc013c;
      if ((DAT_123c7240 & 1) == 0) {
        DAT_123c7240 = DAT_123c7240 | 1;
        FUN_102500e0("CSoulStoneStageUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa30);
      }
      if (((*DAT_123c7244 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CSoulStoneStageUpInfo",0), iVar3 == 0)) &&
         ((DAT_123c72d4 & 1) == 0)) {
        DAT_123c72dc = 0;
        DAT_123c72ec = 0;
        DAT_123c72f0 = 0;
        _DAT_123c72f4 = 0;
        DAT_123c72f8 = 0;
        DAT_123c72d4 = DAT_123c72d4 | 1;
        DAT_123c72d8 = &PTR_FUN_11dc01a8;
        DAT_123c72fc = _DAT_11de9ae0;
        DAT_123c7300 = _UNK_11de9ae4;
        uRam123c7304 = _UNK_11de9ae8;
        DAT_123c7308 = _UNK_11de9aec;
        DAT_123c730c = 1;
        DAT_123c72e0 = iVar3;
        _DAT_123c72e4 = iVar3;
        _DAT_123c72e8 = iVar3;
        FUN_11a8911f(&LAB_11cb4770);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a7c2b0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSoulStoneStageUpInfo::GetManagers_119be5a0 @ 119be5a0 --- */
// [RE-AUTO c3]
// id: CSoulStoneStageUpInfo::GetManagers
// strings:
//   ""CSoulStoneStageUpInfo""
//   ""CSoulStoneStageUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneStageUpInfo::GetManagers
   strings:
     ""CSoulStoneStageUpInfo""
     ""CSoulStoneStageUpInfo::GetManagers"" */

void CSoulStoneStageUpInfo__GetManagers_119be5a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_105298e0(0,"CSoulStoneStageUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc013c;
      if ((DAT_123c7240 & 1) == 0) {
        DAT_123c7240 = DAT_123c7240 | 1;
        FUN_102500e0("CSoulStoneStageUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa30);
      }
      if (((*DAT_123c7244 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CSoulStoneStageUpInfo",0), iVar3 == 0)) &&
         ((DAT_123c72d4 & 1) == 0)) {
        DAT_123c72dc = 0;
        DAT_123c72ec = 0;
        DAT_123c72f0 = 0;
        _DAT_123c72f4 = 0;
        DAT_123c72f8 = 0;
        DAT_123c72d4 = DAT_123c72d4 | 1;
        DAT_123c72d8 = &PTR_FUN_11dc01a8;
        DAT_123c72fc = _DAT_11de9ae0;
        DAT_123c7300 = _UNK_11de9ae4;
        uRam123c7304 = _UNK_11de9ae8;
        DAT_123c7308 = _UNK_11de9aec;
        DAT_123c730c = 1;
        DAT_123c72e0 = iVar3;
        _DAT_123c72e4 = iVar3;
        _DAT_123c72e8 = iVar3;
        FUN_11a8911f(&LAB_11cb4770);
      }
      local_8 = &PTR_FUN_11da54a8;
      CSoulStoneAttrInfo__GetManagers_11a7c100();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



