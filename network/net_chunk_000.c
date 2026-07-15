/* ===== FUN_1010bf70 @ 1010bf70  size=71 ===== */
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

undefined4 __fastcall FUN_1010bf70(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar1)) {
    *(uint *)(param_1 + 4) = uVar1 + 4;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_1010c060 @ 1010c060  size=86 ===== */
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

undefined4 __thiscall FUN_1010c060(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
  }
  if ((uint)(param_1[2] - param_1[1]) < 2) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return 0;
}



/* ===== FUN_1010c0c0 @ 1010c0c0  size=77 ===== */
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

undefined4 __thiscall FUN_1010c0c0(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_1[2] == param_1[1]) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_1010c120 @ 1010c120  size=88 ===== */
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

undefined4 __thiscall FUN_1010c120(int *param_1,undefined2 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xf4);
  }
  if ((uint)(param_1[2] - param_1[1]) < 2) {
    return 0xffffffff;
  }
  *(char *)(param_1[1] + *param_1) = (char)((ushort)param_2 >> 8);
  *(char *)(param_1[1] + 1 + *param_1) = (char)param_2;
  param_1[1] = param_1[1] + 2;
  return 0;
}



/* ===== FUN_1010c190 @ 1010c190  size=111 ===== */
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

undefined4 __thiscall FUN_1010c190(int *param_1,undefined4 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
  }
  if ((uint)(param_1[2] - param_1[1]) < 4) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2._3_1_;
  *(undefined1 *)(param_1[1] + 1 + *param_1) = param_2._2_1_;
  *(char *)(param_1[1] + 2 + *param_1) = (char)((uint)param_2 >> 8);
  *(char *)(param_1[1] + 3 + *param_1) = (char)param_2;
  param_1[1] = param_1[1] + 4;
  return 0;
}



/* ===== FUN_1010c200 @ 1010c200  size=162 ===== */
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

undefined4 __thiscall FUN_1010c200(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x11c);
  }
  if ((uint)(param_1[2] - param_1[1]) < 8) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_3._3_1_;
  *(undefined1 *)(param_1[1] + 1 + *param_1) = param_3._2_1_;
  *(undefined1 *)(param_1[1] + 2 + *param_1) = param_3._1_1_;
  *(undefined1 *)(param_1[1] + 3 + *param_1) = (undefined1)param_3;
  *(undefined1 *)(param_1[1] + 4 + *param_1) = param_2._3_1_;
  *(undefined1 *)(param_1[1] + 5 + *param_1) = param_2._2_1_;
  *(undefined1 *)(param_1[1] + 6 + *param_1) = param_2._1_1_;
  *(undefined1 *)(param_1[1] + 7 + *param_1) = (undefined1)param_2;
  param_1[1] = param_1[1] + 8;
  return 0;
}



/* ===== FUN_1010c2b0 @ 1010c2b0  size=108 ===== */
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

undefined4 __thiscall FUN_1010c2b0(int *param_1,void *param_2,uint param_3)

{
  if (param_2 == (void *)0x0) {
    return 0xfffffff8;
  }
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x13e);
  }
  if ((uint)(param_1[2] - param_1[1]) < param_3) {
    return 0xffffffff;
  }
  memmove((void *)(*param_1 + param_1[1]),param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return 0;
}



/* ===== FUN_1010c320 @ 1010c320  size=76 ===== */
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

undefined4 __thiscall FUN_1010c320(int *param_1,undefined4 param_2,uint param_3)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x15d);
  }
  if ((param_3 <= (uint)param_1[2]) && (param_1[2] != param_3)) {
    *(undefined1 *)(param_3 + *param_1) = 0;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_1010c370 @ 1010c370  size=76 ===== */
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

undefined4 __thiscall FUN_1010c370(int *param_1,undefined4 param_2,uint param_3)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x15d);
  }
  if ((param_3 <= (uint)param_1[2]) && (param_1[2] != param_3)) {
    *(undefined1 *)(param_3 + *param_1) = 0;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_1010c3c0 @ 1010c3c0  size=102 ===== */
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

undefined4 __thiscall FUN_1010c3c0(int *param_1,undefined4 param_2,uint param_3)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
  }
  if ((param_3 <= (uint)param_1[2]) && (3 < param_1[2] - param_3)) {
    *(undefined1 *)(param_3 + *param_1) = param_2._3_1_;
    *(undefined1 *)(*param_1 + 1 + param_3) = param_2._2_1_;
    *(char *)(*param_1 + 2 + param_3) = (char)((uint)param_2 >> 8);
    *(char *)(*param_1 + 3 + param_3) = (char)param_2;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_1010c430 @ 1010c430  size=153 ===== */
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

undefined4 __thiscall FUN_1010c430(int *param_1,short param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x1da);
  }
  uVar4 = 0;
  uVar2 = param_2 >> 0xf ^ param_2 * 2;
  uVar3 = (uint)uVar2;
  if (param_1[2] != param_1[1]) {
    do {
      bVar1 = (byte)uVar3;
      uVar3 = uVar3 >> 7;
      uVar2 = (ushort)uVar3;
      bVar1 = bVar1 & 0x7f;
      if (uVar2 != 0) {
        bVar1 = bVar1 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar4) = bVar1;
      if (uVar2 == 0) goto LAB_1010c4a6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[2] - param_1[1]));
  }
  if (uVar2 == 0) {
LAB_1010c4a6:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar4;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1010c4d0 @ 1010c4d0  size=136 ===== */
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

undefined4 __thiscall FUN_1010c4d0(int *param_1,ushort param_2)

{
  byte bVar1;
  uint uVar2;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x1ea);
  }
  uVar2 = 0;
  if (param_1[2] != param_1[1]) {
    do {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 7;
      bVar1 = bVar1 & 0x7f;
      if (param_2 != 0) {
        bVar1 = bVar1 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar2) = bVar1;
      if (param_2 == 0) goto LAB_1010c535;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[2] - param_1[1]));
  }
  if (param_2 == 0) {
LAB_1010c535:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1010c560 @ 1010c560  size=141 ===== */
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

undefined4 __thiscall FUN_1010c560(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x1fa);
  }
  uVar3 = 0;
  uVar1 = param_2 >> 0x1f ^ param_2 * 2;
  if (param_1[2] != param_1[1]) {
    do {
      bVar2 = (byte)uVar1;
      uVar1 = uVar1 >> 7;
      bVar2 = bVar2 & 0x7f;
      if (uVar1 != 0) {
        bVar2 = bVar2 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar3) = bVar2;
      if (uVar1 == 0) goto LAB_1010c5ca;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[2] - param_1[1]));
  }
  if (uVar1 == 0) {
LAB_1010c5ca:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1010c5f0 @ 1010c5f0  size=129 ===== */
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

undefined4 __thiscall FUN_1010c5f0(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x20a);
  }
  uVar2 = 0;
  if (param_1[2] != param_1[1]) {
    do {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 7;
      bVar1 = bVar1 & 0x7f;
      if (param_2 != 0) {
        bVar1 = bVar1 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar2) = bVar1;
      if (param_2 == 0) goto LAB_1010c64e;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[2] - param_1[1]));
  }
  if (param_2 == 0) {
LAB_1010c64e:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1010c680 @ 1010c680  size=147 ===== */
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

undefined4 __thiscall FUN_1010c680(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x22a);
  }
  uVar2 = 0;
  if (param_1[2] != param_1[1]) {
    do {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 7 | param_3 << 0x19;
      bVar1 = bVar1 & 0x7f;
      param_3 = param_3 >> 7;
      if (param_2 != 0 || param_3 != 0) {
        bVar1 = bVar1 | 0x80;
      }
      *(byte *)(param_1[1] + *param_1 + uVar2) = bVar1;
      if ((param_2 == 0) && (param_3 == 0)) goto LAB_1010c6f4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[2] - param_1[1]));
  }
  if (param_2 == 0 && param_3 == 0) {
LAB_1010c6f4:
    if (param_1[2] != param_1[1]) {
      param_1[1] = param_1[1] + 1 + uVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1010c790 @ 1010c790  size=81 ===== */
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

undefined4 __thiscall FUN_1010c790(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
  }
  if (param_1[2] == param_1[1]) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_1010c800 @ 1010c800  size=96 ===== */
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

undefined4 __thiscall FUN_1010c800(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
  }
  if ((uint)(param_1[2] - param_1[1]) < 2) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + 1 + *param_1);
  param_2[1] = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 2;
  return 0;
}



