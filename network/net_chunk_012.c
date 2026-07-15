/* ===== FUN_102c7a10 @ 102c7a10  size=139 ===== */
// calls: _wassert
// strings:
//   "[astItemBoxList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102c7a29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[astItemBoxList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void FUN_102c7a10(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_2);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_1010c010(param_1,"%s[%u]%c","[astItemBoxList]",uVar2,(int)(char)param_3),
       iVar1 != 0)) {
      return;
    }
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_102c74e0(param_1,iVar1,param_3);
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1;
    if (2 < uVar2) {
      return;
    }
  }
  return;
}



/* ===== FUN_102d0c10 @ 102d0c10  size=219 ===== */
// calls: _wassert
// strings:
//   "[iErrNo]"
//   "[stIntanceInitInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[wLineID]"
//   "[iLevelEnterType]"

/* WARNING: Removing unreachable block (ram,0x102d0c4b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrNo]""
     ""[stIntanceInitInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[wLineID]""
     ""[iLevelEnterType]"" */

void __thiscall FUN_102d0c10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrNo]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stIntanceInitInfo]",(int)(char)param_4),
     iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102a22d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wLineID]",&DAT_11d9e0b4,
                             *(undefined2 *)((int)param_1 + 0x29)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[iLevelEnterType]",&DAT_11d9e0b4,
                   *(undefined4 *)((int)param_1 + 0x2b));
    }
  }
  return;
}



/* ===== FUN_102d1420 @ 102d1420  size=101 ===== */
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

undefined4 __thiscall FUN_102d1420(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_102d3770 @ 102d3770  size=117 ===== */
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

undefined4 __thiscall FUN_102d3770(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_102d3cd0 @ 102d3cd0  size=209 ===== */
// calls: _wassert
// strings:
//   "[dwCount]"
//   "[astItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102d3d29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwCount]""
     ""[astItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102d3cd0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCount]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (4 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItems]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102d3950(param_2,iVar1,param_4);
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



/* ===== FUN_102d6b40 @ 102d6b40  size=491 ===== */
// calls: _wassert
// strings:
//   "[dwMsgType]"
//   "[dwMsgArea]"
//   "%I64u"
//   "[ullDbid]"
//   "0x%02x"
//   "[bMsgParamNum]"
//   "[astMsgPramList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iSize]"
//   "[szItems]"

/* WARNING: Removing unreachable block (ram,0x102d6bf9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwMsgType]""
     ""[dwMsgArea]""
     ""%I64u""
     ""[ullDbid]""
     ""0x%02x""
     ""[bMsgParamNum]""
     ""[astMsgPramList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102d6b40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMsgType]",&DAT_11d9f574,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMsgArea]",&DAT_11d9f574,param_1[1]),
       iVar1 == 0)) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullDbid]","%I64u",param_1[2],param_1[3]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMsgParamNum]","0x%02x",
                           *(undefined1 *)(param_1 + 4)), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMsgPramList]",uVar3,(int)(char)param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102d6640(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 5);
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSize]",&DAT_11d9e0b4,
                         *(undefined4 *)((int)param_1 + 0x16a));
    if (iVar1 == 0) {
      iVar1 = *(int *)((int)param_1 + 0x16a);
      if (iVar1 < 0) {
        return -6;
      }
      if (0x200 < iVar1) {
        return -7;
      }
      iVar1 = FUN_1024a3b0(extraout_ECX,"[szItems]",iVar1,iVar1 >> 0x1f);
      if (iVar1 == 0) {
        iVar1 = 0;
        if (0 < *(int *)((int)param_1 + 0x16a)) {
          do {
            iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar1 + 0x16e)
                                );
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)((int)param_1 + 0x16a));
        }
        iVar1 = FUN_1010c060(param_4);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102d70a0 @ 102d70a0  size=298 ===== */
// calls: _wassert
// strings:
//   "[dwMsgType]"
//   "[dwMsgArea]"
//   "%I64u"
//   "[ullDbid]"
//   "0x%02x"
//   "[bMsgParamNum]"
//   "[astMsgPramList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102d7159) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwMsgType]""
     ""[dwMsgArea]""
     ""%I64u""
     ""[ullDbid]""
     ""0x%02x""
     ""[bMsgParamNum]""
     ""[astMsgPramList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __thiscall FUN_102d70a0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMsgType]",&DAT_11d9f574,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMsgArea]",&DAT_11d9f574,param_1[1]),
       iVar1 == 0)) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullDbid]","%I64u",param_1[2],param_1[3]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMsgParamNum]","0x%02x",
                           *(undefined1 *)(param_1 + 4)), iVar1 == 0)) {
    uVar2 = 0;
    while ((iVar1 = FUN_1024a140(param_3), iVar1 == 0 &&
           (iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMsgPramList]",uVar2,(int)(char)param_4),
           iVar1 == 0))) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102d6640(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      if (4 < uVar2) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_102d7360 @ 102d7360  size=248 ===== */
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

int __thiscall FUN_102d7360(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  
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
    iVar5 = -1;
  }
  else {
    *(undefined1 *)(param_2[1] + *param_2) = uVar1;
    param_2[1] = param_2[1] + 1;
    iVar5 = FUN_1010c120(*(undefined2 *)(param_1 + 1));
    if (iVar5 == 0) {
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x193] = 0;
        pcVar6 = param_1 + 3;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 3,pcVar6 + (1 - (int)(param_1 + 4)));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
          if (iVar5 == 0) {
            iVar5 = FUN_102d3f30(param_2,param_3);
            return iVar5;
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_102d7b40 @ 102d7b40  size=210 ===== */
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

int __thiscall FUN_102d7b40(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = param_2;
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  iVar3 = FUN_1010c190(*param_1);
  if (iVar3 == 0) {
    param_2 = (int *)0x0;
    puVar4 = param_1;
    while( true ) {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar4;
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
      }
      if ((uint)(piVar2[2] - piVar2[1]) < 4) break;
      param_3._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
      *(undefined1 *)(piVar2[1] + *piVar2) = param_3._3_1_;
      param_3._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + piVar2[1]) = param_3._2_1_;
      *(char *)(*piVar2 + 2 + piVar2[1]) = (char)((uint)uVar1 >> 8);
      *(char *)(*piVar2 + 3 + piVar2[1]) = (char)uVar1;
      piVar2[1] = piVar2[1] + 4;
      param_2 = (int *)((int)param_2 + 1);
      if (99 < param_2) {
        iVar3 = FUN_1010c190(param_1[0x65]);
        return iVar3;
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_102d7c70 @ 102d7c70  size=215 ===== */
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

int __thiscall FUN_102d7c70(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  iVar1 = FUN_1010c870(param_1);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)(param_1 + 6);
    param_3 = 0;
    while( true ) {
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2b8);
      }
      if ((uint)(param_2[2] - param_2[1]) < 4) break;
      param_3 = param_3 + 1;
      puVar2[-2] = *(undefined1 *)(*param_2 + 3 + param_2[1]);
      puVar2[-1] = *(undefined1 *)(*param_2 + 2 + param_2[1]);
      *puVar2 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
      puVar2[1] = *(undefined1 *)(*param_2 + param_2[1]);
      puVar2 = puVar2 + 4;
      param_2[1] = param_2[1] + 4;
      if (99 < param_3) {
        iVar1 = FUN_1010c870(param_1 + 0x194);
        return iVar1;
      }
    }
    iVar1 = -2;
  }
  return iVar1;
}



