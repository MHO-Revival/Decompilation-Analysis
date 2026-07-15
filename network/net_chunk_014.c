/* ===== FUN_10385ff0 @ 10385ff0  size=164 ===== */
// calls: _wassert
// strings:
//   "[iSculpture]"
//   "[stAvatar]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10386027) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iSculpture]""
     ""[stAvatar]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_10385ff0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSculpture]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stAvatar]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103849c0(param_2,param_3,param_4);
      return;
    }
    FUN_103849c0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103868a0 @ 103868a0  size=101 ===== */
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

undefined4 __thiscall FUN_103868a0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10386bc0 @ 10386bc0  size=101 ===== */
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

undefined4 __thiscall FUN_10386bc0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10387280 @ 10387280  size=129 ===== */
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

int __thiscall FUN_10387280(undefined1 *param_1,int *param_2,int param_3)

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
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_10387810 @ 10387810  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAwards]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10387879) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAwards]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10387810(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAwards]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10387450(param_2,iVar1,param_4);
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



/* ===== FUN_10387d40 @ 10387d40  size=171 ===== */
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

int __thiscall FUN_10387d40(char *param_1,int param_2,int param_3)

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



/* ===== FUN_10388590 @ 10388590  size=368 ===== */
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

int __thiscall FUN_10388590(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar5 = FUN_103881b0(param_2,param_3);
    if (iVar5 == 0) {
      iVar5 = FUN_1010c200(*(undefined4 *)(param_1 + 0x205),*(undefined4 *)(param_1 + 0x209));
      if (iVar5 == 0) {
        iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20d));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x211));
          if (iVar5 == 0) {
            iVar3 = param_2[1];
            iVar5 = FUN_1010bf70(extraout_ECX);
            if (iVar5 == 0) {
              iVar4 = param_2[1];
              param_1[0x234] = 0;
              pcVar6 = param_1 + 0x215;
              do {
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              iVar5 = FUN_1010c2b0(param_1 + 0x215,pcVar6 + (1 - (int)(param_1 + 0x216)));
              if (iVar5 == 0) {
                iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
                if (iVar5 == 0) {
                  iVar5 = FUN_1010c0c0(param_1[0x235]);
                  if (iVar5 == 0) {
                    iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x236));
                    if (iVar5 == 0) {
                      iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x23a));
                      if (iVar5 == 0) {
                        iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x23e));
                        return iVar5;
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
  return iVar5;
}



/* ===== FUN_10388930 @ 10388930  size=462 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bRet]"
//   "[stFriender]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%I64u"
//   "[ullRoleDBID]"
//   "[iNetID]"
//   "[iLevel]"
//   "[szRoleName]"
//   "[bOnline]"
//   "[iFarmPoint]"
//   "[iFarmCanBGatheredCount]"
//   "[iLineId]"

/* WARNING: Removing unreachable block (ram,0x1038896d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bRet]""
     ""[stFriender]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%I64u""
     ""[ullRoleDBID]""
     ""[iNetID]""
     ""[iLevel]""
     ""[szRoleName]"" */

void __thiscall FUN_10388930(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bRet]","0x%02x",*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stFriender]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10388330(param_2,iVar1,param_4);
    if (((((iVar1 == 0) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[ullRoleDBID]","%I64u",
                                *(undefined4 *)(param_1 + 0x205),*(undefined4 *)(param_1 + 0x209)),
          iVar1 == 0)) &&
         ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x20d)), iVar1 == 0 &&
          ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x211)), iVar1 == 0 &&
           (iVar1 = FUN_1024a410(param_4,"[szRoleName]",param_1 + 0x215), iVar1 == 0)))))) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bOnline]","0x%02x",param_1[0x235]),
        iVar1 == 0)) &&
       ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFarmPoint]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x236)), iVar1 == 0 &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFarmCanBGatheredCount]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x23a)), iVar1 == 0)))) {
      FUN_1024a290(param_2,param_3,param_4,"[iLineId]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x23e));
    }
  }
  return;
}



/* ===== FUN_10389230 @ 10389230  size=157 ===== */
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

