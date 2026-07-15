/* ===== FUN_10136e50 @ 10136e50  size=3244 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TlvTitleList_Print, TlvGuildMemberList_Print, TlvGuildApplyList_Print, TlvSkillList_Print, TdrText_ArrayElemLabel, TlvStoreData_DebugPrint, TlvGuildCommerceData_DebugPrint, TlvGuildFuncRecords_DebugPrint, TlvGuildBuyRecords_DebugPrint
// strings:
//   "%I64u"
//   "[seed]"
//   "[name]"
//   "[icon]"
//   "[note]"
//   "[level]"
//   "[exp]"
//   "[repute]"
//   "[fund]"
//   "[arena]"
//   "[resA]"
//   "[resB]"
//   "[joinLevel]"
//   "[leader]"
//   "[titles]"
//   "[guilders]"
//   "[applys]"
//   "[fundMax]"
//   "[hallLevel]"
//   "[recruitingLevel]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[seed]""
     ""[name]""
     ""[icon]""
     ""[note]""
     ""[level]""
     ""[exp]""
     ""[repute]""
     ""[fund]""
     ""[arena]"" */

int __thiscall FUN_10136e50(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar3;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  
  iVar2 = param_3;
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11d9faa0,"%I64u",*param_1,param_1[1]);
  if (((((((iVar1 == 0) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[seed]",&DAT_11d9e0b4,param_1[2]),
          iVar1 == 0)) && (iVar1 = TdrText_FieldValueFmt(param_4,"[name]",param_1 + 3), iVar1 == 0))
        && ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[icon]",&DAT_11d9e0b4,param_1[0xb]
                                        ), iVar1 == 0 &&
            (iVar1 = TdrText_FieldValueFmt(param_4,"[note]",param_1 + 0xc), iVar1 == 0)))) &&
       ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,param_1[0x89]),
        iVar1 == 0 &&
        ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[exp]",&DAT_11d9e0b4,param_1[0x8a]),
         iVar1 == 0 &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[repute]",&DAT_11d9e0b4,param_1[0x8b]
                                     ), iVar1 == 0)))))) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fund]",&DAT_11d9e0b4,param_1[0x8c]),
      iVar1 == 0)) &&
     ((((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[arena]",&DAT_11d9e0b4,param_1[0x8d]),
        iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resA]",&DAT_11d9e0b4,param_1[0x8e]),
        iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resB]",&DAT_11d9e0b4,param_1[0x8f]),
       iVar1 == 0)) &&
      (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[joinLevel]",&DAT_11d9e0b4,
                                     param_1[0x90]), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[leader]","%I64u",param_1[0x91],
                                     param_1[0x92]), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[titles]",extraout_ECX), iVar1 == 0)))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = TlvTitleList_Print(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[guilders]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = TlvGuildMemberList_Print(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[applys]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TlvGuildApplyList_Print(param_2,iVar1,param_4);
        if (((((((iVar1 == 0) &&
                (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fundMax]","%I64u",
                                             param_1[0xd8b9],param_1[0xd8ba]), iVar1 == 0)) &&
               (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[hallLevel]",&DAT_11d9e0b4,
                                            *(undefined1 *)(param_1 + 0xd8bb)), iVar1 == 0)) &&
              (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[recruitingLevel]",
                                             &DAT_11d9e0b4,*(undefined1 *)((int)param_1 + 0x362ed)),
                iVar1 == 0 &&
                (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resourcingLevel]",
                                             &DAT_11d9e0b4,*(undefined1 *)((int)param_1 + 0x362ee)),
                iVar1 == 0)) &&
               ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[tradingLevel]",&DAT_11d9e0b4,
                                             *(undefined1 *)((int)param_1 + 0x362ef)), iVar1 == 0 &&
                ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[trainingLevel]",
                                              &DAT_11d9e0b4,*(undefined1 *)(param_1 + 0xd8bc)),
                 iVar1 == 0 &&
                 (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[guilderCountMax]",
                                              &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x362f1))
                 , iVar1 == 0)))))))) &&
             (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fundDaily]","%I64u",
                                            *(undefined4 *)((int)param_1 + 0x362f5),
                                            *(undefined4 *)((int)param_1 + 0x362f9)), iVar1 == 0 &&
               (((((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fundWeekly]","%I64u",
                                                *(undefined4 *)((int)param_1 + 0x362fd),
                                                *(undefined4 *)((int)param_1 + 0x36301)), iVar1 == 0
                   && (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commodityUnlock1]",
                                                   "%I64u",*(undefined4 *)((int)param_1 + 0x36305),
                                                   *(undefined4 *)((int)param_1 + 0x36309)),
                      iVar1 == 0)) &&
                  (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commodityUnlock2]","%I64u",
                                               *(undefined4 *)((int)param_1 + 0x3630d),
                                               *(undefined4 *)((int)param_1 + 0x36311)), iVar1 == 0)
                  ) && ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commodityUnlock3]",
                                                     "%I64u",*(undefined4 *)((int)param_1 + 0x36315)
                                                     ,*(undefined4 *)((int)param_1 + 0x36319)),
                        iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fundDailyTime]",
                                                     &DAT_11d9f574,
                                                     *(undefined4 *)((int)param_1 + 0x3631d)),
                        iVar1 == 0)))) &&
                (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fundWeeklyTime]",
                                             &DAT_11d9f574,*(undefined4 *)((int)param_1 + 0x36321)),
                iVar1 == 0)))) &&
              (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resC]",&DAT_11d9e0b4,
                                             *(undefined4 *)((int)param_1 + 0x36325)), iVar1 == 0 &&
                (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resD]",&DAT_11d9e0b4,
                                             *(undefined4 *)((int)param_1 + 0x36329)), iVar1 == 0))
               && (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resADaily]",&DAT_11d9e0b4
                                                 ,*(undefined4 *)((int)param_1 + 0x3632d)),
                    iVar1 == 0 &&
                    (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resBDaily]",
                                                   &DAT_11d9e0b4,
                                                   *(undefined4 *)((int)param_1 + 0x36331)),
                      iVar1 == 0 &&
                      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resCDaily]",
                                                   &DAT_11d9e0b4,
                                                   *(undefined4 *)((int)param_1 + 0x36335)),
                      iVar1 == 0)) &&
                     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resDDaily]",
                                                  &DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x36339)),
                     iVar1 == 0)))) &&
                   (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resAWeekly]",
                                                  &DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x3633d)),
                     iVar1 == 0 &&
                     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resBWeekly]",
                                                  &DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x36341)),
                     iVar1 == 0)) &&
                    (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resCWeekly]",
                                                 &DAT_11d9e0b4,
                                                 *(undefined4 *)((int)param_1 + 0x36345)),
                    iVar1 == 0)))))))))) &&
            ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resDWeekly]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x36349)), iVar1 == 0 &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resAMax]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x3634d)), iVar1 == 0))))
           && (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resBMax]",&DAT_11d9e0b4,
                                             *(undefined4 *)((int)param_1 + 0x36351)), iVar1 == 0 &&
                (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resCMax]",&DAT_11d9e0b4,
                                               *(undefined4 *)((int)param_1 + 0x36355)), iVar1 == 0
                  && (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resDMax]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x36359)),
                     iVar1 == 0)) &&
                 (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[addFundWithDay]",
                                              &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x3635d))
                 , iVar1 == 0)))) &&
               (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[consumeFundWithDay]",
                                              &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x36361))
                 , iVar1 == 0 &&
                 (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[plot]",&DAT_11d9e0b4,
                                              *(undefined4 *)((int)param_1 + 0x36365)), iVar1 == 0))
                && (iVar1 = TdrText_FieldLabelChar(param_4,"[tasks]",extraout_ECX_02), iVar1 == 0)))
               ))) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_10127330(param_2,iVar1,param_4);
          if ((iVar1 == 0) &&
             (iVar1 = TdrText_FieldLabelChar(param_4,"[skills]",extraout_ECX_03), iVar1 == 0)) {
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = TlvSkillList_Print(param_2,iVar1,param_4);
            if ((iVar1 == 0) &&
               (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[signUpCount]",&DAT_11d9e0b4,
                                            *(undefined4 *)((int)param_1 + 0x38dda)), iVar1 == 0)) {
              iVar1 = *(int *)((int)param_1 + 0x38dda);
              if (iVar1 < 0) {
                return -6;
              }
              if (0x40 < iVar1) {
                return -7;
              }
              iVar3 = 0;
              param_3 = 0;
              if (0 < iVar1) {
                do {
                  iVar1 = TdrText_ArrayElemLabel(param_4,"[signUps]",param_3,param_3);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  iVar1 = iVar2;
                  if (-1 < iVar2) {
                    iVar1 = iVar2 + 1;
                  }
                  iVar1 = FUN_1012c700(param_2,iVar1,param_4);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  iVar3 = param_3 + 1;
                  param_3 = iVar3;
                } while (iVar3 < *(int *)((int)param_1 + 0x38dda));
              }
              iVar1 = TdrText_FieldLabelChar(param_4,"[stores]",iVar3);
              if (iVar1 == 0) {
                iVar1 = iVar2;
                if (-1 < iVar2) {
                  iVar1 = iVar2 + 1;
                }
                iVar1 = TlvStoreData_DebugPrint(param_2,iVar1,param_4);
                if (((iVar1 == 0) &&
                    (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[depotOpenFlag]","0x%02x",
                                                 *(undefined1 *)(param_1 + 0x1b7b4)), iVar1 == 0))
                   && (iVar1 = TdrText_FieldLabelChar(param_4,"[randCommodities]",extraout_ECX_04),
                      iVar1 == 0)) {
                  iVar1 = iVar2;
                  if (-1 < iVar2) {
                    iVar1 = iVar2 + 1;
                  }
                  iVar1 = FUN_1012a660(param_2,iVar1,param_4);
                  if ((iVar1 == 0) &&
                     (iVar1 = TdrText_FieldLabelChar(param_4,"[quest]",extraout_ECX_05), iVar1 == 0)
                     ) {
                    iVar1 = iVar2;
                    if (-1 < iVar2) {
                      iVar1 = iVar2 + 1;
                    }
                    iVar1 = FUN_1012aea0(param_2,iVar1,param_4);
                    if (((((iVar1 == 0) &&
                          (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[questPrize]",
                                                       &DAT_11d9e0b4,
                                                       *(undefined4 *)((int)param_1 + 0x6df65)),
                          iVar1 == 0)) &&
                         ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[contribution]",
                                                       &DAT_11d9e0b4,
                                                       *(undefined4 *)((int)param_1 + 0x6df69)),
                          iVar1 == 0 &&
                          ((((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[createTime]",
                                                          &DAT_11d9f574,
                                                          *(undefined4 *)((int)param_1 + 0x6df6d)),
                             iVar1 == 0 &&
                             (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[huntSoul]","%I64u"
                                                          ,*(undefined4 *)((int)param_1 + 0x6df71),
                                                          *(undefined4 *)((int)param_1 + 0x6df75)),
                             iVar1 == 0)) &&
                            (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[wildHuntCamp]",
                                                         &DAT_11d9e0b4,
                                                         *(undefined4 *)((int)param_1 + 0x6df79)),
                            iVar1 == 0)) &&
                           ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[wildHuntPhase]",
                                                         &DAT_11d9e0b4,
                                                         *(undefined4 *)((int)param_1 + 0x6df7d)),
                            iVar1 == 0 &&
                            (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[celebrationTaskA]",
                                                         &DAT_11d9e0b4,
                                                         *(undefined4 *)((int)param_1 + 0x6df81)),
                            iVar1 == 0)))))))) &&
                        ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[celebrationTaskB]",
                                                      &DAT_11d9e0b4,
                                                      *(undefined4 *)((int)param_1 + 0x6df85)),
                         iVar1 == 0 &&
                         ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[celebrationTaskC]",
                                                       &DAT_11d9e0b4,
                                                       *(undefined4 *)((int)param_1 + 0x6df89)),
                          iVar1 == 0 &&
                          (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[celebrationTaskD]",
                                                       &DAT_11d9e0b4,
                                                       *(undefined4 *)((int)param_1 + 0x6df8d)),
                          iVar1 == 0)))))) &&
                       (((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[celebrationScore]",
                                                      &DAT_11d9e0b4,
                                                      *(undefined4 *)((int)param_1 + 0x6df91)),
                         iVar1 == 0 &&
                         (((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,
                                                        "[celebrationDailyUpdate]",&DAT_11d9f574,
                                                        *(undefined4 *)((int)param_1 + 0x6df95)),
                           iVar1 == 0 &&
                           (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,
                                                        "[celebrationWeeklyScoreUpdate]",
                                                        &DAT_11d9f574,
                                                        *(undefined4 *)((int)param_1 + 0x6df99)),
                           iVar1 == 0)) &&
                          (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,
                                                       "[celebrationDailyScore]",&DAT_11d9f574,
                                                       *(undefined4 *)((int)param_1 + 0x6df9d)),
                          iVar1 == 0)))) &&
                        ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,
                                                      "[celebrationWeeklyRewardUpdate]",
                                                      &DAT_11d9f574,
                                                      *(undefined4 *)((int)param_1 + 0x6dfa1)),
                         iVar1 == 0 &&
                         (iVar1 = TdrText_FieldLabelChar(param_4,"[guildWar]",extraout_ECX_06),
                         iVar1 == 0)))))) {
                      iVar1 = iVar2;
                      if (-1 < iVar2) {
                        iVar1 = iVar2 + 1;
                      }
                      iVar1 = TlvGuildCommerceData_DebugPrint(param_2,iVar1,param_4);
                      if ((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldLabelChar
                                            (param_4,"[guildOperateRecord]",extraout_ECX_07),
                         iVar1 == 0)) {
                        iVar1 = iVar2;
                        if (-1 < iVar2) {
                          iVar1 = iVar2 + 1;
                        }
                        iVar1 = TlvGuildFuncRecords_DebugPrint(param_2,iVar1,param_4);
                        if ((iVar1 == 0) &&
                           (iVar1 = TdrText_FieldLabelChar
                                              (param_4,"[guildBuyRecord]",extraout_ECX_08),
                           iVar1 == 0)) {
                          if (iVar2 < 0) {
                            iVar2 = TlvGuildBuyRecords_DebugPrint(param_2,iVar2,param_4);
                            return iVar2;
                          }
                          iVar1 = TlvGuildBuyRecords_DebugPrint(param_2,iVar2 + 1,param_4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1014d8b0 @ 1014d8b0  size=706 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[levelCnt]"
//   "[levelID]"
//   "[theBestScore]"
//   "[state]"
//   " 0x%02x"
//   "[historyFinalRank]"
//   "[gainRewardFlag]"
//   "[lastTm]"

/* [RE-AUTO c0]
   strings:
     ""[levelCnt]""
     ""[levelID]""
     ""[theBestScore]""
     ""[state]""
     "" 0x%02x""
     ""[historyFinalRank]""
     ""[gainRewardFlag]""
     ""[lastTm]"" */

int __thiscall
FUN_1014d8b0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelCnt]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (5000 < *param_1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(5000,"[levelID]",*param_1,0);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,*(undefined4 *)(param_1 + (uint)uVar2 * 2 + 1))
          ;
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        if (5000 < *param_1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(5000,"[theBestScore]",*param_1,0);
        if (iVar1 == 0) {
          uVar2 = 0;
          if (*param_1 != 0) {
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar2 + 0x2711]);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *param_1);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if (iVar1 == 0) {
            if (5000 < *param_1) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(5000,"[state]",*param_1,0);
            if (iVar1 == 0) {
              uVar2 = 0;
              if (*param_1 != 0) {
                do {
                  iVar1 = FUN_1010c010(param_2," 0x%02x",
                                       *(undefined1 *)(uVar2 + 0x7532 + (int)param_1));
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  uVar2 = uVar2 + 1;
                } while (uVar2 < *param_1);
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
              if (iVar1 == 0) {
                if (5000 < *param_1) {
                  return -7;
                }
                iVar1 = TdrText_ArrayHeader(5000,"[historyFinalRank]",*param_1,0);
                if (iVar1 == 0) {
                  uVar2 = 0;
                  if (*param_1 != 0) {
                    do {
                      iVar1 = FUN_1010c010(param_2," 0x%02x",
                                           *(undefined1 *)(uVar2 + 0x88ba + (int)param_1));
                      if (iVar1 != 0) {
                        return iVar1;
                      }
                      uVar2 = uVar2 + 1;
                    } while (uVar2 < *param_1);
                  }
                  iVar1 = TdrBuf_PutU8Z(param_4);
                  if (iVar1 == 0) {
                    if (5000 < *param_1) {
                      return -7;
                    }
                    iVar1 = TdrText_ArrayHeader(5000,"[gainRewardFlag]",*param_1,0);
                    if (iVar1 == 0) {
                      uVar2 = 0;
                      if (*param_1 != 0) {
                        do {
                          iVar1 = FUN_1010c010(param_2," 0x%02x",
                                               *(undefined1 *)(uVar2 + 0x9c42 + (int)param_1));
                          if (iVar1 != 0) {
                            return iVar1;
                          }
                          uVar2 = uVar2 + 1;
                        } while (uVar2 < *param_1);
                      }
                      iVar1 = TdrBuf_PutU8Z(param_4);
                      if (iVar1 == 0) {
                        if (5000 < *param_1) {
                          return -7;
                        }
                        iVar1 = TdrText_ArrayHeader(5000,"[lastTm]",*param_1,0);
                        if (iVar1 == 0) {
                          uVar2 = 0;
                          if (*param_1 != 0) {
                            do {
                              iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,
                                                   *(undefined4 *)
                                                    (param_1 + (uint)uVar2 * 2 + 0x57e5));
                              if (iVar1 != 0) {
                                return iVar1;
                              }
                              uVar2 = uVar2 + 1;
                            } while (uVar2 < *param_1);
                          }
                          iVar1 = TdrBuf_PutU8Z(param_4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1014e300 @ 1014e300  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLastResetTime]"
//   "[iGainChallangeRewardTimes]"
//   "[iGainSuccessRewardTimes]"
//   "[iGainVipChallangeRewardTimes]"
//   "[iGainVipSuccessRewardTimes]"

/* [RE-AUTO c0]
   strings:
     ""[iLastResetTime]""
     ""[iGainChallangeRewardTimes]""
     ""[iGainSuccessRewardTimes]""
     ""[iGainVipChallangeRewardTimes]""
     ""[iGainVipSuccessRewardTimes]"" */

void __thiscall
FUN_1014e300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLastResetTime]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainChallangeRewardTimes]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainSuccessRewardTimes]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipChallangeRewardTimes]",
                                    &DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipSuccessRewardTimes]",&DAT_11d9e0b4,
                              param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1017f1e0 @ 1017f1e0  size=404 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iCurSeason]"
//   "[iScore]"
//   "[iScoreTop]"
//   "[iWeekReward]"
//   "[iStreak]"
//   "[iWinNum]"
//   "[iLoseNum]"
//   "[iTotalNum]"
//   "[iRewardMask]"
//   "[iExRewardCount]"
//   "[iStepReward]"
//   "[iExMedalCount]"

/* [RE-AUTO c0]
   strings:
     ""[iCurSeason]""
     ""[iScore]""
     ""[iScoreTop]""
     ""[iWeekReward]""
     ""[iStreak]""
     ""[iWinNum]""
     ""[iLoseNum]""
     ""[iTotalNum]""
     ""[iRewardMask]""
     ""[iExRewardCount]"" */

void __thiscall
FUN_1017f1e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCurSeason]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iScore]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iScoreTop]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeekReward]",&DAT_11d9e0b4,param_1[3]
                                   );
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStreak]",&DAT_11d9e0b4,param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWinNum]",&DAT_11d9e0b4,param_1[5]
                                       );
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLoseNum]",&DAT_11d9e0b4,
                                          param_1[6]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTotalNum]",&DAT_11d9e0b4,
                                            param_1[7]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardMask]",&DAT_11d9e0b4,
                                              param_1[8]);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iExRewardCount]",
                                                &DAT_11d9e0b4,param_1[9]);
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStepReward]",
                                                  &DAT_11d9e0b4,param_1[10]);
                      if (iVar1 == 0) {
                        TdrText_FieldScalar(param_2,param_3,param_4,"[iExMedalCount]",&DAT_11d9e0b4,
                                            param_1[0xb]);
                      }
                    }
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



