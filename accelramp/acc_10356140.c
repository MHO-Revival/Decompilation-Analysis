// FUN_10356140 @ 10356140
// ramp offsets referenced: [546, 550, 554]


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10356140(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar2 = 10;
  puVar1 = (undefined4 *)((int)param_1 + 0xe);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    iVar2 = iVar2 + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x36);
  } while (iVar2 != 0);
  *(undefined4 *)((int)param_1 + 0x222) = 0;
  *(undefined4 *)((int)param_1 + 0x226) = 0;
  *(undefined4 *)((int)param_1 + 0x22a) = 0;
  return 0;
}

