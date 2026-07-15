// ===== class CSpoorInfo  (5 recovered methods) =====

/* --- CSpoorInfo::GetManagers @ 109475d0 --- */
// [RE-AUTO c3]
// id: CSpoorInfo::GetManagers
// strings:
//   ""CSpoorInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorInfo::GetManagers
   strings:
     ""CSpoorInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpoorInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8524 & 1) == 0) {
    DAT_123c8524 = DAT_123c8524 | 1;
    _DAT_123c853c = &DAT_123c852c;
    DAT_123c8540 = &DAT_123c852c;
    DAT_123c852c = 0;
    FUN_100d83d0("CSpoorInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c785c0);
  }
  return DAT_123c8528;
}



/* --- CSpoorInfo::GetManagers_11629ec0 @ 11629ec0 --- */
// [RE-AUTO c3]
// id: CSpoorInfo::GetManagers
// strings:
//   ""CSpoorInfo""
//   ""CSpoorInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorInfo::GetManagers
   strings:
     ""CSpoorInfo""
     ""CSpoorInfo::GetManagers"" */

int CSpoorInfo__GetManagers_11629ec0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)FUN_1094b780(0,"CSpoorInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11ddc1b0;
      if ((DAT_123c8524 & 1) == 0) {
        DAT_123c8524 = DAT_123c8524 | 1;
        FUN_102500e0("CSpoorInfo::GetManagers");
        FUN_11a8911f(&LAB_11c785c0);
      }
      puVar4 = (undefined4 *)*DAT_123c8528;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CSpoorInfo",0), puVar4 == (undefined4 *)0x0)
         ) {
        if ((DAT_123c85e0 & 1) == 0) {
          DAT_123c85e8 = 0;
          DAT_123c85f8 = 0;
          DAT_123c85fc = 0;
          _DAT_123c8600 = 0;
          DAT_123c8604 = 0;
          DAT_123c85e0 = DAT_123c85e0 | 1;
          DAT_123c85e4 = &PTR_FUN_11ddc260;
          DAT_123c8608 = _DAT_11de9ae0;
          DAT_123c860c = _UNK_11de9ae4;
          uRam123c8610 = _UNK_11de9ae8;
          DAT_123c8614 = _UNK_11de9aec;
          DAT_123c8618 = 1;
          DAT_123c85ec = puVar4;
          _DAT_123c85f0 = puVar4;
          _DAT_123c85f4 = puVar4;
          FUN_11a8911f(&LAB_11ca5ef0);
        }
        puVar4 = &DAT_123c85e4;
      }
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar4[5] + iVar5 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x18) == param_1 && (*(int *)(iVar1 + 0x1c) == param_2)))) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CSpoorInfo::GetManagers_1197a780 @ 1197a780 --- */
// [RE-AUTO c3]
// id: CSpoorInfo::GetManagers
// strings:
//   ""CSpoorInfo""
//   ""CSpoorInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorInfo::GetManagers
   strings:
     ""CSpoorInfo""
     ""CSpoorInfo::GetManagers"" */

