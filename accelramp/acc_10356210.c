// FUN_10356210 @ 10356210
// ramp offsets referenced: [546, 550, 554]


/* [RE-AUTO c0] */

int __thiscall FUN_10356210(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar1 = TdrBuf_PutU32_BE(*param_1);
  if ((iVar1 == 0) && (iVar1 = TdrBuf_PutU16_BE(*(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_10355cd0(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = TdrBuf_PutU64_BE(*(undefined4 *)((int)param_1 + 0x222),
                             *(undefined4 *)((int)param_1 + 0x226));
    if (iVar1 == 0) {
      iVar1 = TdrBuf_PutU32_BE(*(undefined4 *)((int)param_1 + 0x22a));
    }
  }
  return iVar1;
}

