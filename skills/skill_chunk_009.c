/* ===== FUN_10fbec40 @ 10fbec40  size=4507 ===== */
// calls: CInfoRecord::GetModelString, memcpy
// strings:
//   "Callbacks"
//   "function"
//   "SetValue"
//   "SetGValue"
//   "HolsterItem"
//   "SetAGInput"
//   "ShowReloading"
//   "SetFpsMode"
//   "WE05SetFpsMode"
//   "TerrainFX"
//   "SetRotation"
//   "PlayWeaponFX"
//   "CallCrosshairsUI"
//   "SetDefence"
//   "RotateByInput"
//   "ToggleAimMode"
//   "PlayWeaponAnim"
//   "ShowWeaponItem"
//   "SendLogicEvent"
//   "NeedResetDirByPreState"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""Callbacks""
     ""function""
     ""SetValue""
     ""SetGValue""
     ""HolsterItem""
     ""SetAGInput""
     ""ShowReloading""
     ""SetFpsMode""
     ""WE05SetFpsMode""
     ""TerrainFX"" */

undefined4 FUN_10fbec40(int *param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 uVar9;
  undefined4 extraout_ECX_28;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  size_t _Size;
  bool bVar13;
  code *local_54 [2];
  code *local_4c;
  undefined4 local_48;
  int *local_44;
  int local_40;
  undefined1 *local_3c;
  code *local_38;
  code *local_34;
  undefined4 local_30;
  byte *local_2c;
  int local_28;
  byte *local_24;
  byte *local_1c;
  undefined1 *local_18;
  byte *local_14;
  byte *local_10;
  int *local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  (**(code **)(*param_1 + 0x20))();
  CInfoRecord__GetModelString();
  pbVar10 = local_2c;
  pcVar8 = "Callbacks";
  pbVar4 = local_2c;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10fbec90:
      uVar5 = -(uint)bVar13 | 1;
      goto LAB_10fbec95;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10fbec90;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10fbec95:
  if (uVar5 == 0) {
    local_40 = (**(code **)(*param_1 + 0xa0))();
    local_28 = 0;
    if (0 < local_40) {
      do {
        (**(code **)(*param_1 + 0xa8))();
        pbVar4 = (byte *)(**(code **)(*local_c + 0x20))();
        pbVar10 = &DAT_1201fc98;
        local_10 = &DAT_1201fc98;
        if (pbVar4 != (byte *)0x0) {
          pbVar12 = pbVar4;
          do {
            bVar1 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar1 != 0);
          _Size = (int)pbVar12 - (int)(pbVar4 + 1);
          if (_Size != 0) {
            puVar6 = (undefined4 *)FUN_10c3d780();
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar6 = 1;
            pbVar10 = (byte *)(puVar6 + 3);
            puVar6[1] = _Size;
            puVar6[2] = _Size;
            pbVar10[_Size] = 0;
            local_10 = pbVar10;
            if (pbVar10 != pbVar4) {
              memcpy(pbVar10,pbVar4,_Size);
            }
          }
        }
        cVar3 = (**(code **)(*local_c + 0x80))();
        if (cVar3 != '\0') {
          (**(code **)(*local_c + 0x7c))();
          CInfoRecord__GetModelString();
          pbVar4 = local_14;
          pcVar8 = "SetValue";
          pbVar10 = local_14;
          do {
            bVar1 = *pbVar10;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10fbed90:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10fbed95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10fbed90;
            pbVar10 = pbVar10 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_10fbed95:
          if (uVar5 == 0) {
            CInfoRecord__GetModelString();
            if (-1 < *(int *)(param_3 + -0xc)) {
              FUN_10c3dab0(param_3 + -0xc);
            }
            if (local_c != (int *)0x0) {
              (**(code **)*local_c)(local_c,param_2);
            }
            if (*(int *)(local_10 + -0xc) < 0) {
              FUN_10fc0540(&DAT_1201fc98);
              pbVar4 = local_14;
            }
            else {
              FUN_10c3dab0(local_10 + -0xc,local_10);
              FUN_10fc0540();
              pbVar4 = local_14;
            }
          }
          else {
            pcVar8 = "SetGValue";
            pbVar10 = local_14;
            do {
              bVar1 = *pbVar10;
              bVar13 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10fbee50:
                uVar5 = -(uint)bVar13 | 1;
                goto LAB_10fbee55;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar10[1];
              bVar13 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10fbee50;
              pbVar10 = pbVar10 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_10fbee55:
            if (uVar5 == 0) {
              CInfoRecord__GetModelString();
              if (-1 < *(int *)(param_3 + -0xc)) {
                FUN_10c3dab0(param_3 + -0xc);
              }
              if (local_c != (int *)0x0) {
                (**(code **)*local_c)(local_c,param_2);
              }
              if (*(int *)(local_10 + -0xc) < 0) {
                FUN_10fc1390(&DAT_1201fc98);
                pbVar4 = local_14;
              }
              else {
                FUN_10c3dab0(local_10 + -0xc,local_10);
                FUN_10fc1390();
                pbVar4 = local_14;
              }
            }
            else {
              pcVar8 = "HolsterItem";
              pbVar10 = local_14;
              do {
                bVar1 = *pbVar10;
                bVar13 = bVar1 < (byte)*pcVar8;
                if (bVar1 != *pcVar8) {
LAB_10fbef10:
                  uVar5 = -(uint)bVar13 | 1;
                  goto LAB_10fbef15;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar10[1];
                bVar13 = bVar1 < (byte)pcVar8[1];
                if (bVar1 != pcVar8[1]) goto LAB_10fbef10;
                pbVar10 = pbVar10 + 2;
                pcVar8 = pcVar8 + 2;
              } while (bVar1 != 0);
              uVar5 = 0;
LAB_10fbef15:
              if (uVar5 == 0) {
                local_30 = *(undefined4 *)(param_2 + 0x50);
                FUN_10f57110();
                CInfoRecord__GetModelString();
                if (-1 < *(int *)(param_3 + -0xc)) {
                  FUN_10c3dab0(param_3 + -0xc);
                }
                if (local_c != (int *)0x0) {
                  (**(code **)*local_c)(local_c,param_2);
                }
                if (*(int *)(local_10 + -0xc) < 0) {
                  FUN_10fc2fc0(&DAT_1201fc98);
                  pbVar4 = local_14;
                }
                else {
                  FUN_10c3dab0(local_10 + -0xc,local_10);
                  FUN_10fc2fc0();
                  pbVar4 = local_14;
                }
              }
              else {
                pcVar8 = "SetAGInput";
                pbVar10 = local_14;
                do {
                  bVar1 = *pbVar10;
                  bVar13 = bVar1 < (byte)*pcVar8;
                  if (bVar1 != *pcVar8) {
LAB_10fbefe0:
                    uVar5 = -(uint)bVar13 | 1;
                    goto LAB_10fbefe5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar10[1];
                  bVar13 = bVar1 < (byte)pcVar8[1];
                  if (bVar1 != pcVar8[1]) goto LAB_10fbefe0;
                  pbVar10 = pbVar10 + 2;
                  pcVar8 = pcVar8 + 2;
                } while (bVar1 != 0);
                uVar5 = 0;
LAB_10fbefe5:
                if (uVar5 == 0) {
                  FUN_10a4bb60();
                  uVar9 = 0;
                  if (local_c != (int *)0x0) {
                    (**(code **)*local_c)(local_c);
                    uVar9 = extraout_ECX;
                  }
                  FUN_10a4bb60(&local_10,uVar9);
                  FUN_10fc2380();
                }
                else {
                  cVar3 = FUN_10a675d0();
                  if (cVar3 == '\0') {
                    cVar3 = FUN_10a675d0();
                    if (cVar3 == '\0') {
                      cVar3 = FUN_10a675d0();
                      if (cVar3 == '\0') {
                        cVar3 = FUN_10a675d0();
                        if (cVar3 == '\0') {
                          cVar3 = FUN_10a675d0();
                          if (cVar3 == '\0') {
                            cVar3 = FUN_10a675d0();
                            if (cVar3 == '\0') {
                              cVar3 = FUN_10a675d0();
                              if (cVar3 == '\0') {
                                cVar3 = FUN_10a675d0();
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_10a675d0();
                                  if (cVar3 == '\0') {
                                    cVar3 = FUN_10a675d0();
                                    if (cVar3 == '\0') {
                                      cVar3 = FUN_10a675d0();
                                      if (cVar3 == '\0') {
                                        cVar3 = FUN_10a675d0();
                                        if (cVar3 == '\0') {
                                          cVar3 = FUN_10a675d0();
                                          if (cVar3 == '\0') {
                                            cVar3 = FUN_10a675d0();
                                            if (cVar3 == '\0') {
                                              cVar3 = FUN_10a675d0();
                                              if (cVar3 == '\0') {
                                                cVar3 = FUN_10a675d0();
                                                if (cVar3 == '\0') {
                                                  cVar3 = FUN_10a675d0();
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0();
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_10a675d0();
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_10a675d0();
                                                        if (cVar3 == '\0') {
                                                          cVar3 = FUN_10a675d0();
                                                          if (cVar3 == '\0') {
                                                            cVar3 = FUN_10a675d0();
                                                            if (cVar3 == '\0') {
                                                              cVar3 = FUN_10a675d0();
                                                              if (cVar3 == '\0') {
                                                                cVar3 = FUN_10a675d0();
                                                                if (cVar3 == '\0') {
                                                                  cVar3 = FUN_10a675d0();
                                                                  if (cVar3 == '\0') {
                                                                    cVar3 = FUN_10a675d0();
                                                                    if (cVar3 == '\0') {
                                                                      cVar3 = FUN_10a675d0();
                                                                      if (cVar3 == '\0') {
                                                                        cVar3 = FUN_10a675d0();
                                                                        if (cVar3 != '\0') {
                                                                          FUN_10a4bb60();
                                                                          uVar9 = 0;
                                                                          if (local_c != (int *)0x0)
                                                                          {
                                                                            (**(code **)*local_c)();
                                                                            uVar9 = extraout_ECX_27;
                                                                          }
                                                                          FUN_10a4bb60(&local_10,
                                                                                       uVar9);
                                                                          FUN_10fcfb20();
                                                                        }
                                                                      }
                                                                      else {
                                                                        FUN_10a4bb60();
                                                                        uVar9 = 0;
                                                                        if (local_c != (int *)0x0) {
                                                                          (**(code **)*local_c)
                                                                                    (local_c,param_2
                                                                                    );
                                                                          uVar9 = extraout_ECX_26;
                                                                        }
                                                                        FUN_10a4bb60(&local_10,uVar9
                                                                                    );
                                                                        FUN_10fcf3c0();
                                                                      }
                                                                    }
                                                                    else {
                                                                      FUN_10a4bb60();
                                                                      uVar9 = 0;
                                                                      if (local_c != (int *)0x0) {
                                                                        (**(code **)*local_c)
                                                                                  (local_c,param_2);
                                                                        uVar9 = extraout_ECX_25;
                                                                      }
                                                                      FUN_10a4bb60(&local_10,uVar9);
                                                                      FUN_10fcec60();
                                                                    }
                                                                  }
                                                                  else {
                                                                    FUN_10a4bb60();
                                                                    uVar9 = 0;
                                                                    if (local_c != (int *)0x0) {
                                                                      (**(code **)*local_c)
                                                                                (local_c,param_2);
                                                                      uVar9 = extraout_ECX_24;
                                                                    }
                                                                    FUN_10a4bb60(&local_10,uVar9);
                                                                    FUN_10fce500();
                                                                  }
                                                                }
                                                                else {
                                                                  FUN_10a4bb60();
                                                                  uVar9 = 0;
                                                                  if (local_c != (int *)0x0) {
                                                                    (**(code **)*local_c)
                                                                              (local_c,param_2);
                                                                    uVar9 = extraout_ECX_23;
                                                                  }
                                                                  FUN_10a4bb60(&local_10,uVar9);
                                                                  FUN_10fcdda0();
                                                                }
                                                              }
                                                              else {
                                                                FUN_10a4bb60();
                                                                uVar9 = 0;
                                                                if (local_c != (int *)0x0) {
                                                                  (**(code **)*local_c)
                                                                            (local_c,param_2);
                                                                  uVar9 = extraout_ECX_22;
                                                                }
                                                                FUN_10a4bb60(&local_10,uVar9);
                                                                FUN_10fcd640();
                                                              }
                                                            }
                                                            else {
                                                              FUN_10a4bb60();
                                                              uVar9 = 0;
                                                              if (local_c != (int *)0x0) {
                                                                (**(code **)*local_c)
                                                                          (local_c,param_2);
                                                                uVar9 = extraout_ECX_21;
                                                              }
                                                              FUN_10a4bb60(&local_10,uVar9);
                                                              FUN_10fccee0();
                                                            }
                                                          }
                                                          else {
                                                            FUN_10a4bb60();
                                                            uVar9 = 0;
                                                            if (local_c != (int *)0x0) {
                                                              (**(code **)*local_c)(local_c,param_2)
                                                              ;
                                                              uVar9 = extraout_ECX_20;
                                                            }
                                                            FUN_10a4bb60(&local_10,uVar9);
                                                            FUN_10fcc780();
                                                          }
                                                        }
                                                        else {
                                                          FUN_10a4bb60();
                                                          uVar9 = 0;
                                                          if (local_c != (int *)0x0) {
                                                            (**(code **)*local_c)(local_c,param_2);
                                                            uVar9 = extraout_ECX_19;
                                                          }
                                                          FUN_10a4bb60(&local_10,uVar9);
                                                          FUN_10fcc020();
                                                        }
                                                      }
                                                      else {
                                                        FUN_10a4bb60();
                                                        uVar9 = 0;
                                                        if (local_c != (int *)0x0) {
                                                          (**(code **)*local_c)(local_c,param_2);
                                                          uVar9 = extraout_ECX_18;
                                                        }
                                                        FUN_10a4bb60(&local_10,uVar9);
                                                        FUN_10fcb8c0();
                                                      }
                                                    }
                                                    else {
                                                      FUN_10a4bb60();
                                                      uVar9 = 0;
                                                      if (local_c != (int *)0x0) {
                                                        (**(code **)*local_c)(local_c,param_2);
                                                        uVar9 = extraout_ECX_17;
                                                      }
                                                      FUN_10a4bb60(&local_10,uVar9);
                                                      FUN_10fcb160();
                                                    }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar9 = 0;
                                                    if (local_c != (int *)0x0) {
                                                      (**(code **)*local_c)(local_c,param_2);
                                                      uVar9 = extraout_ECX_16;
                                                    }
                                                    FUN_10a4bb60(&local_10,uVar9);
                                                    FUN_10fcaa00();
                                                  }
                                                }
                                                else {
                                                  FUN_10a4bb60();
                                                  uVar9 = 0;
                                                  if (local_c != (int *)0x0) {
                                                    (**(code **)*local_c)(local_c,param_2);
                                                    uVar9 = extraout_ECX_15;
                                                  }
                                                  FUN_10a4bb60(&local_10,uVar9);
                                                  FUN_10fca2a0();
                                                }
                                              }
                                              else {
                                                FUN_10a4bb60();
                                                uVar9 = 0;
                                                if (local_c != (int *)0x0) {
                                                  (**(code **)*local_c)(local_c,param_2);
                                                  uVar9 = extraout_ECX_14;
                                                }
                                                FUN_10a4bb60(&local_10,uVar9);
                                                FUN_10fc9b40();
                                              }
                                            }
                                            else {
                                              FUN_10a4bb60();
                                              uVar9 = 0;
                                              if (local_c != (int *)0x0) {
                                                (**(code **)*local_c)(local_c,param_2);
                                                uVar9 = extraout_ECX_13;
                                              }
                                              FUN_10a4bb60(&local_10,uVar9);
                                              FUN_10fc93e0();
                                            }
                                          }
                                          else {
                                            FUN_10a4bb60();
                                            uVar9 = 0;
                                            if (local_c != (int *)0x0) {
                                              (**(code **)*local_c)(local_c,param_2);
                                              uVar9 = extraout_ECX_12;
                                            }
                                            FUN_10a4bb60(&local_10,uVar9);
                                            FUN_10fc8c80();
                                          }
                                        }
                                        else {
                                          FUN_10a4bb60();
                                          uVar9 = 0;
                                          if (local_c != (int *)0x0) {
                                            (**(code **)*local_c)(local_c,param_2);
                                            uVar9 = extraout_ECX_11;
                                          }
                                          FUN_10a4bb60(&local_10,uVar9);
                                          FUN_10fc8520();
                                        }
                                      }
                                      else {
                                        FUN_10a4bb60();
                                        uVar9 = 0;
                                        if (local_c != (int *)0x0) {
                                          (**(code **)*local_c)(local_c,param_2);
                                          uVar9 = extraout_ECX_10;
                                        }
                                        FUN_10a4bb60(&local_10,uVar9);
                                        FUN_10fc7dc0();
                                      }
                                    }
                                    else {
                                      FUN_10a4bb60();
                                      uVar9 = 0;
                                      if (local_c != (int *)0x0) {
                                        (**(code **)*local_c)(local_c,param_2);
                                        uVar9 = extraout_ECX_09;
                                      }
                                      FUN_10a4bb60(&local_10,uVar9);
                                      FUN_10fc7660();
                                    }
                                  }
                                  else {
                                    FUN_10a4bb60();
                                    uVar9 = 0;
                                    if (local_c != (int *)0x0) {
                                      (**(code **)*local_c)(local_c,param_2);
                                      uVar9 = extraout_ECX_08;
                                    }
                                    FUN_10a4bb60(&local_10,uVar9);
                                    FUN_10fc6f00();
                                  }
                                }
                                else {
                                  FUN_10a4bb60();
                                  uVar9 = 0;
                                  if (local_c != (int *)0x0) {
                                    (**(code **)*local_c)(local_c,param_2);
                                    uVar9 = extraout_ECX_07;
                                  }
                                  FUN_10a4bb60(&local_10,uVar9);
                                  FUN_10fc67a0();
                                }
                              }
                              else {
                                FUN_10a4bb60();
                                uVar9 = 0;
                                if (local_c != (int *)0x0) {
                                  (**(code **)*local_c)(local_c,param_2);
                                  uVar9 = extraout_ECX_06;
                                }
                                FUN_10a4bb60(&local_10,uVar9);
                                FUN_10fc6040();
                              }
                            }
                            else {
                              FUN_10a4bb60();
                              uVar9 = 0;
                              if (local_c != (int *)0x0) {
                                (**(code **)*local_c)(local_c,param_2);
                                uVar9 = extraout_ECX_05;
                              }
                              FUN_10a4bb60(&local_10,uVar9);
                              FUN_10fc58e0();
                            }
                          }
                          else {
                            FUN_10a4bb60();
                            uVar9 = 0;
                            if (local_c != (int *)0x0) {
                              (**(code **)*local_c)(local_c,param_2);
                              uVar9 = extraout_ECX_04;
                            }
                            FUN_10a4bb60(&local_10,uVar9);
                            FUN_10fc5180();
                          }
                        }
                        else {
                          FUN_10a4bb60();
                          uVar9 = 0;
                          if (local_c != (int *)0x0) {
                            (**(code **)*local_c)(local_c,param_2);
                            uVar9 = extraout_ECX_03;
                          }
                          FUN_10a4bb60(&local_10,uVar9);
                          FUN_10fc4a20();
                        }
                      }
                      else {
                        FUN_10a4bb60();
                        uVar9 = 0;
                        if (local_c != (int *)0x0) {
                          (**(code **)*local_c)(local_c,param_2);
                          uVar9 = extraout_ECX_02;
                        }
                        FUN_10a4bb60(&local_10,uVar9);
                        FUN_10fc42c0();
                      }
                    }
                    else {
                      FUN_10a4bb60();
                      uVar9 = 0;
                      if (local_c != (int *)0x0) {
                        (**(code **)*local_c)(local_c,param_2);
                        uVar9 = extraout_ECX_01;
                      }
                      FUN_10a4bb60(&local_10,uVar9);
                      FUN_10fc3b60();
                    }
                  }
                  else {
                    FUN_10a4bb60();
                    uVar9 = 0;
                    if (local_c != (int *)0x0) {
                      (**(code **)*local_c)(local_c);
                      uVar9 = extraout_ECX_00;
                    }
                    FUN_10a4bb60(&local_10,uVar9);
                    FUN_10fd0280();
                  }
                }
              }
            }
          }
          pbVar10 = local_10;
          if ((-1 < *(int *)(pbVar4 + -0xc)) &&
             (iVar7 = FUN_10c3dad0(), pbVar10 = local_10, iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 - (*(int *)(pbVar4 + -4) + 0xd);
            FUN_10c3d900();
            pbVar10 = local_10;
          }
        }
        pcVar8 = "OnEnter";
        pbVar4 = pbVar10;
        do {
          bVar1 = *pbVar4;
          bVar13 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10fbf950:
            uVar5 = -(uint)bVar13 | 1;
            goto LAB_10fbf955;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar13 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10fbf950;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10fbf955:
        if (uVar5 == 0) {
LAB_10fbfbcf:
          cVar3 = (**(code **)(*local_c + 0x80))();
          if (cVar3 != '\0') {
            (**(code **)(*local_c + 0x7c))();
            CInfoRecord__GetModelString();
            pcVar8 = "SetCanDodge";
            pbVar10 = local_24;
            do {
              bVar1 = *pbVar10;
              bVar13 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10fbfc27:
                uVar5 = -(uint)bVar13 | 1;
                goto LAB_10fbfc2c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar10[1];
              bVar13 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10fbfc27;
              pbVar10 = pbVar10 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_10fbfc2c:
            if (uVar5 == 0) {
              FUN_10f56e50();
              local_4c = FUN_10f7ef40;
              FUN_10f57080();
              puVar6 = *(undefined4 **)(param_2 + 0xbc);
              if (puVar6 == *(undefined4 **)(param_2 + 0xc0)) {
                local_8 = 0;
                local_5 = 0;
                FUN_10fb5690();
                pbVar4 = local_24;
              }
              else {
                local_6 = 0;
                local_7 = 0;
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = local_4c;
                  puVar6[1] = local_48;
                }
                *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 8;
                pbVar4 = local_24;
              }
            }
            else {
              if (*(int *)(param_3 + -0xc) < 0) {
                puVar11 = &DAT_1201fc98;
                local_3c = &DAT_1201fc98;
              }
              else {
                local_3c = param_3;
                FUN_10c3dab0();
                puVar11 = param_3;
              }
              piVar2 = local_c;
              local_44 = local_c;
              if (local_c != (int *)0x0) {
                (**(code **)*local_c)();
                (**(code **)(*piVar2 + 4))();
              }
              pbVar4 = local_24;
              if ((-1 < *(int *)(puVar11 + -0xc)) &&
                 (iVar7 = FUN_10c3dad0(), pbVar4 = local_24, iVar7 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar11 + -4));
                FUN_10c3d900();
                pbVar4 = local_24;
              }
            }
LAB_10fbfb96:
            pbVar10 = local_10;
            if ((-1 < *(int *)(pbVar4 + -0xc)) &&
               (iVar7 = FUN_10c3dad0(), pbVar10 = local_10, iVar7 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar4 + -4));
              FUN_10c3d900();
              pbVar10 = local_10;
            }
          }
        }
        else {
          pcVar8 = "Update";
          pbVar4 = pbVar10;
          do {
            bVar1 = *pbVar4;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10fbf984:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10fbf989;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10fbf984;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_10fbf989:
          if (uVar5 == 0) goto LAB_10fbfbcf;
          pcVar8 = "OnLeave";
          pbVar4 = pbVar10;
          do {
            bVar1 = *pbVar4;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10fbf9b8:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10fbf9bd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10fbf9b8;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_10fbf9bd:
          if ((uVar5 == 0) && (cVar3 = (**(code **)(*local_c + 0x80))(), cVar3 != '\0')) {
            (**(code **)(*local_c + 0x7c))();
            CInfoRecord__GetModelString();
            local_18 = &DAT_1201fc98;
            if (-1 < *(int *)(param_3 + -0xc)) {
              FUN_10c3dab0(param_3 + -0xc);
            }
            if (local_c != (int *)0x0) {
              (**(code **)*local_c)(local_c);
            }
            FUN_10fbd840();
            pbVar10 = local_1c;
            pcVar8 = "SetCanDodge";
            pbVar4 = local_1c;
            do {
              bVar1 = *pbVar4;
              bVar13 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10fbfa70:
                uVar5 = -(uint)bVar13 | 1;
                goto LAB_10fbfa75;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar13 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10fbfa70;
              pbVar4 = pbVar4 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_10fbfa75:
            if (uVar5 == 0) {
              local_34 = FUN_10f7eff0;
              FUN_10fb6910(&local_34);
              FUN_10f56e50();
              local_54[0] = FUN_10f7f040;
              FUN_10a4bb60(&local_18,extraout_ECX_28);
              FUN_10f570a0();
              FUN_10feda40(local_54);
            }
            else {
              cVar3 = FUN_10a675d0(&local_1c,"SetCannotDodge");
              if (cVar3 != '\0') {
                local_38 = FUN_10f7f100;
                FUN_10fb6910();
              }
            }
            pcVar8 = "CheckFps";
            do {
              bVar1 = *pbVar10;
              bVar13 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10fbfb20:
                uVar5 = -(uint)bVar13 | 1;
                goto LAB_10fbfb25;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar10[1];
              bVar13 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10fbfb20;
              pbVar10 = pbVar10 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_10fbfb25:
            if (uVar5 == 0) {
              FUN_10f56e50();
              FUN_10a4bb60();
              FUN_10f570a0();
              FUN_10feda40();
            }
            puVar11 = local_18;
            pbVar4 = local_1c;
            if ((-1 < *(int *)(local_18 + -0xc)) &&
               (iVar7 = FUN_10c3dad0(), pbVar4 = local_1c, iVar7 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar11 + -4));
              FUN_10c3d900();
              pbVar4 = local_1c;
            }
            goto LAB_10fbfb96;
          }
        }
        if ((-1 < *(int *)(pbVar10 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar10 + -4));
          FUN_10c3d900();
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 4))();
        }
        local_28 = local_28 + 1;
        pbVar10 = local_2c;
      } while (local_28 < local_40);
    }
  }
  if ((-1 < *(int *)(pbVar10 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar10 + -4));
    FUN_10c3d900();
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  if ((-1 < *(int *)(param_3 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_3 + -4));
    FUN_10c3d900();
  }
  return 1;
}



/* ===== FUN_10fbfde0 @ 10fbfde0  size=1761 ===== */
// strings:
//   "holster"
//   "interact"
//   "defense"
//   "reload"
//   "dodge"
//   "creep"
//   "crouch"
//   "rage1"
//   "rage2"
//   "rage3"
//   "rage_transmission"
//   "direction"
//   "direction_right"
//   "direction_left"
//   "direction_back"
//   "direction_front"
//   "xi_switch_lb"
//   "xi_switch_rb"
//   "xi_switch_lt"
//   "xi_switch_rt"

/* [RE-AUTO c0]
   strings:
     ""holster""
     ""interact""
     ""defense""
     ""reload""
     ""dodge""
     ""creep""
     ""crouch""
     ""rage1""
     ""rage2""
     ""rage3"" */

undefined1 FUN_10fbfde0(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 uVar7;
  byte *pbVar8;
  bool bVar9;
  
  FUN_10a7ef40();
  pbVar1 = param_1;
  bVar2 = *param_1;
  pbVar8 = param_1;
  while (bVar2 != 0) {
    bVar2 = *pbVar8;
    if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
      bVar2 = bVar2 + 0x20;
    }
    *pbVar8 = bVar2;
    pbVar8 = pbVar8 + 1;
    bVar2 = *pbVar8;
  }
  pbVar6 = &DAT_11ccdbec;
  pbVar8 = param_1;
  do {
    bVar2 = *pbVar8;
    bVar9 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_10fbfe40:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_10fbfe45;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar9 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_10fbfe40;
    pbVar8 = pbVar8 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_10fbfe45:
  if (uVar4 == 0) {
    uVar7 = 1;
    *param_2 = 0;
  }
  else {
    pbVar6 = &DAT_11ccdbf4;
    pbVar8 = param_1;
    do {
      bVar2 = *pbVar8;
      bVar9 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_10fbfe80:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_10fbfe85;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar9 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_10fbfe80;
      pbVar8 = pbVar8 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    uVar4 = 0;
LAB_10fbfe85:
    if (uVar4 == 0) {
      uVar7 = 1;
      *param_2 = 1;
    }
    else {
      pbVar6 = &DAT_11cface8;
      pbVar8 = param_1;
      do {
        bVar2 = *pbVar8;
        bVar9 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_10fbfec0:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_10fbfec5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_10fbfec0;
        pbVar8 = pbVar8 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_10fbfec5:
      if (uVar4 == 0) {
        uVar7 = 1;
        *param_2 = 2;
      }
      else {
        cVar3 = FUN_10a675d0(&param_1,"holster");
        if (cVar3 == '\0') {
          cVar3 = FUN_10a675d0(&param_1,"interact");
          if (cVar3 == '\0') {
            cVar3 = FUN_10a675d0(&param_1,"defense");
            if (cVar3 == '\0') {
              cVar3 = FUN_10a675d0(&param_1,"reload");
              if (cVar3 == '\0') {
                cVar3 = FUN_10a675d0(&param_1,"dodge");
                if (cVar3 == '\0') {
                  cVar3 = FUN_10a675d0(&param_1,&DAT_11dce978);
                  if (cVar3 == '\0') {
                    cVar3 = FUN_10a675d0(&param_1,&DAT_11dce988);
                    if (cVar3 == '\0') {
                      cVar3 = FUN_10a675d0(&param_1,"creep");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_10a675d0(&param_1,"crouch");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_10a675d0(&param_1,"rage1");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_10a675d0(&param_1,"rage2");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_10a675d0(&param_1,"rage3");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_10a675d0(&param_1,"rage_transmission");
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_10a675d0(&param_1,"direction");
                                  if (cVar3 == '\0') {
                                    cVar3 = FUN_10a675d0(&param_1,"direction_right");
                                    if (cVar3 == '\0') {
                                      cVar3 = FUN_10a675d0(&param_1,"direction_left");
                                      if (cVar3 == '\0') {
                                        cVar3 = FUN_10a675d0(&param_1,"direction_back");
                                        if (cVar3 == '\0') {
                                          cVar3 = FUN_10a675d0(&param_1,"direction_front");
                                          if (cVar3 == '\0') {
                                            cVar3 = FUN_10a675d0(&param_1,"xi_switch_lb");
                                            if (cVar3 == '\0') {
                                              cVar3 = FUN_10a675d0(&param_1,"xi_switch_rb");
                                              if (cVar3 == '\0') {
                                                cVar3 = FUN_10a675d0(&param_1,"xi_switch_lt");
                                                if (cVar3 == '\0') {
                                                  cVar3 = FUN_10a675d0(&param_1,"xi_switch_rt");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,"xi_switch_x");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_10a675d0(&param_1,"xi_switch_y");
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_10a675d0(&param_1,"xi_switch_b")
                                                        ;
                                                        if (cVar3 == '\0') {
                                                          cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_a");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,"xi_switch_l3");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_10a675d0(&param_1,"xi_switch_r3");
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_start");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,"xi_switch_back");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_pad_up");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_pad_left");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_pad_down");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_r3_right");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,"xi_switch_r3_up")
                                                    ;
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_r3_left");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_r3_down");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_10a675d0(&param_1,
                                                  "xi_switch_r3_right");
                                                  if (cVar3 == '\0') {
                                                    uVar7 = 0;
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x23;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x22;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x21;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x20;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1f;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1e;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1d;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1c;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1a;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x1b;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x19;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x18;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x17;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x16;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x15;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x14;
                                                  }
                                                  }
                                                  else {
                                                    uVar7 = 1;
                                                    *param_2 = 0x13;
                                                  }
                                                }
                                                else {
                                                  uVar7 = 1;
                                                  *param_2 = 0x12;
                                                }
                                              }
                                              else {
                                                uVar7 = 1;
                                                *param_2 = 0x11;
                                              }
                                            }
                                            else {
                                              uVar7 = 1;
                                              *param_2 = 0x10;
                                            }
                                          }
                                          else {
                                            uVar7 = 1;
                                            *param_2 = 0x24;
                                            *param_3 = 0;
                                            param_3[1] = 0x3f800000;
                                          }
                                        }
                                        else {
                                          uVar7 = 1;
                                          *param_2 = 0x24;
                                          *param_3 = 0;
                                          param_3[1] = 0xbf800000;
                                        }
                                      }
                                      else {
                                        uVar7 = 1;
                                        *param_2 = 0x24;
                                        *param_3 = 0xbf800000;
                                        param_3[1] = 0;
                                      }
                                    }
                                    else {
                                      uVar7 = 1;
                                      *param_2 = 0x24;
                                      *param_3 = 0x3f800000;
                                      param_3[1] = 0;
                                    }
                                  }
                                  else {
                                    uVar7 = 1;
                                    *param_2 = 0x24;
                                  }
                                }
                                else {
                                  uVar7 = 1;
                                  *param_2 = 0xf;
                                }
                              }
                              else {
                                uVar7 = 1;
                                *param_2 = 0xe;
                              }
                            }
                            else {
                              uVar7 = 1;
                              *param_2 = 0xd;
                            }
                          }
                          else {
                            uVar7 = 1;
                            *param_2 = 0xc;
                          }
                        }
                        else {
                          uVar7 = 1;
                          *param_2 = 9;
                        }
                      }
                      else {
                        uVar7 = 1;
                        *param_2 = 0xb;
                      }
                    }
                    else {
                      uVar7 = 1;
                      *param_2 = 10;
                    }
                  }
                  else {
                    uVar7 = 1;
                    *param_2 = 8;
                  }
                }
                else {
                  uVar7 = 1;
                  *param_2 = 7;
                }
              }
              else {
                uVar7 = 1;
                *param_2 = 6;
              }
            }
            else {
              uVar7 = 1;
              *param_2 = 5;
            }
          }
          else {
            uVar7 = 1;
            *param_2 = 4;
          }
        }
        else {
          uVar7 = 1;
          *param_2 = 3;
        }
      }
    }
  }
  pbVar8 = pbVar1 + -0xc;
  if ((-1 < *(int *)pbVar8) && (iVar5 = FUN_10c3dad0(pbVar8), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar1 + -4));
    FUN_10c3d900(pbVar8);
  }
  return uVar7;
}



