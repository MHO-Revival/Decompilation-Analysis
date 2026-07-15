// ===== class CActivityLevelEntrustInfo  (3 recovered methods) =====

/* --- CActivityLevelEntrustInfo::GetManagers @ 111fd440 --- */
// [RE-AUTO c3]
// id: CActivityLevelEntrustInfo::GetManagers
// strings:
//   ""CActivityLevelEntrustInfo::GetManagers""

/* [RE-AUTO c3]
   id: CActivityLevelEntrustInfo::GetManagers
   strings:
     ""CActivityLevelEntrustInfo::GetManagers"" */

undefined4 *
CActivityLevelEntrustInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1838c;
  if (param_3 == 0) {
    if ((DAT_1203f60c & 1) == 0) {
      DAT_1203f60c = DAT_1203f60c | 1;
      FUN_102500e0("CActivityLevelEntrustInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97a80);
    }
    if ((undefined4 *)*DAT_1203f5f0 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f5f0;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f67c & 1) == 0) {
      DAT_1203f67c = DAT_1203f67c | 1;
      FUN_111fdf20();
      FUN_11a8911f(&LAB_11c979c0);
    }
    puVar1 = &DAT_1203f644;
  }
  return puVar1;
}



/* --- CActivityLevelEntrustInfo::GetManagers_111ff480 @ 111ff480 --- */
// [RE-AUTO c3]
// id: CActivityLevelEntrustInfo::GetManagers
// strings:
//   ""CActivityLevelEntrustInfo::GetManagers""

/* [RE-AUTO c3]
   id: CActivityLevelEntrustInfo::GetManagers
   strings:
     ""CActivityLevelEntrustInfo::GetManagers"" */

undefined4 CActivityLevelEntrustInfo__GetManagers_111ff480(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f60c & 1) == 0) {
      DAT_1203f60c = DAT_1203f60c | 1;
      FUN_102500e0("CActivityLevelEntrustInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97a80);
    }
    return *DAT_1203f5f0;
  }
  return 0;
}



/* --- CActivityLevelEntrustInfo::GetManagers_114d5610 @ 114d5610 --- */
// [RE-AUTO c3]
// id: CActivityLevelEntrustInfo::GetManagers
// strings:
//   ""CLevelEnGroupInfo""
//   ""CActivityLevelEntrustInfo::GetManagers""
//   ""CActivityLevelEntrustInfo""

/* [RE-AUTO c3]
   id: CActivityLevelEntrustInfo::GetManagers
   strings:
     ""CLevelEnGroupInfo""
     ""CActivityLevelEntrustInfo::GetManagers""
     ""CActivityLevelEntrustInfo"" */

int CActivityLevelEntrustInfo__GetManagers_114d5610(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined **local_8;
  
  iVar1 = param_1;
  iVar2 = FUN_104ee100(0,"CLevelEnGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar8 = *(int *)(iVar2 + 0x28), iVar8 != 0)))) &&
     ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar8) * 4);
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(iVar2 + (iVar3 % iVar8) * 4), iVar2 != 0 && (*(int *)(iVar2 + 0x2c) != 0))
       )) {
      iVar3 = FUN_11548ea0(param_1);
      iVar8 = 0;
      param_1 = 0;
      iVar9 = 0;
      while( true ) {
        local_8 = &PTR_FUN_11d1838c;
        if ((DAT_1203f60c & 1) == 0) {
          DAT_1203f60c = DAT_1203f60c | 1;
          FUN_102500e0("CActivityLevelEntrustInfo::GetManagers");
          FUN_11a8911f(&LAB_11c97a80);
        }
        piVar4 = (int *)*DAT_1203f5f0;
        if ((piVar4 == (int *)0x0) &&
           (piVar4 = (int *)FUN_11679e10(&local_8,"CActivityLevelEntrustInfo",0),
           piVar4 == (int *)0x0)) {
          if ((DAT_1203f67c & 1) == 0) {
            DAT_1203f67c = DAT_1203f67c | 1;
            FUN_111fdf20();
            FUN_11a8911f(&LAB_11c9f3a0);
          }
          piVar4 = &DAT_1203f644;
        }
        local_8 = &PTR_FUN_11da54a8;
        iVar5 = (**(code **)(*piVar4 + 0x28))();
        if (iVar5 <= iVar9) break;
        local_8 = &PTR_FUN_11d1838c;
        if ((DAT_1203f60c & 1) == 0) {
          DAT_1203f60c = DAT_1203f60c | 1;
          FUN_102500e0("CActivityLevelEntrustInfo::GetManagers");
          FUN_11a8911f(&LAB_11c97a80);
        }
        puVar6 = (undefined4 *)*DAT_1203f5f0;
        if ((puVar6 == (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)FUN_11679e10(&local_8,"CActivityLevelEntrustInfo",0),
           puVar6 == (undefined4 *)0x0)) {
          if ((DAT_1203f67c & 1) == 0) {
            DAT_1203f67c = DAT_1203f67c | 1;
            FUN_111fdf20();
            FUN_11a8911f(&LAB_11c9f3a0);
          }
          puVar6 = &DAT_1203f644;
        }
        local_8 = &PTR_FUN_11da54a8;
        if (((((iVar9 < 0) || ((int)(puVar6[6] - puVar6[5]) >> 2 <= iVar9)) ||
             (iVar5 = *(int *)(puVar6[5] + iVar9 * 4), iVar8 = param_1, iVar5 == 0)) ||
            ((*(int *)(iVar5 + 0x14) != iVar1 ||
             (iVar7 = FUN_107d7c80(*(undefined4 *)(iVar5 + 0x10)), iVar7 == 0)))) ||
           (*(int *)(iVar7 + 0x10) != 2)) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar8 = param_1 + (*(int *)(iVar5 + 0x18) + -1) * *(int *)(iVar2 + 0x2c);
          iVar9 = iVar9 + 1;
          param_1 = iVar8;
        }
      }
      return iVar3 + iVar8;
    }
  }
  return 0;
}



