/* ===== FUN_101f4c50 @ 101f4c50  size=4658 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_101f4c50(int param_1)

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
    iVar5 = FUN_101b0280(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_101b0280(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x75), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_101b0280(param_1);
        if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)
            ) && (iVar4 = FUN_1010c5f0(0x85), iVar4 == 0)) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_101b0280(param_1);
          if (((iVar5 == 0) &&
              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
             (iVar4 = FUN_1010c5f0(0x95), iVar4 == 0)) {
            uVar3 = *(undefined4 *)(param_1 + 4);
            FUN_1010bf70(extraout_ECX_02);
            iVar4 = *(int *)(param_1 + 4);
            iVar5 = FUN_101b0280(param_1);
            if (((iVar5 == 0) &&
                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
               (iVar4 = FUN_1010c5f0(0xa5), iVar4 == 0)) {
              uVar3 = *(undefined4 *)(param_1 + 4);
              FUN_1010bf70(extraout_ECX_03);
              iVar4 = *(int *)(param_1 + 4);
              iVar5 = FUN_101b0280(param_1);
              if (((iVar5 == 0) &&
                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                 (iVar4 = FUN_1010c5f0(0x125), iVar4 == 0)) {
                uVar3 = *(undefined4 *)(param_1 + 4);
                FUN_1010bf70(extraout_ECX_04);
                iVar4 = *(int *)(param_1 + 4);
                iVar5 = FUN_101b0280(param_1);
                if (((iVar5 == 0) &&
                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                   (iVar4 = FUN_1010c5f0(0x135), iVar4 == 0)) {
                  uVar3 = *(undefined4 *)(param_1 + 4);
                  FUN_1010bf70(extraout_ECX_05);
                  iVar4 = *(int *)(param_1 + 4);
                  iVar5 = FUN_101b0280(param_1);
                  if (((iVar5 == 0) &&
                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                     (iVar4 = FUN_1010c5f0(0x145), iVar4 == 0)) {
                    uVar3 = *(undefined4 *)(param_1 + 4);
                    FUN_1010bf70(extraout_ECX_06);
                    iVar4 = *(int *)(param_1 + 4);
                    iVar5 = FUN_101b0280(param_1);
                    if (((iVar5 == 0) &&
                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                       (iVar4 = FUN_1010c5f0(0x155), iVar4 == 0)) {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      FUN_1010bf70(extraout_ECX_07);
                      iVar4 = *(int *)(param_1 + 4);
                      iVar5 = FUN_101b0280(param_1);
                      if (((iVar5 == 0) &&
                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
                         && (iVar4 = FUN_1010c5f0(0x175), iVar4 == 0)) {
                        uVar3 = *(undefined4 *)(param_1 + 4);
                        FUN_1010bf70(extraout_ECX_08);
                        iVar4 = *(int *)(param_1 + 4);
                        iVar5 = FUN_101b0280(param_1);
                        if (((iVar5 == 0) &&
                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
                           && (iVar4 = FUN_1010c5f0(0x185), iVar4 == 0)) {
                          uVar3 = *(undefined4 *)(param_1 + 4);
                          FUN_1010bf70(extraout_ECX_09);
                          iVar4 = *(int *)(param_1 + 4);
                          iVar5 = FUN_101b0280(param_1);
                          if (((iVar5 == 0) &&
                              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0
                              )) && (iVar4 = FUN_1010c5f0(0x195), iVar4 == 0)) {
                            uVar3 = *(undefined4 *)(param_1 + 4);
                            FUN_1010bf70(extraout_ECX_10);
                            iVar4 = *(int *)(param_1 + 4);
                            iVar5 = FUN_101b0280(param_1);
                            if (((iVar5 == 0) &&
                                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x1e5), iVar4 == 0)) {
                              uVar3 = *(undefined4 *)(param_1 + 4);
                              FUN_1010bf70(extraout_ECX_11);
                              iVar4 = *(int *)(param_1 + 4);
                              iVar5 = FUN_101b0280(param_1);
                              if (((iVar5 == 0) &&
                                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                  iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x1f5), iVar4 == 0)) {
                                uVar3 = *(undefined4 *)(param_1 + 4);
                                FUN_1010bf70(extraout_ECX_12);
                                iVar4 = *(int *)(param_1 + 4);
                                iVar5 = FUN_101b0280(param_1);
                                if (((iVar5 == 0) &&
                                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                    iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x205), iVar4 == 0)) {
                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                  FUN_1010bf70(extraout_ECX_13);
                                  iVar4 = *(int *)(param_1 + 4);
                                  iVar5 = FUN_101b0280(param_1);
                                  if (((iVar5 == 0) &&
                                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                      iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x225), iVar4 == 0)) {
                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                    FUN_1010bf70(extraout_ECX_14);
                                    iVar4 = *(int *)(param_1 + 4);
                                    iVar5 = FUN_101b0280(param_1);
                                    if (((iVar5 == 0) &&
                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3),
                                        iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x235), iVar4 == 0)) {
                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                      FUN_1010bf70(extraout_ECX_15);
                                      iVar4 = *(int *)(param_1 + 4);
                                      iVar5 = FUN_101b0280(param_1);
                                      if (((iVar5 == 0) &&
                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3)
                                          , iVar4 == 0)) &&
                                         (iVar4 = FUN_1010c5f0(0x245), iVar4 == 0)) {
                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                        FUN_1010bf70(extraout_ECX_16);
                                        iVar4 = *(int *)(param_1 + 4);
                                        iVar5 = FUN_101b0280(param_1);
                                        if (((iVar5 == 0) &&
                                            (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                  uVar3), iVar4 == 0)) &&
                                           (iVar4 = FUN_1010c5f0(0x2a5), iVar4 == 0)) {
                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                          FUN_1010bf70(extraout_ECX_17);
                                          iVar4 = *(int *)(param_1 + 4);
                                          iVar5 = FUN_101b0280(param_1);
                                          if (((iVar5 == 0) &&
                                              (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                    uVar3), iVar4 == 0)) &&
                                             (iVar4 = FUN_1010c5f0(0x2b5), iVar4 == 0)) {
                                            uVar3 = *(undefined4 *)(param_1 + 4);
                                            FUN_1010bf70(extraout_ECX_18);
                                            iVar4 = *(int *)(param_1 + 4);
                                            iVar5 = FUN_101b0280(param_1);
                                            if (((iVar5 == 0) &&
                                                (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                      uVar3), iVar4 == 0)) &&
                                               (iVar4 = FUN_1010c5f0(0x2c5), iVar4 == 0)) {
                                              uVar3 = *(undefined4 *)(param_1 + 4);
                                              FUN_1010bf70(extraout_ECX_19);
                                              iVar4 = *(int *)(param_1 + 4);
                                              iVar5 = FUN_101b0280(param_1);
                                              if (((iVar5 == 0) &&
                                                  (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                        iVar4,uVar3), iVar4 == 0))
                                                 && (iVar4 = FUN_1010c5f0(0x2d5), iVar4 == 0)) {
                                                uVar3 = *(undefined4 *)(param_1 + 4);
                                                FUN_1010bf70(extraout_ECX_20);
                                                iVar4 = *(int *)(param_1 + 4);
                                                iVar5 = FUN_101b0280(param_1);
                                                if (((iVar5 == 0) &&
                                                    (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                          iVar4,uVar3), iVar4 == 0))
                                                   && (iVar4 = FUN_1010c5f0(0x2e5), iVar4 == 0)) {
                                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                                  FUN_1010bf70(extraout_ECX_21);
                                                  iVar4 = *(int *)(param_1 + 4);
                                                  iVar5 = FUN_101b0280(param_1);
                                                  if (((iVar5 == 0) &&
                                                      (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                            iVar4,uVar3), iVar4 == 0
                                                      )) && (iVar4 = FUN_1010c5f0(0x2f5), iVar4 == 0
                                                            )) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_22);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x305), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_23);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x315), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_24);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x345), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x355), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_28);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x365), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_29);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x435), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_32);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x445), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_33);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x455), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_34);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x4d5), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_37);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x4e5), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_38);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x4f5), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_39);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x525), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_42);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x535), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_43);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x545), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_44);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x575), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_47);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x585), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_48);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x595), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_49);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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
                                                            iVar5 = FUN_101b0280(param_1);
                                                            if (((iVar5 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x8e5), iVar4 == 0)) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_52);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (((iVar5 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                              - iVar4,uVar3),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x8f5), iVar4 == 0)) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_53);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (((iVar5 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4
                                                                                        ) - iVar4,
                                                                                uVar3), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x915), iVar4 == 0
                                                            )) {
                                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                                        FUN_1010bf70(extraout_ECX_54);
                                                        iVar4 = *(int *)(param_1 + 4);
                                                        iVar5 = FUN_101b0280(param_1);
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
                                                          iVar5 = FUN_101b0280(param_1);
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



/* ===== FUN_101f89d0 @ 101f89d0  size=3657 ===== */
// calls: _wassert
// strings:
//   "[oPetName]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[oPetSex]"
//   "[oOwner]"
//   "[oPetSignature]"
//   "[oPetExp]"
//   "[oPetLevel]"
//   "[oSpirit]"
//   "[oVigour]"
//   "[oPetHP]"
//   "[oPetMaxHP]"
//   "[oPetMelee]"
//   "[oPetDefence]"
//   "[oCritLevel]"
//   "[oPetExecution]"
//   "[oPetObservation]"
//   "[oPetLoadBearing]"
//   "[oPetMaxSp]"
//   "[oPetSp]"

