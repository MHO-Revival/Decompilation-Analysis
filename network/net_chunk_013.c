/* ===== FUN_10326130 @ 10326130  size=101 ===== */
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

undefined4 __thiscall FUN_10326130(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10327b00 @ 10327b00  size=257 ===== */
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

int __thiscall FUN_10327b00(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  uVar1 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    return -1;
  }
  *(undefined1 *)(param_2[1] + *param_2) = uVar1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
  if (((iVar2 == 0) && (iVar2 = FUN_101150a0(param_1[5]), iVar2 == 0)) &&
     (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 6)), iVar2 == 0)) {
    iVar2 = *(int *)(param_1 + 6);
    if (iVar2 < 0) {
      return -6;
    }
    if (0x32 < iVar2) {
      return -7;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_10327720(param_2,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 6));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10328010 @ 10328010  size=101 ===== */
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

undefined4 __thiscall FUN_10328010(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10328730 @ 10328730  size=196 ===== */
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

int __thiscall FUN_10328730(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar1 = -1;
  }
  else {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    iVar1 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      if (0x32 < *param_1) {
        return -7;
      }
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_10328350(param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_10328950 @ 10328950  size=257 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bItemCount]"
//   "[wReason]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103289d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bItemCount]""
     ""[wReason]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10328950(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x32 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103284f0(param_2,iVar1,param_4);
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



/* ===== FUN_10328be0 @ 10328be0  size=196 ===== */
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

int __thiscall FUN_10328be0(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar1 = -1;
  }
  else {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    iVar1 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      if (0x32 < *param_1) {
        return -7;
      }
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_10328350(param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_10328e00 @ 10328e00  size=257 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bItemCount]"
//   "[wReason]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10328e80) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bItemCount]""
     ""[wReason]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10328e00(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x32 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103284f0(param_2,iVar1,param_4);
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



/* ===== FUN_10329620 @ 10329620  size=256 ===== */
// calls: _wassert
// strings:
//   "[wReason]"
//   "0x%02x"
//   "[bDelGridCnt]"
//   "[astDelGridList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103296a1) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wReason]""
     ""0x%02x""
     ""[bDelGridCnt]""
     ""[astDelGridList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10329620(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bDelGridCnt]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x32 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astDelGridList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10329240(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1032a460 @ 1032a460  size=180 ===== */
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

int __thiscall FUN_1032a460(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    return -1;
  }
  *(byte *)(param_2[1] + *param_2) = bVar2;
  param_2[1] = param_2[1] + 1;
  if (10 < *param_1) {
    return -7;
  }
  bVar2 = 0;
  if (*param_1 != 0) {
    do {
      iVar1 = FUN_1032a030(param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_1032a660 @ 1032a660  size=206 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bMoveSwapItemsCnt]"
//   "[astMoveSwapItemsData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1032a6b6) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bMoveSwapItemsCnt]""
     ""[astMoveSwapItemsData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1032a660(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMoveSwapItemsCnt]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (10 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMoveSwapItemsData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1032a200(param_2,iVar1,param_4);
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



/* ===== FUN_1032a8b0 @ 1032a8b0  size=180 ===== */
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

int __thiscall FUN_1032a8b0(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    return -1;
  }
  *(byte *)(param_2[1] + *param_2) = bVar2;
  param_2[1] = param_2[1] + 1;
  if (10 < *param_1) {
    return -7;
  }
  bVar2 = 0;
  if (*param_1 != 0) {
    do {
      iVar1 = FUN_1032a030(param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_1032aab0 @ 1032aab0  size=206 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bMoveSwapItemsCnt]"
//   "[astMoveSwapItemsData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1032ab06) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bMoveSwapItemsCnt]""
     ""[astMoveSwapItemsData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1032aab0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMoveSwapItemsCnt]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (10 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMoveSwapItemsData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1032a200(param_2,iVar1,param_4);
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



/* ===== FUN_1032c6d0 @ 1032c6d0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iEquipCnt]"
//   "[astEquipParamList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1032c739) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iEquipCnt]""
     ""[astEquipParamList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1032c6d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iEquipCnt]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipParamList]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1032c2c0(param_2,iVar1,param_4);
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



/* ===== FUN_1032cc90 @ 1032cc90  size=326 ===== */
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

int __thiscall FUN_1032cc90(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if ((((iVar2 == 0) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3)), iVar2 == 0)) &&
        (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5)), iVar2 == 0)) &&
       (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 7)), iVar2 == 0 &&
         (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xb)), iVar2 == 0)) &&
        ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xf)), iVar2 == 0 &&
         (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x13)), iVar2 == 0)))))) {
      if (2000 < *(ushort *)(param_1 + 5)) {
        return -7;
      }
      uVar3 = 0;
      if (*(ushort *)(param_1 + 5) != 0) {
        do {
          iVar2 = FUN_1032bd90(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_1 + 5));
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1032d2c0 @ 1032d2c0  size=251 ===== */
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

int __thiscall FUN_1032d2c0(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (((iVar2 == 0) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3)), iVar2 == 0)) &&
       (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5)), iVar2 == 0)) {
      if (2000 < *(ushort *)(param_1 + 5)) {
        return -7;
      }
      uVar3 = 0;
      if (*(ushort *)(param_1 + 5) != 0) {
        do {
          iVar2 = FUN_1032bd90(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_1 + 5));
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1032e3b0 @ 1032e3b0  size=117 ===== */
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

undefined4 __thiscall FUN_1032e3b0(undefined1 *param_1,int *param_2,int param_3)

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
    uVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_1032e730 @ 1032e730  size=133 ===== */
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

int __thiscall FUN_1032e730(undefined1 *param_1,int *param_2,int param_3)

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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar2 == 0) {
      iVar2 = FUN_101150a0(param_1[3]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_1032eaf0 @ 1032eaf0  size=327 ===== */
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

int __thiscall FUN_1032eaf0(char *param_1,int param_2,int param_3)

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
        iVar6 = FUN_1010c200(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
        if (iVar6 == 0) {
          uVar4 = *(undefined4 *)(param_2 + 4);
          iVar6 = FUN_1010bf70(extraout_ECX);
          if (iVar6 == 0) {
            iVar5 = *(int *)(param_2 + 4);
            param_1[0x47] = '\0';
            pcVar7 = param_1 + 0x28;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar6 = FUN_1010c2b0(param_1 + 0x28,pcVar7 + (1 - (int)(param_1 + 0x29)));
            if (iVar6 == 0) {
              iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
              if (iVar6 == 0) {
                iVar6 = FUN_1010c200(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c)
                                    );
                if (iVar6 == 0) {
                  iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x50));
                  if (iVar6 == 0) {
                    iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x54));
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
  return iVar6;
}



/* ===== FUN_1032ff70 @ 1032ff70  size=284 ===== */
// calls: _wassert
// strings:
//   "[iPlanId]"
//   "[iReNameFlag]"
//   "[szPlanName]"
//   "[iEquipCnt]"
//   "[astEquipList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033001b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iPlanId]""
     ""[iReNameFlag]""
     ""[szPlanName]""
     ""[iEquipCnt]""
     ""[astEquipList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __thiscall FUN_1032ff70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iPlanId]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iReNameFlag]",&DAT_11d9e0b4,param_1[1]),
       iVar1 == 0)) && (iVar1 = FUN_1024a410(param_4,"[szPlanName]",param_1 + 2), iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iEquipCnt]",&DAT_11d9e0b4,param_1[7]),
     iVar1 == 0)) {
    uVar2 = 0;
    while ((iVar1 = FUN_1024a140(param_3), iVar1 == 0 &&
           (iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipList]",uVar2,(int)(char)param_4),
           iVar1 == 0))) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1032f9d0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      if (0x1d < uVar2) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_10330a20 @ 10330a20  size=164 ===== */
