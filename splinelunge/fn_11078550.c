// FUN_11078550 @ 11078550  (31 bytes)
// flag-byte accesses:
//   1107855a  MOV AL,byte ptr [ECX + 0x116]
//   11078565  XOR byte ptr [ECX + 0x116],AL


/* [RE-AUTO c0] */

void __thiscall FUN_11078550(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x116) = *(byte *)(iVar1 + 0x116) ^ (*(byte *)(iVar1 + 0x116) ^ param_2) & 1;
  }
  return;
}