/* WARNING: Removing unreachable block (ram,0x101f89e0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[oPetName]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[oPetSex]""
     ""[oOwner]""
     ""[oPetSignature]""
     ""[oPetExp]""
     ""[oPetLevel]""
     ""[oSpirit]""
     ""[oVigour]"" */

void FUN_101f89d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
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
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[oPetName]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[oPetSex]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[oOwner]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_2;
        if (-1 < param_2) {
          iVar1 = param_2 + 1;
        }
        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a1e0(param_3,"[oPetSignature]",extraout_ECX_01), iVar1 == 0)) {
          iVar1 = param_2;
          if (-1 < param_2) {
            iVar1 = param_2 + 1;
          }
          iVar1 = FUN_101b0710(param_1,iVar1,param_3);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_1024a1e0(param_3,"[oPetExp]",extraout_ECX_02), iVar1 == 0)) {
            iVar1 = param_2;
            if (-1 < param_2) {
              iVar1 = param_2 + 1;
            }
            iVar1 = FUN_101b0710(param_1,iVar1,param_3);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_1024a1e0(param_3,"[oPetLevel]",extraout_ECX_03), iVar1 == 0)) {
              iVar1 = param_2;
              if (-1 < param_2) {
                iVar1 = param_2 + 1;
              }
              iVar1 = FUN_101b0710(param_1,iVar1,param_3);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_1024a1e0(param_3,"[oSpirit]",extraout_ECX_04), iVar1 == 0)) {
                iVar1 = param_2;
                if (-1 < param_2) {
                  iVar1 = param_2 + 1;
                }
                iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_1024a1e0(param_3,"[oVigour]",extraout_ECX_05), iVar1 == 0)) {
                  iVar1 = param_2;
                  if (-1 < param_2) {
                    iVar1 = param_2 + 1;
                  }
                  iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                  if ((iVar1 == 0) &&
                     (iVar1 = FUN_1024a1e0(param_3,"[oPetHP]",extraout_ECX_06), iVar1 == 0)) {
                    iVar1 = param_2;
                    if (-1 < param_2) {
                      iVar1 = param_2 + 1;
                    }
                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                    if ((iVar1 == 0) &&
                       (iVar1 = FUN_1024a1e0(param_3,"[oPetMaxHP]",extraout_ECX_07), iVar1 == 0)) {
                      iVar1 = param_2;
                      if (-1 < param_2) {
                        iVar1 = param_2 + 1;
                      }
                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                      if ((iVar1 == 0) &&
                         (iVar1 = FUN_1024a1e0(param_3,"[oPetMelee]",extraout_ECX_08), iVar1 == 0))
                      {
                        iVar1 = param_2;
                        if (-1 < param_2) {
                          iVar1 = param_2 + 1;
                        }
                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                        if ((iVar1 == 0) &&
                           (iVar1 = FUN_1024a1e0(param_3,"[oPetDefence]",extraout_ECX_09),
                           iVar1 == 0)) {
                          iVar1 = param_2;
                          if (-1 < param_2) {
                            iVar1 = param_2 + 1;
                          }
                          iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                          if ((iVar1 == 0) &&
                             (iVar1 = FUN_1024a1e0(param_3,"[oCritLevel]",extraout_ECX_10),
                             iVar1 == 0)) {
                            iVar1 = param_2;
                            if (-1 < param_2) {
                              iVar1 = param_2 + 1;
                            }
                            iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                            if ((iVar1 == 0) &&
                               (iVar1 = FUN_1024a1e0(param_3,"[oPetExecution]",extraout_ECX_11),
                               iVar1 == 0)) {
                              iVar1 = param_2;
                              if (-1 < param_2) {
                                iVar1 = param_2 + 1;
                              }
                              iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                              if ((iVar1 == 0) &&
                                 (iVar1 = FUN_1024a1e0(param_3,"[oPetObservation]",extraout_ECX_12),
                                 iVar1 == 0)) {
                                iVar1 = param_2;
                                if (-1 < param_2) {
                                  iVar1 = param_2 + 1;
                                }
                                iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                if ((iVar1 == 0) &&
                                   (iVar1 = FUN_1024a1e0(param_3,"[oPetLoadBearing]",extraout_ECX_13
                                                        ), iVar1 == 0)) {
                                  iVar1 = param_2;
                                  if (-1 < param_2) {
                                    iVar1 = param_2 + 1;
                                  }
                                  iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                  if ((iVar1 == 0) &&
                                     (iVar1 = FUN_1024a1e0(param_3,"[oPetMaxSp]",extraout_ECX_14),
                                     iVar1 == 0)) {
                                    iVar1 = param_2;
                                    if (-1 < param_2) {
                                      iVar1 = param_2 + 1;
                                    }
                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                    if ((iVar1 == 0) &&
                                       (iVar1 = FUN_1024a1e0(param_3,"[oPetSp]",extraout_ECX_15),
                                       iVar1 == 0)) {
                                      iVar1 = param_2;
                                      if (-1 < param_2) {
                                        iVar1 = param_2 + 1;
                                      }
                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                      if ((iVar1 == 0) &&
                                         (iVar1 = FUN_1024a1e0(param_3,"[oPetPotential]",
                                                               extraout_ECX_16), iVar1 == 0)) {
                                        iVar1 = param_2;
                                        if (-1 < param_2) {
                                          iVar1 = param_2 + 1;
                                        }
                                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                        if ((iVar1 == 0) &&
                                           (iVar1 = FUN_1024a1e0(param_3,"[oWaterAtk]",
                                                                 extraout_ECX_17), iVar1 == 0)) {
                                          iVar1 = param_2;
                                          if (-1 < param_2) {
                                            iVar1 = param_2 + 1;
                                          }
                                          iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                          if ((iVar1 == 0) &&
                                             (iVar1 = FUN_1024a1e0(param_3,"[oFireAtk]",
                                                                   extraout_ECX_18), iVar1 == 0)) {
                                            iVar1 = param_2;
                                            if (-1 < param_2) {
                                              iVar1 = param_2 + 1;
                                            }
                                            iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                            if ((iVar1 == 0) &&
                                               (iVar1 = FUN_1024a1e0(param_3,"[oLightningAtk]",
                                                                     extraout_ECX_19), iVar1 == 0))
                                            {
                                              iVar1 = param_2;
                                              if (-1 < param_2) {
                                                iVar1 = param_2 + 1;
                                              }
                                              iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                              if ((iVar1 == 0) &&
                                                 (iVar1 = FUN_1024a1e0(param_3,"[oDragonAtk]",
                                                                       extraout_ECX_20), iVar1 == 0)
                                                 ) {
                                                iVar1 = param_2;
                                                if (-1 < param_2) {
                                                  iVar1 = param_2 + 1;
                                                }
                                                iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                if ((iVar1 == 0) &&
                                                   (iVar1 = FUN_1024a1e0(param_3,"[oIceAtk]",
                                                                         extraout_ECX_21),
                                                   iVar1 == 0)) {
                                                  iVar1 = param_2;
                                                  if (-1 < param_2) {
                                                    iVar1 = param_2 + 1;
                                                  }
                                                  iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                  if ((iVar1 == 0) &&
                                                     (iVar1 = FUN_1024a1e0(param_3,"[oWaterRes]",
                                                                           extraout_ECX_22),
                                                     iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oFireRes]",
                                                                             extraout_ECX_23),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oLightningRes]",extraout_ECX_24), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oDragonRes]",
                                                                             extraout_ECX_25),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,"[oIceRes]",
                                                                               extraout_ECX_26),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oWaterThrsh]",extraout_ECX_27), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oFireThrsh]",
                                                                             extraout_ECX_28),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oLightningThrsh]",extraout_ECX_29), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oDragonThrsh]",extraout_ECX_30), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oIceThrsh]",
                                                                             extraout_ECX_31),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oComaThrsh]",extraout_ECX_32), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oPoisonThrsh]",extraout_ECX_33), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oSleepingThrsh]",extraout_ECX_34), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oParaThrsh]",
                                                                             extraout_ECX_35),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oWindPressureDef]",extraout_ECX_36), iVar1 == 0)
                                                  ) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oQuakeDef]",
                                                                             extraout_ECX_37),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,"[oRoarDef]",
                                                                               extraout_ECX_38),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oPalsyDef]",extraout_ECX_39), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oSnowManDef]"
                                                                             ,extraout_ECX_40),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,"[oTiredDef]"
                                                                               ,extraout_ECX_41),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oAttackLevelDef]",extraout_ECX_42), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oPetSkillID]"
                                                                             ,extraout_ECX_43),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oEquipedSkillID]",extraout_ECX_44), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oPetWeaponID]",extraout_ECX_45), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oPetHatID]",
                                                                             extraout_ECX_46),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oPetBodyID]",extraout_ECX_47), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oFashionWwaponID]",extraout_ECX_48), iVar1 == 0)
                                                  ) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oFashionHatID]",extraout_ECX_49), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oFashionBodyID]",extraout_ECX_50), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oRegion]",
                                                                             extraout_ECX_51),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,"[oPetMana]",
                                                                               extraout_ECX_52),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oPetMaxMana]",extraout_ECX_53), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = FUN_1024a1e0(param_3,"[oAnimusHide]"
                                                                             ,extraout_ECX_54),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = FUN_1024a1e0(param_3,
                                                  "[oNoInterupt]",extraout_ECX_55), iVar1 == 0)) {
                                                    if (param_2 < 0) {
                                                      FUN_101b0710(param_1,param_2,param_3);
                                                      return;
                                                    }
                                                    FUN_101b0710(param_1,param_2 + 1,param_3);
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



/* ===== FUN_101f9b60 @ 101f9b60  size=978 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_101f9b60(int param_1)

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
    if (iVar5 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c5f0(0x55);
        if (iVar4 == 0) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_101b01d0(param_1);
          if (iVar5 == 0) {
            iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
            if (iVar4 == 0) {
              iVar4 = FUN_1010c5f0(0x75);
              if (iVar4 == 0) {
                uVar3 = *(undefined4 *)(param_1 + 4);
                FUN_1010bf70(extraout_ECX_00);
                iVar4 = *(int *)(param_1 + 4);
                iVar5 = FUN_101b01d0(param_1);
                if (iVar5 == 0) {
                  iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                  if (iVar4 == 0) {
                    iVar4 = FUN_1010c5f0(0x85);
                    if (iVar4 == 0) {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      FUN_1010bf70(extraout_ECX_01);
                      iVar4 = *(int *)(param_1 + 4);
                      iVar5 = FUN_101b01d0(param_1);
                      if (iVar5 == 0) {
                        iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                        if (iVar4 == 0) {
                          iVar4 = FUN_1010c5f0(0xa5);
                          if (iVar4 == 0) {
                            uVar3 = *(undefined4 *)(param_1 + 4);
                            FUN_1010bf70(extraout_ECX_02);
                            iVar4 = *(int *)(param_1 + 4);
                            iVar5 = FUN_101b01d0(param_1);
                            if (iVar5 == 0) {
                              iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                              if (iVar4 == 0) {
                                iVar4 = FUN_1010c5f0(0x555);
                                if (iVar4 == 0) {
                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                  FUN_1010bf70(extraout_ECX_03);
                                  iVar4 = *(int *)(param_1 + 4);
                                  iVar5 = FUN_101b01d0(param_1);
                                  if (iVar5 == 0) {
                                    iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                                    if (iVar4 == 0) {
                                      iVar4 = FUN_1010c5f0(0x565);
                                      if (iVar4 == 0) {
                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                        FUN_1010bf70(extraout_ECX_04);
                                        iVar4 = *(int *)(param_1 + 4);
                                        iVar5 = FUN_101b01d0(param_1);
                                        if (iVar5 == 0) {
                                          iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                                          if (iVar4 == 0) {
                                            iVar4 = FUN_1010c5f0(0x575);
                                            if (iVar4 == 0) {
                                              uVar3 = *(undefined4 *)(param_1 + 4);
                                              FUN_1010bf70(extraout_ECX_05);
                                              iVar4 = *(int *)(param_1 + 4);
                                              iVar5 = FUN_101b01d0(param_1);
                                              if (iVar5 == 0) {
                                                iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                     uVar3);
                                                if (iVar4 == 0) {
                                                  iVar4 = FUN_1010c5f0(0x585);
                                                  if (iVar4 == 0) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_06);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b01d0(param_1);
                                                    if (iVar5 == 0) {
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                           iVar4,uVar3);
                                                      if (iVar4 == 0) {
                                                        iVar4 = FUN_1010c5f0(0x595);
                                                        if (iVar4 == 0) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_07);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b01d0(param_1);
                                                          if (iVar5 == 0) {
                                                            iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                         4) - iVar4,
                                                                                 uVar3);
                                                            if (iVar4 == 0) {
                                                              iVar4 = FUN_1010c5f0(0x5a5);
                                                              if (iVar4 == 0) {
                                                                uVar3 = *(undefined4 *)(param_1 + 4)
                                                                ;
                                                                FUN_1010bf70(extraout_ECX_08);
                                                                iVar4 = *(int *)(param_1 + 4);
                                                                iVar5 = FUN_101b01d0(param_1);
                                                                if (iVar5 == 0) {
                                                                  iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3);
                                                  if (iVar4 == 0) {
                                                    iVar4 = FUN_1010c5f0(0x5b5);
                                                    if (iVar4 == 0) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_09);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b01d0(param_1);
                                                      if (iVar5 == 0) {
                                                        FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                     uVar3);
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



/* ===== FUN_101f9f40 @ 101f9f40  size=978 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_101f9f40(int param_1)

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
    iVar5 = FUN_101b0280(param_1);
    if (iVar5 == 0) {
      iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1);
      if (iVar4 == 0) {
        iVar4 = FUN_1010c5f0(0x55);
        if (iVar4 == 0) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          FUN_1010bf70(extraout_ECX);
          iVar4 = *(int *)(param_1 + 4);
          iVar5 = FUN_101b0280(param_1);
          if (iVar5 == 0) {
            iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
            if (iVar4 == 0) {
              iVar4 = FUN_1010c5f0(0x75);
              if (iVar4 == 0) {
                uVar3 = *(undefined4 *)(param_1 + 4);
                FUN_1010bf70(extraout_ECX_00);
                iVar4 = *(int *)(param_1 + 4);
                iVar5 = FUN_101b0280(param_1);
                if (iVar5 == 0) {
                  iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                  if (iVar4 == 0) {
                    iVar4 = FUN_1010c5f0(0x85);
                    if (iVar4 == 0) {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      FUN_1010bf70(extraout_ECX_01);
                      iVar4 = *(int *)(param_1 + 4);
                      iVar5 = FUN_101b0280(param_1);
                      if (iVar5 == 0) {
                        iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                        if (iVar4 == 0) {
                          iVar4 = FUN_1010c5f0(0xa5);
                          if (iVar4 == 0) {
                            uVar3 = *(undefined4 *)(param_1 + 4);
                            FUN_1010bf70(extraout_ECX_02);
                            iVar4 = *(int *)(param_1 + 4);
                            iVar5 = FUN_101b0280(param_1);
                            if (iVar5 == 0) {
                              iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                              if (iVar4 == 0) {
                                iVar4 = FUN_1010c5f0(0x555);
                                if (iVar4 == 0) {
                                  uVar3 = *(undefined4 *)(param_1 + 4);
                                  FUN_1010bf70(extraout_ECX_03);
                                  iVar4 = *(int *)(param_1 + 4);
                                  iVar5 = FUN_101b0280(param_1);
                                  if (iVar5 == 0) {
                                    iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                                    if (iVar4 == 0) {
                                      iVar4 = FUN_1010c5f0(0x565);
                                      if (iVar4 == 0) {
                                        uVar3 = *(undefined4 *)(param_1 + 4);
                                        FUN_1010bf70(extraout_ECX_04);
                                        iVar4 = *(int *)(param_1 + 4);
                                        iVar5 = FUN_101b0280(param_1);
                                        if (iVar5 == 0) {
                                          iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
                                          if (iVar4 == 0) {
                                            iVar4 = FUN_1010c5f0(0x575);
                                            if (iVar4 == 0) {
                                              uVar3 = *(undefined4 *)(param_1 + 4);
                                              FUN_1010bf70(extraout_ECX_05);
                                              iVar4 = *(int *)(param_1 + 4);
                                              iVar5 = FUN_101b0280(param_1);
                                              if (iVar5 == 0) {
                                                iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                     uVar3);
                                                if (iVar4 == 0) {
                                                  iVar4 = FUN_1010c5f0(0x585);
                                                  if (iVar4 == 0) {
                                                    uVar3 = *(undefined4 *)(param_1 + 4);
                                                    FUN_1010bf70(extraout_ECX_06);
                                                    iVar4 = *(int *)(param_1 + 4);
                                                    iVar5 = FUN_101b0280(param_1);
                                                    if (iVar5 == 0) {
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) -
                                                                           iVar4,uVar3);
                                                      if (iVar4 == 0) {
                                                        iVar4 = FUN_1010c5f0(0x595);
                                                        if (iVar4 == 0) {
                                                          uVar3 = *(undefined4 *)(param_1 + 4);
                                                          FUN_1010bf70(extraout_ECX_07);
                                                          iVar4 = *(int *)(param_1 + 4);
                                                          iVar5 = FUN_101b0280(param_1);
                                                          if (iVar5 == 0) {
                                                            iVar4 = FUN_1010c3c0(*(int *)(param_1 +
                                                                                         4) - iVar4,
                                                                                 uVar3);
                                                            if (iVar4 == 0) {
                                                              iVar4 = FUN_1010c5f0(0x5a5);
                                                              if (iVar4 == 0) {
                                                                uVar3 = *(undefined4 *)(param_1 + 4)
                                                                ;
                                                                FUN_1010bf70(extraout_ECX_08);
                                                                iVar4 = *(int *)(param_1 + 4);
                                                                iVar5 = FUN_101b0280(param_1);
                                                                if (iVar5 == 0) {
                                                                  iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_1 + 4) - iVar4,uVar3);
                                                  if (iVar4 == 0) {
                                                    iVar4 = FUN_1010c5f0(0x5b5);
                                                    if (iVar4 == 0) {
                                                      uVar3 = *(undefined4 *)(param_1 + 4);
                                                      FUN_1010bf70(extraout_ECX_09);
                                                      iVar4 = *(int *)(param_1 + 4);
                                                      iVar5 = FUN_101b0280(param_1);
                                                      if (iVar5 == 0) {
                                                        FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,
                                                                     uVar3);
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



/* ===== FUN_101faee0 @ 101faee0  size=805 ===== */
// calls: _wassert
// strings:
//   "[oPetName]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[oPetSex]"
//   "[oOwner]"
//   "[oPetSignature]"
//   "[oPetLevel]"
//   "[oPetWeaponID]"
//   "[oPetHatID]"
//   "[oPetBodyID]"
//   "[oFashionWwaponID]"
//   "[oFashionHatID]"
//   "[oFashionBodyID]"
//   "[oRegion]"

/* WARNING: Removing unreachable block (ram,0x101faef0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[oPetName]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[oPetSex]""
     ""[oOwner]""
     ""[oPetSignature]""
     ""[oPetLevel]""
     ""[oPetWeaponID]""
     ""[oPetHatID]""
     ""[oPetBodyID]"" */

void FUN_101faee0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
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
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[oPetName]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[oPetSex]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[oOwner]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_2;
        if (-1 < param_2) {
          iVar1 = param_2 + 1;
        }
        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a1e0(param_3,"[oPetSignature]",extraout_ECX_01), iVar1 == 0)) {
          iVar1 = param_2;
          if (-1 < param_2) {
            iVar1 = param_2 + 1;
          }
          iVar1 = FUN_101b0710(param_1,iVar1,param_3);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_1024a1e0(param_3,"[oPetLevel]",extraout_ECX_02), iVar1 == 0)) {
            iVar1 = param_2;
            if (-1 < param_2) {
              iVar1 = param_2 + 1;
            }
            iVar1 = FUN_101b0710(param_1,iVar1,param_3);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_1024a1e0(param_3,"[oPetWeaponID]",extraout_ECX_03), iVar1 == 0)) {
              iVar1 = param_2;
              if (-1 < param_2) {
                iVar1 = param_2 + 1;
              }
              iVar1 = FUN_101b0710(param_1,iVar1,param_3);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_1024a1e0(param_3,"[oPetHatID]",extraout_ECX_04), iVar1 == 0)) {
                iVar1 = param_2;
                if (-1 < param_2) {
                  iVar1 = param_2 + 1;
                }
                iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_1024a1e0(param_3,"[oPetBodyID]",extraout_ECX_05), iVar1 == 0)) {
                  iVar1 = param_2;
                  if (-1 < param_2) {
                    iVar1 = param_2 + 1;
                  }
                  iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                  if ((iVar1 == 0) &&
                     (iVar1 = FUN_1024a1e0(param_3,"[oFashionWwaponID]",extraout_ECX_06), iVar1 == 0
                     )) {
                    iVar1 = param_2;
                    if (-1 < param_2) {
                      iVar1 = param_2 + 1;
                    }
                    iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                    if ((iVar1 == 0) &&
                       (iVar1 = FUN_1024a1e0(param_3,"[oFashionHatID]",extraout_ECX_07), iVar1 == 0)
                       ) {
                      iVar1 = param_2;
                      if (-1 < param_2) {
                        iVar1 = param_2 + 1;
                      }
                      iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                      if ((iVar1 == 0) &&
                         (iVar1 = FUN_1024a1e0(param_3,"[oFashionBodyID]",extraout_ECX_08),
                         iVar1 == 0)) {
                        iVar1 = param_2;
                        if (-1 < param_2) {
                          iVar1 = param_2 + 1;
                        }
                        iVar1 = FUN_101b0710(param_1,iVar1,param_3);
                        if ((iVar1 == 0) &&
                           (iVar1 = FUN_1024a1e0(param_3,"[oRegion]",extraout_ECX_09), iVar1 == 0))
                        {
                          if (param_2 < 0) {
                            FUN_101b0710(param_1,param_2,param_3);
                            return;
                          }
                          FUN_101b0710(param_1,param_2 + 1,param_3);
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



/* ===== FUN_101fd7b0 @ 101fd7b0  size=289 ===== */
// calls: _wassert
// strings:
//   "%I64u"
//   "[roleGID]"
//   "[count]"
//   "[data]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101fd84f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""%I64u""
     ""[roleGID]""
     ""[count]""
     ""[data]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101fd7b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[roleGID]","%I64u",*param_1,param_1[1]);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,
                           (int)*(short *)(param_1 + 2)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 2);
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
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[data]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_101fcbe0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 2));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_101ff870 @ 101ff870  size=299 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x101ff927) */
/* WARNING: Removing unreachable block (ram,0x101ff979) */
/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall
FUN_101ff870(undefined2 *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,char param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_5 == '\0') {
      FUN_1010c0c0(0x99);
      FUN_1010bf70(extraout_ECX_00);
      iVar2 = FUN_1010c5f0(0x12);
      if (iVar2 == 0) {
        uVar1 = *param_1;
        uVar3 = 0;
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
      else {
        uVar3 = 0;
      }
    }
    else {
      FUN_1010c0c0(0xaa);
      FUN_1010bf70(extraout_ECX);
      iVar2 = FUN_1010c5f0(0x10);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c430(*param_1);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    FUN_1010c3c0(uVar3,0);
    return iVar2;
  }
  return -0x13;
}



/* ===== FUN_101ffb50 @ 101ffb50  size=206 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_101ffb50(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[2] & 1) == 0) {
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
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
        uVar1 = FUN_1010d4f0();
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_101fff70 @ 101fff70  size=146 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101fff70(undefined1 *param_1,int *param_2)

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
      if (((iVar2 == 0) && (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x30), iVar2 == 0)) {
        iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 5));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10200010 @ 10200010  size=146 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10200010(undefined1 *param_1,int *param_2)

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
      if (((iVar2 == 0) && (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x33), iVar2 == 0)) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 5));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10200180 @ 10200180  size=258 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10200180(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
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
        if (uVar1 == 2) {
          if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
          }
          puVar2 = param_1 + 1;
LAB_1020020b:
          uVar1 = FUN_1010cbd0(puVar2);
        }
        else {
          if (uVar1 == 3) {
            if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
            }
            puVar2 = param_1 + 5;
            goto LAB_1020020b;
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



/* ===== FUN_10200290 @ 10200290  size=258 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10200290(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
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
        if (uVar1 == 2) {
          if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
          }
          puVar2 = param_1 + 1;
LAB_1020031b:
          uVar1 = FUN_1010c870(puVar2);
        }
        else {
          if (uVar1 == 3) {
            if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
            }
            puVar2 = param_1 + 5;
            goto LAB_1020031b;
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



/* ===== FUN_10201100 @ 10201100  size=442 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10201100(int param_1,int *param_2)

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
    } while (uVar6 < 4);
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
      puVar5 = (undefined4 *)(param_1 + 0x10);
      do {
        iVar4 = FUN_1010c560(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 4);
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



/* ===== FUN_102012c0 @ 102012c0  size=442 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102012c0(int param_1,int *param_2)

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
    } while (uVar6 < 4);
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
      puVar5 = (undefined4 *)(param_1 + 0x10);
      do {
        iVar4 = FUN_1010c190(*puVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < 4);
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



/* ===== FUN_10201900 @ 10201900  size=393 ===== */
// calls: _wassert
// strings:
//   "[petID]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[startTime]"

/* WARNING: Removing unreachable block (ram,0x10201910) */
/* WARNING: Removing unreachable block (ram,0x102019d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[petID]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[startTime]"" */

int __thiscall FUN_10201900(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[petID]",3,0), iVar1 == 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar3 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
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
      iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[startTime]",3,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)(param_1 + 0x10);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < 4);
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



/* ===== FUN_10201d10 @ 10201d10  size=583 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10201d10(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  undefined4 extraout_ECX_01;
  code *pcVar11;
  short sVar12;
  uint uVar13;
  
  piVar5 = param_2;
  iVar6 = FUN_1010c5f0(0x15);
  if (iVar6 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar11 = _wassert_exref;
    uVar13 = param_2[1];
    if ((uVar13 <= (uint)param_2[2]) && (3 < param_2[2] - uVar13)) {
      param_2[1] = uVar13 + 4;
    }
    iVar6 = param_2[1];
    uVar13 = 0;
    do {
      uVar2 = param_2[1];
      if ((uint)param_2[2] < uVar2) {
        (*pcVar11)(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_2[1];
      if ((uVar3 <= (uint)param_2[2]) && (3 < param_2[2] - uVar3)) {
        param_2[1] = uVar3 + 4;
      }
      iVar8 = param_2[1];
      iVar7 = FUN_10201100(param_2);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar8 = FUN_1010c3c0(param_2[1] - iVar8,uVar2);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar13 = uVar13 + 1;
      pcVar11 = _wassert_exref;
    } while (uVar13 < 6);
    iVar6 = param_2[1] - iVar6;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar6 = -1;
    }
    else {
      iVar8 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
      *(undefined1 *)(uVar1 + iVar8) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar6 >> 0x10);
      *(undefined1 *)(*piVar5 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar5 + 2 + uVar1) = (char)((uint)iVar6 >> 8);
      *(char *)(*piVar5 + 3 + uVar1) = (char)iVar6;
      iVar6 = FUN_1010c5f0(0x20);
      if ((iVar6 == 0) && (iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0xd8)), iVar6 == 0)) {
        sVar12 = *(short *)(param_1 + 0xd8);
        if (sVar12 < 0) {
          return -6;
        }
        if (0x1e < sVar12) {
          return -7;
        }
        if ((0 < sVar12) && (iVar6 = FUN_1010c5f0(0x35), iVar6 == 0)) {
          iVar6 = piVar5[1];
          FUN_1010bf70(extraout_ECX);
          iVar8 = piVar5[1];
          sVar12 = 0;
          uVar10 = extraout_ECX_00;
          if (0 < *(short *)(param_1 + 0xd8)) {
            do {
              iVar7 = piVar5[1];
              FUN_1010bf70(uVar10);
              iVar4 = piVar5[1];
              iVar9 = FUN_10200710(piVar5);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar7 = FUN_1010c3c0(piVar5[1] - iVar4,iVar7);
              if (iVar7 != 0) {
                return iVar7;
              }
              sVar12 = sVar12 + 1;
              uVar10 = extraout_ECX_01;
            } while (sVar12 < *(short *)(param_1 + 0xd8));
          }
          iVar6 = FUN_1010c3c0(piVar5[1] - iVar8,iVar6);
          return iVar6;
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_10201f60 @ 10201f60  size=583 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10201f60(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  undefined4 extraout_ECX_01;
  code *pcVar11;
  short sVar12;
  uint uVar13;
  
  piVar5 = param_2;
  iVar6 = FUN_1010c5f0(0x15);
  if (iVar6 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar11 = _wassert_exref;
    uVar13 = param_2[1];
    if ((uVar13 <= (uint)param_2[2]) && (3 < param_2[2] - uVar13)) {
      param_2[1] = uVar13 + 4;
    }
    iVar6 = param_2[1];
    uVar13 = 0;
    do {
      uVar2 = param_2[1];
      if ((uint)param_2[2] < uVar2) {
        (*pcVar11)(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_2[1];
      if ((uVar3 <= (uint)param_2[2]) && (3 < param_2[2] - uVar3)) {
        param_2[1] = uVar3 + 4;
      }
      iVar8 = param_2[1];
      iVar7 = FUN_102012c0(param_2);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar8 = FUN_1010c3c0(param_2[1] - iVar8,uVar2);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar13 = uVar13 + 1;
      pcVar11 = _wassert_exref;
    } while (uVar13 < 6);
    iVar6 = param_2[1] - iVar6;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar6 = -1;
    }
    else {
      iVar8 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
      *(undefined1 *)(uVar1 + iVar8) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar6 >> 0x10);
      *(undefined1 *)(*piVar5 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar5 + 2 + uVar1) = (char)((uint)iVar6 >> 8);
      *(char *)(*piVar5 + 3 + uVar1) = (char)iVar6;
      iVar6 = FUN_1010c5f0(0x22);
      if ((iVar6 == 0) && (iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0xd8)), iVar6 == 0)) {
        sVar12 = *(short *)(param_1 + 0xd8);
        if (sVar12 < 0) {
          return -6;
        }
        if (0x1e < sVar12) {
          return -7;
        }
        if ((0 < sVar12) && (iVar6 = FUN_1010c5f0(0x35), iVar6 == 0)) {
          iVar6 = piVar5[1];
          FUN_1010bf70(extraout_ECX);
          iVar8 = piVar5[1];
          sVar12 = 0;
          uVar10 = extraout_ECX_00;
          if (0 < *(short *)(param_1 + 0xd8)) {
            do {
              iVar7 = piVar5[1];
              FUN_1010bf70(uVar10);
              iVar4 = piVar5[1];
              iVar9 = FUN_10200800(piVar5);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar7 = FUN_1010c3c0(piVar5[1] - iVar4,iVar7);
              if (iVar7 != 0) {
                return iVar7;
              }
              sVar12 = sVar12 + 1;
              uVar10 = extraout_ECX_01;
            } while (sVar12 < *(short *)(param_1 + 0xd8));
          }
          iVar6 = FUN_1010c3c0(piVar5[1] - iVar8,iVar6);
          return iVar6;
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_10202790 @ 10202790  size=410 ===== */
// calls: _wassert
// strings:
//   "[sPFData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[petAvatarCount]"
//   "[petAvatarInfo]"

/* WARNING: Removing unreachable block (ram,0x102027b9) */
/* WARNING: Removing unreachable block (ram,0x102028a3) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[sPFData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[petAvatarCount]""
     ""[petAvatarInfo]"" */

int __thiscall FUN_10202790(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar2 = FUN_1024a140(param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[sPFData]",uVar4,(int)(char)param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_10201900(param_2,iVar2,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[petAvatarCount]",&DAT_11d9e0b4,
                       (int)*(short *)(param_1 + 0xd8));
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 0xd8);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x1e < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[petAvatarInfo]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10200df0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 0xd8));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102033d0 @ 102033d0  size=421 ===== */
// calls: _wassert
// strings:
//   "[index]"
//   "[equipID]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[dataLen]"
//   "[equipData]"

