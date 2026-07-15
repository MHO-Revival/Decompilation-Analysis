// ===== class CPetQualityInfo  (4 recovered methods) =====

/* --- CPetQualityInfo::GetManagers @ 1174f930 --- */
// [RE-AUTO c3]
// id: CPetQualityInfo::GetManagers
// strings:
//   ""CPetQualityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetQualityInfo::GetManagers
   strings:
     ""CPetQualityInfo::GetManagers"" */

undefined * CPetQualityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d46178;
  if (param_3 == 0) {
    if ((DAT_12391664 & 1) == 0) {
      DAT_12391664 = DAT_12391664 | 1;
      FUN_102500e0("CPetQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d60);
    }
    if ((undefined *)*DAT_12391648 != (undefined *)0x0) {
      return (undefined *)*DAT_12391648;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12391930 & 1) == 0) {
      DAT_12391930 = DAT_12391930 | 1;
      FUN_117506d0();
      FUN_11a8911f(&LAB_11ca9b20);
    }
    puVar1 = &DAT_123918f8;
  }
  return puVar1;
}



/* --- CPetQualityInfo::GetManagers_11752570 @ 11752570 --- */
// [RE-AUTO c3]
// id: CPetQualityInfo::GetManagers
// calls: CPetQualityInfo::GetManagers
// strings:
//   ""CPetQualityInfo""
//   ""CPetQualityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetQualityInfo::GetManagers
   calls: CPetQualityInfo::GetManagers
   strings:
     ""CPetQualityInfo""
     ""CPetQualityInfo::GetManagers"" */

void __fastcall CPetQualityInfo__GetManagers_11752570(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  piVar1 = (int *)CPetQualityInfo__GetManagers(0,"CPetQualityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d46178;
      if ((DAT_12391664 & 1) == 0) {
        DAT_12391664 = DAT_12391664 | 1;
        FUN_102500e0("CPetQualityInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d60);
      }
      puVar3 = (undefined *)*DAT_12391648;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetQualityInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_12391930 & 1) == 0) {
          DAT_123918fc = 0;
          DAT_1239190c = 0;
          DAT_12391910 = 0;
          _DAT_12391914 = 0;
          uRam12391918 = 0;
          DAT_12391930 = DAT_12391930 | 1;
          _DAT_123918f8 = &PTR_FUN_11d461b0;
          _DAT_1239191c = _DAT_11de9ae0;
          uRam12391920 = _UNK_11de9ae4;
          uRam12391924 = _UNK_11de9ae8;
          uRam12391928 = _UNK_11de9aec;
          DAT_1239192c = 1;
          DAT_12391900 = puVar3;
          _DAT_12391904 = puVar3;
          _DAT_12391908 = puVar3;
          FUN_11a8911f(&LAB_11ca9b20);
        }
        puVar3 = &DAT_123918f8;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      local_c = *(undefined ***)(iVar4 + 0x14);
      if (local_14 == local_10) {
        FUN_10463c40(local_14,&local_c,&local_5,1,1);
      }
      else {
        *local_14 = local_c;
        local_14 = local_14 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar2 = FUN_10a1cee0(&local_18);
  if (iVar2 != -1) {
    local_c = &PTR_FUN_11d46178;
    if ((DAT_12391664 & 1) == 0) {
      DAT_12391664 = DAT_12391664 | 1;
      FUN_102500e0("CPetQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d60);
    }
    puVar3 = (undefined *)*DAT_12391648;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetQualityInfo",0), puVar3 == (undefined *)0x0
       )) {
      if ((DAT_12391930 & 1) == 0) {
        DAT_12391930 = DAT_12391930 | 1;
        FUN_117506d0();
        FUN_11a8911f(&LAB_11ca9b20);
      }
      puVar3 = &DAT_123918f8;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetQualityInfo::GetManagers_11753700 @ 11753700 --- */
// [RE-AUTO c3]
// id: CPetQualityInfo::GetManagers
// strings:
//   ""CPetQualityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetQualityInfo::GetManagers
   strings:
     ""CPetQualityInfo::GetManagers"" */

undefined4 CPetQualityInfo__GetManagers_11753700(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12391664 & 1) == 0) {
      DAT_12391664 = DAT_12391664 | 1;
      FUN_102500e0("CPetQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d60);
    }
    return *DAT_12391648;
  }
  return 0;
}



/* --- CPetQualityInfo::GetManagers_1192c240 @ 1192c240 --- */
// [RE-AUTO c3]
// id: CPetQualityInfo::GetManagers
// calls: CPetQualityInfo::GetManagers
// strings:
//   ""CPetQualityInfo""
//   ""CPetQualityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetQualityInfo::GetManagers
   calls: CPetQualityInfo::GetManagers
   strings:
     ""CPetQualityInfo""
     ""CPetQualityInfo::GetManagers"" */

void CPetQualityInfo__GetManagers_1192c240(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetQualityInfo__GetManagers(0,"CPetQualityInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d46178;
      if ((DAT_12391664 & 1) == 0) {
        DAT_12391664 = DAT_12391664 | 1;
        FUN_102500e0("CPetQualityInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d60);
      }
      puVar4 = (undefined *)*DAT_12391648;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetQualityInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12391930 & 1) == 0) {
          DAT_123918fc = 0;
          DAT_1239190c = 0;
          DAT_12391910 = 0;
          _DAT_12391914 = 0;
          uRam12391918 = 0;
          DAT_12391930 = DAT_12391930 | 1;
          _DAT_123918f8 = &PTR_FUN_11d461b0;
          _DAT_1239191c = _DAT_11de9ae0;
          uRam12391920 = _UNK_11de9ae4;
          uRam12391924 = _UNK_11de9ae8;
          uRam12391928 = _UNK_11de9aec;
          DAT_1239192c = 1;
          DAT_12391900 = puVar4;
          _DAT_12391904 = puVar4;
          _DAT_12391908 = puVar4;
          FUN_11a8911f(&LAB_11cb2040);
        }
        puVar4 = &DAT_123918f8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a1a7d0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



