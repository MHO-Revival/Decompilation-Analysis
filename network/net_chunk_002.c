/* ===== FUN_1015fb50 @ 1015fb50  size=278 ===== */
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

uint __thiscall FUN_1015fb50(undefined1 *param_1,int *param_2,int param_3)

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
LAB_1015fc38:
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
          goto LAB_1015fc38;
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



/* ===== FUN_1015fc70 @ 1015fc70  size=278 ===== */
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

uint __thiscall FUN_1015fc70(undefined1 *param_1,int *param_2,int param_3)

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
LAB_1015fd58:
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
          goto LAB_1015fd58;
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



/* ===== FUN_10160010 @ 10160010  size=169 ===== */
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

undefined4 __thiscall FUN_10160010(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x21a);
  }
  uVar4 = 0;
  uVar2 = param_3 >> 0x1f ^ (param_3 << 1 | param_2 >> 0x1f);
  uVar3 = param_3 >> 0x1f ^ param_2 * 2;
  if (param_1[2] != param_1[1]) {
    do {
      bVar1 = (byte)uVar3;
      uVar3 = uVar3 >> 7 | uVar2 << 0x19;
      bVar1 = bVar1 & 0x7f;
      uVar2 = uVar2 >> 7;
      if (uVar3 != 0 || uVar2 != 0) {
        bVar1 = bVar1 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar4) = bVar1;
      if ((uVar3 == 0) && (uVar2 == 0)) goto LAB_10160094;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[2] - param_1[1]));
  }
  if (uVar3 == 0 && uVar2 == 0) {
LAB_10160094:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar4;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_101600d0 @ 101600d0  size=302 ===== */
// calls: _wassert, __aullshr, __allshl
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, __aullshr, __allshl
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_101600d0(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_10;
  int local_8;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3dd);
  }
  iVar3 = 0;
  uVar5 = 0;
  local_8 = 0;
  local_10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[2] != param_1[1]) {
    iVar3 = *param_1 + param_1[1];
    do {
      cVar1 = *(char *)(iVar3 + uVar5);
      uVar6 = __aullshr();
      if (((int)((ulonglong)uVar6 >> 0x20) == 0) && ((uint)uVar6 < ((int)cVar1 & 0x7fU))) {
        iVar3 = -1;
        local_8 = -1;
        goto LAB_1016018b;
      }
      uVar6 = __allshl();
      *param_2 = *param_2 | (uint)uVar6;
      param_2[1] = param_2[1] | (uint)((ulonglong)uVar6 >> 0x20);
      iVar3 = *param_1 + param_1[1];
    } while (((*(byte *)(iVar3 + uVar5) & 0x80) != 0) &&
            (uVar5 = uVar5 + 1, uVar5 < (uint)(param_1[2] - param_1[1])));
    iVar3 = 0;
  }
LAB_1016018b:
  if (uVar5 == param_1[2] - param_1[1]) {
    local_8 = -1;
  }
  else if ((iVar3 == 0) && (param_1[2] != param_1[1])) {
    local_10 = uVar5 + 1;
  }
  uVar5 = *param_2;
  uVar2 = param_2[1];
  uVar4 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = ~uVar5;
    uVar2 = ~uVar2;
  }
  *param_2 = uVar4 >> 1 | uVar2 << 0x1f;
  param_2[1] = (int)uVar2 >> 1 & 0x7fffffffU | uVar5 << 0x1f;
  if (local_8 != 0) {
    return 0xfffffffe;
  }
  param_1[1] = param_1[1] + local_10;
  return 0;
}



/* ===== FUN_10164240 @ 10164240  size=410 ===== */
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

uint __thiscall FUN_10164240(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = local_8 >> 4;
      if (uVar2 == 2) {
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
LAB_101643ab:
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (uVar2 == 3) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
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
          goto LAB_101643ab;
        }
        if (uVar2 == 4) {
          if ((*(uint *)(param_1 + 6) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
          }
          if ((uint)(param_2[2] - param_2[1]) < 2) {
            return 0xfffffffe;
          }
          param_1[4] = *(undefined1 *)(*param_2 + 1 + param_2[1]);
          param_1[5] = *(undefined1 *)(*param_2 + param_2[1]);
          goto LAB_101643ab;
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



/* ===== FUN_10165e70 @ 10165e70  size=288 ===== */
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

int __thiscall FUN_10165e70(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar5 = param_2[1];
    if ((uVar5 <= (uint)param_2[2]) && (3 < param_2[2] - uVar5)) {
      param_2[1] = uVar5 + 4;
    }
    iVar3 = param_2[1];
    uVar5 = 0;
    do {
      iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar3 = -1;
    }
    else {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      iVar3 = FUN_1010c5f0(0x30);
      if (((iVar3 == 0) && (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 8)), iVar3 == 0)) &&
         (iVar3 = FUN_1010c5f0(0x40), iVar3 == 0)) {
        iVar3 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0xc));
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10165f90 @ 10165f90  size=288 ===== */
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

int __thiscall FUN_10165f90(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar5 = param_2[1];
    if ((uVar5 <= (uint)param_2[2]) && (3 < param_2[2] - uVar5)) {
      param_2[1] = uVar5 + 4;
    }
    iVar3 = param_2[1];
    uVar5 = 0;
    do {
      iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar3 = -1;
    }
    else {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      iVar3 = FUN_1010c5f0(0x33);
      if (((iVar3 == 0) && (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 8)), iVar3 == 0)) &&
         (iVar3 = FUN_1010c5f0(0x43), iVar3 == 0)) {
        iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0xc));
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_101664d0 @ 101664d0  size=267 ===== */
// calls: _wassert
// strings:
//   "[actionPoint]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[nextResetTime]"
//   "[actionPointFlags]"

/* WARNING: Removing unreachable block (ram,0x101664e0) */
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
     ""[nextResetTime]""
     ""[actionPointFlags]"" */

int __thiscall FUN_101664d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[nextResetTime]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[actionPointFlags]",&DAT_11d9f574,
                             *(undefined4 *)(param_1 + 0xc));
        return iVar1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_101667e0 @ 101667e0  size=121 ===== */
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

int __thiscall FUN_101667e0(undefined1 *param_1,int *param_2)

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
        iVar2 = FUN_1010c0c0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10166860 @ 10166860  size=121 ===== */
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

int __thiscall FUN_10166860(undefined1 *param_1,int *param_2)

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
        iVar2 = FUN_1010c0c0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_101669b0 @ 101669b0  size=278 ===== */
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

uint __thiscall FUN_101669b0(undefined1 *param_1,int *param_2,int param_3)

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
LAB_10166a98:
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
          goto LAB_10166a98;
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



/* ===== FUN_10166ad0 @ 10166ad0  size=278 ===== */
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

