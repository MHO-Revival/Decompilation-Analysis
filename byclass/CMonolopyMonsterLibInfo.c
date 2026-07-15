// ===== class CMonolopyMonsterLibInfo  (4 recovered methods) =====

/* --- CMonolopyMonsterLibInfo::GetManagers @ 119ba010 --- */
// [RE-AUTO c3]
// id: CMonolopyMonsterLibInfo::GetManagers
// strings:
//   ""CMonolopyMonsterLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonolopyMonsterLibInfo::GetManagers
   strings:
     ""CMonolopyMonsterLibInfo::GetManagers"" */

undefined * CMonolopyMonsterLibInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d68450;
  if (param_3 == 0) {
    if ((DAT_123a2c04 & 1) == 0) {
      DAT_123a2c04 = DAT_123a2c04 | 1;
      FUN_102500e0("CMonolopyMonsterLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4680);
    }
    if ((undefined *)*DAT_123a2be8 != (undefined *)0x0) {
      return (undefined *)*DAT_123a2be8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a2c74 & 1) == 0) {
      DAT_123a2c74 = DAT_123a2c74 | 1;
      FUN_119ba320();
      FUN_11a8911f(&LAB_11cb4620);
    }
    puVar1 = &DAT_123a2c3c;
  }
  return puVar1;
}



/* --- CMonolopyMonsterLibInfo::GetManagers_119bac50 @ 119bac50 --- */
// [RE-AUTO c3]
// id: CMonolopyMonsterLibInfo::GetManagers
// strings:
//   ""CMonolopyMonsterLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonolopyMonsterLibInfo::GetManagers
   strings:
     ""CMonolopyMonsterLibInfo::GetManagers"" */

undefined4 CMonolopyMonsterLibInfo__GetManagers_119bac50(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a2c04 & 1) == 0) {
      DAT_123a2c04 = DAT_123a2c04 | 1;
      FUN_102500e0("CMonolopyMonsterLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4680);
    }
    return *DAT_123a2be8;
  }
  return 0;
}



/* --- CMonolopyMonsterLibInfo::GetManagers_119bae80 @ 119bae80 --- */
// [RE-AUTO c3]
// id: CMonolopyMonsterLibInfo::GetManagers
// calls: CMonolopyMonsterLibInfo::GetManagers
// strings:
//   ""CMonolopyMonsterLibInfo""
//   ""CMonolopyMonsterLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyMonsterLibInfo::GetManagers
   calls: CMonolopyMonsterLibInfo::GetManagers
   strings:
     ""CMonolopyMonsterLibInfo""
     ""CMonolopyMonsterLibInfo::GetManagers"" */

void CMonolopyMonsterLibInfo__GetManagers_119bae80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonolopyMonsterLibInfo__GetManagers(0,"CMonolopyMonsterLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d68450;
      if ((DAT_123a2c04 & 1) == 0) {
        DAT_123a2c04 = DAT_123a2c04 | 1;
        FUN_102500e0("CMonolopyMonsterLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4680);
      }
      if (((*DAT_123a2be8 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyMonsterLibInfo",0), iVar3 == 0)) &&
         ((DAT_123a2c74 & 1) == 0)) {
        DAT_123a2c40 = 0;
        DAT_123a2c50 = 0;
        DAT_123a2c54 = 0;
        _DAT_123a2c58 = 0;
        uRam123a2c5c = 0;
        DAT_123a2c74 = DAT_123a2c74 | 1;
        _DAT_123a2c3c = &PTR_FUN_11d68498;
        _DAT_123a2c60 = _DAT_11de9ae0;
        uRam123a2c64 = _UNK_11de9ae4;
        uRam123a2c68 = _UNK_11de9ae8;
        uRam123a2c6c = _UNK_11de9aec;
        DAT_123a2c70 = 1;
        DAT_123a2c44 = iVar3;
        _DAT_123a2c48 = iVar3;
        _DAT_123a2c4c = iVar3;
        FUN_11a8911f(&LAB_11cb4620);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a78f60();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonolopyMonsterLibInfo::GetManagers_119bb000 @ 119bb000 --- */
// [RE-AUTO c3]
// id: CMonolopyMonsterLibInfo::GetManagers
// calls: CMonolopyMonsterLibInfo::GetManagers
// strings:
//   ""CMonolopyMonsterLibInfo""
//   ""CMonolopyMonsterLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyMonsterLibInfo::GetManagers
   calls: CMonolopyMonsterLibInfo::GetManagers
   strings:
     ""CMonolopyMonsterLibInfo""
     ""CMonolopyMonsterLibInfo::GetManagers"" */

void CMonolopyMonsterLibInfo__GetManagers_119bb000(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonolopyMonsterLibInfo__GetManagers(0,"CMonolopyMonsterLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d68450;
      if ((DAT_123a2c04 & 1) == 0) {
        DAT_123a2c04 = DAT_123a2c04 | 1;
        FUN_102500e0("CMonolopyMonsterLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4680);
      }
      if (((*DAT_123a2be8 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyMonsterLibInfo",0), iVar3 == 0)) &&
         ((DAT_123a2c74 & 1) == 0)) {
        DAT_123a2c40 = 0;
        DAT_123a2c50 = 0;
        DAT_123a2c54 = 0;
        _DAT_123a2c58 = 0;
        uRam123a2c5c = 0;
        DAT_123a2c74 = DAT_123a2c74 | 1;
        _DAT_123a2c3c = &PTR_FUN_11d68498;
        _DAT_123a2c60 = _DAT_11de9ae0;
        uRam123a2c64 = _UNK_11de9ae4;
        uRam123a2c68 = _UNK_11de9ae8;
        uRam123a2c6c = _UNK_11de9aec;
        DAT_123a2c70 = 1;
        DAT_123a2c44 = iVar3;
        _DAT_123a2c48 = iVar3;
        _DAT_123a2c4c = iVar3;
        FUN_11a8911f(&LAB_11cb4620);
      }
      local_8 = &PTR_FUN_11da54a8;
      CMonolopyBlockInfo__GetManagers_11a78e00();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_11a79070();
  return;
}



