// FUN_102ec570 @ 102ec570
// ramp offsets referenced: [538, 542, 546, 550, 554]


/* [RE-AUTO c0] */

int __fastcall FUN_102ec570(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  *(undefined4 *)(param_1 + 0x13f) = 0;
  *(undefined4 *)(param_1 + 0x143) = 0;
  *(undefined4 *)(param_1 + 0x147) = 0;
  *(undefined4 *)(param_1 + 0x14b) = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  *(undefined4 *)(param_1 + 0x153) = 0;
  *(undefined4 *)(param_1 + 0x157) = 0;
  *(undefined4 *)(param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  *(undefined4 *)(param_1 + 0x163) = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  *(undefined4 *)(param_1 + 0x16b) = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  param_1[0x173] = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  uVar4 = FUN_10271540();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar3 + 400) = 0;
    iVar2 = 8;
    *(undefined1 *)(iVar3 + 0x194) = 0;
    *(undefined4 *)(iVar3 + 0x195) = 0;
    *(undefined4 *)(iVar3 + 0x199) = 0;
    puVar1 = (undefined4 *)(iVar3 + 0x1a5);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 3;
    } while (iVar2 != 0);
    *(undefined4 *)(iVar3 + 0x1fd) = 0;
    iVar2 = 0;
    *(undefined4 *)(iVar3 + 0x201) = 0;
    *(undefined4 *)(iVar3 + 0x205) = 0;
    *(undefined1 *)(iVar3 + 0x209) = 0;
    *(undefined4 *)(iVar3 + 0x20a) = 0;
    *(undefined4 *)(iVar3 + 0x20e) = 0;
    *(undefined4 *)(iVar3 + 0x212) = 0;
    *(undefined4 *)(iVar3 + 0x216) = 0;
    *(undefined4 *)(iVar3 + 0x21a) = 0;
    *(undefined4 *)(iVar3 + 0x21e) = 0;
    *(undefined4 *)(iVar3 + 0x222) = 0;
    *(undefined4 *)(iVar3 + 0x226) = 0;
    *(undefined4 *)(iVar3 + 0x22a) = 0;
    *(undefined4 *)(iVar3 + 0x22e) = 0;
    *(undefined4 *)(iVar3 + 0x232) = 0;
    *(undefined4 *)(iVar3 + 0x236) = 0;
  }
  return iVar2;
}

