/* ===== FUN_1023dd50 @ 1023dd50  size=4338 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_1023dd50(int param_1)

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



/* ===== FUN_10241650 @ 10241650  size=3409 ===== */
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

/* WARNING: Removing unreachable block (ram,0x10241660) */
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

void FUN_10241650(undefined4 param_1,int param_2,undefined4 param_3)

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
  return;
}



/* ===== FUN_102426e0 @ 102426e0  size=898 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_102426e0(int param_1)

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
                                                                  FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                               - iVar4,uVar3);
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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



/* ===== FUN_10242a70 @ 10242a70  size=898 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_10242a70(int param_1)

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
                                                                  FUN_1010c3c0(*(int *)(param_1 + 4)
                                                                               - iVar4,uVar3);
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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



/* ===== FUN_10243900 @ 10243900  size=743 ===== */
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

/* WARNING: Removing unreachable block (ram,0x10243910) */
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

void FUN_10243900(undefined4 param_1,int param_2,undefined4 param_3)

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
  return;
}



/* ===== FUN_102444c0 @ 102444c0  size=253 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102444c0(int param_1,int *param_2,int param_3)

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
LAB_10244583:
      iVar2 = FUN_1010ccb0(iVar2);
LAB_1024458a:
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
          goto LAB_10244583;
        }
        iVar2 = FUN_1010d4f0();
        goto LAB_1024458a;
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



/* ===== FUN_102445c0 @ 102445c0  size=253 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_102445c0(int param_1,int *param_2,int param_3)

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
LAB_10244683:
      iVar2 = FUN_1010c870(iVar2);
LAB_1024468a:
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
          goto LAB_10244683;
        }
        iVar2 = FUN_1010d4f0();
        goto LAB_1024468a;
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



/* ===== FUN_102450a0 @ 102450a0  size=227 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[state]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1024510b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[state]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_102450a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x400 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[state]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10244790(param_2,iVar1,param_4);
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



/* ===== FUN_10245ca0 @ 10245ca0  size=455 ===== */
// calls: _wassert
// strings:
//   "[vars]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[length]"
//   "[data]"
//   "[lastUpdate]"

/* WARNING: Removing unreachable block (ram,0x10245cdb) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[vars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[length]""
     ""[data]""
     ""[lastUpdate]"" */

int __thiscall FUN_10245ca0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,&DAT_11da2310,&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[vars]",0xf,0), iVar1 == 0)) {
    uVar4 = 0;
    puVar3 = param_1;
    do {
      puVar3 = puVar3 + 1;
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
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
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[length]",&DAT_11d9e0b4,param_1[0x11]);
      if (iVar1 == 0) {
        iVar1 = param_1[0x11];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x400 < iVar1) {
          return -7;
        }
        iVar1 = FUN_1024a3b0(extraout_ECX,"[data]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[0x11]) {
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                   *(undefined1 *)((int)param_1 + iVar1 + 0x48));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)param_1[0x11]);
          }
          iVar1 = FUN_1010c060(param_4);
          if (iVar1 == 0) {
            iVar1 = FUN_1024a290(param_2,param_3,param_4,"[lastUpdate]",&DAT_11d9f574,param_1[0x112]
                                );
            return iVar1;
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10246740 @ 10246740  size=232 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[data]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x102467ad) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[data]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10246740(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x40 < iVar1) {
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
        iVar1 = FUN_10245ca0(param_2,iVar1,param_4);
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



/* ===== FUN_10247720 @ 10247720  size=227 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[times]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1024778b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[times]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10247720(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[times]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10246e10(param_2,iVar1,param_4);
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



/* ===== FUN_1024a010 @ 1024a010  size=140 ===== */
// calls: _wassert
// strings:
//   "%4d-%02d-%02d"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "%02d:%02d:%02d"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     ""%4d-%02d-%02d""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""%02d:%02d:%02d"" */

int __thiscall FUN_1024a010(short *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1010c010(param_2,"%4d-%02d-%02d",(int)*param_1,(char)param_1[1],
                       *(undefined1 *)((int)param_1 + 3));
  if (iVar1 == 0) {
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      return -1;
    }
    *(undefined1 *)(param_2[1] + *param_2) = 0x20;
    param_2[1] = param_2[1] + 1;
    iVar1 = FUN_1010c010(param_2,"%02d:%02d:%02d",(int)param_1[2],(char)param_1[3],
                         *(undefined1 *)((int)param_1 + 7));
  }
  return iVar1;
}



