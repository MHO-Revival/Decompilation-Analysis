// ===== class CIllustrateBookInfo  (5 recovered methods) =====

/* --- CIllustrateBookInfo::GetManagers @ 109c56b0 --- */
// [RE-AUTO c3]
// id: CIllustrateBookInfo::GetManagers
// strings:
//   ""CIllustrateBookInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookInfo::GetManagers
   strings:
     ""CIllustrateBookInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CIllustrateBookInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0768 & 1) == 0) {
    DAT_123c0768 = DAT_123c0768 | 1;
    _DAT_123c079c = &DAT_123c078c;
    DAT_123c07a0 = &DAT_123c078c;
    DAT_123c078c = 0;
    FUN_100d83d0("CIllustrateBookInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c200);
  }
  return DAT_123c0788;
}



/* --- CIllustrateBookInfo::GetManagers_115371f0 @ 115371f0 --- */
// [RE-AUTO c3]
// id: CIllustrateBookInfo::GetManagers
// strings:
//   ""CIllustrateBookInfo::GetManagers""
//   ""CIllustrateBookInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookInfo::GetManagers
   strings:
     ""CIllustrateBookInfo::GetManagers""
     ""CIllustrateBookInfo"" */

void CIllustrateBookInfo__GetManagers_115371f0(int param_1,undefined **param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = param_2;
  iVar1 = param_1;
  uVar5 = 0;
LAB_11537200:
  do {
    param_2 = &PTR_FUN_11de357c;
    if ((DAT_123c0768 & 1) == 0) {
      DAT_123c0768 = DAT_123c0768 | 1;
      FUN_102500e0("CIllustrateBookInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7c200);
    }
    piVar3 = (int *)*DAT_123c0788;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_11679e10(&param_2,"CIllustrateBookInfo",0);
      if (piVar3 == (int *)0x0) {
        if ((DAT_123c072c & 1) == 0) {
          DAT_123c06c0 = 0;
          DAT_123c06d0 = 0;
          DAT_123c06d4 = 0;
          _DAT_123c06d8 = 0;
          DAT_123c06dc = 0;
          DAT_123c072c = DAT_123c072c | 1;
          DAT_123c06bc = &PTR_FUN_11de3684;
          DAT_123c06e0 = _DAT_11de9ae0;
          DAT_123c06e4 = _UNK_11de9ae4;
          uRam123c06e8 = _UNK_11de9ae8;
          DAT_123c06ec = _UNK_11de9aec;
          DAT_123c06f0 = 1;
          DAT_123c06c4 = piVar3;
          _DAT_123c06c8 = piVar3;
          _DAT_123c06cc = piVar3;
          FUN_11a8911f(&LAB_11ca1330);
        }
        piVar3 = (int *)&DAT_123c06bc;
      }
    }
    param_2 = &PTR_FUN_11da54a8;
    uVar4 = (**(code **)(*piVar3 + 0x28))();
    if (uVar4 <= uVar5) {
      if (param_3 != '\0') {
        FUN_11536780(*puVar2,puVar2[1],FUN_11808420);
      }
      return;
    }
    param_2 = &PTR_FUN_11de357c;
    if ((DAT_123c0768 & 1) == 0) {
      DAT_123c0768 = DAT_123c0768 | 1;
      FUN_102500e0("CIllustrateBookInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7c200);
    }
    piVar3 = (int *)*DAT_123c0788;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_11679e10(&param_2,"CIllustrateBookInfo",0);
      if (piVar3 == (int *)0x0) {
        if ((DAT_123c072c & 1) == 0) {
          DAT_123c06c0 = 0;
          DAT_123c06d0 = 0;
          DAT_123c06d4 = 0;
          _DAT_123c06d8 = 0;
          DAT_123c06dc = 0;
          DAT_123c072c = DAT_123c072c | 1;
          DAT_123c06bc = &PTR_FUN_11de3684;
          DAT_123c06e0 = _DAT_11de9ae0;
          DAT_123c06e4 = _UNK_11de9ae4;
          uRam123c06e8 = _UNK_11de9ae8;
          DAT_123c06ec = _UNK_11de9aec;
          DAT_123c06f0 = 1;
          DAT_123c06c4 = piVar3;
          _DAT_123c06c8 = piVar3;
          _DAT_123c06cc = piVar3;
          FUN_11a8911f(&LAB_11ca1330);
        }
        piVar3 = (int *)&DAT_123c06bc;
      }
    }
    param_2 = &PTR_FUN_11da54a8;
    if (((int)uVar5 < 0) || (piVar3[6] - piVar3[5] >> 2 <= (int)uVar5)) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(piVar3[5] + uVar5 * 4);
    }
    if ((param_1 != 0) && (*(int *)(param_1 + 100) == iVar1)) {
      piVar3 = (int *)puVar2[1];
      if (piVar3 != (int *)puVar2[2]) {
        *piVar3 = param_1;
        puVar2[1] = puVar2[1] + 4;
        uVar5 = uVar5 + 1;
        goto LAB_11537200;
      }
      FUN_11537e70(piVar3,&param_1,(int)&param_2 + 3,1,1);
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



/* --- CIllustrateBookInfo::GetManagers_1168f680 @ 1168f680 --- */
// [RE-AUTO c3]
// id: CIllustrateBookInfo::GetManagers
// strings:
//   ""CIllustrateBookInfo""
//   ""CIllustrateBookInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookInfo::GetManagers
   strings:
     ""CIllustrateBookInfo""
     ""CIllustrateBookInfo::GetManagers"" */

void __fastcall CIllustrateBookInfo__GetManagers_1168f680(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar5 = 0;
  piVar1 = (int *)FUN_109cbf00(0,"CIllustrateBookInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    while( true ) {
      local_8 = &PTR_FUN_11de357c;
      if ((DAT_123c0768 & 1) == 0) {
        DAT_123c0768 = DAT_123c0768 | 1;
        FUN_102500e0("CIllustrateBookInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c200);
      }
      puVar3 = (undefined4 *)*DAT_123c0788;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CIllustrateBookInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123c072c & 1) == 0) {
          DAT_123c06c0 = 0;
          DAT_123c06d0 = 0;
          DAT_123c06d4 = 0;
          _DAT_123c06d8 = 0;
          DAT_123c06dc = 0;
          DAT_123c072c = DAT_123c072c | 1;
          DAT_123c06bc = &PTR_FUN_11de3684;
          DAT_123c06e0 = _DAT_11de9ae0;
          DAT_123c06e4 = _UNK_11de9ae4;
          uRam123c06e8 = _UNK_11de9ae8;
          DAT_123c06ec = _UNK_11de9aec;
          DAT_123c06f0 = 1;
          DAT_123c06c4 = puVar3;
          _DAT_123c06c8 = puVar3;
          _DAT_123c06cc = puVar3;
          FUN_11a8911f(&LAB_11ca6fb0);
        }
        puVar3 = &DAT_123c06bc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar5)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(puVar3[5] + iVar5 * 4);
      }
      iVar4 = (**(code **)(*param_1 + 0x18))();
      if (*(int *)(iVar6 + 0x18) == iVar4) break;
      iVar5 = iVar5 + 1;
      if (iVar2 <= iVar5) {
        return;
      }
    }
    param_1[0x29c] = iVar6;
  }
  return;
}