uint __thiscall FUN_10166ad0(undefined1 *param_1,int *param_2,int param_3)

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
LAB_10166bb8:
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
          goto LAB_10166bb8;
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



/* ===== FUN_10166fa0 @ 10166fa0  size=196 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10166fa0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar2) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar3 = *(uint *)(param_2 + 4);
    if ((uVar3 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar3)) {
      *(uint *)(param_2 + 4) = uVar3 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    sVar6 = strnlen(param_1,0x15);
    if (0x14 < sVar6) {
      return -3;
    }
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,(int)pcVar7 - (int)(param_1 + 1));
    if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar5 == 0)) &&
       (iVar5 = FUN_1010c5f0(0x20), iVar5 == 0)) {
      iVar5 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x15));
    }
  }
  return iVar5;
}



/* ===== FUN_10167070 @ 10167070  size=196 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10167070(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar2) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar3 = *(uint *)(param_2 + 4);
    if ((uVar3 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar3)) {
      *(uint *)(param_2 + 4) = uVar3 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    sVar6 = strnlen(param_1,0x15);
    if (0x14 < sVar6) {
      return -3;
    }
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,(int)pcVar7 - (int)(param_1 + 1));
    if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar5 == 0)) &&
       (iVar5 = FUN_1010c5f0(0x23), iVar5 == 0)) {
      iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x15));
    }
  }
  return iVar5;
}



/* ===== FUN_10167210 @ 10167210  size=306 ===== */
// calls: _wassert, memmove
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10167210(void *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  uVar3 = param_3 + param_2[1];
  bVar4 = uVar3 < (uint)param_2[1];
  param_3 = uVar3;
  if ((uint)param_2[1] < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((*(byte *)((int)param_1 + 0x19) & 1) == 0) {
          *(uint *)((int)param_1 + 0x19) = *(uint *)((int)param_1 + 0x19) | 1;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_00000014 < param_2) {
          return 0xfffffffd;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
        }
        if ((int *)(piVar1[2] - piVar1[1]) < _Size) {
          return 0xfffffffe;
        }
        memmove(param_1,(void *)(*piVar1 + piVar1[1]),(size_t)_Size);
        piVar1[1] = (int)(piVar1[1] + (int)_Size);
        *(undefined1 *)((int)_Size + (int)param_1) = 0;
        uVar3 = param_3;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)((int)param_1 + 0x19) >> 1 & 1) == 0) {
            *(uint *)((int)param_1 + 0x19) = *(uint *)((int)param_1 + 0x19) | 2;
          }
          uVar2 = FUN_1010ccb0((int)param_1 + 0x15);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    bVar4 = uVar3 < (uint)piVar1[1];
  }
  return -(uint)bVar4 & 0xffffffde;
}



/* ===== FUN_10167350 @ 10167350  size=306 ===== */
// calls: _wassert, memmove
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10167350(void *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  uVar3 = param_3 + param_2[1];
  bVar4 = uVar3 < (uint)param_2[1];
  param_3 = uVar3;
  if ((uint)param_2[1] < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((*(byte *)((int)param_1 + 0x19) & 1) == 0) {
          *(uint *)((int)param_1 + 0x19) = *(uint *)((int)param_1 + 0x19) | 1;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_00000014 < param_2) {
          return 0xfffffffd;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
        }
        if ((int *)(piVar1[2] - piVar1[1]) < _Size) {
          return 0xfffffffe;
        }
        memmove(param_1,(void *)(*piVar1 + piVar1[1]),(size_t)_Size);
        piVar1[1] = (int)(piVar1[1] + (int)_Size);
        *(undefined1 *)((int)_Size + (int)param_1) = 0;
        uVar3 = param_3;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)((int)param_1 + 0x19) >> 1 & 1) == 0) {
            *(uint *)((int)param_1 + 0x19) = *(uint *)((int)param_1 + 0x19) | 2;
          }
          uVar2 = FUN_1010c870((int)param_1 + 0x15);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    bVar4 = uVar3 < (uint)piVar1[1];
  }
  return -(uint)bVar4 & 0xffffffde;
}



/* ===== FUN_101678c0 @ 101678c0  size=266 ===== */
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

int __thiscall FUN_101678c0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      iVar3 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x14 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_00;
        if (*param_1 != 0) {
          do {
            iVar5 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar4 = FUN_10166fa0(param_2);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
            if (iVar5 != 0) {
              return iVar5;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_01;
          } while (bVar7 < *param_1);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_101679d0 @ 101679d0  size=266 ===== */
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

int __thiscall FUN_101679d0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      iVar3 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x14 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_00;
        if (*param_1 != 0) {
          do {
            iVar5 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar4 = FUN_10167070(param_2);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
            if (iVar5 != 0) {
              return iVar5;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_01;
          } while (bVar7 < *param_1);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10167bb0 @ 10167bb0  size=431 ===== */
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

int __thiscall FUN_10167bb0(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  char *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  param_1[0x245] = '\0';
  param_1[0x246] = '\0';
  param_1[0x247] = '\0';
  param_1[0x248] = '\0';
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (uVar3 <= uVar1) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x245] & 1U) == 0) {
        *(uint *)(param_1 + 0x245) = *(uint *)(param_1 + 0x245) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x245) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x245) = *(uint *)(param_1 + 0x245) | 2;
      }
      param_2 = (int *)0x0;
      iVar4 = FUN_1010c870(&param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10167210(piVar2,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar4;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar1 == uVar6) {
          *local_8 = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 0x14);
    }
    else {
      iVar4 = FUN_1010d4f0();
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    uVar1 = piVar2[1];
  } while( true );
}



/* ===== FUN_10167d60 @ 10167d60  size=431 ===== */
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

int __thiscall FUN_10167d60(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  char *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  param_1[0x245] = '\0';
  param_1[0x246] = '\0';
  param_1[0x247] = '\0';
  param_1[0x248] = '\0';
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (uVar3 <= uVar1) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x245] & 1U) == 0) {
        *(uint *)(param_1 + 0x245) = *(uint *)(param_1 + 0x245) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x245) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x245) = *(uint *)(param_1 + 0x245) | 2;
      }
      param_2 = (int *)0x0;
      iVar4 = FUN_1010c870(&param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10167350(piVar2,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar4;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar1 == uVar6) {
          *local_8 = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 0x14);
    }
    else {
      iVar4 = FUN_1010d4f0();
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    uVar1 = piVar2[1];
  } while( true );
}



/* ===== FUN_10167fe0 @ 10167fe0  size=314 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[nNumTabs]"
//   "[astTabs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[strName]"
//   "[nChannelFlags]"

/* WARNING: Removing unreachable block (ram,0x10168042) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[nNumTabs]""
     ""[astTabs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[strName]""
     ""[nChannelFlags]"" */

