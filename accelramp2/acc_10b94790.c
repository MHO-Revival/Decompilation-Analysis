// FUN_10b94790 @ 10b94790
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10b94790(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = 0x40;
  *param_1 = *param_2;
  puVar3 = param_2;
  puVar5 = param_1;
  while( true ) {
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar5 = *puVar3;
  }
  iVar4 = 0;
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_2 + 0x45);
  param_1[0x47] = param_2[0x47];
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x4a] = param_2[0x4a];
  *(undefined8 *)(param_1 + 0x4b) = *(undefined8 *)(param_2 + 0x4b);
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
  iVar1 = param_2[0x54];
  param_1[0x54] = iVar1;
  if (0 < iVar1) {
    puVar2 = (undefined8 *)(param_1 + 0x55);
    do {
      if (7 < iVar4) break;
      iVar4 = iVar4 + 1;
      *puVar2 = *(undefined8 *)(((int)param_2 - (int)param_1) + (int)puVar2);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(((int)param_2 - (int)param_1) + 8 + (int)puVar2)
      ;
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
    } while (iVar4 < (int)param_1[0x54]);
  }
  *(undefined8 *)(param_1 + 0x6d) = *(undefined8 *)(param_2 + 0x6d);
  param_1[0x6f] = param_2[0x6f];
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((int)param_1 + 0x1c1) = *(undefined1 *)((int)param_2 + 0x1c1);
  *(undefined1 *)((int)param_1 + 0x1c2) = *(undefined1 *)((int)param_2 + 0x1c2);
  *(undefined1 *)((int)param_1 + 0x1c3) = *(undefined1 *)((int)param_2 + 0x1c3);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = param_2[0x73];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  param_1[0x77] = param_2[0x77];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  return param_1;
}

