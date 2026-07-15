/* ===== FUN_10206300 @ 10206300  size=119 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_10206300(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = FUN_10203930(param_1);
    if (iVar4 == 0) {
      FUN_1010c3c0(*(int *)(param_1 + 4) - iVar3,uVar1);
    }
  }
  return;
}



/* ===== FUN_10206380 @ 10206380  size=119 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_10206380(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = FUN_10204070(param_1);
    if (iVar4 == 0) {
      FUN_1010c3c0(*(int *)(param_1 + 4) - iVar3,uVar1);
    }
  }
  return;
}



/* ===== FUN_10206700 @ 10206700  size=134 ===== */
// calls: _wassert
// strings:
//   "[farm]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10206710) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[farm]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10206700(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[farm]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_10205ad0(param_1,param_2,param_3);
      return;
    }
    FUN_10205ad0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10207890 @ 10207890  size=1528 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10207890(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x25);
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
    } while (uVar6 < 7);
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
      iVar3 = FUN_1010c5f0(0x45);
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
      puVar5 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar4 = FUN_1010c560(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 7);
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
        iVar3 = FUN_1010c5f0(0x55);
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
        puVar5 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar4 = FUN_1010c560(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < 7);
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
          iVar3 = FUN_1010c5f0(0x65);
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
          iVar3 = piVar2[1];
          puVar5 = (undefined4 *)(param_1 + 0x54);
          uVar6 = 0;
          do {
            iVar4 = FUN_1010c560(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 < 7);
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
            iVar3 = FUN_1010c5f0(0x75);
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
            puVar5 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar4 = FUN_1010c560(*puVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar6 = uVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar6 < 7);
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
              iVar3 = FUN_1010c5f0(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              uVar1 = piVar2[1];
              if ((uint)piVar2[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar6 = piVar2[1];
              if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                piVar2[1] = uVar6 + 4;
              }
              uVar6 = 0;
              iVar3 = piVar2[1];
              puVar5 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 < 7);
              iVar3 = piVar2[1] - iVar3;
              if ((uint)piVar2[2] < (uint)piVar2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar2) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
                *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
                *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
                iVar3 = FUN_1010c5f0(0x95);
                if (iVar3 != 0) {
                  return iVar3;
                }
                uVar1 = piVar2[1];
                if ((uint)piVar2[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar6 = piVar2[1];
                if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                  piVar2[1] = uVar6 + 4;
                }
                uVar6 = 0;
                iVar3 = piVar2[1];
                puVar5 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar4 = FUN_1010c560(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar6 = uVar6 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar6 < 7);
                iVar3 = piVar2[1] - iVar3;
                if ((uint)piVar2[2] < (uint)piVar2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
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
            }
          }
        }
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_10207e90 @ 10207e90  size=1872 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10207e90(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  
  piVar3 = param_2;
  iVar4 = FUN_1010c5f0(0x25);
  if (iVar4 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar7 = param_2[1];
    if ((uVar7 <= (uint)param_2[2]) && (3 < param_2[2] - uVar7)) {
      param_2[1] = uVar7 + 4;
    }
    iVar4 = param_2[1];
    uVar7 = 0;
    do {
      iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + uVar7 * 4));
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    iVar4 = param_2[1] - iVar4;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar5 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
      *(undefined1 *)(uVar1 + iVar5) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
      *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
      *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
      iVar4 = FUN_1010c5f0(0x45);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar1 = piVar3[1];
      if ((uint)piVar3[2] < uVar1) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar7 = piVar3[1];
      if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
        piVar3[1] = uVar7 + 4;
      }
      iVar4 = piVar3[1];
      uVar7 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar5 = FUN_1010c190(*puVar6);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < 7);
      iVar4 = piVar3[1] - iVar4;
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
      }
      if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
        param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
        *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
        param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
        *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
        *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
        *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
        iVar4 = FUN_1010c5f0(0x55);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar1 = piVar3[1];
        if ((uint)piVar3[2] < uVar1) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
        }
        uVar7 = piVar3[1];
        if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
          piVar3[1] = uVar7 + 4;
        }
        iVar4 = piVar3[1];
        uVar7 = 0;
        puVar6 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar5 = FUN_1010c190(*puVar6);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < 7);
        iVar4 = piVar3[1] - iVar4;
        if ((uint)piVar3[2] < (uint)piVar3[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
        }
        if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
          param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
          *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
          param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
          *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
          *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
          *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
          iVar4 = FUN_1010c5f0(0x65);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar1 = piVar3[1];
          if ((uint)piVar3[2] < uVar1) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
          }
          uVar7 = piVar3[1];
          if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
            piVar3[1] = uVar7 + 4;
          }
          iVar4 = piVar3[1];
          puVar6 = (undefined4 *)(param_1 + 0x54);
          local_c = 0;
          do {
            uVar2 = *puVar6;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
            }
            if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_102085d4;
            param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
            *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
            *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
            local_c = local_c + 1;
            *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
            *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
            piVar3[1] = piVar3[1] + 4;
            puVar6 = puVar6 + 1;
          } while (local_c < 7);
          iVar4 = piVar3[1] - iVar4;
          if ((uint)piVar3[2] < (uint)piVar3[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
          }
          if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
            param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
            *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
            *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
            *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
            iVar4 = FUN_1010c5f0(0x75);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar1 = piVar3[1];
            if ((uint)piVar3[2] < uVar1) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
            }
            uVar7 = piVar3[1];
            if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
              piVar3[1] = uVar7 + 4;
            }
            iVar4 = piVar3[1];
            puVar6 = (undefined4 *)(param_1 + 0x70);
            local_10 = 0;
            do {
              uVar2 = *puVar6;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108
                        );
              }
              if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_102085d4;
              param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
              *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
              *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
              local_10 = local_10 + 1;
              *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
              *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
              piVar3[1] = piVar3[1] + 4;
              puVar6 = puVar6 + 1;
            } while (local_10 < 7);
            iVar4 = piVar3[1] - iVar4;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
            }
            if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
              param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
              *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
              *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
              *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
              *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
              iVar4 = FUN_1010c5f0(0x85);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar1 = piVar3[1];
              if ((uint)piVar3[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar7 = piVar3[1];
              if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                piVar3[1] = uVar7 + 4;
              }
              iVar4 = piVar3[1];
              puVar6 = (undefined4 *)(param_1 + 0x8c);
              local_10 = 0;
              do {
                uVar2 = *puVar6;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x108);
                }
                if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_102085d4;
                param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                local_10 = local_10 + 1;
                *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                piVar3[1] = piVar3[1] + 4;
                puVar6 = puVar6 + 1;
              } while (local_10 < 7);
              iVar4 = piVar3[1] - iVar4;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                iVar4 = FUN_1010c5f0(0x95);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar1 = piVar3[1];
                if ((uint)piVar3[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar7 = piVar3[1];
                if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                  piVar3[1] = uVar7 + 4;
                }
                iVar4 = piVar3[1];
                puVar6 = (undefined4 *)(param_1 + 0xa8);
                local_10 = 0;
                do {
                  uVar2 = *puVar6;
                  if ((uint)piVar3[2] < (uint)piVar3[1]) {
                    _wassert(L"position <= length",
                             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                             0x108);
                  }
                  if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_102085d4;
                  param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                  *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                  *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                  *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                  *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                  local_10 = local_10 + 1;
                  piVar3[1] = piVar3[1] + 4;
                  puVar6 = puVar6 + 1;
                } while (local_10 < 7);
                iVar4 = piVar3[1] - iVar4;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
                }
                if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                  param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                  *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                  *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                  *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                  *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_102085d4:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_102090a0 @ 102090a0  size=1373 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharExp]"