int __thiscall FUN_10389230(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103895b0 @ 103895b0  size=176 ===== */
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

int __thiscall FUN_103895b0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10389a10 @ 10389a10  size=101 ===== */
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

undefined4 __thiscall FUN_10389a10(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10389d30 @ 10389d30  size=101 ===== */
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

undefined4 __thiscall FUN_10389d30(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1038a050 @ 1038a050  size=176 ===== */
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

int __thiscall FUN_1038a050(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1038a4b0 @ 1038a4b0  size=176 ===== */
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

int __thiscall FUN_1038a4b0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1038aff0 @ 1038aff0  size=157 ===== */
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

int __thiscall FUN_1038aff0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_1038cf80 @ 1038cf80  size=243 ===== */
// calls: _wassert
// strings:
//   "[wFriendCount]"
//   "[astFrienders]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1038cfef) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wFriendCount]""
     ""[astFrienders]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1038cf80(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wFriendCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (700 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astFrienders]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10388330(param_2,iVar1,param_4);
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



/* ===== FUN_1038d3d0 @ 1038d3d0  size=230 ===== */
// calls: _wassert
// strings:
//   "[wFriendCount]"
//   "[astFriendOnlineList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1038d43c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wFriendCount]""
     ""[astFriendOnlineList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1038d3d0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wFriendCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (700 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astFriendOnlineList]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1038c5c0(param_2,iVar1,param_4);
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



/* ===== FUN_1038d800 @ 1038d800  size=185 ===== */
// calls: _wassert
// strings:
//   "[stFriendOnline]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stFriender]"

/* WARNING: Removing unreachable block (ram,0x1038d810) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stFriendOnline]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stFriender]"" */

void FUN_1038d800(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stFriendOnline]",(int)(char)param_3), iVar1 == 0)
     ) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_1038c5c0(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stFriender]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_10388330(param_1,param_2,param_3);
        return;
      }
      FUN_10388330(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_1038e750 @ 1038e750  size=101 ===== */
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

undefined4 __thiscall FUN_1038e750(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1038f1a0 @ 1038f1a0  size=243 ===== */
// calls: _wassert
// strings:
//   "[wFriendCount]"
//   "[astFrienders]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1038f20f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wFriendCount]""
     ""[astFrienders]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1038f1a0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wFriendCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (700 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astFrienders]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10388330(param_2,iVar1,param_4);
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



/* ===== FUN_1038fd80 @ 1038fd80  size=157 ===== */
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

int __thiscall FUN_1038fd80(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_10390100 @ 10390100  size=101 ===== */
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

undefined4 __thiscall FUN_10390100(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10393550 @ 10393550  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103935bd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10393550(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_10392bd0(param_2,iVar1,param_4);
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



/* ===== FUN_1039a580 @ 1039a580  size=101 ===== */
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

undefined4 __thiscall FUN_1039a580(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1039e310 @ 1039e310  size=275 ===== */
// calls: _wassert
// strings:
//   "[iNpcID]"
//   "[dwMatchCount]"
//   "[astMatchInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iLevelID]"

/* WARNING: Removing unreachable block (ram,0x1039e399) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iNpcID]""
     ""[dwMatchCount]""
     ""[astMatchInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iLevelID]"" */

int __thiscall FUN_1039e310(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iNpcID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwMatchCount]",&DAT_11d9f574,param_1[1]),
     iVar1 == 0)) {
    if (10 < (uint)param_1[1]) {
      return -7;
    }
    uVar3 = 0;
    if (param_1[1] != 0) {
      puVar2 = param_1 + 2;
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMatchInfos]",uVar3,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1024a290(param_2,iVar1,param_4,"[iLevelID]",&DAT_11d9e0b4,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1039e6e0 @ 1039e6e0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1039e6f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1039e6e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stInfo]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1039e310(param_1,param_2,param_3);
      return;
    }
    FUN_1039e310(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103a35c0 @ 103a35c0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stMatchSignUp]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103a35d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stMatchSignUp]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103a35c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stMatchSignUp]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_103a2de0(param_1,param_2,param_3);
      return;
    }
    FUN_103a2de0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103a3830 @ 103a3830  size=229 ===== */
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

int __thiscall FUN_103a3830(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar1 = FUN_1010c190(*param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_103a2960(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    uVar2 = param_1[0x57e];
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(char *)(param_2[1] + *param_2) = (char)uVar2;
      param_2[1] = param_2[1] + 1;
      iVar1 = FUN_101159e0(*(undefined1 *)((int)param_1 + 0x15f9));
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_103a3970 @ 103a3970  size=223 ===== */
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

int __thiscall FUN_103a3970(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar1 = FUN_1010c870(param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_103a2b70(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
    }
    if (param_2[2] != param_2[1]) {
      *(undefined1 *)(param_1 + 0x57e) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
      iVar1 = FUN_10115a30((int)param_1 + 0x15f9);
      return iVar1;
    }
    iVar1 = -2;
  }
  return iVar1;
}



/* ===== FUN_103a3ac0 @ 103a3ac0  size=293 ===== */
// calls: _wassert
// strings:
//   "[dwCount]"
//   "[astSignUpTeams]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "0x%02x"
//   "[chBegin]"
//   "[chFin]"

/* WARNING: Removing unreachable block (ram,0x103a3b29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwCount]""
     ""[astSignUpTeams]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""0x%02x""
     ""[chBegin]""
     ""[chFin]"" */

int __thiscall FUN_103a3ac0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCount]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSignUpTeams]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103a2de0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chBegin]","0x%02x",(int)(char)param_1[0x57e]);
    if (iVar1 == 0) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chFin]","0x%02x",
                           (int)*(char *)((int)param_1 + 0x15f9));
    }
  }
  return iVar1;
}



/* ===== FUN_103a44e0 @ 103a44e0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stMatchSignUp]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103a44f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stMatchSignUp]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103a44e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stMatchSignUp]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_103a2de0(param_1,param_2,param_3);
      return;
    }
    FUN_103a2de0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103a4910 @ 103a4910  size=213 ===== */
// calls: _wassert
// strings:
//   "[dwCount]"
//   "[astSignUpTeams]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103a496a) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwCount]""
     ""[astSignUpTeams]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103a4910(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwCount]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (0x80 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astSignUpTeams]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103a2de0(param_2,iVar1,param_4);
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



/* ===== FUN_103a8ec0 @ 103a8ec0  size=157 ===== */
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

int __thiscall FUN_103a8ec0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103a9990 @ 103a9990  size=131 ===== */
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

int __thiscall FUN_103a9990(undefined1 *param_1,int *param_2,int param_3)

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
      iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 5));
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103a9d20 @ 103a9d20  size=115 ===== */
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

