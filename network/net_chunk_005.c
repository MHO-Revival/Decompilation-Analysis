/* ===== FUN_101d6660 @ 101d6660  size=5414 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101d6660(int param_1,int *param_2)

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
      iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + uVar6 * 4));
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
      iVar2 = FUN_1010c5f0(0x40);
      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1c)), iVar2 == 0))
            && (iVar2 = FUN_1010c5f0(0x60), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x20)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x70), iVar2 == 0)))) &&
          (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x24)), iVar2 == 0)) &&
         (((iVar2 = FUN_1010c5f0(0x100), iVar2 == 0 &&
           (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x28)), iVar2 == 0)) &&
          (iVar2 = FUN_1010c5f0(0x115), iVar2 == 0)))) {
        iVar2 = piVar1[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = piVar1[1];
        uVar7 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x2c);
        do {
          iVar4 = FUN_1010c560(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 < 7);
        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
        if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x135), iVar2 == 0)) {
          iVar2 = piVar1[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = piVar1[1];
          uVar7 = 0;
          puVar5 = (undefined4 *)(param_1 + 0x48);
          do {
            iVar4 = FUN_1010c560(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 < 7);
          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
          if ((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x140), iVar2 == 0)) &&
              (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 100)), iVar2 == 0)) &&
             (((iVar2 = FUN_1010c5f0(0x240), iVar2 == 0 &&
               (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x66)), iVar2 == 0)) &&
              (iVar2 = FUN_1010c5f0(0x4b5), iVar2 == 0)))) {
            iVar2 = piVar1[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar3 = piVar1[1];
            uVar7 = 0;
            puVar5 = (undefined4 *)(param_1 + 0x6a);
            do {
              iVar4 = FUN_1010c560(*puVar5);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar7 = uVar7 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar7 < 7);
            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
            if ((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x6c0), iVar2 == 0)) &&
                  ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x86)), iVar2 == 0 &&
                   (((iVar2 = FUN_1010c5f0(0x6d0), iVar2 == 0 &&
                     (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x8a)), iVar2 == 0)) &&
                    (iVar2 = FUN_1010c5f0(0x740), iVar2 == 0)))))) &&
                 ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x8e)), iVar2 == 0 &&
                  (iVar2 = FUN_1010c5f0(0x7a0), iVar2 == 0)))) &&
                (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x92)), iVar2 == 0)) &&
               (((iVar2 = FUN_1010c5f0(0x800), iVar2 == 0 &&
                 (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x96)), iVar2 == 0)) &&
                (iVar2 = FUN_1010c5f0(0x885), iVar2 == 0)))) {
              iVar2 = piVar1[1];
              FUN_1010bf70(extraout_ECX_02);
              iVar3 = piVar1[1];
              uVar7 = 0;
              puVar5 = (undefined4 *)(param_1 + 0x9a);
              do {
                iVar4 = FUN_1010c560(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar7 < 7);
              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
              if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x895), iVar2 == 0)) {
                iVar2 = piVar1[1];
                FUN_1010bf70(extraout_ECX_03);
                iVar3 = piVar1[1];
                uVar7 = 0;
                puVar5 = (undefined4 *)(param_1 + 0xb6);
                do {
                  iVar4 = FUN_1010c560(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar7 = uVar7 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar7 < 7);
                iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                if (((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x960), iVar2 == 0)) &&
                     (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xd2)), iVar2 == 0)) &&
                    ((iVar2 = FUN_1010c5f0(0xad0), iVar2 == 0 &&
                     (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xd6)), iVar2 == 0)))) &&
                   (iVar2 = FUN_1010c5f0(0xb05), iVar2 == 0)) {
                  iVar2 = piVar1[1];
                  FUN_1010bf70(extraout_ECX_04);
                  iVar3 = piVar1[1];
                  uVar7 = 0;
                  puVar5 = (undefined4 *)(param_1 + 0xda);
                  do {
                    iVar4 = FUN_1010c560(*puVar5);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    uVar7 = uVar7 + 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar7 < 7);
                  iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                  if ((((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0xc80), iVar2 == 0)) &&
                          (((((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xf6)), iVar2 == 0 &&
                              (((iVar2 = FUN_1010c5f0(0xcc0), iVar2 == 0 &&
                                (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xfa)), iVar2 == 0))
                               && (iVar2 = FUN_1010c5f0(0xcd0), iVar2 == 0)))) &&
                             (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0xfe)), iVar2 == 0 &&
                               (iVar2 = FUN_1010c5f0(0xce0), iVar2 == 0)) &&
                              (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x102)), iVar2 == 0)))
                             ) && ((iVar2 = FUN_1010c5f0(0xcf0), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x106)),
                                   iVar2 == 0)))) &&
                           ((iVar2 = FUN_1010c5f0(0xd00), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x10a)), iVar2 == 0 &&
                              (iVar2 = FUN_1010c5f0(0xd10), iVar2 == 0)) &&
                             (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x10e)), iVar2 == 0))))
                           )))) && ((((iVar2 = FUN_1010c5f0(0xdc0), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x112)),
                                      iVar2 == 0)) &&
                                     ((iVar2 = FUN_1010c5f0(0xdd0), iVar2 == 0 &&
                                      (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x116)),
                                        iVar2 == 0 && (iVar2 = FUN_1010c5f0(0xdf0), iVar2 == 0)) &&
                                       ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x11a)),
                                        iVar2 == 0 &&
                                        ((((iVar2 = FUN_1010c5f0(0xe30), iVar2 == 0 &&
                                           (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x11e)),
                                           iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0xe40), iVar2 == 0)
                                          ) && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                       (param_1 + 0x120)),
                                                iVar2 == 0 &&
                                                (iVar2 = FUN_1010c5f0(0xe50), iVar2 == 0))))))))))))
                                    && (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x122)),
                                       iVar2 == 0)))) &&
                        (((iVar2 = FUN_1010c5f0(0xe80), iVar2 == 0 &&
                          (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x124)), iVar2 == 0)) &&
                         ((((iVar2 = FUN_1010c5f0(0xed0), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x128)), iVar2 == 0 &&
                              (iVar2 = FUN_1010c5f0(0xef0), iVar2 == 0)) &&
                             (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 300)), iVar2 == 0))))
                           && (((iVar2 = FUN_1010c5f0(0xf40), iVar2 == 0 &&
                                (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x130)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0xf50), iVar2 == 0)))) &&
                          (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x134)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0xfc0), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x136)), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c5f0(0xfd0), iVar2 == 0 &&
                              (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x138)), iVar2 == 0))
                             && (iVar2 = FUN_1010c5f0(0xfe0), iVar2 == 0)))))))))))) &&
                       (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x13a)), iVar2 == 0 &&
                         (iVar2 = FUN_1010c5f0(0xff0), iVar2 == 0)) &&
                        (((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x13c)), iVar2 == 0 &&
                            ((((iVar2 = FUN_1010c5f0(0x1000), iVar2 == 0 &&
                               (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x13e)), iVar2 == 0))
                              && ((iVar2 = FUN_1010c5f0(0x1010), iVar2 == 0 &&
                                  ((((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x140)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1020), iVar2 == 0)) &&
                                      (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x142)),
                                      iVar2 == 0)) &&
                                     ((iVar2 = FUN_1010c5f0(0x1030), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x144)),
                                      iVar2 == 0)))) && (iVar2 = FUN_1010c5f0(0x1040), iVar2 == 0))
                                   && ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x146)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1050), iVar2 == 0))))))
                                 )) && (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x148)),
                                       iVar2 == 0)))) &&
                           ((((((iVar2 = FUN_1010c5f0(0x1060), iVar2 == 0 &&
                                (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x14a)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0x1070), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x14c)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1080), iVar2 == 0)))) &&
                             (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x14e)), iVar2 == 0
                               && ((iVar2 = FUN_1010c5f0(0x1090), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x150)),
                                   iVar2 == 0)))) && (iVar2 = FUN_1010c5f0(0x10a0), iVar2 == 0))))
                            && (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x152)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x10b0), iVar2 == 0)) &&
                                (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x154)), iVar2 == 0)
                                ))))) &&
                          (((iVar2 = FUN_1010c5f0(0x10c0), iVar2 == 0 &&
                            (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x156)), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c5f0(0x10d0), iVar2 == 0 &&
                            ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x158)), iVar2 == 0 &&
                             (iVar2 = FUN_1010c5f0(0x10e0), iVar2 == 0)))))))) &&
                         (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x15a)), iVar2 == 0))))))
                      && ((((((((iVar2 = FUN_1010c5f0(0x10f0), iVar2 == 0 &&
                                (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x15c)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0x1100), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x15e)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1110), iVar2 == 0)))) &&
                             ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x160)), iVar2 == 0 &&
                              ((iVar2 = FUN_1010c5f0(0x1120), iVar2 == 0 &&
                               (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x162)), iVar2 == 0))
                              )))) && ((iVar2 = FUN_1010c5f0(0x1130), iVar2 == 0 &&
                                       (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x164)),
                                         iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1140), iVar2 == 0))
                                        && (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x166)),
                                           iVar2 == 0)))))) &&
                           (((iVar2 = FUN_1010c5f0(0x11c0), iVar2 == 0 &&
                             (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x168)), iVar2 == 0))
                            && ((iVar2 = FUN_1010c5f0(0x1250), iVar2 == 0 &&
                                ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x16a)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x1260), iVar2 == 0)))))))) &&
                          (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x16e)), iVar2 == 0 &&
                            ((((iVar2 = FUN_1010c5f0(0x12c0), iVar2 == 0 &&
                               (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x172)), iVar2 == 0))
                              && (iVar2 = FUN_1010c5f0(0x1330), iVar2 == 0)) &&
                             (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x174)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1340), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x176)), iVar2 == 0
                               && ((iVar2 = FUN_1010c5f0(0x1350), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x178)),
                                   iVar2 == 0)))))))))) &&
                           (((((iVar2 = FUN_1010c5f0(0x1360), iVar2 == 0 &&
                               ((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x17a)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1370), iVar2 == 0)) &&
                                 (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x17c)), iVar2 == 0
                                 )) && ((iVar2 = FUN_1010c5f0(0x1420), iVar2 == 0 &&
                                        (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x17e)),
                                        iVar2 == 0)))))) &&
                              (((iVar2 = FUN_1010c5f0(0x1430), iVar2 == 0 &&
                                ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x182)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x1480), iVar2 == 0)))) &&
                               (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x186)), iVar2 == 0))
                              )) && (((iVar2 = FUN_1010c5f0(0x1490), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x188)),
                                      iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x14a0), iVar2 == 0))))
                            && ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x18a)), iVar2 == 0
                                && (iVar2 = FUN_1010c5f0(0x14b0), iVar2 == 0)))))))))) &&
                     (((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x18c)), iVar2 == 0 &&
                         ((iVar2 = FUN_1010c5f0(0x14c0), iVar2 == 0 &&
                          (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x18e)), iVar2 == 0)))) &&
                        (iVar2 = FUN_1010c5f0(0x14d0), iVar2 == 0)) &&
                       (((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 400)), iVar2 == 0 &&
                           (iVar2 = FUN_1010c5f0(0x14e0), iVar2 == 0)) &&
                          (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x192)), iVar2 == 0)) &&
                         (((iVar2 = FUN_1010c5f0(0x14f0), iVar2 == 0 &&
                           (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x194)), iVar2 == 0)) &&
                          ((iVar2 = FUN_1010c5f0(0x1500), iVar2 == 0 &&
                           ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x196)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1510), iVar2 == 0)))))))) &&
                        (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x198)), iVar2 == 0)))) &&
                      (((((((iVar2 = FUN_1010c5f0(0x1520), iVar2 == 0 &&
                            (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x19a)), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c5f0(0x1530), iVar2 == 0)) &&
                          ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x19c)), iVar2 == 0 &&
                           (iVar2 = FUN_1010c5f0(0x1540), iVar2 == 0)))) &&
                         (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x19e)), iVar2 == 0)) &&
                        (((iVar2 = FUN_1010c5f0(0x1550), iVar2 == 0 &&
                          (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1a0)), iVar2 == 0)) &&
                         ((iVar2 = FUN_1010c5f0(0x1560), iVar2 == 0 &&
                          (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1a2)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1570), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1a4)), iVar2 == 0))))))
                        )) && ((((((iVar2 = FUN_1010c5f0(0x1580), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1a6)),
                                   iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x1590), iVar2 == 0)) &&
                                 ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1a8)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x15a0), iVar2 == 0)))) &&
                                ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1aa)), iVar2 == 0
                                 && (((iVar2 = FUN_1010c5f0(0x15b0), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1ac)),
                                      iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x15c0), iVar2 == 0)))))
                                ) && (((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1ae)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x15d0), iVar2 == 0)) &&
                                      ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1b0)),
                                       iVar2 == 0 &&
                                       (((iVar2 = FUN_1010c5f0(0x15e0), iVar2 == 0 &&
                                         (iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1b2)),
                                         iVar2 == 0)) &&
                                        ((iVar2 = FUN_1010c5f0(0x1600), iVar2 == 0 &&
                                         ((((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x1b4)),
                                            iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1670), iVar2 == 0)
                                            ) && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                        (param_1 + 0x1b6)),
                                                 iVar2 == 0)) &&
                                          (iVar2 = FUN_1010c5f0(0x1685), iVar2 == 0)))))))))))))))))
                     ) {
                    iVar2 = piVar1[1];
                    FUN_1010bf70(extraout_ECX_05);
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
                    if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1695), iVar2 == 0)) {
                      iVar2 = piVar1[1];
                      FUN_1010bf70(extraout_ECX_06);
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
                      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x16b0), iVar2 == 0)) &&
                            ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1f2)), iVar2 == 0 &&
                             (((iVar2 = FUN_1010c5f0(0x1720), iVar2 == 0 &&
                               (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1f6)), iVar2 == 0))
                              && (iVar2 = FUN_1010c5f0(0x1790), iVar2 == 0)))))) &&
                           ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1fa)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x17a0), iVar2 == 0)))) &&
                          ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1fe)), iVar2 == 0 &&
                           (((iVar2 = FUN_1010c5f0(0x17f0), iVar2 == 0 &&
                             (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x202)), iVar2 == 0))
                            && ((iVar2 = FUN_1010c5f0(0x1810), iVar2 == 0 &&
                                (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x206)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1820), iVar2 == 0)) &&
                                 (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x20a)), iVar2 == 0
                                 )))))))))) &&
                         ((((iVar2 = FUN_1010c5f0(0x1830), iVar2 == 0 &&
                            (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x20e)), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c5f0(0x1920), iVar2 == 0)) &&
                          (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x212)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1930), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x216)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1950), iVar2 == 0)))))))) {
                        iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x21a));
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
  return iVar2;
}



/* ===== FUN_101d7ba0 @ 101d7ba0  size=5414 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101d7ba0(int param_1,int *param_2)

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
         (((iVar2 = FUN_1010c5f0(0x103), iVar2 == 0 &&
           (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x28)), iVar2 == 0)) &&
          (iVar2 = FUN_1010c5f0(0x115), iVar2 == 0)))) {
        iVar2 = piVar1[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = piVar1[1];
        uVar7 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x2c);
        do {
          iVar4 = FUN_1010c190(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 < 7);
        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
        if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x135), iVar2 == 0)) {
          iVar2 = piVar1[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = piVar1[1];
          uVar7 = 0;
          puVar5 = (undefined4 *)(param_1 + 0x48);
          do {
            iVar4 = FUN_1010c190(*puVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 < 7);
          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
          if ((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x142), iVar2 == 0)) &&
              (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 100)), iVar2 == 0)) &&
             (((iVar2 = FUN_1010c5f0(0x243), iVar2 == 0 &&
               (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x66)), iVar2 == 0)) &&
              (iVar2 = FUN_1010c5f0(0x4b5), iVar2 == 0)))) {
            iVar2 = piVar1[1];
            FUN_1010bf70(extraout_ECX_01);
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
            if ((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x6c3), iVar2 == 0)) &&
                  ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x86)), iVar2 == 0 &&
                   (((iVar2 = FUN_1010c5f0(0x6d3), iVar2 == 0 &&
                     (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x8a)), iVar2 == 0)) &&
                    (iVar2 = FUN_1010c5f0(0x743), iVar2 == 0)))))) &&
                 ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x8e)), iVar2 == 0 &&
                  (iVar2 = FUN_1010c5f0(0x7a3), iVar2 == 0)))) &&
                (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x92)), iVar2 == 0)) &&
               (((iVar2 = FUN_1010c5f0(0x803), iVar2 == 0 &&
                 (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x96)), iVar2 == 0)) &&
                (iVar2 = FUN_1010c5f0(0x885), iVar2 == 0)))) {
              iVar2 = piVar1[1];
              FUN_1010bf70(extraout_ECX_02);
              iVar3 = piVar1[1];
              uVar7 = 0;
              puVar5 = (undefined4 *)(param_1 + 0x9a);
              do {
                iVar4 = FUN_1010c190(*puVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar7 < 7);
              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
              if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x895), iVar2 == 0)) {
                iVar2 = piVar1[1];
                FUN_1010bf70(extraout_ECX_03);
                iVar3 = piVar1[1];
                uVar7 = 0;
                puVar5 = (undefined4 *)(param_1 + 0xb6);
                do {
                  iVar4 = FUN_1010c190(*puVar5);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  uVar7 = uVar7 + 1;
                  puVar5 = puVar5 + 1;
                } while (uVar7 < 7);
                iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                if (((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x963), iVar2 == 0)) &&
                     (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd2)), iVar2 == 0)) &&
                    ((iVar2 = FUN_1010c5f0(0xad3), iVar2 == 0 &&
                     (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xd6)), iVar2 == 0)))) &&
                   (iVar2 = FUN_1010c5f0(0xb05), iVar2 == 0)) {
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
                  if ((((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0xc83), iVar2 == 0)) &&
                          (((((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xf6)), iVar2 == 0 &&
                              (((iVar2 = FUN_1010c5f0(0xcc3), iVar2 == 0 &&
                                (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xfa)), iVar2 == 0))
                               && (iVar2 = FUN_1010c5f0(0xcd3), iVar2 == 0)))) &&
                             (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0xfe)), iVar2 == 0 &&
                               (iVar2 = FUN_1010c5f0(0xce3), iVar2 == 0)) &&
                              (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x102)), iVar2 == 0)))
                             ) && ((iVar2 = FUN_1010c5f0(0xcf3), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x106)),
                                   iVar2 == 0)))) &&
                           ((iVar2 = FUN_1010c5f0(0xd03), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x10a)), iVar2 == 0 &&
                              (iVar2 = FUN_1010c5f0(0xd13), iVar2 == 0)) &&
                             (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x10e)), iVar2 == 0))))
                           )))) && ((((iVar2 = FUN_1010c5f0(0xdc3), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x112)),
                                      iVar2 == 0)) &&
                                     ((iVar2 = FUN_1010c5f0(0xdd3), iVar2 == 0 &&
                                      (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x116)),
                                        iVar2 == 0 && (iVar2 = FUN_1010c5f0(0xdf3), iVar2 == 0)) &&
                                       ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x11a)),
                                        iVar2 == 0 &&
                                        ((((iVar2 = FUN_1010c5f0(0xe32), iVar2 == 0 &&
                                           (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x11e)),
                                           iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0xe42), iVar2 == 0)
                                          ) && ((iVar2 = FUN_1010c120(*(undefined2 *)
                                                                       (param_1 + 0x120)),
                                                iVar2 == 0 &&
                                                (iVar2 = FUN_1010c5f0(0xe52), iVar2 == 0))))))))))))
                                    && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x122)),
                                       iVar2 == 0)))) &&
                        (((iVar2 = FUN_1010c5f0(0xe83), iVar2 == 0 &&
                          (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x124)), iVar2 == 0)) &&
                         ((((iVar2 = FUN_1010c5f0(0xed3), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x128)), iVar2 == 0 &&
                              (iVar2 = FUN_1010c5f0(0xef3), iVar2 == 0)) &&
                             (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 300)), iVar2 == 0))))
                           && (((iVar2 = FUN_1010c5f0(0xf43), iVar2 == 0 &&
                                (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x130)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0xf52), iVar2 == 0)))) &&
                          (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x134)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0xfc2), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x136)), iVar2 == 0 &&
                            (((iVar2 = FUN_1010c5f0(0xfd2), iVar2 == 0 &&
                              (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x138)), iVar2 == 0))
                             && (iVar2 = FUN_1010c5f0(0xfe2), iVar2 == 0)))))))))))) &&
                       (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x13a)), iVar2 == 0 &&
                         (iVar2 = FUN_1010c5f0(0xff2), iVar2 == 0)) &&
                        (((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x13c)), iVar2 == 0 &&
                            ((((iVar2 = FUN_1010c5f0(0x1002), iVar2 == 0 &&
                               (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x13e)), iVar2 == 0))
                              && ((iVar2 = FUN_1010c5f0(0x1012), iVar2 == 0 &&
                                  ((((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x140)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1022), iVar2 == 0)) &&
                                      (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x142)),
                                      iVar2 == 0)) &&
                                     ((iVar2 = FUN_1010c5f0(0x1032), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x144)),
                                      iVar2 == 0)))) && (iVar2 = FUN_1010c5f0(0x1042), iVar2 == 0))
                                   && ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x146)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1052), iVar2 == 0))))))
                                 )) && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x148)),
                                       iVar2 == 0)))) &&
                           ((((((iVar2 = FUN_1010c5f0(0x1062), iVar2 == 0 &&
                                (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x14a)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0x1072), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x14c)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1082), iVar2 == 0)))) &&
                             (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x14e)), iVar2 == 0
                               && ((iVar2 = FUN_1010c5f0(0x1092), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x150)),
                                   iVar2 == 0)))) && (iVar2 = FUN_1010c5f0(0x10a2), iVar2 == 0))))
                            && (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x152)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x10b2), iVar2 == 0)) &&
                                (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x154)), iVar2 == 0)
                                ))))) &&
                          (((iVar2 = FUN_1010c5f0(0x10c2), iVar2 == 0 &&
                            (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x156)), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c5f0(0x10d2), iVar2 == 0 &&
                            ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x158)), iVar2 == 0 &&
                             (iVar2 = FUN_1010c5f0(0x10e2), iVar2 == 0)))))))) &&
                         (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x15a)), iVar2 == 0))))))
                      && ((((((((iVar2 = FUN_1010c5f0(0x10f2), iVar2 == 0 &&
                                (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x15c)), iVar2 == 0)
                                ) && (iVar2 = FUN_1010c5f0(0x1102), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x15e)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1112), iVar2 == 0)))) &&
                             ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x160)), iVar2 == 0 &&
                              ((iVar2 = FUN_1010c5f0(0x1122), iVar2 == 0 &&
                               (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x162)), iVar2 == 0))
                              )))) && ((iVar2 = FUN_1010c5f0(0x1132), iVar2 == 0 &&
                                       (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x164)),
                                         iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1142), iVar2 == 0))
                                        && (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x166)),
                                           iVar2 == 0)))))) &&
                           (((iVar2 = FUN_1010c5f0(0x11c2), iVar2 == 0 &&
                             (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x168)), iVar2 == 0))
                            && ((iVar2 = FUN_1010c5f0(0x1253), iVar2 == 0 &&
                                ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x16a)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x1263), iVar2 == 0)))))))) &&
                          (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x16e)), iVar2 == 0 &&
                            ((((iVar2 = FUN_1010c5f0(0x12c2), iVar2 == 0 &&
                               (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x172)), iVar2 == 0))
                              && (iVar2 = FUN_1010c5f0(0x1332), iVar2 == 0)) &&
                             (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x174)), iVar2 == 0
                               && (iVar2 = FUN_1010c5f0(0x1342), iVar2 == 0)) &&
                              ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x176)), iVar2 == 0
                               && ((iVar2 = FUN_1010c5f0(0x1352), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x178)),
                                   iVar2 == 0)))))))))) &&
                           (((((iVar2 = FUN_1010c5f0(0x1362), iVar2 == 0 &&
                               ((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x17a)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1372), iVar2 == 0)) &&
                                 (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x17c)), iVar2 == 0
                                 )) && ((iVar2 = FUN_1010c5f0(0x1423), iVar2 == 0 &&
                                        (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x17e)),
                                        iVar2 == 0)))))) &&
                              (((iVar2 = FUN_1010c5f0(0x1433), iVar2 == 0 &&
                                ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x182)), iVar2 == 0
                                 && (iVar2 = FUN_1010c5f0(0x1482), iVar2 == 0)))) &&
                               (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x186)), iVar2 == 0))
                              )) && (((iVar2 = FUN_1010c5f0(0x1492), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x188)),
                                      iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x14a2), iVar2 == 0))))
                            && ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x18a)), iVar2 == 0
                                && (iVar2 = FUN_1010c5f0(0x14b2), iVar2 == 0)))))))))) &&
                     (((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x18c)), iVar2 == 0 &&
                         ((iVar2 = FUN_1010c5f0(0x14c2), iVar2 == 0 &&
                          (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x18e)), iVar2 == 0)))) &&
                        (iVar2 = FUN_1010c5f0(0x14d2), iVar2 == 0)) &&
                       (((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 400)), iVar2 == 0 &&
                           (iVar2 = FUN_1010c5f0(0x14e2), iVar2 == 0)) &&
                          (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x192)), iVar2 == 0)) &&
                         (((iVar2 = FUN_1010c5f0(0x14f2), iVar2 == 0 &&
                           (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x194)), iVar2 == 0)) &&
                          ((iVar2 = FUN_1010c5f0(0x1502), iVar2 == 0 &&
                           ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x196)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1512), iVar2 == 0)))))))) &&
                        (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x198)), iVar2 == 0)))) &&
                      (((((((iVar2 = FUN_1010c5f0(0x1522), iVar2 == 0 &&
                            (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x19a)), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c5f0(0x1532), iVar2 == 0)) &&
                          ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x19c)), iVar2 == 0 &&
                           (iVar2 = FUN_1010c5f0(0x1542), iVar2 == 0)))) &&
                         (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x19e)), iVar2 == 0)) &&
                        (((iVar2 = FUN_1010c5f0(0x1552), iVar2 == 0 &&
                          (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1a0)), iVar2 == 0)) &&
                         ((iVar2 = FUN_1010c5f0(0x1562), iVar2 == 0 &&
                          (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1a2)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1572), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1a4)), iVar2 == 0))))))
                        )) && ((((((iVar2 = FUN_1010c5f0(0x1582), iVar2 == 0 &&
                                   (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1a6)),
                                   iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x1592), iVar2 == 0)) &&
                                 ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1a8)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x15a2), iVar2 == 0)))) &&
                                ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1aa)), iVar2 == 0
                                 && (((iVar2 = FUN_1010c5f0(0x15b2), iVar2 == 0 &&
                                      (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1ac)),
                                      iVar2 == 0)) && (iVar2 = FUN_1010c5f0(0x15c2), iVar2 == 0)))))
                                ) && (((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1ae)),
                                       iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x15d2), iVar2 == 0)) &&
                                      ((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1b0)),
                                       iVar2 == 0 &&
                                       (((iVar2 = FUN_1010c5f0(0x15e2), iVar2 == 0 &&
                                         (iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1b2)),
                                         iVar2 == 0)) &&
                                        ((iVar2 = FUN_1010c5f0(0x1602), iVar2 == 0 &&
                                         ((((iVar2 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1b4)),
                                            iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1673), iVar2 == 0)
                                            ) && (iVar2 = FUN_1010c190(*(undefined4 *)
                                                                        (param_1 + 0x1b6)),
                                                 iVar2 == 0)) &&
                                          (iVar2 = FUN_1010c5f0(0x1685), iVar2 == 0)))))))))))))))))
                     ) {
                    iVar2 = piVar1[1];
                    FUN_1010bf70(extraout_ECX_05);
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
                    if ((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x1695), iVar2 == 0)) {
                      iVar2 = piVar1[1];
                      FUN_1010bf70(extraout_ECX_06);
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
                      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x16b3), iVar2 == 0)) &&
                            ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1f2)), iVar2 == 0 &&
                             (((iVar2 = FUN_1010c5f0(0x1723), iVar2 == 0 &&
                               (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1f6)), iVar2 == 0))
                              && (iVar2 = FUN_1010c5f0(0x1793), iVar2 == 0)))))) &&
                           ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1fa)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x17a3), iVar2 == 0)))) &&
                          ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1fe)), iVar2 == 0 &&
                           (((iVar2 = FUN_1010c5f0(0x17f3), iVar2 == 0 &&
                             (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x202)), iVar2 == 0))
                            && ((iVar2 = FUN_1010c5f0(0x1813), iVar2 == 0 &&
                                (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x206)),
                                  iVar2 == 0 && (iVar2 = FUN_1010c5f0(0x1823), iVar2 == 0)) &&
                                 (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20a)), iVar2 == 0
                                 )))))))))) &&
                         ((((iVar2 = FUN_1010c5f0(0x1833), iVar2 == 0 &&
                            (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x20e)), iVar2 == 0)) &&
                           (iVar2 = FUN_1010c5f0(0x1923), iVar2 == 0)) &&
                          (((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x212)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1933), iVar2 == 0)) &&
                           ((iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x216)), iVar2 == 0 &&
                            (iVar2 = FUN_1010c5f0(0x1953), iVar2 == 0)))))))) {
                        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 0x21a));
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
  return iVar2;
}



/* ===== FUN_101de490 @ 101de490  size=10727 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101de490(int param_1,int *param_2)

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
      iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + uVar6 * 4));
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
      iVar2 = FUN_1010c5f0(0x40);
      if ((((((iVar2 == 0) && (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1c)), iVar2 == 0))
            && (iVar2 = FUN_1010c5f0(0x60), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x20)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x70), iVar2 == 0)))) &&
          (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x24)), iVar2 == 0)) &&
         (((((iVar2 = FUN_1010c5f0(0x80), iVar2 == 0 &&
             (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x28)), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0x90), iVar2 == 0 &&
             (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x2c)), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0xa0), iVar2 == 0)) &&
              (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x30)), iVar2 == 0)))))) &&
           (((iVar2 = FUN_1010c5f0(0xb0), iVar2 == 0 &&
             (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x34)), iVar2 == 0)) &&
            ((iVar2 = FUN_1010c5f0(0xc0), iVar2 == 0 &&
             (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x38)), iVar2 == 0 &&
               (iVar2 = FUN_1010c5f0(0xd0), iVar2 == 0)) &&
              ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x3c)), iVar2 == 0 &&
               (((iVar2 = FUN_1010c5f0(0xe0), iVar2 == 0 &&
                 (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x40)), iVar2 == 0)) &&
                (iVar2 = FUN_1010c5f0(0xf0), iVar2 == 0)))))))))))) &&
          (((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x44)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x100), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 0x48)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x115), iVar2 == 0)))))))) {
        iVar2 = piVar1[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = piVar1[1];
        uVar7 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x4c);
        do {
          iVar4 = FUN_1010c560(*puVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 < 7);
        iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
        if (((iVar2 == 0) && (iVar2 = FUN_1010c5f0(0x140), iVar2 == 0)) &&
           ((iVar2 = FUN_1010c430(*(undefined2 *)(param_1 + 0x68)), iVar2 == 0 &&
            (iVar2 = FUN_1010c5f0(0x165), iVar2 == 0)))) {
          iVar2 = piVar1[1];
          FUN_1010bf70(extraout_ECX_00);
          iVar3 = piVar1[1];
          uVar7 = 0;
          puVar5 = (undefined4 *)(param_1 + 0x6a);
          do {
            iVar4 = FUN_1010c560(*puVar5);
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
              iVar4 = FUN_1010c560(*puVar5);
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
                iVar4 = FUN_1010c560(*puVar5);
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
                  iVar4 = FUN_1010c560(*puVar5);
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
                    iVar4 = FUN_1010c560(*puVar5);
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
                          iVar4 = FUN_1010c560(*puVar5);
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
                            iVar4 = FUN_1010c560(*puVar5);
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
                              iVar4 = FUN_1010c560(*puVar5);
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
                                iVar4 = FUN_1010c560(*puVar5);
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
                                  iVar4 = FUN_1010c560(*puVar5);
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
                                    iVar4 = FUN_1010c560(*puVar5);
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
                                      iVar4 = FUN_1010c560(*puVar5);
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
                                        iVar4 = FUN_1010c560(*puVar5);
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
                                          iVar4 = FUN_1010c560(*puVar5);
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
                                            iVar4 = FUN_1010c560(*puVar5);
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
                                              iVar4 = FUN_1010c560(*puVar5);
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
                                                iVar4 = FUN_1010c560(*puVar5);
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
                                                  iVar4 = FUN_1010c560(*puVar5);
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
                                                    iVar4 = FUN_1010c560(*puVar5);
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
                                                      iVar4 = FUN_1010c560(*puVar5);
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
                                                        iVar4 = FUN_1010c560(*puVar5);
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
                                                          iVar4 = FUN_1010c560(*puVar5);
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
                                                            iVar4 = FUN_1010c560(*puVar5);
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
                                                              iVar4 = FUN_1010c560(*puVar5);
                                                              if (iVar4 != 0) {
                                                                return iVar4;
                                                              }
                                                              uVar7 = uVar7 + 1;
                                                              puVar5 = puVar5 + 1;
                                                            } while (uVar7 < 7);
                                                            iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                                 iVar2);
                                                            if ((((iVar2 == 0) &&
                                                                 (iVar2 = FUN_1010c5f0(0x580),
                                                                 iVar2 == 0)) &&
                                                                (iVar2 = FUN_1010c560(*(undefined4 *
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
                                                                iVar4 = FUN_1010c560(*puVar5);
                                                                if (iVar4 != 0) {
                                                                  return iVar4;
                                                                }
                                                                uVar7 = uVar7 + 1;
                                                                puVar5 = puVar5 + 1;
                                                              } while (uVar7 < 7);
                                                              iVar2 = FUN_1010c3c0(piVar1[1] - iVar3
                                                                                   ,iVar2);
                                                              if (((((((iVar2 == 0) &&
                                                                      (iVar2 = FUN_1010c5f0(0x5a0),
                                                                      iVar2 == 0)) &&
                                                                     ((iVar2 = FUN_1010c560(*(
                                                  undefined4 *)(param_1 + 0x362)), iVar2 == 0 &&
                                                  ((iVar2 = FUN_1010c5f0(0x5b0), iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                          (param_1 + 0x366)),
                                                   iVar2 == 0)))))) &&
                                                  (iVar2 = FUN_1010c5f0(0x5c0), iVar2 == 0)) &&
                                                  ((((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                            (param_1 + 0x36a)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0x5d0), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                           (param_1 + 0x36e)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c5f0(0x5e0), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                           (param_1 + 0x372)),
                                                    iVar2 == 0)))))) &&
                                                  ((((iVar2 = FUN_1010c5f0(0x5f0), iVar2 == 0 &&
                                                     ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x376)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x600), iVar2 == 0))))
                                                    && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x37a)),
                                                       iVar2 == 0)) &&
                                                   ((((iVar2 = FUN_1010c5f0(0x610), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x37e)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0x620), iVar2 == 0)) &&
                                                    (((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x382)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x630), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x386)),
                                                      iVar2 == 0 &&
                                                      ((iVar2 = FUN_1010c5f0(0x6a0), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x38a)),
                                                       iVar2 == 0)))))))))))) &&
                                                  ((iVar2 = FUN_1010c5f0(0x6b0), iVar2 == 0 &&
                                                   (((((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x38e)),
                                                       iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c5f0(0x6c0), iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x392)),
                                                      iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c5f0(0x6d0), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x396)),
                                                      iVar2 == 0)))) &&
                                                    (iVar2 = FUN_1010c5f0(0x865), iVar2 == 0)))))) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x39a);
                                                    do {
                                                      iVar4 = FUN_1010c560(*puVar5);
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
                                                        iVar4 = FUN_1010c560(*puVar5);
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
                                                          iVar4 = FUN_1010c560(*puVar5);
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
                                                            iVar4 = FUN_1010c560(*puVar5);
                                                            if (iVar4 != 0) {
                                                              return iVar4;
                                                            }
                                                            uVar7 = uVar7 + 1;
                                                            puVar5 = puVar5 + 1;
                                                          } while (uVar7 < 7);
                                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                               iVar2);
                                                          if (((((iVar2 == 0) &&
                                                                (iVar2 = FUN_1010c5f0(0xad0),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x40a)),
                                                               iVar2 == 0)) &&
                                                              (((((iVar2 = FUN_1010c5f0(0xae0),
                                                                  iVar2 == 0 &&
                                                                  (iVar2 = FUN_1010c560(*(undefined4
                                                                                          *)(param_1
                                                                                            + 0x40e)
                                                                                       ), iVar2 == 0
                                                                  )) && ((iVar2 = FUN_1010c5f0(0xaf0
                                                  ), iVar2 == 0 &&
                                                  ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                          (param_1 + 0x412)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0xb10), iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                          (param_1 + 0x416)),
                                                   iVar2 == 0 &&
                                                   (((((iVar2 = FUN_1010c5f0(0xb20), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x41a)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0xb30), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x41e)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0xb40), iVar2 == 0))))
                                                    && ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                               (param_1 + 0x422)),
                                                        iVar2 == 0 &&
                                                        ((iVar2 = FUN_1010c5f0(0xc80), iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                (param_1 + 0x426)),
                                                         iVar2 == 0)))))))))) &&
                                                  (iVar2 = FUN_1010c5f0(0xc90), iVar2 == 0)))) &&
                                                  ((((((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x42a)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0xca0), iVar2 == 0))
                                                        && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                  (param_1 + 0x42c))
                                                           , iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0xcb0), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                               (param_1 + 0x430)),
                                                        iVar2 == 0)))) &&
                                                      (iVar2 = FUN_1010c5f0(0xcc0), iVar2 == 0)) &&
                                                     ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x434)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0xcd0), iVar2 == 0))))
                                                    && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x438)),
                                                       iVar2 == 0)) &&
                                                   ((((iVar2 = FUN_1010c5f0(0xce0), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                             (param_1 + 0x43c)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0xcf0), iVar2 == 0)) &&
                                                    ((((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x440)),
                                                       iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c5f0(0xd00), iVar2 == 0)) &&
                                                      ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                              (param_1 + 0x444)),
                                                       iVar2 == 0 &&
                                                       ((iVar2 = FUN_1010c5f0(0xd10), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c560(*(undefined4 *)
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
                                                      iVar4 = FUN_1010c560(*puVar5);
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
                                                           (iVar2 = FUN_1010c5f0(0xd40), iVar2 == 0)
                                                           ) && (iVar2 = FUN_1010c560(*(undefined4 *
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
                                                             (iVar2 = FUN_1010c5f0(0xdc0),
                                                             iVar2 == 0)) &&
                                                            ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                    (param_1 + 0x4a4
                                                                                    )), iVar2 == 0
                                                             && ((iVar2 = FUN_1010c5f0(0xdd0),
                                                                 iVar2 == 0 &&
                                                                 (iVar2 = FUN_1010c560(*(undefined4
                                                                                         *)(param_1 
                                                  + 0x4a8)), iVar2 == 0)))))) &&
                                                  (iVar2 = FUN_1010c5f0(0xde5), iVar2 == 0)) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_34);
                                                    iVar3 = piVar1[1];
                                                    puVar5 = (undefined4 *)(param_1 + 0x4ac);
                                                    uVar7 = 0;
                                                    do {
                                                      iVar4 = FUN_1010c560(*puVar5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar7 = uVar7 + 1;
                                                      puVar5 = puVar5 + 1;
                                                    } while (uVar7 < 7);
                                                    iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                    if (((((iVar2 == 0) &&
                                                          (iVar2 = FUN_1010c5f0(0xdf0), iVar2 == 0))
                                                         && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                   (param_1 + 0x4c8)
                                                                                 ), iVar2 == 0)) &&
                                                        ((iVar2 = FUN_1010c5f0(0xe00), iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                (param_1 + 0x4cc)),
                                                         iVar2 == 0)))) &&
                                                       (iVar2 = FUN_1010c5f0(0xe25), iVar2 == 0)) {
                                                      iVar2 = piVar1[1];
                                                      FUN_1010bf70(extraout_ECX_35);
                                                      iVar3 = piVar1[1];
                                                      uVar7 = 0;
                                                      puVar5 = (undefined4 *)(param_1 + 0x4d0);
                                                      do {
                                                        iVar4 = FUN_1010c560(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((iVar2 == 0) &&
                                                           (iVar2 = FUN_1010c5f0(0xe30), iVar2 == 0)
                                                           ) && ((iVar2 = FUN_1010c430(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x4ec)), iVar2 == 0 &&
                                                  (((iVar2 = FUN_1010c5f0(0xe40), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                           (param_1 + 0x4ee)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1010c5f0(0xe50), iVar2 == 0)))))) &&
                                                  ((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x4f0)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0xe80), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                           (param_1 + 0x4f2)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1010c5f0(0xe95), iVar2 == 0)))) {
                                                    iVar2 = piVar1[1];
                                                    FUN_1010bf70(extraout_ECX_36);
                                                    iVar3 = piVar1[1];
                                                    uVar7 = 0;
                                                    puVar5 = (undefined4 *)(param_1 + 0x4f6);
                                                    do {
                                                      iVar4 = FUN_1010c560(*puVar5);
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
                                                        iVar4 = FUN_1010c560(*puVar5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar7 = uVar7 + 1;
                                                        puVar5 = puVar5 + 1;
                                                      } while (uVar7 < 7);
                                                      iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,iVar2);
                                                      if ((((((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0xeb0),
                                                             iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                   (param_1 + 0x52e)
                                                                                 ), iVar2 == 0)) &&
                                                           ((iVar2 = FUN_1010c5f0(0xec0), iVar2 == 0
                                                            && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x532)),
                                                               iVar2 == 0)))) &&
                                                          (((iVar2 = FUN_1010c5f0(0xed0), iVar2 == 0
                                                            && ((iVar2 = FUN_1010c560(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x536)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0xee0),
                                                                iVar2 == 0)))) &&
                                                           (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                  (param_1 + 0x53a))
                                                           , iVar2 == 0)))) &&
                                                         (((((((((((iVar2 = FUN_1010c5f0(0xef0),
                                                                   iVar2 == 0 &&
                                                                   (iVar2 = FUN_1010c560(*(
                                                  undefined4 *)(param_1 + 0x53e)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1010c5f0(0xf00), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                          (param_1 + 0x542)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0xf10), iVar2 == 0)))) &&
                                                  ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                          (param_1 + 0x546)),
                                                   iVar2 == 0 &&
                                                   ((iVar2 = FUN_1010c5f0(0xf20), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                           (param_1 + 0x54a)),
                                                    iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c5f0(0xf30), iVar2 == 0 &&
                                                   (((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                            (param_1 + 0x54e)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c5f0(0xf40), iVar2 == 0)) &&
                                                    (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                           (param_1 + 0x552)),
                                                    iVar2 == 0)))))) &&
                                                  (((((((iVar2 = FUN_1010c5f0(0xf50), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x556)),
                                                        iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0xfc0), iVar2 == 0 &&
                                                        ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x558)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0xfd0), iVar2 == 0)))
                                                        ))) && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x55a)),
                                                               iVar2 == 0)) &&
                                                     ((((iVar2 = FUN_1010c5f0(0xfe0), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x55c)),
                                                        iVar2 == 0)) &&
                                                       (iVar2 = FUN_1010c5f0(0xff0), iVar2 == 0)) &&
                                                      (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x55e)),
                                                        iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c5f0(0x1000), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                  (param_1 + 0x560))
                                                           , iVar2 == 0 &&
                                                           ((iVar2 = FUN_1010c5f0(0x1010),
                                                            iVar2 == 0 &&
                                                            (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                   (param_1 + 0x562)
                                                                                 ), iVar2 == 0))))))
                                                      )))) && (iVar2 = FUN_1010c5f0(0x1020),
                                                              iVar2 == 0)) &&
                                                   (((((((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                  (param_1 + 0x564))
                                                           , iVar2 == 0 &&
                                                           (iVar2 = FUN_1010c5f0(0x1030), iVar2 == 0
                                                           )) && (iVar2 = FUN_1010c430(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x566)), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1010c5f0(0x1040), iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                          (param_1 + 0x568)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1010c5f0(0x1050), iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                           (param_1 + 0x56a)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c5f0(0x1060), iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                           (param_1 + 0x56c)),
                                                    iVar2 == 0 &&
                                                    (((iVar2 = FUN_1010c5f0(0x1070), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                             (param_1 + 0x56e)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c5f0(0x1080), iVar2 == 0))))))
                                                  )) && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x570)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x1090), iVar2 == 0))
                                                        )) &&
                                                  (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                         (param_1 + 0x572)),
                                                  iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1010c5f0(0x10a0), iVar2 == 0 &&
                                                    (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                           (param_1 + 0x574)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1010c5f0(0x10b0), iVar2 == 0 &&
                                                    (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                             (param_1 + 0x576)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c5f0(0x10c0), iVar2 == 0)) &&
                                                     (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x578)),
                                                     iVar2 == 0)))))))))))) &&
                                                  ((((iVar2 = FUN_1010c5f0(0x10d0), iVar2 == 0 &&
                                                     (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x57a)),
                                                     iVar2 == 0)) &&
                                                    (((iVar2 = FUN_1010c5f0(0x10e0), iVar2 == 0 &&
                                                      (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x57c)),
                                                        iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c5f0(0x10f0), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                  (param_1 + 0x57e))
                                                           , iVar2 == 0 &&
                                                           ((((iVar2 = FUN_1010c5f0(0x1100),
                                                              iVar2 == 0 &&
                                                              (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                     (param_1 +
                                                                                     0x580)),
                                                              iVar2 == 0)) &&
                                                             (iVar2 = FUN_1010c5f0(0x1110),
                                                             iVar2 == 0)) &&
                                                            ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                    (param_1 + 0x582
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x1120),
                                                                iVar2 == 0)))))))))) &&
                                                     (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x584)),
                                                     iVar2 == 0)))) &&
                                                   ((((iVar2 = FUN_1010c5f0(0x1130), iVar2 == 0 &&
                                                      (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                             (param_1 + 0x586)),
                                                      iVar2 == 0)) &&
                                                     ((((iVar2 = FUN_1010c5f0(0x1140), iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                 (param_1 + 0x588)),
                                                          iVar2 == 0 &&
                                                          (iVar2 = FUN_1010c5f0(0x11c0), iVar2 == 0)
                                                          ) && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x58a)),
                                                               iVar2 == 0)))) &&
                                                       (((iVar2 = FUN_1010c5f0(0x1250), iVar2 == 0
                                                         && (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                   (param_1 + 0x58c)
                                                                                 ), iVar2 == 0)) &&
                                                        (iVar2 = FUN_1010c5f0(0x1260), iVar2 == 0)))
                                                       ) && ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                    (param_1 + 0x590
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x12c0),
                                                                iVar2 == 0)))))) &&
                                                    ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x594)),
                                                     iVar2 == 0 &&
                                                     (((iVar2 = FUN_1010c5f0(0x1330), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                              (param_1 + 0x596)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0x1340), iVar2 == 0)))))
                                                    ))))) &&
                                                  ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                          (param_1 + 0x598)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1010c5f0(0x1350), iVar2 == 0)))) &&
                                                  ((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x59a)),
                                                     iVar2 == 0 &&
                                                     ((((((iVar2 = FUN_1010c5f0(0x1360), iVar2 == 0
                                                          && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                    (param_1 + 0x59c
                                                                                    )), iVar2 == 0))
                                                         && ((iVar2 = FUN_1010c5f0(0x1370),
                                                             iVar2 == 0 &&
                                                             ((((iVar2 = FUN_1010c430(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x59e)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0x1420),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x5a0)),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c5f0(0x1430),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x5a4)),
                                                               iVar2 == 0)))))))) &&
                                                        (iVar2 = FUN_1010c5f0(0x1480), iVar2 == 0))
                                                       && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                  (param_1 + 0x5a8))
                                                           , iVar2 == 0 &&
                                                           (iVar2 = FUN_1010c5f0(0x1490), iVar2 == 0
                                                           )))) &&
                                                      (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x5aa)),
                                                        iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c5f0(0x14a0), iVar2 == 0
                                                          && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                    (param_1 + 0x5ac
                                                                                    )), iVar2 == 0))
                                                         && (iVar2 = FUN_1010c5f0(0x14b0),
                                                            iVar2 == 0)))) &&
                                                       (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x5ae)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x14c0), iVar2 == 0))
                                                        && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                  (param_1 + 0x5b0))
                                                           , iVar2 == 0)))))))) &&
                                                    (((((iVar2 = FUN_1010c5f0(0x14d0), iVar2 == 0 &&
                                                        (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                               (param_1 + 0x5b2)),
                                                        iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1010c5f0(0x14e0), iVar2 == 0 &&
                                                        (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                 (param_1 + 0x5b4)),
                                                          iVar2 == 0 &&
                                                          (iVar2 = FUN_1010c5f0(0x14f0), iVar2 == 0)
                                                          ) && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5b6)),
                                                               iVar2 == 0)))))) &&
                                                      ((iVar2 = FUN_1010c5f0(0x1500), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                              (param_1 + 0x5b8)),
                                                       iVar2 == 0)))) &&
                                                     (iVar2 = FUN_1010c5f0(0x1510), iVar2 == 0))))
                                                   && ((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x5ba)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x1520), iVar2 == 0))
                                                        && ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                   (param_1 + 0x5bc)
                                                                                 ), iVar2 == 0 &&
                                                            (((((iVar2 = FUN_1010c5f0(0x1530),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c430(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x5be)),
                                                                iVar2 == 0)) &&
                                                               (iVar2 = FUN_1010c5f0(0x1540),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5c0)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1550),
                                                               iVar2 == 0)))) &&
                                                             (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                    (param_1 + 0x5c2
                                                                                    )), iVar2 == 0))
                                                            )))) &&
                                                       (((iVar2 = FUN_1010c5f0(0x1560), iVar2 == 0
                                                         && (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                   (param_1 + 0x5c4)
                                                                                 ), iVar2 == 0)) &&
                                                        ((iVar2 = FUN_1010c5f0(0x1570), iVar2 == 0
                                                         && ((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5c6)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1580),
                                                               iVar2 == 0)) &&
                                                              (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                     (param_1 +
                                                                                     0x5c8)),
                                                              iVar2 == 0)) &&
                                                             (((iVar2 = FUN_1010c5f0(0x1590),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                      (param_1 +
                                                                                      0x5ca)),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c5f0(0x15a0),
                                                               iVar2 == 0 &&
                                                               ((iVar2 = FUN_1010c430(*(undefined2 *
                                                                                       )(param_1 +
                                                                                        0x5cc)),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c5f0(0x15b0),
                                                                iVar2 == 0)))))))))))))))))) &&
                                                  ((((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                            (param_1 + 0x5ce)),
                                                     iVar2 == 0 &&
                                                     (((iVar2 = FUN_1010c5f0(0x15c0), iVar2 == 0 &&
                                                       (iVar2 = FUN_1010c430(*(undefined2 *)
                                                                              (param_1 + 0x5d0)),
                                                       iVar2 == 0)) &&
                                                      (iVar2 = FUN_1010c5f0(0x15d0), iVar2 == 0))))
                                                    && (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                (param_1 + 0x5d2)),
                                                         iVar2 == 0 &&
                                                         (iVar2 = FUN_1010c5f0(0x15e0), iVar2 == 0))
                                                        && (((iVar2 = FUN_1010c430(*(undefined2 *)
                                                                                    (param_1 + 0x5d4
                                                                                    )), iVar2 == 0
                                                             && ((iVar2 = FUN_1010c5f0(0x1600),
                                                                 iVar2 == 0 &&
                                                                 (iVar2 = FUN_1010c430(*(undefined2
                                                                                         *)(param_1 
                                                  + 0x5d6)), iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1010c5f0(0x1670), iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1010c560(*(undefined4 *)
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
                                                             (iVar2 = FUN_1010c5f0(0x1720),
                                                             iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                   (param_1 + 0x614)
                                                                                 ), iVar2 == 0)) &&
                                                           ((iVar2 = FUN_1010c5f0(0x1790),
                                                            iVar2 == 0 &&
                                                            (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                   (param_1 + 0x618)
                                                                                 ), iVar2 == 0))))
                                                          && ((iVar2 = FUN_1010c5f0(0x17a0),
                                                              iVar2 == 0 &&
                                                              ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x61c)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x17f0),
                                                               iVar2 == 0)))))) &&
                                                         (((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                  (param_1 + 0x620))
                                                           , iVar2 == 0 &&
                                                           (((((iVar2 = FUN_1010c5f0(0x1810),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x624)),
                                                               iVar2 == 0)) &&
                                                              (iVar2 = FUN_1010c5f0(0x1820),
                                                              iVar2 == 0)) &&
                                                             (((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x628)),
                                                               iVar2 == 0 &&
                                                               (iVar2 = FUN_1010c5f0(0x1830),
                                                               iVar2 == 0)) &&
                                                              ((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x62c)),
                                                               iVar2 == 0 &&
                                                               ((iVar2 = FUN_1010c5f0(0x1920),
                                                                iVar2 == 0 &&
                                                                (iVar2 = FUN_1010c560(*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x630)),
                                                                iVar2 == 0)))))))) &&
                                                            (iVar2 = FUN_1010c5f0(0x1930),
                                                            iVar2 == 0)))) &&
                                                          ((((iVar2 = FUN_1010c560(*(undefined4 *)
                                                                                    (param_1 + 0x634
                                                                                    )), iVar2 == 0
                                                             && (iVar2 = FUN_1010c5f0(0x1950),
                                                                iVar2 == 0)) &&
                                                            (iVar2 = FUN_1010c560(*(undefined4 *)
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
                                                          iVar4 = FUN_1010c560(*puVar5);
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
                                                            iVar4 = FUN_1010c560(*puVar5);
                                                            if (iVar4 != 0) {
                                                              return iVar4;
                                                            }
                                                            uVar7 = uVar7 + 1;
                                                            puVar5 = puVar5 + 1;
                                                          } while (uVar7 < 7);
                                                          iVar2 = FUN_1010c3c0(piVar1[1] - iVar3,
                                                                               iVar2);
                                                          if ((iVar2 == 0) &&
                                                             (iVar2 = FUN_1010c5f0(0x1980),
                                                             iVar2 == 0)) {
                                                            iVar2 = FUN_1010c560(*(undefined4 *)
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