int __thiscall FUN_10167fe0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[nNumTabs]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    uVar4 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTabs]",uVar4,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        pbVar2 = param_1 + uVar4 * 0x1d + 1;
        if (param_3 < 0) {
          iVar1 = FUN_1024a410(param_4,"[strName]",pbVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar5 = *(undefined4 *)(pbVar2 + 0x15);
          iVar1 = param_3;
        }
        else {
          iVar1 = FUN_1024a410(param_4,"[strName]",pbVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar5 = *(undefined4 *)(pbVar2 + 0x15);
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1024a290(param_2,iVar1,param_4,"[nChannelFlags]",&DAT_11d9f574,uVar5);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar3 = (char)uVar4 + 1;
        uVar4 = (uint)bVar3;
      } while (bVar3 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10168970 @ 10168970  size=970 ===== */
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

int __thiscall FUN_10168970(undefined1 *param_1,int *param_2)

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
      if ((((((((iVar2 == 0) && (iVar2 = FUN_1010c0c0(param_1[1]), iVar2 == 0)) &&
              (iVar2 = FUN_1010c5f0(0x31), iVar2 == 0)) &&
             ((iVar2 = FUN_1010c0c0(param_1[2]), iVar2 == 0 &&
              (iVar2 = FUN_1010c5f0(0x41), iVar2 == 0)))) &&
            ((iVar2 = FUN_1010c0c0(param_1[3]), iVar2 == 0 &&
             ((iVar2 = FUN_1010c5f0(0x51), iVar2 == 0 &&
              (iVar2 = FUN_1010c0c0(param_1[4]), iVar2 == 0)))))) &&
           (iVar2 = FUN_1010c5f0(0x61), iVar2 == 0)) &&
          ((((iVar2 = FUN_1010c0c0(param_1[5]), iVar2 == 0 &&
             (iVar2 = FUN_1010c5f0(0x71), iVar2 == 0)) &&
            (iVar2 = FUN_1010c0c0(param_1[6]), iVar2 == 0)) &&
           (((iVar2 = FUN_1010c5f0(0x81), iVar2 == 0 &&
             (iVar2 = FUN_1010c0c0(param_1[7]), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0x91), iVar2 == 0 &&
             ((iVar2 = FUN_1010c0c0(param_1[8]), iVar2 == 0 &&
              (iVar2 = FUN_1010c5f0(0xa1), iVar2 == 0)))))))))) &&
         ((((iVar2 = FUN_1010c0c0(param_1[9]), iVar2 == 0 &&
            (((iVar2 = FUN_1010c5f0(0xb1), iVar2 == 0 &&
              (iVar2 = FUN_1010c0c0(param_1[10]), iVar2 == 0)) &&
             (iVar2 = FUN_1010c5f0(0xc1), iVar2 == 0)))) &&
           (((iVar2 = FUN_1010c0c0(param_1[0xb]), iVar2 == 0 &&
             (iVar2 = FUN_1010c5f0(0xd1), iVar2 == 0)) &&
            (((iVar2 = FUN_1010c0c0(param_1[0xc]), iVar2 == 0 &&
              ((iVar2 = FUN_1010c5f0(0xe1), iVar2 == 0 &&
               (iVar2 = FUN_1010c0c0(param_1[0xd]), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c5f0(0xf1), iVar2 == 0)))))) &&
          (((((((iVar2 = FUN_1010c0c0(param_1[0xe]), iVar2 == 0 &&
                (iVar2 = FUN_1010c5f0(0x101), iVar2 == 0)) &&
               (iVar2 = FUN_1010c0c0(param_1[0xf]), iVar2 == 0)) &&
              ((iVar2 = FUN_1010c5f0(0x111), iVar2 == 0 &&
               (iVar2 = FUN_1010c0c0(param_1[0x10]), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c5f0(0x121), iVar2 == 0)) &&
            (((((iVar2 = FUN_1010c0c0(param_1[0x11]), iVar2 == 0 &&
                (iVar2 = FUN_1010c5f0(0x131), iVar2 == 0)) &&
               ((iVar2 = FUN_1010c0c0(param_1[0x12]), iVar2 == 0 &&
                (((iVar2 = FUN_1010c5f0(0x141), iVar2 == 0 &&
                  (iVar2 = FUN_1010c0c0(param_1[0x13]), iVar2 == 0)) &&
                 (iVar2 = FUN_1010c5f0(0x151), iVar2 == 0)))))) &&
              ((iVar2 = FUN_1010c0c0(param_1[0x14]), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0x161), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c0c0(param_1[0x15]), iVar2 == 0)))) &&
           (((iVar2 = FUN_1010c5f0(0x171), iVar2 == 0 &&
             (iVar2 = FUN_1010c0c0(param_1[0x16]), iVar2 == 0)) &&
            (iVar2 = FUN_1010c5f0(0x181), iVar2 == 0)))))))) {
        iVar2 = FUN_1010c0c0(param_1[0x17]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10168d40 @ 10168d40  size=970 ===== */
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

int __thiscall FUN_10168d40(undefined1 *param_1,int *param_2)

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
      if ((((((((iVar2 == 0) && (iVar2 = FUN_1010c0c0(param_1[1]), iVar2 == 0)) &&
              (iVar2 = FUN_1010c5f0(0x31), iVar2 == 0)) &&
             ((iVar2 = FUN_1010c0c0(param_1[2]), iVar2 == 0 &&
              (iVar2 = FUN_1010c5f0(0x41), iVar2 == 0)))) &&
            ((iVar2 = FUN_1010c0c0(param_1[3]), iVar2 == 0 &&
             ((iVar2 = FUN_1010c5f0(0x51), iVar2 == 0 &&
              (iVar2 = FUN_1010c0c0(param_1[4]), iVar2 == 0)))))) &&
           (iVar2 = FUN_1010c5f0(0x61), iVar2 == 0)) &&
          ((((iVar2 = FUN_1010c0c0(param_1[5]), iVar2 == 0 &&
             (iVar2 = FUN_1010c5f0(0x71), iVar2 == 0)) &&
            (iVar2 = FUN_1010c0c0(param_1[6]), iVar2 == 0)) &&
           (((iVar2 = FUN_1010c5f0(0x81), iVar2 == 0 &&
             (iVar2 = FUN_1010c0c0(param_1[7]), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0x91), iVar2 == 0 &&
             ((iVar2 = FUN_1010c0c0(param_1[8]), iVar2 == 0 &&
              (iVar2 = FUN_1010c5f0(0xa1), iVar2 == 0)))))))))) &&
         ((((iVar2 = FUN_1010c0c0(param_1[9]), iVar2 == 0 &&
            (((iVar2 = FUN_1010c5f0(0xb1), iVar2 == 0 &&
              (iVar2 = FUN_1010c0c0(param_1[10]), iVar2 == 0)) &&
             (iVar2 = FUN_1010c5f0(0xc1), iVar2 == 0)))) &&
           (((iVar2 = FUN_1010c0c0(param_1[0xb]), iVar2 == 0 &&
             (iVar2 = FUN_1010c5f0(0xd1), iVar2 == 0)) &&
            (((iVar2 = FUN_1010c0c0(param_1[0xc]), iVar2 == 0 &&
              ((iVar2 = FUN_1010c5f0(0xe1), iVar2 == 0 &&
               (iVar2 = FUN_1010c0c0(param_1[0xd]), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c5f0(0xf1), iVar2 == 0)))))) &&
          (((((((iVar2 = FUN_1010c0c0(param_1[0xe]), iVar2 == 0 &&
                (iVar2 = FUN_1010c5f0(0x101), iVar2 == 0)) &&
               (iVar2 = FUN_1010c0c0(param_1[0xf]), iVar2 == 0)) &&
              ((iVar2 = FUN_1010c5f0(0x111), iVar2 == 0 &&
               (iVar2 = FUN_1010c0c0(param_1[0x10]), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c5f0(0x121), iVar2 == 0)) &&
            (((((iVar2 = FUN_1010c0c0(param_1[0x11]), iVar2 == 0 &&
                (iVar2 = FUN_1010c5f0(0x131), iVar2 == 0)) &&
               ((iVar2 = FUN_1010c0c0(param_1[0x12]), iVar2 == 0 &&
                (((iVar2 = FUN_1010c5f0(0x141), iVar2 == 0 &&
                  (iVar2 = FUN_1010c0c0(param_1[0x13]), iVar2 == 0)) &&
                 (iVar2 = FUN_1010c5f0(0x151), iVar2 == 0)))))) &&
              ((iVar2 = FUN_1010c0c0(param_1[0x14]), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0x161), iVar2 == 0)))) &&
             (iVar2 = FUN_1010c0c0(param_1[0x15]), iVar2 == 0)))) &&
           (((iVar2 = FUN_1010c5f0(0x171), iVar2 == 0 &&
             (iVar2 = FUN_1010c0c0(param_1[0x16]), iVar2 == 0)) &&
            (iVar2 = FUN_1010c5f0(0x181), iVar2 == 0)))))))) {
        iVar2 = FUN_1010c0c0(param_1[0x17]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1016a090 @ 1016a090  size=119 ===== */
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

int __thiscall FUN_1016a090(undefined1 *param_1,int *param_2)

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



/* ===== FUN_1016a110 @ 1016a110  size=119 ===== */
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

int __thiscall FUN_1016a110(undefined1 *param_1,int *param_2)

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



/* ===== FUN_1016a260 @ 1016a260  size=236 ===== */
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

uint __thiscall FUN_1016a260(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1016a350 @ 1016a350  size=236 ===== */
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

uint __thiscall FUN_1016a350(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1016a880 @ 1016a880  size=334 ===== */
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

void FUN_1016a880(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar4 = FUN_1010c5f0(0x25);
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
    iVar5 = FUN_101678c0(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_10168340(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x45), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_10168970(param_1);
        if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)
            ) && (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_1016a090(param_1);
          if (iVar5 == 0) {
            FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1016a9d0 @ 1016a9d0  size=334 ===== */
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

void FUN_1016a9d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar4 = FUN_1010c5f0(0x25);
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
    iVar5 = FUN_101679d0(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_10168390(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x45), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_10168d40(param_1);
        if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)
            ) && (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_1016a110(param_1);
          if (iVar5 == 0) {
            FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1016b080 @ 1016b080  size=312 ===== */
// calls: _wassert
// strings:
//   "[stChatTabs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stHunterStar]"
//   "[stGamePadCustom]"
//   "[stSilverTips]"

/* WARNING: Removing unreachable block (ram,0x1016b090) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stChatTabs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stHunterStar]""
     ""[stGamePadCustom]""
     ""[stSilverTips]"" */

void FUN_1016b080(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stChatTabs]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_10167fe0(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stHunterStar]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = FUN_101686f0(param_1,iVar1,param_3);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a1e0(param_3,"[stGamePadCustom]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_2;
        if (-1 < param_2) {
          iVar1 = param_2 + 1;
        }
        iVar1 = FUN_10169b10(param_1,iVar1,param_3);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a1e0(param_3,"[stSilverTips]",extraout_ECX_01), iVar1 == 0)) {
          if (param_2 < 0) {
            FUN_1016a540(param_1,param_2,param_3);
            return;
          }
          FUN_1016a540(param_1,param_2 + 1,param_3);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1016d660 @ 1016d660  size=202 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1016d660(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined4 extraout_ECX;
  char *pcVar7;
  char *_Str;
  
  iVar5 = FUN_1010c5f0(0x11);
  if (iVar5 == 0) {
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
      iVar5 = FUN_1010c5f0(0x25);
      if (iVar5 == 0) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar4 = param_2[1];
        _Str = param_1 + 1;
        sVar6 = strnlen(_Str,0x20);
        if (0x1f < sVar6) {
          return -3;
        }
        pcVar7 = _Str;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(_Str,(int)pcVar7 - (int)(param_1 + 2));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_1016d730 @ 1016d730  size=202 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1016d730(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined4 extraout_ECX;
  char *pcVar7;
  char *_Str;
  
  iVar5 = FUN_1010c5f0(0x11);
  if (iVar5 == 0) {
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
      iVar5 = FUN_1010c5f0(0x25);
      if (iVar5 == 0) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar4 = param_2[1];
        _Str = param_1 + 1;
        sVar6 = strnlen(_Str,0x20);
        if (0x1f < sVar6) {
          return -3;
        }
        pcVar7 = _Str;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(_Str,(int)pcVar7 - (int)(param_1 + 2));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_1016d8d0 @ 1016d8d0  size=387 ===== */
// calls: _wassert, memmove
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_1016d8d0(undefined1 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  uVar3 = param_3 + param_2[1];
  bVar4 = uVar3 < (uint)param_2[1];
  param_3 = uVar3;
  if ((uint)param_2[1] < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x21] & 1) == 0) {
          *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 1;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (piVar1[2] == piVar1[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(piVar1[1] + *piVar1);
        piVar1[1] = piVar1[1] + 1;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x21) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_0000001f < param_2) {
          return 0xfffffffd;
        }
        if (param_1 == (undefined1 *)0xffffffff) {
          return 0xfffffff8;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
        }
        if ((int *)(piVar1[2] - piVar1[1]) < _Size) {
          return 0xfffffffe;
        }
        memmove(param_1 + 1,(void *)(*piVar1 + piVar1[1]),(size_t)_Size);
        piVar1[1] = (int)(piVar1[1] + (int)_Size);
        (param_1 + 1)[(int)_Size] = 0;
        uVar3 = param_3;
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    bVar4 = uVar3 < (uint)piVar1[1];
  }
  return -(uint)bVar4 & 0xffffffde;
}



/* ===== FUN_1016da60 @ 1016da60  size=387 ===== */
// calls: _wassert, memmove
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_1016da60(undefined1 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  uVar3 = param_3 + param_2[1];
  bVar4 = uVar3 < (uint)param_2[1];
  param_3 = uVar3;
  if ((uint)param_2[1] < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x21] & 1) == 0) {
          *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 1;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (piVar1[2] == piVar1[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(piVar1[1] + *piVar1);
        piVar1[1] = piVar1[1] + 1;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x21) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_0000001f < param_2) {
          return 0xfffffffd;
        }
        if (param_1 == (undefined1 *)0xffffffff) {
          return 0xfffffff8;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
        }
        if ((int *)(piVar1[2] - piVar1[1]) < _Size) {
          return 0xfffffffe;
        }
        memmove(param_1 + 1,(void *)(*piVar1 + piVar1[1]),(size_t)_Size);
        piVar1[1] = (int)(piVar1[1] + (int)_Size);
        (param_1 + 1)[(int)_Size] = 0;
        uVar3 = param_3;
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    bVar4 = uVar3 < (uint)piVar1[1];
  }
  return -(uint)bVar4 & 0xffffffde;
}



/* ===== FUN_1016e6a0 @ 1016e6a0  size=260 ===== */
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

int __thiscall FUN_1016e6a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = param_2[1];
  uVar3 = param_2[1];
  do {
    iVar2 = 0;
    if ((uint)(param_3 + iVar1) <= uVar3) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar2 = -0x22;
      }
      return iVar2;
    }
    iVar2 = FUN_1010ccb0(&local_8);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
      }
      iVar2 = FUN_1010cbd0(param_1);
LAB_1016e771:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
          }
          iVar2 = FUN_1010ccb0(param_1 + 5);
        }
        else {
          iVar2 = FUN_1010d4f0();
        }
        goto LAB_1016e771;
      }
      if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar3 = param_2[1];
  } while( true );
}



/* ===== FUN_1016e7b0 @ 1016e7b0  size=253 ===== */
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

int __thiscall FUN_1016e7b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = param_2[1];
  uVar3 = param_2[1];
  do {
    iVar2 = 0;
    if ((uint)(param_3 + iVar1) <= uVar3) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar2 = -0x22;
      }
      return iVar2;
    }
    iVar2 = FUN_1010ccb0(&local_8);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      iVar2 = param_1;
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
      }
LAB_1016e873:
      iVar2 = FUN_1010c870(iVar2);
LAB_1016e87a:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
          }
          iVar2 = param_1 + 5;
          goto LAB_1016e873;
        }
        iVar2 = FUN_1010d4f0();
        goto LAB_1016e87a;
      }
      if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar3 = param_2[1];
  } while( true );
}



/* ===== FUN_1016f2a0 @ 1016f2a0  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[data]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1016f309) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[data]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1016f2a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[data]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1016e980(param_2,iVar1,param_4);
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



/* ===== FUN_10171c90 @ 10171c90  size=226 ===== */
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

int __thiscall FUN_10171c90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
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
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
      }
      iVar3 = FUN_1010cbd0(param_1);
LAB_10171d3f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_10171d3f;
      }
      if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_10171d80 @ 10171d80  size=226 ===== */
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

int __thiscall FUN_10171d80(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
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
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
      }
      iVar3 = FUN_1010c870(param_1);
LAB_10171e2f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_10171e2f;
      }
      if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_101740f0 @ 101740f0  size=786 ===== */
// calls: _wassert
// strings:
//   "[iFriendCount]"
//   "[astFriendData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iPasserbyCount]"
//   "[astPasserbyData]"
//   "[iBlacklistCount]"
//   "[astBlacklistData]"
//   "[iFriendGroupCount]"
//   "[astFriendGroupData]"

/* WARNING: Removing unreachable block (ram,0x1017416f) */
/* WARNING: Removing unreachable block (ram,0x10174249) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iFriendCount]""
     ""[astFriendData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iPasserbyCount]""
     ""[astPasserbyData]""
     ""[iBlacklistCount]""
     ""[astBlacklistData]""
     ""[iFriendGroupCount]"" */

int __thiscall FUN_101740f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iFriendCount]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 < 0) {
      return -6;
    }
    if (500 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astFriendData]",param_3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1016bdf0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < *param_1);
    }
    iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[iPasserbyCount]",&DAT_11d9e0b4,param_1[0x23a6]);
    if (iVar2 == 0) {
      iVar2 = param_1[0x23a6];
      if (iVar2 < 0) {
        return -6;
      }
      if (0x14 < iVar2) {
        return -7;
      }
      param_3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = FUN_1024a140(iVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astPasserbyData]",param_3,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = iVar1;
          if (-1 < iVar1) {
            iVar2 = iVar1 + 1;
          }
          iVar2 = FUN_1016c990(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_3 = param_3 + 1;
        } while (param_3 < param_1[0x23a6]);
      }
      iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[iBlacklistCount]",&DAT_11d9e0b4,param_1[0x24c4]);
      if (iVar2 == 0) {
        iVar2 = param_1[0x24c4];
        if (iVar2 < 0) {
          return -6;
        }
        if (0x14 < iVar2) {
          return -7;
        }
        param_3 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = FUN_1024a230(param_4,"[astBlacklistData]",param_3,param_3);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = iVar1;
            if (-1 < iVar1) {
              iVar2 = iVar1 + 1;
            }
            iVar2 = FUN_1016d370(param_2,iVar2,param_4);
            if (iVar2 != 0) {
              return iVar2;
            }
            param_3 = param_3 + 1;
          } while (param_3 < param_1[0x24c4]);
        }
        iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[iFriendGroupCount]",&DAT_11d9e0b4,
                             param_1[0x25dd]);
        if (iVar2 == 0) {
          iVar2 = param_1[0x25dd];
          if (iVar2 < 0) {
            return -6;
          }
          if (10 < iVar2) {
            return -7;
          }
          if (0 < iVar2) {
            iVar2 = 0;
            piVar4 = param_1 + 0x25de;
            do {
              iVar3 = FUN_1024a230(param_4,"[astFriendGroupData]",iVar2,piVar4);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = iVar1;
              if (-1 < iVar1) {
                iVar3 = iVar1 + 1;
              }
              iVar3 = FUN_1016dcf0(param_2,iVar3,param_4);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar2 = iVar2 + 1;
              piVar4 = param_1;
            } while (iVar2 < param_1[0x25dd]);
          }
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10176b80 @ 10176b80  size=148 ===== */
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

int __thiscall FUN_10176b80(undefined1 *param_1,int *param_2)

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
      if (((iVar2 == 0) && (iVar2 = FUN_101150a0(param_1[1]), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x30), iVar2 == 0)) {
        iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 2));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10176c20 @ 10176c20  size=148 ===== */
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

