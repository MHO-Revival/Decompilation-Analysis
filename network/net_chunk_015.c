/* ===== FUN_103cf8b0 @ 103cf8b0  size=249 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103cf8b0(char *param_1,int param_2,int param_3)

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
          param_1[0x41f] = '\0';
          pcVar7 = param_1 + 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_1010c2b0(param_1 + 0x20,pcVar7 + (1 - (int)(param_1 + 0x21)));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
            return iVar6;
          }
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_103cfdc0 @ 103cfdc0  size=249 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103cfdc0(char *param_1,int param_2,int param_3)

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
          param_1[0x41f] = '\0';
          pcVar7 = param_1 + 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_1010c2b0(param_1 + 0x20,pcVar7 + (1 - (int)(param_1 + 0x21)));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
            return iVar6;
          }
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_103d02d0 @ 103d02d0  size=171 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d02d0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103d0740 @ 103d0740  size=303 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d0740(char *param_1,int param_2,int param_3)

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
          iVar6 = FUN_101150a0(param_1[0x24]);
          if (iVar6 == 0) {
            iVar6 = FUN_101150a0(param_1[0x25]);
            if (iVar6 == 0) {
              uVar4 = *(undefined4 *)(param_2 + 4);
              iVar6 = FUN_1010bf70(extraout_ECX);
              if (iVar6 == 0) {
                iVar5 = *(int *)(param_2 + 4);
                param_1[0xa5] = '\0';
                pcVar7 = param_1 + 0x26;
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                iVar6 = FUN_1010c2b0(param_1 + 0x26,pcVar7 + (1 - (int)(param_1 + 0x27)));
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
  return iVar6;
}



/* ===== FUN_103d1480 @ 103d1480  size=351 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d1480(char *param_1,int param_2,int param_3)

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
    param_1[0x7f] = '\0';
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
          param_1[0xff] = '\0';
          pcVar7 = param_1 + 0x80;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_1010c2b0(param_1 + 0x80,pcVar7 + (1 - (int)(param_1 + 0x81)));
          if (iVar6 == 0) {
            iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar4);
            if (iVar6 == 0) {
              uVar4 = *(undefined4 *)(param_2 + 4);
              iVar6 = FUN_1010bf70(extraout_ECX_00);
              if (iVar6 == 0) {
                iVar5 = *(int *)(param_2 + 4);
                param_1[0x1ff] = '\0';
                pcVar7 = param_1 + 0x100;
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                iVar6 = FUN_1010c2b0(param_1 + 0x100,pcVar7 + (1 - (int)(param_1 + 0x101)));
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
  return iVar6;
}



/* ===== FUN_103d1a20 @ 103d1a20  size=186 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d1a20(undefined1 *param_1,int *param_2,int param_3)

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
      param_1[0x100] = 0;
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



/* ===== FUN_103d2230 @ 103d2230  size=482 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d2230(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  undefined4 extraout_ECX_00;
  byte bVar7;
  
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
    iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    if (((iVar5 == 0) && (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 5)), iVar5 == 0)) &&
       (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 9)), iVar5 == 0)) {
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x8c] = 0;
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
            param_1[0x10c] = 0;
            pcVar6 = param_1 + 0x8d;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_1010c2b0(param_1 + 0x8d,pcVar6 + (1 - (int)(param_1 + 0x8e)));
            if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) &&
               ((iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x10d)), iVar5 == 0 &&
                (iVar5 = FUN_1010c0c0(param_1[0x111]), iVar5 == 0)))) {
              if (0x1f < (byte)param_1[0x111]) {
                return -7;
              }
              bVar7 = 0;
              if (param_1[0x111] != 0) {
                do {
                  iVar5 = FUN_103d1eb0(param_2,param_3);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  bVar7 = bVar7 + 1;
                } while (bVar7 < (byte)param_1[0x111]);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_103d38b0 @ 103d38b0  size=386 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d38b0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar6 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar6) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar2) || (*(uint *)(param_2 + 8) - uVar2 < 4)) {
    iVar3 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar2 + 4;
    param_1[0x7f] = '\0';
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_1010c2b0(param_1,pcVar4 + (1 - (int)(param_1 + 1)));
    if (((iVar3 == 0) &&
        (iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar2 + 4),uVar6), iVar3 == 0)) &&
       (iVar3 = FUN_1010c0c0(param_1[0x80]), iVar3 == 0)) {
      if (8 < (byte)param_1[0x80]) {
        return -7;
      }
      uVar6 = 0;
      if (param_1[0x80] != 0) {
        do {
          iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + uVar6 * 4 + 0x81));
          if (iVar3 != 0) {
            return iVar3;
          }
          bVar5 = (char)uVar6 + 1;
          uVar6 = (uint)bVar5;
        } while (bVar5 < (byte)param_1[0x80]);
      }
      iVar3 = FUN_1010c0c0(param_1[0xa1]);
      if (iVar3 == 0) {
        if (8 < (byte)param_1[0xa1]) {
          return -7;
        }
        uVar6 = 0;
        if (param_1[0xa1] != 0) {
          do {
            iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + uVar6 * 4 + 0xa2));
            if (iVar3 != 0) {
              return iVar3;
            }
            bVar5 = (char)uVar6 + 1;
            uVar6 = (uint)bVar5;
          } while (bVar5 < (byte)param_1[0xa1]);
        }
        iVar3 = FUN_1010c0c0(param_1[0xc2]);
        if ((iVar3 == 0) && (iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0xc3)), iVar3 == 0)) {
          iVar3 = FUN_1010c0c0(param_1[199]);
          return iVar3;
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_103d4010 @ 103d4010  size=191 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d4010(byte *param_1,int *param_2,uint param_3)

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
    if (3 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_103d38b0(param_2,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    iVar1 = FUN_1010c190(*(undefined4 *)(param_1 + 0x259));
    return iVar1;
  }
  return -1;
}



/* ===== FUN_103d4220 @ 103d4220  size=248 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bHuntTaskCount]"
//   "[astHuntTasks]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iParam1]"

/* WARNING: Removing unreachable block (ram,0x103d427f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bHuntTaskCount]""
     ""[astHuntTasks]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iParam1]"" */