//   "[oCharGlut]"
//   "[oEvloveStage]"
//   "[oImage]"
//   "[oFollow]"
//   "[oFeedTime]"

/* WARNING: Removing unreachable block (ram,0x10209471) */
/* WARNING: Removing unreachable block (ram,0x102092f1) */
/* WARNING: Removing unreachable block (ram,0x10209171) */
/* WARNING: Removing unreachable block (ram,0x102090b8) */
/* WARNING: Removing unreachable block (ram,0x10209231) */
/* WARNING: Removing unreachable block (ram,0x102093b1) */
/* WARNING: Removing unreachable block (ram,0x10209534) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[oCharLevel]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[oCharExp]""
     ""[oCharGlut]""
     ""[oEvloveStage]""
     ""[oImage]"" */

int __thiscall FUN_102090a0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar3 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 7);
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
      iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharExp]",6,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 7);
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
        iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharGlut]",6,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = 0;
        puVar2 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < 7);
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
          iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oEvloveStage]",6,0);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = 0;
          puVar2 = (undefined4 *)(param_1 + 0x54);
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 < 7);
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
            iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oImage]",6,0);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = 0;
            puVar2 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = uVar3 + 1;
              puVar2 = puVar2 + 1;
            } while (uVar3 < 7);
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
              iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFollow]",6,0);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = 0;
              puVar2 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 1;
              } while (uVar3 < 7);
              if ((uint)param_2[2] < (uint)param_2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4)
                ;
              }
              if (1 < (uint)(param_2[2] - param_2[1])) {
                *(undefined1 *)(param_2[1] + *param_2) = param_4;
                param_2[1] = param_2[1] + 1;
                *(undefined1 *)(param_2[1] + *param_2) = 0;
                iVar1 = FUN_1024a140(param_3);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFeedTime]",6,0);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = 0;
                puVar2 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  uVar3 = uVar3 + 1;
                  puVar2 = puVar2 + 1;
                } while (uVar3 < 7);
                if ((uint)param_2[2] < (uint)param_2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0xc4);
                }
                if (1 < (uint)(param_2[2] - param_2[1])) {
                  *(undefined1 *)(param_2[1] + *param_2) = param_4;
                  param_2[1] = param_2[1] + 1;
                  *(undefined1 *)(param_2[1] + *param_2) = 0;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_102098b0 @ 102098b0  size=1528 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102098b0(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x25);
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
    } while (uVar6 < 7);
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
      iVar3 = FUN_1010c5f0(0x45);
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
      puVar5 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar4 = FUN_1010c560(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 7);
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
        iVar3 = FUN_1010c5f0(0x55);
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
        puVar5 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar4 = FUN_1010c560(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < 7);
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
          iVar3 = FUN_1010c5f0(0x65);
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
          iVar3 = piVar2[1];
          puVar5 = (undefined4 *)(param_1 + 0x54);
          uVar6 = 0;
          do {
            iVar4 = FUN_1010c560(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 < 7);
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
            iVar3 = FUN_1010c5f0(0x75);
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
            puVar5 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar4 = FUN_1010c560(*puVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar6 = uVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar6 < 7);
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
              iVar3 = FUN_1010c5f0(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              uVar1 = piVar2[1];
              if ((uint)piVar2[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar6 = piVar2[1];
              if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                piVar2[1] = uVar6 + 4;
              }
              uVar6 = 0;
              iVar3 = piVar2[1];
              puVar5 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 < 7);
              iVar3 = piVar2[1] - iVar3;
              if ((uint)piVar2[2] < (uint)piVar2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar2) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
                *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
                *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
                iVar3 = FUN_1010c5f0(0x95);
                if (iVar3 != 0) {
                  return iVar3;
                }
                uVar1 = piVar2[1];
                if ((uint)piVar2[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar6 = piVar2[1];
                if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                  piVar2[1] = uVar6 + 4;
                }
                uVar6 = 0;
                iVar3 = piVar2[1];
                puVar5 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar4 = FUN_1010c560(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar6 = uVar6 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar6 < 7);
                iVar3 = piVar2[1] - iVar3;
                if ((uint)piVar2[2] < (uint)piVar2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
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
            }
          }
        }
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_10209eb0 @ 10209eb0  size=1872 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10209eb0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  
  piVar3 = param_2;
  iVar4 = FUN_1010c5f0(0x25);
  if (iVar4 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar7 = param_2[1];
    if ((uVar7 <= (uint)param_2[2]) && (3 < param_2[2] - uVar7)) {
      param_2[1] = uVar7 + 4;
    }
    iVar4 = param_2[1];
    uVar7 = 0;
    do {
      iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + uVar7 * 4));
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    iVar4 = param_2[1] - iVar4;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar5 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
      *(undefined1 *)(uVar1 + iVar5) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
      *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
      *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
      iVar4 = FUN_1010c5f0(0x45);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar1 = piVar3[1];
      if ((uint)piVar3[2] < uVar1) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar7 = piVar3[1];
      if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
        piVar3[1] = uVar7 + 4;
      }
      iVar4 = piVar3[1];
      uVar7 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar5 = FUN_1010c190(*puVar6);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < 7);
      iVar4 = piVar3[1] - iVar4;
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
      }
      if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
        param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
        *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
        param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
        *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
        *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
        *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
        iVar4 = FUN_1010c5f0(0x55);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar1 = piVar3[1];
        if ((uint)piVar3[2] < uVar1) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
        }
        uVar7 = piVar3[1];
        if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
          piVar3[1] = uVar7 + 4;
        }
        iVar4 = piVar3[1];
        uVar7 = 0;
        puVar6 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar5 = FUN_1010c190(*puVar6);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < 7);
        iVar4 = piVar3[1] - iVar4;
        if ((uint)piVar3[2] < (uint)piVar3[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
        }
        if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
          param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
          *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
          param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
          *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
          *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
          *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
          iVar4 = FUN_1010c5f0(0x65);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar1 = piVar3[1];
          if ((uint)piVar3[2] < uVar1) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
          }
          uVar7 = piVar3[1];
          if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
            piVar3[1] = uVar7 + 4;
          }
          iVar4 = piVar3[1];
          puVar6 = (undefined4 *)(param_1 + 0x54);
          local_c = 0;
          do {
            uVar2 = *puVar6;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
            }
            if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020a5f4;
            param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
            *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
            *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
            local_c = local_c + 1;
            *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
            *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
            piVar3[1] = piVar3[1] + 4;
            puVar6 = puVar6 + 1;
          } while (local_c < 7);
          iVar4 = piVar3[1] - iVar4;
          if ((uint)piVar3[2] < (uint)piVar3[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
          }
          if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
            param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
            *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
            *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
            *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
            iVar4 = FUN_1010c5f0(0x75);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar1 = piVar3[1];
            if ((uint)piVar3[2] < uVar1) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
            }
            uVar7 = piVar3[1];
            if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
              piVar3[1] = uVar7 + 4;
            }
            iVar4 = piVar3[1];
            puVar6 = (undefined4 *)(param_1 + 0x70);
            local_10 = 0;
            do {
              uVar2 = *puVar6;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108
                        );
              }
              if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020a5f4;
              param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
              *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
              *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
              local_10 = local_10 + 1;
              *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
              *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
              piVar3[1] = piVar3[1] + 4;
              puVar6 = puVar6 + 1;
            } while (local_10 < 7);
            iVar4 = piVar3[1] - iVar4;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
            }
            if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
              param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
              *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
              *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
              *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
              *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
              iVar4 = FUN_1010c5f0(0x85);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar1 = piVar3[1];
              if ((uint)piVar3[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar7 = piVar3[1];
              if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                piVar3[1] = uVar7 + 4;
              }
              iVar4 = piVar3[1];
              puVar6 = (undefined4 *)(param_1 + 0x8c);
              local_10 = 0;
              do {
                uVar2 = *puVar6;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x108);
                }
                if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020a5f4;
                param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                local_10 = local_10 + 1;
                *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                piVar3[1] = piVar3[1] + 4;
                puVar6 = puVar6 + 1;
              } while (local_10 < 7);
              iVar4 = piVar3[1] - iVar4;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                iVar4 = FUN_1010c5f0(0x95);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar1 = piVar3[1];
                if ((uint)piVar3[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar7 = piVar3[1];
                if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                  piVar3[1] = uVar7 + 4;
                }
                iVar4 = piVar3[1];
                puVar6 = (undefined4 *)(param_1 + 0xa8);
                local_10 = 0;
                do {
                  uVar2 = *puVar6;
                  if ((uint)piVar3[2] < (uint)piVar3[1]) {
                    _wassert(L"position <= length",
                             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                             0x108);
                  }
                  if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020a5f4;
                  param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                  *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                  *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                  *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                  *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                  local_10 = local_10 + 1;
                  piVar3[1] = piVar3[1] + 4;
                  puVar6 = puVar6 + 1;
                } while (local_10 < 7);
                iVar4 = piVar3[1] - iVar4;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
                }
                if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                  param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                  *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                  *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                  *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                  *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_1020a5f4:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_1020b0c0 @ 1020b0c0  size=1373 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharExp]"
