// ===== class CEquipRelationAttrInfo  (4 recovered methods) =====

/* --- CEquipRelationAttrInfo::GetManagers @ 10855da0 --- */
// [RE-AUTO c3]
// id: CEquipRelationAttrInfo::GetManagers
// strings:
//   ""CEquipRelationAttrInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRelationAttrInfo::GetManagers
   strings:
     ""CEquipRelationAttrInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipRelationAttrInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7610 & 1) == 0) {
    DAT_123c7610 = DAT_123c7610 | 1;
    _DAT_123c7628 = &DAT_123c7618;
    DAT_123c762c = &DAT_123c7618;
    DAT_123c7618 = 0;
    FUN_100d83d0("CEquipRelationAttrInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72e90);
  }
  return DAT_123c7614;
}



/* --- CEquipRelationAttrInfo::GetManagers_11611490 @ 11611490 --- */
// [RE-AUTO c3]
// id: CEquipRelationAttrInfo::GetManagers
// calls: memcpy
// strings:
//   ""CEquipRelationAttrInfo::GetManagers""
//   ""CEquipRelationAttrInfo""

/* [RE-AUTO c3]
   id: CEquipRelationAttrInfo::GetManagers
   calls: memcpy
   strings:
     ""CEquipRelationAttrInfo::GetManagers""
     ""CEquipRelationAttrInfo"" */

void CEquipRelationAttrInfo__GetManagers_11611490
               (undefined4 param_1,undefined4 param_2,int param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  size_t sVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *local_24;
  int local_14 [2];
  uint local_c;
  undefined **local_8;
  
  uVar7 = FUN_1166dcf0();
  sVar5 = param_4;
  local_c = 0;
  if (uVar7 != 0) {
    do {
      iVar8 = FUN_1166dcb0(local_c);
      local_14[0] = iVar8;
      if (iVar8 != 0) {
        local_8 = &PTR_FUN_11dd04c0;
        if ((DAT_123c7610 & 1) == 0) {
          DAT_123c7610 = DAT_123c7610 | 1;
          FUN_102500e0("CEquipRelationAttrInfo::GetManagers");
          FUN_11a8911f(&LAB_11c72e90);
        }
        puVar9 = (undefined *)*DAT_123c7614;
        if ((puVar9 == (undefined *)0x0) &&
           (puVar9 = (undefined *)FUN_11679e10(&local_8,"CEquipRelationAttrInfo",0),
           puVar9 == (undefined *)0x0)) {
          if ((DAT_123c76b0 & 1) == 0) {
            DAT_123c76b0 = DAT_123c76b0 | 1;
            FUN_10872df0();
            FUN_11a8911f(&LAB_11ca58d0);
          }
          puVar9 = &DAT_123c76b4;
        }
        local_8 = &PTR_FUN_11da54a8;
        if ((((iVar8 != -1) && (iVar1 = *(int *)(puVar9 + 0x28), iVar1 != 0)) &&
            (iVar10 = iVar8 - *(int *)(puVar9 + 0x30), -1 < iVar10)) &&
           (iVar10 < *(int *)(puVar9 + 0x24))) {
          iVar2 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar10 / iVar1) * 4);
          if (((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar10 % iVar1) * 4), iVar1 != 0)) &&
             (cVar6 = FUN_116112a0(param_1,iVar1), cVar6 != '\0')) {
            piVar3 = *(int **)(param_3 + 4);
            if (piVar3 == *(int **)(param_3 + 8)) {
              FUN_10109320(piVar3,local_14,(int)&param_4 + 3,1,1);
            }
            else {
              *piVar3 = iVar8;
              *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
            }
            FUN_10106660(*(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x2c) >> 2,(int)&param_4 + 3);
            pvVar11 = *(void **)(iVar1 + 0x2c);
            if (*(void **)(iVar1 + 0x30) != pvVar11) {
              param_4 = (int)*(void **)(iVar1 + 0x30) - (int)pvVar11;
              pvVar11 = memcpy(local_24,pvVar11,param_4);
              puVar12 = (undefined4 *)((int)pvVar11 + param_4);
              for (puVar13 = local_24; puVar13 != puVar12; puVar13 = puVar13 + 1) {
                puVar4 = *(undefined4 **)(sVar5 + 4);
                if (puVar4 == *(undefined4 **)(sVar5 + 8)) {
                  FUN_10109320(puVar4,puVar13,(int)&param_4 + 3,1,1);
                }
                else {
                  *puVar4 = *puVar13;
                  *(int *)(sVar5 + 4) = *(int *)(sVar5 + 4) + 4;
                }
              }
            }
            if (local_24 != (undefined4 *)0x0) {
              FUN_10c3d5d0(local_24);
            }
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar7);
  }
  return;
}



