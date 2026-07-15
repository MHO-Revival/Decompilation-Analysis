// ===== class CCommodityInfo  (6 recovered methods) =====

/* --- CCommodityInfo::GetManagers @ 117df020 --- */
// [RE-AUTO c3]
// id: CCommodityInfo::GetManagers
// strings:
//   ""CCommodityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCommodityInfo::GetManagers
   strings:
     ""CCommodityInfo::GetManagers"" */

undefined * CCommodityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4a648;
  if (param_3 == 0) {
    if ((DAT_123941e8 & 1) == 0) {
      DAT_123941e8 = DAT_123941e8 | 1;
      FUN_102500e0("CCommodityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cab0f0);
    }
    if ((undefined *)*DAT_123941cc != (undefined *)0x0) {
      return (undefined *)*DAT_123941cc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239428c & 1) == 0) {
      DAT_1239428c = DAT_1239428c | 1;
      FUN_117df300();
      FUN_11a8911f(&LAB_11cab090);
    }
    puVar1 = &DAT_12394254;
  }
  return puVar1;
}



/* --- CCommodityInfo::GetManagers_117dfbe0 @ 117dfbe0 --- */
// [RE-AUTO c3]
// id: CCommodityInfo::GetManagers
// strings:
//   ""CCommodityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCommodityInfo::GetManagers
   strings:
     ""CCommodityInfo::GetManagers"" */

undefined4 CCommodityInfo__GetManagers_117dfbe0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123941e8 & 1) == 0) {
      DAT_123941e8 = DAT_123941e8 | 1;
      FUN_102500e0("CCommodityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cab0f0);
    }
    return *DAT_123941cc;
  }
  return 0;
}



/* --- CCommodityInfo::GetManagers_117dff10 @ 117dff00 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CCommodityInfo__GetManagers_117dff10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar1 = (int *)CCommodityInfo__GetManagers(0,"CCommodityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      ppuStack_c = &PTR_FUN_11d4a648;
      if ((DAT_123941e8 & 1) == 0) {
        DAT_123941e8 = DAT_123941e8 | 1;
        FUN_102500e0("CCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11cab0f0);
      }
      puVar3 = (undefined *)*DAT_123941cc;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&ppuStack_c,"CCommodityInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_1239428c & 1) == 0) {
            DAT_12394258 = 0;
            DAT_12394268 = 0;
            DAT_1239426c = 0;
            _DAT_12394270 = 0;
            uRam12394274 = 0;
            DAT_1239428c = DAT_1239428c | 1;
            _DAT_12394254 = &PTR_FUN_11d4a67c;
            _DAT_12394278 = _DAT_11de9ae0;
            uRam1239427c = _UNK_11de9ae4;
            uRam12394280 = _UNK_11de9ae8;
            uRam12394284 = _UNK_11de9aec;
            DAT_12394288 = 1;
            DAT_1239425c = puVar3;
            _DAT_12394260 = puVar3;
            _DAT_12394264 = puVar3;
            FUN_11a8911f(&LAB_11cab090);
          }
          puVar3 = &DAT_12394254;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        ppuStack_c = (undefined **)0x0;
      }
      else {
        ppuStack_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((ppuStack_c != (undefined **)0x0) && (ppuStack_c[9] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_114b9e80(piVar1,&ppuStack_c,&uStack_5,1,1);
        }
        else {
          *piVar1 = (int)ppuStack_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CCommodityInfo::GetManagers_117dff10 @ 117dff10 --- */
// [RE-AUTO c3]
// id: CCommodityInfo::GetManagers
// calls: CCommodityInfo::GetManagers
// strings:
//   ""CCommodityInfo""
//   ""CCommodityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityInfo::GetManagers
   calls: CCommodityInfo::GetManagers
   strings:
     ""CCommodityInfo""
     ""CCommodityInfo::GetManagers"" */