//   "[oCharGlut]"
//   "[oEvloveStage]"
//   "[oImage]"
//   "[oFollow]"
//   "[oFeedTime]"

/* WARNING: Removing unreachable block (ram,0x1020b491) */
/* WARNING: Removing unreachable block (ram,0x1020b311) */
/* WARNING: Removing unreachable block (ram,0x1020b191) */
/* WARNING: Removing unreachable block (ram,0x1020b0d8) */
/* WARNING: Removing unreachable block (ram,0x1020b251) */
/* WARNING: Removing unreachable block (ram,0x1020b3d1) */
/* WARNING: Removing unreachable block (ram,0x1020b554) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[oCharLevel]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[oCharExp]""
     ""[oCharGlut]""
     ""[oEvloveStage]""
     ""[oImage]"" */

int __thiscall FUN_1020b0c0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar3 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 7);
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
      iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharExp]",6,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 7);
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
        iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharGlut]",6,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = 0;
        puVar2 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < 7);
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
          iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oEvloveStage]",6,0);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = 0;
          puVar2 = (undefined4 *)(param_1 + 0x54);
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 < 7);
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
            iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oImage]",6,0);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = 0;
            puVar2 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = uVar3 + 1;
              puVar2 = puVar2 + 1;
            } while (uVar3 < 7);
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
              iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFollow]",6,0);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = 0;
              puVar2 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 1;
              } while (uVar3 < 7);
              if ((uint)param_2[2] < (uint)param_2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4)
                ;
              }
              if (1 < (uint)(param_2[2] - param_2[1])) {
                *(undefined1 *)(param_2[1] + *param_2) = param_4;
                param_2[1] = param_2[1] + 1;
                *(undefined1 *)(param_2[1] + *param_2) = 0;
                iVar1 = FUN_1024a140(param_3);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFeedTime]",6,0);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = 0;
                puVar2 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  uVar3 = uVar3 + 1;
                  puVar2 = puVar2 + 1;
                } while (uVar3 < 7);
                if ((uint)param_2[2] < (uint)param_2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0xc4);
                }
                if (1 < (uint)(param_2[2] - param_2[1])) {
                  *(undefined1 *)(param_2[1] + *param_2) = param_4;
                  param_2[1] = param_2[1] + 1;
                  *(undefined1 *)(param_2[1] + *param_2) = 0;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_1020b8c0 @ 1020b8c0  size=1528 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1020b8c0(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar2 = param_2;
  iVar3 = FUN_1010c5f0(0x25);
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
    } while (uVar6 < 7);
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
      iVar3 = FUN_1010c5f0(0x45);
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
      puVar5 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar4 = FUN_1010c560(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 7);
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
        iVar3 = FUN_1010c5f0(0x55);
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
        puVar5 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar4 = FUN_1010c560(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < 7);
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
          iVar3 = FUN_1010c5f0(0x65);
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
          iVar3 = piVar2[1];
          puVar5 = (undefined4 *)(param_1 + 0x54);
          uVar6 = 0;
          do {
            iVar4 = FUN_1010c560(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 < 7);
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
            iVar3 = FUN_1010c5f0(0x75);
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
            puVar5 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar4 = FUN_1010c560(*puVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar6 = uVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar6 < 7);
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
              iVar3 = FUN_1010c5f0(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              uVar1 = piVar2[1];
              if ((uint)piVar2[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar6 = piVar2[1];
              if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                piVar2[1] = uVar6 + 4;
              }
              uVar6 = 0;
              iVar3 = piVar2[1];
              puVar5 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 < 7);
              iVar3 = piVar2[1] - iVar3;
              if ((uint)piVar2[2] < (uint)piVar2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar2) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
                *(undefined1 *)(*piVar2 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar2 + 2 + uVar1) = (char)((uint)iVar3 >> 8);
                *(char *)(*piVar2 + 3 + uVar1) = (char)iVar3;
                iVar3 = FUN_1010c5f0(0x95);
                if (iVar3 != 0) {
                  return iVar3;
                }
                uVar1 = piVar2[1];
                if ((uint)piVar2[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar6 = piVar2[1];
                if ((uVar6 <= (uint)piVar2[2]) && (3 < piVar2[2] - uVar6)) {
                  piVar2[1] = uVar6 + 4;
                }
                uVar6 = 0;
                iVar3 = piVar2[1];
                puVar5 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar4 = FUN_1010c560(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar6 = uVar6 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar6 < 7);
                iVar3 = piVar2[1] - iVar3;
                if ((uint)piVar2[2] < (uint)piVar2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
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
            }
          }
        }
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_1020bec0 @ 1020bec0  size=1872 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1020bec0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  
  piVar3 = param_2;
  iVar4 = FUN_1010c5f0(0x25);
  if (iVar4 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar7 = param_2[1];
    if ((uVar7 <= (uint)param_2[2]) && (3 < param_2[2] - uVar7)) {
      param_2[1] = uVar7 + 4;
    }
    iVar4 = param_2[1];
    uVar7 = 0;
    do {
      iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + uVar7 * 4));
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    iVar4 = param_2[1] - iVar4;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_2[2]) && (3 < param_2[2] - uVar1)) {
      iVar5 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
      *(undefined1 *)(uVar1 + iVar5) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
      *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
      *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
      iVar4 = FUN_1010c5f0(0x45);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar1 = piVar3[1];
      if ((uint)piVar3[2] < uVar1) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar7 = piVar3[1];
      if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
        piVar3[1] = uVar7 + 4;
      }
      iVar4 = piVar3[1];
      uVar7 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar5 = FUN_1010c190(*puVar6);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < 7);
      iVar4 = piVar3[1] - iVar4;
      if ((uint)piVar3[2] < (uint)piVar3[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
      }
      if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
        param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
        *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
        param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
        *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
        *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
        *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
        iVar4 = FUN_1010c5f0(0x55);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar1 = piVar3[1];
        if ((uint)piVar3[2] < uVar1) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
        }
        uVar7 = piVar3[1];
        if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
          piVar3[1] = uVar7 + 4;
        }
        iVar4 = piVar3[1];
        uVar7 = 0;
        puVar6 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar5 = FUN_1010c190(*puVar6);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < 7);
        iVar4 = piVar3[1] - iVar4;
        if ((uint)piVar3[2] < (uint)piVar3[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
        }
        if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
          param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
          *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
          param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
          *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
          *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
          *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
          iVar4 = FUN_1010c5f0(0x65);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar1 = piVar3[1];
          if ((uint)piVar3[2] < uVar1) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
          }
          uVar7 = piVar3[1];
          if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
            piVar3[1] = uVar7 + 4;
          }
          iVar4 = piVar3[1];
          puVar6 = (undefined4 *)(param_1 + 0x54);
          local_c = 0;
          do {
            uVar2 = *puVar6;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108);
            }
            if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020c604;
            param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
            *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
            *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
            local_c = local_c + 1;
            *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
            *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
            piVar3[1] = piVar3[1] + 4;
            puVar6 = puVar6 + 1;
          } while (local_c < 7);
          iVar4 = piVar3[1] - iVar4;
          if ((uint)piVar3[2] < (uint)piVar3[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
          }
          if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
            param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
            param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
            *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
            *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
            *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
            iVar4 = FUN_1010c5f0(0x75);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar1 = piVar3[1];
            if ((uint)piVar3[2] < uVar1) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
            }
            uVar7 = piVar3[1];
            if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
              piVar3[1] = uVar7 + 4;
            }
            iVar4 = piVar3[1];
            puVar6 = (undefined4 *)(param_1 + 0x70);
            local_10 = 0;
            do {
              uVar2 = *puVar6;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x108
                        );
              }
              if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020c604;
              param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
              *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
              *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
              local_10 = local_10 + 1;
              *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
              *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
              piVar3[1] = piVar3[1] + 4;
              puVar6 = puVar6 + 1;
            } while (local_10 < 7);
            iVar4 = piVar3[1] - iVar4;
            if ((uint)piVar3[2] < (uint)piVar3[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
            }
            if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
              param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
              *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
              param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
              *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
              *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
              *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
              iVar4 = FUN_1010c5f0(0x85);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar1 = piVar3[1];
              if ((uint)piVar3[2] < uVar1) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92)
                ;
              }
              uVar7 = piVar3[1];
              if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                piVar3[1] = uVar7 + 4;
              }
              iVar4 = piVar3[1];
              puVar6 = (undefined4 *)(param_1 + 0x8c);
              local_10 = 0;
              do {
                uVar2 = *puVar6;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x108);
                }
                if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020c604;
                param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                local_10 = local_10 + 1;
                *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                piVar3[1] = piVar3[1] + 4;
                puVar6 = puVar6 + 1;
              } while (local_10 < 7);
              iVar4 = piVar3[1] - iVar4;
              if ((uint)piVar3[2] < (uint)piVar3[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d
                        );
              }
              if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                iVar4 = FUN_1010c5f0(0x95);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar1 = piVar3[1];
                if ((uint)piVar3[2] < uVar1) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x92);
                }
                uVar7 = piVar3[1];
                if ((uVar7 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar7)) {
                  piVar3[1] = uVar7 + 4;
                }
                iVar4 = piVar3[1];
                puVar6 = (undefined4 *)(param_1 + 0xa8);
                local_10 = 0;
                do {
                  uVar2 = *puVar6;
                  if ((uint)piVar3[2] < (uint)piVar3[1]) {
                    _wassert(L"position <= length",
                             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                             0x108);
                  }
                  if ((uint)(piVar3[2] - piVar3[1]) < 4) goto LAB_1020c604;
                  param_2._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
                  *(undefined1 *)(piVar3[1] + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
                  *(undefined1 *)(piVar3[1] + 1 + *piVar3) = param_2._2_1_;
                  *(char *)(piVar3[1] + 2 + *piVar3) = (char)((uint)uVar2 >> 8);
                  *(char *)(piVar3[1] + 3 + *piVar3) = (char)uVar2;
                  local_10 = local_10 + 1;
                  piVar3[1] = piVar3[1] + 4;
                  puVar6 = puVar6 + 1;
                } while (local_10 < 7);
                iVar4 = piVar3[1] - iVar4;
                if ((uint)piVar3[2] < (uint)piVar3[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0x18d);
                }
                if ((uVar1 <= (uint)piVar3[2]) && (3 < piVar3[2] - uVar1)) {
                  param_2._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
                  *(undefined1 *)(uVar1 + *piVar3) = param_2._3_1_;
                  param_2._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
                  *(undefined1 *)(*piVar3 + 1 + uVar1) = param_2._2_1_;
                  *(char *)(*piVar3 + 2 + uVar1) = (char)((uint)iVar4 >> 8);
                  *(char *)(*piVar3 + 3 + uVar1) = (char)iVar4;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_1020c604:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_1020d0d0 @ 1020d0d0  size=1373 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharExp]"
//   "[oCharGlut]"
//   "[oEvloveStage]"
//   "[oImage]"
//   "[oFollow]"
//   "[oFeedTime]"

/* WARNING: Removing unreachable block (ram,0x1020d4a1) */
/* WARNING: Removing unreachable block (ram,0x1020d321) */
/* WARNING: Removing unreachable block (ram,0x1020d1a1) */
/* WARNING: Removing unreachable block (ram,0x1020d0e8) */
/* WARNING: Removing unreachable block (ram,0x1020d261) */
/* WARNING: Removing unreachable block (ram,0x1020d3e1) */
/* WARNING: Removing unreachable block (ram,0x1020d564) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[oCharLevel]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[oCharExp]""
     ""[oCharGlut]""
     ""[oEvloveStage]""
     ""[oImage]"" */

int __thiscall FUN_1020d0d0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar3 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 7);
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
      iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharExp]",6,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)(param_1 + 0x1c);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 7);
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
        iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharGlut]",6,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = 0;
        puVar2 = (undefined4 *)(param_1 + 0x38);
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < 7);
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
          iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oEvloveStage]",6,0);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = 0;
          puVar2 = (undefined4 *)(param_1 + 0x54);
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 < 7);
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
            iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oImage]",6,0);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar3 = 0;
            puVar2 = (undefined4 *)(param_1 + 0x70);
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = uVar3 + 1;
              puVar2 = puVar2 + 1;
            } while (uVar3 < 7);
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
              iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFollow]",6,0);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = 0;
              puVar2 = (undefined4 *)(param_1 + 0x8c);
              do {
                iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 1;
              } while (uVar3 < 7);
              if ((uint)param_2[2] < (uint)param_2[1]) {
                _wassert(L"position <= length",
                         L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4)
                ;
              }
              if (1 < (uint)(param_2[2] - param_2[1])) {
                *(undefined1 *)(param_2[1] + *param_2) = param_4;
                param_2[1] = param_2[1] + 1;
                *(undefined1 *)(param_2[1] + *param_2) = 0;
                iVar1 = FUN_1024a140(param_3);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oFeedTime]",6,0);
                if (iVar1 != 0) {
                  return iVar1;
                }
                uVar3 = 0;
                puVar2 = (undefined4 *)(param_1 + 0xa8);
                do {
                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  uVar3 = uVar3 + 1;
                  puVar2 = puVar2 + 1;
                } while (uVar3 < 7);
                if ((uint)param_2[2] < (uint)param_2[1]) {
                  _wassert(L"position <= length",
                           L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",
                           0xc4);
                }
                if (1 < (uint)(param_2[2] - param_2[1])) {
                  *(undefined1 *)(param_2[1] + *param_2) = param_4;
                  param_2[1] = param_2[1] + 1;
                  *(undefined1 *)(param_2[1] + *param_2) = 0;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_1020ddd0 @ 1020ddd0  size=177 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1020ddd0(undefined1 *param_1,int *param_2)

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
      if ((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
          (iVar2 = FUN_1010c5f0(0x30), iVar2 == 0)) &&
         ((iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 5)), iVar2 == 0 &&
          (iVar2 = FUN_1010c5f0(0x40), iVar2 == 0)))) {
        iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 9));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1020de90 @ 1020de90  size=177 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1020de90(undefined1 *param_1,int *param_2)

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
      if ((((iVar2 == 0) && (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
          (iVar2 = FUN_1010c5f0(0x33), iVar2 == 0)) &&
         ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 5)), iVar2 == 0 &&
          (iVar2 = FUN_1010c5f0(0x43), iVar2 == 0)))) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 9));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1020f2f0 @ 1020f2f0  size=671 ===== */
