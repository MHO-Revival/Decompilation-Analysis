/* ===== FUN_10322b60 @ 10322b60  size=103 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[iM_nItemID]"
//   "[iM_nEnforceLv]"
//   "[szM_strName]"

/* [RE-AUTO c0]
   strings:
     ""[iM_nItemID]""
     ""[iM_nEnforceLv]""
     ""[szM_strName]"" */

void __thiscall
FUN_10322b60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iM_nItemID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iM_nEnforceLv]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldValueFmt(param_4,"[szM_strName]",param_1 + 2);
    }
  }
  return;
}



/* ===== FUN_103243c0 @ 103243c0  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]"" */

undefined4 __thiscall
FUN_103243c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10324440 @ 10324440  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]"" */

void __thiscall
FUN_10324440(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  return;
}



/* ===== FUN_10324470 @ 10324470  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]"" */

undefined1 * __thiscall
FUN_10324470(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[dwNCraftID]",&DAT_11d9f574,*param_1);
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



/* ===== FUN_10324500 @ 10324500  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[dwNCraftID]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]"" */

undefined1 * __thiscall
FUN_10324500(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwNCraftID]",&DAT_11d9f574,*param_1);
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



/* ===== FUN_103246f0 @ 103246f0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"
//   "[dwNResult]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]""
     ""[dwNResult]"" */

int __thiscall
FUN_103246f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwNResult]",&DAT_11d9f574,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10324790 @ 10324790  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"
//   "[dwNResult]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]""
     ""[dwNResult]"" */

void __thiscall
FUN_10324790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwNResult]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_10325000 @ 10325000  size=200 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNCraftID]"
//   "[dwNResult]"
//   "[dwNOrderItemID1]"
//   "[dwNOrderItemCount1]"
//   "[dwNOrderItemID2]"
//   "[dwNOrderItemCount2]"

/* [RE-AUTO c0]
   strings:
     ""[dwNCraftID]""
     ""[dwNResult]""
     ""[dwNOrderItemID1]""
     ""[dwNOrderItemCount1]""
     ""[dwNOrderItemID2]""
     ""[dwNOrderItemCount2]"" */

void __thiscall
FUN_10325000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNCraftID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNResult]",&DAT_11d9f574,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNOrderItemID1]",&DAT_11d9f574,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNOrderItemCount1]",&DAT_11d9f574,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNOrderItemID2]",&DAT_11d9f574,
                                      param_1[4]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[dwNOrderItemCount2]",&DAT_11d9f574,
                                param_1[5]);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10341cc0 @ 10341cc0  size=2295 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[ullId]"
//   "[szName]"
//   "[iIcon]"
//   "[szNote]"
//   "[iLevel]"
//   "[iExp]"
//   "[iRepute]"
//   "[iFund]"
//   "[iArena]"
//   "[iPlot]"
//   "[iResA]"
//   "[iResB]"
//   "[iGuildersCount]"
//   "[iOnlineGuildersCount]"
//   "[iGuildersAvgLevel]"
//   "[iJoinLevel]"
//   "0x%02x"
//   "[bDepotOpenFlag]"
//   "[ullFundMax]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullId]""
     ""[szName]""
     ""[iIcon]""
     ""[szNote]""
     ""[iLevel]""
     ""[iExp]""
     ""[iRepute]""
     ""[iFund]""
     ""[iArena]"" */

int __thiscall FUN_10341cc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  undefined4 *extraout_ECX_00;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullId]","%I64u",*param_1,param_1[1]);
  if (((((((((iVar2 == 0) &&
            (iVar2 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2), iVar2 == 0)) &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIcon]",&DAT_11d9e0b4,param_1[10])
           , iVar2 == 0)) &&
          ((iVar2 = TdrText_FieldValueFmt(param_4,"[szNote]",param_1 + 0xb), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,
                                        param_1[0x88]), iVar2 == 0)))) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iExp]",&DAT_11d9e0b4,param_1[0x89]),
         iVar2 == 0)) &&
        (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRepute]",&DAT_11d9e0b4,
                                       param_1[0x8a]), iVar2 == 0 &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFund]",&DAT_11d9e0b4,param_1[0x8b]
                                      ), iVar2 == 0)) &&
         ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iArena]",&DAT_11d9e0b4,
                                       param_1[0x8c]), iVar2 == 0 &&
          (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlot]",&DAT_11d9e0b4,
                                         param_1[0x8d]), iVar2 == 0 &&
            (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResA]",&DAT_11d9e0b4,
                                         param_1[0x8e]), iVar2 == 0)) &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResB]",&DAT_11d9e0b4,
                                        param_1[0x8f]), iVar2 == 0)))))))) &&
       (((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildersCount]",&DAT_11d9e0b4,
                                        param_1[0x90]), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOnlineGuildersCount]",
                                        &DAT_11d9e0b4,param_1[0x91]), iVar2 == 0)) &&
          ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildersAvgLevel]",&DAT_11d9e0b4,
                                        param_1[0x92]), iVar2 == 0 &&
           (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iJoinLevel]",&DAT_11d9e0b4,
                                          param_1[0x93]), iVar2 == 0 &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDepotOpenFlag]","0x%02x",
                                          *(undefined1 *)(param_1 + 0x94)), iVar2 == 0)) &&
            ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullFundMax]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0x251),
                                          *(undefined4 *)((int)param_1 + 0x255)), iVar2 == 0 &&
             (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bHallLevel]",&DAT_11d9e0b4,
                                            *(undefined1 *)((int)param_1 + 0x259)), iVar2 == 0 &&
               (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRecruitingLevel]",
                                            &DAT_11d9e0b4,*(undefined1 *)((int)param_1 + 0x25a)),
               iVar2 == 0)) &&
              (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bResourcingLevel]",
                                           &DAT_11d9e0b4,*(undefined1 *)((int)param_1 + 0x25b)),
              iVar2 == 0)))))))))) &&
         ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTradingLevel]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x97)), iVar2 == 0 &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTrainingLevel]",&DAT_11d9e0b4,
                                       *(undefined1 *)((int)param_1 + 0x25d)), iVar2 == 0)))) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuilderCountMax]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x25e)), iVar2 == 0)))) &&
      (((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullFundDaily]","%I64u",
                                       *(undefined4 *)((int)param_1 + 0x262),
                                       *(undefined4 *)((int)param_1 + 0x266)), iVar2 == 0 &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullFundWeekly]","%I64u",
                                       *(undefined4 *)((int)param_1 + 0x26a),
                                       *(undefined4 *)((int)param_1 + 0x26e)), iVar2 == 0)) &&
         ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullCommodityUnlock1]","%I64u",
                                       *(undefined4 *)((int)param_1 + 0x272),
                                       *(undefined4 *)((int)param_1 + 0x276)), iVar2 == 0 &&
          ((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullCommodityUnlock2]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0x27a),
                                          *(undefined4 *)((int)param_1 + 0x27e)), iVar2 == 0 &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullCommodityUnlock3]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0x282),
                                          *(undefined4 *)((int)param_1 + 0x286)), iVar2 == 0)) &&
            (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResC]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x28a)), iVar2 == 0)) &&
           ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResD]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x28e)), iVar2 == 0 &&
            (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResADaily]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x292)), iVar2 == 0))))))))
        && (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResBDaily]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x296)), iVar2 == 0)) &&
       (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResCDaily]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x29a)), iVar2 == 0 &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResDDaily]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x29e)), iVar2 == 0)) &&
        ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResAWeekly]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x2a2)), iVar2 == 0 &&
         (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResBWeekly]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2a6)), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResCWeekly]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2aa)), iVar2 == 0)) &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResDWeekly]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x2ae)), iVar2 == 0))))))))))
     && ((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResAMax]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2b2)), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResBMax]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2b6)), iVar2 == 0)) &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResCMax]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x2ba)), iVar2 == 0)) &&
         (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResDMax]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2be)), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationScore]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x2c2)), iVar2 == 0)) &&
          ((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationTaskA]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2c6)),
             iVar2 == 0 &&
             (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationTaskB]",
                                            &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2ca)),
               iVar2 == 0 &&
               (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationTaskC]",
                                            &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2ce)),
               iVar2 == 0)) &&
              (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationTaskD]",
                                           &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2d2)),
              iVar2 == 0)))) &&
            ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCelebrationReward]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2d6)),
             iVar2 == 0 &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDailyCelebrationScore]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x2da)),
             iVar2 == 0)))) &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceBoatCount]",&DAT_11d9e0b4
                                        ,*(undefined4 *)((int)param_1 + 0x2de)), iVar2 == 0))))))))
  {
    iVar2 = *(int *)((int)param_1 + 0x2de);
    if (iVar2 < 0) {
      return -6;
    }
    if (10 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      iVar2 = (int)param_1 + 0x2e2;
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astCommerceBoats]",param_3,iVar2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_103407f0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        iVar2 = extraout_ECX;
      } while (param_3 < *(int *)((int)param_1 + 0x2de));
    }
    iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iSelectBoatsId]",&DAT_11d9e0b4,param_1[0xd9]
                               );
    if (((iVar2 == 0) &&
        (iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[dwGuildWarHistoryInfo]",&DAT_11d9f574,
                                     param_1[0xda]), iVar2 == 0)) &&
       (iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iBuffCount]",&DAT_11d9e0b4,param_1[0xdb]
                                   ), iVar2 == 0)) {
      iVar2 = param_1[0xdb];
      if (iVar2 < 0) {
        return -6;
      }
      if (5 < iVar2) {
        return -7;
      }
      if (0 < iVar2) {
        puVar4 = param_1 + 0xdc;
        iVar2 = 0;
        do {
          iVar3 = TdrText_ArrayElemLabel(param_4,"[astCommerceBuffInfo]",iVar2,puVar4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = iVar1;
          if (-1 < iVar1) {
            iVar3 = iVar1 + 1;
          }
          iVar3 = FUN_10340ba0(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar2 = iVar2 + 1;
          puVar4 = extraout_ECX_00;
        } while (iVar2 < (int)param_1[0xdb]);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1037c2a0 @ 1037c2a0  size=103 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szName]"
//   "[iReward]"
//   "0x%02x"
//   "[bBFetched]"

/* [RE-AUTO c0]
   strings:
     ""[szName]""
     ""[iReward]""
     ""0x%02x""
     ""[bBFetched]"" */

void __thiscall FUN_1037c2a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iReward]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bBFetched]","0x%02x",
                          *(undefined1 *)(param_1 + 0x24));
    }
  }
  return;
}



/* ===== FUN_1037c880 @ 1037c880  size=525 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[iRankId]"
//   "[iPos]"
//   "[iRankersCount]"
//   "[iPages]"
//   "[iPage]"
//   "[iRewardNum]"
//   "[astRewards]"
//   "[iCount]"
//   "[astRank]"

/* [RE-AUTO c0]
   strings:
     ""[iRankId]""
     ""[iPos]""
     ""[iRankersCount]""
     ""[iPages]""
     ""[iPage]""
     ""[iRewardNum]""
     ""[astRewards]""
     ""[iCount]""
     ""[astRank]"" */

int __thiscall FUN_1037c880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRankId]",&DAT_11d9e0b4,*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPos]",&DAT_11d9e0b4,param_1[1]),
       iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRankersCount]",&DAT_11d9e0b4,
                                   param_1[2]), iVar2 == 0)) &&
     (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPages]",&DAT_11d9e0b4,param_1[3]),
       iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPage]",&DAT_11d9e0b4,param_1[4]),
       iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardNum]",&DAT_11d9e0b4,param_1[5]),
      iVar2 == 0)))) {
    iVar2 = param_1[5];
    if (iVar2 < 0) {
      return -6;
    }
    if (5 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astRewards]",param_3,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1037c2a0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)param_1[5]);
    }
    iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iCount]",&DAT_11d9e0b4,
                                *(undefined4 *)((int)param_1 + 0xd1));
    if (iVar2 == 0) {
      iVar2 = *(int *)((int)param_1 + 0xd1);
      if (iVar2 < 0) {
        return -6;
      }
      if (0x96 < iVar2) {
        return -7;
      }
      if (0 < iVar2) {
        iVar2 = 0;
        puVar4 = (undefined4 *)((int)param_1 + 0xd5);
        do {
          iVar3 = TdrText_ArrayElemLabel(param_4,"[astRank]",iVar2,puVar4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = iVar1;
          if (-1 < iVar1) {
            iVar3 = iVar1 + 1;
          }
          iVar3 = FUN_1037bd80(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar2 = iVar2 + 1;
          puVar4 = param_1;
        } while (iVar2 < *(int *)((int)param_1 + 0xd1));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_1037f2f0 @ 1037f2f0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRankId]"
//   "[iReward]"

/* [RE-AUTO c0]
   strings:
     ""[iRankId]""
     ""[iReward]"" */

int __thiscall
FUN_1037f2f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRankId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iReward]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1037f390 @ 1037f390  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRankId]"
//   "[iReward]"

/* [RE-AUTO c0]
   strings:
     ""[iRankId]""
     ""[iReward]"" */

void __thiscall
FUN_1037f390(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRankId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iReward]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_1037f790 @ 1037f790  size=103 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[iRankId]"
//   "[iReward]"
//   "[szName]"

/* [RE-AUTO c0]
   strings:
     ""[iRankId]""
     ""[iReward]""
     ""[szName]"" */

void __thiscall
FUN_1037f790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRankId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iReward]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2);
    }
  }
  return;
}



/* ===== FUN_103d3460 @ 103d3460  size=690 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel
// strings:
//   "[dwItemID]"
//   "[nItemCount]"
//   "0x%02x"
//   "[bBindType]"
//   "[bOpenType]"
//   "[chColumn]"
//   "[dwFlags]"
//   "[bCondType]"
//   "[bCondId]"
//   "[iCondParam1]"
//   "[iCondParam2]"
//   "[szCondParam]"
//   "[nGetCountMax]"
//   "[szDesc]"
//   "[szCondArg1]"
//   "[szCondArg2]"
//   "[bRewardItemCount]"
//   "[astRewardItems]"

/* [RE-AUTO c0]
   strings:
     ""[dwItemID]""
     ""[nItemCount]""
     ""0x%02x""
     ""[bBindType]""
     ""[bOpenType]""
     ""[chColumn]""
     ""[dwFlags]""
     ""[bCondType]""
     ""[bCondId]""
     ""[iCondParam1]"" */