int __thiscall FUN_103d4220(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bHuntTaskCount]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (3 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astHuntTasks]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103d3c80(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iParam1]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x259));
  }
  return iVar1;
}



/* ===== FUN_103d50e0 @ 103d50e0  size=169 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d50e0(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_1010c0c0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_1010c0c0(param_1[2]);
      if (iVar2 == 0) {
        iVar2 = FUN_103d4610(param_1[1],0,param_2,param_3);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_103d54e0 @ 103d54e0  size=278 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d54e0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  
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
      param_1[0x80] = 0;
      pcVar6 = param_1 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar5 = FUN_1010c2b0(param_1 + 1,pcVar6 + (1 - (int)(param_1 + 2)));
      if (iVar5 == 0) {
        iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
        if (iVar5 == 0) {
          iVar3 = param_2[1];
          iVar5 = FUN_1010bf70(extraout_ECX);
          if (iVar5 == 0) {
            iVar4 = param_2[1];
            param_1[0x180] = 0;
            pcVar6 = param_1 + 0x81;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_1010c2b0(param_1 + 0x81,pcVar6 + (1 - (int)(param_1 + 0x82)));
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



/* ===== FUN_103d6600 @ 103d6600  size=1094 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103d6600(undefined1 *param_1,int *param_2,uint param_3)

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
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  byte bVar7;
  
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
    iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
    if (((iVar5 == 0) && (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 5)), iVar5 == 0)) &&
       (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 9)), iVar5 == 0)) {
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x2c] = 0;
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
            param_1[0x4c] = 0;
            pcVar6 = param_1 + 0x2d;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_1010c2b0(param_1 + 0x2d,pcVar6 + (1 - (int)(param_1 + 0x2e)));
            if ((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
              iVar3 = param_2[1];
              iVar5 = FUN_1010bf70(extraout_ECX_01);
              if (iVar5 == 0) {
                iVar4 = param_2[1];
                param_1[0x14c] = 0;
                pcVar6 = param_1 + 0x4d;
                do {
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                iVar5 = FUN_1010c2b0(param_1 + 0x4d,pcVar6 + (1 - (int)(param_1 + 0x4e)));
                if ((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
                  iVar3 = param_2[1];
                  iVar5 = FUN_1010bf70(extraout_ECX_02);
                  if (iVar5 == 0) {
                    iVar4 = param_2[1];
                    param_1[0x54c] = 0;
                    pcVar6 = param_1 + 0x14d;
                    do {
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar2 != '\0');
                    iVar5 = FUN_1010c2b0(param_1 + 0x14d,pcVar6 + (1 - (int)(param_1 + 0x14e)));
                    if ((iVar5 == 0) && (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)
                       ) {
                      iVar3 = param_2[1];
                      iVar5 = FUN_1010bf70(extraout_ECX_03);
                      if (iVar5 == 0) {
                        iVar4 = param_2[1];
                        param_1[0x94c] = 0;
                        pcVar6 = param_1 + 0x54d;
                        do {
                          cVar2 = *pcVar6;
                          pcVar6 = pcVar6 + 1;
                        } while (cVar2 != '\0');
                        iVar5 = FUN_1010c2b0(param_1 + 0x54d,pcVar6 + (1 - (int)(param_1 + 0x54e)));
                        if ((iVar5 == 0) &&
                           (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
                          iVar3 = param_2[1];
                          iVar5 = FUN_1010bf70(extraout_ECX_04);
                          if (iVar5 == 0) {
                            iVar4 = param_2[1];
                            param_1[0xa4c] = 0;
                            pcVar6 = param_1 + 0x94d;
                            do {
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + 1;
                            } while (cVar2 != '\0');
                            iVar5 = FUN_1010c2b0(param_1 + 0x94d,
                                                 pcVar6 + (1 - (int)(param_1 + 0x94e)));
                            if ((iVar5 == 0) &&
                               (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0)) {
                              iVar3 = param_2[1];
                              iVar5 = FUN_1010bf70(extraout_ECX_05);
                              if (iVar5 == 0) {
                                iVar4 = param_2[1];
                                param_1[0xacc] = 0;
                                pcVar6 = param_1 + 0xa4d;
                                do {
                                  cVar2 = *pcVar6;
                                  pcVar6 = pcVar6 + 1;
                                } while (cVar2 != '\0');
                                iVar5 = FUN_1010c2b0(param_1 + 0xa4d,
                                                     pcVar6 + (1 - (int)(param_1 + 0xa4e)));
                                if ((((iVar5 == 0) &&
                                     (iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3), iVar5 == 0))
                                    && (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0xacd)),
                                       iVar5 == 0)) &&
                                   ((iVar5 = FUN_1010c0c0(param_1[0xad1]), iVar5 == 0 &&
                                    (iVar5 = FUN_1010c0c0(param_1[0xad2]), iVar5 == 0)))) {
                                  if ((byte)param_1[0xad2] < 0x41) {
                                    bVar7 = 0;
                                    if (param_1[0xad2] != 0) {
                                      do {
                                        iVar5 = FUN_103d50e0(param_2,param_3);
                                        if (iVar5 != 0) {
                                          return iVar5;
                                        }
                                        bVar7 = bVar7 + 1;
                                      } while (bVar7 < (byte)param_1[0xad2]);
                                    }
                                    iVar5 = FUN_1010c0c0(param_1[0x11393]);
                                    if (iVar5 != 0) {
                                      return iVar5;
                                    }
                                    if ((byte)param_1[0x11393] < 6) {
                                      bVar7 = 0;
                                      if (param_1[0x11393] != 0) {
                                        do {
                                          iVar5 = FUN_103d54e0(param_2,param_3);
                                          if (iVar5 != 0) {
                                            return iVar5;
                                          }
                                          bVar7 = bVar7 + 1;
                                        } while (bVar7 < (byte)param_1[0x11393]);
                                      }
                                      iVar5 = FUN_103d5ef0(param_2,param_3);
                                      return iVar5;
                                    }
                                  }
                                  return -7;
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
  return iVar5;
}



/* ===== FUN_103d7470 @ 103d7470  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_103d7470(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103d79a0 @ 103d79a0  size=243 ===== */
// calls: _wassert
// strings:
//   "[wCount]"
//   "[astActivities]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103d7a0f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wCount]""
     ""[astActivities]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103d79a0(ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astActivities]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103d5c10(param_2,iVar1,param_4);
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