/* --- CEquipRelationAttrInfo::GetManagers_1186cc00 @ 1186cc00 --- */
// [RE-AUTO c3]
// id: CEquipRelationAttrInfo::GetManagers
// calls: memmove
// strings:
//   ""CEquipRelationAttrInfo::GetManagers""
//   ""CEquipRelationAttrInfo""

/* WARNING: Removing unreachable block (ram,0x1186cfdd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRelationAttrInfo::GetManagers
   calls: memmove
   strings:
     ""CEquipRelationAttrInfo::GetManagers""
     ""CEquipRelationAttrInfo"" */

void __thiscall CEquipRelationAttrInfo__GetManagers_1186cc00(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 local_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  int local_1c;
  uint local_18;
  undefined **local_14;
  uint local_10;
  int local_c;
  undefined **local_8;
  
  local_30 = 0;
  puStack_38 = &local_40;
  puVar13 = *(uint **)(param_1 + 0x14);
  local_40 = 0;
  iStack_3c = 0;
  local_2c = param_2._3_1_;
  puStack_34 = puStack_38;
  local_c = param_1;
  if (puVar13 != *(uint **)(param_1 + 0x18)) {
    do {
      uVar5 = *puVar13;
      local_14 = &PTR_FUN_11dd04c0;
      local_10 = uVar5;
      if ((DAT_123c7610 & 1) == 0) {
        DAT_123c7610 = DAT_123c7610 | 1;
        FUN_102500e0("CEquipRelationAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72e90);
      }
      if (((*DAT_123c7614 == 0) &&
          (iVar4 = FUN_11679e10(&local_14,"CEquipRelationAttrInfo",0), iVar4 == 0)) &&
         ((DAT_123c76b0 & 1) == 0)) {
        DAT_123c76b8 = 0;
        DAT_123c76c8 = 0;
        DAT_123c76cc = 0;
        _DAT_123c76d0 = 0;
        DAT_123c76d4 = 0;
        DAT_123c76b0 = DAT_123c76b0 | 1;
        DAT_123c76bc = (undefined *)0x0;
        _DAT_123c76c0 = (undefined *)0x0;
        _DAT_123c76c4 = (undefined *)0x0;
        _DAT_123c76b4 = &PTR_FUN_11dd07f0;
        DAT_123c76dc = _UNK_11de9ae4;
        DAT_123c76d8 = _DAT_11de9ae0;
        uRam123c76e0 = _UNK_11de9ae8;
        DAT_123c76e4 = _UNK_11de9aec;
        DAT_123c76e8 = 1;
        FUN_11a8911f(&LAB_11cade80);
      }
      if (uVar5 != 0) {
        FUN_10476c90(local_20,&local_10);
      }
    } while ((local_30 < 6) && (puVar13 = puVar13 + 1, puVar13 != *(uint **)(local_c + 0x18)));
  }
  local_14 = (undefined **)0x0;
  if (*(int *)(local_c + 0x24) - *(int *)(local_c + 0x20) >> 3 != 0) {
    while( true ) {
      iVar4 = local_c;
      ppuVar3 = local_14;
      FUN_100ee470();
      FUN_100ee450();
      uVar5 = FUN_11a89331();
      if (*(uint *)(*(int *)(iVar4 + 0x20) + 4 + (int)ppuVar3 * 8) <= uVar5) break;
      uVar5 = *(uint *)(*(int *)(iVar4 + 0x20) + (int)ppuVar3 * 8);
      iVar4 = FUN_11679c30();
      if (iVar4 == 0) break;
      iVar6 = FUN_11679c30();
      iVar4 = *(int *)(iVar6 + 0x3b728);
      iVar6 = iVar6 + 0x3b724;
      iVar12 = iVar6;
      if (iVar4 != 0) {
        do {
          if (*(uint *)(iVar4 + 0x10) < uVar5) {
            iVar7 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar7 = *(int *)(iVar4 + 8);
            iVar12 = iVar4;
          }
          iVar4 = iVar7;
        } while (iVar7 != 0);
        if ((iVar12 != iVar6) && (uVar5 < *(uint *)(iVar12 + 0x10))) {
          iVar12 = iVar6;
        }
      }
      iVar4 = FUN_11679c30();
      if (iVar12 == iVar4 + 0x3b724) break;
      iVar7 = FUN_11679c30();
      iVar8 = iVar7 + 0x3b73c;
      iVar4 = *(int *)(iVar7 + 0x3b740);
      iVar6 = iVar8;
      if (*(int *)(iVar7 + 0x3b740) != 0) {
        do {
          if (*(uint *)(iVar4 + 0x10) < uVar5) {
            iVar7 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar7 = *(int *)(iVar4 + 8);
            iVar6 = iVar4;
          }
          iVar4 = iVar7;
        } while (iVar7 != 0);
        if ((iVar6 != iVar8) && (uVar5 < *(uint *)(iVar6 + 0x10))) {
          iVar6 = iVar8;
        }
      }
      iVar4 = FUN_11679c30();
      if (iVar6 == iVar4 + 0x3b73c) break;
      FUN_100ee470();
      FUN_100ee450();
      local_18 = FUN_11a89331();
      piVar14 = *(int **)(iVar12 + 0x14);
      local_10 = 0;
      if (piVar14 != *(int **)(iVar12 + 0x18)) {
        do {
          iVar4 = *piVar14;
          local_8 = &PTR_FUN_11dd04c0;
          local_1c = iVar4;
          if ((DAT_123c7610 & 1) == 0) {
            DAT_123c7610 = DAT_123c7610 | 1;
            FUN_102500e0("CEquipRelationAttrInfo::GetManagers");
            FUN_11a8911f(&LAB_11c72e90);
          }
          puVar9 = (undefined *)*DAT_123c7614;
          if ((puVar9 == (undefined *)0x0) &&
             (puVar9 = (undefined *)FUN_11679e10(&local_8,"CEquipRelationAttrInfo",0),
             puVar9 == (undefined *)0x0)) {
            if ((DAT_123c76b0 & 1) == 0) {
              DAT_123c76b8 = 0;
              DAT_123c76c8 = 0;
              DAT_123c76cc = 0;
              _DAT_123c76d0 = 0;
              DAT_123c76d4 = 0;
              DAT_123c76b0 = DAT_123c76b0 | 1;
              DAT_123c76dc = _UNK_11de9ae4;
              DAT_123c76d8 = _DAT_11de9ae0;
              uRam123c76e0 = _UNK_11de9ae8;
              DAT_123c76e4 = _UNK_11de9aec;
              _DAT_123c76b4 = &PTR_FUN_11dd07f0;
              DAT_123c76e8 = 1;
              DAT_123c76bc = puVar9;
              _DAT_123c76c0 = puVar9;
              _DAT_123c76c4 = puVar9;
              FUN_11a8911f(&LAB_11cade80);
            }
            puVar9 = &DAT_123c76b4;
          }
          local_8 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (*(int *)(puVar9 + 0x30) == 0)) && (*(int *)(puVar9 + 0x28) != 0)) &&
              ((iVar4 = iVar4 - *(int *)(puVar9 + 0x30), -1 < iVar4 &&
               (iVar4 < *(int *)(puVar9 + 0x24))))))) {
            iVar6 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar4 / *(int *)(puVar9 + 0x28)) * 4);
            if ((iVar6 != 0) &&
               ((iVar4 = *(int *)(iVar6 + (iVar4 % *(int *)(puVar9 + 0x28)) * 4), iVar4 != 0 &&
                (local_10 = local_10 + *(int *)(iVar4 + 0x18), local_18 < local_10)))) {
              FUN_10476c90(local_28,&local_1c);
              break;
            }
          }
          piVar14 = piVar14 + 1;
        } while (piVar14 != *(int **)(iVar12 + 0x18));
      }
      if ((5 < local_30) ||
         (local_14 = (undefined **)((int)local_14 + 1),
         (undefined **)(*(int *)(local_c + 0x24) - *(int *)(local_c + 0x20) >> 3) <= local_14))
      break;
    }
  }
  piVar14 = param_2;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  puVar11 = puStack_38;
  if (puStack_38 != &local_40) {
    do {
      piVar1 = (int *)piVar14[1];
      local_1c = puVar11[4];
      if (piVar1 == (int *)piVar14[2]) {
        FUN_10109320(piVar1,&local_1c,(int)&param_2 + 3,1,1);
      }
      else {
        *piVar1 = local_1c;
        piVar14[1] = piVar14[1] + 4;
      }
      puVar10 = (undefined4 *)puVar11[3];
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar11[1];
        if (puVar11 == (undefined4 *)puVar10[3]) {
          do {
            puVar11 = puVar10;
            puVar10 = (undefined4 *)puVar11[1];
          } while (puVar11 == (undefined4 *)puVar10[3]);
        }
        if ((undefined4 *)puVar11[3] != puVar10) {
          puVar11 = puVar10;
        }
      }
      else {
        for (puVar2 = (undefined4 *)puVar10[2]; puVar11 = puVar10, puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[2]) {
          puVar10 = puVar2;
        }
      }
    } while (puVar11 != &local_40);
  }
  iVar4 = iStack_3c;
  if (local_30 != 0) {
    while (iVar4 != 0) {
      FUN_10476c50(*(undefined4 *)(iVar4 + 0xc));
      iVar12 = *(int *)(iVar4 + 8);
      FUN_10c3d5d0(iVar4);
      iVar4 = iVar12;
    }
  }
  return;
}



