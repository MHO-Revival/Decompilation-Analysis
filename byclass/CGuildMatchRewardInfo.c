// ===== class CGuildMatchRewardInfo  (3 recovered methods) =====

/* --- CGuildMatchRewardInfo::GetManagers @ 1196f6e0 --- */
// [RE-AUTO c3]
// id: CGuildMatchRewardInfo::GetManagers
// strings:
//   ""CGuildMatchRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildMatchRewardInfo::GetManagers
   strings:
     ""CGuildMatchRewardInfo::GetManagers"" */

undefined4 * CGuildMatchRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d63ed0;
  if (param_3 == 0) {
    if ((DAT_123a0fb4 & 1) == 0) {
      DAT_123a0fb4 = DAT_123a0fb4 | 1;
      FUN_102500e0("CGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3060);
    }
    if ((undefined4 *)*DAT_123a0f98 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123a0f98;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_123a1078 & 1) == 0) {
      DAT_123a1078 = DAT_123a1078 | 1;
      FUN_1196fd30();
      FUN_11a8911f(&LAB_11cb2fd0);
    }
    puVar1 = &DAT_123a1040;
  }
  return puVar1;
}



/* --- CGuildMatchRewardInfo::GetManagers_11970df0 @ 11970df0 --- */
// [RE-AUTO c3]
// id: CGuildMatchRewardInfo::GetManagers
// strings:
//   ""CGuildMatchRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildMatchRewardInfo::GetManagers
   strings:
     ""CGuildMatchRewardInfo::GetManagers"" */

undefined4 CGuildMatchRewardInfo__GetManagers_11970df0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a0fb4 & 1) == 0) {
      DAT_123a0fb4 = DAT_123a0fb4 | 1;
      FUN_102500e0("CGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3060);
    }
    return *DAT_123a0f98;
  }
  return 0;
}



/* --- CGuildMatchRewardInfo::GetManagers_119711e0 @ 119711e0 --- */
// [RE-AUTO c3]
// id: CGuildMatchRewardInfo::GetManagers
// strings:
//   ""CGuildMatchRewardInfo::GetManagers""
//   ""CGuildMatchRewardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildMatchRewardInfo::GetManagers
   strings:
     ""CGuildMatchRewardInfo::GetManagers""
     ""CGuildMatchRewardInfo"" */

void CGuildMatchRewardInfo__GetManagers_119711e0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d63ed0;
    if ((DAT_123a0fb4 & 1) == 0) {
      DAT_123a0fb4 = DAT_123a0fb4 | 1;
      FUN_102500e0("CGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3060);
    }
    piVar2 = (int *)*DAT_123a0f98;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGuildMatchRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a1078 & 1) == 0) {
          DAT_123a1044 = 0;
          DAT_123a1054 = 0;
          DAT_123a1058 = 0;
          _DAT_123a105c = 0;
          uRam123a1060 = 0;
          DAT_123a1078 = DAT_123a1078 | 1;
          DAT_123a1040 = &PTR_FUN_11d63f60;
          _DAT_123a1064 = _DAT_11de9ae0;
          uRam123a1068 = _UNK_11de9ae4;
          uRam123a106c = _UNK_11de9ae8;
          uRam123a1070 = _UNK_11de9aec;
          DAT_123a1074 = 1;
          DAT_123a1048 = piVar2;
          _DAT_123a104c = piVar2;
          _DAT_123a1050 = piVar2;
          FUN_11a8911f(&LAB_11cb2fd0);
        }
        piVar2 = (int *)&DAT_123a1040;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d63ed0;
    if ((DAT_123a0fb4 & 1) == 0) {
      DAT_123a0fb4 = DAT_123a0fb4 | 1;
      FUN_102500e0("CGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3060);
    }
    piVar2 = (int *)*DAT_123a0f98;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGuildMatchRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a1078 & 1) == 0) {
          DAT_123a1044 = 0;
          DAT_123a1054 = 0;
          DAT_123a1058 = 0;
          _DAT_123a105c = 0;
          uRam123a1060 = 0;
          DAT_123a1078 = DAT_123a1078 | 1;
          DAT_123a1040 = &PTR_FUN_11d63f60;
          _DAT_123a1064 = _DAT_11de9ae0;
          uRam123a1068 = _UNK_11de9ae4;
          uRam123a106c = _UNK_11de9ae8;
          uRam123a1070 = _UNK_11de9aec;
          DAT_123a1074 = 1;
          DAT_123a1048 = piVar2;
          _DAT_123a104c = piVar2;
          _DAT_123a1050 = piVar2;
          FUN_11a8911f(&LAB_11cb2fd0);
        }
        piVar2 = (int *)&DAT_123a1040;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CItemBaseInfo__GetManagers_11a4c5a0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



