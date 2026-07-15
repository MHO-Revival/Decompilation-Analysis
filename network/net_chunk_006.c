/* ===== FUN_101e0ea0 @ 101e0ea0  size=10727 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101e0ea0(int param_1,int *param_2)

{
  int *piVar1;
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
  uint uVar6;
  uint uVar7;
  
  piVar1 = param_2;
  iVar2 = FUN_1010c5f0(0x25);
  if (iVar2 == 0) {
    uVar7 = param_2[1];
    if ((uint)param_2[2] < uVar7) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar6 = param_2[1];
    if ((uVar6 <= (uint)param_2[2]) && (3 < param_2[2] - uVar6)) {
      param_2[1] = uVar6 + 4;
    }
    iVar2 = param_2[1];
    uVar6 = 0;
    do {
      iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + uVar6 * 4));
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
    iVar2 = param_2[1] - iVar2;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar7) || (param_2[2] - uVar7 < 4)) {
      iVar2 = -1;
    }
    else {
      iVar3 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
      *(undefined1 *)(uVar7 + iVar3) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar2 >> 0x10);
      *(undefined1 *)(*piVar1 + 1 + uVar7) = param_2._2_1_;
      *(char *)(*piVar1 + 2 + uVar7) = (char)((uint)iVar2 >> 8);
      *(char *)(*piVar1 + 3 + uVar7) = (char)iVar2;
      iVar2 = FUN_1010c5f0(0x43);
      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c)), iVar2 == 0))
            && (iVar2 = FUN_1010c5f0(99), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x73), iVar2 == 0)))) &&
          (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x24)), iVar2 == 0)) &&
         (((((iVar2 = FUN_1010c5f0(0x83), iVar2 == 0 &&
             (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x28)), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0x93), iVar2 == 0 &&
             (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x2c)), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0xa3), iVar2 == 0)) &&
              (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x30)), iVar2 == 0)))))) &&
           (((iVar2 = FUN_1010c5f0(0xb3), iVar2 == 0 &&
             (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x34)), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0xc3), iVar2 == 0 &&
             (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x38)), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0xd3), iVar2 == 0)) &&
              ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x3c)), iVar2 == 0 &&
               (((iVar2 = FUN_1010c5f0(0xe3), iVar2 == 0 &&
                 (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x40)), iVar2 == 0)) &&
                (iVar2 = FUN_1010c5f0(0xf3), iVar2 == 0)))))))))))) &&
          (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x44)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x103), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x48)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x115), iVar2 == 0)))))))) {
        iVar2 = piVar1[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = piVar1[1];
        uVar7 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x4c);
        do {
          iVar4 = FUN_1010c190(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 < 7);
        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
        if (((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x142), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x68)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x165), iVar2 == 0)))) {
          iVar2 = piVar1[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = piVar1[1];
          uVar7 = 0;
          puVar5 = (undefined4 *)(param_1 + 0x6a);
          do {
            iVar4 = FUN_1010c190(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 < 7);
          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
          if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1a5), iVar2 == 0)) {
            iVar2 = piVar1[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar3 = piVar1[1];
            uVar7 = 0;
            puVar5 = (undefined4 *)(param_1 + 0x86);
            do {
              iVar4 = FUN_1010c190(*puVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar7 = uVar7 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar7 < 7);
            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
            if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1b5), iVar2 == 0)) {
              iVar2 = piVar1[1];
              FUN_1010bf70(extraout_ECX_02);
              iVar3 = piVar1[1];
              uVar7 = 0;
              puVar5 = (undefined4 *)(param_1 + 0xa2);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar7 < 7);
              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
              if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1c5), iVar2 == 0)) {
                iVar2 = piVar1[1];
                FUN_1010bf70(extraout_ECX_03);
                iVar3 = piVar1[1];
                uVar7 = 0;
                puVar5 = (undefined4 *)(param_1 + 0xbe);
                do {
                  iVar4 = FUN_1010c190(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar7 = uVar7 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar7 < 7);
                iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1d5), iVar2 == 0)) {
                  iVar2 = piVar1[1];
                  FUN_1010bf70(extraout_ECX_04);
                  iVar3 = piVar1[1];
                  uVar7 = 0;
                  puVar5 = (undefined4 *)(param_1 + 0xda);
                  do {
                    iVar4 = FUN_1010c190(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    uVar7 = uVar7 + 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar7 < 7);
                  iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                  if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1e5), iVar2 == 0)) {
                    iVar2 = piVar1[1];
                    FUN_1010bf70(extraout_ECX_05);
                    iVar3 = piVar1[1];
                    uVar7 = 0;
                    puVar5 = (undefined4 *)(param_1 + 0xf6);
                    do {
                      iVar4 = FUN_1010c190(*puVar5);
                      if (iVar4 != 0) {
                        return iVar4;
                      }
                      uVar7 = uVar7 + 1;
                      puVar5 = puVar5 + 1;
                    } while (uVar7 < 7);
                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                    if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1f5), iVar2 == 0)) {
                      iVar2 = piVar1[1];
                      FUN_1010bf70(extraout_ECX_06);
                      iVar3 = piVar1[1];
                      uVar7 = 0;
                      puVar5 = (undefined4 *)(param_1 + 0x112);
                      do {
                        iVar4 = FUN_1010c190(*puVar5);
                        if (iVar4 != 0) {
                          return iVar4;
                        }
                        uVar7 = uVar7 + 1;
                        puVar5 = puVar5 + 1;
                      } while (uVar7 < 7);
                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                      if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x205), iVar2 == 0)) {
                        iVar2 = piVar1[1];
                        FUN_1010bf70(extraout_ECX_07);
                        iVar3 = piVar1[1];
                        uVar7 = 0;
                        puVar5 = (undefined4 *)(param_1 + 0x12e);
                        do {
                          iVar4 = FUN_1010c190(*puVar5);
                          if (iVar4 != 0) {
                            return iVar4;
                          }
                          uVar7 = uVar7 + 1;
                          puVar5 = puVar5 + 1;
                        } while (uVar7 < 7);
                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                        if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x215), iVar2 == 0)) {
                          iVar2 = piVar1[1];
                          FUN_1010bf70(extraout_ECX_08);
                          iVar3 = piVar1[1];
                          uVar7 = 0;
                          puVar5 = (undefined4 *)(param_1 + 0x14a);
                          do {
                            iVar4 = FUN_1010c190(*puVar5);
                            if (iVar4 != 0) {
                              return iVar4;
                            }
                            uVar7 = uVar7 + 1;
                            puVar5 = puVar5 + 1;
                          } while (uVar7 < 7);
                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                          if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x225), iVar2 == 0)) {
                            iVar2 = piVar1[1];
                            FUN_1010bf70(extraout_ECX_09);
                            iVar3 = piVar1[1];
                            uVar7 = 0;
                            puVar5 = (undefined4 *)(param_1 + 0x166);
                            do {
                              iVar4 = FUN_1010c190(*puVar5);
                              if (iVar4 != 0) {
                                return iVar4;
                              }
                              uVar7 = uVar7 + 1;
                              puVar5 = puVar5 + 1;
                            } while (uVar7 < 7);
                            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                            if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x235), iVar2 == 0)) {
                              iVar2 = piVar1[1];
                              FUN_1010bf70(extraout_ECX_10);
                              iVar3 = piVar1[1];
                              uVar7 = 0;
                              puVar5 = (undefined4 *)(param_1 + 0x182);
                              do {
                                iVar4 = FUN_1010c190(*puVar5);
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                uVar7 = uVar7 + 1;
                                puVar5 = puVar5 + 1;
                              } while (uVar7 < 7);
                              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                              if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x275), iVar2 == 0)) {
                                iVar2 = piVar1[1];
                                FUN_1010bf70(extraout_ECX_11);
                                iVar3 = piVar1[1];
                                uVar7 = 0;
                                puVar5 = (undefined4 *)(param_1 + 0x19e);
                                do {
                                  iVar4 = FUN_1010c190(*puVar5);
                                  if (iVar4 != 0) {
                                    return iVar4;
                                  }
                                  uVar7 = uVar7 + 1;
                                  puVar5 = puVar5 + 1;
                                } while (uVar7 < 7);
                                iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x285), iVar2 == 0)) {
                                  iVar2 = piVar1[1];
                                  FUN_1010bf70(extraout_ECX_12);
                                  iVar3 = piVar1[1];
                                  uVar7 = 0;
                                  puVar5 = (undefined4 *)(param_1 + 0x1ba);
                                  do {
                                    iVar4 = FUN_1010c190(*puVar5);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    uVar7 = uVar7 + 1;
                                    puVar5 = puVar5 + 1;
                                  } while (uVar7 < 7);
                                  iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                  if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x295), iVar2 == 0)) {
                                    iVar2 = piVar1[1];
                                    FUN_1010bf70(extraout_ECX_13);
                                    iVar3 = piVar1[1];
                                    uVar7 = 0;
                                    puVar5 = (undefined4 *)(param_1 + 0x1d6);
                                    do {
                                      iVar4 = FUN_1010c190(*puVar5);
                                      if (iVar4 != 0) {
                                        return iVar4;
                                      }
                                      uVar7 = uVar7 + 1;
                                      puVar5 = puVar5 + 1;
                                    } while (uVar7 < 7);
                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                    if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x2a5), iVar2 == 0)) {
                                      iVar2 = piVar1[1];
                                      FUN_1010bf70(extraout_ECX_14);
                                      iVar3 = piVar1[1];
                                      uVar7 = 0;
                                      puVar5 = (undefined4 *)(param_1 + 0x1f2);
                                      do {
                                        iVar4 = FUN_1010c190(*puVar5);
                                        if (iVar4 != 0) {
                                          return iVar4;
                                        }
                                        uVar7 = uVar7 + 1;
                                        puVar5 = puVar5 + 1;
                                      } while (uVar7 < 7);
                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                      if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x2b5), iVar2 == 0))
                                      {
                                        iVar2 = piVar1[1];
                                        FUN_1010bf70(extraout_ECX_15);
                                        iVar3 = piVar1[1];
                                        uVar7 = 0;
                                        puVar5 = (undefined4 *)(param_1 + 0x20e);
                                        do {
                                          iVar4 = FUN_1010c190(*puVar5);
                                          if (iVar4 != 0) {
                                            return iVar4;
                                          }
                                          uVar7 = uVar7 + 1;
                                          puVar5 = puVar5 + 1;
                                        } while (uVar7 < 7);
                                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                        if ((iVar2 == 0) &&
                                           (iVar2 = FUN_1010c5f0(0x2c5), iVar2 == 0)) {
                                          iVar2 = piVar1[1];
                                          FUN_1010bf70(extraout_ECX_16);
                                          iVar3 = piVar1[1];
                                          uVar7 = 0;
                                          puVar5 = (undefined4 *)(param_1 + 0x22a);
                                          do {
                                            iVar4 = FUN_1010c190(*puVar5);
                                            if (iVar4 != 0) {
                                              return iVar4;
                                            }
                                            uVar7 = uVar7 + 1;
                                            puVar5 = puVar5 + 1;
                                          } while (uVar7 < 7);
                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                          if ((iVar2 == 0) &&
                                             (iVar2 = FUN_1010c5f0(0x2d5), iVar2 == 0)) {
                                            iVar2 = piVar1[1];
                                            FUN_1010bf70(extraout_ECX_17);
                                            iVar3 = piVar1[1];
                                            uVar7 = 0;
                                            puVar5 = (undefined4 *)(param_1 + 0x246);
                                            do {
                                              iVar4 = FUN_1010c190(*puVar5);
                                              if (iVar4 != 0) {
                                                return iVar4;
                                              }
                                              uVar7 = uVar7 + 1;
                                              puVar5 = puVar5 + 1;
                                            } while (uVar7 < 7);
                                            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                            if ((iVar2 == 0) &&
                                               (iVar2 = FUN_1010c5f0(0x2e5), iVar2 == 0)) {
                                              iVar2 = piVar1[1];
                                              FUN_1010bf70(extraout_ECX_18);
                                              iVar3 = piVar1[1];
                                              uVar7 = 0;
                                              puVar5 = (undefined4 *)(param_1 + 0x262);
                                              do {
                                                iVar4 = FUN_1010c190(*puVar5);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                                uVar7 = uVar7 + 1;
                                                puVar5 = puVar5 + 1;
                                              } while (uVar7 < 7);
                                              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                              if ((iVar2 == 0) &&
                                                 (iVar2 = FUN_1010c5f0(0x2f5), iVar2 == 0)) {
                                                iVar2 = piVar1[1];
                                                FUN_1010bf70(extraout_ECX_19);
                                                iVar3 = piVar1[1];
                                                uVar7 = 0;
                                                puVar5 = (undefined4 *)(param_1 + 0x27e);
                                                do {
                                                  iVar4 = FUN_1010c190(*puVar5);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar7 = uVar7 + 1;
                                                  puVar5 = puVar5 + 1;
                                                } while (uVar7 < 7);
                                                iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                if ((iVar2 == 0) &&
                                                   (iVar2 = FUN_1010c5f0(0x305), iVar2 == 0)) {
                                                  iVar2 = piVar1[1];
                                                  FUN_1010bf70(extraout_ECX_20);
                                                  iVar3 = piVar1[1];
                                                  uVar7 = 0;
                                                  puVar5 = (undefined4 *)(param_1 + 0x29a);
                                                  do {
                                                    iVar4 = FUN_1010c190(*puVar5);
                                                    if (iVar4 != 0) {
                                                      return iVar4;
                                                    }
                                                    uVar7 = uVar7 + 1;
                                                    puVar5 = puVar5 + 1;
                                                  } while (uVar7 < 7);
                                                  iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                  if ((iVar2 == 0) &&
                                                     (iVar2 = FUN_1010c5f0(0x315), iVar2 == 0)) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_21);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x2b6);
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1010c5f0(0x325), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_22);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x2d2);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((iVar2 == 0) &&
                                                         (iVar2 = FUN_1010c5f0(0x335), iVar2 == 0))
                                                      {
                                                        iVar2 = piVar1[1];
                                                        FUN_1010bf70(extraout_ECX_23);
                                                        iVar3 = piVar1[1];
                                                        uVar7 = 0;
                                                        puVar5 = (undefined4 *)(param_1 + 0x2ee);
                                                        do {
                                                          iVar4 = FUN_1010c190(*puVar5);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar7 = uVar7 + 1;
                                                          puVar5 = puVar5 + 1;
                                                        } while (uVar7 < 7);
                                                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2
                                                                            );
                                                        if ((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0x345), iVar2 == 0)
                                                           ) {
                                                          iVar2 = piVar1[1];
                                                          FUN_1010bf70(extraout_ECX_24);
                                                          iVar3 = piVar1[1];
                                                          uVar7 = 0;
                                                          puVar5 = (undefined4 *)(param_1 + 0x30a);
                                                          do {
                                                            iVar4 = FUN_1010c190(*puVar5);
                                                            if (iVar4 != 0) {
                                                              return iVar4;
                                                            }
                                                            uVar7 = uVar7 + 1;
                                                            puVar5 = puVar5 + 1;
                                                          } while (uVar7 < 7);
                                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                               iVar2);
                                                          if ((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0x445),
                                                             iVar2 == 0)) {
                                                            iVar2 = piVar1[1];
                                                            FUN_1010bf70(extraout_ECX_25);
                                                            iVar3 = piVar1[1];
                                                            uVar7 = 0;
                                                            puVar5 = (undefined4 *)(param_1 + 0x326)
                                                            ;
                                                            do {
                                                              iVar4 = FUN_1010c190(*puVar5);
                                                              if (iVar4 != 0) {
                                                                return iVar4;
                                                              }
                                                              uVar7 = uVar7 + 1;
                                                              puVar5 = puVar5 + 1;
                                                            } while (uVar7 < 7);
                                                            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                                 iVar2);
                                                            if ((((iVar2 == 0) &&
                                                                 (iVar2 = FUN_1010c5f0(0x583),
                                                                 iVar2 == 0)) &&
                                                                (iVar2 = FUN_1010c190(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x342)),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c5f0(0x595),
                                                               iVar2 == 0)) {
                                                              iVar2 = piVar1[1];
                                                              FUN_1010bf70(extraout_ECX_26);
                                                              iVar3 = piVar1[1];
                                                              uVar7 = 0;
                                                              puVar5 = (undefined4 *)
                                                                       (param_1 + 0x346);
                                                              do {
                                                                iVar4 = FUN_1010c190(*puVar5);
                                                                if (iVar4 != 0) {
                                                                  return iVar4;
                                                                }
                                                                uVar7 = uVar7 + 1;
                                                                puVar5 = puVar5 + 1;
                                                              } while (uVar7 < 7);
                                                              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3
                                                                                   ,iVar2);
                                                              if (((((((iVar2 == 0) &&
                                                                      (iVar2 = FUN_1010c5f0(0x5a3),
                                                                      iVar2 == 0)) &&
                                                                     ((iVar2 = FUN_1010c190(*(
                                                  undefined4 *)(param_1 + 0x362)), iVar2 == 0 &&
                                                  ((iVar2 = FUN_1010c5f0(0x5b3), iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x366)),
                                                   iVar2 == 0)))))) &&
                                                  (iVar2 = FUN_1010c5f0(0x5c3), iVar2 == 0)) &&
                                                  ((((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                            (param_1 + 0x36a)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0x5d3), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                           (param_1 + 0x36e)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c5f0(0x5e3), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                           (param_1 + 0x372)),
                                                    iVar2 == 0)))))) &&
                                                  ((((iVar2 = FUN_1010c5f0(0x5f3), iVar2 == 0 &&
                                                     ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x376)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x603), iVar2 == 0))))
                                                    && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x37a)),
                                                       iVar2 == 0)) &&
                                                   ((((iVar2 = FUN_1010c5f0(0x613), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x37e)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0x623), iVar2 == 0)) &&
                                                    (((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x382)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x633), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x386)),
                                                      iVar2 == 0 &&
                                                      ((iVar2 = FUN_1010c5f0(0x6a3), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x38a)),
                                                       iVar2 == 0)))))))))))) &&
                                                  ((iVar2 = FUN_1010c5f0(0x6b3), iVar2 == 0 &&
                                                   (((((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x38e)),
                                                       iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c5f0(0x6c3), iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x392)),
                                                      iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c5f0(0x6d3), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x396)),
                                                      iVar2 == 0)))) &&
                                                    (iVar2 = FUN_1010c5f0(0x865), iVar2 == 0)))))) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x39a);
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1010c5f0(0x875), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_28);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x3b6);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((iVar2 == 0) &&
                                                         (iVar2 = FUN_1010c5f0(0x885), iVar2 == 0))
                                                      {
                                                        iVar2 = piVar1[1];
                                                        FUN_1010bf70(extraout_ECX_29);
                                                        iVar3 = piVar1[1];
                                                        uVar7 = 0;
                                                        puVar5 = (undefined4 *)(param_1 + 0x3d2);
                                                        do {
                                                          iVar4 = FUN_1010c190(*puVar5);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar7 = uVar7 + 1;
                                                          puVar5 = puVar5 + 1;
                                                        } while (uVar7 < 7);
                                                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2
                                                                            );
                                                        if ((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0x895), iVar2 == 0)
                                                           ) {
                                                          iVar2 = piVar1[1];
                                                          FUN_1010bf70(extraout_ECX_30);
                                                          iVar3 = piVar1[1];
                                                          uVar7 = 0;
                                                          puVar5 = (undefined4 *)(param_1 + 0x3ee);
                                                          do {
                                                            iVar4 = FUN_1010c190(*puVar5);
                                                            if (iVar4 != 0) {
                                                              return iVar4;
                                                            }
                                                            uVar7 = uVar7 + 1;
                                                            puVar5 = puVar5 + 1;
                                                          } while (uVar7 < 7);
                                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                               iVar2);
                                                          if (((((iVar2 == 0) &&
                                                                (iVar2 = FUN_1010c5f0(0xad3),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x40a)),
                                                               iVar2 == 0)) &&
                                                              (((((iVar2 = FUN_1010c5f0(0xae3),
                                                                  iVar2 == 0 &&
                                                                  (iVar2 = FUN_1010c190(*(undefined4
                                                                                          *)(param_1
                                                                                            + 0x40e)
                                                                                       ), iVar2 == 0
                                                                  )) && ((iVar2 = FUN_1010c5f0(0xaf3
                                                  ), iVar2 == 0 &&
                                                  ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x412)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0xb13), iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x416)),
                                                   iVar2 == 0 &&
                                                   (((((iVar2 = FUN_1010c5f0(0xb23), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x41a)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0xb33), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x41e)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0xb43), iVar2 == 0))))
                                                    && ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                               (param_1 + 0x422)),
                                                        iVar2 == 0 &&
                                                        ((iVar2 = FUN_1010c5f0(0xc83), iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                (param_1 + 0x426)),
                                                         iVar2 == 0)))))))))) &&
                                                  (iVar2 = FUN_1010c5f0(0xc92), iVar2 == 0)))) &&
                                                  ((((((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x42a)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0xca3), iVar2 == 0))
                                                        && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                  (param_1 + 0x42c))
                                                           , iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0xcb3), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                               (param_1 + 0x430)),
                                                        iVar2 == 0)))) &&
                                                      (iVar2 = FUN_1010c5f0(0xcc3), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x434)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0xcd3), iVar2 == 0))))
                                                    && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x438)),
                                                       iVar2 == 0)) &&
                                                   ((((iVar2 = FUN_1010c5f0(0xce3), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                             (param_1 + 0x43c)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0xcf3), iVar2 == 0)) &&
                                                    ((((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x440)),
                                                       iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c5f0(0xd03), iVar2 == 0)) &&
                                                      ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                              (param_1 + 0x444)),
                                                       iVar2 == 0 &&
                                                       ((iVar2 = FUN_1010c5f0(0xd13), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                               (param_1 + 0x448)),
                                                        iVar2 == 0)))))) &&
                                                     (iVar2 = FUN_1010c5f0(0xd25), iVar2 == 0)))))))
                                                  ) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_31);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x44c);
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1010c5f0(0xd35), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_32);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x468);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0xd43), iVar2 == 0)
                                                           ) && (iVar2 = FUN_1010c190(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x484)),
                                                                iVar2 == 0)) &&
                                                         (iVar2 = FUN_1010c5f0(0xd65), iVar2 == 0))
                                                      {
                                                        iVar2 = piVar1[1];
                                                        FUN_1010bf70(extraout_ECX_33);
                                                        iVar3 = piVar1[1];
                                                        uVar7 = 0;
                                                        puVar5 = (undefined4 *)(param_1 + 0x488);
                                                        do {
                                                          iVar4 = FUN_1010c190(*puVar5);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar7 = uVar7 + 1;
                                                          puVar5 = puVar5 + 1;
                                                        } while (uVar7 < 7);
                                                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2
                                                                            );
                                                        if ((((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0xdc3),
                                                             iVar2 == 0)) &&
                                                            ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                    (param_1 + 0x4a4
                                                                                    )), iVar2 == 0
                                                             && ((iVar2 = FUN_1010c5f0(0xdd3),
                                                                 iVar2 == 0 &&
                                                                 (iVar2 = FUN_1010c190(*(undefined4
                                                                                         *)(param_1 
                                                  + 0x4a8)), iVar2 == 0)))))) &&
                                                  (iVar2 = FUN_1010c5f0(0xde5), iVar2 == 0)) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_34);
                                                    iVar3 = piVar1[1];
                                                    puVar5 = (undefined4 *)(param_1 + 0x4ac);
                                                    uVar7 = 0;
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if (((((iVar2 == 0) &&
                                                          (iVar2 = FUN_1010c5f0(0xdf3), iVar2 == 0))
                                                         && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x4c8)
                                                                                 ), iVar2 == 0)) &&
                                                        ((iVar2 = FUN_1010c5f0(0xe03), iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                (param_1 + 0x4cc)),
                                                         iVar2 == 0)))) &&
                                                       (iVar2 = FUN_1010c5f0(0xe25), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_35);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x4d0);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0xe32), iVar2 == 0)
                                                           ) && ((iVar2 = FUN_1010c120(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x4ec)), iVar2 == 0 &&
                                                  (((iVar2 = FUN_1010c5f0(0xe42), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                           (param_1 + 0x4ee)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1010c5f0(0xe52), iVar2 == 0)))))) &&
                                                  ((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x4f0)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0xe83), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                           (param_1 + 0x4f2)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1010c5f0(0xe95), iVar2 == 0)))) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_36);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x4f6);
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1010c5f0(0xea5), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_37);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x512);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0xeb3),
                                                             iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x52e)
                                                                                 ), iVar2 == 0)) &&
                                                           ((iVar2 = FUN_1010c5f0(0xec3), iVar2 == 0
                                                            && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x532)),
                                                               iVar2 == 0)))) &&
                                                          (((iVar2 = FUN_1010c5f0(0xed3), iVar2 == 0
                                                            && ((iVar2 = FUN_1010c190(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x536)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0xee3),
                                                                iVar2 == 0)))) &&
                                                           (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                  (param_1 + 0x53a))
                                                           , iVar2 == 0)))) &&
                                                         (((((((((((iVar2 = FUN_1010c5f0(0xef3),
                                                                   iVar2 == 0 &&
                                                                   (iVar2 = FUN_1010c190(*(
                                                  undefined4 *)(param_1 + 0x53e)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1010c5f0(0xf03), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x542)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0xf13), iVar2 == 0)))) &&
                                                  ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x546)),
                                                   iVar2 == 0 &&
                                                   ((iVar2 = FUN_1010c5f0(0xf23), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                           (param_1 + 0x54a)),
                                                    iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c5f0(0xf33), iVar2 == 0 &&
                                                   (((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                            (param_1 + 0x54e)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0xf43), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                           (param_1 + 0x552)),
                                                    iVar2 == 0)))))) &&
                                                  (((((((iVar2 = FUN_1010c5f0(0xf52), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x556)),
                                                        iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0xfc2), iVar2 == 0 &&
                                                        ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x558)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0xfd2), iVar2 == 0)))
                                                        ))) && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x55a)),
                                                               iVar2 == 0)) &&
                                                     ((((iVar2 = FUN_1010c5f0(0xfe2), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x55c)),
                                                        iVar2 == 0)) &&
                                                       (iVar2 = FUN_1010c5f0(0xff2), iVar2 == 0)) &&
                                                      (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x55e)),
                                                        iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c5f0(0x1002), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                  (param_1 + 0x560))
                                                           , iVar2 == 0 &&
                                                           ((iVar2 = FUN_1010c5f0(0x1012),
                                                            iVar2 == 0 &&
                                                            (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                   (param_1 + 0x562)
                                                                                 ), iVar2 == 0))))))
                                                      )))) && (iVar2 = FUN_1010c5f0(0x1022),
                                                              iVar2 == 0)) &&
                                                   (((((((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                  (param_1 + 0x564))
                                                           , iVar2 == 0 &&
                                                           (iVar2 = FUN_1010c5f0(0x1032), iVar2 == 0
                                                           )) && (iVar2 = FUN_1010c120(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x566)), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1010c5f0(0x1042), iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                          (param_1 + 0x568)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1010c5f0(0x1052), iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                           (param_1 + 0x56a)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c5f0(0x1062), iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                           (param_1 + 0x56c)),
                                                    iVar2 == 0 &&
                                                    (((iVar2 = FUN_1010c5f0(0x1072), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                             (param_1 + 0x56e)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0x1082), iVar2 == 0))))))
                                                  )) && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x570)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x1092), iVar2 == 0))
                                                        )) &&
                                                  (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                         (param_1 + 0x572)),
                                                  iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1010c5f0(0x10a2), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                           (param_1 + 0x574)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c5f0(0x10b2), iVar2 == 0 &&
                                                    (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                             (param_1 + 0x576)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x10c2), iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x578)),
                                                     iVar2 == 0)))))))))))) &&
                                                  ((((iVar2 = FUN_1010c5f0(0x10d2), iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x57a)),
                                                     iVar2 == 0)) &&
                                                    (((iVar2 = FUN_1010c5f0(0x10e2), iVar2 == 0 &&
                                                      (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x57c)),
                                                        iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c5f0(0x10f2), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                  (param_1 + 0x57e))
                                                           , iVar2 == 0 &&
                                                           ((((iVar2 = FUN_1010c5f0(0x1102),
                                                              iVar2 == 0 &&
                                                              (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                     (param_1 +
                                                                                     0x580)),
                                                              iVar2 == 0)) &&
                                                             (iVar2 = FUN_1010c5f0(0x1112),
                                                             iVar2 == 0)) &&
                                                            ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                    (param_1 + 0x582
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x1122),
                                                                iVar2 == 0)))))))))) &&
                                                     (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x584)),
                                                     iVar2 == 0)))) &&
                                                   ((((iVar2 = FUN_1010c5f0(0x1132), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                             (param_1 + 0x586)),
                                                      iVar2 == 0)) &&
                                                     ((((iVar2 = FUN_1010c5f0(0x1142), iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                 (param_1 + 0x588)),
                                                          iVar2 == 0 &&
                                                          (iVar2 = FUN_1010c5f0(0x11c2), iVar2 == 0)
                                                          ) && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x58a)),
                                                               iVar2 == 0)))) &&
                                                       (((iVar2 = FUN_1010c5f0(0x1253), iVar2 == 0
                                                         && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x58c)
                                                                                 ), iVar2 == 0)) &&
                                                        (iVar2 = FUN_1010c5f0(0x1263), iVar2 == 0)))
                                                       ) && ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                    (param_1 + 0x590
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x12c2),
                                                                iVar2 == 0)))))) &&
                                                    ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x594)),
                                                     iVar2 == 0 &&
                                                     (((iVar2 = FUN_1010c5f0(0x1332), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                              (param_1 + 0x596)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0x1342), iVar2 == 0)))))
                                                    ))))) &&
                                                  ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                          (param_1 + 0x598)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0x1352), iVar2 == 0)))) &&
                                                  ((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x59a)),
                                                     iVar2 == 0 &&
                                                     ((((((iVar2 = FUN_1010c5f0(0x1362), iVar2 == 0
                                                          && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                    (param_1 + 0x59c
                                                                                    )), iVar2 == 0))
                                                         && ((iVar2 = FUN_1010c5f0(0x1372),
                                                             iVar2 == 0 &&
                                                             ((((iVar2 = FUN_1010c120(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x59e)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0x1423),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x5a0)),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c5f0(0x1433),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x5a4)),
                                                               iVar2 == 0)))))))) &&
                                                        (iVar2 = FUN_1010c5f0(0x1482), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                  (param_1 + 0x5a8))
                                                           , iVar2 == 0 &&
                                                           (iVar2 = FUN_1010c5f0(0x1492), iVar2 == 0
                                                           )))) &&
                                                      (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x5aa)),
                                                        iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c5f0(0x14a2), iVar2 == 0
                                                          && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                    (param_1 + 0x5ac
                                                                                    )), iVar2 == 0))
                                                         && (iVar2 = FUN_1010c5f0(0x14b2),
                                                            iVar2 == 0)))) &&
                                                       (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x5ae)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x14c2), iVar2 == 0))
                                                        && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                  (param_1 + 0x5b0))
                                                           , iVar2 == 0)))))))) &&
                                                    (((((iVar2 = FUN_1010c5f0(0x14d2), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                               (param_1 + 0x5b2)),
                                                        iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0x14e2), iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                 (param_1 + 0x5b4)),
                                                          iVar2 == 0 &&
                                                          (iVar2 = FUN_1010c5f0(0x14f2), iVar2 == 0)
                                                          ) && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5b6)),
                                                               iVar2 == 0)))))) &&
                                                      ((iVar2 = FUN_1010c5f0(0x1502), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                              (param_1 + 0x5b8)),
                                                       iVar2 == 0)))) &&
                                                     (iVar2 = FUN_1010c5f0(0x1512), iVar2 == 0))))
                                                   && ((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x5ba)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x1522), iVar2 == 0))
                                                        && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                   (param_1 + 0x5bc)
                                                                                 ), iVar2 == 0 &&
                                                            (((((iVar2 = FUN_1010c5f0(0x1532),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c120(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x5be)),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c5f0(0x1542),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5c0)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1552),
                                                               iVar2 == 0)))) &&
                                                             (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                    (param_1 + 0x5c2
                                                                                    )), iVar2 == 0))
                                                            )))) &&
                                                       (((iVar2 = FUN_1010c5f0(0x1562), iVar2 == 0
                                                         && (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                   (param_1 + 0x5c4)
                                                                                 ), iVar2 == 0)) &&
                                                        ((iVar2 = FUN_1010c5f0(0x1572), iVar2 == 0
                                                         && ((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5c6)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1582),
                                                               iVar2 == 0)) &&
                                                              (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                     (param_1 +
                                                                                     0x5c8)),
                                                              iVar2 == 0)) &&
                                                             (((iVar2 = FUN_1010c5f0(0x1592),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5ca)),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c5f0(0x15a2),
                                                               iVar2 == 0 &&
                                                               ((iVar2 = FUN_1010c120(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x5cc)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0x15b2),
                                                                iVar2 == 0)))))))))))))))))) &&
                                                  ((((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                            (param_1 + 0x5ce)),
                                                     iVar2 == 0 &&
                                                     (((iVar2 = FUN_1010c5f0(0x15c2), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c120(*(undefined2 *)
                                                                              (param_1 + 0x5d0)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0x15d2), iVar2 == 0))))
                                                    && (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                (param_1 + 0x5d2)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x15e2), iVar2 == 0))
                                                        && (((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                                    (param_1 + 0x5d4
                                                                                    )), iVar2 == 0
                                                             && ((iVar2 = FUN_1010c5f0(0x1602),
                                                                 iVar2 == 0 &&
                                                                 (iVar2 = FUN_1010c120(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x5d6)), iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1010c5f0(0x1673), iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                          (param_1 + 0x5d8)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0x1685), iVar2 == 0))))))))
                                                  {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_38);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x5dc);
                                                    do {
                                                      iVar4 = FUN_1010c190(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1010c5f0(0x1695), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_39);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x5f8);
                                                      do {
                                                        iVar4 = FUN_1010c190(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0x1723),
                                                             iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x614)
                                                                                 ), iVar2 == 0)) &&
                                                           ((iVar2 = FUN_1010c5f0(0x1793),
                                                            iVar2 == 0 &&
                                                            (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x618)
                                                                                 ), iVar2 == 0))))
                                                          && ((iVar2 = FUN_1010c5f0(0x17a3),
                                                              iVar2 == 0 &&
                                                              ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x61c)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x17f3),
                                                               iVar2 == 0)))))) &&
                                                         (((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                  (param_1 + 0x620))
                                                           , iVar2 == 0 &&
                                                           (((((iVar2 = FUN_1010c5f0(0x1813),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x624)),
                                                               iVar2 == 0)) &&
                                                              (iVar2 = FUN_1010c5f0(0x1823),
                                                              iVar2 == 0)) &&
                                                             (((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x628)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1833),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x62c)),
                                                               iVar2 == 0 &&
                                                               ((iVar2 = FUN_1010c5f0(0x1923),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c190(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x630)),
                                                                iVar2 == 0)))))))) &&
                                                            (iVar2 = FUN_1010c5f0(0x1933),
                                                            iVar2 == 0)))) &&
                                                          ((((iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                    (param_1 + 0x634
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x1953),
                                                                iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                   (param_1 + 0x638)
                                                                                 ), iVar2 == 0)) &&
                                                           (iVar2 = FUN_1010c5f0(0x1965), iVar2 == 0
                                                           )))))) {
                                                        iVar2 = piVar1[1];
                                                        FUN_1010bf70(extraout_ECX_40);
                                                        iVar3 = piVar1[1];
                                                        uVar7 = 0;
                                                        puVar5 = (undefined4 *)(param_1 + 0x63c);
                                                        do {
                                                          iVar4 = FUN_1010c190(*puVar5);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar7 = uVar7 + 1;
                                                          puVar5 = puVar5 + 1;
                                                        } while (uVar7 < 7);
                                                        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2
                                                                            );
                                                        if ((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0x1975), iVar2 == 0
                                                           )) {
                                                          iVar2 = piVar1[1];
                                                          FUN_1010bf70(extraout_ECX_41);
                                                          iVar3 = piVar1[1];
                                                          uVar7 = 0;
                                                          puVar5 = (undefined4 *)(param_1 + 0x658);
                                                          do {
                                                            iVar4 = FUN_1010c190(*puVar5);
                                                            if (iVar4 != 0) {
                                                              return iVar4;
                                                            }
                                                            uVar7 = uVar7 + 1;
                                                            puVar5 = puVar5 + 1;
                                                          } while (uVar7 < 7);
                                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                               iVar2);
                                                          if ((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0x1983),
                                                             iVar2 == 0)) {
                                                            iVar2 = FUN_1010c190(*(undefined4 *)
                                                                                  (param_1 + 0x674))
                                                            ;
                                                            return iVar2;
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
  return iVar2;
}



/* ===== FUN_101ee230 @ 101ee230  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ee230(int param_1,int *param_2,int param_3)

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
LAB_101ee2df:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101ee2df;
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



/* ===== FUN_101ee320 @ 101ee320  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ee320(int param_1,int *param_2,int param_3)

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
LAB_101ee3cf:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101ee3cf;
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



/* ===== FUN_101ee8f0 @ 101ee8f0  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ee8f0(int param_1,int *param_2,int param_3)

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
LAB_101ee99f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101ee99f;
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



/* ===== FUN_101ee9e0 @ 101ee9e0  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ee9e0(int param_1,int *param_2,int param_3)

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
LAB_101eea8f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101eea8f;
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



/* ===== FUN_101ef630 @ 101ef630  size=1180 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ef630(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar8;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  char *pcVar9;
  undefined4 extraout_ECX_09;
  int iVar10;
  
  piVar4 = param_2;
  iVar5 = FUN_1010c5f0(0x21);
  if (iVar5 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar5 = -1;
    }
    else {
      *(char *)(param_2[1] + *param_2) = cVar1;
      param_2[1] = param_2[1] + 1;
      cVar1 = *param_1;
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x04' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x35);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar2 = param_2[1];
        iVar10 = 0;
        if ('\0' < *param_1) {
          param_2 = (int *)(param_1 + 1);
          uVar8 = extraout_ECX_00;
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_1010c5f0(0x10);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_1010c560(*param_2);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            param_2 = (int *)((int)param_2 + 8);
            uVar8 = extraout_ECX_01;
          } while (iVar10 < *param_1);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x41);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0x21]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0x21];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x10' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x55);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_02);
        iVar2 = piVar4[1];
        iVar10 = 0;
        uVar8 = extraout_ECX_03;
        if ('\0' < param_1[0x21]) {
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_101ee0c0(piVar4);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            uVar8 = extraout_ECX_04;
          } while (iVar10 < param_1[0x21]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x61);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xb2]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0xb2];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\b' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x75);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_05);
        iVar2 = piVar4[1];
        iVar10 = 0;
        uVar8 = extraout_ECX_06;
        if ('\0' < param_1[0xb2]) {
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_101ee780(piVar4);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            uVar8 = extraout_ECX_07;
          } while (iVar10 < param_1[0xb2]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x81);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xfb]);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_1010c5f0(0x91);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xfc]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0xfc];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x05' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0xa5);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_08);
        iVar2 = piVar4[1];
        iVar10 = 0;
        if ('\0' < param_1[0xfc]) {
          pcVar9 = param_1 + 0xfd;
          do {
            iVar7 = FUN_1010c560(*(undefined4 *)pcVar9);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            pcVar9 = pcVar9 + 4;
          } while (iVar10 < param_1[0xfc]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0xb1);
      if ((iVar5 == 0) && (iVar5 = FUN_101159e0(param_1[0x111]), iVar5 == 0)) {
        cVar1 = param_1[0xfc];
        if (cVar1 < '\0') {
          return -6;
        }
        if ('\x05' < cVar1) {
          return -7;
        }
        if (('\0' < cVar1) && (iVar5 = FUN_1010c5f0(0xc5), iVar5 == 0)) {
          iVar5 = piVar4[1];
          FUN_1010bf70(extraout_ECX_09);
          iVar2 = piVar4[1];
          iVar10 = 0;
          if ('\0' < param_1[0xfc]) {
            pcVar9 = param_1 + 0x112;
            do {
              iVar7 = FUN_1010c560(*(undefined4 *)pcVar9);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar10 = iVar10 + 1;
              pcVar9 = pcVar9 + 4;
            } while (iVar10 < param_1[0xfc]);
          }
          iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101efad0 @ 101efad0  size=1180 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101efad0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar8;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  char *pcVar9;
  undefined4 extraout_ECX_09;
  int iVar10;
  
  piVar4 = param_2;
  iVar5 = FUN_1010c5f0(0x21);
  if (iVar5 == 0) {
    cVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar5 = -1;
    }
    else {
      *(char *)(param_2[1] + *param_2) = cVar1;
      param_2[1] = param_2[1] + 1;
      cVar1 = *param_1;
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x04' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x35);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar2 = param_2[1];
        iVar10 = 0;
        if ('\0' < *param_1) {
          param_2 = (int *)(param_1 + 1);
          uVar8 = extraout_ECX_00;
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_1010c5f0(0x13);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_1010c190(*param_2);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            param_2 = (int *)((int)param_2 + 8);
            uVar8 = extraout_ECX_01;
          } while (iVar10 < *param_1);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x41);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0x21]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0x21];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x10' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x55);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_02);
        iVar2 = piVar4[1];
        iVar10 = 0;
        uVar8 = extraout_ECX_03;
        if ('\0' < param_1[0x21]) {
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_101ee110(piVar4);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            uVar8 = extraout_ECX_04;
          } while (iVar10 < param_1[0x21]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x61);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xb2]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0xb2];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\b' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0x75);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_05);
        iVar2 = piVar4[1];
        iVar10 = 0;
        uVar8 = extraout_ECX_06;
        if ('\0' < param_1[0xb2]) {
          do {
            iVar7 = piVar4[1];
            FUN_1010bf70(uVar8);
            iVar3 = piVar4[1];
            iVar6 = FUN_101ee7d0(piVar4);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar7 = FUN_1010c3c0(piVar4[1] - iVar3,iVar7);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            uVar8 = extraout_ECX_07;
          } while (iVar10 < param_1[0xb2]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0x81);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xfb]);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_1010c5f0(0x91);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_101159e0(param_1[0xfc]);
      if (iVar5 != 0) {
        return iVar5;
      }
      cVar1 = param_1[0xfc];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x05' < cVar1) {
        return -7;
      }
      if ('\0' < cVar1) {
        iVar5 = FUN_1010c5f0(0xa5);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = piVar4[1];
        FUN_1010bf70(extraout_ECX_08);
        iVar2 = piVar4[1];
        iVar10 = 0;
        if ('\0' < param_1[0xfc]) {
          pcVar9 = param_1 + 0xfd;
          do {
            iVar7 = FUN_1010c190(*(undefined4 *)pcVar9);
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar10 = iVar10 + 1;
            pcVar9 = pcVar9 + 4;
          } while (iVar10 < param_1[0xfc]);
        }
        iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar5 = FUN_1010c5f0(0xb1);
      if ((iVar5 == 0) && (iVar5 = FUN_101159e0(param_1[0x111]), iVar5 == 0)) {
        cVar1 = param_1[0xfc];
        if (cVar1 < '\0') {
          return -6;
        }
        if ('\x05' < cVar1) {
          return -7;
        }
        if (('\0' < cVar1) && (iVar5 = FUN_1010c5f0(0xc5), iVar5 == 0)) {
          iVar5 = piVar4[1];
          FUN_1010bf70(extraout_ECX_09);
          iVar2 = piVar4[1];
          iVar10 = 0;
          if ('\0' < param_1[0xfc]) {
            pcVar9 = param_1 + 0x112;
            do {
              iVar7 = FUN_1010c190(*(undefined4 *)pcVar9);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar10 = iVar10 + 1;
              pcVar9 = pcVar9 + 4;
            } while (iVar10 < param_1[0xfc]);
          }
          iVar5 = FUN_1010c3c0(piVar4[1] - iVar2,iVar5);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101f0b50 @ 101f0b50  size=1028 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[skillLearnCount]"
//   "[skillLearn]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[talentLearnCount]"
//   "[talentLearn]"
//   "[talentEquipCount]"
//   "[talentEquip]"
//   "[rageIdx]"
//   "[rageCount]"
//   "[rage]"
//   "[bushidoRageCount]"
//   "[bushidoRage]"

/* WARNING: Removing unreachable block (ram,0x101f0bc9) */
/* WARNING: Removing unreachable block (ram,0x101f0caf) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[skillLearnCount]""
     ""[skillLearn]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[talentLearnCount]""
     ""[talentLearn]""
     ""[talentEquipCount]""
     ""[talentEquip]"" */

