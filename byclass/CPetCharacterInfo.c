// ===== class CPetCharacterInfo  (4 recovered methods) =====

/* --- CPetCharacterInfo::GetManagers @ 1174f7f0 --- */
// [RE-AUTO c3]
// id: CPetCharacterInfo::GetManagers
// strings:
//   ""CPetCharacterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetCharacterInfo::GetManagers
   strings:
     ""CPetCharacterInfo::GetManagers"" */

undefined * CPetCharacterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d461fc;
  if (param_3 == 0) {
    if ((DAT_12391684 & 1) == 0) {
      DAT_12391684 = DAT_12391684 | 1;
      FUN_102500e0("CPetCharacterInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d00);
    }
    if ((undefined *)*DAT_12391668 != (undefined *)0x0) {
      return (undefined *)*DAT_12391668;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239196c & 1) == 0) {
      DAT_1239196c = DAT_1239196c | 1;
      FUN_11750610();
      FUN_11a8911f(&LAB_11ca9a60);
    }
    puVar1 = &DAT_12391934;
  }
  return puVar1;
}



/* --- CPetCharacterInfo::GetManagers_117520c0 @ 117520c0 --- */
// [RE-AUTO c3]
// id: CPetCharacterInfo::GetManagers
// calls: CPetCharacterInfo::GetManagers
// strings:
//   ""CPetCharacterInfo""
//   ""CPetCharacterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetCharacterInfo::GetManagers
   calls: CPetCharacterInfo::GetManagers
   strings:
     ""CPetCharacterInfo""
     ""CPetCharacterInfo::GetManagers"" */

void __fastcall CPetCharacterInfo__GetManagers_117520c0(int param_1)

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
  piVar1 = (int *)CPetCharacterInfo__GetManagers(0,"CPetCharacterInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d461fc;
      if ((DAT_12391684 & 1) == 0) {
        DAT_12391684 = DAT_12391684 | 1;
        FUN_102500e0("CPetCharacterInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d00);
      }
      puVar3 = (undefined *)*DAT_12391668;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetCharacterInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239196c & 1) == 0) {
          DAT_12391938 = 0;
          DAT_12391948 = 0;
          DAT_1239194c = 0;
          _DAT_12391950 = 0;
          uRam12391954 = 0;
          DAT_1239196c = DAT_1239196c | 1;
          _DAT_12391934 = &PTR_FUN_11d46238;
          _DAT_12391958 = _DAT_11de9ae0;
          uRam1239195c = _UNK_11de9ae4;
          uRam12391960 = _UNK_11de9ae8;
          uRam12391964 = _UNK_11de9aec;
          DAT_12391968 = 1;
          DAT_1239193c = puVar3;
          _DAT_12391940 = puVar3;
          _DAT_12391944 = puVar3;
          FUN_11a8911f(&LAB_11ca9a60);
        }
        puVar3 = &DAT_12391934;
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
    local_c = &PTR_FUN_11d461fc;
    if ((DAT_12391684 & 1) == 0) {
      DAT_12391684 = DAT_12391684 | 1;
      FUN_102500e0("CPetCharacterInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d00);
    }
    puVar3 = (undefined *)*DAT_12391668;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetCharacterInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_1239196c & 1) == 0) {
        DAT_1239196c = DAT_1239196c | 1;
        FUN_11750610();
        FUN_11a8911f(&LAB_11ca9a60);
      }
      puVar3 = &DAT_12391934;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetCharacterInfo::GetManagers_11753660 @ 11753660 --- */
// [RE-AUTO c3]
// id: CPetCharacterInfo::GetManagers
// strings:
//   ""CPetCharacterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetCharacterInfo::GetManagers
   strings:
     ""CPetCharacterInfo::GetManagers"" */

undefined4 CPetCharacterInfo__GetManagers_11753660(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12391684 & 1) == 0) {
      DAT_12391684 = DAT_12391684 | 1;
      FUN_102500e0("CPetCharacterInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d00);
    }
    return *DAT_12391668;
  }
  return 0;
}



/* --- CPetCharacterInfo::GetManagers_1192c5d0 @ 1192c5d0 --- */
// [RE-AUTO c3]
// id: CPetCharacterInfo::GetManagers
// calls: CPetCharacterInfo::GetManagers
// strings:
//   ""CPetCharacterInfo""
//   ""CPetCharacterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetCharacterInfo::GetManagers
   calls: CPetCharacterInfo::GetManagers
   strings:
     ""CPetCharacterInfo""
     ""CPetCharacterInfo::GetManagers"" */

void CPetCharacterInfo__GetManagers_1192c5d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetCharacterInfo__GetManagers(0,"CPetCharacterInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d461fc;
      if ((DAT_12391684 & 1) == 0) {
        DAT_12391684 = DAT_12391684 | 1;
        FUN_102500e0("CPetCharacterInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d00);
      }
      puVar4 = (undefined *)*DAT_12391668;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetCharacterInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1239196c & 1) == 0) {
          DAT_12391938 = 0;
          DAT_12391948 = 0;
          DAT_1239194c = 0;
          _DAT_12391950 = 0;
          uRam12391954 = 0;
          DAT_1239196c = DAT_1239196c | 1;
          _DAT_12391934 = &PTR_FUN_11d46238;
          _DAT_12391958 = _DAT_11de9ae0;
          uRam1239195c = _UNK_11de9ae4;
          uRam12391960 = _UNK_11de9ae8;
          uRam12391964 = _UNK_11de9aec;
          DAT_12391968 = 1;
          DAT_1239193c = puVar4;
          _DAT_12391940 = puVar4;
          _DAT_12391944 = puVar4;
          FUN_11a8911f(&LAB_11cb1f80);
        }
        puVar4 = &DAT_12391934;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a1aa20(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



