// ===== class CSpoorGroupInfo  (4 recovered methods) =====

/* --- CSpoorGroupInfo::GetManagers @ 109473e0 --- */
// [RE-AUTO c3]
// id: CSpoorGroupInfo::GetManagers
// strings:
//   ""CSpoorGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorGroupInfo::GetManagers
   strings:
     ""CSpoorGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpoorGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8504 & 1) == 0) {
    DAT_123c8504 = DAT_123c8504 | 1;
    _DAT_123c851c = &DAT_123c850c;
    DAT_123c8520 = &DAT_123c850c;
    DAT_123c850c = 0;
    FUN_100d83d0("CSpoorGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c78590);
  }
  return DAT_123c8508;
}



/* --- CSpoorGroupInfo::GetManagers_111fbd60 @ 111fbd60 --- */
// [RE-AUTO c3]
// id: CSpoorGroupInfo::GetManagers
// strings:
//   ""CSpoorGroupInfo""
//   ""CSpoorGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorGroupInfo::GetManagers
   strings:
     ""CSpoorGroupInfo""
     ""CSpoorGroupInfo::GetManagers"" */

void __fastcall CSpoorGroupInfo__GetManagers_111fbd60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **local_8;
  
  iVar7 = 0;
  piVar2 = (int *)FUN_1094b620(0,"CSpoorGroupInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    while( true ) {
      local_8 = &PTR_FUN_11ddc1c0;
      if ((DAT_123c8504 & 1) == 0) {
        DAT_123c8504 = DAT_123c8504 | 1;
        FUN_102500e0("CSpoorGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78590);
      }
      puVar4 = (undefined4 *)*DAT_123c8508;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CSpoorGroupInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c85a4 & 1) == 0) {
          DAT_123c85ac = 0;
          DAT_123c85bc = 0;
          DAT_123c85c0 = 0;
          _DAT_123c85c4 = 0;
          uRam123c85c8 = 0;
          DAT_123c85a4 = DAT_123c85a4 | 1;
          DAT_123c85b0 = 0;
          _DAT_123c85b4 = 0;
          _DAT_123c85b8 = 0;
          DAT_123c85a8 = &PTR_FUN_11ddc214;
          _DAT_123c85cc = _DAT_11de9ae0;
          uRam123c85d0 = _UNK_11de9ae4;
          uRam123c85d4 = _UNK_11de9ae8;
          uRam123c85d8 = _UNK_11de9aec;
          DAT_123c85dc = 1;
          FUN_11a8911f(&LAB_11c97900);
        }
        puVar4 = &DAT_123c85a8;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar7) && (iVar7 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (piVar2 = *(int **)(puVar4[5] + iVar7 * 4), piVar2 != (int *)0x0)) &&
         (iVar1 = piVar2[5], iVar5 = FUN_1134b7d0(), iVar5 == iVar1)) break;
      iVar7 = iVar7 + 1;
      if (iVar3 <= iVar7) {
        return;
      }
    }
    iVar3 = **(int **)(param_1 + 8);
    uVar6 = (**(code **)(*piVar2 + 0x18))();
    (**(code **)(iVar3 + 0x18))(uVar6);
  }
  return;
}



/* --- CSpoorGroupInfo::GetManagers_1197a8b0 @ 1197a8b0 --- */
// [RE-AUTO c3]
// id: CSpoorGroupInfo::GetManagers
// strings:
//   ""CSpoorGroupInfo""
//   ""CSpoorGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorGroupInfo::GetManagers
   strings:
     ""CSpoorGroupInfo""
     ""CSpoorGroupInfo::GetManagers"" */

void CSpoorGroupInfo__GetManagers_1197a8b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1094b620(0,"CSpoorGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc1c0;
      if ((DAT_123c8504 & 1) == 0) {
        DAT_123c8504 = DAT_123c8504 | 1;
        FUN_102500e0("CSpoorGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78590);
      }
      if (((*DAT_123c8508 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorGroupInfo",0), iVar3 == 0))
         && ((DAT_123c85a4 & 1) == 0)) {
        DAT_123c85ac = 0;
        DAT_123c85bc = 0;
        DAT_123c85c0 = 0;
        _DAT_123c85c4 = 0;
        uRam123c85c8 = 0;
        DAT_123c85a4 = DAT_123c85a4 | 1;
        DAT_123c85a8 = &PTR_FUN_11ddc214;
        _DAT_123c85cc = _DAT_11de9ae0;
        uRam123c85d0 = _UNK_11de9ae4;
        uRam123c85d4 = _UNK_11de9ae8;
        uRam123c85d8 = _UNK_11de9aec;
        DAT_123c85dc = 1;
        DAT_123c85b0 = iVar3;
        _DAT_123c85b4 = iVar3;
        _DAT_123c85b8 = iVar3;
        FUN_11a8911f(&LAB_11cb3480);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a512b0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSpoorGroupInfo::GetManagers_1197ace0 @ 1197ace0 --- */
// [RE-AUTO c3]
// id: CSpoorGroupInfo::GetManagers
// strings:
//   ""CSpoorGroupInfo""
//   ""CSpoorGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorGroupInfo::GetManagers
   strings:
     ""CSpoorGroupInfo""
     ""CSpoorGroupInfo::GetManagers"" */

void CSpoorGroupInfo__GetManagers_1197ace0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1094b620(0,"CSpoorGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc1c0;
      if ((DAT_123c8504 & 1) == 0) {
        DAT_123c8504 = DAT_123c8504 | 1;
        FUN_102500e0("CSpoorGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78590);
      }
      if (((*DAT_123c8508 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorGroupInfo",0), iVar3 == 0))
         && ((DAT_123c85a4 & 1) == 0)) {
        DAT_123c85ac = 0;
        DAT_123c85bc = 0;
        DAT_123c85c0 = 0;
        _DAT_123c85c4 = 0;
        uRam123c85c8 = 0;
        DAT_123c85a4 = DAT_123c85a4 | 1;
        DAT_123c85a8 = &PTR_FUN_11ddc214;
        _DAT_123c85cc = _DAT_11de9ae0;
        uRam123c85d0 = _UNK_11de9ae4;
        uRam123c85d4 = _UNK_11de9ae8;
        uRam123c85d8 = _UNK_11de9aec;
        DAT_123c85dc = 1;
        DAT_123c85b0 = iVar3;
        _DAT_123c85b4 = iVar3;
        _DAT_123c85b8 = iVar3;
        FUN_11a8911f(&LAB_11cb3480);
      }
      local_8 = &PTR_FUN_11da54a8;
      CSpoorInfo__GetManagers_11a51150();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



