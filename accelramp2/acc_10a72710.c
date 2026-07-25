// FUN_10a72710 @ 10a72710
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a72710(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = *(undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)(param_2 + 0xc);
  puVar2 = param_1;
  for (iVar1 = 0x40; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  iVar4 = 0;
  param_1[0x41] = *(undefined4 *)(param_2 + 0x114);
  param_1[0x42] = *(undefined4 *)(param_2 + 0x118);
  param_1[0x43] = *(undefined4 *)(param_2 + 0x10c);
  param_1[0x44] = *(undefined4 *)(param_2 + 0x110);
  param_1[0x45] = *(undefined4 *)(param_2 + 0x11c);
  param_1[0x46] = *(undefined4 *)(param_2 + 0x120);
  param_1[0x47] = *(undefined4 *)(param_2 + 0x124);
  param_1[0x48] = *(undefined4 *)(param_2 + 0x128);
  param_1[0x49] = *(undefined4 *)(param_2 + 300);
  param_1[0x4a] = *(undefined4 *)(param_2 + 0x130);
  param_1[0x4b] = *(undefined4 *)(param_2 + 0x134);
  param_1[0x4c] = *(undefined4 *)(param_2 + 0x138);
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x4e] = *(undefined4 *)(param_2 + 0x140);
  param_1[0x4f] = *(undefined4 *)(param_2 + 0x144);
  param_1[0x50] = *(undefined4 *)(param_2 + 0x148);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x14c);
  param_1[0x52] = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x154);
  iVar1 = *(int *)(param_2 + 0x155);
  param_1[0x54] = iVar1;
  if (0 < iVar1) {
    puVar2 = param_1 + 0x56;
    puVar3 = (undefined4 *)(param_2 + 0x15d);
    do {
      puVar2[-1] = puVar3[-1];
      iVar4 = iVar4 + 1;
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (iVar4 < (int)param_1[0x54]);
  }
  param_1[0x6d] = *(undefined4 *)(param_2 + 0x1b9);
  param_1[0x6e] = *(undefined4 *)(param_2 + 0x1bd);
  param_1[0x6f] = *(undefined4 *)(param_2 + 0x1c1);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x1c5);
  *(undefined1 *)((int)param_1 + 0x1c1) = *(undefined1 *)(param_2 + 0x1ca);
  *(undefined1 *)((int)param_1 + 0x1c2) = *(undefined1 *)(param_2 + 0x1cb);
  *(undefined1 *)((int)param_1 + 0x1c3) = *(undefined1 *)(param_2 + 0x1cc);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x1cd);
  param_1[0x72] = *(undefined4 *)(param_2 + 0x1ce);
  param_1[0x73] = *(undefined4 *)(param_2 + 0x1d2);
  param_1[0x74] = *(undefined4 *)(param_2 + 0x1d6);
  param_1[0x75] = *(undefined4 *)(param_2 + 0x1da);
  param_1[0x76] = *(undefined4 *)(param_2 + 0x1de);
  param_1[0x77] = *(undefined4 *)(param_2 + 0x1e2);
  param_1[0x78] = *(undefined4 *)(param_2 + 0x1e6);
  param_1[0x79] = *(undefined4 *)(param_2 + 0x1ea);
  return param_1;
}