undefined4 __thiscall FUN_103a9d20(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103aa390 @ 103aa390  size=510 ===== */
// calls: _wassert
// strings:
//   "[iAllScore]"
//   "[iStarScore]"
//   "0x%02x"
//   "[bStarNum]"
//   "[astStarList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bBranchNum]"
//   "[astBranchList]"

/* WARNING: Removing unreachable block (ram,0x103aa435) */
/* WARNING: Removing unreachable block (ram,0x103aa506) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iAllScore]""
     ""[iStarScore]""
     ""0x%02x""
     ""[bStarNum]""
     ""[astStarList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bBranchNum]""
     ""[astBranchList]"" */

int __thiscall FUN_103aa390(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iAllScore]",&DAT_11d9e0b4,*param_1);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iStarScore]",&DAT_11d9e0b4,param_1[1]),
      iVar2 == 0)) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bStarNum]","0x%02x",
                           *(undefined1 *)(param_1 + 2)), iVar2 == 0)) {
    if (0x14 < *(byte *)(param_1 + 2)) {
      return -7;
    }
    bVar1 = 0;
    if (*(byte *)(param_1 + 2) != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astStarList]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103a9ef0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(param_1 + 2));
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bBranchNum]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x6d));
    if (iVar2 == 0) {
      if (10 < *(byte *)((int)param_1 + 0x6d)) {
        return -7;
      }
      bVar1 = 0;
      if (*(byte *)((int)param_1 + 0x6d) != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astBranchList]",bVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_103a9b60(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)((int)param_1 + 0x6d));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_103aa6f0 @ 103aa6f0  size=155 ===== */
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

int __thiscall FUN_103aa6f0(byte *param_1,int *param_2,int param_3)

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
  if (0x14 < *param_1) {
    return -7;
  }
  bVar2 = 0;
  if (*param_1 != 0) {
    do {
      iVar1 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar2 * 4 + 1));
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_103aaf60 @ 103aaf60  size=175 ===== */
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

int __thiscall FUN_103aaf60(byte *param_1,int *param_2,uint param_3)

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
  if (param_2[2] != param_2[1]) {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    if (0x14 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_103aaad0(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    return 0;
  }
  return -1;
}



/* ===== FUN_103ab160 @ 103ab160  size=206 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bCardNum]"
//   "[astCardData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103ab1b6) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bCardNum]""
     ""[astCardData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103ab160(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bCardNum]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astCardData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103aacd0(param_2,iVar1,param_4);
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



/* ===== FUN_103ab790 @ 103ab790  size=175 ===== */
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

int __thiscall FUN_103ab790(byte *param_1,int *param_2,uint param_3)

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
  if (param_2[2] != param_2[1]) {
    *(byte *)(param_2[1] + *param_2) = bVar2;
    param_2[1] = param_2[1] + 1;
    if (100 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_103ab390(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    return 0;
  }
  return -1;
}



/* ===== FUN_103ab990 @ 103ab990  size=206 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bStatNum]"
//   "[astStatData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103ab9e6) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bStatNum]""
     ""[astStatData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103ab990(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bStatNum]","0x%02x",*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astStatData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103ab550(param_2,iVar1,param_4);
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



/* ===== FUN_103abbb0 @ 103abbb0  size=101 ===== */
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

undefined4 __thiscall FUN_103abbb0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ac480 @ 103ac480  size=101 ===== */
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

undefined4 __thiscall FUN_103ac480(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ae770 @ 103ae770  size=327 ===== */
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

int __thiscall FUN_103ae770(char *param_1,int param_2,int param_3)

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
    param_1[0x3f] = '\0';
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
          param_1[0x60] = '\0';
          pcVar7 = param_1 + 0x40;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_1010c2b0(param_1 + 0x40,pcVar7 + (1 - (int)(param_1 + 0x41)));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
            if (iVar6 == 0) {
              iVar6 = FUN_1010c200(*(undefined4 *)(param_1 + 0x61),*(undefined4 *)(param_1 + 0x65));
              if (iVar6 == 0) {
                iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x69));
                if (iVar6 == 0) {
                  iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x6d));
                  if (iVar6 == 0) {
                    iVar6 = FUN_101150a0(param_1[0x71]);
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



/* ===== FUN_103aef00 @ 103aef00  size=185 ===== */
// calls: _wassert
// strings:
//   "[stHead]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stMemo]"

/* WARNING: Removing unreachable block (ram,0x103aef10) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stHead]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stMemo]"" */

void FUN_103aef00(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stHead]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_103ae4e0(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stMemo]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_103aead0(param_1,param_2,param_3);
        return;
      }
      FUN_103aead0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_103b0370 @ 103b0370  size=152 ===== */
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

int __thiscall FUN_103b0370(undefined1 *param_1,int *param_2,uint param_3)

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
      iVar2 = FUN_103aff20(*(undefined4 *)(param_1 + 1),0,param_2,param_3);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103b0970 @ 103b0970  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAccessory]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103b09dd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAccessory]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103b0970(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x12 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAccessory]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103b0570(param_2,iVar1,param_4);
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



/* ===== FUN_103b0be0 @ 103b0be0  size=195 ===== */
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

int __thiscall FUN_103b0be0(char *param_1,int param_2,uint param_3)

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
    param_1[599] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_103b0770(param_2,param_3);
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_103b0e50 @ 103b0e50  size=163 ===== */
// calls: _wassert
// strings:
//   "[szContent]"
//   "[stAccessories]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103b0e83) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[szContent]""
     ""[stAccessories]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103b0e50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a410(param_4,"[szContent]",param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stAccessories]",(int)(char)param_4), iVar1 == 0))
  {
    if (param_3 < 0) {
      FUN_103b0970(param_2,param_3,param_4);
      return;
    }
    FUN_103b0970(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103b12b0 @ 103b12b0  size=247 ===== */
// calls: _wassert
// strings:
//   "[stHead]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stMemo]"
//   "[stBody]"

/* WARNING: Removing unreachable block (ram,0x103b12c0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stHead]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stMemo]""
     ""[stBody]"" */

void FUN_103b12b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stHead]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_103ae4e0(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stMemo]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = FUN_103aead0(param_1,iVar1,param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stBody]",extraout_ECX_00), iVar1 == 0)) {
        if (param_2 < 0) {
          FUN_103b0e50(param_1,param_2,param_3);
          return;
        }
        FUN_103b0e50(param_1,param_2 + 1,param_3);
      }
    }
  }
  return;
}



/* ===== FUN_103b1510 @ 103b1510  size=166 ===== */
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

int __thiscall FUN_103b1510(undefined1 *param_1,int *param_2,int param_3)

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
        iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0xb));
        if (iVar2 == 0) {
          iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd));
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_103b2a70 @ 103b2a70  size=157 ===== */
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

int __thiscall FUN_103b2a70(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103b2fb0 @ 103b2fb0  size=271 ===== */
// calls: _wassert
// strings:
//   "[stError]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szErrMsg]"
//   "[stNoerr]"

/* WARNING: Removing unreachable block (ram,0x103b2fcd) */
/* WARNING: Removing unreachable block (ram,0x103b304f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stError]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szErrMsg]""
     ""[stNoerr]"" */

void __thiscall
FUN_103b2fb0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if (param_2 == 0 && param_3 == 0) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stNoerr]",(int)(char)param_6), iVar1 == 0)) {
      if (param_5 < 0) {
        FUN_103b27c0(param_4,param_5,param_6);
        return;
      }
      FUN_103b27c0(param_4,param_5 + 1,param_6);
    }
  }
  else {
    iVar1 = FUN_1024a140(param_5);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stError]",(int)(char)param_6), iVar1 == 0)) &&
       (iVar1 = FUN_1024a410(param_6,"[szErrMsg]",param_1), iVar1 == 0)) {
      return;
    }
  }
  return;
}