// calls: _wassert
// strings:
//   "%I64u"
//   "[lastResetTm]"
//   "0x%02x"
//   "[limitDataCnt]"
//   "[shopType]"
//   " 0x%02x"
//   "[shopID]"
//   "[saleID]"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[buyCount]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"

/* WARNING: Removing unreachable block (ram,0x1020f4c2) */
/* [RE-AUTO c0]
   src: TdrBuf.h, TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64u""
     ""[lastResetTm]""
     ""0x%02x""
     ""[limitDataCnt]""
     ""[shopType]""
     "" 0x%02x""
     ""[shopID]""
     ""[saleID]""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1020f2f0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[lastResetTm]","%I64u",*param_1,param_1[1]);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[limitDataCnt]","0x%02x",
                            *(undefined1 *)(param_1 + 2)), iVar1 == 0)) &&
     (iVar1 = FUN_1024a3b0(extraout_ECX,"[shopType]",*(undefined1 *)(param_1 + 2),0), iVar1 == 0)) {
    bVar2 = 0;
    if (*(char *)(param_1 + 2) != '\0') {
      do {
        iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)(bVar2 + 9 + (int)param_1));
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)(param_1 + 2));
    }
    iVar1 = FUN_1010c060(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a3b0(extraout_ECX_00,"[shopID]",*(undefined1 *)(param_1 + 2),0), iVar1 == 0)
       ) {
      bVar2 = 0;
      if (*(char *)(param_1 + 2) != '\0') {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,
                               *(undefined4 *)((int)param_1 + (uint)bVar2 * 4 + 0x109));
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *(byte *)(param_1 + 2));
      }
      iVar1 = FUN_1010c060(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a3b0(extraout_ECX_01,"[saleID]",*(undefined1 *)(param_1 + 2),0),
         iVar1 == 0)) {
        bVar2 = 0;
        if (*(char *)(param_1 + 2) != '\0') {
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,
                                 *(undefined4 *)((int)param_1 + (uint)bVar2 * 4 + 0x509));
            if (iVar1 != 0) {
              return iVar1;
            }
            bVar2 = bVar2 + 1;
          } while (bVar2 < *(byte *)(param_1 + 2));
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
        }
        if (1 < (uint)(param_2[2] - param_2[1])) {
          *(char *)(param_2[1] + *param_2) = (char)param_4;
          param_2[1] = param_2[1] + 1;
          *(undefined1 *)(param_2[1] + *param_2) = 0;
          bVar2 = *(byte *)(param_1 + 2);
          iVar1 = FUN_1024a140(param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[buyCount]",bVar2 - 1,-(uint)(bVar2 == 0));
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = 0;
          if (*(char *)(param_1 + 2) != '\0') {
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                                   *(undefined2 *)((int)param_1 + (uint)bVar2 * 2 + 0x909));
              if (iVar1 != 0) {
                return iVar1;
              }
              bVar2 = bVar2 + 1;
            } while (bVar2 < *(byte *)(param_1 + 2));
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
          }
          if (1 < (uint)(param_2[2] - param_2[1])) {
            *(char *)(param_2[1] + *param_2) = (char)param_4;
            param_2[1] = param_2[1] + 1;
            *(undefined1 *)(param_2[1] + *param_2) = 0;
            return 0;
          }
        }
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1020f9c0 @ 1020f9c0  size=311 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_1020f9c0(undefined1 *param_1,int *param_2,int param_3)

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
LAB_1020fac8:
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
          goto LAB_1020fac8;
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



/* ===== FUN_10210c80 @ 10210c80  size=273 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10210c80(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar3) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar1 = local_8 >> 4;
      if (uVar1 == 1) {
        if ((param_1[10] & 1) == 0) {
          *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 1;
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
        if (uVar1 == 2) {
          if ((*(uint *)(param_1 + 10) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 2;
          }
          puVar2 = param_1 + 2;
LAB_10210d0b:
          uVar1 = FUN_1010c870(puVar2);
        }
        else {
          if (uVar1 == 3) {
            if ((*(uint *)(param_1 + 10) >> 2 & 1) == 0) {
              *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 4;
            }
            puVar2 = param_1 + 6;
            goto LAB_10210d0b;
          }
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar3);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar3 < uVar1) & 0xffffffde;
}



/* ===== FUN_102121e0 @ 102121e0  size=725 ===== */
// calls: _wassert
// strings:
//   "[shopCount]"
//   "[shops]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[dayBuyItemLimitData]"
//   "[weekBuyItemLimitData]"
//   "[monthBuyItemLimitData]"
//   "[foreverBuyLimitData]"
//   "[groupCount]"
//   "[groups]"