/* ===== FUN_103d80d0 @ 103d80d0  size=188 ===== */
// calls: _wassert
// strings:
//   "[stSimple]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stDetail]"

/* WARNING: Removing unreachable block (ram,0x103d80e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSimple]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stDetail]"" */

void FUN_103d80d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stSimple]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_103d5c10(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[stDetail]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_103d6fd0(param_1,param_2,param_3);
        return;
      }
      FUN_103d6fd0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_103d84d0 @ 103d84d0  size=155 ===== */
// calls: _wassert
// strings:
//   "[stSimple]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[dwWorldSvrID]"

/* WARNING: Removing unreachable block (ram,0x103d84e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stSimple]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[dwWorldSvrID]"" */

void __thiscall FUN_103d84d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stSimple]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103d5c10(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[dwWorldSvrID]",&DAT_11d9f574,
                   *(undefined4 *)(param_1 + 0x87));
    }
  }
  return;
}



/* ===== FUN_103d96a0 @ 103d96a0  size=183 ===== */
// calls: _wassert
// strings:
//   "[stRequest]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iResult1]"
//   "[iResult2]"

/* WARNING: Removing unreachable block (ram,0x103d96b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stRequest]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iResult1]""
     ""[iResult2]"" */

void __thiscall FUN_103d96a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRequest]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103d92c0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult1]",&DAT_11d9e0b4,
                             *(undefined4 *)(param_1 + 0xd)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[iResult2]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x11));
    }
  }
  return;
}



/* ===== FUN_103daf70 @ 103daf70  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103daf70(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103db2f0 @ 103db2f0  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103db2f0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103db960 @ 103db960  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103db960(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103ddf10 @ 103ddf10  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astLeagueOpen]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103ddf79) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astLeagueOpen]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103ddf10(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLeagueOpen]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103ddae0(param_2,iVar1,param_4);
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



/* ===== FUN_103df310 @ 103df310  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astLeagueInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103df379) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astLeagueInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103df310(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astLeagueInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103deee0(param_2,iVar1,param_4);
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



/* ===== FUN_103df550 @ 103df550  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103df550(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103df8d0 @ 103df8d0  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103df8d0(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103dfe40 @ 103dfe40  size=234 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astClanerNames]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[szName]"

/* WARNING: Removing unreachable block (ram,0x103dfead) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astClanerNames]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[szName]"" */

int __thiscall FUN_103dfe40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
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
      piVar3 = param_1 + 1;
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astClanerNames]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1024a410(param_4,"[szName]",piVar3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 8;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103e1060 @ 103e1060  size=157 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e1060(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103e2110 @ 103e2110  size=428 ===== */
// calls: _wassert
// strings:
//   "[stId]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[szNote]"
//   "[iLevel]"
//   "[iLine]"
//   "[bIsOnline]"
//   "[iOfflineTimeInterval]"
//   "[iTitle]"
//   "[iScore]"
//   "[iRewardTag]"
//   "[iHRLevel]"

/* WARNING: Removing unreachable block (ram,0x103e2120) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stId]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[szNote]""
     ""[iLevel]""
     ""[iLine]""
     ""[bIsOnline]""
     ""[iOfflineTimeInterval]""
     ""[iTitle]""
     ""[iScore]"" */

void __thiscall FUN_103e2110(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
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
                                   *(undefined4 *)(param_1 + 0x58)), iVar1 == 0)) &&
         ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLine]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x5c)), iVar1 == 0 &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bIsOnline]",&DAT_11d9e0b4,
                                *(undefined1 *)(param_1 + 0x60)), iVar1 == 0)))) &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOfflineTimeInterval]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x61)), iVar1 == 0 &&
         ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTitle]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x65)), iVar1 == 0 &&
          (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iScore]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x69)), iVar1 == 0)))))) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRewardTag]",&DAT_11d9e0b4,
                             *(undefined4 *)(param_1 + 0x6d)), iVar1 == 0)) {
      FUN_1024a290(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x71));
    }
  }
  return;
}



