// ===== class CQualifierMatchInfo  (3 recovered methods) =====

/* --- CQualifierMatchInfo::GetManagers @ 11488140 --- */
// [RE-AUTO c3]
// id: CQualifierMatchInfo::GetManagers
// strings:
//   ""CQualifierMatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CQualifierMatchInfo::GetManagers
   strings:
     ""CQualifierMatchInfo::GetManagers"" */

undefined4 * CQualifierMatchInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d297a8;
  if (param_3 == 0) {
    if ((DAT_122de3f0 & 1) == 0) {
      DAT_122de3f0 = DAT_122de3f0 | 1;
      FUN_102500e0("CQualifierMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e2b0);
    }
    if ((undefined4 *)*DAT_122de3d4 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122de3d4;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122de46c & 1) == 0) {
      DAT_122de46c = DAT_122de46c | 1;
      FUN_114885e0();
      FUN_11a8911f(&LAB_11c9e220);
    }
    puVar1 = &DAT_122de434;
  }
  return puVar1;
}



/* --- CQualifierMatchInfo::GetManagers_11489060 @ 11489060 --- */
// [RE-AUTO c3]
// id: CQualifierMatchInfo::GetManagers
// strings:
//   ""CQualifierMatchInfo::GetManagers""

/* [RE-AUTO c3]
   id: CQualifierMatchInfo::GetManagers
   strings:
     ""CQualifierMatchInfo::GetManagers"" */

undefined4 CQualifierMatchInfo__GetManagers_11489060(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de3f0 & 1) == 0) {
      DAT_122de3f0 = DAT_122de3f0 | 1;
      FUN_102500e0("CQualifierMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e2b0);
    }
    return *DAT_122de3d4;
  }
  return 0;
}



/* --- CQualifierMatchInfo::GetManagers_1196d390 @ 1196d390 --- */
// [RE-AUTO c3]
// id: CQualifierMatchInfo::GetManagers
// strings:
//   ""CQualifierMatchInfo::GetManagers""
//   ""CQualifierMatchInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CQualifierMatchInfo::GetManagers
   strings:
     ""CQualifierMatchInfo::GetManagers""
     ""CQualifierMatchInfo"" */

void CQualifierMatchInfo__GetManagers_1196d390(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d297a8;
    if ((DAT_122de3f0 & 1) == 0) {
      DAT_122de3f0 = DAT_122de3f0 | 1;
      FUN_102500e0("CQualifierMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e2b0);
    }
    piVar2 = (int *)*DAT_122de3d4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CQualifierMatchInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122de46c & 1) == 0) {
          DAT_122de438 = 0;
          DAT_122de448 = 0;
          DAT_122de44c = 0;
          _DAT_122de450 = 0;
          uRam122de454 = 0;
          DAT_122de46c = DAT_122de46c | 1;
          DAT_122de434 = &PTR_FUN_11d297e8;
          _DAT_122de458 = _DAT_11de9ae0;
          uRam122de45c = _UNK_11de9ae4;
          uRam122de460 = _UNK_11de9ae8;
          uRam122de464 = _UNK_11de9aec;
          DAT_122de468 = 1;
          DAT_122de43c = piVar2;
          _DAT_122de440 = piVar2;
          _DAT_122de444 = piVar2;
          FUN_11a8911f(&LAB_11cb2e20);
        }
        piVar2 = (int *)&DAT_122de434;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d297a8;
    if ((DAT_122de3f0 & 1) == 0) {
      DAT_122de3f0 = DAT_122de3f0 | 1;
      FUN_102500e0("CQualifierMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e2b0);
    }
    piVar2 = (int *)*DAT_122de3d4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CQualifierMatchInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122de46c & 1) == 0) {
          DAT_122de438 = 0;
          DAT_122de448 = 0;
          DAT_122de44c = 0;
          _DAT_122de450 = 0;
          uRam122de454 = 0;
          DAT_122de46c = DAT_122de46c | 1;
          DAT_122de434 = &PTR_FUN_11d297e8;
          _DAT_122de458 = _DAT_11de9ae0;
          uRam122de45c = _UNK_11de9ae4;
          uRam122de460 = _UNK_11de9ae8;
          uRam122de464 = _UNK_11de9aec;
          DAT_122de468 = 1;
          DAT_122de43c = piVar2;
          _DAT_122de440 = piVar2;
          _DAT_122de444 = piVar2;
          FUN_11a8911f(&LAB_11cb2e20);
        }
        piVar2 = (int *)&DAT_122de434;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CMHLevelInfo__GetManagers_11a4aaa0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