// calls: _wassert
// strings:
//   "[iReNameFlag]"
//   "[stPlanInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10330a57) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iReNameFlag]""
     ""[stPlanInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10330a20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iReNameFlag]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stPlanInfo]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_1032ff70(param_2,param_3,param_4);
      return;
    }
    FUN_1032ff70(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10336bd0 @ 10336bd0  size=171 ===== */
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

int __thiscall FUN_10336bd0(char *param_1,int param_2,int param_3)

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
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20));
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_103396b0 @ 103396b0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stDaily]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103396c0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stDaily]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103396b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stDaily]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103392a0(param_1,param_2,param_3);
      return;
    }
    FUN_103392a0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1033a4c0 @ 1033a4c0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astSkills]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033a529) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astSkills]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033a4c0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (100 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSkills]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033a120(param_2,iVar1,param_4);
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



/* ===== FUN_1033b190 @ 1033b190  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astGuilds]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033b1fd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astGuilds]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033b190(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuilds]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033ac40(param_2,iVar1,param_4);
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



/* ===== FUN_1033bce0 @ 1033bce0  size=230 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astApplys]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033bd4b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astApplys]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033bce0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x80 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astApplys]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033b850(param_2,iVar1,param_4);
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



/* ===== FUN_1033c680 @ 1033c680  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astInvitations]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033c6e9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astInvitations]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033c680(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astInvitations]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033c260(param_2,iVar1,param_4);
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



/* ===== FUN_1033d510 @ 1033d510  size=326 ===== */
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