/* ===== FUN_103e2670 @ 103e2670  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astClaners]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103e26d9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astClaners]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103e2670(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astClaners]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103e2110(param_2,iVar1,param_4);
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



/* ===== FUN_103e3090 @ 103e3090  size=134 ===== */
// calls: _wassert
// strings:
//   "[stClaner]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103e30a0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stClaner]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103e3090(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stClaner]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103e2110(param_1,param_2,param_3);
      return;
    }
    FUN_103e2110(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103e33b0 @ 103e33b0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stClaner]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103e33c0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stClaner]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103e33b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stClaner]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103e2110(param_1,param_2,param_3);
      return;
    }
    FUN_103e2110(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103e36d0 @ 103e36d0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stClan]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103e36e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stClan]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_103e36d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stClan]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_103e2c60(param_1,param_2,param_3);
      return;
    }
    FUN_103e2c60(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_103e3a70 @ 103e3a70  size=164 ===== */
// calls: _wassert
// strings:
//   "[iClanersCount]"
//   "[stClaners]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103e3aa7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iClanersCount]""
     ""[stClaners]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103e3a70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iClanersCount]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stClaners]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103e2670(param_2,param_3,param_4);
      return;
    }
    FUN_103e2670(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103e4730 @ 103e4730  size=282 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e4730(char *param_1,int param_2,int param_3)

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



/* ===== FUN_103e55b0 @ 103e55b0  size=202 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e55b0(char *param_1,int param_2,uint param_3)

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
        iVar4 = FUN_1010c200(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
        if (iVar4 == 0) {
          iVar4 = FUN_103e4730(param_2,param_3);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_103e7000 @ 103e7000  size=155 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e7000(byte *param_1,int *param_2,int param_3)

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
      iVar1 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar2 * 4 + 1));
      if (iVar1 != 0) {
        return iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *param_1);
  }
  return 0;
}



/* ===== FUN_103e7730 @ 103e7730  size=181 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e7730(byte *param_1,int *param_2,int param_3)

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



/* ===== FUN_103e7930 @ 103e7930  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bCount]"
//   "[astGiftList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103e798d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bCount]""
     ""[astGiftList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103e7930(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bCount]","0x%02x",*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGiftList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103e7570(param_2,iVar1,param_4);
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



/* ===== FUN_103e7ed0 @ 103e7ed0  size=181 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103e7ed0(byte *param_1,int *param_2,int param_3)

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
  if (0x32 < *param_1) {
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



/* ===== FUN_103e80d0 @ 103e80d0  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[bCount]"
//   "[astGroupInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103e812d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[bCount]""
     ""[astGroupInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103e80d0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bCount]","0x%02x",*param_1);
  if (iVar1 == 0) {
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGroupInfo]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103e7d10(param_2,iVar1,param_4);
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



/* ===== FUN_103e86c0 @ 103e86c0  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_103e86c0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103e89e0 @ 103e89e0  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_103e89e0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103e9340 @ 103e9340  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_103e9340(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ec6e0 @ 103ec6e0  size=152 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ec6e0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ecaa0 @ 103ecaa0  size=152 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ecaa0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ece50 @ 103ece50  size=133 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ece50(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ed1e0 @ 103ed1e0  size=133 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ed1e0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ed570 @ 103ed570  size=117 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_103ed570(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ed8f0 @ 103ed8f0  size=131 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ed8f0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103ee5c0 @ 103ee5c0  size=152 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ee5c0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_103f0530 @ 103f0530  size=225 ===== */
// calls: _wassert
// strings:
//   "[iItemCount]"
//   "[astItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103f0599) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iItemCount]""
     ""[astItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103f0530(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iItemCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x1e < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItems]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103eeed0(param_2,iVar1,param_4);
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



/* ===== FUN_103f0ee0 @ 103f0ee0  size=743 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "0x%02x"
//   "[bIsCrited]"
//   "[bBagItemCount]"
//   "[astBagItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bStoreItemCount]"
//   "[astStoreItems]"
//   "[bMailItemCount]"
//   "[astMailItems]"

/* WARNING: Removing unreachable block (ram,0x103f105f) */
/* WARNING: Removing unreachable block (ram,0x103f0f87) */
/* WARNING: Removing unreachable block (ram,0x103f113f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""0x%02x""
     ""[bIsCrited]""
     ""[bBagItemCount]""
     ""[astBagItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bStoreItemCount]""
     ""[astStoreItems]"" */

int __thiscall FUN_103f0ee0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar3 == 0) &&
      (iVar3 = FUN_1024a290(param_2,param_3,param_4,"[bIsCrited]","0x%02x",
                            *(undefined1 *)(param_1 + 1)), iVar3 == 0)) &&
     (iVar3 = FUN_1024a290(param_2,param_3,param_4,"[bBagItemCount]","0x%02x",
                           *(undefined1 *)((int)param_1 + 5)), iVar3 == 0)) {
    if (0x1e < *(byte *)((int)param_1 + 5)) {
      return -7;
    }
    bVar2 = 0;
    cVar1 = (char)param_4;
    if (*(byte *)((int)param_1 + 5) != 0) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[astBagItems]",bVar2,(int)cVar1);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_103f0940(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)((int)param_1 + 5));
    }
    iVar3 = FUN_1024a290(param_2,param_3,param_4,"[bStoreItemCount]","0x%02x",
                         *(undefined1 *)(param_1 + 0x45));
    if (iVar3 == 0) {
      if (0x1e < *(byte *)(param_1 + 0x45)) {
        return -7;
      }
      bVar2 = 0;
      if (*(byte *)(param_1 + 0x45) != 0) {
        do {
          iVar3 = FUN_1024a140(param_3);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[astStoreItems]",bVar2,(int)cVar1);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_103f0940(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *(byte *)(param_1 + 0x45));
      }
      iVar3 = FUN_1024a290(param_2,param_3,param_4,"[bMailItemCount]","0x%02x",
                           *(undefined1 *)((int)param_1 + 0x223));
      if (iVar3 == 0) {
        if (0x1e < *(byte *)((int)param_1 + 0x223)) {
          return -7;
        }
        bVar2 = 0;
        if (*(byte *)((int)param_1 + 0x223) != 0) {
          do {
            iVar3 = FUN_1024a140(param_3);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[astMailItems]",bVar2,(int)cVar1);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_3;
            if (-1 < param_3) {
              iVar3 = param_3 + 1;
            }
            iVar3 = FUN_103f0940(param_2,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            bVar2 = bVar2 + 1;
          } while (bVar2 < *(byte *)((int)param_1 + 0x223));
        }
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_103f1fe0 @ 103f1fe0  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTracks]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103f2049) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTracks]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103f1fe0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTracks]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103f1c20(param_2,iVar1,param_4);
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



