// ===== class CMaterialExchangeInfo  (2 recovered methods) =====

/* --- CMaterialExchangeInfo::GetManagers @ 1097e450 --- */
// [RE-AUTO c3]
// id: CMaterialExchangeInfo::GetManagers
// strings:
//   ""CMaterialExchangeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMaterialExchangeInfo::GetManagers
   strings:
     ""CMaterialExchangeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMaterialExchangeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c052c & 1) == 0) {
    DAT_123c052c = DAT_123c052c | 1;
    _DAT_123c0544 = &DAT_123c0534;
    DAT_123c0548 = &DAT_123c0534;
    DAT_123c0534 = 0;
    FUN_100d83d0("CMaterialExchangeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7a340);
  }
  return DAT_123c0530;
}



/* --- CMaterialExchangeInfo::GetManagers_1198e3d0 @ 1198e3d0 --- */
// [RE-AUTO c3]
// id: CMaterialExchangeInfo::GetManagers
// strings:
//   ""CMaterialExchangeInfo""
//   ""CMaterialExchangeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMaterialExchangeInfo::GetManagers
   strings:
     ""CMaterialExchangeInfo""
     ""CMaterialExchangeInfo::GetManagers"" */

void CMaterialExchangeInfo__GetManagers_1198e3d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1097f6b0(0,"CMaterialExchangeInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11ddf038;
      if ((DAT_123c052c & 1) == 0) {
        DAT_123c052c = DAT_123c052c | 1;
        FUN_102500e0("CMaterialExchangeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7a340);
      }
      puVar4 = (undefined *)*DAT_123c0530;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CMaterialExchangeInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c04e8 & 1) == 0) {
          DAT_123c04f0 = 0;
          DAT_123c0500 = 0;
          DAT_123c0504 = 0;
          _DAT_123c0508 = 0;
          DAT_123c050c = 0;
          DAT_123c04e8 = DAT_123c04e8 | 1;
          _DAT_123c04ec = &PTR_FUN_11ddf040;
          DAT_123c0510 = _DAT_11de9ae0;
          DAT_123c0514 = _UNK_11de9ae4;
          uRam123c0518 = _UNK_11de9ae8;
          DAT_123c051c = _UNK_11de9aec;
          DAT_123c0520 = 1;
          DAT_123c04f4 = puVar4;
          _DAT_123c04f8 = puVar4;
          _DAT_123c04fc = puVar4;
          FUN_11a8911f(&LAB_11cb39c0);
        }
        puVar4 = &DAT_123c04ec;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a5f280(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



