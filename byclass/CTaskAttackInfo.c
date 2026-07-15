// ===== class CTaskAttackInfo  (5 recovered methods) =====

/* --- CTaskAttackInfo::GetManagers @ 11771590 --- */
// [RE-AUTO c3]
// id: CTaskAttackInfo::GetManagers
// strings:
//   ""CTaskAttackInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskAttackInfo::GetManagers
   strings:
     ""CTaskAttackInfo::GetManagers"" */

undefined * CTaskAttackInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d483f0;
  if (param_3 == 0) {
    if ((DAT_12392128 & 1) == 0) {
      DAT_12392128 = DAT_12392128 | 1;
      FUN_102500e0("CTaskAttackInfo::GetManagers");
      FUN_11a8911f(&LAB_11caa1a0);
    }
    if ((undefined *)*DAT_1239210c != (undefined *)0x0) {
      return (undefined *)*DAT_1239210c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239216c & 1) == 0) {
      DAT_1239216c = DAT_1239216c | 1;
      FUN_117750e0();
      FUN_11a8911f(&LAB_11caa0e0);
    }
    puVar1 = &DAT_12392134;
  }
  return puVar1;
}



/* --- CTaskAttackInfo::GetManagers_1177e8a0 @ 1177e8a0 --- */
// [RE-AUTO c3]
// id: CTaskAttackInfo::GetManagers
// strings:
//   ""CTaskAttackInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskAttackInfo::GetManagers
   strings:
     ""CTaskAttackInfo::GetManagers"" */

undefined4 CTaskAttackInfo__GetManagers_1177e8a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12392128 & 1) == 0) {
      DAT_12392128 = DAT_12392128 | 1;
      FUN_102500e0("CTaskAttackInfo::GetManagers");
      FUN_11a8911f(&LAB_11caa1a0);
    }
    return *DAT_1239210c;
  }
  return 0;
}



/* --- CTaskAttackInfo::GetManagers_1185e230 @ 1185e230 --- */
// [RE-AUTO c3]
// id: CTaskAttackInfo::GetManagers
// calls: CTaskAttackInfo::GetManagers
// strings:
//   ""CTaskAttackInfo""
//   ""CTaskAttackInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskAttackInfo::GetManagers
   calls: CTaskAttackInfo::GetManagers
   strings:
     ""CTaskAttackInfo""
     ""CTaskAttackInfo::GetManagers"" */

undefined4 CTaskAttackInfo__GetManagers_1185e230(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar1 = (int *)CTaskAttackInfo__GetManagers(0,"CTaskAttackInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d483f0;
      if ((DAT_12392128 & 1) == 0) {
        DAT_12392128 = DAT_12392128 | 1;
        FUN_102500e0("CTaskAttackInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa1a0);
      }
      puVar3 = (undefined *)*DAT_1239210c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CTaskAttackInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239216c & 1) == 0) {
          DAT_12392138 = 0;
          DAT_12392148 = 0;
          DAT_1239214c = 0;
          _DAT_12392150 = 0;
          uRam12392154 = 0;
          DAT_1239216c = DAT_1239216c | 1;
          _DAT_12392134 = &PTR_FUN_11d48428;
          _DAT_12392158 = _DAT_11de9ae0;
          uRam1239215c = _UNK_11de9ae4;
          uRam12392160 = _UNK_11de9ae8;
          uRam12392164 = _UNK_11de9aec;
          DAT_12392168 = 1;
          DAT_1239213c = puVar3;
          _DAT_12392140 = puVar3;
          _DAT_12392144 = puVar3;
          FUN_11a8911f(&LAB_11cadb60);
        }
        puVar3 = &DAT_12392134;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if ((((param_1 == piVar1[6]) || (param_1 == piVar1[7])) || (param_1 == piVar1[8])) ||
         ((param_1 == piVar1[9] || (param_1 == piVar1[10])))) {
        uVar4 = (**(code **)(*piVar1 + 0x18))();
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



/* --- CTaskAttackInfo::GetManagers_11904920 @ 11904920 --- */
// [RE-AUTO c3]
// id: CTaskAttackInfo::GetManagers
// calls: CTaskAttackInfo::GetManagers
// strings:
//   ""CTaskAttackInfo""
//   ""CTaskAttackInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskAttackInfo::GetManagers
   calls: CTaskAttackInfo::GetManagers
   strings:
     ""CTaskAttackInfo""
     ""CTaskAttackInfo::GetManagers"" */

void CTaskAttackInfo__GetManagers_11904920(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskAttackInfo__GetManagers(0,"CTaskAttackInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d483f0;
      if ((DAT_12392128 & 1) == 0) {
        DAT_12392128 = DAT_12392128 | 1;
        FUN_102500e0("CTaskAttackInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa1a0);
      }
      if (((*DAT_1239210c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskAttackInfo",0), iVar3 == 0))
         && ((DAT_1239216c & 1) == 0)) {
        DAT_12392138 = 0;
        DAT_12392148 = 0;
        DAT_1239214c = 0;
        _DAT_12392150 = 0;
        uRam12392154 = 0;
        DAT_1239216c = DAT_1239216c | 1;
        _DAT_12392134 = &PTR_FUN_11d48428;
        _DAT_12392158 = _DAT_11de9ae0;
        uRam1239215c = _UNK_11de9ae4;
        uRam12392160 = _UNK_11de9ae8;
        uRam12392164 = _UNK_11de9aec;
        DAT_12392168 = 1;
        DAT_1239213c = iVar3;
        _DAT_12392140 = iVar3;
        _DAT_12392144 = iVar3;
        FUN_11a8911f(&LAB_11cb0e10);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185e410();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskAttackInfo::GetManagers_11904a70 @ 11904a70 --- */
// [RE-AUTO c3]
// id: CTaskAttackInfo::GetManagers
// calls: CTaskAttackInfo::GetManagers
// strings:
//   ""CTaskAttackInfo""
//   ""CTaskAttackInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskAttackInfo::GetManagers
   calls: CTaskAttackInfo::GetManagers
   strings:
     ""CTaskAttackInfo""
     ""CTaskAttackInfo::GetManagers"" */

void CTaskAttackInfo__GetManagers_11904a70(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskAttackInfo__GetManagers(0,"CTaskAttackInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d483f0;
      if ((DAT_12392128 & 1) == 0) {
        DAT_12392128 = DAT_12392128 | 1;
        FUN_102500e0("CTaskAttackInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa1a0);
      }
      if (((*DAT_1239210c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskAttackInfo",0), iVar3 == 0))
         && ((DAT_1239216c & 1) == 0)) {
        DAT_12392138 = 0;
        DAT_12392148 = 0;
        DAT_1239214c = 0;
        _DAT_12392150 = 0;
        uRam12392154 = 0;
        DAT_1239216c = DAT_1239216c | 1;
        _DAT_12392134 = &PTR_FUN_11d48428;
        _DAT_12392158 = _DAT_11de9ae0;
        uRam1239215c = _UNK_11de9ae4;
        uRam12392160 = _UNK_11de9ae8;
        uRam12392164 = _UNK_11de9aec;
        DAT_12392168 = 1;
        DAT_1239213c = iVar3;
        _DAT_12392140 = iVar3;
        _DAT_12392144 = iVar3;
        FUN_11a8911f(&LAB_11cb0e10);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185e400();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



