// ===== class CPetStarInfo  (5 recovered methods) =====

/* --- CPetStarInfo::GetManagers @ 112f0ba0 --- */
// [RE-AUTO c3]
// id: CPetStarInfo::GetManagers
// strings:
//   ""CPetStarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetStarInfo::GetManagers
   strings:
     ""CPetStarInfo::GetManagers"" */

undefined * CPetStarInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d21770;
  if (param_3 == 0) {
    if ((DAT_12040b68 & 1) == 0) {
      DAT_12040b68 = DAT_12040b68 | 1;
      FUN_102500e0("CPetStarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a830);
    }
    if ((undefined *)*DAT_12040b4c != (undefined *)0x0) {
      return (undefined *)*DAT_12040b4c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040c44 & 1) == 0) {
      DAT_12040c44 = DAT_12040c44 | 1;
      FUN_112f3ce0();
      FUN_11a8911f(&LAB_11c9a710);
    }
    puVar1 = &DAT_12040c0c;
  }
  return puVar1;
}



/* --- CPetStarInfo::GetManagers_112f60d0 @ 112f60d0 --- */
// [RE-AUTO c3]
// id: CPetStarInfo::GetManagers
// strings:
//   ""CPetStarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetStarInfo::GetManagers
   strings:
     ""CPetStarInfo::GetManagers"" */

undefined4 CPetStarInfo__GetManagers_112f60d0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040b68 & 1) == 0) {
      DAT_12040b68 = DAT_12040b68 | 1;
      FUN_102500e0("CPetStarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a830);
    }
    return *DAT_12040b4c;
  }
  return 0;
}



/* --- CPetStarInfo::GetManagers_1174c1f0 @ 1174c1f0 --- */
// [RE-AUTO c3]
// id: CPetStarInfo::GetManagers
// calls: CPetStarInfo::GetManagers
// strings:
//   ""CPetStarInfo""
//   ""CPetStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetStarInfo::GetManagers
   calls: CPetStarInfo::GetManagers
   strings:
     ""CPetStarInfo""
     ""CPetStarInfo::GetManagers"" */

