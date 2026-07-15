// ===== class CManufactureSkillLearnInfo  (4 recovered methods) =====

/* --- CManufactureSkillLearnInfo::GetManagers @ 11207640 --- */
// [RE-AUTO c3]
// id: CManufactureSkillLearnInfo::GetManagers
// strings:
//   ""CManufactureSkillLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureSkillLearnInfo::GetManagers
   strings:
     ""CManufactureSkillLearnInfo::GetManagers"" */

undefined4 *
CManufactureSkillLearnInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d18794;
  if (param_3 == 0) {
    if ((DAT_1203f72c & 1) == 0) {
      DAT_1203f72c = DAT_1203f72c | 1;
      FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e40);
    }
    if ((undefined4 *)*DAT_1203f710 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f710;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f820 & 1) == 0) {
      DAT_1203f820 = DAT_1203f820 | 1;
      FUN_11208200();
      FUN_11a8911f(&LAB_11c97d20);
    }
    puVar1 = &DAT_1203f7e8;
  }
  return puVar1;
}



/* --- CManufactureSkillLearnInfo::GetManagers_1120a000 @ 1120a000 --- */
// [RE-AUTO c3]
// id: CManufactureSkillLearnInfo::GetManagers
// strings:
//   ""CManufactureSkillLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CManufactureSkillLearnInfo::GetManagers
   strings:
     ""CManufactureSkillLearnInfo::GetManagers"" */

undefined4 CManufactureSkillLearnInfo__GetManagers_1120a000(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f72c & 1) == 0) {
      DAT_1203f72c = DAT_1203f72c | 1;
      FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e40);
    }
    return *DAT_1203f710;
  }
  return 0;
}



