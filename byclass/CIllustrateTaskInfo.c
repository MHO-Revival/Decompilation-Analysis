// ===== class CIllustrateTaskInfo  (6 recovered methods) =====

/* --- CIllustrateTaskInfo::GetManagers @ 11216d40 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// strings:
//   ""CIllustrateTaskInfo::GetManagers""

/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   strings:
     ""CIllustrateTaskInfo::GetManagers"" */

undefined * CIllustrateTaskInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d18f30;
  if (param_3 == 0) {
    if ((DAT_1203f8a8 & 1) == 0) {
      DAT_1203f8a8 = DAT_1203f8a8 | 1;
      FUN_102500e0("CIllustrateTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c982c0);
    }
    if ((undefined *)*DAT_1203f88c != (undefined *)0x0) {
      return (undefined *)*DAT_1203f88c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f8ec & 1) == 0) {
      DAT_1203f8ec = DAT_1203f8ec | 1;
      FUN_11216f70();
      FUN_11a8911f(&LAB_11c98200);
    }
    puVar1 = &DAT_1203f8b4;
  }
  return puVar1;
}



/* --- CIllustrateTaskInfo::GetManagers_11217790 @ 11217790 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// strings:
//   ""CIllustrateTaskInfo::GetManagers""

/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   strings:
     ""CIllustrateTaskInfo::GetManagers"" */

undefined4 CIllustrateTaskInfo__GetManagers_11217790(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f8a8 & 1) == 0) {
      DAT_1203f8a8 = DAT_1203f8a8 | 1;
      FUN_102500e0("CIllustrateTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c982c0);
    }
    return *DAT_1203f88c;
  }
  return 0;
}



/* --- CIllustrateTaskInfo::GetManagers_1172dd40 @ 1172dd40 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// calls: CIllustrateTaskInfo::GetManagers
// strings:
//   ""CIllustrateTaskInfo""
//   ""CIllustrateBookInfo""
//   ""CIllustrateTaskInfo::GetManagers""
//   ""CHunterStarStatInfo::GetManagers""
//   ""CHunterStarStatInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   calls: CIllustrateTaskInfo::GetManagers
   strings:
     ""CIllustrateTaskInfo""
     ""CIllustrateBookInfo""
     ""CIllustrateTaskInfo::GetManagers""
     ""CHunterStarStatInfo::GetManagers""
     ""CHunterStarStatInfo"" */

