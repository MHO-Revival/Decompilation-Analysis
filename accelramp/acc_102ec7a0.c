// TdrPack_LargeRoleInfoStruct @ 102ec7a0
// ramp offsets referenced: [537, 538, 550, 554]


/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall TdrPack_LargeRoleInfoStruct(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  undefined4 extraout_ECX_00;
  uint uVar7;
  
  if ((param_3 == 0) || (1 < param_3)) {
    uVar7 = 1;
  }
  else {
    uVar7 = param_3;
    if (param_3 == 0) {
      return -9;
    }
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar5 = -1;
  }
  else {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    iVar5 = TdrBuf_PutU64_BE(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
    if ((iVar5 == 0) && (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 9)), iVar5 == 0)) {
      iVar3 = param_2[1];
      iVar5 = TdrBuf_ReserveU32(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x10c] = 0;
        pcVar6 = param_1 + 0xd;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = TdrBuf_PutBytes(param_1 + 0xd,pcVar6 + (1 - (int)(param_1 + 0xe)));
        if ((iVar5 == 0) && (iVar5 = TdrBuf_PatchU32_BE(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
          iVar3 = param_2[1];
          iVar5 = TdrBuf_ReserveU32(extraout_ECX_00);
          if (iVar5 == 0) {
            iVar4 = param_2[1];
            param_1[0x12a] = 0;
            pcVar6 = param_1 + 0x10d;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = TdrBuf_PutBytes(param_1 + 0x10d,pcVar6 + (1 - (int)(param_1 + 0x10e)));
            if ((((((iVar5 == 0) &&
                   (iVar5 = TdrBuf_PatchU32_BE(param_2[1] - iVar4,iVar3), iVar5 == 0)) &&
                  (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 299)), iVar5 == 0)) &&
                 (((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x12f)), iVar5 == 0 &&
                   (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x133)), iVar5 == 0)) &&
                  ((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x137)), iVar5 == 0 &&
                   ((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x13b)), iVar5 == 0 &&
                    (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x13f)), iVar5 == 0))))))))
                && (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
               ((((iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0 &&
                  (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                 (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                ((((iVar5 = TdrBuf_PutU8(param_1[0x173]), iVar5 == 0 &&
                   (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                  ((iVar5 = FUN_102715d0(param_2,uVar7), iVar5 == 0 &&
                   ((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 400)), iVar5 == 0 &&
                    (iVar5 = TdrBuf_PutU8(param_1[0x194]), iVar5 == 0)))))) &&
                 ((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x195)), iVar5 == 0 &&
                  (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x199)), iVar5 == 0)))))))) {
              iVar5 = *(int *)(param_1 + 0x199);
              if (iVar5 < 0) {
                return -6;
              }
              if (8 < iVar5) {
                return -7;
              }
              param_3 = 0;
              if (0 < iVar5) {
                do {
                  iVar5 = FUN_10271230(param_2,uVar7);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  param_3 = param_3 + 1;
                } while ((int)param_3 < *(int *)(param_1 + 0x199));
              }
              iVar5 = FUN_10271230(param_2,uVar7);
              if ((((((iVar5 == 0) && (iVar5 = TdrBuf_PutU8(param_1[0x209]), iVar5 == 0)) &&
                    (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x20a)), iVar5 == 0)) &&
                   ((iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x20e)), iVar5 == 0 &&
                    (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x212)), iVar5 == 0)))) &&
                  ((iVar5 = TdrBuf_PutU8(param_1[0x216]), iVar5 == 0 &&
                   ((iVar5 = TdrBuf_PutU8(param_1[0x217]), iVar5 == 0 &&
                    (iVar5 = TdrBuf_PutU8(param_1[0x218]), iVar5 == 0)))))) &&
                 ((iVar5 = TdrBuf_PutU8(param_1[0x219]), iVar5 == 0 &&
                  (((iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0 &&
                    (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x226)), iVar5 == 0)) &&
                   (iVar5 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x22a)), iVar5 == 0)))))) {
                iVar5 = FUN_10271230(param_2,uVar7);
                return iVar5;
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}

