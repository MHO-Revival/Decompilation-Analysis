/* ===== FUN_1024c760 @ 1024c760  size=398 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024c760(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar5;
  uint uVar6;
  
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar6) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar1)) {
      *(uint *)(param_2 + 4) = uVar1 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    iVar3 = FUN_1024bf90(param_2);
    if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar6), iVar3 == 0))
        && (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
       (iVar3 = FUN_101150a0(*(undefined1 *)(param_1 + 0x10)), iVar3 == 0)) {
      if (*(byte *)(param_1 + 0x10) < 0x65) {
        if (*(byte *)(param_1 + 0x10) != 0) {
          iVar3 = FUN_1010c5f0(0x45);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX);
          iVar3 = *(int *)(param_2 + 4);
          uVar6 = 0;
          if (*(char *)(param_1 + 0x10) != '\0') {
            do {
              iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x11 + uVar6 * 4));
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar5 = (char)uVar6 + 1;
              uVar6 = (uint)bVar5;
            } while (bVar5 < *(byte *)(param_1 + 0x10));
          }
          iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        if (*(byte *)(param_1 + 0x10) < 0x65) {
          if (*(byte *)(param_1 + 0x10) == 0) {
            return 0;
          }
          iVar3 = FUN_1010c5f0(0x55);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = *(int *)(param_2 + 4);
          bVar5 = 0;
          if (*(char *)(param_1 + 0x10) != '\0') {
            do {
              iVar4 = FUN_101150a0(*(undefined1 *)(bVar5 + 0x1a1 + param_1));
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar5 = bVar5 + 1;
            } while (bVar5 < *(byte *)(param_1 + 0x10));
          }
          iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar2);
          return iVar3;
        }
      }
      return -7;
    }
  }
  return iVar3;
}



/* ===== FUN_1024cf20 @ 1024cf20  size=374 ===== */
// calls: _wassert
// strings:
//   "[giftAttr]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "0x%02x"
//   "[giftNum]"
//   "[giftId]"
//   "[giftState]"
//   " 0x%02x"

/* WARNING: Removing unreachable block (ram,0x1024cf31) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[giftAttr]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""0x%02x""
     ""[giftNum]""
     ""[giftId]""
     ""[giftState]""
     "" 0x%02x"" */

int __thiscall FUN_1024cf20(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[giftAttr]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_1024c2f0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[giftNum]","0x%02x",
                             *(undefined1 *)(param_1 + 0x10)), iVar1 == 0)) {
      if (100 < *(byte *)(param_1 + 0x10)) {
        return -7;
      }
      iVar1 = FUN_1024a3b0(extraout_ECX,"[giftId]",*(byte *)(param_1 + 0x10),0);
      if (iVar1 == 0) {
        bVar2 = 0;
        if (*(char *)(param_1 + 0x10) != '\0') {
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                                 *(undefined4 *)(param_1 + 0x11 + (uint)bVar2 * 4));
            if (iVar1 != 0) {
              return iVar1;
            }
            bVar2 = bVar2 + 1;
          } while (bVar2 < *(byte *)(param_1 + 0x10));
        }
        iVar1 = FUN_1010c060(param_4);
        if (iVar1 == 0) {
          if (100 < *(byte *)(param_1 + 0x10)) {
            return -7;
          }
          iVar1 = FUN_1024a3b0(extraout_ECX_00,"[giftState]",*(byte *)(param_1 + 0x10),0);
          if (iVar1 == 0) {
            bVar2 = 0;
            if (*(char *)(param_1 + 0x10) != '\0') {
              do {
                iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)(bVar2 + 0x1a1 + param_1));
                if (iVar1 != 0) {
                  return iVar1;
                }
                bVar2 = bVar2 + 1;
              } while (bVar2 < *(byte *)(param_1 + 0x10));
            }
            iVar1 = FUN_1010c060(param_4);
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102717b0 @ 102717b0  size=165 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102717c0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102717b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,&DAT_11da9f8c,&DAT_11da0cf4,
                   (double)*(float *)(param_1 + 0xc));
    }
  }
  return;
}



/* ===== FUN_10271b90 @ 10271b90  size=185 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10271ba0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10271b90(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,&DAT_11da9f98,(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_102717b0(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,&DAT_11da9f94,extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_102713d0(param_1,param_2,param_3);
        return;
      }
      FUN_102713d0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_10271da0 @ 10271da0  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_10271da0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return 0xfffffff7;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_10272940 @ 10272940  size=204 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10272940(byte *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  bVar3 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(byte *)(param_2[1] + *param_2) = bVar3;
    param_2[1] = param_2[1] + 1;
    if (100 < *param_1) {
      return -7;
    }
    bVar3 = 0;
    if (*param_1 != 0) {
      do {
        uVar1 = (uint)bVar3;
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + uVar1 * 0xc + 1));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + uVar1 * 0xc + 5));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + uVar1 * 0xc + 9));
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar3 = bVar3 + 1;
      } while (bVar3 < *param_1);
    }
    return 0;
  }
  return -1;
}



/* ===== FUN_10272b80 @ 10272b80  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bMaterialNum]"
//   "[astMaterialList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10272bdd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bMaterialNum]""
     ""[astMaterialList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10272b80(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMaterialNum]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (100 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMaterialList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10272760(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10273da0 @ 10273da0  size=259 ===== */
