// ===== class CPetSkinInfo  (4 recovered methods) =====

/* --- CPetSkinInfo::GetManagers @ 115661f0 --- */
// [RE-AUTO c3]
// id: CPetSkinInfo::GetManagers
// strings:
//   ""CPetSkinInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo::GetManagers"" */

undefined * CPetSkinInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2d8dc;
  if (param_3 == 0) {
    if ((DAT_122df09c & 1) == 0) {
      DAT_122df09c = DAT_122df09c | 1;
      FUN_102500e0("CPetSkinInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca23d0);
    }
    if ((undefined *)*DAT_122df080 != (undefined *)0x0) {
      return (undefined *)*DAT_122df080;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df108 & 1) == 0) {
      DAT_122df108 = DAT_122df108 | 1;
      FUN_11566460();
      FUN_11a8911f(&LAB_11ca22e0);
    }
    puVar1 = &DAT_122df0d0;
  }
  return puVar1;
}



/* --- CPetSkinInfo::GetManagers_11567180 @ 11567180 --- */
// [RE-AUTO c3]
// id: CPetSkinInfo::GetManagers
// strings:
//   ""CPetSkinInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo::GetManagers"" */

undefined4 CPetSkinInfo__GetManagers_11567180(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df09c & 1) == 0) {
      DAT_122df09c = DAT_122df09c | 1;
      FUN_102500e0("CPetSkinInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca23d0);
    }
    return *DAT_122df080;
  }
  return 0;
}



/* --- CPetSkinInfo::GetManagers_117527c0 @ 117527c0 --- */
// [RE-AUTO c3]
// id: CPetSkinInfo::GetManagers
// calls: CPetSkinInfo::GetManagers
// strings:
//   ""CPetSkinInfo""
//   ""CPetSkinInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkinInfo::GetManagers
   calls: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo""
     ""CPetSkinInfo::GetManagers"" */

void __fastcall CPetSkinInfo__GetManagers_117527c0(int param_1)

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
  piVar1 = (int *)CPetSkinInfo__GetManagers(0,"CPetSkinInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d2d8dc;
      if ((DAT_122df09c & 1) == 0) {
        DAT_122df09c = DAT_122df09c | 1;
        FUN_102500e0("CPetSkinInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca23d0);
      }
      puVar3 = (undefined *)*DAT_122df080;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSkinInfo",0), puVar3 == (undefined *)0x0)
         ) {
        if ((DAT_122df108 & 1) == 0) {
          DAT_122df0d4 = 0;
          DAT_122df0e4 = 0;
          DAT_122df0e8 = 0;
          _DAT_122df0ec = 0;
          uRam122df0f0 = 0;
          DAT_122df108 = DAT_122df108 | 1;
          _DAT_122df0d0 = &PTR_FUN_11d2d910;
          _DAT_122df0f4 = _DAT_11de9ae0;
          uRam122df0f8 = _UNK_11de9ae4;
          uRam122df0fc = _UNK_11de9ae8;
          uRam122df100 = _UNK_11de9aec;
          DAT_122df104 = 1;
          DAT_122df0d8 = puVar3;
          _DAT_122df0dc = puVar3;
          _DAT_122df0e0 = puVar3;
          FUN_11a8911f(&LAB_11ca9b80);
        }
        puVar3 = &DAT_122df0d0;
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
    local_c = &PTR_FUN_11d2d8dc;
    if ((DAT_122df09c & 1) == 0) {
      DAT_122df09c = DAT_122df09c | 1;
      FUN_102500e0("CPetSkinInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca23d0);
    }
    puVar3 = (undefined *)*DAT_122df080;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSkinInfo",0), puVar3 == (undefined *)0x0))
    {
      if ((DAT_122df108 & 1) == 0) {
        DAT_122df108 = DAT_122df108 | 1;
        FUN_11566460();
        FUN_11a8911f(&LAB_11ca9b80);
      }
      puVar3 = &DAT_122df0d0;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetSkinInfo::GetManagers_1192c4a0 @ 1192c4a0 --- */
// [RE-AUTO c3]
// id: CPetSkinInfo::GetManagers
// calls: CPetSkinInfo::GetManagers
// strings:
//   ""CPetSkinInfo""
//   ""CPetSkinInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkinInfo::GetManagers
   calls: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo""
     ""CPetSkinInfo::GetManagers"" */

void CPetSkinInfo__GetManagers_1192c4a0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetSkinInfo__GetManagers(0,"CPetSkinInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d2d8dc;
      if ((DAT_122df09c & 1) == 0) {
        DAT_122df09c = DAT_122df09c | 1;
        FUN_102500e0("CPetSkinInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca23d0);
      }
      puVar4 = (undefined *)*DAT_122df080;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetSkinInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_122df108 & 1) == 0) {
          DAT_122df0d4 = 0;
          DAT_122df0e4 = 0;
          DAT_122df0e8 = 0;
          _DAT_122df0ec = 0;
          uRam122df0f0 = 0;
          DAT_122df108 = DAT_122df108 | 1;
          _DAT_122df0d0 = &PTR_FUN_11d2d910;
          _DAT_122df0f4 = _DAT_11de9ae0;
          uRam122df0f8 = _UNK_11de9ae4;
          uRam122df0fc = _UNK_11de9ae8;
          uRam122df100 = _UNK_11de9aec;
          DAT_122df104 = 1;
          DAT_122df0d8 = puVar4;
          _DAT_122df0dc = puVar4;
          _DAT_122df0e0 = puVar4;
          FUN_11a8911f(&LAB_11cb20a0);
        }
        puVar4 = &DAT_122df0d0;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CPetAvatarInfo__GetManagers_11a1b510(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



