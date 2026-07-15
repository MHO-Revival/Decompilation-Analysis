// ===== class CLevelBoxRewardInfo  (3 recovered methods) =====

/* --- CLevelBoxRewardInfo::GetManagers @ 1144d4c0 --- */
// [RE-AUTO c3]
// id: CLevelBoxRewardInfo::GetManagers
// strings:
//   ""CLevelBoxRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBoxRewardInfo::GetManagers
   strings:
     ""CLevelBoxRewardInfo::GetManagers"" */

undefined * CLevelBoxRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d26ed0;
  if (param_3 == 0) {
    if ((DAT_122dde80 & 1) == 0) {
      DAT_122dde80 = DAT_122dde80 | 1;
      FUN_102500e0("CLevelBoxRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d900);
    }
    if ((undefined *)*DAT_122dde64 != (undefined *)0x0) {
      return (undefined *)*DAT_122dde64;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122ddec4 & 1) == 0) {
      DAT_122ddec4 = DAT_122ddec4 | 1;
      FUN_1144dcb0();
      FUN_11a8911f(&LAB_11c9d8a0);
    }
    puVar1 = &DAT_122dde8c;
  }
  return puVar1;
}



/* --- CLevelBoxRewardInfo::GetManagers_1144f2e0 @ 1144f2e0 --- */
// [RE-AUTO c3]
// id: CLevelBoxRewardInfo::GetManagers
// strings:
//   ""CLevelBoxRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBoxRewardInfo::GetManagers
   strings:
     ""CLevelBoxRewardInfo::GetManagers"" */

undefined4 CLevelBoxRewardInfo__GetManagers_1144f2e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dde80 & 1) == 0) {
      DAT_122dde80 = DAT_122dde80 | 1;
      FUN_102500e0("CLevelBoxRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d900);
    }
    return *DAT_122dde64;
  }
  return 0;
}



/* --- CLevelBoxRewardInfo::GetManagers_1144f630 @ 1144f630 --- */
// [RE-AUTO c3]
// id: CLevelBoxRewardInfo::GetManagers
// strings:
//   ""CLevelBoxRewardInfo::GetManagers""
//   ""CLevelBoxRewardInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelBoxRewardInfo::GetManagers
   strings:
     ""CLevelBoxRewardInfo::GetManagers""
     ""CLevelBoxRewardInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __thiscall
