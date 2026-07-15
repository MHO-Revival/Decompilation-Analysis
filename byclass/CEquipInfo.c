// ===== class CEquipInfo  (8 recovered methods) =====

/* --- CEquipInfo::GetManagers @ 1052bd00 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// strings:
//   ""CEquipInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   strings:
     ""CEquipInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be940 & 1) == 0) {
    DAT_123be940 = DAT_123be940 | 1;
    _DAT_123be938 = &DAT_123be928;
    DAT_123be93c = &DAT_123be928;
    DAT_123be928 = 0;
    FUN_100d83d0("CEquipInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fdb0);
  }
  return DAT_123be924;
}



/* --- CEquipInfo::GetManagers_1112ea10 @ 1112ea10 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// calls: memmove
// strings:
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""

/* WARNING: Removing unreachable block (ram,0x1112ea59) */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   calls: memmove
   strings:
     ""CEquipInfo::GetManagers""
     ""CEquipInfo"" */

void __fastcall CEquipInfo__GetManagers_1112ea10(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint extraout_EDX;
  undefined4 *puVar6;
  int iVar7;
  uint local_10;
  undefined **local_c;
  undefined1 local_5;
  
  puVar6 = (undefined4 *)param_1[0x96];
  if (puVar6 != (undefined4 *)param_1[0x97]) {
    do {
      (**(code **)(**(int **)(param_1[3] + 0x10) + 0x54))(*puVar6,1);
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined4 *)param_1[0x97]);
  }
  if (param_1[0x96] != param_1[0x97]) {
    param_1[0x97] = param_1[0x96];
  }
  FUN_10274360();
  uVar3 = (**(code **)(*param_1 + 4))();
  FUN_111e0b70(param_1 + 0x9f,uVar3);
  iVar7 = param_1[0x9f];
  if (0 < iVar7) {
    local_c = &PTR_FUN_11dc0b38;
    if ((DAT_123be940 & 1) == 0) {
      DAT_123be940 = DAT_123be940 | 1;
      FUN_102500e0("CEquipInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fdb0);
    }
    puVar4 = (undefined *)*DAT_123be924;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_c,"CEquipInfo",0), puVar4 == (undefined *)0x0)) {
      if ((DAT_123be700 & 1) == 0) {
        DAT_123be700 = DAT_123be700 | 1;
        FUN_1053c9e0();
        FUN_11a8911f(&LAB_11c96a40);
      }
      puVar4 = &DAT_123be6c8;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((iVar7 != -1) &&
        (((iVar7 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)))) &&
       ((iVar7 = iVar7 - *(int *)(puVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar4 + 0x24)))))
    {
      iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar7 / *(int *)(puVar4 + 0x28)) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar7 % *(int *)(puVar4 + 0x28)) * 4) != 0)) {
        local_10 = (uint)*(byte *)((int)param_1 + 0x28d);
        FUN_100ed750();
        uVar5 = local_10;
        if ((extraout_EDX & 0x800000) != 0) {
          uVar5 = FUN_1025b060();
        }
        iVar7 = FUN_116c4820(uVar5);
        if (iVar7 != 0) {
          DAT_11dfa3c4 = param_1[0x9f];
          DAT_11dfa3c8 = (uint)*(byte *)((int)param_1 + 0x28d);
          local_10 = (**(code **)(**(int **)(param_1[3] + 0x10) + 0x44))(0,iVar7,0,0,1);
          DAT_11dfa3c4 = 0;
          DAT_11dfa3c8 = 0;
          if (0 < (int)local_10) {
            puVar2 = (uint *)param_1[0x97];
            if (puVar2 != (uint *)param_1[0x98]) {
              *puVar2 = local_10;
              param_1[0x97] = param_1[0x97] + 4;
              return;
            }
            FUN_10463c40(puVar2,&local_10,&local_5,1,1);
          }
        }
      }
    }
  }
  return;
}



/* --- CEquipInfo::GetManagers_111e0f20 @ 111e0f20 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// strings:
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""

/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   strings:
     ""CEquipInfo::GetManagers""
     ""CEquipInfo"" */

void __fastcall CEquipInfo__GetManagers_111e0f20(undefined **param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  ppuVar4 = param_1 + 1;
  local_8 = param_1;
  do {
    if ((iVar6 != 0) && (puVar1 = *ppuVar4, 0 < (int)puVar1)) {
      local_8 = &PTR_FUN_11dc0b38;
      if ((DAT_123be940 & 1) == 0) {
        DAT_123be940 = DAT_123be940 | 1;
        FUN_102500e0("CEquipInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fdb0);
      }
      puVar3 = (undefined *)*DAT_123be924;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_8,"CEquipInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123be700 & 1) == 0) {
            DAT_123be700 = DAT_123be700 | 1;
            FUN_1053c9e0();
            FUN_11a8911f(&LAB_11c97230);
          }
          puVar3 = &DAT_123be6c8;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((puVar1 != (undefined *)0xffffffff) &&
         ((((puVar1 != (undefined *)0x0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (*(int *)(puVar3 + 0x28) != 0)) &&
          ((iVar5 = (int)puVar1 - *(int *)(puVar3 + 0x30), -1 < iVar5 &&
           (iVar5 < *(int *)(puVar3 + 0x24))))))) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / *(int *)(puVar3 + 0x28)) * 4);
        if ((iVar2 != 0) &&
           (((iVar5 = *(int *)(iVar2 + (iVar5 % *(int *)(puVar3 + 0x28)) * 4), iVar5 != 0 &&
             (iVar5 = *(int *)(iVar5 + 0x120), iVar5 != 0)) && (iVar5 != 2)))) {
          FUN_11672970(1);
          FUN_11672810();
          return;
        }
      }
    }
    iVar6 = iVar6 + 1;
    ppuVar4 = ppuVar4 + 6;
    if (0x17 < iVar6) {
      FUN_11672970(0);
      FUN_11672810();
      return;
    }
  } while( true );
}