/* ===== FUN_1010c870 @ 1010c870  size=122 ===== */
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

undefined4 __thiscall FUN_1010c870(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2b8);
  }
  if ((uint)(param_1[2] - param_1[1]) < 4) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + 3 + *param_1);
  param_2[1] = *(undefined1 *)(param_1[1] + 2 + *param_1);
  param_2[2] = *(undefined1 *)(param_1[1] + 1 + *param_1);
  param_2[3] = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 4;
  return 0;
}



/* ===== FUN_1010c8f0 @ 1010c8f0  size=174 ===== */
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

undefined4 __thiscall FUN_1010c8f0(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2cc);
  }
  if ((uint)(param_1[2] - param_1[1]) < 8) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + 7 + *param_1);
  param_2[1] = *(undefined1 *)(param_1[1] + 6 + *param_1);
  param_2[2] = *(undefined1 *)(param_1[1] + 5 + *param_1);
  param_2[3] = *(undefined1 *)(param_1[1] + 4 + *param_1);
  param_2[4] = *(undefined1 *)(param_1[1] + 3 + *param_1);
  param_2[5] = *(undefined1 *)(param_1[1] + 2 + *param_1);
  param_2[6] = *(undefined1 *)(param_1[1] + 1 + *param_1);
  param_2[7] = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 8;
  return 0;
}



/* ===== FUN_1010c9a0 @ 1010c9a0  size=110 ===== */
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

undefined4 __thiscall FUN_1010c9a0(int *param_1,void *param_2,uint param_3)

{
  if (param_2 == (void *)0x0) {
    return 0xfffffff8;
  }
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
  }
  if ((uint)(param_1[2] - param_1[1]) < param_3) {
    return 0xfffffffe;
  }
  memmove(param_2,(void *)(*param_1 + param_1[1]),param_3);
  param_1[1] = param_1[1] + param_3;
  return 0;
}



/* ===== FUN_1010ca10 @ 1010ca10  size=228 ===== */
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

undefined4 __thiscall FUN_1010ca10(int *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x39d);
  }
  iVar4 = 0;
  uVar5 = 0;
  *param_2 = 0;
  if (param_1[2] != param_1[1]) {
    iVar4 = *param_1 + param_1[1];
    bVar3 = 0;
    do {
      if (0xffffU >> (bVar3 & 0x1f) < ((int)(char)*(byte *)(iVar4 + uVar5) & 0x7fU)) {
        iVar4 = -1;
        goto LAB_1010ca9b;
      }
      *param_2 = *param_2 | (short)(char)(*(byte *)(iVar4 + uVar5) & 0x7f) << (bVar3 & 0x1f);
      iVar4 = *param_1 + param_1[1];
      if ((*(byte *)(iVar4 + uVar5) & 0x80) == 0) break;
      uVar5 = uVar5 + 1;
      bVar3 = bVar3 + 7;
    } while (uVar5 < (uint)(param_1[2] - param_1[1]));
    iVar4 = 0;
  }
LAB_1010ca9b:
  if (uVar5 == param_1[2] - param_1[1]) {
    iVar4 = -1;
  }
  else if ((iVar4 == 0) && (param_1[2] != param_1[1])) {
    iVar6 = uVar5 + 1;
    goto LAB_1010caaa;
  }
  iVar6 = 0;
LAB_1010caaa:
  uVar1 = *param_2;
  uVar2 = (ushort)((int)(uint)uVar1 >> 1);
  if ((uVar1 & 1) != 0) {
    uVar2 = ~uVar2;
  }
  *param_2 = uVar2 & 0x7fff | uVar1 << 0xf;
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  param_1[1] = param_1[1] + iVar6;
  return 0;
}



/* ===== FUN_1010cb00 @ 1010cb00  size=193 ===== */
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

undefined4 __thiscall FUN_1010cb00(int *param_1,ushort *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3ad);
  }
  iVar3 = 0;
  uVar5 = 0;
  *param_2 = 0;
  if (param_1[2] != param_1[1]) {
    iVar3 = *param_1 + param_1[1];
    bVar2 = 0;
    do {
      if (0xffffU >> (bVar2 & 0x1f) < ((int)(char)*(byte *)(iVar3 + uVar5) & 0x7fU)) {
        iVar3 = -1;
        goto LAB_1010cb92;
      }
      *param_2 = *param_2 | (short)(char)(*(byte *)(iVar3 + uVar5) & 0x7f) << (bVar2 & 0x1f);
      iVar3 = *param_1 + param_1[1];
      if ((*(byte *)(iVar3 + uVar5) & 0x80) == 0) break;
      uVar5 = uVar5 + 1;
      bVar2 = bVar2 + 7;
    } while (uVar5 < (uint)(param_1[2] - param_1[1]));
    iVar3 = 0;
  }
LAB_1010cb92:
  iVar4 = 0;
  iVar1 = param_1[1];
  if ((uVar5 != param_1[2] - iVar1) && (iVar3 == 0)) {
    if (param_1[2] != iVar1) {
      iVar4 = uVar5 + 1;
    }
    param_1[1] = iVar1 + iVar4;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== FUN_1010cbd0 @ 1010cbd0  size=209 ===== */
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

undefined4 __thiscall FUN_1010cbd0(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3bd);
  }
  uVar2 = 0;
  iVar4 = 0;
  *param_2 = 0;
  if (param_1[2] != param_1[1]) {
    iVar4 = *param_1 + param_1[1];
    bVar1 = 0;
    do {
      uVar5 = (int)*(char *)(iVar4 + uVar2) & 0x7f;
      if (0xffffffffU >> (bVar1 & 0x1f) < uVar5) {
        iVar4 = -1;
        goto LAB_1010cc4b;
      }
      *param_2 = *param_2 | uVar5 << (bVar1 & 0x1f);
      iVar4 = *param_1 + param_1[1];
      if ((*(byte *)(iVar4 + uVar2) & 0x80) == 0) break;
      uVar2 = uVar2 + 1;
      bVar1 = bVar1 + 7;
    } while (uVar2 < (uint)(param_1[2] - param_1[1]));
    iVar4 = 0;
  }
LAB_1010cc4b:
  if (uVar2 == param_1[2] - param_1[1]) {
    iVar4 = -1;
  }
  else if ((iVar4 == 0) && (param_1[2] != param_1[1])) {
    iVar3 = uVar2 + 1;
    goto LAB_1010cc5a;
  }
  iVar3 = 0;
LAB_1010cc5a:
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    uVar5 = (int)uVar2 >> 1 & 0x7fffffff;
  }
  else {
    uVar5 = ~uVar2 >> 1;
  }
  *param_2 = uVar5 | uVar2 << 0x1f;
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  param_1[1] = param_1[1] + iVar3;
  return 0;
}



/* ===== FUN_1010ccb0 @ 1010ccb0  size=181 ===== */
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

undefined4 __thiscall FUN_1010ccb0(int *param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3cd);
  }
  iVar4 = 0;
  uVar3 = 0;
  *param_2 = 0;
  if (param_1[2] != param_1[1]) {
    iVar4 = *param_1 + param_1[1];
    bVar2 = 0;
    do {
      uVar5 = (int)*(char *)(iVar4 + uVar3) & 0x7f;
      if (0xffffffffU >> (bVar2 & 0x1f) < uVar5) {
        iVar4 = -1;
        goto LAB_1010cd35;
      }
      *param_2 = *param_2 | uVar5 << (bVar2 & 0x1f);
      iVar4 = *param_1 + param_1[1];
      if ((*(byte *)(iVar4 + uVar3) & 0x80) == 0) break;
      uVar3 = uVar3 + 1;
      bVar2 = bVar2 + 7;
    } while (uVar3 < (uint)(param_1[2] - param_1[1]));
    iVar4 = 0;
  }