/* --- CEquipRelationAttrInfo::GetManagers_1195df20 @ 1195df20 --- */
// [RE-AUTO c3]
// id: CEquipRelationAttrInfo::GetManagers
// strings:
//   ""CEquipRelationAttrInfo""
//   ""CEquipRelationAttrInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRelationAttrInfo::GetManagers
   strings:
     ""CEquipRelationAttrInfo""
     ""CEquipRelationAttrInfo::GetManagers"" */

void CEquipRelationAttrInfo__GetManagers_1195df20(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10870470(0,"CEquipRelationAttrInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd04c0;
      if ((DAT_123c7610 & 1) == 0) {
        DAT_123c7610 = DAT_123c7610 | 1;
        FUN_102500e0("CEquipRelationAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72e90);
      }
      puVar3 = (undefined *)*DAT_123c7614;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CEquipRelationAttrInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123c76b0 & 1) == 0) {
          DAT_123c76b8 = 0;
          DAT_123c76c8 = 0;
          DAT_123c76cc = 0;
          _DAT_123c76d0 = 0;
          DAT_123c76d4 = 0;
          DAT_123c76b0 = DAT_123c76b0 | 1;
          _DAT_123c76b4 = &PTR_FUN_11dd07f0;
          DAT_123c76d8 = _DAT_11de9ae0;
          DAT_123c76dc = _UNK_11de9ae4;
          uRam123c76e0 = _UNK_11de9ae8;
          DAT_123c76e4 = _UNK_11de9aec;
          DAT_123c76e8 = 1;
          DAT_123c76bc = puVar3;
          _DAT_123c76c0 = puVar3;
          _DAT_123c76c4 = puVar3;
          FUN_11a8911f(&LAB_11cb2b80);
        }
        puVar3 = &DAT_123c76b4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        CBuffInfo__GetManagers_11a3c750();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