int CPetStarInfo__GetManagers_1174c1f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)CPetStarInfo__GetManagers(0,"CPetStarInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d21770;
      if ((DAT_12040b68 & 1) == 0) {
        DAT_12040b68 = DAT_12040b68 | 1;
        FUN_102500e0("CPetStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a830);
      }
      puVar3 = (undefined *)*DAT_12040b4c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetStarInfo",0), puVar3 == (undefined *)0x0)
         ) {
        if ((DAT_12040c44 & 1) == 0) {
          DAT_12040c10 = 0;
          DAT_12040c20 = 0;
          DAT_12040c24 = 0;
          _DAT_12040c28 = 0;
          uRam12040c2c = 0;
          DAT_12040c44 = DAT_12040c44 | 1;
          _DAT_12040c0c = &PTR_FUN_11d217a4;
          _DAT_12040c30 = _DAT_11de9ae0;
          uRam12040c34 = _UNK_11de9ae4;
          uRam12040c38 = _UNK_11de9ae8;
          uRam12040c3c = _UNK_11de9aec;
          DAT_12040c40 = 1;
          DAT_12040c14 = puVar3;
          _DAT_12040c18 = puVar3;
          _DAT_12040c1c = puVar3;
          FUN_11a8911f(&LAB_11ca9910);
        }
        puVar3 = &DAT_12040c0c;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if ((*(int *)(iVar4 + 0x14) == param_1) && (*(int *)(iVar4 + 0x18) == param_2)) {
        return iVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  local_8 = &PTR_FUN_11d21770;
  if ((DAT_12040b68 & 1) == 0) {
    DAT_12040b68 = DAT_12040b68 | 1;
    FUN_102500e0("CPetStarInfo::GetManagers");
    FUN_11a8911f(&LAB_11c9a830);
  }
  puVar3 = (undefined *)*DAT_12040b4c;
  if ((puVar3 == (undefined *)0x0) &&
     (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetStarInfo",0), puVar3 == (undefined *)0x0)) {
    if ((DAT_12040c44 & 1) == 0) {
      DAT_12040c10 = 0;
      DAT_12040c20 = 0;
      DAT_12040c24 = 0;
      _DAT_12040c28 = 0;
      uRam12040c2c = 0;
      DAT_12040c44 = DAT_12040c44 | 1;
      _DAT_12040c0c = &PTR_FUN_11d217a4;
      _DAT_12040c30 = _DAT_11de9ae0;
      uRam12040c34 = _UNK_11de9ae4;
      uRam12040c38 = _UNK_11de9ae8;
      uRam12040c3c = _UNK_11de9aec;
      DAT_12040c40 = 1;
      DAT_12040c14 = puVar3;
      _DAT_12040c18 = puVar3;
      _DAT_12040c1c = puVar3;
      FUN_11a8911f(&LAB_11ca9910);
    }
    puVar3 = &DAT_12040c0c;
  }
  if ((int)(*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) & 0xfffffffcU) < 1) {
    return 0;
  }
  return **(int **)(puVar3 + 0x14);
}



/* --- CPetStarInfo::GetManagers_1174c410 @ 1174c410 --- */
// [RE-AUTO c3]
// id: CPetStarInfo::GetManagers
// calls: CPetStarInfo::GetManagers
// strings:
//   ""CPetStarInfo""
//   ""CPetStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetStarInfo::GetManagers
   calls: CPetStarInfo::GetManagers
   strings:
     ""CPetStarInfo""
     ""CPetStarInfo::GetManagers"" */

int CPetStarInfo__GetManagers_1174c410(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)CPetStarInfo__GetManagers(0,"CPetStarInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d21770;
      if ((DAT_12040b68 & 1) == 0) {
        DAT_12040b68 = DAT_12040b68 | 1;
        FUN_102500e0("CPetStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a830);
      }
      puVar3 = (undefined *)*DAT_12040b4c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetStarInfo",0), puVar3 == (undefined *)0x0)
         ) {
        if ((DAT_12040c44 & 1) == 0) {
          DAT_12040c10 = 0;
          DAT_12040c20 = 0;
          DAT_12040c24 = 0;
          _DAT_12040c28 = 0;
          uRam12040c2c = 0;
          DAT_12040c44 = DAT_12040c44 | 1;
          _DAT_12040c0c = &PTR_FUN_11d217a4;
          _DAT_12040c30 = _DAT_11de9ae0;
          uRam12040c34 = _UNK_11de9ae4;
          uRam12040c38 = _UNK_11de9ae8;
          uRam12040c3c = _UNK_11de9aec;
          DAT_12040c40 = 1;
          DAT_12040c14 = puVar3;
          _DAT_12040c18 = puVar3;
          _DAT_12040c1c = puVar3;
          FUN_11a8911f(&LAB_11ca9910);
        }
        puVar3 = &DAT_12040c0c;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if (((*(int *)(iVar4 + 0x14) == param_1) && (*(int *)(iVar4 + 0x18) == param_2)) &&
         (*(int *)(iVar4 + 0x1c) == param_3)) {
        return iVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  local_8 = &PTR_FUN_11d21770;
  if ((DAT_12040b68 & 1) == 0) {
    DAT_12040b68 = DAT_12040b68 | 1;
    FUN_102500e0("CPetStarInfo::GetManagers");
    FUN_11a8911f(&LAB_11c9a830);
  }
  puVar3 = (undefined *)*DAT_12040b4c;
  if ((puVar3 == (undefined *)0x0) &&
     (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetStarInfo",0), puVar3 == (undefined *)0x0)) {
    if ((DAT_12040c44 & 1) == 0) {
      DAT_12040c10 = 0;
      DAT_12040c20 = 0;
      DAT_12040c24 = 0;
      _DAT_12040c28 = 0;
      uRam12040c2c = 0;
      DAT_12040c44 = DAT_12040c44 | 1;
      _DAT_12040c0c = &PTR_FUN_11d217a4;
      _DAT_12040c30 = _DAT_11de9ae0;
      uRam12040c34 = _UNK_11de9ae4;
      uRam12040c38 = _UNK_11de9ae8;
      uRam12040c3c = _UNK_11de9aec;
      DAT_12040c40 = 1;
      DAT_12040c14 = puVar3;
      _DAT_12040c18 = puVar3;
      _DAT_12040c1c = puVar3;
      FUN_11a8911f(&LAB_11ca9910);
    }
    puVar3 = &DAT_12040c0c;
  }
  if ((int)(*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) & 0xfffffffcU) < 1) {
    return 0;
  }
  return **(int **)(puVar3 + 0x14);
}



/* --- CPetStarInfo::GetManagers_119266d0 @ 119266d0 --- */
// [RE-AUTO c3]
// id: CPetStarInfo::GetManagers
// calls: CPetStarInfo::GetManagers, CPetSkillSlotUnlockInfo::GetManagers_1174ca80
// strings:
//   ""CPetStarInfo""
//   ""CPetStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetStarInfo::GetManagers
   calls: CPetStarInfo::GetManagers, CPetSkillSlotUnlockInfo::GetManagers_1174ca80
   strings:
     ""CPetStarInfo""
     ""CPetStarInfo::GetManagers"" */

void CPetStarInfo__GetManagers_119266d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetStarInfo__GetManagers(0,"CPetStarInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d21770;
      if ((DAT_12040b68 & 1) == 0) {
        DAT_12040b68 = DAT_12040b68 | 1;
        FUN_102500e0("CPetStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a830);
      }
      puVar4 = (undefined *)*DAT_12040b4c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetStarInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_12040c44 & 1) == 0) {
          DAT_12040c10 = 0;
          DAT_12040c20 = 0;
          DAT_12040c24 = 0;
          _DAT_12040c28 = 0;
          uRam12040c2c = 0;
          DAT_12040c44 = DAT_12040c44 | 1;
          _DAT_12040c0c = &PTR_FUN_11d217a4;
          _DAT_12040c30 = _DAT_11de9ae0;
          uRam12040c34 = _UNK_11de9ae4;
          uRam12040c38 = _UNK_11de9ae8;
          uRam12040c3c = _UNK_11de9aec;
          DAT_12040c40 = 1;
          DAT_12040c14 = puVar4;
          _DAT_12040c18 = puVar4;
          _DAT_12040c1c = puVar4;
          FUN_11a8911f(&LAB_11cb1c80);
        }
        puVar4 = &DAT_12040c0c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CPetSkillSlotUnlockInfo__GetManagers_1174ca80(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



