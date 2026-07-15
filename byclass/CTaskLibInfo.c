// ===== class CTaskLibInfo  (14 recovered methods) =====

/* --- CTaskLibInfo::GetManagers @ 111ecce0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo::GetManagers"" */

undefined * CTaskLibInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17b50;
  if (param_3 == 0) {
    if ((DAT_1203f3d4 & 1) == 0) {
      DAT_1203f3d4 = DAT_1203f3d4 | 1;
      FUN_102500e0("CTaskLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97630);
    }
    if ((undefined *)*DAT_1203f3b8 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f3b8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f41c & 1) == 0) {
      DAT_1203f41c = DAT_1203f41c | 1;
      FUN_111ecfe0();
      FUN_11a8911f(&LAB_11c975d0);
    }
    puVar1 = &DAT_1203f3e4;
  }
  return puVar1;
}



/* --- CTaskLibInfo::GetManagers_111edf80 @ 111edf80 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo::GetManagers"" */

undefined4 CTaskLibInfo__GetManagers_111edf80(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f3d4 & 1) == 0) {
      DAT_1203f3d4 = DAT_1203f3d4 | 1;
      FUN_102500e0("CTaskLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97630);
    }
    return *DAT_1203f3b8;
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_114ed1d0 @ 114ed1d0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo::GetManagers""
//   ""CTaskLibInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo::GetManagers""
     ""CTaskLibInfo"" */

void CTaskLibInfo__GetManagers_114ed1d0(undefined **param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)((int)param_1 + 0x1626);
  if (iVar3 < 0x21) {
    if (iVar3 < 1) {
      return;
    }
  }
  else {
    iVar3 = 0x20;
  }
  iVar5 = (int)param_1 + 0x1636;
  do {
    iVar4 = *(int *)(iVar5 + -8);
    param_1 = &PTR_FUN_11d17b50;
    if ((DAT_1203f3d4 & 1) == 0) {
      DAT_1203f3d4 = DAT_1203f3d4 | 1;
      FUN_102500e0("CTaskLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97630);
    }
    puVar2 = (undefined *)*DAT_1203f3b8;
    if ((puVar2 == (undefined *)0x0) &&
       (puVar2 = (undefined *)FUN_11679e10(&param_1,"CTaskLibInfo",0), puVar2 == (undefined *)0x0))
    {
      if ((DAT_1203f41c & 1) == 0) {
        DAT_1203f3e8 = 0;
        DAT_1203f3f8 = 0;
        DAT_1203f3fc = 0;
        _DAT_1203f400 = 0;
        DAT_1203f404 = 0;
        DAT_1203f41c = DAT_1203f41c | 1;
        _DAT_1203f3e4 = &PTR_FUN_11d17b84;
        DAT_1203f408 = _DAT_11de9ae0;
        DAT_1203f40c = _UNK_11de9ae4;
        uRam1203f410 = _UNK_11de9ae8;
        DAT_1203f414 = _UNK_11de9aec;
        DAT_1203f418 = 1;
        DAT_1203f3ec = puVar2;
        _DAT_1203f3f0 = puVar2;
        _DAT_1203f3f4 = puVar2;
        FUN_11a8911f(&LAB_11c9fb50);
      }
      puVar2 = &DAT_1203f3e4;
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar4 != -1) &&
       ((((iVar4 != 0 || (*(int *)(puVar2 + 0x30) == 0)) && (*(int *)(puVar2 + 0x28) != 0)) &&
        ((iVar4 = iVar4 - *(int *)(puVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar2 + 0x24))))
        ))) {
      iVar1 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar4 / *(int *)(puVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + (iVar4 % *(int *)(puVar2 + 0x28)) * 4) != 0 &&
          (iVar4 = FUN_11746b00(), iVar4 != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x1c);
      }
    }
    iVar5 = iVar5 + 0x14;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}