/* ===== FUN_102d7dc0 @ 102d7dc0  size=283 ===== */
// calls: _wassert
// strings:
//   "[dwLockItemNum]"
//   "[lockItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[iReserver]"

/* WARNING: Removing unreachable block (ram,0x102d7dfa) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[dwLockItemNum]""
     ""[lockItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[iReserver]"" */

int __thiscall FUN_102d7dc0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwLockItemNum]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[lockItemList]",99,0), iVar1 == 0)) {
    uVar3 = 0;
    puVar2 = param_1;
    do {
      puVar2 = puVar2 + 1;
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,*puVar2);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 100);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(param_2[2] - param_2[1])) {
      *(char *)(param_2[1] + *param_2) = (char)param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iReserver]",&DAT_11d9e0b4,param_1[0x65]);
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_102d86c0 @ 102d86c0  size=117 ===== */
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

undefined4 __thiscall FUN_102d86c0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_102da6c0 @ 102da6c0  size=335 ===== */
// calls: _wassert
// strings:
//   "[stParametric]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwAnimCRC]"
//   "[nSegmentCounter]"
//   "[fAnimTime]"
//   "[fTransitionWeight]"
//   "[dwFlags]"

/* WARNING: Removing unreachable block (ram,0x102da6d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stParametric]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwAnimCRC]""
     ""[nSegmentCounter]""
     ""[fAnimTime]""
     ""[fTransitionWeight]""
     ""[dwFlags]"" */

void __thiscall FUN_102da6c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102da100(param_2,iVar1,param_4);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwAnimCRC]",&DAT_11d9f574,
                               *(undefined4 *)(param_1 + 0x196)), iVar1 == 0)) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[nSegmentCounter]",&DAT_11d9e0b4,
                              (int)*(short *)(param_1 + 0x19a)), iVar1 == 0)) &&
       ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fAnimTime]",&DAT_11da0cf4,
                              (double)*(float *)(param_1 + 0x19c)), iVar1 == 0 &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fTransitionWeight]",&DAT_11da0cf4,
                              (double)*(float *)(param_1 + 0x1a0)), iVar1 == 0)))) {
      FUN_1024a290(param_2,param_3,param_4,"[dwFlags]",&DAT_11d9f574,
                   *(undefined4 *)(param_1 + 0x1a4));
    }
  }
  return;
}



/* ===== FUN_102dba20 @ 102dba20  size=300 ===== */
// calls: _wassert
// strings:
//   "[stAttackeeEntityPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[nAttackeeLayersCount]"
//   "[astAttackeeLayers]"

/* WARNING: Removing unreachable block (ram,0x102dba31) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stAttackeeEntityPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[nAttackeeLayersCount]""
     ""[astAttackeeLayers]"" */

int __thiscall FUN_102dba20(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  short sVar4;
  
  iVar2 = FUN_1024a140(param_3);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stAttackeeEntityPos]",(int)(char)param_4),
     iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_10271b90(param_2,iVar2,param_4);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nAttackeeLayersCount]",&DAT_11d9e0b4,
                             (int)*(short *)(param_1 + 0x1c)), iVar2 == 0)) {
      sVar1 = *(short *)(param_1 + 0x1c);
      if (sVar1 < 0) {
        return -6;
      }
      if (0x10 < sVar1) {
        return -7;
      }
      uVar3 = 0;
      sVar4 = 0;
      if (0 < sVar1) {
        do {
          iVar2 = FUN_1024a230(param_4,"[astAttackeeLayers]",(int)sVar4,uVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_102daca0(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          sVar4 = sVar4 + 1;
          uVar3 = extraout_ECX;
        } while (sVar4 < *(short *)(param_1 + 0x1c));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_102ddef0 @ 102ddef0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stDamageResult]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102ddf00) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stDamageResult]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_102ddef0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stDamageResult]",(int)(char)param_3), iVar1 == 0)
     ) {
    if (param_2 < 0) {
      FUN_102dcf40(param_1,param_2,param_3);
      return;
    }
    FUN_102dcf40(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_102de0d0 @ 102de0d0  size=157 ===== */
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

int __thiscall FUN_102de0d0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_102def10 @ 102def10  size=244 ===== */
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

int __thiscall FUN_102def10(char *param_1,int param_2,uint param_3)

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
          iVar4 = FUN_10277b50(param_2,param_3);
          if (iVar4 == 0) {
            iVar4 = FUN_10277ef0(param_2,param_3);
            if (iVar4 == 0) {
              iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x40));
              return iVar4;
            }
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_102df750 @ 102df750  size=210 ===== */
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

int __thiscall FUN_102df750(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
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
      if (0x10 < *(uint *)(param_1 + 1)) {
        return -7;
      }
      uVar3 = 0;
      if (*(uint *)(param_1 + 1) != 0) {
        do {
          iVar2 = FUN_102def10(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_102df990 @ 102df990  size=255 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bInitMode]"
//   "[dwEntNum]"
//   "[astEntList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102dfa19) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bInitMode]""
     ""[dwEntNum]""
     ""[astEntList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102df990(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bInitMode]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntNum]",&DAT_11d9f574,
                           *(undefined4 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x10 < *(uint *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(uint *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astEntList]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102df1d0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_102dfda0 @ 102dfda0  size=229 ===== */
// calls: _wassert
// strings:
//   "[dwEntNum]"
//   "[astEntList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[dwNetObjID]"

/* WARNING: Removing unreachable block (ram,0x102dfdfc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntNum]""
     ""[astEntList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[dwNetObjID]"" */

int __thiscall FUN_102dfda0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dwEntNum]",&DAT_11d9f574,*param_1);
  if (iVar2 == 0) {
    if (0x10 < *param_1) {
      return -7;
    }
    uVar3 = 0;
    puVar1 = param_1;
    if (*param_1 != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astEntList]",uVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1024a290(param_2,iVar2,param_4,"[dwNetObjID]",&DAT_11d9f574,puVar1[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102e1690 @ 102e1690  size=199 ===== */
// calls: _wassert
// strings:
//   "[dwAttackerNetID]"
//   "[stPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[fRadius]"

/* WARNING: Removing unreachable block (ram,0x102e16cb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwAttackerNetID]""
     ""[stPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[fRadius]"" */

void __thiscall FUN_102e1690(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwAttackerNetID]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[fRadius]",&DAT_11da0cf4,(double)(float)param_1[4]);
    }
  }
  return;
}



/* ===== FUN_102e5810 @ 102e5810  size=150 ===== */
// calls: _wassert
// strings:
//   "[stPlayerPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szTriggerName]"

/* WARNING: Removing unreachable block (ram,0x102e5820) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stPlayerPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szTriggerName]"" */

void __thiscall FUN_102e5810(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stPlayerPos]",(int)(char)param_4), iVar1 == 0)) {
    if (-1 < param_3) {
      param_3 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,param_3,param_4);
    if (iVar1 == 0) {
      FUN_1024a410(param_4,"[szTriggerName]",param_1 + 0xc);
    }
  }
  return;
}



/* ===== FUN_102e6490 @ 102e6490  size=131 ===== */
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

int __thiscall FUN_102e6490(undefined1 *param_1,int *param_2,int param_3)

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
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_102e7180 @ 102e7180  size=219 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stRot]"