/* --- CEquipInfo::GetManagers_1120fbf0 @ 1120fbf0 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// strings:
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   strings:
     ""CEquipInfo::GetManagers""
     ""CEquipInfo"" */

undefined4 CEquipInfo__GetManagers_1120fbf0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined4 local_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_14 [8];
  undefined **local_c;
  undefined1 local_5;
  
  puStack_30 = &local_38;
  local_28 = 0;
  local_24 = param_1._3_1_;
  local_38 = 0;
  iVar4 = *param_1;
  uVar3 = 0;
  iStack_34 = 0;
  piVar6 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_2c = puStack_30;
  if (param_1[1] - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + uVar3 * 4);
      local_c = &PTR_FUN_11dc0b38;
      if ((DAT_123be940 & 1) == 0) {
        DAT_123be940 = DAT_123be940 | 1;
        FUN_102500e0("CEquipInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fdb0);
      }
      puVar2 = (undefined *)*DAT_123be924;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_c,"CEquipInfo",0), puVar2 == (undefined *)0x0))
      {
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
          DAT_123be6d0 = puVar2;
          _DAT_123be6d4 = puVar2;
          _DAT_123be6d8 = puVar2;
          FUN_11a8911f(&LAB_11c97ea0);
        }
        puVar2 = &DAT_123be6c8;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar4 != -1) &&
         (((iVar4 != 0 || (*(int *)(puVar2 + 0x30) == 0)) && (*(int *)(puVar2 + 0x28) != 0)))) {
        iVar4 = iVar4 - *(int *)(puVar2 + 0x30);
        if ((iVar4 < 0) || (*(int *)(puVar2 + 0x24) <= iVar4)) {
LAB_1120fd40:
          ppuVar5 = (undefined **)0x0;
        }
        else {
          iVar1 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar4 / *(int *)(puVar2 + 0x28)) * 4);
          if (iVar1 == 0) goto LAB_1120fd40;
          ppuVar5 = *(undefined ***)(iVar1 + (iVar4 % *(int *)(puVar2 + 0x28)) * 4);
        }
        local_c = ppuVar5;
        if (ppuVar5 != (undefined **)0x0) {
          if (piVar6 == local_18) {
            FUN_11213220(piVar6,&local_c,&local_5,1,1);
          }
          else {
            *piVar6 = (int)ppuVar5;
            local_1c = piVar6 + 1;
          }
          piVar6 = local_1c;
          local_c = (undefined **)ppuVar5[0x9f];
          FUN_10467580(local_14,&local_c);
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = *param_1;
    } while (uVar3 < (uint)(param_1[1] - iVar4 >> 2));
  }
  iVar4 = local_20;
  CEquipSuitEffectInfo__GetManagers_11212bc0(&local_20,param_2,&local_38,0,param_3);
  if (iVar4 != 0) {
    FUN_10c3d5d0(iVar4);
  }
  iVar4 = iStack_34;
  if (local_28 != 0) {
    while (iVar4 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar4 + 0xc));
      iVar1 = *(int *)(iVar4 + 8);
      FUN_10c3d5d0(iVar4);
      iVar4 = iVar1;
    }
  }
  return 0;
}



/* --- CEquipInfo::GetManagers_113023d0 @ 113023d0 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// calls: puts, exit, memcpy, sprintf
// strings:
//   ""CSuitCfgInfo""
//   ""CEquipInfo""
//   ""CEquipInfo::GetManagers""
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""
//   ""out of memory\n""
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""CEquipSuitSkillGroupInfo""
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""CEquipPassiveSkillGroupInfo""

/* WARNING: Removing unreachable block (ram,0x11303279) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   calls: puts, exit, memcpy, sprintf
   strings:
     ""CSuitCfgInfo""
     ""CEquipInfo""
     ""CEquipInfo::GetManagers""
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo""
     ""out of memory\n""
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""CEquipSuitSkillGroupInfo""
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""CEquipPassiveSkillGroupInfo"" */

void CEquipInfo__GetManagers_113023d0
               (int param_1,int param_2,char param_3,int *param_4,undefined **param_5,char param_6)

