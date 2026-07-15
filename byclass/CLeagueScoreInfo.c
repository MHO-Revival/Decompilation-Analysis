// ===== class CLeagueScoreInfo  (3 recovered methods) =====

/* --- CLeagueScoreInfo::GetManagers @ 11840e30 --- */
// [RE-AUTO c3]
// id: CLeagueScoreInfo::GetManagers
// strings:
//   ""CLeagueScoreInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLeagueScoreInfo::GetManagers
   strings:
     ""CLeagueScoreInfo::GetManagers"" */

undefined4 * CLeagueScoreInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4ee10;
  if (param_3 == 0) {
    if ((DAT_1239806c & 1) == 0) {
      DAT_1239806c = DAT_1239806c | 1;
      FUN_102500e0("CLeagueScoreInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad130);
    }
    if ((undefined4 *)*DAT_12398050 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_12398050;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12398104 & 1) == 0) {
      DAT_12398104 = DAT_12398104 | 1;
      FUN_11841c80();
      FUN_11a8911f(&LAB_11cad0a0);
    }
    puVar1 = &DAT_123980cc;
  }
  return puVar1;
}



/* --- CLeagueScoreInfo::GetManagers_11842970 @ 11842970 --- */
// [RE-AUTO c3]
// id: CLeagueScoreInfo::GetManagers
// strings:
//   ""CLeagueScoreInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLeagueScoreInfo::GetManagers
   strings:
     ""CLeagueScoreInfo::GetManagers"" */

undefined4 CLeagueScoreInfo__GetManagers_11842970(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239806c & 1) == 0) {
      DAT_1239806c = DAT_1239806c | 1;
      FUN_102500e0("CLeagueScoreInfo::GetManagers");
      FUN_11a8911f(&LAB_11cad130);
    }
    return *DAT_12398050;
  }
  return 0;
}



/* --- CLeagueScoreInfo::GetManagers_119a14f0 @ 119a14f0 --- */
// [RE-AUTO c3]
// id: CLeagueScoreInfo::GetManagers
// calls: CLeagueScoreInfo::GetManagers
// strings:
//   ""CLeagueScoreInfo""
//   ""CLeagueScoreInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueScoreInfo::GetManagers
   calls: CLeagueScoreInfo::GetManagers
   strings:
     ""CLeagueScoreInfo""
     ""CLeagueScoreInfo::GetManagers"" */

void CLeagueScoreInfo__GetManagers_119a14f0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)CLeagueScoreInfo__GetManagers(0,"CLeagueScoreInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d4ee10;
      if ((DAT_1239806c & 1) == 0) {
        DAT_1239806c = DAT_1239806c | 1;
        FUN_102500e0("CLeagueScoreInfo::GetManagers");
        FUN_11a8911f(&LAB_11cad130);
      }
      puVar4 = (undefined4 *)*DAT_12398050;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CLeagueScoreInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_12398104 & 1) == 0) {
          DAT_123980d0 = 0;
          DAT_123980e0 = 0;
          DAT_123980e4 = 0;
          _DAT_123980e8 = 0;
          uRam123980ec = 0;
          DAT_12398104 = DAT_12398104 | 1;
          DAT_123980cc = &PTR_FUN_11d4ee4c;
          _DAT_123980f0 = _DAT_11de9ae0;
          uRam123980f4 = _UNK_11de9ae4;
          uRam123980f8 = _UNK_11de9ae8;
          uRam123980fc = _UNK_11de9aec;
          DAT_12398100 = 1;
          DAT_123980d4 = puVar4;
          _DAT_123980d8 = puVar4;
          _DAT_123980dc = puVar4;
          FUN_11a8911f(&LAB_11cb3f60);
        }
        puVar4 = &DAT_123980cc;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        FUN_11a6d650(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



