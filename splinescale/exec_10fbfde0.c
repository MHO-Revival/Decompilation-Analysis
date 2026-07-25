// CPlayerInput::ParseActionName @ 10fbfde0  (1761 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 5, 7, 12, 13, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 27, 28]


/* [RE-R1]
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

undefined1 CPlayerInput__ParseActionName(byte *param_1,undefined4 *param_2,undefined4 *param_3)

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

