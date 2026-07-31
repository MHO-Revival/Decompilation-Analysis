
/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10dba240(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar4 = 0x40;
  puVar6 = param_2;
  puVar8 = param_1;
  while( true ) {
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    *puVar8 = *puVar6;
  }
  uVar1 = param_2[0x42];
  uVar2 = param_2[0x43];
  uVar3 = param_2[0x44];
  iVar7 = 0;
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = uVar1;
  param_1[0x43] = uVar2;
  param_1[0x44] = uVar3;
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_2 + 0x45);
  param_1[0x47] = param_2[0x47];
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  *param_1 = *param_2;
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  *(undefined8 *)(param_1 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
  param_1[0x4f] = param_2[0x4f];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x52] = param_2[0x52];
  *(undefined8 *)(param_1 + 0x53) = *(undefined8 *)(param_2 + 0x53);
  param_1[0x55] = param_2[0x55];
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  param_1[0x58] = param_2[0x58];
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)((int)param_1 + 0x165) = *(undefined1 *)((int)param_2 + 0x165);
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_2 + 0x5a);
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5e] = param_2[0x5e];
  param_1[0x5f] = param_2[0x5f];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[99] = param_2[99];
  iVar4 = param_2[0x66];
  param_1[0x66] = iVar4;
  if (0 < iVar4) {
    puVar5 = (undefined8 *)(param_1 + 0x67);
    do {
      if (7 < iVar7) break;
      iVar7 = iVar7 + 1;
      *puVar5 = *(undefined8 *)(((int)param_2 - (int)param_1) + (int)puVar5);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(((int)param_2 - (int)param_1) + 8 + (int)puVar5)
      ;
      puVar5 = (undefined8 *)((int)puVar5 + 0xc);
    } while (iVar7 < (int)param_1[0x66]);
  }
  *(undefined8 *)(param_1 + 0x7f) = *(undefined8 *)(param_2 + 0x7f);
  param_1[0x81] = param_2[0x81];
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)((int)param_1 + 0x215) = *(undefined1 *)((int)param_2 + 0x215);
  *(undefined1 *)((int)param_1 + 0x216) = *(undefined1 *)((int)param_2 + 0x216);
  *(undefined1 *)((int)param_1 + 0x217) = *(undefined1 *)((int)param_2 + 0x217);
  param_1[0x86] = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  return param_1;
}