/* ===== FUN_103f2440 @ 103f2440  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTracksSet]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103f24a9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTracksSet]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103f2440(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTracksSet]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103f1fe0(param_2,iVar1,param_4);
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



/* ===== FUN_103f2690 @ 103f2690  size=145 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103f2690(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_101150a0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_103f1a90(param_2,param_3);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103f5200 @ 103f5200  size=263 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103f5200(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  
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
    if ((((iVar2 == 0) && (iVar2 = FUN_1010c0c0(param_1[3]), iVar2 == 0)) &&
        (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 4)), iVar2 == 0)) &&
       ((iVar2 = FUN_1010c0c0(param_1[6]), iVar2 == 0 &&
        (iVar2 = FUN_1010c0c0(param_1[7]), iVar2 == 0)))) {
      if (6 < (byte)param_1[7]) {
        return -7;
      }
      bVar3 = 0;
      if (param_1[7] != 0) {
        do {
          iVar2 = FUN_102720f0(param_2,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar3 = bVar3 + 1;
        } while (bVar3 < (byte)param_1[7]);
      }
      return 0;
    }
  }
  return iVar2;
}



/* ===== FUN_103f6320 @ 103f6320  size=255 ===== */
// calls: _wassert
// strings:
//   "[iItemCount]"
//   "[astItems]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "0x%02x"
//   "[bBBind]"

/* WARNING: Removing unreachable block (ram,0x103f6389) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iItemCount]""
     ""[astItems]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""0x%02x""
     ""[bBBind]"" */

int __thiscall FUN_103f6320(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iItemCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItems]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103eeed0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bBBind]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x45));
  }
  return iVar1;
}



/* ===== FUN_103f6ef0 @ 103f6ef0  size=353 ===== */
// calls: _wassert
// strings:
//   "[stCostItem]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stEquip]"
//   "[iRouteCount]"
//   "[astRoute]"

/* WARNING: Removing unreachable block (ram,0x103f6f05) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stCostItem]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stEquip]""
     ""[iRouteCount]""
     ""[astRoute]"" */

int __thiscall FUN_103f6ef0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  int iVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stCostItem]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_103eeed0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stEquip]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_103eeed0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRouteCount]",&DAT_11d9e0b4,
                               *(undefined4 *)(param_1 + 0x1a)), iVar1 == 0)) {
        iVar1 = *(int *)(param_1 + 0x1a);
        if (iVar1 < 0) {
          return -6;
        }
        if (100 < iVar1) {
          return -7;
        }
        iVar3 = 0;
        uVar2 = extraout_ECX_00;
        if (0 < iVar1) {
          do {
            iVar1 = FUN_1024a230(param_4,"[astRoute]",iVar3,uVar2);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = FUN_103f6ac0(param_2,iVar1,param_4);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar3 = iVar3 + 1;
            uVar2 = extraout_ECX_01;
          } while (iVar3 < *(int *)(param_1 + 0x1a));
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_103f7370 @ 103f7370  size=164 ===== */
// calls: _wassert
// strings:
//   "[iRetCode]"
//   "[stReq]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x103f73a7) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRetCode]""
     ""[stReq]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_103f7370(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stReq]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_103f6ef0(param_2,param_3,param_4);
      return;
    }
    FUN_103f6ef0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_103f7b00 @ 103f7b00  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTrace]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103f7b69) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTrace]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103f7b00(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTrace]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103f7740(param_2,iVar1,param_4);
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



/* ===== FUN_103f7f60 @ 103f7f60  size=225 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astTraceSet]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103f7fc9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astTraceSet]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103f7f60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTraceSet]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103f7b00(param_2,iVar1,param_4);
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



/* ===== FUN_103f81b0 @ 103f81b0  size=145 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103f81b0(undefined1 *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_101150a0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_103f75b0(param_2,param_3);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103f8c50 @ 103f8c50  size=511 ===== */
// calls: _wassert
// strings:
//   "[iBox]"
//   "0x%02x"
//   "[bItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bEquipCnt]"
//   "[astEquipList]"
//   "[bBagFull]"

/* WARNING: Removing unreachable block (ram,0x103f8cd3) */
/* WARNING: Removing unreachable block (ram,0x103f8daf) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBox]""
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bEquipCnt]""
     ""[astEquipList]""
     ""[bBagFull]"" */