int __thiscall FUN_103d3460(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwItemID]",&DAT_11d9f574,*param_1);
  if (((((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nItemCount]",&DAT_11d9e0b4,
                                     (int)*(short *)(param_1 + 1)), iVar3 == 0)) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bBindType]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 6)), iVar3 == 0)) &&
      (((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bOpenType]","0x%02x",
                                     *(undefined1 *)((int)param_1 + 7)), iVar3 == 0 &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[chColumn]","0x%02x",
                                     (int)*(char *)(param_1 + 2)), iVar3 == 0)) &&
       ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwFlags]",&DAT_11d9f574,
                                     *(undefined4 *)((int)param_1 + 9)), iVar3 == 0 &&
        ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bCondType]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0xd)), iVar3 == 0 &&
         (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bCondId]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0xe)), iVar3 == 0)))))))) &&
     ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCondParam1]",&DAT_11d9e0b4,
                                   *(undefined4 *)((int)param_1 + 0xf)), iVar3 == 0 &&
      (((((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCondParam2]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x13)), iVar3 == 0 &&
          (iVar3 = TdrText_FieldValueFmt(param_4,"[szCondParam]",(int)param_1 + 0x17), iVar3 == 0))
         && (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nGetCountMax]",&DAT_11d9e0b4,
                                         (int)*(short *)((int)param_1 + 0x37)), iVar3 == 0)) &&
        ((iVar3 = TdrText_FieldValueFmt(param_4,"[szDesc]",(int)param_1 + 0x39), iVar3 == 0 &&
         (iVar3 = TdrText_FieldValueFmt(param_4,"[szCondArg1]",(int)param_1 + 0xb9), iVar3 == 0))))
       && ((iVar3 = TdrText_FieldValueFmt(param_4,"[szCondArg2]",(int)param_1 + 0x139), iVar3 == 0
           && (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRewardItemCount]","0x%02x",
                                           *(undefined1 *)((int)param_1 + 0x1b9)), iVar3 == 0)))))))
     ) {
    bVar1 = *(byte *)((int)param_1 + 0x1b9);
    uVar4 = (uint)bVar1;
    if (10 < bVar1) {
      return -7;
    }
    bVar2 = 0;
    if (bVar1 != 0) {
      do {
        iVar3 = TdrText_ArrayElemLabel(param_4,"[astRewardItems]",bVar2,uVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_103d2b40(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        bVar2 = bVar2 + 1;
        uVar4 = extraout_ECX;
      } while (bVar2 < *(byte *)((int)param_1 + 0x1b9));
    }
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_103de410 @ 103de410  size=408 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iType]"
//   "[iClanScoreMod]"
//   "[iClanPVMod]"
//   "[iSelfScoreMod]"
//   "[iPunish]"
//   "[iSelfPVMod]"
//   "[iSelfMedalMod]"
//   "[iStepRewardLevel]"
//   "[bWeekLimit]"
//   "[bTotalLimit]"
//   "[iExRewardScore]"
//   "[iExRewardMedal]"

/* [RE-AUTO c0]
   strings:
     ""[iType]""
     ""[iClanScoreMod]""
     ""[iClanPVMod]""
     ""[iSelfScoreMod]""
     ""[iPunish]""
     ""[iSelfPVMod]""
     ""[iSelfMedalMod]""
     ""[iStepRewardLevel]""
     ""[bWeekLimit]""
     ""[bTotalLimit]"" */

void __thiscall
FUN_103de410(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iClanScoreMod]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iClanPVMod]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSelfScoreMod]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPunish]",&DAT_11d9e0b4,param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSelfPVMod]",&DAT_11d9e0b4,
                                        param_1[5]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSelfMedalMod]",&DAT_11d9e0b4,
                                          param_1[6]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStepRewardLevel]",
                                            &DAT_11d9e0b4,param_1[7]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bWeekLimit]",&DAT_11d9e0b4,
                                              *(undefined1 *)(param_1 + 8));
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTotalLimit]",
                                                &DAT_11d9e0b4,*(undefined1 *)((int)param_1 + 0x21));
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iExRewardScore]",
                                                  &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x22)
                                                 );
                      if (iVar1 == 0) {
                        TdrText_FieldScalar(param_2,param_3,param_4,"[iExRewardMedal]",&DAT_11d9e0b4
                                            ,*(undefined4 *)((int)param_1 + 0x26));
                      }
                    }
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



/* ===== FUN_103e0350 @ 103e0350  size=404 ===== */
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
//   "[iExRewardNum]"
//   "[iStepReward]"
//   "[iExMedalNum]"

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
     ""[iExRewardNum]"" */

void __thiscall
FUN_103e0350(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iExRewardNum]",
                                                &DAT_11d9e0b4,param_1[9]);
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStepReward]",
                                                  &DAT_11d9e0b4,param_1[10]);
                      if (iVar1 == 0) {
                        TdrText_FieldScalar(param_2,param_3,param_4,"[iExMedalNum]",&DAT_11d9e0b4,
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



/* ===== FUN_103f3940 @ 103f3940  size=372 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iRetCode]"
//   "%I64i"
//   "[llItemUid]"
//   "[iQuenchLv]"
//   "[iAttrDataCnt]"
//   "[attrType]"
//   "[szAttrValue]"
//   " 0x%02x"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""%I64i""
     ""[llItemUid]""
     ""[iQuenchLv]""
     ""[iAttrDataCnt]""
     ""[attrType]""
     ""[szAttrValue]""
     "" 0x%02x"" */

int __thiscall
FUN_103f3940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llItemUid]","%I64i",param_1[1],
                                    param_1[2]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iQuenchLv]",&DAT_11d9e0b4,param_1[3]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttrDataCnt]",&DAT_11d9e0b4,param_1[4])
     , iVar1 == 0)) {
    iVar1 = param_1[4];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x14 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[attrType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[4]) {
        puVar2 = param_1 + 5;
        do {
          iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar1 < (int)param_1[4]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = param_1[4];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x14 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[szAttrValue]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[4]) {
            do {
              iVar3 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)((int)param_1 + iVar1 + 100));
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)param_1[4]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_103f3ee0 @ 103f3ee0  size=372 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iRetCode]"
//   "%I64i"
//   "[llItemUid]"
//   "[iQuenchLv]"
//   "[iAttrDataCnt]"
//   "[attrType]"
//   "[szAttrValue]"
//   " 0x%02x"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""%I64i""
     ""[llItemUid]""
     ""[iQuenchLv]""
     ""[iAttrDataCnt]""
     ""[attrType]""
     ""[szAttrValue]""
     "" 0x%02x"" */

int __thiscall
FUN_103f3ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llItemUid]","%I64i",param_1[1],
                                    param_1[2]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iQuenchLv]",&DAT_11d9e0b4,param_1[3]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttrDataCnt]",&DAT_11d9e0b4,param_1[4])
     , iVar1 == 0)) {
    iVar1 = param_1[4];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x14 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[attrType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[4]) {
        puVar2 = param_1 + 5;
        do {
          iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar1 < (int)param_1[4]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = param_1[4];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x14 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[szAttrValue]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[4]) {
            do {
              iVar3 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)((int)param_1 + iVar1 + 100));
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)param_1[4]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10406020 @ 10406020  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIndex]"
//   "[iNeedPoint]"
//   "[iGetedState]"
//   "[iRewardItemID]"
//   "[iRewardItemCount]"

/* [RE-AUTO c0]
   strings:
     ""[iIndex]""
     ""[iNeedPoint]""
     ""[iGetedState]""
     ""[iRewardItemID]""
     ""[iRewardItemCount]"" */

void __thiscall
FUN_10406020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIndex]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNeedPoint]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGetedState]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardItemID]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardItemCount]",&DAT_11d9e0b4,param_1[4])
          ;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10418650 @ 10418650  size=200 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iDateDay]"
//   "[iCurHigher]"
//   "[iMeetTime]"
//   "[iGiantTime]"
//   "[iDailyRewardFlag]"
//   "[iRewardFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iDateDay]""
     ""[iCurHigher]""
     ""[iMeetTime]""
     ""[iGiantTime]""
     ""[iDailyRewardFlag]""
     ""[iRewardFlag]"" */

void __thiscall
FUN_10418650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDateDay]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCurHigher]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMeetTime]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGiantTime]",&DAT_11d9e0b4,param_1[3])
        ;
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDailyRewardFlag]",&DAT_11d9e0b4,
                                      param_1[4]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[iRewardFlag]",&DAT_11d9e0b4,param_1[5]);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1041b390 @ 1041b390  size=245 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "[iErrCode]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bColumn]"
//   "[wGrid]"
//   "[stReserveAbilityInfo]"
//   "[bLevelUpFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bColumn]""
     ""[wGrid]""
     ""[stReserveAbilityInfo]""
     ""[bLevelUpFlag]"" */

void __thiscall FUN_1041b390(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[1],
                                    param_1[2]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bColumn]","0x%02x",
                                   *(undefined1 *)(param_1 + 3)), iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)((int)param_1 + 0xd)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldLabelChar(param_4,"[stReserveAbilityInfo]",extraout_ECX), iVar1 == 0))))
  {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10272f80(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bLevelUpFlag]","0x%02x",
                          *(undefined1 *)((int)param_1 + 0x1b));
    }
  }
  return;
}



/* ===== FUN_1041d9f0 @ 1041d9f0  size=108 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"
//   "[iGetRewardCount]"
//   "0x%02x"
//   "[chIsNotNew]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]""
     ""[iGetRewardCount]""
     ""0x%02x""
     ""[chIsNotNew]"" */

void __thiscall
FUN_1041d9f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGetRewardCount]",&DAT_11d9e0b4,param_1[1]
                               );
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[chIsNotNew]","0x%02x",
                          (int)*(char *)(param_1 + 2));
    }
  }
  return;
}



/* ===== FUN_1043b460 @ 1043b460  size=12706 ===== */
// calls: TdrText_FieldLabelChar, TdrText_TargetForPlayer, TdrText_NpcCraftTagItems, TdrText_MEGridInfo, TdrText_Data_Wrapper, TdrDebugFormat_InteractResult, TdrDebugFormat_InteractRequest, TdrDebugFormat_ActionPointResponse, TdrDebugFormat_ExtRequest, TdrDebugFormat_ExtNotify, TdrDbgFmt_AppearArray_max4, TdrDbgFmt_StarBranchStats, TdrDbgFmt_MatchInfos_max10, TdrDbgFmt_ArgsWrap_103c7a80, TdrDebugFormat_WeaponRecord
// strings:
//   "[stAction]"
//   "[stHeartBeat]"
//   "[stTeamInviteReq]"
//   "[stReqSwapItem]"
//   "[stAddCraft]"
//   "[stBeginCraftResult]"
//   "[stBeginCraft]"
//   "[stAddCraftResult]"
//   "[stMaterialExchange]"
//   "[stShortcutUpdate]"
//   "[stMaterialExchangeNtf]"
//   "[stSkillEffectSync]"
//   "[stBeginLoot]"
//   "[stSupplyBoxStateNtf]"
//   "[stC2SAcceptTask]"
//   "[stNpcShopBuyItemReq]"
//   "[stManufactureProduceReq]"
//   "[stTradeErrorRet]"
//   "[stActionPointRequest]"
//   "[stInteractResult]"

/* [RE-AUTO c0]
   strings:
     ""[stAction]""
     ""[stHeartBeat]""
     ""[stTeamInviteReq]""
     ""[stReqSwapItem]""
     ""[stAddCraft]""
     ""[stBeginCraftResult]""
     ""[stBeginCraft]""
     ""[stAddCraftResult]""
     ""[stMaterialExchange]""
     ""[stShortcutUpdate]"" */