// calls: _wassert
// strings:
//   "[nCount]"
//   "[astVars]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10273e1f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nCount]""
     ""[astVars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10273da0(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVars]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10273930(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10274c30 @ 10274c30  size=115 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_10274c30(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return 0xfffffff7;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    uVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_102772d0 @ 102772d0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astVars]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1027733d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astVars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102772d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x20 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astVars]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10276ea0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102793a0 @ 102793a0  size=259 ===== */
// calls: _wassert
// strings:
//   "[nCount]"
//   "[astRole]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1027941f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nCount]""
     ""[astRole]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102793a0(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (6 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astRole]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10278ae0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10279cf0 @ 10279cf0  size=424 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10279cf0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar5 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar5) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar2) || (*(uint *)(param_2 + 8) - uVar2 < 4)) {
    iVar3 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar2 + 4;
    param_1[0x1f] = '\0';
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_1010c2b0(param_1,pcVar4 + (1 - (int)(param_1 + 1)));
    if (iVar3 == 0) {
      iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar2 + 4),uVar5);
      if (iVar3 == 0) {
        iVar3 = FUN_1010c0c0(param_1[0x20]);
        if (iVar3 == 0) {
          iVar3 = FUN_1010c120(*(undefined2 *)(param_1 + 0x21));
          if (iVar3 == 0) {
            iVar3 = FUN_1010c120(*(undefined2 *)(param_1 + 0x23));
            if (iVar3 == 0) {
              iVar3 = FUN_1010c120(*(undefined2 *)(param_1 + 0x25));
              if (iVar3 == 0) {
                iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x27));
                if (iVar3 == 0) {
                  iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2b));
                  if (iVar3 == 0) {
                    iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2f));
                    if (iVar3 == 0) {
                      iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x33));
                      if (iVar3 == 0) {
                        iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x37));
                        if (iVar3 == 0) {
                          iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x3b));
                          if (iVar3 == 0) {
                            iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x3f));
                            if (iVar3 == 0) {
                              pcVar4 = param_1 + 0x43;
                              uVar5 = 0;
                              while( true ) {
                                iVar3 = FUN_1010c120(*(undefined2 *)pcVar4);
                                if (iVar3 != 0) break;
                                uVar5 = uVar5 + 1;
                                pcVar4 = pcVar4 + 2;
                                if (0x2d < uVar5) {
                                  iVar3 = FUN_1010c200(*(undefined4 *)(param_1 + 0x9f),
                                                       *(undefined4 *)(param_1 + 0xa3));
                                  return iVar3;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1027d9e0 @ 1027d9e0  size=227 ===== */
// calls: _wassert
// strings:
//   "[wLineCount]"
//   "[astLineInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1027da42) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wLineCount]""
     ""[astLineInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1027d9e0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wLineCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (0xf < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLineInfo]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1027d650(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102803c0 @ 102803c0  size=208 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102803c0(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x3f] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x40));
        if (iVar4 == 0) {
          iVar4 = FUN_1027ff00(*(undefined2 *)(param_1 + 0x40),0,param_2,param_3);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10280a30 @ 10280a30  size=237 ===== */
// calls: _wassert
// strings:
//   "[wCount]"
//   "[astEntries]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10280a9f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wCount]""
     ""[astEntries]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10280a30(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (0x32 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astEntries]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10280640(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10280cb0 @ 10280cb0  size=239 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10280cb0(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7f] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_10271230(param_2,param_3);
        if (iVar4 == 0) {
          iVar4 = FUN_10271230(param_2,param_3);
          if (iVar4 == 0) {
            iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x98));
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10280f70 @ 10280f70  size=256 ===== */
// calls: _wassert
// strings:
//   "[szEffectName]"
//   "[stOffset]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stAngle]"
//   "[fScale]"

/* WARNING: Removing unreachable block (ram,0x10280fa7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[szEffectName]""
     ""[stOffset]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stAngle]""
     ""[fScale]"" */

void __thiscall FUN_10280f70(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a410(param_4,"[szEffectName]",param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stOffset]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stAngle]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if (iVar1 == 0) {
        FUN_1024a290(param_2,param_3,param_4,"[fScale]",&DAT_11da0cf4,
                     (double)*(float *)(param_1 + 0x98));
      }
    }
  }
  return;
}



/* ===== FUN_102811d0 @ 102811d0  size=218 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102811d0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7f] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x80));
        if (iVar4 == 0) {
          iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x82));
          if (iVar4 == 0) {
            iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x84));
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10281650 @ 10281650  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10281650(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7f] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10281be0 @ 10281be0  size=257 ===== */
// calls: _wassert
// strings:
//   "[stTargetPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stStartPos]"
//   "[fSpeed]"
//   "[nTeleport]"

/* WARNING: Removing unreachable block (ram,0x10281bf0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTargetPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stStartPos]""
     ""[fSpeed]""
     ""[nTeleport]"" */

void __thiscall FUN_10281be0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stTargetPos]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stStartPos]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fSpeed]",&DAT_11da0cf4,
                               (double)*(float *)(param_1 + 0x18)), iVar1 == 0)) {
        FUN_1024a290(param_2,param_3,param_4,"[nTeleport]",&DAT_11d9e0b4,
                     (int)*(short *)(param_1 + 0x1c));
      }
    }
  }
  return;
}



/* ===== FUN_10282070 @ 10282070  size=265 ===== */
// calls: _wassert
// strings:
//   "[stAxis]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[fRotateAngle]"
//   "[fSpeed]"
//   "[fAcceleration]"

/* WARNING: Removing unreachable block (ram,0x10282080) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stAxis]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[fRotateAngle]""
     ""[fSpeed]""
     ""[fAcceleration]"" */

void __thiscall FUN_10282070(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fRotateAngle]",&DAT_11da0cf4,
                              (double)*(float *)(param_1 + 0xc)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fSpeed]",&DAT_11da0cf4,
                             (double)*(float *)(param_1 + 0x10)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[fAcceleration]",&DAT_11da0cf4,
                   (double)*(float *)(param_1 + 0x14));
    }
  }
  return;
}



/* ===== FUN_102824a0 @ 102824a0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTargetPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102824b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTargetPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102824a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTargetPos]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102713d0(param_1,param_2,param_3);
      return;
    }
    FUN_102713d0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10283dd0 @ 10283dd0  size=179 ===== */
// calls: _wassert
// strings:
//   "[wType]"
//   "[stValue]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10283e09) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wType]""
     ""[stValue]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10283dd0(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wType]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stValue]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_10283a20(*param_1,0,param_2,param_3,param_4);
      return;
    }
    FUN_10283a20(*param_1,0,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102845d0 @ 102845d0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAttr]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10284639) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAttr]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102845d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x32 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAttr]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10284190(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102849a0 @ 102849a0  size=207 ===== */
// calls: _wassert
// strings:
//   "[value]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x102849b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[value]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102849a0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[value]",6,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar2 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(param_2[2] - param_2[1])) {
      *(undefined1 *)(param_2[1] + *param_2) = param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_10284dc0 @ 10284dc0  size=231 ===== */
// calls: _wassert
// strings:
//   "[stBase]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stBonus]"

/* WARNING: Removing unreachable block (ram,0x10284de0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stBase]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stBonus]"" */

void __thiscall
FUN_10284dc0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 1) && (param_3 == 0)) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stBase]",(int)(char)param_6), iVar1 == 0)) {
      if (-1 < param_5) {
        FUN_10283dd0(param_4,param_5 + 1,param_6);
        return;
      }
      FUN_10283dd0(param_4,param_5,param_6);
      return;
    }
  }
  else if ((param_2 == 2) &&
          ((param_3 == 0 && (iVar1 = FUN_1024a1e0(param_6,"[stBonus]",param_1), iVar1 == 0)))) {
    if (param_5 < 0) {
      FUN_102849a0(param_4,param_5,param_6);
      return;
    }
    FUN_102849a0(param_4,param_5 + 1,param_6);
  }
  return;
}



/* ===== FUN_10285510 @ 10285510  size=291 ===== */
// calls: _wassert
// strings:
//   "[dwEntityID]"
//   "[nCount]"
//   "[astAttr]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102855ad) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityID]""
     ""[nCount]""
     ""[astAttr]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10285510(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityID]",&DAT_11d9f574,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (100 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astAttr]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102850c0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10286a90 @ 10286a90  size=164 ===== */
// calls: _wassert
// strings:
//   "[iErrNo]"
//   "[stRandomPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10286ac7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrNo]""
     ""[stRandomPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10286a90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrNo]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRandomPos]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102713d0(param_2,param_3,param_4);
      return;
    }
    FUN_102713d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10286ff0 @ 10286ff0  size=160 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10286ff0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7ff] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10287370 @ 10287370  size=160 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10287370(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7ff] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_1028a430 @ 1028a430  size=160 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1028a430(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x7ff] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_1028dc90 @ 1028dc90  size=193 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1028dc90(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  piVar2 = param_2;
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar4 = 0;
  do {
    iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + uVar4 * 4));
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  puVar5 = (undefined4 *)(param_1 + 0x50);
  param_2 = (int *)0x0;
  while( true ) {
    uVar1 = *puVar5;
    if ((uint)piVar2[2] < (uint)piVar2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
    }
    if ((uint)(piVar2[2] - piVar2[1]) < 4) break;
    puVar5 = puVar5 + 1;
    param_3._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    *(undefined1 *)(piVar2[1] + *piVar2) = param_3._3_1_;
    param_3._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    *(undefined1 *)(piVar2[1] + 1 + *piVar2) = param_3._2_1_;
    *(char *)(piVar2[1] + 2 + *piVar2) = (char)((uint)uVar1 >> 8);
    *(char *)(piVar2[1] + 3 + *piVar2) = (char)uVar1;
    piVar2[1] = piVar2[1] + 4;
    param_2 = (int *)((int)param_2 + 1);
    if (0x13 < param_2) {
      return 0;
    }
  }
  return -1;
}



/* ===== FUN_1028de90 @ 1028de90  size=393 ===== */
// calls: _wassert
// strings:
//   "[weaponRecord]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[weaponRecordTime]"