int __thiscall FUN_103f8c50(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iBox]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar2 == 0)) {
    if (10 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar1 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103f8770(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(param_1 + 1));
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bEquipCnt]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x7d));
    if (iVar2 == 0) {
      if (10 < *(byte *)((int)param_1 + 0x7d)) {
        return -7;
      }
      bVar1 = 0;
      if (*(byte *)((int)param_1 + 0x7d) != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipList]",bVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_103284f0(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)((int)param_1 + 0x7d));
      }
      iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bBagFull]","0x%02x",
                           *(undefined1 *)(param_1 + 0x22a));
    }
  }
  return iVar2;
}



/* ===== FUN_103f92a0 @ 103f92a0  size=488 ===== */
// calls: _wassert
// strings:
//   "[iBox]"
//   "0x%02x"
//   "[bItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bEquipCnt]"
//   "[astEquipList]"

/* WARNING: Removing unreachable block (ram,0x103f9323) */
/* WARNING: Removing unreachable block (ram,0x103f93ff) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBox]""
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bEquipCnt]""
     ""[astEquipList]"" */

int __thiscall FUN_103f92a0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iBox]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar2 == 0)) {
    if (0xb < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar1 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103f8770(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(param_1 + 1));
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bEquipCnt]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x89));
    if (iVar2 == 0) {
      if (0xb < *(byte *)((int)param_1 + 0x89)) {
        return -7;
      }
      bVar1 = 0;
      if (*(byte *)((int)param_1 + 0x89) != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipList]",bVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_103284f0(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)((int)param_1 + 0x89));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_103f9900 @ 103f9900  size=517 ===== */
// calls: _wassert
// strings:
//   "[iBox]"
//   "0x%02x"
//   "[bItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bEquipCnt]"
//   "[astEquipList]"
//   "[bBagFull]"

/* WARNING: Removing unreachable block (ram,0x103f9983) */
/* WARNING: Removing unreachable block (ram,0x103f9a5f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBox]""
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bEquipCnt]""
     ""[astEquipList]""
     ""[bBagFull]"" */

int __thiscall FUN_103f9900(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[iBox]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar2 == 0)) {
    if (0xb < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar1 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103f8770(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(param_1 + 1));
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bEquipCnt]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x89));
    if (iVar2 == 0) {
      if (0xb < *(byte *)((int)param_1 + 0x89)) {
        return -7;
      }
      bVar1 = 0;
      if (*(byte *)((int)param_1 + 0x89) != 0) {
        do {
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipList]",bVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_103284f0(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)((int)param_1 + 0x89));
      }
      iVar2 = FUN_1024a290(param_2,param_3,param_4,"[bBagFull]","0x%02x",
                           *(undefined1 *)((int)param_1 + 0x985));
    }
  }
  return iVar2;
}



/* ===== FUN_103f9e90 @ 103f9e90  size=287 ===== */
// calls: _wassert
// strings:
//   "[iLevelID]"
//   "0x%02x"
//   "[bItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[bBagFull]"

/* WARNING: Removing unreachable block (ram,0x103f9f12) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iLevelID]""
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bBagFull]"" */

int __thiscall FUN_103f9e90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                           *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (0x28 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
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
        iVar1 = FUN_103f8770(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)(param_1 + 1));
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bBagFull]","0x%02x",
                         *(undefined1 *)((int)param_1 + 0x1e5));
  }
  return iVar1;
}



/* ===== FUN_103fd480 @ 103fd480  size=271 ===== */
// calls: _wassert
// strings:
//   "[iBoxID]"
//   "[iItemCount]"
//   "[astItemList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103fd519) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBoxID]""
     ""[iItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103fd480(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBoxID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iItemCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0xb < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_103f8770(param_2,iVar1,param_4);
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



/* ===== FUN_103ff0b0 @ 103ff0b0  size=133 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_103ff0b0(undefined1 *param_1,int *param_2,int param_3)

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
    iVar2 = FUN_1010c0c0(param_1[1]);
    if (iVar2 == 0) {
      iVar2 = FUN_1010c0c0(param_1[2]);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== FUN_103ffa10 @ 103ffa10  size=271 ===== */
// calls: _wassert
// strings:
//   "[iRoleId]"
//   "[iUpdateCnt]"
//   "[astAvatar]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x103ffaa9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRoleId]""
     ""[iUpdateCnt]""
     ""[astAvatar]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_103ffa10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRoleId]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iUpdateCnt]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x1e < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAvatar]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10274670(param_2,iVar1,param_4);
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



