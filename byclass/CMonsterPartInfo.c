// ===== class CMonsterPartInfo  (6 recovered methods) =====

/* --- CMonsterPartInfo::GetManagers @ 11735180 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo::GetManagers"" */

undefined * CMonsterPartInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d44c2c;
  if (param_3 == 0) {
    if ((DAT_12390220 & 1) == 0) {
      DAT_12390220 = DAT_12390220 | 1;
      FUN_102500e0("CMonsterPartInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9460);
    }
    if ((undefined *)*DAT_12390204 != (undefined *)0x0) {
      return (undefined *)*DAT_12390204;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239076c & 1) == 0) {
      DAT_1239076c = DAT_1239076c | 1;
      FUN_117364e0();
      FUN_11a8911f(&LAB_11ca9250);
    }
    puVar1 = &DAT_12390734;
  }
  return puVar1;
}



/* --- CMonsterPartInfo::GetManagers_11738340 @ 11738340 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo::GetManagers"" */

undefined4 CMonsterPartInfo__GetManagers_11738340(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12390220 & 1) == 0) {
      DAT_12390220 = DAT_12390220 | 1;
      FUN_102500e0("CMonsterPartInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9460);
    }
    return *DAT_12390204;
  }
  return 0;
}



/* --- CMonsterPartInfo::GetManagers_1188ea40 @ 1188ea40 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// calls: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo""
//   ""CMonsterPartInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   calls: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo""
     ""CMonsterPartInfo::GetManagers"" */

int CMonsterPartInfo__GetManagers_1188ea40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar5 = 0;
  piVar1 = (int *)CMonsterPartInfo__GetManagers(0,"CMonsterPartInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d44c2c;
      if ((DAT_12390220 & 1) == 0) {
        DAT_12390220 = DAT_12390220 | 1;
        FUN_102500e0("CMonsterPartInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9460);
      }
      puVar3 = (undefined *)*DAT_12390204;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CMonsterPartInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239076c & 1) == 0) {
          DAT_12390738 = 0;
          DAT_12390748 = 0;
          DAT_1239074c = 0;
          _DAT_12390750 = 0;
          uRam12390754 = 0;
          DAT_1239076c = DAT_1239076c | 1;
          _DAT_12390734 = &PTR_FUN_11d44c68;
          _DAT_12390758 = _DAT_11de9ae0;
          uRam1239075c = _UNK_11de9ae4;
          uRam12390760 = _UNK_11de9ae8;
          uRam12390764 = _UNK_11de9aec;
          DAT_12390768 = 1;
          DAT_1239073c = puVar3;
          _DAT_12390740 = puVar3;
          _DAT_12390744 = puVar3;
          FUN_11a8911f(&LAB_11cae730);
        }
        puVar3 = &DAT_12390734;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      iVar4 = FUN_100ec310(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(param_1 + 0x14));
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



/* --- CMonsterPartInfo::GetManagers_1188eb90 @ 1188eb90 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// calls: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo""
//   ""CMonsterPartInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   calls: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo""
     ""CMonsterPartInfo::GetManagers"" */

int CMonsterPartInfo__GetManagers_1188eb90(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined **local_8;
  
  iVar7 = 0;
  piVar1 = (int *)CMonsterPartInfo__GetManagers(0,"CMonsterPartInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d44c2c;
      if ((DAT_12390220 & 1) == 0) {
        DAT_12390220 = DAT_12390220 | 1;
        FUN_102500e0("CMonsterPartInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9460);
      }
      puVar3 = (undefined *)*DAT_12390204;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CMonsterPartInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239076c & 1) == 0) {
          DAT_12390738 = 0;
          DAT_12390748 = 0;
          DAT_1239074c = 0;
          _DAT_12390750 = 0;
          uRam12390754 = 0;
          DAT_1239076c = DAT_1239076c | 1;
          DAT_1239073c = 0;
          _DAT_12390740 = 0;
          _DAT_12390744 = 0;
          _DAT_12390734 = &PTR_FUN_11d44c68;
          _DAT_12390758 = _DAT_11de9ae0;
          uRam1239075c = _UNK_11de9ae4;
          uRam12390760 = _UNK_11de9ae8;
          uRam12390764 = _UNK_11de9aec;
          DAT_12390768 = 1;
          FUN_11a8911f(&LAB_11cae730);
        }
        puVar3 = &DAT_12390734;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar7 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar7)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(puVar3 + 0x14) + iVar7 * 4);
      }
      puVar6 = &DAT_11d9d32b;
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)*param_1;
      }
      puVar5 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar8 + 0x2c) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(iVar8 + 0x2c);
      }
      iVar4 = FUN_100ec310(puVar5,puVar6);
      if (iVar4 == 0) {
        return iVar8;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  return 0;
}