/* WARNING: Removing unreachable block (ram,0x1020340c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[index]""
     ""[equipID]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[dataLen]""
     ""[equipData]"" */

int __thiscall FUN_102033d0(short *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  short *psVar3;
  uint uVar4;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[index]",&DAT_11d9e0b4,(int)*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[equipID]",5,0), iVar1 == 0)) {
    uVar4 = 0;
    psVar3 = param_1 + 1;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)psVar3);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 2;
    } while (uVar4 < 6);
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
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dataLen]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0xd));
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xd);
        if (iVar1 < 0) {
          return -6;
        }
        if (5000 < iVar1) {
          return -7;
        }
        iVar1 = FUN_1024a3b0(extraout_ECX,"[equipData]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0xd)) {
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                   *(undefined1 *)((int)param_1 + iVar1 + 0x1e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0xd));
          }
          iVar1 = FUN_1010c060(param_4);
          return iVar1;
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10205ad0 @ 10205ad0  size=1540 ===== */
// strings:
//   "[farmID]"
//   "[ownerUID]"
//   "%I64u"
//   "[ownerDBID]"
//   "[remark]"
//   "[credit]"
//   "[hits]"
//   "[currentHits]"
//   "[maxGatherCount]"
//   "[autoGatherPetID]"
//   "[autoGatherBCPType]"
//   "[sACPOpen]"
//   " 0x%02x"
//   "[sOFOpen]"
//   "[sBCPData]"
//   "[sPFData]"
//   "[sPlowLandData]"
//   "[lastFarmRefreshTime]"
//   "[farmCanBeGatheredCount]"
//   "0x%02x"

