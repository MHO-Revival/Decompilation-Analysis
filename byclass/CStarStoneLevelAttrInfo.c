// ===== class CStarStoneLevelAttrInfo  (3 recovered methods) =====

/* --- CStarStoneLevelAttrInfo::GetManagers @ 115a3430 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelAttrInfo::GetManagers
// strings:
//   ""CStarStoneLevelAttrInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneLevelAttrInfo::GetManagers
   strings:
     ""CStarStoneLevelAttrInfo::GetManagers"" */

undefined * CStarStoneLevelAttrInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2fb14;
  if (param_3 == 0) {
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if ((undefined *)*DAT_122df3d8 != (undefined *)0x0) {
      return (undefined *)*DAT_122df3d8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df4c0 & 1) == 0) {
      DAT_122df4c0 = DAT_122df4c0 | 1;
      FUN_115a3f20();
      FUN_11a8911f(&LAB_11ca3890);
    }
    puVar1 = &DAT_122df488;
  }
  return puVar1;
}



/* --- CStarStoneLevelAttrInfo::GetManagers_115a5c10 @ 115a5c10 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelAttrInfo::GetManagers
// strings:
//   ""CStarStoneLevelAttrInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneLevelAttrInfo::GetManagers
   strings:
     ""CStarStoneLevelAttrInfo::GetManagers"" */

undefined4 CStarStoneLevelAttrInfo__GetManagers_115a5c10(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    return *DAT_122df3d8;
  }
  return 0;
}



/* --- CStarStoneLevelAttrInfo::GetManagers_115a7330 @ 115a7330 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelAttrInfo::GetManagers
// strings:
//   ""CStarStoneLevelAttrInfo::GetManagers""
//   ""CStarStoneLevelAttrInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarStoneLevelAttrInfo::GetManagers
   strings:
     ""CStarStoneLevelAttrInfo::GetManagers""
     ""CStarStoneLevelAttrInfo"" */