/* WARNING: Removing unreachable block (ram,0x102e71bb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stRot]"" */

void __thiscall FUN_102e7180(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stPos]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRot]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_102717b0(param_2,param_3,param_4);
        return;
      }
      FUN_102717b0(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_102e7880 @ 102e7880  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102e78b7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102e7880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_10271b90(param_2,param_3,param_4);
      return;
    }
    FUN_10271b90(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102e93d0 @ 102e93d0  size=131 ===== */
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

int __thiscall FUN_102e93d0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[5]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_102e9790 @ 102e9790  size=294 ===== */
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

int __thiscall FUN_102e9790(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
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
  iVar3 = FUN_1010c0c0(param_1[1]);
  if ((((iVar3 == 0) && (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 2)), iVar3 == 0)) &&
      (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 6)), iVar3 == 0)) &&
     (iVar3 = FUN_1010c120(*(undefined2 *)(param_1 + 10)), iVar3 == 0)) {
    sVar2 = *(short *)(param_1 + 10);
    if (sVar2 < 0) {
      return -6;
    }
    if (0x40 < sVar2) {
      return -7;
    }
    sVar4 = 0;
    if (0 < sVar2) {
      do {
        iVar3 = FUN_102e93d0(param_2,param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(param_1 + 10));
    }
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_102ea1b0 @ 102ea1b0  size=855 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[stPos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stRot]"
//   "[stRot1]"
//   "[stRot2]"
//   "0x%02x"
//   "[bType]"
//   "[bExtension]"
//   "[dwState1]"
//   "[dwState2]"
//   "[dwState3]"
//   "[dwState4]"
//   "[dwAGState]"
//   "[dwSkillID]"
//   "[dwSkillLevel]"
//   "[iParam]"
//   "[fParamf]"

/* WARNING: Removing unreachable block (ram,0x102ea1ee) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[stPos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stRot]""
     ""[stRot1]""
     ""[stRot2]""
     ""0x%02x""
     ""[bType]"" */

void __thiscall FUN_102ea1b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stPos]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRot]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102717b0(param_2,iVar1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRot1]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102717b0(param_2,iVar1,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRot2]",extraout_ECX_01), iVar1 == 0))
        {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_102717b0(param_2,iVar1,param_4);
          if ((((((iVar1 == 0) &&
                 (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bType]","0x%02x",
                                       *(undefined1 *)(param_1 + 0x11)), iVar1 == 0)) &&
                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bExtension]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0x45)), iVar1 == 0)) &&
               ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwState1]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x46)), iVar1 == 0 &&
                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwState2]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x4a)), iVar1 == 0)))) &&
              ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwState3]",&DAT_11d9f574,
                                     *(undefined4 *)((int)param_1 + 0x4e)), iVar1 == 0 &&
               ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwState4]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x52)), iVar1 == 0 &&
                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwAGState]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x56)), iVar1 == 0)))))) &&
             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwSkillID]",&DAT_11d9f574,
                                    *(undefined4 *)((int)param_1 + 0x5a)), iVar1 == 0 &&
              ((((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwSkillLevel]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x5e)), iVar1 == 0 &&
                 (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iParam]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x62)), iVar1 == 0)) &&
                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fParamf]",&DAT_11da0cf4,
                                      (double)*(float *)((int)param_1 + 0x66)), iVar1 == 0)) &&
               ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fAttackRotation]",&DAT_11da0cf4,
                                      (double)*(float *)((int)param_1 + 0x6a)), iVar1 == 0 &&
                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wSp]",&DAT_11d9e0b4,
                                      *(undefined2 *)((int)param_1 + 0x6e)), iVar1 == 0)))))))) {
            FUN_1024a290(param_2,param_3,param_4,"[wSta]",&DAT_11d9e0b4,
                         *(undefined2 *)(param_1 + 0x1c));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102ea820 @ 102ea820  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stSyncInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102ea857) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stSyncInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102ea820(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stSyncInfo]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102ea1b0(param_2,param_3,param_4);
      return;
    }
    FUN_102ea1b0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102eabe0 @ 102eabe0  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stSyncInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102eac17) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stSyncInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102eabe0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stSyncInfo]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102ea1b0(param_2,param_3,param_4);
      return;
    }
    FUN_102ea1b0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102ec7a0 @ 102ec7a0  size=1132 ===== */
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