/* ===== FUN_10fd05f0 @ 10fd05f0  size=4671 ===== */
// calls: CInfoRecord::GetModelString, libm_sse2_sqrt_precise, memmove
// strings:
//   "sm_ignoreSkill"
//   "COMBAT_PL05_AIM"
//   "COMBAT_PL05_COMMONSHOOT"
//   "COMBAT_PL05_CHARGE"
//   "COMBAT_PL05_HEAVYSHOOT"
//   "COMBAT_PL05_HEAVYSHOOTS"
//   "INTERACT_LOOP_DANCE"
//   "DODGE_FRONT"

/* [RE-AUTO c0]
   calls: libm_sse2_sqrt_precise, memmove
   strings:
     ""sm_ignoreSkill""
     ""COMBAT_PL05_AIM""
     ""COMBAT_PL05_COMMONSHOOT""
     ""COMBAT_PL05_CHARGE""
     ""COMBAT_PL05_HEAVYSHOOT""
     ""COMBAT_PL05_HEAVYSHOOTS""
     ""INTERACT_LOOP_DANCE""
     ""DODGE_FRONT"" */

undefined1 __thiscall
FUN_10fd05f0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  int *_Src;
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *unaff_ESI;
  int **ppiVar18;
  int *unaff_EDI;
  byte *pbVar19;
  int *piVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  int *piStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  undefined1 auStack_130 [4];
  int *piStack_12c;
  int *piVar26;
  int **ppiStack_10c;
  int *piStack_100;
  int *piStack_fc;
  undefined4 local_f8;
  int *piStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined8 uStack_d8;
  int *piStack_d0;
  int *piStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int aiStack_80 [2];
  undefined1 auStack_78 [16];
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  
  local_f8 = param_1;
  FUN_116db560();
  uStack_84 = FUN_116db500();
  if ((char)param_1[0x42] != '\0') {
    return 0;
  }
  ppiStack_10c = &piStack_a8;
  ppiVar18 = (int **)(param_1 + 0x34);
  piStack_a8 = param_2;
  piStack_a4 = param_3;
  piStack_a0 = param_4;
  piStack_9c = param_5;
  ppiVar5 = (int **)FUN_10fde0a0();
  if ((ppiVar5 == ppiVar18) || (local_f8 = ppiVar5[8], local_f8 == (int *)0x0)) {
    FUN_10f19240();
    return 0;
  }
  aiStack_80[0] = local_f8[0x14];
  puVar6 = (undefined4 *)FUN_10f57110();
  iStack_88 = FUN_10f59500();
  puStack_68 = auStack_78;
  puStack_50 = auStack_60;
  auStack_78[0] = 0;
  auStack_60[0] = 0;
  uStack_48 = 0;
  aiStack_80[0] = -1;
  aiStack_80[1] = 0xffffffff;
  puStack_64 = puStack_68;
  puStack_4c = puStack_50;
  if (param_6 == (int *)0x0) {
    if ((DAT_1203d0e4 & 1) == 0) {
      DAT_1203d0e4 = DAT_1203d0e4 | 1;
      DAT_1203d0e0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    }
    pbVar19 = &DAT_11d9e064;
    pbVar7 = (byte *)(**(code **)(*DAT_1203d0e0 + 0x10))();
    do {
      bVar1 = *pbVar7;
      bVar21 = bVar1 < *pbVar19;
      if (bVar1 != *pbVar19) {
LAB_10fd0750:
        uVar8 = -(uint)bVar21 | 1;
        goto LAB_10fd0755;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar21 = bVar1 < pbVar19[1];
      if (bVar1 != pbVar19[1]) goto LAB_10fd0750;
      pbVar7 = pbVar7 + 2;
      pbVar19 = pbVar19 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_10fd0755:
    if (uVar8 == 0) goto LAB_10fd08b4;
    if ((iStack_88 == 0) ||
       (piStack_f0 = *(int **)(iStack_88 + 0x14), (int *)0x7fffffff < piStack_f0)) {
      piStack_f0 = (int *)piStack_fc[0x71];
    }
    if (((int)piStack_f0 < 1) ||
       (iVar9 = (**(code **)(*(int *)piStack_100[0x40] + 800))(), iVar9 == 0)) goto LAB_10fd08b4;
    piStack_f4 = *(int **)(iVar9 + 0x14);
    uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
    ppiStack_10c = (int **)(**(code **)(*piStack_f4 + 0x24))();
    cVar3 = (**(code **)(*(int *)piStack_100[0x40] + 0x1cc))();
    if (cVar3 != '\x01') {
LAB_10fd0808:
      if ((unaff_ESI != (int *)0x0) &&
         (((cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar3 != '\0' &&
           ((char)unaff_ESI[0xb] != '\0')) ||
          ((cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar3 == '\0' &&
           ((char)unaff_ESI[0xb] == '\0')))))) {
        (**(code **)(*piStack_f4 + 0x50))();
        param_6 = aiStack_80;
      }
      goto LAB_10fd08b4;
    }
    if (unaff_ESI == (int *)0x0) {
      FUN_116cd730();
      iVar9 = FUN_116cd660();
      if (((iVar9 != 0) && (0 < iStack_8c)) && (cVar3 = FUN_116cdb40(), cVar3 != '\0')) {
        uVar4 = 0;
        goto LAB_10fd17d0;
      }
      goto LAB_10fd08b4;
    }
    if ((iStack_8c < 1) || (cVar3 = FUN_116cdb40(), cVar3 == '\0')) goto LAB_10fd0808;
LAB_10fd1423:
    uVar4 = 0;
    goto LAB_10fd17d0;
  }
LAB_10fd08b4:
  if ((((uint)param_2 & (uint)param_3) != 0xffffffff) ||
     (((uint)param_4 & (uint)param_5) != 0xffffffff)) {
    if (piStack_100[0x30] != 0) {
      uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,piStack_fc[0x14]);
      FUN_10f57110();
      CInfoRecord__GetModelString();
      FUN_10f58fc0();
      if (((*(char *)(piStack_100[0x30] + 0x1af) != '\0') &&
          (iVar9 = (**(code **)(*(int *)piStack_100[0x40] + 800))(), iVar9 != 0)) &&
         (cVar3 = FUN_10f5ca30(), cVar3 == '\0')) {
        FUN_10fdb7c0();
      }
    }
    cVar3 = FUN_10f5b980();
    if ((cVar3 != '\0') && (*(int *)(DAT_120286b8 + 0x538) != 0)) {
      iVar9 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
      piStack_b0 = *(int **)(iVar9 + 0x24);
      piStack_d0 = *(int **)(iVar9 + 4);
      piStack_b8 = *(int **)(iVar9 + 0x14);
      fStack_90 = 0.70710677;
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      uStack_c0 = (double)CONCAT44(piStack_b8,piStack_b8);
      uStack_d8 = (double)CONCAT44(piStack_d0,piStack_d0);
      piStack_9c = (int *)(float)((double)((float)piStack_b0 + (float)piStack_b0) * DAT_11de9950);
      dVar22 = (double)((float)piStack_b8 * (float)piStack_b8 +
                       (float)piStack_d0 * (float)piStack_d0);
      piStack_cc = piStack_d0;
      piStack_b4 = piStack_b8;
      piStack_ac = piStack_b0;
      piStack_a8 = piStack_b0;
      piStack_a4 = piStack_b0;
      libm_sse2_sqrt_precise();
      dVar22 = (double)(float)dVar22;
      if (DAT_11de98e0 < dVar22) {
        uStack_c8 = (double)(float)(int *)uStack_d8 / dVar22;
        uStack_d8 = dVar22 + DAT_11de9978;
        uStack_e8 = (double)(float)uStack_c0 / dVar22 + DAT_11de9978;
        dVar22 = uStack_e8 * uStack_e8 + uStack_c8 * uStack_c8;
        libm_sse2_sqrt_precise();
        dVar23 = (double)((float)piStack_b0 * (float)piStack_b0) + uStack_d8 * uStack_d8;
        uStack_c0 = dVar22;
        libm_sse2_sqrt_precise();
        dVar24 = 0.0;
        dVar22 = DAT_11cc06d8;
        if (DAT_11de98e0 < uStack_c0) {
          dVar22 = (double)((ulonglong)(uStack_c8 / uStack_c0) ^ DAT_11de9c80);
          dVar24 = uStack_e8 / uStack_c0;
        }
        fStack_90 = (float)((uStack_d8 / dVar23) * dVar24);
        piStack_9c = (int *)(float)(((double)(float)piStack_b0 / dVar23) * dVar24);
        fStack_98 = (float)(((double)(float)piStack_b0 / dVar23) * dVar22);
        fStack_94 = (float)((uStack_d8 / dVar23) * dVar22);
      }
      (**(code **)(**(int **)(piStack_100[0x40] + 0xc) + 0xb0))();
    }
    FUN_10fd9190();
    cVar3 = (**(code **)(*(int *)piStack_100[0x40] + 0x228))();
    piVar13 = piStack_100;
    if (cVar3 != '\0') {
      piVar20 = (int *)piStack_100[0x89];
      local_f8 = piStack_100 + 0x89;
      if ((piVar20 != (int *)piStack_100[0x8a]) &&
         (unaff_EDI = piVar20, piVar20 != (int *)piStack_100[0x8a])) {
        do {
          piStack_b4 = param_2;
          piStack_b0 = param_3;
          piStack_ac = param_4;
          piStack_a8 = param_5;
          ppiVar5 = (int **)FUN_10fde0a0();
          if (ppiVar5 == ppiVar18) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = ppiVar5[8];
          }
          piStack_d0 = (int *)piVar13[0x14];
          iVar9 = FUN_10f57110();
          iVar10 = FUN_10f57110();
          piVar13 = unaff_ESI;
          unaff_EDI = piVar20;
          if (iVar9 == iVar10) break;
          if (piVar20[1] != 0) {
            FUN_10f57110();
            cVar3 = (*(code *)piVar20[1])();
            if (cVar3 != '\0') {
              piStack_12c = (int *)FUN_10f57110();
              auStack_130 = (undefined1  [4])0x10fd0c12;
              CInfoRecord__GetModelString();
              auStack_130 = (undefined1  [4])0x10fd0c1d;
              cVar3 = FUN_10fd7800();
              piVar13 = piVar20;
              if (cVar3 != '\0') {
                if (piVar20[2] != 0) {
                  FUN_10c3d5d0();
                }
                FUN_10febb90();
                uVar4 = 0;
                goto LAB_10fd17d0;
              }
            }
          }
          piVar20 = piVar20 + 3;
          unaff_EDI = piVar20;
        } while (piVar20 != (int *)piVar13[0x8a]);
      }
    }
    cVar3 = (**(code **)(*(int *)piVar13[0x40] + 0x228))();
    if ((cVar3 != '\0') &&
       (piStack_f4 = (int *)FUN_10f19250(), piVar15 = param_5, piVar20 = param_4,
       piStack_f4 != (int *)0x0)) {
      piVar26 = param_2;
      piVar16 = param_3;
      cVar3 = FUN_10fd79f0();
      if (cVar3 == '\0') {
        unaff_EDI = (int *)piVar13[0x30];
        piStack_134 = param_2;
        auStack_130 = (undefined1  [4])param_3;
        piStack_12c = param_4;
        uStack_138 = (char *)0x10fd0e2f;
        iVar9 = FUN_10fb8160();
        if ((piVar15 != (int *)0x0) && (iVar9 != 0)) {
          uStack_138 = "COMBAT_PL05_AIM";
          piStack_13c = (int *)0x10fd0e54;
          FUN_10f56fa0();
          uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piVar20[0x14]);
          piStack_13c = (int *)0x10fd0e68;
          iVar9 = FUN_10f57110();
          piStack_13c = (int *)0x10fd0e73;
          piVar13 = piVar26;
          iVar10 = FUN_10f57110();
          piVar26 = piVar13;
          if (iVar9 == iVar10) {
            uStack_138 = "COMBAT_PL05_COMMONSHOOT";
            piStack_13c = (int *)0x10fd0e89;
            FUN_10f56fa0();
            uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
            piStack_13c = (int *)0x10fd0e9d;
            iVar9 = FUN_10f57110();
            piStack_13c = (int *)0x10fd0ea8;
            iVar10 = FUN_10f57110();
            if (iVar9 != iVar10) {
              uStack_138 = "COMBAT_PL05_CHARGE";
              piStack_13c = (int *)0x10fd0ebe;
              FUN_10f56fa0();
              uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
              piStack_13c = (int *)0x10fd0ed2;
              iVar9 = FUN_10f57110();
              piStack_13c = (int *)0x10fd0edd;
              iVar10 = FUN_10f57110();
              if (iVar9 != iVar10) {
                uStack_138 = "COMBAT_PL05_HEAVYSHOOT";
                piStack_13c = (int *)0x10fd0eef;
                FUN_10f56fa0();
                uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
                piStack_13c = (int *)0x10fd0f03;
                iVar9 = FUN_10f57110();
                piStack_13c = (int *)0x10fd0f0e;
                iVar10 = FUN_10f57110();
                if (iVar9 != iVar10) {
                  uStack_138 = "COMBAT_PL05_HEAVYSHOOTS";
                  piStack_13c = (int *)0x10fd0f20;
                  FUN_10f56fa0();
                  uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
                  piStack_13c = (int *)0x10fd0f34;
                  iVar9 = FUN_10f57110();
                  piStack_13c = (int *)0x10fd0f3f;
                  iVar10 = FUN_10f57110();
                  piVar26 = piVar13;
                  if (iVar9 != iVar10) goto LAB_10fd0f4f;
                }
              }
            }
            param_7 = CONCAT31(param_7._1_3_,1);
            piVar26 = piVar13;
          }
        }
LAB_10fd0f4f:
        uStack_138 = (char *)0x10fd0f56;
        cVar3 = FUN_10f5b980();
        if (cVar3 != '\0') {
          uVar4 = (undefined1)param_7;
          if (*(int *)(DAT_120286b8 + 0x538) != 0) {
            uVar4 = 1;
          }
          param_7 = CONCAT31(param_7._1_3_,uVar4);
        }
        if (*(int *)(DAT_120286b8 + 0x54c) == 1) {
          piStack_13c = param_4;
          uStack_138 = (char *)param_5;
          cVar3 = FUN_10fd7bc0(param_2,param_3);
          if (cVar3 == '\0') {
            piStack_13c = param_4;
            uStack_138 = (char *)param_5;
            cVar3 = FUN_10fd80f0(param_2,param_3);
            if (cVar3 == '\0') {
              piStack_13c = param_4;
              uStack_138 = (char *)param_5;
              cVar3 = FUN_10fd81a0(param_2,param_3);
              if (cVar3 == '\0') goto LAB_10fd0fd8;
            }
          }
        }
        else {
LAB_10fd0fd8:
          uStack_138 = (char *)&param_10;
          piStack_13c = (int *)0x10fd1009;
          FUN_10f5bed0();
          piStack_13c = (int *)(auStack_130 + 3);
          auStack_130 = (undefined1  [4])((uint)auStack_130 & 0xffffff);
          FUN_10dea810(piVar13[0x40]);
          piStack_f0 = (int *)(uint)((char)param_7 != '\0');
          if (uStack_138._3_1_ != '\0') {
            piStack_f0 = (int *)0x2;
          }
          uVar11 = (**(code **)(*piStack_12c + 100))();
          puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0xb4))();
          uStack_e0 = *puVar12;
          piStack_dc = (int *)puVar12[1];
          uStack_d8 = *(double *)(puVar12 + 2);
          puVar14 = (uint *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0x94))();
          piStack_cc = (int *)*puVar14;
          uStack_c8 = *(double *)(puVar14 + 1);
          piVar13 = (int *)(**(code **)(*(int *)piVar13[0x40] + 0x10c))();
          local_f8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          unaff_EDI = (int *)(*piVar16 + 0x524);
          uVar11 = (**(code **)(*piVar13 + 0xf8))(0,piStack_134,piVar26,uVar11,piStack_f0,param_10);
          uVar11 = FUN_10bf81b0(&param_2,uVar11);
          uVar25 = (**(code **)(*piStack_100 + 0x228))((int)&uStack_d8 + 4,&uStack_e8,uVar11);
          (*(code *)*puVar6)(uVar25);
          piStack_13c = (int *)0x27;
          cVar3 = FUN_10f5c510(&piStack_13c,0);
          if (cVar3 == '\x01') {
            piStack_13c = (int *)0x11d05860;
            CInfoRecord__GetModelString();
            piVar13 = (int *)FUN_10fb8080();
            if (piVar13 == piVar16) {
              uStack_138 = (char *)0x0;
              piStack_13c = (int *)0x10fd119e;
              (**(code **)(iRam00000064 + 0x528))();
            }
          }
        }
        uStack_138 = (char *)0x10fd11af;
        FUN_10f1a830();
      }
      else {
        unaff_EDI = (int *)0xffffffff;
        if (param_6 != (int *)0x0) {
          unaff_EDI = (int *)*param_6;
        }
        piStack_12c = (int *)piVar13[0x40];
        auStack_130 = (undefined1  [4])0x10fd0d00;
        FUN_10dea810();
        uVar11 = 0;
        if ((char)((uint)piVar26 >> 0x18) != '\0') {
          uVar11 = 2;
        }
        uStack_e8 = (double)CONCAT44(uVar11,(int)uStack_e8);
        auStack_130 = (undefined1  [4])0x10fd0d25;
        puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0xb4))();
        piStack_b8 = (int *)*puVar12;
        piStack_b4 = (int *)puVar12[1];
        piStack_b0 = (int *)puVar12[2];
        piStack_ac = (int *)puVar12[3];
        auStack_130 = (undefined1  [4])0x10fd0d66;
        puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0x94))();
        piStack_f4 = (int *)*puVar12;
        piStack_f0 = (int *)puVar12[1];
        uStack_ec = puVar12[2];
        auStack_130 = (undefined1  [4])0x10fd0d96;
        piVar13 = (int *)(**(code **)(*(int *)piVar13[0x40] + 0x10c))();
        auStack_130 = (undefined1  [4])0x10fd0da8;
        piStack_134 = piVar16;
        (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        auStack_130 = (undefined1  [4])uStack_e8._4_4_;
        piStack_dc = *ppiStack_10c + 0x14b;
        piStack_13c = (int *)0x0;
        uStack_138 = (char *)puVar6;
        uVar11 = (**(code **)(*piVar13 + 0xf8))();
        uVar11 = FUN_10bf81b0(&param_2,uVar11);
        uVar25 = (*(code *)(*ppiStack_10c)[0x8a])(&piStack_fc,&uStack_c0,uVar11);
        (*(code *)*uStack_e8._4_4_)(uVar25);
      }
    }
    FUN_10fd9940();
    (**(code **)(*(int *)unaff_EDI[0x40] + 0x63c))();
    piStack_f4 = (int *)0x0;
    piStack_f0 = (int *)0x0;
    uStack_ec = 0;
    if (ppiStack_10c[0x30] == (int *)0x0) {
      uStack_d8 = (double)CONCAT44(unaff_EDI + 0x52,(int *)uStack_d8);
    }
    else {
      FUN_10ab78b0();
      piVar26 = piStack_f0;
      uStack_d8 = (double)CONCAT44(&piStack_f4,(int *)uStack_d8);
      uStack_e8 = (double)CONCAT44(piStack_f0,(int)uStack_e8);
      uVar4 = *(undefined1 *)((int)ppiStack_10c + 0x15);
      piVar13 = (int *)ppiStack_10c[0x30][0x53];
      *(undefined1 *)((int)ppiStack_10c + 0x15) = 1;
      piVar20 = (int *)ppiStack_10c[0x30][0x52];
      piVar15 = (int *)((uint)((int)piVar13 + (3 - (int)piVar20)) >> 2);
      if (piVar13 < piVar20) {
        piVar15 = (int *)0x0;
      }
      piStack_100 = (int *)0x0;
      piVar13 = piStack_f0;
      piStack_cc = piVar20;
      if (piVar15 != (int *)0x0) {
        do {
          if (piStack_f4 != piVar26) {
            piVar16 = piStack_f4;
            do {
              if (*piVar16 == *piVar20) {
                _Src = piVar16 + 1;
                if ((_Src != piVar13) &&
                   (piStack_fc = (int *)((int)piVar13 - (int)_Src), piStack_fc != (int *)0x0)) {
                  piStack_12c = (int *)0x10fd12ee;
                  memmove(piVar16,_Src,(size_t)piStack_fc);
                  piVar13 = piStack_f0;
                }
                piVar13 = piVar13 + -1;
                piStack_f0 = piVar13;
                goto LAB_10fd12ac;
              }
              piVar16 = piVar16 + 1;
            } while (piVar16 != piVar26);
          }
          if ((char)((int *)*piVar20)[7] != '\0') {
            (**(code **)(*(int *)*piVar20 + 0x20))();
            piVar13 = piStack_f0;
          }
LAB_10fd12ac:
          piVar20 = piVar20 + 1;
          piStack_100 = (int *)((int)piStack_100 + 1);
        } while (piStack_100 != piVar15);
        ppiVar18 = ppiStack_10c + 0x34;
      }
      *(undefined1 *)((int)ppiStack_10c + 0x15) = uVar4;
    }
    iVar9 = (**(code **)(*ppiStack_10c[0x40] + 0x20c))();
    uStack_e8 = (double)CONCAT44(iVar9,(int)uStack_e8);
    if (iVar9 != 0) {
      cVar3 = FUN_10f5b910();
      if (cVar3 != '\0') {
        FUN_10f5b960();
      }
      (**(code **)(*uStack_e8._4_4_ + 0xbc))();
    }
    cVar3 = FUN_10f5b910();
    if ((cVar3 == '\0') || (cVar3 = FUN_10f5b910(), cVar3 == '\0')) {
      FUN_10f3a220();
    }
    FUN_10f39d70();
    ppiStack_10c[0x31] = ppiStack_10c[0x30];
    ppiStack_10c[0x30] = (int *)ppiStack_10c;
    cVar3 = (**(code **)(*ppiStack_10c[0x40] + 0x1cc))();
    piVar13 = param_6;
    if (((cVar3 != '\0') &&
        (iVar9 = (**(code **)(*ppiStack_10c[0x40] + 800))(), piVar13 = param_6, iVar9 != 0)) &&
       (piStack_f4 = *(int **)(iVar9 + 0x14), iStack_88 != 0)) {
      uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,*(int *)(iStack_88 + 0x14));
      if (0 < *(int *)(iStack_88 + 0x14)) {
        FUN_116cd730();
        iVar9 = FUN_116cd660();
        piVar13 = param_6;
        if (iVar9 != 0) {
          if ((0 < iStack_8c) && (cVar3 = FUN_116cdb40(), cVar3 == '\x01')) {
            if ((int)uStack_e8 != 0) {
              FUN_10c3d5d0();
            }
            goto LAB_10fd1423;
          }
          iVar9 = (**(code **)(*piStack_f4 + 0x2c))();
          piVar13 = param_6;
          if (iVar9 == 0) {
            iVar9 = (**(code **)(*piStack_f4 + 0x54))();
            piVar13 = aiStack_80;
            if (iVar9 != 0) {
              piVar13 = param_6;
            }
          }
        }
      }
    }
    param_6 = piVar13;
    local_f8 = (int *)((uint)local_f8 & 0xffffff);
    if (param_6 != (int *)0x0) {
      iVar9 = (**(code **)(*ppiStack_10c[0x40] + 800))();
      uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,iVar9);
      if ((iVar9 != 0) && (cVar3 = FUN_10f5ca30(), cVar3 == '\0')) {
        iVar9 = (**(code **)(**(int **)((int)(int *)uStack_d8 + 0x14) + 0x2c))();
        local_f8 = (int *)CONCAT13(iVar9 == 0,(undefined3)local_f8);
      }
      (**(code **)(*piStack_fc + 0x24))();
    }
    cVar3 = (**(code **)(*ppiStack_10c[0x40] + 0x228))();
    if (cVar3 == '\0') {
      (**(code **)(*piStack_fc + 0x6c))();
      FUN_10f5bed0();
    }
    FUN_10f58d40();
    if ((uint *)uStack_c8 != (uint *)0x0) {
      piVar13 = (int *)*(uint *)uStack_c8;
      uVar2 = (ulonglong)uStack_d8 >> 0x20;
      uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,piVar13);
      uStack_d8._0_4_ = (int *)0x0;
      uVar8 = (uint)((int)((uint *)uStack_c8)[1] + (3 - (int)piVar13)) >> 2;
      if ((int *)((uint *)uStack_c8)[1] < piVar13) {
        uVar8 = (uint)(int *)uStack_d8;
      }
      uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
      uStack_d8 = (double)CONCAT44((int)uVar2,uVar8);
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          if ((char)((int *)*piVar13)[7] != '\0') {
            (**(code **)(*(int *)*piVar13 + 0x1c))();
            uVar17 = (uint)(uint *)uStack_c8;
            uVar8 = (uint)(int *)uStack_d8;
          }
          uVar17 = uVar17 + 1;
          piVar13 = piVar13 + 1;
          uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,uVar17);
        } while (uVar17 != uVar8);
        ppiVar18 = ppiStack_10c + 0x34;
      }
    }
    if ((ppiStack_10c[0x30] != (int *)0x0) && (ppiStack_10c[0x31] != (int *)0x0)) {
      bVar21 = false;
      iVar9 = FUN_10f19240();
      if (iVar9 != 0) {
        iVar9 = FUN_10f19240();
        uStack_d8 = 0.0;
        piStack_d0 = (int *)0x0;
        (**(code **)(**(int **)(iVar9 + 0x10) + 0x14))();
        for (piVar13 = (int *)uStack_d8; bVar21 = false, piVar13 != uStack_d8._4_4_;
            piVar13 = piVar13 + 1) {
          if ((*piVar13 != 0) && (*(int *)(*(int *)(*piVar13 + 0x40) + 0x420) == 7)) {
            bVar21 = true;
            break;
          }
        }
        if ((int *)uStack_d8 != (int *)0x0) {
          FUN_10c3d5d0();
        }
      }
      piVar13 = ppiStack_10c[0x31];
      piStack_b0 = (int *)piVar13[8];
      piStack_ac = (int *)piVar13[9];
      piStack_a8 = (int *)piVar13[10];
      piStack_a4 = (int *)piVar13[0xb];
      ppiVar5 = (int **)FUN_10fde0a0();
      if (((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) ||
         (cVar3 = FUN_10f5b920(), cVar3 == '\0')) {
        piVar13 = ppiStack_10c[0x31];
        piStack_b0 = (int *)piVar13[8];
        piStack_ac = (int *)piVar13[9];
        piStack_a8 = (int *)piVar13[10];
        piStack_a4 = (int *)piVar13[0xb];
        ppiVar5 = (int **)FUN_10fde0a0();
        if ((((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) ||
            (cVar3 = FUN_10f5b8d0(), cVar3 == '\0')) && (!bVar21)) goto LAB_10fd178f;
      }
      piVar13 = ppiStack_10c[0x30];
      piStack_b0 = (int *)piVar13[8];
      piStack_ac = (int *)piVar13[9];
      piStack_a8 = (int *)piVar13[10];
      piStack_a4 = (int *)piVar13[0xb];
      ppiVar5 = (int **)FUN_10fde0a0();
      if ((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_10f5b920();
      }
      uStack_ec = CONCAT13(cVar3 == '\0',(undefined3)uStack_ec);
      if (bVar21) {
        FUN_10f56fa0();
        piStack_dc = (int *)ppiStack_10c[0x30][0x14];
        iVar9 = FUN_10f57110();
        iVar10 = FUN_10f57110();
        if (iVar9 != iVar10) goto LAB_10fd16e7;
        bVar21 = true;
      }
      else {
LAB_10fd16e7:
        bVar21 = false;
      }
      if ((uStack_ec._3_1_ != '\0') && (!bVar21)) {
        iVar9 = piStack_100[0x30];
        piStack_b0 = *(int **)(iVar9 + 0x20);
        piStack_ac = *(int **)(iVar9 + 0x24);
        piStack_a8 = *(int **)(iVar9 + 0x28);
        piStack_a4 = *(int **)(iVar9 + 0x2c);
        ppiVar5 = (int **)FUN_10fde0a0();
        if ((ppiVar5 == ppiVar18) ||
           ((ppiVar5[8] == (int *)0x0 || (cVar3 = FUN_10f5b8d0(), cVar3 == '\0')))) {
          piStack_dc = *(int **)(piStack_100[0x30] + 0x50);
          FUN_10f57110();
          CInfoRecord__GetModelString();
          cVar3 = FUN_10fd7600();
          if (cVar3 == '\0') {
            uStack_c8 = (double)CONCAT44(*(undefined4 *)(piStack_100[0x30] + 0x50),(uint *)uStack_c8
                                        );
            FUN_10f57110();
            CInfoRecord__GetModelString();
            FUN_10fd7790();
          }
        }
        FUN_10fd5b50();
      }
    }
LAB_10fd178f:
    FUN_10fdbe60();
    if (local_f8._3_1_ != '\0') {
      FUN_11055d20();
    }
    if ((int)uStack_e8 != 0) {
      FUN_10c3d5d0();
    }
  }
  uVar4 = 1;
LAB_10fd17d0:
  if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  if ((puStack_64 != auStack_78) && (puStack_64 != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  return uVar4;
}



/* ===== FUN_10fdbbf0 @ 10fdbbf0  size=566 ===== */
// strings:
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "Objects/items/arrow_bone.cgf"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""Objects/items/arrow_bone.cgf""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

void __fastcall FUN_10fdbbf0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x100);
  if ((piVar1 != (int *)0x0) && (piVar1[0x56d] == 10)) {
    (**(code **)(*piVar1 + 0x790))(0,1,_DAT_11cbf0e0,_UNK_11cbf0e4,_UNK_11cbf0e8,_UNK_11cbf0ec,0,0);
    uVar2 = FUN_10fb7330();
    FUN_10ad44d0(piVar1,"weapon_item_attachment",uVar2);
    (**(code **)(*piVar1 + 0x790))(0,1,_DAT_11cbf0e0,_UNK_11cbf0e4,_UNK_11cbf0e8,_UNK_11cbf0ec,0,0);
    uVar2 = FUN_10fb7330();
    FUN_10ad44d0(piVar1,"melee_arrow_item",uVar2);
    (**(code **)(*piVar1 + 0x790))(7,1,_DAT_11cbf0e0,_UNK_11cbf0e4,_UNK_11cbf0e8,_UNK_11cbf0ec,0,0);
    uVar2 = FUN_10fb7330();
    FUN_10ad44d0(piVar1,"melee_arrow_secrect",uVar2);
    FUN_10a64020(0,"weapon_item_attachment");
    FUN_10a64020(0,"melee_arrow_item");
    FUN_10a64020(0,"melee_arrow_secrect");
    FUN_10ad44d0(piVar1,"bow_rage01_A","Objects/items/arrow_bone.cgf",1,_DAT_11cbf0e0,_UNK_11cbf0e4,
                 _UNK_11cbf0e8,_UNK_11cbf0ec,0,0);
    FUN_10ad44d0(piVar1,"bow_rage01_B","Objects/items/arrow_bone.cgf",1,_DAT_11cbf0e0,_UNK_11cbf0e4,
                 _UNK_11cbf0e8,_UNK_11cbf0ec,0,0);
    FUN_10a64020(0,"bow_rage01_A");
    FUN_10a64020(0,"bow_rage01_B");
  }
  return;
}



/* ===== FUN_10fdcba0 @ 10fdcba0  size=814 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "INVALID_STATE"
//   "sm_ignoreSkill"

/* [RE-AUTO c0]
   calls: LAB_10f6bb7a+6
   strings:
     ""INVALID_STATE""
     ""sm_ignoreSkill"" */

undefined4 FUN_10fdcba0(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  char local_7;
  char local_6;
  char local_5;
  
  uVar6 = *(uint *)(DAT_120286b8 + 0x9d4);
  if (uVar6 < (uint)((*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x184)) / 0xc)) {
    iVar10 = *(int *)(*(int *)(param_1 + 0x184) + uVar6 * 0xc);
    iVar1 = *(int *)(param_1 + 0x184) + uVar6 * 0xc;
    if (*(int *)(iVar1 + 4) != iVar10) {
      do {
        local_10 = iVar10;
        cVar3 = FUN_10f388c0(param_2);
        if (cVar3 != '\0') {
          uVar4 = FUN_10f57110();
          CInfoRecord__GetModelString(uVar4);
          pbVar12 = local_c;
          pcVar5 = "INVALID_STATE";
          pbVar11 = local_c;
          do {
            bVar2 = *pbVar11;
            bVar14 = bVar2 < (byte)*pcVar5;
            if (bVar2 != *pcVar5) {
LAB_10fdcc50:
              uVar6 = -(uint)bVar14 | 1;
              goto LAB_10fdcc55;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            bVar14 = bVar2 < (byte)pcVar5[1];
            if (bVar2 != pcVar5[1]) goto LAB_10fdcc50;
            pbVar11 = pbVar11 + 2;
            pcVar5 = pcVar5 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_10fdcc55:
          if (((uVar6 != 0) && (cVar3 = FUN_10f5a900(1,1,param_2,local_c), cVar3 != '\0')) &&
             (iVar7 = FUN_10f59500(pbVar12), pbVar11 = local_c, iVar7 != 0)) {
            if (*(int *)(pbVar12 + -0xc) < 0) {
              pbVar13 = &DAT_1201fc98;
            }
            else {
              pbVar13 = local_c;
              FUN_10c3dab0(pbVar12 + -0xc,local_c);
            }
            iVar8 = FUN_10fb8080(pbVar13);
            pbVar12 = pbVar11;
            if ((iVar8 != 0) && (local_14 = FUN_10f19240(), local_14 != 0)) {
              FUN_10a4bb60(&local_c,extraout_ECX);
              iVar8 = FUN_10fb8080();
              iVar10 = *(int *)(iVar7 + 0x14);
              if ((iVar10 == -1) && (iVar10 = -1, iVar8 != 0)) {
                iVar10 = *(int *)(iVar8 + 0x1c4);
              }
              if ((DAT_1203d0f4 & 1) == 0) {
                DAT_1203d0f4 = DAT_1203d0f4 | 1;
                DAT_1203d0f0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                                ("sm_ignoreSkill");
              }
              uVar4 = 0xffffffff;
              if (*(int *)(*(int *)(param_1 + 0x18) + 0x18c) != 0) {
                uVar4 = FUN_10f3bae0(param_2);
              }
              local_5 = '\x01';
              if (0 < iVar10) {
                uVar9 = FUN_116cd730(iVar10,0);
                iVar7 = FUN_116cd660(uVar9);
                if (iVar7 == 0) {
                  local_5 = '\0';
                }
                else if (((*(char *)(iVar7 + 0x2d) != '\0') &&
                         (cVar3 = FUN_117194d0(iVar10), cVar3 == '\x01')) &&
                        (iVar7 = FUN_11719420(iVar10), 0 < iVar7)) {
                  local_5 = FUN_1139aa90(iVar10,uVar4);
                }
              }
              pbVar13 = &DAT_11d9e064;
              pbVar11 = (byte *)(**(code **)(*DAT_1203d0f0 + 0x10))();
              do {
                bVar2 = *pbVar11;
                bVar14 = bVar2 < *pbVar13;
                if (bVar2 != *pbVar13) {
LAB_10fdcdc8:
                  uVar6 = -(uint)bVar14 | 1;
                  goto LAB_10fdcdcd;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar11[1];
                bVar14 = bVar2 < pbVar13[1];
                if (bVar2 != pbVar13[1]) goto LAB_10fdcdc8;
                pbVar11 = pbVar11 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar2 != 0);
              uVar6 = 0;
LAB_10fdcdcd:
              local_6 = uVar6 == 0;
              local_18 = 0;
              local_7 = iVar10 == -1;
              iVar10 = (**(code **)(**(int **)(local_14 + 0x14) + 0x18))(iVar10,&local_18);
              if ((iVar10 == 0) && (local_5 == '\x01')) {
                bVar14 = true;
              }
              else {
                bVar14 = false;
              }
              if (((local_6 == '\x01') || (local_7 == '\x01')) || (bVar14)) {
                FUN_10a4bb60(&local_c,local_5);
                cVar3 = func_0x10f6bb80(param_1);
                if (cVar3 == '\0') {
                  FUN_10a4bb60(&local_c,extraout_ECX_00,0,1,0,0);
                  FUN_10f59ff0();
                }
                FUN_104f6f60();
                return 1;
              }
              iVar10 = local_10;
              if ((local_18 == 2) && (local_5 == '\x01')) {
                *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x40) = 1;
                FUN_104f6f60();
                return 0;
              }
            }
          }
          pbVar11 = pbVar12 + -0xc;
          if ((-1 < *(int *)pbVar11) && (iVar7 = FUN_10c3dad0(pbVar11), iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar12 + -4));
            FUN_10c3d900(pbVar11);
          }
        }
        iVar10 = iVar10 + 0x48;
      } while (*(int *)(iVar1 + 4) != iVar10);
    }
  }
  return 0;
}



/* ===== FUN_10fee230 @ 10fee230  size=94 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGERUSH_END"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_END"" */

void FUN_10fee230(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
  fVar2 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x1c))(0);
  FUN_10f169e0((float)fVar2);
  if (*(float *)(iVar1 + 0x208c) <= *(float *)(iVar1 + 0x2088)) {
    CInfoRecord__GetModelString("COMBAT_PL04_RAGERUSH_END",extraout_ECX,0,1,0,0);
    FUN_10f59ff0();
  }
  return;
}