LAB_1010cd35:
  iVar6 = 0;
  iVar1 = param_1[1];
  if ((uVar3 != param_1[2] - iVar1) && (iVar4 == 0)) {
    if (param_1[2] != iVar1) {
      iVar6 = uVar3 + 1;
    }
    param_1[1] = iVar1 + iVar6;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== FUN_1010cd70 @ 1010cd70  size=234 ===== */
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

undefined4 __thiscall FUN_1010cd70(int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3ed);
  }
  iVar3 = 0;
  uVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[2] != param_1[1]) {
    iVar3 = *param_1 + param_1[1];
    do {
      cVar1 = *(char *)(iVar3 + uVar5);
      uVar6 = __aullshr();
      if (((int)((ulonglong)uVar6 >> 0x20) == 0) && ((uint)uVar6 < ((int)cVar1 & 0x7fU))) {
        iVar3 = -1;
        goto LAB_1010ce1f;
      }
      uVar6 = __allshl();
      param_2[1] = param_2[1] | (uint)((ulonglong)uVar6 >> 0x20);
      *param_2 = *param_2 | (uint)uVar6;
      iVar3 = *param_1 + param_1[1];
    } while (((*(byte *)(iVar3 + uVar5) & 0x80) != 0) &&
            (uVar5 = uVar5 + 1, uVar5 < (uint)(param_1[2] - param_1[1])));
    iVar3 = 0;
  }
LAB_1010ce1f:
  iVar4 = 0;
  iVar2 = param_1[1];
  if ((uVar5 != param_1[2] - iVar2) && (iVar3 == 0)) {
    if (param_1[2] != iVar2) {
      iVar4 = uVar5 + 1;
    }
    param_1[1] = iVar2 + iVar4;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== FUN_1010ce60 @ 1010ce60  size=76 ===== */
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

undefined4 __thiscall FUN_1010ce60(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x3fd);
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    return 0xfffffffe;
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return 0;
}



/* ===== FUN_1010d6a0 @ 1010d6a0  size=119 ===== */
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

int __thiscall FUN_1010d6a0(undefined1 *param_1,int *param_2)

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



/* ===== FUN_1010d720 @ 1010d720  size=119 ===== */
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

int __thiscall FUN_1010d720(undefined1 *param_1,int *param_2)

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



/* ===== FUN_1010d870 @ 1010d870  size=236 ===== */
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