int __thiscall FUN_1033d510(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_101159e0(param_1[1]);
    if ((((iVar2 == 0) && (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 2)), iVar2 == 0)) &&
        (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 6)), iVar2 == 0)) &&
       ((iVar2 = FUN_101159e0(param_1[10]), iVar2 == 0 &&
        (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xb)), iVar2 == 0)))) {
      iVar2 = *(int *)(param_1 + 0xb);
      if (iVar2 < 0) {
        return -6;
      }
      if (10 < iVar2) {
        return -7;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = FUN_1033c8f0(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xb));
      }
      iVar2 = FUN_1033d090(param_2,param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 199));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1033e300 @ 1033e300  size=1028 ===== */
// calls: _wassert
// strings:
//   "[stId]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szNote]"
//   "[iLevel]"
//   "[szHunterStar]"
//   "[bIsOnline]"
//   "[iContribution]"
//   "%I64u"
//   "[ullContributionAcc]"
//   "[iWage]"
//   "[iTitle]"
//   "[dwOfflineTime]"
//   "[iDepotOpCount]"
//   "[iHRLevel]"
//   "[dwJoinTime]"
//   "[dwCelebrationScore]"
//   "[dwCelebrationTask]"
//   "[dwPreCelebrationTask]"
//   "[dwCelebrationRewardType]"

/* WARNING: Removing unreachable block (ram,0x1033e310) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stId]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szNote]""
     ""[iLevel]""
     ""[szHunterStar]""
     ""[bIsOnline]""
     ""[iContribution]""
     ""%I64u""
     ""[ullContributionAcc]"" */

void __thiscall FUN_1033e300(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stId]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102a3f50(param_2,iVar1,param_4);
    if ((((((iVar1 == 0) && (iVar1 = FUN_1024a410(param_4,"[szNote]",param_1 + 0x38), iVar1 == 0))
          && (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x138)), iVar1 == 0)) &&
         (((iVar1 = FUN_1024a410(param_4,"[szHunterStar]",param_1 + 0x13c), iVar1 == 0 &&
           (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bIsOnline]",&DAT_11d9e0b4,
                                 *(undefined1 *)(param_1 + 0x1bc)), iVar1 == 0)) &&
          ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iContribution]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x1bd)), iVar1 == 0 &&
           ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullContributionAcc]","%I64u",
                                  *(undefined4 *)(param_1 + 0x1c1),*(undefined4 *)(param_1 + 0x1c5))
            , iVar1 == 0 &&
            (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iWage]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x1c9)), iVar1 == 0)))))))) &&
        (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTitle]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x1cd)), iVar1 == 0 &&
          ((((((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwOfflineTime]",&DAT_11d9f574,
                                     *(undefined4 *)(param_1 + 0x1d1)), iVar1 == 0 &&
               (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iDepotOpCount]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x1d5)), iVar1 == 0)) &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x1d9)), iVar1 == 0)) &&
             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwJoinTime]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 0x1dd)), iVar1 == 0 &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCelebrationScore]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 0x1e1)), iVar1 == 0)))) &&
            ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCelebrationTask]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 0x1e5)), iVar1 == 0 &&
             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwPreCelebrationTask]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 0x1e9)), iVar1 == 0 &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCelebrationRewardType]",
                                    &DAT_11d9f574,*(undefined4 *)(param_1 + 0x1ed)), iVar1 == 0)))))
            ) && (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iContributionWeekAcc]",
                                       &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x1f1)), iVar1 == 0))
          )) && (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLevelupAll]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 0x1f5)), iVar1 == 0 &&
                  (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iHunterCount]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 0x1f9)), iVar1 == 0)) &&
                 (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTaskCount]",&DAT_11d9e0b4,
                                       *(undefined4 *)(param_1 + 0x1fd)), iVar1 == 0)))))) &&
       (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iIsBaned]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x201)), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBanedTime]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x205)), iVar1 == 0)) &&
        (iVar1 = FUN_1024a1e0(param_4,"[stGuildWar]",extraout_ECX), iVar1 == 0)))) {
      if (param_3 < 0) {
        FUN_1033d840(param_2,param_3,param_4);
        return;
      }
      FUN_1033d840(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_1033eb90 @ 1033eb90  size=230 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astGuilders]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033ebfb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astGuilders]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033eb90(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x140 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuilders]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033e300(param_2,iVar1,param_4);
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



/* ===== FUN_1033f350 @ 1033f350  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astDepotsRights]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033f3b9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astDepotsRights]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033f350(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astDepotsRights]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033ef60(param_2,iVar1,param_4);
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



/* ===== FUN_1033fca0 @ 1033fca0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTitles]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1033fd0d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTitles]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1033fca0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTitles]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033f830(param_2,iVar1,param_4);
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



/* ===== FUN_10342710 @ 10342710  size=157 ===== */
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