/* ===== FUN_103b3310 @ 103b3310  size=202 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[stResults]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwUin]"

/* WARNING: Removing unreachable block (ram,0x103b334b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[stResults]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwUin]"" */

void __thiscall FUN_103b3310(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stResults]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103b2fb0(*param_1,*param_1 >> 0x1f,param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[dwUin]",&DAT_11d9f574,param_1[0x2872]);
    }
  }
  return;
}



/* ===== FUN_103b3670 @ 103b3670  size=134 ===== */
// calls: _wassert
// strings:
//   "[stMailArgs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103b3680) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stMailArgs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103b3670(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stMailArgs]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103b1e50(param_1,param_2,param_3);
      return;
    }
    FUN_103b1e50(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103b3a50 @ 103b3a50  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astMailRoleTo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103b3ab9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astMailRoleTo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103b3a50(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astMailRoleTo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103ad690(param_2,iVar1,param_4);
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



/* ===== FUN_103b3ce0 @ 103b3ce0  size=385 ===== */
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

int __thiscall FUN_103b3ce0(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
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
    if (((iVar4 == 0) &&
        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2), iVar4 == 0)) &&
       (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x80)), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 0x80);
      if (iVar4 < 0) {
        return -6;
      }
      if (iVar4 < 0x65) {
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            iVar4 = FUN_103ad430(param_2,param_3);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x80));
        }
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1088));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 0x1088);
        if (iVar4 < 0) {
          return -6;
        }
        if (iVar4 < 0x65) {
          iVar6 = 0;
          if (0 < iVar4) {
            pcVar5 = param_1 + 0x108c;
            do {
              iVar4 = FUN_1010c190(*(undefined4 *)pcVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar6 = iVar6 + 1;
              pcVar5 = pcVar5 + 4;
            } while (iVar6 < *(int *)(param_1 + 0x1088));
          }
          return 0;
        }
      }
      return -7;
    }
  }
  return iVar4;
}



/* ===== FUN_103b40b0 @ 103b40b0  size=442 ===== */
// calls: _wassert
// strings:
//   "[szErrMsg]"
//   "[iRoleCount]"
//   "[astMailRoleTo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iErrCount]"
//   "[errCode]"

/* WARNING: Removing unreachable block (ram,0x103b4150) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[szErrMsg]""
     ""[iRoleCount]""
     ""[astMailRoleTo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iErrCount]""
     ""[errCode]"" */

int __thiscall FUN_103b40b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  
  uVar1 = param_2;
  iVar2 = FUN_1024a410(param_4,"[szErrMsg]",param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iRoleCount]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0x80)), iVar2 == 0)) {
    iVar2 = *(int *)(param_1 + 0x80);
    if (iVar2 < 0) {
      return -6;
    }
    if (100 < iVar2) {
      return -7;
    }
    param_2 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(uVar1,"%s[%u]%c","[astMailRoleTo]",param_2,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103ad690(uVar1,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x80));
    }
    iVar2 = FUN_1024a290(uVar1,param_3,param_4,"[iErrCount]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x1088));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x1088);
      if (iVar2 < 0) {
        return -6;
      }
      if (100 < iVar2) {
        return -7;
      }
      iVar2 = FUN_1024a3b0(extraout_ECX,"[errCode]",iVar2,iVar2 >> 0x1f);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x1088)) {
          puVar4 = (undefined4 *)(param_1 + 0x108c);
          do {
            iVar3 = FUN_1010c010(uVar1,&DAT_11d9f710,*puVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x1088));
        }
        iVar2 = FUN_1010c060(param_4);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_103b45b0 @ 103b45b0  size=270 ===== */
// calls: _wassert
// strings:
//   "[stError]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stNoerr]"

/* WARNING: Removing unreachable block (ram,0x103b45cd) */
/* WARNING: Removing unreachable block (ram,0x103b464e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stError]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stNoerr]"" */

void FUN_103b45b0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_1 == 0 && param_2 == 0) {
    iVar1 = FUN_1024a140(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_3,&DAT_11da4eb8,"[stNoerr]",(int)(char)param_5), iVar1 == 0)) {
      if (param_4 < 0) {
        FUN_103b3a50(param_3,param_4,param_5);
        return;
      }
      FUN_103b3a50(param_3,param_4 + 1,param_5);
    }
  }
  else {
    iVar1 = FUN_1024a140(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_3,&DAT_11da4eb8,"[stError]",(int)(char)param_5), iVar1 == 0)) {
      if (-1 < param_4) {
        FUN_103b40b0(param_3,param_4 + 1,param_5);
        return;
      }
      FUN_103b40b0(param_3,param_4,param_5);
      return;
    }
  }
  return;
}



/* ===== FUN_103b49b0 @ 103b49b0  size=180 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[stMailRoleTo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szErrMsg]"

/* WARNING: Removing unreachable block (ram,0x103b49e7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[stMailRoleTo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szErrMsg]"" */

void __thiscall FUN_103b49b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stMailRoleTo]",(int)(char)param_4), iVar1 == 0))
  {
    if (-1 < param_3) {
      param_3 = param_3 + 1;
    }
    iVar1 = FUN_103ad690(param_2,param_3,param_4);
    if (iVar1 == 0) {
      FUN_1024a410(param_4,"[szErrMsg]",(int)param_1 + 0x2d);
    }
  }
  return;
}



/* ===== FUN_103b4bd0 @ 103b4bd0  size=120 ===== */
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

