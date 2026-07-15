// ===== class CSpoorPrizeInfo  (4 recovered methods) =====

/* --- CSpoorPrizeInfo::GetManagers @ 10923cd0 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeInfo::GetManagers
// strings:
//   ""CSpoorPrizeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeInfo::GetManagers
   strings:
     ""CSpoorPrizeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpoorPrizeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bff08 & 1) == 0) {
    DAT_123bff08 = DAT_123bff08 | 1;
    _DAT_123bff00 = &DAT_123bfef0;
    DAT_123bff04 = &DAT_123bfef0;
    DAT_123bfef0 = 0;
    FUN_100d83d0("CSpoorPrizeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77b30);
  }
  return DAT_123bfeec;
}



/* --- CSpoorPrizeInfo::GetManagers_115048c0 @ 115048c0 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeInfo::GetManagers
// strings:
//   ""CSpoorPrizeInfo""
//   ""CSpoorPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeInfo::GetManagers
   strings:
     ""CSpoorPrizeInfo""
     ""CSpoorPrizeInfo::GetManagers"" */

void __fastcall CSpoorPrizeInfo__GetManagers_115048c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  local_8 = 0;
  local_c = param_1;
  piVar1 = (int *)FUN_10928090(0,"CSpoorPrizeInfo",0);
  local_14 = (**(code **)(*piVar1 + 0x28))();
  iVar9 = 0;
  if (0 < local_14) {
    do {
      local_10 = &PTR_FUN_11dda318;
      if ((DAT_123bff08 & 1) == 0) {
        DAT_123bff08 = DAT_123bff08 | 1;
        FUN_102500e0("CSpoorPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77b30);
      }
      puVar2 = (undefined4 *)*DAT_123bfeec;
      if ((puVar2 == (undefined4 *)0x0) &&
         (puVar2 = (undefined4 *)FUN_11679e10(&local_10,"CSpoorPrizeInfo",0),
         puVar2 == (undefined4 *)0x0)) {
        if ((DAT_123bfea8 & 1) == 0) {
          DAT_123bfeb0 = 0;
          DAT_123bfec0 = 0;
          DAT_123bfec4 = 0;
          _DAT_123bfec8 = 0;
          DAT_123bfecc = 0;
          DAT_123bfea8 = DAT_123bfea8 | 1;
          DAT_123bfeac = &PTR_FUN_11dda328;
          DAT_123bfed0 = _DAT_11de9ae0;
          DAT_123bfed4 = _UNK_11de9ae4;
          uRam123bfed8 = _UNK_11de9ae8;
          DAT_123bfedc = _UNK_11de9aec;
          DAT_123bfee0 = 1;
          DAT_123bfeb4 = puVar2;
          _DAT_123bfeb8 = puVar2;
          _DAT_123bfebc = puVar2;
          FUN_11a8911f(&LAB_11c9fe70);
        }
        puVar2 = &DAT_123bfeac;
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((-1 < iVar9) && (iVar9 < (int)(puVar2[6] - puVar2[5]) >> 2)) &&
         (piVar1 = *(int **)(puVar2[5] + iVar9 * 4), iVar6 = local_8, piVar1 != (int *)0x0)) {
        iVar3 = (**(code **)(*piVar1 + 0x18))();
        iVar7 = param_1 + 0x20;
        iVar6 = *(int *)(param_1 + 0x24);
        iVar4 = iVar7;
        if (*(int *)(param_1 + 0x24) == 0) {
LAB_11504a1f:
          iVar6 = local_8;
          param_1 = local_c;
          if (iVar4 != iVar7) goto LAB_11504a95;
        }
        else {
          do {
            if (*(int *)(iVar6 + 0x10) < iVar3) {
              iVar8 = *(int *)(iVar6 + 0xc);
            }
            else {
              iVar8 = *(int *)(iVar6 + 8);
              iVar4 = iVar6;
            }
            iVar6 = iVar8;
          } while (iVar8 != 0);
          if (iVar4 != iVar7) {
            if (iVar3 < *(int *)(iVar4 + 0x10)) {
              iVar4 = iVar7;
            }
            goto LAB_11504a1f;
          }
        }
        iVar7 = (**(code **)(*piVar1 + 0x18))();
        param_1 = local_c;
        iVar8 = local_c + 0x38;
        iVar4 = *(int *)(local_c + 0x3c);
        iVar3 = iVar8;
        iVar6 = local_8;
        if (iVar4 == 0) {
LAB_11504a5d:
          if (iVar3 != iVar8) goto LAB_11504a95;
        }
        else {
          do {
            if (*(int *)(iVar4 + 0x10) < iVar7) {
              iVar5 = *(int *)(iVar4 + 0xc);
            }
            else {
              iVar5 = *(int *)(iVar4 + 8);
              iVar3 = iVar4;
            }
            iVar4 = iVar5;
          } while (iVar5 != 0);
          if (iVar3 != iVar8) {
            if (iVar7 < *(int *)(iVar3 + 0x10)) {
              iVar3 = iVar8;
            }
            goto LAB_11504a5d;
          }
        }
        if (piVar1[8] <= *(int *)(local_c + 0x1c)) {
          local_10 = (undefined **)(**(code **)(*piVar1 + 0x18))();
          FUN_10467580(local_1c,&local_10);
          local_8 = local_8 + 1;
          iVar6 = local_8;
        }
      }
LAB_11504a95:
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_14);
    if (0 < iVar6) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    }
  }
  return;
}