void __fastcall CCommodityInfo__GetManagers_117dff10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CCommodityInfo__GetManagers(0,"CCommodityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d4a648;
      if ((DAT_123941e8 & 1) == 0) {
        DAT_123941e8 = DAT_123941e8 | 1;
        FUN_102500e0("CCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11cab0f0);
      }
      puVar3 = (undefined *)*DAT_123941cc;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CCommodityInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_1239428c & 1) == 0) {
            DAT_12394258 = 0;
            DAT_12394268 = 0;
            DAT_1239426c = 0;
            _DAT_12394270 = 0;
            uRam12394274 = 0;
            DAT_1239428c = DAT_1239428c | 1;
            _DAT_12394254 = &PTR_FUN_11d4a67c;
            _DAT_12394278 = _DAT_11de9ae0;
            uRam1239427c = _UNK_11de9ae4;
            uRam12394280 = _UNK_11de9ae8;
            uRam12394284 = _UNK_11de9aec;
            DAT_12394288 = 1;
            DAT_1239425c = puVar3;
            _DAT_12394260 = puVar3;
            _DAT_12394264 = puVar3;
            FUN_11a8911f(&LAB_11cab090);
          }
          puVar3 = &DAT_12394254;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[9] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_114b9e80(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CCommodityInfo::GetManagers_11908e20 @ 11908e20 --- */
// [RE-AUTO c3]
// id: CCommodityInfo::GetManagers
// calls: CCommodityInfo::GetManagers
// strings:
//   ""CCommodityInfo""
//   ""CCommodityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityInfo::GetManagers
   calls: CCommodityInfo::GetManagers
   strings:
     ""CCommodityInfo""
     ""CCommodityInfo::GetManagers"" */

void CCommodityInfo__GetManagers_11908e20(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CCommodityInfo__GetManagers(0,"CCommodityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4a648;
      if ((DAT_123941e8 & 1) == 0) {
        DAT_123941e8 = DAT_123941e8 | 1;
        FUN_102500e0("CCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11cab0f0);
      }
      if (((*DAT_123941cc == 0) && (iVar3 = FUN_11679e10(&local_8,"CCommodityInfo",0), iVar3 == 0))
         && ((DAT_1239428c & 1) == 0)) {
        DAT_12394258 = 0;
        DAT_12394268 = 0;
        DAT_1239426c = 0;
        _DAT_12394270 = 0;
        uRam12394274 = 0;
        DAT_1239428c = DAT_1239428c | 1;
        _DAT_12394254 = &PTR_FUN_11d4a67c;
        _DAT_12394278 = _DAT_11de9ae0;
        uRam1239427c = _UNK_11de9ae4;
        uRam12394280 = _UNK_11de9ae8;
        uRam12394284 = _UNK_11de9aec;
        DAT_12394288 = 1;
        DAT_1239425c = iVar3;
        _DAT_12394260 = iVar3;
        _DAT_12394264 = iVar3;
        FUN_11a8911f(&LAB_11cb1110);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a01380();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CCommodityInfo::GetManagers_11908f70 @ 11908f70 --- */
// [RE-AUTO c3]
// id: CCommodityInfo::GetManagers
// calls: CCommodityInfo::GetManagers
// strings:
//   ""CCommodityInfo""
//   ""CCommodityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityInfo::GetManagers
   calls: CCommodityInfo::GetManagers
   strings:
     ""CCommodityInfo""
     ""CCommodityInfo::GetManagers"" */

void CCommodityInfo__GetManagers_11908f70(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)CCommodityInfo__GetManagers(0,"CCommodityInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d4a648;
      if ((DAT_123941e8 & 1) == 0) {
        DAT_123941e8 = DAT_123941e8 | 1;
        FUN_102500e0("CCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11cab0f0);
      }
      if (((*DAT_123941cc == 0) && (iVar4 = FUN_11679e10(&param_1,"CCommodityInfo",0), iVar4 == 0))
         && ((DAT_1239428c & 1) == 0)) {
        DAT_12394258 = 0;
        DAT_12394268 = 0;
        DAT_1239426c = 0;
        _DAT_12394270 = 0;
        uRam12394274 = 0;
        DAT_1239428c = DAT_1239428c | 1;
        _DAT_12394254 = &PTR_FUN_11d4a67c;
        _DAT_12394278 = _DAT_11de9ae0;
        uRam1239427c = _UNK_11de9ae4;
        uRam12394280 = _UNK_11de9ae8;
        uRam12394284 = _UNK_11de9aec;
        DAT_12394288 = 1;
        DAT_1239425c = iVar4;
        _DAT_12394260 = iVar4;
        _DAT_12394264 = iVar4;
        FUN_11a8911f(&LAB_11cb1110);
      }
      param_1 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a011c0(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