/* --- CTaskLibInfo::GetManagers_117462e0 @ 117462e0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int CTaskLibInfo__GetManagers_117462e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 7)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_117464a0 @ 117464a0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int CTaskLibInfo__GetManagers_117464a0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 2)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_117465e0 @ 117465e0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

undefined4 * CTaskLibInfo__GetManagers_117465e0(undefined **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int local_8;
  
  puVar1 = param_1;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
      }
      if ((local_8 != 0) && (*(int *)(*(int *)(local_8 + 0x2c) + 0x10) == 3)) {
        piVar2 = (int *)puVar1[1];
        if (piVar2 == (int *)puVar1[2]) {
          FUN_11747800(piVar2,&local_8,(int)&param_1 + 3,1,1);
        }
        else {
          *piVar2 = local_8;
          puVar1[1] = puVar1[1] + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return puVar1;
}



/* --- CTaskLibInfo::GetManagers_11746760 @ 11746760 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

undefined4 * CTaskLibInfo__GetManagers_11746760(undefined **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int local_8;
  
  puVar1 = param_1;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
      }
      if ((local_8 != 0) && (*(int *)(*(int *)(local_8 + 0x2c) + 0x10) == 4)) {
        piVar2 = (int *)puVar1[1];
        if (piVar2 == (int *)puVar1[2]) {
          FUN_11747800(piVar2,&local_8,(int)&param_1 + 3,1,1);
        }
        else {
          *piVar2 = local_8;
          puVar1[1] = puVar1[1] + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return puVar1;
}



/* --- CTaskLibInfo::GetManagers_117468e0 @ 117468e0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int * CTaskLibInfo__GetManagers_117468e0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  piVar1 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar3 = (undefined *)*DAT_1203f3b8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar3 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          DAT_1203f3ec = 0;
          _DAT_1203f3f0 = 0;
          _DAT_1203f3f4 = 0;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar3 = &DAT_1203f3e4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (piVar1 = *(int **)(*(int *)(puVar3 + 0x14) + iVar6 * 4), piVar1 != (int *)0x0)) {
        iVar4 = FUN_117f86d0();
        iVar4 = *(int *)(iVar4 + 0x40);
        iVar5 = (**(code **)(*piVar1 + 0x18))();
        if (iVar5 == iVar4) {
          return piVar1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return (int *)0x0;
}



/* --- CTaskLibInfo::GetManagers_11746c60 @ 11746c60 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int CTaskLibInfo__GetManagers_11746c60(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 1)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_11746da0 @ 11746da0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int CTaskLibInfo__GetManagers_11746da0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 5)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_11747020 @ 11747020 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

int CTaskLibInfo__GetManagers_11747020(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11ca9780);
        }
        puVar4 = &DAT_1203f3e4;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 6)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CTaskLibInfo::GetManagers_117c1e20 @ 117c1e20 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers, CTaskGroupInfo::GetManagers_117460f0
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers, CTaskGroupInfo::GetManagers_117460f0
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

void __fastcall CTaskLibInfo__GetManagers_117c1e20(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    while( true ) {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      puVar4 = (undefined *)*DAT_1203f3b8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskLibInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_1203f41c & 1) == 0) {
          DAT_1203f3e8 = 0;
          DAT_1203f3f8 = 0;
          DAT_1203f3fc = 0;
          _DAT_1203f400 = 0;
          DAT_1203f404 = 0;
          DAT_1203f41c = DAT_1203f41c | 1;
          _DAT_1203f3e4 = &PTR_FUN_11d17b84;
          DAT_1203f408 = _DAT_11de9ae0;
          DAT_1203f40c = _UNK_11de9ae4;
          uRam1203f410 = _UNK_11de9ae8;
          DAT_1203f414 = _UNK_11de9aec;
          DAT_1203f418 = 1;
          DAT_1203f3ec = puVar4;
          _DAT_1203f3f0 = puVar4;
          _DAT_1203f3f4 = puVar4;
          FUN_11a8911f(&LAB_11caa6d0);
        }
        puVar4 = &DAT_1203f3e4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
      }
      cVar1 = CTaskGroupInfo__GetManagers_117460f0(param_1,param_1 + 0x3c);
      if (cVar1 != '\0') break;
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = uVar6;
  }
  return;
}



/* --- CTaskLibInfo::GetManagers_119069f0 @ 119069f0 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

void CTaskLibInfo__GetManagers_119069f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      if (((*DAT_1203f3b8 == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskLibInfo",0), iVar3 == 0)) &&
         ((DAT_1203f41c & 1) == 0)) {
        DAT_1203f3e8 = 0;
        DAT_1203f3f8 = 0;
        DAT_1203f3fc = 0;
        _DAT_1203f400 = 0;
        DAT_1203f404 = 0;
        DAT_1203f41c = DAT_1203f41c | 1;
        _DAT_1203f3e4 = &PTR_FUN_11d17b84;
        DAT_1203f408 = _DAT_11de9ae0;
        DAT_1203f40c = _UNK_11de9ae4;
        uRam1203f410 = _UNK_11de9ae8;
        DAT_1203f414 = _UNK_11de9aec;
        DAT_1203f418 = 1;
        DAT_1203f3ec = iVar3;
        _DAT_1203f3f0 = iVar3;
        _DAT_1203f3f4 = iVar3;
        FUN_11a8911f(&LAB_11cb0f90);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11747410();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskLibInfo::GetManagers_11906b40 @ 11906b40 --- */
// [RE-AUTO c3]
// id: CTaskLibInfo::GetManagers
// calls: CTaskLibInfo::GetManagers, CTaskGroupInfo::GetManagers_117472a0
// strings:
//   ""CTaskLibInfo""
//   ""CTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskLibInfo::GetManagers
   calls: CTaskLibInfo::GetManagers, CTaskGroupInfo::GetManagers_117472a0
   strings:
     ""CTaskLibInfo""
     ""CTaskLibInfo::GetManagers"" */

void CTaskLibInfo__GetManagers_11906b40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17b50;
      if ((DAT_1203f3d4 & 1) == 0) {
        DAT_1203f3d4 = DAT_1203f3d4 | 1;
        FUN_102500e0("CTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97630);
      }
      if (((*DAT_1203f3b8 == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskLibInfo",0), iVar3 == 0)) &&
         ((DAT_1203f41c & 1) == 0)) {
        DAT_1203f3e8 = 0;
        DAT_1203f3f8 = 0;
        DAT_1203f3fc = 0;
        _DAT_1203f400 = 0;
        DAT_1203f404 = 0;
        DAT_1203f41c = DAT_1203f41c | 1;
        _DAT_1203f3e4 = &PTR_FUN_11d17b84;
        DAT_1203f408 = _DAT_11de9ae0;
        DAT_1203f40c = _UNK_11de9ae4;
        uRam1203f410 = _UNK_11de9ae8;
        DAT_1203f414 = _UNK_11de9aec;
        DAT_1203f418 = 1;
        DAT_1203f3ec = iVar3;
        _DAT_1203f3f0 = iVar3;
        _DAT_1203f3f4 = iVar3;
        FUN_11a8911f(&LAB_11cb0f90);
      }
      local_8 = &PTR_FUN_11da54a8;
      CTaskGroupInfo__GetManagers_117472a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_11747b10();
  return;
}