/* --- CManufactureSkillLearnInfo::GetManagers_1120b400 @ 1120b400 --- */
// [RE-AUTO c3]
// id: CManufactureSkillLearnInfo::GetManagers
// calls: CManufactureSkillLearnInfo::GetManagers
// strings:
//   ""CManufactureSkillLearnInfo""
//   ""CManufactureSkillLearnInfo::GetManagers""
//   ""CManufactureIngredientLearnInfo::GetManagers""
//   ""CManufactureIngredientLearnInfo""
//   ""CManufactureInfo::GetManagers""
//   ""CManufactureInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CManufactureSkillLearnInfo::GetManagers
   calls: CManufactureSkillLearnInfo::GetManagers
   strings:
     ""CManufactureSkillLearnInfo""
     ""CManufactureSkillLearnInfo::GetManagers""
     ""CManufactureIngredientLearnInfo::GetManagers""
     ""CManufactureIngredientLearnInfo""
     ""CManufactureInfo::GetManagers""
     ""CManufactureInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CManufactureSkillLearnInfo__GetManagers_1120b400(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined1 local_a4 [4];
  undefined1 *local_a0;
  int local_94;
  int local_8c;
  int local_88;
  undefined **local_84;
  int *local_80;
  undefined **local_7c;
  undefined **local_78;
  undefined1 local_74 [20];
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 local_1f;
  undefined4 uStack_1b;
  undefined4 uStack_17;
  undefined4 uStack_13;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_80 = param_1;
  uVar3 = (**(code **)(*param_1 + 0x28))();
  FUN_10815770(uVar3);
  local_88 = 0;
  piVar4 = (int *)CManufactureSkillLearnInfo__GetManagers(0,"CManufactureSkillLearnInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  iVar12 = 0;
  if (0 < iVar5) {
    do {
      local_78 = &PTR_FUN_11d18794;
      if ((DAT_1203f72c & 1) == 0) {
        DAT_1203f72c = DAT_1203f72c | 1;
        FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97e40);
      }
      puVar6 = (undefined4 *)*DAT_1203f710;
      if ((puVar6 == (undefined4 *)0x0) &&
         (puVar6 = (undefined4 *)FUN_11679e10(&local_78,"CManufactureSkillLearnInfo",0),
         puVar6 == (undefined4 *)0x0)) {
        if ((DAT_1203f820 & 1) == 0) {
          DAT_1203f7ec = 0;
          DAT_1203f7fc = 0;
          DAT_1203f800 = 0;
          _DAT_1203f804 = 0;
          uRam1203f808 = 0;
          DAT_1203f820 = DAT_1203f820 | 1;
          DAT_1203f7e8 = &PTR_FUN_11d187e0;
          _DAT_1203f80c = _DAT_11de9ae0;
          uRam1203f810 = _UNK_11de9ae4;
          uRam1203f814 = _UNK_11de9ae8;
          uRam1203f818 = _UNK_11de9aec;
          DAT_1203f81c = 1;
          DAT_1203f7f0 = puVar6;
          _DAT_1203f7f4 = puVar6;
          _DAT_1203f7f8 = puVar6;
          FUN_11a8911f(&LAB_11c97d20);
        }
        puVar6 = &DAT_1203f7e8;
      }
      if ((((-1 < iVar12) && (iVar12 < (int)(puVar6[6] - puVar6[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar6[5] + iVar12 * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x14) == param_1[0x14])) {
        local_88 = *(int *)(iVar1 + 0x18);
        break;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar5);
  }
  local_78 = &PTR_FUN_11d186f0;
  if ((DAT_1203f70c & 1) == 0) {
    DAT_1203f70c = DAT_1203f70c | 1;
    FUN_102500e0("CManufactureIngredientLearnInfo::GetManagers");
    FUN_11a8911f(&LAB_11c97de0);
  }
  piVar4 = (int *)*DAT_1203f6f0;
  if ((piVar4 == (int *)0x0) &&
     (piVar4 = (int *)FUN_11679e10(&local_78,"CManufactureIngredientLearnInfo",0),
     piVar4 == (int *)0x0)) {
    if ((DAT_1203f7e4 & 1) == 0) {
      DAT_1203f7b0 = 0;
      DAT_1203f7c0 = 0;
      DAT_1203f7c4 = 0;
      _DAT_1203f7c8 = 0;
      uRam1203f7cc = 0;
      DAT_1203f7e4 = DAT_1203f7e4 | 1;
      DAT_1203f7ac = &PTR_FUN_11d18748;
      _DAT_1203f7d0 = _DAT_11de9ae0;
      uRam1203f7d4 = _UNK_11de9ae4;
      uRam1203f7d8 = _UNK_11de9ae8;
      uRam1203f7dc = _UNK_11de9aec;
      DAT_1203f7e0 = 1;
      DAT_1203f7b4 = piVar4;
      _DAT_1203f7b8 = piVar4;
      _DAT_1203f7bc = piVar4;
      FUN_11a8911f(&LAB_11c97c60);
    }
    piVar4 = (int *)&DAT_1203f7ac;
  }
  local_78 = &PTR_FUN_11da54a8;
  local_8c = (**(code **)(*piVar4 + 0x28))();
  local_78 = (undefined **)0x0;
  piVar4 = local_80;
  if (0 < local_8c) {
    do {
      ppuVar11 = local_78;
      local_7c = &PTR_FUN_11d186f0;
      if ((DAT_1203f70c & 1) == 0) {
        DAT_1203f70c = DAT_1203f70c | 1;
        FUN_102500e0("CManufactureIngredientLearnInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97de0);
      }
      piVar7 = (int *)*DAT_1203f6f0;
      if ((piVar7 == (int *)0x0) &&
         (piVar7 = (int *)FUN_11679e10(&local_7c,"CManufactureIngredientLearnInfo",0),
         piVar7 == (int *)0x0)) {
        if ((DAT_1203f7e4 & 1) == 0) {
          DAT_1203f7b0 = 0;
          DAT_1203f7c0 = 0;
          DAT_1203f7c4 = 0;
          _DAT_1203f7c8 = 0;
          uRam1203f7cc = 0;
          DAT_1203f7e4 = DAT_1203f7e4 | 1;
          DAT_1203f7ac = &PTR_FUN_11d18748;
          _DAT_1203f7d0 = _DAT_11de9ae0;
          uRam1203f7d4 = _UNK_11de9ae4;
          uRam1203f7d8 = _UNK_11de9ae8;
          uRam1203f7dc = _UNK_11de9aec;
          DAT_1203f7e0 = 1;
          DAT_1203f7b4 = piVar7;
          _DAT_1203f7b8 = piVar7;
          _DAT_1203f7bc = piVar7;
          FUN_11a8911f(&LAB_11c97c60);
        }
        piVar7 = (int *)&DAT_1203f7ac;
      }
      local_7c = &PTR_FUN_11da54a8;
      if ((((-1 < (int)ppuVar11) && ((int)ppuVar11 < piVar7[6] - piVar7[5] >> 2)) &&
          (iVar5 = *(int *)(piVar7[5] + (int)ppuVar11 * 4), iVar5 != 0)) &&
         ((piVar4[0x14] == *(int *)(iVar5 + 0x14) && (local_88 == *(int *)(iVar5 + 0x18))))) {
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_c = 0;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        local_2f = 0;
        uStack_2b = 0;
        uStack_27 = 0;
        uStack_23 = 0;
        local_1f = 0;
        uStack_1b = 0;
        uStack_17 = 0;
        uStack_13 = 0;
        local_5c = *(undefined4 *)(iVar5 + 0x10);
        iVar12 = FUN_100e5b40(local_74);
        FUN_100ec080(&local_58,0x20,*(undefined4 *)(iVar12 + 0x14),0x20);
        if ((local_60 != local_74) && (local_60 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_60);
        }
        puVar10 = local_a4;
        local_34 = *(undefined4 *)(iVar5 + 0x24);
        local_38 = *(undefined4 *)(iVar5 + 0x28);
        if (local_a0 == (undefined1 *)0x0) {
LAB_1120b816:
          local_30 = 0;
        }
        else {
          puVar8 = local_a0;
          do {
            if (*(int *)(puVar8 + 0x10) < *(int *)(iVar5 + 0x1c)) {
              puVar9 = *(undefined1 **)(puVar8 + 0xc);
            }
            else {
              puVar9 = *(undefined1 **)(puVar8 + 8);
              puVar10 = puVar8;
            }
            puVar8 = puVar9;
          } while (puVar9 != (undefined1 *)0x0);
          if ((puVar10 == local_a4) ||
             (local_30 = 1, *(int *)(iVar5 + 0x1c) < *(int *)(puVar10 + 0x10))) goto LAB_1120b816;
        }
        iVar5 = *(int *)(iVar5 + 0x1c);
        local_7c = &PTR_FUN_11dcbd1c;
        if ((DAT_123c73fc & 1) == 0) {
          DAT_123c73fc = DAT_123c73fc | 1;
          FUN_102500e0("CManufactureInfo::GetManagers");
          FUN_11a8911f(&LAB_11c71d00);
        }
        puVar6 = (undefined4 *)*DAT_123c7400;
        if ((puVar6 == (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)FUN_11679e10(&local_7c,"CManufactureInfo",0),
           puVar6 == (undefined4 *)0x0)) {
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
            DAT_123c7430 = puVar6;
            _DAT_123c7434 = puVar6;
            _DAT_123c7438 = puVar6;
            FUN_11a8911f(&LAB_11c97c00);
          }
          puVar6 = &DAT_123c7428;
        }
        local_7c = &PTR_FUN_11da54a8;
        if (((iVar5 != -1) &&
            (((iVar5 != 0 || (puVar6[0xc] == 0)) && (iVar12 = puVar6[10], iVar12 != 0)))) &&
           ((iVar5 = iVar5 - puVar6[0xc], -1 < iVar5 && (iVar5 < (int)puVar6[9])))) {
          iVar1 = *(int *)(puVar6[8] + (iVar5 / iVar12) * 4);
          if ((iVar1 != 0) && (iVar5 = *(int *)(iVar1 + (iVar5 % iVar12) * 4), iVar5 != 0)) {
            iVar12 = *(int *)(iVar5 + 0x58);
            local_84 = &PTR_FUN_11da5518;
            if ((DAT_123bdbfc & 1) == 0) {
              DAT_123bdbfc = DAT_123bdbfc | 1;
              FUN_102500e0("CItemBaseInfo::GetManagers");
              FUN_11a8911f(&LAB_11c6e610);
            }
            puVar6 = (undefined4 *)*DAT_123bdba0;
            if ((puVar6 == (undefined4 *)0x0) &&
               (puVar6 = (undefined4 *)FUN_11679e10(&local_84,"CItemBaseInfo",0),
               puVar6 == (undefined4 *)0x0)) {
              if ((DAT_123bdc00 & 1) == 0) {
                DAT_123bdc00 = DAT_123bdc00 | 1;
                FUN_102555a0();
                FUN_11a8911f(&LAB_11c97ba0);
              }
              puVar6 = &DAT_123bdbc0;
            }
            local_84 = &PTR_FUN_11da54a8;
            if (((iVar12 != -1) &&
                (((iVar12 != 0 || (puVar6[0xc] == 0)) &&
                 (iVar1 = puVar6[10], ppuVar11 = local_78, iVar1 != 0)))) &&
               ((iVar12 = iVar12 - puVar6[0xc], -1 < iVar12 && (iVar12 < (int)puVar6[9])))) {
              iVar2 = *(int *)(puVar6[8] + (iVar12 / iVar1) * 4);
              if ((iVar2 != 0) && (iVar12 = *(int *)(iVar2 + (iVar12 % iVar1) * 4), iVar12 != 0)) {
                FUN_100ec080(&local_2f,0x20,*(undefined4 *)(iVar12 + 0xb4),0x20);
                ppuVar11 = local_78;
              }
            }
            local_c = *(undefined4 *)(iVar5 + 0x58);
          }
        }
        piVar4 = local_80;
        iVar5 = FUN_111e0a50();
        if (iVar5 != 0) {
          piVar7 = (int *)FUN_111e0a50();
          (**(code **)(*piVar7 + 4))(0x76,&local_5c);
        }
      }
      local_78 = (undefined **)((int)ppuVar11 + 1);
    } while ((int)local_78 < local_8c);
  }
  puVar10 = local_a0;
  if (local_94 != 0) {
    while (puVar10 != (undefined1 *)0x0) {
      FUN_10815f10(*(undefined4 *)(puVar10 + 0xc));
      puVar8 = *(undefined1 **)(puVar10 + 8);
      FUN_10c3d5d0(puVar10);
      puVar10 = puVar8;
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CManufactureSkillLearnInfo::GetManagers_1120baa0 @ 1120baa0 --- */
// [RE-AUTO c3]
// id: CManufactureSkillLearnInfo::GetManagers
// calls: CManufactureSkillLearnInfo::GetManagers
// strings:
//   ""CManufactureSkillLearnInfo""
//   ""CManufactureSkillLearnInfo::GetManagers""
//   ""CManufactureProficiencyInfo::GetManagers""
//   ""CManufactureProficiencyInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CManufactureSkillLearnInfo::GetManagers
   calls: CManufactureSkillLearnInfo::GetManagers
   strings:
     ""CManufactureSkillLearnInfo""
     ""CManufactureSkillLearnInfo::GetManagers""
     ""CManufactureProficiencyInfo::GetManagers""
     ""CManufactureProficiencyInfo"" */

void CManufactureSkillLearnInfo__GetManagers_1120baa0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined1 local_98 [4];
  int local_94;
  undefined1 *local_90;
  int local_88;
  undefined **local_80;
  undefined **local_7c;
  int local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 local_40;
  int local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)CManufactureSkillLearnInfo__GetManagers(0,"CManufactureSkillLearnInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  iVar12 = 0;
  if (iVar5 < 1) goto LAB_1120c1a0;
  while( true ) {
    local_80 = &PTR_FUN_11d18794;
    if ((DAT_1203f72c & 1) == 0) {
      DAT_1203f72c = DAT_1203f72c | 1;
      FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e40);
    }
    puVar6 = (undefined4 *)*DAT_1203f710;
    if ((puVar6 == (undefined4 *)0x0) &&
       (puVar6 = (undefined4 *)FUN_11679e10(&local_80,"CManufactureSkillLearnInfo",0),
       puVar6 == (undefined4 *)0x0)) {
      if ((DAT_1203f820 & 1) == 0) {
        DAT_1203f7ec = 0;
        DAT_1203f7fc = 0;
        DAT_1203f800 = 0;
        _DAT_1203f804 = 0;
        uRam1203f808 = 0;
        DAT_1203f820 = DAT_1203f820 | 1;
        DAT_1203f7e8 = &PTR_FUN_11d187e0;
        _DAT_1203f80c = _DAT_11de9ae0;
        uRam1203f810 = _UNK_11de9ae4;
        uRam1203f814 = _UNK_11de9ae8;
        uRam1203f818 = _UNK_11de9aec;
        DAT_1203f81c = 1;
        DAT_1203f7f0 = puVar6;
        _DAT_1203f7f4 = puVar6;
        _DAT_1203f7f8 = puVar6;
        FUN_11a8911f(&LAB_11c97d20);
      }
      puVar6 = &DAT_1203f7e8;
    }
    local_80 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar12) && (iVar12 < (int)(puVar6[6] - puVar6[5]) >> 2)) &&
        (iVar1 = *(int *)(puVar6[5] + iVar12 * 4), iVar1 != 0)) &&
       (*(undefined **)(iVar1 + 0x14) == local_74[0x14])) break;
    iVar12 = iVar12 + 1;
    if (iVar5 <= iVar12) {
      FUN_11a89daa();
      return;
    }
  }
  local_78 = 0;
  uVar7 = (**(code **)(*local_74 + 8))();
  FUN_11208330(uVar7);
  if (local_90 != local_98) {
    puVar10 = local_90;
    do {
      if (*(int *)(puVar10 + 0x10) == *(int *)(iVar1 + 0x18)) {
        iVar5 = *(int *)(puVar10 + 0x14);
        local_7c = &PTR_FUN_11d18654;
        local_78 = iVar5;
        if ((DAT_1203f6ec & 1) == 0) {
          DAT_1203f6ec = DAT_1203f6ec | 1;
          FUN_102500e0("CManufactureProficiencyInfo::GetManagers");
          FUN_11a8911f(&LAB_11c97e10);
        }
        puVar9 = (undefined *)*DAT_1203f6d0;
        if ((puVar9 == (undefined *)0x0) &&
           (puVar9 = (undefined *)FUN_11679e10(&local_7c,"CManufactureProficiencyInfo",0),
           puVar9 == (undefined *)0x0)) {
          if ((DAT_1203f7a8 & 1) == 0) {
            DAT_1203f774 = 0;
            DAT_1203f784 = 0;
            uRam1203f788 = 0;
            _DAT_1203f78c = 0;
            DAT_1203f790 = 0;
            DAT_1203f7a8 = DAT_1203f7a8 | 1;
            _DAT_1203f770 = &PTR_FUN_11d186a4;
            DAT_1203f794 = _DAT_11de9ae0;
            DAT_1203f798 = _UNK_11de9ae4;
            uRam1203f79c = _UNK_11de9ae8;
            DAT_1203f7a0 = _UNK_11de9aec;
            DAT_1203f7a4 = 1;
            DAT_1203f778 = puVar9;
            _DAT_1203f77c = puVar9;
            _DAT_1203f780 = puVar9;
            FUN_11a8911f(&LAB_11c97cc0);
          }
          puVar9 = &DAT_1203f770;
        }
        local_7c = &PTR_FUN_11da54a8;
        if ((((iVar5 != -1) && ((iVar5 != 0 || (*(int *)(puVar9 + 0x30) == 0)))) &&
            (iVar5 = *(int *)(puVar9 + 0x28), iVar5 != 0)) &&
           ((iVar12 = local_78 - *(int *)(puVar9 + 0x30), -1 < iVar12 &&
            (iVar12 < *(int *)(puVar9 + 0x24))))) {
          iVar2 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar12 / iVar5) * 4);
          if ((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + (iVar12 % iVar5) * 4), iVar5 != 0)) {
            local_70 = *(undefined **)(iVar1 + 0x18);
            local_6c = *(undefined4 *)(puVar10 + 0x14);
            local_68 = *(undefined4 *)(puVar10 + 0x18);
            local_60 = 0;
            uStack_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            local_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            puStack_44 = (undefined4 *)0x0;
            local_64 = *(undefined4 *)(iVar5 + 0x1c);
            iVar5 = FUN_111e0a50();
            if (iVar5 == 0) goto LAB_1120bcac;
            piVar4 = (int *)FUN_111e0a50();
            ppuVar11 = &local_70;
            goto LAB_1120bca2;
          }
        }
        break;
      }
      puVar8 = *(undefined1 **)(puVar10 + 0xc);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(puVar10 + 4);
        if (puVar10 == *(undefined1 **)(puVar8 + 0xc)) {
          do {
            puVar10 = puVar8;
            puVar8 = *(undefined1 **)(puVar10 + 4);
          } while (puVar10 == *(undefined1 **)(puVar8 + 0xc));
        }
        if (*(undefined1 **)(puVar10 + 0xc) != puVar8) {
          puVar10 = puVar8;
        }
      }
      else {
        for (puVar3 = *(undefined1 **)(puVar8 + 8); puVar10 = puVar8, puVar3 != (undefined1 *)0x0;
            puVar3 = *(undefined1 **)(puVar3 + 8)) {
          puVar8 = puVar3;
        }
      }
    } while (puVar10 != local_98);
  }
  local_38 = *(undefined **)(iVar1 + 0x18);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_34 = (undefined *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  local_30 = 0;
  uStack_2c = 0;
  iVar5 = FUN_111e0a50();
  if (iVar5 != 0) {
    piVar4 = (int *)FUN_111e0a50();
    ppuVar11 = &local_38;
LAB_1120bca2:
    (**(code **)(*piVar4 + 4))(0x75,ppuVar11);
  }
LAB_1120bcac:
  local_74 = &PTR_FUN_11d18654;
  if ((DAT_1203f6ec & 1) == 0) {
    DAT_1203f6ec = DAT_1203f6ec | 1;
    FUN_102500e0("CManufactureProficiencyInfo::GetManagers");
    FUN_11a8911f(&LAB_11c97e10);
  }
  puVar9 = (undefined *)*DAT_1203f6d0;
  if ((puVar9 == (undefined *)0x0) &&
     (puVar9 = (undefined *)FUN_11679e10(&local_74,"CManufactureProficiencyInfo",0),
     puVar9 == (undefined *)0x0)) {
    if ((DAT_1203f7a8 & 1) == 0) {
      DAT_1203f774 = 0;
      DAT_1203f784 = 0;
      uRam1203f788 = 0;
      _DAT_1203f78c = 0;
      DAT_1203f790 = 0;
      DAT_1203f7a8 = DAT_1203f7a8 | 1;
      _DAT_1203f770 = &PTR_FUN_11d186a4;
      DAT_1203f794 = _DAT_11de9ae0;
      DAT_1203f798 = _UNK_11de9ae4;
      uRam1203f79c = _UNK_11de9ae8;
      DAT_1203f7a0 = _UNK_11de9aec;
      DAT_1203f7a4 = 1;
      DAT_1203f778 = puVar9;
      _DAT_1203f77c = puVar9;
      _DAT_1203f780 = puVar9;
      FUN_11a8911f(&LAB_11c97cc0);
    }
    puVar9 = &DAT_1203f770;
  }
  iVar5 = local_78 + 1;
  local_74 = &PTR_FUN_11da54a8;
  if (((iVar5 == -1) ||
      (((iVar5 == 0 && (*(int *)(puVar9 + 0x30) != 0)) || (*(int *)(puVar9 + 0x28) == 0)))) ||
     ((iVar5 = iVar5 - *(int *)(puVar9 + 0x30), iVar5 < 0 || (*(int *)(puVar9 + 0x24) <= iVar5)))) {
LAB_1120bfbd:
    local_74 = &PTR_FUN_11d18654;
    if ((DAT_1203f6ec & 1) == 0) {
      DAT_1203f6ec = DAT_1203f6ec | 1;
      FUN_102500e0("CManufactureProficiencyInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e10);
    }
    puVar9 = (undefined *)*DAT_1203f6d0;
    if ((puVar9 == (undefined *)0x0) &&
       (puVar9 = (undefined *)FUN_11679e10(&local_74,"CManufactureProficiencyInfo",0),
       puVar9 == (undefined *)0x0)) {
      if ((DAT_1203f7a8 & 1) == 0) {
        DAT_1203f774 = 0;
        DAT_1203f784 = 0;
        uRam1203f788 = 0;
        _DAT_1203f78c = 0;
        DAT_1203f790 = 0;
        DAT_1203f7a8 = DAT_1203f7a8 | 1;
        _DAT_1203f770 = &PTR_FUN_11d186a4;
        DAT_1203f794 = _DAT_11de9ae0;
        DAT_1203f798 = _UNK_11de9ae4;
        uRam1203f79c = _UNK_11de9ae8;
        DAT_1203f7a0 = _UNK_11de9aec;
        DAT_1203f7a4 = 1;
        DAT_1203f778 = puVar9;
        _DAT_1203f77c = puVar9;
        _DAT_1203f780 = puVar9;
        FUN_11a8911f(&LAB_11c97cc0);
      }
      puVar9 = &DAT_1203f770;
    }
    local_74 = &PTR_FUN_11da54a8;
    if (((local_78 != -1) &&
        (((local_78 != 0 || (*(int *)(puVar9 + 0x30) == 0)) &&
         (iVar5 = *(int *)(puVar9 + 0x28), iVar5 != 0)))) &&
       ((iVar12 = local_78 - *(int *)(puVar9 + 0x30), -1 < iVar12 &&
        (iVar12 < *(int *)(puVar9 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar12 / iVar5) * 4);
      if ((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + (iVar12 % iVar5) * 4), iVar5 != 0)) {
        local_40 = *(undefined4 *)(iVar1 + 0x18);
        local_38 = *(undefined **)(iVar5 + 0x24);
        local_34 = (undefined *)0x0;
        uStack_c = uStack_c & 0xffffff00;
        local_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        local_3c = local_78;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = local_40;
        iVar12 = FUN_100e5b40(&uStack_58);
        FUN_100ec080(&local_30,0x20,*(undefined4 *)(iVar12 + 0x14),0x20);
        if ((puStack_44 != &uStack_58) && (puStack_44 != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_44);
        }
        local_34 = *(undefined **)(iVar5 + 0x20);
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        goto LAB_1120c13f;
      }
    }
  }
  else {
    iVar12 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar5 / *(int *)(puVar9 + 0x28)) * 4);
    if ((iVar12 == 0) ||
       (local_7c = *(undefined ***)(iVar12 + (iVar5 % *(int *)(puVar9 + 0x28)) * 4),
       local_7c == (undefined **)0x0)) goto LAB_1120bfbd;
    local_40 = *(undefined4 *)(iVar1 + 0x18);
    local_38 = local_7c[9];
    local_34 = (undefined *)0x0;
    uStack_c = uStack_c & 0xffffff00;
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_3c = local_78;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = local_40;
    iVar5 = FUN_100e5b40(&uStack_58);
    FUN_100ec080(&local_30,0x20,*(undefined4 *)(iVar5 + 0x14),0x20);
    if ((puStack_44 != &uStack_58) && (puStack_44 != (undefined4 *)0x0)) {
      FUN_10c3d5d0(puStack_44);
    }
    uStack_c = uStack_c & 0xffffff00;
    local_34 = local_7c[8];
LAB_1120c13f:
    iVar5 = FUN_111e0a50();
    if (iVar5 != 0) {
      piVar4 = (int *)FUN_111e0a50();
      (**(code **)(*piVar4 + 4))(0xa6,&local_40);
    }
  }
  iVar5 = local_94;
  if (local_88 != 0) {
    while (iVar5 != 0) {
      FUN_1120c780(*(undefined4 *)(iVar5 + 0xc));
      iVar12 = *(int *)(iVar5 + 8);
      FUN_10c3d5d0(iVar5);
      iVar5 = iVar12;
    }
  }
LAB_1120c1a0:
  FUN_11a89daa();
  return;
}



