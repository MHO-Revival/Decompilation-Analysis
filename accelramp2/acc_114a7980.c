// FUN_114a7980 @ 114a7980
// ramp offsets referenced: [468, 472, 548, 552]


/* WARNING: Removing unreachable block (ram,0x114a7bf3) */
/* WARNING: Removing unreachable block (ram,0x114a7cac) */
/* [RE-AUTO c0]
   calls: memmove */

void __thiscall FUN_114a7980(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x24c);
  *(bool *)(param_1 + 0x174) = *(char *)(param_2 + 0x250) != '\0';
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x251);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x255);
  *(undefined1 *)(param_1 + 0x221) = *(undefined1 *)(param_2 + 0x25a);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x259);
  *(undefined1 *)(param_1 + 0x222) = *(undefined1 *)(param_2 + 0x25b);
  *(undefined1 *)(param_1 + 0x223) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(param_2 + 0x25d);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x25e);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x262);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x266);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x26a);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x26e);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x272);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x276);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x27a);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x27e);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x282);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x286);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x28a);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x28e);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x292);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x296);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x29a);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x29e);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x2a2);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x2a6);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x2aa);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x2ae);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x2b2);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x2b6);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x2ba);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x2be);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x2c2);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x2c6);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x2ca);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x2ce);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x2d2);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x2da);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x368);
  if (*(int *)(param_1 + 0x1e4) != *(int *)(param_1 + 0x1e8)) {
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e4);
  }
  if (*(int *)(param_2 + 0x2de) != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x2ea);
    uVar4 = 0;
    do {
      if (9 < uVar4) break;
      uStack_1c = puVar5[-1];
      uStack_18 = *puVar5;
      local_20 = puVar5[-2];
      uStack_14 = CONCAT31(uStack_14._1_3_,*(undefined1 *)(puVar5 + 1));
      uStack_10 = *(undefined4 *)(param_1 + 8);
      uStack_c = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar1 = *(undefined4 **)(param_1 + 0x1e8);
      if (puVar1 == *(undefined4 **)(param_1 + 0x1ec)) {
        FUN_114acb10(puVar1,&local_20,&local_21,1,1);
      }
      else {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = local_20;
          puVar1[1] = uStack_1c;
          puVar1[2] = uStack_18;
          puVar1[3] = uStack_14;
          *(undefined8 *)(puVar1 + 4) = uVar3;
        }
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 0x18;
      }
      uVar4 = uVar4 + 1;
      puVar5 = (undefined4 *)((int)puVar5 + 0xd);
    } while (uVar4 < *(uint *)(param_2 + 0x2de));
  }
  if (*(int *)(param_1 + 0x1f0) != *(int *)(param_1 + 500)) {
    *(int *)(param_1 + 500) = *(int *)(param_1 + 0x1f0);
  }
  uVar4 = 0;
  if (*(int *)(param_2 + 0x36c) != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x374);
    do {
      if (4 < uVar4) break;
      FUN_1012f290();
      uStack_14 = puVar5[-1];
      puVar2 = *(undefined8 **)(param_1 + 500);
      uStack_10 = *puVar5;
      if (puVar2 == *(undefined8 **)(param_1 + 0x1f8)) {
        FUN_11178a00(puVar2,&uStack_14,&local_21,1,1);
      }
      else {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(uStack_10,uStack_14);
          *(undefined4 *)(puVar2 + 1) = uStack_c;
        }
        *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 0xc;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 < *(uint *)(param_2 + 0x36c));
  }
  FUN_11a89daa();
  return;
}

