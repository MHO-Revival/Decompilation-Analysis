/* ===== FUN_10217b40 @ 10217b40  size=550 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[starNum]"
//   "[branchNum]"
//   "[branchList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[starList]"
//   "[quality]"
//   "[finishTime]"

/* WARNING: Removing unreachable block (ram,0x10217bd6) */
/* WARNING: Removing unreachable block (ram,0x10217c82) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[starNum]""
     ""[branchNum]""
     ""[branchList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[starList]""
     ""[quality]""
     ""[finishTime]"" */

int __thiscall FUN_10217b40(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[starNum]","0x%02x",*param_1);
  if ((iVar2 != 0) ||
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[branchNum]","0x%02x",param_1[1]), iVar2 != 0))
  {
    return iVar2;
  }
  if (param_1[1] < 0xb) {
    bVar3 = 0;
    if (param_1[1] != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[branchList]",bVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102166e0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar3 = bVar3 + 1;
      } while (bVar3 < param_1[1]);
    }
    if (*param_1 < 0x15) {
      bVar3 = 0;
      if (*param_1 != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[starList]",(uint)bVar3,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          pbVar1 = param_1 + (uint)bVar3 * 9 + 0xe8;
          if (param_3 < 0) {
            iVar2 = FUN_1024a290(param_2,param_3,param_4,"[quality]","0x%02x",*pbVar1);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar4 = *(undefined4 *)(pbVar1 + 1);
            iVar2 = param_3;
          }
          else {
            iVar2 = FUN_1024a290(param_2,param_3 + 1,param_4,"[quality]","0x%02x",*pbVar1);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar4 = *(undefined4 *)(pbVar1 + 1);
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_1024a290(param_2,iVar2,param_4,"[finishTime]",&DAT_11d9f574,uVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar3 = bVar3 + 1;
        } while (bVar3 < *param_1);
      }
      return 0;
    }
  }
  return -7;
}



/* ===== FUN_10217f90 @ 10217f90  size=119 ===== */
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

int __thiscall FUN_10217f90(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
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
      iVar2 = FUN_1010c5f0(0x20);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 1));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10218010 @ 10218010  size=119 ===== */
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

int __thiscall FUN_10218010(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
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
      iVar2 = FUN_1010c5f0(0x23);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10218160 @ 10218160  size=236 ===== */
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

uint __thiscall FUN_10218160(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[5] & 1) == 0) {
          *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
          }
          uVar1 = FUN_1010ccb0(param_1 + 1);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_10218250 @ 10218250  size=236 ===== */
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

uint __thiscall FUN_10218250(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[5] & 1) == 0) {
          *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 1);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_10218990 @ 10218990  size=453 ===== */
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