/* ===== FUN_101817b0 @ 101817b0  size=234 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dateDay]"
//   "[curHigher]"
//   "[meetTime]"
//   "[giantTime]"
//   "[dailyRewardFlag]"
//   "[rewardFlag]"
//   "[activity]"

/* [RE-AUTO c0]
   strings:
     ""[dateDay]""
     ""[curHigher]""
     ""[meetTime]""
     ""[giantTime]""
     ""[dailyRewardFlag]""
     ""[rewardFlag]""
     ""[activity]"" */

void __thiscall
FUN_101817b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dateDay]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[curHigher]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[meetTime]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[giantTime]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dailyRewardFlag]",&DAT_11d9e0b4,
                                      param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[rewardFlag]",&DAT_11d9e0b4,
                                        param_1[5]);
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[activity]",&DAT_11d9e0b4,param_1[6]);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1018f060 @ 1018f060  size=108 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[chapterId]"
//   "[getRewardCount]"
//   "0x%02x"
//   "[isNotNew]"

/* [RE-AUTO c0]
   strings:
     ""[chapterId]""
     ""[getRewardCount]""
     ""0x%02x""
     ""[isNotNew]"" */

void __thiscall
FUN_1018f060(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chapterId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[getRewardCount]",&DAT_11d9e0b4,param_1[1])
    ;
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[isNotNew]","0x%02x",(int)*(char *)(param_1 + 2))
      ;
    }
  }
  return;
}