int __thiscall FUN_102ec7a0(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar5 = FUN_1010c200(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
    if ((iVar5 == 0) && (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 9)), iVar5 == 0)) {
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x10c] = 0;
        pcVar6 = param_1 + 0xd;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 0xd,pcVar6 + (1 - (int)(param_1 + 0xe)));
        if ((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
          iVar3 = param_2[1];
          iVar5 = FUN_1010bf70(extraout_ECX_00);
          if (iVar5 == 0) {
            iVar4 = param_2[1];
            param_1[0x12a] = 0;
            pcVar6 = param_1 + 0x10d;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_1010c2b0(param_1 + 0x10d,pcVar6 + (1 - (int)(param_1 + 0x10e)));
            if ((((((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) &&
                  (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 299)), iVar5 == 0)) &&
                 (((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x12f)), iVar5 == 0 &&
                   (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x133)), iVar5 == 0)) &&
                  ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x137)), iVar5 == 0 &&
                   ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x13b)), iVar5 == 0 &&
                    (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x13f)), iVar5 == 0)))))))) &&
                (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
               ((((iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0 &&
                  (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                 (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                ((((iVar5 = FUN_1010c0c0(param_1[0x173]), iVar5 == 0 &&
                   (iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0)) &&
                  ((iVar5 = FUN_102715d0(param_2,uVar7), iVar5 == 0 &&
                   ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 400)), iVar5 == 0 &&
                    (iVar5 = FUN_1010c0c0(param_1[0x194]), iVar5 == 0)))))) &&
                 ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x195)), iVar5 == 0 &&
                  (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x199)), iVar5 == 0)))))))) {
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
              if ((((((iVar5 == 0) && (iVar5 = FUN_1010c0c0(param_1[0x209]), iVar5 == 0)) &&
                    (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20a)), iVar5 == 0)) &&
                   ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20e)), iVar5 == 0 &&
                    (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x212)), iVar5 == 0)))) &&
                  ((iVar5 = FUN_1010c0c0(param_1[0x216]), iVar5 == 0 &&
                   ((iVar5 = FUN_1010c0c0(param_1[0x217]), iVar5 == 0 &&
                    (iVar5 = FUN_1010c0c0(param_1[0x218]), iVar5 == 0)))))) &&
                 ((iVar5 = FUN_1010c0c0(param_1[0x219]), iVar5 == 0 &&
                  (((iVar5 = FUN_10271230(param_2,uVar7), iVar5 == 0 &&
                    (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x226)), iVar5 == 0)) &&
                   (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x22a)), iVar5 == 0)))))) {
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



/* ===== FUN_102ee980 @ 102ee980  size=244 ===== */
// calls: _wassert
// strings:
//   "[stBaseInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iOwnerId]"
//   "[iType]"
//   "[fDuration]"

/* WARNING: Removing unreachable block (ram,0x102ee990) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stBaseInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iOwnerId]""
     ""[iType]""
     ""[fDuration]"" */

void __thiscall FUN_102ee980(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102ee200(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOwnerId]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x42eb)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,
                             *(undefined4 *)(param_1 + 0x42ef)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[fDuration]",&DAT_11da0cf4,
                   (double)*(float *)(param_1 + 0x42f3));
    }
  }
  return;
}



/* ===== FUN_102eeec0 @ 102eeec0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102eef2d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102eeec0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_102ee200(param_2,iVar1,param_4);
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



/* ===== FUN_102f1300 @ 102f1300  size=305 ===== */
// calls: _wassert
// strings:
//   "[dwMonsterID]"
//   "[stEntityPose]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwBoneCount]"
//   "[astBonePose]"

/* WARNING: Removing unreachable block (ram,0x102f133a) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwMonsterID]""
     ""[stEntityPose]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwBoneCount]""
     ""[astBonePose]"" */

int __thiscall FUN_102f1300(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stEntityPose]",(int)(char)param_4), iVar1 == 0))
  {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10271b90(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwBoneCount]",&DAT_11d9f574,param_1[8]),
       iVar1 == 0)) {
      if (100 < (uint)param_1[8]) {
        return -7;
      }
      uVar3 = 0;
      uVar2 = extraout_ECX;
      if (param_1[8] != 0) {
        do {
          iVar1 = FUN_1024a230(param_4,"[astBonePose]",uVar3,uVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_10271b90(param_2,iVar1,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          uVar2 = extraout_ECX_00;
        } while (uVar3 < (uint)param_1[8]);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_102f1840 @ 102f1840  size=305 ===== */
// calls: _wassert
// strings:
//   "[dwMonsterID]"
//   "[stEntityPose]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwPartCount]"
//   "[astPartPose]"

/* WARNING: Removing unreachable block (ram,0x102f187a) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwMonsterID]""
     ""[stEntityPose]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwPartCount]""
     ""[astPartPose]"" */

int __thiscall FUN_102f1840(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stEntityPose]",(int)(char)param_4), iVar1 == 0))
  {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10271b90(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwPartCount]",&DAT_11d9f574,param_1[8]),
       iVar1 == 0)) {
      if (0x20 < (uint)param_1[8]) {
        return -7;
      }
      uVar3 = 0;
      uVar2 = extraout_ECX;
      if (param_1[8] != 0) {
        do {
          iVar1 = FUN_1024a230(param_4,"[astPartPose]",uVar3,uVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_10271b90(param_2,iVar1,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          uVar2 = extraout_ECX_00;
        } while (uVar3 < (uint)param_1[8]);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_102f2000 @ 102f2000  size=222 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stActorRot]"

/* WARNING: Removing unreachable block (ram,0x102f203e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stActorRot]"" */

void __thiscall FUN_102f2000(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stActorRot]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_102717b0(param_2,param_3,param_4);
        return;
      }
      FUN_102717b0(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_102f2430 @ 102f2430  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stActorIdlemove]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102f2467) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stActorIdlemove]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102f2430(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stActorIdlemove]",(int)(char)param_4), iVar1 == 0
     )) {
    if (param_3 < 0) {
      FUN_102f2000(param_2,param_3,param_4);
      return;
    }
    FUN_102f2000(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102f5330 @ 102f5330  size=164 ===== */
// calls: _wassert
// strings:
//   "[iFlag]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102f5367) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iFlag]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102f5330(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFlag]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102713d0(param_2,param_3,param_4);
      return;
    }
    FUN_102713d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102f5ea0 @ 102f5ea0  size=400 ===== */
// calls: _wassert
// strings:
//   "[stInputWorldDir]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%I64i"
//   "[llSyncTime]"
//   "[stLocation]"
//   "[stRotation]"
//   "[stMoveSpeed]"
//   "[stAngleSpeed]"

/* WARNING: Removing unreachable block (ram,0x102f5eb0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stInputWorldDir]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%I64i""
     ""[llSyncTime]""
     ""[stLocation]""
     ""[stRotation]""
     ""[stMoveSpeed]""
     ""[stAngleSpeed]"" */

void __thiscall FUN_102f5ea0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stInputWorldDir]",(int)(char)param_4), iVar1 == 0
     )) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",
                              *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10)),
        iVar1 == 0)) && (iVar1 = FUN_1024a1e0(param_4,"[stLocation]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRotation]",extraout_ECX_00), iVar1 == 0)
         ) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102717b0(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a1e0(param_4,"[stMoveSpeed]",extraout_ECX_01), iVar1 == 0)) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_102713d0(param_2,iVar1,param_4);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_1024a1e0(param_4,"[stAngleSpeed]",extraout_ECX_02), iVar1 == 0)) {
            if (param_3 < 0) {
              FUN_102713d0(param_2,param_3,param_4);
              return;
            }
            FUN_102713d0(param_2,param_3 + 1,param_4);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102f68b0 @ 102f68b0  size=281 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stRotation]"
