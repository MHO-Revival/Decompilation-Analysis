// FUN_116e9f00 @ 116e9f00
// ramp offsets referenced: [468, 472, 552]


/* [RE-AUTO c0]
   calls: memcpy, memmove */

void __thiscall FUN_116e9f00(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    if (param_2 + 0x14 != param_1 + 0x14) {
      FUN_100d83d0(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    if (param_2 + 0x30 != param_1 + 0x30) {
      FUN_100d83d0(*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    if (param_2 + 0xb4 != param_1 + 0xb4) {
      FUN_100d83d0(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xc4));
    }
    if (param_2 + 0xcc != param_1 + 0xcc) {
      FUN_100d83d0(*(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xdc));
    }
    if (param_2 + 0xe4 != param_1 + 0xe4) {
      FUN_100d83d0(*(undefined4 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0xf4));
    }
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    iVar5 = 0x15;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    puVar4 = (undefined4 *)(param_1 + 0x118);
    do {
      *puVar4 = *(undefined4 *)((param_2 - param_1) + (int)puVar4);
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar5 != 0);
    FUN_116e4c60(param_2 + 0x100);
    FUN_116e4c60(param_2 + 0x10c);
    FUN_10463d60(param_2 + 0x16c);
    FUN_10463d60(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
    *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
    if (param_2 + 0x1f8 != param_1 + 0x1f8) {
      iVar5 = *(int *)(param_2 + 0x208);
      pvVar1 = *(void **)(param_2 + 0x20c);
      uVar6 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x20c);
      uVar3 = iVar5 - (int)pvVar1;
      if (uVar6 < uVar3) {
        if (uVar6 != 0) {
          memcpy(*(void **)(param_1 + 0x20c),pvVar1,uVar6);
        }
        FUN_100d9260((int)pvVar1 + (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x20c)),iVar5);
      }
      else {
        if (uVar3 != 0) {
          memcpy(*(void **)(param_1 + 0x20c),pvVar1,uVar3);
        }
        pvVar1 = *(void **)(param_1 + 0x208);
        pvVar2 = (void *)(*(int *)(param_1 + 0x20c) + uVar3);
        if (pvVar2 != pvVar1) {
          memmove(pvVar2,pvVar1,1);
          *(int *)(param_1 + 0x208) = (int)pvVar2 + (*(int *)(param_1 + 0x208) - (int)pvVar1);
        }
      }
    }
    if (param_2 + 0x210 != param_1 + 0x210) {
      iVar5 = *(int *)(param_2 + 0x220);
      pvVar1 = *(void **)(param_2 + 0x224);
      uVar6 = *(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x224);
      uVar3 = iVar5 - (int)pvVar1;
      if (uVar6 < uVar3) {
        if (uVar6 != 0) {
          memcpy(*(void **)(param_1 + 0x224),pvVar1,uVar6);
        }
        FUN_100d9260((*(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x224)) + (int)pvVar1,iVar5);
      }
      else {
        if (uVar3 != 0) {
          memcpy(*(void **)(param_1 + 0x224),pvVar1,uVar3);
        }
        pvVar2 = (void *)(*(int *)(param_1 + 0x224) + uVar3);
        pvVar1 = *(void **)(param_1 + 0x220);
        if (pvVar2 != pvVar1) {
          memmove(pvVar2,pvVar1,1);
          *(int *)(param_1 + 0x220) = (int)pvVar2 + (*(int *)(param_1 + 0x220) - (int)pvVar1);
        }
      }
    }
    if (param_2 + 0x228 != param_1 + 0x228) {
      iVar5 = *(int *)(param_2 + 0x238);
      pvVar1 = *(void **)(param_2 + 0x23c);
      uVar6 = *(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x23c);
      uVar3 = iVar5 - (int)pvVar1;
      if (uVar6 < uVar3) {
        if (uVar6 != 0) {
          memcpy(*(void **)(param_1 + 0x23c),pvVar1,uVar6);
        }
        FUN_100d9260((*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x23c)) + (int)pvVar1,iVar5);
      }
      else {
        if (uVar3 != 0) {
          memcpy(*(void **)(param_1 + 0x23c),pvVar1,uVar3);
        }
        pvVar2 = (void *)(*(int *)(param_1 + 0x23c) + uVar3);
        pvVar1 = *(void **)(param_1 + 0x238);
        if (pvVar2 != pvVar1) {
          memmove(pvVar2,pvVar1,1);
          *(int *)(param_1 + 0x238) = (int)pvVar2 + (*(int *)(param_1 + 0x238) - (int)pvVar1);
        }
      }
    }
    iVar5 = 0x15;
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    puVar4 = (undefined4 *)(param_1 + 0x25c);
    do {
      *puVar4 = *(undefined4 *)((int)puVar4 + (param_2 - param_1));
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar5 != 0);
    FUN_116e4c60(param_2 + 0x244);
    FUN_116e4c60(param_2 + 0x250);
    FUN_10463d60(param_2 + 0x2b0);
    FUN_10463d60(param_2 + 700);
    *(undefined1 *)(param_1 + 0x2c8) = *(undefined1 *)(param_2 + 0x2c8);
  }
  return;
}

