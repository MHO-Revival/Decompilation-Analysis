// ===== class CPetAtkModeInfo  (4 recovered methods) =====

/* --- CPetAtkModeInfo::GetManagers @ 1174f6b0 --- */
// [RE-AUTO c3]
// id: CPetAtkModeInfo::GetManagers
// strings:
//   ""CPetAtkModeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAtkModeInfo::GetManagers
   strings:
     ""CPetAtkModeInfo::GetManagers"" */

undefined * CPetAtkModeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4630c;
  if (param_3 == 0) {
    if ((DAT_123916c4 & 1) == 0) {
      DAT_123916c4 = DAT_123916c4 | 1;
      FUN_102500e0("CPetAtkModeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9ca0);
    }
    if ((undefined *)*DAT_123916a8 != (undefined *)0x0) {
      return (undefined *)*DAT_123916a8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123919e4 & 1) == 0) {
      DAT_123919e4 = DAT_123919e4 | 1;
      FUN_11750550();
      FUN_11a8911f(&LAB_11ca99a0);
    }
    puVar1 = &DAT_123919ac;
  }
  return puVar1;
}



/* --- CPetAtkModeInfo::GetManagers_11751c20 @ 11751c20 --- */
// [RE-AUTO c3]
// id: CPetAtkModeInfo::GetManagers
// calls: CPetAtkModeInfo::GetManagers
// strings:
//   ""CPetAtkModeInfo""
//   ""CPetAtkModeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetAtkModeInfo::GetManagers
   calls: CPetAtkModeInfo::GetManagers
   strings:
     ""CPetAtkModeInfo""
     ""CPetAtkModeInfo::GetManagers"" */

void __fastcall CPetAtkModeInfo__GetManagers_11751c20(int param_1)

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
  piVar1 = (int *)CPetAtkModeInfo__GetManagers(0,"CPetAtkModeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d4630c;
      if ((DAT_123916c4 & 1) == 0) {
        DAT_123916c4 = DAT_123916c4 | 1;
        FUN_102500e0("CPetAtkModeInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9ca0);
      }
      puVar3 = (undefined *)*DAT_123916a8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetAtkModeInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123919e4 & 1) == 0) {
          DAT_123919b0 = 0;
          DAT_123919c0 = 0;
          DAT_123919c4 = 0;
          _DAT_123919c8 = 0;
          uRam123919cc = 0;
          DAT_123919e4 = DAT_123919e4 | 1;
          _DAT_123919ac = &PTR_FUN_11d46344;
          _DAT_123919d0 = _DAT_11de9ae0;
          uRam123919d4 = _UNK_11de9ae4;
          uRam123919d8 = _UNK_11de9ae8;
          uRam123919dc = _UNK_11de9aec;
          DAT_123919e0 = 1;
          DAT_123919b4 = puVar3;
          _DAT_123919b8 = puVar3;
          _DAT_123919bc = puVar3;
          FUN_11a8911f(&LAB_11ca99a0);
        }
        puVar3 = &DAT_123919ac;
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
    local_c = &PTR_FUN_11d4630c;
    if ((DAT_123916c4 & 1) == 0) {
      DAT_123916c4 = DAT_123916c4 | 1;
      FUN_102500e0("CPetAtkModeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9ca0);
    }
    puVar3 = (undefined *)*DAT_123916a8;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetAtkModeInfo",0), puVar3 == (undefined *)0x0
       )) {
      if ((DAT_123919e4 & 1) == 0) {
        DAT_123919e4 = DAT_123919e4 | 1;
        FUN_11750550();
        FUN_11a8911f(&LAB_11ca99a0);
      }
      puVar3 = &DAT_123919ac;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetAtkModeInfo::GetManagers_117535c0 @ 117535c0 --- */
// [RE-AUTO c3]
// id: CPetAtkModeInfo::GetManagers
// strings:
//   ""CPetAtkModeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAtkModeInfo::GetManagers
   strings:
     ""CPetAtkModeInfo::GetManagers"" */

undefined4 CPetAtkModeInfo__GetManagers_117535c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123916c4 & 1) == 0) {
      DAT_123916c4 = DAT_123916c4 | 1;
      FUN_102500e0("CPetAtkModeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9ca0);
    }
    return *DAT_123916a8;
  }
  return 0;
}



/* --- CPetAtkModeInfo::GetManagers_1192c830 @ 1192c830 --- */
// [RE-AUTO c3]
// id: CPetAtkModeInfo::GetManagers
// calls: CPetAtkModeInfo::GetManagers
// strings:
//   ""CPetAtkModeInfo""
//   ""CPetAtkModeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetAtkModeInfo::GetManagers
   calls: CPetAtkModeInfo::GetManagers
   strings:
     ""CPetAtkModeInfo""
     ""CPetAtkModeInfo::GetManagers"" */

void CPetAtkModeInfo__GetManagers_1192c830(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetAtkModeInfo__GetManagers(0,"CPetAtkModeInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d4630c;
      if ((DAT_123916c4 & 1) == 0) {
        DAT_123916c4 = DAT_123916c4 | 1;
        FUN_102500e0("CPetAtkModeInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9ca0);
      }
      puVar4 = (undefined *)*DAT_123916a8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetAtkModeInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123919e4 & 1) == 0) {
          DAT_123919b0 = 0;
          DAT_123919c0 = 0;
          DAT_123919c4 = 0;
          _DAT_123919c8 = 0;
          uRam123919cc = 0;
          DAT_123919e4 = DAT_123919e4 | 1;
          _DAT_123919ac = &PTR_FUN_11d46344;
          _DAT_123919d0 = _DAT_11de9ae0;
          uRam123919d4 = _UNK_11de9ae4;
          uRam123919d8 = _UNK_11de9ae8;
          uRam123919dc = _UNK_11de9aec;
          DAT_123919e0 = 1;
          DAT_123919b4 = puVar4;
          _DAT_123919b8 = puVar4;
          _DAT_123919bc = puVar4;
          FUN_11a8911f(&LAB_11cb1ec0);
        }
        puVar4 = &DAT_123919ac;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a1aec0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