uint __thiscall FUN_1010d870(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1010d960 @ 1010d960  size=236 ===== */
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

uint __thiscall FUN_1010d960(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1010f4e0 @ 1010f4e0  size=277 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[items]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[safeDataFlag]"

/* WARNING: Removing unreachable block (ram,0x1010f54f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[items]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[safeDataFlag]"" */

int __thiscall FUN_1010f4e0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (0x9c4 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[items]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1010e990(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[safeDataFlag]",&DAT_11d9e0b4,param_1[0x37d8f]);
  }
  return iVar1;
}



/* ===== FUN_10110a90 @ 10110a90  size=435 ===== */
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

int __thiscall FUN_10110a90(undefined1 *param_1,int *param_2)

{
  char *_Str;
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar10;
  undefined4 extraout_ECX_02;
  byte bVar11;
  
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
        iVar8 = param_2[1];
        _Str = param_1 + 1;
        sVar6 = strnlen(_Str,0x14);
        if (0x13 < sVar6) {
          return -3;
        }
        pcVar9 = _Str;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(_Str,(int)pcVar9 - (int)(param_1 + 2));
        if ((((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar8,iVar3), iVar5 == 0)) &&
            (iVar5 = FUN_1010c5f0(0x31), iVar5 == 0)) &&
           (iVar5 = FUN_1010c0c0(param_1[0x15]), iVar5 == 0)) {
          if (10 < (byte)param_1[0x15]) {
            return -7;
          }
          if ((param_1[0x15] != 0) && (iVar5 = FUN_1010c5f0(0x45), iVar5 == 0)) {
            iVar5 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar3 = param_2[1];
            bVar11 = 0;
            uVar10 = extraout_ECX_01;
            if (param_1[0x15] != '\0') {
              do {
                iVar8 = param_2[1];
                FUN_1010bf70(uVar10);
                iVar4 = param_2[1];
                iVar7 = FUN_1010feb0(param_2);
                if (iVar7 != 0) {
                  return iVar7;
                }
                iVar8 = FUN_1010c3c0(param_2[1] - iVar4,iVar8);
                if (iVar8 != 0) {
                  return iVar8;
                }
                bVar11 = bVar11 + 1;
                uVar10 = extraout_ECX_02;
              } while (bVar11 < (byte)param_1[0x15]);
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
            return iVar5;
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10110c50 @ 10110c50  size=435 ===== */
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

int __thiscall FUN_10110c50(undefined1 *param_1,int *param_2)

{
  char *_Str;
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar10;
  undefined4 extraout_ECX_02;
  byte bVar11;
  
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
        iVar8 = param_2[1];
        _Str = param_1 + 1;
        sVar6 = strnlen(_Str,0x14);
        if (0x13 < sVar6) {
          return -3;
        }
        pcVar9 = _Str;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(_Str,(int)pcVar9 - (int)(param_1 + 2));
        if ((((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar8,iVar3), iVar5 == 0)) &&
            (iVar5 = FUN_1010c5f0(0x31), iVar5 == 0)) &&
           (iVar5 = FUN_1010c0c0(param_1[0x15]), iVar5 == 0)) {
          if (10 < (byte)param_1[0x15]) {
            return -7;
          }
          if ((param_1[0x15] != 0) && (iVar5 = FUN_1010c5f0(0x45), iVar5 == 0)) {
            iVar5 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar3 = param_2[1];
            bVar11 = 0;
            uVar10 = extraout_ECX_01;
            if (param_1[0x15] != '\0') {
              do {
                iVar8 = param_2[1];
                FUN_1010bf70(uVar10);
                iVar4 = param_2[1];
                iVar7 = FUN_1010fff0(param_2);
                if (iVar7 != 0) {
                  return iVar7;
                }
                iVar8 = FUN_1010c3c0(param_2[1] - iVar4,iVar8);
                if (iVar8 != 0) {
                  return iVar8;
                }
                bVar11 = bVar11 + 1;
                uVar10 = extraout_ECX_02;
              } while (bVar11 < (byte)param_1[0x15]);
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
            return iVar5;
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101113f0 @ 101113f0  size=288 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[planId]"
//   "[name]"
//   "[equipCnt]"
//   "[equipList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10111491) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[planId]""
     ""[name]""
     ""[equipCnt]""
     ""[equipList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101113f0(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[planId]","0x%02x",*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a410(param_4,"[name]",param_1 + 1), iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[equipCnt]","0x%02x",param_1[0x15]), iVar1 == 0)
     ) {
    if (10 < (byte)param_1[0x15]) {
      return -7;
    }
    bVar2 = 0;
    if (param_1[0x15] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[equipList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_101106b0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < (byte)param_1[0x15]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_101117c0 @ 101117c0  size=318 ===== */
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

int __thiscall FUN_101117c0(undefined1 *param_1,int *param_2)

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
  byte bVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_1010c0c0(param_1[1]), iVar4 == 0)) {
        if (0x14 < (byte)param_1[1]) {
          return -7;
        }
        if ((param_1[1] != 0) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10110a90(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10111900 @ 10111900  size=318 ===== */
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

int __thiscall FUN_10111900(undefined1 *param_1,int *param_2)

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
  byte bVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_1010c0c0(param_1[1]), iVar4 == 0)) {
        if (0x14 < (byte)param_1[1]) {
          return -7;
        }
        if ((param_1[1] != 0) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10110c50(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10111b10 @ 10111b10  size=574 ===== */
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

int __thiscall FUN_10111b10(undefined1 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x3982) = 0;
  local_c = param_3 + param_2[1];
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (local_c <= (uint)param_2[1]) {
            if ((uint)param_2[1] <= local_c) {
              return 0;
            }
            return -0x22;
          }
          iVar1 = FUN_1010ccb0(&local_18);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = local_18 >> 4;
          if (uVar2 != 1) break;
          if ((param_1[0x3982] & 1) == 0) {
            *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 1;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return -2;
          }
          *param_1 = *(undefined1 *)(param_2[1] + *param_2);
          param_2[1] = param_2[1] + 1;
        }
        if (uVar2 != 2) break;
        if ((*(uint *)(param_1 + 0x3982) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      if (uVar2 == 3) break;
      iVar1 = FUN_1010d4f0();
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((*(uint *)(param_1 + 0x3982) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 4;
    }
    iStack_1c = 0;
    iVar1 = FUN_1010c870(&iStack_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_1c == 0) {
      return -0x25;
    }
    iStack_10 = param_2[1];
    bVar4 = 0;
    do {
      iStack_14 = 0;
      iVar1 = FUN_1010c870(&iStack_14);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((iStack_14 != 0) && (iVar1 = FUN_10110ee0(param_2,iStack_14), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = iStack_1c + iStack_10;
      uVar2 = param_2[1];
      if (uVar3 <= uVar2 && uVar2 != uVar3) {
        return -0x22;
      }
      if (uVar2 == uVar3) {
        param_1[1] = bVar4 + 1;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x14);
  } while( true );
}



/* ===== FUN_10111d50 @ 10111d50  size=574 ===== */
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

int __thiscall FUN_10111d50(undefined1 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x3982) = 0;
  local_c = param_3 + param_2[1];
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (local_c <= (uint)param_2[1]) {
            if ((uint)param_2[1] <= local_c) {
              return 0;
            }
            return -0x22;
          }
          iVar1 = FUN_1010ccb0(&local_18);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = local_18 >> 4;
          if (uVar2 != 1) break;
          if ((param_1[0x3982] & 1) == 0) {
            *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 1;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return -2;
          }
          *param_1 = *(undefined1 *)(param_2[1] + *param_2);
          param_2[1] = param_2[1] + 1;
        }
        if (uVar2 != 2) break;
        if ((*(uint *)(param_1 + 0x3982) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      if (uVar2 == 3) break;
      iVar1 = FUN_1010d4f0();
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((*(uint *)(param_1 + 0x3982) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x3982) = *(uint *)(param_1 + 0x3982) | 4;
    }
    iStack_1c = 0;
    iVar1 = FUN_1010c870(&iStack_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_1c == 0) {
      return -0x25;
    }
    iStack_10 = param_2[1];
    bVar4 = 0;
    do {
      iStack_14 = 0;
      iVar1 = FUN_1010c870(&iStack_14);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((iStack_14 != 0) && (iVar1 = FUN_10111100(param_2,iStack_14), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = iStack_1c + iStack_10;
      uVar2 = param_2[1];
      if (uVar3 <= uVar2 && uVar2 != uVar3) {
        return -0x22;
      }
      if (uVar2 == uVar3) {
        param_1[1] = bVar4 + 1;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x14);
  } while( true );
}



/* ===== FUN_10112060 @ 10112060  size=259 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[curPlan]"
//   "[planCnt]"
//   "[equipPlanList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101120e1) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[curPlan]""
     ""[planCnt]""
     ""[equipPlanList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10112060(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[curPlan]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[planCnt]","0x%02x",param_1[1]), iVar1 == 0)) {
    if (0x14 < (byte)param_1[1]) {
      return -7;
    }
    bVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[equipPlanList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_101113f0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < (byte)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10112590 @ 10112590  size=241 ===== */
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

int __thiscall FUN_10112590(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
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
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
      }
      iVar3 = FUN_1010c870(param_1);
LAB_1011264e:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1011264e;
      }
      if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
      }
      if ((uint)(param_2[2] - param_2[1]) < 2) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(*param_2 + 1 + param_2[1]);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(*param_2 + param_2[1]);
      param_2[1] = param_2[1] + 2;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_101130b0 @ 101130b0  size=227 ===== */
// calls: _wassert
// strings:
//   "[itemBattleUseCount]"
//   "[itemBattleUse]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1011311b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[itemBattleUseCount]""
     ""[itemBattleUse]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101130b0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[itemBattleUseCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[itemBattleUse]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10112790(param_2,iVar1,param_4);
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



/* ===== FUN_101145e0 @ 101145e0  size=318 ===== */
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

int __thiscall FUN_101145e0(undefined1 *param_1,int *param_2)

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
  byte bVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_1010c0c0(param_1[1]), iVar4 == 0)) {
        if (5 < (byte)param_1[1]) {
          return -7;
        }
        if ((param_1[1] != 0) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10113440(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10114720 @ 10114720  size=318 ===== */
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

int __thiscall FUN_10114720(undefined1 *param_1,int *param_2)

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
  byte bVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_1010c0c0(param_1[1]), iVar4 == 0)) {
        if (5 < (byte)param_1[1]) {
          return -7;
        }
        if ((param_1[1] != 0) && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_101136c0(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10114930 @ 10114930  size=574 ===== */
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

int __thiscall FUN_10114930(undefined1 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x7aa) = 0;
  local_c = param_3 + param_2[1];
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (local_c <= (uint)param_2[1]) {
            if ((uint)param_2[1] <= local_c) {
              return 0;
            }
            return -0x22;
          }
          iVar1 = FUN_1010ccb0(&local_18);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = local_18 >> 4;
          if (uVar2 != 1) break;
          if ((param_1[0x7aa] & 1) == 0) {
            *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 1;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return -2;
          }
          *param_1 = *(undefined1 *)(param_2[1] + *param_2);
          param_2[1] = param_2[1] + 1;
        }
        if (uVar2 != 2) break;
        if ((*(uint *)(param_1 + 0x7aa) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      if (uVar2 == 3) break;
      iVar1 = FUN_1010d4f0();
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((*(uint *)(param_1 + 0x7aa) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 4;
    }
    iStack_1c = 0;
    iVar1 = FUN_1010c870(&iStack_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_1c == 0) {
      return -0x25;
    }
    iStack_10 = param_2[1];
    bVar4 = 0;
    do {
      iStack_14 = 0;
      iVar1 = FUN_1010c870(&iStack_14);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((iStack_14 != 0) && (iVar1 = FUN_10113a10(param_2,iStack_14), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = iStack_1c + iStack_10;
      uVar2 = param_2[1];
      if (uVar3 <= uVar2 && uVar2 != uVar3) {
        return -0x22;
      }
      if (uVar2 == uVar3) {
        param_1[1] = bVar4 + 1;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 5);
  } while( true );
}



/* ===== FUN_10114b70 @ 10114b70  size=574 ===== */
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

int __thiscall FUN_10114b70(undefined1 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x7aa) = 0;
  local_c = param_3 + param_2[1];
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (local_c <= (uint)param_2[1]) {
            if ((uint)param_2[1] <= local_c) {
              return 0;
            }
            return -0x22;
          }
          iVar1 = FUN_1010ccb0(&local_18);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = local_18 >> 4;
          if (uVar2 != 1) break;
          if ((param_1[0x7aa] & 1) == 0) {
            *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 1;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return -2;
          }
          *param_1 = *(undefined1 *)(param_2[1] + *param_2);
          param_2[1] = param_2[1] + 1;
        }
        if (uVar2 != 2) break;
        if ((*(uint *)(param_1 + 0x7aa) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 2;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      if (uVar2 == 3) break;
      iVar1 = FUN_1010d4f0();
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((*(uint *)(param_1 + 0x7aa) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x7aa) = *(uint *)(param_1 + 0x7aa) | 4;
    }
    iStack_1c = 0;
    iVar1 = FUN_1010c870(&iStack_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_1c == 0) {
      return -0x25;
    }
    iStack_10 = param_2[1];
    bVar4 = 0;
    do {
      iStack_14 = 0;
      iVar1 = FUN_1010c870(&iStack_14);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((iStack_14 != 0) && (iVar1 = FUN_10113d40(param_2,iStack_14), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = iStack_1c + iStack_10;
      uVar2 = param_2[1];
      if (uVar3 <= uVar2 && uVar2 != uVar3) {
        return -0x22;
      }
      if (uVar2 == uVar3) {
        param_1[1] = bVar4 + 1;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 5);
  } while( true );
}



/* ===== FUN_10114e80 @ 10114e80  size=259 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[curPlan]"
//   "[planCnt]"
//   "[supplyPlanList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10114f01) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[curPlan]""
     ""[planCnt]""
     ""[supplyPlanList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10114e80(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[curPlan]","0x%02x",*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[planCnt]","0x%02x",param_1[1]), iVar1 == 0)) {
    if (5 < (byte)param_1[1]) {
      return -7;
    }
    bVar2 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[supplyPlanList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10114140(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < (byte)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_101150a0 @ 101150a0  size=77 ===== */
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

undefined4 __thiscall FUN_101150a0(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_1[2] == param_1[1]) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_101150f0 @ 101150f0  size=81 ===== */
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

undefined4 __thiscall FUN_101150f0(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
  }
  if (param_1[2] == param_1[1]) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_101159e0 @ 101159e0  size=77 ===== */
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

undefined4 __thiscall FUN_101159e0(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_1[2] == param_1[1]) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_10115a30 @ 10115a30  size=81 ===== */
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

undefined4 __thiscall FUN_10115a30(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
  }
  if (param_1[2] == param_1[1]) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_10117f20 @ 10117f20  size=256 ===== */
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

int __thiscall FUN_10117f20(char *param_1,int param_2)

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
    sVar6 = strnlen(param_1,0x20);
    if (0x1f < sVar6) {
      return -3;
    }
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,(int)pcVar7 - (int)(param_1 + 1));
    if ((((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar5 == 0))
        && (iVar5 = FUN_1010c5f0(0x20), iVar5 == 0)) &&
       (((iVar5 = FUN_1010c680(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24)),
         iVar5 == 0 && (iVar5 = FUN_1010c5f0(0x30), iVar5 == 0)) &&
        ((iVar5 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x28)), iVar5 == 0 &&
         (iVar5 = FUN_1010c5f0(0x40), iVar5 == 0)))))) {
      iVar5 = FUN_1010c680(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
  }
  return iVar5;
}



/* ===== FUN_10118030 @ 10118030  size=256 ===== */
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

int __thiscall FUN_10118030(char *param_1,int param_2)

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
    sVar6 = strnlen(param_1,0x20);
    if (0x1f < sVar6) {
      return -3;
    }
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_1010c2b0(param_1,(int)pcVar7 - (int)(param_1 + 1));
    if ((((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar5 == 0))
        && (iVar5 = FUN_1010c5f0(0x24), iVar5 == 0)) &&
       (((iVar5 = FUN_1010c200(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24)),
         iVar5 == 0 && (iVar5 = FUN_1010c5f0(0x33), iVar5 == 0)) &&
        ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x28)), iVar5 == 0 &&
         (iVar5 = FUN_1010c5f0(0x44), iVar5 == 0)))))) {
      iVar5 = FUN_1010c200(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
  }
  return iVar5;
}



/* ===== FUN_101188d0 @ 101188d0  size=674 ===== */
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

int __thiscall FUN_101188d0(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar7 = FUN_1010c5f0(0x15);
  if (iVar7 == 0) {
    uVar3 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar3) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar4 = *(uint *)(param_2 + 4);
    if ((uVar4 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar4)) {
      *(uint *)(param_2 + 4) = uVar4 + 4;
    }
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = FUN_10117f20(param_2);
    if ((((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3), iVar7 == 0))
        && (iVar7 = FUN_1010c5f0(0x20), iVar7 == 0)) &&
       ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x38)), iVar7 == 0 &&
        (iVar7 = FUN_1010c5f0(0x35), iVar7 == 0)))) {
      uVar6 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar5 = *(int *)(param_2 + 4);
      pcVar1 = (char *)(param_1 + 0x3c);
      sVar8 = strnlen(pcVar1,0x80);
      if (0x7f < sVar8) {
        return -3;
      }
      pcVar9 = pcVar1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x3d));
      if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0))
         && (iVar7 = FUN_1010c5f0(0x45), iVar7 == 0)) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar5 = *(int *)(param_2 + 4);
        pcVar1 = (char *)(param_1 + 0xbc);
        sVar8 = strnlen(pcVar1,0x20);
        if (0x1f < sVar8) {
          return -3;
        }
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0xbd));
        if ((((iVar7 == 0) &&
             (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
            (iVar7 = FUN_1010c5f0(0x50), iVar7 == 0)) &&
           ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0xdc)), iVar7 == 0 &&
            (iVar7 = FUN_1010c5f0(0x65), iVar7 == 0)))) {
          uVar6 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar5 = *(int *)(param_2 + 4);
          pcVar1 = (char *)(param_1 + 0xe0);
          sVar8 = strnlen(pcVar1,0x100);
          if (0xff < sVar8) {
            return -3;
          }
          pcVar9 = pcVar1;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0xe1));
          if (((iVar7 == 0) &&
              (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
             ((iVar7 = FUN_1010c5f0(0x70), iVar7 == 0 &&
              ((((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e0)), iVar7 == 0 &&
                 (iVar7 = FUN_1010c5f0(0x80), iVar7 == 0)) &&
                (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e4)), iVar7 == 0)) &&
               (iVar7 = FUN_1010c5f0(0x90), iVar7 == 0)))))) {
            iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e8));
          }
        }
      }
    }
  }
  return iVar7;
}



