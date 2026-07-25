// FUN_102ecc60 @ 102ecc60
// ramp offsets referenced: [537, 538, 550, 554]


/* [RE-AUTO c0] */

int __thiscall FUN_102ecc60(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = param_2;
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar4 = TdrBuf_GetU8(param_1);
  if ((((iVar4 == 0) && (iVar4 = TdrBuf_GetU64_BE(param_1 + 1), iVar4 == 0)) &&
      (iVar4 = TdrBuf_GetU32_BE(param_1 + 9), iVar4 == 0)) &&
     (iVar4 = TdrBuf_GetU32_BE(&param_2), iVar4 == 0)) {
    if ((char *)(*(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4)) < param_2) {
      return -2;
    }
    if ((char *)0x100 < param_2) {
      return -3;
    }
    if (param_2 == (char *)0x0) {
      return -4;
    }
    pcVar5 = (char *)(param_1 + 0xd);
    iVar4 = TdrBuf_GetBytes(pcVar5,param_2);
    if (iVar4 == 0) {
      if (param_2[param_1 + 0xc] == '\0') {
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (param_2 == pcVar5 + (1 - (param_1 + 0xe))) {
          iVar4 = TdrBuf_GetU32_BE(&param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((char *)(*(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4)) < param_2) {
            return -2;
          }
          if ((char *)0x1e < param_2) {
            return -3;
          }
          if (param_2 == (char *)0x0) {
            return -4;
          }
          pcVar5 = (char *)(param_1 + 0x10d);
          iVar4 = TdrBuf_GetBytes(pcVar5,param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (param_2[param_1 + 0x10c] != '\0') {
            return -5;
          }
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (param_2 != pcVar5 + (1 - (param_1 + 0x10e))) {
            return -5;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 299);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x12f);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x133);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x137);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x13b);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x13f);
          uVar3 = param_3;
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x173);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102716f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(&param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(char **)(param_1 + 400) = param_2;
          iVar4 = TdrBuf_GetU8(param_1 + 0x194);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x195);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE((int *)(param_1 + 0x199));
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = *(int *)(param_1 + 0x199);
          if (iVar4 < 0) {
            return -6;
          }
          if (8 < iVar4) {
            return -7;
          }
          iVar6 = 0;
          if (0 < iVar4) {
            param_2 = (char *)(param_1 + 0x19d);
            do {
              iVar4 = FUN_102712f0(pcVar2,param_3);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar6 = iVar6 + 1;
              param_2 = param_2 + 0xc;
            } while (iVar6 < *(int *)(param_1 + 0x199));
          }
          uVar3 = param_3;
          iVar4 = FUN_102712f0(pcVar2,param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x209);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x20a);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x20e);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(param_1 + 0x212);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x216);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x217);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x218);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU8(param_1 + 0x219);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = TdrBuf_GetU32_BE(&param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(uint *)(param_1 + 0x226) = param_3;
          iVar4 = TdrBuf_GetU32_BE(&param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(uint *)(param_1 + 0x22a) = param_3;
          iVar4 = FUN_102712f0(pcVar2,uVar3);
          return iVar4;
        }
      }
      return -5;
    }
  }
  return iVar4;
}