int __thiscall FUN_10342710(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10342aa0 @ 10342aa0  size=265 ===== */
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

int __thiscall FUN_10342aa0(char *param_1,int param_2,int param_3)

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
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20));
        if (iVar6 == 0) {
          uVar4 = *(undefined4 *)(param_2 + 4);
          iVar6 = FUN_1010bf70(extraout_ECX);
          if (iVar6 == 0) {
            iVar5 = *(int *)(param_2 + 4);
            param_1[0x123] = '\0';
            pcVar7 = param_1 + 0x24;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar6 = FUN_1010c2b0(param_1 + 0x24,pcVar7 + (1 - (int)(param_1 + 0x25)));
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



/* ===== FUN_10343570 @ 10343570  size=157 ===== */
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

int __thiscall FUN_10343570(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10344640 @ 10344640  size=157 ===== */
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

int __thiscall FUN_10344640(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10345ff0 @ 10345ff0  size=160 ===== */
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

int __thiscall FUN_10345ff0(char *param_1,int param_2,int param_3)

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
    param_1[499] = '\0';
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



/* ===== FUN_10348ae0 @ 10348ae0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTitles]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10348af0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTitles]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10348ae0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTitles]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033fca0(param_1,param_2,param_3);
      return;
    }
    FUN_1033fca0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103490f0 @ 103490f0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stRights]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10349100) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stRights]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103490f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stRights]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033fca0(param_1,param_2,param_3);
      return;
    }
    FUN_1033fca0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034ae60 @ 1034ae60  size=148 ===== */
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

int __thiscall FUN_1034ae60(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_1034aac0(param_2,param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_1034aac0(param_2,param_3);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_1034b060 @ 1034b060  size=219 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bOpType]"
//   "[stSrcItemLoc]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stDstItemLoc]"

/* WARNING: Removing unreachable block (ram,0x1034b09d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bOpType]""
     ""[stSrcItemLoc]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stDstItemLoc]"" */

void __thiscall FUN_1034b060(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bOpType]","0x%02x",*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stSrcItemLoc]",(int)(char)param_4), iVar1 == 0))
  {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_1034ac50(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stDstItemLoc]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_1034ac50(param_2,param_3,param_4);
        return;
      }
      FUN_1034ac50(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_1034b2c0 @ 1034b2c0  size=251 ===== */
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

int __thiscall FUN_1034b2c0(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (((iVar2 == 0) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3)), iVar2 == 0)) &&
       (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5)), iVar2 == 0)) {
      if (1000 < *(ushort *)(param_1 + 5)) {
        return -7;
      }
      uVar3 = 0;
      if (*(ushort *)(param_1 + 5) != 0) {
        do {
          iVar2 = FUN_1034aac0(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_1 + 5));
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1034b7b0 @ 1034b7b0  size=176 ===== */
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

int __thiscall FUN_1034b7b0(undefined1 *param_1,int *param_2,int param_3)

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
      param_1[8] = 0;
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



/* ===== FUN_1034bd50 @ 1034bd50  size=134 ===== */
// calls: _wassert
// strings:
//   "[stRights]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034bd60) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stRights]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034bd50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stRights]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033fca0(param_1,param_2,param_3);
      return;
    }
    FUN_1033fca0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034c800 @ 1034c800  size=157 ===== */
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

int __thiscall FUN_1034c800(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_1034df30 @ 1034df30  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astGuilds]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1034df9d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astGuilds]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1034df30(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuilds]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1033ac40(param_2,iVar1,param_4);
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



/* ===== FUN_1034e2b0 @ 1034e2b0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stApplys]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034e2c0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stApplys]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034e2b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stApplys]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033bce0(param_1,param_2,param_3);
      return;
    }
    FUN_1033bce0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034e5d0 @ 1034e5d0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stInvitations]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034e5e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stInvitations]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034e5d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stInvitations]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_1033c680(param_1,param_2,param_3);
      return;
    }
    FUN_1033c680(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034e8f0 @ 1034e8f0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuild]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034e900) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuild]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034e8f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuild]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10341cc0(param_1,param_2,param_3);
      return;
    }
    FUN_10341cc0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034ec10 @ 1034ec10  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTitles]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034ec20) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTitles]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034ec10(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTitles]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033fca0(param_1,param_2,param_3);
      return;
    }
    FUN_1033fca0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034ef30 @ 1034ef30  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuilder]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034ef40) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuilder]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034ef30(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuilder]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033e300(param_1,param_2,param_3);
      return;
    }
    FUN_1033e300(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034f250 @ 1034f250  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuilder]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034f260) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuilder]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034f250(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuilder]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033e300(param_1,param_2,param_3);
      return;
    }
    FUN_1033e300(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034f5a0 @ 1034f5a0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuilder]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034f5b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuilder]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034f5a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuilder]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102a43c0(param_1,param_2,param_3);
      return;
    }
    FUN_102a43c0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034f8e0 @ 1034f8e0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuilder]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034f8f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuilder]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034f8e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuilder]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102a3f50(param_1,param_2,param_3);
      return;
    }
    FUN_102a3f50(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1034fc00 @ 1034fc00  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuilder]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1034fc10) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuilder]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1034fc00(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuilder]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033e300(param_1,param_2,param_3);
      return;
    }
    FUN_1033e300(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10350640 @ 10350640  size=134 ===== */