void CSpoorInfo__GetManagers_1197a780(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1094b780(0,"CSpoorInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc1b0;
      if ((DAT_123c8524 & 1) == 0) {
        DAT_123c8524 = DAT_123c8524 | 1;
        FUN_102500e0("CSpoorInfo::GetManagers");
        FUN_11a8911f(&LAB_11c785c0);
      }
      if (((*DAT_123c8528 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorInfo",0), iVar3 == 0)) &&
         ((DAT_123c85e0 & 1) == 0)) {
        DAT_123c85e8 = 0;
        DAT_123c85f8 = 0;
        DAT_123c85fc = 0;
        _DAT_123c8600 = 0;
        DAT_123c8604 = 0;
        DAT_123c85e0 = DAT_123c85e0 | 1;
        DAT_123c85e4 = &PTR_FUN_11ddc260;
        DAT_123c8608 = _DAT_11de9ae0;
        DAT_123c860c = _UNK_11de9ae4;
        uRam123c8610 = _UNK_11de9ae8;
        DAT_123c8614 = _UNK_11de9aec;
        DAT_123c8618 = 1;
        DAT_123c85ec = iVar3;
        _DAT_123c85f0 = iVar3;
        _DAT_123c85f4 = iVar3;
        FUN_11a8911f(&LAB_11cb34e0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a50a80();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSpoorInfo::GetManagers_1197abb0 @ 1197abb0 --- */
// [RE-AUTO c3]
// id: CSpoorInfo::GetManagers
// strings:
//   ""CSpoorInfo""
//   ""CSpoorInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorInfo::GetManagers
   strings:
     ""CSpoorInfo""
     ""CSpoorInfo::GetManagers"" */

void CSpoorInfo__GetManagers_1197abb0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1094b780(0,"CSpoorInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc1b0;
      if ((DAT_123c8524 & 1) == 0) {
        DAT_123c8524 = DAT_123c8524 | 1;
        FUN_102500e0("CSpoorInfo::GetManagers");
        FUN_11a8911f(&LAB_11c785c0);
      }
      if (((*DAT_123c8528 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorInfo",0), iVar3 == 0)) &&
         ((DAT_123c85e0 & 1) == 0)) {
        DAT_123c85e8 = 0;
        DAT_123c85f8 = 0;
        DAT_123c85fc = 0;
        _DAT_123c8600 = 0;
        DAT_123c8604 = 0;
        DAT_123c85e0 = DAT_123c85e0 | 1;
        DAT_123c85e4 = &PTR_FUN_11ddc260;
        DAT_123c8608 = _DAT_11de9ae0;
        DAT_123c860c = _UNK_11de9ae4;
        uRam123c8610 = _UNK_11de9ae8;
        DAT_123c8614 = _UNK_11de9aec;
        DAT_123c8618 = 1;
        DAT_123c85ec = iVar3;
        _DAT_123c85f0 = iVar3;
        _DAT_123c85f4 = iVar3;
        FUN_11a8911f(&LAB_11cb34e0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a50a60();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSpoorInfo::GetManagers_11a51150 @ 11a51150 --- */
// [RE-AUTO c3]
// id: CSpoorInfo::GetManagers
// strings:
//   ""CSpoorInfo""
//   ""CSpoorInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorInfo::GetManagers
   strings:
     ""CSpoorInfo""
     ""CSpoorInfo::GetManagers"" */

void __fastcall CSpoorInfo__GetManagers_11a51150(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_1094b780(0,"CSpoorInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11ddc1b0;
      if ((DAT_123c8524 & 1) == 0) {
        DAT_123c8524 = DAT_123c8524 | 1;
        FUN_102500e0("CSpoorInfo::GetManagers");
        FUN_11a8911f(&LAB_11c785c0);
      }
      puVar3 = (undefined4 *)*DAT_123c8528;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CSpoorInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123c85e0 & 1) == 0) {
            DAT_123c85e8 = 0;
            DAT_123c85f8 = 0;
            DAT_123c85fc = 0;
            _DAT_123c8600 = 0;
            DAT_123c8604 = 0;
            DAT_123c85e0 = DAT_123c85e0 | 1;
            DAT_123c85e4 = &PTR_FUN_11ddc260;
            DAT_123c8608 = _DAT_11de9ae0;
            DAT_123c860c = _UNK_11de9ae4;
            uRam123c8610 = _UNK_11de9ae8;
            DAT_123c8614 = _UNK_11de9aec;
            DAT_123c8618 = 1;
            DAT_123c85ec = puVar3;
            _DAT_123c85f0 = puVar3;
            _DAT_123c85f4 = puVar3;
            FUN_11a8911f(&LAB_11cb70f0);
          }
          puVar3 = &DAT_123c85e4;
        }
      }
      if ((iVar4 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(puVar3[5] + iVar4 * 4);
      }
      if (((local_c != (undefined **)0x0) && (local_c[5] == *(undefined **)(param_1 + 0x10))) &&
         (local_c[6] == (undefined *)0x1)) {
        piVar1 = *(int **)(param_1 + 0x20);
        if (piVar1 == *(int **)(param_1 + 0x24)) {
          FUN_1197b380(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



