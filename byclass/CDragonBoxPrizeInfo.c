// ===== class CDragonBoxPrizeInfo  (5 recovered methods) =====

/* --- CDragonBoxPrizeInfo::GetManagers @ 1092cef0 --- */
// [RE-AUTO c3]
// id: CDragonBoxPrizeInfo::GetManagers
// strings:
//   ""CDragonBoxPrizeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxPrizeInfo::GetManagers
   strings:
     ""CDragonBoxPrizeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDragonBoxPrizeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8378 & 1) == 0) {
    DAT_123c8378 = DAT_123c8378 | 1;
    _DAT_123c8390 = &DAT_123c8380;
    DAT_123c8394 = &DAT_123c8380;
    DAT_123c8380 = 0;
    FUN_100d83d0("CDragonBoxPrizeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77eb0);
  }
  return DAT_123c837c;
}



/* --- CDragonBoxPrizeInfo::GetManagers_1155bf80 @ 1155bf80 --- */
// [RE-AUTO c3]
// id: CDragonBoxPrizeInfo::GetManagers
// strings:
//   ""CDragonBoxPrizeInfo::GetManagers""
//   ""CDragonBoxPrizeInfo""

/* [RE-AUTO c3]
   id: CDragonBoxPrizeInfo::GetManagers
   strings:
     ""CDragonBoxPrizeInfo::GetManagers""
     ""CDragonBoxPrizeInfo"" */

void __fastcall CDragonBoxPrizeInfo__GetManagers_1155bf80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_6c [8];
  int local_64;
  int local_58;
  undefined **local_c;
  int *local_8;
  
  piVar6 = (int *)param_1[0x13];
  local_8 = param_1;
  if (piVar6 != (int *)param_1[0x14]) {
    do {
      piVar1 = (int *)*piVar6;
      if ((piVar1 != (int *)0x0) && (piVar1[1] == 1)) {
        piVar1[1] = 2;
        iVar5 = *piVar1;
        local_c = &PTR_FUN_11ddaad4;
        if ((DAT_123c8378 & 1) == 0) {
          DAT_123c8378 = DAT_123c8378 | 1;
          FUN_102500e0("CDragonBoxPrizeInfo::GetManagers");
          FUN_11a8911f(&LAB_11c77eb0);
        }
        puVar4 = (undefined *)*DAT_123c837c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_c,"CDragonBoxPrizeInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123c8450 & 1) == 0) {
            DAT_123c8450 = DAT_123c8450 | 1;
            FUN_1093a890();
            FUN_11a8911f(&LAB_11ca20a0);
          }
          puVar4 = &DAT_123c8454;
        }
        local_c = &PTR_FUN_11da54a8;
        if (((iVar5 == -1) ||
            (((iVar5 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
             (iVar2 = *(int *)(puVar4 + 0x28), param_1 = local_8, iVar2 == 0)))) ||
           ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), iVar5 < 0 ||
            (*(int *)(puVar4 + 0x24) <= iVar5)))) {
LAB_1155c082:
          iVar5 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar2) * 4);
          if (iVar3 == 0) goto LAB_1155c082;
          iVar5 = *(int *)(iVar3 + (iVar5 % iVar2) * 4);
        }
        if (iVar5 != 0) {
          FUN_109cf680(0x50,4);
          FUN_1149ad80(*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x28),2);
          (**(code **)(**(int **)(*param_1 + 0x2d1c) + 0x50))(local_6c);
          FUN_109d0f10();
          FUN_104765b0();
          if (local_58 != 0) {
            FUN_10c3d5d0(local_58);
          }
          if (local_64 != 0) {
            FUN_10c3d5d0(local_64);
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)param_1[0x14]);
  }
  return;
}