/* ===== FUN_101b8940 @ 101b8940  size=6261 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[roleGID]"
//   "[oCharLevel]"
//   "[oCharExp]"
//   "[oStarLevel]"
//   "[oCharHP]"
//   "[oCharMaxHP]"
//   "[oCharStr]"
//   "[oCharBst]"
//   "[oCharLck]"
//   "[oCharVgr]"
//   "[oCharDefence]"
//   "[oCharMoney]"
//   "[oCharBoundMoney]"
//   "[oCharCredit]"
//   "[oCharBoundCredit]"
//   "[oCharFatigue]"
//   "[oCharMaxFatigue]"
//   "[oClaymoreExp]"
//   "[oHammerExp]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[roleGID]""
     ""[oCharLevel]""
     ""[oCharExp]""
     ""[oStarLevel]""
     ""[oCharHP]""
     ""[oCharMaxHP]""
     ""[oCharStr]""
     ""[oCharBst]""
     ""[oCharLck]"" */

void __thiscall
FUN_101b8940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[roleGID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharLevel]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharExp]",&DAT_11d9e0b4,param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oStarLevel]",&DAT_11d9e0b4,param_1[4])
        ;
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharHP]",&DAT_11d9e0b4,param_1[5]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharMaxHP]",&DAT_11d9e0b4,
                                        param_1[6]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharStr]",&DAT_11d9e0b4,
                                          param_1[7]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharBst]",&DAT_11d9e0b4,
                                            param_1[8]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharLck]",&DAT_11d9e0b4,
                                              param_1[9]);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharVgr]",&DAT_11d9e0b4,
                                                param_1[10]);
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharDefence]",
                                                  &DAT_11d9e0b4,param_1[0xb]);
                      if (iVar1 == 0) {
                        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharMoney]",
                                                    &DAT_11d9e0b4,param_1[0xc]);
                        if (iVar1 == 0) {
                          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharBoundMoney]",
                                                      &DAT_11d9e0b4,param_1[0xd]);
                          if (iVar1 == 0) {
                            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharCredit]",
                                                        &DAT_11d9e0b4,param_1[0xe]);
                            if (iVar1 == 0) {
                              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                          "[oCharBoundCredit]",&DAT_11d9e0b4,
                                                          param_1[0xf]);
                              if (iVar1 == 0) {
                                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharFatigue]"
                                                            ,&DAT_11d9e0b4,param_1[0x10]);
                                if (iVar1 == 0) {
                                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                              "[oCharMaxFatigue]",&DAT_11d9e0b4,
                                                              param_1[0x11]);
                                  if (iVar1 == 0) {
                                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                "[oClaymoreExp]",&DAT_11d9e0b4,
                                                                param_1[0x12]);
                                    if (iVar1 == 0) {
                                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                  "[oHammerExp]",&DAT_11d9e0b4,
                                                                  param_1[0x13]);
                                      if (iVar1 == 0) {
                                        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                    "[oKatanaExp]",&DAT_11d9e0b4,
                                                                    param_1[0x14]);
                                        if (iVar1 == 0) {
                                          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                      "[oDuelSwordExp]",
                                                                      &DAT_11d9e0b4,param_1[0x15]);
                                          if (iVar1 == 0) {
                                            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                        "[oSwordExp]",&DAT_11d9e0b4,
                                                                        param_1[0x16]);
                                            if (iVar1 == 0) {
                                              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                          "[oSpearExp]",
                                                                          &DAT_11d9e0b4,
                                                                          param_1[0x17]);
                                              if (iVar1 == 0) {
                                                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                            "[oGunExp]",
                                                                            &DAT_11d9e0b4,
                                                                            param_1[0x18]);
                                                if (iVar1 == 0) {
                                                  iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                              param_4,"[oBowExp]",
                                                                              &DAT_11d9e0b4,
                                                                              param_1[0x19]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCrossbowExp]",&DAT_11d9e0b4,param_1[0x1a]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFluteExp]",&DAT_11d9e0b4,param_1[0x1b]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMaleFace]",&DAT_11d9e0b4,param_1[0x1c]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMaleHair]",&DAT_11d9e0b4,param_1[0x1d]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oEquipFoundDay]",&DAT_11d9e0b4,param_1[0x1e]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oUnderClothes]",&DAT_11d9e0b4,param_1[0x1f]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,"[oNewbie]",
                                                                                &DAT_11d9e0b4,
                                                                                param_1[0x20]);
                                                    if (iVar1 == 0) {
                                                      iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                  param_4,
                                                  "[oCharContribution]",&DAT_11d9e0b4,param_1[0x21])
                                                  ;
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharRemainsExp]",&DAT_11d9e0b4,param_1[0x22]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFarmOpenFlag]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x23));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,"[oFarmExp]"
                                                                                ,&DAT_11d9e0b4,
                                                                                *(undefined4 *)
                                                                                 ((int)param_1 +
                                                                                 0x8e));
                                                    if (iVar1 == 0) {
                                                      iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                  param_4,
                                                  "[oFarmEvaluation]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x92));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLastResetTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x96));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oSkinColor]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x9a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHairColor]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x9e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oInnerColor]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0xa2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFaceTattooIndex]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0xa6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,"[oEyeBall]"
                                                                                ,&DAT_11d9e0b4,
                                                                                *(undefined4 *)
                                                                                 ((int)param_1 +
                                                                                 0xaa));
                                                    if (iVar1 == 0) {
                                                      iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                  param_4,
                                                  "[oFarmFriendGatherCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0xae));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFaceTattooColor]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0xb2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oEyeColor]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0xb6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHideFashion]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xba));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHideSuite]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x2f));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHideHelm]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xbe));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharCatCredit]",&DAT_11d9e0b4,param_1[0x30]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharReviveCredit]",&DAT_11d9e0b4,param_1[0x31])
                                                  ;
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oSystemUnlockData]",&DAT_11d9e0b4,param_1[0x32])
                                                  ;
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oExtDailyExp]",&DAT_11d9e0b4,param_1[0x33]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo1]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x34));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo2]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xd2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo3]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x35));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo4]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xd6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo5]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x36));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo6]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xda));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo7]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x37));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo8]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xde));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo9]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x38));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo10]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xe2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo11]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x39));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo12]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xe6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo13]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo14]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xea));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo15]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3b));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo16]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xee));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo17]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3c));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo18]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xf2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo19]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3d));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo20]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xf6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo21]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo22]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xfa));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo23]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x3f));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo24]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0xfe));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo25]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x40));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,"[oVIP]",
                                                                                &DAT_11d9e0b4,
                                                                                (int)*(short *)((int
                                                  )param_1 + 0x102));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oEntrustMoney1]",&DAT_11d9e0b4,param_1[0x41]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oEntrustMoney2]",&DAT_11d9e0b4,param_1[0x42]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharmFoundTimes]",&DAT_11d9e0b4,param_1[0x43]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWeapSysUnlockFlag]",&DAT_11d9e0b4,param_1[0x44]
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharRemainsDoubleExp]",&DAT_11d9e0b4,
                                                  param_1[0x45]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oExtDailyDoubleExp]",&DAT_11d9e0b4,param_1[0x46]
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPLevel]",&DAT_11d9e0b4,param_1[0x47]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,"[oVIPExp]",
                                                                                &DAT_11d9e0b4,
                                                                                param_1[0x48]);
                                                    if (iVar1 == 0) {
                                                      iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                  param_4,
                                                  "[oVIPBaseEndTime]",&DAT_11d9e0b4,param_1[0x49]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPGrowthEndTime]",&DAT_11d9e0b4,param_1[0x4a])
                                                  ;
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPProfitEndTime]",&DAT_11d9e0b4,param_1[0x4b])
                                                  ;
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oBanChatEndTime]",&DAT_11d9e0b4,param_1[0x4c]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPVASFrozen]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x4d));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPBaseCanUse]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x136));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPGrowthCanUse]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x4e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPProfitCanUse]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x13a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oSystemUnlockExtData1]",&DAT_11d9e0b4,
                                                  param_1[0x4f]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oIsVIPBaseExpireNtf]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x50));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPBaseExpireLastNtfTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x142));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oVIPVASFrozenTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x146));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oClanScore]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x14a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oClanScoreMax]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x14e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oClanMoney]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x152));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharHRLevel]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x156));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharHRPoint]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x15a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oClanMoneyPVP]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x15e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oClanLeaveTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x162));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo26]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x166));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo27]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo28]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x16a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo29]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5b));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo30]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x16e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo31]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5c));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo32]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x172));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo33]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5d));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo34]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x176));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo35]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo36]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x17a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo37]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x5f));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo38]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x17e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo39]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x60));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo40]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x182));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo41]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x61));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo42]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x186));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo43]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x62));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo44]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x18a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo45]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 99));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo46]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x18e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFacialInfo47]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 100));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oPersonalELO]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x192));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oPVPMoney]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x196));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharCatMoney]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x19a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharCatMoneyWeek]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x19e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCharCatMoneyWeekMax]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1a2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHuntSoul]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1a6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWildHuntCamp]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1aa));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWildHuntPhase]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1ae));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWildHuntGuild]","%I64u",
                                                  *(undefined4 *)((int)param_1 + 0x1b2),
                                                  *(undefined4 *)((int)param_1 + 0x1b6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oTotalCredit]",&DAT_11da0cf4,
                                                  (double)*(float *)((int)param_1 + 0x1ba));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oBattleCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1be));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oFirstLoginTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1c2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLastHuntSoul]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1c6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oTotalHRPoint]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1ca));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLikeHunterOfficer]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1ce));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oPetSkillMoral]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1d2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oPetSkillUpgradeMoral]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1d6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHuntingCreditExchange]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1da));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLevelShowType]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1de));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMonolopyRoundCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1e2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMonolopyActivity]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1e6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMonolopyCurGrid]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1ea));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oShouHunPoint]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1ee));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLieHunPoint]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1f2));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMVPPoint]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1f6));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oXHunterScore]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1fa));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oMonolopyAccStep]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x1fe));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oXHunterHighScore]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x202));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oSoulStoneLevel]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x206));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWeeklyRefreshTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x20a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oWeekMoneyGain]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x20e));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oSoulStoneAtkLevel]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x212));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oXHunterActivity]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x216));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oIsNewbie]",&DAT_11d9e0b4,
                                                  (int)*(short *)((int)param_1 + 0x21a));
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oLevelHuntSoul]",&DAT_11d9e0b4,param_1[0x87]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oTaskHuntSoul]",&DAT_11d9e0b4,param_1[0x88]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oCampHuntSoul]",&DAT_11d9e0b4,param_1[0x89]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oHideWeaponBreakEffect]",&DAT_11d9e0b4,
                                                  param_1[0x8a]);
                                                  if (iVar1 == 0) {
                                                    iVar1 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[oIllustratePoint]",&DAT_11d9e0b4,param_1[0x8b]);
                                                  if (iVar1 == 0) {
                                                    TdrText_FieldScalar(param_2,param_3,param_4,
                                                                        "[oGuildBanChatEndTime]",
                                                                        &DAT_11d9e0b4,param_1[0x8c])
                                                    ;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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



/* ===== FUN_102166e0 @ 102166e0  size=204 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[branchType]"
//   "[branchLevel]"
//   "[branchAllScore]"
//   "[branchDayScore]"
//   "[branchRecordCardLevelUpTimes]"
//   "[branchChallengeScore]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[branchType]""
     ""[branchLevel]""
     ""[branchAllScore]""
     ""[branchDayScore]""
     ""[branchRecordCardLevelUpTimes]""
     ""[branchChallengeScore]"" */

void __thiscall
FUN_102166e0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[branchType]","0x%02x",*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[branchLevel]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[branchAllScore]",&DAT_11d9f574,
                                  *(undefined4 *)(param_1 + 3));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[branchDayScore]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 7));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[branchRecordCardLevelUpTimes]",
                                      &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xb));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[branchChallengeScore]",&DAT_11d9f574,
                                *(undefined4 *)(param_1 + 0xf));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1021dd80 @ 1021dd80  size=750 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TlvStarBranchData_DebugFormat, TlvStatContainer_DebugFormat, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[openFlag]"
