// FUN_11079e90 @ 11079e90  (24 bytes)
// flag-byte accesses:
//   11079e93  MOV AL,byte ptr [ECX + 0x116]
//   11079e9e  XOR byte ptr [ECX + 0x116],AL


/* [RE-AUTO c0] */

void __thiscall FUN_11079e90(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (*(byte *)(param_1 + 0x116) ^ param_2) & 1;
  return;
}