/* ===== FUN_10fee290 @ 10fee290  size=306 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGERUSH_START"
//   "HolsteredToRageRush"
//   "UnholsteredToRageRush"
//   "COMBAT_PL04_RAGERUSH_LOW"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_START""
     ""HolsteredToRageRush""
     ""UnholsteredToRageRush""
     ""COMBAT_PL04_RAGERUSH_LOW"" */

void __fastcall FUN_10fee290(int param_1)

{
  undefined4 *puVar1;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGERUSH_START",param_1);
  FUN_10f58340();
  FUN_10f56fa0("HolsteredToRageRush");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("UnholsteredToRageRush");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_PL04_RAGERUSH_LOW",0x18);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fefd40;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fefd40;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fefe00;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fefe00;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  return;
}



/* ===== FUN_10fee5b0 @ 10fee5b0  size=335 ===== */
// strings:
//   "RageRushToIdle"
//   "Fire_Ability_Mst.CST.FireBallSparkM_MST"
//   "PLLocomotion"
//   "UnholsteredIdle"
//   "COMBAT_PL04_RAGERUSH_END"

/* [RE-AUTO c0]
   strings:
     ""RageRushToIdle""
     ""Fire_Ability_Mst.CST.FireBallSparkM_MST""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_PL04_RAGERUSH_END"" */