{
  undefined **ppuVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  size_t _Size;
  undefined1 local_12c [8];
  undefined1 local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined **local_104;
  undefined4 local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined4 local_e8;
  int iStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  int local_d8;
  undefined1 local_d4;
  int local_d0;
  int local_cc;
  char *local_c8 [2];
  char local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  int local_80;
  undefined1 local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined **local_6c;
  undefined4 local_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  int local_58;
  undefined1 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined1 local_48 [4];
  uint local_44;
  uint local_40;
  int local_3c;
  undefined **local_38;
  int local_34;
  undefined **local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  undefined **local_20;
  undefined1 local_19;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_24 = param_4;
  if (param_1 != 0) {
    iVar17 = *(int *)(param_1 + 0x27c);
    iVar4 = FUN_10831430(0,"CSuitCfgInfo",0);
    iVar18 = local_3c;
    if ((iVar17 != -1) &&
       ((((iVar17 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
         (iVar13 = *(int *)(iVar4 + 0x28), iVar13 != 0)) &&
        ((iVar17 = iVar17 - *(int *)(iVar4 + 0x30), -1 < iVar17 && (iVar17 < *(int *)(iVar4 + 0x24))
         ))))) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar17 / iVar13) * 4);
      if ((iVar4 != 0) && (iVar17 = *(int *)(iVar4 + (iVar17 % iVar13) * 4), iVar17 != 0)) {
        *local_24 = *(int *)(local_3c + 0x27c);
        puVar6 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar17 + 0x14) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(iVar17 + 0x14);
        }
        FUN_100e5d80(puVar6);
        if (*(int *)(local_28 + 0xc) != 0) {
          local_f4 = *(undefined4 *)(*(int *)(local_28 + 0xc) + 0x2cd4);
          local_40 = FUN_11522980(iVar18);
          puStack_e0 = &local_e8;
          local_e8 = 0;
          uVar19 = 0;
          local_d4 = local_19;
          iStack_e4 = 0;
          local_d8 = 0;
          puStack_dc = puStack_e0;
          if (*(int *)(iVar17 + 0x1c) - *(int *)(iVar17 + 0x18) >> 2 != 0) {
            do {
              iVar18 = *(int *)(*(int *)(iVar17 + 0x18) + uVar19 * 4);
              iVar4 = FUN_1053a9e0(0,"CEquipInfo",0);
              if ((((iVar18 != -1) && ((iVar18 != 0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
                  (*(int *)(iVar4 + 0x28) != 0)) &&
                 ((iVar18 = iVar18 - *(int *)(iVar4 + 0x30), -1 < iVar18 &&
                  (iVar18 < *(int *)(iVar4 + 0x24))))) {
                iVar13 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar18 / *(int *)(iVar4 + 0x28)) * 4);
                if ((iVar13 != 0) &&
                   (iVar18 = *(int *)(iVar13 + (iVar18 % *(int *)(iVar4 + 0x28)) * 4), iVar18 != 0))
                {
                  local_28 = FUN_11522980(iVar18);
                  FUN_112ff170(&local_28);
                  puVar6 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar18 + 0x14) != (undefined1 *)0x0) {
                    puVar6 = *(undefined1 **)(iVar18 + 0x14);
                  }
                  FUN_100e5d80(puVar6);
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < (uint)(*(int *)(iVar17 + 0x1c) - *(int *)(iVar17 + 0x18) >> 2));
          }
          local_68 = 0;
          puStack_64 = (undefined4 *)0x0;
          local_24[3] = local_d8;
          puStack_60 = &local_68;
          local_54 = local_19;
          local_58 = 0;
          local_20 = (undefined **)0x0;
          puStack_5c = puStack_60;
          if (*(int *)(iVar17 + 0x1c) - *(int *)(iVar17 + 0x18) >> 2 != 0) {
            do {
              local_30 = &PTR_FUN_11dc0b38;
              iVar18 = *(int *)(*(int *)(iVar17 + 0x18) + (int)local_20 * 4);
              if ((DAT_123be940 & 1) == 0) {
                DAT_123be940 = DAT_123be940 | 1;
                FUN_102500e0("CEquipInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6fdb0);
              }
              puVar5 = (undefined *)*DAT_123be924;
              if ((puVar5 == (undefined *)0x0) &&
                 (puVar5 = (undefined *)FUN_11679e10(&local_30,"CEquipInfo",0),
                 puVar5 == (undefined *)0x0)) {
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
                  DAT_123be6d0 = puVar5;
                  _DAT_123be6d4 = puVar5;
                  _DAT_123be6d8 = puVar5;
                  FUN_11a8911f(&LAB_11c9aa70);
                }
                puVar5 = &DAT_123be6c8;
              }
              local_30 = &PTR_FUN_11da54a8;
              if (((iVar18 != -1) &&
                  (((iVar18 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
                   (iVar4 = *(int *)(puVar5 + 0x28), iVar4 != 0)))) &&
                 ((iVar18 = iVar18 - *(int *)(puVar5 + 0x30), -1 < iVar18 &&
                  (iVar18 < *(int *)(puVar5 + 0x24))))) {
                iVar13 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar18 / iVar4) * 4);
                if ((iVar13 != 0) && (iVar18 = *(int *)(iVar13 + (iVar18 % iVar4) * 4), iVar18 != 0)
                   ) {
                  FUN_100e5570();
                  puVar6 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar18 + 0x14) != (undefined1 *)0x0) {
                    puVar6 = *(undefined1 **)(iVar18 + 0x14);
                  }
                  FUN_100e5d80(puVar6);
                  local_44 = local_44 & 0xffffff00;
                  uVar19 = FUN_11522980(iVar18);
                  if (param_3 == '\0') {
                    if (uVar19 == local_40) {
                      local_28 = local_40;
                      local_24[2] = local_24[2] + 1;
                      puVar6 = local_f0;
LAB_1130279d:
                      local_44 = CONCAT31(local_44._1_3_,1);
                      FUN_10467580(puVar6,&local_28);
                    }
                  }
                  else {
                    iVar18 = *(int *)(param_2 + 4);
                    iVar4 = param_2;
                    local_28 = uVar19;
                    if (*(int *)(param_2 + 4) != 0) {
                      do {
                        if (*(int *)(iVar18 + 0x10) < (int)uVar19) {
                          iVar13 = *(int *)(iVar18 + 0xc);
                        }
                        else {
                          iVar13 = *(int *)(iVar18 + 8);
                          iVar4 = iVar18;
                        }
                        iVar18 = iVar13;
                      } while (iVar13 != 0);
                      if (((iVar4 != param_2) && (*(int *)(iVar4 + 0x10) <= (int)uVar19)) &&
                         ((*(int *)(iVar4 + 0x14) != 0 &&
                          (iVar18 = FUN_1166c4b0(), *(int *)(iVar18 + 0x27c) == *local_24)))) {
                        local_24[2] = local_24[2] + 1;
                        puVar6 = local_50;
                        goto LAB_1130279d;
                      }
                    }
                  }
                  piVar2 = local_24;
                  iVar18 = local_24[5];
                  if (iVar18 == local_24[6]) {
                    FUN_11304180(iVar18,local_48,&local_19,1,1);
                  }
                  else {
                    if (iVar18 != 0) {
                      FUN_100e5580(local_48);
                      *(undefined1 *)(iVar18 + 4) = (undefined1)local_44;
                    }
                    piVar2[5] = piVar2[5] + 8;
                  }
                  FUN_100e5670();
                }
              }
              local_20 = (undefined **)((int)local_20 + 1);
            } while (local_20 <
                     (undefined **)(*(int *)(iVar17 + 0x1c) - *(int *)(iVar17 + 0x18) >> 2));
          }
          local_6c = &PTR_FUN_11dd04b0;
          iVar17 = *(int *)(local_3c + 0x27c);
          if ((DAT_123bf784 & 1) == 0) {
            DAT_123bf784 = DAT_123bf784 | 1;
            FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
            FUN_11a8911f(&LAB_11c73040);
          }
          puVar5 = (undefined *)*DAT_123bf788;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&local_6c,"CEquipSuitEffectInfo",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_123bf4f0 & 1) == 0) {
              DAT_123bf4f8 = 0;
              DAT_123bf508 = 0;
              DAT_123bf50c = 0;
              _DAT_123bf510 = 0;
              DAT_123bf514 = 0;
              DAT_123bf4f0 = DAT_123bf4f0 | 1;
              _DAT_123bf4f4 = &PTR_FUN_11dd0544;
              DAT_123bf518 = _DAT_11de9ae0;
              DAT_123bf51c = _UNK_11de9ae4;
              uRam123bf520 = _UNK_11de9ae8;
              DAT_123bf524 = _UNK_11de9aec;
              DAT_123bf528 = 1;
              DAT_123bf4fc = puVar5;
              _DAT_123bf500 = puVar5;
              _DAT_123bf504 = puVar5;
              FUN_11a8911f(&LAB_11c9ab30);
            }
            puVar5 = &DAT_123bf4f4;
          }
          local_6c = &PTR_FUN_11da54a8;
          if (((iVar17 != -1) &&
              (((iVar17 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
               (iVar18 = *(int *)(puVar5 + 0x28), iVar18 != 0)))) &&
             ((iVar17 = iVar17 - *(int *)(puVar5 + 0x30), -1 < iVar17 &&
              (iVar17 < *(int *)(puVar5 + 0x24))))) {
            iVar4 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar17 / iVar18) * 4);
            if ((iVar4 != 0) && (local_44 = *(uint *)(iVar4 + (iVar17 % iVar18) * 4), local_44 != 0)
               ) {
              puStack_88 = &local_90;
              local_80 = 0;
              local_d0 = -1;
              local_7c = local_19;
              local_90 = 0;
              uStack_8c = 0;
              iVar18 = *(int *)(local_44 + 0x1c) - *(int *)(local_44 + 0x18);
              local_78 = 0;
              iVar17 = iVar18 >> 0x1f;
              local_74 = (undefined4 *)0x0;
              local_70 = (undefined4 *)0x0;
              local_cc = -1;
              local_28 = 0;
              puStack_84 = puStack_88;
              if (iVar18 / 0x6c + iVar17 != iVar17) {
                do {
                  iVar17 = local_28 * 0x6c + *(int *)(local_44 + 0x18);
                  local_34 = iVar17;
                  FUN_100e5570();
                  FUN_100e5570();
                  local_b8 = 0;
                  local_b4 = 0;
                  local_b0 = 0;
                  puVar6 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar17 + 0x38) != (undefined1 *)0x0) {
                    puVar6 = *(undefined1 **)(iVar17 + 0x38);
                  }
                  FUN_100e5d80(puVar6);
                  puVar6 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar17 + 0x3c) != (undefined1 *)0x0) {
                    puVar6 = *(undefined1 **)(iVar17 + 0x3c);
                  }
                  FUN_100e5d80(puVar6);
                  local_bc = *(undefined4 *)(iVar17 + 0x34);
                  iVar18 = 0;
                  local_c0 = '\x01';
                  local_94 = 1;
                  local_98 = 0;
                  cVar3 = '\x01';
                  if (*(int *)(iVar17 + 0x44) - *(int *)(iVar17 + 0x40) >> 2 != 0) {
                    uVar19 = 0;
                    do {
                      FUN_100e5570();
                      local_4c = 0;
                      puVar7 = (undefined4 *)FUN_10987e90(*(int *)(iVar17 + 0x40) + uVar19 * 4);
                      puVar6 = &DAT_11d9d32b;
                      if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
                        puVar6 = (undefined1 *)*puVar7;
                      }
                      FUN_100e5d80(puVar6);
                      iVar4 = local_b4;
                      puVar7 = &local_68;
                      puVar8 = puVar7;
                      if (puStack_64 != (undefined4 *)0x0) {
                        iVar17 = *(int *)(*(int *)(iVar17 + 0x40) + uVar19 * 4);
                        puVar8 = puStack_64;
                        do {
                          if ((int)puVar8[4] < iVar17) {
                            puVar9 = (undefined4 *)puVar8[3];
                          }
                          else {
                            puVar9 = (undefined4 *)puVar8[2];
                            puVar7 = puVar8;
                          }
                          puVar8 = puVar9;
                        } while (puVar9 != (undefined4 *)0x0);
                        puVar8 = puVar7;
                        if ((puVar7 != &local_68) && (puVar8 = &local_68, (int)puVar7[4] <= iVar17))
                        {
                          puVar8 = puVar7;
                        }
                      }
                      if (puVar8 == &local_68) {
                        local_c0 = '\0';
                        if (param_3 == '\0') {
                          local_4c = 0;
                          goto LAB_11302ad5;
                        }
                      }
                      else {
                        local_4c = 1;
LAB_11302ad5:
                        iVar18 = iVar18 + 1;
                      }
                      if (local_b4 == local_b0) {
                        FUN_11304180(local_b4,local_50,&local_19,1,1);
                      }
                      else {
                        if (local_b4 != 0) {
                          FUN_100e5580(local_50);
                          *(undefined1 *)(iVar4 + 4) = local_4c;
                        }
                        local_b4 = local_b4 + 8;
                      }
                      FUN_100e5670();
                      uVar19 = uVar19 + 1;
                      iVar17 = local_34;
                      cVar3 = local_c0;
                    } while (uVar19 < (uint)(*(int *)(local_34 + 0x44) - *(int *)(local_34 + 0x40)
                                            >> 2));
                  }
                  local_c0 = cVar3;
                  local_ac = *(int *)(iVar17 + 0x34) -
                             (*(int *)(iVar17 + 0x44) - *(int *)(iVar17 + 0x40) >> 2);
                  local_a8 = local_24[2] - iVar18;
                  if (local_a8 < local_ac) {
                    local_c0 = '\0';
                  }
                  uVar19 = *(int *)(iVar17 + 100) - *(int *)(iVar17 + 0x60) >> 2;
                  if (0x3fffffff < uVar19) {
LAB_11302ba0:
                    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                  }
                  if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580(uVar19 << 2);
                  }
                  local_40 = 0;
                  pvVar12 = *(void **)(iVar17 + 0x60);
                  if (*(void **)(iVar17 + 100) != pvVar12) {
                    memcpy((void *)0x0,pvVar12,(int)*(void **)(iVar17 + 100) - (int)pvVar12);
                  }
                  iVar18 = -1;
                  local_2c = -1;
                  if ((*(int *)(iVar17 + 100) - *(int *)(iVar17 + 0x60) & 0xfffffffcU) == 8) {
                    local_2c = (*(int **)(iVar17 + 0x60))[1];
                    iVar18 = **(int **)(iVar17 + 0x60);
                  }
                  iVar4 = local_2c;
                  ppuVar10 = param_5;
                  if (param_6 != '\0') {
                    ppuVar10 = (undefined **)FUN_11572960(iVar18);
                  }
                  iVar16 = local_2c;
                  iVar13 = *(int *)(iVar17 + 0x4c);
                  local_20 = ppuVar10;
                  if (((iVar13 == 1) && (-1 < iVar18)) && (-1 < iVar4)) {
                    local_30 = (undefined **)0xffffffff;
                    local_3c = -1;
                    if ((*(int *)(local_34 + 0x54) - *(int *)(local_34 + 0x50) & 0xfffffffcU) == 8)
                    {
                      local_30 = (undefined **)**(undefined4 **)(local_34 + 0x50);
                      local_3c = (*(undefined4 **)(local_34 + 0x50))[1];
                    }
                    ppuVar10 = local_30;
                    uVar19 = 0;
                    uVar14 = (int)local_74 - local_78 >> 2;
                    if (uVar14 != 0) {
                      do {
                        if (*(undefined ***)(local_78 + uVar19 * 4) == local_30) goto LAB_11302c99;
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < uVar14);
                    }
                    if (local_74 == local_70) {
                      FUN_10463c40(local_74,&local_30,&local_19,1,1);
                    }
                    else {
                      *local_74 = local_30;
                      local_74 = local_74 + 1;
                    }
LAB_11302c99:
                    if ((-1 < (int)ppuVar10) && (-1 < local_3c)) {
                      FUN_100e5570();
                      FUN_100e5570();
                      local_104 = local_20;
                      local_11c = 0;
                      local_118 = 0;
                      local_114 = 0;
                      local_120 = *(undefined4 *)(local_34 + 0x34);
                      local_100 = 2;
                      local_124 = 1;
                      local_38 = &PTR_FUN_11de1860;
                      if ((DAT_123c8a54 & 1) == 0) {
                        DAT_123c8a54 = DAT_123c8a54 | 1;
                        FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
                        FUN_11a8911f(&LAB_11c7b110);
                      }
                      puVar5 = (undefined *)*DAT_123c8a58;
                      if ((puVar5 == (undefined *)0x0) &&
                         (puVar5 = (undefined *)FUN_11679e10(&local_38,"CEquipSuitSkillGroupInfo",0)
                         , puVar5 == (undefined *)0x0)) {
                        if ((DAT_123c8ad8 & 1) == 0) {
                          DAT_123c8ae0 = 0;
                          DAT_123c8af0 = 0;
                          uRam123c8af4 = 0;
                          _DAT_123c8af8 = 0;
                          DAT_123c8afc = 0;
                          DAT_123c8ad8 = DAT_123c8ad8 | 1;
                          _DAT_123c8adc = &PTR_FUN_11de1870;
                          DAT_123c8b00 = _DAT_11de9ae0;
                          DAT_123c8b04 = _UNK_11de9ae4;
                          uRam123c8b08 = _UNK_11de9ae8;
                          DAT_123c8b0c = _UNK_11de9aec;
                          DAT_123c8b10 = 1;
                          DAT_123c8ae4 = puVar5;
                          _DAT_123c8ae8 = puVar5;
                          _DAT_123c8aec = puVar5;
                          FUN_11a8911f(&LAB_11c9ab90);
                        }
                        puVar5 = &DAT_123c8adc;
                      }
                      local_38 = &PTR_FUN_11da54a8;
                      if ((iVar18 != -1) &&
                         ((((iVar18 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
                           (iVar17 = *(int *)(puVar5 + 0x28), iVar16 = local_2c, iVar17 != 0)) &&
                          ((iVar4 = iVar18 - *(int *)(puVar5 + 0x30), -1 < iVar4 &&
                           (iVar4 < *(int *)(puVar5 + 0x24))))))) {
                        iVar13 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar4 / iVar17) * 4);
                        if ((iVar13 != 0) &&
                           (iVar17 = *(int *)(iVar13 + (iVar4 % iVar17) * 4), iVar17 != 0)) {
                          puVar6 = *(undefined1 **)(iVar17 + 0x14);
                          puVar15 = &DAT_11d9d32b;
                          if (puVar6 != (undefined1 *)0x0) {
                            puVar15 = puVar6;
                          }
                          FUN_100e5d80(puVar15);
                          iVar16 = local_2c;
                        }
                      }
                      if ((*(int *)(local_34 + 0x34) == local_d0) && (iVar18 == local_cc)) {
                        local_f8 = 0;
                      }
                      else {
                        local_f8 = 1;
                        local_d0 = *(int *)(local_34 + 0x34);
                        local_cc = iVar18;
                      }
                      local_9c = 0;
                      local_38 = &PTR_FUN_11dbffc8;
                      if ((DAT_123be514 & 1) == 0) {
                        DAT_123be514 = DAT_123be514 | 1;
                        FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
                        FUN_11a8911f(&LAB_11c6f650);
                      }
                      pppuVar11 = (undefined ***)*DAT_123be518;
                      if ((pppuVar11 == (undefined ***)0x0) &&
                         (pppuVar11 = (undefined ***)
                                      FUN_11679e10(&local_38,"CEquipPassiveSkillGroupInfo",0),
                         pppuVar11 == (undefined ***)0x0)) {
                        if ((DAT_123be440 & 1) == 0) {
                          DAT_123be448 = 0;
                          DAT_123be458 = 0;
                          DAT_123be45c = 0;
                          _DAT_123be460 = 0;
                          DAT_123be464 = 0;
                          DAT_123be440 = DAT_123be440 | 1;
                          DAT_123be444 = &PTR_FUN_11dc0070;
                          DAT_123be468 = _DAT_11de9ae0;
                          DAT_123be46c = _UNK_11de9ae4;
                          uRam123be470 = _UNK_11de9ae8;
                          DAT_123be474 = _UNK_11de9aec;
                          DAT_123be478 = 1;
                          DAT_123be44c = pppuVar11;
                          _DAT_123be450 = pppuVar11;
                          _DAT_123be454 = pppuVar11;
                          FUN_11a8911f(&LAB_11c9aad0);
                        }
                        pppuVar11 = &DAT_123be444;
                      }
                      local_38 = &PTR_FUN_11da54a8;
                      if (((ppuVar10 != (undefined **)0xffffffff) &&
                          (((ppuVar10 != (undefined **)0x0 || (pppuVar11[0xc] == (undefined **)0x0))
                           && (ppuVar1 = pppuVar11[10], ppuVar1 != (undefined **)0x0)))) &&
                         ((iVar17 = (int)ppuVar10 - (int)pppuVar11[0xc], -1 < iVar17 &&
                          (iVar17 < (int)pppuVar11[9])))) {
                        if ((pppuVar11[8][iVar17 / (int)ppuVar1] != (undefined *)0x0) &&
                           ((iVar17 = *(int *)(pppuVar11[8][iVar17 / (int)ppuVar1] +
                                              (iVar17 % (int)ppuVar1) * 4), iVar17 != 0 &&
                            ((local_c8[0] == (char *)0x0 || (*local_c8[0] == '\0')))))) {
                          puVar6 = *(undefined1 **)(iVar17 + 0x2c);
                          puVar15 = &DAT_11d9d32b;
                          if (puVar6 != (undefined1 *)0x0) {
                            puVar15 = puVar6;
                          }
                          FUN_100e5d80(puVar15);
                          sprintf(local_18,"+%d",local_3c);
                          FUN_100e55d0(local_18);
                          FUN_100e5ed0(local_ec);
                          FUN_100e5670();
                        }
                      }
                      if ((uint)local_24[2] < *(uint *)(local_34 + 0x34)) {
                        local_c0 = '\0';
LAB_11303007:
                        local_124 = 0;
                      }
                      else {
                        local_124 = 1;
                        if ((int)local_20 < iVar16) {
                          local_c0 = '\0';
                        }
                        if (local_c0 == '\0') goto LAB_11303007;
                      }
                      local_a4 = iVar16;
                      FUN_112ff090(&local_30,local_12c);
                      FUN_11304c50();
                      FUN_112ff090(&local_30,local_c8);
                      FUN_11304c50();
                      FUN_11304c50(local_c8);
                      iVar18 = local_11c;
                      for (iVar17 = local_118; iVar17 != iVar18; iVar17 = iVar17 + -8) {
                        FUN_100e5670();
                      }
                      if (local_11c != 0) {
                        FUN_10c3d5d0(local_11c);
                      }
                      FUN_100e5670();
                      FUN_100e5670();
                    }
                  }
                  else if (iVar13 == 2) {
                    local_9c = 1;
                    uVar19 = *(int *)(iVar17 + 0x54) - *(int *)(iVar17 + 0x50) >> 2;
                    if (0x3fffffff < uVar19) goto LAB_11302ba0;
                    if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10c3d580(uVar19 << 2);
                    }
                    pvVar12 = *(void **)(local_34 + 0x50);
                    if (*(void **)(local_34 + 0x54) == pvVar12) {
                      uVar19 = 0;
                    }
                    else {
                      _Size = (int)*(void **)(local_34 + 0x54) - (int)pvVar12;
                      pvVar12 = memcpy((void *)0x0,pvVar12,_Size);
                      uVar19 = (int)pvVar12 + _Size;
                    }
                    if ((uVar19 & 0xfffffffc) == 4) {
                      local_20 = &PTR_FUN_11de1860;
                      if ((DAT_123c8a54 & 1) == 0) {
                        DAT_123c8a54 = DAT_123c8a54 | 1;
                        FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
                        FUN_11a8911f(&LAB_11c7b110);
                      }
                      puVar5 = (undefined *)*DAT_123c8a58;
                      if ((puVar5 == (undefined *)0x0) &&
                         (puVar5 = (undefined *)FUN_11679e10(&local_20,"CEquipSuitSkillGroupInfo",0)
                         , puVar5 == (undefined *)0x0)) {
                        if ((DAT_123c8ad8 & 1) == 0) {
                          DAT_123c8ae0 = 0;
                          DAT_123c8af0 = 0;
                          uRam123c8af4 = 0;
                          _DAT_123c8af8 = 0;
                          DAT_123c8afc = 0;
                          DAT_123c8ad8 = DAT_123c8ad8 | 1;
                          _DAT_123c8adc = &PTR_FUN_11de1870;
                          DAT_123c8b00 = _DAT_11de9ae0;
                          DAT_123c8b04 = _UNK_11de9ae4;
                          uRam123c8b08 = _UNK_11de9ae8;
                          DAT_123c8b0c = _UNK_11de9aec;
                          DAT_123c8b10 = 1;
                          DAT_123c8ae4 = puVar5;
                          _DAT_123c8ae8 = puVar5;
                          _DAT_123c8aec = puVar5;
                          FUN_11a8911f(&LAB_11c9ab90);
                        }
                        puVar5 = &DAT_123c8adc;
                      }
                      local_20 = &PTR_FUN_11da54a8;
                      if (((_DAT_00000000 != -1) &&
                          ((_DAT_00000000 != 0 || (*(int *)(puVar5 + 0x30) == 0)))) &&
                         ((iVar17 = *(int *)(puVar5 + 0x28), iVar17 != 0 &&
                          ((iVar18 = _DAT_00000000 - *(int *)(puVar5 + 0x30), -1 < iVar18 &&
                           (iVar18 < *(int *)(puVar5 + 0x24))))))) {
                        iVar4 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar18 / iVar17) * 4);
                        if ((iVar4 != 0) &&
                           ((iVar17 = *(int *)(iVar4 + (iVar18 % iVar17) * 4), iVar17 != 0 &&
                            (cVar3 = FUN_100e57c0(&DAT_11d9d32b), cVar3 != '\0')))) {
                          puVar6 = *(undefined1 **)(iVar17 + 0x14);
                          puVar15 = &DAT_11d9d32b;
                          if (puVar6 != (undefined1 *)0x0) {
                            puVar15 = puVar6;
                          }
                          FUN_100e5d80(puVar15);
                        }
                      }
                      if ((uint)local_24[2] < *(uint *)(local_34 + 0x34)) {
                        local_c0 = '\0';
                      }
                      FUN_11304c50(local_c8);
                    }
                  }
                  else if (iVar13 == 0) {
                    FUN_11304c50(local_c8);
                  }
                  iVar17 = local_b8;
                  iVar18 = local_b4;
                  if (local_40 != 0) {
                    FUN_10c3d5d0(local_40);
                    iVar17 = local_b8;
                    iVar18 = local_b4;
                  }
                  for (; iVar4 = local_b8, iVar18 != local_b8; iVar18 = iVar18 + -8) {
                    local_b8 = iVar17;
                    FUN_100e5670();
                    iVar17 = local_b8;
                    local_b8 = iVar4;
                  }
                  local_b8 = iVar17;
                  if (iVar17 != 0) {
                    FUN_10c3d5d0(iVar17);
                  }
                  FUN_100e5670();
                  FUN_100e5670();
                  local_28 = local_28 + 1;
                } while (local_28 <
                         (uint)((*(int *)(local_44 + 0x1c) - *(int *)(local_44 + 0x18)) / 0x6c));
              }
              if (local_78 != 0) {
                FUN_10c3d5d0(local_78);
              }
              if (local_80 != 0) {
                FUN_11303df0(uStack_8c);
                puStack_88 = &local_90;
                uStack_8c = 0;
                local_80 = 0;
                puStack_84 = puStack_88;
              }
            }
          }
          FUN_108750b0(0,0,0,&local_19);
          puVar7 = puStack_64;
          if (local_58 != 0) {
            while (puVar7 != (undefined4 *)0x0) {
              FUN_10463ae0(puVar7[3]);
              puVar8 = (undefined4 *)puVar7[2];
              FUN_10c3d5d0(puVar7);
              puVar7 = puVar8;
            }
            puStack_60 = &local_68;
            puStack_64 = (undefined4 *)0x0;
            local_58 = 0;
            puStack_5c = puStack_60;
          }
          iVar17 = iStack_e4;
          if (local_d8 != 0) {
            while (iVar17 != 0) {
              FUN_11303e60(*(undefined4 *)(iVar17 + 0xc));
              iVar18 = *(int *)(iVar17 + 8);
              FUN_100e5670();
              FUN_10c3d5d0(iVar17);
              iVar17 = iVar18;
            }
          }
          FUN_11a89daa();
          return;
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CEquipInfo::GetManagers_116c4890 @ 116c4890 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// calls: atoi
// strings:
//   ""CEquipInfo""
//   ""CEquipInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   calls: atoi
   strings:
     ""CEquipInfo""
     ""CEquipInfo::GetManagers"" */