undefined4 __thiscall FUN_103b4bd0(undefined1 *param_1,int *param_2,int param_3)

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
    uVar2 = FUN_1010c200(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== FUN_103b5110 @ 103b5110  size=134 ===== */
// calls: _wassert
// strings:
//   "[stMailDetail]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103b5120) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stMailDetail]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103b5110(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stMailDetail]",(int)(char)param_3), iVar1 == 0))
  {
    if (param_2 < 0) {
      FUN_103b12b0(param_1,param_2,param_3);
      return;
    }
    FUN_103b12b0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103b58d0 @ 103b58d0  size=270 ===== */
// calls: _wassert
// strings:
//   "[stError]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stNoerr]"

/* WARNING: Removing unreachable block (ram,0x103b58ed) */
/* WARNING: Removing unreachable block (ram,0x103b596e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stError]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stNoerr]"" */

void FUN_103b58d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_1 == 0 && param_2 == 0) {
    iVar1 = FUN_1024a140(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_3,&DAT_11da4eb8,"[stNoerr]",(int)(char)param_5), iVar1 == 0)) {
      if (param_4 < 0) {
        FUN_103b5110(param_3,param_4,param_5);
        return;
      }
      FUN_103b5110(param_3,param_4 + 1,param_5);
    }
  }
  else {
    iVar1 = FUN_1024a140(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_3,&DAT_11da4eb8,"[stError]",(int)(char)param_5), iVar1 == 0)) {
      if (-1 < param_4) {
        FUN_103b5570(param_3,param_4 + 1,param_5);
        return;
      }
      FUN_103b5570(param_3,param_4,param_5);
      return;
    }
  }
  return;
}



/* ===== FUN_103b5c10 @ 103b5c10  size=202 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[stResults]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwUin]"

/* WARNING: Removing unreachable block (ram,0x103b5c4b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[stResults]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwUin]"" */

void __thiscall FUN_103b5c10(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stResults]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103b58d0(*param_1,*param_1 >> 0x1f,param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[dwUin]",&DAT_11d9f574,
                   *(undefined4 *)((int)param_1 + 0x94be));
    }
  }
  return;
}



/* ===== FUN_103b6a30 @ 103b6a30  size=279 ===== */
// calls: _wassert
// strings:
//   "[stError]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stNoerr]"
//   "%I64u"
//   "[ullMailId]"

/* WARNING: Removing unreachable block (ram,0x103b6a4d) */
/* WARNING: Removing unreachable block (ram,0x103b6ace) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stError]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stNoerr]""
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b6a30(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if (param_2 == 0 && param_3 == 0) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stNoerr]",(int)(char)param_6), iVar1 == 0)) {
      if (-1 < param_5) {
        param_5 = param_5 + 1;
      }
      FUN_1024a290(param_4,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
    }
  }
  else {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[stError]",(int)(char)param_6), iVar1 == 0)) {
      if (param_5 < 0) {
        FUN_103b6690(param_4,param_5,param_6);
        return;
      }
      FUN_103b6690(param_4,param_5 + 1,param_6);
      return;
    }
  }
  return;
}



/* ===== FUN_103b6da0 @ 103b6da0  size=176 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[stResults]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103b6dd7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[stResults]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103b6da0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stResults]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = *param_1;
    if (param_3 < 0) {
      FUN_103b6a30(iVar1,iVar1 >> 0x1f,param_2,param_3,param_4);
      return;
    }
    FUN_103b6a30(iVar1,iVar1 >> 0x1f,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103b7c00 @ 103b7c00  size=181 ===== */
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

int __thiscall FUN_103b7c00(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_101159e0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 2));
      if (iVar2 == 0) {
        iVar2 = FUN_103aed70(param_2,param_3);
        if (iVar2 == 0) {
          iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x90));
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_103b87c0 @ 103b87c0  size=209 ===== */
// calls: _wassert
// strings:
//   "[szSenderName]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   " 0x%02x"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x103b87d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[szSenderName]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "" 0x%02x""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103b87c0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[szSenderName]",0x20,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)(uVar2 + param_1));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x21);
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



/* ===== FUN_103b8ce0 @ 103b8ce0  size=131 ===== */
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

int __thiscall FUN_103b8ce0(undefined1 *param_1,int *param_2,int param_3)

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
    iVar2 = FUN_101150a0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 2));
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103b96c0 @ 103b96c0  size=133 ===== */
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

int __thiscall FUN_103b96c0(undefined1 *param_1,int *param_2,int param_3)

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
    iVar2 = FUN_101150a0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_101150a0(param_1[2]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103b9a50 @ 103b9a50  size=101 ===== */
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

undefined4 __thiscall FUN_103b9a50(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103babb0 @ 103babb0  size=274 ===== */
// calls: _wassert
// strings:
//   "[iResult]"
//   "[iCount]"
//   "[astResults]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103bac49) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iResult]""
     ""[iCount]""
     ""[astResults]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103babb0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]), iVar1 == 0)
     ) {
    iVar1 = param_1[1];
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astResults]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103ba7c0(param_2,iVar1,param_4);
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



/* ===== FUN_103bb400 @ 103bb400  size=101 ===== */
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

undefined4 __thiscall FUN_103bb400(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103bbc70 @ 103bbc70  size=332 ===== */
// calls: _wassert
// strings:
//   "[astPrizeInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[dwPrizeId]"
//   "[iPrizeState]"
//   "[iCount]"
//   "[iCurContribution]"
//   "[iMaxDailyContribution]"

/* WARNING: Removing unreachable block (ram,0x103bbc8b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[astPrizeInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[dwPrizeId]""
     ""[iPrizeState]""
     ""[iCount]""
     ""[iCurContribution]""
     ""[iMaxDailyContribution]"" */

void __thiscall FUN_103bbc70(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astPrizeInfo]",uVar2,(int)(char)param_4);
    if (iVar1 != 0) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + uVar2 * 8);
    if (param_3 < 0) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwPrizeId]",&DAT_11d9f574,uVar3);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 4 + uVar2 * 8);
      iVar1 = param_3;
    }
    else {
      iVar1 = FUN_1024a290(param_2,param_3 + 1,param_4,"[dwPrizeId]",&DAT_11d9f574,uVar3);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 4 + uVar2 * 8);
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_1024a290(param_2,iVar1,param_4,"[iPrizeState]",&DAT_11d9e0b4,uVar3);
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0x50));
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCurContribution]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x54)), iVar1 == 0)) {
        FUN_1024a290(param_2,param_3,param_4,"[iMaxDailyContribution]",&DAT_11d9e0b4,
                     *(undefined4 *)(param_1 + 0x58));
      }
      return;
    }
  }
  return;
}