/* WARNING: Removing unreachable block (ram,0x10212269) */
/* WARNING: Removing unreachable block (ram,0x102122f4) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[shopCount]""
     ""[shops]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[dayBuyItemLimitData]""
     ""[weekBuyItemLimitData]""
     ""[monthBuyItemLimitData]""
     ""[foreverBuyLimitData]""
     ""[groupCount]"" */

int __thiscall FUN_102121e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *piVar4;
  
  iVar1 = param_3;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[shopCount]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    iVar2 = *param_1;
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
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[shops]",param_3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_102106f0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < *param_1);
    }
    iVar2 = FUN_1024a140(iVar1);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1010c010(param_2,&DAT_11da4eb8,"[dayBuyItemLimitData]",(int)(char)param_4),
       iVar2 == 0)) {
      iVar2 = iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1 + 1;
      }
      iVar2 = FUN_1020f2f0(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_1024a1e0(param_4,"[weekBuyItemLimitData]",extraout_ECX), iVar2 == 0)) {
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1020f2f0(param_2,iVar2,param_4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1024a1e0(param_4,"[monthBuyItemLimitData]",extraout_ECX_00), iVar2 == 0)) {
          iVar2 = iVar1;
          if (-1 < iVar1) {
            iVar2 = iVar1 + 1;
          }
          iVar2 = FUN_1020f2f0(param_2,iVar2,param_4);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_1024a1e0(param_4,"[foreverBuyLimitData]",extraout_ECX_01), iVar2 == 0)) {
            iVar2 = iVar1;
            if (-1 < iVar1) {
              iVar2 = iVar1 + 1;
            }
            iVar2 = FUN_1020f2f0(param_2,iVar2,param_4);
            if ((iVar2 == 0) &&
               (iVar2 = FUN_1024a290(param_2,iVar1,param_4,"[groupCount]",&DAT_11d9e0b4,
                                     param_1[0x1568]), iVar2 == 0)) {
              iVar2 = param_1[0x1568];
              if (iVar2 < 0) {
                return -6;
              }
              if (0x80 < iVar2) {
                return -7;
              }
              if (0 < iVar2) {
                iVar2 = 0;
                piVar4 = param_1 + 0x1569;
                do {
                  iVar3 = FUN_1024a230(param_4,"[groups]",iVar2,piVar4);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  iVar3 = iVar1;
                  if (-1 < iVar1) {
                    iVar3 = iVar1 + 1;
                  }
                  iVar3 = FUN_10210e70(param_2,iVar3,param_4);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  iVar2 = iVar2 + 1;
                  piVar4 = param_1;
                } while (iVar2 < param_1[0x1568]);
              }
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102128e0 @ 102128e0  size=311 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_102128e0(undefined1 *param_1,int *param_2,int param_3)

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
LAB_102129e8:
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
          goto LAB_102129e8;
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



/* ===== FUN_10214140 @ 10214140  size=345 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[shops]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[refreshTimeD]"
//   "[refreshTimeW]"
//   "[refreshTimeM]"

/* WARNING: Removing unreachable block (ram,0x102141b9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[shops]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[refreshTimeD]""
     ""[refreshTimeW]""
     ""[refreshTimeM]"" */

int __thiscall FUN_10214140(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[shops]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10213570(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[refreshTimeD]",&DAT_11d9f574,param_1[0xa47]);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[refreshTimeW]",&DAT_11d9f574,param_1[0xa48]),
       iVar1 == 0)) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[refreshTimeM]",&DAT_11d9f574,param_1[0xa49]);
    }
  }
  return iVar1;
}