int __thiscall FUN_101f0b50(char *param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)param_3;
  uVar2 = param_2;
  iVar3 = FUN_1024a290(param_2,param_3,param_4,"[skillLearnCount]","0x%02x",(int)*param_1);
  if (iVar3 == 0) {
    cVar1 = *param_1;
    if (cVar1 < '\0') {
      return -6;
    }
    if ('\x04' < cVar1) {
      return -7;
    }
    param_2 = 0;
    if ('\0' < cVar1) {
      param_3 = param_1 + 1;
      do {
        iVar3 = FUN_1024a140(iVar5);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(uVar2,"%s[%u]%c","[skillLearn]",param_2,(int)(char)param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = iVar5;
        if (-1 < iVar5) {
          iVar3 = iVar5 + 1;
        }
        iVar3 = FUN_1024a290(uVar2,iVar3,param_4,&DAT_11d9faa0,&DAT_11d9e0b4,*(undefined4 *)param_3)
        ;
        if (iVar3 != 0) {
          return iVar3;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + 8;
      } while (param_2 < *param_1);
    }
    iVar3 = FUN_1024a290(uVar2,iVar5,param_4,"[talentLearnCount]","0x%02x",(int)param_1[0x21]);
    if (iVar3 == 0) {
      cVar1 = param_1[0x21];
      if (cVar1 < '\0') {
        return -6;
      }
      if ('\x10' < cVar1) {
        return -7;
      }
      param_2 = 0;
      if ('\0' < cVar1) {
        do {
          iVar3 = FUN_1024a140(iVar5);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c010(uVar2,"%s[%u]%c","[talentLearn]",param_2,(int)(char)param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = iVar5;
          if (-1 < iVar5) {
            iVar3 = iVar5 + 1;
          }
          iVar3 = FUN_101ee510(uVar2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          param_2 = param_2 + 1;
        } while (param_2 < param_1[0x21]);
      }
      iVar3 = FUN_1024a290(uVar2,iVar5,param_4,"[talentEquipCount]","0x%02x",(int)param_1[0xb2]);
      if (iVar3 == 0) {
        cVar1 = param_1[0xb2];
        if (cVar1 < '\0') {
          return -6;
        }
        if ('\b' < cVar1) {
          return -7;
        }
        param_2 = 0;
        if ('\0' < cVar1) {
          do {
            iVar3 = FUN_1024a230(param_4,"[talentEquip]",param_2,param_2);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = iVar5;
            if (-1 < iVar5) {
              iVar3 = iVar5 + 1;
            }
            iVar3 = FUN_101eebd0(uVar2,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            param_2 = param_2 + 1;
          } while (param_2 < param_1[0xb2]);
        }
        iVar3 = FUN_1024a290(uVar2,iVar5,param_4,"[rageIdx]","0x%02x",(int)param_1[0xfb]);
        if ((iVar3 == 0) &&
           (iVar3 = FUN_1024a290(uVar2,iVar5,param_4,"[rageCount]","0x%02x",(int)param_1[0xfc]),
           iVar3 == 0)) {
          cVar1 = param_1[0xfc];
          if (cVar1 < '\0') {
            return -6;
          }
          if ('\x05' < cVar1) {
            return -7;
          }
          iVar3 = FUN_1024a3b0(extraout_ECX,"[rage]",(int)cVar1,(int)cVar1 >> 0x1f);
          if (iVar3 == 0) {
            if ('\0' < param_1[0xfc]) {
              pcVar4 = param_1 + 0xfd;
              param_3 = (char *)0x0;
              do {
                iVar3 = FUN_1010c010(uVar2,&DAT_11d9f710,*(undefined4 *)pcVar4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                param_3 = (char *)((int)param_3 + 1);
                pcVar4 = pcVar4 + 4;
              } while ((int)param_3 < (int)param_1[0xfc]);
            }
            iVar3 = FUN_1010c060(param_4);
            if ((iVar3 == 0) &&
               (iVar3 = FUN_1024a290(uVar2,iVar5,param_4,"[bushidoRageCount]","0x%02x",
                                     (int)param_1[0x111]), iVar3 == 0)) {
              cVar1 = param_1[0xfc];
              if (cVar1 < '\0') {
                return -6;
              }
              if ('\x05' < cVar1) {
                return -7;
              }
              iVar3 = FUN_1024a3b0(extraout_ECX_00,"[bushidoRage]",(int)cVar1,(int)cVar1 >> 0x1f);
              if (iVar3 == 0) {
                iVar5 = 0;
                if ('\0' < param_1[0xfc]) {
                  pcVar4 = param_1 + 0x112;
                  do {
                    iVar3 = FUN_1010c010(uVar2,&DAT_11d9f710,*(undefined4 *)pcVar4);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    iVar5 = iVar5 + 1;
                    pcVar4 = pcVar4 + 4;
                  } while (iVar5 < param_1[0xfc]);
                }
                iVar3 = FUN_1010c060(param_4);
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_101f26e0 @ 101f26e0  size=951 ===== */
// calls: _wassert
// strings:
//   "[version]"
//   "[manuSkillCount]"
//   "[manuSkill]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[ingredientCount]"
//   "[ingredient]"
//   "[skillWeapon]"
//   "[formulaBitCount]"
//   "[formulaBit]"
//   " 0x%02x"
//   "[expressionCount]"
//   "[expression]"

/* WARNING: Removing unreachable block (ram,0x101f277d) */
/* WARNING: Removing unreachable block (ram,0x101f28bd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[version]""
     ""[manuSkillCount]""
     ""[manuSkill]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[ingredientCount]""
     ""[ingredient]""
     ""[skillWeapon]""
     ""[formulaBitCount]"" */

int __thiscall FUN_101f26e0(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  
  uVar2 = param_2;
  iVar5 = FUN_1024a290(param_2,param_3,param_4,"[version]",&DAT_11d9e0b4,*param_1);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_1024a290(param_2,param_3,param_4,"[manuSkillCount]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 1)), iVar5 == 0)) {
    sVar4 = *(short *)(param_1 + 1);
    if (sVar4 < 0) {
      return -6;
    }
    if (5 < sVar4) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar4) {
      do {
        iVar5 = FUN_1024a140(param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c010(param_2,"%s[%u]%c","[manuSkill]",(int)sVar3,(int)(char)param_4);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = param_3;
        if (-1 < param_3) {
          iVar5 = param_3 + 1;
        }
        iVar5 = FUN_101ed330(param_2,iVar5,param_4);
        if (iVar5 != 0) {
          return iVar5;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar5 = FUN_1024a290(param_2,param_3,param_4,"[ingredientCount]",&DAT_11d9e0b4,
                         (int)*(short *)((int)param_1 + 0x56));
    if (iVar5 == 0) {
      uVar1 = *(ushort *)((int)param_1 + 0x56);
      uVar7 = (uint)uVar1;
      if ((short)uVar1 < 0) {
        return -6;
      }
      if (0x280 < (short)uVar1) {
        return -7;
      }
      sVar4 = 0;
      if (0 < (short)uVar1) {
        do {
          iVar5 = FUN_1024a230(param_4,"[ingredient]",(int)sVar4,uVar7);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_3;
          if (-1 < param_3) {
            iVar5 = param_3 + 1;
          }
          iVar5 = FUN_101ed8d0(param_2,iVar5,param_4);
          if (iVar5 != 0) {
            return iVar5;
          }
          sVar4 = sVar4 + 1;
          uVar7 = extraout_ECX;
        } while (sVar4 < *(short *)((int)param_1 + 0x56));
      }
      param_2 = 0;
      do {
        iVar5 = FUN_1024a140(param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c010(uVar2,"%s[%u]%c","[skillWeapon]",param_2,(int)(char)param_4);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = param_3;
        if (-1 < param_3) {
          iVar5 = param_3 + 1;
        }
        iVar5 = FUN_101f0b50(uVar2,iVar5,param_4);
        if (iVar5 != 0) {
          return iVar5;
        }
        param_2 = param_2 + 1;
      } while (param_2 < 0xd);
      iVar5 = FUN_1024a290(uVar2,param_3,param_4,"[formulaBitCount]",&DAT_11d9e0b4,
                           *(undefined4 *)((int)param_1 + 0x237a));
      if (iVar5 == 0) {
        iVar5 = *(int *)((int)param_1 + 0x237a);
        if (iVar5 < 0) {
          return -6;
        }
        if (0x280 < iVar5) {
          return -7;
        }
        iVar5 = FUN_1024a3b0(extraout_ECX_00,"[formulaBit]",iVar5,iVar5 >> 0x1f);
        if (iVar5 == 0) {
          if (0 < *(int *)((int)param_1 + 0x237a)) {
            iVar5 = 0;
            do {
              iVar6 = FUN_1010c010(uVar2," 0x%02x",(int)*(char *)((int)param_1 + iVar5 + 0x237e));
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)((int)param_1 + 0x237a));
          }
          iVar5 = FUN_1010c060(param_4);
          if ((iVar5 == 0) &&
             (iVar5 = FUN_1024a290(uVar2,param_3,param_4,"[expressionCount]",&DAT_11d9e0b4,
                                   (int)*(short *)((int)param_1 + 0x25fe)), iVar5 == 0)) {
            uVar1 = *(ushort *)((int)param_1 + 0x25fe);
            uVar7 = (uint)uVar1;
            if ((short)uVar1 < 0) {
              return -6;
            }
            if (0x100 < (short)uVar1) {
              return -7;
            }
            sVar4 = 0;
            if (0 < (short)uVar1) {
              do {
                iVar5 = FUN_1024a230(param_4,"[expression]",(int)sVar4,uVar7);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar5 = param_3;
                if (-1 < param_3) {
                  iVar5 = param_3 + 1;
                }
                iVar5 = FUN_101ef2f0(uVar2,iVar5,param_4);
                if (iVar5 != 0) {
                  return iVar5;
                }
                sVar4 = sVar4 + 1;
                uVar7 = extraout_ECX_01;
              } while (sVar4 < *(short *)((int)param_1 + 0x25fe));
            }
            iVar5 = 0;
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101f3a10 @ 101f3a10  size=4658 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_101f3a10(int param_1)

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
  undefined4 extraout_ECX_52;
  undefined4 extraout_ECX_53;
  undefined4 extraout_ECX_54;
  undefined4 extraout_ECX_55;
  
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
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x8e5), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_52);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x8f5), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_53);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x915), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_54);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b01d0(param_1);
                                                        if (((iVar5 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                          4) - iVar4
                                                                                  ,uVar3),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x925), iVar4 == 0)
                                                           ) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_55);
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
        }
      }
    }
  }
  return;
}