//   "[resetTime]"
//   "[recordCardLevelUpTimes]"
//   "[starScore]"
//   "[levelInfo]"
//   "[cardInfo]"
//   "[statInfo]"
//   "[trackCards]"
//   "[weeklyRefreshTime]"
//   "[newStatCount]"
//   "[newStatIds]"
//   "[newStatVals]"

/* [RE-AUTO c0]
   strings:
     ""[openFlag]""
     ""[resetTime]""
     ""[recordCardLevelUpTimes]""
     ""[starScore]""
     ""[levelInfo]""
     ""[cardInfo]""
     ""[statInfo]""
     ""[trackCards]""
     ""[weeklyRefreshTime]""
     ""[newStatCount]"" */

int __thiscall FUN_1021dd80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined2 *puVar4;
  undefined4 extraout_ECX_04;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[openFlag]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[resetTime]",&DAT_11d9f574,param_1[1]),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[recordCardLevelUpTimes]",&DAT_11d9e0b4,
                                   param_1[2]), iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[starScore]",&DAT_11d9e0b4,param_1[3]),
      iVar1 == 0 && (iVar1 = TdrText_FieldLabelChar(param_4,"[levelInfo]",extraout_ECX), iVar1 == 0)
      ))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = TlvStarBranchData_DebugFormat(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[cardInfo]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1021a3d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[statInfo]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TlvStatContainer_DebugFormat(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_4,"[trackCards]",extraout_ECX_02), iVar1 == 0)) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_1021c8d0(param_2,iVar1,param_4);
          if (((iVar1 == 0) &&
              (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[weeklyRefreshTime]",
                                           &DAT_11d9f574,*(undefined4 *)((int)param_1 + 0x9116)),
              iVar1 == 0)) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[newStatCount]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x911a)), iVar1 == 0)) {
            iVar1 = *(int *)((int)param_1 + 0x911a);
            if (iVar1 < 0) {
              return -6;
            }
            if (3000 < iVar1) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(extraout_ECX_03,"[newStatIds]",iVar1,iVar1 >> 0x1f);
            if (iVar1 == 0) {
              if (0 < *(int *)((int)param_1 + 0x911a)) {
                puVar4 = (undefined2 *)((int)param_1 + 0x911e);
                param_3 = 0;
                do {
                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar4);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  param_3 = param_3 + 1;
                  puVar4 = puVar4 + 1;
                } while (param_3 < *(int *)((int)param_1 + 0x911a));
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
              if (iVar1 == 0) {
                iVar1 = *(int *)((int)param_1 + 0x911a);
                if (iVar1 < 0) {
                  return -6;
                }
                if (3000 < iVar1) {
                  return -7;
                }
                iVar1 = TdrText_ArrayHeader(extraout_ECX_04,"[newStatVals]",iVar1,iVar1 >> 0x1f);
                if (iVar1 == 0) {
                  iVar1 = 0;
                  if (0 < *(int *)((int)param_1 + 0x911a)) {
                    puVar2 = (undefined4 *)((int)param_1 + 0xa88e);
                    do {
                      iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
                      if (iVar3 != 0) {
                        return iVar3;
                      }
                      iVar1 = iVar1 + 1;
                      puVar2 = puVar2 + 1;
                    } while (iVar1 < *(int *)((int)param_1 + 0x911a));
                  }
                  iVar1 = TdrBuf_PutU8Z(param_4);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10276530 @ 10276530  size=234 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iGainChallangeRewardTimes]"
//   "[iGainSuccessRewardTimes]"
//   "[iGainVipChallangeRewardTimes]"
//   "[iGainVipSuccessRewardTimes]"
//   "[iSuperSeqId]"
//   "[iDelayRefreshTime]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iGainChallangeRewardTimes]""
     ""[iGainSuccessRewardTimes]""
     ""[iGainVipChallangeRewardTimes]""
     ""[iGainVipSuccessRewardTimes]""
     ""[iSuperSeqId]""
     ""[iDelayRefreshTime]"" */

void __thiscall
FUN_10276530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainChallangeRewardTimes]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainSuccessRewardTimes]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipChallangeRewardTimes]",
                                    &DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipSuccessRewardTimes]",
                                      &DAT_11d9e0b4,param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSuperSeqId]",&DAT_11d9e0b4,
                                        param_1[5]);
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[iDelayRefreshTime]",&DAT_11d9e0b4,
                                  param_1[6]);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10294d70 @ 10294d70  size=234 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iAddExp]"
//   "[iAddBindGold]"
//   "[iAddUnBindGold]"
//   "[iAddFarmPoint]"
//   "[iGuildAthPoint]"
//   "[iAddPetExp]"
//   "[iPetRoyalPoint]"

/* [RE-AUTO c0]
   strings:
     ""[iAddExp]""
     ""[iAddBindGold]""
     ""[iAddUnBindGold]""
     ""[iAddFarmPoint]""
     ""[iGuildAthPoint]""
     ""[iAddPetExp]""
     ""[iPetRoyalPoint]"" */

void __thiscall
FUN_10294d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddExp]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddBindGold]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddUnBindGold]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddFarmPoint]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildAthPoint]",&DAT_11d9e0b4,
                                      param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddPetExp]",&DAT_11d9e0b4,
                                        param_1[5]);
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[iPetRoyalPoint]",&DAT_11d9e0b4,
                                  param_1[6]);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10296b50 @ 10296b50  size=820 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_ArrayElemLabel, TdrText_FieldLabelChar, TdrDebugFormat_ItemList40, TdrDebugFormat_TypedItemData
// strings:
//   "[nRewardType]"
//   "[iExtId]"
//   "[iAttrRewardCnt]"
//   "[attrRewardType]"
//   "[attrRewardValue]"
//   "[iRewardAffectCnt]"
//   "[astRewardAffectList]"
//   "[stItemLootList]"
//   "[stBoxItemLootList]"
//   "[iInstanceLootCnt]"
//   "[astInstanceItemData]"

/* [RE-AUTO c0]
   strings:
     ""[nRewardType]""
     ""[iExtId]""
     ""[iAttrRewardCnt]""
     ""[attrRewardType]""
     ""[attrRewardValue]""
     ""[iRewardAffectCnt]""
     ""[astRewardAffectList]""
     ""[stItemLootList]""
     ""[stBoxItemLootList]""
     ""[iInstanceLootCnt]"" */

int __thiscall FUN_10296b50(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  short *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  short *psVar4;
  short *extraout_ECX_03;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nRewardType]",&DAT_11d9e0b4,(int)*param_1);
  if (((iVar2 == 0) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iExtId]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttrRewardCnt]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 3)), iVar2 == 0)) {
    iVar2 = *(int *)(param_1 + 3);
    if (iVar2 < 0) {
      return -6;
    }
    if (10 < iVar2) {
      return -7;
    }
    iVar2 = TdrText_ArrayHeader(extraout_ECX,"[attrRewardType]",iVar2,iVar2 >> 0x1f);
    if (iVar2 == 0) {
      if (0 < *(int *)(param_1 + 3)) {
        psVar4 = param_1 + 5;
        param_3 = 0;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,(int)*psVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_3 = param_3 + 1;
          psVar4 = psVar4 + 1;
        } while (param_3 < *(int *)(param_1 + 3));
      }
      iVar2 = TdrBuf_PutU8Z(param_4);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 3);
        if (iVar2 < 0) {
          return -6;
        }
        if (10 < iVar2) {
          return -7;
        }
        iVar2 = TdrText_ArrayHeader(extraout_ECX_00,"[attrRewardValue]",iVar2,iVar2 >> 0x1f);
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 3)) {
            psVar4 = param_1 + 0xf;
            param_3 = 0;
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)psVar4);
              if (iVar2 != 0) {
                return iVar2;
              }
              param_3 = param_3 + 1;
              psVar4 = psVar4 + 2;
            } while (param_3 < *(int *)(param_1 + 3));
          }
          iVar2 = TdrBuf_PutU8Z(param_4);
          if ((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iRewardAffectCnt]",&DAT_11d9e0b4,
                                          *(undefined4 *)(param_1 + 0x23)), iVar2 == 0)) {
            psVar4 = *(short **)(param_1 + 0x23);
            if ((int)psVar4 < 0) {
              return -6;
            }
            if (10 < (int)psVar4) {
              return -7;
            }
            if (0 < (int)psVar4) {
              psVar4 = param_1 + 0x25;
              iVar2 = 0;
              do {
                iVar3 = TdrText_ArrayElemLabel(param_4,"[astRewardAffectList]",iVar2,psVar4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = iVar1;
                if (-1 < iVar1) {
                  iVar3 = iVar1 + 1;
                }
                iVar3 = FUN_10295dd0(param_2,iVar3,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar2 = iVar2 + 1;
                psVar4 = extraout_ECX_01;
              } while (iVar2 < *(int *)(param_1 + 0x23));
            }
            iVar2 = TdrText_FieldLabelChar(param_4,"[stItemLootList]",psVar4);
            if (iVar2 == 0) {
              iVar2 = iVar1;
              if (-1 < iVar1) {
                iVar2 = iVar1 + 1;
              }
              iVar2 = TdrDebugFormat_ItemList40(param_2,iVar2,param_4);
              if ((iVar2 == 0) &&
                 (iVar2 = TdrText_FieldLabelChar(param_4,"[stBoxItemLootList]",extraout_ECX_02),
                 iVar2 == 0)) {
                iVar2 = iVar1;
                if (-1 < iVar1) {
                  iVar2 = iVar1 + 1;
                }
                iVar2 = TdrDebugFormat_ItemList40(param_2,iVar2,param_4);
                if ((iVar2 == 0) &&
                   (iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iInstanceLootCnt]",
                                                &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x4a5)),
                   iVar2 == 0)) {
                  iVar2 = *(int *)(param_1 + 0x4a5);
                  if (iVar2 < 0) {
                    return -6;
                  }
                  if (5 < iVar2) {
                    return -7;
                  }
                  if (0 < iVar2) {
                    psVar4 = param_1 + 0x4a7;
                    iVar2 = 0;
                    do {
                      iVar3 = TdrText_ArrayElemLabel(param_4,"[astInstanceItemData]",iVar2,psVar4);
                      if (iVar3 != 0) {
                        return iVar3;
                      }
                      iVar3 = iVar1;
                      if (-1 < iVar1) {
                        iVar3 = iVar1 + 1;
                      }
                      iVar3 = TdrDebugFormat_TypedItemData(param_2,iVar3,param_4);
                      if (iVar3 != 0) {
                        return iVar3;
                      }
                      iVar2 = iVar2 + 1;
                      psVar4 = extraout_ECX_03;
                    } while (iVar2 < *(int *)(param_1 + 0x4a5));
                  }
                  iVar2 = 0;
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



/* ===== FUN_102989e0 @ 102989e0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPlayerID]"
//   "[iRewardFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iPlayerID]""
     ""[iRewardFlag]"" */

int __thiscall
FUN_102989e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iPlayerID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRewardFlag]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10298a80 @ 10298a80  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPlayerID]"
//   "[iRewardFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iPlayerID]""
     ""[iRewardFlag]"" */

void __thiscall
FUN_10298a80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardFlag]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_10299330 @ 10299330  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRewardIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iRewardIdx]"" */

