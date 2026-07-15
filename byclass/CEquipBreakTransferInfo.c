// ===== class CEquipBreakTransferInfo  (3 recovered methods) =====

/* --- CEquipBreakTransferInfo::GetManagers @ 115bf180 --- */
// [RE-AUTO c3]
// id: CEquipBreakTransferInfo::GetManagers
// strings:
//   ""CEquipBreakTransferInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipBreakTransferInfo::GetManagers
   strings:
     ""CEquipBreakTransferInfo::GetManagers"" */

undefined * CEquipBreakTransferInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30a20;
  if (param_3 == 0) {
    if ((DAT_122df5ac & 1) == 0) {
      DAT_122df5ac = DAT_122df5ac | 1;
      FUN_102500e0("CEquipBreakTransferInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4400);
    }
    if ((undefined *)*DAT_122df590 != (undefined *)0x0) {
      return (undefined *)*DAT_122df590;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df740 & 1) == 0) {
      DAT_122df740 = DAT_122df740 | 1;
      FUN_115c0650();
      FUN_11a8911f(&LAB_11ca3ef0);
    }
    puVar1 = &DAT_122df708;
  }
  return puVar1;
}



/* --- CEquipBreakTransferInfo::GetManagers_115c4130 @ 115c4130 --- */
// [RE-AUTO c3]
// id: CEquipBreakTransferInfo::GetManagers
// strings:
//   ""CEquipBreakTransferInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipBreakTransferInfo::GetManagers
   strings:
     ""CEquipBreakTransferInfo::GetManagers"" */

undefined4 CEquipBreakTransferInfo__GetManagers_115c4130(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df5ac & 1) == 0) {
      DAT_122df5ac = DAT_122df5ac | 1;
      FUN_102500e0("CEquipBreakTransferInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4400);
    }
    return *DAT_122df590;
  }
  return 0;
}



/* --- CEquipBreakTransferInfo::GetManagers_1191ca60 @ 1191ca60 --- */
// [RE-AUTO c3]
// id: CEquipBreakTransferInfo::GetManagers
// calls: CEquipBreakTransferInfo::GetManagers
// strings:
//   ""CEquipBreakTransferInfo""
//   ""CEquipBreakTransferInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipBreakTransferInfo::GetManagers
   calls: CEquipBreakTransferInfo::GetManagers
   strings:
     ""CEquipBreakTransferInfo""
     ""CEquipBreakTransferInfo::GetManagers"" */

void CEquipBreakTransferInfo__GetManagers_1191ca60(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CEquipBreakTransferInfo__GetManagers(0,"CEquipBreakTransferInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d30a20;
      if ((DAT_122df5ac & 1) == 0) {
        DAT_122df5ac = DAT_122df5ac | 1;
        FUN_102500e0("CEquipBreakTransferInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca4400);
      }
      puVar4 = (undefined *)*DAT_122df590;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipBreakTransferInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122df740 & 1) == 0) {
          DAT_122df70c = 0;
          DAT_122df71c = 0;
          DAT_122df720 = 0;
          _DAT_122df724 = 0;
          uRam122df728 = 0;
          DAT_122df740 = DAT_122df740 | 1;
          _DAT_122df708 = &PTR_FUN_11d30a68;
          _DAT_122df72c = _DAT_11de9ae0;
          uRam122df730 = _UNK_11de9ae4;
          uRam122df734 = _UNK_11de9ae8;
          uRam122df738 = _UNK_11de9aec;
          DAT_122df73c = 1;
          DAT_122df710 = puVar4;
          _DAT_122df714 = puVar4;
          _DAT_122df718 = puVar4;
          FUN_11a8911f(&LAB_11cb19b0);
        }
        puVar4 = &DAT_122df708;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_11a0cce0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