/* --- CIllustrateBookInfo::GetManagers_1172d2b0 @ 1172d2b0 --- */
// [RE-AUTO c3]
// id: CIllustrateBookInfo::GetManagers
// strings:
//   ""CIllustrateBookInfo""
//   ""CIllustrateBookInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookInfo::GetManagers
   strings:
     ""CIllustrateBookInfo""
     ""CIllustrateBookInfo::GetManagers"" */

void __fastcall CIllustrateBookInfo__GetManagers_1172d2b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  piVar2 = (int *)FUN_109cbf00(0,"CIllustrateBookInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    while( true ) {
      local_8 = &PTR_FUN_11de357c;
      if ((DAT_123c0768 & 1) == 0) {
        DAT_123c0768 = DAT_123c0768 | 1;
        FUN_102500e0("CIllustrateBookInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c200);
      }
      puVar4 = (undefined4 *)*DAT_123c0788;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CIllustrateBookInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c072c & 1) == 0) {
          DAT_123c06c0 = 0;
          DAT_123c06d0 = 0;
          DAT_123c06d4 = 0;
          _DAT_123c06d8 = 0;
          DAT_123c06dc = 0;
          DAT_123c072c = DAT_123c072c | 1;
          DAT_123c06bc = &PTR_FUN_11de3684;
          DAT_123c06e0 = _DAT_11de9ae0;
          DAT_123c06e4 = _UNK_11de9ae4;
          uRam123c06e8 = _UNK_11de9ae8;
          DAT_123c06ec = _UNK_11de9aec;
          DAT_123c06f0 = 1;
          DAT_123c06c4 = puVar4;
          _DAT_123c06c8 = puVar4;
          _DAT_123c06cc = puVar4;
          FUN_11a8911f(&LAB_11ca8f10);
        }
        puVar4 = &DAT_123c06bc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar6 < 0) || ((int)(puVar4[6] - puVar4[5]) >> 2 <= iVar6)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(puVar4[5] + iVar6 * 4);
      }
      iVar1 = *(int *)(param_1 + 0x18);
      iVar5 = (**(code **)(*piVar2 + 0x18))();
      if (iVar5 == iVar1) break;
      iVar6 = iVar6 + 1;
      if (iVar3 <= iVar6) {
        return;
      }
    }
    *(int **)(param_1 + 0x28) = piVar2;
  }
  return;
}