/* --- CDragonBoxPrizeInfo::GetManagers_118189e0 @ 118189e0 --- */
// [RE-AUTO c3]
// id: CDragonBoxPrizeInfo::GetManagers
// strings:
//   ""CDragonBoxPrizeInfo""
//   ""CDragonBoxPrizeInfo::GetManagers""
//   ""CDragonBoxBlackFaceGiftInfo::GetManagers""
//   ""CDragonBoxBlackFaceGiftInfo""
//   ""CDragonBoxShop::GetManagers""
//   ""CDragonBoxShop""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxPrizeInfo::GetManagers
   strings:
     ""CDragonBoxPrizeInfo""
     ""CDragonBoxPrizeInfo::GetManagers""
     ""CDragonBoxBlackFaceGiftInfo::GetManagers""
     ""CDragonBoxBlackFaceGiftInfo""
     ""CDragonBoxShop::GetManagers""
     ""CDragonBoxShop""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __fastcall CDragonBoxPrizeInfo__GetManagers_118189e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  undefined **local_10;
  undefined **local_c;
  undefined1 local_5;
  
  iVar6 = 0;
  local_14 = param_1;
  piVar1 = (int *)FUN_10939550(0,"CDragonBoxPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11ddaad4;
      if ((DAT_123c8378 & 1) == 0) {
        DAT_123c8378 = DAT_123c8378 | 1;
        FUN_102500e0("CDragonBoxPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77eb0);
      }
      puVar3 = (undefined *)*DAT_123c837c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CDragonBoxPrizeInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123c8450 & 1) == 0) {
          DAT_123c8458 = 0;
          DAT_123c8468 = 0;
          DAT_123c846c = 0;
          _DAT_123c8470 = 0;
          DAT_123c8474 = 0;
          DAT_123c8450 = DAT_123c8450 | 1;
          _DAT_123c8454 = &PTR_FUN_11ddab48;
          DAT_123c8478 = _DAT_11de9ae0;
          DAT_123c847c = _UNK_11de9ae4;
          uRam123c8480 = _UNK_11de9ae8;
          DAT_123c8484 = _UNK_11de9aec;
          DAT_123c8488 = 1;
          DAT_123c845c = puVar3;
          _DAT_123c8460 = puVar3;
          _DAT_123c8464 = puVar3;
          FUN_11a8911f(&LAB_11cabf00);
        }
        puVar3 = &DAT_123c8454;
      }
      if ((iVar6 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar6)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar6 * 4);
      }
      if (local_c[6] == *(undefined **)(param_1 + 0x10)) {
        puVar3 = local_c[5];
        if (puVar3 == (undefined *)0x1) {
          piVar1 = *(int **)(param_1 + 0x5c);
          if (piVar1 == *(int **)(param_1 + 0x60)) {
LAB_11818b6b:
            FUN_1181ac30(piVar1,&local_c,&local_5,1,1);
          }
          else {
            *piVar1 = (int)local_c;
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 4;
          }
        }
        else if (puVar3 == (undefined *)0x2) {
          piVar1 = *(int **)(param_1 + 0x44);
          if (piVar1 == *(int **)(param_1 + 0x48)) goto LAB_11818b6b;
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
        }
        else if (puVar3 == (undefined *)0x3) {
          piVar1 = *(int **)(param_1 + 0x50);
          if (piVar1 == *(int **)(param_1 + 0x54)) goto LAB_11818b6b;
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  piVar7 = (int *)0x0;
  piVar1 = (int *)0x0;
  local_54 = 0;
  piVar8 = (int *)0x0;
  local_50 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_10 = (undefined **)0x0;
  local_c = &PTR_FUN_11d4d084;
  if ((DAT_123967e0 & 1) == 0) {
    DAT_123967e0 = DAT_123967e0 | 1;
    FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
    FUN_11a8911f(&LAB_11cabfc0);
  }
  piVar4 = (int *)*DAT_123967c4;
  if ((piVar4 == (int *)0x0) &&
     (piVar4 = (int *)FUN_11679e10(&local_c,"CDragonBoxBlackFaceGiftInfo",0), piVar4 == (int *)0x0))
  {
    if ((DAT_12396a5c & 1) == 0) {
      DAT_12396a28 = 0;
      DAT_12396a38 = 0;
      DAT_12396a3c = 0;
      _DAT_12396a40 = 0;
      uRam12396a44 = 0;
      DAT_12396a5c = DAT_12396a5c | 1;
      DAT_12396a2c = (undefined4 *)0x0;
      _DAT_12396a30 = (undefined4 *)0x0;
      _DAT_12396a34 = (undefined4 *)0x0;
      DAT_12396a24 = &PTR_FUN_11d4d0d4;
      _DAT_12396a48 = _DAT_11de9ae0;
      uRam12396a4c = _UNK_11de9ae4;
      uRam12396a50 = _UNK_11de9ae8;
      uRam12396a54 = _UNK_11de9aec;
      DAT_12396a58 = 1;
      FUN_11a8911f(&LAB_11cabea0);
    }
    piVar4 = (int *)&DAT_12396a24;
  }
  local_c = &PTR_FUN_11da54a8;
  local_18 = (**(code **)(*piVar4 + 0x28))();
  if (0 < local_18) {
    do {
      local_c = &PTR_FUN_11d4d084;
      if ((DAT_123967e0 & 1) == 0) {
        DAT_123967e0 = DAT_123967e0 | 1;
        FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
        FUN_11a8911f(&LAB_11cabfc0);
      }
      puVar5 = (undefined4 *)*DAT_123967c4;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CDragonBoxBlackFaceGiftInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_12396a5c & 1) == 0) {
          DAT_12396a28 = 0;
          DAT_12396a38 = 0;
          DAT_12396a3c = 0;
          _DAT_12396a40 = 0;
          uRam12396a44 = 0;
          DAT_12396a5c = DAT_12396a5c | 1;
          DAT_12396a24 = &PTR_FUN_11d4d0d4;
          _DAT_12396a48 = _DAT_11de9ae0;
          uRam12396a4c = _UNK_11de9ae4;
          uRam12396a50 = _UNK_11de9ae8;
          uRam12396a54 = _UNK_11de9aec;
          DAT_12396a58 = 1;
          DAT_12396a2c = puVar5;
          _DAT_12396a30 = puVar5;
          _DAT_12396a34 = puVar5;
          FUN_11a8911f(&LAB_11cabea0);
        }
        puVar5 = &DAT_12396a24;
      }
      if (((int)local_10 < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= (int)local_10)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(puVar5[5] + (int)local_10 * 4);
      }
      if (local_c != (undefined **)0x0) {
        puVar3 = local_c[5];
        if (puVar3 == *(undefined **)(local_14 + 0x6c)) {
          if (piVar7 == local_4c) {
            FUN_1181ab10(piVar7,&local_c,&local_5,1,1);
            piVar7 = local_50;
          }
          else {
            *piVar7 = (int)local_c;
            local_50 = piVar7 + 1;
            piVar7 = local_50;
          }
        }
        else if (puVar3 == *(undefined **)(local_14 + 0x70)) {
          if (piVar8 == local_40) {
            FUN_1181ab10(piVar8,&local_c,&local_5,1,1);
            piVar8 = local_44;
          }
          else {
            *piVar8 = (int)local_c;
            local_44 = piVar8 + 1;
            piVar8 = local_44;
          }
        }
        else if (puVar3 == *(undefined **)(local_14 + 0x74)) {
          if (piVar1 == local_34) {
            FUN_1181ab10(piVar1,&local_c,&local_5,1,1);
            piVar1 = local_38;
          }
          else {
            *piVar1 = (int)local_c;
            local_38 = piVar1 + 1;
            piVar1 = local_38;
          }
        }
      }
      local_10 = (undefined **)((int)local_10 + 1);
    } while ((int)local_10 < local_18);
  }
  iVar2 = local_14;
  local_18 = 1;
  FUN_118166c0(&local_18,&local_54);
  FUN_1155b7a0();
  local_18 = 2;
  FUN_118166c0(&local_18,&local_48);
  FUN_1155b7a0();
  local_18 = 3;
  FUN_118166c0(&local_18,&local_3c);
  FUN_1155b7a0();
  piVar1 = (int *)0x0;
  piVar7 = (int *)0x0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_c = (undefined **)0x0;
  local_10 = &PTR_FUN_11d361e0;
  if ((DAT_122e0374 & 1) == 0) {
    DAT_122e0374 = DAT_122e0374 | 1;
    FUN_102500e0("CDragonBoxShop::GetManagers");
    FUN_11a8911f(&LAB_11ca62f0);
  }
  piVar8 = (int *)*DAT_122e0358;
  if ((piVar8 == (int *)0x0) &&
     (piVar8 = (int *)FUN_11679e10(&local_10,"CDragonBoxShop",0), piVar8 == (int *)0x0)) {
    if ((DAT_122e03b8 & 1) == 0) {
      DAT_122e0384 = 0;
      DAT_122e0394 = 0;
      DAT_122e0398 = 0;
      _DAT_122e039c = 0;
      uRam122e03a0 = 0;
      DAT_122e03b8 = DAT_122e03b8 | 1;
      DAT_122e0388 = (undefined4 *)0x0;
      _DAT_122e038c = (undefined4 *)0x0;
      _DAT_122e0390 = (undefined4 *)0x0;
      DAT_122e0380 = &PTR_FUN_11d36214;
      _DAT_122e03a4 = _DAT_11de9ae0;
      uRam122e03a8 = _UNK_11de9ae4;
      uRam122e03ac = _UNK_11de9ae8;
      uRam122e03b0 = _UNK_11de9aec;
      DAT_122e03b4 = 1;
      FUN_11a8911f(&LAB_11cabf60);
    }
    piVar8 = (int *)&DAT_122e0380;
  }
  local_10 = &PTR_FUN_11da54a8;
  local_18 = (**(code **)(*piVar8 + 0x28))();
  if (0 < local_18) {
    do {
      local_10 = &PTR_FUN_11d361e0;
      if ((DAT_122e0374 & 1) == 0) {
        DAT_122e0374 = DAT_122e0374 | 1;
        _DAT_122e036c = &DAT_122e035c;
        DAT_122e0370 = &DAT_122e035c;
        DAT_122e035c = 0;
        FUN_100d9260("CDragonBoxShop::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_122e0358 = (undefined4 *)FUN_100dfd90(DAT_122e0370);
        if (DAT_122e0358 == (undefined4 *)0x0) {
          DAT_122e0358 = (undefined4 *)FUN_100dde50(4);
          *DAT_122e0358 = 0;
          FUN_100dfdc0(DAT_122e0370,DAT_122e0358);
        }
        FUN_11a8911f(&LAB_11ca62f0);
      }
      puVar5 = (undefined4 *)*DAT_122e0358;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_10,"CDragonBoxShop",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_122e03b8 & 1) == 0) {
          DAT_122e0384 = 0;
          DAT_122e0394 = 0;
          DAT_122e0398 = 0;
          _DAT_122e039c = 0;
          uRam122e03a0 = 0;
          DAT_122e03b8 = DAT_122e03b8 | 1;
          DAT_122e0380 = &PTR_FUN_11d36214;
          _DAT_122e03a4 = _DAT_11de9ae0;
          uRam122e03a8 = _UNK_11de9ae4;
          uRam122e03ac = _UNK_11de9ae8;
          uRam122e03b0 = _UNK_11de9aec;
          DAT_122e03b4 = 1;
          DAT_122e0388 = puVar5;
          _DAT_122e038c = puVar5;
          _DAT_122e0390 = puVar5;
          FUN_11a8911f(&LAB_11cabf60);
        }
        puVar5 = &DAT_122e0380;
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((int)local_c < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= (int)local_c)) {
        local_14 = 0;
      }
      else {
        local_14 = *(int *)(puVar5[5] + (int)local_c * 4);
      }
      if (local_14 != 0) {
        if (*(int *)(local_14 + 0x34) == *(int *)(iVar2 + 0x78)) {
          if (piVar1 == local_28) {
            FUN_1181ad50(piVar1,&local_14,&local_5,1,1);
            piVar1 = local_2c;
          }
          else {
            *piVar1 = local_14;
            local_2c = piVar1 + 1;
            piVar1 = local_2c;
          }
        }
        else if (*(int *)(local_14 + 0x34) == *(int *)(iVar2 + 0x80)) {
          if (piVar7 == local_1c) {
            FUN_1181ad50(piVar7,&local_14,&local_5,1,1);
            piVar7 = local_20;
          }
          else {
            *piVar7 = local_14;
            local_20 = piVar7 + 1;
            piVar7 = local_20;
          }
        }
      }
      local_c = (undefined **)((int)local_c + 1);
    } while ((int)local_c < local_18);
  }
  local_18 = 1;
  FUN_11816750(&local_18,&local_30);
  FUN_1155b880();
  local_18 = 2;
  FUN_11816750(&local_18,&local_24);
  FUN_1155b880();
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_3c != 0) {
    FUN_10c3d5d0(local_3c);
  }
  if (local_48 != 0) {
    FUN_10c3d5d0(local_48);
  }
  if (local_54 != 0) {
    FUN_10c3d5d0(local_54);
  }
  return;
}