/* WARNING: Removing unreachable block (ram,0x1028dea0) */
/* WARNING: Removing unreachable block (ram,0x1028df60) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[weaponRecord]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[weaponRecordTime]"" */

int __thiscall FUN_1028de90(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[weaponRecord]",0x13,0), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar3 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x14);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(param_2[2] - param_2[1])) {
      *(undefined1 *)(param_2[1] + *param_2) = param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[weaponRecordTime]",0x13,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)(param_1 + 0x50);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 0x14);
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
      }
      if (1 < (uint)(param_2[2] - param_2[1])) {
        *(undefined1 *)(param_2[1] + *param_2) = param_4;
        param_2[1] = param_2[1] + 1;
        *(undefined1 *)(param_2[1] + *param_2) = 0;
        return 0;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_1028e5e0 @ 1028e5e0  size=207 ===== */
// calls: _wassert
// strings:
//   "[weaponStyleData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x1028e5f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[weaponStyleData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1028e5e0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[weaponStyleData]",0x13,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar2 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(param_2[2] - param_2[1])) {
      *(undefined1 *)(param_2[1] + *param_2) = param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_1028f9a0 @ 1028f9a0  size=290 ===== */
// calls: _wassert
// strings:
//   "[iShowUI]"
//   "[nInfoCount]"
//   "[astMember]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1028fa40) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iShowUI]""
     ""[nInfoCount]""
     ""[astMember]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1028f9a0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iShowUI]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nInfoCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x14 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astMember]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1028f560(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_1028fd70 @ 1028fd70  size=134 ===== */
// calls: _wassert
// strings:
//   "[stJoinMem]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1028fd80) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stJoinMem]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1028fd70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stJoinMem]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1028f560(param_1,param_2,param_3);
      return;
    }
    FUN_1028f560(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10291b20 @ 10291b20  size=248 ===== */
// calls: _wassert
// strings:
//   "[nInfoCount]"
//   "[astTargetInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10291b9c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nInfoCount]""
     ""[astTargetInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10291b20(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nInfoCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (100 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astTargetInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10291730(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10292e30 @ 10292e30  size=248 ===== */
// calls: _wassert
// strings:
//   "[nInfoCount]"
//   "[astUIInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10292eac) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nInfoCount]""
     ""[astUIInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10292e30(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nInfoCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (100 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astUIInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10292a40(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10294910 @ 10294910  size=246 ===== */
// calls: _wassert
// strings:
//   "[nInfoCount]"
//   "[astItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1029498c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nInfoCount]""
     ""[astItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10294910(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nInfoCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x28 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astItems]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10294550(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102963d0 @ 102963d0  size=164 ===== */
// calls: _wassert
// strings:
//   "[iItemType]"
//   "[stItemData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10296407) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iItemType]""
     ""[stItemData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102963d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iItemType]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stItemData]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102741f0(param_2,param_3,param_4);
      return;
    }
    FUN_102741f0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10298140 @ 10298140  size=530 ===== */
// calls: _wassert
// strings:
//   "[stBaseInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stStatInfo]"
//   "[iRewardCount]"
//   "[astRewardInfoList]"
//   "[iSizeChangeNtfCnt]"
//   "[astSizeChangeInfoList]"

/* WARNING: Removing unreachable block (ram,0x10298150) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stBaseInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stStatInfo]""
     ""[iRewardCount]""
     ""[astRewardInfoList]""
     ""[iSizeChangeNtfCnt]""
     ""[astSizeChangeInfoList]"" */

int __thiscall FUN_10298140(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  uVar1 = param_2;
  iVar2 = FUN_1024a140(param_3);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stBaseInfo]",(int)(char)param_4), iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_10297290(param_2,iVar2,param_4);
    if ((iVar2 == 0) && (iVar2 = FUN_1024a1e0(param_4,"[stStatInfo]",extraout_ECX), iVar2 == 0)) {
      iVar2 = param_3;
      if (-1 < param_3) {
        iVar2 = param_3 + 1;
      }
      iVar2 = FUN_10297710(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iRewardCount]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x178)), iVar2 == 0)) {
        iVar2 = *(int *)(param_1 + 0x178);
        if (iVar2 < 0) {
          return -6;
        }
        if (0x28 < iVar2) {
          return -7;
        }
        param_2 = 0;
        if (0 < iVar2) {
          iVar2 = param_1 + 0x17c;
          do {
            iVar2 = FUN_1024a230(param_4,"[astRewardInfoList]",param_2,iVar2);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = param_3;
            if (-1 < param_3) {
              iVar2 = param_3 + 1;
            }
            iVar2 = FUN_10296b50(uVar1,iVar2,param_4);
            if (iVar2 != 0) {
              return iVar2;
            }
            param_2 = param_2 + 1;
            iVar2 = param_1;
          } while (param_2 < *(int *)(param_1 + 0x178));
        }
        iVar2 = FUN_1024a290(uVar1,param_3,param_4,"[iSizeChangeNtfCnt]",&DAT_11d9e0b4,
                             *(undefined4 *)(param_1 + 0x2169c));
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x2169c);
          if (iVar2 < 0) {
            return -6;
          }
          if (10 < iVar2) {
            return -7;
          }
          if (0 < iVar2) {
            iVar2 = 0;
            iVar3 = param_1 + 0x216a0;
            do {
              iVar3 = FUN_1024a230(param_4,"[astSizeChangeInfoList]",iVar2,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_3;
              if (-1 < param_3) {
                iVar3 = param_3 + 1;
              }
              iVar3 = FUN_10297b60(uVar1,iVar3,param_4);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar2 = iVar2 + 1;
              iVar3 = param_1;
            } while (iVar2 < *(int *)(param_1 + 0x2169c));
          }
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102986c0 @ 102986c0  size=185 ===== */
// calls: _wassert
// strings:
//   "[stBaseInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stStatInfo]"

/* WARNING: Removing unreachable block (ram,0x102986d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stBaseInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stStatInfo]"" */

void FUN_102986c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stBaseInfo]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_10297290(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stStatInfo]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_10297710(param_1,param_2,param_3);
        return;
      }
      FUN_10297710(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_1029c690 @ 1029c690  size=248 ===== */
// calls: _wassert
// strings:
//   "[nInfoCount]"
//   "[astInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1029c70c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nInfoCount]""
     ""[astInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1029c690(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nInfoCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1029c280(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_1029f0a0 @ 1029f0a0  size=342 ===== */
// calls: _wassert
// strings:
//   "[stOp]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iResult]"
//   "[iResultParam1]"
//   "[iResultParam2]"
//   "[iResultParam3]"
//   "[iResultParam4]"
//   "[szResultParamStr]"

/* WARNING: Removing unreachable block (ram,0x1029f0b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stOp]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iResult]""
     ""[iResultParam1]""
     ""[iResultParam2]""
     ""[iResultParam3]""
     ""[iResultParam4]""
     ""[szResultParamStr]"" */

void __thiscall FUN_1029f0a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stOp]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_1029eb30(param_2,iVar1,param_4);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x114)), iVar1 == 0)) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResultParam1]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x118)), iVar1 == 0)) &&
       (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResultParam2]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x11c)), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResultParam3]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x120)), iVar1 == 0)) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResultParam4]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x124)), iVar1 == 0)))) {
      FUN_1024a410(param_4,"[szResultParamStr]",param_1 + 0x128);
    }
  }
  return;
}



/* ===== FUN_102a3cb0 @ 102a3cb0  size=231 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102a3cb0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x1f] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c200(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
        if (iVar4 == 0) {
          iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x28));
          if (iVar4 == 0) {
            iVar4 = FUN_1010c200(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
            if (iVar4 == 0) {
              iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x34));
              return iVar4;
            }
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_102a43c0 @ 102a43c0  size=150 ===== */
// calls: _wassert
// strings:
//   "[stId]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szGuildName]"

