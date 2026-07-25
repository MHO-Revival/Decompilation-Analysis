// FUN_114aa770 @ 114aa770
// ramp offsets referenced: [468, 472, 548, 552]


/* [RE-AUTO c0] */

int * __thiscall FUN_114aa770(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  piVar1 = param_2;
  *param_2 = param_1[2];
  param_2[1] = param_1[3];
  FUN_100ebf60(param_2 + 2,0x20,param_1[9]);
  param_2[10] = param_1[10];
  FUN_100ebf60(param_2 + 0xb,500,param_1[0x10]);
  param_2[0x88] = param_1[0x11];
  param_2[0x89] = param_1[0x12];
  param_2[0x8a] = param_1[0x13];
  param_2[0x8b] = param_1[0x14];
  param_2[0x8c] = param_1[0x15];
  param_2[0x8d] = param_1[0x1a];
  param_2[0x8e] = param_1[0x16];
  param_2[0x8f] = param_1[0x17];
  iVar2 = (**(code **)(*param_1 + 0x18))();
  param_2[0x90] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  param_2[0x91] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  param_2[0x92] = iVar2;
  param_2[0x93] = param_1[0x2c];
  *(bool *)(param_2 + 0x94) = (char)param_1[0x5d] == '\x01';
  *(int *)((int)param_2 + 0x251) = param_1[0x86];
  *(int *)((int)param_2 + 0x255) = param_1[0x87];
  *(char *)((int)param_2 + 0x259) = (char)param_1[0x88];
  *(undefined1 *)((int)param_2 + 0x25a) = *(undefined1 *)((int)param_1 + 0x221);
  *(undefined1 *)((int)param_2 + 0x25b) = *(undefined1 *)((int)param_1 + 0x222);
  *(undefined1 *)(param_2 + 0x97) = *(undefined1 *)((int)param_1 + 0x223);
  *(char *)((int)param_2 + 0x25d) = (char)param_1[0x89];
  *(int *)((int)param_2 + 0x25e) = param_1[0x8a];
  *(int *)((int)param_2 + 0x262) = param_1[0x8c];
  *(int *)((int)param_2 + 0x266) = param_1[0x8d];
  *(int *)((int)param_2 + 0x26a) = param_1[0x8e];
  *(int *)((int)param_2 + 0x26e) = param_1[0x8f];
  *(int *)((int)param_2 + 0x272) = param_1[0x90];
  *(int *)((int)param_2 + 0x276) = param_1[0x91];
  *(int *)((int)param_2 + 0x27a) = param_1[0x92];
  *(int *)((int)param_2 + 0x27e) = param_1[0x93];
  *(int *)((int)param_2 + 0x282) = param_1[0x94];
  *(int *)((int)param_2 + 0x286) = param_1[0x95];
  *(int *)((int)param_2 + 0x28a) = param_1[0x18];
  *(int *)((int)param_2 + 0x28e) = param_1[0x19];
  *(int *)((int)param_2 + 0x292) = param_1[0x98];
  *(int *)((int)param_2 + 0x296) = param_1[0x9a];
  *(int *)((int)param_2 + 0x29a) = param_1[0x9c];
  *(int *)((int)param_2 + 0x29e) = param_1[0x9e];
  *(int *)((int)param_2 + 0x2a2) = param_1[0x99];
  *(int *)((int)param_2 + 0x2a6) = param_1[0x9b];
  *(int *)((int)param_2 + 0x2aa) = param_1[0x9d];
  *(int *)((int)param_2 + 0x2ae) = param_1[0x9f];
  *(int *)((int)param_2 + 0x2b2) = param_1[0xa0];
  *(int *)((int)param_2 + 0x2b6) = param_1[0xa1];
  *(int *)((int)param_2 + 0x2ba) = param_1[0xa2];
  *(int *)((int)param_2 + 0x2be) = param_1[0xa3];
  *(int *)((int)param_2 + 0x2c2) = param_1[0x70];
  *(int *)((int)param_2 + 0x2c6) = param_1[0x71];
  *(int *)((int)param_2 + 0x2ca) = param_1[0x72];
  *(int *)((int)param_2 + 0x2ce) = param_1[0x73];
  *(int *)((int)param_2 + 0x2d2) = param_1[0x74];
  *(int *)((int)param_2 + 0x2da) = param_1[0x75];
  param_2[0xd9] = param_1[0x76];
  param_2[0xda] = param_1[0x77];
  *(undefined4 *)((int)param_2 + 0x2de) = 0;
  param_2 = (int *)0x0;
  iVar2 = param_1[0x7a] - param_1[0x79] >> 0x1f;
  if ((param_1[0x7a] - param_1[0x79]) / 0x18 + iVar2 != iVar2) {
    uVar4 = 0;
    puVar3 = (undefined4 *)((int)piVar1 + 0x2ea);
    do {
      if (0xef < uVar4) break;
      param_2 = (int *)((int)param_2 + 1);
      puVar3[-1] = *(undefined4 *)(uVar4 + 4 + param_1[0x79]);
      *puVar3 = *(undefined4 *)(uVar4 + 8 + param_1[0x79]);
      puVar3[-2] = *(undefined4 *)(uVar4 + param_1[0x79]);
      iVar2 = uVar4 + 0xc;
      uVar4 = uVar4 + 0x18;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(iVar2 + param_1[0x79]);
      puVar3 = (undefined4 *)((int)puVar3 + 0xd);
      *(int *)((int)piVar1 + 0x2de) = *(int *)((int)piVar1 + 0x2de) + 1;
    } while (param_2 < (uint)((param_1[0x7a] - param_1[0x79]) / 0x18));
  }
  piVar1[0xdb] = 0;
  param_2 = (int *)0x0;
  iVar2 = param_1[0x7d] - param_1[0x7c] >> 0x1f;
  if ((param_1[0x7d] - param_1[0x7c]) / 0xc + iVar2 != iVar2) {
    uVar4 = 0;
    do {
      if (0x3b < uVar4) {
        return piVar1;
      }
      param_2 = (int *)((int)param_2 + 1);
      *(undefined4 *)((int)piVar1 + uVar4 + 0x370) = *(undefined4 *)(uVar4 + param_1[0x7c]);
      *(undefined4 *)((int)piVar1 + uVar4 + 0x374) = *(undefined4 *)(uVar4 + 4 + param_1[0x7c]);
      piVar1[0xdb] = piVar1[0xdb] + 1;
      uVar4 = uVar4 + 0xc;
    } while (param_2 < (uint)((param_1[0x7d] - param_1[0x7c]) / 0xc));
  }
  return piVar1;
}