void __fastcall CStarStoneLevelAttrInfo__GetManagers_115a7330(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined **local_18;
  undefined **local_14;
  undefined **local_10;
  undefined **local_c;
  undefined **local_8;
  
  cVar2 = FUN_1139a650(0);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x30);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) < 1) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    local_8 = &PTR_FUN_11d2fb14;
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if (((*DAT_122df3d8 == 0) &&
        (iVar3 = FUN_11679e10(&local_8,"CStarStoneLevelAttrInfo",0), iVar3 == 0)) &&
       ((DAT_122df4c0 & 1) == 0)) {
      DAT_122df48c = 0;
      DAT_122df49c = 0;
      uRam122df4a0 = 0;
      _DAT_122df4a4 = 0;
      uRam122df4a8 = 0;
      DAT_122df4c0 = DAT_122df4c0 | 1;
      DAT_122df490 = 0;
      _DAT_122df494 = 0;
      _DAT_122df498 = 0;
      _DAT_122df488 = &PTR_FUN_11d2fb5c;
      _DAT_122df4ac = _DAT_11de9ae0;
      uRam122df4b0 = _UNK_11de9ae4;
      uRam122df4b4 = _UNK_11de9ae8;
      uRam122df4b8 = _UNK_11de9aec;
      DAT_122df4bc = 1;
      FUN_11a8911f(&LAB_11ca3890);
    }
    local_8 = &PTR_FUN_11da54a8;
  }
  cVar2 = FUN_1139a650(1);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x30);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) < 0) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    local_c = &PTR_FUN_11d2fb14;
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if (((*DAT_122df3d8 == 0) &&
        (iVar3 = FUN_11679e10(&local_c,"CStarStoneLevelAttrInfo",0), iVar3 == 0)) &&
       ((DAT_122df4c0 & 1) == 0)) {
      DAT_122df48c = 0;
      DAT_122df49c = 0;
      uRam122df4a0 = 0;
      _DAT_122df4a4 = 0;
      uRam122df4a8 = 0;
      DAT_122df4c0 = DAT_122df4c0 | 1;
      DAT_122df490 = 0;
      _DAT_122df494 = 0;
      _DAT_122df498 = 0;
      _DAT_122df488 = &PTR_FUN_11d2fb5c;
      _DAT_122df4ac = _DAT_11de9ae0;
      uRam122df4b0 = _UNK_11de9ae4;
      uRam122df4b4 = _UNK_11de9ae8;
      uRam122df4b8 = _UNK_11de9aec;
      DAT_122df4bc = 1;
      FUN_11a8911f(&LAB_11ca3890);
    }
    local_c = &PTR_FUN_11da54a8;
  }
  cVar2 = FUN_1139a650(2);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x30);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) < 2) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    local_10 = &PTR_FUN_11d2fb14;
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if (((*DAT_122df3d8 == 0) &&
        (iVar3 = FUN_11679e10(&local_10,"CStarStoneLevelAttrInfo",0), iVar3 == 0)) &&
       ((DAT_122df4c0 & 1) == 0)) {
      DAT_122df48c = 0;
      DAT_122df49c = 0;
      uRam122df4a0 = 0;
      _DAT_122df4a4 = 0;
      uRam122df4a8 = 0;
      DAT_122df4c0 = DAT_122df4c0 | 1;
      DAT_122df490 = 0;
      _DAT_122df494 = 0;
      _DAT_122df498 = 0;
      _DAT_122df488 = &PTR_FUN_11d2fb5c;
      _DAT_122df4ac = _DAT_11de9ae0;
      uRam122df4b0 = _UNK_11de9ae4;
      uRam122df4b4 = _UNK_11de9ae8;
      uRam122df4b8 = _UNK_11de9aec;
      DAT_122df4bc = 1;
      FUN_11a8911f(&LAB_11ca3890);
    }
    local_10 = &PTR_FUN_11da54a8;
  }
  cVar2 = FUN_1139a650(3);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x30);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) < 3) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    local_14 = &PTR_FUN_11d2fb14;
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if (((*DAT_122df3d8 == 0) &&
        (iVar3 = FUN_11679e10(&local_14,"CStarStoneLevelAttrInfo",0), iVar3 == 0)) &&
       ((DAT_122df4c0 & 1) == 0)) {
      DAT_122df48c = 0;
      DAT_122df49c = 0;
      uRam122df4a0 = 0;
      _DAT_122df4a4 = 0;
      uRam122df4a8 = 0;
      DAT_122df4c0 = DAT_122df4c0 | 1;
      DAT_122df490 = 0;
      _DAT_122df494 = 0;
      _DAT_122df498 = 0;
      _DAT_122df488 = &PTR_FUN_11d2fb5c;
      _DAT_122df4ac = _DAT_11de9ae0;
      uRam122df4b0 = _UNK_11de9ae4;
      uRam122df4b4 = _UNK_11de9ae8;
      uRam122df4b8 = _UNK_11de9aec;
      DAT_122df4bc = 1;
      FUN_11a8911f(&LAB_11ca3890);
    }
    local_14 = &PTR_FUN_11da54a8;
  }
  cVar2 = FUN_1139a650(4);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x30);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) < 4) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    local_18 = &PTR_FUN_11d2fb14;
    if ((DAT_122df3f4 & 1) == 0) {
      DAT_122df3f4 = DAT_122df3f4 | 1;
      FUN_102500e0("CStarStoneLevelAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a10);
    }
    if (((*DAT_122df3d8 == 0) &&
        (iVar3 = FUN_11679e10(&local_18,"CStarStoneLevelAttrInfo",0), iVar3 == 0)) &&
       ((DAT_122df4c0 & 1) == 0)) {
      DAT_122df48c = 0;
      DAT_122df49c = 0;
      uRam122df4a0 = 0;
      _DAT_122df4a4 = 0;
      uRam122df4a8 = 0;
      DAT_122df4c0 = DAT_122df4c0 | 1;
      DAT_122df490 = 0;
      _DAT_122df494 = 0;
      _DAT_122df498 = 0;
      _DAT_122df488 = &PTR_FUN_11d2fb5c;
      _DAT_122df4ac = _DAT_11de9ae0;
      uRam122df4b0 = _UNK_11de9ae4;
      uRam122df4b4 = _UNK_11de9ae8;
      uRam122df4b8 = _UNK_11de9aec;
      DAT_122df4bc = 1;
      FUN_11a8911f(&LAB_11ca3890);
    }
    local_18 = &PTR_FUN_11da54a8;
  }
  FUN_1183eca0();
  iVar3 = FUN_115a5dc0();
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - iVar3;
  iVar3 = FUN_11399c60();
  if (iVar3 != 0) {
    FUN_11464510();
    iVar3 = FUN_1166c4b0();
    if (*(int *)(iVar3 + 0x120) != 1) {
      iVar3 = FUN_1183eca0();
      iVar1 = *(int *)(iVar3 + 0x60);
      local_18 = (undefined **)FUN_1025b060();
      iVar3 = (int)local_18 + iVar1;
      iVar4 = FUN_11350960();
      if (iVar4 < iVar3) {
        iVar3 = FUN_11350960();
      }
      piVar5 = (int *)FUN_113f3640();
      (**(code **)(*piVar5 + 8))(*(undefined4 *)(param_1 + 0x10),local_18,iVar3,0,0x2d);
      piVar5 = (int *)FUN_11399c60();
      (**(code **)(*piVar5 + 0x58))(iVar1);
    }
  }
  return;
}



