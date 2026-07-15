// ===== class CRankingListOfPlayerInfo  (5 recovered methods) =====

/* --- CRankingListOfPlayerInfo::GetManagers @ 1090b5e0 --- */
// [RE-AUTO c3]
// id: CRankingListOfPlayerInfo::GetManagers
// strings:
//   ""CRankingListOfPlayerInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRankingListOfPlayerInfo::GetManagers
   strings:
     ""CRankingListOfPlayerInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CRankingListOfPlayerInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfe24 & 1) == 0) {
    DAT_123bfe24 = DAT_123bfe24 | 1;
    _DAT_123bfe3c = &DAT_123bfe2c;
    DAT_123bfe40 = &DAT_123bfe2c;
    DAT_123bfe2c = 0;
    FUN_100d83d0("CRankingListOfPlayerInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77170);
  }
  return DAT_123bfe28;
}



/* --- CRankingListOfPlayerInfo::GetManagers_112fd4e0 @ 112fd4e0 --- */
// [RE-AUTO c3]
// id: CRankingListOfPlayerInfo::GetManagers
// strings:
//   ""CRankingListOfPlayerInfo""
//   ""CRankingListOfPlayerInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRankingListOfPlayerInfo::GetManagers
   strings:
     ""CRankingListOfPlayerInfo""
     ""CRankingListOfPlayerInfo::GetManagers"" */