// calls: _wassert
// strings:
//   "[stCommodities]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10350650) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stCommodities]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10350640(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stCommodities]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_103400b0(param_1,param_2,param_3);
      return;
    }
    FUN_103400b0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10350970 @ 10350970  size=134 ===== */
// calls: _wassert
// strings:
//   "[stQuest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10350980) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stQuest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10350970(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stQuest]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10340470(param_1,param_2,param_3);
      return;
    }
    FUN_10340470(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10350b50 @ 10350b50  size=101 ===== */
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

undefined4 __thiscall FUN_10350b50(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103521e0 @ 103521e0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stSkills]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103521f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSkills]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103521e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stSkills]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033a4c0(param_1,param_2,param_3);
      return;
    }
    FUN_1033a4c0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10352520 @ 10352520  size=134 ===== */
// calls: _wassert
// strings:
//   "[stSkills]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10352530) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSkills]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10352520(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stSkills]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033a4c0(param_1,param_2,param_3);
      return;
    }
    FUN_1033a4c0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10352ab0 @ 10352ab0  size=196 ===== */
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

int __thiscall FUN_10352ab0(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar1 = -1;
  }
  else {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    iVar1 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      if (0x32 < *param_1) {
        return -7;
      }
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_10328350(param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_10352cd0 @ 10352cd0  size=257 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bItemCount]"
//   "[wReason]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10352d50) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bItemCount]""
     ""[wReason]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10352cd0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x32 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103284f0(param_2,iVar1,param_4);
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



/* ===== FUN_10352f60 @ 10352f60  size=196 ===== */
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

int __thiscall FUN_10352f60(byte *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  bVar2 = *param_1;
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_2[2] == param_2[1]) {
    iVar1 = -1;
  }
  else {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    iVar1 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      if (0x32 < *param_1) {
        return -7;
      }
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_10328350(param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_10353180 @ 10353180  size=257 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bItemCount]"
//   "[wReason]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10353200) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bItemCount]""
     ""[wReason]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10353180(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x32 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103284f0(param_2,iVar1,param_4);
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



/* ===== FUN_10353f90 @ 10353f90  size=251 ===== */
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

int __thiscall FUN_10353f90(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (((iVar2 == 0) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3)), iVar2 == 0)) &&
       (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5)), iVar2 == 0)) {
      if (1000 < *(ushort *)(param_1 + 5)) {
        return -7;
      }
      uVar3 = 0;
      if (*(ushort *)(param_1 + 5) != 0) {
        do {
          iVar2 = FUN_1034aac0(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_1 + 5));
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_103545c0 @ 103545c0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stGuild]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103545d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stGuild]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103545c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stGuild]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1033ac40(param_1,param_2,param_3);
      return;
    }
    FUN_1033ac40(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10356450 @ 10356450  size=335 ===== */
// calls: _wassert
// strings:
//   "[dwErrCode]"
//   "[wCount]"
//   "[astGuildWarCommerceInfoList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "%I64u"
//   "[ullGuildId]"
//   "[dwCommerceId]"

/* WARNING: Removing unreachable block (ram,0x103564d7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwErrCode]""
     ""[wCount]""
     ""[astGuildWarCommerceInfoList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""%I64u""
     ""[ullGuildId]""
     ""[dwCommerceId]"" */

int __thiscall FUN_10356450(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwErrCode]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildWarCommerceInfoList]",uVar2,
                             (int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10355f80(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullGuildId]","%I64u",
                         *(undefined4 *)((int)param_1 + 0x222),*(undefined4 *)((int)param_1 + 0x226)
                        );
    if (iVar1 == 0) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCommerceId]",&DAT_11d9f574,
                           *(undefined4 *)((int)param_1 + 0x22a));
    }
  }
  return iVar1;
}