/* ===== FUN_1024a140 @ 1024a140  size=154 ===== */
// calls: _wassert, memmove
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != str"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* WARNING: Removing unreachable block (ram,0x1024a157) */
/* WARNING: Removing unreachable block (ram,0x1024a1d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != str""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall FUN_1024a140(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x13e);
      }
      if ((uint)(param_1[2] - param_1[1]) < 4) {
        return 0xffffffff;
      }
      memmove((void *)(*param_1 + param_1[1]),&DAT_11d9e044,4);
      param_1[1] = param_1[1] + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}



/* ===== FUN_1024a1e0 @ 1024a1e0  size=79 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall FUN_1024a1e0(undefined4 param_1,undefined4 param_2,char param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x2b);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,&DAT_11da4eb8,param_4,(int)param_3);
  }
  return;
}



/* ===== FUN_1024a230 @ 1024a230  size=82 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __fastcall
FUN_1024a230(undefined4 param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x43);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[%u]%c",param_4,param_5,(int)param_3);
  }
  return;
}



/* ===== FUN_1024a290 @ 1024a290  size=141 ===== */
// calls: _wassert, _vsnprintf
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert, _vsnprintf
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int FUN_1024a290(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x5b);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      uVar2 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_5,
                         &stack0x00000018);
      if ((-1 < (int)uVar2) && (uVar2 < (uint)(param_1[2] - param_1[1]))) {
        param_1[1] = uVar2 + param_1[1];
        iVar1 = FUN_1010c060(param_3);
        return iVar1;
      }
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_1024a320 @ 1024a320  size=144 ===== */
// calls: _wassert, _vsnprintf
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert, _vsnprintf
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: "" */

int FUN_1024a320(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                char *param_6)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x7c);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      uVar2 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_6,
                         &stack0x0000001c);
      if ((-1 < (int)uVar2) && (uVar2 < (uint)(param_1[2] - param_1[1]))) {
        param_1[1] = uVar2 + param_1[1];
        iVar1 = FUN_1010c060(param_3);
        return iVar1;
      }
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_1024a3b0 @ 1024a3b0  size=89 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:"" */

void __fastcall
FUN_1024a3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x9d);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[0 : %I64i]:",param_4,param_5 + -1,param_6 - (uint)(param_5 == 0));
  }
  return;
}



/* ===== FUN_1024a410 @ 1024a410  size=110 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall
FUN_1024a410(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0xaf);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,&DAT_11d9e0dc,param_5);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a480 @ 1024a480  size=113 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: "" */

void __fastcall
FUN_1024a480(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0xcb);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,&DAT_11d9e0dc,param_6);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a500 @ 1024a500  size=252 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp"
//   u"NULL != wstr"
//   " 0x%04x"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrTypeUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp""
     "u"NULL != wstr""
     "" 0x%04x""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __fastcall
