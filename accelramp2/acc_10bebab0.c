// FUN_10bebab0 @ 10bebab0
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10bebab0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = *(undefined4 *)(param_2 + 9);
  puVar3 = (undefined4 *)(param_2 + 0xd);
  puVar2 = param_1;
  for (iVar1 = 0x40; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  iVar4 = 0;
  param_1[0x41] = *(undefined4 *)(param_2 + 0x133);
  param_1[0x42] = *(undefined4 *)(param_2 + 0x13b);
  param_1[0x43] = *(undefined4 *)(param_2 + 299);
  param_1[0x44] = *(undefined4 *)(param_2 + 0x12f);
  param_1[0x45] = *(undefined4 *)(param_2 + 0x14f);
  param_1[0x46] = *(undefined4 *)(param_2 + 0x153);
  param_1[0x47] = *(undefined4 *)(param_2 + 0x157);
  param_1[0x48] = *(undefined4 *)(param_2 + 0x167);
  param_1[0x49] = *(undefined4 *)(param_2 + 0x16b);
  param_1[0x4a] = *(undefined4 *)(param_2 + 0x16f);
  param_1[0x4b] = *(undefined4 *)(param_2 + 0x174);
  param_1[0x4c] = *(undefined4 *)(param_2 + 0x178);
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x17c);
  param_1[0x4e] = *(undefined4 *)(param_2 + 0x180);
  param_1[0x4f] = *(undefined4 *)(param_2 + 0x184);
  param_1[0x50] = *(undefined4 *)(param_2 + 0x188);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x18c);
  param_1[0x52] = *(undefined4 *)(param_2 + 400);
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x194);
  iVar1 = *(int *)(param_2 + 0x199);
  param_1[0x54] = iVar1;
  if (0 < iVar1) {
    puVar2 = param_1 + 0x56;
    puVar3 = (undefined4 *)(param_2 + 0x1a1);
    do {
      puVar2[-1] = puVar3[-1];
      iVar4 = iVar4 + 1;
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (iVar4 < (int)param_1[0x54]);
  }
  param_1[0x6d] = *(undefined4 *)(param_2 + 0x1fd);
  param_1[0x6e] = *(undefined4 *)(param_2 + 0x201);
  param_1[0x6f] = *(undefined4 *)(param_2 + 0x205);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x209);
  *(undefined1 *)((int)param_1 + 0x1c1) = *(undefined1 *)(param_2 + 0x216);
  *(undefined1 *)((int)param_1 + 0x1c2) = *(undefined1 *)(param_2 + 0x217);
  *(undefined1 *)((int)param_1 + 0x1c3) = *(undefined1 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x219);
  param_1[0x72] = *(undefined4 *)(param_2 + 0x21a);
  param_1[0x73] = *(undefined4 *)(param_2 + 0x21e);
  param_1[0x74] = *(undefined4 *)(param_2 + 0x222);
  param_1[0x75] = *(undefined4 *)(param_2 + 0x226);
  param_1[0x76] = *(undefined4 *)(param_2 + 0x22a);
  param_1[0x77] = *(undefined4 *)(param_2 + 0x22e);
  param_1[0x78] = *(undefined4 *)(param_2 + 0x232);
  param_1[0x79] = *(undefined4 *)(param_2 + 0x236);
  return param_1;
}

