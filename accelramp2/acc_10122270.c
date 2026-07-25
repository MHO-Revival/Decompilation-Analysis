// FUN_10122270 @ 10122270
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

void __fastcall FUN_10122270(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  *param_1 = 0;
  puVar2 = param_1 + 0xb;
  do {
    *(undefined1 *)(puVar2 + -10) = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[0x44] = 0;
    *(undefined1 *)(puVar2 + 0x45) = 0;
    puVar2[0x65] = 0;
    puVar2[0x66] = 0;
    puVar2[0x67] = 0;
    puVar2[0x68] = 0;
    puVar2[0x69] = 0;
    puVar2[0x6a] = 0;
    puVar2[0x6b] = 0;
    puVar2[0x6c] = 0;
    puVar2[0x6d] = 0;
    puVar2[0x6e] = 0;
    puVar2[0x6f] = 0;
    puVar2[0x70] = 0;
    puVar2[0x71] = 0;
    puVar2[0x72] = 0;
    puVar2[0x73] = 0;
    puVar2[0x74] = 0;
    puVar2[0x75] = 0;
    puVar2[0x76] = 0;
    puVar2[0x77] = 0;
    puVar2[0x78] = 0;
    puVar2[0x79] = 0;
    puVar2[0x7a] = 0;
    uVar4 = FUN_1011f960();
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x241) = 0;
    iVar3 = iVar3 + 1;
    puVar2 = (undefined4 *)(iVar1 + 0x26d);
  } while (iVar3 < 0x100);
  param_1[0x9b41] = 0;
  return;
}