/* ===== FUN_10214e60 @ 10214e60  size=255 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10214e60(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_102152f0 @ 102152f0  size=447 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102152f0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_ECX_02;
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
      param_2[1] = param_2[1] + 1;
      if (0x14 < *param_1) {
        return -7;
      }
      if (*param_1 != 0) {
        iVar3 = FUN_1010c5f0(0x25);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        if (*param_1 != 0) {
          do {
            iVar4 = FUN_101150a0(param_1[bVar7 + 1]);
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
      iVar3 = FUN_1010c5f0(0x31);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_101150a0(param_1[0x15]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (10 < param_1[0x15]) {
        return -7;
      }
      if (param_1[0x15] != 0) {
        iVar3 = FUN_1010c5f0(0x45);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX_00);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_01;
        if (param_1[0x15] != 0) {
          do {
            iVar4 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar5 = FUN_10214c50(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            if (iVar4 != 0) {
              return iVar4;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_02;
          } while (bVar7 < param_1[0x15]);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar3 = FUN_1010c5f0(0x50);
      if (iVar3 == 0) {
        iVar3 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x7a));
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_102154b0 @ 102154b0  size=447 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102154b0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_ECX_02;
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
      param_2[1] = param_2[1] + 1;
      if (0x14 < *param_1) {
        return -7;
      }
      if (*param_1 != 0) {
        iVar3 = FUN_1010c5f0(0x25);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        if (*param_1 != 0) {
          do {
            iVar4 = FUN_101150a0(param_1[bVar7 + 1]);
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
      iVar3 = FUN_1010c5f0(0x31);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_101150a0(param_1[0x15]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (10 < param_1[0x15]) {
        return -7;
      }
      if (param_1[0x15] != 0) {
        iVar3 = FUN_1010c5f0(0x45);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX_00);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_01;
        if (param_1[0x15] != 0) {
          do {
            iVar4 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar5 = FUN_10214ca0(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            if (iVar4 != 0) {
              return iVar4;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_02;
          } while (bVar7 < param_1[0x15]);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar3 = FUN_1010c5f0(0x53);
      if (iVar3 == 0) {
        iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + 0x7a));
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10215c50 @ 10215c50  size=387 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[starNum]"
//   "[starList]"
//   " 0x%02x"
//   "[statNum]"
//   "[statList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[starPoints]"

/* WARNING: Removing unreachable block (ram,0x10215d40) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[starNum]""
     ""[starList]""
     "" 0x%02x""
     ""[statNum]""
     ""[statList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[starPoints]"" */