/* ===== FUN_103bbf10 @ 103bbf10  size=101 ===== */
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

undefined4 __thiscall FUN_103bbf10(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103bc7b0 @ 103bc7b0  size=178 ===== */
// calls: _wassert
// strings:
//   "[astTargetInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iCount]"

/* WARNING: Removing unreachable block (ram,0x103bc7cc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[astTargetInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iCount]"" */

void __thiscall FUN_103bc7b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTargetInfo]",uVar2,(int)(char)param_4);
    if (iVar1 != 0) break;
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103bc400(param_2,iVar1,param_4);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
    if (99 < uVar2) {
      FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x4b0)
                  );
      return;
    }
  }
  return;
}



/* ===== FUN_103bf560 @ 103bf560  size=232 ===== */
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

int __thiscall FUN_103bf560(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  iVar2 = FUN_1010c190(*param_1);
  if (((iVar2 == 0) && (iVar2 = FUN_1010c190(param_1[1]), iVar2 == 0)) &&
     (iVar2 = FUN_1010c190(param_1[2]), iVar2 == 0)) {
    uVar4 = 0;
    puVar3 = param_1 + 3;
    do {
      iVar2 = FUN_1010c190(*puVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 4);
    uVar4 = 0;
    puVar3 = param_1 + 7;
    do {
      iVar2 = FUN_1010c190(*puVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 4);
    uVar1 = *(undefined1 *)(param_1 + 0xb);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      return 0;
    }
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_103bf6a0 @ 103bf6a0  size=233 ===== */
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

int __thiscall FUN_103bf6a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  iVar1 = FUN_1010c870(param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1010c870(param_1 + 4), iVar1 == 0)) &&
     (iVar1 = FUN_1010c870(param_1 + 8), iVar1 == 0)) {
    uVar3 = 0;
    iVar1 = param_1 + 0xc;
    do {
      iVar2 = FUN_1010c870(iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < 4);
    uVar3 = 0;
    iVar1 = param_1 + 0x1c;
    do {
      iVar2 = FUN_1010c870(iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < 4);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
    }
    if (param_2[2] != param_2[1]) {
      *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
      return 0;
    }
    iVar1 = -2;
  }
  return iVar1;
}



/* ===== FUN_103bfb20 @ 103bfb20  size=675 ===== */
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

int __thiscall FUN_103bfb20(undefined4 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar3 = param_2;
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar4 = FUN_1010c190(*param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_103bf560(param_2,param_3), iVar4 == 0)) {
    uVar6 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 0x31);
    do {
      iVar4 = FUN_1010c190(*puVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < 10);
    uVar6 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 0x59);
    do {
      iVar4 = FUN_1010c190(*puVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < 10);
    puVar5 = (undefined4 *)((int)param_1 + 0x81);
    param_2 = (int *)0x0;
    do {
      uVar2 = *puVar5;
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
      }
      if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_103bfdb7;
      param_3._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      *(undefined1 *)(piVar3[1] + *piVar3) = param_3._3_1_;
      param_3._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
      *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_3._2_1_;
      *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
      *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
      param_2 = (int *)((int)param_2 + 1);
      piVar3[1] = piVar3[1] + 4;
      puVar5 = puVar5 + 1;
    } while (param_2 < 10);
    uVar2 = *(undefined4 *)((int)param_1 + 0xa9);
    if ((uint)piVar3[2] < (uint)piVar3[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
    }
    if (3 < (uint)(piVar3[2] - piVar3[1])) {
      param_3._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      *(undefined1 *)(piVar3[1] + *piVar3) = param_3._3_1_;
      param_3._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
      *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_3._2_1_;
      *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
      *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
      piVar3[1] = piVar3[1] + 4;
      uVar2 = *(undefined4 *)((int)param_1 + 0xad);
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
      }
      if (3 < (uint)(piVar3[2] - piVar3[1])) {
        param_3._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        *(undefined1 *)(piVar3[1] + *piVar3) = param_3._3_1_;
        param_3._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
        *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_3._2_1_;
        *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
        *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
        piVar3[1] = piVar3[1] + 4;
        iVar4 = FUN_1010c190(*(undefined4 *)((int)param_1 + 0xb1));
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar1 = *(undefined1 *)((int)param_1 + 0xb5);
        if ((uint)piVar3[2] < (uint)piVar3[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
        }
        if (piVar3[2] != piVar3[1]) {
          *(undefined1 *)(piVar3[1] + *piVar3) = uVar1;
          piVar3[1] = piVar3[1] + 1;
          uVar1 = *(undefined1 *)((int)param_1 + 0xb6);
          if ((uint)piVar3[2] < (uint)piVar3[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
          }
          if (piVar3[2] != piVar3[1]) {
            *(undefined1 *)(piVar3[1] + *piVar3) = uVar1;
            piVar3[1] = piVar3[1] + 1;
            return 0;
          }
        }
      }
    }
LAB_103bfdb7:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_103bfe20 @ 103bfe20  size=392 ===== */
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

int __thiscall FUN_103bfe20(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar1 = FUN_1010c870(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_103bf6a0(param_2,param_3), iVar1 == 0)) {
    uVar3 = 0;
    iVar1 = param_1 + 0x31;
    do {
      iVar2 = FUN_1010c870(iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < 10);
    uVar3 = 0;
    iVar1 = param_1 + 0x59;
    do {
      iVar2 = FUN_1010c870(iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < 10);
    uVar3 = 0;
    iVar1 = param_1 + 0x81;
    do {
      iVar2 = FUN_1010c870(iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < 10);
    iVar1 = FUN_1010c870(param_1 + 0xa9);
    if (((iVar1 == 0) && (iVar1 = FUN_1010c870(param_1 + 0xad), iVar1 == 0)) &&
       (iVar1 = FUN_1010c870(param_1 + 0xb1), iVar1 == 0)) {
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] != param_2[1]) {
        *(undefined1 *)(param_1 + 0xb5) = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] != param_2[1]) {
          *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(param_2[1] + *param_2);
          param_2[1] = param_2[1] + 1;
          return 0;
        }
      }
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* ===== FUN_103c0020 @ 103c0020  size=618 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[stReq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[award]"
//   "[awardCount]"
//   "[awardErrCode]"
//   "[iConsumeTool]"
//   "[iGatherLeft]"
//   "[iFarmExp]"
//   "0x%02x"
//   "[bAdvResult]"
//   "[bSkipCutScene]"

/* WARNING: Removing unreachable block (ram,0x103c005a) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[stReq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[award]""
     ""[awardCount]""
     ""[awardErrCode]""
     ""[iConsumeTool]""
     ""[iGatherLeft]""
     ""[iFarmExp]"" */

void __thiscall FUN_103c0020(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stReq]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103bf800(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a3b0(extraout_ECX,"[award]",10,0), iVar1 == 0)) {
      uVar3 = 0;
      puVar2 = (undefined4 *)((int)param_1 + 0x31);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 10);
      iVar1 = FUN_1010c060(param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a3b0(extraout_ECX_00,"[awardCount]",10,0), iVar1 == 0)) {
        uVar3 = 0;
        puVar2 = (undefined4 *)((int)param_1 + 0x59);
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar1 != 0) {
            return;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < 10);
        iVar1 = FUN_1010c060(param_4);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a3b0(extraout_ECX_01,"[awardErrCode]",10,0), iVar1 == 0)) {
          uVar3 = 0;
          puVar2 = (undefined4 *)((int)param_1 + 0x81);
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
            if (iVar1 != 0) {
              return;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 < 10);
          iVar1 = FUN_1010c060(param_4);
          if ((((iVar1 == 0) &&
               (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iConsumeTool]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0xa9)), iVar1 == 0)) &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iGatherLeft]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xad)), iVar1 == 0)) &&
             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iFarmExp]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xb1)), iVar1 == 0 &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bAdvResult]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0xb5)), iVar1 == 0)))) {
            FUN_1024a290(param_2,param_3,param_4,"[bSkipCutScene]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0xb6));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103c0900 @ 103c0900  size=164 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[stReq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103c0937) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[stReq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103c0900(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stReq]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103c0590(param_2,param_3,param_4);
      return;
    }
    FUN_103c0590(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103c1060 @ 103c1060  size=164 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[stReq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103c1097) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[stReq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103c1060(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stReq]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103c0cd0(param_2,param_3,param_4);
      return;
    }
    FUN_103c0cd0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103c2940 @ 103c2940  size=243 ===== */
// calls: _wassert
// strings:
//   "[szFarm]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[dwServerTime]"

/* WARNING: Removing unreachable block (ram,0x103c2950) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[szFarm]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[dwServerTime]"" */

int __thiscall FUN_103c2940(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[szFarm]",0xfff,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)(uVar2 + param_1));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1000);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(param_2[2] - param_2[1])) {
      *(char *)(param_2[1] + *param_2) = (char)param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwServerTime]",&DAT_11d9f574,
                           *(undefined4 *)(param_1 + 0x1000));
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_103c3f70 @ 103c3f70  size=164 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[stReq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103c3fa7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[stReq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103c3f70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stReq]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103c3b70(param_2,param_3,param_4);
      return;
    }
    FUN_103c3b70(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103c54d0 @ 103c54d0  size=442 ===== */
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

int __thiscall FUN_103c54d0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
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
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x1004] = 0;
        pcVar6 = param_1 + 5;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 5,pcVar6 + (1 - (int)(param_1 + 6)));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
          if (iVar5 == 0) {
            iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1005));
            if (iVar5 == 0) {
              iVar3 = param_2[1];
              iVar5 = FUN_1010bf70(extraout_ECX_00);
              if (iVar5 == 0) {
                iVar4 = param_2[1];
                param_1[0x2008] = 0;
                pcVar6 = param_1 + 0x1009;
                do {
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                iVar5 = FUN_1010c2b0(param_1 + 0x1009,pcVar6 + (1 - (int)(param_1 + 0x100a)));
                if (iVar5 == 0) {
                  iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
                  if (iVar5 == 0) {
                    iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2009));
                    if (iVar5 == 0) {
                      iVar3 = param_2[1];
                      iVar5 = FUN_1010bf70(extraout_ECX_01);
                      if (iVar5 == 0) {
                        iVar4 = param_2[1];
                        param_1[0x300c] = 0;
                        pcVar6 = param_1 + 0x200d;
                        do {
                          cVar2 = *pcVar6;
                          pcVar6 = pcVar6 + 1;
                        } while (cVar2 != '\0');
                        iVar5 = FUN_1010c2b0(param_1 + 0x200d,pcVar6 + (1 - (int)(param_1 + 0x200e))
                                            );
                        if (iVar5 == 0) {
                          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
                          return iVar5;
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
  return iVar5;
}



/* ===== FUN_103c76e0 @ 103c76e0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astCtx]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103c7749) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astCtx]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103c76e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astCtx]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103c7320(param_2,iVar1,param_4);
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



/* ===== FUN_103c7a80 @ 103c7a80  size=134 ===== */
// calls: _wassert
// strings:
//   "[stArgs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103c7a90) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stArgs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103c7a80(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stArgs]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103c6f30(param_1,param_2,param_3);
      return;
    }
    FUN_103c6f30(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103c7c60 @ 103c7c60  size=101 ===== */
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

undefined4 __thiscall FUN_103c7c60(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103c7f80 @ 103c7f80  size=101 ===== */
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

undefined4 __thiscall FUN_103c7f80(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103c82a0 @ 103c82a0  size=101 ===== */
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

undefined4 __thiscall FUN_103c82a0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103c8de0 @ 103c8de0  size=185 ===== */
// calls: _wassert
// strings:
//   "[stArgs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stCtx]"

/* WARNING: Removing unreachable block (ram,0x103c8df0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stArgs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stCtx]"" */

void FUN_103c8de0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stArgs]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_103c6f30(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stCtx]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_103c76e0(param_1,param_2,param_3);
        return;
      }
      FUN_103c76e0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_103c9210 @ 103c9210  size=262 ===== */
// calls: _wassert
// strings:
//   "[iType]"
//   "0x%02x"
//   "[bAwardsSum]"
//   "[astAwards]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103c9292) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iType]""
     ""0x%02x""
     ""[bAwardsSum]""
     ""[astAwards]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103c9210(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bAwardsSum]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x14 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAwards]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103c6f30(param_2,iVar1,param_4);
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



/* ===== FUN_103caad0 @ 103caad0  size=101 ===== */
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

undefined4 __thiscall FUN_103caad0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103cc870 @ 103cc870  size=181 ===== */
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

int __thiscall FUN_103cc870(byte *param_1,int *param_2,int param_3)

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
  if (100 < *param_1) {
    return -7;
  }
  bVar2 = 0;
  if (*param_1 != 0) {
    do {
      iVar1 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar2 * 5 + 1));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_101150a0((param_1 + (uint)bVar2 * 5 + 1)[4]);
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_103cca70 @ 103cca70  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bActivitySum]"
//   "[astActivityList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103ccacd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bActivitySum]""
     ""[astActivityList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103cca70(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bActivitySum]","0x%02x",*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astActivityList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103cc6b0(param_2,iVar1,param_4);
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



/* ===== FUN_103ccca0 @ 103ccca0  size=157 ===== */
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

int __thiscall FUN_103ccca0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103cd210 @ 103cd210  size=269 ===== */
// calls: _wassert
// strings:
//   "[iAcitivtyId]"
//   "0x%02x"
//   "[bWinnersSum]"
//   "[astWinnersList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[szName]"

/* WARNING: Removing unreachable block (ram,0x103cd292) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iAcitivtyId]""
     ""0x%02x""
     ""[bWinnersSum]""
     ""[astWinnersList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[szName]"" */

int __thiscall
FUN_103cd210(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iAcitivtyId]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bWinnersSum]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    uVar3 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astWinnersList]",uVar3,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1024a410(param_4,"[szName]",(int)param_1 + uVar3 * 0x20 + 5);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = (char)uVar3 + 1;
        uVar3 = (uint)bVar2;
      } while (bVar2 < *(byte *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103cd470 @ 103cd470  size=174 ===== */
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

int __thiscall FUN_103cd470(char *param_1,int param_2,int param_3)

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
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x80));
        return iVar4;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_103cdaf0 @ 103cdaf0  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTokens]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103cdb5d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTokens]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103cdaf0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTokens]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103cd6e0(param_2,iVar1,param_4);
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