/* --- CIllustrateBookInfo::GetManagers_119c1390 @ 119c1390 --- */
// [RE-AUTO c3]
// id: CIllustrateBookInfo::GetManagers
// calls: CIllustrateTaskInfo::GetManagers_118097d0
// strings:
//   ""CIllustrateBookInfo""
//   ""CIllustrateBookInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookInfo::GetManagers
   calls: CIllustrateTaskInfo::GetManagers_118097d0
   strings:
     ""CIllustrateBookInfo""
     ""CIllustrateBookInfo::GetManagers"" */

void CIllustrateBookInfo__GetManagers_119c1390(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_109cbf00(0,"CIllustrateBookInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11de357c;
      if ((DAT_123c0768 & 1) == 0) {
        DAT_123c0768 = DAT_123c0768 | 1;
        FUN_102500e0("CIllustrateBookInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c200);
      }
      if (((*DAT_123c0788 == 0) &&
          (iVar4 = FUN_11679e10(&param_1,"CIllustrateBookInfo",0), iVar4 == 0)) &&
         ((DAT_123c072c & 1) == 0)) {
        DAT_123c06c0 = 0;
        DAT_123c06d0 = 0;
        DAT_123c06d4 = 0;
        _DAT_123c06d8 = 0;
        DAT_123c06dc = 0;
        DAT_123c072c = DAT_123c072c | 1;
        DAT_123c06bc = &PTR_FUN_11de3684;
        DAT_123c06e0 = _DAT_11de9ae0;
        DAT_123c06e4 = _UNK_11de9ae4;
        uRam123c06e8 = _UNK_11de9ae8;
        DAT_123c06ec = _UNK_11de9aec;
        DAT_123c06f0 = 1;
        DAT_123c06c4 = iVar4;
        _DAT_123c06c8 = iVar4;
        _DAT_123c06cc = iVar4;
        FUN_11a8911f(&LAB_11cb4830);
      }
      param_1 = &PTR_FUN_11da54a8;
      CIllustrateTaskInfo__GetManagers_118097d0(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