/* WARNING: Removing unreachable block (ram,0x102a43d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stId]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szGuildName]"" */

void __thiscall FUN_102a43c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stId]",(int)(char)param_4), iVar1 == 0)) {
    if (-1 < param_3) {
      param_3 = param_3 + 1;
    }
    iVar1 = FUN_102a3f50(param_2,param_3,param_4);
    if (iVar1 == 0) {
      FUN_1024a410(param_4,"[szGuildName]",param_1 + 0x38);
    }
  }
  return;
}



/* ===== FUN_102a60f0 @ 102a60f0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102a615d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102a60f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAppear]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102a5490(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102a7480 @ 102a7480  size=227 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astEffectList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102a74eb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astEffectList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102a7480(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x100 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astEffectList]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102a6fc0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102a7a40 @ 102a7a40  size=442 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102a7a40(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar6 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x1f] = '\0';
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1010c2b0(param_1,pcVar7 + (1 - (int)(param_1 + 1)));
    if (iVar6 == 0) {
      iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar6 == 0) {
        uVar4 = *(undefined4 *)(param_2 + 4);
        iVar6 = FUN_1010bf70(extraout_ECX);
        if (iVar6 == 0) {
          iVar5 = *(int *)(param_2 + 4);
          param_1[0x3f] = '\0';
          pcVar7 = param_1 + 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_1010c2b0(param_1 + 0x20,pcVar7 + (1 - (int)(param_1 + 0x21)));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
            if (iVar6 == 0) {
              uVar4 = *(undefined4 *)(param_2 + 4);
              iVar6 = FUN_1010bf70(extraout_ECX_00);
              if (iVar6 == 0) {
                iVar5 = *(int *)(param_2 + 4);
                param_1[0x5f] = '\0';
                pcVar7 = param_1 + 0x40;
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                iVar6 = FUN_1010c2b0(param_1 + 0x40,pcVar7 + (1 - (int)(param_1 + 0x41)));
                if (iVar6 == 0) {
                  iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
                  if (iVar6 == 0) {
                    uVar4 = *(undefined4 *)(param_2 + 4);
                    iVar6 = FUN_1010bf70(extraout_ECX_01);
                    if (iVar6 == 0) {
                      iVar5 = *(int *)(param_2 + 4);
                      param_1[0x85f] = '\0';
                      pcVar7 = param_1 + 0x60;
                      do {
                        cVar1 = *pcVar7;
                        pcVar7 = pcVar7 + 1;
                      } while (cVar1 != '\0');
                      iVar6 = FUN_1010c2b0(param_1 + 0x60,pcVar7 + (1 - (int)(param_1 + 0x61)));
                      if (iVar6 == 0) {
                        iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
                        return iVar6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_102aa170 @ 102aa170  size=293 ===== */
// calls: _wassert
// strings:
//   "[iGroupID]"
//   "[nSubGroupCount]"
//   "[astSubGroupInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102aa210) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iGroupID]""
     ""[nSubGroupCount]""
     ""[astSubGroupInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102aa170(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iGroupID]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nSubGroupCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (99 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astSubGroupInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102a9ce0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102aa940 @ 102aa940  size=293 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[nSubGroupCount]"
//   "[astSubGroupInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102aa9e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[nSubGroupCount]""
     ""[astSubGroupInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102aa940(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nSubGroupCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (99 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astSubGroupInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102a9ce0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102ab7d0 @ 102ab7d0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stPassLevelInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102ab7e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stPassLevelInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102ab7d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stPassLevelInfo]",(int)(char)param_3), iVar1 == 0
     )) {
    if (param_2 < 0) {
      FUN_102ab4d0(param_1,param_2,param_3);
      return;
    }
    FUN_102ab4d0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_102abcb0 @ 102abcb0  size=206 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x102abd12) */
/* WARNING: Removing unreachable block (ram,0x102abd68) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_102abcb0(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if ((param_5 == 0) || (param_5 != 0)) {
      iVar2 = FUN_1010c190(*param_1);
      uVar3 = 0;
      if (iVar2 == 0) {
        uVar1 = *(undefined2 *)(param_1 + 1);
        if (param_3 < 2) {
          iVar2 = -1;
        }
        else {
          *param_2 = (char)((ushort)uVar1 >> 8);
          param_2[1] = (char)uVar1;
          uVar3 = 2;
          iVar2 = FUN_1010c190(*(undefined4 *)((int)param_1 + 6));
        }
      }
    }
    else {
      iVar2 = -9;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    return iVar2;
  }
  return -0x13;
}



/* ===== FUN_102acc20 @ 102acc20  size=293 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[nGroupCount]"
//   "[astGroupInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102accc0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[nGroupCount]""
     ""[astGroupInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102acc20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nGroupCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x11 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astGroupInfos]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102aa170(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102ae180 @ 102ae180  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCatCarPlayerNum]"
//   "[astPlayerCatCarUseInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102ae1e9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCatCarPlayerNum]""
     ""[astPlayerCatCarUseInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102ae180(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCatCarPlayerNum]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x18 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astPlayerCatCarUseInfo]",iVar2,(int)(char)param_4)
        ;
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102add90(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102b0210 @ 102b0210  size=273 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102b0210(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar6 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0xff] = '\0';
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1010c2b0(param_1,pcVar7 + (1 - (int)(param_1 + 1)));
    if (iVar6 == 0) {
      iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar6 == 0) {
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x100));
        if (iVar6 == 0) {
          uVar4 = *(undefined4 *)(param_2 + 4);
          iVar6 = FUN_1010bf70(extraout_ECX);
          if (iVar6 == 0) {
            iVar5 = *(int *)(param_2 + 4);
            param_1[0x203] = '\0';
            pcVar7 = param_1 + 0x104;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar6 = FUN_1010c2b0(param_1 + 0x104,pcVar7 + (1 - (int)(param_1 + 0x105)));
            if (iVar6 == 0) {
              iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
              return iVar6;
            }
          }
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_102b2eb0 @ 102b2eb0  size=406 ===== */
// calls: _wassert
// strings:
//   "[astGang]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iCountDown]"
//   "[iStage]"
//   "[iResult]"
//   "[iGoal]"
//   "[iFaction]"
//   "[stEvent]"

/* WARNING: Removing unreachable block (ram,0x102b2eda) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[astGang]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iCountDown]""
     ""[iStage]""
     ""[iResult]""
     ""[iGoal]""
     ""[iFaction]""
     ""[stEvent]"" */

void __thiscall FUN_102b2eb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGang]",local_10,(int)(char)param_4);
    if (iVar1 != 0) break;
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102b24b0(param_2,iVar1,param_4);
    if (iVar1 != 0) {
      return;
    }
    local_10 = local_10 + 1;
    if (1 < local_10) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCountDown]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0x74));
      if ((((iVar1 == 0) &&
           (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iStage]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x78)), iVar1 == 0)) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x7c)), iVar1 == 0)) &&
         (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iGoal]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x80)), iVar1 == 0 &&
           (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x84)), iVar1 == 0)) &&
          (iVar1 = FUN_1024a1e0(param_4,"[stEvent]",extraout_ECX), iVar1 == 0)))) {
        if (param_3 < 0) {
          FUN_102b2960(param_2,param_3,param_4);
          return;
        }
        FUN_102b2960(param_2,param_3 + 1,param_4);
      }
      return;
    }
  }
  return;
}



