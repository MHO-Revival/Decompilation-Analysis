// ===== class CXHunterInfo  (3 recovered methods) =====

/* --- CXHunterInfo::GetManagers @ 11a67cd0 --- */
// [RE-AUTO c3]
// id: CXHunterInfo::GetManagers
// strings:
//   ""CXHunterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CXHunterInfo::GetManagers
   strings:
     ""CXHunterInfo::GetManagers"" */

undefined * CXHunterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d727fc;
  if (param_3 == 0) {
    if ((DAT_123a1f40 & 1) == 0) {
      DAT_123a1f40 = DAT_123a1f40 | 1;
      FUN_102500e0("CXHunterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3c60);
    }
    if ((undefined *)*DAT_123a1f24 != (undefined *)0x0) {
      return (undefined *)*DAT_123a1f24;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123ac5f4 & 1) == 0) {
      DAT_123ac5f4 = DAT_123ac5f4 | 1;
      FUN_11a67d70();
      FUN_11a8911f(&LAB_11cb75b0);
    }
    puVar1 = &DAT_123ac5bc;
  }
  return puVar1;
}



/* --- CXHunterInfo::GetManagers_11a67e80 @ 11a67e80 --- */
// [RE-AUTO c3]
// id: CXHunterInfo::GetManagers
// calls: CXHunterInfo::GetManagers
// strings:
//   ""CXHunterInfo""
//   ""CXHunterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CXHunterInfo::GetManagers
   calls: CXHunterInfo::GetManagers
   strings:
     ""CXHunterInfo""
     ""CXHunterInfo::GetManagers"" */

int CXHunterInfo__GetManagers_11a67e80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  iVar4 = 0;
  piVar1 = (int *)CXHunterInfo__GetManagers(0,"CXHunterInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d727fc;
      if ((DAT_123a1f40 & 1) == 0) {
        DAT_123a1f40 = DAT_123a1f40 | 1;
        FUN_102500e0("CXHunterInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3c60);
      }
      puVar3 = (undefined *)*DAT_123a1f24;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CXHunterInfo",0), puVar3 == (undefined *)0x0)
         ) {
        if ((DAT_123ac5f4 & 1) == 0) {
          DAT_123ac5c0 = 0;
          DAT_123ac5d0 = 0;
          DAT_123ac5d4 = 0;
          _DAT_123ac5d8 = 0;
          uRam123ac5dc = 0;
          DAT_123ac5f4 = DAT_123ac5f4 | 1;
          _DAT_123ac5bc = &PTR_FUN_11d66514;
          _DAT_123ac5e0 = _DAT_11de9ae0;
          uRam123ac5e4 = _UNK_11de9ae4;
          uRam123ac5e8 = _UNK_11de9ae8;
          uRam123ac5ec = _UNK_11de9aec;
          DAT_123ac5f0 = 1;
          DAT_123ac5c4 = puVar3;
          _DAT_123ac5c8 = puVar3;
          _DAT_123ac5cc = puVar3;
          FUN_11a8911f(&LAB_11cb75b0);
        }
        puVar3 = &DAT_123ac5bc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
          (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4), iVar2 != 0)) &&
         (((*(int *)(iVar2 + 0x10) / 100 == param_2 && (*(int *)(iVar2 + 0x14) <= param_1)) &&
          (param_1 <= *(int *)(iVar2 + 0x18))))) {
        if (*(int *)(iVar2 + 0x20) != 0) {
          return ((param_1 - *(int *)(iVar2 + 0x14)) / *(int *)(iVar2 + 0x1c)) *
                 *(int *)(iVar2 + 0x20) + *(int *)(iVar2 + 0x24);
        }
        return *(int *)(iVar2 + 0x24);
      }
      iVar4 = iVar4 + 1;
      piVar1 = (int *)CXHunterInfo__GetManagers(0,"CXHunterInfo",0);
      iVar2 = (**(code **)(*piVar1 + 0x28))();
    } while (iVar4 < iVar2);
  }
  return 0;
}



/* --- CXHunterInfo::GetManagers_11a68020 @ 11a68020 --- */
// [RE-AUTO c3]
// id: CXHunterInfo::GetManagers
// strings:
//   ""CXHunterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CXHunterInfo::GetManagers
   strings:
     ""CXHunterInfo::GetManagers"" */

undefined4 CXHunterInfo__GetManagers_11a68020(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a1f40 & 1) == 0) {
      DAT_123a1f40 = DAT_123a1f40 | 1;
      FUN_102500e0("CXHunterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3c60);
    }
    return *DAT_123a1f24;
  }
  return 0;
}