int FUN_1043b460(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 + -1 + (uint)(param_1 != 0) != 0) || (0xee00 < param_1 - 1U)) goto LAB_1045784f;
  if (param_1 < 0x202) {
    if (param_1 == 0x201) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stAction]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_102d88a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_102d88a0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 - 1U < 0x10e) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&DAT_10457a8f)[param_1]) {
      case 0:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stListRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10277950(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10277950(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 1:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stListRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102797b0(param_3,param_4,param_5);
            return iVar1;
          }
LAB_1043b54b:
          iVar1 = FUN_102797b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 2:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCreateRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027a100(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027a100(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 3:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCreateRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102797b0(param_3,param_4,param_5);
            return iVar1;
          }
          goto LAB_1043b54b;
        }
        break;
      case 4:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDeleteRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027a5d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027a5d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 5:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDeleteRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027a920(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027a920(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 6:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027ad10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027ad10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 7:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelecteRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027b0a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027b0a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 8:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stUnSelectLineReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027d000(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027d000(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 9:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMultiNetIpinfo]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_104024b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104024b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 10:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterInstanceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029d430(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029d430(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0xb:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterInstanceRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a2a40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a2a40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0xc:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceVerifyReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a3040(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a3040(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0xd:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceVerifyRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102cee60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cee60(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0xe:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLeaveInstanceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a3490(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a3490(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0xf:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLeaveInstanceRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a3af0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a3af0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x10:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReselectRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d0f90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d0f90(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x11:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReselectRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d1280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d1280(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x12:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stTownSessionStart]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d15a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d15a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x13:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMultiIspSequenceNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_104029f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104029f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x14:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCheckVersionReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10285e30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10285e30(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x15:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCheckVersionRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10286380(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10286380(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x16:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCloseConnectionReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102b0bb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102b0bb0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x17:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCloseConnectionRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102b0ea0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102b0ea0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x18:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceSynOptReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028b500(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028b500(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x19:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGMEnterInstanceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029daf0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029daf0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceRemainTimeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a1420(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a1420(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMaxCatCarCountChangeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a17b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a17b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBackToTown]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029d140(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029d140(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRoleDataErrorRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027b390(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027b390(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterInstanceCountDown]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029d780(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029d780(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x1f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceSynOptRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028bbb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028bbb0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x20:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceEnterOptReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028c660(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028c660(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x21:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceEnterOptRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028cbf0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028cbf0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x22:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceAgreeOptReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028d390(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028d390(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x23:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceAgreeOptRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10293cd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10293cd0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x24:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceFinishRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102922f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102922f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x25:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceUIReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10292710(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10292710(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x26:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceUIRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10293290(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10293290(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x27:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stForceEnterInstanceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029cdf0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029cdf0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x28:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSysGMCmdReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a7ee0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a7ee0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x29:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAllEntrustLevelListReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ac800(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ac800(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAllEntrustLevelListRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_GroupList17(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_GroupList17(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRemainExpLimitShowNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ac510(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ac510(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMainInstanceClose]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10294180(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10294180(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stNormalLimitEventNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102abb40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102abb40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHuntingModeReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028d0a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028d0a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x2f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpInsInfoNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a3800(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a3800(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x30:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stTownServerInitNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrText_InstanceEnterInfo(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrText_InstanceEnterInfo(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x31:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSvrStatusNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a83b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a83b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x32:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterFarmReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a1b10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a1b10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x33:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterFarmRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a1e80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a1e80(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x34:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAccpetEntrustLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a8840(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a8840(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x35:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAccpetEntrustLevelRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a8be0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a8be0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x36:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDropEntrustLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a8f30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a8f30(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x37:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDropEntrustLevelRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a9220(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a9220(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x38:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCompleteEntrustLevelNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a9590(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a9590(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x39:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRecoverEntrustLevelNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a98e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a98e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterEntrustLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102acff0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102acff0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGMEnterEntrustLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ad2e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ad2e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntrustLevelListReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102aa540(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102aa540(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntrustLevelListRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_SubGroupList_ByErrCode(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_SubGroupList_ByErrCode(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntrustPeriodLimitEventNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ab0a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ab0a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x3f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceDynamicInfoNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102afba0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102afba0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x40:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChangeTownInstanceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102b0550(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102b0550(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x41:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChangeTownInstanceRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102b08c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102b08c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x42:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAasInfoNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_103a6bb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a6bb0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x43:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSessionTSSTimeNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_103a6f20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a6f20(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x44:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTDebugBSListReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fb1e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fb1e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x45:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTDebugBSListRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fc020(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fc020(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x46:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTDebugBGListReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fc430(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fc430(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x47:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTDebugBGListRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fc860(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fc860(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x48:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelPeriodLimitNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_103a7a10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a7a10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x49:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelTournamentPeriodLimitNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_103a7dc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a7dc0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stWaitQueueInfo]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027b6c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027b6c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectLineReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027cd10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027cd10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLineInfoReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027d2f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027d2f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLineInfoRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_LineInfoList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_LineInfoList(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSwitchLineReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027dd70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027dd70(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x4f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSwitchLineRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10279b10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10279b10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x50:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stNewLineInfo]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027e060(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027e060(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x51:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectHuntingBagReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028d680(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028d680(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x52:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectHuntingBagRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028da90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028da90(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x53:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectUIProcessOKNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10291090(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10291090(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x54:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleTargetChangeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102913c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102913c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x55:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleTargetList]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_TargetInfoList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_TargetInfoList(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x56:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBreakCutSceneNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10291ec0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10291ec0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x57:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelTournamentPeriodLimitClearNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_103a8170(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a8170(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x58:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSilverTipsReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028b850(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028b850(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x59:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stNoticeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ff0f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ff0f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBsmInviteJoinRoomNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ff480(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ff480(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBsmJoinRoomReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ff7d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ff7d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBsmJoinRoomRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ffb30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ffb30(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBSMRoomOpRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102937a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102937a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterAiStateInfo]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027e460(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027e460(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x5f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stServerAbnormalNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028b180(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028b180(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x60:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterGmResp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027e880(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027e880(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x61:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterGuildLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029de00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029de00(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x62:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterGuildLevelRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029e0f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029e0f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 99:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLeaveGuildLevelReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029e3e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029e3e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 100:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLeaveGuildLevelRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029e6d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029e6d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x65:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRestoreRoleReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027b9f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027b9f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x66:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRestoreRoleRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027bd40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027bd40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x67:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCountdownEndReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027c030(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027c030(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x68:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCountdownEndRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027c380(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027c380(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x69:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSystemUnlockNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027c6d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027c6d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSystemLockNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1027ca20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1027ca20(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerQueryReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102cdff0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cdff0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerQueryInfo]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102cd750(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cd750(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterGuildMatchQualifierReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d0530(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d0530(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterGuildMatchQualifierRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d0880(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d0880(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x6f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemListReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ce2e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ce2e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x70:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemListRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102ce8a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ce8a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x71:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SFileCheckReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1040a180(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1040a180(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x72:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFileCheckRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1040a4e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1040a4e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x73:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLocalBatOPReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029eb30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029eb30(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x74:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLocalBatOPRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_OpResult(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_OpResult(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x75:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReportReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029f790(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029f790(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x76:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReportRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1029fd40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1029fd40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x77:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBuyExpLimitRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a00b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a00b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x78:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stModifyFaceReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a05b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a05b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x79:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stModifyFaceRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a0a90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a0a90(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAutoStartProcess]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a0d80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a0d80(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerDailyRefresh]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102a1070(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102a1070(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stWeaponTrialShow]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_1028e2c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028e2c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stClientSendLogNewplayer]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102c4160(param_3,param_4,param_5);
            return iVar1;
          }
LAB_1043dd6d:
          iVar1 = FUN_102c4160(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CNotify]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10288980(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10288980(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x7f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CErr]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_10288e00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10288e00(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x80:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatBroadcastReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d46d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d46d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x81:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatPrivateReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d4c70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d4c70(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x82:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d50d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d50d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x83:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d5b00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d5b00(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x84:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatSystemMsgNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrText_SysNotify_MsgParam(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrText_SysNotify_MsgParam(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x85:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatHornReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102d7620(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d7620(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x86:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSysNoticeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fd5c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fd5c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x87:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatSystemMsgReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = TdrText_SysNotify_MsgParam_NoItems(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrText_SysNotify_MsgParam_NoItems(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x88:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stIdipNoticeNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fdae0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fdae0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x89:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stExpressionLevelupNtf]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fdea0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fdea0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x8a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatTargetQueryReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fe2b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fe2b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x8b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChatTargetQueryRsp]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fe8c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fe8c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x8c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stExpressionCollectReq]",1);
        if (iVar1 == 0) {
          if (param_4 < 0) {
            iVar1 = FUN_102fece0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102fece0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        break;
      case 0x8d:
        goto LAB_1045784f;
      }
    }
    else {
LAB_1045784f:
    }
    return iVar1;
  }
  if (param_1 < 0x502) {
    if (param_1 == 0x501) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stHeartBeat]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10286e50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10286e50(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 - 0x202U < 0x208) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&LAB_10457cde)[param_1]) {
      case 0:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stNewPlayer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102de2e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102de2e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 1:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAssignId]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102de5a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102de5a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 2:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSpawnPlayer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102debc0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102debc0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 3:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSetState]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e2230(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e2230(param_3,param_4 + 1,param_5);
        return iVar1;
      case 4:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLoadLevelNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e2520(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e2520(param_3,param_4 + 1,param_5);
        return iVar1;
      case 5:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDelPlayer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e2810(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e2810(param_3,param_4 + 1,param_5);
        return iVar1;
      case 6:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSpawnSrvEnt]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102df1d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102df1d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 7:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSpawnSrvEntList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntInitList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntInitList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 8:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRemoveSrvEnt]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102df560(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102df560(param_3,param_4 + 1,param_5);
        return iVar1;
      case 9:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRemoveSrvEntList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_NetObjIdList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_NetObjIdList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 10:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stClientStateId]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e0130(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e0130(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterActiveState]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e04d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e04d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneEffectAppear]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a6fc0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a6fc0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xd:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneEffectDel]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a7890(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a7890(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xe:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneEffectList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_EffectList256(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_EffectList256(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xf:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntityAppearNtfIDList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a65d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a65d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x10:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLoadEntityReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a6b00(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a6b00(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x11:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpAchievementNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e1b50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e1b50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x12:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpGodLuckNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e0990(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e0990(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x13:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpPlayerKillNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e0f10(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e0f10(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x14:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpPlayerDamageNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e1320(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e1320(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x15:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpExpldeInfoNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_AoeAttack(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_AoeAttack(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x16:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stStartAnim]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e3bf0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e3bf0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x17:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stStopAnim]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e4010(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e4010(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x18:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRemoveAnim]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e43b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e43b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x19:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntitySpeed]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e47b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e47b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLocation]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_NetObjLocation(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_NetObjLocation(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGameObjEvent]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e7d30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e7d30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMcmChange]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e8d80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e8d80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorFlyMove]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_MoveInputFull(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_MoveInputFull(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorFlyMoveNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f63f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f63f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerAmmoChangeRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e8a20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e8a20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x20:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAGSyncMsg]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e9160(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e9160(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x21:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFIFOSyncMsg]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityFullSyncState(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityFullSyncState(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x22:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAGAllInputMsg]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e9a60(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e9a60(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x23:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAGMeleeEvent]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e8380(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e8380(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x24:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerAmmoChangeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e8730(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e8730(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x25:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFSMMsg]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102eb050(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102eb050(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x26:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerReviveReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d22a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d22a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x27:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerReviveRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d2730(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d2730(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x28:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stProjectileLaunchNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_AppearList4_C(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_AppearList4_C(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x29:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stProjectileDestroy]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b6450(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b6450(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerTeleport]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e4c70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e4c70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerRegionJumpReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_TriggerEnter(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_TriggerEnter(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerRegionJumpRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e5c40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e5c40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayFxNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030ad30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030ad30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFIFOSyncMsgNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntitySync_Wrapper_A(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntitySync_Wrapper_A(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x2f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stServerSyncMsgNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntitySync_Wrapper_B(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntitySync_Wrapper_B(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x30:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneObjSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e6d70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e6d70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x31:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorBeginmoveNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorBeginMove_Wrapper(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorBeginMove_Wrapper(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x32:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorMovestateNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorMoveState_Wrapper(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorMoveState_Wrapper(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x33:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorStopmoveNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorStopMove_Wrapper(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorStopMove_Wrapper(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x34:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorIdlemoveNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorIdleMove_Wrapper(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorIdleMove_Wrapper(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x35:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stServerSyncInfoAck]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f2780(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f2780(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x36:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerAbnormalNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f2b50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f2b50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x37:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorRotationNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f81d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f81d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x38:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorAttachEntity]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f85a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f85a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x39:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorAttachEntityNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f89e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f89e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorDetachEntity]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f8e10(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f8e10(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorDetachEntityNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f9250(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f9250(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGiantSwordJinLiExplodeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e7500(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e7500(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorLocomotion]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f99f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f99f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBoatReset]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_NetObjPosRot(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_NetObjPosRot(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stVehicleAmmoInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_VehicleAmmoList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_VehicleAmmoList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x40:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReviveOtherPlayerReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d2b70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d2b70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x41:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReviveOtherPlayerRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d31e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d31e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x42:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerTeleportResponse]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e5050(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e5050(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x43:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerLeaveEvadeNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e53f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e53f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x44:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorLocostate]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f33b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f33b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x45:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerLockActionNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10333e90(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x46:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerLockActionAck]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10333e90(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x47:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillDebug]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1039d250(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1039d250(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x48:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillUseInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1039d5e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1039d5e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x49:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stStateResetMsg]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102eb4f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102eb4f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stClientPlayerCelebrate]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10300170(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10300170(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stClientPlayerRevive]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103004f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103004f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stUIOptionData]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c51c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c51c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAIAnimSeq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ebf70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ebf70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterLCM]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ed140(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ed140(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x4f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterPartBroken]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ef620(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ef620(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x50:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterDead]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102efb00(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102efb00(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x51:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterLocoInfoCmd]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f0b10(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f0b10(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x52:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterLocoInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f0690(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f0690(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x53:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorIdlemove]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorIdleMoveInner(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorIdleMoveInner(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x54:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorHitDebuginfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f2f80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f2f80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x55:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterMovestate]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f3890(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f3890(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x56:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorSkillPos]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f3cd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f3cd0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x57:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterLocoEnd]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f40e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f40e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x58:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterSequenceState]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f4620(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f4620(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x59:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterAttachToTarget]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f4b70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f4b70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterActionAck]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f4fa0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f4fa0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorRecordPosition]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_FlagLocation(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_FlagLocation(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorControlMonster]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f5750(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f5750(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleTimesync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f5a90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f5a90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorBeginmove]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorBeginMoveInner(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorBeginMoveInner(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x5f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorMovestate]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorMoveStateInner(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorMoveStateInner(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x60:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stActorStopmove]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ActorStopMoveInner(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ActorStopMoveInner(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x61:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stObjPropertiesChange]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityVariableList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityVariableList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x62:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stObjStateChange]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102fa850(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102fa850(param_3,param_4 + 1,param_5);
        return iVar1;
      case 99:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterAppearNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ee200(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ee200(param_3,param_4 + 1,param_5);
        return iVar1;
      case 100:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterAppearNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_AppearList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_AppearList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x65:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerAppearNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a5490(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a5490(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x66:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerAppearNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_AppearList4_A(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_AppearList4_A(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x67:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stObjectAction]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10283430(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10283430(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x68:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerInitNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ca4c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ca4c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x69:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceInitNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102a22d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102a22d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntityDisappearNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_DisappearList4(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_DisappearList4(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSetTrapReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d1ac0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d1ac0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSetTrapRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d1f50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d1f50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneObjAppearNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b1930(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b1930(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSceneObjAppearNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_AppearList4_B(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_AppearList4_B(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerVehicleFire]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e62b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e62b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x70:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHealthSyncNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b45e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b45e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x71:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReloadAmmoReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b4970(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b4970(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x72:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReloadAmmoRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_AmmoList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_AmmoList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x73:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stProjectileLaunch]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b5700(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b5700(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x74:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEffectSYNC]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030a8d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030a8d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x75:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterLevelNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d7980(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d7980(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x76:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stUpdateRushState]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d81e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d81e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x77:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChangeAmmoReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b6740(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b6740(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x78:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stChangeAmmoRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b6a90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b6a90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x79:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stTimeOfDayNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d84f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d84f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPropSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1027fc50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1027fc50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stProjectileEffectNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102dc450(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102dc450(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBOSSDie]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102efef0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102efef0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLogicBTObjSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102d35b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d35b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTFGEventSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030b100(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030b100(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x7f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHitFlySync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030bc70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030bc70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x80:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSpawnStripSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_BoxTrapPlacement(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_BoxTrapPlacement(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x81:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFmodCueSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030d760(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030d760(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x82:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLookAtSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030e900(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030e900(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x83:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPInfoNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_FactionWarState(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_FactionWarState(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x84:
        iVar1 = TdrText_FieldLabelChar(param_5,&UNK_11db5178,1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b3370(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b3370(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x85:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSetFactionReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b3970(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b3970(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x86:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSetFactionRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b3cc0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b3cc0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x87:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDiffuseColorSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityDiffuseColor(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityDiffuseColor(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x88:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRenderActionSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103101c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103101c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x89:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stWeatherSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030b3f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030b3f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGmString]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030b810(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030b810(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8b:
        iVar1 = TdrText_FieldLabelChar(param_5,&UNK_11db5220,1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102b3680(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102b3680(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleDMG]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = CMHHitInfo__SerializeToKeyValue(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = CMHHitInfo__SerializeToKeyValue(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleDMGVerifyContext]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102db3b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102db3b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattlePVPDMG]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ddb80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ddb80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x8f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattleDMGContext]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102dbee0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102dbee0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x90:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPaidContributeBoxReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e31f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e31f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x91:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPaidContributeBoxRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e36e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e36e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x92:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBattlePVPDMGNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_DamageResult_Wrapper(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_DamageResult_Wrapper(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x93:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerLevelInitNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_PlayerLevelData(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_PlayerLevelData(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x94:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCtrledMonsterAppearNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_AppearEffect(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_AppearEffect(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x95:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stClientSendLog]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c4160(param_3,param_4,param_5);
          return iVar1;
        }
        goto LAB_1043dd6d;
      case 0x96:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSvrTestReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c4500(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c4500(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x97:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDataLoadReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040b880(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040b880(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x98:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDataLoadRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_RemoteDataUnion(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_RemoteDataUnion(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x99:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDirectInteractRequest]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102be040(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102be040(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAISkillSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10310510(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10310510(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAttrSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10284190(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10284190(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAttrInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ccc40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ccc40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDMGResult]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102dcf40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102dcf40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRandomPosReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10286720(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10286720(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x9f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRandomPosRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_ErrNoRandomPos(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_ErrNoRandomPos(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa0:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRandSeedSyncReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10300cc0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10300cc0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa1:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRandSeedSyncRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10300ff0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10300ff0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa2:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerRegionJumpEnd]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e5f80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e5f80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa3:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBTObjSimpleLocomotion]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityPosRotTarget(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityPosRotTarget(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa4:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRegionWeatherNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ad6d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ad6d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa5:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerBakeResultReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e6660(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e6660(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa6:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerBakeResultRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102e69e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102e69e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa7:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterSkelPoseInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_MonsterBonePose(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_MonsterBonePose(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa8:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterSrvAnimDebugCmd]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f0e90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f0e90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xa9:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterPhysPartInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_MonsterPartPose(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_MonsterPartPose(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xaa:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterScarNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102fcd00(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102fcd00(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xab:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEnableSvrAnimOptimize]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f1c20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f1c20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xac:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSequenceSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030c1d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030c1d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xad:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReqPlaySequence]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030c520(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030c520(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xae:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stTokenSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_EntriesList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_EntriesList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xaf:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDMGParam]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102dd7c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102dd7c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb0:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReqPlayCutScene]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030c870(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030c870(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb1:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayCutSceneNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030cbc0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030cbc0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb2:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stReqCancelCutScene]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030ceb0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030ceb0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb3:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterLocoInfoDebug]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102f0290(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102f0290(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb4:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAttrSyncList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_AttrList50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_AttrList50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb5:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmGatherReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103bf800(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103bf800(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb6:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmGatherRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_FarmGatherResult(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_FarmGatherResult(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb7:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmFacilityLevelupReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c0590(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c0590(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb8:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmFacilityLevelupRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c0900(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c0900(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xb9:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetAutoGatherReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c1430(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c1430(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xba:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetAutoGatherRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c1740(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c1740(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xbb:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetPetReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c1ab0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c1ab0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xbc:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetPetRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c1e20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c1e20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xbd:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmTrainPetReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c2150(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c2150(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xbe:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmTrainPetRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c2530(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c2530(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xbf:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmDataUpdate]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_FarmBlob_dwServerTime(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_FarmBlob_dwServerTime(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc0:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmPlantReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c2d40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c2d40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc1:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmPlantRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c3030(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c3030(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc2:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmFacilitySetGatherLevelReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c0cd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c0cd0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc3:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmFacilitySetGatherLevelRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c1060(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c1060(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc4:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmTrainResultNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c3420(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c3420(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc5:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmAdvancedFacilityOpenNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c37f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c37f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc6:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceTimesync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102ffe80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102ffe80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 199:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDragPlayer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103008f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103008f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 200:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBuffInitList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityBuffList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityBuffList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xc9:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAddBuff]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityBuff_Wrapper_A(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityBuff_Wrapper_A(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xca:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDelBuff]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10302700(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10302700(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xcb:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDelBuffReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10302a90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10302a90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xcc:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBuffParamChange]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_EntityBuff_Wrapper_B(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_EntityBuff_Wrapper_B(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xcd:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stApplyEffect]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103031a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103031a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xce:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stBuffCondition]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10303510(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10303510(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0xcf:
        goto LAB_1045784f;
      }
      iVar1 = FUN_10333e90(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x702) {
    if (param_1 == 0x701) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamInviteReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TargetForPlayer(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TargetForPlayer(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x502:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGameManagerCmd]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10287200(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10287200(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x503:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGlobalErrNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_102881b0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_102881b0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x504:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPkgTimerRecord]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10289350(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10289350(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x505:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPkgTransAntiData]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_102897b0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_102897b0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x506:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPing]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10289b70(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10289b70(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x507:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPingReply]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10289ee0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10289ee0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x508:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPkgEncryptData]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1028a250(param_3,param_4,param_5);
        return iVar1;
      }
      break;
    case 0x509:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stPkgChatEncryptData]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1028a250(param_3,param_4,param_5);
        return iVar1;
      }
      break;
    case 0x50a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGameManagerRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10287580(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10287580(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x50b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stEnterLevelRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_LockItemList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_LockItemList(param_3,param_4 + 1,param_5);
      return iVar1;
    default:
      goto LAB_1045784f;
    case 0x520:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stNotifyInfo]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1028a640(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1028a640(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x521:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stDropClientNotifyInfo]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1028aa20(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1028aa20(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x522:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stFeatureUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10285950(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10285950(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x523:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stZipPkg]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1028add0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1028add0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x524:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stSysConndTestReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10287950(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10287950(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x525:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stSysConndTestRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10287de0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10287de0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    iVar1 = FUN_1028a250(param_3,param_4 + 1,param_5);
    return iVar1;
  }
  if (param_1 < 0x802) {
    if (param_1 == 0x801) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqSwapItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031d410(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031d410(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x702:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamInviteRet]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10310fe0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10310fe0(param_3,param_4 + 1,param_5);
      return iVar1;
    default:
      goto LAB_1045784f;
    case 0x705:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamInfoGetReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031a5a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031a5a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x706:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamInfoNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_Team_Wrapper_A(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_Team_Wrapper_A(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x707:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamJoinReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10312e70(param_3,param_4,param_5);
        return iVar1;
      }
      break;
    case 0x709:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamJoinRet]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10313220(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10313220(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamJoinRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10313680(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10313680(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamAddMemberNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamMemberSlot(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamMemberSlot(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamQuitReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10313d40(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10313d40(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70d:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamQuitRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314030(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314030(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70e:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberLeaveNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314320(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314320(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x70f:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamKickReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314610(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314610(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x710:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamKickRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314900(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314900(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x711:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberKickedNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314bf0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314bf0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x712:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamChangeLeaderReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10314ee0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10314ee0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x713:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamChangeLeaderRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103151d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103151d0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x714:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamChangeLeaderNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103154c0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103154c0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x715:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamDelTeamNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103157b0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103157b0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x716:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamUpdateMemberNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10315b60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10315b60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x717:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamUpdateNetIdNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10315f10(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10315f10(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x718:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamSearchTeamByIdReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10316200(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10316200(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x719:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamSearchTeamsReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103169b0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103169b0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamSearchRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamList(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamModifyReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamSetting(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamSetting(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamModifyRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103181f0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103181f0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71d:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamModifyNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamSetting_Wrapper_A(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamSetting_Wrapper_A(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71e:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamCreateReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamSetting_Wrapper_B(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamSetting_Wrapper_B(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x71f:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamCreateRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_Team_Wrapper_B(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_Team_Wrapper_B(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x720:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10319280(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10319280(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x721:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamSearchByNameReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10316600(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10316600(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x724:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberMoveNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_DbidVec3Dir(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_DbidVec3Dir(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x725:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamErr]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031a290(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031a290(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x726:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamNotify]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031d020(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031d020(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x727:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamPushVecNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamIdVec3(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamIdVec3(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x728:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberBuffSync]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamMemberBuffArray(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamMemberBuffArray(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x729:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberPosSync]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_TeamMemberPosList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_TeamMemberPosList(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x72a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamQuickJoinReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103188a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103188a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x72b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberBuffAddDelNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031ca70(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031ca70(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x72c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamMemberAttrsUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_NetIdAttrs(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_NetIdAttrs(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x730:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamRaidUpgrade]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031a890(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031a890(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x731:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamRaidInviteReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031ac60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031ac60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x732:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamRaidApplyReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031b0e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031b0e0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x733:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTeamLinkJoinReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10312e70(param_3,param_4,param_5);
        return iVar1;
      }
    }
    iVar1 = FUN_10312e70(param_3,param_4 + 1,param_5);
    return iVar1;
  }
  if (param_1 < 0x902) {
    if (param_1 == 0x901) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stAddCraft]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10324440(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10324440(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x802:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResSwapItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031d7c0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031d7c0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x803:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqMoveItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031db90(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031db90(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x804:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResMoveItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031dee0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031dee0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x805:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqDestroyItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031e290(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031e290(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x806:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResDestroyItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031e5d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031e5d0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x807:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqUseItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031ea50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031ea50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x808:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResUseItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031ee40(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031ee40(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x809:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqSortItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031f1d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031f1d0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x80a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResSortItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031f510(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031f510(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x80b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqSplitItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031f8d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031f8d0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x80c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResSplitItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1031fca0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1031fca0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x80d:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stUpdateItem]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_RewardGeneralItems(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_RewardGeneralItems(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x80f:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stItemAvatarSync]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_PlayerAvatar(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_PlayerAvatar(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x810:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqExpandGrid]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10320930(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10320930(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x811:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResExpandGrid]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10320ca0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10320ca0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x812:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqRankLevelUp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10321040(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10321040(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x813:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResRankLevelUp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103213e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103213e0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x814:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqEnchaseEquip]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10321ed0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10321ed0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x815:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResEnchaseEquip]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103222a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103222a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x816:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResRankLevelup2Six]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10322720(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10322720(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x817:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqEquipEnforce]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10321770(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10321770(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x818:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResEquipEnforce]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10321b30(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10321b30(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x819:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqEquipFound]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10322ef0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10322ef0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x81a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResEquipFound]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10323270(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10323270(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x81b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResEquipEnforceBoard]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10322b60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10322b60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x81c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stReqEquipFoundOpen]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10323620(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10323620(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x81d:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stResEquipFoundOpen]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10323970(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10323970(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x81f:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stItemBoxOpenSync]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrText_ItemList_bItemCount(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrText_ItemList_bItemCount(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x820:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stRoseFlowerNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1032ee50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1032ee50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x821:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stFireWorkUseNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_1032f240(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_1032f240(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x2802) {
    if (param_1 == 0x2801) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityFetchAward]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_ArgsWrap_103c7a80(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_ArgsWrap_103c7a80(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 < 0x1a02) {
      if (param_1 == 0x1a01) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarLevelInfoNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_StarBranchStats(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_StarBranchStats(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 < 0x1202) {
        if (param_1 == 0x1201) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stActionPointRequest]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102b9450(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102b9450(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0xe02) {
          if (param_1 == 0xe01) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103341e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103341e0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 < 0xb02) {
            if (param_1 == 0xb01) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSkillEffectSync]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10305b50(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10305b50(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 < 0x911) {
              if (param_1 == 0x910) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stMaterialExchange]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = TdrText_MEGridInfo(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = TdrText_MEGridInfo(param_3,param_4 + 1,param_5);
                return iVar1;
              }
              if (param_1 == 0x902) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stAddCraftResult]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = FUN_10324790(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = FUN_10324790(param_3,param_4 + 1,param_5);
                return iVar1;
              }
              if (param_1 == 0x903) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stBeginCraft]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = TdrText_NpcCraftTagItems(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = TdrText_NpcCraftTagItems(param_3,param_4 + 1,param_5);
                return iVar1;
              }
              if (param_1 == 0x904) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stBeginCraftResult]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = FUN_10325000(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = FUN_10325000(param_3,param_4 + 1,param_5);
                return iVar1;
              }
            }
            else {
              if (param_1 == 0x911) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stMaterialExchangeNtf]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = FUN_10325c10(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = FUN_10325c10(param_3,param_4 + 1,param_5);
                return iVar1;
              }
              if (param_1 == 0xa02) {
                iVar1 = TdrText_FieldLabelChar(param_5,"[stShortcutUpdate]",1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if (param_4 < 0) {
                  iVar1 = TdrText_Data_Wrapper(param_3,param_4,param_5);
                  return iVar1;
                }
                iVar1 = TdrText_Data_Wrapper(param_3,param_4 + 1,param_5);
                return iVar1;
              }
            }
          }
          else if (param_1 < 0xc02) {
            if (param_1 == 0xc01) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stBeginLoot]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10303820(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10303820(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            switch(param_1) {
            case 0xb02:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSkillResultSync]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrText_StealResultList(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrText_StealResultList(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb11:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentLevelupReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10306cb0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10306cb0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb12:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentLevelupRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10307000(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10307000(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb13:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentActiveReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10307350(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10307350(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb14:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentActiveRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_103076c0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_103076c0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb15:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentUnActiveReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10307a30(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10307a30(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb16:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTalentUnActiveRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10307da0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10307da0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb17:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSetPVERageReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10308110(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10308110(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb18:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSetPVERageRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10308480(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10308480(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb19:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stVideoViewNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10308e90(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10308e90(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb1a:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSetRageReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10308810(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10308810(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xb1b:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSetRageRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10308b60(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10308b60(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
          else if (param_1 < 0xd01) {
            if (param_1 == 0xd00) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxStateNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_103262b0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_103262b0(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            switch(param_1) {
            case 0xc02:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stBeginLootResult]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10303f40(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10303f40(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc03:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishBeginReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10304300(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10304300(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc04:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishBeginRes]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_103047a0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_103047a0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc05:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishFinishReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10304c10(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10304c10(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc06:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishFinishRes]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10304f90(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10304f90(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc07:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSyncLootInfoReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10303b10(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10303b10(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc08:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishFinish2Req]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10305300(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10305300(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xc09:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stLootFishFinish2Res]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10305680(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10305680(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
          else {
            switch(param_1) {
            case 0xd01:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxGetItemReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10326620(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10326620(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd02:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxGetItemRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10326970(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10326970(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd03:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxInitItemNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10327da0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10327da0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd04:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyCatUnlockReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10326ca0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10326ca0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd05:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyCatUnlockNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10326f90(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10326f90(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd06:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxGetAllReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10327280(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10327280(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd07:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyBoxGetOnePReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10327570(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10327570(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0xd11:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stContributeBoxStateNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10328190(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10328190(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
        }
        else if (param_1 < 0xf02) {
          if (param_1 == 0xf01) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopBuyItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10364c30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10364c30(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          switch(param_1) {
          case 0xe02:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptTask2]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103344d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103344d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe03:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGiveupTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103347c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103347c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe04:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSubmitTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10334b10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10334b10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe05:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSubmitTask2]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10334e80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10334e80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe06:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STraceTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103351f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103351f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe07:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SShareTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103354e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103354e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe09:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSyncDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103357d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103357d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe10:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRefreshDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10335ac0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10335ac0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe11:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRefreshSchedule]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10335db0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10335db0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe12:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRefreshxDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103360a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103360a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe51:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAcceptTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103363f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103363f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe52:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGiveupTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103366e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103366e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe53:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSubmitTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10336a30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10336a30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe54:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CShareTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10336e30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10336e30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe55:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTaskErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103371f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103371f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe56:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTaskExec]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10337600(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10337600(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe57:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTaskExec2]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10337a10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10337a10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe58:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTaskSetState]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10337d80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10337d80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe59:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSyncDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10338180(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10338180(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe60:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRefreshDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10338540(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10338540(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe61:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CResetDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10338830(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10338830(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe62:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRefreshSchedule]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10338b80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10338b80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe63:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CResetSchedule]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10338e70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10338e70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe64:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRefreshxDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stDaily(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stDaily(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe65:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CResetxDaily]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103399e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103399e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe66:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CResetTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10339d70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10339d70(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else if (param_1 < 0x1002) {
          if (param_1 == 0x1001) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureProduceReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10368920(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10368920(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          switch(param_1) {
          case 0xf02:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopBuyItemRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10364fe0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10364fe0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf03:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopSellItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10365350(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10365350(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf04:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopSellItemRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10365720(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10365720(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf07:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopBuyBackItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10365ae0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10365ae0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf08:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopBuyBackItemRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10365e50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10365e50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf09:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopAddBuyItemLimitNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10368200(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10368200(param_3,param_4 + 1,param_5);
            return iVar1;
          case 4000:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcShopDelBuyItemLimitNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103685b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103685b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa1:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNPCShopEventNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10367e80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10367e80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa2:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CShopErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103662b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103662b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa3:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRefreshShop]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stShop(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stShop(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa4:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRefreshShops]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103671a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103671a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa5:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CManualResetShop]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10367490(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10367490(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa6:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SManualResetShop]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10367780(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10367780(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xfa7:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CShopCommodityUpdate]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10367af0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10367af0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else if (param_1 < 0x1102) {
          if (param_1 == 0x1101) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeErrorRet]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036a6d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036a6d0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          switch(param_1) {
          case 0x1002:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureProduceRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10368cb0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10368cb0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1003:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureLvUpSkillReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10368fc0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10368fc0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1004:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureLvUpSkillRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103692b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103692b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1005:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureLearnIngredientReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103695a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103695a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1006:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureLearnIngredientRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10369910(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10369910(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1007:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureUpdateSkillNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stSkill(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stSkill(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1008:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stManufactureUpdateIngredientNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036a360(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036a360(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else {
          switch(param_1) {
          case 0x1102:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeBeginReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036aa50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036aa50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1103:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeBeginAsk]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036adb0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036adb0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1104:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeBeginRet]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036b160(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036b160(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1105:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeBeginNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036b4d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036b4d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1106:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeAddItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036b800(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036b800(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1107:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeAddItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036bb70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036bb70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1108:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeAddNormalNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036bf30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036bf30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x110a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeDelItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036c2b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036c2b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x110b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeDelItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036c5d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036c5d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x110c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeSetGoldReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036c900(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036c900(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x110d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeSetGoldNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036cc50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036cc50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1110:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeChgStateReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036cf70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036cf70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1111:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeChgStateNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036d2c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036d2c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1112:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeCancelReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036d5e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036d5e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1113:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeCancelNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036d8d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036d8d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1114:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeSuccessNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036dbf0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036dbf0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1115:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeMoveItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036df60(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036df60(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1116:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTradeMoveItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036e2d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036e2d0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x1602) {
        if (param_1 == 0x1601) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10387fa0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10387fa0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0x1502) {
          if (param_1 == 0x1501) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSaleReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036e6d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036e6d0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 < 0x1402) {
            if (param_1 == 0x1401) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerExtRequest]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDebugFormat_ExtRequest(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDebugFormat_ExtRequest(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x1202) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stActionPointResult]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDebugFormat_ActionPointResponse(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDebugFormat_ActionPointResponse(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x1301) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stInteractRequest]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDebugFormat_InteractRequest(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDebugFormat_InteractRequest(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x1302) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stInteractResult]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDebugFormat_InteractResult(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDebugFormat_InteractResult(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
          else {
            if (param_1 == 0x1402) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerExtResult]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_102bf990(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_102bf990(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x1403) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stPlayerExtNotify]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDebugFormat_ExtNotify(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDebugFormat_ExtNotify(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x1502:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSaleRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036eae0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036eae0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1503:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionCancelReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036ee20(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036ee20(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1504:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionCancelRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036f1c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036f1c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1505:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionBiddingReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036f500(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036f500(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1506:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionBiddingRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036f880(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036f880(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1507:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSearchReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1036fe40(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1036fe40(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1508:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSortReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10370330(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10370330(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1509:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSearchRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10370fb0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10370fb0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x150a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionSearchIdxReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10371400(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10371400(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1511:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionMySaleReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10371710(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10371710(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1512:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionMySaleRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1513:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionMyBiddingReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10371f40(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10371f40(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1514:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stAuctionMyBiddingRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords_b
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords_b
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x1703) {
        if (param_1 == 0x1702) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetAppearNtfList]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_AppearArray_max4(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_AppearArray_max4(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x1602:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_FrienderRoleInfo(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_FrienderRoleInfo(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1603:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10388da0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10388da0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1604:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10389090(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10389090(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1605:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddGroupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10389440(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10389440(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1606:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddGroupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10389830(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10389830(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1607:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelGroupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10389b90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10389b90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1608:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelGroupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10389eb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10389eb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1609:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendRenameGroupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038a2d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038a2d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendRenameGroupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038a730(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038a730(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendMoveToGroupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038aae0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038aae0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendMoveToGroupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038ae50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038ae50(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160d:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddBlacklistReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038b200(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038b200(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160e:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAddBlacklistRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038b640(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038b640(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x160f:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelBlacklistReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038b9b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038b9b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1610:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelBlacklistRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038bca0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038bca0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1612:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelPasserbyReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038bf90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038bf90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1613:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendDelPasserbyRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038c280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038c280(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1615:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendListOnlineNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_FriendOnlineList_max700(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_FriendOnlineList_max700(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1616:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendOnlineNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_FriendOnlineWrap(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_FriendOnlineWrap(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1617:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendOfflineNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038db60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038db60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1618:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendFriendlyUpdateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038dec0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038dec0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1619:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendQueryReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038e8d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038e8d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendQueryRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_FriendersArray_max700_b(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_FriendersArray_max700_b(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendPasserbyNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038f6f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038f6f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendBeAddNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038fba0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038fba0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161d:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendSetMoodReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038ff90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038ff90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161e:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendSetMoodRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10390280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10390280(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x161f:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendFarmPointUpdateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038e220(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038e220(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1620:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendAttrUpdateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038e590(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038e590(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1621:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendsOnlineReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038c8f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038c8f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1622:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendListGetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1038cbe0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1038cbe0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1623:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFriendListGetRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_FriendersArray_max700(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_FriendersArray_max700(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1624:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFriendErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103906a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103906a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1625:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFriendNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10390c60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10390c60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1626:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptFriendApply]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10391140(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10391140(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1627:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRejectFriendApply]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103915d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103915d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1628:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFriendSvrUpdate]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10391980(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10391980(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x1902) {
        if (param_1 == 0x1901) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMsgBoxNewNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a88d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a88d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x1703:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetInitList]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10393970(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10393970(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1704:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetAddSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10393dc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10393dc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1705:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetAttrSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103967b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103967b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1706:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetFireReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103941c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103941c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1707:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetFireRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10394530(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10394530(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1708:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetNameReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10394950(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10394950(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1709:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetNameRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10394d90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10394d90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1710:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetDescReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103951d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103951d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1711:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetDescRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10395610(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10395610(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1712:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetStateReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103959c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103959c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1713:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetStateRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10395d10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10395d10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1714:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillLearnSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10396b40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10396b40(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1715:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillForgetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10396ef0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10396ef0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1716:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillForgetRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10397240(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10397240(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1717:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillEquipOnReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103975b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103975b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1718:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillEquipOnRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10397950(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10397950(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1719:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillEquipOffReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10397d20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10397d20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1720:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillEquipOffRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10398070(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10398070(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1721:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetEquipChangeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10398410(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10398410(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1722:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetEquipChangeRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103987d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103987d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1723:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSupportSkillLevelupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10398b80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10398b80(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1724:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSupportSkillLevelupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10398eb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10398eb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1725:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetAddBuffSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10399920(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10399920(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1726:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetDelBuffSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10399cb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10399cb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1727:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetAvatarNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039a360(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039a360(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1728:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetGiftSkillLevelupReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10399240(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10399240(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1729:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetGiftSkillLevelupRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10399570(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10399570(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x172a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetOwnedMaxNumSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10399fc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10399fc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x172b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SPetRng]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039a700(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039a700(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x172c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CPetRng]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039aa30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039aa30(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1730:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetTalkNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039d9b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039d9b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1731:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SPetUnlockSkillSlot]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039adb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039adb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1732:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CPetUnlockSkillSlot]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039b140(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039b140(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1733:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSupportReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103960c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103960c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1734:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSupportRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10396410(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10396410(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1735:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillDelReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039b510(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039b510(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1736:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillDelRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039b860(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039b860(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1737:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039c3c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039c3c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1738:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillNewNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039c860(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039c860(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1739:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillBuyReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039cbd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039cbd0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1740:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillBuyRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039cf40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039cf40(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1741:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillClearReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039bbf0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039bbf0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1742:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetWaitSkillClearRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039bf60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039bf60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1743:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPetSkillEffectSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039dca0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039dca0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1800:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFlyDiveToTarget1Sync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030d280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030d280(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else {
        if (param_1 == 0x1902) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMsgBoxSelectReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a8d00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a8d00(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x1903) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMsgBoxSafeModeNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a90d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a90d0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x1904) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMsgBoxSafeTimeNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a9390(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a9390(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
    }
    else if (param_1 < 0x1b04) {
      if (param_1 == 0x1b03) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stMailListGetReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103b22d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103b22d0(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x1a02:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarAddCardNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103aa8c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103aa8c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a03:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarUpdateCardNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_CardData_max20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_CardData_max20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a04:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarUpdateStatNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDbgFmt_StatData_max100(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDbgFmt_StatData_max100(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a05:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarInitNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103abd30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103abd30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a06:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarNotify]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ac260(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ac260(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a07:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarResetNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ac600(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ac600(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a08:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stHunterStarGetLevel]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103a97a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103a97a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a09:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SHunterStarTrackCard]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ac950(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ac950(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a10:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CHunterStarTrackCard]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103acca0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103acca0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a11:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CHunterStarRefreshStat]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103acf90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103acf90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x1a12:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAchieveFetchReward]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ad280(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ad280(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else {
      if (param_1 < 0x1c02) {
        if (param_1 == 0x1c01) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFetchPrizeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103baf70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103baf70(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x1b04:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailListGetRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_ResultWrap_dwUin(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_ResultWrap_dwUin(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b05:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailDetailGetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b4db0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b4db0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b06:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailDetailGetRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MailDetailResult_dwUin(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MailDetailResult_dwUin(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b07:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailAccessoriesGetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b75e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b75e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b08:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailAccessoriesGetRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b79c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b79c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b09:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailSendReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MailArgsWrap(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        case 0x1b0a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailSendRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MailRoleToResult_szErr(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MailRoleToResult_szErr(param_3,param_4 + 1,param_5);
          return iVar1;
        default:
          goto LAB_1045784f;
        case 0x1b11:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailForceDelReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b5f80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b5f80(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b12:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailForceDelRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_ResultWrap_ullMailId(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_ResultWrap_ullMailId(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b14:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b7e00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b7e00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b16:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailLoginRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b8eb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b8eb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b23:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailBlackSetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_SenderName_Bytes32(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_SenderName_Bytes32(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b24:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailBlackSetRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b8b40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b8b40(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b25:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailReadedReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b8170(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b8170(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b26:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailReadedRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b84d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b84d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b27:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailReturnReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b91c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b91c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b28:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailReturnRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b9520(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b9520(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b29:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailGroupDelReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103ba400(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103ba400(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailGroupDelRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_ResultsArray_max300(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_ResultsArray_max300(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailunReadGetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b9bd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b9bd0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailunReadGetRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b9fd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b9fd0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2d:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CMailErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103adab0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103adab0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2e:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMailGroupAccessoriesGetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103b71d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103b71d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b2f:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CMailNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103ae070(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103ae070(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1b30:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMailSendReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MailArgsWrap(param_3,param_4,param_5);
            return iVar1;
          }
        }
        iVar1 = TdrDbgFmt_MailArgsWrap(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 < 0x2002) {
        if (param_1 == 0x2001) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpInstanceReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MatchInfos_max10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MatchInfos_max10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x1c02:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFetchPrizeRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bb260(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bb260(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c03:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stObtainRewardListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bb580(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bb580(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c04:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stObtainRewardListRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_PrizeInfo_fixed10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_PrizeInfo_fixed10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c05:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stObtainTargetListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bc090(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bc090(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c06:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stObtainTargetListRes]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_TargetInfo_fixed100(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_TargetInfo_fixed100(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c07:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stScheduleError]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bcb90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bcb90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x1c08:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stScheduleRefresh]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bcea0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bcea0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x2101) {
        if (param_1 == 0x2100) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SCheckGuild]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10342920(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10342920(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x2002:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpInstanceRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039fa90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039fa90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2003:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stQuitLineUpInstanceReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039fda0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039fda0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2004:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stQuitLineUpInstanceRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a01e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a01e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2005:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpAgreeInstanceReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a0530(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a0530(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2006:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpAgreeInstanceRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a08a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a08a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2007:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpStateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a0c10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a0c10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2008:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a0f00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a0f00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2009:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a1270(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a1270(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x200a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchGiveUpReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a1580(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a1580(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x200b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchGiveUpRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a18f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a18f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x200c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpAgreeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a1c60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a1c60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x200d:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpAgreeRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a1f90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a1f90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x200e:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpReadyNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a2320(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a2320(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2010:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpListNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_SignUpTeams_max20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_SignUpTeams_max20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2011:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpAdd]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MatchSignUpWrap_103a35c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MatchSignUpWrap_103a35c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2012:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchSignUpDel]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a32e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a32e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2014:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchQualifierResultListNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_SignUpTeams_max128(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_SignUpTeams_max128(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2015:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchQualifierResultAdd]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MatchSignUpWrap_103a44e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MatchSignUpWrap_103a44e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2016:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchQualifierResultDel]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a3e90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a3e90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2017:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchQualifierFirstNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a6280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a6280(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2018:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchStateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a41c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a41c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x202a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchPairListNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a51a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a51a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x202b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchPairAdd]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a58f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a58f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x202c:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchPairAcceptReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a5c00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a5c00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x202d:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchPairAcceptRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a5f70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a5f70(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x202e:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildMatchPairEnterErrNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a6570(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a6570(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2030:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpRetry]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_MatchInfoWrap(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_MatchInfoWrap(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2031:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpHunterOfficer]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039ea10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039ea10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2032:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRoomInitInfo]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039ed80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039ed80(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2033:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLineUpBigRand]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1039f0c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1039f0c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x2302) {
        if (param_1 == 0x2301) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineMakeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103be340(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103be340(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 - 0x2101U < 0x105) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((&LAB_10456a93)[param_1]) {
          case 0:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SCreateGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10342dd0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10342dd0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 1:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SDismissGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103430e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103430e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 2:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuilds]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103433d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103433d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 3:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SFindGuilds]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10343780(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10343780(param_3,param_4 + 1,param_5);
            return iVar1;
          case 4:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SApplyGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10343b70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10343b70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 5:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildApplys]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10343e60(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10343e60(param_3,param_4 + 1,param_5);
            return iVar1;
          case 6:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptGuildApply]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10344150(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10344150(param_3,param_4 + 1,param_5);
            return iVar1;
          case 7:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRejectGuildApply]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103444a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103444a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 8:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SInviteGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10344850(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10344850(param_3,param_4 + 1,param_5);
            return iVar1;
          case 9:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildInvitations]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10344b10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10344b10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 10:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptGuildInvitation]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10344e00(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10344e00(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xb:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRejectGuildInvitation]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10345160(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10345160(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xc:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SQuitGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10345450(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10345450(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xd:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SKickGuilder]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10345740(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10345740(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xe:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildAlterLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10345a30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10345a30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0xf:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuilderNoteSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10345e50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10345e50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x10:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildNoteSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10346200(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10346200(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x11:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildIconSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103464c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103464c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x12:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildLevelUp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103467b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103467b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x13:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildTakeWage]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10346aa0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10346aa0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x14:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildHandle]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10346d90(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10346d90(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x15:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347080(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347080(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x16:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildTitles]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347370(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347370(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x17:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildGetLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347660(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347660(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x18:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildGetSelf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347950(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347950(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x19:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuilderDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347c40(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347c40(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildAll]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10347f30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10347f30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuilder]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10348220(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10348220(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuildersCount]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10348510(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10348510(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetGuilders]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10348800(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10348800(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildTitleSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stTitles(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stTitles(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x1f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildResetTitle]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10348e10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10348e10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x20:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildRightSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stRights(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stRights(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x21:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildResetRight]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10349420(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10349420(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x22:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildAscendTitle]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10349710(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10349710(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x23:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildDescendTitle]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10349a00(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10349a00(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x24:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildEnterCamp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10349cf0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10349cf0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x25:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildLeaveCamp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10349fe0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10349fe0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x26:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildGetLearnedSkills]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034a2d0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034a2d0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x27:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildGetCandidateSkills]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034a5c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034a5c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x28:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildLearnSkill]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034a910(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034a910(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x29:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildSortItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034b540(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034b540(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildModifyColumnName]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034ba30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034ba30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildOperateItemReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_ItemMoveOp_bOpType_stSrc_stDst(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_ItemMoveOp_bOpType_stSrc_stDst(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildDepotRightSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stRights_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stRights_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildResetDepotRight]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034c080(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034c080(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildImpeachLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034c370(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034c370(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x2f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildSelectQuestPrize]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034c660(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034c660(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x30:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildModifyName]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034ca10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034ca10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x31:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGuildQueryGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034ccd0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034ccd0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x32:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034d0f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034d0f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x33:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildNotify]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034d6b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034d6b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x34:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuilds]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034dab0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034dab0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x35:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFindGuilds]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildList_iCount_astGuilds_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildList_iCount_astGuilds_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x36:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildApplys]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stApplys(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stApplys(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x37:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildInvitations]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stInvitations(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stInvitations(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x38:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuild(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuild(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x39:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildTitles]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stTitles_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stTitles_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildGetLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuilder_via1033e300(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuilder_via1033e300(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildGetSelf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuilder_via1033e300_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuilder_via1033e300_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuilderDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuilder_via102a43c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuilder_via102a43c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClearGuilderDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuilder_via102a3f50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuilder_via102a3f50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuilder]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuilder_via1033e300_c(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuilder_via1033e300_c(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildersCount]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1034ff90(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1034ff90(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x40:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuilders]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103502e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103502e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x41:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CResetGuildTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10350cd0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10350cd0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x42:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRefreshGuildTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10351000(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10351000(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x43:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAcceptGuildTasks]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103513e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103513e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x44:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSubmitGuildTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10351750(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10351750(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x45:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CExecGuildTask]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10351ac0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10351ac0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x46:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildTasks]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10351e60(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10351e60(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x47:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildLearnedSkills]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stSkills(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stSkills(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x48:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildCandidateSkills]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stSkills_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stSkills_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x49:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildAddItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_c(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_c(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildUpdateItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_d(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_d(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildDelItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10353580(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10353580(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildMoveItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10353930(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10353930(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildSwapItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10353d30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10353d30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildSortItemNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10354210(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10354210(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x4f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildGetDepot]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10352890(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10352890(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x50:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildRandCommodities]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stCommodities(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stCommodities(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x51:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetGuildQuest]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stQuest(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stQuest(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x52:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGuildQueryGuild]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stGuild_via1033ac40(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stGuild_via1033ac40(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x53:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildCampOperationReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10354960(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10354960(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x54:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildCampOperationRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10354d70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10354d70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x55:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildBanGuilderReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10355170(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10355170(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x56:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildSelectComerceBoatReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103554c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103554c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x57:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildSelectComerceBoatRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103557b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103557b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x58:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildGetGuildStatusReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10355b10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10355b10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x59:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildGetGuildStatusRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildWarCommerce_dwErrCode_wCount_astList_ullGuildId_dwCommerceId
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildWarCommerce_dwErrCode_wCount_astList_ullGuildId_dwCommerceId
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildStartBoatReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_CommerceBoatMaterials_dwBoatId_bMaterialNum_astMaterialList
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_CommerceBoatMaterials_dwBoatId_bMaterialNum_astMaterialList
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildStartBoatRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103578a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103578a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildGetCommerceBoatStatusReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10357c70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10357c70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildGetCommerceBoatStatusRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildWarBoatStatus_dwErrCode_stInfo_chMode(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildWarBoatStatus_dwErrCode_stInfo_chMode(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildCommerceBoatStatusNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildWarBoatStatusList_wCount_astList(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildWarBoatStatusList_wCount_astList(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarBuyGrabTimesReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103587b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103587b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x60:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetAllCommerceReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10358aa0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10358aa0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x61:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetAllCommerceRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103592c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103592c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x62:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetGuildBoatsReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10359660(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10359660(param_3,param_4 + 1,param_5);
            return iVar1;
          case 99:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetGuildBoatsRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035a070(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035a070(param_3,param_4 + 1,param_5);
            return iVar1;
          case 100:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGrabBoatReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035a4b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035a4b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x65:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGrabBoatRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035a8c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035a8c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x66:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGuildCommerceNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035ac90(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035ac90(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x67:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarSimpleGuildInfoReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035aff0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035aff0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x68:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarSimpleGuildInfoRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildSimpleInfoList_wStart_wInnerStart_wCount_astInfos
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildSimpleInfoList_wStart_wInnerStart_wCount_astInfos
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x69:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetCommerceBuffReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035bbc0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035bbc0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6a:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarGetCommerceBuffRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_CommerceBuff_iBuffCount_astCommerceBuffInfo_dwHistory
                                (param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_CommerceBuff_iBuffCount_astCommerceBuffInfo_dwHistory
                              (param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6b:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildFuncRecordReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035c330(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035c330(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6c:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildFuncRecordRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildFuncRecordList_iCount_astInfos(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildFuncRecordList_iCount_astInfos(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6d:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildBuyRecordReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035d930(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035d930(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6e:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildBuyRecordRes]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_GuildFuncRecordList_iCount_astInfos_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_GuildFuncRecordList_iCount_astInfos_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x6f:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarInformationNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035e290(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035e290(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x70:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarSetViewGuildReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035c6a0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035c6a0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x71:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarSetViewGuildRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035ca60(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035ca60(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x72:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGuildWarAllInformationNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_InformationList_iCount_astInformations(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_InformationList_iCount_astInformations(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x73:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcAtdValueInfoNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103bd1f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103bd1f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x74:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcAtdErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103bd560(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103bd560(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x75:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcAtdGiveGiftReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103bd8f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103bd8f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x76:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcAtdGiveGiftRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103bdc80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103bdc80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x77:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stNpcAtdTriggerNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103bdff0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103bdff0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x2402) {
        if (param_1 == 0x2401) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STalkExec]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1035ea40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1035ea40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x2302:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineMakeRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103be630(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103be630(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2303:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineRemainsNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103be970(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103be970(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2304:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineUnlockNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bf3a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bf3a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2305:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineUnlockStateChangeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103becc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103becc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2306:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatCuisineUnlockStateChangeRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103bf030(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103bf030(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x2602) {
        if (param_1 == 0x2601) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagFetchReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e6b60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e6b60(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0x2453) {
          if (param_1 == 0x2452) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTalkExec]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035f4c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035f4c0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x2402) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STalkEnd]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035edd0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035edd0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x2451) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTalkErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_1035f140(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_1035f140(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else {
          if (param_1 == 0x2501) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stSocialActionReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c4fb0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c4fb0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x2502) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stSocialActionNtf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c5300(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c5300(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x2702) {
        if (param_1 == 0x2701) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnableCollisionSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030eca0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030eca0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x2602:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagFetchRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e6e50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e6e50(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2603:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagActivateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e71d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e71d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2604:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagGroupStateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_GroupInfoList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_GroupInfoList(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2605:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e84c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e84c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2606:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagStateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_GiftList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_GiftList(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2607:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagAttrNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e8eb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e8eb0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2608:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagDailyRefreshNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e8840(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e8840(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2609:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftBagGroupStateReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e8b60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e8b60(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else {
        switch(param_1) {
        case 0x2702:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stInvulnerabilitySync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030f690(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030f690(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2703:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnableSkeletonPhysPartSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030fa80(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030fa80(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2704:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnableDamageCollisionSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030eff0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030eff0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x2705:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnableCombatNPCMovColSync]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1030f340(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1030f340(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x2902) {
    if (param_1 == 0x2901) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTowerSupplyOpenNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103da4d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103da4d0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x2802:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityWildHuntApply]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c7de0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c7de0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2803:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityGetSecretQuest]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cb690(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cb690(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2804:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityResetWildHuntTasks]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cb980(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cb980(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2805:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityMonolopyDice]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c8420(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c8420(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2806:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityMonolopyFixedDice]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c8710(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c8710(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2807:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityMonolopyPayForBlock]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c8a60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c8a60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2808:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityWildFetchTaskCount]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c8100(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c8100(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2811:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stActivityStateUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_ActivityList_max100(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_ActivityList_max100(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2812:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stLotteryWinnersNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_ActivityWinners_max10(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_ActivityWinners_max10(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2813:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityFetchAward]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_ArgsCtxWrap(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_ArgsCtxWrap(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2814:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityAwardsNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_TypedAwards_max20(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_TypedAwards_max20(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2815:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityErr]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c96f0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c96f0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2816:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityAwardRefresh]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c9a20(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c9a20(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2817:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityAddStOnlineTime]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103c9e10(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103c9e10(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2818:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityWildHuntApply]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103ca230(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103ca230(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2819:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SActivityGetWildHuntDetail]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103ca560(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103ca560(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2820:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityGetWildHuntDetail]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103ca8e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103ca8e0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2821:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityFetchProcClear]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cac50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cac50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2822:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityAddSecretQuest]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cb010(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cb010(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2823:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityRemoveSecretQuest]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cb3a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cb3a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2824:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityGetWildHuntTasks]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cbe60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cbe60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x2825:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CActivityClearWildHunt]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cc360(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cc360(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x4402) {
    if (param_1 == 0x4401) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeSaleReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103727d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103727d0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (0x3201 < param_1) {
      if (param_1 < 0x3302) {
        if (param_1 == 0x3301) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankSearchReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037eb40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037eb40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x3202:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxPrizeNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fa6d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fa6d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3203:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxPrizeReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fa2b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fa2b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3204:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxOpenNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fb3b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fb3b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3205:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxDetailReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fb860(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fb860(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3206:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxDetailRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fbc00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fbc00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3207:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxRefreshChessReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fbf90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fbf90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3208:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CItemBoxErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fc3b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fc3b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3209:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxOpenReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fab20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fab20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3210:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSelectItemBoxOpenBoxNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_Box_Items11_Equip11(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_Box_Items11_Equip11(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3211:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFetchSelectItemBoxOpenBoxNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_Box_Items11_Equip11_BagFull(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_Box_Items11_Equip11_BagFull(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3212:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelItemBoxOpenBoxNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_Level_Items40_BagFull(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_Level_Items40_BagFull(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3213:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxBlackFaceGiftNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fc820(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fc820(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3214:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxShopReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fcbe0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fcbe0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3215:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxShopRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fcfe0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fcfe0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3216:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxBuyReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_BoxID_ItemList11(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_BoxID_ItemList11(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3217:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxBuyRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fd840(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fd840(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3218:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxFreshNumOpenReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fdb30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fdb30(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3219:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxFreshNumOpenRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fdfc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fdfc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3220:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxFreshNumReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fe460(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fe460(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3221:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxFreshNumRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103fe7d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103fe7d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3222:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxNumOKReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103feb60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103feb60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3223:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stDragonBoxNumOKRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103feef0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103feef0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x3402) {
        if (param_1 == 0x3401) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stAvatarSetReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103ff280(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103ff280(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x3302:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankSearchRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037ef70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037ef70(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3303:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037cd90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037cd90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3304:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankListRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037d130(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037d130(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3305:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankFetchRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037f390(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037f390(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3306:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankFetchRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037f790(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037f790(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3307:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stRankErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037fb20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037fb20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3308:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRankListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037d550(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037d550(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3309:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRankListRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037d910(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037d910(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3310:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRankRapidHuntListRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_HissList_iCount_astHiss(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_HissList_iCount_astHiss(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3311:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SXRankGetRank]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037ff10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037ff10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3312:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SXRankBatchGetUserData]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10380fe0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10380fe0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3331:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CXRankGetRank]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10380a00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10380a00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3332:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CXRankBatchGetUserData]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_UserDataListResult_iResult_iUserCount_astUserDatas
                              (param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_UserDataListResult_iResult_iUserCount_astUserDatas
                            (param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3333:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRankGetUserData]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_UserDataList_iUserCount_astUserDatas(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_UserDataList_iUserCount_astUserDatas(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x3702) {
        if (param_1 == 0x3701) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartBuyGoodsReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10376d10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10376d10(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0x3602) {
          if (param_1 == 0x3601) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SCheckClan]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103db180(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103db180(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 < 0x3502) {
            if (param_1 == 0x3501) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleUnlockReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_103ffdd0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_103ffdd0(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x3402) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stAvatarSetNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_103ff5d0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_103ff5d0(param_3,param_4 + 1,param_5);
              return iVar1;
            }
            if (param_1 == 0x3403) {
              iVar1 = TdrText_FieldLabelChar(param_5,"[stAvatarItemUpdate]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDump_AvatarUpdate(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDump_AvatarUpdate(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
          else {
            switch(param_1) {
            case 0x3502:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleUnlockRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10400120(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10400120(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3503:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleEquipTitleReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10400700(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10400700(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3504:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleEquipTitleRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10400a50(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10400a50(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3505:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleEquipBuffReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10400d40(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10400d40(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3506:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleEquipBuffRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10401090(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10401090(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3507:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleFetchDataReq]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_104016d0(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_104016d0(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3508:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleFetchDataRsp]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = TdrDump_TitleDataList(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = TdrDump_TitleDataList(param_3,param_4 + 1,param_5);
              return iVar1;
            case 0x3509:
              iVar1 = TdrText_FieldLabelChar(param_5,"[stTitleLockNtf]",1);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (param_4 < 0) {
                iVar1 = FUN_10400410(param_3,param_4,param_5);
                return iVar1;
              }
              iVar1 = FUN_10400410(param_3,param_4 + 1,param_5);
              return iVar1;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x3602:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SCreateClan]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103db500(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103db500(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3603:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SDismissClan]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103db7c0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103db7c0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3604:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SInviteClan]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dbb70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dbb70(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3605:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SQuitClan]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dbe30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dbe30(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3606:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SKickClaner]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dc120(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dc120(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3607:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SClanAlterLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dc410(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dc410(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3608:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SClanerNoteSetting]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dc820(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dc820(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3609:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetClaners]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dce00(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dce00(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3610:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetClanDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dcb10(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dcb10(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3611:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAcceptClanInvitation]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dd0f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dd0f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3612:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRejectClanInvitation]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103dd450(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103dd450(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3613:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SClanMemberReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103df760(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103df760(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3614:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SClanModifyName]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e1270(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e1270(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3621:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClanErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e15b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e15b0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3622:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClanNotify]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e1b50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e1b50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3623:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetClanDetail]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Clan(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Clan(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3624:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetClaners]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_ClanersWithCount(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_ClanersWithCount(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3625:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClanGetLeader]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Claner_b(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Claner_b(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3626:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClanGetSelf]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Claner_a(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Claner_a(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3627:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueReward]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103de850(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103de850(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x3628:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CClanMemberRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_ClanerNameList(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_ClanerNameList(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x3802) {
        if (param_1 == 0x3801) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STournamentsGetDetail]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e3dc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e3dc0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x3702:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartBuyGoodsRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10377250(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10377250(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3703:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartGiveGoodsReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10377980(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10377980(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3704:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartGiveGoodsRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10377c70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10377c70(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3705:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartRequestGoodsReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10377f60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10377f60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3706:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartRequestGoodsRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10378250(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10378250(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3707:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartGoodsListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10378540(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10378540(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3708:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartGoodsListRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_VersionedInfoList_dwVersion_iNum_astInfo(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_VersionedInfoList_dwVersion_iNum_astInfo(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3709:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartGoodsInfoUpdate]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10379f40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10379f40(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x370a:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartBalanceReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10378830(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10378830(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3710:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stWxPayUrl]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10378dd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10378dd0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3711:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPayCancel]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10379230(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10379230(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3712:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiftSended]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10377650(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10377650(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3713:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartHotListReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037acd0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037acd0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3714:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stMartHotListRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1037b040(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1037b040(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x3902) {
        if (param_1 == 0x3901) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpoorFetchPrize]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e5f00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e5f00(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x3802:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STournamentsGetRanks]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e4130(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e4130(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3803:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2STournamentsSearchPlayer]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e4540(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e4540(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3804:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SLeagueLevelReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103dd740(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103dd740(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3805:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SLeagueRankList]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103deb40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103deb40(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3807:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SLeagueStepReward]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e0ec0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e0ec0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3811:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTournamentsGetDetail]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e4e60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e4e60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3812:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTournamentsGetRanks]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e5340(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e5340(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3813:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTournamentsSearchPlayer]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e5830(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e5830(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3814:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CTournamentsErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e5bf0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e5bf0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3815:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueLevelRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_LeagueOpenList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_LeagueOpenList(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3816:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueResult]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103de410(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103de410(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3817:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueRankRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_LeagueInfoList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_LeagueInfoList(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3818:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeaguePlayerInfo]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e0350(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e0350(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3819:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueSeasonReward]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e07f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e07f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x3820:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLeagueStepReward]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e0bb0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e0bb0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x4112) {
        if (param_1 == 0x4111) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSculptureErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103836a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103836a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0x4002) {
          if (param_1 == 0x4001) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stSensitiveVerify]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c5960(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c5960(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x3911) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpoorErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e6270(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e6270(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x3912) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpoorFetchPrize]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e6580(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e6580(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x3913) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpoorAddPoints]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103e6870(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103e6870(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else if (param_1 < 0x4005) {
          if (param_1 == 0x4004) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stSensitiveVerifyResult]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c5de0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c5de0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x4002) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGetManageUrlReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c61e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c61e0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x4003) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stGetManageUrlRsp]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103c65e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103c65e0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else {
          if (param_1 == 0x4101) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetSculpture]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10382560(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10382560(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x4102) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SGetSculptureLibs]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10382850(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10382850(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x4202) {
        if (param_1 == 0x4201) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SHubSpecRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10386340(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10386340(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x4112:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetSculpture]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_SculptureData_iRound_astCurrent_stBest_astHistory
                              (param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_SculptureData_iRound_astCurrent_stBest_astHistory
                            (param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x4113:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSculptureLibSnapshot]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_Wrapper_stLib(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_Wrapper_stLib(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x4114:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CGetSculptureLibs]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_SculptureConfig_iCfgCount_astCfgs_iCount_astLibs
                              (param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_SculptureConfig_iCfgCount_astCfgs_iCount_astLibs
                            (param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x4115:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSculptureAvatarSnapshot]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_AvatarSculptureWrap(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_AvatarSculptureWrap(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x4116:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptAddSculpture]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10382f90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10382f90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x4117:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptDelSculpture]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10383330(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10383330(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x4312) {
        if (param_1 == 0x4311) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRapidHuntFetchAward]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10386d40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10386d40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4202) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CHubSpecRewardLevelInfo]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103866a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103866a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4301) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRapidHuntFetchAward]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10386a20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10386a20(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else {
        if (param_1 == 0x4312) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRapidHuntErr]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103870b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103870b0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4313) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRapidHuntAwards]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_AwardsArray_max5(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_AwardsArray_max5(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4314) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRapidHuntRefresh]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10387ba0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10387ba0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      goto LAB_1045784f;
    }
    if (param_1 == 0x3201) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stItemBoxOpenBoxNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_Box_Items10_Equip10_BagFull(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_Box_Items10_Equip10_BagFull(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (0x3101 < param_1) {
      switch(param_1) {
      case 0x3102:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildRankupRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103e9bb0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103e9bb0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3103:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEnchaseReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103eb040(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103eb040(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3104:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEnchaseRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103eb4a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103eb4a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3105:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEnforceReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103eb8b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103eb8b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3106:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEnforceRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ebcd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ebcd0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3107:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildFoundReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ec8a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ec8a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3108:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildFoundRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ecc60(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ecc60(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3109:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildFoundOpenReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ed020(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ed020(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildFoundOpenRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ed3b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ed3b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildWakeLevelupReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ed750(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ed750(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildWakeLevelupRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103edac0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103edac0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEquipUpgradeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103edf50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103edf50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildEquipUpgradeRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ee3b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ee3b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x310f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildCharmFoundReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ee780(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ee780(param_3,param_4 + 1,param_5);
        return iVar1;
      default:
        goto LAB_1045784f;
      case 0x3120:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildCharmFoundRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103eeb30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103eeb30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3121:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildItemDecomposeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_ItemList30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_ItemList30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3122:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildItemDecomposeRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_BagStoreMailItems(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_BagStoreMailItems(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3123:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildBreakReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ec0c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ec0c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3124:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildBreakRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ec4a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ec4a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3126:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildLimitDataNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_RebuildLimitData(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_RebuildLimitData(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3127:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildResetWakeTimesReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f1500(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f1500(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3128:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildResetWakeTimesRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f1870(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f1870(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3129:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildLevelupReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103e9f40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103e9f40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3130:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildLevelupRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ea2e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ea2e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3131:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildTransferReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ea6e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ea6e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3132:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildTransferRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103eaba0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103eaba0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3134:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildTrackReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f2890(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f2890(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3135:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildRemoveBeamReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f2c20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f2c20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3136:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildRemoveBeamRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f2fe0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f2fe0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3137:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipReColorReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ef260(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ef260(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3138:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipReColorRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103ef600(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103ef600(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3139:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipFakeShowReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103efbd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103efbd0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3140:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipFakeShowRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f0140(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f0140(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3141:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuenchReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f3410(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x3142:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuenchRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f3940(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f3940(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3143:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuenchRollBackReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f4390(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f4390(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3144:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuenchRollBackRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f4720(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f4720(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3145:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipReQuenchReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f3410(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x3146:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipReQuenchRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f3ee0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f3ee0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3147:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipNewLevelUpReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f4b90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f4b90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3148:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipNewLevelUpRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f5000(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f5000(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3149:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRebuildRandWeaoponReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f54a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f54a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3150:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRebuildRandWeaoponRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f5900(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f5900(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3151:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRebuildUnbindReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f5c50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f5c50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3152:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stRebuildUnbindRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f5f40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f5f40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3153:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCharmRebuildReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_ItemList5_WithBind(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_ItemList5_WithBind(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3154:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCharmRebuildRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103f6710(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103f6710(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3155:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuickUpgradeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_CostItemEquipRoute(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_CostItemEquipRoute(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3156:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipQuickUpgradeRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_RetCodeWithReq(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_RetCodeWithReq(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      iVar1 = FUN_103f3410(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 == 0x3101) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stItemRebuildRankupReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103e9840(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103e9840(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (0x3001 < param_1) {
      switch(param_1) {
      case 0x3002:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrUpdateItemNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_b(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList_b(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3003:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrDelItemNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_DelGridList_wReason_bDelGridCnt_astDelGridList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_DelGridList_wReason_bDelGridCnt_astDelGridList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3004:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrMoveItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10329a30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10329a30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3005:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrMoveItemNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10329e00(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10329e00(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3006:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrSwapItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032aec0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032aec0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3007:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrSwapItemNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032b2e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032b2e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3008:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrUnionItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032b720(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032b720(param_3,param_4 + 1,param_5);
        return iVar1;
      default:
        goto LAB_1045784f;
      case 0x300a:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrSplitItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032bb50(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032bb50(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x300b:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrSortItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032cfa0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032cfa0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x300c:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrSortItemNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032d540(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032d540(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x300d:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrUseItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032da90(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032da90(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x300e:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrDestroyItemReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032de70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032de70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x300f:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrDestroyItemRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032e210(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032e210(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3010:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrExpandGridReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032e590(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032e590(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3011:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrExpandGridNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032e900(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032e900(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3012:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stQuickChangeEquipReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_EquipParamList_iEquipCnt_astEquipParamList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_EquipParamList_iEquipCnt_astEquipParamList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3013:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemboxNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1032cac0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1032cac0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3014:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanUnlockReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10330330(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x3015:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanUnlockNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10330330(param_3,param_4,param_5);
          return iVar1;
        }
        break;
      case 0x3016:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanEditReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_EquipPlanWrapper_iReNameFlag_stPlanInfo(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_EquipPlanWrapper_iReNameFlag_stPlanInfo(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3017:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanEditNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10330e30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10330e30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3018:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanChangeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_EquipPlan_iPlanId_szPlanName_astEquipList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_EquipPlan_iPlanId_szPlanName_astEquipList(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3019:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEquipPlanChangeNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103306a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103306a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3020:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanUnLockReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10332470(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10332470(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3021:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanUnLockRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103327c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103327c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3022:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanSaveReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10331170(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10331170(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3023:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanSaveRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10331770(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10331770(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3024:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanStepReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103335f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103335f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3025:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanStepRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10333ad0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10333ad0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3026:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanRenameReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10331d20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10331d20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3027:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanReNameRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10332160(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10332160(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3028:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanActReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10332ab0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10332ab0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3029:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSupplyPlanActRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10332e00(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10332e00(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3030:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrMoveSwapItemsReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_MoveSwapItems_bCnt_astData(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_MoveSwapItems_bCnt_astData(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x3031:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrMoveSwapItemsNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_MoveSwapItems_bCnt_astData_b(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_MoveSwapItems_bCnt_astData_b(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      iVar1 = FUN_10330330(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 == 0x3001) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stItemMgrAddItemNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_ItemList_bItemCount_wReason_astItemList(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 == 0x2902) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTowerSupplyPlayerSelectedNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103dad90(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103dad90(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 == 0x2903) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stTowerSupplyCloseNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103daa40(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103daa40(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 == 0x2904) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stWeaponTrialInfo]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDebugFormat_WeaponRecord(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDebugFormat_WeaponRecord(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x4502) {
    if (param_1 == 0x4501) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPOpenReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_OpenGoodsList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_OpenGoodsList(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x4402:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeSaleRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10372b30(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10372b30(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4403:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeCancelReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10372e90(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10372e90(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4404:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeCancelRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103731f0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103731f0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4405:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeBiddingReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10373560(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10373560(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4406:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeBiddingRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103738e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103738e0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4407:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeSearchReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10373c50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10373c50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4408:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeSearchRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RecordList_iRet_iFin_wRecordCount_astRecords(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RecordList_iRet_iFin_wRecordCount_astRecords(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4409:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMySaleReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10374b60(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10374b60(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x440a:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMySaleRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x440b:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMySaleRecordReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10375330(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10375330(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x440c:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMySaleRecordRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords_b(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords_b(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x440d:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMyBuyRecordReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10375b00(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10375b00(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x440e:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeGetMyBuyRecordRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords_c(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RecordList_iRet_wRecordCount_astRecords_c(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4410:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeRateReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103762d0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103762d0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4411:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stExchangeRateRes]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10376680(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10376680(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x4602) {
    if (param_1 == 0x4601) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SRoomsGetReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10408570(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10408570(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x4502:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPOpenRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_OpenGoodsList_WithResult(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_OpenGoodsList_WithResult(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4503:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPOpenGrowthReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_104039f0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_104039f0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4504:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPOpenGrowthRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10403d40(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10403d40(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4505:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPOpenProfitReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10404090(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10404090(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4506:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPOpenProfitRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_104043e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_104043e0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4507:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPServiceExpireNTF]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10404770(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10404770(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4508:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPServiceRenewReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10404b00(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10404b00(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4509:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPServiceRenewRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10404e70(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10404e70(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4510:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPServiceExpireReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_104051c0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_104051c0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4511:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPServiceExpireRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10405510(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10405510(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4512:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SVIPQuickOpenReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10405880(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10405880(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4513:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CVIPQuickOpenRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10405ca0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10405ca0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4514:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stConsumeActivityOpenReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10406370(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10406370(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4515:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stConsumeActivityOpenRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RewardInfoList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RewardInfoList(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4516:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGetConsumeActivityOpenRewardReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10406b30(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10406b30(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4517:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGetConsumeActivityOpenRewardRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10406e80(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10406e80(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4518:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGetConsumeActivityHongDianReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10407170(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10407170(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4519:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stGetConsumeActivityHongDianRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10407460(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10407460(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x4702) {
    if (param_1 == 0x4701) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CLevelStatEventNTF]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_102be7e0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_102be7e0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x4602:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRoomsGetRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_104089a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_104089a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4603:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpectateReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10408d50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10408d50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4604:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpectateRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_104090a0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_104090a0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4605:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpectateErr]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10409410(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10409410(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x4902) {
    if (param_1 == 0x4901) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SFluteInvokeTune]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10409a70(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10409a70(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    switch(param_1) {
    case 0x4801:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityListReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d75f0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d75f0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4802:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityListRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_ActivityList(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_ActivityList(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4803:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityDetailReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d7d40(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d7d40(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4804:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityDetailRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_SimpleDetailPair(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_SimpleDetailPair(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4805:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityStateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_SimpleWithWorldSvrID(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_SimpleWithWorldSvrID(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4806:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stScriptActivityVarUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d8890(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d8890(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4807:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SScriptActivityDataExecReq]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d92c0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d92c0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4808:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptActivityDataExecRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDump_RequestWithTwoResults(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDump_RequestWithTwoResults(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4809:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptActivityCounterUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d8be0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d8be0(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4810:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptActivityTimeUpdateNtf]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103d8f50(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103d8f50(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4811:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptActivityGetGlobalTokens]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = TdrDbgFmt_TokensArray_max20(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = TdrDbgFmt_TokensArray_max20(param_3,param_4 + 1,param_5);
      return iVar1;
    case 0x4812:
      iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CScriptActivityUpdateBGStat]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_103cdee0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_103cdee0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    goto LAB_1045784f;
  }
  if (param_1 < 0x5852) {
    if (param_1 == 0x5851) {
      iVar1 = TdrText_FieldLabelChar(param_5,"[stWorldPayRsp]",1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 < 0) {
        iVar1 = FUN_10417bd0(param_3,param_4,param_5);
        return iVar1;
      }
      iVar1 = FUN_10417bd0(param_3,param_4 + 1,param_5);
      return iVar1;
    }
    if (param_1 < 0x5202) {
      if (param_1 == 0x5201) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmCDDecreaseReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103c3b70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103c3b70(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (0x5101 < param_1) {
        switch(param_1) {
        case 0x5102:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEntrustLevelGainRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102d0220(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102d0220(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5103:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceUnlockNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a7630(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a7630(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5104:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceUnlockChangeNotify]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a84e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a84e0(param_3,param_4 + 1,param_5);
          return iVar1;
        default:
          goto LAB_1045784f;
        case 0x5106:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelIntegrateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103a72b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103a72b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5111:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnSubGroupGainRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102cf150(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cf150(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5112:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnSubGroupGainRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102cf4a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cf4a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5113:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnGroupGainRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102cf7f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cf7f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5114:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stEnGroupGainRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102cfb20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102cfb20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5115:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelUnlockReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10274a90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10274a90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5116:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelThousandLayerUpdateNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102abf10(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102abf10(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5121:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPSelectHuntingBagReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1028ecc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028ecc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5122:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPSelectHuntingBagRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1028f100(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1028f100(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5123:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPSelectHuntingBagStartNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_MemberList(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_MemberList(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5124:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPSelectHuntingBagFinishNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102900a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102900a0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5125:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPAllSelectHuntingBagFinishNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10290390(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10290390(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5126:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPPrepareStageStartNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102909d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102909d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5127:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPPrepareStageFinishNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10290680(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10290680(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5128:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stHubEntryRewadReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10274e00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10274e00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5129:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stHubEntryRewadRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10275170(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10275170(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5130:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPPlayerScoreNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10290d00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10290d00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5131:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPvpBoundsNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102e1f20(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102e1f20(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5132:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPVPPlayerJoinHuntingBagStartNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDebugFormat_JoinMember(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDebugFormat_JoinMember(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5133:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiveUpReviveReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102d2e80(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        case 0x5134:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGiveUpReviveRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102d2e80(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        case 0x5135:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stLevelGroupUnlockReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102ac220(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102ac220(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5137:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stXHunterMonsterRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10416c30(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10416c30(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5138:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGainChallangeRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10275480(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10275480(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5139:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGainChallangeRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_102757f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_102757f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5140:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGainSuccessRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10275b00(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10275b00(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5141:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGainSuccessRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10275e70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10275e70(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5142:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGetInfoReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10276180(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10276180(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5143:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSuperSeriesGetInfoRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10276530(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10276530(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        iVar1 = FUN_102d2e80(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 == 0x5101) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stEntrustLevelGainRewardReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102cfeb0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102cfeb0(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 < 0x4923) {
        if (param_1 == 0x4922) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCSWeaponStyleActiveRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10419b50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10419b50(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4911) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFluteAddNote]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10409780(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10409780(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4912) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CFluteInvokeTune]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10409d60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10409d60(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x4921) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCSWeaponStyleActiveReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104197e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104197e0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else {
        if (param_1 == 0x5001) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CEquipWaking]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e91a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e91a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x5002) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCSWeaponBreakEffect]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103e94c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103e94c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
    }
    else {
      if (param_1 < 0x5302) {
        if (param_1 == 0x5301) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCatTreatureInfo]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_CatCuisineOpenInfo(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_CatCuisineOpenInfo(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x5202:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmCDDecreaseRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c3f70(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDbgFmt_ErrCodeReqWrap_103c3f70(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5203:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmEquipAvatarReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103c42c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103c42c0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5204:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmEquipAvatarRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103c4780(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        case 0x5205:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetEquipAvatarReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103c4c60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_103c4c60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5206:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmSetEquipAvatarNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103c4780(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        case 20999:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stFarmWoodIndexIDMappingNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_103c4780(param_3,param_4,param_5);
            return iVar1;
          }
          break;
        default:
          goto LAB_1045784f;
        }
        iVar1 = FUN_103c4780(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 < 0x5602) {
        if (param_1 == 0x5601) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneRepairReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10363060(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10363060(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 < 0x5502) {
          if (param_1 == 0x5501) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakWord]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10360030(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10360030(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x5302) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stCatTreatureOpen]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10407b80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10407b80(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x5303) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stCatTreatureErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10407e70(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10407e70(param_3,param_4 + 1,param_5);
            return iVar1;
          }
          if (param_1 == 0x5401) {
            iVar1 = TdrText_FieldLabelChar(param_5,"[stTraceReq]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103f83b0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103f83b0(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
        else {
          switch(param_1) {
          case 0x5502:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakExec]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_Wrapper_stExec(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_Wrapper_stExec(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5503:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakSetQuick]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103606e0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103606e0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5504:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakSetSelfDef]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10360af0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10360af0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5505:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakSetAuto]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10360e80(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10360e80(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5506:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSpeakContent]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10361270(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10361270(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5551:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakWord]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10361600(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10361600(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5552:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakExec]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = TdrDump_NetExec_iNetId_stExec(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = TdrDump_NetExec_iNetId_stExec(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5553:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakSetQuick]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10361d50(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10361d50(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5554:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakSetSelfDef]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10362160(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10362160(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5555:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakSetAuto]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103624f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103624f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5556:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakContent]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_103628f0(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_103628f0(param_3,param_4 + 1,param_5);
            return iVar1;
          case 0x5557:
            iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSpeakErr]",1);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (param_4 < 0) {
              iVar1 = FUN_10362d30(param_3,param_4,param_5);
              return iVar1;
            }
            iVar1 = FUN_10362d30(param_3,param_4 + 1,param_5);
            return iVar1;
          }
        }
      }
      else if (param_1 < 0x5702) {
        if (param_1 == 0x5701) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSurrenderVoteReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104142f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104142f0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x5602:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneRepairRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10363350(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10363350(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5603:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneFeedReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10363770(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10363770(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5604:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneFeedRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10363bc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10363bc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5605:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneInsertReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_SlotList_iSlotsCnt_astSlots(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_SlotList_iSlotsCnt_astSlots(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5606:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStarStoneInsertRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_SlotListResult_iError_iSlotsCnt_astSlots(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_SlotListResult_iError_iSlotsCnt_astSlots(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 < 0x5802) {
        if (param_1 == 0x5801) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stWorldPayReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10417820(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10417820(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        switch(param_1) {
        case 0x5702:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSurrenderVoteRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104145e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104145e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5703:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSurrenderVoteNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10414a50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10414a50(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5704:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stSurrenderResultNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10414e50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10414e50(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5706:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stApplyForCommanderRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10415140(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10415140(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5708:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stQuitCommanderRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10415430(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10415430(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x570b:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stXHunterResultNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104166f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104166f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x570f:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGetCommanderRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10415820(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10415820(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5710:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stCommanderChgNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10415c90(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10415c90(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x5711:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stBattlePunishNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_PlayerInfoList12(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_PlayerInfoList12(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else if (param_1 == 0x5802) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stAccountReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10417f40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10417f40(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    goto LAB_1045784f;
  }
  if (0x6001 < param_1) {
    if (param_1 < 0x6102) {
      if (param_1 == 0x6101) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeAnswer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040bbd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040bbd0(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6002:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSuitSkillUnlockRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103096b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103096b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6003:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSuitSkillEditReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10309ad0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10309ad0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6004:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSuitSkillEditRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10309f70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10309f70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6005:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSuitSkillRefreshNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1030a330(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1030a330(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6202) {
      if (param_1 == 0x6201) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulStoneLevelUp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10410200(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10410200(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6102:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeLighten]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040bec0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040bec0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6103:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeRngLighten]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040c1b0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040c1b0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6104:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeGetSubject]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040c4a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040c4a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6105:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeRManualReset]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040c790(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040c790(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6106:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeAcceptTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040ca80(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040ca80(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6107:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeSubmitTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040cd70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040cd70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6108:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeRefreshTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040d060(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040d060(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6109:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SAstrolabeBuyDayTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040d350(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040d350(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6121:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeAnswer]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040d6a0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040d6a0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6122:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeErr]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040dac0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040dac0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6123:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeReset]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040e7d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040e7d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6124:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeLighten]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040eb20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040eb20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6125:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeGetSubject]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040ee10(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040ee10(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6126:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeOpen]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040f100(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040f100(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6127:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeRManualReset]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040f3f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040f3f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6128:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeNotify]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040e080(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040e080(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6129:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CRageDataNotify]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040e4d0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040e4d0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6130:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeRefreshTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040fcf0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040fcf0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6131:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CAstrolabeBuyDayTask]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1040f740(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1040f740(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6302) {
      if (param_1 == 0x6301) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGrowHigherInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10418650(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10418650(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6202:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulStoneStageUp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_104104f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_104104f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6203:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulStoneReset]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_104107e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_104107e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6204:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulStoneAttrUpgrade]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10410b30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10410b30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6205:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulStoneUnlockStage]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10410e20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10410e20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6206:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastUnlock]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10411110(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10411110(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6207:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastFeed]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10411460(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10411460(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6208:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastFollow]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10411750(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10411750(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6209:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastUnFollow]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10411a40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10411a40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6210:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastEvolve]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10411d30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10411d30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6211:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastSetImage]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10412080(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10412080(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6212:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastInteractReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10412430(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10412430(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6213:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastRespawn]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_104126f0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_104126f0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6215:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSoulStoneAttrUpgrade]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10412df0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10412df0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6216:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSoulBeastAppearNtfList]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_AppearList4(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_AppearList4(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6217:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSoulBeastAttrSync]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10413f60(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10413f60(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6218:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stS2CSoulBeastInteractNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10413bd0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10413bd0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6219:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stC2SSoulBeastExpShift]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10412a60(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10412a60(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6402) {
      if (param_1 == 0x6401) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlInlayReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10419f20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10419f20(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6302:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGrowHigherReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10418a20(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10418a20(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6303:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGrowHigherRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10418d70(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10418d70(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6304:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGrowHigherPetInfo]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_104190e0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_104190e0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6305:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stGrowHigherBroad]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10419470(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10419470(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6411) {
      if (param_1 == 0x6410) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlRebuildUpgradeRes]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041c440(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041c440(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6402:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlInlayRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041a380(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041a380(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6403:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlTakeDownReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041a770(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041a770(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6404:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlTakeDownRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041ab30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041ab30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6405:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlLevelUpReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041af40(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041af40(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6406:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlLevelUpRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041b390(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041b390(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6407:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlConfirmReplaceAbilityReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041b7c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041b7c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6408:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlConfirmReplaceAbilityRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041bb30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041bb30(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6409:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stLegendPearlRebuildUpgradeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041bfe0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041bfe0(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6702) {
      if (param_1 == 0x6701) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDemonTrialGetLevelsReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_1041ff30(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_1041ff30(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      if (param_1 < 0x6602) {
        if (param_1 == 0x6601) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookAutoFirstOpenReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041e2a0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041e2a0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x6501) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStorageBoxFetchSilverReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041c7c0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041c7c0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x6502) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStorageBoxFetchSilverRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041cab0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041cab0(param_3,param_4 + 1,param_5);
          return iVar1;
        }
        if (param_1 == 0x6503) {
          iVar1 = TdrText_FieldLabelChar(param_5,"[stStorageBoxSyncSilverDataNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = TdrDump_DataWrapper(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = TdrDump_DataWrapper(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
      else {
        switch(param_1) {
        case 0x6602:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookAutoFirstOpenRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041e590(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041e590(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6603:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookGetChapterRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041e8e0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041e8e0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6604:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookGetChapterRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041ec50(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041ec50(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6605:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookActionFinishNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041efc0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041efc0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6606:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookSetWeaponIdReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041f2b0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041f2b0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6607:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookSetWeaponIdRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041f600(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041f600(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6608:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookSetNewReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041f8f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041f8f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6609:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stGuideBookSetNewRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_1041fc40(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_1041fc40(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
    }
    else if (param_1 < 0x6902) {
      if (param_1 == 0x6901) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabHandleRefreshReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c5560(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c5560(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6702:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDemonTrialGetLevelsRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_104202c0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_104202c0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6703:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stCSUpdateLevelMinTimeNtf]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_PassLevelInfo(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_PassLevelInfo(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6704:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDemonTrialGetLevelPassTimeReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_10420630(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_10420630(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6705:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stDemonTrialGetLevelPassTimeRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_PassLevelInfoList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_PassLevelInfoList(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0x6a02) {
      if (param_1 == 0x6a01) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardCollectCardReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDump_MonsterCardMaterials(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDump_MonsterCardMaterials(param_3,param_4 + 1,param_5);
        return iVar1;
      }
      switch(param_1) {
      case 0x6902:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabHandleRefreshRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_LotteryBoxState(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_LotteryBoxState(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6903:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabResearchReq]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c6560(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c6560(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6904:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabResearchRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c6940(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c6940(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6905:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabDaliyRefreshRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_102c6cf0(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_102c6cf0(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6906:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabClockRefreshRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrDebugFormat_LotteryPool_ItemsThenBox(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrDebugFormat_LotteryPool_ItemsThenBox(param_3,param_4 + 1,param_5);
        return iVar1;
      case 0x6907:
        iVar1 = TdrText_FieldLabelChar(param_5,"[stSecretResearchLabDataSynchronizationRsp]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = TdrText_ItemBoxList_astItemBoxList(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = TdrText_ItemBoxList_astItemBoxList(param_3,param_4 + 1,param_5);
        return iVar1;
      }
    }
    else if (param_1 < 0xee02) {
      if (param_1 == 0xee01) {
        iVar1 = TdrText_FieldLabelChar(param_5,"[stShakeHand]",1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_4 < 0) {
          iVar1 = FUN_103a6860(param_3,param_4,param_5);
          return iVar1;
        }
        iVar1 = FUN_103a6860(param_3,param_4 + 1,param_5);
      }
      else {
        switch(param_1) {
        case 0x6a02:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardCollectCardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10421310(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10421310(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6a03:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardExchangePhyCardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10421680(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10421680(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6a04:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardExchangePhyCardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104219f0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104219f0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6a05:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardExchangeCardRewardReq]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10421d60(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10421d60(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6a06:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardExchangeCardRewardRsp]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_104220d0(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_104220d0(param_3,param_4 + 1,param_5);
          return iVar1;
        case 0x6a07:
          iVar1 = TdrText_FieldLabelChar(param_5,"[stPhyCardCardInfoChangeNtf]",1);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (param_4 < 0) {
            iVar1 = FUN_10422440(param_3,param_4,param_5);
            return iVar1;
          }
          iVar1 = FUN_10422440(param_3,param_4 + 1,param_5);
          return iVar1;
        }
      }
    }
    goto LAB_1045784f;
  }
  if (param_1 == 0x6001) {
    iVar1 = TdrText_FieldLabelChar(param_5,"[stSuitSkillUnlockReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_103092c0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_103092c0(param_3,param_4 + 1,param_5);
    return iVar1;
  }
  switch(param_1) {
  case 0x5852:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stAccountRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_104182b0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_104182b0(param_3,param_4 + 1,param_5);
    return iVar1;
  default:
    goto LAB_1045784f;
  case 0x5901:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceResultReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_10298a80(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_10298a80(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5902:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stInstanceResultRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1029bcf0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_1029bcf0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5903:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExcellentPointNtf]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1029caa0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_1029caa0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5904:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stMonsterSizeNtf]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = TdrDebugFormat_InfoList10(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = TdrDebugFormat_InfoList10(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5905:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stPayHuntingCreditReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_10298d70(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_10298d70(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5906:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stPayHuntingCreditRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_102990c0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_102990c0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5907:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_102993b0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_102993b0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5908:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_10299900(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_10299900(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5909:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardListReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_10299de0(param_3,param_4,param_5);
      return iVar1;
    }
    break;
  case 0x5910:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardListRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1029a5d0(param_3,param_4,param_5);
      return iVar1;
    }
    goto LAB_1045585b;
  case 0x5911:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardResetReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_10299de0(param_3,param_4,param_5);
      return iVar1;
    }
    break;
  case 0x5912:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stExtraCatRewardResetRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1029a5d0(param_3,param_4,param_5);
      return iVar1;
    }
LAB_1045585b:
    iVar1 = FUN_1029a5d0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5920:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stLikeHunterOfficerReq]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1039f3b0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_1039f3b0(param_3,param_4 + 1,param_5);
    return iVar1;
  case 0x5921:
    iVar1 = TdrText_FieldLabelChar(param_5,"[stLikeHunterOfficerRsp]",1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 < 0) {
      iVar1 = FUN_1039f6e0(param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = FUN_1039f6e0(param_3,param_4 + 1,param_5);
    return iVar1;
  }
  iVar1 = FUN_10299de0(param_3,param_4 + 1,param_5);
  return iVar1;
}