void __fastcall FUN_10fee5b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = FUN_10fee1e0;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fee1e0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fefef0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fefef0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10fee230);
  FUN_10f56fa0("RageRushToIdle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("Fire_Ability_Mst.CST.FireBallSparkM_MST",0x27);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_PL04_RAGERUSH_END",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10fee700 @ 10fee700  size=482 ===== */
// strings:
//   "COMBAT_PL04_RAGERUSH_LOW"
//   "COMBAT_PL04_RAGERUSH_HIGH"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_LOW""
     ""COMBAT_PL04_RAGERUSH_HIGH"" */

void __fastcall FUN_10fee700(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined8 local_2f0 [22];
  undefined1 *local_23c;
  undefined1 *local_220;
  undefined4 local_48;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x100) == 0) {
    return;
  }
  local_14 = FUN_10f19240();
  if (local_14 == 0) {
    return;
  }
  FUN_10f8a510();
  if ((float)(double)((ulonglong)(double)*(float *)(param_1 + 0x158) & DAT_11de9c70) +
      (float)(double)((ulonglong)(double)*(float *)(param_1 + 0x154) & DAT_11de9c70) +
      (float)(double)((ulonglong)(double)*(float *)(param_1 + 0x15c) & DAT_11de9c70) <= DAT_11cc3f68
     ) {
    *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  }
  local_8 = 0.0;
  FUN_10f56fa0("COMBAT_PL04_RAGERUSH_LOW");
  local_c = *(undefined4 *)(param_1 + 0x50);
  iVar1 = FUN_10f57110();
  iVar2 = FUN_10f57110();
  if (iVar1 == iVar2) {
    fVar5 = (float10)FUN_1134cd10();
    uVar3 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x418);
  }
  else {
    FUN_10f56fa0("COMBAT_PL04_RAGERUSH_HIGH");
    local_10 = *(undefined4 *)(param_1 + 0x50);
    iVar1 = FUN_10f57110();
    iVar2 = FUN_10f57110();
    if (iVar1 != iVar2) goto LAB_10fee844;
    fVar5 = (float10)FUN_1134cd30();
    uVar3 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x41c);
  }
  local_8 = (float)fVar5;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
