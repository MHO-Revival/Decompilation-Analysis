// ===== class CItemBoxInfo  (2 recovered methods) =====

/* --- CItemBoxInfo::GetManagers @ 1052c470 --- */
// [RE-AUTO c3]
// id: CItemBoxInfo::GetManagers
// strings:
//   ""CItemBoxInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBoxInfo::GetManagers
   strings:
     ""CItemBoxInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CItemBoxInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be8e4 & 1) == 0) {
    DAT_123be8e4 = DAT_123be8e4 | 1;
    _DAT_123be8dc = &DAT_123be8cc;
    DAT_123be8e0 = &DAT_123be8cc;
    DAT_123be8cc = 0;
    FUN_100d83d0("CItemBoxInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fe70);
  }
  return DAT_123be8c8;
}



/* --- CItemBoxInfo::GetManagers_119245c0 @ 119245c0 --- */
// [RE-AUTO c3]
// id: CItemBoxInfo::GetManagers
// strings:
//   ""CItemBoxInfo""
//   ""CItemBoxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBoxInfo::GetManagers
   strings:
     ""CItemBoxInfo""
     ""CItemBoxInfo::GetManagers"" */

void CItemBoxInfo__GetManagers_119245c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1053b0a0(0,"CItemBoxInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc0af8;
      if ((DAT_123be8e4 & 1) == 0) {
        DAT_123be8e4 = DAT_123be8e4 | 1;
        FUN_102500e0("CItemBoxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fe70);
      }
      if (((*DAT_123be8c8 == 0) && (iVar3 = FUN_11679e10(&local_8,"CItemBoxInfo",0), iVar3 == 0)) &&
         ((DAT_123be688 & 1) == 0)) {
        DAT_123be654 = 0;
        DAT_123be664 = 0;
        DAT_123be668 = 0;
        _DAT_123be66c = 0;
        DAT_123be670 = 0;
        DAT_123be688 = DAT_123be688 | 1;
        _DAT_123be650 = &PTR_FUN_11dc0b8c;
        DAT_123be674 = _DAT_11de9ae0;
        DAT_123be678 = _UNK_11de9ae4;
        uRam123be67c = _UNK_11de9ae8;
        DAT_123be680 = _UNK_11de9aec;
        DAT_123be684 = 1;
        DAT_123be658 = iVar3;
        _DAT_123be65c = iVar3;
        _DAT_123be660 = iVar3;
        FUN_11a8911f(&LAB_11cb1b90);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117fc140();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