/* ===== FUN_10118b80 @ 10118b80  size=674 ===== */
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

int __thiscall FUN_10118b80(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar7 = FUN_1010c5f0(0x15);
  if (iVar7 == 0) {
    uVar3 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar3) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar4 = *(uint *)(param_2 + 4);
    if ((uVar4 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar4)) {
      *(uint *)(param_2 + 4) = uVar4 + 4;
    }
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = FUN_10118030(param_2);
    if ((((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3), iVar7 == 0))
        && (iVar7 = FUN_1010c5f0(0x23), iVar7 == 0)) &&
       ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x38)), iVar7 == 0 &&
        (iVar7 = FUN_1010c5f0(0x35), iVar7 == 0)))) {
      uVar6 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar5 = *(int *)(param_2 + 4);
      pcVar1 = (char *)(param_1 + 0x3c);
      sVar8 = strnlen(pcVar1,0x80);
      if (0x7f < sVar8) {
        return -3;
      }
      pcVar9 = pcVar1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x3d));
      if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0))
         && (iVar7 = FUN_1010c5f0(0x45), iVar7 == 0)) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar5 = *(int *)(param_2 + 4);
        pcVar1 = (char *)(param_1 + 0xbc);
        sVar8 = strnlen(pcVar1,0x20);
        if (0x1f < sVar8) {
          return -3;
        }
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0xbd));
        if ((((iVar7 == 0) &&
             (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
            (iVar7 = FUN_1010c5f0(0x53), iVar7 == 0)) &&
           ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0xdc)), iVar7 == 0 &&
            (iVar7 = FUN_1010c5f0(0x65), iVar7 == 0)))) {
          uVar6 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar5 = *(int *)(param_2 + 4);
          pcVar1 = (char *)(param_1 + 0xe0);
          sVar8 = strnlen(pcVar1,0x100);
          if (0xff < sVar8) {
            return -3;
          }
          pcVar9 = pcVar1;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0xe1));
          if (((iVar7 == 0) &&
              (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
             ((iVar7 = FUN_1010c5f0(0x73), iVar7 == 0 &&
              ((((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e0)), iVar7 == 0 &&
                 (iVar7 = FUN_1010c5f0(0x83), iVar7 == 0)) &&
                (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e4)), iVar7 == 0)) &&
               (iVar7 = FUN_1010c5f0(0x93), iVar7 == 0)))))) {
            iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e8));
          }
        }
      }
    }
  }
  return iVar7;
}



/* ===== FUN_101195f0 @ 101195f0  size=407 ===== */
// calls: _wassert
// strings:
//   "[role]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[level]"
//   "[hunterStar]"
//   "[name]"
//   "[icon]"
//   "[note]"
//   "[gold]"
//   "[bindGold]"
//   "[hRLevel]"

/* WARNING: Removing unreachable block (ram,0x10119600) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[role]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[level]""
     ""[hunterStar]""
     ""[name]""
     ""[icon]""
     ""[note]""
     ""[gold]""
     ""[bindGold]"" */

void __thiscall FUN_101195f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[role]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10118580(param_2,iVar1,param_4);
    if (((((iVar1 == 0) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x38)), iVar1 == 0)) &&
         (iVar1 = FUN_1024a410(param_4,"[hunterStar]",param_1 + 0x3c), iVar1 == 0)) &&
        ((iVar1 = FUN_1024a410(param_4,"[name]",param_1 + 0xbc), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[icon]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0xdc)), iVar1 == 0)))) &&
       ((iVar1 = FUN_1024a410(param_4,"[note]",param_1 + 0xe0), iVar1 == 0 &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[gold]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x1e0)), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bindGold]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x1e4)), iVar1 == 0)))))) {
      FUN_1024a290(param_2,param_3,param_4,"[hRLevel]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x1e8));
    }
  }
  return;
}