void CIllustrateTaskInfo__GetManagers_1172dd40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)CIllustrateTaskInfo__GetManagers(0,"CIllustrateTaskInfo",0);
  (**(code **)(*piVar1 + 0x28))();
  piVar1 = (int *)FUN_109cbf00(0,"CIllustrateBookInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d18f30;
      if ((DAT_1203f8a8 & 1) == 0) {
        DAT_1203f8a8 = DAT_1203f8a8 | 1;
        FUN_102500e0("CIllustrateTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c982c0);
      }
      if (*DAT_1203f88c == 0) {
        iVar3 = FUN_11679e10(&local_8,"CIllustrateTaskInfo",0);
        if ((iVar3 == 0) && ((DAT_1203f8ec & 1) == 0)) {
          DAT_1203f8b8 = 0;
          DAT_1203f8c8 = 0;
          DAT_1203f8cc = 0;
          _DAT_1203f8d0 = 0;
          uRam1203f8d4 = 0;
          DAT_1203f8ec = DAT_1203f8ec | 1;
          DAT_1203f8bc = 0;
          _DAT_1203f8c0 = 0;
          _DAT_1203f8c4 = 0;
          _DAT_1203f8b4 = &PTR_FUN_11d18f70;
          _DAT_1203f8d8 = _DAT_11de9ae0;
          uRam1203f8dc = _UNK_11de9ae4;
          uRam1203f8e0 = _UNK_11de9ae8;
          uRam1203f8e4 = _UNK_11de9aec;
          DAT_1203f8e8 = 1;
          FUN_11a8911f(&LAB_11ca8f70);
        }
      }
      local_8 = &PTR_FUN_11d2ac20;
      if ((DAT_122de680 & 1) == 0) {
        DAT_122de680 = DAT_122de680 | 1;
        FUN_102500e0("CHunterStarStatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9f6a0);
      }
      if (*DAT_122de664 == 0) {
        iVar3 = FUN_11679e10(&local_8,"CHunterStarStatInfo",0);
        if ((iVar3 == 0) && ((DAT_122de6c4 & 1) == 0)) {
          DAT_122de690 = 0;
          DAT_122de6a0 = 0;
          DAT_122de6a4 = 0;
          _DAT_122de6a8 = 0;
          DAT_122de6ac = 0;
          DAT_122de6c4 = DAT_122de6c4 | 1;
          DAT_122de694 = 0;
          _DAT_122de698 = 0;
          _DAT_122de69c = 0;
          DAT_122de68c = &PTR_FUN_11d2ac60;
          DAT_122de6b0 = _DAT_11de9ae0;
          DAT_122de6b4 = _UNK_11de9ae4;
          uRam122de6b8 = _UNK_11de9ae8;
          DAT_122de6bc = _UNK_11de9aec;
          DAT_122de6c0 = 1;
          FUN_11a8911f(&LAB_11ca8eb0);
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* --- CIllustrateTaskInfo::GetManagers_118097d0 @ 118097d0 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// calls: CIllustrateTaskInfo::GetManagers
// strings:
//   ""CIllustrateTaskInfo""
//   ""CIllustrateTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   calls: CIllustrateTaskInfo::GetManagers
   strings:
     ""CIllustrateTaskInfo""
     ""CIllustrateTaskInfo::GetManagers"" */

void __fastcall CIllustrateTaskInfo__GetManagers_118097d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CIllustrateTaskInfo__GetManagers(0,"CIllustrateTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d18f30;
      if ((DAT_1203f8a8 & 1) == 0) {
        DAT_1203f8a8 = DAT_1203f8a8 | 1;
        FUN_102500e0("CIllustrateTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c982c0);
      }
      puVar3 = (undefined *)*DAT_1203f88c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CIllustrateTaskInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_1203f8ec & 1) == 0) {
            DAT_1203f8b8 = 0;
            DAT_1203f8c8 = 0;
            DAT_1203f8cc = 0;
            _DAT_1203f8d0 = 0;
            uRam1203f8d4 = 0;
            DAT_1203f8ec = DAT_1203f8ec | 1;
            _DAT_1203f8b4 = &PTR_FUN_11d18f70;
            _DAT_1203f8d8 = _DAT_11de9ae0;
            uRam1203f8dc = _UNK_11de9ae4;
            uRam1203f8e0 = _UNK_11de9ae8;
            uRam1203f8e4 = _UNK_11de9aec;
            DAT_1203f8e8 = 1;
            DAT_1203f8bc = puVar3;
            _DAT_1203f8c0 = puVar3;
            _DAT_1203f8c4 = puVar3;
            FUN_11a8911f(&LAB_11cabde0);
          }
          puVar3 = &DAT_1203f8b4;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[6] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x58);
        if (piVar1 == *(int **)(param_1 + 0x5c)) {
          FUN_11809990(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CIllustrateTaskInfo::GetManagers_119c20d0 @ 119c20d0 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// calls: CIllustrateTaskInfo::GetManagers
// strings:
//   ""CIllustrateTaskInfo""
//   ""CIllustrateTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   calls: CIllustrateTaskInfo::GetManagers
   strings:
     ""CIllustrateTaskInfo""
     ""CIllustrateTaskInfo::GetManagers"" */

void CIllustrateTaskInfo__GetManagers_119c20d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CIllustrateTaskInfo__GetManagers(0,"CIllustrateTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d18f30;
      if ((DAT_1203f8a8 & 1) == 0) {
        DAT_1203f8a8 = DAT_1203f8a8 | 1;
        FUN_102500e0("CIllustrateTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c982c0);
      }
      if (((*DAT_1203f88c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CIllustrateTaskInfo",0), iVar3 == 0)) &&
         ((DAT_1203f8ec & 1) == 0)) {
        DAT_1203f8b8 = 0;
        DAT_1203f8c8 = 0;
        DAT_1203f8cc = 0;
        _DAT_1203f8d0 = 0;
        uRam1203f8d4 = 0;
        DAT_1203f8ec = DAT_1203f8ec | 1;
        _DAT_1203f8b4 = &PTR_FUN_11d18f70;
        _DAT_1203f8d8 = _DAT_11de9ae0;
        uRam1203f8dc = _UNK_11de9ae4;
        uRam1203f8e0 = _UNK_11de9ae8;
        uRam1203f8e4 = _UNK_11de9aec;
        DAT_1203f8e8 = 1;
        DAT_1203f8bc = iVar3;
        _DAT_1203f8c0 = iVar3;
        _DAT_1203f8c4 = iVar3;
        FUN_11a8911f(&LAB_11cb4890);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1172d400();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CIllustrateTaskInfo::GetManagers_119c2220 @ 119c2220 --- */
// [RE-AUTO c3]
// id: CIllustrateTaskInfo::GetManagers
// calls: CIllustrateTaskInfo::GetManagers, CIllustrateTaskInfo::GetManagers_1172dd40
// strings:
//   ""CIllustrateTaskInfo""
//   ""CIllustrateTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateTaskInfo::GetManagers
   calls: CIllustrateTaskInfo::GetManagers, CIllustrateTaskInfo::GetManagers_1172dd40
   strings:
     ""CIllustrateTaskInfo""
     ""CIllustrateTaskInfo::GetManagers"" */

void CIllustrateTaskInfo__GetManagers_119c2220(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)CIllustrateTaskInfo__GetManagers(0,"CIllustrateTaskInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  ppuVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d18f30;
      if ((DAT_1203f8a8 & 1) == 0) {
        DAT_1203f8a8 = DAT_1203f8a8 | 1;
        FUN_102500e0("CIllustrateTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c982c0);
      }
      if (((*DAT_1203f88c == 0) &&
          (iVar4 = FUN_11679e10(&param_1,"CIllustrateTaskInfo",0), iVar4 == 0)) &&
         ((DAT_1203f8ec & 1) == 0)) {
        DAT_1203f8b8 = 0;
        DAT_1203f8c8 = 0;
        DAT_1203f8cc = 0;
        _DAT_1203f8d0 = 0;
        uRam1203f8d4 = 0;
        DAT_1203f8ec = DAT_1203f8ec | 1;
        _DAT_1203f8b4 = &PTR_FUN_11d18f70;
        _DAT_1203f8d8 = _DAT_11de9ae0;
        uRam1203f8dc = _UNK_11de9ae4;
        uRam1203f8e0 = _UNK_11de9ae8;
        uRam1203f8e4 = _UNK_11de9aec;
        DAT_1203f8e8 = 1;
        DAT_1203f8bc = iVar4;
        _DAT_1203f8c0 = iVar4;
        _DAT_1203f8c4 = iVar4;
        FUN_11a8911f(&LAB_11cb4890);
      }
      param_1 = &PTR_FUN_11da54a8;
      FUN_1172d2a0(ppuVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  CIllustrateTaskInfo__GetManagers_1172dd40();
  return;
}