undefined4 __thiscall
FUN_10299330(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRewardIdx]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_102993b0 @ 102993b0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRewardIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iRewardIdx]"" */

void __thiscall
FUN_102993b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardIdx]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_102993e0 @ 102993e0  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRewardIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iRewardIdx]"" */

undefined1 * __thiscall
FUN_102993e0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iRewardIdx]",&DAT_11d9e0b4,*param_1);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10299470 @ 10299470  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iRewardIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iRewardIdx]"" */

undefined1 * __thiscall
FUN_10299470(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardIdx]",&DAT_11d9e0b4,*param_1);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10299900 @ 10299900  size=569 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iRetCode]"
//   "[iRewardTypeCnt]"
//   "[itemType]"
//   "[itemCnt]"
//   "[bindType]"
//   "[rewardIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iRewardTypeCnt]""
     ""[itemType]""
     ""[itemCnt]""
     ""[bindType]""
     ""[rewardIdx]"" */

int __thiscall
FUN_10299900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardTypeCnt]",&DAT_11d9e0b4,
                                  param_1[1]), iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[itemType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[1]) {
        puVar3 = param_1 + 2;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < (int)param_1[1]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = param_1[1];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x28 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[itemCnt]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[1]) {
            puVar3 = param_1 + 0x2a;
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
              puVar3 = puVar3 + 1;
            } while (iVar1 < (int)param_1[1]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if (iVar1 == 0) {
            iVar1 = param_1[1];
            if (iVar1 < 0) {
              return -6;
            }
            if (0x28 < iVar1) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(extraout_ECX_01,"[bindType]",iVar1,iVar1 >> 0x1f);
            if (iVar1 == 0) {
              iVar1 = 0;
              if (0 < (int)param_1[1]) {
                puVar3 = param_1 + 0x52;
                do {
                  iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar1 = iVar1 + 1;
                  puVar3 = puVar3 + 1;
                } while (iVar1 < (int)param_1[1]);
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
              if (iVar1 == 0) {
                iVar1 = param_1[1];
                if (iVar1 < 0) {
                  return -6;
                }
                if (0x28 < iVar1) {
                  return -7;
                }
                iVar1 = TdrText_ArrayHeader(extraout_ECX_02,"[rewardIdx]",iVar1,iVar1 >> 0x1f);
                if (iVar1 == 0) {
                  iVar1 = 0;
                  if (0 < (int)param_1[1]) {
                    puVar3 = param_1 + 0x7a;
                    do {
                      iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
                      if (iVar2 != 0) {
                        return iVar2;
                      }
                      iVar1 = iVar1 + 1;
                      puVar3 = puVar3 + 1;
                    } while (iVar1 < (int)param_1[1]);
                  }
                  iVar1 = TdrBuf_PutU8Z(param_4);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1029a5d0 @ 1029a5d0  size=487 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iRetCode]"
//   "[iResetCnt]"
//   "[iRewardCnt]"
//   "[itemType]"
//   "[itemCount]"
//   "[bindType]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iResetCnt]""
     ""[iRewardCnt]""
     ""[itemType]""
     ""[itemCount]""
     ""[bindType]"" */

int __thiscall
FUN_1029a5d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResetCnt]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardCnt]",&DAT_11d9e0b4,param_1[2]),
     iVar1 == 0)) {
    iVar1 = param_1[2];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[itemType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[2]) {
        puVar3 = param_1 + 3;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < (int)param_1[2]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = param_1[2];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x28 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[itemCount]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[2]) {
            puVar3 = param_1 + 0x2b;
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
              puVar3 = puVar3 + 1;
            } while (iVar1 < (int)param_1[2]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if (iVar1 == 0) {
            iVar1 = param_1[2];
            if (iVar1 < 0) {
              return -6;
            }
            if (0x28 < iVar1) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(extraout_ECX_01,"[bindType]",iVar1,iVar1 >> 0x1f);
            if (iVar1 == 0) {
              iVar1 = 0;
              if (0 < (int)param_1[2]) {
                puVar3 = param_1 + 0x53;
                do {
                  iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar1 = iVar1 + 1;
                  puVar3 = puVar3 + 1;
                } while (iVar1 < (int)param_1[2]);
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102a3f50 @ 102a3f50  size=167 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szName]"
//   "%I64u"
//   "[ullDbid]"
//   "[dwRtid]"
//   "[ullUin]"
//   "[iCelebrationReward]"

/* [RE-AUTO c0]
   strings:
     ""[szName]""
     ""%I64u""
     ""[ullDbid]""
     ""[dwRtid]""
     ""[ullUin]""
     ""[iCelebrationReward]"" */

void __thiscall FUN_102a3f50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDbid]","%I64u",
                                *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwRtid]",&DAT_11d9f574,
                                  *(undefined4 *)(param_1 + 0x28));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullUin]","%I64u",
                                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30))
        ;
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationReward]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 0x34));
        }
      }
    }
  }
  return;
}



/* ===== FUN_102babc0 @ 102babc0  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwLastResetTime]"
//   "[iGainChallangeRewardTimes]"
//   "[iGainSuccessRewardTimes]"
//   "[iGainVipChallangeRewardTimes]"
//   "[iGainVipSuccessRewardTimes]"

/* [RE-AUTO c0]
   strings:
     ""[dwLastResetTime]""
     ""[iGainChallangeRewardTimes]""
     ""[iGainSuccessRewardTimes]""
     ""[iGainVipChallangeRewardTimes]""
     ""[iGainVipSuccessRewardTimes]"" */

void __thiscall
FUN_102babc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLastResetTime]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainChallangeRewardTimes]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainSuccessRewardTimes]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipChallangeRewardTimes]",
                                    &DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iGainVipSuccessRewardTimes]",&DAT_11d9e0b4,
                              param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_102bafa0 @ 102bafa0  size=202 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLevelID]"
//   "[iTheBestScore]"
//   "0x%02x"
//   "[bState]"
//   "[dwHistoryFinalRank]"
//   "[dwGainRewardFlag]"
//   "[dwLastTm]"

/* [RE-AUTO c0]
   strings:
     ""[iLevelID]""
     ""[iTheBestScore]""
     ""0x%02x""
     ""[bState]""
     ""[dwHistoryFinalRank]""
     ""[dwGainRewardFlag]""
     ""[dwLastTm]"" */

void __thiscall
FUN_102bafa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTheBestScore]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bState]","0x%02x",
                                  *(undefined1 *)(param_1 + 2));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwHistoryFinalRank]",&DAT_11d9f574,
                                    *(undefined4 *)((int)param_1 + 9));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwGainRewardFlag]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0xd));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[dwLastTm]",&DAT_11d9f574,
                                *(undefined4 *)((int)param_1 + 0x11));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102ca4c0 @ 102ca4c0  size=9095 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_ArrayElemLabel, TdrDebugFormat_ActionPointData, TdrDebugFormat_WeaponStyleData, TdrText_ItemBoxList_astItemBoxList
// strings:
//   "[dwAccountID]"
//   "[iNetID]"
//   "%I64u"
//   "[ullDBId]"
//   "[dwSessionID]"
//   "[dwWorldID]"
//   "[dwServerID]"
//   "[dwWorldSvrID]"
//   "[dwServerTime]"
//   "[dwIsReConnect]"
//   "[szName]"
//   "[bGender]"
//   "[bIsGM]"
//   "[stPose]"
//   "[ullParentEntityGUID]"
//   "[bAvatarSetID]"
//   "[iFaction]"
//   "[dwRandSeed]"
//   "[iWeapon]"
//   "[dwLastLoginTime]"

/* [RE-AUTO c0]
   strings:
     ""[dwAccountID]""
     ""[iNetID]""
     ""%I64u""
     ""[ullDBId]""
     ""[dwSessionID]""
     ""[dwWorldID]""
     ""[dwServerID]""
     ""[dwWorldSvrID]""
     ""[dwServerTime]""
     ""[dwIsReConnect]"" */