/* ===== FUN_103568f0 @ 103568f0  size=256 ===== */
// calls: _wassert
// strings:
//   "[dwBoatId]"
//   "0x%02x"
//   "[bMaterialNum]"
//   "[astMaterialList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10356972) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwBoatId]""
     ""0x%02x""
     ""[bMaterialNum]""
     ""[astMaterialList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103568f0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwBoatId]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMaterialNum]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (100 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
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
      } while (bVar2 < *(byte *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10357fa0 @ 10357fa0  size=191 ===== */
// calls: _wassert
// strings:
//   "[dwErrCode]"
//   "[stGuildWarBoatStatusInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "0x%02x"
//   "[chMode]"

/* WARNING: Removing unreachable block (ram,0x10357fdb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwErrCode]""
     ""[stGuildWarBoatStatusInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""0x%02x""
     ""[chMode]"" */

void __thiscall FUN_10357fa0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwErrCode]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stGuildWarBoatStatusInfo]",(int)(char)param_4),
     iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103573b0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[chMode]","0x%02x",(int)*(char *)(param_1 + 0x42));
    }
  }
  return;
}



/* ===== FUN_10358410 @ 10358410  size=240 ===== */
// calls: _wassert
// strings:
//   "[wCount]"
//   "[astGuildWarBoatStatusList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035847f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wCount]""
     ""[astGuildWarBoatStatusList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10358410(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildWarBoatStatusList]",uVar2,
                             (int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103573b0(param_2,iVar1,param_4);
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



/* ===== FUN_1035b7e0 @ 1035b7e0  size=309 ===== */
// calls: _wassert
// strings:
//   "[wStart]"
//   "[wInnerStart]"
//   "[wCount]"
//   "[astGuildSimpleInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035b893) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wStart]""
     ""[wInnerStart]""
     ""[wCount]""
     ""[astGuildSimpleInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1035b7e0(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wStart]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wInnerStart]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,param_1[2]), iVar1 == 0)
     ) {
    if (100 < (ushort)param_1[2]) {
      return -7;
    }
    uVar2 = 0;
    if (param_1[2] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildSimpleInfos]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1035b3e0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ushort)param_1[2]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1035bf90 @ 1035bf90  size=253 ===== */
// calls: _wassert
// strings:
//   "[iBuffCount]"
//   "[astCommerceBuffInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[dwHistory]"

/* WARNING: Removing unreachable block (ram,0x1035bff9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBuffCount]""
     ""[astCommerceBuffInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[dwHistory]"" */

int __thiscall FUN_1035bf90(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBuffCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (5 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astCommerceBuffInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10340ba0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHistory]",&DAT_11d9f574,param_1[0x10]);
  }
  return iVar1;
}



/* ===== FUN_1035d5e0 @ 1035d5e0  size=174 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astGuildFuncRecordInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035d619) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astGuildFuncRecordInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __thiscall FUN_1035d5e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
    while ((iVar1 = FUN_1024a140(param_3), iVar1 == 0 &&
           (iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildFuncRecordInfos]",uVar2,
                                 (int)(char)param_4), iVar1 == 0))) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1035cfd0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      if (499 < uVar2) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_1035dec0 @ 1035dec0  size=174 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astGuildFuncRecordInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035def9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astGuildFuncRecordInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __thiscall FUN_1035dec0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
    while ((iVar1 = FUN_1024a140(param_3), iVar1 == 0 &&
           (iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildFuncRecordInfos]",uVar2,
                                 (int)(char)param_4), iVar1 == 0))) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1035cfd0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      if (499 < uVar2) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_1035e670 @ 1035e670  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astInformations]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035e6d9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astInformations]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1035e670(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astInformations]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1035e290(param_2,iVar1,param_4);
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



/* ===== FUN_1035fa70 @ 1035fa70  size=204 ===== */
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

int __thiscall FUN_1035fa70(byte *param_1,int *param_2,int param_3)

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
    if (0x40 < *param_1) {
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



/* ===== FUN_1035fcb0 @ 1035fcb0  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bCount]"
//   "[astExec]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1035fd0d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bCount]""
     ""[astExec]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1035fcb0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bCount]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x40 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astExec]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1035f890(param_2,iVar1,param_4);
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



/* ===== FUN_10360330 @ 10360330  size=134 ===== */
// calls: _wassert
// strings:
//   "[stExec]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10360340) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stExec]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10360330(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stExec]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1035fcb0(param_1,param_2,param_3);
      return;
    }
    FUN_1035fcb0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10361980 @ 10361980  size=164 ===== */
// calls: _wassert
// strings:
//   "[iNetId]"
//   "[stExec]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103619b7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iNetId]""
     ""[stExec]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10361980(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNetId]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stExec]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_1035fcb0(param_2,param_3,param_4);
      return;
    }
    FUN_1035fcb0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10364360 @ 10364360  size=225 ===== */
// calls: _wassert
// strings:
//   "[iSlotsCnt]"
//   "[astSlots]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103643c9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iSlotsCnt]""
     ""[astSlots]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10364360(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSlotsCnt]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSlots]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10363f70(param_2,iVar1,param_4);
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