LAB_10fee844:
  local_23c = &DAT_1201fc98;
  local_2f0[0] = 0;
  local_220 = &DAT_1201fc98;
  local_48 = 0;
  local_20 = 0;
  local_1c = local_8;
  local_18 = 0;
  FUN_10ddd690(&local_20);
  FUN_10de9b60(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x100),local_8);
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x198))();
  (**(code **)(*piVar4 + 4))(local_2f0);
  FUN_10ba1fc0();
  return;
}



/* ===== FUN_10fee960 @ 10fee960  size=32 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGERUSH_LOW"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_LOW"" */

void __fastcall FUN_10fee960(int param_1)

{
  CInfoRecord__GetModelString("COMBAT_PL04_RAGERUSH_LOW",param_1);
  FUN_10f58340();
  *(undefined4 *)(param_1 + 0x6c) = 6;
  return;
}



/* ===== FUN_10fee980 @ 10fee980  size=32 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGERUSH_HIGH"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_HIGH"" */

void __fastcall FUN_10fee980(int param_1)

{
  CInfoRecord__GetModelString("COMBAT_PL04_RAGERUSH_HIGH",param_1);
  FUN_10f58340();
  *(undefined4 *)(param_1 + 0x6c) = 7;
  return;
}



/* ===== FUN_10fee9a0 @ 10fee9a0  size=187 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGERUSH_END"
//   "RageRushToIdle"
//   "COMBAT_IDLE"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_END""
     ""RageRushToIdle""
     ""COMBAT_IDLE"" */

