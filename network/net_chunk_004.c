/* ===== FUN_10199de0 @ 10199de0  size=4927 ===== */
// calls: _wassert
// strings:
//   "[itemColumnData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[iCreditCount]"
//   "[creditValue]"
//   "[wGuideStepCount]"
//   "[astGuideSteps]"
//   "[mailInfo]"
//   "[schedulePrizeInfo]"
//   "[giftBag]"
//   "[npcAtd]"
//   "[iCatCuisineID]"
//   "[wCatCuisineCount]"
//   "0x%02x"
//   "[bCatCuisineLevel]"
//   "[bCatCuisineBuffs]"
//   "[dwCatCuisineLastTm]"
//   "[equipTitle]"
//   "[equipTitleBuff]"
//   "[guild]"

/* WARNING: Removing unreachable block (ram,0x10199df1) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[itemColumnData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iCreditCount]""
     ""[creditValue]""
     ""[wGuideStepCount]""
     ""[astGuideSteps]""
     ""[mailInfo]""
     ""[schedulePrizeInfo]""
     ""[giftBag]"" */

int __thiscall FUN_10199de0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint extraout_ECX_00;
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
  undefined4 *puVar7;
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
  int extraout_ECX_45;
  
  iVar1 = param_3;
  iVar4 = FUN_1024a140(param_3);
  if ((iVar4 == 0) &&
     (iVar4 = FUN_1010c010(param_2,&DAT_11da4eb8,"[itemColumnData]",(int)(char)param_4), iVar4 == 0)
     ) {
    iVar4 = param_3;
    if (-1 < (int)param_3) {
      iVar4 = param_3 + 1;
    }
    iVar4 = FUN_101644b0(param_2,iVar4,param_4);
    if ((iVar4 == 0) &&
       (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[iCreditCount]",&DAT_11d9e0b4,
                             *(undefined4 *)(param_1 + 10)), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 10);
      if (iVar4 < 0) {
        return -6;
      }
      if (9 < iVar4) {
        return -7;
      }
      iVar4 = FUN_1024a3b0(extraout_ECX,"[creditValue]",iVar4,iVar4 >> 0x1f);
      if (iVar4 == 0) {
        if (0 < *(int *)(param_1 + 10)) {
          puVar7 = (undefined4 *)(param_1 + 0xe);
          param_3 = 0;
          do {
            iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar7);
            if (iVar4 != 0) {
              return iVar4;
            }
            param_3 = param_3 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)param_3 < *(int *)(param_1 + 10));
        }
        iVar4 = FUN_1010c060(param_4);
        if ((iVar4 == 0) &&
           (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[wGuideStepCount]",&DAT_11d9e0b4,
                                 *(undefined2 *)(param_1 + 0x32)), iVar4 == 0)) {
          uVar3 = *(ushort *)(param_1 + 0x32);
          uVar6 = (uint)uVar3;
          if (0x100 < uVar3) {
            return -7;
          }
          uVar2 = 0;
          if (uVar3 != 0) {
            do {
              iVar4 = FUN_1024a230(param_4,"[astGuideSteps]",uVar2,uVar6);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = iVar1;
              if (-1 < iVar1) {
                iVar4 = iVar1 + 1;
              }
              iVar4 = FUN_10166cf0(param_2,iVar4,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              uVar2 = uVar2 + 1;
              uVar6 = extraout_ECX_00;
            } while (uVar2 < *(ushort *)(param_1 + 0x32));
          }
          iVar4 = FUN_1024a1e0(param_4,"[mailInfo]",uVar6);
          if (iVar4 == 0) {
            iVar4 = iVar1;
            if (-1 < iVar1) {
              iVar4 = iVar1 + 1;
            }
            iVar4 = FUN_10171270(param_2,iVar4,param_4);
            if ((iVar4 == 0) &&
               (iVar4 = FUN_1024a1e0(param_4,"[schedulePrizeInfo]",extraout_ECX_01), iVar4 == 0)) {
              iVar4 = iVar1;
              if (-1 < iVar1) {
                iVar4 = iVar1 + 1;
              }
              iVar4 = FUN_10172a90(param_2,iVar4,param_4);
              if ((iVar4 == 0) &&
                 (iVar4 = FUN_1024a1e0(param_4,"[giftBag]",extraout_ECX_02), iVar4 == 0)) {
                iVar4 = iVar1;
                if (-1 < iVar1) {
                  iVar4 = iVar1 + 1;
                }
                iVar4 = FUN_1024cf20(param_2,iVar4,param_4);
                if ((iVar4 == 0) &&
                   (iVar4 = FUN_1024a1e0(param_4,"[npcAtd]",extraout_ECX_03), iVar4 == 0)) {
                  iVar4 = iVar1;
                  if (-1 < iVar1) {
                    iVar4 = iVar1 + 1;
                  }
                  iVar4 = FUN_1022b490(param_2,iVar4,param_4);
                  if (((((iVar4 == 0) &&
                        (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[iCatCuisineID]",&DAT_11d9e0b4,
                                              *(undefined4 *)(param_1 + 0x1c05)), iVar4 == 0)) &&
                       (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[wCatCuisineCount]",
                                             &DAT_11d9e0b4,*(undefined2 *)(param_1 + 0x1c09)),
                       iVar4 == 0)) &&
                      (((iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[bCatCuisineLevel]","0x%02x",
                                              *(undefined1 *)(param_1 + 0x1c0b)), iVar4 == 0 &&
                        (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[bCatCuisineBuffs]","0x%02x",
                                              *(undefined1 *)(param_1 + 0x1c0c)), iVar4 == 0)) &&
                       ((iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[dwCatCuisineLastTm]",
                                              &DAT_11d9f574,*(undefined4 *)(param_1 + 0x1c0d)),
                        iVar4 == 0 &&
                        ((iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[equipTitle]",&DAT_11d9e0b4,
                                               *(undefined4 *)(param_1 + 0x1c11)), iVar4 == 0 &&
                         (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[equipTitleBuff]",
                                               &DAT_11d9f574,*(undefined4 *)(param_1 + 0x1c15)),
                         iVar4 == 0)))))))) &&
                     (iVar4 = FUN_1024a1e0(param_4,"[guild]",extraout_ECX_04), iVar4 == 0)) {
                    iVar4 = iVar1;
                    if (-1 < iVar1) {
                      iVar4 = iVar1 + 1;
                    }
                    iVar4 = FUN_10170a60(param_2,iVar4,param_4);
                    if ((iVar4 == 0) &&
                       (iVar4 = FUN_1024a290(param_2,iVar1,param_4,"[videoSize]",&DAT_11d9e0b4,
                                             *(undefined2 *)(param_1 + 0x1d1e)), iVar4 == 0)) {
                      if (0x80 < *(ushort *)(param_1 + 0x1d1e)) {
                        return -7;
                      }
                      iVar4 = FUN_1024a3b0(0x80,"[video]",*(ushort *)(param_1 + 0x1d1e),0);
                      if (iVar4 == 0) {
                        if (*(short *)(param_1 + 0x1d1e) != 0) {
                          uVar3 = 0;
                          do {
                            iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                 *(undefined1 *)(uVar3 + 0x1d20 + param_1));
                            if (iVar4 != 0) {
                              return iVar4;
                            }
                            uVar3 = uVar3 + 1;
                          } while (uVar3 < *(ushort *)(param_1 + 0x1d1e));
                        }
                        iVar4 = FUN_1010c060(param_4);
                        if ((iVar4 == 0) &&
                           (iVar4 = FUN_1024a1e0(param_4,"[stClientSettings]",extraout_ECX_05),
                           iVar4 == 0)) {
                          iVar4 = iVar1;
                          if (-1 < iVar1) {
                            iVar4 = iVar1 + 1;
                          }
                          iVar4 = FUN_1016b080(param_2,iVar4,param_4);
                          if ((iVar4 == 0) &&
                             (iVar4 = FUN_1024a1e0(param_4,"[spoor]",extraout_ECX_06), iVar4 == 0))
                          {
                            iVar4 = iVar1;
                            if (-1 < iVar1) {
                              iVar4 = iVar1 + 1;
                            }
                            iVar4 = FUN_101767e0(param_2,iVar4,param_4);
                            if ((iVar4 == 0) &&
                               (iVar4 = FUN_1024a1e0(param_4,"[rapidHunt]",extraout_ECX_07),
                               iVar4 == 0)) {
                              iVar4 = iVar1;
                              if (-1 < iVar1) {
                                iVar4 = iVar1 + 1;
                              }
                              iVar4 = FUN_10177e20(param_2,iVar4,param_4);
                              if ((iVar4 == 0) &&
                                 (iVar4 = FUN_1024a1e0(param_4,"[activity]",extraout_ECX_08),
                                 iVar4 == 0)) {
                                iVar4 = iVar1;
                                if (-1 < iVar1) {
                                  iVar4 = iVar1 + 1;
                                }
                                iVar4 = FUN_10158990(param_2,iVar4,param_4);
                                if ((iVar4 == 0) &&
                                   (iVar4 = FUN_1024a1e0(param_4,"[itemRebuild]",extraout_ECX_09),
                                   iVar4 == 0)) {
                                  iVar4 = iVar1;
                                  if (-1 < iVar1) {
                                    iVar4 = iVar1 + 1;
                                  }
                                  iVar4 = FUN_1017bdc0(param_2,iVar4,param_4);
                                  if ((iVar4 == 0) &&
                                     (iVar4 = FUN_1024a1e0(param_4,"[itemBox]",extraout_ECX_10),
                                     iVar4 == 0)) {
                                    iVar4 = iVar1;
                                    if (-1 < iVar1) {
                                      iVar4 = iVar1 + 1;
                                    }
                                    iVar4 = FUN_10231d90(param_2,iVar4,param_4);
                                    if ((iVar4 == 0) &&
                                       (iVar4 = FUN_1024a1e0(param_4,"[shop]",extraout_ECX_11),
                                       iVar4 == 0)) {
                                      iVar4 = iVar1;
                                      if (-1 < iVar1) {
                                        iVar4 = iVar1 + 1;
                                      }
                                      iVar4 = FUN_102121e0(param_2,iVar4,param_4);
                                      if ((iVar4 == 0) &&
                                         (iVar4 = FUN_1024a1e0(param_4,"[catTreature]",
                                                               extraout_ECX_12), iVar4 == 0)) {
                                        iVar4 = iVar1;
                                        if (-1 < iVar1) {
                                          iVar4 = iVar1 + 1;
                                        }
                                        iVar4 = FUN_1017e4a0(param_2,iVar4,param_4);
                                        if ((iVar4 == 0) &&
                                           (iVar4 = FUN_1024a1e0(param_4,"[normalLimitInfo]",
                                                                 extraout_ECX_13), iVar4 == 0)) {
                                          iVar4 = iVar1;
                                          if (-1 < iVar1) {
                                            iVar4 = iVar1 + 1;
                                          }
                                          iVar4 = FUN_10183620(param_2,iVar4,param_4);
                                          if ((iVar4 == 0) &&
                                             (iVar4 = FUN_1024a1e0(param_4,"[reportInfo]",
                                                                   extraout_ECX_14), iVar4 == 0)) {
                                            iVar4 = iVar1;
                                            if (-1 < iVar1) {
                                              iVar4 = iVar1 + 1;
                                            }
                                            iVar4 = FUN_10184de0(param_2,iVar4,param_4);
                                            if ((iVar4 == 0) &&
                                               (iVar4 = FUN_1024a1e0(param_4,"[trace]",
                                                                     extraout_ECX_15), iVar4 == 0))
                                            {
                                              iVar4 = iVar1;
                                              if (-1 < iVar1) {
                                                iVar4 = iVar1 + 1;
                                              }
                                              iVar4 = FUN_1017da00(param_2,iVar4,param_4);
                                              if ((iVar4 == 0) &&
                                                 (iVar4 = FUN_1024a1e0(param_4,"[equipPlan]",
                                                                       extraout_ECX_16), iVar4 == 0)
                                                 ) {
                                                iVar4 = iVar1;
                                                if (-1 < iVar1) {
                                                  iVar4 = iVar1 + 1;
                                                }
                                                iVar4 = FUN_10112060(param_2,iVar4,param_4);
                                                if ((iVar4 == 0) &&
                                                   (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                         "[shortcutCount]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x193bd)),
                                                   iVar4 == 0)) {
                                                  iVar4 = *(int *)(param_1 + 0x193bd);
                                                  if (iVar4 < 0) {
                                                    return -6;
                                                  }
                                                  if (0x3c < iVar4) {
                                                    return -7;
                                                  }
                                                  iVar4 = FUN_1024a3b0(extraout_ECX_17,
                                                                       "[shortcutData]",iVar4,
                                                                       iVar4 >> 0x1f);
                                                  if (iVar4 == 0) {
                                                    if (0 < *(int *)(param_1 + 0x193bd)) {
                                                      puVar7 = (undefined4 *)(param_1 + 0x193c1);
                                                      param_3 = 0;
                                                      do {
                                                        iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                             *puVar7);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        param_3 = param_3 + 1;
                                                        puVar7 = puVar7 + 1;
                                                      } while ((int)param_3 <
                                                               *(int *)(param_1 + 0x193bd));
                                                    }
                                                    iVar4 = FUN_1010c060(param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                                                                                                          
                                                  "[catCuisineFormulaCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x194b1)), iVar4 == 0))
                                                  {
                                                    iVar4 = *(int *)(param_1 + 0x194b1);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x80 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = FUN_1024a3b0(extraout_ECX_18,
                                                                         "[catCuisineID]",iVar4,
                                                                         iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)(param_1 + 0x194b1)) {
                                                        puVar7 = (undefined4 *)(param_1 + 0x194b5);
                                                        param_3 = 0;
                                                        do {
                                                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*puVar7);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          param_3 = param_3 + 1;
                                                          puVar7 = puVar7 + 1;
                                                        } while ((int)param_3 <
                                                                 *(int *)(param_1 + 0x194b1));
                                                      }
                                                      iVar4 = FUN_1010c060(param_4);
                                                      if (iVar4 == 0) {
                                                        iVar4 = *(int *)(param_1 + 0x194b1);
                                                        if (iVar4 < 0) {
                                                          return -6;
                                                        }
                                                        if (0x80 < iVar4) {
                                                          return -7;
                                                        }
                                                        iVar4 = FUN_1024a3b0(extraout_ECX_19,
                                                                             "[catCuisineState]",
                                                                             iVar4,iVar4 >> 0x1f);
                                                        if (iVar4 == 0) {
                                                          if (0 < *(int *)(param_1 + 0x194b1)) {
                                                            puVar7 = (undefined4 *)
                                                                     (param_1 + 0x196b5);
                                                            param_3 = 0;
                                                            do {
                                                              iVar4 = FUN_1010c010(param_2,&
                                                  DAT_11d9f608,*puVar7);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  param_3 = param_3 + 1;
                                                  puVar7 = puVar7 + 1;
                                                  } while ((int)param_3 <
                                                           *(int *)(param_1 + 0x194b1));
                                                  }
                                                  iVar4 = FUN_1010c060(param_4);
                                                  if ((iVar4 == 0) &&
                                                     (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                           "[titleInfoCount]",
                                                                           &DAT_11d9f574,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x198b5)),
                                                     iVar4 == 0)) {
                                                    if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                      return -7;
                                                    }
                                                    iVar4 = FUN_1024a3b0(extraout_ECX_20,"[titleID]"
                                                                         ,*(uint *)(param_1 +
                                                                                   0x198b5),0);
                                                    if (iVar4 == 0) {
                                                      if (*(int *)(param_1 + 0x198b5) != 0) {
                                                        puVar7 = (undefined4 *)(param_1 + 0x198b9);
                                                        param_3 = 0;
                                                        do {
                                                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*puVar7);
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          param_3 = param_3 + 1;
                                                          puVar7 = puVar7 + 1;
                                                        } while (param_3 < *(uint *)(param_1 +
                                                                                    0x198b5));
                                                      }
                                                      iVar4 = FUN_1010c060(param_4);
                                                      if (iVar4 == 0) {
                                                        if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                          return -7;
                                                        }
                                                        iVar4 = FUN_1024a3b0(extraout_ECX_21,
                                                                             "[titleUnlockTime]",
                                                                             *(uint *)(param_1 +
                                                                                      0x198b5),0);
                                                        if (iVar4 == 0) {
                                                          if (*(int *)(param_1 + 0x198b5) != 0) {
                                                            puVar7 = (undefined4 *)
                                                                     (param_1 + 0x1a089);
                                                            param_3 = 0;
                                                            do {
                                                              iVar4 = FUN_1010c010(param_2,&
                                                  DAT_11d9f608,*puVar7);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  param_3 = param_3 + 1;
                                                  puVar7 = puVar7 + 1;
                                                  } while (param_3 < *(uint *)(param_1 + 0x198b5));
                                                  }
                                                  iVar4 = FUN_1010c060(param_4);
                                                  if ((iVar4 == 0) &&
                                                     (iVar4 = FUN_1024a1e0(param_4,"[starStoneData]"
                                                                           ,extraout_ECX_22),
                                                     iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10186050(param_2,iVar4,param_4);
                                                    if (((iVar4 == 0) &&
                                                        (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                              "[dataRepairFlag]",
                                                                              "%I64u",*(undefined4 *
                                                                                       )(param_1 +
                                                                                        0x1a8d5),
                                                                              *(undefined4 *)
                                                                               (param_1 + 0x1a8d9)),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,
                                                  "[itemSnapshot]",extraout_ECX_23), iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10186f20(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,
                                                  "[personalLeagueData]",extraout_ECX_24),
                                                  iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_1017f1e0(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[speak]",
                                                                             extraout_ECX_25),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_10188850(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a1e0(param_4,
                                                  "[supplyPlanData]",extraout_ECX_26), iVar4 == 0))
                                                  {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10114e80(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                             "[cDCount]",
                                                                             &DAT_11d9e0b4,
                                                                             *(undefined4 *)
                                                                              (param_1 + 0x1b66e)),
                                                       iVar4 == 0)) {
                                                      iVar4 = *(int *)(param_1 + 0x1b66e);
                                                      if (iVar4 < 0) {
                                                        return -6;
                                                      }
                                                      if (0x32 < iVar4) {
                                                        return -7;
                                                      }
                                                      iVar4 = FUN_1024a3b0(extraout_ECX_27,
                                                                           "[cDGroupID]",iVar4,
                                                                           iVar4 >> 0x1f);
                                                      if (iVar4 == 0) {
                                                        if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                          puVar7 = (undefined4 *)(param_1 + 0x1b672)
                                                          ;
                                                          param_3 = 0;
                                                          do {
                                                            iVar4 = FUN_1010c010(param_2,&
                                                  DAT_11d9f710,*puVar7);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  param_3 = param_3 + 1;
                                                  puVar7 = puVar7 + 1;
                                                  } while ((int)param_3 <
                                                           *(int *)(param_1 + 0x1b66e));
                                                  }
                                                  iVar4 = FUN_1010c060(param_4);
                                                  if (iVar4 == 0) {
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = FUN_1024a3b0(extraout_ECX_28,"[cDType]",
                                                                         iVar4,iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      iVar4 = 0;
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2," 0x%02x",
                                                                               *(undefined1 *)
                                                                                (param_1 + 0x1b73a +
                                                                                iVar4));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)(param_1 + 0x1b66e)
                                                                );
                                                      }
                                                      iVar4 = FUN_1010c060(param_4);
                                                      if (iVar4 == 0) {
                                                        iVar4 = *(int *)(param_1 + 0x1b66e);
                                                        if (iVar4 < 0) {
                                                          return -6;
                                                        }
                                                        if (0x32 < iVar4) {
                                                          return -7;
                                                        }
                                                        iVar4 = FUN_1024a3b0(extraout_ECX_29,
                                                                             "[cDTime]",iVar4,
                                                                             iVar4 >> 0x1f);
                                                        if (iVar4 == 0) {
                                                          if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                            puVar7 = (undefined4 *)
                                                                     (param_1 + 0x1b76c);
                                                            param_3 = 0;
                                                            do {
                                                              iVar4 = FUN_1010c010(param_2,&
                                                  DAT_11d9f608,*puVar7);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  param_3 = param_3 + 1;
                                                  puVar7 = puVar7 + 1;
                                                  } while ((int)param_3 <
                                                           *(int *)(param_1 + 0x1b66e));
                                                  }
                                                  iVar4 = FUN_1010c060(param_4);
                                                  if (((iVar4 == 0) &&
                                                      (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                            "[creditVersion]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x1b834)),
                                                      iVar4 == 0)) &&
                                                     (iVar4 = FUN_1024a1e0(param_4,
                                                  "[equipSuitSkill]",extraout_ECX_30), iVar4 == 0))
                                                  {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_1018a240(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[weaponTrial]"
                                                                             ,extraout_ECX_31),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_1017fdd0(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a1e0(param_4,"[astrolabe]"
                                                                               ,extraout_ECX_32),
                                                         iVar4 == 0)) {
                                                        iVar4 = iVar1;
                                                        if (-1 < iVar1) {
                                                          iVar4 = iVar1 + 1;
                                                        }
                                                        iVar4 = FUN_1015c6c0(param_2,iVar4,param_4);
                                                        if (((iVar4 == 0) &&
                                                            (iVar4 = FUN_1024a290(param_2,iVar1,
                                                                                  param_4,
                                                  "[creditNoChangeCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x249a8)), iVar4 == 0))
                                                  && (iVar4 = FUN_1024a1e0(param_4,"[wildHunt]",
                                                                           extraout_ECX_33),
                                                     iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_1015e6b0(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[soulStone]",
                                                                             extraout_ECX_34),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_1018be50(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a1e0(param_4,"[monolopy]",
                                                                               extraout_ECX_35),
                                                         iVar4 == 0)) {
                                                        iVar4 = iVar1;
                                                        if (-1 < iVar1) {
                                                          iVar4 = iVar1 + 1;
                                                        }
                                                        iVar4 = FUN_1015f5a0(param_2,iVar4,param_4);
                                                        if ((iVar4 == 0) &&
                                                           (iVar4 = FUN_1024a1e0(param_4,
                                                  "[growHigher]",extraout_ECX_36), iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_101817b0(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[achieve]",
                                                                             extraout_ECX_37),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_1018c980(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a1e0(param_4,
                                                  "[illustrate]",extraout_ECX_38), iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_1018d540(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[weaponStyle]"
                                                                             ,extraout_ECX_39),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_101806e0(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a290(param_2,iVar1,param_4
                                                                               ,
                                                  "[weaponHavenInfoCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x31ffb)), iVar4 == 0))
                                                  {
                                                    iVar4 = *(int *)(param_1 + 0x31ffb);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x2ee < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = FUN_1024a3b0(extraout_ECX_40,
                                                                         "[weaponHavenInfo]",iVar4,
                                                                         iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)(param_1 + 0x31ffb)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2," 0x%02x",
                                                                               (int)*(char *)(
                                                  param_1 + 0x31fff + iVar4));
                                                  if (iVar5 != 0) {
                                                    return iVar5;
                                                  }
                                                  iVar4 = iVar4 + 1;
                                                  } while (iVar4 < *(int *)(param_1 + 0x31ffb));
                                                  }
                                                  iVar4 = FUN_1010c060(param_4);
                                                  if ((iVar4 == 0) &&
                                                     (iVar4 = FUN_1024a1e0(param_4,
                                                  "[silverStorageBox]",extraout_ECX_41), iVar4 == 0)
                                                  ) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10180e80(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,"[guideBook]",
                                                                             extraout_ECX_42),
                                                       iVar4 == 0)) {
                                                      iVar4 = iVar1;
                                                      if (-1 < iVar1) {
                                                        iVar4 = iVar1 + 1;
                                                      }
                                                      iVar4 = FUN_1018fc30(param_2,iVar4,param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a1e0(param_4,
                                                  "[monsterTalkData]",extraout_ECX_43), iVar4 == 0))
                                                  {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10190f10(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = FUN_1024a1e0(param_4,
                                                  "[secretResearchData]",extraout_ECX_44),
                                                  iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_10192d70(param_2,iVar4,param_4);
                                                    if ((((iVar4 == 0) &&
                                                         (iVar4 = FUN_1024a290(param_2,iVar1,param_4
                                                                               ,"[dragonBoxShopID]",
                                                                               &DAT_11d9e0b4,
                                                                               *(undefined4 *)
                                                                                (param_1 + 0x32763))
                                                         , iVar4 == 0)) &&
                                                        (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                              "[rewardActivityCost]"
                                                                              ,&DAT_11d9e0b4,
                                                                              *(undefined4 *)
                                                                               (param_1 + 0x32767)),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1024a290(param_2,iVar1,param_4,
                                                                             "[count]",&DAT_11d9e0b4
                                                                             ,*(undefined4 *)
                                                                               (param_1 + 0x3276b)),
                                                       iVar4 == 0)) {
                                                      iVar4 = *(int *)(param_1 + 0x3276b);
                                                      if (iVar4 < 0) {
                                                        return -6;
                                                      }
                                                      if (6 < iVar4) {
                                                        return -7;
                                                      }
                                                      if (0 < iVar4) {
                                                        iVar4 = param_1 + 0x3276f;
                                                        iVar5 = 0;
                                                        do {
                                                          iVar4 = FUN_1024a230(param_4,
                                                  "[rewardActivityState]",iVar5,iVar4);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  iVar4 = iVar1;
                                                  if (-1 < iVar1) {
                                                    iVar4 = iVar1 + 1;
                                                  }
                                                  iVar4 = FUN_10193400(param_2,iVar4,param_4);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  iVar5 = iVar5 + 1;
                                                  iVar4 = extraout_ECX_45;
                                                  } while (iVar5 < *(int *)(param_1 + 0x3276b));
                                                  }
                                                  iVar4 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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



/* ===== FUN_1019b360 @ 1019b360  size=185 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_1019b360(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
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
    iVar5 = FUN_10164ff0(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_102152f0(param_1);
      if (iVar5 == 0) {
        FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
      }
    }
  }
  return;
}



/* ===== FUN_1019b420 @ 1019b420  size=185 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

void FUN_1019b420(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
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
    iVar5 = FUN_101651b0(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_102154b0(param_1);
      if (iVar5 == 0) {
        FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
      }
    }
  }
  return;
}



/* ===== FUN_1019b8a0 @ 1019b8a0  size=185 ===== */
// calls: _wassert
// strings:
//   "[saveMap]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[starLevel]"

/* WARNING: Removing unreachable block (ram,0x1019b8b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[saveMap]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[starLevel]"" */

void FUN_1019b8a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[saveMap]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_10165a70(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[starLevel]",extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_10215c50(param_1,param_2,param_3);
        return;
      }
      FUN_10215c50(param_1,param_2 + 1,param_3);
    }
  }
  return;
}



/* ===== FUN_1019e250 @ 1019e250  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1019e250(int param_1,int *param_2,int param_3)

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
LAB_1019e2ff:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1019e2ff;
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



/* ===== FUN_1019e340 @ 1019e340  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1019e340(int param_1,int *param_2,int param_3)

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
LAB_1019e3ef:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1019e3ef;
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



/* ===== FUN_1019e9a0 @ 1019e9a0  size=255 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_1019e9a0(undefined1 *param_1,int *param_2,int param_3)

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



/* ===== FUN_1019ef80 @ 1019ef80  size=228 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1019ef80(int param_1,int *param_2,int param_3)

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
      iVar3 = FUN_1010ccb0(param_1);
LAB_1019f031:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 3) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1019f031;
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



/* ===== FUN_1019f070 @ 1019f070  size=228 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1019f070(int param_1,int *param_2,int param_3)

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
LAB_1019f121:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 3) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1019f121;
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



/* ===== FUN_101a0860 @ 101a0860  size=225 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[pets]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101a08c9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[pets]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101a0860(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[pets]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1019fe20(param_2,iVar1,param_4);
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



/* ===== FUN_101a1300 @ 101a1300  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101a1300(int param_1,int *param_2,int param_3)

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
LAB_101a13af:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101a13af;
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



/* ===== FUN_101a13f0 @ 101a13f0  size=226 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101a13f0(int param_1,int *param_2,int param_3)

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
LAB_101a149f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_101a149f;
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



/* ===== FUN_101a28a0 @ 101a28a0  size=481 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[skill]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[slotCount]"
//   "[slotLock]"

/* WARNING: Removing unreachable block (ram,0x101a291d) */
/* WARNING: Removing unreachable block (ram,0x101a2a01) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[skill]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[slotCount]""
     ""[slotLock]"" */

int __thiscall FUN_101a28a0(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar3 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (10 < sVar1) {
      return -7;
    }
    sVar2 = 0;
    if (0 < sVar1) {
      do {
        iVar3 = FUN_1024a140(param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[skill]",(int)sVar2,(int)(char)param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_101a0f20(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < *param_1);
    }
    iVar3 = FUN_1024a290(param_2,param_3,param_4,"[slotCount]",&DAT_11d9e0b4,(int)param_1[0x3d]);
    if (iVar3 == 0) {
      sVar1 = param_1[0x3d];
      if (sVar1 < 0) {
        return -6;
      }
      if (10 < sVar1) {
        return -7;
      }
      sVar2 = 0;
      if (0 < sVar1) {
        do {
          iVar3 = FUN_1024a140(param_3);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c010(param_2,"%s[%u]%c","[slotLock]",(int)sVar2,(int)(char)param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_101a1c00(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          sVar2 = sVar2 + 1;
        } while (sVar2 < param_1[0x3d]);
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* ===== FUN_101a3300 @ 101a3300  size=248 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[skill]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101a337c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[skill]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101a3300(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[skill]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_101a15e0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_101a3db0 @ 101a3db0  size=1819 ===== */
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

int __thiscall FUN_101a3db0(undefined1 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  char *pcVar10;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar11;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  short sVar12;
  
  iVar6 = FUN_1010c5f0(0x21);
  if (iVar6 == 0) {
    uVar2 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar6 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar2;
      param_2[1] = param_2[1] + 1;
      iVar6 = FUN_1010c5f0(0x30);
      if ((((iVar6 == 0) && (iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar6 == 0)) &&
          (iVar6 = FUN_1010c5f0(0x40), iVar6 == 0)) &&
         ((iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 5)), iVar6 == 0 &&
          (iVar6 = FUN_1010c5f0(0x55), iVar6 == 0)))) {
        iVar6 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar4 = param_2[1];
        pcVar1 = param_1 + 9;
        sVar7 = strnlen(pcVar1,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar10 = pcVar1;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar8 = FUN_1010c2b0(pcVar1,(int)pcVar10 - (int)(param_1 + 10));
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x65);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = param_2[1];
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = param_2[1];
        pcVar1 = param_1 + 0x29;
        sVar7 = strnlen(pcVar1,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar10 = pcVar1;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar8 = FUN_1010c2b0(pcVar1,(int)pcVar10 - (int)(param_1 + 0x2a));
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x71);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[0x49]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x81);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[0x4a]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x90);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 0x4b));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xa0);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 0x4f));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xb0);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0x53));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xc0);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0x55));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xe0);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0x57));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xf0);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0x59));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x100);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 0x5b));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x110);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c560(*(undefined4 *)(param_1 + 0x5f));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x121);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[99]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x150);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 100));
        if (iVar6 != 0) {
          return iVar6;
        }
        sVar12 = *(short *)(param_1 + 100);
        if (sVar12 < 0) {
          return -6;
        }
        if (0x46 < sVar12) {
          return -7;
        }
        if (0 < sVar12) {
          iVar6 = FUN_1010c5f0(0x165);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = param_2[1];
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = param_2[1];
          sVar12 = 0;
          uVar11 = extraout_ECX_02;
          if (0 < *(short *)(param_1 + 100)) {
            do {
              iVar8 = param_2[1];
              FUN_1010bf70(uVar11);
              iVar5 = param_2[1];
              iVar9 = FUN_1019e0e0(param_2);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar8 = FUN_1010c3c0(param_2[1] - iVar5,iVar8);
              if (iVar8 != 0) {
                return iVar8;
              }
              sVar12 = sVar12 + 1;
              uVar11 = extraout_ECX_03;
            } while (sVar12 < *(short *)(param_1 + 100));
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        iVar6 = FUN_1010c5f0(0x170);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c430(*(undefined2 *)(param_1 + 0x2dc));
        if (iVar6 != 0) {
          return iVar6;
        }
        sVar12 = *(short *)(param_1 + 0x2dc);
        if (sVar12 < 0) {
          return -6;
        }
        if (10 < sVar12) {
          return -7;
        }
        if (0 < sVar12) {
          iVar6 = FUN_1010c5f0(0x185);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = param_2[1];
          FUN_1010bf70(extraout_ECX_04);
          iVar4 = param_2[1];
          sVar12 = 0;
          uVar11 = extraout_ECX_05;
          if (0 < *(short *)(param_1 + 0x2dc)) {
            do {
              iVar8 = param_2[1];
              FUN_1010bf70(uVar11);
              iVar5 = param_2[1];
              iVar9 = FUN_1019e790(param_2);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar8 = FUN_1010c3c0(param_2[1] - iVar5,iVar8);
              if (iVar8 != 0) {
                return iVar8;
              }
              sVar12 = sVar12 + 1;
              uVar11 = extraout_ECX_06;
            } while (sVar12 < *(short *)(param_1 + 0x2dc));
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        iVar6 = FUN_1010c5f0(0x1c5);
        if (iVar6 == 0) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_07);
          iVar8 = param_2[1];
          iVar6 = FUN_1019ee10(param_2);
          if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0)) &&
             (iVar6 = FUN_1010c5f0(0x1d5), iVar6 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_08);
            iVar8 = param_2[1];
            iVar6 = FUN_1019f540(param_2);
            if ((((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0)) &&
                (iVar6 = FUN_1010c5f0(0x1e1), iVar6 == 0)) &&
               ((iVar6 = FUN_101150a0(param_1[0x38f]), iVar6 == 0 &&
                (iVar6 = FUN_1010c5f0(0x1f5), iVar6 == 0)))) {
              iVar4 = param_2[1];
              FUN_1010bf70(extraout_ECX_09);
              iVar8 = param_2[1];
              iVar6 = FUN_101a1ec0(param_2);
              if (((iVar6 == 0) &&
                  ((iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0 &&
                   (iVar6 = FUN_1010c5f0(0x203), iVar6 == 0)))) &&
                 ((iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x488)), iVar6 == 0 &&
                  (iVar6 = FUN_1010c5f0(0x215), iVar6 == 0)))) {
                iVar4 = param_2[1];
                FUN_1010bf70(extraout_ECX_10);
                iVar8 = param_2[1];
                iVar6 = FUN_101a2cc0(param_2);
                if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0))
                   && (iVar6 = FUN_1010c5f0(0x225), iVar6 == 0)) {
                  iVar4 = param_2[1];
                  FUN_1010bf70(extraout_ECX_11);
                  iVar8 = param_2[1];
                  iVar6 = FUN_101a3620(param_2);
                  if (iVar6 == 0) {
                    iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4);
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



/* ===== FUN_101a44d0 @ 101a44d0  size=1819 ===== */
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

int __thiscall FUN_101a44d0(undefined1 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  char *pcVar10;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar11;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  short sVar12;
  
  iVar6 = FUN_1010c5f0(0x21);
  if (iVar6 == 0) {
    uVar2 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar6 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar2;
      param_2[1] = param_2[1] + 1;
      iVar6 = FUN_1010c5f0(0x33);
      if ((((iVar6 == 0) && (iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar6 == 0)) &&
          (iVar6 = FUN_1010c5f0(0x43), iVar6 == 0)) &&
         ((iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 5)), iVar6 == 0 &&
          (iVar6 = FUN_1010c5f0(0x55), iVar6 == 0)))) {
        iVar6 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar4 = param_2[1];
        pcVar1 = param_1 + 9;
        sVar7 = strnlen(pcVar1,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar10 = pcVar1;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar8 = FUN_1010c2b0(pcVar1,(int)pcVar10 - (int)(param_1 + 10));
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x65);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = param_2[1];
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = param_2[1];
        pcVar1 = param_1 + 0x29;
        sVar7 = strnlen(pcVar1,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar10 = pcVar1;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar8 = FUN_1010c2b0(pcVar1,(int)pcVar10 - (int)(param_1 + 0x2a));
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x71);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[0x49]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x81);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[0x4a]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x93);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x4b));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xa3);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x4f));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xb2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x53));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xc2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x55));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xe2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x57));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0xf2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x59));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x103);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x5b));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x113);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x5f));
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x121);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_101159e0(param_1[99]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c5f0(0x152);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 100));
        if (iVar6 != 0) {
          return iVar6;
        }
        sVar12 = *(short *)(param_1 + 100);
        if (sVar12 < 0) {
          return -6;
        }
        if (0x46 < sVar12) {
          return -7;
        }
        if (0 < sVar12) {
          iVar6 = FUN_1010c5f0(0x165);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = param_2[1];
          FUN_1010bf70(extraout_ECX_01);
          iVar4 = param_2[1];
          sVar12 = 0;
          uVar11 = extraout_ECX_02;
          if (0 < *(short *)(param_1 + 100)) {
            do {
              iVar8 = param_2[1];
              FUN_1010bf70(uVar11);
              iVar5 = param_2[1];
              iVar9 = FUN_1019e130(param_2);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar8 = FUN_1010c3c0(param_2[1] - iVar5,iVar8);
              if (iVar8 != 0) {
                return iVar8;
              }
              sVar12 = sVar12 + 1;
              uVar11 = extraout_ECX_03;
            } while (sVar12 < *(short *)(param_1 + 100));
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        iVar6 = FUN_1010c5f0(0x172);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_1010c120(*(undefined2 *)(param_1 + 0x2dc));
        if (iVar6 != 0) {
          return iVar6;
        }
        sVar12 = *(short *)(param_1 + 0x2dc);
        if (sVar12 < 0) {
          return -6;
        }
        if (10 < sVar12) {
          return -7;
        }
        if (0 < sVar12) {
          iVar6 = FUN_1010c5f0(0x185);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = param_2[1];
          FUN_1010bf70(extraout_ECX_04);
          iVar4 = param_2[1];
          sVar12 = 0;
          uVar11 = extraout_ECX_05;
          if (0 < *(short *)(param_1 + 0x2dc)) {
            do {
              iVar8 = param_2[1];
              FUN_1010bf70(uVar11);
              iVar5 = param_2[1];
              iVar9 = FUN_1019e7e0(param_2);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar8 = FUN_1010c3c0(param_2[1] - iVar5,iVar8);
              if (iVar8 != 0) {
                return iVar8;
              }
              sVar12 = sVar12 + 1;
              uVar11 = extraout_ECX_06;
            } while (sVar12 < *(short *)(param_1 + 0x2dc));
          }
          iVar6 = FUN_1010c3c0(param_2[1] - iVar4,iVar6);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        iVar6 = FUN_1010c5f0(0x1c5);
        if (iVar6 == 0) {
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX_07);
          iVar8 = param_2[1];
          iVar6 = FUN_1019ee60(param_2);
          if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0)) &&
             (iVar6 = FUN_1010c5f0(0x1d5), iVar6 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_08);
            iVar8 = param_2[1];
            iVar6 = FUN_1019f6d0(param_2);
            if ((((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0)) &&
                (iVar6 = FUN_1010c5f0(0x1e1), iVar6 == 0)) &&
               ((iVar6 = FUN_101150a0(param_1[0x38f]), iVar6 == 0 &&
                (iVar6 = FUN_1010c5f0(0x1f5), iVar6 == 0)))) {
              iVar4 = param_2[1];
              FUN_1010bf70(extraout_ECX_09);
              iVar8 = param_2[1];
              iVar6 = FUN_101a20a0(param_2);
              if (((iVar6 == 0) &&
                  ((iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0 &&
                   (iVar6 = FUN_1010c5f0(0x203), iVar6 == 0)))) &&
                 ((iVar6 = FUN_1010c190(*(undefined4 *)(param_1 + 0x488)), iVar6 == 0 &&
                  (iVar6 = FUN_1010c5f0(0x215), iVar6 == 0)))) {
                iVar4 = param_2[1];
                FUN_1010bf70(extraout_ECX_10);
                iVar8 = param_2[1];
                iVar6 = FUN_101a2db0(param_2);
                if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4), iVar6 == 0))
                   && (iVar6 = FUN_1010c5f0(0x225), iVar6 == 0)) {
                  iVar4 = param_2[1];
                  FUN_1010bf70(extraout_ECX_11);
                  iVar8 = param_2[1];
                  iVar6 = FUN_101a3670(param_2);
                  if (iVar6 == 0) {
                    iVar6 = FUN_1010c3c0(param_2[1] - iVar8,iVar4);
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



/* ===== FUN_101a6710 @ 101a6710  size=869 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101a6710(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  short sVar9;
  int iVar10;
  
  iVar5 = FUN_1010c5f0(0x21);
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
      iVar5 = FUN_1010c5f0(0x30);
      if ((((iVar5 == 0) && (iVar5 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar5 == 0)) &&
          (iVar5 = FUN_1010c5f0(0x41), iVar5 == 0)) &&
         (iVar5 = FUN_101159e0(param_1[5]), iVar5 == 0)) {
        cVar2 = param_1[5];
        if (cVar2 < '\0') {
          return -6;
        }
        if ('\f' < cVar2) {
          return -7;
        }
        if ('\0' < cVar2) {
          iVar5 = FUN_1010c5f0(0x55);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar3 = param_2[1];
          iVar10 = 0;
          uVar8 = extraout_ECX_00;
          if ('\0' < (char)param_1[5]) {
            do {
              iVar7 = param_2[1];
              FUN_1010bf70(uVar8);
              iVar4 = param_2[1];
              iVar6 = FUN_101a3db0(param_2);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar7 = FUN_1010c3c0(param_2[1] - iVar4,iVar7);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar10 = iVar10 + 1;
              uVar8 = extraout_ECX_01;
            } while (iVar10 < (char)param_1[5]);
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0x61);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_101159e0(param_1[0x3bd6]);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c5f0(0x70);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c430(*(undefined2 *)(param_1 + 0x3bd7));
        if (iVar5 != 0) {
          return iVar5;
        }
        sVar9 = *(short *)(param_1 + 0x3bd7);
        if (sVar9 < 0) {
          return -6;
        }
        if (0x46 < sVar9) {
          return -7;
        }
        if (0 < sVar9) {
          iVar5 = FUN_1010c5f0(0x85);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX_02);
          iVar3 = param_2[1];
          sVar9 = 0;
          if (0 < *(short *)(param_1 + 0x3bd7)) {
            do {
              iVar10 = FUN_1010c0c0(param_1[sVar9 + 0x3bd9]);
              if (iVar10 != 0) {
                return iVar10;
              }
              sVar9 = sVar9 + 1;
            } while (sVar9 < *(short *)(param_1 + 0x3bd7));
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0x90);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c430(*(undefined2 *)(param_1 + 0x3c1f));
        if (iVar5 != 0) {
          return iVar5;
        }
        sVar9 = *(short *)(param_1 + 0x3c1f);
        if (sVar9 < 0) {
          return -6;
        }
        if (0x46 < sVar9) {
          return -7;
        }
        if (0 < sVar9) {
          iVar5 = FUN_1010c5f0(0xa5);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX_03);
          iVar3 = param_2[1];
          sVar9 = 0;
          if (0 < *(short *)(param_1 + 0x3c1f)) {
            do {
              iVar10 = FUN_1010c0c0(param_1[sVar9 + 0x3c21]);
              if (iVar10 != 0) {
                return iVar10;
              }
              sVar9 = sVar9 + 1;
            } while (sVar9 < *(short *)(param_1 + 0x3c1f));
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0xb1);
        if (((iVar5 == 0) && (iVar5 = FUN_101159e0(param_1[0x3c67]), iVar5 == 0)) &&
           (iVar5 = FUN_1010c5f0(0xc1), iVar5 == 0)) {
          iVar5 = FUN_101159e0(param_1[0x3c68]);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101a6a80 @ 101a6a80  size=869 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101a6a80(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  short sVar9;
  int iVar10;
  
  iVar5 = FUN_1010c5f0(0x21);
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
      iVar5 = FUN_1010c5f0(0x33);
      if ((((iVar5 == 0) && (iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar5 == 0)) &&
          (iVar5 = FUN_1010c5f0(0x41), iVar5 == 0)) &&
         (iVar5 = FUN_101159e0(param_1[5]), iVar5 == 0)) {
        cVar2 = param_1[5];
        if (cVar2 < '\0') {
          return -6;
        }
        if ('\f' < cVar2) {
          return -7;
        }
        if ('\0' < cVar2) {
          iVar5 = FUN_1010c5f0(0x55);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar3 = param_2[1];
          iVar10 = 0;
          uVar8 = extraout_ECX_00;
          if ('\0' < (char)param_1[5]) {
            do {
              iVar7 = param_2[1];
              FUN_1010bf70(uVar8);
              iVar4 = param_2[1];
              iVar6 = FUN_101a44d0(param_2);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar7 = FUN_1010c3c0(param_2[1] - iVar4,iVar7);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar10 = iVar10 + 1;
              uVar8 = extraout_ECX_01;
            } while (iVar10 < (char)param_1[5]);
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0x61);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_101159e0(param_1[0x3bd6]);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c5f0(0x72);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c120(*(undefined2 *)(param_1 + 0x3bd7));
        if (iVar5 != 0) {
          return iVar5;
        }
        sVar9 = *(short *)(param_1 + 0x3bd7);
        if (sVar9 < 0) {
          return -6;
        }
        if (0x46 < sVar9) {
          return -7;
        }
        if (0 < sVar9) {
          iVar5 = FUN_1010c5f0(0x85);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX_02);
          iVar3 = param_2[1];
          sVar9 = 0;
          if (0 < *(short *)(param_1 + 0x3bd7)) {
            do {
              iVar10 = FUN_1010c0c0(param_1[sVar9 + 0x3bd9]);
              if (iVar10 != 0) {
                return iVar10;
              }
              sVar9 = sVar9 + 1;
            } while (sVar9 < *(short *)(param_1 + 0x3bd7));
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0x92);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1010c120(*(undefined2 *)(param_1 + 0x3c1f));
        if (iVar5 != 0) {
          return iVar5;
        }
        sVar9 = *(short *)(param_1 + 0x3c1f);
        if (sVar9 < 0) {
          return -6;
        }
        if (0x46 < sVar9) {
          return -7;
        }
        if (0 < sVar9) {
          iVar5 = FUN_1010c5f0(0xa5);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = param_2[1];
          FUN_1010bf70(extraout_ECX_03);
          iVar3 = param_2[1];
          sVar9 = 0;
          if (0 < *(short *)(param_1 + 0x3c1f)) {
            do {
              iVar10 = FUN_1010c0c0(param_1[sVar9 + 0x3c21]);
              if (iVar10 != 0) {
                return iVar10;
              }
              sVar9 = sVar9 + 1;
            } while (sVar9 < *(short *)(param_1 + 0x3c1f));
          }
          iVar5 = FUN_1010c3c0(param_2[1] - iVar3,iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1010c5f0(0xb1);
        if (((iVar5 == 0) && (iVar5 = FUN_101159e0(param_1[0x3c67]), iVar5 == 0)) &&
           (iVar5 = FUN_1010c5f0(0xc1), iVar5 == 0)) {
          iVar5 = FUN_101159e0(param_1[0x3c68]);
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_101ae970 @ 101ae970  size=164 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101ae970(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  
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
      iVar4 = FUN_1010c5f0(0x25);
      if (iVar4 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = param_2[1];
        iVar4 = FUN_101ae230(*param_1,0,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_1010c3c0(param_2[1] - iVar3,iVar2);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_101aea20 @ 101aea20  size=164 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101aea20(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  
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
      iVar4 = FUN_1010c5f0(0x25);
      if (iVar4 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = param_2[1];
        iVar4 = FUN_101ae330(*param_1,0,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_1010c3c0(param_2[1] - iVar3,iVar2);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_101aeba0 @ 101aeba0  size=285 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_101aeba0(undefined1 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_14;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar3 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar3) {
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
        uVar2 = FUN_1010c870(&param_2);
        if (uVar2 != 0) {
          return uVar2;
        }
        if (param_2 != (int *)0x0) {
          local_14 = 0;
          uVar2 = FUN_101ae4e0(&local_14,piVar1,param_2);
          if (uVar2 != 0) {
            return uVar2;
          }
          *param_1 = (undefined1)local_14;
        }
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    uVar2 = piVar1[1];
  }
  return -(uint)(uVar3 < uVar2) & 0xffffffde;
}



/* ===== FUN_101aecc0 @ 101aecc0  size=285 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_101aecc0(undefined1 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_14;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar3 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar3) {
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
        uVar2 = FUN_1010c870(&param_2);
        if (uVar2 != 0) {
          return uVar2;
        }
        if (param_2 != (int *)0x0) {
          local_14 = 0;
          uVar2 = FUN_101ae5f0(&local_14,piVar1,param_2);
          if (uVar2 != 0) {
            return uVar2;
          }
          *param_1 = (undefined1)local_14;
        }
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    uVar2 = piVar1[1];
  }
  return -(uint)(uVar3 < uVar2) & 0xffffffde;
}



/* ===== FUN_101aeeb0 @ 101aeeb0  size=177 ===== */
// calls: _wassert
// strings:
//   "[wType]"
//   "[stValue]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x101aeee9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[wType]""
     ""[stValue]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_101aeeb0(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wType]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stValue]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_101ae7b0(*param_1,0,param_2,param_3,param_4);
      return;
    }
    FUN_101ae7b0(*param_1,0,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_101af1a0 @ 101af1a0  size=331 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int FUN_101af1a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  
  piVar4 = param_1;
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = param_1[1];
    if ((uint)param_1[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar8 = _wassert_exref;
    uVar9 = param_1[1];
    if ((uVar9 <= (uint)param_1[2]) && (3 < param_1[2] - uVar9)) {
      param_1[1] = uVar9 + 4;
    }
    iVar5 = param_1[1];
    uVar9 = 0;
    do {
      uVar2 = param_1[1];
      if ((uint)param_1[2] < uVar2) {
        (*pcVar8)(L"position <= length",
                  L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_1[1];
      if ((uVar3 <= (uint)param_1[2]) && (3 < param_1[2] - uVar3)) {
        param_1[1] = uVar3 + 4;
      }
      iVar7 = param_1[1];
      iVar6 = FUN_101ae970(param_1);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar7 = FUN_1010c3c0(param_1[1] - iVar7,uVar2);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar9 = uVar9 + 1;
      pcVar8 = _wassert_exref;
    } while (uVar9 < 7);
    iVar5 = param_1[1] - iVar5;
    if ((uint)param_1[2] < (uint)param_1[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_1[2]) && (3 < param_1[2] - uVar1)) {
      iVar7 = *param_1;
      param_1._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
      *(undefined1 *)(uVar1 + iVar7) = param_1._3_1_;
      param_1._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
      *(undefined1 *)(*piVar4 + 1 + uVar1) = param_1._2_1_;
      *(char *)(*piVar4 + 2 + uVar1) = (char)((uint)iVar5 >> 8);
      *(char *)(*piVar4 + 3 + uVar1) = (char)iVar5;
      return 0;
    }
    iVar5 = -1;
  }
  return iVar5;
}



/* ===== FUN_101af2f0 @ 101af2f0  size=331 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int FUN_101af2f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  
  piVar4 = param_1;
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = param_1[1];
    if ((uint)param_1[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar8 = _wassert_exref;
    uVar9 = param_1[1];
    if ((uVar9 <= (uint)param_1[2]) && (3 < param_1[2] - uVar9)) {
      param_1[1] = uVar9 + 4;
    }
    iVar5 = param_1[1];
    uVar9 = 0;
    do {
      uVar2 = param_1[1];
      if ((uint)param_1[2] < uVar2) {
        (*pcVar8)(L"position <= length",
                  L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_1[1];
      if ((uVar3 <= (uint)param_1[2]) && (3 < param_1[2] - uVar3)) {
        param_1[1] = uVar3 + 4;
      }
      iVar7 = param_1[1];
      iVar6 = FUN_101aea20(param_1);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar7 = FUN_1010c3c0(param_1[1] - iVar7,uVar2);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar9 = uVar9 + 1;
      pcVar8 = _wassert_exref;
    } while (uVar9 < 7);
    iVar5 = param_1[1] - iVar5;
    if ((uint)param_1[2] < (uint)param_1[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if ((uVar1 <= (uint)param_1[2]) && (3 < param_1[2] - uVar1)) {
      iVar7 = *param_1;
      param_1._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
      *(undefined1 *)(uVar1 + iVar7) = param_1._3_1_;
      param_1._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
      *(undefined1 *)(*piVar4 + 1 + uVar1) = param_1._2_1_;
      *(char *)(*piVar4 + 2 + uVar1) = (char)((uint)iVar5 >> 8);
      *(char *)(*piVar4 + 3 + uVar1) = (char)iVar5;
      return 0;
    }
    iVar5 = -1;
  }
  return iVar5;
}



/* ===== FUN_101af840 @ 101af840  size=139 ===== */
// calls: _wassert
// strings:
//   "[value]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101af859) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[value]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void FUN_101af840(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_2);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_1010c010(param_1,"%s[%u]%c","[value]",uVar2,(int)(char)param_3), iVar1 != 0)) {
      return;
    }
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_101aeeb0(param_1,iVar1,param_3);
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1;
    if (6 < uVar2) {
      return;
    }
  }
  return;
}