int __thiscall FUN_10176c20(undefined1 *param_1,int *param_2)

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
      if (((iVar2 == 0) && (iVar2 = FUN_101150a0(param_1[1]), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x33), iVar2 == 0)) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 2));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10176d90 @ 10176d90  size=327 ===== */
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

uint __thiscall FUN_10176d90(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = local_8 >> 4;
      if (uVar2 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_10176ea9:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar2 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_10176ea9;
        }
        if (uVar2 == 3) {
          if ((*(uint *)(param_1 + 6) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4;
          }
          uVar2 = FUN_1010cbd0(param_1 + 2);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_10176ee0 @ 10176ee0  size=327 ===== */
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

uint __thiscall FUN_10176ee0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = local_8 >> 4;
      if (uVar2 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_10176ff9:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar2 == 2) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_10176ff9;
        }
        if (uVar2 == 3) {
          if ((*(uint *)(param_1 + 6) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4;
          }
          uVar2 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_10178f00 @ 10178f00  size=273 ===== */
// calls: _wassert
// strings:
//   "[itemRebuildLimitCount]"
//   "%I64u"
//   "[lastItemRebuildTime]"
//   "[itemRebuildLimitInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10178f99) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[itemRebuildLimitCount]""
     ""%I64u""
     ""[lastItemRebuildTime]""
     ""[itemRebuildLimitInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10178f00(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[itemRebuildLimitCount]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[lastItemRebuildTime]","%I64u",param_1[1],
                           param_1[2]), iVar1 == 0)) {
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[itemRebuildLimitInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_101785a0(param_2,iVar1,param_4);
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



/* ===== FUN_101798b0 @ 101798b0  size=546 ===== */
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

int __thiscall FUN_101798b0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
      iVar3 = FUN_1010c5f0(0x20);
      if ((iVar3 == 0) && (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 1);
        if (iVar3 < 0) {
          return -6;
        }
        if (iVar3 < 6) {
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 5);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (5 < iVar3) {
            return -7;
          }
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x19);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (iVar3 < 6) {
            if (iVar3 < 1) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x65);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x2d);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10179ae0 @ 10179ae0  size=546 ===== */
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

int __thiscall FUN_10179ae0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
      iVar3 = FUN_1010c5f0(0x23);
      if ((iVar3 == 0) && (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 1);
        if (iVar3 < 0) {
          return -6;
        }
        if (iVar3 < 6) {
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 5);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (5 < iVar3) {
            return -7;
          }
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x19);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (iVar3 < 6) {
            if (iVar3 < 1) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x65);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x2d);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1017ae40 @ 1017ae40  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[tracksSet]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1017aea9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[tracksSet]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1017ae40(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[tracksSet]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1017a3d0(param_2,iVar1,param_4);
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



/* ===== FUN_1017b1c0 @ 1017b1c0  size=571 ===== */
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

int __thiscall FUN_1017b1c0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_ECX_03;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x51);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(0x60);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1010c680(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
         iVar3 == 0)) {
        if (*param_1 < 9) {
          if (*param_1 != 0) {
            iVar3 = FUN_1010c5f0(0x75);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = FUN_101150a0(param_1[bVar7 + 9]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
              } while (bVar7 < *param_1);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 9) {
            if (*param_1 != 0) {
              iVar3 = FUN_1010c5f0(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_2[1];
              FUN_1010bf70(extraout_ECX_00);
              iVar1 = param_2[1];
              bVar7 = 0;
              if (*param_1 != 0) {
                do {
                  iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + (uint)bVar7 * 4 + 0x11));
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  bVar7 = bVar7 + 1;
                } while (bVar7 < *param_1);
              }
              iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            iVar3 = FUN_1010c5f0(0x91);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_101150a0(param_1[0x31]);
            if (iVar3 != 0) {
              return iVar3;
            }
            if (10 < param_1[0x31]) {
              return -7;
            }
            if (param_1[0x31] == 0) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0xa5);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_02;
            if (param_1[0x31] != 0) {
              do {
                iVar4 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar5 = FUN_101798b0(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_03;
              } while (bVar7 < param_1[0x31]);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1017b400 @ 1017b400  size=571 ===== */
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

int __thiscall FUN_1017b400(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_ECX_03;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x51);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(100);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1010c200(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
         iVar3 == 0)) {
        if (*param_1 < 9) {
          if (*param_1 != 0) {
            iVar3 = FUN_1010c5f0(0x75);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = FUN_101150a0(param_1[bVar7 + 9]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
              } while (bVar7 < *param_1);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 9) {
            if (*param_1 != 0) {
              iVar3 = FUN_1010c5f0(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_2[1];
              FUN_1010bf70(extraout_ECX_00);
              iVar1 = param_2[1];
              bVar7 = 0;
              if (*param_1 != 0) {
                do {
                  iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar7 * 4 + 0x11));
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  bVar7 = bVar7 + 1;
                } while (bVar7 < *param_1);
              }
              iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            iVar3 = FUN_1010c5f0(0x91);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_101150a0(param_1[0x31]);
            if (iVar3 != 0) {
              return iVar3;
            }
            if (10 < param_1[0x31]) {
              return -7;
            }
            if (param_1[0x31] == 0) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0xa5);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_02;
            if (param_1[0x31] != 0) {
              do {
                iVar4 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar5 = FUN_10179ae0(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_03;
              } while (bVar7 < param_1[0x31]);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1017c810 @ 1017c810  size=326 ===== */
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

int __thiscall FUN_1017c810(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
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
    iVar4 = FUN_1010c5f0(0x20);
    if ((iVar4 == 0) && (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar4 == 0)) {
      iVar2 = *(int *)(param_1 + 1);
      if (iVar2 < 0) {
        return -6;
      }
      if (5 < iVar2) {
        return -7;
      }
      if ((0 < iVar2) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
        iVar4 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar2 = param_2[1];
        iVar8 = 0;
        uVar7 = extraout_ECX_00;
        if (0 < *(int *)(param_1 + 1)) {
          do {
            iVar6 = param_2[1];
            FUN_1010bf70(uVar7);
            iVar3 = param_2[1];
            iVar5 = FUN_1017c1a0(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar8 = iVar8 + 1;
            uVar7 = extraout_ECX_01;
          } while (iVar8 < *(int *)(param_1 + 1));
        }
        iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1017c960 @ 1017c960  size=326 ===== */
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

int __thiscall FUN_1017c960(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
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
    iVar4 = FUN_1010c5f0(0x23);
    if ((iVar4 == 0) && (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar4 == 0)) {
      iVar2 = *(int *)(param_1 + 1);
      if (iVar2 < 0) {
        return -6;
      }
      if (5 < iVar2) {
        return -7;
      }
      if ((0 < iVar2) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
        iVar4 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar2 = param_2[1];
        iVar8 = 0;
        uVar7 = extraout_ECX_00;
        if (0 < *(int *)(param_1 + 1)) {
          do {
            iVar6 = param_2[1];
            FUN_1010bf70(uVar7);
            iVar3 = param_2[1];
            iVar5 = FUN_1017c200(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar8 = iVar8 + 1;
            uVar7 = extraout_ECX_01;
          } while (iVar8 < *(int *)(param_1 + 1));
        }
        iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1017cb80 @ 1017cb80  size=465 ===== */
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

int __thiscall FUN_1017cb80(undefined1 *param_1,int *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  undefined1 *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  puVar3 = param_3 + param_2[1];
  puVar1 = (undefined1 *)param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (puVar3 <= puVar1) {
      if (puVar3 < (undefined1 *)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar5 = local_c >> 4;
    if (uVar5 == 1) {
      if ((param_1[0x55] & 1) == 0) {
        *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(undefined1 *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else {
      if (uVar5 == 2) {
        if ((*(uint *)(param_1 + 0x55) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 2;
        }
        iVar4 = FUN_1010cbd0(param_1 + 1);
      }
      else {
        if (uVar5 == 3) {
          if ((*(uint *)(param_1 + 0x55) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 4;
          }
          param_2 = (int *)0x0;
          iVar4 = FUN_1010c870(&param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (param_2 == (int *)0x0) {
            return -0x25;
          }
          iVar4 = piVar2[1];
          iVar8 = 0;
          param_3 = local_8 + 5;
          do {
            local_10 = 0;
            iVar6 = FUN_1010c870(&local_10);
            if (iVar6 != 0) {
              return iVar6;
            }
            if ((local_10 != 0) && (iVar6 = FUN_1017c330(piVar2,local_10), iVar6 != 0)) {
              return iVar6;
            }
            uVar7 = (int)param_2 + iVar4;
            uVar5 = piVar2[1];
            if (uVar7 <= uVar5 && uVar5 != uVar7) {
              return -0x22;
            }
            param_1 = local_8;
            if (uVar5 == uVar7) {
              *(int *)(local_8 + 1) = iVar8 + 1;
              break;
            }
            param_3 = param_3 + 0x10;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 5);
          goto LAB_1017cd0b;
        }
        iVar4 = FUN_1010d4f0();
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
LAB_1017cd0b:
    puVar1 = (undefined1 *)piVar2[1];
  } while( true );
}



/* ===== FUN_1017cd60 @ 1017cd60  size=465 ===== */
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

int __thiscall FUN_1017cd60(undefined1 *param_1,int *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  uint local_c;
  undefined1 *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  puVar3 = param_3 + param_2[1];
  puVar1 = (undefined1 *)param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (puVar3 <= puVar1) {
      if (puVar3 < (undefined1 *)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar5 = local_c >> 4;
    if (uVar5 == 1) {
      if ((param_1[0x55] & 1) == 0) {
        *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(undefined1 *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else {
      if (uVar5 == 2) {
        if ((*(uint *)(param_1 + 0x55) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 2;
        }
        iVar4 = FUN_1010c870(param_1 + 1);
      }
      else {
        if (uVar5 == 3) {
          if ((*(uint *)(param_1 + 0x55) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) | 4;
          }
          param_2 = (int *)0x0;
          iVar4 = FUN_1010c870(&param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (param_2 == (int *)0x0) {
            return -0x25;
          }
          iVar4 = piVar2[1];
          iVar8 = 0;
          param_3 = local_8 + 5;
          do {
            local_10 = 0;
            iVar6 = FUN_1010c870(&local_10);
            if (iVar6 != 0) {
              return iVar6;
            }
            if ((local_10 != 0) && (iVar6 = FUN_1017c3e0(piVar2,local_10), iVar6 != 0)) {
              return iVar6;
            }
            uVar7 = (int)param_2 + iVar4;
            uVar5 = piVar2[1];
            if (uVar7 <= uVar5 && uVar5 != uVar7) {
              return -0x22;
            }
            param_1 = local_8;
            if (uVar5 == uVar7) {
              *(int *)(local_8 + 1) = iVar8 + 1;
              break;
            }
            param_3 = param_3 + 0x10;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 5);
          goto LAB_1017ceeb;
        }
        iVar4 = FUN_1010d4f0();
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
LAB_1017ceeb:
    puVar1 = (undefined1 *)piVar2[1];
  } while( true );
}



/* ===== FUN_1017d010 @ 1017d010  size=274 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[type]"
//   "[count]"
//   "[trace]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1017d0a9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[type]""
     ""[count]""
     ""[trace]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1017d010(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[type]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 1)), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[trace]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1017c560(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1017da00 @ 1017da00  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[tracesSet]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1017da69) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[tracesSet]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1017da00(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[tracesSet]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1017d010(param_2,iVar1,param_4);
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



/* ===== FUN_1017dd20 @ 1017dd20  size=295 ===== */
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

int __thiscall FUN_1017dd20(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  
  iVar3 = FUN_1010c5f0(0x10);
  if (((iVar3 == 0) && (iVar3 = FUN_10160010(*param_1,param_1[1]), iVar3 == 0)) &&
     (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
    iVar3 = param_2[1];
    FUN_1010bf70(extraout_ECX);
    iVar2 = param_2[1];
    uVar4 = 0;
    do {
      uVar1 = *(undefined1 *)((int)param_1 + uVar4 + 8);
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
      }
      if (param_2[2] == param_2[1]) {
        return -1;
      }
      uVar4 = uVar4 + 1;
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
    } while (uVar4 < 7);
    iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
    if ((((iVar3 == 0) && (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
        ((iVar3 = FUN_1010c0c0(*(undefined1 *)((int)param_1 + 0xf)), iVar3 == 0 &&
         ((iVar3 = FUN_1010c5f0(0x40), iVar3 == 0 &&
          (iVar3 = FUN_10160010(param_1[4],param_1[5]), iVar3 == 0)))))) &&
       (iVar3 = FUN_1010c5f0(0x51), iVar3 == 0)) {
      iVar3 = FUN_1010c0c0(*(undefined1 *)(param_1 + 6));
      return iVar3;
    }
  }
  return iVar3;
}



/* ===== FUN_1017de50 @ 1017de50  size=295 ===== */
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

int __thiscall FUN_1017de50(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  
  iVar3 = FUN_1010c5f0(0x14);
  if (((iVar3 == 0) && (iVar3 = FUN_1010c200(*param_1,param_1[1]), iVar3 == 0)) &&
     (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
    iVar3 = param_2[1];
    FUN_1010bf70(extraout_ECX);
    iVar2 = param_2[1];
    uVar4 = 0;
    do {
      uVar1 = *(undefined1 *)((int)param_1 + uVar4 + 8);
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
      }
      if (param_2[2] == param_2[1]) {
        return -1;
      }
      uVar4 = uVar4 + 1;
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
    } while (uVar4 < 7);
    iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
    if ((((iVar3 == 0) && (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
        ((iVar3 = FUN_1010c0c0(*(undefined1 *)((int)param_1 + 0xf)), iVar3 == 0 &&
         ((iVar3 = FUN_1010c5f0(0x44), iVar3 == 0 &&
          (iVar3 = FUN_1010c200(param_1[4],param_1[5]), iVar3 == 0)))))) &&
       (iVar3 = FUN_1010c5f0(0x51), iVar3 == 0)) {
      iVar3 = FUN_1010c0c0(*(undefined1 *)(param_1 + 6));
      return iVar3;
    }
  }
  return iVar3;
}



/* ===== FUN_1017e4a0 @ 1017e4a0  size=346 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[tCatTime]"
//   "[vCatSeq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   " 0x%02x"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "0x%02x"
//   "[iOpen]"
//   "[tOpenTime]"
//   "[iTools]"

/* WARNING: Removing unreachable block (ram,0x1017e4d9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""%I64i""
     ""[tCatTime]""
     ""[vCatSeq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "" 0x%02x""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""0x%02x"" */

int __thiscall FUN_1017e4a0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[tCatTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[vCatSeq]",6,0), iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)((int)param_1 + uVar2 + 8));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
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
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOpen]","0x%02x",
                           *(undefined1 *)((int)param_1 + 0xf));
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[tOpenTime]","%I64i",param_1[4],param_1[5]),
         iVar1 == 0)) {
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTools]","0x%02x",
                             *(undefined1 *)(param_1 + 6));
        return iVar1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1017f5b0 @ 1017f5b0  size=442 ===== */
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

int __thiscall FUN_1017f5b0(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar6 = param_2[1];
    if ((uVar6 <= (uint)param_2[2]) && (3 < param_2[2] - uVar6)) {
      param_2[1] = uVar6 + 4;
    }
    iVar3 = param_2[1];
    uVar6 = 0;
    do {
      iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + uVar6 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x14);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      iVar3 = FUN_1010c5f0(0x25);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar1 = piVar2[1];
      if ((uint)piVar2[2] < uVar1) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar6 = piVar2[1];
      if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
        piVar2[1] = uVar6 + 4;
      }
      uVar6 = 0;
      iVar3 = piVar2[1];
      puVar5 = (undefined4 *)(param_1 + 0x50);
      do {
        iVar4 = FUN_1010c560(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 0x14);
      iVar3 = piVar2[1] - iVar3;
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
      }
      if ((uVar1 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar1)) {
        param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
        *(undefined1 *)(uVar1 + *piVar2) = param_2._3_1_;
        param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
        *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
        *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
        *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
        return 0;
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_1017f770 @ 1017f770  size=442 ===== */
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

int __thiscall FUN_1017f770(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar6 = param_2[1];
    if ((uVar6 <= (uint)param_2[2]) && (3 < param_2[2] - uVar6)) {
      param_2[1] = uVar6 + 4;
    }
    iVar3 = param_2[1];
    uVar6 = 0;
    do {
      iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + uVar6 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x14);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      iVar3 = FUN_1010c5f0(0x25);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar1 = piVar2[1];
      if ((uint)piVar2[2] < uVar1) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar6 = piVar2[1];
      if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
        piVar2[1] = uVar6 + 4;
      }
      uVar6 = 0;
      iVar3 = piVar2[1];
      puVar5 = (undefined4 *)(param_1 + 0x50);
      do {
        iVar4 = FUN_1010c190(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 0x14);
      iVar3 = piVar2[1] - iVar3;
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
      }
      if ((uVar1 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar1)) {
        param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
        *(undefined1 *)(uVar1 + *piVar2) = param_2._3_1_;
        param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
        *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
        *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
        *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
        return 0;
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_1017fdd0 @ 1017fdd0  size=393 ===== */
// calls: _wassert
// strings:
//   "[weaponRecord]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[weaponRecordTime]"

/* WARNING: Removing unreachable block (ram,0x1017fde0) */
/* WARNING: Removing unreachable block (ram,0x1017fea0) */
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

int __thiscall FUN_1017fdd0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

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



/* ===== FUN_10180180 @ 10180180  size=233 ===== */
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

int __thiscall FUN_10180180(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar5 = param_2[1];
    if ((uVar5 <= (uint)param_2[2]) && (3 < param_2[2] - uVar5)) {
      param_2[1] = uVar5 + 4;
    }
    iVar3 = param_2[1];
    uVar5 = 0;
    do {
      iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x14);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      return 0;
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_10180270 @ 10180270  size=233 ===== */
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

int __thiscall FUN_10180270(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar5 = param_2[1];
    if ((uVar5 <= (uint)param_2[2]) && (3 < param_2[2] - uVar5)) {
      param_2[1] = uVar5 + 4;
    }
    iVar3 = param_2[1];
    uVar5 = 0;
    do {
      iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x14);
    iVar3 = param_2[1] - iVar3;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar4 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
      *(undefined1 *)(uVar1 + iVar4) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
      *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
      *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
      return 0;
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_101806e0 @ 101806e0  size=207 ===== */
// calls: _wassert
// strings:
//   "[weaponStyleData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x101806f0) */
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

int __thiscall FUN_101806e0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

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



/* ===== FUN_101863e0 @ 101863e0  size=534 ===== */
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

int __thiscall FUN_101863e0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
      iVar3 = FUN_1010c5f0(0x20);
      if ((iVar3 == 0) && (iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 1);
        if (iVar3 < 0) {
          return -6;
        }
        if (iVar3 < 0x65) {
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x35);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 5);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (100 < iVar3) {
            return -7;
          }
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              do {
                iVar4 = FUN_1010c0c0(param_1[iVar6 + 0x195]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (iVar3 < 0x65) {
            if (iVar3 < 1) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x1f9);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10186600 @ 10186600  size=534 ===== */
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

int __thiscall FUN_10186600(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
      iVar3 = FUN_1010c5f0(0x23);
      if ((iVar3 == 0) && (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 1);
        if (iVar3 < 0) {
          return -6;
        }
        if (iVar3 < 0x65) {
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x35);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 5);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (100 < iVar3) {
            return -7;
          }
          if (0 < iVar3) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              do {
                iVar4 = FUN_1010c0c0(param_1[iVar6 + 0x195]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = *(int *)(param_1 + 1);
          if (iVar3 < 0) {
            return -6;
          }
          if (iVar3 < 0x65) {
            if (iVar3 < 1) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar2 = param_2[1];
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 1)) {
              puVar5 = (undefined4 *)(param_1 + 0x1f9);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (iVar6 < *(int *)(param_1 + 1));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar2,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}



