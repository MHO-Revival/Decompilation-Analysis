// ===== class CMonolopyBlockInfo  (4 recovered methods) =====

/* --- CMonolopyBlockInfo::GetManagers @ 109bb270 --- */
// [RE-AUTO c3]
// id: CMonolopyBlockInfo::GetManagers
// strings:
//   ""CMonolopyBlockInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyBlockInfo::GetManagers
   strings:
     ""CMonolopyBlockInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMonolopyBlockInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8d08 & 1) == 0) {
    DAT_123c8d08 = DAT_123c8d08 | 1;
    _DAT_123c8d20 = &DAT_123c8d10;
    DAT_123c8d24 = &DAT_123c8d10;
    DAT_123c8d10 = 0;
    FUN_100d83d0("CMonolopyBlockInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7bd80);
  }
  return DAT_123c8d0c;
}



/* --- CMonolopyBlockInfo::GetManagers_119bbd00 @ 119bbd00 --- */
// [RE-AUTO c3]
// id: CMonolopyBlockInfo::GetManagers
// strings:
//   ""CMonolopyBlockInfo""
//   ""CMonolopyBlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyBlockInfo::GetManagers
   strings:
     ""CMonolopyBlockInfo""
     ""CMonolopyBlockInfo::GetManagers"" */

void CMonolopyBlockInfo__GetManagers_119bbd00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be710(0,"CMonolopyBlockInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2830;
      if ((DAT_123c8d08 & 1) == 0) {
        DAT_123c8d08 = DAT_123c8d08 | 1;
        FUN_102500e0("CMonolopyBlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bd80);
      }
      if (((*DAT_123c8d0c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyBlockInfo",0), iVar3 == 0)) &&
         ((DAT_123c8d58 & 1) == 0)) {
        DAT_123c8d60 = 0;
        DAT_123c8d70 = 0;
        DAT_123c8d74 = 0;
        _DAT_123c8d78 = 0;
        DAT_123c8d7c = 0;
        DAT_123c8d58 = DAT_123c8d58 | 1;
        _DAT_123c8d5c = &PTR_FUN_11de285c;
        DAT_123c8d80 = _DAT_11de9ae0;
        DAT_123c8d84 = _UNK_11de9ae4;
        uRam123c8d88 = _UNK_11de9ae8;
        DAT_123c8d8c = _UNK_11de9aec;
        DAT_123c8d90 = 1;
        DAT_123c8d64 = iVar3;
        _DAT_123c8d68 = iVar3;
        _DAT_123c8d6c = iVar3;
        FUN_11a8911f(&LAB_11cb46b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a79110();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonolopyBlockInfo::GetManagers_119bbe50 @ 119bbe50 --- */
// [RE-AUTO c3]
// id: CMonolopyBlockInfo::GetManagers
// strings:
//   ""CMonolopyBlockInfo""
//   ""CMonolopyBlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyBlockInfo::GetManagers
   strings:
     ""CMonolopyBlockInfo""
     ""CMonolopyBlockInfo::GetManagers"" */

void CMonolopyBlockInfo__GetManagers_119bbe50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be710(0,"CMonolopyBlockInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2830;
      if ((DAT_123c8d08 & 1) == 0) {
        DAT_123c8d08 = DAT_123c8d08 | 1;
        FUN_102500e0("CMonolopyBlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bd80);
      }
      if (((*DAT_123c8d0c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyBlockInfo",0), iVar3 == 0)) &&
         ((DAT_123c8d58 & 1) == 0)) {
        DAT_123c8d60 = 0;
        DAT_123c8d70 = 0;
        DAT_123c8d74 = 0;
        _DAT_123c8d78 = 0;
        DAT_123c8d7c = 0;
        DAT_123c8d58 = DAT_123c8d58 | 1;
        _DAT_123c8d5c = &PTR_FUN_11de285c;
        DAT_123c8d80 = _DAT_11de9ae0;
        DAT_123c8d84 = _UNK_11de9ae4;
        uRam123c8d88 = _UNK_11de9ae8;
        DAT_123c8d8c = _UNK_11de9aec;
        DAT_123c8d90 = 1;
        DAT_123c8d64 = iVar3;
        _DAT_123c8d68 = iVar3;
        _DAT_123c8d6c = iVar3;
        FUN_11a8911f(&LAB_11cb46b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a79100();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_11a79470();
  return;
}



/* --- CMonolopyBlockInfo::GetManagers_11a78e00 @ 11a78e00 --- */
// [RE-AUTO c3]
// id: CMonolopyBlockInfo::GetManagers
// strings:
//   ""CMonolopyBlockInfo""
//   ""CMonolopyBlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyBlockInfo::GetManagers
   strings:
     ""CMonolopyBlockInfo""
     ""CMonolopyBlockInfo::GetManagers"" */

void __fastcall CMonolopyBlockInfo__GetManagers_11a78e00(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_109be710(0,"CMonolopyBlockInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11de2830;
      if ((DAT_123c8d08 & 1) == 0) {
        DAT_123c8d08 = DAT_123c8d08 | 1;
        FUN_102500e0("CMonolopyBlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bd80);
      }
      puVar3 = (undefined *)*DAT_123c8d0c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CMonolopyBlockInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123c8d58 & 1) == 0) {
            DAT_123c8d60 = 0;
            DAT_123c8d70 = 0;
            DAT_123c8d74 = 0;
            _DAT_123c8d78 = 0;
            DAT_123c8d7c = 0;
            DAT_123c8d58 = DAT_123c8d58 | 1;
            _DAT_123c8d5c = &PTR_FUN_11de285c;
            DAT_123c8d80 = _DAT_11de9ae0;
            DAT_123c8d84 = _UNK_11de9ae4;
            uRam123c8d88 = _UNK_11de9ae8;
            DAT_123c8d8c = _UNK_11de9aec;
            DAT_123c8d90 = 1;
            DAT_123c8d64 = puVar3;
            _DAT_123c8d68 = puVar3;
            _DAT_123c8d6c = puVar3;
            FUN_11a8911f(&LAB_11cb7a30);
          }
          puVar3 = &DAT_123c8d5c;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x18);
        if (piVar1 == *(int **)(param_1 + 0x1c)) {
          FUN_119bbfe0(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



