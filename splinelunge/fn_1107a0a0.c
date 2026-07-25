// FUN_1107a0a0 @ 1107a0a0  (26 bytes)
// flag-byte accesses:
//   1107a0a8  XOR AL,byte ptr [ECX + 0x117]
//   1107a0b0  XOR byte ptr [ECX + 0x117],AL


/* [RE-AUTO c0] */

void __thiscall FUN_1107a0a0(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x117) =
       *(byte *)(param_1 + 0x117) ^ (param_2 * '\x02' ^ *(byte *)(param_1 + 0x117)) & 2;
  return;
}

