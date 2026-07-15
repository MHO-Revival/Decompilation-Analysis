// ===== class CGuildResourceInstituteInfo  (4 recovered methods) =====

/* --- CGuildResourceInstituteInfo::GetManagers @ 1190eb30 --- */
// [RE-AUTO c3]
// id: CGuildResourceInstituteInfo::GetManagers
// strings:
//   ""CGuildResourceInstituteInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildResourceInstituteInfo::GetManagers
   strings:
     ""CGuildResourceInstituteInfo::GetManagers"" */

undefined *
CGuildResourceInstituteInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5e3e4;
  if (param_3 == 0) {
    if ((DAT_1239ec1c & 1) == 0) {
      DAT_1239ec1c = DAT_1239ec1c | 1;
      FUN_102500e0("CGuildResourceInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15c0);
    }
    if ((undefined *)*DAT_1239ec00 != (undefined *)0x0) {
      return (undefined *)*DAT_1239ec00;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239ece0 & 1) == 0) {
      DAT_1239ece0 = DAT_1239ece0 | 1;
      FUN_1190f150();
      FUN_11a8911f(&LAB_11cb1500);
    }
    puVar1 = &DAT_1239eca8;
  }
  return puVar1;
}



/* --- CGuildResourceInstituteInfo::GetManagers_11910470 @ 11910470 --- */
// [RE-AUTO c3]
// id: CGuildResourceInstituteInfo::GetManagers
// strings:
//   ""CGuildResourceInstituteInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildResourceInstituteInfo::GetManagers
   strings:
     ""CGuildResourceInstituteInfo::GetManagers"" */

undefined4 CGuildResourceInstituteInfo__GetManagers_11910470(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239ec1c & 1) == 0) {
      DAT_1239ec1c = DAT_1239ec1c | 1;
      FUN_102500e0("CGuildResourceInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15c0);
    }
    return *DAT_1239ec00;
  }
  return 0;
}



/* --- CGuildResourceInstituteInfo::GetManagers_119108d0 @ 119108d0 --- */
// [RE-AUTO c3]
// id: CGuildResourceInstituteInfo::GetManagers
// calls: CGuildResourceInstituteInfo::GetManagers
// strings:
//   ""CGuildResourceInstituteInfo""
//   ""CGuildResourceInstituteInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildResourceInstituteInfo::GetManagers
   calls: CGuildResourceInstituteInfo::GetManagers
   strings:
     ""CGuildResourceInstituteInfo""
     ""CGuildResourceInstituteInfo::GetManagers"" */

void CGuildResourceInstituteInfo__GetManagers_119108d0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildResourceInstituteInfo__GetManagers(0,"CGuildResourceInstituteInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5e3e4;
      if ((DAT_1239ec1c & 1) == 0) {
        DAT_1239ec1c = DAT_1239ec1c | 1;
        FUN_102500e0("CGuildResourceInstituteInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb15c0);
      }
      puVar3 = (undefined *)*DAT_1239ec00;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CGuildResourceInstituteInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239ece0 & 1) == 0) {
          DAT_1239ecac = 0;
          DAT_1239ecbc = 0;
          DAT_1239ecc0 = 0;
          _DAT_1239ecc4 = 0;
          uRam1239ecc8 = 0;
          DAT_1239ece0 = DAT_1239ece0 | 1;
          _DAT_1239eca8 = &PTR_FUN_11d5e434;
          _DAT_1239eccc = _DAT_11de9ae0;
          uRam1239ecd0 = _UNK_11de9ae4;
          uRam1239ecd4 = _UNK_11de9ae8;
          uRam1239ecd8 = _UNK_11de9aec;
          DAT_1239ecdc = 1;
          DAT_1239ecb0 = puVar3;
          _DAT_1239ecb4 = puVar3;
          _DAT_1239ecb8 = puVar3;
          FUN_11a8911f(&LAB_11cb1500);
        }
        puVar3 = &DAT_1239eca8;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        CGuildQuestPrizeInfo__GetManagers_11a05d90();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildResourceInstituteInfo::GetManagers_11a05a60 @ 11a05a60 --- */
// [RE-AUTO c3]
// id: CGuildResourceInstituteInfo::GetManagers
// calls: CGuildResourceInstituteInfo::GetManagers
// strings:
//   ""CGuildResourceInstituteInfo""
//   ""CGuildResourceInstituteInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildResourceInstituteInfo::GetManagers
   calls: CGuildResourceInstituteInfo::GetManagers
   strings:
     ""CGuildResourceInstituteInfo""
     ""CGuildResourceInstituteInfo::GetManagers"" */

int CGuildResourceInstituteInfo__GetManagers_11a05a60(int param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int local_8;
  
  piVar2 = (int *)CGuildResourceInstituteInfo__GetManagers(0,"CGuildResourceInstituteInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar1 = (int)param_2;
  iVar5 = 0;
  if (iVar3 < 1) {
    return (int)param_2;
  }
  do {
    param_2 = &PTR_FUN_11d5e3e4;
    if ((DAT_1239ec1c & 1) == 0) {
      DAT_1239ec1c = DAT_1239ec1c | 1;
      FUN_102500e0("CGuildResourceInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15c0);
    }
    puVar4 = (undefined *)*DAT_1239ec00;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&param_2,"CGuildResourceInstituteInfo",0),
       puVar4 == (undefined *)0x0)) {
      if ((DAT_1239ece0 & 1) == 0) {
        DAT_1239ecac = 0;
        DAT_1239ecbc = 0;
        DAT_1239ecc0 = 0;
        _DAT_1239ecc4 = 0;
        uRam1239ecc8 = 0;
        DAT_1239ece0 = DAT_1239ece0 | 1;
        _DAT_1239eca8 = &PTR_FUN_11d5e434;
        _DAT_1239eccc = _DAT_11de9ae0;
        uRam1239ecd0 = _UNK_11de9ae4;
        uRam1239ecd4 = _UNK_11de9ae8;
        uRam1239ecd8 = _UNK_11de9aec;
        DAT_1239ecdc = 1;
        DAT_1239ecb0 = puVar4;
        _DAT_1239ecb4 = puVar4;
        _DAT_1239ecb8 = puVar4;
        FUN_11a8911f(&LAB_11cb5b00);
      }
      puVar4 = &DAT_1239eca8;
    }
    param_2 = &PTR_FUN_11da54a8;
    if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
    }
    if ((local_8 != 0) && (*(int *)(local_8 + 0x10) <= param_1)) {
      piVar2 = *(int **)(iVar1 + 4);
      if (piVar2 == *(int **)(iVar1 + 8)) {
        FUN_11910e10(piVar2,&local_8,(int)&param_2 + 3,1,1);
      }
      else {
        *piVar2 = local_8;
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 4;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar3);
  return iVar1;
}