/* ===== FUN_1011e280 @ 1011e280  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[depotsRights]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1011e2e9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[depotsRights]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1011e280(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[depotsRights]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1011d960(param_2,iVar1,param_4);
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



/* ===== FUN_1011f760 @ 1011f760  size=232 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[titles]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1011f7cd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[titles]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1011f760(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[titles]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1011ed60(param_2,iVar1,param_4);
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



/* ===== FUN_1011fac0 @ 1011fac0  size=206 ===== */
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

void __thiscall FUN_1011fac0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = FUN_1011b090(param_2);
    if ((((iVar4 == 0) && (iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar1), iVar3 == 0))
        && (iVar3 = FUN_1010c5f0(0x20), iVar3 == 0)) &&
       (((iVar3 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x48)), iVar3 == 0 &&
         (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
        ((iVar3 = FUN_101159e0(*(undefined1 *)(param_1 + 0x4c)), iVar3 == 0 &&
         (iVar3 = FUN_1010c5f0(0x40), iVar3 == 0)))))) {
      FUN_1010c560(*(undefined4 *)(param_1 + 0x4d));
    }
  }
  return;
}



/* ===== FUN_1011fb90 @ 1011fb90  size=206 ===== */
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

void __thiscall FUN_1011fb90(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = FUN_1011b160(param_2);
    if ((((iVar4 == 0) && (iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar1), iVar3 == 0))
        && (iVar3 = FUN_1010c5f0(0x23), iVar3 == 0)) &&
       (((iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x48)), iVar3 == 0 &&
         (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
        ((iVar3 = FUN_101159e0(*(undefined1 *)(param_1 + 0x4c)), iVar3 == 0 &&
         (iVar3 = FUN_1010c5f0(0x43), iVar3 == 0)))))) {
      FUN_1010c190(*(undefined4 *)(param_1 + 0x4d));
    }
  }
  return;
}



/* ===== FUN_101200e0 @ 101200e0  size=220 ===== */
// calls: _wassert
// strings:
//   "[commerceBoatInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[contributeResPoint]"
//   "0x%02x"
//   "[challengeTimes]"
//   "[refreshTimestamp]"

/* WARNING: Removing unreachable block (ram,0x101200f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[commerceBoatInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[contributeResPoint]""
     ""0x%02x""
     ""[challengeTimes]""
     ""[refreshTimestamp]"" */

void __thiscall FUN_101200e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[commerceBoatInfo]",(int)(char)param_4),
     iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_1011b670(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[contributeResPoint]",&DAT_11d9f574,
                              *(undefined4 *)(param_1 + 0x48)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[challengeTimes]","0x%02x",
                             (int)*(char *)(param_1 + 0x4c)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[refreshTimestamp]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x4d));
    }
  }
  return;
}



/* ===== FUN_10120540 @ 10120540  size=1304 ===== */
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

int __thiscall FUN_10120540(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar7 = FUN_1010c5f0(0x15);
  if (iVar7 == 0) {
    uVar3 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar3) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar4 = *(uint *)(param_2 + 4);
    if ((uVar4 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar4)) {
      *(uint *)(param_2 + 4) = uVar4 + 4;
    }
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = FUN_10117f20(param_2);
    if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3), iVar7 == 0)) &&
       (iVar7 = FUN_1010c5f0(0x25), iVar7 == 0)) {
      uVar6 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar5 = *(int *)(param_2 + 4);
      pcVar1 = (char *)(param_1 + 0x38);
      sVar8 = strnlen(pcVar1,0x100);
      if (0xff < sVar8) {
        return -3;
      }
      pcVar9 = pcVar1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x39));
      if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0))
         && ((iVar7 = FUN_1010c5f0(0x30), iVar7 == 0 &&
             ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x138)), iVar7 == 0 &&
              (iVar7 = FUN_1010c5f0(0x45), iVar7 == 0)))))) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar5 = *(int *)(param_2 + 4);
        pcVar1 = (char *)(param_1 + 0x13c);
        sVar8 = strnlen(pcVar1,0x80);
        if (0x7f < sVar8) {
          return -3;
        }
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x13d));
        if ((((((iVar7 == 0) &&
               (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
              (iVar7 = FUN_1010c5f0(0x50), iVar7 == 0)) &&
             ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1bc)), iVar7 == 0 &&
              (iVar7 = FUN_1010c5f0(0x60), iVar7 == 0)))) &&
            ((iVar7 = FUN_1010c680(*(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c4)
                                  ), iVar7 == 0 &&
             ((iVar7 = FUN_1010c5f0(0x70), iVar7 == 0 &&
              (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1c8)), iVar7 == 0)))))) &&
           ((((iVar7 = FUN_1010c5f0(0x80), iVar7 == 0 &&
              (((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1cc)), iVar7 == 0 &&
                (iVar7 = FUN_1010c5f0(0x90), iVar7 == 0)) &&
               (iVar7 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x1d0)), iVar7 == 0)))) &&
             (((((iVar7 = FUN_1010c5f0(0xa0), iVar7 == 0 &&
                 (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1d4)), iVar7 == 0)) &&
                ((iVar7 = FUN_1010c5f0(0xb0), iVar7 == 0 &&
                 ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1d8)), iVar7 == 0 &&
                  (iVar7 = FUN_1010c5f0(0xc0), iVar7 == 0)))))) &&
               (iVar7 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x1dc)), iVar7 == 0)) &&
              ((((((iVar7 = FUN_1010c5f0(0xd0), iVar7 == 0 &&
                   (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e0)), iVar7 == 0)) &&
                  (iVar7 = FUN_1010c5f0(0xe0), iVar7 == 0)) &&
                 (((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e4)), iVar7 == 0 &&
                   (iVar7 = FUN_1010c5f0(0xf0), iVar7 == 0)) &&
                  ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1e8)), iVar7 == 0 &&
                   ((iVar7 = FUN_1010c5f0(0x100), iVar7 == 0 &&
                    (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1ec)), iVar7 == 0)))))))) &&
                (iVar7 = FUN_1010c5f0(0x110), iVar7 == 0)) &&
               ((((((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1f0)), iVar7 == 0 &&
                    (iVar7 = FUN_1010c5f0(0x120), iVar7 == 0)) &&
                   (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 500)), iVar7 == 0)) &&
                  ((iVar7 = FUN_1010c5f0(0x130), iVar7 == 0 &&
                   (iVar7 = FUN_1010c680(*(undefined4 *)(param_1 + 0x1f8),
                                         *(undefined4 *)(param_1 + 0x1fc)), iVar7 == 0)))) &&
                 (iVar7 = FUN_1010c5f0(0x140), iVar7 == 0)) &&
                ((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x200)), iVar7 == 0 &&
                 (iVar7 = FUN_1010c5f0(0x150), iVar7 == 0)))))))))) &&
            ((((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x204)), iVar7 == 0 &&
               (((iVar7 = FUN_1010c5f0(0x160), iVar7 == 0 &&
                 (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x208)), iVar7 == 0)) &&
                (iVar7 = FUN_1010c5f0(0x170), iVar7 == 0)))) &&
              (((iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x20c)), iVar7 == 0 &&
                (iVar7 = FUN_1010c5f0(0x180), iVar7 == 0)) &&
               (iVar7 = FUN_1010c560(*(undefined4 *)(param_1 + 0x210)), iVar7 == 0)))) &&
             (iVar7 = FUN_1010c5f0(0x195), iVar7 == 0)))))) {
          uVar6 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar5 = *(int *)(param_2 + 4);
          iVar7 = FUN_1011fac0(param_2);
          if (iVar7 == 0) {
            iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6);
          }
        }
      }
    }
  }
  return iVar7;
}



/* ===== FUN_10120a60 @ 10120a60  size=1304 ===== */
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