void __fastcall FUN_10fee9a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGERUSH_END",param_1);
  FUN_10f58340();
  FUN_10f56fa0("RageRushToIdle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f57080("COMBAT_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10feea60 @ 10feea60  size=109 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_SHIELDATTACK"
//   "Rage01ShieldAttack"
//   "COMBAT_IDLE"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_SHIELDATTACK""
     ""Rage01ShieldAttack""
     ""COMBAT_IDLE"" */

void __fastcall FUN_10feea60(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_SHIELDATTACK",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01ShieldAttack");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_IDLE",0xb);
  return;
}



/* ===== FUN_10feead0 @ 10feead0  size=203 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_SPINATTACK01"
//   "Rage01SpinAttack01"
//   "COMBAT_PL04_RAGE01_SPINATTACK02"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_SPINATTACK01""
     ""Rage01SpinAttack01""
     ""COMBAT_PL04_RAGE01_SPINATTACK02"" */

void __fastcall FUN_10feead0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_SPINATTACK01",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01SpinAttack01");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_PL04_RAGE01_SPINATTACK02",0x1f);
  FUN_10f574b0();
  local_38 = 1;
  local_34 = 0x2d;
  FUN_10f56fa0("COMBAT_PL04_RAGE01_SPINATTACK02",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10feeba0 @ 10feeba0  size=203 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_SPINATTACK02"
//   "Rage01SpinAttack02"
//   "COMBAT_PL04_RAGE01_SPINATTACK03"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_SPINATTACK02""
     ""Rage01SpinAttack02""
     ""COMBAT_PL04_RAGE01_SPINATTACK03"" */

void __fastcall FUN_10feeba0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_SPINATTACK02",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01SpinAttack02");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_PL04_RAGE01_SPINATTACK03",0x1f);
  FUN_10f574b0();
  local_38 = 1;
  local_34 = 0x2d;
  FUN_10f56fa0("COMBAT_PL04_RAGE01_SPINATTACK03",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10feec70 @ 10feec70  size=112 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_SPINATTACK03"
//   "COMBAT_IDLE"
//   "Rage01SpinAttack03"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_SPINATTACK03""
     ""COMBAT_IDLE""
     ""Rage01SpinAttack03"" */

void __fastcall FUN_10feec70(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_SPINATTACK03",param_1);
  FUN_10f58340();
  FUN_1083ab70("COMBAT_IDLE",0xb);
  FUN_10f56fa0("Rage01SpinAttack03");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 != *(undefined4 **)(param_1 + 0x68)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
    return;
  }
  FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  return;
}



