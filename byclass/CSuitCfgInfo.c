// ===== class CSuitCfgInfo  (5 recovered methods) =====

/* --- CSuitCfgInfo::GetManagers @ 1082e170 --- */
// [RE-AUTO c3]
// id: CSuitCfgInfo::GetManagers
// strings:
//   ""CSuitCfgInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitCfgInfo::GetManagers
   strings:
     ""CSuitCfgInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSuitCfgInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf32c & 1) == 0) {
    DAT_123bf32c = DAT_123bf32c | 1;
    _DAT_123bf344 = &DAT_123bf334;
    DAT_123bf348 = &DAT_123bf334;
    DAT_123bf334 = 0;
    FUN_100d83d0("CSuitCfgInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72220);
  }
  return DAT_123bf330;
}



/* --- CSuitCfgInfo::GetManagers_11300ae0 @ 11300ae0 --- */
// [RE-AUTO c3]
// id: CSuitCfgInfo::GetManagers
// strings:
//   ""CSuitCfgInfo::GetManagers""
//   ""CSuitCfgInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitCfgInfo::GetManagers
   strings:
     ""CSuitCfgInfo::GetManagers""
     ""CSuitCfgInfo"" */

void __thiscall CSuitCfgInfo__GetManagers_11300ae0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined **ppuVar13;
  undefined4 local_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int local_44;
  undefined1 local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  undefined *local_30;
  undefined4 local_2c;
  int local_28;
  undefined *local_24;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  int local_14;
  undefined **local_10;
  uint local_c;
  undefined1 local_5;
  
  puStack_4c = &local_54;
  local_c = 0;
  iVar11 = 0x17;
  piVar12 = (int *)(param_2 + 0x16c8);
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_54 = 0;
  iStack_50 = 0;
  local_44 = 0;
  local_40 = param_2._3_1_;
  puStack_48 = puStack_4c;
  local_14 = param_1;
  do {
    if ((*piVar12 != 0) && (cVar4 = FUN_116698a0(), cVar4 != '\0')) {
      piVar5 = (int *)FUN_1166c4b0();
      local_1c = (**(code **)(*piVar5 + 0x18))();
      if (local_38 == local_34) {
        FUN_10109320(local_38,&local_1c,&local_5,1,1);
      }
      else {
        *local_38 = local_1c;
        local_38 = local_38 + 1;
      }
      iVar6 = FUN_1166c4b0();
      if (*(int *)(iVar6 + 0x27c) != 0) {
        iVar6 = FUN_1166c4b0();
        local_1c = *(int *)(iVar6 + 0x27c);
        FUN_10467580(&local_30,&local_1c);
      }
    }
    piVar12 = piVar12 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar10 = puStack_4c;
  if (puStack_4c != &local_54) {
    do {
      iVar11 = puVar10[4];
      local_10 = &PTR_FUN_11dcd904;
      local_1c = iVar11;
      if ((DAT_123bf32c & 1) == 0) {
        DAT_123bf32c = DAT_123bf32c | 1;
        FUN_102500e0("CSuitCfgInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72220);
      }
      puVar7 = (undefined *)*DAT_123bf330;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_10,"CSuitCfgInfo",0), puVar7 == (undefined *)0x0
         )) {
        if ((DAT_123bf2e8 & 1) == 0) {
          DAT_123bf2f0 = 0;
          DAT_123bf300 = 0;
          uRam123bf304 = 0;
          _DAT_123bf308 = 0;
          DAT_123bf30c = 0;
          DAT_123bf2e8 = DAT_123bf2e8 | 1;
          _DAT_123bf2ec = &PTR_FUN_11dcd90c;
          DAT_123bf310 = _DAT_11de9ae0;
          DAT_123bf314 = _UNK_11de9ae4;
          uRam123bf318 = _UNK_11de9ae8;
          DAT_123bf31c = _UNK_11de9aec;
          DAT_123bf320 = 1;
          DAT_123bf2f4 = puVar7;
          _DAT_123bf2f8 = puVar7;
          _DAT_123bf2fc = puVar7;
          FUN_11a8911f(&LAB_11c9acb0);
        }
        puVar7 = &DAT_123bf2ec;
      }
      local_10 = &PTR_FUN_11da54a8;
      if ((iVar11 != -1) &&
         ((((iVar11 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
           (iVar6 = *(int *)(puVar7 + 0x28), iVar6 != 0)) &&
          ((iVar8 = iVar11 - *(int *)(puVar7 + 0x30), -1 < iVar8 &&
           (iVar8 < *(int *)(puVar7 + 0x24))))))) {
        iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar8 / iVar6) * 4);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar1 + (iVar8 % iVar6) * 4) != 0 &&
            (cVar4 = FUN_1172a550(&local_3c), cVar4 != '\0')))) {
          piVar12 = *(int **)(local_14 + 0x58);
          if (piVar12 == *(int **)(local_14 + 0x5c)) {
            FUN_10463c40(piVar12,&local_1c,&local_5,1,1);
          }
          else {
            *piVar12 = iVar11;
            *(int *)(local_14 + 0x58) = *(int *)(local_14 + 0x58) + 4;
          }
        }
      }
      puVar9 = (undefined4 *)puVar10[3];
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)puVar10[1];
        if (puVar10 == (undefined4 *)puVar9[3]) {
          do {
            puVar10 = puVar9;
            puVar9 = (undefined4 *)puVar10[1];
          } while (puVar10 == (undefined4 *)puVar9[3]);
        }
        if ((undefined4 *)puVar10[3] != puVar9) {
          puVar10 = puVar9;
        }
      }
      else {
        for (puVar3 = (undefined4 *)puVar9[2]; puVar10 = puVar9, puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[2]) {
          puVar9 = puVar3;
        }
      }
    } while (puVar10 != &local_54);
  }
  local_10 = (undefined **)(param_2 + 0x22e0);
  local_1c = 0x80;
  do {
    local_20 = local_10[-2];
    local_18 = local_20;
    if (0 < (int)local_20) {
      iVar11 = 0x100;
      ppuVar13 = local_10;
      do {
        puVar7 = *ppuVar13;
        local_24 = puVar7;
        if (0 < (int)puVar7) {
          iVar6 = FUN_104640e0(&local_20);
          piVar12 = *(int **)(iVar6 + 4);
          if (piVar12 == *(int **)(iVar6 + 8)) {
            FUN_10463c40(piVar12,&local_24,(int)&param_2 + 3,1,1);
          }
          else {
            *piVar12 = (int)puVar7;
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 4;
          }
        }
        ppuVar13 = ppuVar13 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar6 = local_14 + 0x78;
      iVar11 = *(int *)(local_14 + 0x7c);
      while (iVar11 != 0) {
        if (*(int *)(iVar11 + 0x10) < (int)local_18) {
          iVar11 = *(int *)(iVar11 + 0xc);
        }
        else {
          iVar6 = iVar11;
          iVar11 = *(int *)(iVar11 + 8);
        }
      }
      if ((iVar6 == local_14 + 0x78) ||
         (local_c = local_c | 1, (int)local_18 < *(int *)(iVar6 + 0x10))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((local_c & 1) != 0) {
        local_c = local_c & 0xfffffffe;
      }
      if (bVar2) {
        local_30 = local_18;
        local_2c = 0;
        FUN_10464a20(&local_28,iVar6,&local_30);
        iVar6 = local_28;
      }
      *(undefined **)(iVar6 + 0x14) = local_10[-1];
    }
    local_10 = local_10 + 0x102;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  local_1c = 0;
  iVar11 = iStack_50;
  if (local_44 != 0) {
    while (iVar11 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar11 + 0xc));
      iVar6 = *(int *)(iVar11 + 8);
      FUN_10c3d5d0(iVar11);
      iVar11 = iVar6;
    }
    puStack_4c = &local_54;
    iStack_50 = 0;
    local_44 = 0;
    puStack_48 = puStack_4c;
  }
  if (local_3c != 0) {
    FUN_10c3d5d0(local_3c);
  }
  return;
}



