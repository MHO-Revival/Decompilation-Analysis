// ===== class CInDirectPVPInfo  (3 recovered methods) =====

/* --- CInDirectPVPInfo::GetManagers @ 11999e30 --- */
// [RE-AUTO c3]
// id: CInDirectPVPInfo::GetManagers
// strings:
//   ""CInDirectPVPInfo::GetManagers""

/* [RE-AUTO c3]
   id: CInDirectPVPInfo::GetManagers
   strings:
     ""CInDirectPVPInfo::GetManagers"" */

undefined * CInDirectPVPInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d663e4;
  if (param_3 == 0) {
    if ((DAT_123a1eb0 & 1) == 0) {
      DAT_123a1eb0 = DAT_123a1eb0 | 1;
      FUN_102500e0("CInDirectPVPInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3c30);
    }
    if ((undefined *)*DAT_123a1e94 != (undefined *)0x0) {
      return (undefined *)*DAT_123a1e94;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a1f20 & 1) == 0) {
      DAT_123a1f20 = DAT_123a1f20 | 1;
      FUN_1199a140();
      FUN_11a8911f(&LAB_11cb3bd0);
    }
    puVar1 = &DAT_123a1ee8;
  }
  return puVar1;
}



/* --- CInDirectPVPInfo::GetManagers_1199a9e0 @ 1199a9e0 --- */
// [RE-AUTO c3]
// id: CInDirectPVPInfo::GetManagers
// strings:
//   ""CInDirectPVPInfo::GetManagers""

/* [RE-AUTO c3]
   id: CInDirectPVPInfo::GetManagers
   strings:
     ""CInDirectPVPInfo::GetManagers"" */

undefined4 CInDirectPVPInfo__GetManagers_1199a9e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a1eb0 & 1) == 0) {
      DAT_123a1eb0 = DAT_123a1eb0 | 1;
      FUN_102500e0("CInDirectPVPInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3c30);
    }
    return *DAT_123a1e94;
  }
  return 0;
}



/* --- CInDirectPVPInfo::GetManagers_1199ac00 @ 1199ac00 --- */
// [RE-AUTO c3]
// id: CInDirectPVPInfo::GetManagers
// calls: CInDirectPVPInfo::GetManagers
// strings:
//   ""CInDirectPVPInfo""
//   ""CInDirectPVPInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CInDirectPVPInfo::GetManagers
   calls: CInDirectPVPInfo::GetManagers
   strings:
     ""CInDirectPVPInfo""
     ""CInDirectPVPInfo::GetManagers"" */

void CInDirectPVPInfo__GetManagers_1199ac00(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CInDirectPVPInfo__GetManagers(0,"CInDirectPVPInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d663e4;
      if ((DAT_123a1eb0 & 1) == 0) {
        DAT_123a1eb0 = DAT_123a1eb0 | 1;
        FUN_102500e0("CInDirectPVPInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3c30);
      }
      puVar4 = (undefined *)*DAT_123a1e94;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CInDirectPVPInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123a1f20 & 1) == 0) {
          DAT_123a1eec = 0;
          DAT_123a1efc = 0;
          DAT_123a1f00 = 0;
          _DAT_123a1f04 = 0;
          uRam123a1f08 = 0;
          DAT_123a1f20 = DAT_123a1f20 | 1;
          _DAT_123a1ee8 = &PTR_FUN_11d66420;
          _DAT_123a1f0c = _DAT_11de9ae0;
          uRam123a1f10 = _UNK_11de9ae4;
          uRam123a1f14 = _UNK_11de9ae8;
          uRam123a1f18 = _UNK_11de9aec;
          DAT_123a1f1c = 1;
          DAT_123a1ef0 = puVar4;
          _DAT_123a1ef4 = puVar4;
          _DAT_123a1ef8 = puVar4;
          FUN_11a8911f(&LAB_11cb3bd0);
        }
        puVar4 = &DAT_123a1ee8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a67cb0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