/* ===== FUN_101affd0 @ 101affd0  size=231 ===== */
// calls: _wassert
// strings:
//   "[base]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[bonus]"

/* WARNING: Removing unreachable block (ram,0x101afff0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[base]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[bonus]"" */

void __thiscall
FUN_101affd0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 1) && (param_3 == 0)) {
    iVar1 = FUN_1024a140(param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1010c010(param_4,&DAT_11da4eb8,"[base]",(int)(char)param_6), iVar1 == 0)) {
      if (-1 < param_5) {
        FUN_101aeeb0(param_4,param_5 + 1,param_6);
        return;
      }
      FUN_101aeeb0(param_4,param_5,param_6);
      return;
    }
  }
  else if ((param_2 == 2) &&
          ((param_3 == 0 && (iVar1 = FUN_1024a1e0(param_6,"[bonus]",param_1), iVar1 == 0)))) {
    if (param_5 < 0) {
      FUN_101af840(param_4,param_5,param_6);
      return;
    }
    FUN_101af840(param_4,param_5 + 1,param_6);
  }
  return;
}



/* ===== FUN_101b01d0 @ 101b01d0  size=164 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101b01d0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  
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
      iVar4 = FUN_1010c5f0(0x25);
      if (iVar4 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = param_2[1];
        iVar4 = FUN_101afb30(*param_1,0,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_1010c3c0(param_2[1] - iVar3,iVar2);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_101b0280 @ 101b0280  size=164 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101b0280(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  
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
      iVar4 = FUN_1010c5f0(0x25);
      if (iVar4 == 0) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar3 = param_2[1];
        iVar4 = FUN_101afbc0(*param_1,0,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_1010c3c0(param_2[1] - iVar3,iVar2);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_101b0400 @ 101b0400  size=285 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_101b0400(undefined1 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_14;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar3 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x60] & 1) == 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
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
        if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
        }
        param_2 = (int *)0x0;
        uVar2 = FUN_1010c870(&param_2);
        if (uVar2 != 0) {
          return uVar2;
        }
        if (param_2 != (int *)0x0) {
          local_14 = 0;
          uVar2 = FUN_101afd20(&local_14,piVar1,param_2);
          if (uVar2 != 0) {
            return uVar2;
          }
          *param_1 = (undefined1)local_14;
        }
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    uVar2 = piVar1[1];
  }
  return -(uint)(uVar3 < uVar2) & 0xffffffde;
}



/* ===== FUN_101b0520 @ 101b0520  size=285 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_101b0520(undefined1 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_14;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar3 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x60] & 1) == 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
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
        if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
        }
        param_2 = (int *)0x0;
        uVar2 = FUN_1010c870(&param_2);
        if (uVar2 != 0) {
          return uVar2;
        }
        if (param_2 != (int *)0x0) {
          local_14 = 0;
          uVar2 = FUN_101afe20(&local_14,piVar1,param_2);
          if (uVar2 != 0) {
            return uVar2;
          }
          *param_1 = (undefined1)local_14;
        }
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    uVar2 = piVar1[1];
  }
  return -(uint)(uVar3 < uVar2) & 0xffffffde;
}



/* ===== FUN_101b0710 @ 101b0710  size=177 ===== */
// calls: _wassert
// strings:
//   "[type]"
//   "[value]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x101b0749) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[type]""
     ""[value]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_101b0710(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[type]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[value]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_101affd0(*param_1,0,param_2,param_3,param_4);
      return;
    }
    FUN_101affd0(*param_1,0,param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_101d1470 @ 101d1470  size=19762 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharSex]"