/* --- CSuitCfgInfo::GetManagers_11301170 @ 11301170 --- */
// [RE-AUTO c3]
// id: CSuitCfgInfo::GetManagers
// strings:
//   ""CSuitCfgInfo::GetManagers""
//   ""CSuitCfgInfo""
//   ""CEquipInfo::GetManagers""
//   ""CEquipInfo""
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitCfgInfo::GetManagers
   strings:
     ""CSuitCfgInfo::GetManagers""
     ""CSuitCfgInfo""
     ""CEquipInfo::GetManagers""
     ""CEquipInfo""
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo"" */

undefined1 __thiscall CSuitCfgInfo__GetManagers_11301170(undefined **param_1,undefined **param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined **local_c;
  undefined **local_8;
  
  bVar9 = false;
  local_c = param_1;
  local_14 = 0;
  puStack_28 = &local_30;
  local_30 = 0;
  iVar15 = 0;
  puStack_2c = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = param_2._3_1_;
  puStack_24 = puStack_28;
  do {
    puVar12 = &local_30;
    puVar7 = puStack_2c;
    while (puVar7 != (undefined4 *)0x0) {
      if ((int)puVar7[4] < iVar15) {
        puVar7 = (undefined4 *)puVar7[3];
      }
      else {
        puVar12 = puVar7;
        puVar7 = (undefined4 *)puVar7[2];
      }
    }
    if ((puVar12 == &local_30) || (bVar9 = true, iVar15 < (int)puVar12[4])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar9) {
      bVar9 = false;
    }
    if (bVar1) {
      local_14 = 0;
      local_18 = iVar15;
      FUN_10874200(&local_10,puVar12,&local_18);
      puVar12 = local_10;
    }
    uVar3 = FUN_114645a0(iVar15);
    iVar15 = iVar15 + 1;
    puVar12[5] = uVar3;
  } while (iVar15 < 0x17);
  if (param_2 != (undefined **)0x0) {
    puVar5 = param_2[0x9f];
    local_8 = &PTR_FUN_11dcd904;
    if ((DAT_123bf32c & 1) == 0) {
      DAT_123bf32c = DAT_123bf32c | 1;
      FUN_102500e0("CSuitCfgInfo::GetManagers");
      FUN_11a8911f(&LAB_11c72220);
    }
    puVar4 = (undefined *)*DAT_123bf330;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_8,"CSuitCfgInfo",0), puVar4 == (undefined *)0x0))
    {
      if ((DAT_123bf2e8 & 1) == 0) {
        DAT_123bf2e8 = DAT_123bf2e8 | 1;
        FUN_108317b0();
        FUN_11a8911f(&LAB_11c9acb0);
      }
      puVar4 = &DAT_123bf2ec;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((puVar5 != (undefined *)0xffffffff) &&
       ((((puVar5 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
         (iVar15 = *(int *)(puVar4 + 0x28), iVar15 != 0)) &&
        ((iVar13 = (int)puVar5 - *(int *)(puVar4 + 0x30), -1 < iVar13 &&
         (iVar13 < *(int *)(puVar4 + 0x24))))))) {
      iVar14 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar13 / iVar15) * 4);
      if ((iVar14 != 0) && (local_14 = *(int *)(iVar14 + (iVar13 % iVar15) * 4), local_14 != 0)) {
        uVar11 = 0;
        local_10 = (undefined4 *)0x0;
        if (*(int *)(local_14 + 0x1c) - *(int *)(local_14 + 0x18) >> 2 != 0) {
          do {
            local_c = &PTR_FUN_11dc0b38;
            iVar15 = *(int *)(*(int *)(local_14 + 0x18) + uVar11 * 4);
            if ((DAT_123be940 & 1) == 0) {
              DAT_123be940 = DAT_123be940 | 1;
              FUN_102500e0("CEquipInfo::GetManagers");
              FUN_11a8911f(&LAB_11c6fdb0);
            }
            puVar5 = (undefined *)*DAT_123be924;
            if ((puVar5 == (undefined *)0x0) &&
               (puVar5 = (undefined *)FUN_11679e10(&local_c,"CEquipInfo",0),
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
            local_c = &PTR_FUN_11da54a8;
            if (((iVar15 != -1) &&
                (((iVar15 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
                 (iVar13 = *(int *)(puVar5 + 0x28), iVar13 != 0)))) &&
               ((iVar15 = iVar15 - *(int *)(puVar5 + 0x30), -1 < iVar15 &&
                (iVar15 < *(int *)(puVar5 + 0x24))))) {
              iVar14 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar15 / iVar13) * 4);
              if ((iVar14 != 0) && (iVar15 = *(int *)(iVar14 + (iVar15 % iVar13) * 4), iVar15 != 0))
              {
                iVar15 = FUN_11522980(iVar15);
                puVar7 = &local_30;
                puVar12 = puStack_2c;
                if (puStack_2c != (undefined4 *)0x0) {
                  do {
                    if ((int)puVar12[4] < iVar15) {
                      puVar16 = (undefined4 *)puVar12[3];
                    }
                    else {
                      puVar16 = (undefined4 *)puVar12[2];
                      puVar7 = puVar12;
                    }
                    puVar12 = puVar16;
                  } while (puVar16 != (undefined4 *)0x0);
                  if (((puVar7 != &local_30) && ((int)puVar7[4] <= iVar15)) &&
                     ((puVar7[5] != 0 &&
                      (iVar15 = FUN_1166c4b0(), *(undefined **)(iVar15 + 0x27c) == param_2[0x9f]))))
                  {
                    local_10 = (undefined4 *)((int)local_10 + 1);
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)(*(int *)(local_14 + 0x1c) - *(int *)(local_14 + 0x18) >> 2));
        }
        ppuVar2 = param_2;
        iVar15 = -1;
        param_2 = &PTR_FUN_11dd04b0;
        puVar5 = ppuVar2[0x9f];
        if ((DAT_123bf784 & 1) == 0) {
          DAT_123bf784 = DAT_123bf784 | 1;
          FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
          FUN_11a8911f(&LAB_11c73040);
        }
        puVar4 = (undefined *)*DAT_123bf788;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&param_2,"CEquipSuitEffectInfo",0),
           puVar4 == (undefined *)0x0)) {
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
            DAT_123bf4fc = puVar4;
            _DAT_123bf500 = puVar4;
            _DAT_123bf504 = puVar4;
            FUN_11a8911f(&LAB_11c9ab30);
          }
          puVar4 = &DAT_123bf4f4;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((puVar5 != (undefined *)0xffffffff) &&
            (((puVar5 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (iVar13 = *(int *)(puVar4 + 0x28), iVar13 != 0)))) &&
           ((iVar14 = (int)puVar5 - *(int *)(puVar4 + 0x30), -1 < iVar14 &&
            (iVar14 < *(int *)(puVar4 + 0x24))))) {
          iVar8 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar14 / iVar13) * 4);
          if ((iVar8 != 0) &&
             ((iVar13 = *(int *)(iVar8 + (iVar14 % iVar13) * 4), iVar13 != 0 &&
              (iVar8 = *(int *)(iVar13 + 0x1c) - *(int *)(iVar13 + 0x18), uVar11 = 0,
              iVar14 = iVar8 >> 0x1f, iVar8 / 0x6c + iVar14 != iVar14)))) {
            piVar6 = (int *)(*(int *)(iVar13 + 0x18) + 0x34);
            do {
              if (piVar6[6] == 2) {
                iVar15 = *piVar6;
              }
              uVar11 = uVar11 + 1;
              piVar6 = piVar6 + 0x1b;
            } while (uVar11 < (uint)((*(int *)(iVar13 + 0x1c) - *(int *)(iVar13 + 0x18)) / 0x6c));
          }
        }
        if (iVar15 <= (int)local_10) {
          uVar10 = 1;
          goto LAB_113015f3;
        }
      }
    }
  }
  uVar10 = 0;