//   "[stMoveSpeed]"

/* WARNING: Removing unreachable block (ram,0x102f68ee) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stRotation]""
     ""[stMoveSpeed]"" */

void __thiscall FUN_102f68b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRotation]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102717b0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a1e0(param_4,"[stMoveSpeed]",extraout_ECX_00), iVar1 == 0)) {
        if (param_3 < 0) {
          FUN_102713d0(param_2,param_3,param_4);
          return;
        }
        FUN_102713d0(param_2,param_3 + 1,param_4);
      }
    }
  }
  return;
}



/* ===== FUN_102f6ce0 @ 102f6ce0  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stActorBeginmove]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102f6d17) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stActorBeginmove]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102f6ce0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stActorBeginmove]",(int)(char)param_4),
     iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102f68b0(param_2,param_3,param_4);
      return;
    }
    FUN_102f68b0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102f70f0 @ 102f70f0  size=303 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stRotation]"
//   "[stMoveSpeed]"
//   "[iState]"

/* WARNING: Removing unreachable block (ram,0x102f712e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stRotation]""
     ""[stMoveSpeed]""
     ""[iState]"" */

void __thiscall FUN_102f70f0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRotation]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102717b0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a1e0(param_4,"[stMoveSpeed]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if (iVar1 == 0) {
          FUN_1024a290(param_2,param_3,param_4,"[iState]",&DAT_11d9e0b4,param_1[0xc]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_102f7530 @ 102f7530  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stActorMovestate]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102f7567) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stActorMovestate]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102f7530(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stActorMovestate]",(int)(char)param_4),
     iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102f70f0(param_2,param_3,param_4);
      return;
    }
    FUN_102f70f0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102f7970 @ 102f7970  size=222 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[stLocation]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stActorRot]"

/* WARNING: Removing unreachable block (ram,0x102f79ae) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[stLocation]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stActorRot]"" */

void __thiscall FUN_102f7970(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stLocation]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stActorRot]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_102717b0(param_2,param_3,param_4);
        return;
      }
      FUN_102717b0(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_102f7da0 @ 102f7da0  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[stActorStopmove]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x102f7dd7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[stActorStopmove]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_102f7da0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stActorStopmove]",(int)(char)param_4), iVar1 == 0
     )) {
    if (param_3 < 0) {
      FUN_102f7970(param_2,param_3,param_4);
      return;
    }
    FUN_102f7970(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_102fa340 @ 102fa340  size=289 ===== */
// calls: _wassert
// strings:
//   "[dwNetObjId]"
//   "[nAmmoAmount]"
//   "[astVehicleAmmoList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102fa3df) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[nAmmoAmount]""
     ""[astVehicleAmmoList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102fa340(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nAmmoAmount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
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
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVehicleAmmoList]",(int)sVar3,(int)(char)param_4
                            );
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102f9f40(param_2,iVar2,param_4);
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



/* ===== FUN_102fd270 @ 102fd270  size=190 ===== */
// calls: _wassert
// strings:
//   "[stSSysNtf]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szSContent]"

/* WARNING: Removing unreachable block (ram,0x102fd292) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSSysNtf]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szSContent]"" */

void __thiscall
FUN_102fd270(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 1) && (param_3 == 0)) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stSSysNtf]",(int)(char)param_6), iVar1 == 0)) {
      if (-1 < param_5) {
        FUN_102d6b40(param_4,param_5 + 1,param_6);
        return;
      }
      FUN_102d6b40(param_4,param_5,param_6);
      return;
    }
  }
  else if ((param_2 == 2) && (param_3 == 0)) {
    FUN_1024a410(param_6,"[szSContent]",param_1);
  }
  return;
}



/* ===== FUN_102fd3c0 @ 102fd3c0  size=186 ===== */
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