/* ===== FUN_10401ab0 @ 10401ab0  size=274 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[iTitleDataCount]"
//   "[astTitleData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10401b49) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[iTitleDataCount]""
     ""[astTitleData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10401ab0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTitleDataCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x800 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astTitleData]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_104013e0(param_2,iVar1,param_4);
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



/* ===== FUN_10401de0 @ 10401de0  size=716 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10401de0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 extraout_ECX_02;
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
    iVar4 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar2 + 4;
    param_1[0x1f] = '\0';
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar6 + (1 - (int)(param_1 + 1)));
    if ((iVar4 == 0) &&
       (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar2 + 4),uVar9), iVar4 == 0)) {
      uVar7 = *(undefined4 *)(param_2 + 4);
      iVar4 = FUN_1010bf70(extraout_ECX);
      if (iVar4 == 0) {
        iVar5 = *(int *)(param_2 + 4);
        param_1[0x3f] = '\0';
        pcVar6 = param_1 + 0x20;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar4 = FUN_1010c2b0(param_1 + 0x20,pcVar6 + (1 - (int)(param_1 + 0x21)));
        if ((iVar4 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar7), iVar4 == 0))
        {
          uVar7 = *(undefined4 *)(param_2 + 4);
          iVar4 = FUN_1010bf70(extraout_ECX_00);
          if (iVar4 == 0) {
            iVar5 = *(int *)(param_2 + 4);
            param_1[0x5f] = '\0';
            pcVar6 = param_1 + 0x40;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            iVar4 = FUN_1010c2b0(param_1 + 0x40,pcVar6 + (1 - (int)(param_1 + 0x41)));
            if (((iVar4 == 0) &&
                (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar7), iVar4 == 0)) &&
               (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x60)), iVar4 == 0)) {
              uVar9 = 0;
              pcVar6 = param_1 + 100;
              uVar7 = extraout_ECX_01;
              do {
                uVar3 = *(undefined4 *)(param_2 + 4);
                iVar4 = FUN_1010bf70(uVar7);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = *(int *)(param_2 + 4);
                pcVar6[0x1f] = '\0';
                pcVar8 = pcVar6;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                iVar5 = FUN_1010c2b0(pcVar6,pcVar8 + (1 - (int)(pcVar6 + 1)));
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar3);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar9 = uVar9 + 1;
                pcVar6 = pcVar6 + 0x20;
                uVar7 = extraout_ECX_02;
              } while (uVar9 < 10);
              uVar9 = 0;
              pcVar6 = param_1 + 0x1a4;
              do {
                iVar4 = FUN_1010c190(*(undefined4 *)pcVar6);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar9 = uVar9 + 1;
                pcVar6 = pcVar6 + 4;
              } while (uVar9 < 10);
              iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1cc));
              if ((iVar4 == 0) &&
                 (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1d0)), iVar4 == 0)) {
                iVar4 = *(int *)(param_1 + 0x1d0);
                if (iVar4 < 0) {
                  return -6;
                }
                if (0x80 < iVar4) {
                  return -7;
                }
                iVar4 = FUN_1010c2b0(param_1 + 0x1d4,iVar4);
                if (((iVar4 == 0) &&
                    (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x254)), iVar4 == 0)) &&
                   (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 600)), iVar4 == 0)) {
                  uVar9 = 0;
                  param_1 = param_1 + 0x25c;
                  while (iVar4 = FUN_1010c190(*(undefined4 *)param_1), iVar4 == 0) {
                    uVar9 = uVar9 + 1;
                    param_1 = param_1 + 4;
                    if (9 < uVar9) {
                      return 0;
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
  return iVar4;
}



/* ===== FUN_10403120 @ 10403120  size=225 ===== */
// calls: _wassert
// strings:
//   "[iOpenGoodsCount]"
//   "[astOpenGoods]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10403189) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iOpenGoodsCount]""
     ""[astOpenGoods]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10403120(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOpenGoodsCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astOpenGoods]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10402d60(param_2,iVar1,param_4);
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



/* ===== FUN_104035b0 @ 104035b0  size=305 ===== */
// calls: _wassert
// strings:
//   "[iOpenGoodsCount]"
//   "[astOpenGoods]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iResult]"
//   "[iEndTime]"

/* WARNING: Removing unreachable block (ram,0x10403629) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iOpenGoodsCount]""
     ""[astOpenGoods]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iResult]""
     ""[iEndTime]"" */

int __thiscall FUN_104035b0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iOpenGoodsCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astOpenGoods]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10402d60(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,param_1[0x12d]);
    if (iVar1 == 0) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iEndTime]",&DAT_11d9e0b4,param_1[0x12e]);
    }
  }
  return iVar1;
}



