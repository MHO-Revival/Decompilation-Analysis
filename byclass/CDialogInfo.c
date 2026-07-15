// ===== class CDialogInfo  (2 recovered methods) =====

/* --- CDialogInfo::GetManagers @ 1024f7f0 --- */
// [RE-AUTO c3]
// id: CDialogInfo::GetManagers
// strings:
//   ""CDialogInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDialogInfo::GetManagers
   strings:
     ""CDialogInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDialogInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bdb7c & 1) == 0) {
    DAT_123bdb7c = DAT_123bdb7c | 1;
    _DAT_123bdac4 = &DAT_123bdab4;
    DAT_123bdac8 = &DAT_123bdab4;
    DAT_123bdab4 = 0;
    FUN_100d83d0("CDialogInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6e420);
  }
  return DAT_123bdab0;
}



/* --- CDialogInfo::GetManagers_118e1430 @ 118e1430 --- */
// [RE-AUTO c3]
// id: CDialogInfo::GetManagers
// strings:
//   ""CDialogInfo""
//   ""CDialogInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDialogInfo::GetManagers
   strings:
     ""CDialogInfo""
     ""CDialogInfo::GetManagers"" */

void CDialogInfo__GetManagers_118e1430(undefined **param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_102529b0(0,"CDialogInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  uVar2 = param_1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      param_1 = &PTR_FUN_11da5454;
      if ((DAT_123bdb7c & 1) == 0) {
        DAT_123bdb7c = DAT_123bdb7c | 1;
        FUN_102500e0("CDialogInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e420);
      }
      puVar5 = (undefined *)*DAT_123bdab0;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&param_1,"CDialogInfo",0), puVar5 == (undefined *)0x0))
      {
        if ((DAT_123bda10 & 1) == 0) {
          DAT_123bdb18 = 0;
          DAT_123bdb28 = 0;
          DAT_123bdb2c = 0;
          _DAT_123bdb30 = 0;
          DAT_123bdb34 = 0;
          DAT_123bda10 = DAT_123bda10 | 1;
          _DAT_123bdb14 = &PTR_FUN_11da530c;
          DAT_123bdb38 = _DAT_11de9ae0;
          DAT_123bdb3c = _UNK_11de9ae4;
          uRam123bdb40 = _UNK_11de9ae8;
          DAT_123bdb44 = _UNK_11de9aec;
          DAT_123bdb48 = 1;
          DAT_123bdb1c = puVar5;
          _DAT_123bdb20 = puVar5;
          _DAT_123bdb24 = puVar5;
          FUN_11a8911f(&LAB_11cb02d0);
        }
        puVar5 = &DAT_123bdb14;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < *(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2)) &&
         (iVar1 = *(int *)(*(int *)(puVar5 + 0x14) + iVar6 * 4), iVar1 != 0)) {
        CMessageColorInfo__GetManagers_118e1560(iVar1,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}