/* ===== FUN_102b4170 @ 102b4170  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102b41dd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102b4170(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAppear]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102b1930(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102b4d50 @ 102b4d50  size=271 ===== */
// calls: _wassert
// strings:
//   "[iNetID]"
//   "[iCount]"
//   "[astAmmos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102b4de9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iNetID]""
     ""[iCount]""
     ""[astAmmos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102b4d50(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0)
     ) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x14 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAmmos]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102a4760(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102b6060 @ 102b6060  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102b60cd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102b6060(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAppear]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102b5700(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102b74d0 @ 102b74d0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astDisappear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102b7539) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astDisappear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102b74d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astDisappear]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102b6de0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102b8a00 @ 102b8a00  size=176 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102b8a00(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  iVar5 = param_2[1];
  if (param_2[2] == iVar5) {
    iVar5 = -1;
  }
  else {
    *(undefined1 *)(iVar5 + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    iVar3 = param_2[1];
    iVar5 = FUN_1010bf70(iVar5);
    if (iVar5 == 0) {
      iVar4 = param_2[1];
      param_1[0x20] = 0;
      pcVar6 = param_1 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar5 = FUN_1010c2b0(param_1 + 1,pcVar6 + (1 - (int)(param_1 + 2)));
      if (iVar5 == 0) {
        iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
        return iVar5;
      }
    }
  }
  return iVar5;
}



/* ===== FUN_102b9020 @ 102b9020  size=299 ===== */
// calls: _wassert
// strings:
//   "[actionPoint]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[iAdditionalActionPoint]"
//   "[iNextResetTime]"
//   "[dwActionPointFlags]"

/* WARNING: Removing unreachable block (ram,0x102b9030) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[actionPoint]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[iAdditionalActionPoint]""
     ""[iNextResetTime]""
     ""[dwActionPointFlags]"" */

int __thiscall FUN_102b9020(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[actionPoint]",1,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar2 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if ((uint)(param_2[2] - param_2[1]) < 2) {
      iVar1 = -1;
    }
    else {
      *(char *)(param_2[1] + *param_2) = (char)param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iAdditionalActionPoint]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 8));
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNextResetTime]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0xc)), iVar1 == 0)) {
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwActionPointFlags]",&DAT_11d9f574,
                             *(undefined4 *)(param_1 + 0x10));
        return iVar1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102b97c0 @ 102b97c0  size=220 ===== */
// calls: _wassert
// strings:
//   "[stRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iResult]"
//   "[stData]"

/* WARNING: Removing unreachable block (ram,0x102b97d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iResult]""
     ""[stData]"" */

void __thiscall FUN_102b97c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRequest]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102b9450(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 8)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a1e0(param_4,"[stData]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_102b9020(param_2,param_3,param_4);
        return;
      }
      FUN_102b9020(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_102bc350 @ 102bc350  size=117 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_102bc350(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return 0xfffffff7;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    uVar2 = FUN_1010c0c0(param_1[1]);
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_102bc8a0 @ 102bc8a0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuideNotifySetStep]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bc8b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuideNotifySetStep]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102bc8a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuideNotifySetStep]",(int)(char)param_3),
     iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102bc530(param_1,param_2,param_3);
      return;
    }
    FUN_102bc530(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_102bcb60 @ 102bcb60  size=179 ===== */
// calls: _wassert
// strings:
//   "[iNotifyType]"
//   "[stNotify]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bcb97) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iNotifyType]""
     ""[stNotify]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int __thiscall FUN_102bcb60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNotifyType]",&DAT_11d9e0b4,*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1024a140(param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stNotify]",(int)(char)param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 < 0) {
    if (*param_1 != 1) {
      return 0;
    }
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    param_3 = param_3 + 1;
  }
  iVar1 = FUN_102bc8a0(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* ===== FUN_102bd5d0 @ 102bd5d0  size=234 ===== */
// calls: _wassert
// strings:
//   "[stInteractRequestBegin]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stInteractRequestEnd]"
//   "[iTargetID]"

/* WARNING: Removing unreachable block (ram,0x102bd5f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stInteractRequestBegin]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stInteractRequestEnd]""
     ""[iTargetID]"" */

void __thiscall
FUN_102bd5d0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 1) && (param_3 == 0)) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stInteractRequestBegin]",(int)(char)param_6),
       iVar1 == 0)) {
      if (param_5 < 0) {
        FUN_102bcf40(param_4,param_5,param_6);
        return;
      }
      FUN_102bcf40(param_4,param_5 + 1,param_6);
      return;
    }
  }
  else if ((param_2 == 2) &&
          ((param_3 == 0 &&
           (iVar1 = FUN_1024a1e0(param_6,"[stInteractRequestEnd]",param_1), iVar1 == 0)))) {
    if (-1 < param_5) {
      param_5 = param_5 + 1;
    }
    FUN_1024a290(param_4,param_5,param_6,"[iTargetID]",&DAT_11d9e0b4,*param_1);
  }
  return;
}



/* ===== FUN_102bd900 @ 102bd900  size=176 ===== */
// calls: _wassert
// strings:
//   "[iRequestType]"
//   "[stRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bd937) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRequestType]""
     ""[stRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102bd900(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRequestType]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRequest]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = *param_1;
    if (param_3 < 0) {
      FUN_102bd5d0(iVar1,iVar1 >> 0x1f,param_2,param_3,param_4);
      return;
    }
    FUN_102bd5d0(iVar1,iVar1 >> 0x1f,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102bdca0 @ 102bdca0  size=152 ===== */
// calls: _wassert
// strings:
//   "[stRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iResultCode]"

/* WARNING: Removing unreachable block (ram,0x102bdcb0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iResultCode]"" */

void __thiscall FUN_102bdca0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRequest]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102bd900(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[iResultCode]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}



/* ===== FUN_102bec20 @ 102bec20  size=134 ===== */
// calls: _wassert
// strings:
//   "[stInteractRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bec30) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stInteractRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102bec20(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stInteractRequest]",(int)(char)param_3),
     iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102bd900(param_1,param_2,param_3);
      return;
    }
    FUN_102bd900(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_102bef10 @ 102bef10  size=134 ===== */
// calls: _wassert
// strings:
//   "[stActionPointData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bef20) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stActionPointData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102bef10(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stActionPointData]",(int)(char)param_3),
     iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102b9020(param_1,param_2,param_3);
      return;
    }
    FUN_102b9020(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_102bf230 @ 102bf230  size=231 ===== */
// calls: _wassert
// strings:
//   "[stGuideNotify]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stClientSettings]"

/* WARNING: Removing unreachable block (ram,0x102bf250) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuideNotify]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stClientSettings]"" */

void __thiscall
FUN_102bf230(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 3) && (param_3 == 0)) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stGuideNotify]",(int)(char)param_6), iVar1 == 0
       )) {
      if (-1 < param_5) {
        FUN_102bcb60(param_4,param_5 + 1,param_6);
        return;
      }
      FUN_102bcb60(param_4,param_5,param_6);
      return;
    }
  }
  else if ((param_2 == 4) &&
          ((param_3 == 0 && (iVar1 = FUN_1024a1e0(param_6,"[stClientSettings]",param_1), iVar1 == 0)
           ))) {
    if (param_5 < 0) {
      FUN_102be3d0(param_4,param_5,param_6);
      return;
    }
    FUN_102be3d0(param_4,param_5 + 1,param_6);
  }
  return;
}