CLevelBoxRewardInfo__GetManagers_1144f630(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined **ppuVar14;
  undefined4 local_78;
  int iStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int local_68;
  undefined1 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  uint local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined **local_1c;
  undefined **local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 local_5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    puStack_70 = &local_78;
    iVar11 = 0;
    local_64 = param_2._3_1_;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_78 = 0;
    iStack_74 = 0;
    local_68 = 0;
    local_20 = 0;
    puStack_6c = puStack_70;
    local_14 = param_1;
    if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3 != 0) {
      do {
        local_18 = &PTR_FUN_11d26ed0;
        iVar12 = *(int *)(*(int *)(local_14 + 0xc) + local_20 * 8);
        if ((DAT_122dde80 & 1) == 0) {
          DAT_122dde80 = DAT_122dde80 | 1;
          FUN_102500e0("CLevelBoxRewardInfo::GetManagers");
          FUN_11a8911f(&LAB_11c9d900);
          iVar11 = local_40;
        }
        puVar3 = (undefined *)*DAT_122dde64;
        if ((puVar3 == (undefined *)0x0) &&
           (puVar3 = (undefined *)FUN_11679e10(&local_18,"CLevelBoxRewardInfo",0), iVar11 = local_40
           , puVar3 == (undefined *)0x0)) {
          if ((DAT_122ddec4 & 1) == 0) {
            DAT_122ddec4 = DAT_122ddec4 | 1;
            FUN_1144dcb0();
            FUN_11a8911f(&LAB_11c9d8a0);
          }
          puVar3 = &DAT_122dde8c;
          iVar11 = local_40;
        }
        local_18 = &PTR_FUN_11da54a8;
        if ((iVar12 != -1) &&
           ((((iVar12 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
             (iVar5 = *(int *)(puVar3 + 0x28), iVar5 != 0)) &&
            ((iVar12 = iVar12 - *(int *)(puVar3 + 0x30), -1 < iVar12 &&
             (iVar12 < *(int *)(puVar3 + 0x24))))))) {
          iVar7 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar12 / iVar5) * 4);
          if ((iVar7 != 0) && (local_c = *(int *)(iVar7 + (iVar12 % iVar5) * 4), local_c != 0)) {
            iVar12 = FUN_11450ac0(10,*(undefined4 *)(*(int *)(local_14 + 0xc) + 4 + local_20 * 8));
            local_28 = iVar12;
            FUN_104765b0();
            iVar11 = local_40;
            if (0 < iVar12) {
              local_10 = param_2 + 0x116;
              do {
                if (local_40 != local_3c) {
                  local_3c = local_40;
                }
                uVar4 = (**(code **)(*param_2 + 0x294))(&local_78);
                uVar4 = FUN_1134b7d0(param_3,uVar4);
                FUN_117d0120(&local_40,uVar4);
                if (local_40 != local_3c) {
                  iVar11 = 0;
                  local_2c = local_3c - local_40 >> 2;
                  iVar12 = 0;
                  uVar8 = 0;
                  local_1c = (undefined **)0x0;
                  if (1 < local_2c) {
                    do {
                      iVar12 = iVar12 + *(int *)(*(int *)(local_40 + uVar8 * 4) + 4);
                      iVar5 = uVar8 * 4;
                      uVar8 = uVar8 + 2;
                      iVar11 = iVar11 + *(int *)(*(int *)(local_40 + 4 + iVar5) + 4);
                    } while (uVar8 < local_2c - 1);
                  }
                  if (uVar8 < local_2c) {
                    local_1c = *(undefined ***)(*(int *)(local_40 + uVar8 * 4) + 4);
                  }
                  FUN_100ee470();
                  iVar5 = FUN_100ee450();
                  uVar9 = local_3c - local_40 >> 2;
                  uVar10 = 0;
                  uVar8 = (uint)((double)iVar5 * _DAT_11de98f0 *
                                (double)(iVar12 + iVar11 + (int)local_1c));
                  if (uVar9 != 0) {
                    do {
                      uVar1 = *(uint *)(*(int *)(local_40 + uVar10 * 4) + 4);
                      if (uVar8 < uVar1) {
                        local_1c = &PTR_FUN_11da5518;
                        iVar11 = **(int **)(local_40 + uVar10 * 4);
                        if ((DAT_123bdbfc & 1) == 0) {
                          DAT_123bdbfc = DAT_123bdbfc | 1;
                          FUN_102500e0("CItemBaseInfo::GetManagers");
                          FUN_11a8911f(&LAB_11c6e610);
                        }
                        puVar6 = (undefined4 *)*DAT_123bdba0;
                        if ((puVar6 == (undefined4 *)0x0) &&
                           (puVar6 = (undefined4 *)FUN_11679e10(&local_1c,"CItemBaseInfo",0),
                           puVar6 == (undefined4 *)0x0)) {
                          if ((DAT_123bdc00 & 1) == 0) {
                            DAT_123bdbc4 = 0;
                            DAT_123bdbd4 = 0;
                            DAT_123bdbd8 = 0;
                            _DAT_123bdbdc = 0;
                            DAT_123bdbe0 = 0;
                            DAT_123bdc00 = DAT_123bdc00 | 1;
                            DAT_123bdbc0 = &PTR_FUN_11da5520;
                            DAT_123bdbe4 = _DAT_11de9ae0;
                            DAT_123bdbe8 = _UNK_11de9ae4;
                            uRam123bdbec = _UNK_11de9ae8;
                            DAT_123bdbf0 = _UNK_11de9aec;
                            DAT_123bdbf4 = 1;
                            DAT_123bdbc8 = puVar6;
                            _DAT_123bdbcc = puVar6;
                            _DAT_123bdbd0 = puVar6;
                            FUN_11a8911f(&LAB_11c9d840);
                          }
                          puVar6 = &DAT_123bdbc0;
                        }
                        local_1c = &PTR_FUN_11da54a8;
                        if (((iVar11 == -1) ||
                            (((iVar11 == 0 && (puVar6[0xc] != 0)) || (puVar6[10] == 0)))) ||
                           ((iVar11 = iVar11 - puVar6[0xc], iVar11 < 0 || ((int)puVar6[9] <= iVar11)
                            ))) {
LAB_1144f99d:
                          iVar11 = 0;
                        }
                        else {
                          iVar12 = *(int *)(puVar6[8] + (iVar11 / (int)puVar6[10]) * 4);
                          if (iVar12 == 0) goto LAB_1144f99d;
                          iVar11 = *(int *)(iVar12 + (iVar11 % (int)puVar6[10]) * 4);
                        }
                        piVar2 = *(int **)(local_40 + uVar10 * 4);
                        if ((*piVar2 != 0) && (iVar11 != 0)) {
                          FUN_10476c90(local_34,piVar2);
                          local_24 = FUN_11521920(iVar11,*(undefined4 *)
                                                          (*(int *)(local_40 + uVar10 * 4) + 0x34));
                          if (*(int *)(iVar11 + 0x34) == 2) {
                            if (*(char *)(iVar11 + 0x2a8) != '\0') {
                              local_1c = (undefined **)0x0;
                              iVar11 = *(int *)(local_40 + uVar10 * 4);
                              iVar12 = *(int *)(iVar11 + 0x38);
                              if ((iVar12 != 0) || (*(int *)(iVar11 + 0x3c) != 0)) {
                                iVar11 = *(int *)(iVar11 + 0x3c);
                                FUN_100ee470();
                                iVar5 = FUN_100ee450();
                                local_1c = (undefined **)
                                           (iVar12 - (int)((double)iVar5 * _DAT_11de9a60 *
                                                          (double)((iVar11 + 1) - iVar12)));
                              }
                              iVar11 = *(int *)(local_40 + uVar10 * 4);
                              iVar12 = *(int *)(iVar11 + 0xc);
                              iVar11 = *(int *)(iVar11 + 8);
                              FUN_100ee470();
                              iVar7 = FUN_100ee450();
                              iVar5 = local_14;
                              uVar4 = **(undefined4 **)(local_40 + uVar10 * 4);
                              iVar11 = iVar11 + (int)((double)iVar7 * _DAT_11de98f0 *
                                                     (double)((iVar12 - iVar11) + 1));
                              local_50 = uVar4;
                              iVar12 = iVar11;
                              iStack_4c = iVar11;
                              uStack_48 = local_24;
                              ppuStack_44 = local_1c;
                              uVar13 = local_24;
                              ppuVar14 = local_1c;
                              for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                                puVar6 = *(undefined4 **)(iVar5 + 0x58);
                                if (puVar6 == *(undefined4 **)(iVar5 + 0x5c)) {
                                  FUN_113f1390(puVar6,&local_50,&local_5,1,1);
                                  uVar4 = local_50;
                                  iVar12 = iStack_4c;
                                  uVar13 = uStack_48;
                                  ppuVar14 = ppuStack_44;
                                }
                                else {
                                  if (puVar6 != (undefined4 *)0x0) {
                                    *puVar6 = uVar4;
                                    puVar6[1] = iVar12;
                                    puVar6[2] = uVar13;
                                    puVar6[3] = ppuVar14;
                                  }
                                  *(int *)(iVar5 + 0x58) = *(int *)(iVar5 + 0x58) + 0x10;
                                }
                              }
                            }
                          }
                          else {
                            iVar11 = *(int *)(local_40 + uVar10 * 4);
                            iVar12 = *(int *)(iVar11 + 0xc);
                            iVar11 = *(int *)(iVar11 + 8);
                            FUN_100ee470();
                            iVar5 = FUN_100ee450();
                            local_54 = 0;
                            local_60 = **(undefined4 **)(local_40 + uVar10 * 4);
                            local_5c = (int)((double)iVar5 * _DAT_11de98f0 *
                                            (double)((iVar12 - iVar11) + 1)) + iVar11;
                            local_58 = local_24;
                            FUN_114509e0(local_14 + 0x3c,&local_60);
                          }
                        }
                        break;
                      }
                      uVar10 = uVar10 + 1;
                      uVar8 = uVar8 - uVar1;
                    } while (uVar10 < uVar9);
                  }
                }
                local_28 = local_28 + -1;
                iVar11 = local_40;
              } while (local_28 != 0);
            }
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < (uint)(*(int *)(local_14 + 0x10) - *(int *)(local_14 + 0xc) >> 3));
    }
    *(undefined1 *)(local_14 + 8) = 1;
    iVar12 = iStack_74;
    if (local_68 != 0) {
      while (iVar12 != 0) {
        FUN_10476c50(*(undefined4 *)(iVar12 + 0xc));
        iVar5 = *(int *)(iVar12 + 8);
        FUN_10c3d5d0(iVar12);
        iVar11 = local_40;
        iVar12 = iVar5;
      }
      puStack_70 = &local_78;
      iStack_74 = 0;
      local_68 = 0;
      puStack_6c = puStack_70;
    }
    if (iVar11 != 0) {
      FUN_10c3d5d0(iVar11);
    }
  }
  return;
}