/* ===== FUN_10feece0 @ 10feece0  size=109 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_SWORDATTACK"
//   "Rage01SwordAttack"
//   "COMBAT_IDLE"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_SWORDATTACK""
     ""Rage01SwordAttack""
     ""COMBAT_IDLE"" */

void __fastcall FUN_10feece0(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_SWORDATTACK",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01SwordAttack");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_IDLE",0xb);
  return;
}



/* ===== FUN_10feed50 @ 10feed50  size=203 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_STABATTACK01"
//   "Rage01StabAttack01"
//   "COMBAT_PL04_RAGE01_STABATTACK02"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_STABATTACK01""
     ""Rage01StabAttack01""
     ""COMBAT_PL04_RAGE01_STABATTACK02"" */

void __fastcall FUN_10feed50(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_STABATTACK01",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01StabAttack01");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_PL04_RAGE01_STABATTACK02",0x1f);
  FUN_10f574b0();
  local_38 = 1;
  local_34 = 0x2d;
  FUN_10f56fa0("COMBAT_PL04_RAGE01_STABATTACK02",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10feee20 @ 10feee20  size=203 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE01_STABATTACK02"
//   "Rage01StabAttack02"
//   "COMBAT_PL04_RAGE01_STABATTACK03"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE01_STABATTACK02""
     ""Rage01StabAttack02""
     ""COMBAT_PL04_RAGE01_STABATTACK03"" */

void __fastcall FUN_10feee20(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_STABATTACK02",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage01StabAttack02");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_PL04_RAGE01_STABATTACK03",0x1f);
  FUN_10f574b0();
  local_38 = 1;
  local_34 = 0x2d;
  FUN_10f56fa0("COMBAT_PL04_RAGE01_STABATTACK03",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10feeef0 @ 10feeef0  size=112 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_IDLE"
//   "COMBAT_PL04_RAGE01_STABATTACK03"
//   "Rage01StabAttack03"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_IDLE""
     ""COMBAT_PL04_RAGE01_STABATTACK03""
     ""Rage01StabAttack03"" */

void __fastcall FUN_10feeef0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 local_c;
  undefined1 local_5;
  
  FUN_1083ab70("COMBAT_IDLE",0xb);
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE01_STABATTACK03",extraout_ECX);
  FUN_10f58340();
  FUN_10f56fa0("Rage01StabAttack03");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 != *(undefined4 **)(param_1 + 0x68)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
    return;
  }
  FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  return;
}



/* ===== FUN_10fef700 @ 10fef700  size=667 ===== */
// calls: CInfoRecord::GetModelString, rand
// strings:
//   "RandomRight"
//   "RandomLeft"
//   "BombRight"
//   "BombLeft"
//   "Rage03EndEnter"
//   "Rage03EndLeave"
//   "NORMAL_IDLE"
//   "OnEnter"
//   "Throw"
//   "OnLeave"

/* [RE-AUTO c0]
   calls: rand
   strings:
     ""RandomRight""
     ""RandomLeft""
     ""BombRight""
     ""BombLeft""
     ""Rage03EndEnter""
     ""Rage03EndLeave""
     ""NORMAL_IDLE""
     ""OnEnter""
     ""Throw""
     ""OnLeave"" */

void FUN_10fef700(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  undefined *puVar11;
  bool bVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar2 + 0x790))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_10f19240();
  if (iVar4 == 0) {
    return;
  }
  cVar3 = (**(code **)(*piVar2 + 0x228))();
  if (cVar3 == '\0') {
    return;
  }
  piVar5 = (int *)(**(code **)(*piVar2 + 0x10c))();
  uVar6 = (**(code **)(*piVar5 + 0x8c))();
  cVar3 = FUN_10f59630(uVar6);
  if (cVar3 == '\0') {
    return;
  }
  pcVar10 = "RandomRight";
  pbVar7 = *(byte **)(param_2 + 0xc);
  pbVar8 = pbVar7;
  do {
    bVar1 = *pbVar8;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_10fef7b0:
      uVar9 = -(uint)bVar12 | 1;
      goto LAB_10fef7b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_10fef7b0;
    pbVar8 = pbVar8 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar9 = 0;
LAB_10fef7b5:
  if (uVar9 != 0) {
    pcVar10 = "RandomLeft";
    pbVar8 = pbVar7;
    do {
      bVar1 = *pbVar8;
      bVar12 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10fef7e4:
        uVar9 = -(uint)bVar12 | 1;
        goto LAB_10fef7e9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar12 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10fef7e4;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_10fef7e9:
    if (uVar9 != 0) {
      pcVar10 = "BombRight";
      pbVar8 = pbVar7;
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fef818:
          uVar9 = -(uint)bVar12 | 1;
          goto LAB_10fef81d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fef818;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_10fef81d:
      puVar11 = PTR_s_Throw_FlashGrenade_11d05a9b_1_11df9a50;
      if (uVar9 != 0) {
        pcVar10 = "BombLeft";
        pbVar8 = pbVar7;
        do {
          bVar1 = *pbVar8;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_10fef850:
            uVar9 = -(uint)bVar12 | 1;
            goto LAB_10fef855;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_10fef850;
          pbVar8 = pbVar8 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar9 = 0;
LAB_10fef855:
        if (uVar9 != 0) {
          pcVar10 = "Rage03EndEnter";
          pbVar8 = pbVar7;
          do {
            bVar1 = *pbVar8;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_10fef884:
              uVar9 = -(uint)bVar12 | 1;
              goto LAB_10fef889;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_10fef884;
            pbVar8 = pbVar8 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_10fef889:
          if (uVar9 == 0) {
            *(undefined1 *)(param_1 + 0x1f8) = 0;
            return;
          }
          pcVar10 = "Rage03EndLeave";
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_10fef8c0:
              uVar9 = -(uint)bVar12 | 1;
              goto LAB_10fef8c5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_10fef8c0;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_10fef8c5:
          if (uVar9 != 0) {
            return;
          }
          CInfoRecord__GetModelString("NORMAL_IDLE",pcVar10,0,1,0,0);
          FUN_10f59ff0();
          return;
        }
      }
      goto LAB_10fef90b;
    }
  }
  uVar9 = rand();
  puVar11 = (&PTR_s_Throw_FlashGrenade_11d05a9b_1_11df9a50)[uVar9 % 0xd];
LAB_10fef90b:
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  local_18 = 0x11d;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "OnEnter";
  local_10 = puVar11;
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_18);
  local_2c = 0x11d;
  local_28 = 0x4ffff;
  local_24 = 0;
  local_1c = 0;
  local_20 = "Throw";
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_2c);
  local_40 = 0x11d;
  local_3c = 0x4ffff;
  local_30 = 0;
  local_34 = "OnLeave";
  local_38 = puVar11;
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_40);
  return;
}



/* ===== FUN_10fefa20 @ 10fefa20  size=706 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL04_RAGE03"
//   "Rage03_Throw01"
//   "Rage03_Throw02"
//   "Rage03_Throw03"
//   "Rage03_Throw04"
//   "Rage03_Throw05"
//   "Rage03_Throw06"
//   "Rage03_End"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGE03""
     ""Rage03_Throw01""
     ""Rage03_Throw02""
     ""Rage03_Throw03""
     ""Rage03_Throw04""
     ""Rage03_Throw05""
     ""Rage03_Throw06""
     ""Rage03_End"" */

void __fastcall FUN_10fefa20(int param_1)

{
  undefined4 *puVar1;
  code *local_c;
  undefined1 local_5;
  
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(DAT_120286b8 + 0x728);
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  CInfoRecord__GetModelString("COMBAT_PL04_RAGE03",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Rage03_Throw01");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_Throw02");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_Throw03");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_Throw04");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_Throw05");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_Throw06");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Rage03_End");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fef4f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fef4f0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fef560);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fef6a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fef6a0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fef700;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fef700;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10fef9a0;
  if (puVar1 != *(undefined4 **)(param_1 + 0xf0)) {
    *puVar1 = FUN_10fef9a0;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
    return;
  }
  FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  return;
}



/* ===== FUN_10fefe00 @ 10fefe00  size=226 ===== */
// strings:
//   "COMBAT_PL04_RAGERUSH_LOW"
//   "COMBAT_PL04_RAGERUSH_HIGH"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_LOW""
     ""COMBAT_PL04_RAGERUSH_HIGH"" */