int __thiscall FUN_102fd3c0(undefined1 *param_1,int *param_2,uint param_3)

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
      iVar2 = FUN_101150a0(param_1[5]);
      if (iVar2 == 0) {
        iVar2 = FUN_101150a0(param_1[6]);
        if (iVar2 == 0) {
          iVar2 = FUN_102fd000(*param_1,0,param_2,param_3);
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102fd810 @ 102fd810  size=233 ===== */
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

int __thiscall FUN_102fd810(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
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
    iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    if (iVar5 == 0) {
      iVar5 = FUN_101150a0(param_1[5]);
      if (iVar5 == 0) {
        iVar5 = FUN_101150a0(param_1[6]);
        if (iVar5 == 0) {
          iVar3 = param_2[1];
          iVar5 = FUN_1010bf70(extraout_ECX);
          if (iVar5 == 0) {
            iVar4 = param_2[1];
            param_1[0x806] = 0;
            pcVar6 = param_1 + 7;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_1010c2b0(param_1 + 7,pcVar6 + (1 - (int)(param_1 + 8)));
            if (iVar5 == 0) {
              iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
              return iVar5;
            }
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_102fe0a0 @ 102fe0a0  size=157 ===== */
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

int __thiscall FUN_102fe0a0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_102fe450 @ 102fe450  size=450 ===== */
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

int __thiscall FUN_102fe450(char *param_1,int param_2,int param_3)

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
            param_1[0x43] = '\0';
            pcVar7 = param_1 + 0x24;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar6 = FUN_1010c2b0(param_1 + 0x24,pcVar7 + (1 - (int)(param_1 + 0x25)));
            if (iVar6 == 0) {
              iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
              if (iVar6 == 0) {
                uVar4 = *(undefined4 *)(param_2 + 4);
                iVar6 = FUN_1010bf70(extraout_ECX_00);
                if (iVar6 == 0) {
                  iVar5 = *(int *)(param_2 + 4);
                  param_1[0xc3] = '\0';
                  pcVar7 = param_1 + 0x44;
                  do {
                    cVar1 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar1 != '\0');
                  iVar6 = FUN_1010c2b0(param_1 + 0x44,pcVar7 + (1 - (int)(param_1 + 0x45)));
                  if (iVar6 == 0) {
                    iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
                    if (iVar6 == 0) {
                      iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0xc4));
                      if (iVar6 == 0) {
                        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 200));
                        if (iVar6 == 0) {
                          iVar6 = FUN_1010c0c0(param_1[0xcc]);
                          if (iVar6 == 0) {
                            iVar6 = FUN_1010c0c0(param_1[0xcd]);
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
    }
  }
  return iVar6;
}



/* ===== FUN_10301f30 @ 10301f30  size=293 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[nCount]"
//   "[astBuff]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10301fd0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[nCount]""
     ""[astBuff]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10301f30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x40 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astBuff]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103018e0(param_2,iVar2,param_4);
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



/* ===== FUN_10302370 @ 10302370  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stBuff]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103023a7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stBuff]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10302370(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stBuff]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103018e0(param_2,param_3,param_4);
      return;
    }
    FUN_103018e0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10302df0 @ 10302df0  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stBuff]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10302e27) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stBuff]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10302df0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stBuff]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103018e0(param_2,param_3,param_4);
      return;
    }
    FUN_103018e0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103061d0 @ 103061d0  size=140 ===== */
// calls: _wassert
// strings:
//   "[stStealItem]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iItemID]"

/* WARNING: Removing unreachable block (ram,0x103061e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stStealItem]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iItemID]"" */

void __thiscall FUN_103061d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stStealItem]",(int)(char)param_4), iVar1 == 0)) {
    if (-1 < param_3) {
      param_3 = param_3 + 1;
    }
    FUN_1024a290(param_2,param_3,param_4,"[iItemID]",&DAT_11d9e0b4,*param_1);
  }
  return;
}



/* ===== FUN_103064a0 @ 103064a0  size=172 ===== */
// calls: _wassert
// strings:
//   "[wType]"
//   "[stData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103064d9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wType]""
     ""[stData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int __thiscall FUN_103064a0(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wType]",&DAT_11d9e0b4,*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1024a140(param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stData]",(int)(char)param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 < 0) {
    if (*param_1 != 0) {
      return 0;
    }
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    param_3 = param_3 + 1;
  }
  iVar1 = FUN_103061d0(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* ===== FUN_103068e0 @ 103068e0  size=293 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[nCount]"
//   "[astResult]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10306980) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[nCount]""
     ""[astResult]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103068e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (8 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astResult]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103064a0(param_2,iVar2,param_4);
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



/* ===== FUN_1030aef0 @ 1030aef0  size=157 ===== */
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

int __thiscall FUN_1030aef0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_1030b270 @ 1030b270  size=101 ===== */
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

undefined4 __thiscall FUN_1030b270(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1030b590 @ 1030b590  size=179 ===== */
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

int __thiscall FUN_1030b590(char *param_1,int param_2,int param_3)

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
    param_1[0x3ff] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c0c0(param_1[0x400]);
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1030d500 @ 1030d500  size=173 ===== */
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

int __thiscall FUN_1030d500(char *param_1,int param_2,int param_3)

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
        iVar4 = FUN_1010c0c0(param_1[0x20]);
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1030db50 @ 1030db50  size=278 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stPosition]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stRotation]"
//   "[stTargetPos]"

/* WARNING: Removing unreachable block (ram,0x1030db8b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stPosition]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stRotation]""
     ""[stTargetPos]"" */

void __thiscall FUN_1030db50(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stPosition]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRotation]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102717b0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a1e0(param_4,"[stTargetPos]",extraout_ECX_00), iVar1 == 0)) {
        if (param_3 < 0) {
          FUN_102713d0(param_2,param_3,param_4);
          return;
        }
        FUN_102713d0(param_2,param_3 + 1,param_4);
      }
    }
  }
  return;
}



/* ===== FUN_1030df80 @ 1030df80  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stVariableList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1030dfb7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stVariableList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_1030df80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stVariableList]",(int)(char)param_4), iVar1 == 0)
     ) {
    if (param_3 < 0) {
      FUN_10273da0(param_2,param_3,param_4);
      return;
    }
    FUN_10273da0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_1030e480 @ 1030e480  size=333 ===== */
// calls: _wassert
// strings:
//   "[iItemID]"
//   "[stBoxParam]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szTriggerType]"
//   "[stPosition]"
//   "[stRotation]"
//   "[dwRelativeID]"

/* WARNING: Removing unreachable block (ram,0x1030e4bb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iItemID]""
     ""[stBoxParam]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szTriggerType]""
     ""[stPosition]""
     ""[stRotation]""
     ""[dwRelativeID]"" */

void __thiscall FUN_1030e480(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iItemID]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stBoxParam]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (((iVar1 == 0) && (iVar1 = FUN_1024a410(param_4,"[szTriggerType]",param_1 + 4), iVar1 == 0))
       && (iVar1 = FUN_1024a1e0(param_4,"[stPosition]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stRotation]",extraout_ECX_00), iVar1 == 0)
         ) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102717b0(param_2,iVar1,param_4);
        if (iVar1 == 0) {
          FUN_1024a290(param_2,param_3,param_4,"[dwRelativeID]",&DAT_11d9f574,param_1[0x13]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1030fe10 @ 1030fe10  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwEntityId]"
//   "[stDiffuseColor]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1030fe47) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwEntityId]""
     ""[stDiffuseColor]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_1030fe10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stDiffuseColor]",(int)(char)param_4), iVar1 == 0)
     ) {
    if (param_3 < 0) {
      FUN_102713d0(param_2,param_3,param_4);
      return;
    }
    FUN_102713d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10310c20 @ 10310c20  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwDstPlayerId]"
//   "[stTarget]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10310c57) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwDstPlayerId]""
     ""[stTarget]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10310c20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwDstPlayerId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stTarget]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_10310850(param_2,param_3,param_4);
      return;
    }
    FUN_10310850(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10312a00 @ 10312a00  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTeam]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10312a10) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTeam]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10312a00(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTeam]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103123b0(param_1,param_2,param_3);
      return;
    }
    FUN_103123b0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10313a00 @ 10313a00  size=155 ===== */
// calls: _wassert
// strings:
//   "[stMember]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iSlot]"

/* WARNING: Removing unreachable block (ram,0x10313a10) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stMember]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iSlot]"" */

void __thiscall FUN_10313a00(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stMember]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103117b0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[iSlot]",&DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xf8));
    }
  }
  return;
}



/* ===== FUN_103163b0 @ 103163b0  size=185 ===== */
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