int __thiscall FUN_10215c50(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[starNum]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x14 < *param_1) {
      return -7;
    }
    iVar1 = FUN_1024a3b0(extraout_ECX,"[starList]",*param_1,0);
    if (iVar1 == 0) {
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_1010c010(param_2," 0x%02x",param_1[bVar2 + 1]);
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      iVar1 = FUN_1010c060(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[statNum]","0x%02x",param_1[0x15]),
         iVar1 == 0)) {
        if (10 < param_1[0x15]) {
          return -7;
        }
        bVar2 = 0;
        if (param_1[0x15] != 0) {
          do {
            iVar1 = FUN_1024a140(param_3);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[statList]",bVar2,(int)(char)param_4);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = FUN_10215060(param_2,iVar1,param_4);
            if (iVar1 != 0) {
              return iVar1;
            }
            bVar2 = bVar2 + 1;
          } while (bVar2 < param_1[0x15]);
        }
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[starPoints]",&DAT_11d9f574,
                             *(undefined4 *)(param_1 + 0x7a));
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10216000 @ 10216000  size=241 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10216000(undefined1 *param_1,int *param_2)

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
      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c4d0(*(undefined2 *)(param_1 + 1)), iVar2 == 0)) &&
            (iVar2 = FUN_1010c5f0(0x30), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 3)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x40), iVar2 == 0)))) &&
          ((iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 7)), iVar2 == 0 &&
           ((iVar2 = FUN_1010c5f0(0x50), iVar2 == 0 &&
            (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xb)), iVar2 == 0)))))) &&
         (iVar2 = FUN_1010c5f0(0x60), iVar2 == 0)) {
        iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0xf));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10216100 @ 10216100  size=241 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10216100(undefined1 *param_1,int *param_2)

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
      iVar2 = FUN_1010c5f0(0x22);
      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 1)), iVar2 == 0)) &&
            (iVar2 = FUN_1010c5f0(0x33), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 3)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x43), iVar2 == 0)))) &&
          ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 7)), iVar2 == 0 &&
           ((iVar2 = FUN_1010c5f0(0x53), iVar2 == 0 &&
            (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xb)), iVar2 == 0)))))) &&
         (iVar2 = FUN_1010c5f0(99), iVar2 == 0)) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xf));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102169d0 @ 102169d0  size=119 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102169d0(undefined1 *param_1,int *param_2)

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