int __thiscall FUN_10218990(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  int local_8;
  
  piVar1 = param_2;
  local_c = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  uVar2 = param_3 + param_2[1];
  uVar4 = param_2[1];
  local_8 = param_1;
  do {
    iVar3 = 0;
    if (uVar2 <= uVar4) {
      if (uVar2 < (uint)piVar1[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_c);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = local_c >> 4;
    if (uVar4 == 1) {
      if ((*(byte *)(param_1 + 0x5d) & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 1;
      }
      iVar3 = FUN_1010cb00(param_1);
LAB_10218b0c:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else if (uVar4 == 2) {
      if ((*(uint *)(param_1 + 0x5d) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 2;
      }
      if ((uint)piVar1[2] < (uint)piVar1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar1[2] == piVar1[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(piVar1[1] + *piVar1);
      piVar1[1] = piVar1[1] + 1;
    }
    else {
      if (uVar4 != 3) {
        iVar3 = FUN_1010d4f0();
        goto LAB_10218b0c;
      }
      if ((*(uint *)(param_1 + 0x5d) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 4;
      }
      param_2 = (int *)0x0;
      iVar3 = FUN_1010c870(&param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar3 = piVar1[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10218160(piVar1,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar3;
        uVar4 = piVar1[1];
        if (uVar6 <= uVar4 && uVar4 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar4 == uVar6) {
          *(byte *)(local_8 + 2) = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 10);
    }
    uVar4 = piVar1[1];
  } while( true );
}



/* ===== FUN_10218b60 @ 10218b60  size=453 ===== */
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

int __thiscall FUN_10218b60(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  int local_8;
  
  piVar1 = param_2;
  local_c = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  uVar2 = param_3 + param_2[1];
  uVar4 = param_2[1];
  local_8 = param_1;
  do {
    iVar3 = 0;
    if (uVar2 <= uVar4) {
      if (uVar2 < (uint)piVar1[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_c);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = local_c >> 4;
    if (uVar4 == 1) {
      if ((*(byte *)(param_1 + 0x5d) & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 1;
      }
      iVar3 = FUN_1010c800(param_1);
LAB_10218cdc:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else if (uVar4 == 2) {
      if ((*(uint *)(param_1 + 0x5d) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 2;
      }
      if ((uint)piVar1[2] < (uint)piVar1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar1[2] == piVar1[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(piVar1[1] + *piVar1);
      piVar1[1] = piVar1[1] + 1;
    }
    else {
      if (uVar4 != 3) {
        iVar3 = FUN_1010d4f0();
        goto LAB_10218cdc;
      }
      if ((*(uint *)(param_1 + 0x5d) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 4;
      }
      param_2 = (int *)0x0;
      iVar3 = FUN_1010c870(&param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar3 = piVar1[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10218250(piVar1,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar3;
        uVar4 = piVar1[1];
        if (uVar6 <= uVar4 && uVar4 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar4 == uVar6) {
          *(byte *)(local_8 + 2) = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 10);
    }
    uVar4 = piVar1[1];
  } while( true );
}



/* ===== FUN_10218e00 @ 10218e00  size=266 ===== */
// calls: _wassert
// strings:
//   "[cardId]"
//   "0x%02x"
//   "[targetNum]"
//   "[targetList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10218e8c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[cardId]""
     ""0x%02x""
     ""[targetNum]""
     ""[targetList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10218e00(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[cardId]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[targetNum]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[targetList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10218440(param_2,iVar1,param_4);
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



/* ===== FUN_10219330 @ 10219330  size=255 ===== */
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

uint __thiscall FUN_10219330(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_1021a9f0 @ 1021a9f0  size=311 ===== */
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

uint __thiscall FUN_1021a9f0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[4] & 1) == 0) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
LAB_1021aaf8:
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 4) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
          }
          if ((uint)(param_2[2] - param_2[1]) < 2) {
            return 0xfffffffe;
          }
          param_1[2] = *(undefined1 *)(*param_2 + 1 + param_2[1]);
          param_1[3] = *(undefined1 *)(*param_2 + param_2[1]);
          goto LAB_1021aaf8;
        }
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_1021b0a0 @ 1021b0a0  size=255 ===== */
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

uint __thiscall FUN_1021b0a0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_1021bf40 @ 1021bf40  size=469 ===== */
// calls: _wassert
// strings:
//   "[statNumInt]"
//   "[statListInt]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[statNum]"
//   "[statList]"

/* WARNING: Removing unreachable block (ram,0x1021bfaf) */
/* WARNING: Removing unreachable block (ram,0x1021c08f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[statNumInt]""
     ""[statListInt]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[statNum]""
     ""[statList]"" */

int __thiscall FUN_1021bf40(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[statNumInt]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    if (200 < *param_1) {
      return -7;
    }
    uVar1 = 0;
    if (*param_1 != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[statListInt]",uVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1021b2a0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_1);
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[statNum]",&DAT_11d9e0b4,param_1[0x3e9]);
    if (iVar2 == 0) {
      if (0xe74 < param_1[0x3e9]) {
        return -7;
      }
      uVar1 = 0;
      if (param_1[0x3e9] != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[statList]",uVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_1021ac30(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < param_1[0x3e9]);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1021fc80 @ 1021fc80  size=226 ===== */
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

int __thiscall FUN_1021fc80(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = param_2[1];
  uVar2 = param_2[1];
  do {
    iVar3 = 0;
    if ((uint)(param_3 + iVar1) <= uVar2) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
      }
      iVar3 = FUN_1010ca10(param_1);
LAB_1021fd2f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1021fd2f;
      }
      if ((*(uint *)(param_1 + 3) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_1021fd70 @ 1021fd70  size=296 ===== */
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

uint __thiscall FUN_1021fd70(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[3] & 1) == 0) {
          *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 3) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        param_1[2] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_102205c0 @ 102205c0  size=543 ===== */
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

int * __thiscall FUN_102205c0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  piVar1 = param_2;
  param_1[0x601] = 0;
  uVar2 = param_3 + param_2[1];
  local_8 = 0;
  uVar4 = param_2[1];
  param_2 = (int *)0;
  do {
    if (uVar2 <= uVar4) {
      if (uVar2 < (uint)piVar1[1]) {
        param_2 = (int *)0xffffffde;
      }
      return param_2;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    uVar4 = local_8 >> 4;
    if (uVar4 == 1) {
      if ((*(byte *)(param_1 + 0x601) & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 1;
      }
      param_2 = (int *)FUN_1010cbd0(param_1);
LAB_1022077c:
      if (param_2 != (int *)0x0) {
        return (int *)(int)param_2;
      }
    }
    else if (uVar4 == 2) {
      if (((uint)param_1[0x601] >> 1 & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 2;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return (int *)iVar3;
      }
      if (param_3 == 0) {
        return (int *)-0x25;
      }
      iVar3 = piVar1[1];
      iVar8 = 0;
      piVar6 = param_1 + 1;
      do {
        iVar7 = FUN_1010ca10(piVar6);
        if (iVar7 != 0) {
          return (int *)iVar7;
        }
        uVar5 = param_3 + iVar3;
        uVar4 = piVar1[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return (int *)-0x22;
        }
        param_2 = (int *)0x0;
        if (uVar4 == uVar5) {
          *param_1 = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while (iVar8 < 0x800);
    }
    else {
      if (uVar4 != 3) {
        param_2 = (int *)FUN_1010d4f0();
        goto LAB_1022077c;
      }
      if (((uint)param_1[0x601] >> 2 & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 4;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return (int *)iVar3;
      }
      if (param_3 == 0) {
        return (int *)-0x25;
      }
      iVar3 = piVar1[1];
      iVar7 = 0;
      param_2 = (int *)0x0;
      iVar8 = param_3;
      do {
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          iVar8 = param_3;
        }
        if (piVar1[2] == piVar1[1]) {
          return (int *)-2;
        }
        *(undefined1 *)(iVar7 + 0x1004 + (int)param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
        uVar5 = iVar3 + iVar8;
        piVar1[1] = piVar1[1] + 1;
        uVar4 = piVar1[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return (int *)-0x22;
        }
        if (uVar4 == uVar5) {
          *param_1 = iVar7 + 1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x800);
    }
    uVar4 = piVar1[1];
  } while( true );
}



/* ===== FUN_102207e0 @ 102207e0  size=543 ===== */
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

int * __thiscall FUN_102207e0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  piVar1 = param_2;
  param_1[0x601] = 0;
  uVar2 = param_3 + param_2[1];
  local_8 = 0;
  uVar4 = param_2[1];
  param_2 = (int *)0;
  do {
    if (uVar2 <= uVar4) {
      if (uVar2 < (uint)piVar1[1]) {
        param_2 = (int *)0xffffffde;
      }
      return param_2;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    uVar4 = local_8 >> 4;
    if (uVar4 == 1) {
      if ((*(byte *)(param_1 + 0x601) & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 1;
      }
      param_2 = (int *)FUN_1010c870(param_1);
LAB_1022099c:
      if (param_2 != (int *)0x0) {
        return (int *)(int)param_2;
      }
    }
    else if (uVar4 == 2) {
      if (((uint)param_1[0x601] >> 1 & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 2;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return (int *)iVar3;
      }
      if (param_3 == 0) {
        return (int *)-0x25;
      }
      iVar3 = piVar1[1];
      iVar8 = 0;
      piVar6 = param_1 + 1;
      do {
        iVar7 = FUN_1010c800(piVar6);
        if (iVar7 != 0) {
          return (int *)iVar7;
        }
        uVar5 = param_3 + iVar3;
        uVar4 = piVar1[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return (int *)-0x22;
        }
        param_2 = (int *)0x0;
        if (uVar4 == uVar5) {
          *param_1 = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while (iVar8 < 0x800);
    }
    else {
      if (uVar4 != 3) {
        param_2 = (int *)FUN_1010d4f0();
        goto LAB_1022099c;
      }
      if (((uint)param_1[0x601] >> 2 & 1) == 0) {
        param_1[0x601] = param_1[0x601] | 4;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return (int *)iVar3;
      }
      if (param_3 == 0) {
        return (int *)-0x25;
      }
      iVar3 = piVar1[1];
      iVar7 = 0;
      param_2 = (int *)0x0;
      iVar8 = param_3;
      do {
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          iVar8 = param_3;
        }
        if (piVar1[2] == piVar1[1]) {
          return (int *)-2;
        }
        *(undefined1 *)(iVar7 + 0x1004 + (int)param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
        uVar5 = iVar3 + iVar8;
        piVar1[1] = piVar1[1] + 1;
        uVar4 = piVar1[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return (int *)-0x22;
        }
        if (uVar4 == uVar5) {
          *param_1 = iVar7 + 1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x800);
    }
    uVar4 = piVar1[1];
  } while( true );
}



/* ===== FUN_10221010 @ 10221010  size=255 ===== */
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

uint __thiscall FUN_10221010(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_10222220 @ 10222220  size=255 ===== */
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

uint __thiscall FUN_10222220(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_10226430 @ 10226430  size=1127 ===== */
// calls: _wassert
// strings:
//   "[taskCount]"
//   "[task]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[contentCount]"
//   "[content]"
//   "[completeBitCount]"
//   "[completeBit]"
//   " 0x%02x"
//   "[daily]"
//   "[schedule]"
//   "[xDailyCount]"
//   "[xDaily]"
//   "[reset]"
//   "[trace]"
//   "[complete]"

/* WARNING: Removing unreachable block (ram,0x102264af) */
/* WARNING: Removing unreachable block (ram,0x1022658c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[taskCount]""
     ""[task]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[contentCount]""
     ""[content]""
     ""[completeBitCount]""
     ""[completeBit]""
     "" 0x%02x"" */

int __thiscall FUN_10226430(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  
  uVar1 = param_4;
  iVar3 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[taskCount]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 < 0) {
      return -6;
    }
    if (0x80 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(iVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[task]",param_3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar3;
        if (-1 < iVar3) {
          iVar2 = iVar3 + 1;
        }
        iVar2 = FUN_1021efd0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < *param_1);
    }
    iVar2 = FUN_1024a290(param_2,iVar3,param_4,"[contentCount]",&DAT_11d9e0b4,param_1[0x1e1]);
    if (iVar2 == 0) {
      iVar2 = param_1[0x1e1];
      if (iVar2 < 0) {
        return -6;
      }
      if (0x100 < iVar2) {
        return -7;
      }
      param_3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = FUN_1024a140(iVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[content]",param_3,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = iVar3;
          if (-1 < iVar3) {
            iVar2 = iVar3 + 1;
          }
          iVar2 = FUN_1021f870(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_3 = param_3 + 1;
        } while (param_3 < param_1[0x1e1]);
      }
      iVar2 = FUN_1024a290(param_2,iVar3,param_4,"[completeBitCount]",&DAT_11d9e0b4,param_1[0x422]);
      if (iVar2 == 0) {
        iVar2 = param_1[0x422];
        if (iVar2 < 0) {
          return -6;
        }
        if (0x500 < iVar2) {
          return -7;
        }
        iVar2 = FUN_1024a3b0(extraout_ECX,"[completeBit]",iVar2,iVar2 >> 0x1f);
        if (iVar2 == 0) {
          param_4 = 0;
          if (0 < param_1[0x422]) {
            do {
              iVar2 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)((int)param_1 + param_4 + 0x108c)
                                  );
              if (iVar2 != 0) {
                return iVar2;
              }
              param_4 = param_4 + 1;
            } while (param_4 < param_1[0x422]);
          }
          iVar2 = FUN_1010c060(uVar1);
          if ((iVar2 == 0) && (iVar2 = FUN_1024a1e0(uVar1,"[daily]",extraout_ECX_00), iVar2 == 0)) {
            iVar2 = iVar3;
            if (-1 < iVar3) {
              iVar2 = iVar3 + 1;
            }
            iVar2 = FUN_102239e0(param_2,iVar2,uVar1);
            if ((iVar2 == 0) &&
               (iVar2 = FUN_1024a1e0(uVar1,"[schedule]",extraout_ECX_01), iVar2 == 0)) {
              iVar2 = iVar3;
              if (-1 < iVar3) {
                iVar2 = iVar3 + 1;
              }
              iVar2 = FUN_10224030(param_2,iVar2,uVar1);
              if ((iVar2 == 0) &&
                 (iVar2 = FUN_1024a290(param_2,iVar3,uVar1,"[xDailyCount]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x1626)), iVar2 == 0)) {
                iVar2 = *(int *)((int)param_1 + 0x1626);
                if (iVar2 < 0) {
                  return -6;
                }
                if (0x20 < iVar2) {
                  return -7;
                }
                iVar4 = 0;
                param_3 = 0;
                if (0 < iVar2) {
                  do {
                    iVar2 = FUN_1024a230(uVar1,"[xDaily]",param_3,param_3);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    iVar2 = iVar3;
                    if (-1 < iVar3) {
                      iVar2 = iVar3 + 1;
                    }
                    iVar2 = FUN_10224750(param_2,iVar2,uVar1);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    iVar4 = param_3 + 1;
                    param_3 = iVar4;
                  } while (iVar4 < *(int *)((int)param_1 + 0x1626));
                }
                iVar2 = FUN_1024a1e0(uVar1,"[reset]",iVar4);
                if (iVar2 == 0) {
                  iVar2 = iVar3;
                  if (-1 < iVar3) {
                    iVar2 = iVar3 + 1;
                  }
                  iVar2 = FUN_10221ce0(param_2,iVar2,uVar1);
                  if ((iVar2 == 0) &&
                     (iVar2 = FUN_1024a1e0(uVar1,"[trace]",extraout_ECX_02), iVar2 == 0)) {
                    iVar2 = iVar3;
                    if (-1 < iVar3) {
                      iVar2 = iVar3 + 1;
                    }
                    iVar2 = FUN_10222eb0(param_2,iVar2,uVar1);
                    if ((iVar2 == 0) &&
                       (iVar2 = FUN_1024a1e0(uVar1,"[complete]",extraout_ECX_03), iVar2 == 0)) {
                      if (iVar3 < 0) {
                        iVar3 = FUN_10220ad0(param_2,iVar3,uVar1);
                        return iVar3;
                      }
                      iVar2 = FUN_10220ad0(param_2,iVar3 + 1,uVar1);
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



/* ===== FUN_102281f0 @ 102281f0  size=232 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[dailys]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1022825d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[dailys]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102281f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[dailys]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10227820(param_2,iVar1,param_4);
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



/* ===== FUN_10228510 @ 10228510  size=226 ===== */
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

void __thiscall FUN_10228510(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
  iVar4 = FUN_1010c5f0(0x15);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = FUN_1010c5f0(0x10);
    if ((((iVar5 == 0) && (iVar5 = FUN_1010c5f0(*param_1), iVar5 == 0)) &&
        (iVar5 = FUN_1010c5f0(0x20), iVar5 == 0)) &&
       (((iVar5 = FUN_1010c560(param_1[1]), iVar5 == 0 &&
         (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar1), iVar4 == 0)) &&
        (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)))) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_2 + 4);
      iVar5 = FUN_10227b90(param_2);
      if (iVar5 == 0) {
        FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar3);
      }
    }
  }
  return;
}



/* ===== FUN_10228600 @ 10228600  size=226 ===== */
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

void __thiscall FUN_10228600(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
  iVar4 = FUN_1010c5f0(0x15);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = FUN_1010c5f0(0x13);
    if ((((iVar5 == 0) && (iVar5 = FUN_1010c190(*param_1), iVar5 == 0)) &&
        (iVar5 = FUN_1010c5f0(0x23), iVar5 == 0)) &&
       (((iVar5 = FUN_1010c190(param_1[1]), iVar5 == 0 &&
         (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar1), iVar4 == 0)) &&
        (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)))) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_2 + 4);
      iVar5 = FUN_10227c80(param_2);
      if (iVar5 == 0) {
        FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar3);
      }
    }
  }
  return;
}



/* ===== FUN_10228a90 @ 10228a90  size=185 ===== */
// calls: _wassert
// strings:
//   "[schedule]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dailys]"

/* WARNING: Removing unreachable block (ram,0x10228aa0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[schedule]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dailys]"" */

void FUN_10228a90(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[schedule]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_10226e70(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[dailys]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_102281f0(param_1,param_2,param_3);
        return;
      }
      FUN_102281f0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_1022b490 @ 1022b490  size=627 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[npcAtdPkg]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[orgNum]"
//   "[npcOrgPkg]"
//   "[preferNum]"
//   "[npcPrefersPkg]"

/* WARNING: Removing unreachable block (ram,0x1022b50c) */
/* WARNING: Removing unreachable block (ram,0x1022b5e9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[npcAtdPkg]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[orgNum]""
     ""[npcOrgPkg]""
     ""[preferNum]""
     ""[npcPrefersPkg]"" */

int __thiscall FUN_1022b490(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 < 0) {
      return -6;
    }
    if (0x1e < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[npcAtdPkg]",param_3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_10229350(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < *param_1);
    }
    iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[orgNum]",&DAT_11d9e0b4,param_1[0x79]);
    if (iVar2 == 0) {
      iVar2 = *param_1;
      if (iVar2 < 0) {
        return -6;
      }
      if (0x1e < iVar2) {
        return -7;
      }
      param_3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = FUN_1024a140(iVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[npcOrgPkg]",param_3,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = iVar1;
          if (-1 < iVar1) {
            iVar2 = iVar1 + 1;
          }
          iVar2 = FUN_102299a0(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_3 = param_3 + 1;
        } while (param_3 < *param_1);
      }
      iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[preferNum]",&DAT_11d9e0b4,param_1[0xf2]);
      if (iVar2 == 0) {
        iVar2 = param_1[0xf2];
        if (iVar2 < 0) {
          return -6;
        }
        if (0x1e < iVar2) {
          return -7;
        }
        if (0 < iVar2) {
          iVar2 = 0;
          piVar4 = param_1 + 0xf3;
          do {
            iVar3 = FUN_1024a230(param_4,"[npcPrefersPkg]",iVar2,piVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = iVar1;
            if (-1 < iVar1) {
              iVar3 = iVar1 + 1;
            }
            iVar3 = FUN_1022a2c0(param_2,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar2 = iVar2 + 1;
            piVar4 = param_1;
          } while (iVar2 < param_1[0xf2]);
        }
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1022be00 @ 1022be00  size=121 ===== */
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

int __thiscall FUN_1022be00(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
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
      iVar2 = FUN_1010c5f0(0x21);
      if (iVar2 == 0) {
        iVar2 = FUN_101159e0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1022be80 @ 1022be80  size=121 ===== */
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

int __thiscall FUN_1022be80(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
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
      iVar2 = FUN_1010c5f0(0x21);
      if (iVar2 == 0) {
        iVar2 = FUN_101159e0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1022bfd0 @ 1022bfd0  size=278 ===== */
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

uint __thiscall FUN_1022bfd0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[2] & 1) == 0) {
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_1022c0b8:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 2) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_1022c0b8;
        }
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_1022c0f0 @ 1022c0f0  size=278 ===== */
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

uint __thiscall FUN_1022c0f0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[2] & 1) == 0) {
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_1022c1d8:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 2) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_1022c1d8;
        }
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_1022c580 @ 1022c580  size=287 ===== */
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

int __thiscall FUN_1022c580(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x19' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_1022be00(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_1022c6a0 @ 1022c6a0  size=287 ===== */
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

int __thiscall FUN_1022c6a0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x19' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_1022be80(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_1022c890 @ 1022c890  size=434 ===== */
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

int __thiscall FUN_1022c890(char *param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  char *local_8;
  
  piVar3 = param_2;
  local_c = 0;
  param_1[0x97] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  pcVar4 = param_3 + param_2[1];
  pcVar1 = (char *)param_2[1];
  local_8 = param_1;
  do {
    iVar5 = 0;
    if (pcVar4 <= pcVar1) {
      if (pcVar4 < (char *)piVar3[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x97] & 1U) == 0) {
        *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) | 1;
      }
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar3[2] == piVar3[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar3[1] + *piVar3);
      piVar3[1] = piVar3[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x97) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar5 = piVar3[1];
      iVar8 = 0;
      param_3 = local_8 + 1;
      do {
        local_10 = 0;
        iVar6 = FUN_1010c870(&local_10);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((local_10 != 0) && (iVar6 = FUN_1022bfd0(piVar3,local_10), iVar6 != 0)) {
          return iVar6;
        }
        uVar7 = (int)param_2 + iVar5;
        uVar2 = piVar3[1];
        if (uVar7 <= uVar2 && uVar2 != uVar7) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar2 == uVar7) {
          *local_8 = (char)iVar8 + '\x01';
          break;
        }
        param_3 = param_3 + 6;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x19);
    }
    else {
      iVar5 = FUN_1010d4f0();
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    pcVar1 = (char *)piVar3[1];
  } while( true );
}



/* ===== FUN_1022ca50 @ 1022ca50  size=434 ===== */
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

int __thiscall FUN_1022ca50(char *param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  char *local_8;
  
  piVar3 = param_2;
  local_c = 0;
  param_1[0x97] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  pcVar4 = param_3 + param_2[1];
  pcVar1 = (char *)param_2[1];
  local_8 = param_1;
  do {
    iVar5 = 0;
    if (pcVar4 <= pcVar1) {
      if (pcVar4 < (char *)piVar3[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x97] & 1U) == 0) {
        *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) | 1;
      }
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar3[2] == piVar3[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar3[1] + *piVar3);
      piVar3[1] = piVar3[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x97) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar5 = piVar3[1];
      iVar8 = 0;
      param_3 = local_8 + 1;
      do {
        local_10 = 0;
        iVar6 = FUN_1010c870(&local_10);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((local_10 != 0) && (iVar6 = FUN_1022c0f0(piVar3,local_10), iVar6 != 0)) {
          return iVar6;
        }
        uVar7 = (int)param_2 + iVar5;
        uVar2 = piVar3[1];
        if (uVar7 <= uVar2 && uVar2 != uVar7) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar2 == uVar7) {
          *local_8 = (char)iVar8 + '\x01';
          break;
        }
        param_3 = param_3 + 6;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x19);
    }
    else {
      iVar5 = FUN_1010d4f0();
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    pcVar1 = (char *)piVar3[1];
  } while( true );
}



/* ===== FUN_1022cce0 @ 1022cce0  size=228 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[count]"
//   "[pieces]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1022cd49) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[count]""
     ""[pieces]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1022cce0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]","0x%02x",(int)*param_1);
  if (iVar2 == 0) {
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x19' < cVar1) {
      return -7;
    }
    iVar2 = 0;
    if ('\0' < cVar1) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[pieces]",iVar2,(int)(char)param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_1022c310(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_1022d150 @ 1022d150  size=226 ===== */
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

int __thiscall FUN_1022d150(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = param_2[1];
  uVar2 = param_2[1];
  do {
    iVar3 = 0;
    if ((uint)(param_3 + iVar1) <= uVar2) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
      }
      iVar3 = FUN_1010ca10(param_1);
LAB_1022d1ff:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1022d1ff;
      }
      if ((*(uint *)(param_1 + 3) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_1022d240 @ 1022d240  size=296 ===== */
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

uint __thiscall FUN_1022d240(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[3] & 1) == 0) {
          *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 3) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        param_1[2] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_1022d6f0 @ 1022d6f0  size=287 ===== */
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

int __thiscall FUN_1022d6f0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\v' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_1022cfe0(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_1022d810 @ 1022d810  size=287 ===== */
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

int __thiscall FUN_1022d810(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\v' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_1022d030(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_1022da00 @ 1022da00  size=417 ===== */
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

int __thiscall FUN_1022da00(char *param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  char *local_8;
  
  piVar3 = param_2;
  local_c = 0;
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  pcVar4 = param_3 + param_2[1];
  pcVar1 = (char *)param_2[1];
  local_8 = param_1;
  do {
    iVar5 = 0;
    if (pcVar4 <= pcVar1) {
      if (pcVar4 < (char *)piVar3[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x4e] & 1U) == 0) {
        *(uint *)(param_1 + 0x4e) = *(uint *)(param_1 + 0x4e) | 1;
      }
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar3[2] == piVar3[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar3[1] + *piVar3);
      piVar3[1] = piVar3[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x4e) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x4e) = *(uint *)(param_1 + 0x4e) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar5 = piVar3[1];
      iVar8 = 0;
      param_3 = local_8 + 1;
      do {
        local_10 = 0;
        iVar6 = FUN_1010c870(&local_10);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((local_10 != 0) && (iVar6 = FUN_1022d150(piVar3,local_10), iVar6 != 0)) {
          return iVar6;
        }
        uVar7 = (int)param_2 + iVar5;
        uVar2 = piVar3[1];
        if (uVar7 <= uVar2 && uVar2 != uVar7) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar2 == uVar7) {
          *local_8 = (char)iVar8 + '\x01';
          break;
        }
        param_3 = param_3 + 7;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xb);
    }
    else {
      iVar5 = FUN_1010d4f0();
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    pcVar1 = (char *)piVar3[1];
  } while( true );
}



/* ===== FUN_1022dbb0 @ 1022dbb0  size=417 ===== */
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

int __thiscall FUN_1022dbb0(char *param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  char *local_8;
  
  piVar3 = param_2;
  local_c = 0;
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  pcVar4 = param_3 + param_2[1];
  pcVar1 = (char *)param_2[1];
  local_8 = param_1;
  do {
    iVar5 = 0;
    if (pcVar4 <= pcVar1) {
      if (pcVar4 < (char *)piVar3[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x4e] & 1U) == 0) {
        *(uint *)(param_1 + 0x4e) = *(uint *)(param_1 + 0x4e) | 1;
      }
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar3[2] == piVar3[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar3[1] + *piVar3);
      piVar3[1] = piVar3[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x4e) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x4e) = *(uint *)(param_1 + 0x4e) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar5 = piVar3[1];
      iVar8 = 0;
      param_3 = local_8 + 1;
      do {
        local_10 = 0;
        iVar6 = FUN_1010c870(&local_10);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((local_10 != 0) && (iVar6 = FUN_1022d240(piVar3,local_10), iVar6 != 0)) {
          return iVar6;
        }
        uVar7 = (int)param_2 + iVar5;
        uVar2 = piVar3[1];
        if (uVar7 <= uVar2 && uVar2 != uVar7) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar2 == uVar7) {
          *local_8 = (char)iVar8 + '\x01';
          break;
        }
        param_3 = param_3 + 7;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xb);
    }
    else {
      iVar5 = FUN_1010d4f0();
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    pcVar1 = (char *)piVar3[1];
  } while( true );
}



/* ===== FUN_1022de30 @ 1022de30  size=228 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[count]"
//   "[piecePrizes]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1022de99) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[count]""
     ""[piecePrizes]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1022de30(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]","0x%02x",(int)*param_1);
  if (iVar2 == 0) {
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\v' < cVar1) {
      return -7;
    }
    iVar2 = 0;
    if ('\0' < cVar1) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[piecePrizes]",iVar2,(int)(char)param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_1022d470(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_1022eda0 @ 1022eda0  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[dragonBoxShopItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1022ee09) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[dragonBoxShopItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1022eda0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[dragonBoxShopItems]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1022e4f0(param_2,iVar1,param_4);
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



/* ===== FUN_1022f160 @ 1022f160  size=1025 ===== */
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

int __thiscall FUN_1022f160(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(0x25);
      if (iVar3 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar6 = param_2[1];
        iVar3 = FUN_1022c580(param_2);
        if (((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
           (iVar3 = FUN_1010c5f0(0x35), iVar3 == 0)) {
          iVar2 = param_2[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar6 = param_2[1];
          iVar3 = FUN_1022cfe0(param_2);
          if (((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
             (iVar3 = FUN_1010c5f0(0x45), iVar3 == 0)) {
            iVar2 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar6 = param_2[1];
            iVar3 = FUN_1022d6f0(param_2);
            if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
                ((iVar3 = FUN_1010c5f0(0x50), iVar3 == 0 &&
                 ((((iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0xf5)), iVar3 == 0 &&
                    (iVar3 = FUN_1010c5f0(0x60), iVar3 == 0)) &&
                   (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0xf9)), iVar3 == 0)) &&
                  ((iVar3 = FUN_1010c5f0(0x70), iVar3 == 0 &&
                   (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0xfd)), iVar3 == 0)))))))) &&
               (((iVar3 = FUN_1010c5f0(0x80), iVar3 == 0 &&
                 ((iVar3 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x101)), iVar3 == 0 &&
                  (iVar3 = FUN_1010c5f0(0x90), iVar3 == 0)))) &&
                (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0x105)), iVar3 == 0)))) {
              iVar3 = *(int *)(param_1 + 0x105);
              if (iVar3 < 0) {
                return -6;
              }
              if (10 < iVar3) {
                return -7;
              }
              if (0 < iVar3) {
                iVar3 = FUN_1010c5f0(0xa5);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_2[1];
                FUN_1010bf70(extraout_ECX_02);
                iVar2 = param_2[1];
                iVar6 = 0;
                if (0 < *(int *)(param_1 + 0x105)) {
                  puVar5 = (undefined4 *)(param_1 + 0x109);
                  do {
                    iVar4 = FUN_1010c560(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar6 = iVar6 + 1;
                    puVar5 = puVar5 + 1;
                  } while (iVar6 < *(int *)(param_1 + 0x105));
                }
                iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
              }
              iVar3 = FUN_1010c5f0(0xb0);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0x131));
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = *(int *)(param_1 + 0x131);
              if (iVar3 < 0) {
                return -6;
              }
              if (10 < iVar3) {
                return -7;
              }
              if (0 < iVar3) {
                iVar3 = FUN_1010c5f0(0xc5);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_2[1];
                FUN_1010bf70(extraout_ECX_03);
                iVar2 = param_2[1];
                iVar6 = 0;
                if (0 < *(int *)(param_1 + 0x131)) {
                  puVar5 = (undefined4 *)(param_1 + 0x135);
                  do {
                    iVar4 = FUN_1010c560(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar6 = iVar6 + 1;
                    puVar5 = puVar5 + 1;
                  } while (iVar6 < *(int *)(param_1 + 0x131));
                }
                iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
              }
              iVar3 = FUN_1010c5f0(0xd5);
              if (iVar3 == 0) {
                iVar2 = param_2[1];
                FUN_1010bf70(extraout_ECX_04);
                iVar6 = param_2[1];
                iVar3 = FUN_1022e780(param_2);
                if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0))
                    && (iVar3 = FUN_1010c5f0(0xe0), iVar3 == 0)) &&
                   ((iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1dd)), iVar3 == 0 &&
                    (iVar3 = FUN_1010c5f0(0xf0), iVar3 == 0)))) {
                  iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e1));
                  return iVar3;
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



/* ===== FUN_1022f570 @ 1022f570  size=1025 ===== */
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

int __thiscall FUN_1022f570(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(0x25);
      if (iVar3 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar6 = param_2[1];
        iVar3 = FUN_1022c6a0(param_2);
        if (((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
           (iVar3 = FUN_1010c5f0(0x35), iVar3 == 0)) {
          iVar2 = param_2[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar6 = param_2[1];
          iVar3 = FUN_1022d030(param_2);
          if (((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
             (iVar3 = FUN_1010c5f0(0x45), iVar3 == 0)) {
            iVar2 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar6 = param_2[1];
            iVar3 = FUN_1022d810(param_2);
            if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0)) &&
                ((iVar3 = FUN_1010c5f0(0x53), iVar3 == 0 &&
                 ((((iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0xf5)), iVar3 == 0 &&
                    (iVar3 = FUN_1010c5f0(99), iVar3 == 0)) &&
                   (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0xf9)), iVar3 == 0)) &&
                  ((iVar3 = FUN_1010c5f0(0x73), iVar3 == 0 &&
                   (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0xfd)), iVar3 == 0)))))))) &&
               (((iVar3 = FUN_1010c5f0(0x83), iVar3 == 0 &&
                 ((iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x101)), iVar3 == 0 &&
                  (iVar3 = FUN_1010c5f0(0x93), iVar3 == 0)))) &&
                (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x105)), iVar3 == 0)))) {
              iVar3 = *(int *)(param_1 + 0x105);
              if (iVar3 < 0) {
                return -6;
              }
              if (10 < iVar3) {
                return -7;
              }
              if (0 < iVar3) {
                iVar3 = FUN_1010c5f0(0xa5);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_2[1];
                FUN_1010bf70(extraout_ECX_02);
                iVar2 = param_2[1];
                iVar6 = 0;
                if (0 < *(int *)(param_1 + 0x105)) {
                  puVar5 = (undefined4 *)(param_1 + 0x109);
                  do {
                    iVar4 = FUN_1010c190(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar6 = iVar6 + 1;
                    puVar5 = puVar5 + 1;
                  } while (iVar6 < *(int *)(param_1 + 0x105));
                }
                iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
              }
              iVar3 = FUN_1010c5f0(0xb3);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x131));
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = *(int *)(param_1 + 0x131);
              if (iVar3 < 0) {
                return -6;
              }
              if (10 < iVar3) {
                return -7;
              }
              if (0 < iVar3) {
                iVar3 = FUN_1010c5f0(0xc5);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_2[1];
                FUN_1010bf70(extraout_ECX_03);
                iVar2 = param_2[1];
                iVar6 = 0;
                if (0 < *(int *)(param_1 + 0x131)) {
                  puVar5 = (undefined4 *)(param_1 + 0x135);
                  do {
                    iVar4 = FUN_1010c190(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar6 = iVar6 + 1;
                    puVar5 = puVar5 + 1;
                  } while (iVar6 < *(int *)(param_1 + 0x131));
                }
                iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
              }
              iVar3 = FUN_1010c5f0(0xd5);
              if (iVar3 == 0) {
                iVar2 = param_2[1];
                FUN_1010bf70(extraout_ECX_04);
                iVar6 = param_2[1];
                iVar3 = FUN_1022e860(param_2);
                if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(param_2[1] - iVar6,iVar2), iVar3 == 0))
                    && (iVar3 = FUN_1010c5f0(0xe3), iVar3 == 0)) &&
                   ((iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1dd)), iVar3 == 0 &&
                    (iVar3 = FUN_1010c5f0(0xf3), iVar3 == 0)))) {
                  iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e1));
                  return iVar3;
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



/* ===== FUN_102304e0 @ 102304e0  size=922 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[hitCount]"
//   "[pieces]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[ultimatePrize]"
//   "[piecePrizes]"
//   "[blackFaceCount]"
//   "[iFHasSSR]"
//   "[dragonShopID]"
//   "[dragonShopEndTime]"
//   "[freshNumBitCount]"
//   "[freshNumBit]"
//   "[freshNumTenCount]"
//   "[freshNumTen]"
//   "[dragonBoxShopItems]"
//   "[freshNumCnt]"
//   "[fetchState]"

/* WARNING: Removing unreachable block (ram,0x10230518) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[hitCount]""
     ""[pieces]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[ultimatePrize]""
     ""[piecePrizes]""
     ""[blackFaceCount]""
     ""[iFHasSSR]""
     ""[dragonShopID]"" */

int __thiscall FUN_102304e0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char *pcVar3;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  
  iVar1 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[hitCount]","0x%02x",(int)*param_1);
  if (((iVar2 == 0) && (iVar2 = FUN_1024a140(param_3), iVar2 == 0)) &&
     (iVar2 = FUN_1010c010(param_2,&DAT_11da4eb8,"[pieces]",(int)(char)param_4), iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_1022cce0(param_2,iVar2,param_4);
    if ((iVar2 == 0) && (iVar2 = FUN_1024a1e0(param_4,"[ultimatePrize]",extraout_ECX), iVar2 == 0))
    {
      iVar2 = param_3;
      if (-1 < param_3) {
        iVar2 = param_3 + 1;
      }
      iVar2 = FUN_1022d470(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_1024a1e0(param_4,"[piecePrizes]",extraout_ECX_00), iVar2 == 0)) {
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1022de30(param_2,iVar2,param_4);
        if (((((iVar2 == 0) &&
              (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[blackFaceCount]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0xf5)), iVar2 == 0)) &&
             (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iFHasSSR]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xf9)), iVar2 == 0)) &&
            ((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dragonShopID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xfd)), iVar2 == 0 &&
             (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[dragonShopEndTime]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 0x101)), iVar2 == 0)))) &&
           (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[freshNumBitCount]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x105)), iVar2 == 0)) {
          iVar2 = *(int *)(param_1 + 0x105);
          if (iVar2 < 0) {
            return -6;
          }
          if (10 < iVar2) {
            return -7;
          }
          iVar2 = FUN_1024a3b0(extraout_ECX_01,"[freshNumBit]",iVar2,iVar2 >> 0x1f);
          if (iVar2 == 0) {
            if (0 < *(int *)(param_1 + 0x105)) {
              pcVar3 = param_1 + 0x109;
              param_3 = 0;
              do {
                iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)pcVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_3 = param_3 + 1;
                pcVar3 = pcVar3 + 4;
              } while (param_3 < *(int *)(param_1 + 0x105));
            }
            iVar2 = FUN_1010c060(param_4);
            if ((iVar2 == 0) &&
               (iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[freshNumTenCount]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x131)), iVar2 == 0)) {
              iVar2 = *(int *)(param_1 + 0x131);
              if (iVar2 < 0) {
                return -6;
              }
              if (10 < iVar2) {
                return -7;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_02,"[freshNumTen]",iVar2,iVar2 >> 0x1f);
              if (iVar2 == 0) {
                if (0 < *(int *)(param_1 + 0x131)) {
                  pcVar3 = param_1 + 0x135;
                  param_3 = 0;
                  do {
                    iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)pcVar3);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    param_3 = param_3 + 1;
                    pcVar3 = pcVar3 + 4;
                  } while (param_3 < *(int *)(param_1 + 0x131));
                }
                iVar2 = FUN_1010c060(param_4);
                if ((iVar2 == 0) &&
                   (iVar2 = FUN_1024a1e0(param_4,"[dragonBoxShopItems]",extraout_ECX_03), iVar2 == 0
                   )) {
                  iVar2 = iVar1;
                  if (-1 < iVar1) {
                    iVar2 = iVar1 + 1;
                  }
                  iVar2 = FUN_1022eda0(param_2,iVar2,param_4);
                  if ((iVar2 == 0) &&
                     (iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[freshNumCnt]",&DAT_11d9e0b4,
                                           *(undefined4 *)(param_1 + 0x1dd)), iVar2 == 0)) {
                    iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[fetchState]",&DAT_11d9e0b4,
                                         *(undefined4 *)(param_1 + 0x1e1));
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



/* ===== FUN_102315f0 @ 102315f0  size=296 ===== */
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

int __thiscall FUN_102315f0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x05' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_10230ad0(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_10231720 @ 10231720  size=296 ===== */
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

int __thiscall FUN_10231720(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(char *)(param_2[1] + *param_2) = cVar1;
    iVar4 = 0;
    param_2[1] = param_2[1] + 1;
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x05' < cVar1) {
      return -7;
    }
    if (('\0' < cVar1) && (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      iVar4 = param_2[1];
      FUN_1010bf70(extraout_ECX);
      iVar2 = param_2[1];
      iVar8 = 0;
      uVar7 = extraout_ECX_00;
      if ('\0' < *param_1) {
        do {
          iVar6 = param_2[1];
          FUN_1010bf70(uVar7);
          iVar3 = param_2[1];
          iVar5 = FUN_10230bf0(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar8 = iVar8 + 1;
          uVar7 = extraout_ECX_01;
        } while (iVar8 < *param_1);
      }
      iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
    }
  }
  return iVar4;
}



/* ===== FUN_10231920 @ 10231920  size=457 ===== */
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

int __thiscall FUN_10231920(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_20;
  char *pcStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  param_1[0xa15] = '\0';
  param_1[0xa16] = '\0';
  param_1[0xa17] = '\0';
  param_1[0xa18] = '\0';
  local_c = param_3 + param_2[1];
  if ((uint)param_2[1] < local_c) {
    do {
      iVar2 = FUN_1010ccb0(&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_18 >> 4 == 1) {
        if ((param_1[0xa15] & 1U) == 0) {
          *(uint *)(param_1 + 0xa15) = *(uint *)(param_1 + 0xa15) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        *param_1 = *(char *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else if (local_18 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0xa15) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0xa15) = *(uint *)(param_1 + 0xa15) | 2;
        }
        iStack_20 = 0;
        iVar2 = FUN_1010c870(&iStack_20);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (iStack_20 == 0) {
          return -0x25;
        }
        iStack_10 = param_2[1];
        iVar2 = 0;
        pcStack_1c = param_1 + 1;
        do {
          iStack_14 = 0;
          iVar3 = FUN_1010c870(&iStack_14);
          if (iVar3 != 0) {
            return iVar3;
          }
          if ((iStack_14 != 0) && (iVar3 = FUN_10230de0(param_2,iStack_14), iVar3 != 0)) {
            return iVar3;
          }
          uVar4 = iStack_20 + iStack_10;
          uVar1 = param_2[1];
          if (uVar4 <= uVar1 && uVar1 != uVar4) {
            return -0x22;
          }
          if (uVar1 == uVar4) {
            *param_1 = (char)iVar2 + '\x01';
            break;
          }
          pcStack_1c = pcStack_1c + 0x204;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 5);
      }
      else {
        iVar2 = FUN_1010d4f0();
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    } while ((uint)param_2[1] < local_c);
  }
  iVar2 = 0;
  if (local_c < (uint)param_2[1]) {
    iVar2 = -0x22;
  }
  return iVar2;
}



/* ===== FUN_10231af0 @ 10231af0  size=457 ===== */
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

int __thiscall FUN_10231af0(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_20;
  char *pcStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  param_1[0xa15] = '\0';
  param_1[0xa16] = '\0';
  param_1[0xa17] = '\0';
  param_1[0xa18] = '\0';
  local_c = param_3 + param_2[1];
  if ((uint)param_2[1] < local_c) {
    do {
      iVar2 = FUN_1010ccb0(&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_18 >> 4 == 1) {
        if ((param_1[0xa15] & 1U) == 0) {
          *(uint *)(param_1 + 0xa15) = *(uint *)(param_1 + 0xa15) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        *param_1 = *(char *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else if (local_18 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0xa15) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0xa15) = *(uint *)(param_1 + 0xa15) | 2;
        }
        iStack_20 = 0;
        iVar2 = FUN_1010c870(&iStack_20);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (iStack_20 == 0) {
          return -0x25;
        }
        iStack_10 = param_2[1];
        iVar2 = 0;
        pcStack_1c = param_1 + 1;
        do {
          iStack_14 = 0;
          iVar3 = FUN_1010c870(&iStack_14);
          if (iVar3 != 0) {
            return iVar3;
          }
          if ((iStack_14 != 0) && (iVar3 = FUN_10230fc0(param_2,iStack_14), iVar3 != 0)) {
            return iVar3;
          }
          uVar4 = iStack_20 + iStack_10;
          uVar1 = param_2[1];
          if (uVar4 <= uVar1 && uVar1 != uVar4) {
            return -0x22;
          }
          if (uVar1 == uVar4) {
            *param_1 = (char)iVar2 + '\x01';
            break;
          }
          pcStack_1c = pcStack_1c + 0x204;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 5);
      }
      else {
        iVar2 = FUN_1010d4f0();
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    } while ((uint)param_2[1] < local_c);
  }
  iVar2 = 0;
  if (local_c < (uint)param_2[1]) {
    iVar2 = -0x22;
  }
  return iVar2;
}



/* ===== FUN_10231d90 @ 10231d90  size=234 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[count]"
//   "[boxes]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10231dfc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[count]""
     ""[boxes]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10231d90(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]","0x%02x",(int)*param_1);
  if (iVar2 == 0) {
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x05' < cVar1) {
      return -7;
    }
    iVar2 = 0;
    if ('\0' < cVar1) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[boxes]",iVar2,(int)(char)param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_10231270(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102358f0 @ 102358f0  size=227 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[friendInsts]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1023595b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[friendInsts]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102358f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (2000 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[friendInsts]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10234f20(param_2,iVar1,param_4);
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



/* ===== FUN_102379a0 @ 102379a0  size=243 ===== */
// calls: _wassert
// strings:
//   "[recordCount]"
//   "[records]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10237a0f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[recordCount]""
     ""[records]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102379a0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[recordCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (300 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[records]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10236e10(param_2,iVar1,param_4);
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



/* ===== FUN_1023a060 @ 1023a060  size=715 ===== */
// calls: _wassert
// strings:
//   "[saleCount]"
//   "[sales]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[recordSaleCount]"
//   "[recordSale]"
//   "[recordBuyCount]"
//   "[recordBuy]"

/* WARNING: Removing unreachable block (ram,0x1023a1b2) */
/* WARNING: Removing unreachable block (ram,0x1023a0cf) */
/* WARNING: Removing unreachable block (ram,0x1023a29f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[saleCount]""
     ""[sales]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[recordSaleCount]""
     ""[recordSale]""
     ""[recordBuyCount]""
     ""[recordBuy]"" */

int __thiscall FUN_1023a060(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_1024a290(param_2,param_3,param_4,"[saleCount]",&DAT_11d9e0b4,*param_1);
  if (iVar3 == 0) {
    if (100 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    cVar1 = (char)param_4;
    if (*param_1 != 0) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[sales]",uVar2,(int)cVar1);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_10238ce0(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    iVar3 = FUN_1024a290(param_2,param_3,param_4,"[recordSaleCount]",&DAT_11d9e0b4,param_1[0x1771]);
    if (iVar3 == 0) {
      if (400 < param_1[0x1771]) {
        return -7;
      }
      uVar2 = 0;
      if (param_1[0x1771] != 0) {
        do {
          iVar3 = FUN_1024a140(param_3);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[recordSale]",uVar2,(int)cVar1);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_10238ce0(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_1[0x1771]);
      }
      iVar3 = FUN_1024a290(param_2,param_3,param_4,"[recordBuyCount]",&DAT_11d9e0b4,param_1[0x7532])
      ;
      if (iVar3 == 0) {
        if (400 < param_1[0x7532]) {
          return -7;
        }
        uVar2 = 0;
        if (param_1[0x7532] != 0) {
          do {
            iVar3 = FUN_1024a140(param_3);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[recordBuy]",uVar2,(int)cVar1);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_3;
            if (-1 < param_3) {
              iVar3 = param_3 + 1;
            }
            iVar3 = FUN_10238ce0(param_2,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < param_1[0x7532]);
        }
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1023ac70 @ 1023ac70  size=238 ===== */
// calls: _wassert
// strings:
//   "[recordCount]"
//   "[records]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1023acdc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[recordCount]""
     ""[records]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1023ac70(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[recordCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (400 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[records]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10238ce0(param_2,iVar1,param_4);
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



/* ===== FUN_1023bcc0 @ 1023bcc0  size=272 ===== */
// calls: _wassert
// strings:
//   "[rate]"
//   "[historyCount]"
//   "[history]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1023bd4c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[rate]""
     ""[historyCount]""
     ""[history]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1023bcc0(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[rate]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[historyCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    if (10 < (ushort)param_1[1]) {
      return -7;
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[history]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1023b350(param_2,iVar1,param_4);
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



/* ===== FUN_1023cc50 @ 1023cc50  size=4338 ===== */
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

void FUN_1023cc50(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 extraout_ECX_51;
  
  iVar4 = FUN_1010c5f0(0x45);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = FUN_101b01d0(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_101b01d0(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x75), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_101b01d0(param_1);
        if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)
            ) && (iVar4 = FUN_1010c5f0(0x85), iVar4 == 0)) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_101b01d0(param_1);
          if (((iVar5 == 0) &&
              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
             (iVar4 = FUN_1010c5f0(0x95), iVar4 == 0)) {
            uVar3 = *(undefined4 *)(param_1 + 4);
            FUN_1010bf70(extraout_ECX_02);
            iVar4 = *(int *)(param_1 + 4);
            iVar5 = FUN_101b01d0(param_1);
            if (((iVar5 == 0) &&
                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
               (iVar4 = FUN_1010c5f0(0xa5), iVar4 == 0)) {
              uVar3 = *(undefined4 *)(param_1 + 4);
              FUN_1010bf70(extraout_ECX_03);
              iVar4 = *(int *)(param_1 + 4);
              iVar5 = FUN_101b01d0(param_1);
              if (((iVar5 == 0) &&
                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                 (iVar4 = FUN_1010c5f0(0x125), iVar4 == 0)) {
                uVar3 = *(undefined4 *)(param_1 + 4);
                FUN_1010bf70(extraout_ECX_04);
                iVar4 = *(int *)(param_1 + 4);
                iVar5 = FUN_101b01d0(param_1);
                if (((iVar5 == 0) &&
                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                   (iVar4 = FUN_1010c5f0(0x135), iVar4 == 0)) {
                  uVar3 = *(undefined4 *)(param_1 + 4);
                  FUN_1010bf70(extraout_ECX_05);
                  iVar4 = *(int *)(param_1 + 4);
                  iVar5 = FUN_101b01d0(param_1);
                  if (((iVar5 == 0) &&
                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                     (iVar4 = FUN_1010c5f0(0x145), iVar4 == 0)) {
                    uVar3 = *(undefined4 *)(param_1 + 4);
                    FUN_1010bf70(extraout_ECX_06);
                    iVar4 = *(int *)(param_1 + 4);
                    iVar5 = FUN_101b01d0(param_1);
                    if (((iVar5 == 0) &&
                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                       (iVar4 = FUN_1010c5f0(0x155), iVar4 == 0)) {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      FUN_1010bf70(extraout_ECX_07);
                      iVar4 = *(int *)(param_1 + 4);
                      iVar5 = FUN_101b01d0(param_1);
                      if (((iVar5 == 0) &&
                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
                         && (iVar4 = FUN_1010c5f0(0x175), iVar4 == 0)) {
                        uVar3 = *(undefined4 *)(param_1 + 4);
                        FUN_1010bf70(extraout_ECX_08);
                        iVar4 = *(int *)(param_1 + 4);
                        iVar5 = FUN_101b01d0(param_1);
                        if (((iVar5 == 0) &&
                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
                           && (iVar4 = FUN_1010c5f0(0x185), iVar4 == 0)) {
                          uVar3 = *(undefined4 *)(param_1 + 4);
                          FUN_1010bf70(extraout_ECX_09);
                          iVar4 = *(int *)(param_1 + 4);
                          iVar5 = FUN_101b01d0(param_1);
                          if (((iVar5 == 0) &&
                              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0
                              )) && (iVar4 = FUN_1010c5f0(0x195), iVar4 == 0)) {
                            uVar3 = *(undefined4 *)(param_1 + 4);
                            FUN_1010bf70(extraout_ECX_10);
                            iVar4 = *(int *)(param_1 + 4);
                            iVar5 = FUN_101b01d0(param_1);
                            if (((iVar5 == 0) &&
                                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x1e5), iVar4 == 0)) {
                              uVar3 = *(undefined4 *)(param_1 + 4);
                              FUN_1010bf70(extraout_ECX_11);
                              iVar4 = *(int *)(param_1 + 4);
                              iVar5 = FUN_101b01d0(param_1);
                              if (((iVar5 == 0) &&
                                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                  iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x1f5), iVar4 == 0)) {
                                uVar3 = *(undefined4 *)(param_1 + 4);
                                FUN_1010bf70(extraout_ECX_12);
                                iVar4 = *(int *)(param_1 + 4);
                                iVar5 = FUN_101b01d0(param_1);
                                if (((iVar5 == 0) &&
                                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                    iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x205), iVar4 == 0)) {
                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                  FUN_1010bf70(extraout_ECX_13);
                                  iVar4 = *(int *)(param_1 + 4);
                                  iVar5 = FUN_101b01d0(param_1);
                                  if (((iVar5 == 0) &&
                                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                      iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x225), iVar4 == 0)) {
                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                    FUN_1010bf70(extraout_ECX_14);
                                    iVar4 = *(int *)(param_1 + 4);
                                    iVar5 = FUN_101b01d0(param_1);
                                    if (((iVar5 == 0) &&
                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                        iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x235), iVar4 == 0)) {
                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                      FUN_1010bf70(extraout_ECX_15);
                                      iVar4 = *(int *)(param_1 + 4);
                                      iVar5 = FUN_101b01d0(param_1);
                                      if (((iVar5 == 0) &&
                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3)
                                          , iVar4 == 0)) &&
                                         (iVar4 = FUN_1010c5f0(0x245), iVar4 == 0)) {
                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                        FUN_1010bf70(extraout_ECX_16);
                                        iVar4 = *(int *)(param_1 + 4);
                                        iVar5 = FUN_101b01d0(param_1);
                                        if (((iVar5 == 0) &&
                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                  uVar3), iVar4 == 0)) &&
                                           (iVar4 = FUN_1010c5f0(0x2a5), iVar4 == 0)) {
                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                          FUN_1010bf70(extraout_ECX_17);
                                          iVar4 = *(int *)(param_1 + 4);
                                          iVar5 = FUN_101b01d0(param_1);
                                          if (((iVar5 == 0) &&
                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                    uVar3), iVar4 == 0)) &&
                                             (iVar4 = FUN_1010c5f0(0x2b5), iVar4 == 0)) {
                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                            FUN_1010bf70(extraout_ECX_18);
                                            iVar4 = *(int *)(param_1 + 4);
                                            iVar5 = FUN_101b01d0(param_1);
                                            if (((iVar5 == 0) &&
                                                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                      uVar3), iVar4 == 0)) &&
                                               (iVar4 = FUN_1010c5f0(0x2c5), iVar4 == 0)) {
                                              uVar3 = *(undefined4 *)(param_1 + 4);
                                              FUN_1010bf70(extraout_ECX_19);
                                              iVar4 = *(int *)(param_1 + 4);
                                              iVar5 = FUN_101b01d0(param_1);
                                              if (((iVar5 == 0) &&
                                                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                        iVar4,uVar3), iVar4 == 0))
                                                 && (iVar4 = FUN_1010c5f0(0x2d5), iVar4 == 0)) {
                                                uVar3 = *(undefined4 *)(param_1 + 4);
                                                FUN_1010bf70(extraout_ECX_20);
                                                iVar4 = *(int *)(param_1 + 4);
                                                iVar5 = FUN_101b01d0(param_1);
                                                if (((iVar5 == 0) &&
                                                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                          iVar4,uVar3), iVar4 == 0))
                                                   && (iVar4 = FUN_1010c5f0(0x2e5), iVar4 == 0)) {
                                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                                  FUN_1010bf70(extraout_ECX_21);
                                                  iVar4 = *(int *)(param_1 + 4);
                                                  iVar5 = FUN_101b01d0(param_1);
                                                  if (((iVar5 == 0) &&
                                                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                            iVar4,uVar3), iVar4 == 0
                                                      )) && (iVar4 = FUN_1010c5f0(0x2f5), iVar4 == 0
                                                            )) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_22);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x305), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_23);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x315), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_24);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x325), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_25);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x335),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_26);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x345), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x355), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_28);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x365), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_29);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x375), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_30);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x385),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_31);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x435), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_32);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x445), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_33);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x455), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_34);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x465), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_35);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x4c5),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_36);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x4d5), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_37);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x4e5), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_38);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x4f5), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_39);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x505), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_40);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x515),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_41);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x525), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_42);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x535), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_43);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x545), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_44);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x555), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_45);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x565),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_46);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x575), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_47);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x585), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_48);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x595), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_49);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x5a5), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_50);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (((iVar5 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1
                                                                                            + 4) -
                                                                                    iVar4,uVar3),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x5b5),
                                                             iVar4 == 0)) {
                                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                                            FUN_1010bf70(extraout_ECX_51);
                                                            iVar4 = *(int *)(param_1 + 4);
                                                            iVar5 = FUN_101b01d0(param_1);
                                                            if (iVar5 == 0) {
                                                              FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                           iVar4,uVar3);
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
              }
            }
          }
        }
      }
    }
  }
  return;
}



