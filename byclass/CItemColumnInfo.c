// ===== class CItemColumnInfo  (3 recovered methods) =====

/* --- CItemColumnInfo::GetManagers @ 1122e8f0 --- */
// [RE-AUTO c3]
// id: CItemColumnInfo::GetManagers
// strings:
//   ""CItemColumnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemColumnInfo::GetManagers
   strings:
     ""CItemColumnInfo::GetManagers"" */

undefined * CItemColumnInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d19dfc;
  if (param_3 == 0) {
    if ((DAT_1203fc18 & 1) == 0) {
      DAT_1203fc18 = DAT_1203fc18 | 1;
      FUN_102500e0("CItemColumnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c98860);
    }
    if ((undefined *)*DAT_1203fbfc != (undefined *)0x0) {
      return (undefined *)*DAT_1203fbfc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203fca0 & 1) == 0) {
      DAT_1203fca0 = DAT_1203fca0 | 1;
      FUN_1122ee20();
      FUN_11a8911f(&LAB_11c98650);
    }
    puVar1 = &DAT_1203fc68;
  }
  return puVar1;
}



/* --- CItemColumnInfo::GetManagers_11230500 @ 11230500 --- */
// [RE-AUTO c3]
// id: CItemColumnInfo::GetManagers
// strings:
//   ""CItemColumnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemColumnInfo::GetManagers
   strings:
     ""CItemColumnInfo::GetManagers"" */

undefined4 CItemColumnInfo__GetManagers_11230500(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203fc18 & 1) == 0) {
      DAT_1203fc18 = DAT_1203fc18 | 1;
      FUN_102500e0("CItemColumnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c98860);
    }
    return *DAT_1203fbfc;
  }
  return 0;
}



/* --- CItemColumnInfo::GetManagers_113fada0 @ 113fada0 --- */
// [RE-AUTO c3]
// id: CItemColumnInfo::GetManagers
// strings:
//   ""CItemColumnInfo::GetManagers""
//   ""CItemColumnInfo""

/* [RE-AUTO c3]
   id: CItemColumnInfo::GetManagers
   strings:
     ""CItemColumnInfo::GetManagers""
     ""CItemColumnInfo"" */

int __thiscall CItemColumnInfo__GetManagers_113fada0(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  if (param_2 == 0) {
    return 10;
  }
  *(int *)(param_1 + 8) = param_2;
  iVar5 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11d19dfc;
    if ((DAT_1203fc18 & 1) == 0) {
      DAT_1203fc18 = DAT_1203fc18 | 1;
      FUN_102500e0("CItemColumnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c98860);
    }
    puVar2 = (undefined *)*DAT_1203fbfc;
    if ((puVar2 == (undefined *)0x0) &&
       (puVar2 = (undefined *)FUN_11679e10(&local_8,"CItemColumnInfo",0), puVar2 == (undefined *)0x0
       )) {
      if ((DAT_1203fca0 & 1) == 0) {
        DAT_1203fca0 = DAT_1203fca0 | 1;
        FUN_1122ee20();
        FUN_11a8911f(&LAB_11c9c220);
      }
      puVar2 = &DAT_1203fc68;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar5 == -1) ||
        (((iVar5 == 0 && (*(int *)(puVar2 + 0x30) != 0)) ||
         (iVar4 = *(int *)(puVar2 + 0x28), iVar4 == 0)))) ||
       ((iVar3 = iVar5 - *(int *)(puVar2 + 0x30), iVar3 < 0 || (*(int *)(puVar2 + 0x24) <= iVar3))))
    {
      return 0xd;
    }
    iVar1 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if (iVar1 == 0) {
      return 0xd;
    }
    iVar4 = *(int *)(iVar1 + (iVar3 % iVar4) * 4);
    if (iVar4 == 0) break;
    iVar3 = FUN_113fefa0(iVar5,param_2);
    if (iVar3 != 0) {
      iVar4 = FUN_11461010(iVar5,iVar4);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(int *)(param_1 + 0xc + iVar5 * 4) = iVar3;
    }
    iVar5 = iVar5 + 1;
    if (10 < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x24);
    }
  }
  return 0xd;
}