int __thiscall FUN_10120a60(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar7 = FUN_1010c5f0(0x15);
  if (iVar7 == 0) {
    uVar3 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar3) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar4 = *(uint *)(param_2 + 4);
    if ((uVar4 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar4)) {
      *(uint *)(param_2 + 4) = uVar4 + 4;
    }
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = FUN_10118030(param_2);
    if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3), iVar7 == 0)) &&
       (iVar7 = FUN_1010c5f0(0x25), iVar7 == 0)) {
      uVar6 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar5 = *(int *)(param_2 + 4);
      pcVar1 = (char *)(param_1 + 0x38);
      sVar8 = strnlen(pcVar1,0x100);
      if (0xff < sVar8) {
        return -3;
      }
      pcVar9 = pcVar1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x39));
      if (((iVar7 == 0) && (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0))
         && ((iVar7 = FUN_1010c5f0(0x33), iVar7 == 0 &&
             ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x138)), iVar7 == 0 &&
              (iVar7 = FUN_1010c5f0(0x45), iVar7 == 0)))))) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar5 = *(int *)(param_2 + 4);
        pcVar1 = (char *)(param_1 + 0x13c);
        sVar8 = strnlen(pcVar1,0x80);
        if (0x7f < sVar8) {
          return -3;
        }
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar7 = FUN_1010c2b0(pcVar1,(int)pcVar9 - (param_1 + 0x13d));
        if ((((((iVar7 == 0) &&
               (iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6), iVar7 == 0)) &&
              (iVar7 = FUN_1010c5f0(0x53), iVar7 == 0)) &&
             ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1bc)), iVar7 == 0 &&
              (iVar7 = FUN_1010c5f0(100), iVar7 == 0)))) &&
            ((iVar7 = FUN_1010c200(*(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c4)
                                  ), iVar7 == 0 &&
             ((iVar7 = FUN_1010c5f0(0x73), iVar7 == 0 &&
              (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c8)), iVar7 == 0)))))) &&
           ((((iVar7 = FUN_1010c5f0(0x83), iVar7 == 0 &&
              (((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1cc)), iVar7 == 0 &&
                (iVar7 = FUN_1010c5f0(0x93), iVar7 == 0)) &&
               (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1d0)), iVar7 == 0)))) &&
             (((((iVar7 = FUN_1010c5f0(0xa3), iVar7 == 0 &&
                 (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1d4)), iVar7 == 0)) &&
                ((iVar7 = FUN_1010c5f0(0xb3), iVar7 == 0 &&
                 ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1d8)), iVar7 == 0 &&
                  (iVar7 = FUN_1010c5f0(0xc3), iVar7 == 0)))))) &&
               (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1dc)), iVar7 == 0)) &&
              ((((((iVar7 = FUN_1010c5f0(0xd3), iVar7 == 0 &&
                   (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e0)), iVar7 == 0)) &&
                  (iVar7 = FUN_1010c5f0(0xe3), iVar7 == 0)) &&
                 (((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e4)), iVar7 == 0 &&
                   (iVar7 = FUN_1010c5f0(0xf3), iVar7 == 0)) &&
                  ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1e8)), iVar7 == 0 &&
                   ((iVar7 = FUN_1010c5f0(0x103), iVar7 == 0 &&
                    (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1ec)), iVar7 == 0)))))))) &&
                (iVar7 = FUN_1010c5f0(0x113), iVar7 == 0)) &&
               ((((((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1f0)), iVar7 == 0 &&
                    (iVar7 = FUN_1010c5f0(0x123), iVar7 == 0)) &&
                   (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 500)), iVar7 == 0)) &&
                  ((iVar7 = FUN_1010c5f0(0x134), iVar7 == 0 &&
                   (iVar7 = FUN_1010c200(*(undefined4 *)(param_1 + 0x1f8),
                                         *(undefined4 *)(param_1 + 0x1fc)), iVar7 == 0)))) &&
                 (iVar7 = FUN_1010c5f0(0x143), iVar7 == 0)) &&
                ((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x200)), iVar7 == 0 &&
                 (iVar7 = FUN_1010c5f0(0x153), iVar7 == 0)))))))))) &&
            ((((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x204)), iVar7 == 0 &&
               (((iVar7 = FUN_1010c5f0(0x163), iVar7 == 0 &&
                 (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x208)), iVar7 == 0)) &&
                (iVar7 = FUN_1010c5f0(0x173), iVar7 == 0)))) &&
              (((iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20c)), iVar7 == 0 &&
                (iVar7 = FUN_1010c5f0(0x183), iVar7 == 0)) &&
               (iVar7 = FUN_1010c190(*(undefined4 *)(param_1 + 0x210)), iVar7 == 0)))) &&
             (iVar7 = FUN_1010c5f0(0x195), iVar7 == 0)))))) {
          uVar6 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar5 = *(int *)(param_2 + 4);
          iVar7 = FUN_1011fb90(param_2);
          if (iVar7 == 0) {
            iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar6);
          }
        }
      }
    }
  }
  return iVar7;
}



/* ===== FUN_10121d40 @ 10121d40  size=1044 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[note]"
//   "[level]"
//   "[hunterStar]"
//   "[contribution]"
//   "%I64u"
//   "[contributionAcc]"
//   "[wage]"
//   "[title]"
//   "[offlineTime]"
//   "[depotOpCount]"
//   "[hRLevel]"
//   "[joinTime]"
//   "[wildHuntSoul]"
//   "[wildHuntPhase]"
//   "[celebrationTask]"
//   "[preCelebrationTask]"
//   "[celebrationScore]"
//   "[celebrationReward]"

/* WARNING: Removing unreachable block (ram,0x10121d51) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[note]""
     ""[level]""
     ""[hunterStar]""
     ""[contribution]""
     ""%I64u""
     ""[contributionAcc]""
     ""[wage]""
     ""[title]"" */

void __thiscall FUN_10121d40(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,&DAT_11d9faa0,(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10118580(param_2,iVar1,param_4);
    if ((((((((iVar1 == 0) && (iVar1 = FUN_1024a410(param_4,"[note]",param_1 + 0x38), iVar1 == 0))
            && (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x138)), iVar1 == 0)) &&
           (((iVar1 = FUN_1024a410(param_4,"[hunterStar]",param_1 + 0x13c), iVar1 == 0 &&
             (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[contribution]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x1bc)), iVar1 == 0)) &&
            ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[contributionAcc]","%I64u",
                                   *(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c4)
                                  ), iVar1 == 0 &&
             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wage]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x1c8)), iVar1 == 0 &&
              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[title]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x1cc)), iVar1 == 0)))))))) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[offlineTime]",&DAT_11d9f574,
                                *(undefined4 *)(param_1 + 0x1d0)), iVar1 == 0)) &&
         (((((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[depotOpCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x1d4)), iVar1 == 0 &&
             (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[hRLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x1d8)), iVar1 == 0)) &&
            (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[joinTime]",&DAT_11d9f574,
                                  *(undefined4 *)(param_1 + 0x1dc)), iVar1 == 0)) &&
           ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wildHuntSoul]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x1e0)), iVar1 == 0 &&
            (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wildHuntPhase]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x1e4)), iVar1 == 0)))) &&
          ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[celebrationTask]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x1e8)), iVar1 == 0 &&
           ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[preCelebrationTask]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x1ec)), iVar1 == 0 &&
            (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[celebrationScore]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x1f0)), iVar1 == 0)))))))) &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[celebrationReward]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 500)), iVar1 == 0 &&
         (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[contributionWeekAcc]","%I64u",
                                 *(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc)),
           iVar1 == 0 &&
           (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[levelupAll]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x200)), iVar1 == 0)) &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[hunterCount]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x204)), iVar1 == 0)))))) &&
       (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[taskCount]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x208)), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[isBaned]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x20c)), iVar1 == 0)) &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[banedTime]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x210)), iVar1 == 0 &&
         (iVar1 = FUN_1024a1e0(param_4,"[guildWar]",extraout_ECX), iVar1 == 0)))))) {
      if (param_3 < 0) {
        FUN_101200e0(param_2,param_3,param_4);
        return;
      }
      FUN_101200e0(param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_10122b60 @ 10122b60  size=230 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[guilders]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10122bcb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[guilders]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10122b60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[guilders]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10121d40(param_2,iVar1,param_4);
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



/* ===== FUN_10123940 @ 10123940  size=326 ===== */
// calls: _wassert
// strings:
//   "[role]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[level]"
//   "[hunterStar]"
//   "[note]"
//   "[time]"
//   "[hRLevel]"

/* WARNING: Removing unreachable block (ram,0x1012397b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[role]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[level]""
     ""[hunterStar]""
     ""[note]""
     ""[time]""
     ""[hRLevel]"" */

void __thiscall FUN_10123940(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,&DAT_11d9faa0,&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[role]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10118580(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,param_1[0xf]),
        iVar1 == 0)) &&
       ((iVar1 = FUN_1024a410(param_4,"[hunterStar]",param_1 + 0x10), iVar1 == 0 &&
        ((iVar1 = FUN_1024a410(param_4,"[note]",param_1 + 0x30), iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[time]",&DAT_11d9e0b4,param_1[0x70]),
         iVar1 == 0)))))) {
      FUN_1024a290(param_2,param_3,param_4,"[hRLevel]",&DAT_11d9e0b4,param_1[0x71]);
    }
  }
  return;
}