/* ===== FUN_103647e0 @ 103647e0  size=271 ===== */
// calls: _wassert
// strings:
//   "[iError]"
//   "[iSlotsCnt]"
//   "[astSlots]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10364879) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iError]""
     ""[iSlotsCnt]""
     ""[astSlots]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103647e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iError]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSlotsCnt]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSlots]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102c48b0(param_2,iVar1,param_4);
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



/* ===== FUN_10366420 @ 10366420  size=141 ===== */
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

undefined4 __thiscall
FUN_10366420(undefined2 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0xffffffed;
  }
  uVar3 = 0;
  if ((param_5 == 0) || (param_5 != 0)) {
    uVar1 = *param_1;
    if (1 < param_3) {
      *param_2 = (char)((ushort)uVar1 >> 8);
      uVar3 = 2;
      param_2[1] = (char)uVar1;
      uVar1 = param_1[1];
      if (param_3 < 2) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xf4);
      }
      if (1 < param_3 - 2) {
        param_2[2] = (char)((ushort)uVar1 >> 8);
        uVar3 = 4;
        param_2[3] = (char)uVar1;
        uVar2 = 0;
        goto LAB_1036649e;
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xfffffff7;
  }
LAB_1036649e:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar3;
  }
  return uVar2;
}



/* ===== FUN_10366e40 @ 10366e40  size=134 ===== */
// calls: _wassert
// strings:
//   "[stShop]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10366e50) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stShop]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10366e40(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stShop]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10366a60(param_1,param_2,param_3);
      return;
    }
    FUN_10366a60(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10367020 @ 10367020  size=101 ===== */
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

undefined4 __thiscall FUN_10367020(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1036a030 @ 1036a030  size=134 ===== */
// calls: _wassert
// strings:
//   "[stSkill]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1036a040) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSkill]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1036a030(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stSkill]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10369ca0(param_1,param_2,param_3);
      return;
    }
    FUN_10369ca0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1036aef0 @ 1036aef0  size=208 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x1036af68) */
/* WARNING: Removing unreachable block (ram,0x1036afaa) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_1036aef0(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if ((param_5 == 0) || (param_5 != 0)) {
      iVar2 = FUN_1010c190(*param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c200(param_1[1],param_1[2]);
        uVar3 = 0;
        if (iVar2 == 0) {
          uVar1 = *(undefined2 *)(param_1 + 3);
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



/* ===== FUN_1036cdf0 @ 1036cdf0  size=101 ===== */
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

undefined4 __thiscall FUN_1036cdf0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1036d460 @ 1036d460  size=101 ===== */
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

undefined4 __thiscall FUN_1036d460(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1036da70 @ 1036da70  size=101 ===== */
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

undefined4 __thiscall FUN_1036da70(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1036e4c0 @ 1036e4c0  size=191 ===== */
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

int __thiscall FUN_1036e4c0(undefined1 *param_1,int *param_2,int param_3)

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
    iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar2 == 0) {
      iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 3));
      if (iVar2 == 0) {
        iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 7));
        if (iVar2 == 0) {
          iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 9));
          if (iVar2 == 0) {
            iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd));
            if (iVar2 == 0) {
              iVar2 = FUN_1010c0c0(param_1[0x11]);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10371b60 @ 10371b60  size=310 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[dwRecordAllCount]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10371c11) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[dwRecordAllCount]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10371b60(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwRecordAllCount]",&DAT_11d9f574,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 2)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 2)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 2) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103709a0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10372390 @ 10372390  size=310 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[dwRecordAllCount]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10372441) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[dwRecordAllCount]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10372390(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwRecordAllCount]",&DAT_11d9f574,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 2)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 2)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 2) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103709a0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10374780 @ 10374780  size=307 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[iFin]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10374831) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[iFin]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10374780(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFin]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0))
     && (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                              *(undefined2 *)(param_1 + 2)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 2)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 2) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10374240(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10374f70 @ 10374f70  size=273 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10374fff) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10374f70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10374240(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10375740 @ 10375740  size=273 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103757cf) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10375740(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10374240(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10375f10 @ 10375f10  size=273 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[wRecordCount]"
//   "[astRecords]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10375f9f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[wRecordCount]""
     ""[astRecords]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10375f10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wRecordCount]",&DAT_11d9e0b4,
                           *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (400 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRecords]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10374240(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1037a910 @ 1037a910  size=277 ===== */
// calls: _wassert
// strings:
//   "[dwVersion]"
//   "[iNum]"
//   "[astInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1037a9a9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwVersion]""
     ""[iNum]""
     ""[astInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1037a910(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwVersion]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNum]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0))
  {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (100 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10379f40(param_2,iVar1,param_4);
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



/* ===== FUN_1037b240 @ 1037b240  size=282 ===== */
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

int __thiscall FUN_1037b240(char *param_1,int param_2,int param_3)

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
              iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x40));
              if (iVar6 == 0) {
                iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x44));
                return iVar6;
              }
            }
          }
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_1037c050 @ 1037c050  size=187 ===== */
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