int CEquipInfo__GetManagers_116c4890(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  piVar2 = (int *)FUN_1053a9e0(0,"CEquipInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dc0b38;
      if ((DAT_123be940 & 1) == 0) {
        DAT_123be940 = DAT_123be940 | 1;
        FUN_102500e0("CEquipInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fdb0);
      }
      puVar4 = (undefined *)*DAT_123be924;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CEquipInfo",0), puVar4 == (undefined *)0x0))
      {
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
          DAT_123be6d0 = puVar4;
          _DAT_123be6d4 = puVar4;
          _DAT_123be6d8 = puVar4;
          FUN_11a8911f(&LAB_11ca7a70);
        }
        puVar4 = &DAT_123be6c8;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar6) && (iVar6 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar6 * 4), iVar1 != 0)) &&
         (iVar5 = atoi(*(char **)(iVar1 + 0x80)), iVar5 == param_1)) {
        return iVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return 0;
}



/* --- CEquipInfo::GetManagers_118b8880 @ 118b8880 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// calls: CEquipRandPassiveSkillGroupInfo::GetManagers_116c52a0
// strings:
//   ""CEquipInfo""
//   ""CEquipInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   calls: CEquipRandPassiveSkillGroupInfo::GetManagers_116c52a0
   strings:
     ""CEquipInfo""
     ""CEquipInfo::GetManagers"" */

