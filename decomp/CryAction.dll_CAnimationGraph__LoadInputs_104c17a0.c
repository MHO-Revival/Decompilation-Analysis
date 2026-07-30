
/* WARNING: Removing unreachable block (ram,0x104c2c73) */
/* [RE-AUTO c3]
   id: CAnimationGraph::LoadInputs
   calls: memcpy, sscanf, memmove
   strings:
     ""CAnimationGraph::LoadInputs""
     ""Inputs""
     ""States""
     ""KeyState""
     ""value""
     ""IntegerState""
     ""SelectWhen""
     ""Guard""
     ""FloatState""
     ""precision"" */

undefined1 CAnimationGraph__LoadInputs(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  size_t sVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  undefined1 local_1a4 [8];
  undefined4 local_19c;
  undefined1 local_194 [8];
  undefined4 local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined4 local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  undefined4 local_154;
  char local_150;
  undefined4 local_14c;
  char local_148;
  int local_144;
  int *local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  byte *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  int local_118;
  undefined1 local_111;
  int local_110;
  undefined1 local_109;
  undefined4 local_108;
  uint local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  int local_f8;
  undefined1 local_f4;
  undefined1 local_ed;
  byte *local_ec;
  undefined1 local_e5;
  int *local_e4;
  char *local_e0;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  int *local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  int local_bc;
  int *local_b4;
  int local_b0;
  char *local_ac;
  int *local_a8;
  int local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_78;
  char *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  undefined1 local_5a;
  undefined1 local_59;
  float local_58;
  undefined1 local_51;
  int *local_50;
  int local_4c;
  int local_48;
  float local_44;
  int *local_40;
  size_t local_3c;
  uint local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  float local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  byte *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_1c = 0;
  (**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x14))(local_1a4);
  local_19c = 0x3dcccccd;
  (**(code **)(*(int *)*param_1 + 0xac))(&local_30,"Inputs");
  (**(code **)(*(int *)*param_1 + 0xac))(&local_28,"States");
  piVar16 = (int *)0x0;
  piVar18 = (int *)0x0;
  local_d8 = (int *)0x0;
  local_e4 = (int *)0x0;
  if ((int *)*param_3 != (int *)0x0) {
    piVar16 = (int *)(**(code **)(*(int *)*param_3 + 0xac))(&local_130,"Inputs");
    if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar16)();
    }
    piVar16 = (int *)*piVar16;
    local_d8 = piVar16;
    if (local_130 != (int *)0x0) {
      (**(code **)(*local_130 + 4))();
    }
    piVar18 = (int *)(**(code **)(*(int *)*param_3 + 0xac))(&local_140,"States");
    if ((undefined4 *)*piVar18 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar18)();
    }
    piVar18 = (int *)*piVar18;
    local_e4 = piVar18;
    if (local_140 != (int *)0x0) {
      (**(code **)(*local_140 + 4))();
    }
  }
  if (((local_30 == (int *)0x0) || (local_28 == (int *)0x0)) ||
     ((*param_3 != 0 && ((piVar16 == (int *)0x0 || (piVar18 == (int *)0x0)))))) {
    local_5 = 0;
  }
  else {
    local_5 = 1;
    *(undefined4 *)(local_24 + 0x28) = 0;
    *(undefined4 *)(local_24 + 0x2c) = 0;
    *(undefined4 *)(local_24 + 0x30) = 0;
    *(undefined4 *)(local_24 + 0x34) = 0;
    *(undefined4 *)(local_24 + 0x38) = 0;
    *(undefined4 *)(local_24 + 0x3c) = 0;
    *(undefined4 *)(local_24 + 0x40) = 0;
    *(undefined4 *)(local_24 + 0x44) = 0;
    *(undefined4 *)(local_24 + 0x48) = 0;
    local_110 = (**(code **)(*local_30 + 0xa0))();
    if (*param_3 != 0) {
      iVar7 = (**(code **)(*piVar16 + 0xa0))();
      local_110 = local_110 + iVar7;
    }
    local_b0 = 0;
    if (0 < local_110) {
      do {
        iVar7 = (**(code **)(*local_30 + 0xa0))();
        piVar17 = local_28;
        if (iVar7 == local_b0) {
          if (piVar16 != (int *)0x0) {
            (**(code **)*piVar16)();
          }
          if (local_30 != (int *)0x0) {
            (**(code **)(*local_30 + 4))();
          }
          local_30 = piVar16;
          if (piVar18 != (int *)0x0) {
            (**(code **)*piVar18)();
          }
          piVar17 = piVar18;
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 4))();
          }
        }
        local_28 = piVar17;
        puVar8 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0xac))(&local_138,"Inputs");
        iVar7 = (**(code **)(*(int *)*puVar8 + 0xa0))();
        if (local_138 != (int *)0x0) {
          (**(code **)(*local_138 + 4))();
        }
        if (local_b0 < iVar7) {
          piVar16 = (int *)(**(code **)(*local_30 + 0xa8))(&local_134,local_b0);
          piVar18 = local_134;
          if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar16)();
            piVar18 = local_134;
          }
        }
        else {
          piVar16 = (int *)(**(code **)(*local_30 + 0xa8))(&local_13c,local_b0 - iVar7);
          piVar18 = local_13c;
          if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar16)();
            piVar18 = local_13c;
          }
        }
        piVar16 = (int *)*piVar16;
        local_34 = piVar16;
        if (piVar18 != (int *)0x0) {
          (**(code **)(*piVar18 + 4))();
        }
        local_10 = (byte *)(**(code **)(*piVar16 + 0x7c))(&DAT_113bf1f0);
        if (*local_10 == 0) {
LAB_104c2e8b:
          local_5 = 0;
        }
        else {
          FUN_10423fd0(local_10);
          local_14 = (int *)FUN_104c5f40(&local_120,0);
          iVar7 = local_120;
          piVar18 = (int *)(local_120 + -0xc);
          if ((-1 < *piVar18) && (iVar9 = FUN_106542c0(piVar18), iVar9 < 1)) {
            DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(iVar7 + -4));
            FUN_106540f0(piVar18);
          }
          local_38 = (uint)(local_14 != (int *)0x0);
          pbVar10 = (byte *)(**(code **)(*piVar16 + 0x20))();
          pcVar13 = "KeyState";
          param_3 = (int *)0x0;
          local_18 = (int *)0x0;
          pbVar15 = pbVar10;
          do {
            bVar1 = *pcVar13;
            bVar19 = bVar1 < *pbVar15;
            if (bVar1 != *pbVar15) {
LAB_104c1af3:
              uVar11 = -(uint)bVar19 | 1;
              goto LAB_104c1af8;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar13[1];
            bVar19 = bVar1 < pbVar15[1];
            if (bVar1 != pbVar15[1]) goto LAB_104c1af3;
            pcVar13 = pcVar13 + 2;
            pbVar15 = pbVar15 + 2;
          } while (bVar1 != 0);
          uVar11 = 0;
LAB_104c1af8:
          if (uVar11 == 0) {
            local_108 = 0;
            local_100 = &local_108;
            local_f4 = local_111;
            local_f8 = 0;
            local_174 = uVar11;
            local_170 = uVar11;
            local_16c = uVar11;
            local_168 = uVar11;
            local_104 = uVar11;
            local_fc = local_100;
            local_2c = (**(code **)(*piVar16 + 0xa0))();
            local_14 = (int *)0x0;
            if (0 < (int)local_2c) {
              do {
                (**(code **)(*piVar16 + 0xa8))(&local_40,local_14);
                pbVar10 = &DAT_113020e0;
                pbVar15 = (byte *)(**(code **)(*local_40 + 0x20))();
                do {
                  bVar1 = *pbVar15;
                  bVar19 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_104c1bc0:
                    uVar11 = -(uint)bVar19 | 1;
                    goto LAB_104c1bc5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar15[1];
                  bVar19 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_104c1bc0;
                  pbVar15 = pbVar15 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                uVar11 = 0;
LAB_104c1bc5:
                if (uVar11 == 0) {
                  iVar7 = (**(code **)(*local_40 + 0x2c))();
                  if (iVar7 != 0) {
                    cVar5 = (**(code **)(*local_40 + 0x80))("value");
                    if (cVar5 != '\0') {
                      uVar12 = (**(code **)(*local_40 + 0x7c))("value");
                      FUN_10423fd0(uVar12);
                      FUN_10467ac0(&local_14c,&local_124);
                      iVar7 = local_124;
                      local_18c = local_14c;
                      local_178 = local_14c;
                      local_154 = local_14c;
                      bVar19 = local_148 != '\0';
                      local_150 = local_148;
                      piVar18 = (int *)(local_124 + -0xc);
                      if ((-1 < *piVar18) && (iVar9 = FUN_106542c0(piVar18), iVar9 < 1)) {
                        DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(iVar7 + -4));
                        FUN_106540f0(piVar18);
                      }
                      if (bVar19) goto LAB_104c1c96;
                    }
                    goto LAB_104c1c92;
                  }
                }
                else {
LAB_104c1c92:
                  local_5 = 0;
                }
LAB_104c1c96:
                if (local_40 != (int *)0x0) {
                  (**(code **)(*local_40 + 4))();
                }
                local_14 = (int *)((int)local_14 + 1);
              } while ((int)local_14 < (int)local_2c);
              param_3 = local_18;
            }
            local_14 = *(int **)(local_24 + 0x10);
            if (local_14 != *(int **)(local_24 + 0x14)) {
              do {
                piVar18 = (int *)*local_14;
                pbVar15 = (byte *)piVar18[4];
                pbVar10 = local_10;
                do {
                  bVar1 = *pbVar15;
                  bVar19 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_104c1cf0:
                    uVar11 = -(uint)bVar19 | 1;
                    goto LAB_104c1cf5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar15[1];
                  bVar19 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_104c1cf0;
                  pbVar15 = pbVar15 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                uVar11 = 0;
LAB_104c1cf5:
                if (uVar11 == 0) {
                  if (piVar18[2] != 2) {
                    local_5 = 0;
                    break;
                  }
                  (**(code **)(*piVar18 + 0x34))(&local_108,param_2);
                }
                local_14 = local_14 + 1;
              } while (local_14 != *(int **)(local_24 + 0x14));
            }
            if ((char)local_38 == '\0') {
              local_14 = (int *)FUN_10653d70(0x2c);
              if (local_14 == (int *)0x0) {
                param_3 = (int *)0x0;
                pbVar15 = local_ec;
              }
              else {
                pbVar15 = &DAT_113cc00c;
                local_ec = &DAT_113cc00c;
                pbVar10 = local_10;
                do {
                  bVar1 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                } while (bVar1 != 0);
                sVar14 = (int)pbVar10 - (int)(local_10 + 1);
                if (sVar14 != 0) {
                  puVar8 = (undefined4 *)FUN_10653f70(sVar14 + 0xd);
                  DAT_113f26c0 = DAT_113f26c0 + sVar14 + 0xd;
                  *puVar8 = 1;
                  pbVar15 = (byte *)(puVar8 + 3);
                  puVar8[1] = sVar14;
                  puVar8[2] = sVar14;
                  pbVar15[sVar14] = 0;
                  local_ec = pbVar15;
                  if (pbVar15 != local_10) {
                    memcpy(pbVar15,local_10,sVar14);
                  }
                }
                local_1c = local_1c | 1;
                param_3 = (int *)FUN_104d7d10(&local_ec,&local_108);
              }
              local_18 = param_3;
              if ((local_1c & 1) != 0) {
                pbVar10 = pbVar15 + -0xc;
                local_1c = local_1c & 0xfffffffe;
                if ((-1 < *(int *)pbVar10) && (iVar7 = FUN_106542c0(pbVar10), iVar7 < 1)) {
                  DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pbVar15 + -4));
                  FUN_106540f0(pbVar10);
                }
                param_3 = local_18;
              }
            }
            if (local_f8 != 0) {
              FUN_104675a0(local_104);
              local_100 = &local_108;
              local_104 = 0;
              local_f8 = 0;
              local_fc = local_100;
            }
LAB_104c2a39:
            if (param_3 == (int *)0x0) {
LAB_104c2e85:
              if ((char)local_38 == '\0') goto LAB_104c2e8b;
            }
            else if ((char)local_38 == '\0') {
              (**(code **)(*piVar16 + 0x50))("signalled",param_3 + 3);
              cVar5 = (**(code **)(*piVar16 + 0x80))("defaultValue");
              if (cVar5 != '\0') {
                iVar7 = *param_3;
                uVar12 = (**(code **)(*piVar16 + 0x7c))("defaultValue");
                uVar6 = (**(code **)(iVar7 + 0x10))(uVar12);
                *(undefined1 *)((int)param_3 + 0xe) = uVar6;
              }
              cVar5 = (**(code **)(*piVar16 + 0x74))("priority",&local_a4);
              iVar7 = local_24;
              if (cVar5 == '\0') {
                iVar9 = 1;
              }
              else if (local_a4 < 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = 0xff;
                if (local_a4 < 0xff) {
                  iVar9 = local_a4;
                }
              }
              *(char *)((int)param_3 + 0xd) = (char)iVar9;
              *(char *)(param_3 + 1) =
                   (char)(*(int *)(local_24 + 0x14) - *(int *)(local_24 + 0x10) >> 2);
              local_a4 = iVar9;
              (**(code **)(*param_3 + 0x20))(param_2,local_24 + 0x4c);
              puVar8 = *(undefined4 **)(iVar7 + 0x14);
              if (puVar8 == *(undefined4 **)(iVar7 + 0x18)) {
                local_59 = 0;
                FUN_1044d830(puVar8,&local_18,&local_59,1,1);
              }
              else {
                *puVar8 = param_3;
                *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 4;
                local_d9 = 0;
                local_db = 0;
              }
              local_e0 = (char *)(**(code **)(*piVar16 + 0x7c))("attachToBlendWeight");
              local_ac = &DAT_113cc00c;
              if (local_e0 != (char *)0x0) {
                pcVar13 = local_e0;
                do {
                  cVar5 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar5 != '\0');
                local_3c = (int)pcVar13 - (int)(local_e0 + 1);
                if (local_3c != 0) {
                  iVar7 = local_3c + 0xd;
                  puVar8 = (undefined4 *)FUN_10653f70(iVar7);
                  DAT_113f26c0 = DAT_113f26c0 + iVar7;
                  *puVar8 = 1;
                  local_ac = (char *)(puVar8 + 3);
                  puVar8[1] = local_3c;
                  puVar8[2] = local_3c;
                  local_ac[local_3c] = '\0';
                  if (local_ac != local_e0) {
                    memcpy(local_ac,local_e0,local_3c);
                  }
                }
              }
              local_11c = 0;
              FUN_1044ce80(&local_70,&DAT_113a2754,&local_11c);
              if (*(int *)(local_70 + -8) != 0) {
                do {
                  pcVar13 = local_70;
                  local_6c = (int *)0xffffffff;
                  iVar7 = sscanf(local_70,"%d",&local_6c);
                  if ((iVar7 != 0) && (local_14 = local_6c, -1 < (int)local_6c)) {
                    local_10 = (byte *)(local_24 + 0x1c);
                    if ((int *)(*(int *)(local_24 + 0x20) - *(int *)local_10 >> 2) <= local_6c) {
                      puVar8 = (undefined4 *)((int)local_6c + 1);
                      iVar7 = *(int *)(local_24 + 0x20);
                      local_c = (undefined4 *)(iVar7 - *(int *)local_10 >> 2);
                      local_128 = 0;
                      piVar16 = local_34;
                      if (puVar8 < local_c) {
                        iVar9 = *(int *)local_10 + (int)puVar8 * 4;
                        pcVar13 = local_70;
                        if (iVar9 != iVar7) {
                          local_38 = 0;
                          local_e5 = 0;
                          local_ed = 0;
                          *(int *)(local_24 + 0x20) = iVar9;
                        }
                      }
                      else {
                        local_2c = (int)puVar8 - (int)local_c;
                        if (local_2c != 0) {
                          if ((uint)(*(int *)(local_24 + 0x24) - iVar7 >> 2) < local_2c) {
                            local_51 = 0;
                            FUN_1044d830(iVar7,&local_128,&local_51,local_2c,0);
                          }
                          else {
                            local_5a = 0;
                            FUN_1044d640(iVar7,local_2c,&local_128,&local_5a);
                          }
                        }
                      }
                    }
                    *(int **)(*(int *)local_10 + (int)local_6c * 4) = param_3;
                    if ((int)local_6c < 4) {
                      (**(code **)(*piVar16 + 100))
                                ("blendWeightMoveSpeed",local_24 + 0x28 + (int)local_6c * 4);
                    }
                  }
                  piVar18 = (int *)FUN_1044ce80(&local_144,&DAT_113a2754,&local_11c);
                  if (pcVar13 != (char *)*piVar18) {
                    piVar17 = (int *)(pcVar13 + -0xc);
                    if (*piVar17 < 0) {
                      if (-1 < *(int *)(*piVar18 + -0xc)) {
LAB_104c2db9:
                        local_70 = (char *)*piVar18;
                        FUN_106542a0(local_70 + -0xc);
                      }
                    }
                    else {
                      if (-1 < *(int *)(*piVar18 + -0xc)) {
                        if ((-1 < *piVar17) && (iVar7 = FUN_106542c0(piVar17), iVar7 < 1)) {
                          DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pcVar13 + -4));
                          FUN_106540f0(piVar17);
                        }
                        goto LAB_104c2db9;
                      }
                      if ((-1 < *piVar17) && (iVar7 = FUN_106542c0(piVar17), iVar7 < 1)) {
                        DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pcVar13 + -4));
                        FUN_106540f0(piVar17);
                      }
                      local_70 = (char *)*piVar18;
                    }
                  }
                  iVar7 = local_144;
                  piVar18 = (int *)(local_144 + -0xc);
                  if ((-1 < *piVar18) && (iVar9 = FUN_106542c0(piVar18), iVar9 < 1)) {
                    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(iVar7 + -4));
                    FUN_106540f0(piVar18);
                  }
                  if (*(int *)(local_70 + -8) == 0) break;
                  param_3 = local_18;
                } while( true );
              }
              pcVar13 = local_70;
              piVar18 = (int *)(local_70 + -0xc);
              if ((-1 < *piVar18) && (iVar7 = FUN_106542c0(piVar18), iVar7 < 1)) {
                DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pcVar13 + -4));
                FUN_106540f0(piVar18);
              }
              pcVar13 = local_ac;
              piVar18 = (int *)(local_ac + -0xc);
              if ((-1 < *piVar18) && (iVar7 = FUN_106542c0(piVar18), iVar7 < 1)) {
                DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pcVar13 + -4));
                FUN_106540f0(piVar18);
              }
            }
          }
          else {
            pcVar13 = "IntegerState";
            pbVar15 = pbVar10;
            do {
              bVar1 = *pcVar13;
              bVar19 = bVar1 < *pbVar15;
              if (bVar1 != *pbVar15) {
LAB_104c1e80:
                uVar11 = -(uint)bVar19 | 1;
                goto LAB_104c1e85;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar13[1];
              bVar19 = bVar1 < pbVar15[1];
              if (bVar1 != pbVar15[1]) goto LAB_104c1e80;
              pcVar13 = pcVar13 + 2;
              pbVar15 = pbVar15 + 2;
            } while (bVar1 != 0);
            uVar11 = 0;
LAB_104c1e85:
            if (uVar11 == 0) {
              local_da = 0;
              local_88 = 0;
              local_80 = &local_88;
              local_78 = 0;
              local_188 = uVar11;
              local_184 = uVar11;
              local_180 = uVar11;
              local_17c = uVar11;
              local_84 = uVar11;
              local_7c = local_80;
              puVar8 = (undefined4 *)(**(code **)(*local_28 + 0xa0))();
              iVar7 = 0;
              local_c = puVar8;
              if (0 < (int)puVar8) {
                do {
                  (**(code **)(*local_28 + 0xa8))(&local_68,iVar7);
                  if (local_68 != (int *)0x0) {
                    (**(code **)(*local_68 + 0xac))(&local_90,"SelectWhen");
                    if (local_90 != (int *)0x0) {
                      (**(code **)(*local_90 + 0xac))(&local_60,local_10);
                      if (local_60 != (int *)0x0) {
                        iVar9 = (**(code **)(*local_60 + 0x2c))();
                        if (iVar9 != 0) {
                          cVar5 = (**(code **)(*local_60 + 0x74))("value",&local_4c);
                          if (cVar5 == '\0') {
                            cVar5 = (**(code **)(*local_60 + 0x74))(&DAT_11301fec,&local_4c);
                            if ((cVar5 == '\0') ||
                               (cVar5 = (**(code **)(*local_60 + 0x74))(&DAT_11301ff0,&local_48),
                               cVar5 == '\0')) {
                              local_5 = 0;
                            }
                            else {
                              FUN_10537090(local_4c,local_48,1);
                            }
                          }
                          else {
                            local_48 = local_4c;
                            FUN_10537090(local_4c,local_4c,1);
                          }
                        }
                        if (local_60 != (int *)0x0) {
                          (**(code **)(*local_60 + 4))();
                        }
                      }
                      if (local_90 != (int *)0x0) {
                        (**(code **)(*local_90 + 4))();
                      }
                    }
                    if (local_68 != (int *)0x0) {
                      (**(code **)(*local_68 + 4))();
                    }
                  }
                  iVar7 = iVar7 + 1;
                  piVar16 = local_34;
                } while (iVar7 < (int)puVar8);
              }
              puVar8 = local_c;
              iVar7 = 0;
              if (0 < (int)local_c) {
                do {
                  (**(code **)(*local_28 + 0xa8))(&local_94,iVar7);
                  if (local_94 != (int *)0x0) {
                    (**(code **)(*local_94 + 0xac))(&local_b4,"Guard");
                    if (local_b4 != (int *)0x0) {
                      (**(code **)(*local_b4 + 0xac))(&local_a8,local_10);
                      if (local_a8 != (int *)0x0) {
                        cVar5 = (**(code **)(*local_a8 + 0x74))(&DAT_11301fec,&local_4c);
                        if ((cVar5 == '\0') ||
                           (cVar5 = (**(code **)(*local_a8 + 0x74))(&DAT_11301ff0,&local_48),
                           cVar5 == '\0')) {
                          local_5 = 0;
                        }
                        else {
                          FUN_10537090(local_4c,local_48,1);
                        }
                        if (local_a8 != (int *)0x0) {
                          (**(code **)(*local_a8 + 4))();
                        }
                      }
                      if (local_b4 != (int *)0x0) {
                        (**(code **)(*local_b4 + 4))();
                      }
                    }
                    if (local_94 != (int *)0x0) {
                      (**(code **)(*local_94 + 4))();
                    }
                  }
                  iVar7 = iVar7 + 1;
                  piVar16 = local_34;
                } while (iVar7 < (int)puVar8);
              }
              cVar5 = (**(code **)(*piVar16 + 0x74))(&DAT_11301fec,&local_4c);
              if ((cVar5 != '\0') &&
                 (cVar5 = (**(code **)(*piVar16 + 0x74))(&DAT_11301ff0,&local_48), cVar5 != '\0')) {
                if (local_78 != 0) {
                  FUN_10537160(local_4c,local_48);
                  FUN_105373e0(local_4c,local_48);
                }
                local_c = *(undefined4 **)(local_24 + 0x10);
                if (local_c != *(undefined4 **)(local_24 + 0x14)) {
                  do {
                    pcVar13 = (char *)*local_c;
                    pbVar15 = *(byte **)(pcVar13 + 0x10);
                    pbVar10 = local_10;
                    do {
                      bVar1 = *pbVar15;
                      bVar19 = bVar1 < *pbVar10;
                      if (bVar1 != *pbVar10) {
LAB_104c2190:
                        uVar11 = -(uint)bVar19 | 1;
                        goto LAB_104c2195;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar15[1];
                      bVar19 = bVar1 < pbVar10[1];
                      if (bVar1 != pbVar10[1]) goto LAB_104c2190;
                      pbVar15 = pbVar15 + 2;
                      pbVar10 = pbVar10 + 2;
                    } while (bVar1 != 0);
                    uVar11 = 0;
LAB_104c2195:
                    local_e0 = pcVar13;
                    if (uVar11 == 0) {
                      if (*(int *)(pcVar13 + 8) != 0) {
                        local_5 = 0;
                        break;
                      }
                      piVar18 = (int *)(pcVar13 + 0x18);
                      local_2c = *(int *)(pcVar13 + 0x1c) - *piVar18 >> 3;
                      FUN_104d4500(piVar18,local_80,&local_88);
                      pcVar3 = local_e0;
                      sVar14 = local_2c - (*(int *)(pcVar13 + 0x1c) - *piVar18 >> 3);
                      local_14 = (int *)0x0;
                      local_3c = sVar14;
                      if (0 < (int)sVar14) {
                        do {
                          FUN_10539e80(pcVar3[0x2c],(char)local_14 + (char)local_2c,pcVar3[0xd]);
                          local_14 = (int *)((int)local_14 + 1);
                          piVar16 = local_34;
                        } while ((int)local_14 < (int)sVar14);
                      }
                    }
                    local_c = local_c + 1;
                  } while (local_c != *(undefined4 **)(local_24 + 0x14));
                }
                if ((char)local_38 == '\0') {
                  param_3 = (int *)FUN_10653d70(0x30);
                  if (param_3 == (int *)0x0) {
                    param_3 = (int *)0x0;
                    pbVar15 = local_12c;
                  }
                  else {
                    pbVar15 = &DAT_113cc00c;
                    local_12c = &DAT_113cc00c;
                    pbVar10 = local_10;
                    do {
                      bVar1 = *pbVar10;
                      pbVar10 = pbVar10 + 1;
                    } while (bVar1 != 0);
                    local_3c = (int)pbVar10 - (int)(local_10 + 1);
                    if (local_3c != 0) {
                      iVar7 = local_3c + 0xd;
                      puVar8 = (undefined4 *)FUN_10653f70(iVar7);
                      DAT_113f26c0 = DAT_113f26c0 + iVar7;
                      *puVar8 = 1;
                      pbVar15 = (byte *)(puVar8 + 3);
                      puVar8[1] = local_3c;
                      puVar8[2] = local_3c;
                      pbVar15[local_3c] = 0;
                      local_12c = pbVar15;
                      if (pbVar15 != local_10) {
                        memcpy(pbVar15,local_10,local_3c);
                      }
                    }
                    local_1c = local_1c | 2;
                    *param_3 = (int)&PTR_FUN_11301eb4;
                    param_3[2] = 0;
                    *(undefined1 *)(param_3 + 3) = 0;
                    *(undefined1 *)((int)param_3 + 0xe) = 0xff;
                    if (*(int *)(pbVar15 + -0xc) < 0) {
                      param_3[4] = (int)&DAT_113cc00c;
                    }
                    else {
                      param_3[4] = (int)pbVar15;
                      FUN_106542a0(pbVar15 + -0xc);
                    }
                    param_3[5] = -1;
                    *param_3 = (int)&PTR_FUN_11301fa4;
                    param_3[6] = 0;
                    param_3[7] = 0;
                    param_3[8] = 0;
                    param_3[9] = local_4c;
                    param_3[10] = local_48;
                    FUN_104d4500(param_3 + 6,local_80,&local_88);
                  }
                  local_18 = param_3;
                  if ((local_1c & 2) != 0) {
                    pbVar10 = pbVar15 + -0xc;
                    local_1c = local_1c & 0xfffffffd;
                    if ((-1 < *(int *)pbVar10) && (iVar7 = FUN_106542c0(pbVar10), iVar7 < 1)) {
                      DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(pbVar15 + -4));
                      FUN_106540f0(pbVar10);
                    }
                    param_3 = local_18;
                  }
                }
                uVar11 = local_84;
                if (local_78 != 0) {
                  while (uVar11 != 0) {
                    FUN_104e1350(*(undefined4 *)(uVar11 + 0xc));
                    uVar2 = *(uint *)(uVar11 + 8);
                    FUN_10653dc0(uVar11);
                    piVar16 = local_34;
                    uVar11 = uVar2;
                  }
                  local_80 = &local_88;
                  local_84 = 0;
                  local_78 = 0;
                  local_7c = local_80;
                }
                goto LAB_104c2a39;
              }
              local_5 = 0;
              uVar11 = local_84;
              if (local_78 != 0) {
                while (uVar11 != 0) {
                  FUN_104e1350(*(undefined4 *)(uVar11 + 0xc));
                  uVar2 = *(uint *)(uVar11 + 8);
                  FUN_10653dc0(uVar11);
                  piVar16 = local_34;
                  uVar11 = uVar2;
                }
                local_80 = &local_88;
                local_84 = 0;
                local_78 = 0;
                local_7c = local_80;
              }
            }
            else {
              pcVar13 = "FloatState";
              do {
                bVar1 = *pcVar13;
                bVar19 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_104c2457:
                  uVar11 = -(uint)bVar19 | 1;
                  goto LAB_104c245c;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar13[1];
                bVar19 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_104c2457;
                pcVar13 = pcVar13 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              uVar11 = 0;
LAB_104c245c:
              if (uVar11 != 0) {
                local_5 = 0;
                goto LAB_104c2e85;
              }
              local_109 = 0;
              local_cc = 0;
              local_c4 = &local_cc;
              local_bc = 0;
              local_58 = 0.0009765625;
              local_164 = uVar11;
              local_160 = uVar11;
              local_15c = uVar11;
              local_158 = uVar11;
              local_c8 = uVar11;
              local_c0 = local_c4;
              (**(code **)(*piVar16 + 100))("precision",&local_58);
              cVar5 = (**(code **)(*piVar16 + 100))(&DAT_11301fec,&local_20);
              if ((cVar5 != '\0') &&
                 (cVar5 = (**(code **)(*piVar16 + 100))(&DAT_11301ff0,&local_44), cVar5 != '\0')) {
                local_c = (undefined4 *)((uint)local_20 ^ DAT_113c1410);
                uVar11 = (**(code **)(*local_28 + 0xa0))();
                iVar7 = 0;
                local_2c = uVar11;
                if (0 < (int)uVar11) {
                  do {
                    (**(code **)(*local_28 + 0xa8))(&local_64,iVar7);
                    if (local_64 != (int *)0x0) {
                      (**(code **)(*local_64 + 0xac))(&local_8c,"SelectWhen");
                      if (local_8c != (int *)0x0) {
                        (**(code **)(*local_8c + 0xac))(&local_50,local_10);
                        if (local_50 != (int *)0x0) {
                          iVar9 = (**(code **)(*local_50 + 0x2c))();
                          if (iVar9 != 0) {
                            cVar5 = (**(code **)(*local_50 + 100))("value",&local_20);
                            if (cVar5 == '\0') {
                              cVar5 = (**(code **)(*local_50 + 100))(&DAT_11301fec,&local_20);
                              if ((cVar5 == '\0') ||
                                 (cVar5 = (**(code **)(*local_50 + 100))(&DAT_11301ff0,&local_44),
                                 cVar5 == '\0')) {
                                local_5 = 0;
                                goto LAB_104c2695;
                              }
                            }
                            else {
                              local_20 = local_20 - local_58 * DAT_113c12b8;
                              local_44 = local_20 + local_58;
                            }
                            fVar4 = local_44;
                            if (local_44 < local_20) {
                              fVar4 = local_20;
                              local_20 = local_44;
                            }
                            local_44 = fVar4;
                            local_d4 = (int)(((float)local_c + local_20) * (DAT_113c12c8 / local_58)
                                            );
                            local_d0 = (int)(((float)local_c + local_44) * (DAT_113c12c8 / local_58)
                                            );
                            FUN_10537090(local_d4,local_d0,1);
                          }
LAB_104c2695:
                          if (local_50 != (int *)0x0) {
                            (**(code **)(*local_50 + 4))();
                          }
                        }
                        if (local_8c != (int *)0x0) {
                          (**(code **)(*local_8c + 4))();
                        }
                      }
                      if (local_64 != (int *)0x0) {
                        (**(code **)(*local_64 + 4))();
                      }
                    }
                    iVar7 = iVar7 + 1;
                    piVar16 = local_34;
                  } while (iVar7 < (int)uVar11);
                }
                uVar11 = local_2c;
                iVar7 = 0;
                if (0 < (int)local_2c) {
                  do {
                    (**(code **)(*local_28 + 0xa8))(&local_98,iVar7);
                    if (local_98 != (int *)0x0) {
                      (**(code **)(*local_98 + 0xac))(&local_9c,"Guard");
                      if (local_9c != (int *)0x0) {
                        (**(code **)(*local_9c + 0xac))(&local_a0,local_10);
                        if (local_a0 != (int *)0x0) {
                          cVar5 = (**(code **)(*local_a0 + 100))(&DAT_11301fec,&local_20);
                          if ((cVar5 == '\0') ||
                             (cVar5 = (**(code **)(*local_a0 + 100))(&DAT_11301ff0,&local_44),
                             fVar4 = local_20, cVar5 == '\0')) {
                            local_5 = 0;
                          }
                          else {
                            if (local_44 < local_20) {
                              local_20 = local_44;
                              local_44 = fVar4;
                            }
                            local_d4 = (int)(((float)local_c + local_20) * (DAT_113c12c8 / local_58)
                                            );
                            local_d0 = (int)(((float)local_c + local_44) * (DAT_113c12c8 / local_58)
                                            );
                            FUN_10537090(local_d4,local_d0,1);
                          }
                          if (local_a0 != (int *)0x0) {
                            (**(code **)(*local_a0 + 4))();
                          }
                        }
                        if (local_9c != (int *)0x0) {
                          (**(code **)(*local_9c + 4))();
                        }
                      }
                      if (local_98 != (int *)0x0) {
                        (**(code **)(*local_98 + 4))();
                      }
                    }
                    iVar7 = iVar7 + 1;
                    piVar16 = local_34;
                  } while (iVar7 < (int)uVar11);
                }
                cVar5 = (**(code **)(*piVar16 + 100))(&DAT_11301fec,&local_20);
                if ((cVar5 != '\0') &&
                   (cVar5 = (**(code **)(*piVar16 + 100))(&DAT_11301ff0,&local_44), cVar5 != '\0'))
                {
                  iVar7 = (int)(((float)local_c + local_20) * (DAT_113c12c8 / local_58));
                  local_d0 = (int)(((float)local_c + local_44) * (DAT_113c12c8 / local_58));
                  local_d4 = iVar7;
                  if (local_bc != 0) {
                    FUN_10537160(iVar7,local_d0);
                    FUN_105373e0(iVar7,local_d0);
                  }
                  puVar8 = local_c;
                  for (piVar18 = *(int **)(local_24 + 0x10); piVar18 != *(int **)(local_24 + 0x14);
                      piVar18 = piVar18 + 1) {
                    pbVar15 = *(byte **)(*piVar18 + 0x10);
                    pbVar10 = local_10;
                    do {
                      bVar1 = *pbVar15;
                      bVar19 = bVar1 < *pbVar10;
                      if (bVar1 != *pbVar10) {
LAB_104c28e3:
                        uVar11 = -(uint)bVar19 | 1;
                        goto LAB_104c28e8;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar15[1];
                      bVar19 = bVar1 < pbVar10[1];
                      if (bVar1 != pbVar10[1]) goto LAB_104c28e3;
                      pbVar15 = pbVar15 + 2;
                      pbVar10 = pbVar10 + 2;
                    } while (bVar1 != 0);
                    uVar11 = 0;
LAB_104c28e8:
                    if (uVar11 == 0) {
                      if (*(int *)(*piVar18 + 8) != 1) {
                        local_5 = 0;
                        break;
                      }
                      FUN_104de5f0(&local_cc,&local_d4,local_58,puVar8,param_2);
                      puVar8 = local_c;
                    }
                  }
                  if ((char)local_38 == '\0') {
                    iVar7 = FUN_10653d70(0x38);
                    if (iVar7 == 0) {
                      param_3 = (int *)0x0;
                    }
                    else {
                      FUN_10423fd0(local_10);
                      local_1c = local_1c | 4;
                      param_3 = (int *)FUN_104d7b80(&local_118,&local_cc,&local_d4,local_58,local_c)
                      ;
                    }
                    iVar7 = local_118;
                    local_18 = param_3;
                    if ((local_1c & 4) != 0) {
                      local_1c = local_1c & 0xfffffffb;
                      piVar18 = (int *)(local_118 + -0xc);
                      if ((-1 < *piVar18) && (iVar9 = FUN_106542c0(piVar18), iVar9 < 1)) {
                        DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(iVar7 + -4));
                        FUN_106540f0(piVar18);
                      }
                      param_3 = local_18;
                    }
                  }
                  uVar11 = local_c8;
                  if (local_bc != 0) {
                    while (uVar11 != 0) {
                      FUN_104e1350(*(undefined4 *)(uVar11 + 0xc));
                      uVar2 = *(uint *)(uVar11 + 8);
                      FUN_10653dc0(uVar11);
                      piVar16 = local_34;
                      uVar11 = uVar2;
                    }
                    local_c4 = &local_cc;
                    local_c8 = 0;
                    local_bc = 0;
                    local_c0 = local_c4;
                  }
                  goto LAB_104c2a39;
                }
              }
              local_5 = 0;
              FUN_104e7a00();
            }
          }
        }
        (**(code **)(*piVar16 + 4))();
        local_b0 = local_b0 + 1;
        piVar16 = local_d8;
        piVar18 = local_e4;
      } while (local_b0 < local_110);
    }
  }
  if (local_e4 != (int *)0x0) {
    (**(code **)(*local_e4 + 4))();
  }
  if (local_d8 != (int *)0x0) {
    (**(code **)(*local_d8 + 4))();
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 4))();
  }
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 4))();
  }
  (**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x14))(local_194);
  return local_5;
}