int __thiscall FUN_103163b0(char *param_1,int param_2,int param_3)

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
    param_1[0x27] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x28));
        if (iVar4 == 0) {
          iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2c));
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10316ea0 @ 10316ea0  size=261 ===== */
// calls: _wassert
// strings:
//   "[dwTotalTeamNum]"
//   "[dwTeamNum]"
//   "[astTeams]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10316f29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwTotalTeamNum]""
     ""[dwTeamNum]""
     ""[astTeams]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10316ea0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTotalTeamNum]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTeamNum]",&DAT_11d9f574,param_1[1]),
     iVar1 == 0)) {
    if (100 < (uint)param_1[1]) {
      return -7;
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTeams]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103123b0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10317120 @ 10317120  size=440 ===== */
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

int __thiscall FUN_10317120(char *param_1,int param_2,int param_3)

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
    param_1[0x27] = '\0';
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1010c2b0(param_1,pcVar7 + (1 - (int)(param_1 + 1)));
    if (iVar6 == 0) {
      iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar6 == 0) {
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x28));
        if (iVar6 == 0) {
          iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2a));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2e));
            if (iVar6 == 0) {
              iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x32));
              if (iVar6 == 0) {
                iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x34));
                if (iVar6 == 0) {
                  iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x36));
                  if (iVar6 == 0) {
                    iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x3a));
                    if (iVar6 == 0) {
                      uVar4 = *(undefined4 *)(param_2 + 4);
                      iVar6 = FUN_1010bf70(extraout_ECX);
                      if (iVar6 == 0) {
                        iVar5 = *(int *)(param_2 + 4);
                        param_1[0x5d] = '\0';
                        pcVar7 = param_1 + 0x3e;
                        do {
                          cVar1 = *pcVar7;
                          pcVar7 = pcVar7 + 1;
                        } while (cVar1 != '\0');
                        iVar6 = FUN_1010c2b0(param_1 + 0x3e,pcVar7 + (1 - (int)(param_1 + 0x3f)));
                        if (iVar6 == 0) {
                          iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
                          if (iVar6 == 0) {
                            iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x5e));
                            if (iVar6 == 0) {
                              iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x62));
                              if (iVar6 == 0) {
                                iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 100));
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
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_10317d30 @ 10317d30  size=537 ===== */
// calls: _wassert
// strings:
//   "[stTeamSetting]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szTeamName]"
//   "[nTargetMode]"
//   "[dwTargetMap]"
//   "[dwTargetLevelGrp]"
//   "[nDifficulty]"
//   "[wMemberMax]"
//   "[iFreeJoin]"
//   "[iOpenRecruit]"
//   "[szPwd]"
//   "[wMinLevel]"
//   "[wMaxLevel]"

/* WARNING: Removing unreachable block (ram,0x10317d40) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTeamSetting]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szTeamName]""
     ""[nTargetMode]""
     ""[dwTargetMap]""
     ""[dwTargetLevelGrp]""
     ""[nDifficulty]""
     ""[wMemberMax]""
     ""[iFreeJoin]"" */

void __thiscall FUN_10317d30(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stTeamSetting]",(int)(char)param_4), iVar1 == 0))
  {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10317570(param_2,iVar1,param_4);
    if ((((((iVar1 == 0) &&
           (iVar1 = FUN_1024a410(param_4,"[szTeamName]",param_1 + 0x66), iVar1 == 0)) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[nTargetMode]",&DAT_11d9e0b4,
                                (int)*(short *)(param_1 + 0x8e)), iVar1 == 0)) &&
         ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTargetMap]",&DAT_11d9f574,
                                *(undefined4 *)(param_1 + 0x90)), iVar1 == 0 &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTargetLevelGrp]",&DAT_11d9f574,
                                *(undefined4 *)(param_1 + 0x94)), iVar1 == 0)))) &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[nDifficulty]",&DAT_11d9e0b4,
                               (int)*(short *)(param_1 + 0x98)), iVar1 == 0 &&
         ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wMemberMax]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 0x9a)), iVar1 == 0 &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFreeJoin]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x9c)), iVar1 == 0)))))) &&
       ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOpenRecruit]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0xa0)), iVar1 == 0 &&
        ((iVar1 = FUN_1024a410(param_4,"[szPwd]",param_1 + 0xa4), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wMinLevel]",&DAT_11d9e0b4,
                               *(undefined2 *)(param_1 + 0xc4)), iVar1 == 0)))))) {
      FUN_1024a290(param_2,param_3,param_4,"[wMaxLevel]",&DAT_11d9e0b4,
                   *(undefined2 *)(param_1 + 0xc6));
    }
  }
  return;
}



/* ===== FUN_103184f0 @ 103184f0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTeamSetting]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10318500) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTeamSetting]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103184f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTeamSetting]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_10317570(param_1,param_2,param_3);
      return;
    }
    FUN_10317570(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10318bc0 @ 10318bc0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTeamSetting]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10318bd0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTeamSetting]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10318bc0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTeamSetting]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_10317570(param_1,param_2,param_3);
      return;
    }
    FUN_10317570(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10318ee0 @ 10318ee0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stTeam]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10318ef0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stTeam]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10318ee0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stTeam]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103123b0(param_1,param_2,param_3);
      return;
    }
    FUN_103123b0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10319600 @ 10319600  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwNetId]"
//   "[stAttrs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10319637) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetId]""
     ""[stAttrs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10319600(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetId]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stAttrs]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102772d0(param_2,param_3,param_4);
      return;
    }
    FUN_102772d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10319a30 @ 10319a30  size=222 ===== */
// calls: _wassert
// strings:
//   "%I64u"
//   "[ullDBID]"
//   "[stVec3]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stDir]"

/* WARNING: Removing unreachable block (ram,0x10319a6e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64u""
     ""[ullDBID]""
     ""[stVec3]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stDir]"" */

void __thiscall FUN_10319a30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullDBID]","%I64u",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stVec3]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stDir]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_102713d0(param_2,param_3,param_4);
        return;
      }
      FUN_102713d0(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_10319e30 @ 10319e30  size=164 ===== */
// calls: _wassert
// strings:
//   "[dwTeamID]"
//   "[stVec3]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10319e67) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwTeamID]""
     ""[stVec3]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10319e30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTeamID]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stVec3]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102713d0(param_2,param_3,param_4);
      return;
    }
    FUN_102713d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_1031b8b0 @ 1031b8b0  size=271 ===== */
// calls: _wassert
// strings:
//   "[dwNetId]"
//   "[iCount]"
//   "[astBuffs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1031b949) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetId]""
     ""[iCount]""
     ""[astBuffs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1031b8b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNetId]",&DAT_11d9f574,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astBuffs]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1031b4a0(param_2,iVar1,param_4);
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



