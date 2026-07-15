// ===== class CAdditionLevelRewardInfo  (3 recovered methods) =====

/* --- CAdditionLevelRewardInfo::GetManagers @ 118e6500 --- */
// [RE-AUTO c3]
// id: CAdditionLevelRewardInfo::GetManagers
// strings:
//   ""CAdditionLevelRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAdditionLevelRewardInfo::GetManagers
   strings:
     ""CAdditionLevelRewardInfo::GetManagers"" */

undefined4 *
CAdditionLevelRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5b820;
  if (param_3 == 0) {
    if ((DAT_1239dd40 & 1) == 0) {
      DAT_1239dd40 = DAT_1239dd40 | 1;
      FUN_102500e0("CAdditionLevelRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0630);
    }
    if ((undefined4 *)*DAT_1239dd24 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1239dd24;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1239ddb0 & 1) == 0) {
      DAT_1239ddb0 = DAT_1239ddb0 | 1;
      FUN_118e6810();
      FUN_11a8911f(&LAB_11cb05d0);
    }
    puVar1 = &DAT_1239dd78;
  }
  return puVar1;
}



/* --- CAdditionLevelRewardInfo::GetManagers_118e70b0 @ 118e70b0 --- */
// [RE-AUTO c3]
// id: CAdditionLevelRewardInfo::GetManagers
// strings:
//   ""CAdditionLevelRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAdditionLevelRewardInfo::GetManagers
   strings:
     ""CAdditionLevelRewardInfo::GetManagers"" */

undefined4 CAdditionLevelRewardInfo__GetManagers_118e70b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239dd40 & 1) == 0) {
      DAT_1239dd40 = DAT_1239dd40 | 1;
      FUN_102500e0("CAdditionLevelRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0630);
    }
    return *DAT_1239dd24;
  }
  return 0;
}



/* --- CAdditionLevelRewardInfo::GetManagers_118e72d0 @ 118e72d0 --- */
// [RE-AUTO c3]
// id: CAdditionLevelRewardInfo::GetManagers
// strings:
//   ""CAdditionLevelRewardInfo::GetManagers""
//   ""CAdditionLevelRewardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAdditionLevelRewardInfo::GetManagers
   strings:
     ""CAdditionLevelRewardInfo::GetManagers""
     ""CAdditionLevelRewardInfo"" */

void CAdditionLevelRewardInfo__GetManagers_118e72d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d5b820;
    if ((DAT_1239dd40 & 1) == 0) {
      DAT_1239dd40 = DAT_1239dd40 | 1;
      FUN_102500e0("CAdditionLevelRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0630);
    }
    piVar2 = (int *)*DAT_1239dd24;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CAdditionLevelRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239ddb0 & 1) == 0) {
          DAT_1239dd7c = 0;
          DAT_1239dd8c = 0;
          DAT_1239dd90 = 0;
          _DAT_1239dd94 = 0;
          uRam1239dd98 = 0;
          DAT_1239ddb0 = DAT_1239ddb0 | 1;
          DAT_1239dd78 = &PTR_FUN_11d5b86c;
          _DAT_1239dd9c = _DAT_11de9ae0;
          uRam1239dda0 = _UNK_11de9ae4;
          uRam1239dda4 = _UNK_11de9ae8;
          uRam1239dda8 = _UNK_11de9aec;
          DAT_1239ddac = 1;
          DAT_1239dd80 = piVar2;
          _DAT_1239dd84 = piVar2;
          _DAT_1239dd88 = piVar2;
          FUN_11a8911f(&LAB_11cb05d0);
        }
        piVar2 = (int *)&DAT_1239dd78;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d5b820;
    if ((DAT_1239dd40 & 1) == 0) {
      DAT_1239dd40 = DAT_1239dd40 | 1;
      FUN_102500e0("CAdditionLevelRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0630);
    }
    piVar2 = (int *)*DAT_1239dd24;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CAdditionLevelRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239ddb0 & 1) == 0) {
          DAT_1239dd7c = 0;
          DAT_1239dd8c = 0;
          DAT_1239dd90 = 0;
          _DAT_1239dd94 = 0;
          uRam1239dd98 = 0;
          DAT_1239ddb0 = DAT_1239ddb0 | 1;
          DAT_1239dd78 = &PTR_FUN_11d5b86c;
          _DAT_1239dd9c = _DAT_11de9ae0;
          uRam1239dda0 = _UNK_11de9ae4;
          uRam1239dda4 = _UNK_11de9ae8;
          uRam1239dda8 = _UNK_11de9aec;
          DAT_1239ddac = 1;
          DAT_1239dd80 = piVar2;
          _DAT_1239dd84 = piVar2;
          _DAT_1239dd88 = piVar2;
          FUN_11a8911f(&LAB_11cb05d0);
        }
        piVar2 = (int *)&DAT_1239dd78;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_119f0b60(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