/* [RE-AUTO c0]
   strings:
     ""[farmID]""
     ""[ownerUID]""
     ""%I64u""
     ""[ownerDBID]""
     ""[remark]""
     ""[credit]""
     ""[hits]""
     ""[currentHits]""
     ""[maxGatherCount]""
     ""[autoGatherPetID]"" */

int __thiscall FUN_10205ad0(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  uVar3 = param_4;
  iVar2 = param_3;
  iVar4 = FUN_1024a290(param_2,param_3,param_4,"[farmID]",&DAT_11d9e0b4,*param_1);
  if ((((((iVar4 == 0) &&
         (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[ownerUID]",&DAT_11d9e0b4,param_1[1]),
         iVar4 == 0)) &&
        (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[ownerDBID]","%I64u",param_1[2],param_1[3]),
        iVar4 == 0)) &&
       (((iVar4 = FUN_1024a290(param_2,param_3,param_4,"[remark]",&DAT_11d9e0b4,param_1[4]),
         iVar4 == 0 &&
         (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[credit]",&DAT_11d9e0b4,param_1[5]),
         iVar4 == 0)) &&
        ((iVar4 = FUN_1024a290(param_2,param_3,param_4,"[hits]",&DAT_11d9e0b4,param_1[6]),
         iVar4 == 0 &&
         ((iVar4 = FUN_1024a290(param_2,param_3,param_4,"[currentHits]",&DAT_11d9e0b4,param_1[7]),
          iVar4 == 0 &&
          (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[maxGatherCount]",&DAT_11d9e0b4,param_1[8])
          , iVar4 == 0)))))))) &&
      (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[autoGatherPetID]",&DAT_11d9e0b4,param_1[9]),
      iVar4 == 0)) &&
     ((iVar4 = FUN_1024a290(param_2,param_3,param_4,"[autoGatherBCPType]",&DAT_11d9e0b4,param_1[10])
      , iVar4 == 0 && (iVar4 = FUN_1024a3b0(extraout_ECX,"[sACPOpen]",4,0), iVar4 == 0)))) {
    param_4 = 0;
    do {
      iVar4 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)((int)param_1 + param_4 + 0x2c));
      if (iVar4 != 0) {
        return iVar4;
      }
      param_4 = param_4 + 1;
    } while (param_4 < 4);
    iVar4 = FUN_1010c060(uVar3);
    if ((iVar4 == 0) && (iVar4 = FUN_1024a3b0(extraout_ECX_00,"[sOFOpen]",2,0), iVar4 == 0)) {
      param_4 = 0;
      do {
        iVar4 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)((int)param_1 + param_4 + 0x30));
        if (iVar4 != 0) {
          return iVar4;
        }
        param_4 = param_4 + 1;
      } while (param_4 < 2);
      iVar4 = FUN_1010c060(uVar3);
      if (iVar4 == 0) {
        param_3 = 0;
        do {
          iVar4 = FUN_1024a230(uVar3,"[sBCPData]",param_3,param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = iVar2;
          if (-1 < iVar2) {
            iVar4 = iVar2 + 1;
          }
          iVar4 = FUN_101ff650(param_2,iVar4,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          param_3 = param_3 + 1;
        } while (param_3 < 6);
        param_3 = 0;
        do {
          iVar4 = FUN_1024a230(uVar3,"[sPFData]",param_3,param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = iVar2;
          if (-1 < iVar2) {
            iVar4 = iVar2 + 1;
          }
          iVar4 = FUN_101ffd00(param_2,iVar4,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          param_3 = param_3 + 1;
        } while (param_3 < 6);
        param_3 = 0;
        do {
          iVar4 = FUN_1024a230(uVar3,"[sPlowLandData]",param_3,param_3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = iVar2;
          if (-1 < iVar2) {
            iVar4 = iVar2 + 1;
          }
          iVar4 = FUN_10200470(param_2,iVar4,uVar3);
          if (iVar4 != 0) {
            return iVar4;
          }
          param_3 = param_3 + 1;
        } while (param_3 < 3);
        iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[lastFarmRefreshTime]",&DAT_11d9e0b4,
                             *(undefined4 *)((int)param_1 + 0x101));
        if (((((iVar4 == 0) &&
              (iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[farmCanBeGatheredCount]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0x105)), iVar4 == 0)) &&
             (iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[friendGatherBonus]","0x%02x",
                                   (int)*(char *)((int)param_1 + 0x109)), iVar4 == 0)) &&
            ((iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[safeDataFlag]",&DAT_11d9e0b4,
                                   *(undefined2 *)((int)param_1 + 0x10a)), iVar4 == 0 &&
             (iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[facilityUseFlag]",&DAT_11d9e0b4,
                                   param_1[0x43]), iVar4 == 0)))) &&
           ((iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[farmOpenFlag]",&DAT_11d9e0b4,
                                  *(undefined1 *)(param_1 + 0x44)), iVar4 == 0 &&
            (iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[petAvatarCount]",&DAT_11d9e0b4,
                                  (int)*(short *)((int)param_1 + 0x111)), iVar4 == 0)))) {
          sVar1 = *(short *)((int)param_1 + 0x111);
          if (sVar1 < 0) {
            return -6;
          }
          if (0x1e < sVar1) {
            return -7;
          }
          param_3 = 0;
          if (0 < sVar1) {
            do {
              iVar4 = FUN_1024a230(uVar3,"[petAvatarInfo]",(int)(short)param_3,param_3);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = iVar2;
              if (-1 < iVar2) {
                iVar4 = iVar2 + 1;
              }
              iVar4 = FUN_10200df0(param_2,iVar4,uVar3);
              if (iVar4 != 0) {
                return iVar4;
              }
              param_3 = param_3 + 1;
            } while ((short)param_3 < *(short *)((int)param_1 + 0x111));
          }
          iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[equipShowCount]",&DAT_11d9e0b4,
                               (int)*(short *)((int)param_1 + 0x5e1));
          if (iVar4 == 0) {
            sVar1 = *(short *)((int)param_1 + 0x5e1);
            if (sVar1 < 0) {
              return -6;
            }
            if (0xc < sVar1) {
              return -7;
            }
            param_3 = 0;
            if (0 < sVar1) {
              do {
                iVar4 = FUN_1024a230(uVar3,"[equipShowInfo]",(int)(short)param_3,param_3);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = iVar2;
                if (-1 < iVar2) {
                  iVar4 = iVar2 + 1;
                }
                iVar4 = FUN_102033d0(param_2,iVar4,uVar3);
                if (iVar4 != 0) {
                  return iVar4;
                }
                param_3 = param_3 + 1;
              } while ((short)param_3 < *(short *)((int)param_1 + 0x5e1));
            }
            iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[gender]","0x%02x",
                                 *(undefined1 *)((int)param_1 + 0xf1db));
            if (iVar4 == 0) {
              iVar4 = FUN_1024a290(param_2,iVar2,uVar3,"[skipCutScene]",&DAT_11d9e0b4,
                                   *(undefined1 *)(param_1 + 0x3c77));
            }
          }
        }
      }
    }
  }
  return iVar4;
}



