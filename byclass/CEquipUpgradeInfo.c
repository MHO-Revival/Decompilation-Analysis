// ===== class CEquipUpgradeInfo  (2 recovered methods) =====

/* --- CEquipUpgradeInfo::GetManagers @ 107ec4b0 --- */
// [RE-AUTO c3]
// id: CEquipUpgradeInfo::GetManagers
// strings:
//   ""CEquipUpgradeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipUpgradeInfo::GetManagers
   strings:
     ""CEquipUpgradeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipUpgradeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bef30 & 1) == 0) {
    DAT_123bef30 = DAT_123bef30 | 1;
    _DAT_123beed0 = &DAT_123beec0;
    DAT_123beed4 = &DAT_123beec0;
    DAT_123beec0 = 0;
    FUN_100d83d0("CEquipUpgradeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c712d0);
  }
  return DAT_123beebc;
}



/* --- CEquipUpgradeInfo::GetManagers_11975630 @ 11975630 --- */
// [RE-AUTO c3]
// id: CEquipUpgradeInfo::GetManagers
// strings:
//   ""CEquipUpgradeInfo""
//   ""CEquipUpgradeInfo::GetManagers""
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipUpgradeInfo::GetManagers
   strings:
     ""CEquipUpgradeInfo""
     ""CEquipUpgradeInfo::GetManagers""
     ""CEquipInfo::GetManagers""
     ""CEquipInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void CEquipUpgradeInfo__GetManagers_11975630(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_14;
  undefined **local_c;
  undefined **local_8;
  
  piVar4 = (int *)FUN_10804460(0,"CEquipUpgradeInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  local_14 = 0;
  if (0 < iVar5) {
    do {
      local_8 = &PTR_FUN_11dcaecc;
      if ((DAT_123bef30 & 1) == 0) {
        DAT_123bef30 = DAT_123bef30 | 1;
        FUN_102500e0("CEquipUpgradeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c712d0);
      }
      puVar6 = (undefined *)*DAT_123beebc;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_8,"CEquipUpgradeInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_123bf068 & 1) == 0) {
          DAT_123beff8 = 0;
          DAT_123bf008 = 0;
          DAT_123bf00c = 0;
          _DAT_123bf010 = 0;
          DAT_123bf014 = 0;
          DAT_123bf068 = DAT_123bf068 | 1;
          _DAT_123beff4 = &PTR_FUN_11dcaf38;
          DAT_123bf018 = _DAT_11de9ae0;
          DAT_123bf01c = _UNK_11de9ae4;
          uRam123bf020 = _UNK_11de9ae8;
          DAT_123bf024 = _UNK_11de9aec;
          DAT_123bf028 = 1;
          DAT_123beffc = puVar6;
          _DAT_123bf000 = puVar6;
          _DAT_123bf004 = puVar6;
          FUN_11a8911f(&LAB_11cb32a0);
        }
        puVar6 = &DAT_123beff4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < local_14) && (local_14 < *(int *)(puVar6 + 0x18) - *(int *)(puVar6 + 0x14) >> 2))
          && (iVar1 = *(int *)(*(int *)(puVar6 + 0x14) + local_14 * 4), iVar1 != 0)) &&
         (iVar9 = *(int *)(iVar1 + 0x1c), iVar9 != *(int *)(iVar1 + 0x20))) {
        do {
          iVar7 = *(int *)(iVar1 + 0x14);
          local_c = &PTR_FUN_11dc0b38;
          if ((DAT_123be940 & 1) == 0) {
            DAT_123be940 = DAT_123be940 | 1;
            FUN_102500e0("CEquipInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fdb0);
          }
          puVar6 = (undefined *)*DAT_123be924;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&local_c,"CEquipInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be700 & 1) == 0) {
              DAT_123be6cc = 0;
              DAT_123be6dc = 0;
              DAT_123be6e0 = 0;
              _DAT_123be6e4 = 0;
              DAT_123be6e8 = 0;
              DAT_123be700 = DAT_123be700 | 1;
              _DAT_123be6c8 = &PTR_FUN_11dc0da0;
              DAT_123be6ec = _DAT_11de9ae0;
              DAT_123be6f0 = _UNK_11de9ae4;
              uRam123be6f4 = _UNK_11de9ae8;
              DAT_123be6f8 = _UNK_11de9aec;
              DAT_123be6fc = 1;
              DAT_123be6d0 = puVar6;
              _DAT_123be6d4 = puVar6;
              _DAT_123be6d8 = puVar6;
              FUN_11a8911f(&LAB_11cb3240);
            }
            puVar6 = &DAT_123be6c8;
          }
          local_c = &PTR_FUN_11da54a8;
          if ((((iVar7 != -1) && ((iVar7 != 0 || (*(int *)(puVar6 + 0x30) == 0)))) &&
              (iVar2 = *(int *)(puVar6 + 0x28), iVar2 != 0)) &&
             ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
              (iVar7 < *(int *)(puVar6 + 0x24))))) {
            iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar2) * 4);
            if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar7 % iVar2) * 4) != 0)) {
              FUN_116ca4f0(iVar1);
              local_c = &PTR_FUN_11dc0b38;
              if ((DAT_123be940 & 1) == 0) {
                DAT_123be940 = DAT_123be940 | 1;
                FUN_102500e0("CEquipInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6fdb0);
              }
              if (((*DAT_123be924 == 0) &&
                  (iVar7 = FUN_11679e10(&local_c,"CEquipInfo",0), iVar7 == 0)) &&
                 ((DAT_123be700 & 1) == 0)) {
                DAT_123be6cc = 0;
                DAT_123be6dc = 0;
                DAT_123be6e0 = 0;
                _DAT_123be6e4 = 0;
                DAT_123be6e8 = 0;
                DAT_123be700 = DAT_123be700 | 1;
                DAT_123be6d0 = (undefined *)0x0;
                _DAT_123be6d4 = (undefined *)0x0;
                _DAT_123be6d8 = (undefined *)0x0;
                _DAT_123be6c8 = &PTR_FUN_11dc0da0;
                DAT_123be6ec = _DAT_11de9ae0;
                DAT_123be6f0 = _UNK_11de9ae4;
                uRam123be6f4 = _UNK_11de9ae8;
                DAT_123be6f8 = _UNK_11de9aec;
                DAT_123be6fc = 1;
                FUN_11a8911f(&LAB_11cb3240);
              }
              uVar8 = 0;
              if (*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4) >> 3 != 0) {
                do {
                  local_c = &PTR_FUN_11da5518;
                  if ((DAT_123bdbfc & 1) == 0) {
                    DAT_123bdbfc = DAT_123bdbfc | 1;
                    FUN_102500e0("CItemBaseInfo::GetManagers");
                    FUN_11a8911f(&LAB_11c6e610);
                  }
                  if (((*DAT_123bdba0 == 0) &&
                      (iVar7 = FUN_11679e10(&local_c,"CItemBaseInfo",0), iVar7 == 0)) &&
                     ((DAT_123bdc00 & 1) == 0)) {
                    DAT_123bdbc4 = 0;
                    DAT_123bdbd4 = 0;
                    DAT_123bdbd8 = 0;
                    _DAT_123bdbdc = 0;
                    DAT_123bdbe0 = 0;
                    DAT_123bdc00 = DAT_123bdc00 | 1;
                    DAT_123bdbc8 = 0;
                    _DAT_123bdbcc = 0;
                    _DAT_123bdbd0 = 0;
                    DAT_123bdbc0 = &PTR_FUN_11da5520;
                    DAT_123bdbe4 = _DAT_11de9ae0;
                    DAT_123bdbe8 = _UNK_11de9ae4;
                    uRam123bdbec = _UNK_11de9ae8;
                    DAT_123bdbf0 = _UNK_11de9aec;
                    DAT_123bdbf4 = 1;
                    FUN_11a8911f(&LAB_11cb3300);
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < (uint)(*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4) >> 3));
              }
            }
          }
          iVar9 = iVar9 + 0xb0;
        } while (iVar9 != *(int *)(iVar1 + 0x20));
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar5);
  }
  return;
}