/* --- CMonsterPartInfo::GetManagers_118d4660 @ 118d4660 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// calls: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo""
//   ""CMonsterPartInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   calls: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo""
     ""CMonsterPartInfo::GetManagers"" */

void CMonsterPartInfo__GetManagers_118d4660(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonsterPartInfo__GetManagers(0,"CMonsterPartInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d44c2c;
      if ((DAT_12390220 & 1) == 0) {
        DAT_12390220 = DAT_12390220 | 1;
        FUN_102500e0("CMonsterPartInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9460);
      }
      if (((*DAT_12390204 == 0) && (iVar3 = FUN_11679e10(&local_8,"CMonsterPartInfo",0), iVar3 == 0)
          ) && ((DAT_1239076c & 1) == 0)) {
        DAT_12390738 = 0;
        DAT_12390748 = 0;
        DAT_1239074c = 0;
        _DAT_12390750 = 0;
        uRam12390754 = 0;
        DAT_1239076c = DAT_1239076c | 1;
        _DAT_12390734 = &PTR_FUN_11d44c68;
        _DAT_12390758 = _DAT_11de9ae0;
        uRam1239075c = _UNK_11de9ae4;
        uRam12390760 = _UNK_11de9ae8;
        uRam12390764 = _UNK_11de9aec;
        DAT_12390768 = 1;
        DAT_1239073c = iVar3;
        _DAT_12390740 = iVar3;
        _DAT_12390744 = iVar3;
        FUN_11a8911f(&LAB_11caffd0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1188ed20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonsterPartInfo::GetManagers_118d47b0 @ 118d47b0 --- */
// [RE-AUTO c3]
// id: CMonsterPartInfo::GetManagers
// calls: CMonsterPartInfo::GetManagers
// strings:
//   ""CMonsterPartInfo""
//   ""CMonsterPartInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartInfo::GetManagers
   calls: CMonsterPartInfo::GetManagers
   strings:
     ""CMonsterPartInfo""
     ""CMonsterPartInfo::GetManagers"" */

void CMonsterPartInfo__GetManagers_118d47b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonsterPartInfo__GetManagers(0,"CMonsterPartInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d44c2c;
      if ((DAT_12390220 & 1) == 0) {
        DAT_12390220 = DAT_12390220 | 1;
        FUN_102500e0("CMonsterPartInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9460);
      }
      if (((*DAT_12390204 == 0) && (iVar3 = FUN_11679e10(&local_8,"CMonsterPartInfo",0), iVar3 == 0)
          ) && ((DAT_1239076c & 1) == 0)) {
        DAT_12390738 = 0;
        DAT_12390748 = 0;
        DAT_1239074c = 0;
        _DAT_12390750 = 0;
        uRam12390754 = 0;
        DAT_1239076c = DAT_1239076c | 1;
        _DAT_12390734 = &PTR_FUN_11d44c68;
        _DAT_12390758 = _DAT_11de9ae0;
        uRam1239075c = _UNK_11de9ae4;
        uRam12390760 = _UNK_11de9ae8;
        uRam12390764 = _UNK_11de9aec;
        DAT_12390768 = 1;
        DAT_1239073c = iVar3;
        _DAT_12390740 = iVar3;
        _DAT_12390744 = iVar3;
        FUN_11a8911f(&LAB_11caffd0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1188ed10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



