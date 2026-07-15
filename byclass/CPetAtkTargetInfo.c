// ===== class CPetAtkTargetInfo  (4 recovered methods) =====

/* --- CPetAtkTargetInfo::GetManagers @ 1174f750 --- */
// [RE-AUTO c3]
// id: CPetAtkTargetInfo::GetManagers
// strings:
//   ""CPetAtkTargetInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAtkTargetInfo::GetManagers
   strings:
     ""CPetAtkTargetInfo::GetManagers"" */

undefined * CPetAtkTargetInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d46284;
  if (param_3 == 0) {
    if ((DAT_123916a4 & 1) == 0) {
      DAT_123916a4 = DAT_123916a4 | 1;
      FUN_102500e0("CPetAtkTargetInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9cd0);
    }
    if ((undefined *)*DAT_12391688 != (undefined *)0x0) {
      return (undefined *)*DAT_12391688;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123919a8 & 1) == 0) {
      DAT_123919a8 = DAT_123919a8 | 1;
      FUN_117505b0();
      FUN_11a8911f(&LAB_11ca9a00);
    }
    puVar1 = &DAT_12391970;
  }
  return puVar1;
}



/* --- CPetAtkTargetInfo::GetManagers_11751e70 @ 11751e70 --- */
// [RE-AUTO c3]
// id: CPetAtkTargetInfo::GetManagers
// calls: CPetAtkTargetInfo::GetManagers
// strings:
//   ""CPetAtkTargetInfo""
//   ""CPetAtkTargetInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetAtkTargetInfo::GetManagers
   calls: CPetAtkTargetInfo::GetManagers
   strings:
     ""CPetAtkTargetInfo""
     ""CPetAtkTargetInfo::GetManagers"" */

void __fastcall CPetAtkTargetInfo__GetManagers_11751e70(int param_1)

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
  piVar1 = (int *)CPetAtkTargetInfo__GetManagers(0,"CPetAtkTargetInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d46284;
      if ((DAT_123916a4 & 1) == 0) {
        DAT_123916a4 = DAT_123916a4 | 1;
        FUN_102500e0("CPetAtkTargetInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9cd0);
      }
      puVar3 = (undefined *)*DAT_12391688;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetAtkTargetInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123919a8 & 1) == 0) {
          DAT_12391974 = 0;
          DAT_12391984 = 0;
          DAT_12391988 = 0;
          _DAT_1239198c = 0;
          uRam12391990 = 0;
          DAT_123919a8 = DAT_123919a8 | 1;
          _DAT_12391970 = &PTR_FUN_11d462c0;
          _DAT_12391994 = _DAT_11de9ae0;
          uRam12391998 = _UNK_11de9ae4;
          uRam1239199c = _UNK_11de9ae8;
          uRam123919a0 = _UNK_11de9aec;
          DAT_123919a4 = 1;
          DAT_12391978 = puVar3;
          _DAT_1239197c = puVar3;
          _DAT_12391980 = puVar3;
          FUN_11a8911f(&LAB_11ca9a00);
        }
        puVar3 = &DAT_12391970;
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
    local_c = &PTR_FUN_11d46284;
    if ((DAT_123916a4 & 1) == 0) {
      DAT_123916a4 = DAT_123916a4 | 1;
      FUN_102500e0("CPetAtkTargetInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9cd0);
    }
    puVar3 = (undefined *)*DAT_12391688;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetAtkTargetInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_123919a8 & 1) == 0) {
        DAT_123919a8 = DAT_123919a8 | 1;
        FUN_117505b0();
        FUN_11a8911f(&LAB_11ca9a00);
      }
      puVar3 = &DAT_12391970;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetAtkTargetInfo::GetManagers_11753610 @ 11753610 --- */
// [RE-AUTO c3]
// id: CPetAtkTargetInfo::GetManagers
// strings:
//   ""CPetAtkTargetInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAtkTargetInfo::GetManagers
   strings:
     ""CPetAtkTargetInfo::GetManagers"" */

undefined4 CPetAtkTargetInfo__GetManagers_11753610(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123916a4 & 1) == 0) {
      DAT_123916a4 = DAT_123916a4 | 1;
      FUN_102500e0("CPetAtkTargetInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9cd0);
    }
    return *DAT_12391688;
  }
  return 0;
}



/* --- CPetAtkTargetInfo::GetManagers_1192c700 @ 1192c700 --- */
// [RE-AUTO c3]
// id: CPetAtkTargetInfo::GetManagers
// calls: CPetAtkTargetInfo::GetManagers
// strings:
//   ""CPetAtkTargetInfo""
//   ""CPetAtkTargetInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetAtkTargetInfo::GetManagers
   calls: CPetAtkTargetInfo::GetManagers
   strings:
     ""CPetAtkTargetInfo""
     ""CPetAtkTargetInfo::GetManagers"" */

void CPetAtkTargetInfo__GetManagers_1192c700(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetAtkTargetInfo__GetManagers(0,"CPetAtkTargetInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d46284;
      if ((DAT_123916a4 & 1) == 0) {
        DAT_123916a4 = DAT_123916a4 | 1;
        FUN_102500e0("CPetAtkTargetInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9cd0);
      }
      puVar4 = (undefined *)*DAT_12391688;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetAtkTargetInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123919a8 & 1) == 0) {
          DAT_12391974 = 0;
          DAT_12391984 = 0;
          DAT_12391988 = 0;
          _DAT_1239198c = 0;
          uRam12391990 = 0;
          DAT_123919a8 = DAT_123919a8 | 1;
          _DAT_12391970 = &PTR_FUN_11d462c0;
          _DAT_12391994 = _DAT_11de9ae0;
          uRam12391998 = _UNK_11de9ae4;
          uRam1239199c = _UNK_11de9ae8;
          uRam123919a0 = _UNK_11de9aec;
          DAT_123919a4 = 1;
          DAT_12391978 = puVar4;
          _DAT_1239197c = puVar4;
          _DAT_12391980 = puVar4;
          FUN_11a8911f(&LAB_11cb1f20);
        }
        puVar4 = &DAT_12391970;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a1ac70(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



