// FUN_10beac30 @ 10beac30
// ramp offsets referenced: [535, 536, 540, 544, 548, 552]


/* [RE-AUTO c0] */

undefined1 * __thiscall FUN_10beac30(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_2 + 9) = *param_1;
  puVar7 = (undefined4 *)(param_2 + 0xd);
  puVar6 = param_1;
  for (iVar5 = 0x40; puVar6 = puVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar7 = puVar7 + 1;
  }
  uVar2 = param_1[0x42];
  uVar3 = param_1[0x43];
  uVar4 = param_1[0x44];
  *(undefined4 *)(param_2 + 0x10d) = param_1[0x41];
  *(undefined4 *)(param_2 + 0x111) = uVar2;
  *(undefined4 *)(param_2 + 0x115) = uVar3;
  *(undefined4 *)(param_2 + 0x119) = uVar4;
  *(undefined8 *)(param_2 + 0x11d) = *(undefined8 *)(param_1 + 0x45);
  *(undefined4 *)(param_2 + 0x125) = param_1[0x47];
  *(undefined2 *)(param_2 + 0x129) = *(undefined2 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x133) = param_1[0x49];
  *(undefined4 *)(param_2 + 0x137) = param_1[0x4a];
  *(undefined4 *)(param_2 + 0x13b) = param_1[0x4b];
  *(undefined4 *)(param_2 + 0x13f) = param_1[0x4c];
  *(undefined4 *)(param_2 + 0x143) = param_1[0x4d];
  *(undefined4 *)(param_2 + 0x147) = param_1[0x4e];
  *(undefined4 *)(param_2 + 0x14b) = param_1[0x4f];
  *(undefined4 *)(param_2 + 0x14f) = param_1[0x50];
  *(undefined4 *)(param_2 + 0x153) = param_1[0x51];
  *(undefined4 *)(param_2 + 0x157) = param_1[0x52];
  *(undefined4 *)(param_2 + 0x15b) = param_1[0x53];
  *(undefined4 *)(param_2 + 0x15f) = param_1[0x54];
  *(undefined4 *)(param_2 + 0x163) = param_1[0x55];
  *(undefined4 *)(param_2 + 0x167) = param_1[0x56];
  *(undefined4 *)(param_2 + 0x16b) = param_1[0x57];
  *(undefined4 *)(param_2 + 0x16f) = param_1[0x58];
  param_2[0x173] = *(undefined1 *)(param_1 + 0x59);
  *param_2 = *(undefined1 *)((int)param_1 + 0x165);
  *(undefined4 *)(param_2 + 0x174) = param_1[0x5a];
  *(undefined4 *)(param_2 + 0x178) = param_1[0x5b];
  *(undefined4 *)(param_2 + 0x17c) = param_1[0x5c];
  *(undefined4 *)(param_2 + 0x180) = param_1[0x5d];
  *(undefined4 *)(param_2 + 0x184) = param_1[0x5e];
  *(undefined4 *)(param_2 + 0x188) = param_1[0x5f];
  *(undefined4 *)(param_2 + 0x18c) = param_1[0x60];
  *(undefined4 *)(param_2 + 400) = param_1[0x61];
  param_2[0x194] = *(undefined1 *)(param_1 + 0x62);
  *(undefined4 *)(param_2 + 299) = param_1[100];
  *(undefined4 *)(param_2 + 0x12f) = param_1[0x65];
  *(undefined4 *)(param_2 + 0x195) = param_1[99];
  *(undefined4 *)(param_2 + 0x199) = param_1[0x66];
  iVar5 = 0;
  if (0 < (int)param_1[0x66]) {
    puVar6 = (undefined4 *)(param_2 + 0x1a1);
    puVar7 = param_1 + 0x68;
    do {
      if (7 < iVar5) break;
      iVar5 = iVar5 + 1;
      puVar6[-1] = puVar7[-1];
      *puVar6 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 3;
      puVar6[1] = *puVar1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < (int)param_1[0x66]);
  }
  *(undefined4 *)(param_2 + 0x1fd) = param_1[0x7f];
  *(undefined4 *)(param_2 + 0x201) = param_1[0x80];
  *(undefined4 *)(param_2 + 0x205) = param_1[0x81];
  param_2[0x209] = *(undefined1 *)(param_1 + 0x82);
  *(undefined4 *)(param_2 + 0x20e) = param_1[0x83];
  *(undefined4 *)(param_2 + 0x212) = param_1[0x84];
  param_2[0x216] = *(undefined1 *)(param_1 + 0x85);
  param_2[0x217] = *(undefined1 *)((int)param_1 + 0x215);
  param_2[0x218] = *(undefined1 *)((int)param_1 + 0x216);
  param_2[0x219] = *(undefined1 *)((int)param_1 + 0x217);
  *(undefined4 *)(param_2 + 0x21a) = param_1[0x86];
  *(undefined4 *)(param_2 + 0x21e) = param_1[0x87];
  *(undefined4 *)(param_2 + 0x222) = param_1[0x88];
  *(undefined4 *)(param_2 + 0x226) = param_1[0x89];
  *(undefined4 *)(param_2 + 0x22a) = param_1[0x8a];
  *(undefined4 *)(param_2 + 0x22e) = param_1[0x8b];
  *(undefined4 *)(param_2 + 0x232) = param_1[0x8c];
  *(undefined4 *)(param_2 + 0x236) = param_1[0x8d];
  return param_2;
}