/* ===== FUN_103ce080 @ 103ce080  size=160 ===== */
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

int __thiscall FUN_103ce080(char *param_1,int param_2,int param_3)

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
      return iVar4;
    }
  }
  return iVar4;
}



/* ===== FUN_103ce410 @ 103ce410  size=281 ===== */
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

int __thiscall FUN_103ce410(char *param_1,int param_2,int param_3)

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
          iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x24));
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



/* ===== FUN_103ce950 @ 103ce950  size=330 ===== */
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

int __thiscall FUN_103ce950(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar9 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar9) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar2) || (*(uint *)(param_2 + 8) - uVar2 < 4)) {
    iVar5 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar2 + 4;
    param_1[0x1f] = '\0';
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,pcVar6 + (1 - (int)(param_1 + 1)));
    if (((iVar5 == 0) &&
        (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar2 + 4),uVar9), iVar5 == 0)) &&
       (iVar5 = FUN_1010c0c0(param_1[0x20]), iVar5 == 0)) {
      if (0x20 < (byte)param_1[0x20]) {
        return -7;
      }
      uVar9 = 0;
      uVar7 = extraout_ECX;
      if (param_1[0x20] != 0) {
        do {
          iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + uVar9 * 4 + 0x21));
          if (iVar5 != 0) {
            return iVar5;
          }
          bVar8 = (char)uVar9 + 1;
          uVar9 = (uint)bVar8;
          uVar7 = extraout_ECX_00;
        } while (bVar8 < (byte)param_1[0x20]);
      }
      uVar3 = *(undefined4 *)(param_2 + 4);
      iVar5 = FUN_1010bf70(uVar7);
      if (iVar5 == 0) {
        iVar4 = *(int *)(param_2 + 4);
        param_1[0xc0] = '\0';
        pcVar6 = param_1 + 0xa1;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 0xa1,pcVar6 + (1 - (int)(param_1 + 0xa2)));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar3);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_103cef50 @ 103cef50  size=330 ===== */
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

