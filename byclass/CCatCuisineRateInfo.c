// ===== class CCatCuisineRateInfo  (2 recovered methods) =====

/* --- CCatCuisineRateInfo::GetManagers @ 10a044e0 --- */
// [RE-AUTO c3]
// id: CCatCuisineRateInfo::GetManagers
// strings:
//   ""CCatCuisineRateInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatCuisineRateInfo::GetManagers
   strings:
     ""CCatCuisineRateInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCatCuisineRateInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c9348 & 1) == 0) {
    DAT_123c9348 = DAT_123c9348 | 1;
    _DAT_123c9360 = &DAT_123c9350;
    DAT_123c9364 = &DAT_123c9350;
    DAT_123c9350 = 0;
    FUN_100d83d0("CCatCuisineRateInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7dcc0);
  }
  return DAT_123c934c;
}



/* --- CCatCuisineRateInfo::GetManagers_11934380 @ 11934380 --- */
// [RE-AUTO c3]
// id: CCatCuisineRateInfo::GetManagers
// strings:
//   ""CCatCuisineRateInfo::GetManagers""
//   ""CCatCuisineRateInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatCuisineRateInfo::GetManagers
   strings:
     ""CCatCuisineRateInfo::GetManagers""
     ""CCatCuisineRateInfo"" */

void CCatCuisineRateInfo__GetManagers_11934380(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11de6d9c;
    if ((DAT_123c9348 & 1) == 0) {
      DAT_123c9348 = DAT_123c9348 | 1;
      FUN_102500e0("CCatCuisineRateInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7dcc0);
    }
    piVar2 = (int *)*DAT_123c934c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CCatCuisineRateInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c9370 & 1) == 0) {
          DAT_123c9378 = 0;
          DAT_123c9388 = 0;
          DAT_123c938c = 0;
          _DAT_123c9390 = 0;
          DAT_123c9394 = 0;
          DAT_123c9370 = DAT_123c9370 | 1;
          DAT_123c9374 = &PTR_FUN_11de6da4;
          DAT_123c9398 = _DAT_11de9ae0;
          DAT_123c939c = _UNK_11de9ae4;
          uRam123c93a0 = _UNK_11de9ae8;
          DAT_123c93a4 = _UNK_11de9aec;
          DAT_123c93a8 = 1;
          DAT_123c937c = piVar2;
          _DAT_123c9380 = piVar2;
          _DAT_123c9384 = piVar2;
          FUN_11a8911f(&LAB_11cb2430);
        }
        piVar2 = (int *)&DAT_123c9374;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11de6d9c;
    if ((DAT_123c9348 & 1) == 0) {
      DAT_123c9348 = DAT_123c9348 | 1;
      FUN_102500e0("CCatCuisineRateInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7dcc0);
    }
    piVar2 = (int *)*DAT_123c934c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CCatCuisineRateInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c9370 & 1) == 0) {
          DAT_123c9378 = 0;
          DAT_123c9388 = 0;
          DAT_123c938c = 0;
          _DAT_123c9390 = 0;
          DAT_123c9394 = 0;
          DAT_123c9370 = DAT_123c9370 | 1;
          DAT_123c9374 = &PTR_FUN_11de6da4;
          DAT_123c9398 = _DAT_11de9ae0;
          DAT_123c939c = _UNK_11de9ae4;
          uRam123c93a0 = _UNK_11de9ae8;
          DAT_123c93a4 = _UNK_11de9aec;
          DAT_123c93a8 = 1;
          DAT_123c937c = piVar2;
          _DAT_123c9380 = piVar2;
          _DAT_123c9384 = piVar2;
          FUN_11a8911f(&LAB_11cb2430);
        }
        piVar2 = (int *)&DAT_123c9374;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CBuffInfo__GetManagers_11a21800(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