/* ===== FUN_101243d0 @ 101243d0  size=230 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[applys]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1012443b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[applys]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101243d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[applys]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10123940(param_2,iVar1,param_4);
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



/* ===== FUN_10124840 @ 10124840  size=226 ===== */
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

int __thiscall FUN_10124840(int param_1,int *param_2,int param_3)

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
LAB_101248ef:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101248ef;
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



/* ===== FUN_10124930 @ 10124930  size=296 ===== */
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

uint __thiscall FUN_10124930(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_101257d0 @ 101257d0  size=226 ===== */
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

int __thiscall FUN_101257d0(int param_1,int *param_2,int param_3)

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
LAB_1012587f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1012587f;
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



/* ===== FUN_101258c0 @ 101258c0  size=296 ===== */
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

uint __thiscall FUN_101258c0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10125e10 @ 10125e10  size=1117 ===== */
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

int __thiscall FUN_10125e10(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar7;
  undefined4 extraout_ECX_08;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x20);
      if ((((((iVar4 == 0) && (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar4 == 0)) &&
            (iVar4 = FUN_1010c5f0(0x30), iVar4 == 0)) &&
           ((iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 5)), iVar4 == 0 &&
            (iVar4 = FUN_1010c5f0(0x40), iVar4 == 0)))) &&
          ((iVar4 = FUN_1010c5f0(*(undefined4 *)(param_1 + 9)), iVar4 == 0 &&
           ((iVar4 = FUN_1010c5f0(0x50), iVar4 == 0 &&
            (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0xd)), iVar4 == 0)))))) &&
         ((iVar4 = FUN_1010c5f0(0x60), iVar4 == 0 &&
          (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0x11)), iVar4 == 0)))) {
        iVar4 = *(int *)(param_1 + 0x11);
        if (iVar4 < 0) {
          return -6;
        }
        if (0x40 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0x75);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          iVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (0 < *(int *)(param_1 + 0x11)) {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_101246d0(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (iVar8 < *(int *)(param_1 + 0x11));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0x80);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1d5));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 0x1d5);
        if (iVar4 < 0) {
          return -6;
        }
        if (0x100 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0x95);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_02);
          iVar2 = param_2[1];
          iVar8 = 0;
          uVar7 = extraout_ECX_03;
          if (0 < *(int *)(param_1 + 0x1d5)) {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10124dc0(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
              uVar7 = extraout_ECX_04;
            } while (iVar8 < *(int *)(param_1 + 0x1d5));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0xa0);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0xad9));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 0xad9);
        if (iVar4 < 0) {
          return -6;
        }
        if (200 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0xb5);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_05);
          iVar2 = param_2[1];
          iVar8 = 0;
          if (0 < *(int *)(param_1 + 0xad9)) {
            do {
              iVar6 = FUN_101159e0(param_1[iVar8 + 0xadd]);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0xad9));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0xc0);
        if ((iVar4 == 0) && (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0xba5)), iVar4 == 0)) {
          iVar2 = *(int *)(param_1 + 0xba5);
          if (iVar2 < 0) {
            return -6;
          }
          if (0x400 < iVar2) {
            return -7;
          }
          if ((0 < iVar2) && (iVar4 = FUN_1010c5f0(0xd5), iVar4 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_06);
            iVar2 = param_2[1];
            iVar8 = 0;
            uVar7 = extraout_ECX_07;
            if (0 < *(int *)(param_1 + 0xba5)) {
              do {
                iVar6 = param_2[1];
                FUN_1010bf70(uVar7);
                iVar3 = param_2[1];
                iVar5 = FUN_10125660(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
                if (iVar6 != 0) {
                  return iVar6;
                }
                iVar8 = iVar8 + 1;
                uVar7 = extraout_ECX_08;
              } while (iVar8 < *(int *)(param_1 + 0xba5));
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10126270 @ 10126270  size=1117 ===== */
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

int __thiscall FUN_10126270(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar7;
  undefined4 extraout_ECX_08;
  int iVar8;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x23);
      if ((((((iVar4 == 0) && (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar4 == 0)) &&
            (iVar4 = FUN_1010c5f0(0x33), iVar4 == 0)) &&
           ((iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 5)), iVar4 == 0 &&
            (iVar4 = FUN_1010c5f0(0x43), iVar4 == 0)))) &&
          ((iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 9)), iVar4 == 0 &&
           ((iVar4 = FUN_1010c5f0(0x53), iVar4 == 0 &&
            (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd)), iVar4 == 0)))))) &&
         ((iVar4 = FUN_1010c5f0(99), iVar4 == 0 &&
          (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x11)), iVar4 == 0)))) {
        iVar4 = *(int *)(param_1 + 0x11);
        if (iVar4 < 0) {
          return -6;
        }
        if (0x40 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0x75);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          iVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (0 < *(int *)(param_1 + 0x11)) {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10124720(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (iVar8 < *(int *)(param_1 + 0x11));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0x83);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1d5));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 0x1d5);
        if (iVar4 < 0) {
          return -6;
        }
        if (0x100 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0x95);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_02);
          iVar2 = param_2[1];
          iVar8 = 0;
          uVar7 = extraout_ECX_03;
          if (0 < *(int *)(param_1 + 0x1d5)) {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10124e40(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
              uVar7 = extraout_ECX_04;
            } while (iVar8 < *(int *)(param_1 + 0x1d5));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0xa3);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0xad9));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 0xad9);
        if (iVar4 < 0) {
          return -6;
        }
        if (200 < iVar4) {
          return -7;
        }
        if (0 < iVar4) {
          iVar4 = FUN_1010c5f0(0xb5);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_05);
          iVar2 = param_2[1];
          iVar8 = 0;
          if (0 < *(int *)(param_1 + 0xad9)) {
            do {
              iVar6 = FUN_101159e0(param_1[iVar8 + 0xadd]);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0xad9));
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0xc3);
        if ((iVar4 == 0) && (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0xba5)), iVar4 == 0)) {
          iVar2 = *(int *)(param_1 + 0xba5);
          if (iVar2 < 0) {
            return -6;
          }
          if (0x400 < iVar2) {
            return -7;
          }
          if ((0 < iVar2) && (iVar4 = FUN_1010c5f0(0xd5), iVar4 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_06);
            iVar2 = param_2[1];
            iVar8 = 0;
            uVar7 = extraout_ECX_07;
            if (0 < *(int *)(param_1 + 0xba5)) {
              do {
                iVar6 = param_2[1];
                FUN_1010bf70(uVar7);
                iVar3 = param_2[1];
                iVar5 = FUN_101256b0(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
                if (iVar6 != 0) {
                  return iVar6;
                }
                iVar8 = iVar8 + 1;
                uVar7 = extraout_ECX_08;
              } while (iVar8 < *(int *)(param_1 + 0xba5));
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10127a20 @ 10127a20  size=226 ===== */
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

int __thiscall FUN_10127a20(int param_1,int *param_2,int param_3)

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
LAB_10127acf:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_10127acf;
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



/* ===== FUN_10127b10 @ 10127b10  size=296 ===== */
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

uint __thiscall FUN_10127b10(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10128600 @ 10128600  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[skills]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10128669) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[skills]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10128600(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[skills]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10127d40(param_2,iVar1,param_4);
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



/* ===== FUN_10128930 @ 10128930  size=202 ===== */
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

int __thiscall FUN_10128930(undefined1 *param_1,int *param_2)

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
        sVar6 = strnlen(_Str,8);
        if (7 < sVar6) {
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



/* ===== FUN_10128a00 @ 10128a00  size=202 ===== */
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

int __thiscall FUN_10128a00(undefined1 *param_1,int *param_2)

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
        sVar6 = strnlen(_Str,8);
        if (7 < sVar6) {
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



/* ===== FUN_10128ba0 @ 10128ba0  size=387 ===== */
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

uint __thiscall FUN_10128ba0(undefined1 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
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
        if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_00000007 < param_2) {
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