/* ===== FUN_102bf3a0 @ 102bf3a0  size=167 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102bf3a0(char *param_1,int *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  cVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar2 = -1;
  }
  else {
    *(char *)(param_2[1] + *param_2) = cVar1;
    param_2[1] = param_2[1] + 1;
    if ((param_3 == 0) || (1 < param_3)) {
      param_3 = 1;
    }
    if ((*param_1 != '\x02') || (iVar2 = FUN_102bd770(param_2,param_3), iVar2 == 0)) {
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_102bf590 @ 102bf590  size=180 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[chExtType]"
//   "[stRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bf5c9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[chExtType]""
     ""[stRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int __thiscall FUN_102bf590(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chExtType]","0x%02x",(int)*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1024a140(param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRequest]",(int)(char)param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 < 0) {
    if (*param_1 != '\x02') {
      return 0;
    }
  }
  else {
    if (*param_1 != '\x02') {
      return 0;
    }
    param_3 = param_3 + 1;
  }
  iVar1 = FUN_102bec20(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* ===== FUN_102bf7a0 @ 102bf7a0  size=174 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102bf7a0(char *param_1,int *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  cVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar2 = -1;
  }
  else {
    *(char *)(param_2[1] + *param_2) = cVar1;
    param_2[1] = param_2[1] + 1;
    iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    if (iVar2 == 0) {
      iVar2 = FUN_102bea90((int)*param_1,(int)*param_1 >> 0x1f,param_2,param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_102bed80((int)*param_1,(int)*param_1 >> 0x1f,param_2,param_3);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102bfbe0 @ 102bfbe0  size=140 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_102bfbe0(char *param_1,int *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return 0xfffffff7;
  }
  cVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(char *)(param_2[1] + *param_2) = cVar1;
    param_2[1] = param_2[1] + 1;
    uVar2 = FUN_102bf070((int)*param_1,(int)*param_1 >> 0x1f,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_102bfdb0 @ 102bfdb0  size=177 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[chExtType]"
//   "[stNotify]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102bfde9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[chExtType]""
     ""[stNotify]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102bfdb0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chExtType]","0x%02x",(int)*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stNotify]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = (int)*param_1;
    if (param_3 < 0) {
      FUN_102bf230(iVar1,iVar1 >> 0x1f,param_2,param_3,param_4);
      return;
    }
    FUN_102bf230(iVar1,iVar1 >> 0x1f,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102c0640 @ 102c0640  size=205 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x102c06b5) */
/* WARNING: Removing unreachable block (ram,0x102c06f7) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_102c0640(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if ((param_5 == 0) || (param_5 != 0)) {
      iVar2 = FUN_1010c190(*param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c190(param_1[1]);
        uVar3 = 0;
        if (iVar2 == 0) {
          uVar1 = *(undefined2 *)(param_1 + 2);
          if (param_3 < 2) {
            iVar2 = -1;
          }
          else {
            *param_2 = (char)((ushort)uVar1 >> 8);
            param_2[1] = (char)uVar1;
            uVar3 = 2;
            iVar2 = 0;
          }
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      iVar2 = -9;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    return iVar2;
  }
  return -0x13;
}



/* ===== FUN_102c0e60 @ 102c0e60  size=115 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_102c0e60(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return 0xfffffff7;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] != param_2[1]) {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    uVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_102c1f10 @ 102c1f10  size=2395 ===== */
// calls: _wassert
// strings:
//   "[iEntrustMoneyLastTm]"
//   "[iUnLockLevelCount]"
//   "[astUnLockLevelData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iLevelID]"
//   "[iUnlockHubCnt]"
//   "[astUnlockHubData]"
//   "[iHubRewardCnt]"
//   "[astHubRewardData]"
//   "[iLevelIntegrateCount]"
//   "[astLevelIntegrateData]"
//   "[iLevelEntrustCount]"
//   "[stLevelEntrustData]"
//   "[iPlayerLevelEnstrustRewardCount]"
//   "[astPlayerLevelEnstrustRewardData]"
//   "[stPlayerLevelFormatPeriodLimitData]"
//   "[iPlayerThousandLayerDataCount]"
//   "[astPlayerThousandLayerData]"

/* WARNING: Removing unreachable block (ram,0x102c1fb9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iEntrustMoneyLastTm]""
     ""[iUnLockLevelCount]""
     ""[astUnLockLevelData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iLevelID]""
     ""[iUnlockHubCnt]""
     ""[astUnlockHubData]""
     ""[iHubRewardCnt]"" */

