// FUN_10356320 @ 10356320
// ramp offsets referenced: [546, 554]


/* [RE-AUTO c0] */

int __thiscall FUN_10356320(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar1 = TdrBuf_GetU32_BE(param_1);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_1 + 4);
    iVar1 = TdrBuf_GetU16_BE(puVar2);
    if (iVar1 == 0) {
      if (10 < *puVar2) {
        return -7;
      }
      uVar3 = 0;
      if (*puVar2 != 0) {
        do {
          iVar1 = FUN_10355e00(param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *puVar2);
      }
      iVar1 = TdrBuf_GetU64_BE(param_1 + 0x222);
      if (iVar1 == 0) {
        iVar1 = TdrBuf_GetU32_BE(param_1 + 0x22a);
      }
    }
  }
  return iVar1;
}

