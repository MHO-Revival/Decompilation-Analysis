// ===== class CEliminateMatchInfo  (3 recovered methods) =====

/* --- CEliminateMatchInfo::GetManagers @ 114880a0 --- */
// [RE-AUTO c3]
// id: CEliminateMatchInfo::GetManagers
// strings:
//   ""CEliminateMatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEliminateMatchInfo::GetManagers
   strings:
     ""CEliminateMatchInfo::GetManagers"" */

undefined4 * CEliminateMatchInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d29834;
  if (param_3 == 0) {
    if ((DAT_122de410 & 1) == 0) {
      DAT_122de410 = DAT_122de410 | 1;
      FUN_102500e0("CEliminateMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e280);
    }
    if ((undefined4 *)*DAT_122de3f4 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122de3f4;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122de4a8 & 1) == 0) {
      DAT_122de4a8 = DAT_122de4a8 | 1;
      FUN_11488580();
      FUN_11a8911f(&LAB_11c9e160);
    }
    puVar1 = &DAT_122de470;
  }
  return puVar1;
}



/* --- CEliminateMatchInfo::GetManagers_11489010 @ 11489010 --- */
// [RE-AUTO c3]
// id: CEliminateMatchInfo::GetManagers
// strings:
//   ""CEliminateMatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEliminateMatchInfo::GetManagers
   strings:
     ""CEliminateMatchInfo::GetManagers"" */

undefined4 CEliminateMatchInfo__GetManagers_11489010(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de410 & 1) == 0) {
      DAT_122de410 = DAT_122de410 | 1;
      FUN_102500e0("CEliminateMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e280);
    }
    return *DAT_122de3f4;
  }
  return 0;
}



/* --- CEliminateMatchInfo::GetManagers_1196dc10 @ 1196dc10 --- */
// [RE-AUTO c3]
// id: CEliminateMatchInfo::GetManagers
// strings:
//   ""CEliminateMatchInfo::GetManagers""
//   ""CEliminateMatchInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEliminateMatchInfo::GetManagers
   strings:
     ""CEliminateMatchInfo::GetManagers""
     ""CEliminateMatchInfo"" */

void CEliminateMatchInfo__GetManagers_1196dc10(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d29834;
    if ((DAT_122de410 & 1) == 0) {
      DAT_122de410 = DAT_122de410 | 1;
      FUN_102500e0("CEliminateMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e280);
    }
    piVar2 = (int *)*DAT_122de3f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CEliminateMatchInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122de4a8 & 1) == 0) {
          DAT_122de474 = 0;
          DAT_122de484 = 0;
          DAT_122de488 = 0;
          _DAT_122de48c = 0;
          uRam122de490 = 0;
          DAT_122de4a8 = DAT_122de4a8 | 1;
          DAT_122de470 = &PTR_FUN_11d29874;
          _DAT_122de494 = _DAT_11de9ae0;
          uRam122de498 = _UNK_11de9ae4;
          uRam122de49c = _UNK_11de9ae8;
          uRam122de4a0 = _UNK_11de9aec;
          DAT_122de4a4 = 1;
          DAT_122de478 = piVar2;
          _DAT_122de47c = piVar2;
          _DAT_122de480 = piVar2;
          FUN_11a8911f(&LAB_11cb2e80);
        }
        piVar2 = (int *)&DAT_122de470;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d29834;
    if ((DAT_122de410 & 1) == 0) {
      DAT_122de410 = DAT_122de410 | 1;
      FUN_102500e0("CEliminateMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e280);
    }
    piVar2 = (int *)*DAT_122de3f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CEliminateMatchInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122de4a8 & 1) == 0) {
          DAT_122de474 = 0;
          DAT_122de484 = 0;
          DAT_122de488 = 0;
          _DAT_122de48c = 0;
          uRam122de490 = 0;
          DAT_122de4a8 = DAT_122de4a8 | 1;
          DAT_122de470 = &PTR_FUN_11d29874;
          _DAT_122de494 = _DAT_11de9ae0;
          uRam122de498 = _UNK_11de9ae4;
          uRam122de49c = _UNK_11de9ae8;
          uRam122de4a0 = _UNK_11de9aec;
          DAT_122de4a4 = 1;
          DAT_122de478 = piVar2;
          _DAT_122de47c = piVar2;
          _DAT_122de480 = piVar2;
          FUN_11a8911f(&LAB_11cb2e80);
        }
        piVar2 = (int *)&DAT_122de470;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CMHLevelInfo__GetManagers_11a4b300(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