LAB_113015f3:
  puVar7 = puStack_2c;
  if (local_20 != 0) {
    while (puVar7 != (undefined4 *)0x0) {
      FUN_108719c0(puVar7[3]);
      puVar12 = (undefined4 *)puVar7[2];
      FUN_10c3d5d0(puVar7);
      puVar7 = puVar12;
    }
  }
  return uVar10;
}



/* --- CSuitCfgInfo::GetManagers_11301ed0 @ 11301ed0 --- */
// [RE-AUTO c3]
// id: CSuitCfgInfo::GetManagers
// strings:
//   ""CSuitCfgInfo::GetManagers""
//   ""CSuitCfgInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitCfgInfo::GetManagers
   strings:
     ""CSuitCfgInfo::GetManagers""
     ""CSuitCfgInfo"" */

void __thiscall
CSuitCfgInfo__GetManagers_11301ed0(undefined4 param_1,undefined **param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 local_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int local_40;
  undefined1 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 local_20 [8];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  puStack_48 = &local_50;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  local_40 = 0;
  local_3c = param_2._3_1_;
  local_10 = 0;
  ppuVar10 = param_2;
  puStack_44 = puStack_48;
  local_c = param_1;
  do {
    iVar12 = local_10;
    ppuVar11 = ppuVar10;
    if (((ppuVar10[local_10 * 0x12 + 10] != (undefined *)0x0) &&
        (iVar4 = FUN_113f9bb0(ppuVar10[local_10 * 0x12 + 0xb],ppuVar10[local_10 * 0x12 + 0xc]),
        ppuVar11 = param_2, iVar4 != 0)) &&
       (cVar3 = FUN_116698a0(), ppuVar11 = param_2, cVar3 != '\0')) {
      uVar13 = FUN_11669710();
      ppuVar11 = param_2;
      if (((undefined *)uVar13 == ppuVar10[iVar12 * 0x12 + 8]) &&
         ((undefined *)((ulonglong)uVar13 >> 0x20) == ppuVar10[iVar12 * 0x12 + 9])) {
        iVar5 = FUN_1166c4b0();
        local_18 = param_3 + 0x18;
        FUN_115b8300(iVar5 + 0x21c,iVar4 + 0x180);
        piVar6 = (int *)FUN_1166c4b0();
        local_14 = (**(code **)(*piVar6 + 0x18))();
        if (local_34 == local_30) {
          FUN_10109320(local_34,&local_14,&local_5,1,1);
        }
        else {
          *local_34 = local_14;
          local_34 = local_34 + 1;
        }
        iVar5 = FUN_1166c4b0();
        if (*(int *)(iVar5 + 0x27c) != 0) {
          iVar5 = FUN_1166c4b0();
          local_14 = *(undefined4 *)(iVar5 + 0x27c);
          FUN_10467580(local_20,&local_14);
        }
        ppuVar11 = param_2;
        if ((iVar12 == 9) && (piVar6 = *(int **)(iVar4 + 0x1bc), piVar6 != *(int **)(iVar4 + 0x1c0))
           ) {
          do {
            if ((piVar6 != (int *)0x0) &&
               ((*piVar6 != 1 && (cVar3 = FUN_11465310(iVar4,piVar6), cVar3 != '\0')))) {
              FUN_115b7ca0(piVar6[2],piVar6[3]);
            }
            piVar6 = piVar6 + 7;
            ppuVar11 = param_2;
            iVar12 = local_10;
          } while (piVar6 != *(int **)(iVar4 + 0x1c0));
        }
      }
    }
    local_10 = iVar12 + 1;
    ppuVar10 = ppuVar11;
  } while (local_10 < 10);
  local_2c = 0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  puVar9 = puStack_48;
  if (puStack_48 != &local_50) {
    do {
      iVar12 = puVar9[4];
      param_2 = &PTR_FUN_11dcd904;
      local_18 = iVar12;
      if ((DAT_123bf32c & 1) == 0) {
        DAT_123bf32c = DAT_123bf32c | 1;
        FUN_102500e0("CSuitCfgInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72220);
      }
      puVar7 = (undefined *)*DAT_123bf330;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&param_2,"CSuitCfgInfo",0), puVar7 == (undefined *)0x0)
         ) {
        if ((DAT_123bf2e8 & 1) == 0) {
          DAT_123bf2f0 = 0;
          DAT_123bf300 = 0;
          uRam123bf304 = 0;
          _DAT_123bf308 = 0;
          DAT_123bf30c = 0;
          DAT_123bf2e8 = DAT_123bf2e8 | 1;
          _DAT_123bf2ec = &PTR_FUN_11dcd90c;
          DAT_123bf310 = _DAT_11de9ae0;
          DAT_123bf314 = _UNK_11de9ae4;
          uRam123bf318 = _UNK_11de9ae8;
          DAT_123bf31c = _UNK_11de9aec;
          DAT_123bf320 = 1;
          DAT_123bf2f4 = puVar7;
          _DAT_123bf2f8 = puVar7;
          _DAT_123bf2fc = puVar7;
          FUN_11a8911f(&LAB_11c9acb0);
        }
        puVar7 = &DAT_123bf2ec;
      }
      param_2 = &PTR_FUN_11da54a8;
      if ((iVar12 != -1) &&
         ((((iVar12 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
           (iVar4 = *(int *)(puVar7 + 0x28), iVar4 != 0)) &&
          ((iVar5 = iVar12 - *(int *)(puVar7 + 0x30), -1 < iVar5 &&
           (iVar5 < *(int *)(puVar7 + 0x24))))))) {
        iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar5 / iVar4) * 4);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar1 + (iVar5 % iVar4) * 4) != 0 &&
            (cVar3 = FUN_1172a550(&local_38), cVar3 != '\0')))) {
          if (local_28 == local_24) {
            FUN_10463c40(local_28,&local_18,(int)&param_2 + 3,1,1);
          }
          else {
            *local_28 = iVar12;
            local_28 = local_28 + 1;
          }
        }
      }
      puVar8 = (undefined4 *)puVar9[3];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)puVar9[1];
        if (puVar9 == (undefined4 *)puVar8[3]) {
          do {
            puVar9 = puVar8;
            puVar8 = (undefined4 *)puVar9[1];
          } while (puVar9 == (undefined4 *)puVar8[3]);
        }
        if ((undefined4 *)puVar9[3] != puVar8) {
          puVar9 = puVar8;
        }
      }
      else {
        for (puVar2 = (undefined4 *)puVar8[2]; puVar9 = puVar8, puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[2]) {
          puVar8 = puVar2;
        }
      }
    } while (puVar9 != &local_50);
  }
  CEquipSuitEffectInfo__GetManagers_11464860(&local_2c,param_3 + 0x18);
  CEquipPassiveSkillGroupInfo__GetManagers_115b7e90();
  if (local_2c != 0) {
    FUN_10c3d5d0(local_2c);
  }
  iVar12 = iStack_4c;
  if (local_40 != 0) {
    while (iVar12 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar12 + 0xc));
      iVar4 = *(int *)(iVar12 + 8);
      FUN_10c3d5d0(iVar12);
      iVar12 = iVar4;
    }
    puStack_48 = &local_50;
    iStack_4c = 0;
    local_40 = 0;
    puStack_44 = puStack_48;
  }
  if (local_38 != 0) {
    FUN_10c3d5d0(local_38);
  }
  return;
}



