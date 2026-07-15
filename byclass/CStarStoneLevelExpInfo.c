// ===== class CStarStoneLevelExpInfo  (3 recovered methods) =====

/* --- CStarStoneLevelExpInfo::GetManagers @ 115a34d0 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelExpInfo::GetManagers
// strings:
//   ""CStarStoneLevelExpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneLevelExpInfo::GetManagers
   strings:
     ""CStarStoneLevelExpInfo::GetManagers"" */

undefined * CStarStoneLevelExpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2fa84;
  if (param_3 == 0) {
    if ((DAT_122df3d4 & 1) == 0) {
      DAT_122df3d4 = DAT_122df3d4 | 1;
      FUN_102500e0("CStarStoneLevelExpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a40);
    }
    if ((undefined *)*DAT_122df3b8 != (undefined *)0x0) {
      return (undefined *)*DAT_122df3b8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df484 & 1) == 0) {
      DAT_122df484 = DAT_122df484 | 1;
      FUN_115a3f80();
      FUN_11a8911f(&LAB_11ca38f0);
    }
    puVar1 = &DAT_122df44c;
  }
  return puVar1;
}



/* --- CStarStoneLevelExpInfo::GetManagers_115a5c60 @ 115a5c60 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelExpInfo::GetManagers
// strings:
//   ""CStarStoneLevelExpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneLevelExpInfo::GetManagers
   strings:
     ""CStarStoneLevelExpInfo::GetManagers"" */

undefined4 CStarStoneLevelExpInfo__GetManagers_115a5c60(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df3d4 & 1) == 0) {
      DAT_122df3d4 = DAT_122df3d4 | 1;
      FUN_102500e0("CStarStoneLevelExpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a40);
    }
    return *DAT_122df3b8;
  }
  return 0;
}



/* --- CStarStoneLevelExpInfo::GetManagers_115a6540 @ 115a6540 --- */
// [RE-AUTO c3]
// id: CStarStoneLevelExpInfo::GetManagers
// strings:
//   ""CStarStoneLevelExpInfo::GetManagers""
//   ""CStarStoneLevelExpInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarStoneLevelExpInfo::GetManagers
   strings:
     ""CStarStoneLevelExpInfo::GetManagers""
     ""CStarStoneLevelExpInfo"" */

int CStarStoneLevelExpInfo__GetManagers_115a6540(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  undefined **local_8;
  
  local_c = 1;
  iVar3 = FUN_1183eca0();
  iVar1 = 1;
  if (*(int *)(iVar3 + 0x34) + 1 < 2) {
    return 1;
  }
  do {
    iVar3 = iVar1;
    local_8 = &PTR_FUN_11d2fa84;
    if ((DAT_122df3d4 & 1) == 0) {
      DAT_122df3d4 = DAT_122df3d4 | 1;
      FUN_102500e0("CStarStoneLevelExpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a40);
    }
    puVar4 = (undefined *)*DAT_122df3b8;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_8,"CStarStoneLevelExpInfo",0),
       puVar4 == (undefined *)0x0)) {
      if ((DAT_122df484 & 1) == 0) {
        DAT_122df450 = 0;
        DAT_122df460 = 0;
        uRam122df464 = 0;
        _DAT_122df468 = 0;
        DAT_122df46c = 0;
        DAT_122df484 = DAT_122df484 | 1;
        _DAT_122df44c = &PTR_FUN_11d2fac8;
        DAT_122df470 = _DAT_11de9ae0;
        DAT_122df474 = _UNK_11de9ae4;
        uRam122df478 = _UNK_11de9ae8;
        DAT_122df47c = _UNK_11de9aec;
        DAT_122df480 = 1;
        DAT_122df454 = puVar4;
        _DAT_122df458 = puVar4;
        _DAT_122df45c = puVar4;
        FUN_11a8911f(&LAB_11ca38f0);
      }
      puVar4 = &DAT_122df44c;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar3 == -1) ||
        (((iVar3 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
         (iVar1 = *(int *)(puVar4 + 0x28), iVar1 == 0)))) ||
       ((iVar5 = iVar3 - *(int *)(puVar4 + 0x30), iVar5 < 0 || (*(int *)(puVar4 + 0x24) <= iVar5))))
    {
LAB_115a6694:
      uVar6 = 0xffffffff;
    }
    else {
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
      if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar1 == 0))
      goto LAB_115a6694;
      switch(param_1) {
      case 0:
        uVar6 = *(uint *)(iVar1 + 0x18);
        break;
      case 1:
        uVar6 = *(uint *)(iVar1 + 0x14);
        break;
      case 2:
        uVar6 = *(uint *)(iVar1 + 0x1c);
        break;
      case 3:
        uVar6 = *(uint *)(iVar1 + 0x20);
        break;
      case 4:
        uVar6 = *(uint *)(iVar1 + 0x24);
        break;
      default:
        goto LAB_115a6694;
      }
    }
    if (param_2 < uVar6) {
      return local_c;
    }
    iVar5 = FUN_1183eca0();
    iVar1 = iVar3 + 1;
    local_c = iVar3;
    if (*(int *)(iVar5 + 0x34) + 1 <= iVar3 + 1) {
      return iVar3;
    }
  } while( true );
}



