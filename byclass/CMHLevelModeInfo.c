// ===== class CMHLevelModeInfo  (3 recovered methods) =====

/* --- CMHLevelModeInfo::GetManagers @ 109dcba0 --- */
// [RE-AUTO c3]
// id: CMHLevelModeInfo::GetManagers
// strings:
//   ""CMHLevelModeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelModeInfo::GetManagers
   strings:
     ""CMHLevelModeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMHLevelModeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c9018 & 1) == 0) {
    DAT_123c9018 = DAT_123c9018 | 1;
    _DAT_123c9010 = &DAT_123c9000;
    DAT_123c9014 = &DAT_123c9000;
    DAT_123c9000 = 0;
    FUN_100d83d0("CMHLevelModeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c8e0);
  }
  return DAT_123c8ffc;
}



/* --- CMHLevelModeInfo::GetManagers_116b3350 @ 116b3350 --- */
// [RE-AUTO c3]
// id: CMHLevelModeInfo::GetManagers
// strings:
//   ""CMHLevelModeInfo::GetManagers""
//   ""CMHLevelModeInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelModeInfo::GetManagers
   strings:
     ""CMHLevelModeInfo::GetManagers""
     ""CMHLevelModeInfo"" */

uint __fastcall CMHLevelModeInfo__GetManagers_116b3350(undefined **param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_8;
  
  local_8 = param_1;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x18))();
  if (-1 < (int)puVar2) {
    puVar1 = param_1[8];
    local_8 = &PTR_FUN_11de3a90;
    if ((DAT_123c9018 & 1) == 0) {
      DAT_123c9018 = DAT_123c9018 | 1;
      FUN_102500e0("CMHLevelModeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7c8e0);
    }
    puVar3 = (undefined4 *)*DAT_123c8ffc;
    puVar2 = DAT_123c8ffc;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelModeInfo",0);
      puVar2 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar2 = DAT_123c9024;
        if (((uint)DAT_123c9024 & 1) == 0) {
          DAT_123c8fc8 = 0;
          DAT_123c8fd8 = 0;
          DAT_123c8fdc = 0;
          _DAT_123c8fe0 = 0;
          DAT_123c8fe4 = 0;
          DAT_123c9024 = (undefined4 *)((uint)DAT_123c9024 | 1);
          _DAT_123c8fc4 = &PTR_FUN_11de3a98;
          DAT_123c8fe8 = _DAT_11de9ae0;
          DAT_123c8fec = _UNK_11de9ae4;
          uRam123c8ff0 = _UNK_11de9ae8;
          DAT_123c8ff4 = _UNK_11de9aec;
          DAT_123c8ff8 = 1;
          DAT_123c8fcc = puVar3;
          _DAT_123c8fd0 = puVar3;
          _DAT_123c8fd4 = puVar3;
          puVar2 = (undefined4 *)FUN_11a8911f(&LAB_11ca75f0);
        }
        puVar3 = (undefined4 *)&DAT_123c8fc4;
      }
    }
    if (((puVar1 != (undefined *)0xffffffff) &&
        (((puVar1 != (undefined *)0x0 || (puVar3[0xc] == 0)) && (puVar3[10] != 0)))) &&
       ((iVar4 = (int)puVar1 - puVar3[0xc], -1 < iVar4 && (iVar4 < (int)puVar3[9])))) {
      puVar2 = *(undefined4 **)(puVar3[8] + (iVar4 / (int)puVar3[10]) * 4);
      if ((puVar2 != (undefined4 *)0x0) && (puVar2[iVar4 % (int)puVar3[10]] != 0)) {
        return CONCAT31((int3)((uint)puVar2 >> 8),1);
      }
    }
  }
  return (uint)puVar2 & 0xffffff00;
}



/* --- CMHLevelModeInfo::GetManagers_118e61d0 @ 118e61d0 --- */
// [RE-AUTO c3]
// id: CMHLevelModeInfo::GetManagers
// strings:
//   ""CMHLevelModeInfo""
//   ""CMHLevelModeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelModeInfo::GetManagers
   strings:
     ""CMHLevelModeInfo""
     ""CMHLevelModeInfo::GetManagers"" */

void CMHLevelModeInfo__GetManagers_118e61d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_109dd690(0,"CMHLevelModeInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11de3a90;
      if ((DAT_123c9018 & 1) == 0) {
        DAT_123c9018 = DAT_123c9018 | 1;
        FUN_102500e0("CMHLevelModeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c8e0);
      }
      puVar4 = (undefined *)*DAT_123c8ffc;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CMHLevelModeInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c9024 & 1) == 0) {
          DAT_123c8fc8 = 0;
          DAT_123c8fd8 = 0;
          DAT_123c8fdc = 0;
          _DAT_123c8fe0 = 0;
          DAT_123c8fe4 = 0;
          DAT_123c9024 = DAT_123c9024 | 1;
          _DAT_123c8fc4 = &PTR_FUN_11de3a98;
          DAT_123c8fe8 = _DAT_11de9ae0;
          DAT_123c8fec = _UNK_11de9ae4;
          uRam123c8ff0 = _UNK_11de9ae8;
          DAT_123c8ff4 = _UNK_11de9aec;
          DAT_123c8ff8 = 1;
          DAT_123c8fcc = puVar4;
          _DAT_123c8fd0 = puVar4;
          _DAT_123c8fd4 = puVar4;
          FUN_11a8911f(&LAB_11cb0570);
        }
        puVar4 = &DAT_123c8fc4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CMHLevelInfo__GetManagers_119ec430(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



