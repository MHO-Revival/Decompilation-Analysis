// ===== class CManufactureInfo  (2 recovered methods) =====

/* --- CManufactureInfo::GetManagers @ 10813be0 --- */
// [RE-AUTO c3]
// id: CManufactureInfo::GetManagers
// strings:
//   ""CManufactureInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CManufactureInfo::GetManagers
   strings:
     ""CManufactureInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CManufactureInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c73fc & 1) == 0) {
    DAT_123c73fc = DAT_123c73fc | 1;
    _DAT_123c7414 = &DAT_123c7404;
    DAT_123c7418 = &DAT_123c7404;
    DAT_123c7404 = 0;
    FUN_100d83d0("CManufactureInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71d00);
  }
  return DAT_123c7400;
}



/* --- CManufactureInfo::GetManagers_119003d0 @ 119003d0 --- */
// [RE-AUTO c3]
// id: CManufactureInfo::GetManagers
// strings:
//   ""CManufactureInfo::GetManagers""
//   ""CManufactureInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CManufactureInfo::GetManagers
   strings:
     ""CManufactureInfo::GetManagers""
     ""CManufactureInfo"" */

void CManufactureInfo__GetManagers_119003d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dcbd1c;
    if ((DAT_123c73fc & 1) == 0) {
      DAT_123c73fc = DAT_123c73fc | 1;
      FUN_102500e0("CManufactureInfo::GetManagers");
      FUN_11a8911f(&LAB_11c71d00);
    }
    piVar2 = (int *)*DAT_123c7400;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CManufactureInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c7424 & 1) == 0) {
          DAT_123c742c = 0;
          DAT_123c743c = 0;
          DAT_123c7440 = 0;
          _DAT_123c7444 = 0;
          DAT_123c7448 = 0;
          DAT_123c7424 = DAT_123c7424 | 1;
          DAT_123c7428 = &PTR_FUN_11dcbd38;
          DAT_123c744c = _DAT_11de9ae0;
          DAT_123c7450 = _UNK_11de9ae4;
          uRam123c7454 = _UNK_11de9ae8;
          DAT_123c7458 = _UNK_11de9aec;
          DAT_123c745c = 1;
          DAT_123c7430 = piVar2;
          _DAT_123c7434 = piVar2;
          _DAT_123c7438 = piVar2;
          FUN_11a8911f(&LAB_11cb0cf0);
        }
        piVar2 = (int *)&DAT_123c7428;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11dcbd1c;
    if ((DAT_123c73fc & 1) == 0) {
      DAT_123c73fc = DAT_123c73fc | 1;
      FUN_102500e0("CManufactureInfo::GetManagers");
      FUN_11a8911f(&LAB_11c71d00);
    }
    piVar2 = (int *)*DAT_123c7400;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CManufactureInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c7424 & 1) == 0) {
          DAT_123c742c = 0;
          DAT_123c743c = 0;
          DAT_123c7440 = 0;
          _DAT_123c7444 = 0;
          DAT_123c7448 = 0;
          DAT_123c7424 = DAT_123c7424 | 1;
          DAT_123c7428 = &PTR_FUN_11dcbd38;
          DAT_123c744c = _DAT_11de9ae0;
          DAT_123c7450 = _UNK_11de9ae4;
          uRam123c7454 = _UNK_11de9ae8;
          DAT_123c7458 = _UNK_11de9aec;
          DAT_123c745c = 1;
          DAT_123c7430 = piVar2;
          _DAT_123c7434 = piVar2;
          _DAT_123c7438 = piVar2;
          FUN_11a8911f(&LAB_11cb0cf0);
        }
        piVar2 = (int *)&DAT_123c7428;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_119fe510(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



