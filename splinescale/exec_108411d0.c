// FUN_108411d0 @ 108411d0  (1270 bytes)
// CAnimSequencePlay param indices referenced: [1, 2, 3, 4, 5, 7, 12, 16, 20, 23, 24, 25, 26, 27, 28]


/* [RE-AUTO c0] */

void __fastcall
FUN_108411d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 *puVar6;
  
  if (param_1 == 0) {
    iVar3 = FUN_10254130(param_3);
    if (iVar3 == 0) {
      return;
    }
    if (param_2 == 1) {
      iVar4 = FUN_107cb5c0();
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x2afc) != 0)) &&
         (cVar2 = FUN_114b7e60(param_3), cVar2 != '\0')) {
        GrantActivityReward(0x961);
        return;
      }
      puVar1 = *(undefined1 **)(iVar3 + 0x14);
      if (param_4 < 2) {
        puVar6 = &DAT_11d9d32b;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar5 = FUN_1024e9b0(puVar6,10);
        FUN_1112f070(0xbcc,uVar5);
        return;
      }
      puVar6 = &DAT_11d9d32b;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      uVar5 = FUN_1024e8a0(param_4,1);
      uVar5 = FUN_1024e9b0(puVar6,10,extraout_ECX,uVar5);
      FUN_1112f050(0xbcd,uVar5);
      return;
    }
    if (param_2 == 2) {
      puVar1 = *(undefined1 **)(iVar3 + 0x14);
      if (param_4 < 2) {
        puVar6 = &DAT_11d9d32b;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar5 = FUN_1024e8a0(param_5,2);
        uVar5 = FUN_1024e9b0(puVar6,10,extraout_ECX_01,uVar5);
        FUN_1112f050(0xbce,uVar5);
        return;
      }
      puVar6 = &DAT_11d9d32b;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      uVar5 = FUN_1024e8a0(param_5,2);
      uVar5 = FUN_1024e8a0(param_4,1,extraout_ECX_00,uVar5);
      uVar5 = FUN_1024e9b0(puVar6,10,uVar5);
      FUN_1112f030(0xbcf,uVar5);
      return;
    }
    if (param_2 != 3) {
      return;
    }
    puVar1 = *(undefined1 **)(iVar3 + 0x14);
    if (param_4 < 2) {
      puVar6 = &DAT_11d9d32b;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      uVar5 = FUN_1024e9b0(puVar6,10);
      FUN_1112f070(0xbd5,uVar5);
      return;
    }
    puVar6 = &DAT_11d9d32b;
    if (puVar1 != (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = FUN_1024e8a0(param_4,1);
    uVar5 = FUN_1024e9b0(puVar6,10,extraout_ECX_02,uVar5);
    FUN_1112f050(0xbd6,uVar5);
    return;
  }
  if (0 < param_1) {
    FUN_107cb930();
  }
  if (param_2 == 1) {
    if (param_1 == 3) {
      GrantActivityReward(0xbc5);
      return;
    }
    if ((param_1 != 5) && (param_1 != 9)) {
      if (param_1 == 6) {
        GrantActivityReward(0xbc7);
        return;
      }
      if (param_1 == 4) {
        GrantActivityReward(0xbc8);
        return;
      }
      if (param_1 == 0x17) goto LAB_108413fa;
      if (param_1 == 0x18) goto LAB_10841411;
      if (param_1 == 0x19) goto LAB_108416b4;
      if (param_1 == 0x1b) {
        GrantActivityReward(0xbc4);
        return;
      }
      if (param_1 == 0x1d) {
        GrantActivityReward(0xcf5);
        return;
      }
      if (param_1 == 0x1c) {
        GrantActivityReward(0xcf6);
        return;
      }
      if (param_1 != 0x1a) {
        if (param_1 == 0x20) {
          GrantActivityReward(0x69a);
          return;
        }
        if (param_1 == 0x25) {
          GrantActivityReward(0x6f1);
          return;
        }
        if (param_1 == 0x2d) {
          GrantActivityReward(0x73d);
          return;
        }
        if (param_1 == 1) {
          GrantActivityReward(0x740);
          return;
        }
        if (param_1 == 0x2e) {
          GrantActivityReward(0xab0);
          return;
        }
        if (param_1 == 0x30) {
          GrantActivityReward(0x75c);
          return;
        }
        if (param_1 == 0x31) {
          GrantActivityReward(0x75d);
          return;
        }
        if (param_1 == 0x32) {
          GrantActivityReward(0x75e);
          return;
        }
        if (param_1 != 0x35) {
          if (param_1 == 0x36) {
            GrantActivityReward(0xebe);
            return;
          }
          if (param_1 == 0x38) {
            GrantActivityReward(0xa83);
            return;
          }
          if (param_1 != 0x37) {
            if (param_1 == 0x2a) {
              GrantActivityReward(0x862);
              return;
            }
            if (param_1 == 0x3b) {
              GrantActivityReward(0x4ca);
              return;
            }
            if (param_1 != 0x2b) {
              return;
            }
          }
          GrantActivityReward(0xa82);
          return;
        }
      }
    }
    GrantActivityReward(0xbc6);
    return;
  }
  if (param_2 == 4) {
    if (param_1 == 0x2a) {
      GrantActivityReward(0x73a);
      return;
    }
    if (param_1 == 0x2b) {
      GrantActivityReward(0x73b);
      return;
    }
    if (param_1 == 0x2c) {
      GrantActivityReward(0x73c);
      return;
    }
    if (param_1 != 0x2f) {
      return;
    }
    GrantActivityReward(0x75b);
    return;
  }
  if (param_2 == 2) {
    if (param_1 == 8) {
      GrantActivityReward(0xbca);
      return;
    }
    if (param_1 != 7) {
      return;
    }
    GrantActivityReward(0xbcb);
    return;
  }
  if (param_2 != 3) {
    return;
  }
  if (param_1 == 5) {
    GrantActivityReward(0xbd2);
    return;
  }
  if (param_1 == 6) {
    GrantActivityReward(0xbd3);
    return;
  }
  if (param_1 == 4) {
    GrantActivityReward(0xbd4);
    return;
  }
  if (param_1 != 0x17) {
    if (param_1 != 0x18) {
      if (param_1 != 0x19) {
        return;
      }
LAB_108416b4:
      GrantActivityReward(0x1437);
      return;
    }
LAB_10841411:
    GrantActivityReward(0x1436);
    return;
  }
LAB_108413fa:
  GrantActivityReward(0x1431);
  return;
}

