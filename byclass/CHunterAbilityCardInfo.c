// ===== class CHunterAbilityCardInfo  (3 recovered methods) =====

/* --- CHunterAbilityCardInfo::GetManagers @ 108ba530 --- */
// [RE-AUTO c3]
// id: CHunterAbilityCardInfo::GetManagers
// strings:
//   ""CHunterAbilityCardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterAbilityCardInfo::GetManagers
   strings:
     ""CHunterAbilityCardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterAbilityCardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7a9c & 1) == 0) {
    DAT_123c7a9c = DAT_123c7a9c | 1;
    _DAT_123c7ab4 = &DAT_123c7aa4;
    DAT_123c7ab8 = &DAT_123c7aa4;
    DAT_123c7aa4 = 0;
    FUN_100d83d0("CHunterAbilityCardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75330);
  }
  return DAT_123c7aa0;
}



/* --- CHunterAbilityCardInfo::GetManagers_114df740 @ 114df740 --- */
// [RE-AUTO c3]
// id: CHunterAbilityCardInfo::GetManagers
// calls: memcpy
// strings:
//   ""CHunterAbilityCardInfo::GetManagers""
//   ""CHunterAbilityCardInfo""

/* [RE-AUTO c3]
   id: CHunterAbilityCardInfo::GetManagers
   calls: memcpy
   strings:
     ""CHunterAbilityCardInfo::GetManagers""
     ""CHunterAbilityCardInfo"" */

void __fastcall CHunterAbilityCardInfo__GetManagers_114df740(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined **local_28;
  undefined **local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_10 = *(int *)(param_1 + 0x18c);
  iVar7 = param_1 + 0x184;
  local_c = iVar7;
  if (local_10 != iVar7) {
    do {
      iVar6 = local_10;
      iVar9 = *(int *)(local_10 + 0x10);
      iVar2 = FUN_117f6a10(iVar9);
      if (iVar2 == 2) {
        local_14 = &PTR_FUN_11dd58e0;
        if ((DAT_123c7a9c & 1) == 0) {
          DAT_123c7a9c = DAT_123c7a9c | 1;
          FUN_102500e0("CHunterAbilityCardInfo::GetManagers");
          FUN_11a8911f(&LAB_11c75330);
        }
        puVar3 = (undefined4 *)*DAT_123c7aa0;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&local_14,"CHunterAbilityCardInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_123c7bc4 & 1) == 0) {
            DAT_123c7bc4 = DAT_123c7bc4 | 1;
            FUN_108c7b50();
            FUN_11a8911f(&LAB_11c9f6d0);
          }
          puVar3 = &DAT_123c7bc8;
        }
        local_14 = &PTR_FUN_11da54a8;
        if (((iVar9 != -1) &&
            (((iVar9 != 0 || (puVar3[0xc] == 0)) &&
             (iVar2 = puVar3[10], iVar7 = local_c, iVar2 != 0)))) &&
           ((iVar9 = iVar9 - puVar3[0xc], -1 < iVar9 && (iVar9 < (int)puVar3[9])))) {
          iVar1 = *(int *)(puVar3[8] + (iVar9 / iVar2) * 4);
          if ((iVar1 != 0) && (iVar9 = *(int *)(iVar1 + (iVar9 % iVar2) * 4), iVar9 != 0)) {
            FUN_10106660(*(int *)(iVar9 + 0x90) - *(int *)(iVar9 + 0x8c) >> 2,&local_5);
            pvVar4 = *(void **)(iVar9 + 0x8c);
            ppuVar5 = local_28;
            if (*(void **)(iVar9 + 0x90) != pvVar4) {
              local_14 = (undefined **)((int)*(void **)(iVar9 + 0x90) - (int)pvVar4);
              pvVar4 = memcpy(local_28,pvVar4,(size_t)local_14);
              ppuVar5 = (undefined **)((int)pvVar4 + (int)local_14);
            }
            local_14 = local_28;
            uVar10 = (uint)((int)ppuVar5 + (3 - (int)local_28)) >> 2;
            if (ppuVar5 < local_28) {
              uVar10 = 0;
            }
            if (uVar10 != 0) {
              uVar8 = 0;
              ppuVar5 = local_28;
              do {
                (**(code **)(**(int **)(*(int *)(param_1 + 0x1b4) + 0x10) + 0x44))
                          (0,*ppuVar5,0,1,0x13);
                uVar8 = uVar8 + 1;
                ppuVar5 = ppuVar5 + 1;
                iVar6 = local_10;
              } while (uVar8 != uVar10);
            }
            iVar7 = local_c;
            if (local_28 != (undefined **)0x0) {
              FUN_10c3d5d0(local_28);
              iVar7 = local_c;
            }
          }
        }
      }
      local_10 = *(int *)(iVar6 + 0xc);
      if (local_10 == 0) {
        iVar9 = *(int *)(iVar6 + 4);
        if (iVar6 == *(int *)(iVar9 + 0xc)) {
          do {
            iVar6 = iVar9;
            iVar9 = *(int *)(iVar6 + 4);
          } while (iVar6 == *(int *)(iVar9 + 0xc));
        }
        local_10 = iVar6;
        if (*(int *)(iVar6 + 0xc) != iVar9) {
          local_10 = iVar9;
        }
      }
      else {
        for (iVar9 = *(int *)(local_10 + 8); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
          local_10 = iVar9;
        }
      }
    } while (local_10 != iVar7);
  }
  return;
}



/* --- CHunterAbilityCardInfo::GetManagers_117f2ee0 @ 117f2ee0 --- */
// [RE-AUTO c3]
// id: CHunterAbilityCardInfo::GetManagers
// strings:
//   ""CHunterAbilityCardInfo""
//   ""CHunterAbilityCardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterAbilityCardInfo::GetManagers
   strings:
     ""CHunterAbilityCardInfo""
     ""CHunterAbilityCardInfo::GetManagers"" */

void CHunterAbilityCardInfo__GetManagers_117f2ee0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_108c64c0(0,"CHunterAbilityCardInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd58e0;
      if ((DAT_123c7a9c & 1) == 0) {
        DAT_123c7a9c = DAT_123c7a9c | 1;
        FUN_102500e0("CHunterAbilityCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c75330);
      }
      puVar4 = (undefined4 *)*DAT_123c7aa0;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CHunterAbilityCardInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c7bc4 & 1) == 0) {
          DAT_123c7bcc = 0;
          DAT_123c7bdc = 0;
          DAT_123c7be0 = 0;
          _DAT_123c7be4 = 0;
          DAT_123c7be8 = 0;
          DAT_123c7bc4 = DAT_123c7bc4 | 1;
          DAT_123c7bc8 = &PTR_FUN_11dd5ab0;
          DAT_123c7bec = _DAT_11de9ae0;
          DAT_123c7bf0 = _UNK_11de9ae4;
          uRam123c7bf4 = _UNK_11de9ae8;
          DAT_123c7bf8 = _UNK_11de9aec;
          DAT_123c7bfc = 1;
          DAT_123c7bd0 = puVar4;
          _DAT_123c7bd4 = puVar4;
          _DAT_123c7bd8 = puVar4;
          FUN_11a8911f(&LAB_11cab6a0);
        }
        puVar4 = &DAT_123c7bc8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        FUN_118ad510(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