//   "[oCharExp]"
//   "[oStarLevel]"
//   "[oCharHP]"
//   "[oCharMaxHP]"
//   "[oCharReju]"
//   "[oCharMaxReju]"
//   "[oDeath]"
//   "[oCharSta]"
//   "[oCharMaxSta]"
//   "[oCharStaRecovery]"
//   "[oCharStaDdct]"
//   "[oCharStaDdctPeriod]"
//   "[oCharDefence]"

/* WARNING: Removing unreachable block (ram,0x101d1fb8) */
/* WARNING: Removing unreachable block (ram,0x101d1e18) */
/* WARNING: Removing unreachable block (ram,0x101d1480) */
/* WARNING: Removing unreachable block (ram,0x101d1ee8) */
/* WARNING: Removing unreachable block (ram,0x101d2088) */
/* WARNING: Removing unreachable block (ram,0x101d1d44) */
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
     ""[oCharSex]""
     ""[oCharExp]""
     ""[oStarLevel]""
     ""[oCharHP]"" */

int __thiscall FUN_101d1470(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
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
  undefined4 extraout_ECX_56;
  undefined4 extraout_ECX_57;
  undefined4 extraout_ECX_58;
  undefined4 extraout_ECX_59;
  undefined4 extraout_ECX_60;
  undefined4 extraout_ECX_61;
  undefined4 extraout_ECX_62;
  undefined4 extraout_ECX_63;
  undefined4 extraout_ECX_64;
  undefined4 extraout_ECX_65;
  undefined4 extraout_ECX_66;
  undefined4 extraout_ECX_67;
  undefined4 extraout_ECX_68;
  undefined4 extraout_ECX_69;
  undefined4 extraout_ECX_70;
  undefined4 extraout_ECX_71;
  undefined4 extraout_ECX_72;
  undefined4 extraout_ECX_73;
  undefined4 extraout_ECX_74;
  undefined4 extraout_ECX_75;
  undefined4 extraout_ECX_76;
  undefined4 extraout_ECX_77;
  undefined4 extraout_ECX_78;
  undefined4 extraout_ECX_79;
  undefined4 extraout_ECX_80;
  float *pfVar3;
  undefined4 extraout_ECX_81;
  undefined4 extraout_ECX_82;
  undefined4 extraout_ECX_83;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  
  piVar1 = param_2;
  iVar2 = FUN_1024a140(param_3);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar6 = 0;
  do {
    iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar6 * 4));
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 7);
  if ((uint)param_2[2] < (uint)param_2[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
  }
  if (1 < (uint)(param_2[2] - param_2[1])) {
    uVar5 = (undefined1)param_4;
    *(undefined1 *)(param_2[1] + *param_2) = uVar5;
    param_2[1] = param_2[1] + 1;
    *(undefined1 *)(param_2[1] + *param_2) = 0;
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharSex]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x1c));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharExp]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x20));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarLevel]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x24));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharHP]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x28));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX,"[oCharMaxHP]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x2c);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_00,"[oCharReju]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x48);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_01,"[oCharMaxReju]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 100);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDeath]",&DAT_11d9e0b4,
                         (int)*(short *)(param_1 + 0x80));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharSta]",&DAT_11da0cf4,
                         (double)*(float *)(param_1 + 0x82));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_02,"[oCharMaxSta]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x86);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_03,"[oCharStaRecovery]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    pfVar3 = (float *)(param_1 + 0xa2);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      pfVar3 = pfVar3 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_04,"[oCharStaDdct]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    pfVar3 = (float *)(param_1 + 0xbe);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      pfVar3 = pfVar3 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_05,"[oCharStaDdctPeriod]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0xda);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_06,"[oCharDefence]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0xf6);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_07,"[oCritLevel]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x112);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_08,"[oCritDmg]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x12e);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_09,"[oAntiCritDmg]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x14a);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSharpness]",&DAT_11d9e0b4,
                         *(undefined4 *)(param_1 + 0x166));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_10,"[oMaxSharpness]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x16a);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_11,"[oSharpAttackMdf]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x186);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_12,"[oWaterAttack]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x1a2);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_13,"[oFireAttack]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x1be);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_14,"[oLightningAttack]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x1da);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a3b0(extraout_ECX_15,"[oDragonAttack]",7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x1f6);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    iVar2 = FUN_1010c060(param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1024a140(param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_1010c010(piVar1,"%s[0 : %I64i]:","[oIceAttack]",6,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x212);
    param_2 = (int *)0x0;
    do {
      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while (param_2 < 7);
    if ((uint)piVar1[2] < (uint)piVar1[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if (1 < (uint)(piVar1[2] - piVar1[1])) {
      *(undefined1 *)(piVar1[1] + *piVar1) = uVar5;
      piVar1[1] = piVar1[1] + 1;
      *(undefined1 *)(piVar1[1] + *piVar1) = 0;
      iVar2 = FUN_1024a140(param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_1010c010(piVar1,"%s[0 : %I64i]:","[oNonAttack]",6,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = (undefined4 *)(param_1 + 0x22e);
      param_2 = (int *)0x0;
      do {
        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_2 = (int *)((int)param_2 + 1);
        puVar4 = puVar4 + 1;
      } while (param_2 < 7);
      if ((uint)piVar1[2] < (uint)piVar1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
      }
      if (1 < (uint)(piVar1[2] - piVar1[1])) {
        *(undefined1 *)(piVar1[1] + *piVar1) = uVar5;
        piVar1[1] = piVar1[1] + 1;
        *(undefined1 *)(piVar1[1] + *piVar1) = 0;
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(piVar1,"%s[0 : %I64i]:","[oPoisonAttack]",6,0);
        if (iVar2 != 0) {
          return iVar2;
        }
        puVar4 = (undefined4 *)(param_1 + 0x24a);
        param_2 = (int *)0x0;
        do {
          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_2 = (int *)((int)param_2 + 1);
          puVar4 = puVar4 + 1;
        } while (param_2 < 7);
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
        }
        if (1 < (uint)(piVar1[2] - piVar1[1])) {
          *(undefined1 *)(piVar1[1] + *piVar1) = uVar5;
          piVar1[1] = piVar1[1] + 1;
          *(undefined1 *)(piVar1[1] + *piVar1) = 0;
          iVar2 = FUN_1024a140(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(piVar1,"%s[0 : %I64i]:","[oSleepyAttack]",6,0);
          if (iVar2 != 0) {
            return iVar2;
          }
          puVar4 = (undefined4 *)(param_1 + 0x266);
          param_2 = (int *)0x0;
          do {
            iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
            if (iVar2 != 0) {
              return iVar2;
            }
            param_2 = (int *)((int)param_2 + 1);
            puVar4 = puVar4 + 1;
          } while (param_2 < 7);
          if ((uint)piVar1[2] < (uint)piVar1[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
          }
          if (1 < (uint)(piVar1[2] - piVar1[1])) {
            *(undefined1 *)(piVar1[1] + *piVar1) = uVar5;
            piVar1[1] = piVar1[1] + 1;
            *(undefined1 *)(piVar1[1] + *piVar1) = 0;
            iVar2 = FUN_1024a140(param_3);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = FUN_1010c010(piVar1,"%s[0 : %I64i]:","[oParalysisAttack]",6,0);
            if (iVar2 != 0) {
              return iVar2;
            }
            puVar4 = (undefined4 *)(param_1 + 0x282);
            param_2 = (int *)0x0;
            do {
              iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
              if (iVar2 != 0) {
                return iVar2;
              }
              param_2 = (int *)((int)param_2 + 1);
              puVar4 = puVar4 + 1;
            } while (param_2 < 7);
            if ((uint)piVar1[2] < (uint)piVar1[1]) {
              _wassert(L"position <= length",
                       L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
            }
            if (1 < (uint)(piVar1[2] - piVar1[1])) {
              *(undefined1 *)(piVar1[1] + *piVar1) = uVar5;
              piVar1[1] = piVar1[1] + 1;
              *(undefined1 *)(piVar1[1] + *piVar1) = 0;
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWaterAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x29e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFireAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2a2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLightningAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2a6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDragonAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2aa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oIceAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2ae));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oNonAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2b2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_16,"[oWaterThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x2b6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_17,"[oFireThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x2d2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_18,"[oLightningThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x2ee);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_19,"[oDragonThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x30a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_20,"[oIceThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x326);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_21,"[oNonThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x342);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_22,"[oPiyoThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x35e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_23,"[oPoisonThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x37a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_24,"[oSleepingThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x396);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_25,"[oParaThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x3b2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_26,"[oPiyoDdct]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x3ce);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPiyoAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x3ea));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPoisonAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x3ee));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSleepingAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x3f2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oParaAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x3f6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_27,"[oCharSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x3fa);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_28,"[oCharAnimSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x416);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharMoney]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x432));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharBoundMoney]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x436));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharCredit]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x43a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharBoundCredit]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x43e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharFatigue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x442));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharMaxFatigue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x446));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClaymoreExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x44a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHammerExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x44e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oKatanaExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x452));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDuelSwordExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x456));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSwordExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x45a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSpearExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x45e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGunExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x462));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x466));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCrossbowExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x46a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFluteExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x46e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMaleFace]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x472));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMaleHair]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x476));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharRage]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x47a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_29,"[oCharMaxRage]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x47e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_30,"[oRejuDmgRatio]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x49a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_31,"[oRageRatio]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x4b6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQiRenValue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x4d2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_32,"[oQiRenMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x4d6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQiRenLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x4f2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_33,"[oQirenSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x4f6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_34,"[oLV1QiRenTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x512);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_35,"[oLV2QiRenTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x52e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0();
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x54a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_36,"[oQirenMaxTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010();
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRejuFlag]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x582));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_37,"[oAmmoMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x586);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oAmmoCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5a2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oAmmoID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5a6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oNextAmmoID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5aa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSubAmmoID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5ae));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTeamID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5b2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_38,"[oStaReduce]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x5b6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060();
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_39,"[oRageSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x5d2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_40,"[oCurStaReduce]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x5ee);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPerfAmmoPos]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x60a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPowerAmmoPos]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x60e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_41,"[oPerfectReloadTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x612);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_42,"[oPerfectReloadAmount]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x62e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWindPressureDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x64a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQuakeDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x64e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRoarDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x652));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPalsyDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x656));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSnowManDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x65a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTiredDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x65e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_43,"[oAttackLevelDef]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x662);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRegion]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x67e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oAdult]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x682));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oAASStatus]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x686));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEquipFoundDay]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x68a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_44,"[oReloadLevel]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x68e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_45,"[oRecoilLevel]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x6aa);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_46,"[oBulletSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x6c6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_47,"[oRecoilCameraShake]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x6e2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oUnderClothes]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x6fe));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oStateFlag]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x702));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_48,"[oCharRejuPer]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x706);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPetCarryNum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x722));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPetHomeNum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x726));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPetOwendNumMax]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x72a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharContribution]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x72e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_49,"[oBowStringTenacity]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x732);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_50,"[oMeleeBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x74e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_51,"[oStrikeBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x76a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_52,"[oPoisonBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x786);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_53,"[oSleepyBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x7a2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_54,"[oParaBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x7be);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMeleeBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7da));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oStrikeBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7de));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPoisonBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7e2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSleepyBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7e6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oParaBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7ea));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSecurityStatus]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7ee));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowShootCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7f2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastType]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7f6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharRemainsExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7fa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFarmExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x7fe));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFarmEvaluation]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x802));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSkinColor]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x806));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHairColor]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x80a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oInnerColor]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x80e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFaceTattooIndex]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x812));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEyeBall]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x816));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_55,"[oPlayerAtk]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x81a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFarmFriendGatherCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x836));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_56,"[oBackBossRunStaReduce]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x83a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_57,"[oPlayerCrit]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x856);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFaceTattooColor]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x872));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEyeColor]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x876));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_58,"[oAttrAtkFlag]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x87a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBattleState]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x896));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHammerMode]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x89a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_59,"[oHammerModeTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x89e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideFashion]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x8ba));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideSuite]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x8bc));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideHelm]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x8be));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharCatCredit]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x8c0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharReviveCredit]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x8c4));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oJinLiValue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x8c8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_60,"[oJinLiStep1MaxValue]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x8cc);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_61,"[oJinLiStep2MaxValue]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x8e8);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oJinLiStep1ReduceValue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x904));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oJinLiStep2ReduceValue]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x908));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEquipTitleID]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x90c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTitleExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x910));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTitleLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x914));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEquipTitleBuff]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x918));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSystemUnlockData]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x91c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGuildContribution]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x920));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oExtDailyExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x924));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGuildId]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x928));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTeamPasswordFlag]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x92c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLeftGhostValue]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0x92e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRightGhostValue]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0x932));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_62,"[oGhostMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x936);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGhostLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x952));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_63,"[oGhostDdctSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0x956);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_64,"[oGhostStaminaDdctSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0x972);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo1]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x98e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo2]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x990));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo3]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x992));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo4]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x994));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo5]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x996));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo6]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x998));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo7]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x99a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo8]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x99c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo9]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x99e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo10]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9a0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo11]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9a2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo12]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9a4));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo13]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9a6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo14]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9a8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo15]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9aa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo16]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9ac));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo17]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9ae));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo18]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9b0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo19]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9b2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo20]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9b4));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo21]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9b6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo22]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9b8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo23]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9ba));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo24]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9bc));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo25]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9be));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDistArrowUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9c0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oExplodeArrowUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9c4));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTiringArrowUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9c8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharScore]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9cc));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0x9d0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEntrustMoney1]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9d2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEntrustMoney2]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9d6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharmFoundTimes]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9da));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWeapSysUnlockFlag]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9de));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharRemainsDoubleExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9e2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oExtDailyDoubleExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9e6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9ea));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9ee));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPBaseEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9f2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPGrowthEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9f6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPProfitEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9fa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBanChatEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x9fe));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPVASFrozen]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa02));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPBaseCanUse]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa04));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPGrowthCanUse]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa06));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPProfitCanUse]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa08));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSystemUnlockExtData1]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa0a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_65,"[oBowChargeLevelMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xa0e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oIsVIPBaseExpireNtf]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa2a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPBaseExpireLastNtfTime]",
                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xa2c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGameVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa30));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQQVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa32));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oYearQQVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa34));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSuperQQVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa36));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oNetbarLevel]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xa38));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPVASFrozenTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa3a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClanScore]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa3e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClanScoreMax]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa42));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClanMoney]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa46));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGunLanceValue]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xa4a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_66,"[oGunLanceMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xa4e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_67,"[oGunLanceDdctSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xa6a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGunLanceAmmoCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xa86));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_68,"[oGunLanceMaxAmmoCount]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xa8a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_69,"[oRapidShootAdd]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xaa6);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharHRLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xac2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharHRPoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xac6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClanMoneyPVP]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xaca));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_70,"[oCharDefenseSuperArmorLevel]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xace);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oClanLeaveTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xaea));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_71,"[oCharLanceDefenseChargeLv]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xaee);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oXYVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb0a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo26]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb0c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo27]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb0e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo28]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb10));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo29]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb12));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo30]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb14));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo31]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb16));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo32]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb18));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo33]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb1a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo34]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb1c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo35]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb1e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo36]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb20));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo37]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb22));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo38]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb24));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo39]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb26));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo40]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb28));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo41]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb2a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo42]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb2c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo43]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb2e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo44]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb30));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo45]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb32));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo46]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb34));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo47]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb36));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSanctionPunishEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb38));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTGPVIP]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xb3c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMVMMonsterFirst]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb3e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMVMMonsterSecond]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb42));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMVMMonsterThird]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb46));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_72,"[oLuckValule]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xb4a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSanctionPunishRatio]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb66));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCheatSanctionPunishRatio]",
                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xb6a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFluteTune]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb6e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_73,"[oDefenseReduceHPModifyRate]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xb72);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_74,"[oDefenseReduceStaModifyRate]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xb8e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_75,"[oGunLanceSkillZAngleSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xbaa);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDeadTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbc6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPersonalELO]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbca));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPVPMoney]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbce));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharCatMoney]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbd2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharCatMoneyWeek]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbd6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharCatMoneyWeekMax]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbda));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbde));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWildHuntCamp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbe2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWildHuntPhase]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbe6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWildHuntGuild]","%I64u",
                                   *(undefined4 *)(param_1 + 0xbea),*(undefined4 *)(param_1 + 0xbee)
                                  );
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTotalCredit]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xbf2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBattleCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbf6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFirstLoginTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbfa));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLastHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xbfe));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTotalHRPoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc02));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLikeHunterOfficer]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc06));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHuntingCreditExchange]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc0a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_76,"[oPvPAttackLevelDef]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xc0e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLevelShowType]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc2a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_77,"[oCharEvadeTime]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xc2e);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyRoundCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc4a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyActivity]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc4e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyCurGrid]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc52));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_78,"[oZhanJiValue]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xc56);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oShouHunPoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc72));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLieHunPoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc76));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMVPPoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc7a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oXHunterScore]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xc7e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastSpeedVeryFast]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xc82));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastSpeedFast]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xc86));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastSpeedNormal]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xc8a));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastSpeedSlow]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xc8e));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oBowBlastSP]",&DAT_11da0cf4,
                                   (double)*(float *)(param_1 + 0xc92));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_79,"[oBowBlastSPMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xc96);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_80,"[oCurrentBowBlastSpeed]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              pfVar3 = (float *)(param_1 + 0xcb2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                pfVar3 = pfVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyAccStep]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcce));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oXHunterHighScore]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcd2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSoulStoneLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcd6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWeekMoneyGain]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcda));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSoulStoneAtkLevel]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcde));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oXHunterActivity]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xce2));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oIsNewbie]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 0xce6));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLevelHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xce8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTaskHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcec));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCampHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcf0));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oPrivateRealHuntSoul]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcf4));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideWeaponBreakEffect]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcf8));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oIllustratePoint]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xcfc));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_81,"[oDynamiteAttack]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xd00);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_82,"[oDynamiteThrsh]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xd1c);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDynamiteAccum]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xd38));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDynamiteDef]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xd3c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a3b0(extraout_ECX_83,"[oDynamiteBottleMax]",7,0);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = (undefined4 *)(param_1 + 0xd40);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDynamiteBottleUsed]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xd5c));
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGuildBanChatEndTime]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xd60));
              return iVar2;
            }
          }
        }
      }
    }
  }
  return -1;
}