/* --- CSpoorPrizeInfo::GetManagers_1197a9e0 @ 1197a9e0 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeInfo::GetManagers
// strings:
//   ""CSpoorPrizeInfo""
//   ""CSpoorPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeInfo::GetManagers
   strings:
     ""CSpoorPrizeInfo""
     ""CSpoorPrizeInfo::GetManagers"" */

void CSpoorPrizeInfo__GetManagers_1197a9e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10928090(0,"CSpoorPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dda318;
      if ((DAT_123bff08 & 1) == 0) {
        DAT_123bff08 = DAT_123bff08 | 1;
        FUN_102500e0("CSpoorPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77b30);
      }
      if (((*DAT_123bfeec == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorPrizeInfo",0), iVar3 == 0))
         && ((DAT_123bfea8 & 1) == 0)) {
        DAT_123bfeb0 = 0;
        DAT_123bfec0 = 0;
        DAT_123bfec4 = 0;
        _DAT_123bfec8 = 0;
        DAT_123bfecc = 0;
        DAT_123bfea8 = DAT_123bfea8 | 1;
        DAT_123bfeac = &PTR_FUN_11dda328;
        DAT_123bfed0 = _DAT_11de9ae0;
        DAT_123bfed4 = _UNK_11de9ae4;
        uRam123bfed8 = _UNK_11de9ae8;
        DAT_123bfedc = _UNK_11de9aec;
        DAT_123bfee0 = 1;
        DAT_123bfeb4 = iVar3;
        _DAT_123bfeb8 = iVar3;
        _DAT_123bfebc = iVar3;
        FUN_11a8911f(&LAB_11cb35a0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a515e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSpoorPrizeInfo::GetManagers_1197ae10 @ 1197ae10 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeInfo::GetManagers
// strings:
//   ""CSpoorPrizeInfo""
//   ""CSpoorPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeInfo::GetManagers
   strings:
     ""CSpoorPrizeInfo""
     ""CSpoorPrizeInfo::GetManagers"" */

void CSpoorPrizeInfo__GetManagers_1197ae10(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10928090(0,"CSpoorPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dda318;
      if ((DAT_123bff08 & 1) == 0) {
        DAT_123bff08 = DAT_123bff08 | 1;
        FUN_102500e0("CSpoorPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77b30);
      }
      if (((*DAT_123bfeec == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpoorPrizeInfo",0), iVar3 == 0))
         && ((DAT_123bfea8 & 1) == 0)) {
        DAT_123bfeb0 = 0;
        DAT_123bfec0 = 0;
        DAT_123bfec4 = 0;
        _DAT_123bfec8 = 0;
        DAT_123bfecc = 0;
        DAT_123bfea8 = DAT_123bfea8 | 1;
        DAT_123bfeac = &PTR_FUN_11dda328;
        DAT_123bfed0 = _DAT_11de9ae0;
        DAT_123bfed4 = _UNK_11de9ae4;
        uRam123bfed8 = _UNK_11de9ae8;
        DAT_123bfedc = _UNK_11de9aec;
        DAT_123bfee0 = 1;
        DAT_123bfeb4 = iVar3;
        _DAT_123bfeb8 = iVar3;
        _DAT_123bfebc = iVar3;
        FUN_11a8911f(&LAB_11cb35a0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a515d0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