void CEquipInfo__GetManagers_118b8880(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1053a9e0(0,"CEquipInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc0b38;
      if ((DAT_123be940 & 1) == 0) {
        DAT_123be940 = DAT_123be940 | 1;
        FUN_102500e0("CEquipInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fdb0);
      }
      puVar4 = (undefined *)*DAT_123be924;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipInfo",0), puVar4 == (undefined *)0x0))
      {
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
          DAT_123be6d0 = puVar4;
          _DAT_123be6d4 = puVar4;
          _DAT_123be6d8 = puVar4;
          FUN_11a8911f(&LAB_11caf8b0);
        }
        puVar4 = &DAT_123be6c8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CEquipRandPassiveSkillGroupInfo__GetManagers_116c52a0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CEquipInfo::GetManagers_119f5dc0 @ 119f5dc0 --- */
// [RE-AUTO c3]
// id: CEquipInfo::GetManagers
// strings:
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipInfo::GetManagers
   strings:
     ""CEquipInfo::GetManagers""
     ""CEquipInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CEquipInfo__GetManagers_119f5dc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) & 0xfffffffcU)) {
    do {
      local_8 = &PTR_FUN_11dc0b38;
      if ((DAT_123be940 & 1) == 0) {
        DAT_123be940 = DAT_123be940 | 1;
        FUN_102500e0("CEquipInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fdb0);
      }
      if (((*DAT_123be924 == 0) && (iVar1 = FUN_11679e10(&local_8,"CEquipInfo",0), iVar1 == 0)) &&
         ((DAT_123be700 & 1) == 0)) {
        DAT_123be6cc = 0;
        DAT_123be6dc = 0;
        DAT_123be6e0 = 0;
        _DAT_123be6e4 = 0;
        DAT_123be6e8 = 0;
        DAT_123be700 = DAT_123be700 | 1;
        DAT_123be6d0 = 0;
        _DAT_123be6d4 = 0;
        _DAT_123be6d8 = 0;
        _DAT_123be6c8 = &PTR_FUN_11dc0da0;
        DAT_123be6ec = _DAT_11de9ae0;
        DAT_123be6f0 = _UNK_11de9ae4;
        uRam123be6f4 = _UNK_11de9ae8;
        DAT_123be6f8 = _UNK_11de9aec;
        DAT_123be6fc = 1;
        FUN_11a8911f(&LAB_11cb5540);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2);
  }
  iVar2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) & 0xfffffff8U)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
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
        FUN_11a8911f(&LAB_11cb55a0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 3);
  }
  return;
}