/* ===== FUN_10404510 @ 10404510  size=206 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x10404572) */
/* WARNING: Removing unreachable block (ram,0x104045c8) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_10404510(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,int param_5)

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



/* ===== FUN_10406770 @ 10406770  size=271 ===== */
// calls: _wassert
// strings:
//   "[iRet]"
//   "[iRewardCount]"
//   "[astRewardInofs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10406809) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iRet]""
     ""[iRewardCount]""
     ""[astRewardInofs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10406770(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRewardCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (6 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astRewardInofs]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10406020(param_2,iVar1,param_4);
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



/* ===== FUN_104077a0 @ 104077a0  size=309 ===== */
// calls: _wassert
// strings:
//   "%I64i"
//   "[llTCatTime]"
//   "[szVOpenInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   " 0x%02x"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "0x%02x"
//   "[bITools]"
//   "[bIOpenID]"

/* WARNING: Removing unreachable block (ram,0x104077d9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""%I64i""
     ""[llTCatTime]""
     ""[szVOpenInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "" 0x%02x""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""0x%02x"" */

int __thiscall FUN_104077a0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llTCatTime]","%I64i",*param_1,param_1[1]);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[szVOpenInfo]",6,0), iVar1 == 0)) {
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
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bITools]","0x%02x",
                           *(undefined1 *)((int)param_1 + 0xf));
      if (iVar1 == 0) {
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bIOpenID]","0x%02x",
                             *(undefined1 *)(param_1 + 4));
        return iVar1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10409f10 @ 10409f10  size=203 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10409f10(char *param_1,int param_2,int param_3)

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
    param_1[0x20] = '\0';
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_1010c2b0(param_1,pcVar5 + (1 - (int)(param_1 + 1)));
    if (iVar4 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c0c0(param_1[0x21]);
        if (iVar4 == 0) {
          iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x22));
          if (iVar4 == 0) {
            iVar4 = FUN_1010c0c0(param_1[0x26]);
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_1040a360 @ 1040a360  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_1040a360(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1040b520 @ 1040b520  size=179 ===== */
// calls: _wassert
// strings:
//   "[wDataType]"
//   "[stRemoteData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1040b559) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wDataType]""
     ""[stRemoteData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_1040b520(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wDataType]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stRemoteData]",(int)(char)param_4), iVar1 == 0))
  {
    if (param_3 < 0) {
      FUN_1040b0e0(*param_1,0,param_2,param_3,param_4);
      return;
    }
    FUN_1040b0e0(*param_1,0,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_10412220 @ 10412220  size=160 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10412220(char *param_1,int param_2,int param_3)

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
    param_1[0xff] = '\0';
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



/* ===== FUN_10413720 @ 10413720  size=232 ===== */
// calls: _wassert
// strings:
//   "[iCount]"
//   "[astAppear]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1041378d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10413720(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_10413230(param_2,iVar1,param_4);
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



/* ===== FUN_10414170 @ 10414170  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_10414170(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10414790 @ 10414790  size=247 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10414790(char *param_1,int param_2,int param_3)

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
          iVar4 = FUN_101159e0(param_1[0x24]);
          if (iVar4 == 0) {
            iVar4 = FUN_101159e0(param_1[0x25]);
            if (iVar4 == 0) {
              iVar4 = FUN_101159e0(param_1[0x26]);
              if (iVar4 == 0) {
                iVar4 = FUN_101159e0(param_1[0x27]);
                return iVar4;
              }
            }
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10414c70 @ 10414c70  size=117 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_10414c70(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10415a10 @ 10415a10  size=192 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10415a10(undefined1 *param_1,int *param_2,int param_3)

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
      iVar3 = param_2[1];
      iVar5 = FUN_1010bf70(extraout_ECX);
      if (iVar5 == 0) {
        iVar4 = param_2[1];
        param_1[0x24] = 0;
        pcVar6 = param_1 + 5;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = FUN_1010c2b0(param_1 + 5,pcVar6 + (1 - (int)(param_1 + 6)));
        if (iVar5 == 0) {
          iVar5 = FUN_1010c3c0(param_2[1] - iVar4,iVar3);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10417450 @ 10417450  size=225 ===== */
// calls: _wassert
// strings:
//   "[iPlayerNum]"
//   "[astPlayereInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x104174b9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iPlayerNum]""
     ""[astPlayereInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10417450(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iPlayerNum]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0xc < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astPlayereInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10417060(param_2,iVar1,param_4);
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



/* ===== FUN_1041c640 @ 1041c640  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_1041c640(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1041cda0 @ 1041cda0  size=134 ===== */
// calls: _wassert
// strings:
//   "[stData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1041cdb0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_1041cda0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[stData]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_1028e990(param_1,param_2,param_3);
      return;
    }
    FUN_1028e990(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_1041de50 @ 1041de50  size=374 ===== */
// calls: _wassert
// strings:
//   "[iGuideBookChapterCount]"
//   "[astGuideBookChapterInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "0x%02x"
//   "[chIsFisrtAutoOpenGuideBook]"
//   "[chWeaopnId]"
//   "[stGuideActionInfos]"

/* WARNING: Removing unreachable block (ram,0x1041dec9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iGuideBookChapterCount]""
     ""[astGuideBookChapterInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""0x%02x""
     ""[chIsFisrtAutoOpenGuideBook]""
     ""[chWeaopnId]""
     ""[stGuideActionInfos]"" */

int __thiscall FUN_1041de50(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iGuideBookChapterCount]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuideBookChapterInfos]",iVar2,
                             (int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1041d9f0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chIsFisrtAutoOpenGuideBook]","0x%02x",
                         (int)(char)param_1[0x13]);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[chWeaopnId]","0x%02x",
                              (int)*(char *)((int)param_1 + 0x4d)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a1e0(param_4,"[stGuideActionInfos]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        iVar1 = FUN_1041d580(param_2,param_3,param_4);
        return iVar1;
      }
      iVar1 = FUN_1041d580(param_2,param_3 + 1,param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_1041e120 @ 1041e120  size=101 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_1041e120(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10420a10 @ 10420a10  size=271 ===== */
// calls: _wassert
// strings:
//   "[iErrCode]"
//   "[iLevelCount]"
//   "[astPassLevelInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10420aa9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iErrCode]""
     ""[iLevelCount]""
     ""[astPassLevelInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10420a10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iLevelCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x37 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astPassLevelInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102ab4d0(param_2,iVar1,param_4);
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



/* ===== FUN_10420ec0 @ 10420ec0  size=298 ===== */
// calls: _wassert
// strings:
//   "[iMonsterIndex]"
//   "0x%02x"
//   "[bCardType]"
//   "[bMaterialNum]"
//   "[astMaterialList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10420f6c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iMonsterIndex]""
     ""0x%02x""
     ""[bCardType]""
     ""[bMaterialNum]""
     ""[astMaterialList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10420ec0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iMonsterIndex]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bCardType]","0x%02x",
                            *(undefined1 *)(param_1 + 1)), iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[bMaterialNum]","0x%02x",
                           *(undefined1 *)((int)param_1 + 5)), iVar1 == 0)) {
    if (100 < *(byte *)((int)param_1 + 5)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)((int)param_1 + 5) != 0) {
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
      } while (bVar2 < *(byte *)((int)param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