FUN_1024a500(int *param_1,undefined4 param_2,undefined1 param_3,int param_4,short *param_5)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0xe7);
  }
  iVar3 = FUN_1024a140(param_2);
  if ((iVar3 == 0) && (iVar3 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4), iVar3 == 0)) {
    if (param_5 == (short *)0x0) {
      _wassert(L"NULL != wstr",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp",0xfa);
    }
    iVar3 = 0;
    sVar2 = *param_5;
    psVar1 = param_5;
    while (sVar2 != 0) {
      psVar1 = psVar1 + 1;
      iVar3 = iVar3 + 1;
      sVar2 = *psVar1;
    }
    uVar5 = 0;
    if (iVar3 != -1) {
      do {
        iVar4 = FUN_1010c010(param_1," 0x%04x",param_5[uVar5]);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < iVar3 + 1U);
    }
    if ((uint)param_1[2] < (uint)param_1[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if ((uint)(param_1[2] - param_1[1]) < 2) {
      return -1;
    }
    *(undefined1 *)(param_1[1] + *param_1) = param_3;
    param_1[1] = param_1[1] + 1;
    *(undefined1 *)(param_1[1] + *param_1) = 0;
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_1024a600 @ 1024a600  size=255 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp"
//   u"NULL != wstr"
//   " 0x%04x"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrTypeUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: ""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp""
     "u"NULL != wstr""
     "" 0x%04x""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __fastcall
FUN_1024a600(int *param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
            short *param_6)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x10b);
  }
  iVar3 = FUN_1024a140(param_2);
  if ((iVar3 == 0) && (iVar3 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5), iVar3 == 0)) {
    if (param_6 == (short *)0x0) {
      _wassert(L"NULL != wstr",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrTypeUtil.cpp",0xfa);
    }
    iVar3 = 0;
    sVar2 = *param_6;
    psVar1 = param_6;
    while (sVar2 != 0) {
      psVar1 = psVar1 + 1;
      iVar3 = iVar3 + 1;
      sVar2 = *psVar1;
    }
    uVar5 = 0;
    if (iVar3 != -1) {
      do {
        iVar4 = FUN_1010c010(param_1," 0x%04x",param_6[uVar5]);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < iVar3 + 1U);
    }
    if ((uint)param_1[2] < (uint)param_1[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if ((uint)(param_1[2] - param_1[1]) < 2) {
      return -1;
    }
    *(undefined1 *)(param_1[1] + *param_1) = param_3;
    param_1[1] = param_1[1] + 1;
    *(undefined1 *)(param_1[1] + *param_1) = 0;
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_1024a700 @ 1024a700  size=138 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%u.%u.%u.%u"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%u.%u.%u.%u"" */

void __fastcall
FUN_1024a700(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x12f);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%u.%u.%u.%u",param_5 & 0xff,param_5 >> 8 & 0xff,
                           param_5 >> 0x10 & 0xff,param_5 >> 0x18);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a790 @ 1024a790  size=141 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "
//   "%u.%u.%u.%u"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: ""
     ""%u.%u.%u.%u"" */

void __fastcall
FUN_1024a790(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,uint param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x14b);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%u.%u.%u.%u",param_6 & 0xff,param_6 >> 8 & 0xff,
                           param_6 >> 0x10 & 0xff,param_6 >> 0x18);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a820 @ 1024a820  size=126 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%02d:%02d:%02d"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%02d:%02d:%02d"" */

void __fastcall
FUN_1024a820(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x167);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%02d:%02d:%02d",(int)(short)param_5,param_5._2_1_,param_5._3_1_)
      ;
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a8a0 @ 1024a8a0  size=129 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "
//   "%02d:%02d:%02d"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: ""
     ""%02d:%02d:%02d"" */

void __fastcall
FUN_1024a8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x183);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%02d:%02d:%02d",(int)(short)param_6,param_6._2_1_,param_6._3_1_)
      ;
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a930 @ 1024a930  size=126 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%4d-%02d-%02d"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%4d-%02d-%02d"" */

void __fastcall
FUN_1024a930(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x19f);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%4d-%02d-%02d",(int)(short)param_5,param_5._2_1_,param_5._3_1_);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024a9b0 @ 1024a9b0  size=129 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "
//   "%4d-%02d-%02d"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: ""
     ""%4d-%02d-%02d"" */

void __fastcall
FUN_1024a9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x1bb);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,"%4d-%02d-%02d",(int)(short)param_6,param_6._2_1_,param_6._3_1_);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024aa40 @ 1024aa40  size=149 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall FUN_1024aa40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x1d7);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1024a010(param_1);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024aae0 @ 1024aae0  size=152 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]: "

/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]: "" */

void __fastcall
FUN_1024aae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",499);
  }
  iVar1 = FUN_1024a140(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,"%s[%u]: ",param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = FUN_1024a010(param_1);
      if (iVar1 == 0) {
        FUN_1010c060(param_3);
      }
    }
  }
  return;
}



