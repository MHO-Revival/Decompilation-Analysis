// ===== class CTraceInfo  (4 recovered methods) =====

/* --- CTraceInfo::GetManagers @ 115052e0 --- */
// [RE-AUTO c3]
// id: CTraceInfo::GetManagers
// strings:
//   ""CTraceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTraceInfo::GetManagers
   strings:
     ""CTraceInfo::GetManagers"" */

undefined * CTraceInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2b9f0;
  if (param_3 == 0) {
    if ((DAT_122de79c & 1) == 0) {
      DAT_122de79c = DAT_122de79c | 1;
      FUN_102500e0("CTraceInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9ff30);
    }
    if ((undefined *)*DAT_122de780 != (undefined *)0x0) {
      return (undefined *)*DAT_122de780;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de7e4 & 1) == 0) {
      DAT_122de7e4 = DAT_122de7e4 | 1;
      FUN_11505730();
      FUN_11a8911f(&LAB_11c9fed0);
    }
    puVar1 = &DAT_122de7ac;
  }
  return puVar1;
}



/* --- CTraceInfo::GetManagers_11506240 @ 11506240 --- */
// [RE-AUTO c3]
// id: CTraceInfo::GetManagers
// strings:
//   ""CTraceInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTraceInfo::GetManagers
   strings:
     ""CTraceInfo::GetManagers"" */

undefined4 CTraceInfo__GetManagers_11506240(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de79c & 1) == 0) {
      DAT_122de79c = DAT_122de79c | 1;
      FUN_102500e0("CTraceInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9ff30);
    }
    return *DAT_122de780;
  }
  return 0;
}



/* --- CTraceInfo::GetManagers_11914270 @ 11914270 --- */
// [RE-AUTO c3]
// id: CTraceInfo::GetManagers
// calls: CTraceInfo::GetManagers
// strings:
//   ""CTraceInfo""
//   ""CTraceInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTraceInfo::GetManagers
   calls: CTraceInfo::GetManagers
   strings:
     ""CTraceInfo""
     ""CTraceInfo::GetManagers"" */

void CTraceInfo__GetManagers_11914270(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTraceInfo__GetManagers(0,"CTraceInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2b9f0;
      if ((DAT_122de79c & 1) == 0) {
        DAT_122de79c = DAT_122de79c | 1;
        FUN_102500e0("CTraceInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9ff30);
      }
      if (((*DAT_122de780 == 0) && (iVar3 = FUN_11679e10(&local_8,"CTraceInfo",0), iVar3 == 0)) &&
         ((DAT_122de7e4 & 1) == 0)) {
        DAT_122de7b0 = 0;
        DAT_122de7c0 = 0;
        DAT_122de7c4 = 0;
        _DAT_122de7c8 = 0;
        uRam122de7cc = 0;
        DAT_122de7e4 = DAT_122de7e4 | 1;
        _DAT_122de7ac = &PTR_FUN_11d2ba1c;
        _DAT_122de7d0 = _DAT_11de9ae0;
        uRam122de7d4 = _UNK_11de9ae4;
        uRam122de7d8 = _UNK_11de9ae8;
        uRam122de7dc = _UNK_11de9aec;
        DAT_122de7e0 = 1;
        DAT_122de7b4 = iVar3;
        _DAT_122de7b8 = iVar3;
        _DAT_122de7bc = iVar3;
        FUN_11a8911f(&LAB_11cb17a0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a080e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTraceInfo::GetManagers_119143c0 @ 119143c0 --- */
// [RE-AUTO c3]
// id: CTraceInfo::GetManagers
// calls: CTraceInfo::GetManagers
// strings:
//   ""CTraceInfo""
//   ""CTraceInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTraceInfo::GetManagers
   calls: CTraceInfo::GetManagers
   strings:
     ""CTraceInfo""
     ""CTraceInfo::GetManagers"" */

void CTraceInfo__GetManagers_119143c0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)CTraceInfo__GetManagers(0,"CTraceInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d2b9f0;
      if ((DAT_122de79c & 1) == 0) {
        DAT_122de79c = DAT_122de79c | 1;
        FUN_102500e0("CTraceInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9ff30);
      }
      if (((*DAT_122de780 == 0) && (iVar4 = FUN_11679e10(&param_1,"CTraceInfo",0), iVar4 == 0)) &&
         ((DAT_122de7e4 & 1) == 0)) {
        DAT_122de7b0 = 0;
        DAT_122de7c0 = 0;
        DAT_122de7c4 = 0;
        _DAT_122de7c8 = 0;
        uRam122de7cc = 0;
        DAT_122de7e4 = DAT_122de7e4 | 1;
        _DAT_122de7ac = &PTR_FUN_11d2ba1c;
        _DAT_122de7d0 = _DAT_11de9ae0;
        uRam122de7d4 = _UNK_11de9ae4;
        uRam122de7d8 = _UNK_11de9ae8;
        uRam122de7dc = _UNK_11de9aec;
        DAT_122de7e0 = 1;
        DAT_122de7b4 = iVar4;
        _DAT_122de7b8 = iVar4;
        _DAT_122de7bc = iVar4;
        FUN_11a8911f(&LAB_11cb17a0);
      }
      param_1 = &PTR_FUN_11da54a8;
      FUN_11a080d0(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