/* ===== FUN_10216a50 @ 10216a50  size=119 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10216a50(undefined1 *param_1,int *param_2)

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



/* ===== FUN_10216ba0 @ 10216ba0  size=236 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10216ba0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10216c90 @ 10216c90  size=236 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10216c90(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_10217140 @ 10217140  size=477 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10217140(byte *param_1,int *param_2)

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
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_ECX_04;
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
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(0x31);
      if ((iVar3 == 0) && (iVar3 = FUN_101150a0(param_1[1]), iVar3 == 0)) {
        if (param_1[1] < 0xb) {
          if (param_1[1] != 0) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_00;
            if (param_1[1] != 0) {
              do {
                iVar5 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar4 = FUN_10216000(param_2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
                if (iVar5 != 0) {
                  return iVar5;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_01;
              } while (bVar7 < param_1[1]);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 0x15) {
            if (*param_1 == 0) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_02);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_03;
            if (*param_1 != 0) {
              do {
                iVar5 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar4 = FUN_102169d0(param_2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
                if (iVar5 != 0) {
                  return iVar5;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_04;
              } while (bVar7 < *param_1);
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



/* ===== FUN_10217320 @ 10217320  size=477 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10217320(byte *param_1,int *param_2)

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
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_ECX_04;
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
      param_2[1] = param_2[1] + 1;
      iVar3 = FUN_1010c5f0(0x31);
      if ((iVar3 == 0) && (iVar3 = FUN_101150a0(param_1[1]), iVar3 == 0)) {
        if (param_1[1] < 0xb) {
          if (param_1[1] != 0) {
            iVar3 = FUN_1010c5f0(0x45);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_00;
            if (param_1[1] != 0) {
              do {
                iVar5 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar4 = FUN_10216100(param_2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
                if (iVar5 != 0) {
                  return iVar5;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_01;
              } while (bVar7 < param_1[1]);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 0x15) {
            if (*param_1 == 0) {
              return 0;
            }
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_02);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_03;
            if (*param_1 != 0) {
              do {
                iVar5 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar4 = FUN_10216a50(param_2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
                if (iVar5 != 0) {
                  return iVar5;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_04;
              } while (bVar7 < *param_1);
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