int __thiscall FUN_103cef50(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar9 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar9) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar2) || (*(uint *)(param_2 + 8) - uVar2 < 4)) {
    iVar5 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar2 + 4;
    param_1[0x1f] = '\0';
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,pcVar6 + (1 - (int)(param_1 + 1)));
    if (((iVar5 == 0) &&
        (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar2 + 4),uVar9), iVar5 == 0)) &&
       (iVar5 = FUN_1010c0c0(param_1[0x20]), iVar5 == 0)) {
      if (0x20 < (byte)param_1[0x20]) {
        return -7;
      }
      uVar9 = 0;
      uVar7 = extraout_ECX;
      if (param_1[0x20] != 0) {
        do {
          iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + uVar9 * 4 + 0x21));
          if (iVar5 != 0) {
            return iVar5;
          }
          bVar8 = (char)uVar9 + 1;
          uVar9 = (uint)bVar8;
          uVar7 = extraout_ECX_00;
        } while (bVar8 < (byte)param_1[0x20]);
      }
      uVar3 = *(undefined4 *)(param_2 + 4);
      iVar5 = FUN_1010bf70(uVar7);
      if (iVar5 == 0) {
        iVar4 = *(int *)(param_2 + 4);
        param_1[0xc0] = '\0';
        pcVar6 = param_1 + 0xa1;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 0xa1,pcVar6 + (1 - (int)(param_1 + 0xa2)));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar3);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_103cf530 @ 103cf530  size=157 ===== */
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

int __thiscall FUN_103cf530(char *param_1,int param_2,int param_3)

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