int __thiscall FUN_102ca4c0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar6;
  uint extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  uint extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  short *psVar7;
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
  
  iVar1 = param_3;
  iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwAccountID]",&DAT_11d9f574,*param_1);
  if (((((((iVar4 == 0) &&
          (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,param_1[1]),
          iVar4 == 0)) &&
         (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDBId]","%I64u",param_1[2],
                                      param_1[3]), iVar4 == 0)) &&
        ((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSessionID]",&DAT_11d9f574,
                                      param_1[4]), iVar4 == 0 &&
         (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwWorldID]",&DAT_11d9f574,param_1[5]
                                     ), iVar4 == 0)))) &&
       (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwServerID]",&DAT_11d9f574,param_1[6])
       , iVar4 == 0)) &&
      (((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwWorldSvrID]",&DAT_11d9f574,
                                     param_1[7]), iVar4 == 0 &&
        (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwServerTime]",&DAT_11d9f574,
                                     param_1[8]), iVar4 == 0)) &&
       ((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwIsReConnect]",&DAT_11d9f574,
                                     param_1[9]), iVar4 == 0 &&
        (((iVar4 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 10), iVar4 == 0 &&
          (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGender]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x12)), iVar4 == 0)) &&
         (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[bIsGM]",&DAT_11d9e0b4,
                                      *(undefined1 *)((int)param_1 + 0x49)), iVar4 == 0)))))))) &&
     (iVar4 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar4 == 0)) {
    iVar4 = param_3;
    if (-1 < (int)param_3) {
      iVar4 = param_3 + 1;
    }
    iVar4 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar4,param_4);
    if ((((iVar4 == 0) &&
         (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullParentEntityGUID]","%I64u",
                                      *(undefined4 *)((int)param_1 + 0x66),
                                      *(undefined4 *)((int)param_1 + 0x6a)), iVar4 == 0)) &&
        ((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[bAvatarSetID]",&DAT_11d9e0b4,
                                      *(undefined1 *)((int)param_1 + 0x6e)), iVar4 == 0 &&
         ((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x6f)), iVar4 == 0 &&
          (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwRandSeed]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x73)), iVar4 == 0)))))) &&
       ((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeapon]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x77)), iVar4 == 0 &&
        ((((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLastLoginTime]",&DAT_11d9f574,
                                        *(undefined4 *)((int)param_1 + 0x7b)), iVar4 == 0 &&
           (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCreateTime]",&DAT_11d9f574,
                                        *(undefined4 *)((int)param_1 + 0x7f)), iVar4 == 0)) &&
          (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wStoreSize]",&DAT_11d9e0b4,
                                       *(undefined2 *)((int)param_1 + 0x83)), iVar4 == 0)) &&
         (((iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wNormalSize]",&DAT_11d9e0b4,
                                        *(undefined2 *)((int)param_1 + 0x85)), iVar4 == 0 &&
           (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wMaterialStoreSize]",&DAT_11d9e0b4
                                        ,*(undefined2 *)((int)param_1 + 0x87)), iVar4 == 0)) &&
          (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBagSize]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x89)), iVar4 == 0)))))))) {
      iVar4 = *(int *)((int)param_1 + 0x89);
      if (iVar4 < 0) {
        return -6;
      }
      if (82000 < iVar4) {
        return -7;
      }
      iVar4 = TdrText_ArrayHeader(extraout_ECX_00,"[szBagItem]",iVar4,iVar4 >> 0x1f);
      if (iVar4 == 0) {
        if (0 < *(int *)((int)param_1 + 0x89)) {
          iVar4 = 0;
          do {
            iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar4 + 0x8d))
            ;
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)param_1 + 0x89));
        }
        iVar4 = TdrBuf_PutU8Z(param_4);
        if ((iVar4 == 0) &&
           (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipSize]",&DAT_11d9e0b4,
                                        *(undefined2 *)((int)param_1 + 0x140dd)), iVar4 == 0)) {
          if (0x1000 < *(ushort *)((int)param_1 + 0x140dd)) {
            return -7;
          }
          iVar4 = TdrText_ArrayHeader(0x1000,"[szEquipItem]",*(ushort *)((int)param_1 + 0x140dd),0);
          if (iVar4 == 0) {
            if (*(short *)((int)param_1 + 0x140dd) != 0) {
              uVar2 = 0;
              do {
                iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                     *(undefined1 *)(uVar2 + 0x140df + (int)param_1));
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(ushort *)((int)param_1 + 0x140dd));
            }
            iVar4 = TdrBuf_PutU8Z(param_4);
            if ((iVar4 == 0) &&
               (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStoreDataSize]",&DAT_11d9e0b4
                                            ,*(undefined4 *)((int)param_1 + 0x150df)), iVar4 == 0))
            {
              iVar4 = *(int *)((int)param_1 + 0x150df);
              if (iVar4 < 0) {
                return -6;
              }
              if (200000 < iVar4) {
                return -7;
              }
              iVar4 = TdrText_ArrayHeader(extraout_ECX_01,"[szStoreItem]",iVar4,iVar4 >> 0x1f);
              if (iVar4 == 0) {
                if (0 < *(int *)((int)param_1 + 0x150df)) {
                  iVar4 = 0;
                  do {
                    iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,
                                         *(undefined1 *)((int)param_1 + iVar4 + 0x150e3));
                    if (iVar5 != 0) {
                      return iVar5;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)((int)param_1 + 0x150df));
                }
                iVar4 = TdrBuf_PutU8Z(param_4);
                if ((iVar4 == 0) &&
                   (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wShortcutCount]",
                                                &DAT_11d9e0b4,
                                                *(undefined2 *)((int)param_1 + 0x45e23)), iVar4 == 0
                   )) {
                  uVar2 = *(ushort *)((int)param_1 + 0x45e23);
                  uVar6 = (uint)uVar2;
                  if (0x3c < uVar2) {
                    return -7;
                  }
                  uVar3 = 0;
                  if (uVar2 != 0) {
                    do {
                      iVar4 = TdrText_ArrayElemLabel(param_4,"[astShortcut]",uVar3,uVar6);
                      if (iVar4 != 0) {
                        return iVar4;
                      }
                      iVar4 = param_3;
                      if (-1 < (int)param_3) {
                        iVar4 = param_3 + 1;
                      }
                      iVar4 = FUN_102b78c0(param_2,iVar4,param_4);
                      if (iVar4 != 0) {
                        return iVar4;
                      }
                      uVar3 = uVar3 + 1;
                      uVar6 = extraout_ECX_02;
                    } while (uVar3 < *(ushort *)((int)param_1 + 0x45e23));
                  }
                  iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wBuffSize]",&DAT_11d9e0b4,
                                              *(undefined2 *)((int)param_1 + 0x46005));
                  if (iVar4 == 0) {
                    if (0x2800 < *(ushort *)((int)param_1 + 0x46005)) {
                      return -7;
                    }
                    iVar4 = TdrText_ArrayHeader(0x2800,"[szBuff]",
                                                *(ushort *)((int)param_1 + 0x46005),0);
                    if (iVar4 == 0) {
                      if (*(short *)((int)param_1 + 0x46005) != 0) {
                        uVar2 = 0;
                        do {
                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                               *(undefined1 *)(uVar2 + 0x46007 + (int)param_1));
                          if (iVar4 != 0) {
                            return iVar4;
                          }
                          uVar2 = uVar2 + 1;
                        } while (uVar2 < *(ushort *)((int)param_1 + 0x46005));
                      }
                      iVar4 = TdrBuf_PutU8Z(param_4);
                      if ((iVar4 == 0) &&
                         (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wSkillSize]",
                                                      &DAT_11d9e0b4,
                                                      *(undefined2 *)((int)param_1 + 0x48807)),
                         iVar4 == 0)) {
                        if (0x2800 < *(ushort *)((int)param_1 + 0x48807)) {
                          return -7;
                        }
                        iVar4 = TdrText_ArrayHeader(0x2800,"[szSkill]",
                                                    *(ushort *)((int)param_1 + 0x48807),0);
                        if (iVar4 == 0) {
                          if (*(short *)((int)param_1 + 0x48807) != 0) {
                            uVar2 = 0;
                            do {
                              iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                   *(undefined1 *)(uVar2 + 0x48809 + (int)param_1));
                              if (iVar4 != 0) {
                                return iVar4;
                              }
                              uVar2 = uVar2 + 1;
                            } while (uVar2 < *(ushort *)((int)param_1 + 0x48807));
                          }
                          iVar4 = TdrBuf_PutU8Z(param_4);
                          if ((iVar4 == 0) &&
                             (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wPetSize]",
                                                          &DAT_11d9e0b4,
                                                          *(undefined2 *)((int)param_1 + 0x4b009)),
                             iVar4 == 0)) {
                            if (0x2800 < *(ushort *)((int)param_1 + 0x4b009)) {
                              return -7;
                            }
                            iVar4 = TdrText_ArrayHeader(0x2800,"[szPet]",
                                                        *(ushort *)((int)param_1 + 0x4b009),0);
                            if (iVar4 == 0) {
                              if (*(short *)((int)param_1 + 0x4b009) != 0) {
                                uVar2 = 0;
                                do {
                                  iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                       *(undefined1 *)
                                                        (uVar2 + 0x4b00b + (int)param_1));
                                  if (iVar4 != 0) {
                                    return iVar4;
                                  }
                                  uVar2 = uVar2 + 1;
                                } while (uVar2 < *(ushort *)((int)param_1 + 0x4b009));
                              }
                              iVar4 = TdrBuf_PutU8Z(param_4);
                              if ((iVar4 == 0) &&
                                 (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                              "[iFriendCount]",&DAT_11d9e0b4,
                                                              *(undefined4 *)
                                                               ((int)param_1 + 0x4d80b)), iVar4 == 0
                                 )) {
                                iVar4 = *(int *)((int)param_1 + 0x4d80b);
                                if (iVar4 < 0) {
                                  return -6;
                                }
                                if (500 < iVar4) {
                                  return -7;
                                }
                                if (0 < iVar4) {
                                  iVar4 = (int)param_1 + 0x4d80f;
                                  iVar5 = 0;
                                  do {
                                    iVar4 = TdrText_ArrayElemLabel
                                                      (param_4,"[astFriendData]",iVar5,iVar4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar4 = param_3;
                                    if (-1 < (int)param_3) {
                                      iVar4 = param_3 + 1;
                                    }
                                    iVar4 = FUN_102b7db0(param_2,iVar4,param_4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar5 = iVar5 + 1;
                                    iVar4 = extraout_ECX_03;
                                  } while (iVar5 < *(int *)((int)param_1 + 0x4d80b));
                                }
                                iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                            "[iPasserbyCount]",&DAT_11d9e0b4,
                                                            *(undefined4 *)((int)param_1 + 0x55ed3))
                                ;
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                iVar4 = *(int *)((int)param_1 + 0x55ed3);
                                if (iVar4 < 0) {
                                  return -6;
                                }
                                if (0x14 < iVar4) {
                                  return -7;
                                }
                                if (0 < iVar4) {
                                  iVar4 = (int)param_1 + 0x55ed7;
                                  iVar5 = 0;
                                  do {
                                    iVar4 = TdrText_ArrayElemLabel
                                                      (param_4,"[astPasserbyData]",iVar5,iVar4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar4 = param_3;
                                    if (-1 < (int)param_3) {
                                      iVar4 = param_3 + 1;
                                    }
                                    iVar4 = FUN_102b8330(param_2,iVar4,param_4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar5 = iVar5 + 1;
                                    iVar4 = extraout_ECX_04;
                                  } while (iVar5 < *(int *)((int)param_1 + 0x55ed3));
                                }
                                iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                            "[iBlacklistCount]",&DAT_11d9e0b4,
                                                            *(undefined4 *)((int)param_1 + 0x562fb))
                                ;
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                iVar4 = *(int *)((int)param_1 + 0x562fb);
                                if (iVar4 < 0) {
                                  return -6;
                                }
                                if (0x14 < iVar4) {
                                  return -7;
                                }
                                if (0 < iVar4) {
                                  iVar4 = (int)param_1 + 0x562ff;
                                  iVar5 = 0;
                                  do {
                                    iVar4 = TdrText_ArrayElemLabel
                                                      (param_4,"[astBlacklistData]",iVar5,iVar4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar4 = param_3;
                                    if (-1 < (int)param_3) {
                                      iVar4 = param_3 + 1;
                                    }
                                    iVar4 = FUN_102b8800(param_2,iVar4,param_4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar5 = iVar5 + 1;
                                    iVar4 = extraout_ECX_05;
                                  } while (iVar5 < *(int *)((int)param_1 + 0x562fb));
                                }
                                iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                            "[iFriendGroupCount]",&DAT_11d9e0b4,
                                                            *(undefined4 *)((int)param_1 + 0x5670f))
                                ;
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                iVar4 = *(int *)((int)param_1 + 0x5670f);
                                if (iVar4 < 0) {
                                  return -6;
                                }
                                if (10 < iVar4) {
                                  return -7;
                                }
                                if (0 < iVar4) {
                                  iVar4 = (int)param_1 + 0x56713;
                                  iVar5 = 0;
                                  do {
                                    iVar4 = TdrText_ArrayElemLabel
                                                      (param_4,"[astFriendGroupData]",iVar5,iVar4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar4 = param_3;
                                    if (-1 < (int)param_3) {
                                      iVar4 = param_3 + 1;
                                    }
                                    iVar4 = FUN_102b8c80(param_2,iVar4,param_4);
                                    if (iVar4 != 0) {
                                      return iVar4;
                                    }
                                    iVar5 = iVar5 + 1;
                                    iVar4 = extraout_ECX_06;
                                  } while (iVar5 < *(int *)((int)param_1 + 0x5670f));
                                }
                                iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,"[wAttrSize]",
                                                            &DAT_11d9e0b4,
                                                            *(undefined2 *)((int)param_1 + 0x5685d))
                                ;
                                if (iVar4 == 0) {
                                  if (0x5000 < *(ushort *)((int)param_1 + 0x5685d)) {
                                    return -7;
                                  }
                                  iVar4 = TdrText_ArrayHeader(0x5000,"[szAttr]",
                                                              *(ushort *)((int)param_1 + 0x5685d),0)
                                  ;
                                  if (iVar4 == 0) {
                                    if (*(short *)((int)param_1 + 0x5685d) != 0) {
                                      uVar2 = 0;
                                      do {
                                        iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                             *(undefined1 *)
                                                              (uVar2 + 0x5685f + (int)param_1));
                                        if (iVar4 != 0) {
                                          return iVar4;
                                        }
                                        uVar2 = uVar2 + 1;
                                      } while (uVar2 < *(ushort *)((int)param_1 + 0x5685d));
                                    }
                                    iVar4 = TdrBuf_PutU8Z(param_4);
                                    if ((iVar4 == 0) &&
                                       (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                    "[iTaskLen]",&DAT_11d9e0b4,
                                                                    *(undefined4 *)
                                                                     ((int)param_1 + 0x5b85f)),
                                       iVar4 == 0)) {
                                      iVar4 = *(int *)((int)param_1 + 0x5b85f);
                                      if (iVar4 < 0) {
                                        return -6;
                                      }
                                      if (0x2800 < iVar4) {
                                        return -7;
                                      }
                                      iVar4 = TdrText_ArrayHeader(extraout_ECX_07,"[szTask]",iVar4,
                                                                  iVar4 >> 0x1f);
                                      if (iVar4 == 0) {
                                        if (0 < *(int *)((int)param_1 + 0x5b85f)) {
                                          iVar4 = 0;
                                          do {
                                            iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                 *(undefined1 *)
                                                                  ((int)param_1 + iVar4 + 0x5b863));
                                            if (iVar5 != 0) {
                                              return iVar5;
                                            }
                                            iVar4 = iVar4 + 1;
                                          } while (iVar4 < *(int *)((int)param_1 + 0x5b85f));
                                        }
                                        iVar4 = TdrBuf_PutU8Z(param_4);
                                        if ((iVar4 == 0) &&
                                           (iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                        "[iGuildLen]",&DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         ((int)param_1 + 0x5e063)),
                                           iVar4 == 0)) {
                                          iVar4 = *(int *)((int)param_1 + 0x5e063);
                                          if (iVar4 < 0) {
                                            return -6;
                                          }
                                          if (0x400 < iVar4) {
                                            return -7;
                                          }
                                          iVar4 = TdrText_ArrayHeader(extraout_ECX_08,"[szGuild]",
                                                                      iVar4,iVar4 >> 0x1f);
                                          if (iVar4 == 0) {
                                            if (0 < *(int *)((int)param_1 + 0x5e063)) {
                                              iVar4 = 0;
                                              do {
                                                iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                     *(undefined1 *)
                                                                      ((int)param_1 +
                                                                      iVar4 + 0x5e067));
                                                if (iVar5 != 0) {
                                                  return iVar5;
                                                }
                                                iVar4 = iVar4 + 1;
                                              } while (iVar4 < *(int *)((int)param_1 + 0x5e063));
                                            }
                                            iVar4 = TdrBuf_PutU8Z(param_4);
                                            if ((iVar4 == 0) &&
                                               (iVar4 = TdrText_FieldLabelChar
                                                                  (param_4,"[stActionPoint]",
                                                                   extraout_ECX_09), iVar4 == 0)) {
                                              iVar4 = param_3;
                                              if (-1 < (int)param_3) {
                                                iVar4 = param_3 + 1;
                                              }
                                              iVar4 = TdrDebugFormat_ActionPointData
                                                                (param_2,iVar4,param_4);
                                              if ((((iVar4 == 0) &&
                                                   (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[iFirstEnterLevel]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5e47b)),
                                                  iVar4 == 0)) &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[iFirstEnterMap]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5e47f)),
                                                  iVar4 == 0)) &&
                                                 ((iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[iPvpPrepareStageState]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5e483)),
                                                  iVar4 == 0 &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[wGuideStepCount]",&DAT_11d9e0b4,
                                                  *(undefined2 *)((int)param_1 + 0x5e487)),
                                                  iVar4 == 0)))) {
                                                uVar2 = *(ushort *)((int)param_1 + 0x5e487);
                                                uVar6 = (uint)uVar2;
                                                if (0x100 < uVar2) {
                                                  return -7;
                                                }
                                                uVar3 = 0;
                                                if (uVar2 != 0) {
                                                  do {
                                                    iVar4 = TdrText_ArrayElemLabel
                                                                      (param_4,"[astGuideSteps]",
                                                                       uVar3,uVar6);
                                                    if (iVar4 != 0) {
                                                      return iVar4;
                                                    }
                                                    iVar4 = param_3;
                                                    if (-1 < (int)param_3) {
                                                      iVar4 = param_3 + 1;
                                                    }
                                                    iVar4 = FUN_102bc530(param_2,iVar4,param_4);
                                                    if (iVar4 != 0) {
                                                      return iVar4;
                                                    }
                                                    uVar3 = uVar3 + 1;
                                                    uVar6 = extraout_ECX_10;
                                                  } while (uVar3 < *(ushort *)
                                                                    ((int)param_1 + 0x5e487));
                                                }
                                                iVar4 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                                            "[wCDSize]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined2 *)
                                                                             ((int)param_1 + 0x5e689
                                                                             ));
                                                if (iVar4 == 0) {
                                                  if (0x400 < *(ushort *)((int)param_1 + 0x5e689)) {
                                                    return -7;
                                                  }
                                                  iVar4 = TdrText_ArrayHeader(0x400,"[szCD]",
                                                                              *(ushort *)
                                                                               ((int)param_1 +
                                                                               0x5e689),0);
                                                  if (iVar4 == 0) {
                                                    if (*(short *)((int)param_1 + 0x5e689) != 0) {
                                                      uVar2 = 0;
                                                      do {
                                                        iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                             *(undefined1 *)
                                                                              (uVar2 + 0x5e68b +
                                                                              (int)param_1));
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar2 = uVar2 + 1;
                                                      } while (uVar2 < *(ushort *)
                                                                        ((int)param_1 + 0x5e689));
                                                    }
                                                    iVar4 = TdrBuf_PutU8Z(param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                    param_4,
                                                  "[iSchedulePrizeLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5ea8b)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x5ea8b);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_11,
                                                                                "[szSchedulePrize]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x5ea8b)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x5ea8f));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x5ea8b));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,
                                                  param_3,param_4,"[iMailInfoLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5ee8f)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x5ee8f);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_12,
                                                                                "[szMailInfo]",iVar4
                                                                                ,iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x5ee8f)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x5ee93));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x5ee8f));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,
                                                  param_3,param_4,"[iNpcAtdInfoLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5f293)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x5f293);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_13,
                                                                                "[szNpcAtdInfo]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x5f293)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x5f297));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x5f293));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((((iVar4 == 0) &&
                                                           (iVar4 = TdrText_FieldScalar(param_2,
                                                  param_3,param_4,"[iCurPlayerUsedCatCarCount]",
                                                  &DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5f697)),
                                                  iVar4 == 0)) &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[iCatCuisineID]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5f69b)),
                                                  iVar4 == 0)) &&
                                                  (((iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                 param_4,
                                                  "[wCatCuisineCount]",&DAT_11d9e0b4,
                                                  *(undefined2 *)((int)param_1 + 0x5f69f)),
                                                  iVar4 == 0 &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[bCatCuisineLevel]","0x%02x",
                                                  *(undefined1 *)((int)param_1 + 0x5f6a1)),
                                                  iVar4 == 0)) &&
                                                  ((iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[bCatCuisineBuffs]","0x%02x",
                                                  *(undefined1 *)((int)param_1 + 0x5f6a2)),
                                                  iVar4 == 0 &&
                                                  ((iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                param_4,
                                                  "[dwCatCuisineLastTm]",&DAT_11d9f574,
                                                  *(undefined4 *)((int)param_1 + 0x5f6a3)),
                                                  iVar4 == 0 &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                               param_4,
                                                  "[iCatCuisineFormulaCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5f6a7)),
                                                  iVar4 == 0)))))))) {
                                                    uVar2 = *(ushort *)((int)param_1 + 0x5f69f);
                                                    uVar6 = (uint)uVar2;
                                                    if (0x80 < uVar2) {
                                                      return -7;
                                                    }
                                                    uVar3 = 0;
                                                    if (uVar2 != 0) {
                                                      do {
                                                        iVar4 = TdrText_ArrayElemLabel
                                                                          (param_4,
                                                  "[astCatCuisineFormulaData]",uVar3,uVar6);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  iVar4 = param_3;
                                                  if (-1 < (int)param_3) {
                                                    iVar4 = param_3 + 1;
                                                  }
                                                  iVar4 = FUN_102c0170(param_2,iVar4,param_4);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar3 = uVar3 + 1;
                                                  uVar6 = extraout_ECX_14;
                                                  } while (uVar3 < *(ushort *)
                                                                    ((int)param_1 + 0x5f69f));
                                                  }
                                                  iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                              param_4,
                                                  "[wItemUseOnceCount]",&DAT_11d9e0b4,
                                                  *(undefined2 *)((int)param_1 + 0x5faab));
                                                  if (iVar4 == 0) {
                                                    if (200 < *(ushort *)((int)param_1 + 0x5faab)) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(200,
                                                  "[itemUseOnceList]",
                                                  *(ushort *)((int)param_1 + 0x5faab),0);
                                                  if (iVar4 == 0) {
                                                    uVar2 = 0;
                                                    if (*(short *)((int)param_1 + 0x5faab) != 0) {
                                                      do {
                                                        iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                             *(undefined2 *)
                                                                              ((int)param_1 +
                                                                              (uint)uVar2 * 2 +
                                                                              0x5faad));
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar2 = uVar2 + 1;
                                                      } while (uVar2 < *(ushort *)
                                                                        ((int)param_1 + 0x5faab));
                                                    }
                                                    iVar4 = TdrBuf_PutU8Z(param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                    param_4,
                                                  "[iStarLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x5fc3d)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x5fc3d);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0xf000 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_15,
                                                                                "[szStar]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x5fc3d)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x5fc41));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x5fc3d));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,
                                                  param_3,param_4,"[wVideoLen]",&DAT_11d9e0b4,
                                                  *(undefined2 *)((int)param_1 + 0x6ec41)),
                                                  iVar4 == 0)) {
                                                    if (0x80 < *(ushort *)((int)param_1 + 0x6ec41))
                                                    {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(0x80,"[szVideo]",
                                                                                *(ushort *)
                                                                                 ((int)param_1 +
                                                                                 0x6ec41),0);
                                                    if (iVar4 == 0) {
                                                      if (*(short *)((int)param_1 + 0x6ec41) != 0) {
                                                        uVar2 = 0;
                                                        do {
                                                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (uVar2 + 0x6ec43 +
                                                                                 (int)param_1));
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar2 = uVar2 + 1;
                                                        } while (uVar2 < *(ushort *)
                                                                          ((int)param_1 + 0x6ec41));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldLabelChar
                                                                            (param_4,
                                                  "[stClientSettings]",extraout_ECX_16), iVar4 == 0)
                                                  ) {
                                                    iVar4 = param_3;
                                                    if (-1 < (int)param_3) {
                                                      iVar4 = param_3 + 1;
                                                    }
                                                    iVar4 = FUN_102be3d0(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,param_3,
                                                                                    param_4,
                                                  "[iFarmLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x6f0c5)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x6f0c5);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x1000 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_17,
                                                                                "[szFarm]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x6f0c5)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x6f0c9));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x6f0c5));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_ArrayHeader(
                                                  extraout_ECX_18,"[facialInfo]",0x2e,0), iVar4 == 0
                                                  )) {
                                                    psVar7 = (short *)((int)param_1 + 0x700c9);
                                                    param_3 = 0;
                                                    do {
                                                      iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                           (int)*psVar7);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      param_3 = param_3 + 1;
                                                      psVar7 = psVar7 + 1;
                                                    } while (param_3 < 0x2e);
                                                    iVar4 = TdrBuf_PutU8Z(param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iSpoorLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x70125)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x70125);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x800 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_19,
                                                                                "[szSpoor]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x70125)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 ((int)param_1 +
                                                                                 iVar4 + 0x70129));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x70125));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iRapidHuntLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x70929)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x70929);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x80 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_20,
                                                                                "[szRapidHunt]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x70929)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x7092d +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x70929));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iActivityLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x709ad)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x709ad);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x2000 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_21,
                                                                                "[szActivity]",iVar4
                                                                                ,iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x709ad)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x709b1 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x709ad));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if (((iVar4 == 0) &&
                                                          (iVar4 = TdrText_FieldScalar(param_2,iVar1
                                                                                       ,param_4,
                                                  "[bIsSpectating]","0x%02x",
                                                  *(undefined1 *)((int)param_1 + 0x729b1)),
                                                  iVar4 == 0)) &&
                                                  (iVar4 = TdrText_FieldScalar(param_2,iVar1,param_4
                                                                               ,"[iItemRebuildLen]",
                                                                               &DAT_11d9e0b4,
                                                                               *(undefined4 *)
                                                                                ((int)param_1 +
                                                                                0x729b2)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x729b2);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x800 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_22,
                                                                                "[szItemRebuild]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x729b2)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x729b6 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x729b2));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iItemBoxLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x731b6)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x731b6);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x800 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_23,
                                                                                "[szItemBox]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x731b6)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x731ba +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x731b6));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iShopLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x739ba)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x739ba);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x5000 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_24,
                                                                                "[szShop]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x739ba)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x739be +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x739ba));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[wEquipPlanLen]",&DAT_11d9e0b4,
                                                  *(undefined2 *)((int)param_1 + 0x789be)),
                                                  iVar4 == 0)) {
                                                    if (0x4fd8 < *(ushort *)((int)param_1 + 0x789be)
                                                       ) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(0x4fd8,
                                                  "[szEquipPlanData]",
                                                  *(ushort *)((int)param_1 + 0x789be),0);
                                                  if (iVar4 == 0) {
                                                    if (*(short *)((int)param_1 + 0x789be) != 0) {
                                                      uVar2 = 0;
                                                      do {
                                                        iVar4 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                                             *(undefined1 *)
                                                                              (uVar2 + 0x789c0 +
                                                                              (int)param_1));
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar2 = uVar2 + 1;
                                                      } while (uVar2 < *(ushort *)
                                                                        ((int)param_1 + 0x789be));
                                                    }
                                                    iVar4 = TdrBuf_PutU8Z(param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iTraceLen]",&DAT_11d9e0b4,param_1[0x1f666]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x1f666];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x1400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_25,
                                                                                "[szTrace]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x1f666]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x7d99c +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x1f666]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldLabelChar
                                                                            (param_4,"[stStarStone]"
                                                                             ,extraout_ECX_26),
                                                         iVar4 == 0)) {
                                                        iVar4 = iVar1;
                                                        if (-1 < iVar1) {
                                                          iVar4 = iVar1 + 1;
                                                        }
                                                        iVar4 = FUN_102c4d50(param_2,iVar4,param_4);
                                                        if ((iVar4 == 0) &&
                                                           (iVar4 = TdrText_FieldScalar(param_2,
                                                  iVar1,param_4,"[iSpeakLen]",&DAT_11d9e0b4,
                                                  param_1[0x1fb7e]), iVar4 == 0)) {
                                                    iVar4 = param_1[0x1fb7e];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x800 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_27,
                                                                                "[szSpeak]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x1fb7e]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x7edfc +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x1fb7e]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[dwBattleItemUseLen]",&DAT_11d9f574,
                                                  param_1[0x1fd7f]), iVar4 == 0)) {
                                                    if (0x400 < (uint)param_1[0x1fd7f]) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_28,
                                                                                "[szBattleItemUse]",
                                                                                param_1[0x1fd7f],0);
                                                    if (iVar4 == 0) {
                                                      if (param_1[0x1fd7f] != 0) {
                                                        uVar6 = 0;
                                                        do {
                                                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (uVar6 + 0x7f600 +
                                                                                 (int)param_1));
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar6 = uVar6 + 1;
                                                        } while (uVar6 < (uint)param_1[0x1fd7f]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[dwSuitSkillLen]",&DAT_11d9f574,param_1[0x1fe80])
                                                  , iVar4 == 0)) {
                                                    if (0x2800 < (uint)param_1[0x1fe80]) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_29,
                                                                                "[szSuitSkillData]",
                                                                                param_1[0x1fe80],0);
                                                    if (iVar4 == 0) {
                                                      if (param_1[0x1fe80] != 0) {
                                                        uVar6 = 0;
                                                        do {
                                                          iVar4 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (uVar6 + 0x7fa04 +
                                                                                 (int)param_1));
                                                          if (iVar4 != 0) {
                                                            return iVar4;
                                                          }
                                                          uVar6 = uVar6 + 1;
                                                        } while (uVar6 < (uint)param_1[0x1fe80]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iAstrolabeLen]",&DAT_11d9e0b4,param_1[0x20881]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x20881];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x80 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_30,
                                                                                "[szAstrolabe]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x20881]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x82208 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x20881]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iWildHuntLen]",&DAT_11d9e0b4,param_1[0x208a2]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x208a2];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_31,
                                                                                "[szWildHunt]",iVar4
                                                                                ,iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x208a2]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x8228c +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x208a2]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iSoulStoneLen]",&DAT_11d9e0b4,param_1[0x209a3]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x209a3];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_32,
                                                                                "[szSoulStone]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x209a3]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x82690 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x209a3]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iMonolopyLen]",&DAT_11d9e0b4,param_1[0x20aa4]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x20aa4];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x200 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_33,
                                                                                "[szMonolopy]",iVar4
                                                                                ,iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x20aa4]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x82a94 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x20aa4]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                      param_4,
                                                  "[iAchieveLen]",&DAT_11d9e0b4,param_1[0x20b25]),
                                                  iVar4 == 0)) {
                                                    iVar4 = param_1[0x20b25];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x400 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_34,
                                                                                "[szAchieve]",iVar4,
                                                                                iVar4 >> 0x1f);
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x20b25]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x82c98 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x20b25]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldLabelChar
                                                                            (param_4,
                                                  "[stUIOptionInfo]",extraout_ECX_35), iVar4 == 0))
                                                  {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_102c51c0(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iIllustrateLen]",&DAT_11d9e0b4,param_1[0x20e27])
                                                  , iVar4 == 0)) {
                                                    iVar4 = param_1[0x20e27];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x440 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_36,
                                                                                "[szIllustrate]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < (int)param_1[0x20e27]) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x838a0 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < (int)param_1[0x20e27]);
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldLabelChar
                                                                            (param_4,
                                                  "[stWeaponStyleInfo]",extraout_ECX_37), iVar4 == 0
                                                  )) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = TdrDebugFormat_WeaponStyleData
                                                                      (param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iWeaponHavenInfoCount]",&DAT_11d9e0b4,
                                                  param_1[0x20f4c]), iVar4 == 0)) {
                                                    iVar4 = param_1[0x20f4c];
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x2ee < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_38,
                                                                                                                                                                
                                                  "[szWeaponHavenInfo]",iVar4,iVar4 >> 0x1f);
                                                  if (iVar4 == 0) {
                                                    if (0 < (int)param_1[0x20f4c]) {
                                                      iVar4 = 0;
                                                      do {
                                                        iVar5 = FUN_1010c010(param_2," 0x%02x",
                                                                             (int)*(char *)(iVar4 + 
                                                  0x83d34 + (int)param_1));
                                                  if (iVar5 != 0) {
                                                    return iVar5;
                                                  }
                                                  iVar4 = iVar4 + 1;
                                                  } while (iVar4 < (int)param_1[0x20f4c]);
                                                  }
                                                  iVar4 = TdrBuf_PutU8Z(param_4);
                                                  if ((iVar4 == 0) &&
                                                     (iVar4 = TdrText_FieldLabelChar
                                                                        (param_4,
                                                  "[stSilverStorageBoxInfo]",extraout_ECX_39),
                                                  iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = FUN_1028e990(param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iGuideBookDataLen]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x84032)),
                                                  iVar4 == 0)) {
                                                    iVar4 = *(int *)((int)param_1 + 0x84032);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x800 < iVar4) {
                                                      return -7;
                                                    }
                                                    iVar4 = TdrText_ArrayHeader(extraout_ECX_40,
                                                                                "[szGuideBookData]",
                                                                                iVar4,iVar4 >> 0x1f)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      if (0 < *(int *)((int)param_1 + 0x84032)) {
                                                        iVar4 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c010(param_2,&DAT_11d9f710
                                                                               ,*(undefined1 *)
                                                                                 (iVar4 + 0x84036 +
                                                                                 (int)param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar4 = iVar4 + 1;
                                                        } while (iVar4 < *(int *)((int)param_1 +
                                                                                 0x84032));
                                                      }
                                                      iVar4 = TdrBuf_PutU8Z(param_4);
                                                      if ((iVar4 == 0) &&
                                                         (iVar4 = TdrText_FieldLabelChar
                                                                            (param_4,
                                                  "[stSecretResearchInitData]",extraout_ECX_41),
                                                  iVar4 == 0)) {
                                                    iVar4 = iVar1;
                                                    if (-1 < iVar1) {
                                                      iVar4 = iVar1 + 1;
                                                    }
                                                    iVar4 = TdrText_ItemBoxList_astItemBoxList
                                                                      (param_2,iVar4,param_4);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                    param_4,
                                                  "[iDragonShopBox]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x84986)),
                                                  iVar4 == 0)) {
                                                    iVar4 = TdrText_FieldScalar(param_2,iVar1,
                                                                                param_4,
                                                  "[iCanGetRewarded]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x8498a));
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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



