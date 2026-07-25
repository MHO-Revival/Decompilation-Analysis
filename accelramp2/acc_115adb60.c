// FUN_115adb60 @ 115adb60
// ramp offsets referenced: [468, 472, 548]


/* [RE-AUTO c0] */

undefined4 * __fastcall FUN_115adb60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_5;
  
  iVar2 = 0xd;
  *param_1 = &PTR_FUN_11d2fd74;
  puVar1 = param_1 + 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar1;
    puVar1[3] = puVar1;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = local_5;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x58;
  *puVar1 = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = local_5;
  puVar1 = param_1 + 0x5e;
  *puVar1 = puVar1;
  param_1[0x5f] = puVar1;
  FUN_115ad7e0();
  FUN_115ad850();
  FUN_115ad7e0();
  param_1[0x75] = &PTR_FUN_11d2fd60;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = &PTR_FUN_11d2fd60;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = &PTR_FUN_11d2fd60;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = &PTR_FUN_11d2fd60;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