/* ===== FUN_1031bd90 @ 1031bd90  size=277 ===== */
// calls: _wassert
// strings:
//   "[dwTeamId]"
//   "[iNum]"
//   "[astMember]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1031be29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwTeamId]""
     ""[iNum]""
     ""[astMember]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1031bd90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTeamId]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNum]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0))
  {
    iVar1 = param_1[1];
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMember]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1031b8b0(param_2,iVar1,param_4);
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



/* ===== FUN_1031c1e0 @ 1031c1e0  size=167 ===== */
// calls: _wassert
// strings:
//   "%I64u"
//   "[ullDBID]"
//   "[stVec3]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1031c21a) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64u""
     ""[ullDBID]""
     ""[stVec3]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_1031c1e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullDBID]","%I64u",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stVec3]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102713d0(param_2,param_3,param_4);
      return;
    }
    FUN_102713d0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_1031c640 @ 1031c640  size=225 ===== */
// calls: _wassert
// strings:
//   "[iNum]"
//   "[astTeammember]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1031c6a9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iNum]""
     ""[astTeammember]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1031c640(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNum]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTeammember]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1031c1e0(param_2,iVar1,param_4);
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



/* ===== FUN_1031d230 @ 1031d230  size=165 ===== */
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

int __thiscall FUN_1031d230(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[3]);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 4));
        if (iVar2 == 0) {
          iVar2 = FUN_1010c0c0(param_1[6]);
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1031d9c0 @ 1031d9c0  size=133 ===== */
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

int __thiscall FUN_1031d9c0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[3]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_1031e0c0 @ 1031e0c0  size=133 ===== */
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

int __thiscall FUN_1031e0c0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3));
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_1031f000 @ 1031f000  size=133 ===== */
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

int __thiscall FUN_1031f000(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3));
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_1031f6f0 @ 1031f6f0  size=165 ===== */
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

int __thiscall FUN_1031f6f0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[3]);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 4));
        if (iVar2 == 0) {
          iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 6));
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10320100 @ 10320100  size=276 ===== */
// calls: _wassert
// strings:
//   "[wReason]"
//   "[wGeneralItemCount]"
//   "[astGeneralItem]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1032018f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wReason]""
     ""[wGeneralItemCount]""
     ""[astGeneralItem]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10320100(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wGeneralItemCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    if (100 < (ushort)param_1[1]) {
      return -7;
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGeneralItem]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102741f0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ushort)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10320550 @ 10320550  size=164 ===== */
// calls: _wassert
// strings:
//   "[iPlayerId]"
//   "[stAvatar]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10320587) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iPlayerId]""
     ""[stAvatar]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10320550(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iPlayerId]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stAvatar]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_10274670(param_2,param_3,param_4);
      return;
    }
    FUN_10274670(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10320750 @ 10320750  size=117 ===== */
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

undefined4 __thiscall FUN_10320750(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10320e60 @ 10320e60  size=117 ===== */
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

undefined4 __thiscall FUN_10320e60(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10321180 @ 10321180  size=207 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x103211f7) */
/* WARNING: Removing unreachable block (ram,0x10321239) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_10321180(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if ((param_5 == 0) || (param_5 != 0)) {
      iVar2 = FUN_1010c190(*param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(*(undefined1 *)(param_1 + 1));
        uVar3 = 0;
        if (iVar2 == 0) {
          uVar1 = *(undefined2 *)((int)param_1 + 5);
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



/* ===== FUN_103215a0 @ 103215a0  size=133 ===== */
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

int __thiscall FUN_103215a0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 3));
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103218d0 @ 103218d0  size=207 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x10321947) */
/* WARNING: Removing unreachable block (ram,0x10321989) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_103218d0(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = 0;
    if ((param_5 == 0) || (param_5 != 0)) {
      iVar2 = FUN_1010c190(*param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(*(undefined1 *)(param_1 + 1));
        uVar3 = 0;
        if (iVar2 == 0) {
          uVar1 = *(undefined2 *)((int)param_1 + 5);
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



/* ===== FUN_10321cf0 @ 10321cf0  size=165 ===== */
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

int __thiscall FUN_10321cf0(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[3]);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(param_1[4]);
        if (iVar2 == 0) {
          iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5));
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10322d30 @ 10322d30  size=152 ===== */
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

int __thiscall FUN_10322d30(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c200(*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 7));
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(param_1[0xb]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10323450 @ 10323450  size=133 ===== */
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

int __thiscall FUN_10323450(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c0c0(param_1[3]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_10323ec0 @ 10323ec0  size=187 ===== */
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

int __thiscall FUN_10323ec0(byte *param_1,int *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if ((param_3 != 0) && (param_3 == 0)) {
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
      iVar1 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar2 * 6 + 1));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_1010c120(*(undefined2 *)(param_1 + (uint)bVar2 * 6 + 1 + 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_103240c0 @ 103240c0  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1032411d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103240c0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10323d00(param_2,iVar1,param_4);
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



/* ===== FUN_10324ba0 @ 10324ba0  size=291 ===== */
// calls: _wassert
// strings:
//   "[dwNCraftID]"
//   "[dwNCraftCreditCnt]"
//   "0x%02x"
//   "[bTagItemCnt]"
//   "[astTagItemData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10324c41) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNCraftID]""
     ""[dwNCraftCreditCnt]""
     ""0x%02x""
     ""[bTagItemCnt]""
     ""[astTagItemData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10324ba0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwNCraftCreditCnt]",&DAT_11d9f574,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bTagItemCnt]","0x%02x",
                           *(undefined1 *)(param_1 + 2)), iVar1 == 0)) {
    if (6 < *(byte *)(param_1 + 2)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 2) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTagItemData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10272300(param_2,iVar1,param_4);
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



/* ===== FUN_103257e0 @ 103257e0  size=258 ===== */
// calls: _wassert
// strings:
//   "[dwMEID]"
//   "[dwMEGridCount]"
//   "[astMEGridInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10325869) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwMEID]""
     ""[dwMEGridCount]""
     ""[astMEGridInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103257e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMEID]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMEGridCount]",&DAT_11d9f574,param_1[1]),
     iVar1 == 0)) {
    if (0x10 < (uint)param_1[1]) {
      return -7;
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMEGridInfo]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103253f0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10325f50 @ 10325f50  size=134 ===== */
// calls: _wassert
// strings:
//   "[stData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10325f60) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10325f50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stData]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_102b78c0(param_1,param_2,param_3);
      return;
    }
    FUN_102b78c0(param_1,param_2 + 1,param_3);
  }
  return;
}