void FUN_10fefe00(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
  if (piVar2 != (int *)0x0) {
    iVar4 = FUN_10f19240();
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 0x740))(1);
      cVar3 = (**(code **)(*piVar2 + 0x228))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar2 + 0x7f4))(0);
      }
      pcVar7 = "COMBAT_PL04_RAGERUSH_LOW";
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10fefe78:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10fefe7d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10fefe78;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10fefe7d:
      if (uVar6 != 0) {
        cVar3 = FUN_10a67670(&param_2,"COMBAT_PL04_RAGERUSH_HIGH");
        if (cVar3 != '\0') {
          (**(code **)(*piVar2 + 0x580))(0);
          *(code **)(*(int *)(param_1 + 0x18) + 0x234) = FUN_10fdc650;
        }
      }
    }
  }
  pbVar5 = param_2;
  pbVar8 = param_2 + -0xc;
  if (-1 < *(int *)pbVar8) {
    iVar4 = FUN_10c3dad0(pbVar8);
    if (iVar4 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
      FUN_10c3d900(pbVar8);
    }
  }
  return;
}



/* ===== FUN_10fefef0 @ 10fefef0  size=257 ===== */
// strings:
//   "COMBAT_PL04_RAGERUSH_LOW"
//   "COMBAT_PL04_RAGERUSH_HIGH"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL04_RAGERUSH_LOW""
     ""COMBAT_PL04_RAGERUSH_HIGH"" */

void FUN_10fefef0(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
  if (piVar2 != (int *)0x0) {
    iVar4 = FUN_10f19240();
    if (iVar4 != 0) {
      pcVar7 = "COMBAT_PL04_RAGERUSH_LOW";
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10feff40:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10feff45;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10feff40;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10feff45:
      if (uVar6 != 0) {
        cVar3 = FUN_10a67670(&param_2,"COMBAT_PL04_RAGERUSH_HIGH");
        if (cVar3 != '\0') {
          (**(code **)(*piVar2 + 0x740))(0);
          cVar3 = (**(code **)(*piVar2 + 0x228))();
          if (cVar3 != '\0') {
            FUN_10de9aa0(piVar2,1);
          }
          piVar2[0x822] = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x580))(0);
          *(code **)(*(int *)(param_1 + 0x18) + 0x234) = FUN_10fdc650;
        }
      }
    }
  }
  pbVar5 = param_2;
  pbVar8 = param_2 + -0xc;
  if (-1 < *(int *)pbVar8) {
    iVar4 = FUN_10c3dad0(pbVar8);
    if (iVar4 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
      FUN_10c3d900(pbVar8);
    }
  }
  return;
}



/* ===== FUN_10ff1200 @ 10ff1200  size=337 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_PL05_RAGE_SHOOT"
//   "RageShoot"
//   "COMBAT_IDLE"
//   "PLLocomotion"
//   "UnholsteredIdle"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL05_RAGE_SHOOT""
     ""RageShoot""
     ""COMBAT_IDLE""
     ""PLLocomotion""
     ""UnholsteredIdle"" */

void __fastcall FUN_10ff1200(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL05_RAGE_SHOOT",param_1);
  FUN_10f58340();
  FUN_10f56fa0("RageShoot");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_IDLE",0xb);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10ff1d80;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff1d80;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10ff06f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff06f0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10ff1cd0 @ 10ff1cd0  size=164 ===== */
// strings:
//   "COMBAT_PL05_RAGE_SHOOT"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_PL05_RAGE_SHOOT"" */

void FUN_10ff1cd0(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
  (**(code **)(*piVar2 + 0x740))(1);
  pcVar7 = "COMBAT_PL05_RAGE_SHOOT";
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10ff1d14:
      uVar5 = -(uint)bVar8 | 1;
      goto LAB_10ff1d19;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10ff1d14;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10ff1d19:
  if (uVar5 != 0) {
    FUN_10f15f30(0);
  }
  cVar3 = (**(code **)(*piVar2 + 0x228))();
  if (cVar3 != '\0') {
    FUN_10de9d20(piVar2);
  }
  pbVar4 = param_2 + -0xc;
  if (-1 < *(int *)pbVar4) {
    iVar6 = FUN_10c3dad0(pbVar4);
    if (iVar6 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(pbVar4);
    }
  }
  return;
}



/* ===== FUN_10ff25d0 @ 10ff25d0  size=213 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "WE09GunLanceRageAim"

/* [RE-AUTO c0]
   strings:
     ""WE09GunLanceRageAim"" */

void __fastcall FUN_10ff25d0(int param_1)

{
  undefined4 *puVar1;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("WE09GunLanceRageAim",param_1);
  FUN_10f58340();
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10ff1e70;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff1e70;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10ff1ee0);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10ff20a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff20a0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10ff2120;
  if (puVar1 != *(undefined4 **)(param_1 + 0xf0)) {
    *puVar1 = FUN_10ff2120;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
    return;
  }
  FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  return;
}



/* ===== FUN_1100efe0 @ 1100efe0  size=180 ===== */
// calls: CActor::FireServerOnHitScriptEvent
// strings:
//   "RageBullet"

/* [RE-AUTO c0]
   strings:
     ""RageBullet"" */

void __thiscall FUN_1100efe0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 4) + 4))();
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    iVar4 = *piVar2;
    uVar3 = (**(code **)(*piVar1 + 4))("RageBullet");
    piVar1 = (int *)(**(code **)(iVar4 + 0x150))(uVar3);
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))(param_3);
      if (param_2 == 0) {
        if (iVar4 != 0) {
          CActor__FireServerOnHitScriptEvent(*(undefined4 *)(iVar4 + 8));
          return;
        }
        CActor__FireServerOnHitScriptEvent(0xffffffff);
      }
      else if (param_2 == 1) {
        if (iVar4 != 0) {
          FUN_11001740(*(undefined4 *)(iVar4 + 8));
        }
        (**(code **)(*piVar1 + 0xc4))(1);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_1101e220 @ 1101e220  size=1320 ===== */
// strings:
//   "TestFunc"
//   "SetBuffID"
//   "sBuffID"
//   "AddExtendBuff"
//   "SetContinuous"
//   "bContinuous"
//   "SetCheckDelta"
//   "fCheckDelta"
//   "SetLifeTime"
//   "fLifeTime"
//   "SetEnterInfo"
//   "processEnter,bEnterAdd"
//   "SetLeaveInfo"
//   "processLeave,bLeaveAdd"
//   "SetRemoveBuffGene"
//   "bRemoveBuffGene"
//   "SetEffectID"
//   "sEffectID"
//   "SetPlayerCanAttack"
//   "enable"

/* [RE-AUTO c0]
   strings:
     ""TestFunc""
     ""SetBuffID""
     ""sBuffID""
     ""AddExtendBuff""
     ""SetContinuous""
     ""bContinuous""
     ""SetCheckDelta""
     ""fCheckDelta""
     ""SetLifeTime""
     ""fLifeTime"" */

undefined4 * __thiscall FUN_1101e220(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d085c8;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  piVar2 = (int *)(**(code **)(*param_2 + 0x124))();
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  param_1[0x16] = uVar3;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  piVar2 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x14] = piVar2;
  (**(code **)(*piVar2 + 8))();
  local_14 = &LAB_1101f134;
  pcStack_8 = FUN_1101f3d0;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = &LAB_1101f134;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1101f3d0;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101e880;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBuffID";
    local_3c = "sBuffID";
    local_20 = FUN_1101f1f0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101eb50;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddExtendBuff";
    local_3c = "sBuffID";
    local_20 = FUN_1101f1f0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101e950;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetContinuous";
    local_3c = "bContinuous";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101e9a0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetCheckDelta";
    local_3c = "fCheckDelta";
    local_20 = FUN_1101f1a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101e9f0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetLifeTime";
    local_3c = "fLifeTime";
    local_20 = FUN_1101f1a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ea40;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetEnterInfo";
    local_3c = "processEnter,bEnterAdd";
    local_20 = FUN_1101f230;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101eaa0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetLeaveInfo";
    local_3c = "processLeave,bLeaveAdd";
    local_20 = FUN_1101f230;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101eb00;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetRemoveBuffGene";
    local_3c = "bRemoveBuffGene";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ebc0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetEffectID";
    local_3c = "sEffectID";
    local_20 = FUN_1101f1f0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ec70;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPlayerCanAttack";
    local_3c = "enable";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ec20;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMonsterCanAttack";
    local_3c = "enable";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ecc0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetNPCCanAttack";
    local_3c = "enable";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1101ed10;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPetCanAttack";
    local_3c = "enable";
    local_20 = FUN_1101f290;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  return param_1;
}



/* ===== FUN_1101e7a0 @ 1101e7a0  size=201 ===== */
// strings:
//   "__this"
//   "BuffArea"

/* [RE-AUTO c0]
   strings:
     ""__this""
     ""BuffArea"" */

void __thiscall FUN_1101e7a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int *local_14;
  int local_8;
  
  iVar1 = (int)param_2;
  local_8 = param_1;
  piVar2 = (int *)(**(code **)(**(int **)((int)param_2 + 0xc) + 0x150))(2);
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x38))(), iVar3 != 0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0x30))(0);
    param_2 = piVar2;
    (**(code **)(*piVar2 + 8))();
    local_14 = *(int **)(iVar1 + 8);
    local_18 = 3;
    (**(code **)(*piVar2 + 0x18))("__this",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(local_8 + 0x44));
    FUN_10c0df10("BuffArea",&param_2);
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}



/* ===== FUN_1101e880 @ 1101e880  size=198 ===== */
// calls: atoi, sprintf_s
// strings:
//   "MHBuffArea"
//   "entity %s set a invalid buffID %i"
//   "BuffID Error"

/* [RE-AUTO c0]
   calls: atoi, sprintf_s
   strings:
     ""MHBuffArea""
     ""entity %s set a invalid buffID %i""
     ""BuffID Error"" */

void __thiscall FUN_1101e880(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char local_104 [256];
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((((iVar1 != 0) &&
       (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1),
       piVar2 != (int *)0x0)) && (iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea"), iVar1 != 0))
     && (param_3 != (char *)0x0)) {
    iVar3 = atoi(param_3);
    if (((*(char *)(DAT_1202e818 + 0x209) != '\0') && (iVar3 != 0)) &&
       (iVar4 = FUN_104fd710(iVar3), iVar4 == 0)) {
      uVar5 = (**(code **)(**(int **)(iVar1 + 0xc) + 0x48))(iVar3);
      sprintf_s(local_104,0x100,"entity %s set a invalid buffID %i",uVar5);
      FUN_10c3dc50(local_104,"BuffID Error",0);
    }
    *(int *)(iVar1 + 0x84) = iVar3;
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101e950 @ 1101e950  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101e950(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x8c) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101e9a0 @ 1101e9a0  size=79 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101e9a0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x90) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101e9f0 @ 1101e9f0  size=79 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101e9f0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x94) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ea40 @ 1101ea40  size=84 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ea40(int param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x99) = param_3;
        *(undefined1 *)(iVar1 + 0x9a) = param_4;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101eaa0 @ 1101eaa0  size=84 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101eaa0(int param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x9b) = param_3;
        *(undefined1 *)(iVar1 + 0x9c) = param_4;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101eb00 @ 1101eb00  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101eb00(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x9d) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101eb50 @ 1101eb50  size=97 ===== */
// calls: atoi
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101eb50(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if ((iVar1 != 0) && (param_3 != (char *)0x0)) {
        iVar1 = atoi(param_3);
        if (iVar1 != 0) {
          FUN_10d60090(iVar1);
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ebc0 @ 1101ebc0  size=95 ===== */
// calls: atoi
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ebc0(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if ((iVar1 != 0) && (param_3 != (char *)0x0)) {
        iVar3 = atoi(param_3);
        if (iVar3 != 0) {
          *(int *)(iVar1 + 0x88) = iVar3;
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ec20 @ 1101ec20  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ec20(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xad) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ec70 @ 1101ec70  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ec70(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xac) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ecc0 @ 1101ecc0  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ecc0(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xae) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ed10 @ 1101ed10  size=75 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_1101ed10(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xaf) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_1101ed60 @ 1101ed60  size=57 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

undefined4 __thiscall FUN_1101ed60(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1101ed8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x18))();
      return uVar3;
    }
  }
  return 0;
}



/* ===== FUN_110243b0 @ 110243b0  size=72 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

void __thiscall FUN_110243b0(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("MHBuffArea");
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x7a) = param_3;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_11026970 @ 11026970  size=57 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

undefined4 __thiscall FUN_11026970(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1102699f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x18))();
      return uVar3;
    }
  }
  return 0;
}