/* --- CDragonBoxPrizeInfo::GetManagers_11911c70 @ 11911c70 --- */
// [RE-AUTO c3]
// id: CDragonBoxPrizeInfo::GetManagers
// strings:
//   ""CDragonBoxPrizeInfo""
//   ""CDragonBoxPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxPrizeInfo::GetManagers
   strings:
     ""CDragonBoxPrizeInfo""
     ""CDragonBoxPrizeInfo::GetManagers"" */

void CDragonBoxPrizeInfo__GetManagers_11911c70(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10939550(0,"CDragonBoxPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaad4;
      if ((DAT_123c8378 & 1) == 0) {
        DAT_123c8378 = DAT_123c8378 | 1;
        FUN_102500e0("CDragonBoxPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77eb0);
      }
      if (((*DAT_123c837c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8450 & 1) == 0)) {
        DAT_123c8458 = 0;
        DAT_123c8468 = 0;
        DAT_123c846c = 0;
        _DAT_123c8470 = 0;
        DAT_123c8474 = 0;
        DAT_123c8450 = DAT_123c8450 | 1;
        _DAT_123c8454 = &PTR_FUN_11ddab48;
        DAT_123c8478 = _DAT_11de9ae0;
        DAT_123c847c = _UNK_11de9ae4;
        uRam123c8480 = _UNK_11de9ae8;
        DAT_123c8484 = _UNK_11de9aec;
        DAT_123c8488 = 1;
        DAT_123c845c = iVar3;
        _DAT_123c8460 = iVar3;
        _DAT_123c8464 = iVar3;
        FUN_11a8911f(&LAB_11cb1620);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a06de0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxPrizeInfo::GetManagers_11911dc0 @ 11911dc0 --- */
// [RE-AUTO c3]
// id: CDragonBoxPrizeInfo::GetManagers
// strings:
//   ""CDragonBoxPrizeInfo""
//   ""CDragonBoxPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxPrizeInfo::GetManagers
   strings:
     ""CDragonBoxPrizeInfo""
     ""CDragonBoxPrizeInfo::GetManagers"" */

void CDragonBoxPrizeInfo__GetManagers_11911dc0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10939550(0,"CDragonBoxPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaad4;
      if ((DAT_123c8378 & 1) == 0) {
        DAT_123c8378 = DAT_123c8378 | 1;
        FUN_102500e0("CDragonBoxPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77eb0);
      }
      if (((*DAT_123c837c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8450 & 1) == 0)) {
        DAT_123c8458 = 0;
        DAT_123c8468 = 0;
        DAT_123c846c = 0;
        _DAT_123c8470 = 0;
        DAT_123c8474 = 0;
        DAT_123c8450 = DAT_123c8450 | 1;
        _DAT_123c8454 = &PTR_FUN_11ddab48;
        DAT_123c8478 = _DAT_11de9ae0;
        DAT_123c847c = _UNK_11de9ae4;
        uRam123c8480 = _UNK_11de9ae8;
        DAT_123c8484 = _UNK_11de9aec;
        DAT_123c8488 = 1;
        DAT_123c845c = iVar3;
        _DAT_123c8460 = iVar3;
        _DAT_123c8464 = iVar3;
        FUN_11a8911f(&LAB_11cb1620);
      }
      local_8 = &PTR_FUN_11da54a8;
      CDragonBoxInfo__GetManagers_11a06c20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