int __thiscall FUN_102c1f10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  uVar1 = param_4;
  iVar3 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iEntrustMoneyLastTm]",&DAT_11d9e0b4,*param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iUnLockLevelCount]",&DAT_11d9e0b4,param_1[1]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = param_1[1];
  if (iVar2 < 0) {
    return -6;
  }
  if (5000 < iVar2) {
    return -7;
  }
  param_3 = 0;
  if (0 < iVar2) {
    param_4 = param_1 + 2;
    do {
      iVar2 = FUN_1024a140(iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astUnLockLevelData]",param_3,(int)(char)uVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = iVar3;
      if (-1 < iVar3) {
        iVar2 = iVar3 + 1;
      }
      iVar2 = FUN_1024a290(param_2,iVar2,uVar1,"[iLevelID]",&DAT_11d9e0b4,*param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_3 < (int)param_1[1]);
  }
  iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iUnlockHubCnt]",&DAT_11d9e0b4,param_1[0x138a]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = param_1[0x138a];
  if (iVar2 < 0) {
    return -6;
  }
  if (0x80 < iVar2) {
    return -7;
  }
  param_3 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = FUN_1024a230(uVar1,"[astUnlockHubData]",param_3,param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = iVar3;
      if (-1 < iVar3) {
        iVar2 = iVar3 + 1;
      }
      iVar2 = FUN_102ba4d0(param_2,iVar2,uVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_3 = param_3 + 1;
    } while (param_3 < (int)param_1[0x138a]);
  }
  iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iHubRewardCnt]",&DAT_11d9e0b4,param_1[0x148b]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = param_1[0x148b];
  if (iVar2 < 0) {
    return -6;
  }
  if (0x80 < iVar2) {
    return -7;
  }
  param_3 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = FUN_1024a230(uVar1,"[astHubRewardData]",param_3,param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = iVar3;
      if (-1 < iVar3) {
        iVar2 = iVar3 + 1;
      }
      iVar2 = FUN_102c1030(param_2,iVar2,uVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_3 = param_3 + 1;
    } while (param_3 < (int)param_1[0x148b]);
  }
  iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iLevelIntegrateCount]",&DAT_11d9e0b4,param_1[0x152c]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = param_1[0x152c];
  if (-1 < iVar2) {
    if (5000 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a230(uVar1,"[astLevelIntegrateData]",param_3,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar3;
        if (-1 < iVar3) {
          iVar2 = iVar3 + 1;
        }
        iVar2 = FUN_102bafa0(param_2,iVar2,uVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)param_1[0x152c]);
    }
    iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iLevelEntrustCount]",&DAT_11d9e0b4,param_1[0x7bb7]);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = param_1[0x7bb7];
    if (-1 < iVar2) {
      if (1 < iVar2) {
        return -7;
      }
      if (iVar2 == 1) {
        iVar2 = FUN_1024a1e0(uVar1,"[stLevelEntrustData]",1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar3;
        if (-1 < iVar3) {
          iVar2 = iVar3 + 1;
        }
        iVar2 = FUN_102bbe00(param_2,iVar2,uVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iPlayerLevelEnstrustRewardCount]",&DAT_11d9e0b4,
                           param_1[0x7bbb]);
      if (iVar2 == 0) {
        iVar2 = param_1[0x7bbb];
        if (iVar2 < 0) {
          return -6;
        }
        if (0xaa < iVar2) {
          return -7;
        }
        iVar4 = 0;
        param_3 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = FUN_1024a230(uVar1,"[astPlayerLevelEnstrustRewardData]",param_3,param_3);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = iVar3;
            if (-1 < iVar3) {
              iVar2 = iVar3 + 1;
            }
            iVar2 = FUN_102b9ba0(param_2,iVar2,uVar1);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar4 = param_3 + 1;
            param_3 = iVar4;
          } while (iVar4 < (int)param_1[0x7bbb]);
        }
        iVar2 = FUN_1024a1e0(uVar1,"[stPlayerLevelFormatPeriodLimitData]",iVar4);
        if (iVar2 == 0) {
          iVar2 = iVar3;
          if (-1 < iVar3) {
            iVar2 = iVar3 + 1;
          }
          iVar2 = FUN_102c04e0(param_2,iVar2,uVar1);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iPlayerThousandLayerDataCount]",
                                   &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x1f24e)),
             iVar2 == 0)) {
            iVar2 = *(int *)((int)param_1 + 0x1f24e);
            if (iVar2 < 0) {
              return -6;
            }
            if (0x46 < iVar2) {
              return -7;
            }
            param_3 = 0;
            if (0 < iVar2) {
              do {
                iVar2 = FUN_1024a230(uVar1,"[astPlayerThousandLayerData]",param_3,param_3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                iVar2 = iVar3;
                if (-1 < iVar3) {
                  iVar2 = iVar3 + 1;
                }
                iVar2 = FUN_102c08a0(param_2,iVar2,uVar1);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_3 = param_3 + 1;
              } while (param_3 < *(int *)((int)param_1 + 0x1f24e));
            }
            iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iLevelStatLen]",&DAT_11d9e0b4,
                                 *(undefined4 *)((int)param_1 + 0x1f50e));
            if (iVar2 == 0) {
              iVar2 = *(int *)((int)param_1 + 0x1f50e);
              if (iVar2 < 0) {
                return -6;
              }
              if (0x5000 < iVar2) {
                return -7;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX,"[szLevelStatDataPack]",iVar2,iVar2 >> 0x1f);
              if (iVar2 == 0) {
                param_4 = (undefined4 *)0x0;
                if (0 < *(int *)((int)param_1 + 0x1f50e)) {
                  do {
                    iVar2 = FUN_1010c010(param_2," 0x%02x",
                                         *(undefined1 *)((int)param_1 + (int)param_4 + 0x1f512));
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    param_4 = (undefined4 *)((int)param_4 + 1);
                  } while ((int)param_4 < *(int *)((int)param_1 + 0x1f50e));
                }
                iVar2 = FUN_1010c060(uVar1);
                if ((iVar2 == 0) &&
                   (iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iEntrustGroupDataLen]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x24512)), iVar2 == 0)) {
                  iVar2 = *(int *)((int)param_1 + 0x24512);
                  if (iVar2 < 0) {
                    return -6;
                  }
                  if (0x5000 < iVar2) {
                    return -7;
                  }
                  iVar2 = FUN_1024a3b0(extraout_ECX_00,"[szEntrustGroupDataPack]",iVar2,
                                       iVar2 >> 0x1f);
                  if (iVar2 == 0) {
                    param_4 = (undefined4 *)0x0;
                    if (0 < *(int *)((int)param_1 + 0x24512)) {
                      do {
                        iVar2 = FUN_1010c010(param_2," 0x%02x",
                                             *(undefined1 *)((int)param_1 + (int)param_4 + 0x24516))
                        ;
                        if (iVar2 != 0) {
                          return iVar2;
                        }
                        param_4 = (undefined4 *)((int)param_4 + 1);
                      } while ((int)param_4 < *(int *)((int)param_1 + 0x24512));
                    }
                    iVar2 = FUN_1010c060(uVar1);
                    if ((iVar2 == 0) &&
                       (iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iLevelWarningLen]",&DAT_11d9e0b4,
                                             *(undefined4 *)((int)param_1 + 0x29516)), iVar2 == 0))
                    {
                      iVar2 = *(int *)((int)param_1 + 0x29516);
                      if (iVar2 < 0) {
                        return -6;
                      }
                      if (200 < iVar2) {
                        return -7;
                      }
                      iVar2 = FUN_1024a3b0(extraout_ECX_01,"[szLevelWarningDataPack]",iVar2,
                                           iVar2 >> 0x1f);
                      if (iVar2 == 0) {
                        param_4 = (undefined4 *)0x0;
                        if (0 < *(int *)((int)param_1 + 0x29516)) {
                          do {
                            iVar2 = FUN_1010c010(param_2," 0x%02x",
                                                 *(undefined1 *)
                                                  ((int)param_1 + (int)param_4 + 0x2951a));
                            if (iVar2 != 0) {
                              return iVar2;
                            }
                            param_4 = (undefined4 *)((int)param_4 + 1);
                          } while ((int)param_4 < *(int *)((int)param_1 + 0x29516));
                        }
                        iVar2 = FUN_1010c060(uVar1);
                        if ((iVar2 == 0) &&
                           (iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iMonsterSizeCnt]",
                                                 &DAT_11d9e0b4,
                                                 *(undefined4 *)((int)param_1 + 0x295e2)),
                           iVar2 == 0)) {
                          iVar2 = *(int *)((int)param_1 + 0x295e2);
                          if (iVar2 < 0) {
                            return -6;
                          }
                          if (0x200 < iVar2) {
                            return -7;
                          }
                          param_3 = 0;
                          if (0 < iVar2) {
                            do {
                              iVar2 = FUN_1024a230(uVar1,"[astCSMonsterSizeList]",param_3,param_3);
                              if (iVar2 != 0) {
                                return iVar2;
                              }
                              iVar2 = iVar3;
                              if (-1 < iVar3) {
                                iVar2 = iVar3 + 1;
                              }
                              iVar2 = FUN_102c0c40(param_2,iVar2,uVar1);
                              if (iVar2 != 0) {
                                return iVar2;
                              }
                              param_3 = param_3 + 1;
                            } while (param_3 < *(int *)((int)param_1 + 0x295e2));
                          }
                          iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iUnLockLevelGroupCount]",
                                               &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2bde6)
                                              );
                          if (iVar2 == 0) {
                            iVar2 = *(int *)((int)param_1 + 0x2bde6);
                            if (iVar2 < 0) {
                              return -6;
                            }
                            if (0x40 < iVar2) {
                              return -7;
                            }
                            param_3 = 0;
                            if (0 < iVar2) {
                              do {
                                iVar2 = FUN_1024a230(uVar1,"[astUnLockLevelGroupData]",param_3,
                                                     param_3);
                                if (iVar2 != 0) {
                                  return iVar2;
                                }
                                iVar2 = iVar3;
                                if (-1 < iVar3) {
                                  iVar2 = iVar3 + 1;
                                }
                                iVar2 = FUN_102ba180(param_2,iVar2,uVar1);
                                if (iVar2 != 0) {
                                  return iVar2;
                                }
                                param_3 = param_3 + 1;
                              } while (param_3 < *(int *)((int)param_1 + 0x2bde6));
                            }
                            iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[iUnlockStarLevelCnt]",
                                                 &DAT_11d9e0b4,
                                                 *(undefined4 *)((int)param_1 + 0x2beea));
                            if (iVar2 == 0) {
                              iVar2 = *(int *)((int)param_1 + 0x2beea);
                              if (iVar2 < 0) {
                                return -6;
                              }
                              if (0x40 < iVar2) {
                                return -7;
                              }
                              iVar4 = 0;
                              param_3 = 0;
                              if (0 < iVar2) {
                                do {
                                  iVar2 = FUN_1024a230(uVar1,"[astUnlockHubStarData]",param_3,
                                                       param_3);
                                  if (iVar2 != 0) {
                                    return iVar2;
                                  }
                                  iVar2 = iVar3;
                                  if (-1 < iVar3) {
                                    iVar2 = iVar3 + 1;
                                  }
                                  iVar2 = FUN_102ba840(param_2,iVar2,uVar1);
                                  if (iVar2 != 0) {
                                    return iVar2;
                                  }
                                  iVar4 = param_3 + 1;
                                  param_3 = iVar4;
                                } while (iVar4 < *(int *)((int)param_1 + 0x2beea));
                              }
                              iVar2 = FUN_1024a1e0(uVar1,"[stPlayerSuperHunterData]",iVar4);
                              if (iVar2 == 0) {
                                if (iVar3 < 0) {
                                  iVar3 = FUN_102babc0(param_2,iVar3,uVar1);
                                  return iVar3;
                                }
                                iVar2 = FUN_102babc0(param_2,iVar3 + 1,uVar1);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return iVar2;
    }
    return -6;
  }
  return -6;
}