/* ===== FUN_1024afa0 @ 1024afa0  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024afa0(int param_1,int *param_2,int param_3)

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
LAB_1024b04f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1024b04f;
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



/* ===== FUN_1024b090 @ 1024b090  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024b090(int param_1,int *param_2,int param_3)

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
LAB_1024b13f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1024b13f;
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



/* ===== FUN_1024b510 @ 1024b510  size=266 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024b510(byte *param_1,int *param_2)

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
      if (100 < *param_1) {
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
            iVar4 = FUN_1024ae30(param_2);
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



/* ===== FUN_1024b620 @ 1024b620  size=266 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024b620(byte *param_1,int *param_2)

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
      if (100 < *param_1) {
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
            iVar4 = FUN_1024ae80(param_2);
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



/* ===== FUN_1024b800 @ 1024b800  size=431 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024b800(char *param_1,int *param_2,int param_3)

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
  param_1[0x385] = '\0';
  param_1[0x386] = '\0';
  param_1[0x387] = '\0';
  param_1[0x388] = '\0';
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
      if ((param_1[0x385] & 1U) == 0) {
        *(uint *)(param_1 + 0x385) = *(uint *)(param_1 + 0x385) | 1;
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
      if ((*(uint *)(param_1 + 0x385) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x385) = *(uint *)(param_1 + 0x385) | 2;
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
        if ((param_3 != 0) && (iVar5 = FUN_1024afa0(piVar2,param_3), iVar5 != 0)) {
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
      } while (bVar7 < 100);
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



/* ===== FUN_1024b9b0 @ 1024b9b0  size=431 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024b9b0(char *param_1,int *param_2,int param_3)

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
  param_1[0x385] = '\0';
  param_1[0x386] = '\0';
  param_1[0x387] = '\0';
  param_1[0x388] = '\0';
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
      if ((param_1[0x385] & 1U) == 0) {
        *(uint *)(param_1 + 0x385) = *(uint *)(param_1 + 0x385) | 1;
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
      if ((*(uint *)(param_1 + 0x385) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x385) = *(uint *)(param_1 + 0x385) | 2;
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
        if ((param_3 != 0) && (iVar5 = FUN_1024b090(piVar2,param_3), iVar5 != 0)) {
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
      } while (bVar7 < 100);
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



/* ===== FUN_1024bc30 @ 1024bc30  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[giftNum]"
//   "[giftList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1024bc8d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[giftNum]""
     ""[giftList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1024bc30(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[giftNum]","0x%02x",*param_1);
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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[giftList]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1024b280(param_2,iVar1,param_4);
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



/* ===== FUN_1024c5c0 @ 1024c5c0  size=398 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1024c5c0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar5;
  uint uVar6;
  
  iVar3 = FUN_1010c5f0(0x25);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar6) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar1)) {
      *(uint *)(param_2 + 4) = uVar1 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    iVar3 = FUN_1024bf30(param_2);
    if ((((iVar3 == 0) && (iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar6), iVar3 == 0))
        && (iVar3 = FUN_1010c5f0(0x31), iVar3 == 0)) &&
       (iVar3 = FUN_101150a0(*(undefined1 *)(param_1 + 0x10)), iVar3 == 0)) {
      if (*(byte *)(param_1 + 0x10) < 0x65) {
        if (*(byte *)(param_1 + 0x10) != 0) {
          iVar3 = FUN_1010c5f0(0x45);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX);
          iVar3 = *(int *)(param_2 + 4);
          uVar6 = 0;
          if (*(char *)(param_1 + 0x10) != '\0') {
            do {
              iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0x11 + uVar6 * 4));
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar5 = (char)uVar6 + 1;
              uVar6 = (uint)bVar5;
            } while (bVar5 < *(byte *)(param_1 + 0x10));
          }
          iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        if (*(byte *)(param_1 + 0x10) < 0x65) {
          if (*(byte *)(param_1 + 0x10) == 0) {
            return 0;
          }
          iVar3 = FUN_1010c5f0(0x55);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = *(int *)(param_2 + 4);
          bVar5 = 0;
          if (*(char *)(param_1 + 0x10) != '\0') {
            do {
              iVar4 = FUN_101150a0(*(undefined1 *)(bVar5 + 0x1a1 + param_1));
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar5 = bVar5 + 1;
            } while (bVar5 < *(byte *)(param_1 + 0x10));
          }
          iVar3 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar3,uVar2);
          return iVar3;
        }
      }
      return -7;
    }
  }
  return iVar3;
}



