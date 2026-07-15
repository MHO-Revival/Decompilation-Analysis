// ===== class CMartCutCardInfo  (2 recovered methods) =====

/* --- CMartCutCardInfo::GetManagers @ 1092cc70 --- */
// [RE-AUTO c3]
// id: CMartCutCardInfo::GetManagers
// strings:
//   ""CMartCutCardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartCutCardInfo::GetManagers
   strings:
     ""CMartCutCardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMartCutCardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8358 & 1) == 0) {
    DAT_123c8358 = DAT_123c8358 | 1;
    _DAT_123c8370 = &DAT_123c8360;
    DAT_123c8374 = &DAT_123c8360;
    DAT_123c8360 = 0;
    FUN_100d83d0("CMartCutCardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77e80);
  }
  return DAT_123c835c;
}



/* --- CMartCutCardInfo::GetManagers_119749e0 @ 119749e0 --- */
// [RE-AUTO c3]
// id: CMartCutCardInfo::GetManagers
// calls: CMartGoodsInfo::GetManagers_1181cc60
// strings:
//   ""CMartCutCardInfo""
//   ""CMartCutCardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartCutCardInfo::GetManagers
   calls: CMartGoodsInfo::GetManagers_1181cc60
   strings:
     ""CMartCutCardInfo""
     ""CMartCutCardInfo::GetManagers"" */

void CMartCutCardInfo__GetManagers_119749e0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10939300(0,"CMartCutCardInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11ddaaf4;
      if ((DAT_123c8358 & 1) == 0) {
        DAT_123c8358 = DAT_123c8358 | 1;
        FUN_102500e0("CMartCutCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77e80);
      }
      puVar4 = (undefined4 *)*DAT_123c835c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CMartCutCardInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c8414 & 1) == 0) {
          DAT_123c841c = 0;
          DAT_123c842c = 0;
          DAT_123c8430 = 0;
          _DAT_123c8434 = 0;
          uRam123c8438 = 0;
          DAT_123c8414 = DAT_123c8414 | 1;
          DAT_123c8418 = &PTR_FUN_11ddac40;
          _DAT_123c843c = _DAT_11de9ae0;
          uRam123c8440 = _UNK_11de9ae4;
          uRam123c8444 = _UNK_11de9ae8;
          uRam123c8448 = _UNK_11de9aec;
          DAT_123c844c = 1;
          DAT_123c8420 = puVar4;
          _DAT_123c8424 = puVar4;
          _DAT_123c8428 = puVar4;
          FUN_11a8911f(&LAB_11cb31e0);
        }
        puVar4 = &DAT_123c8418;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CMartGoodsInfo__GetManagers_1181cc60(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



