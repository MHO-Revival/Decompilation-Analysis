// ===== class CMonolopyInfo  (5 recovered methods) =====

/* --- CMonolopyInfo::GetManagers @ 109bb050 --- */
// [RE-AUTO c3]
// id: CMonolopyInfo::GetManagers
// strings:
//   ""CMonolopyInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyInfo::GetManagers
   strings:
     ""CMonolopyInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMonolopyInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c065c & 1) == 0) {
    DAT_123c065c = DAT_123c065c | 1;
    _DAT_123c0674 = &DAT_123c0664;
    DAT_123c0678 = &DAT_123c0664;
    DAT_123c0664 = 0;
    FUN_100d83d0("CMonolopyInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7bd50);
  }
  return DAT_123c0660;
}



/* --- CMonolopyInfo::GetManagers_119b91c0 @ 119b91c0 --- */
// [RE-AUTO c3]
// id: CMonolopyInfo::GetManagers
// strings:
//   ""CMonolopyInfo""
//   ""CMonolopyInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyInfo::GetManagers
   strings:
     ""CMonolopyInfo""
     ""CMonolopyInfo::GetManagers"" */

void CMonolopyInfo__GetManagers_119b91c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be5b0(0,"CMonolopyInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2840;
      if ((DAT_123c065c & 1) == 0) {
        DAT_123c065c = DAT_123c065c | 1;
        FUN_102500e0("CMonolopyInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bd50);
      }
      if (((*DAT_123c0660 == 0) && (iVar3 = FUN_11679e10(&local_8,"CMonolopyInfo",0), iVar3 == 0))
         && ((DAT_123c0618 & 1) == 0)) {
        DAT_123c0620 = 0;
        DAT_123c0630 = 0;
        DAT_123c0634 = 0;
        _DAT_123c0638 = 0;
        uRam123c063c = 0;
        DAT_123c0618 = DAT_123c0618 | 1;
        DAT_123c061c = &PTR_FUN_11de28f4;
        _DAT_123c0640 = _DAT_11de9ae0;
        uRam123c0644 = _UNK_11de9ae4;
        uRam123c0648 = _UNK_11de9ae8;
        uRam123c064c = _UNK_11de9aec;
        DAT_123c0650 = 1;
        DAT_123c0624 = iVar3;
        _DAT_123c0628 = iVar3;
        _DAT_123c062c = iVar3;
        FUN_11a8911f(&LAB_11cb4560);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a78770();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonolopyInfo::GetManagers_119b9310 @ 119b9310 --- */
// [RE-AUTO c3]
// id: CMonolopyInfo::GetManagers
// strings:
//   ""CMonolopyInfo""
//   ""CMonolopyInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyInfo::GetManagers
   strings:
     ""CMonolopyInfo""
     ""CMonolopyInfo::GetManagers"" */

void CMonolopyInfo__GetManagers_119b9310(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be5b0(0,"CMonolopyInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2840;
      if ((DAT_123c065c & 1) == 0) {
        DAT_123c065c = DAT_123c065c | 1;
        FUN_102500e0("CMonolopyInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bd50);
      }
      if (((*DAT_123c0660 == 0) && (iVar3 = FUN_11679e10(&local_8,"CMonolopyInfo",0), iVar3 == 0))
         && ((DAT_123c0618 & 1) == 0)) {
        DAT_123c0620 = 0;
        DAT_123c0630 = 0;
        DAT_123c0634 = 0;
        _DAT_123c0638 = 0;
        uRam123c063c = 0;
        DAT_123c0618 = DAT_123c0618 | 1;
        DAT_123c061c = &PTR_FUN_11de28f4;
        _DAT_123c0640 = _DAT_11de9ae0;
        uRam123c0644 = _UNK_11de9ae4;
        uRam123c0648 = _UNK_11de9ae8;
        uRam123c064c = _UNK_11de9aec;
        DAT_123c0650 = 1;
        DAT_123c0624 = iVar3;
        _DAT_123c0628 = iVar3;
        _DAT_123c062c = iVar3;
        FUN_11a8911f(&LAB_11cb4560);
      }
      local_8 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a78660();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  CMonolopyInfo__GetManagers_11a78530();
  return;
}



/* --- CMonolopyInfo::GetManagers_11a78530 @ 11a78530 --- */
// [RE-AUTO c3]
// id: CMonolopyInfo::GetManagers
// strings:
//   ""CMonolopyInfo""
//   ""CMonolopyInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonolopyInfo::GetManagers
   strings:
     ""CMonolopyInfo""
     ""CMonolopyInfo::GetManagers"" */

int CMonolopyInfo__GetManagers_11a78530(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  if (DAT_123ad3bc == 0) {
    piVar1 = (int *)FUN_109be5b0(0,"CMonolopyInfo",0);
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        local_8 = &PTR_FUN_11de2840;
        if ((DAT_123c065c & 1) == 0) {
          DAT_123c065c = DAT_123c065c | 1;
          FUN_102500e0("CMonolopyInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7bd50);
        }
        puVar3 = (undefined4 *)*DAT_123c0660;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMonolopyInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_123c0618 & 1) == 0) {
            DAT_123c0618 = DAT_123c0618 | 1;
            FUN_109becc0();
            FUN_11a8911f(&LAB_11cb79d0);
          }
          puVar3 = &DAT_123c061c;
        }
        if ((iVar5 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar5)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(puVar3[5] + iVar5 * 4);
        }
        if (DAT_123ad3bc < *(int *)(iVar4 + 0x14)) {
          DAT_123ad3bc = *(int *)(iVar4 + 0x14);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      return DAT_123ad3bc;
    }
  }
  return DAT_123ad3bc;
}



/* --- CMonolopyInfo::GetManagers_11a78530 @ 11a78c50 --- */
// [RE-AUTO c0]

/* [RE-AUTO c0] */

int CMonolopyInfo__GetManagers_11a78530(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **ppuStack_8;
  
  if (DAT_123ad3bc == 0) {
    piVar1 = (int *)FUN_109be5b0(0,"CMonolopyInfo",0);
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        ppuStack_8 = &PTR_FUN_11de2840;
        if ((DAT_123c065c & 1) == 0) {
          DAT_123c065c = DAT_123c065c | 1;
          FUN_102500e0("CMonolopyInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7bd50);
        }
        puVar3 = (undefined4 *)*DAT_123c0660;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&ppuStack_8,"CMonolopyInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_123c0618 & 1) == 0) {
            DAT_123c0618 = DAT_123c0618 | 1;
            FUN_109becc0();
            FUN_11a8911f(&LAB_11cb79d0);
          }
          puVar3 = &DAT_123c061c;
        }
        if ((iVar5 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar5)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(puVar3[5] + iVar5 * 4);
        }
        if (DAT_123ad3bc < *(int *)(iVar4 + 0x14)) {
          DAT_123ad3bc = *(int *)(iVar4 + 0x14);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      return DAT_123ad3bc;
    }
  }
  return DAT_123ad3bc;
}