/* ===== FUN_102c29e0 @ 102c29e0  size=143 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102c29e0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar2 = -1;
  }
  else {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    if (iVar2 == 0) {
      iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 5));
      if (iVar2 == 0) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 9));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102c3240 @ 102c3240  size=847 ===== */
// calls: _wassert
// strings:
//   "[wDayLimitCnt]"
//   "[wWeekLimitCnt]"
//   "[wMonthLimitCnt]"
//   "[wForeverLimitCnt]"
//   "[astDayBuyLimitData]"
//   "[astWeekBuyLimitData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[astMonthBuyLimitData]"
//   "[astForeverBuyLimitData]"

/* WARNING: Removing unreachable block (ram,0x102c344f) */
/* WARNING: Removing unreachable block (ram,0x102c338f) */
/* WARNING: Removing unreachable block (ram,0x102c350f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wDayLimitCnt]""
     ""[wWeekLimitCnt]""
     ""[wMonthLimitCnt]""
     ""[wForeverLimitCnt]""
     ""[astDayBuyLimitData]""
     ""[astWeekBuyLimitData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[astMonthBuyLimitData]"" */

int __thiscall FUN_102c3240(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  
  iVar4 = FUN_1024a290(param_2,param_3,param_4,"[wDayLimitCnt]",&DAT_11d9e0b4,*param_1);
  if ((((iVar4 != 0) ||
       (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[wWeekLimitCnt]",&DAT_11d9e0b4,param_1[1]),
       iVar4 != 0)) ||
      (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[wMonthLimitCnt]",&DAT_11d9e0b4,param_1[2]),
      iVar4 != 0)) ||
     (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[wForeverLimitCnt]",&DAT_11d9e0b4,param_1[3]),
     iVar4 != 0)) {
    return iVar4;
  }
  uVar3 = *param_1;
  uVar5 = (uint)uVar3;
  if (uVar3 < 0xc9) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        iVar4 = FUN_1024a230(param_4,"[astDayBuyLimitData]",uVar2,uVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = param_3;
        if (-1 < param_3) {
          iVar4 = param_3 + 1;
        }
        iVar4 = FUN_102c2b90(param_2,iVar4,param_4);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = uVar2 + 1;
        uVar5 = extraout_ECX;
      } while (uVar2 < *param_1);
    }
    if (param_1[1] < 0xc9) {
      uVar3 = 0;
      cVar1 = (char)param_4;
      if (param_1[1] != 0) {
        do {
          iVar4 = FUN_1024a140(param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_1010c010(param_2,"%s[%u]%c","[astWeekBuyLimitData]",uVar3,(int)cVar1);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_3;
          if (-1 < param_3) {
            iVar4 = param_3 + 1;
          }
          iVar4 = FUN_102c2b90(param_2,iVar4,param_4);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_1[1]);
      }
      if (param_1[2] < 0xc9) {
        uVar3 = 0;
        if (param_1[2] != 0) {
          do {
            iVar4 = FUN_1024a140(param_3);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_1010c010(param_2,"%s[%u]%c","[astMonthBuyLimitData]",uVar3,(int)cVar1);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = param_3;
            if (-1 < param_3) {
              iVar4 = param_3 + 1;
            }
            iVar4 = FUN_102c2b90(param_2,iVar4,param_4);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_1[2]);
        }
        if (param_1[3] < 0xc9) {
          uVar3 = 0;
          if (param_1[3] != 0) {
            do {
              iVar4 = FUN_1024a140(param_3);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_1010c010(param_2,"%s[%u]%c","[astForeverBuyLimitData]",uVar3,(int)cVar1);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = param_3;
              if (-1 < param_3) {
                iVar4 = param_3 + 1;
              }
              iVar4 = FUN_102c2b90(param_2,iVar4,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_1[3]);
          }
          return 0;
        }
      }
    }
  }
  return -7;
}



/* ===== FUN_102c3c90 @ 102c3c90  size=266 ===== */
// calls: _wassert
// strings:
//   "%I64u"
//   "[ullLastRebuildTm]"
//   "0x%02x"
//   "[bRebuildLimitDataCnt]"
//   "[astRebuildLimitDataInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102c3d1c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64u""
     ""[ullLastRebuildTm]""
     ""0x%02x""
     ""[bRebuildLimitDataCnt]""
     ""[astRebuildLimitDataInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102c3c90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullLastRebuildTm]","%I64u",*param_1,param_1[1]);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bRebuildLimitDataCnt]","0x%02x",
                           *(undefined1 *)(param_1 + 2)), iVar1 == 0)) {
    if (0x1e < *(byte *)(param_1 + 2)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 2) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRebuildLimitDataInfo]",bVar2,(int)(char)param_4
                            );
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102c38a0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)(param_1 + 2));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102c5cd0 @ 102c5cd0  size=321 ===== */
// calls: _wassert
// strings:
//   "[iStatus]"
//   "[iBoxId]"
//   "[iVipRefreshCount]"
//   "[iRefreshCount]"
//   "[astLotteryItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iIsVipRefresh]"

/* WARNING: Removing unreachable block (ram,0x102c5d89) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iStatus]""
     ""[iBoxId]""
     ""[iVipRefreshCount]""
     ""[iRefreshCount]""
     ""[astLotteryItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iIsVipRefresh]"" */

void __thiscall FUN_102c5cd0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iStatus]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBoxId]",&DAT_11d9e0b4,param_1[1]),
       iVar1 == 0)) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iVipRefreshCount]",&DAT_11d9e0b4,param_1[2]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRefreshCount]",&DAT_11d9e0b4,param_1[3]),
     iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLotteryItemList]",uVar2,(int)(char)param_4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102c58d0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    FUN_1024a290(param_2,param_3,param_4,"[iIsVipRefresh]",&DAT_11d9e0b4,param_1[0x1c]);
  }
  return;
}



/* ===== FUN_102c70a0 @ 102c70a0  size=175 ===== */
// calls: _wassert
// strings:
//   "[astLotteryItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iBoxId]"

/* WARNING: Removing unreachable block (ram,0x102c70bc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[astLotteryItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iBoxId]"" */

void __thiscall FUN_102c70a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLotteryItemList]",uVar2,(int)(char)param_4);
    if (iVar1 != 0) break;
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102c58d0(param_2,iVar1,param_4);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
    if (7 < uVar2) {
      FUN_1024a290(param_2,param_3,param_4,"[iBoxId]",&DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x60))
      ;
      return;
    }
  }
  return;
}



/* ===== FUN_102c74e0 @ 102c74e0  size=286 ===== */
// calls: _wassert
// strings:
//   "[iBoxId]"
//   "[astLotteryItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iVipRefrshCount]"
//   "[iRefreshCount]"
//   "[iResearchCount]"

/* WARNING: Removing unreachable block (ram,0x102c7529) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBoxId]""
     ""[astLotteryItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iVipRefrshCount]""
     ""[iRefreshCount]""
     ""[iResearchCount]"" */

void __thiscall FUN_102c74e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBoxId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLotteryItemList]",uVar2,(int)(char)param_4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102c58d0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iVipRefrshCount]",&DAT_11d9e0b4,param_1[0x19]);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRefreshCount]",&DAT_11d9e0b4,param_1[0x1a]),
       iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[iResearchCount]",&DAT_11d9e0b4,param_1[0x1b]);
    }
  }
  return;
}



