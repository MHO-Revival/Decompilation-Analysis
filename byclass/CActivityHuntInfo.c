// ===== class CActivityHuntInfo  (4 recovered methods) =====

/* --- CActivityHuntInfo::GetManagers @ 1090b9e0 --- */
// [RE-AUTO c3]
// id: CActivityHuntInfo::GetManagers
// strings:
//   ""CActivityHuntInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityHuntInfo::GetManagers
   strings:
     ""CActivityHuntInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CActivityHuntInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfe20 & 1) == 0) {
    DAT_123bfe20 = DAT_123bfe20 | 1;
    _DAT_123bfe18 = &DAT_123bfe08;
    DAT_123bfe1c = &DAT_123bfe08;
    DAT_123bfe08 = 0;
    FUN_100d83d0("CActivityHuntInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c771a0);
  }
  return DAT_123bfe04;
}



/* --- CActivityHuntInfo::GetManagers_11201850 @ 11201850 --- */
// [RE-AUTO c3]
// id: CActivityHuntInfo::GetManagers
// strings:
//   ""CActivityHuntInfo""
//   ""CActivityHuntInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityHuntInfo::GetManagers
   strings:
     ""CActivityHuntInfo""
     ""CActivityHuntInfo::GetManagers"" */

undefined4 CActivityHuntInfo__GetManagers_11201850(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  piVar1 = (int *)FUN_1090fd70(0,"CActivityHuntInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd8e70;
      if ((DAT_123bfe20 & 1) == 0) {
        DAT_123bfe20 = DAT_123bfe20 | 1;
        FUN_102500e0("CActivityHuntInfo::GetManagers");
        FUN_11a8911f(&LAB_11c771a0);
      }
      puVar3 = (undefined *)*DAT_123bfe04;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CActivityHuntInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bfd7c & 1) == 0) {
          DAT_123bfd84 = 0;
          DAT_123bfd94 = 0;
          DAT_123bfd98 = 0;
          _DAT_123bfd9c = 0;
          DAT_123bfda0 = 0;
          DAT_123bfd7c = DAT_123bfd7c | 1;
          DAT_123bfd88 = 0;
          _DAT_123bfd8c = 0;
          _DAT_123bfd90 = 0;
          _DAT_123bfd80 = &PTR_FUN_11dd8ed8;
          DAT_123bfda4 = _DAT_11de9ae0;
          DAT_123bfda8 = _UNK_11de9ae4;
          uRam123bfdac = _UNK_11de9ae8;
          DAT_123bfdb0 = _UNK_11de9aec;
          DAT_123bfdb4 = 1;
          FUN_11a8911f(&LAB_11c97ae0);
        }
        puVar3 = &DAT_123bfd80;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar6 * 4) != 0)) {
        uVar4 = FUN_11728390();
        iVar5 = FUN_1122bad0(uVar4);
        if ((iVar5 != 0) && (*(char *)(iVar5 + 4) == '\x03')) {
          uVar4 = FUN_117284e0();
          return uVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return 0;
}



/* --- CActivityHuntInfo::GetManagers_11949c30 @ 11949c30 --- */
// [RE-AUTO c3]
// id: CActivityHuntInfo::GetManagers
// strings:
//   ""CActivityHuntInfo""
//   ""CActivityHuntInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityHuntInfo::GetManagers
   strings:
     ""CActivityHuntInfo""
     ""CActivityHuntInfo::GetManagers"" */

void CActivityHuntInfo__GetManagers_11949c30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1090fd70(0,"CActivityHuntInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd8e70;
      if ((DAT_123bfe20 & 1) == 0) {
        DAT_123bfe20 = DAT_123bfe20 | 1;
        FUN_102500e0("CActivityHuntInfo::GetManagers");
        FUN_11a8911f(&LAB_11c771a0);
      }
      if (((*DAT_123bfe04 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CActivityHuntInfo",0), iVar3 == 0)) &&
         ((DAT_123bfd7c & 1) == 0)) {
        DAT_123bfd84 = 0;
        DAT_123bfd94 = 0;
        DAT_123bfd98 = 0;
        _DAT_123bfd9c = 0;
        DAT_123bfda0 = 0;
        DAT_123bfd7c = DAT_123bfd7c | 1;
        _DAT_123bfd80 = &PTR_FUN_11dd8ed8;
        DAT_123bfda4 = _DAT_11de9ae0;
        DAT_123bfda8 = _UNK_11de9ae4;
        uRam123bfdac = _UNK_11de9ae8;
        DAT_123bfdb0 = _UNK_11de9aec;
        DAT_123bfdb4 = 1;
        DAT_123bfd88 = iVar3;
        _DAT_123bfd8c = iVar3;
        _DAT_123bfd90 = iVar3;
        FUN_11a8911f(&LAB_11cb2700);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117288b0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CActivityHuntInfo::GetManagers_11949fd0 @ 11949fd0 --- */
// [RE-AUTO c3]
// id: CActivityHuntInfo::GetManagers
// calls: CActivityInfo::GetManagers_117286e0
// strings:
//   ""CActivityHuntInfo""
//   ""CActivityHuntInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityHuntInfo::GetManagers
   calls: CActivityInfo::GetManagers_117286e0
   strings:
     ""CActivityHuntInfo""
     ""CActivityHuntInfo::GetManagers"" */

void CActivityHuntInfo__GetManagers_11949fd0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1090fd70(0,"CActivityHuntInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd8e70;
      if ((DAT_123bfe20 & 1) == 0) {
        DAT_123bfe20 = DAT_123bfe20 | 1;
        FUN_102500e0("CActivityHuntInfo::GetManagers");
        FUN_11a8911f(&LAB_11c771a0);
      }
      puVar4 = (undefined *)*DAT_123bfe04;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CActivityHuntInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bfd7c & 1) == 0) {
          DAT_123bfd84 = 0;
          DAT_123bfd94 = 0;
          DAT_123bfd98 = 0;
          _DAT_123bfd9c = 0;
          DAT_123bfda0 = 0;
          DAT_123bfd7c = DAT_123bfd7c | 1;
          _DAT_123bfd80 = &PTR_FUN_11dd8ed8;
          DAT_123bfda4 = _DAT_11de9ae0;
          DAT_123bfda8 = _UNK_11de9ae4;
          uRam123bfdac = _UNK_11de9ae8;
          DAT_123bfdb0 = _UNK_11de9aec;
          DAT_123bfdb4 = 1;
          DAT_123bfd88 = puVar4;
          _DAT_123bfd8c = puVar4;
          _DAT_123bfd90 = puVar4;
          FUN_11a8911f(&LAB_11cb2700);
        }
        puVar4 = &DAT_123bfd80;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CActivityInfo__GetManagers_117286e0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