int __thiscall FUN_1037c050(char *param_1,int param_2,int param_3)

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
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20));
        if (iVar4 == 0) {
          iVar4 = FUN_101150a0(param_1[0x24]);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1037db60 @ 1037db60  size=171 ===== */
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

int __thiscall FUN_1037db60(char *param_1,int param_2,int param_3)

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
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20));
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1037e6b0 @ 1037e6b0  size=227 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astHiss]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1037e71b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astHiss]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1037e6b0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (300 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astHiss]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1037e220(param_2,iVar1,param_4);
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



/* ===== FUN_1037ed40 @ 1037ed40  size=204 ===== */
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

int __thiscall FUN_1037ed40(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
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
        if (iVar2 == 0) {
          iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd));
          if (iVar2 == 0) {
            iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x11));
            if (iVar2 == 0) {
              iVar2 = FUN_1037c530(param_2,param_3);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10381930 @ 10381930  size=277 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[iUserCount]"
//   "[astUserDatas]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103819c9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[iUserCount]""
     ""[astUserDatas]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10381930(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iUserCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0xf < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astUserDatas]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103814d0(param_2,iVar1,param_4);
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



/* ===== FUN_103821d0 @ 103821d0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iUserCount]"
//   "[astUserDatas]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1038223d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iUserCount]""
     ""[astUserDatas]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103821d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iUserCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0xf < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astUserDatas]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10381d80(param_2,iVar1,param_4);
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



/* ===== FUN_103844a0 @ 103844a0  size=566 ===== */
// calls: _wassert
// strings:
//   "[iRound]"
//   "[iCurCount]"
//   "[astCurrent]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[stBest]"
//   "[iHisCount]"
//   "[astHistory]"

/* WARNING: Removing unreachable block (ram,0x10384549) */
/* WARNING: Removing unreachable block (ram,0x103845d2) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRound]""
     ""[iCurCount]""
     ""[astCurrent]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[stBest]""
     ""[iHisCount]""
     ""[astHistory]"" */

int __thiscall FUN_103844a0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iRound]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iCurCount]",&DAT_11d9e0b4,param_1[1]),
     iVar2 == 0)) {
    iVar2 = param_1[1];
    if (iVar2 < 0) {
      return -6;
    }
    if (5 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astCurrent]",param_3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_10383b10(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)param_1[1]);
    }
    iVar2 = FUN_1024a140(iVar1);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stBest]",(int)(char)param_4), iVar2 == 0)) {
      iVar2 = iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1 + 1;
      }
      iVar2 = FUN_10383f70(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[iHisCount]",&DAT_11d9e0b4,param_1[0x52]),
         iVar2 == 0)) {
        iVar2 = param_1[0x52];
        if (iVar2 < 0) {
          return -6;
        }
        if (3 < iVar2) {
          return -7;
        }
        if (0 < iVar2) {
          iVar2 = 0;
          puVar4 = param_1 + 0x53;
          do {
            iVar3 = FUN_1024a230(param_4,"[astHistory]",iVar2,puVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = iVar1;
            if (-1 < iVar1) {
              iVar3 = iVar1 + 1;
            }
            iVar3 = FUN_10383f70(param_2,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar2 = iVar2 + 1;
            puVar4 = param_1;
          } while (iVar2 < (int)param_1[0x52]);
        }
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10385250 @ 10385250  size=277 ===== */
// calls: _wassert
// strings:
//   "[iLib]"
//   "[iCount]"
//   "[astSculpture]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103852e9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iLib]""
     ""[iCount]""
     ""[astSculpture]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10385250(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLib]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0)
     ) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSculpture]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10384da0(param_2,iVar1,param_4);
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



/* ===== FUN_10385600 @ 10385600  size=134 ===== */
// calls: _wassert
// strings:
//   "[stLib]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10385610) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stLib]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10385600(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stLib]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10385250(param_1,param_2,param_3);
      return;
    }
    FUN_10385250(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10385af0 @ 10385af0  size=460 ===== */
// calls: _wassert
// strings:
//   "[iCfgCount]"
//   "[astCfgs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iCount]"
//   "[astLibs]"

/* WARNING: Removing unreachable block (ram,0x10385b69) */
/* WARNING: Removing unreachable block (ram,0x10385c40) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCfgCount]""
     ""[astCfgs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iCount]""
     ""[astLibs]"" */

int __thiscall FUN_10385af0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCfgCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astCfgs]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10382b80(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[0x105]);
    if (iVar1 == 0) {
      iVar1 = param_1[0x105];
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
          iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLibs]",iVar2,(int)(char)param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_10385250(param_2,iVar1,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[0x105]);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