/* --- CSuitCfgInfo::GetManagers_11464a00 @ 11464a00 --- */
// [RE-AUTO c3]
// id: CSuitCfgInfo::GetManagers
// strings:
//   ""CSuitCfgInfo::GetManagers""
//   ""CSuitCfgInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitCfgInfo::GetManagers
   strings:
     ""CSuitCfgInfo::GetManagers""
     ""CSuitCfgInfo"" */

void CSuitCfgInfo__GetManagers_11464a00(undefined **param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
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
  int local_c;
  undefined1 local_5;
  
  puStack_30 = &local_38;
  local_20 = 0;
  local_1c = (int *)0x0;
  iVar10 = 0;
  local_18 = (int *)0x0;
  local_38 = 0;
  iStack_34 = 0;
  local_28 = 0;
  local_24 = param_1._3_1_;
  puStack_2c = puStack_30;
  do {
    iVar5 = FUN_114645a0(iVar10);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_1166c4b0();
      local_c = (**(code **)(*piVar6 + 0x18))();
      if (local_1c == local_18) {
        FUN_10109320(local_1c,&local_c,&local_5,1,1);
      }
      else {
        *local_1c = local_c;
        local_1c = local_1c + 1;
      }
      iVar5 = FUN_1166c4b0();
      if (*(int *)(iVar5 + 0x27c) != 0) {
        iVar5 = FUN_1166c4b0();
        local_c = *(int *)(iVar5 + 0x27c);
        FUN_10467580(local_14,&local_c);
      }
    }
    ppuVar3 = param_1;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x17);
  puVar9 = puStack_30;
  if (puStack_30 != &local_38) {
    do {
      iVar10 = puVar9[4];
      param_1 = &PTR_FUN_11dcd904;
      local_c = iVar10;
      if ((DAT_123bf32c & 1) == 0) {
        DAT_123bf32c = DAT_123bf32c | 1;
        FUN_102500e0("CSuitCfgInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72220);
      }
      puVar7 = (undefined *)*DAT_123bf330;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&param_1,"CSuitCfgInfo",0), puVar7 == (undefined *)0x0)
         ) {
        if ((DAT_123bf2e8 & 1) == 0) {
          DAT_123bf2f0 = 0;
          DAT_123bf300 = 0;
          uRam123bf304 = 0;
          _DAT_123bf308 = 0;
          DAT_123bf30c = 0;
          DAT_123bf2e8 = DAT_123bf2e8 | 1;
          _DAT_123bf2ec = &PTR_FUN_11dcd90c;
          DAT_123bf310 = _DAT_11de9ae0;
          DAT_123bf314 = _UNK_11de9ae4;
          uRam123bf318 = _UNK_11de9ae8;
          DAT_123bf31c = _UNK_11de9aec;
          DAT_123bf320 = 1;
          DAT_123bf2f4 = puVar7;
          _DAT_123bf2f8 = puVar7;
          _DAT_123bf2fc = puVar7;
          FUN_11a8911f(&LAB_11c9de20);
        }
        puVar7 = &DAT_123bf2ec;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar10 != -1) &&
         ((((iVar10 != 0 || (*(int *)(puVar7 + 0x30) == 0)) && (*(int *)(puVar7 + 0x28) != 0)) &&
          ((iVar5 = iVar10 - *(int *)(puVar7 + 0x30), -1 < iVar5 &&
           (iVar5 < *(int *)(puVar7 + 0x24))))))) {
        iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar5 / *(int *)(puVar7 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar1 + (iVar5 % *(int *)(puVar7 + 0x28)) * 4) != 0 &&
            (cVar4 = FUN_1172a550(&local_20), cVar4 != '\0')))) {
          piVar6 = (int *)ppuVar3[1];
          if (piVar6 == (int *)ppuVar3[2]) {
            FUN_10463c40(piVar6,&local_c,(int)&param_1 + 3,1,1);
          }
          else {
            *piVar6 = iVar10;
            ppuVar3[1] = ppuVar3[1] + 4;
          }
        }
      }
      puVar8 = (undefined4 *)puVar9[3];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)puVar9[1];
        if (puVar9 == (undefined4 *)puVar8[3]) {
          do {
            puVar9 = puVar8;
            puVar8 = (undefined4 *)puVar9[1];
          } while (puVar9 == (undefined4 *)puVar8[3]);
        }
        if ((undefined4 *)puVar9[3] != puVar8) {
          puVar9 = puVar8;
        }
      }
      else {
        for (puVar2 = (undefined4 *)puVar8[2]; puVar9 = puVar8, puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[2]) {
          puVar8 = puVar2;
        }
      }
    } while (puVar9 != &local_38);
  }
  iVar10 = iStack_34;
  if (local_28 != 0) {
    while (iVar10 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar10 + 0xc));
      iVar5 = *(int *)(iVar10 + 8);
      FUN_10c3d5d0(iVar10);
      iVar10 = iVar5;
    }
    puStack_30 = &local_38;
    iStack_34 = 0;
    local_28 = 0;
    puStack_2c = puStack_30;
  }
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  return;
}