undefined4 CRankingListOfPlayerInfo__GetManagers_112fd4e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_1090fae0(0,"CRankingListOfPlayerInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dd8e78;
      if ((DAT_123bfe24 & 1) == 0) {
        DAT_123bfe24 = DAT_123bfe24 | 1;
        FUN_102500e0("CRankingListOfPlayerInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77170);
      }
      puVar4 = (undefined4 *)*DAT_123bfe28;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CRankingListOfPlayerInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bfdb8 & 1) == 0) {
          DAT_123bfdc0 = 0;
          DAT_123bfdd0 = 0;
          DAT_123bfdd4 = 0;
          _DAT_123bfdd8 = 0;
          DAT_123bfddc = 0;
          DAT_123bfdb8 = DAT_123bfdb8 | 1;
          DAT_123bfdbc = &PTR_FUN_11dd8e8c;
          DAT_123bfde0 = _DAT_11de9ae0;
          DAT_123bfde4 = _UNK_11de9ae4;
          uRam123bfde8 = _UNK_11de9ae8;
          DAT_123bfdec = _UNK_11de9aec;
          DAT_123bfdf0 = 1;
          DAT_123bfdc4 = puVar4;
          _DAT_123bfdc8 = puVar4;
          _DAT_123bfdcc = puVar4;
          FUN_11a8911f(&LAB_11c9a950);
        }
        puVar4 = &DAT_123bfdbc;
      }
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar4[5] + iVar5 * 4), iVar1 != 0)) && (*(int *)(iVar1 + 0x34) == 0xf))
      {
        return *(undefined4 *)(iVar1 + 0x10);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CRankingListOfPlayerInfo::GetManagers_112fd620 @ 112fd620 --- */
// [RE-AUTO c3]
// id: CRankingListOfPlayerInfo::GetManagers
// strings:
//   ""CRankingListOfPlayerInfo""
//   ""CRankingListOfPlayerInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRankingListOfPlayerInfo::GetManagers
   strings:
     ""CRankingListOfPlayerInfo""
     ""CRankingListOfPlayerInfo::GetManagers"" */

undefined4 CRankingListOfPlayerInfo__GetManagers_112fd620(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_1090fae0(0,"CRankingListOfPlayerInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dd8e78;
      if ((DAT_123bfe24 & 1) == 0) {
        DAT_123bfe24 = DAT_123bfe24 | 1;
        FUN_102500e0("CRankingListOfPlayerInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77170);
      }
      puVar4 = (undefined4 *)*DAT_123bfe28;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CRankingListOfPlayerInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bfdb8 & 1) == 0) {
          DAT_123bfdc0 = 0;
          DAT_123bfdd0 = 0;
          DAT_123bfdd4 = 0;
          _DAT_123bfdd8 = 0;
          DAT_123bfddc = 0;
          DAT_123bfdb8 = DAT_123bfdb8 | 1;
          DAT_123bfdbc = &PTR_FUN_11dd8e8c;
          DAT_123bfde0 = _DAT_11de9ae0;
          DAT_123bfde4 = _UNK_11de9ae4;
          uRam123bfde8 = _UNK_11de9ae8;
          DAT_123bfdec = _UNK_11de9aec;
          DAT_123bfdf0 = 1;
          DAT_123bfdc4 = puVar4;
          _DAT_123bfdc8 = puVar4;
          _DAT_123bfdcc = puVar4;
          FUN_11a8911f(&LAB_11c9a950);
        }
        puVar4 = &DAT_123bfdbc;
      }
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar4[5] + iVar5 * 4), iVar1 != 0)) && (*(int *)(iVar1 + 0x34) == 0xd))
      {
        return *(undefined4 *)(iVar1 + 0x10);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CRankingListOfPlayerInfo::GetManagers_112fd760 @ 112fd760 --- */
// [RE-AUTO c3]
// id: CRankingListOfPlayerInfo::GetManagers
// strings:
//   ""CRankingListOfPlayerInfo""
//   ""CRankingListOfPlayerInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRankingListOfPlayerInfo::GetManagers
   strings:
     ""CRankingListOfPlayerInfo""
     ""CRankingListOfPlayerInfo::GetManagers"" */

undefined4 CRankingListOfPlayerInfo__GetManagers_112fd760(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_1090fae0(0,"CRankingListOfPlayerInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  iVar2 = (int)param_1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      param_1 = &PTR_FUN_11dd8e78;
      if ((DAT_123bfe24 & 1) == 0) {
        DAT_123bfe24 = DAT_123bfe24 | 1;
        FUN_102500e0("CRankingListOfPlayerInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77170);
      }
      puVar5 = (undefined4 *)*DAT_123bfe28;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&param_1,"CRankingListOfPlayerInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123bfdb8 & 1) == 0) {
          DAT_123bfdc0 = 0;
          DAT_123bfdd0 = 0;
          DAT_123bfdd4 = 0;
          _DAT_123bfdd8 = 0;
          DAT_123bfddc = 0;
          DAT_123bfdb8 = DAT_123bfdb8 | 1;
          DAT_123bfdbc = &PTR_FUN_11dd8e8c;
          DAT_123bfde0 = _DAT_11de9ae0;
          DAT_123bfde4 = _UNK_11de9ae4;
          uRam123bfde8 = _UNK_11de9ae8;
          DAT_123bfdec = _UNK_11de9aec;
          DAT_123bfdf0 = 1;
          DAT_123bfdc4 = puVar5;
          _DAT_123bfdc8 = puVar5;
          _DAT_123bfdcc = puVar5;
          FUN_11a8911f(&LAB_11c9a950);
        }
        puVar5 = &DAT_123bfdbc;
      }
      if ((((-1 < iVar6) && (iVar6 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar5[5] + iVar6 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x34) == 0xe && (*(int *)(iVar1 + 0x38) == iVar2)))) {
        return *(undefined4 *)(iVar1 + 0x10);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return 0;
}



/* --- CRankingListOfPlayerInfo::GetManagers_1151c360 @ 1151c360 --- */
// [RE-AUTO c3]
// id: CRankingListOfPlayerInfo::GetManagers
// strings:
//   ""CRankingListOfPlayerInfo""
//   ""CRankingListOfPlayerInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRankingListOfPlayerInfo::GetManagers
   strings:
     ""CRankingListOfPlayerInfo""
     ""CRankingListOfPlayerInfo::GetManagers"" */

undefined4 CRankingListOfPlayerInfo__GetManagers_1151c360(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar1 = (int *)FUN_1090fae0(0,"CRankingListOfPlayerInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd8e78;
      if ((DAT_123bfe24 & 1) == 0) {
        DAT_123bfe24 = DAT_123bfe24 | 1;
        FUN_102500e0("CRankingListOfPlayerInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77170);
      }
      puVar3 = (undefined4 *)*DAT_123bfe28;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CRankingListOfPlayerInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bfdb8 & 1) == 0) {
          DAT_123bfdc0 = 0;
          DAT_123bfdd0 = 0;
          DAT_123bfdd4 = 0;
          _DAT_123bfdd8 = 0;
          DAT_123bfddc = 0;
          DAT_123bfdb8 = DAT_123bfdb8 | 1;
          DAT_123bfdbc = &PTR_FUN_11dd8e8c;
          DAT_123bfde0 = _DAT_11de9ae0;
          DAT_123bfde4 = _UNK_11de9ae4;
          uRam123bfde8 = _UNK_11de9ae8;
          DAT_123bfdec = _UNK_11de9aec;
          DAT_123bfdf0 = 1;
          DAT_123bfdc4 = puVar3;
          _DAT_123bfdc8 = puVar3;
          _DAT_123bfdcc = puVar3;
          FUN_11a8911f(&LAB_11ca0700);
        }
        puVar3 = &DAT_123bfdbc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
          (piVar1 = *(int **)(puVar3[5] + iVar5 * 4), piVar1 != (int *)0x0)) &&
         ((piVar1[0xd] == param_1 && (piVar1[0xe] == param_2)))) {
        uVar4 = (**(code **)(*piVar1 + 0x18))();
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



