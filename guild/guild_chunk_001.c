/* ===== FUN_1035abf0 @ 1035abf0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwCommerceId]"
//   "[dwGoodNumber]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceId]""
     ""[dwGoodNumber]"" */

int __thiscall
FUN_1035abf0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwCommerceId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwGoodNumber]",&DAT_11d9f574,param_1[1])
    ;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1035ac90 @ 1035ac90  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwCommerceId]"
//   "[dwGoodNumber]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceId]""
     ""[dwGoodNumber]"" */

void __thiscall
FUN_1035ac90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwGoodNumber]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_1035b3e0 @ 1035b3e0  size=108 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullGuildId]"
//   "[szGuildName]"
//   "0x%02x"
//   "[bBoatsCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]""
     ""[szGuildName]""
     ""0x%02x""
     ""[bBoatsCount]"" */

void __thiscall
FUN_1035b3e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 2);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bBoatsCount]","0x%02x",
                          *(undefined1 *)(param_1 + 10));
    }
  }
  return;
}



/* ===== FUN_1035c6a0 @ 1035c6a0  size=152 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[wCount]"
//   "[guildIds]"
//   " %I64u"

/* [RE-AUTO c0]
   strings:
     ""[wCount]""
     ""[guildIds]""
     "" %I64u"" */

int __thiscall
FUN_1035c6a0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (6 < *param_1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(6,"[guildIds]",*param_1,0);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_1010c010(param_2," %I64u",*(undefined4 *)(param_1 + (uint)uVar2 * 4 + 1),
                               *(undefined4 *)(param_1 + (uint)uVar2 * 4 + 3));
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_1035ca60 @ 1035ca60  size=152 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[wCount]"
//   "[guildIds]"
//   " %I64u"

/* [RE-AUTO c0]
   strings:
     ""[wCount]""
     ""[guildIds]""
     "" %I64u"" */

int __thiscall
FUN_1035ca60(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    if (6 < *param_1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(6,"[guildIds]",*param_1,0);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar1 = FUN_1010c010(param_2," %I64u",*(undefined4 *)(param_1 + (uint)uVar2 * 4 + 1),
                               *(undefined4 *)(param_1 + (uint)uVar2 * 4 + 3));
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_1035e290 @ 1035e290  size=109 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildId]"
//   "[iTimeStamp]"
//   "[iCommerceid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]""
     ""[iTimeStamp]""
     ""[iCommerceid]"" */

void __thiscall
FUN_1035e290(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTimeStamp]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceid]",&DAT_11d9e0b4,param_1[3]);
    }
  }
  return;
}



/* ===== FUN_1037b560 @ 1037b560  size=128 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szName]"
//   "[szGuild]"
//   "[iVal]"
//   "[iArg1]"

/* [RE-AUTO c0]
   strings:
     ""[szName]""
     ""[szGuild]""
     ""[iVal]""
     ""[iArg1]"" */

void __thiscall FUN_1037b560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szGuild]",param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iVal]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x40));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iArg1]",&DAT_11d9e0b4,
                            *(undefined4 *)(param_1 + 0x44));
      }
    }
  }
  return;
}



/* ===== FUN_10388330 @ 10388330  size=158 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iFriendSize]"
//   "[szFriender]"

/* [RE-AUTO c0]
   strings:
     ""[iFriendSize]""
     ""[szFriender]"" */

int __thiscall FUN_10388330(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFriendSize]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x200 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szFriender]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < *param_1) {
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar1 + 4));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_1038de20 @ 1038de20  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullDBID]"
//   "[dwFriendly]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullDBID]""
     ""[dwFriendly]"" */

int __thiscall
FUN_1038de20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullDBID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwFriendly]",&DAT_11d9f574,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1038dec0 @ 1038dec0  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullDBID]"
//   "[dwFriendly]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullDBID]""
     ""[dwFriendly]"" */

void __thiscall
FUN_1038dec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDBID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwFriendly]",&DAT_11d9f574,param_1[2]);
  }
  return;
}



/* ===== FUN_103a2de0 @ 103a2de0  size=483 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel
// strings:
//   "[iMatchID]"
//   "[dwSignUpID]"
//   "[iSignUpTM]"
//   "%I64u"
//   "[ullGuildID]"
//   "[szGuildName]"
//   "[iBestScore]"
//   "[iBestScoreTm]"
//   "0x%02x"
//   "[chAcceptRound]"
//   "[szTeamName]"
//   "[dwCount]"
//   "[astMembers]"

/* [RE-AUTO c0]
   strings:
     ""[iMatchID]""
     ""[dwSignUpID]""
     ""[iSignUpTM]""
     ""%I64u""
     ""[ullGuildID]""
     ""[szGuildName]""
     ""[iBestScore]""
     ""[iBestScoreTm]""
     ""0x%02x""
     ""[chAcceptRound]"" */

int __thiscall FUN_103a2de0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMatchID]",&DAT_11d9e0b4,*param_1);
  if ((((((iVar2 == 0) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSignUpID]",&DAT_11d9f574,
                                      param_1[1]), iVar2 == 0)) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSignUpTM]",&DAT_11d9e0b4,param_1[2])
        , iVar2 == 0)) &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildID]","%I64u",param_1[3],
                                     param_1[4]), iVar2 == 0 &&
        (iVar2 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 5), iVar2 == 0)))) &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBestScore]",&DAT_11d9e0b4,
                                    param_1[0xd]), iVar2 == 0 &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBestScoreTm]",&DAT_11d9e0b4,
                                     param_1[0xe]), iVar2 == 0 &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chAcceptRound]","0x%02x",
                                     (int)*(char *)(param_1 + 0xf)), iVar2 == 0)))))) &&
     ((iVar2 = TdrText_FieldValueFmt(param_4,"[szTeamName]",(int)param_1 + 0x3d), iVar2 == 0 &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCount]",&DAT_11d9f574,
                                   *(undefined4 *)((int)param_1 + 0x65)), iVar2 == 0)))) {
    if (4 < *(uint *)((int)param_1 + 0x65)) {
      return -7;
    }
    param_3 = 0;
    if (*(uint *)((int)param_1 + 0x65) != 0) {
      puVar3 = (undefined4 *)((int)param_1 + 0x69);
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astMembers]",param_3,puVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_103a2730(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        puVar3 = param_1;
      } while (param_3 < *(uint *)((int)param_1 + 0x65));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_103ae4e0 @ 103ae4e0  size=279 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "0x%02x"
//   "[bMailSource]"
//   "[bMailType]"
//   "[bMailSubType]"
//   "[bMailStatus]"
//   "[dwMailTime]"
//   "[dwMailLeftTime]"
//   "[dwMailBitmap]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""0x%02x""
     ""[bMailSource]""
     ""[bMailType]""
     ""[bMailSubType]""
     ""[bMailStatus]""
     ""[dwMailTime]""
     ""[dwMailLeftTime]""
     ""[dwMailBitmap]"" */

void __thiscall
FUN_103ae4e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailSource]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",
                                  *(undefined1 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailSubType]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 10));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailStatus]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0xb));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMailTime]",&DAT_11d9f574,
                                        param_1[3]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMailLeftTime]",&DAT_11d9f574,
                                          param_1[4]);
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[dwMailBitmap]",&DAT_11d9f574,
                                    param_1[5]);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103aead0 @ 103aead0  size=197 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szTitle]"
//   "[szMailFromName]"
//   "%I64u"
//   "[ullMailFrom]"
//   "[iAccessoriesNum]"
//   "[dwItemId]"
//   "0x%02x"
//   "[bItemCount]"

/* [RE-AUTO c0]
   strings:
     ""[szTitle]""
     ""[szMailFromName]""
     ""%I64u""
     ""[ullMailFrom]""
     ""[iAccessoriesNum]""
     ""[dwItemId]""
     ""0x%02x""
     ""[bItemCount]"" */

void __thiscall FUN_103aead0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szTitle]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szMailFromName]",param_1 + 0x40);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailFrom]","%I64u",
                                  *(undefined4 *)(param_1 + 0x61),*(undefined4 *)(param_1 + 0x65));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAccessoriesNum]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x69));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwItemId]",&DAT_11d9f574,
                                      *(undefined4 *)(param_1 + 0x6d));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                                *(undefined1 *)(param_1 + 0x71));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103b22d0 @ 103b22d0  size=144 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[wMailListPos]"
//   "0x%02x"
//   "[bMailType]"
//   "[bMailSubType]"
//   "[bMailWhy]"

/* [RE-AUTO c0]
   strings:
     ""[wMailListPos]""
     ""0x%02x""
     ""[bMailType]""
     ""[bMailSubType]""
     ""[bMailWhy]"" */

void __thiscall
FUN_103b22d0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wMailListPos]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",
                                *(undefined1 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailSubType]","0x%02x",
                                  *(undefined1 *)((int)param_1 + 3));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[bMailWhy]","0x%02x",
                            *(undefined1 *)(param_1 + 2));
      }
    }
  }
  return;
}



/* ===== FUN_103b27c0 @ 103b27c0  size=337 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel, TdrDbgFmt_MailHeadMemo
// strings:
//   "[wMailListPos]"
//   "0x%02x"
//   "[bMailType]"
//   "[bMailSubType]"
//   "[iMailCount]"
//   "[iCount]"
//   "[astMailListEntry]"

/* [RE-AUTO c0]
   strings:
     ""[wMailListPos]""
     ""0x%02x""
     ""[bMailType]""
     ""[bMailSubType]""
     ""[iMailCount]""
     ""[iCount]""
     ""[astMailListEntry]"" */

int __thiscall FUN_103b27c0(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wMailListPos]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",
                                    *(undefined1 *)(param_1 + 1)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailSubType]","0x%02x",
                                   *(undefined1 *)((int)param_1 + 3)), iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMailCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 2)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 4)), iVar1 == 0)))) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      return -6;
    }
    if (300 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astMailListEntry]",iVar2,iVar1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TdrDbgFmt_MailHeadMemo(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = extraout_ECX;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103b4d00 @ 103b4d00  size=162 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[bMailType]"
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bMailType]""
     ""%I64u""
     ""[ullMailId]"" */

int __thiscall
FUN_103b4d00(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[bMailType]","0x%02x",*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",
                                *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103b4db0 @ 103b4db0  size=79 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[bMailType]"
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bMailType]""
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b4db0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5));
  }
  return;
}



/* ===== FUN_103b54d0 @ 103b54d0  size=155 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullMailID]"
//   "[szErrMsg]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailID]""
     ""[szErrMsg]"" */

int __thiscall
FUN_103b54d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_6,"[szErrMsg]",param_1 + 2);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103b5570 @ 103b5570  size=73 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullMailID]"
//   "[szErrMsg]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailID]""
     ""[szErrMsg]"" */

void __thiscall
FUN_103b5570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldValueFmt(param_4,"[szErrMsg]",param_1 + 2);
  }
  return;
}



/* ===== FUN_103b5f00 @ 103b5f00  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined4 __thiscall
FUN_103b5f00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103b5f80 @ 103b5f80  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b5f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103b5fb0 @ 103b5fb0  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b5fb0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b6040 @ 103b6040  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b6040(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b61f0 @ 103b61f0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined4 __thiscall
FUN_103b61f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103b6270 @ 103b6270  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b6270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103b62a0 @ 103b62a0  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b62a0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b6330 @ 103b6330  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b6330(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b65f0 @ 103b65f0  size=155 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[szErrMsg]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[szErrMsg]"" */

int __thiscall
FUN_103b65f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_6,"[szErrMsg]",param_1 + 2);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103b6690 @ 103b6690  size=73 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[szErrMsg]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[szErrMsg]"" */

void __thiscall
FUN_103b6690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldValueFmt(param_4,"[szErrMsg]",param_1 + 2);
  }
  return;
}



/* ===== FUN_103b71d0 @ 103b71d0  size=246 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iAccStoreLocation]"
//   "[iDelType]"
//   "[iCount]"
//   "[mailId]"
//   " %I64u"

/* [RE-AUTO c0]
   strings:
     ""[iAccStoreLocation]""
     ""[iDelType]""
     ""[iCount]""
     ""[mailId]""
     "" %I64u"" */

int __thiscall
FUN_103b71d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAccStoreLocation]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDelType]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[2]),
     iVar1 == 0)) {
    iVar1 = param_1[2];
    if (iVar1 < 0) {
      return -6;
    }
    if (300 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[mailId]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[2]) {
        puVar3 = param_1 + 3;
        do {
          iVar2 = FUN_1010c010(param_2," %I64u",*puVar3,puVar3[1]);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar1 < (int)param_1[2]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_103b75e0 @ 103b75e0  size=171 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "0x%02x"
//   "[bMailType]"
//   "[iMailAccessoryIndex]"
//   "[iAccStoreLocation]"
//   "[iDelType]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""0x%02x""
     ""[bMailType]""
     ""[iMailAccessoryIndex]""
     ""[iAccStoreLocation]""
     ""[iDelType]"" */

void __thiscall
FUN_103b75e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMailAccessoryIndex]",&DAT_11d9e0b4,
                                  *(undefined4 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAccStoreLocation]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xd));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iDelType]",&DAT_11d9e0b4,
                              *(undefined4 *)((int)param_1 + 0x11));
        }
      }
    }
  }
  return;
}



/* ===== FUN_103b79c0 @ 103b79c0  size=205 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iResult]"
//   "[iArg1]"
//   "%I64u"
//   "[ullMailId]"
//   "[iMailIndex]"
//   "[iMailAccType]"
//   "0x%02x"
//   "[bLocation]"

/* [RE-AUTO c0]
   strings:
     ""[iResult]""
     ""[iArg1]""
     ""%I64u""
     ""[ullMailId]""
     ""[iMailIndex]""
     ""[iMailAccType]""
     ""0x%02x""
     ""[bLocation]"" */

void __thiscall
FUN_103b79c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iArg1]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",param_1[2],
                                  param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMailIndex]",&DAT_11d9e0b4,param_1[4])
        ;
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMailAccType]",&DAT_11d9e0b4,
                                      param_1[5]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[bLocation]","0x%02x",
                                *(undefined1 *)(param_1 + 6));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103b7e00 @ 103b7e00  size=208 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrDbgFmt_MailHeadMemo
// strings:
//   "0x%02x"
//   "[bMailType]"
//   "[chMailNotifyType]"
//   "[dwMailCount]"
//   "[stMailListEntry]"
//   "[dwUin]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bMailType]""
     ""[chMailNotifyType]""
     ""[dwMailCount]""
     ""[stMailListEntry]""
     ""[dwUin]"" */

void __thiscall FUN_103b7e00(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chMailNotifyType]","0x%02x",
                                    (int)(char)param_1[1]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMailCount]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 2)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldLabelChar(param_4,"[stMailListEntry]",extraout_ECX), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = TdrDbgFmt_MailHeadMemo(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[dwUin]",&DAT_11d9f574,
                          *(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}



/* ===== FUN_103b80f0 @ 103b80f0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined4 __thiscall
FUN_103b80f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103b8170 @ 103b8170  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b8170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103b81a0 @ 103b81a0  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b81a0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b8230 @ 103b8230  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b8230(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b8430 @ 103b8430  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailID]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailID]""
     ""[iResult]"" */

int __thiscall
FUN_103b8430(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103b84d0 @ 103b84d0  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailID]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailID]""
     ""[iResult]"" */

void __thiscall
FUN_103b84d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_103b8eb0 @ 103b8eb0  size=110 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[bMailType]"
//   "[bMailRemind]"
//   "[iMailRemindCount]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bMailType]""
     ""[bMailRemind]""
     ""[iMailRemindCount]"" */

void __thiscall
FUN_103b8eb0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailRemind]","0x%02x",param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iMailRemindCount]",&DAT_11d9e0b4,
                          *(undefined4 *)(param_1 + 2));
    }
  }
  return;
}



/* ===== FUN_103b9140 @ 103b9140  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined4 __thiscall
FUN_103b9140(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103b91c0 @ 103b91c0  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

void __thiscall
FUN_103b91c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103b91f0 @ 103b91f0  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b91f0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b9280 @ 103b9280  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullMailId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]"" */

undefined1 * __thiscall
FUN_103b9280(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103b9480 @ 103b9480  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[iResult]"" */

int __thiscall
FUN_103b9480(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103b9520 @ 103b9520  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[iResult]"" */

void __thiscall
FUN_103b9520(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_103b9890 @ 103b9890  size=112 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[bMailType]"
//   "[bMailCount]"
//   "[bMailunRead]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bMailType]""
     ""[bMailCount]""
     ""[bMailunRead]"" */

void __thiscall
FUN_103b9890(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailType]","0x%02x",*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bMailCount]","0x%02x",param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bMailunRead]","0x%02x",param_1[2]);
    }
  }
  return;
}



/* ===== FUN_103ba400 @ 103ba400  size=167 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iCount]"
//   "[mailId]"
//   " %I64u"

/* [RE-AUTO c0]
   strings:
     ""[iCount]""
     ""[mailId]""
     "" %I64u"" */

int __thiscall FUN_103ba400(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (300 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[mailId]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < *param_1) {
        piVar3 = param_1 + 1;
        do {
          iVar2 = FUN_1010c010(param_2," %I64u",*piVar3,piVar3[1]);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar1 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_103ba720 @ 103ba720  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[iResult]"" */

int __thiscall
FUN_103ba720(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103ba7c0 @ 103ba7c0  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullMailId]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullMailId]""
     ""[iResult]"" */

void __thiscall
FUN_103ba7c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullMailId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_103ca230 @ 103ca230  size=139 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPhase]"
//   "[iCamp]"
//   "[iApplyType]"
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""[iPhase]""
     ""[iCamp]""
     ""[iApplyType]""
     ""%I64u""
     ""[ullGuild]"" */

void __thiscall
FUN_103ca230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPhase]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCamp]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iApplyType]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",param_1[3],param_1[4]);
      }
    }
  }
  return;
}



/* ===== FUN_103ca4e0 @ 103ca4e0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined4 __thiscall
FUN_103ca4e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103ca560 @ 103ca560  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

void __thiscall
FUN_103ca560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103ca590 @ 103ca590  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_103ca590(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103ca620 @ 103ca620  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_103ca620(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103ca8e0 @ 103ca8e0  size=146 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "%I64u"
//   "[ullRedSoul]"
//   "[ullYellowSoul]"
//   "[stGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullRedSoul]""
     ""[ullYellowSoul]""
     ""[stGuild]"" */

void __thiscall FUN_103ca8e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullRedSoul]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullYellowSoul]","%I64u",param_1[2],
                                param_1[3]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldLabelChar(param_4,"[stGuild]",extraout_ECX);
      if (iVar1 == 0) {
        if (param_3 < 0) {
          FUN_1033ac40(param_2,param_3,param_4);
          return;
        }
        FUN_1033ac40(param_2,param_3 + 1,param_4);
      }
    }
  }
  return;
}



/* ===== FUN_103dc0a0 @ 103dc0a0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined4 __thiscall
FUN_103dc0a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClaner]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103dc120 @ 103dc120  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

void __thiscall
FUN_103dc120(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullClaner]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103dc150 @ 103dc150  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined1 * __thiscall
FUN_103dc150(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClaner]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dc1e0 @ 103dc1e0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined1 * __thiscall
FUN_103dc1e0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullClaner]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dc390 @ 103dc390  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined4 __thiscall
FUN_103dc390(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClaner]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103dc410 @ 103dc410  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

void __thiscall
FUN_103dc410(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullClaner]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103dc440 @ 103dc440  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined1 * __thiscall
FUN_103dc440(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClaner]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dc4d0 @ 103dc4d0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullClaner]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]"" */

undefined1 * __thiscall
FUN_103dc4d0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullClaner]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dc780 @ 103dc780  size=155 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullClaner]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]""
     ""[szNote]"" */

int __thiscall
FUN_103dc780(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClaner]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_6,"[szNote]",param_1 + 2);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103dc820 @ 103dc820  size=73 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullClaner]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClaner]""
     ""[szNote]"" */

void __thiscall
FUN_103dc820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullClaner]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldValueFmt(param_4,"[szNote]",param_1 + 2);
  }
  return;
}



/* ===== FUN_103dd070 @ 103dd070  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClan]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]"" */

undefined4 __thiscall
FUN_103dd070(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClan]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103dd0f0 @ 103dd0f0  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClan]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]"" */

void __thiscall
FUN_103dd0f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullClan]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_103dd120 @ 103dd120  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClan]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]"" */

undefined1 * __thiscall
FUN_103dd120(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClan]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dd1b0 @ 103dd1b0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullClan]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]"" */

undefined1 * __thiscall
FUN_103dd1b0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullClan]","%I64u",*param_1,param_1[1]);
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



/* ===== FUN_103dd3b0 @ 103dd3b0  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClan]"
//   "[iReason]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]""
     ""[iReason]"" */

int __thiscall
FUN_103dd3b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullClan]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iReason]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103dd450 @ 103dd450  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullClan]"
//   "[iReason]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullClan]""
     ""[iReason]"" */

void __thiscall
FUN_103dd450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullClan]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iReason]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_103ddae0 @ 103ddae0  size=197 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iLeagueID]"
//   "[iCount]"
//   "[levelIDs]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueID]""
     ""[iCount]""
     ""[levelIDs]"" */

int __thiscall
FUN_103ddae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLeagueID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[levelIDs]",iVar1,iVar1 >> 0x1f);
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
    }
  }
  return iVar1;
}



/* ===== FUN_103de7d0 @ 103de7d0  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLeagueType]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueType]"" */

undefined4 __thiscall
FUN_103de7d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iLeagueType]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_103de850 @ 103de850  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLeagueType]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueType]"" */

void __thiscall
FUN_103de850(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iLeagueType]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_103de880 @ 103de880  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLeagueType]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueType]"" */

undefined1 * __thiscall
FUN_103de880(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iLeagueType]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_103de910 @ 103de910  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iLeagueType]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueType]"" */

undefined1 * __thiscall
FUN_103de910(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iLeagueType]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_103deee0 @ 103deee0  size=197 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iLeagueType]"
//   "[iCount]"
//   "[levelIDs]"

/* [RE-AUTO c0]
   strings:
     ""[iLeagueType]""
     ""[iCount]""
     ""[levelIDs]"" */

int __thiscall
FUN_103deee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLeagueType]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[levelIDs]",iVar1,iVar1 >> 0x1f);
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
    }
  }
  return iVar1;
}



/* ===== FUN_103df6f0 @ 103df6f0  size=108 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szClanName]"

/* WARNING: Removing unreachable block (ram,0x103df748) */
/* [RE-AUTO c0]
   strings:
     ""[szClanName]"" */

undefined4 __thiscall
FUN_103df6f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = TdrText_FieldValueFmt(param_6,"[szClanName]",param_1);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    return uVar1;
  }
  return 0xffffffed;
}



/* ===== FUN_103df760 @ 103df760  size=30 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szClanName]"

/* [RE-AUTO c0]
   strings:
     ""[szClanName]"" */

void __thiscall
FUN_103df760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldValueFmt(param_4,"[szClanName]",param_1);
  return;
}



/* ===== FUN_103df780 @ 103df780  size=128 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szClanName]"

/* WARNING: Removing unreachable block (ram,0x103df7e0) */
/* [RE-AUTO c0]
   strings:
     ""[szClanName]"" */

undefined1 * __thiscall
FUN_103df780(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    TdrText_FieldValueFmt(param_6,"[szClanName]",param_1);
    iVar1 = 0;
    if (param_3 == 0) {
      iVar1 = -1;
    }
    param_2[iVar1] = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    return param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_103df800 @ 103df800  size=79 ===== */
// calls: TdrText_FieldValueFmt, TdrBuf_PutNulAt
// strings:
//   "[szClanName]"

/* [RE-AUTO c0]
   strings:
     ""[szClanName]"" */

undefined1 * __thiscall
FUN_103df800(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldValueFmt(param_4,"[szClanName]",param_1);
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



/* ===== FUN_103e2c60 @ 103e2c60  size=407 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullId]"
//   "[szName]"
//   "[iScore]"
//   "[iRank]"
//   "[iCapacity]"
//   "[iClanersCount]"
//   "[iOnlineClanersCount]"
//   "[iClanersAvgLevel]"
//   "%I64i"
//   "[llScoreUpdate]"
//   "[iPVEScore]"
//   "[iINDScore]"
//   "[iINDPV]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullId]""
     ""[szName]""
     ""[iScore]""
     ""[iRank]""
     ""[iCapacity]""
     ""[iClanersCount]""
     ""[iOnlineClanersCount]""
     ""[iClanersAvgLevel]""
     ""%I64i"" */

void __thiscall
FUN_103e2c60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iScore]",&DAT_11d9e0b4,param_1[10]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRank]",&DAT_11d9e0b4,param_1[0xb]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCapacity]",&DAT_11d9e0b4,
                                      param_1[0xc]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iClanersCount]",&DAT_11d9e0b4,
                                        param_1[0xd]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOnlineClanersCount]",
                                          &DAT_11d9e0b4,param_1[0xe]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iClanersAvgLevel]",
                                            &DAT_11d9e0b4,param_1[0xf]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llScoreUpdate]","%I64i",
                                              param_1[0x10],param_1[0x11]);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPVEScore]",&DAT_11d9e0b4,
                                                param_1[0x12]);
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iINDScore]",
                                                  &DAT_11d9e0b4,param_1[0x13]);
                      if (iVar1 == 0) {
                        TdrText_FieldScalar(param_2,param_3,param_4,"[iINDPV]",&DAT_11d9e0b4,
                                            param_1[0x14]);
                      }
                    }
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



/* ===== FUN_103e4a50 @ 103e4a50  size=128 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szName]"
//   "[szGuild]"
//   "[iTime]"
//   "[iIntegral]"

/* [RE-AUTO c0]
   strings:
     ""[szName]""
     ""[szGuild]""
     ""[iTime]""
     ""[iIntegral]"" */

void __thiscall FUN_103e4a50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szGuild]",param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTime]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x40));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iIntegral]",&DAT_11d9e0b4,
                            *(undefined4 *)(param_1 + 0x44));
      }
    }
  }
  return;
}



/* ===== FUN_10414da0 @ 10414da0  size=161 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[chAgree]"
//   "[wFaction]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[chAgree]""
     ""[wFaction]"" */

int __thiscall
FUN_10414da0(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6)

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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[chAgree]","0x%02x",(int)*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[wFaction]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10414e50 @ 10414e50  size=78 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[chAgree]"
//   "[wFaction]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[chAgree]""
     ""[wFaction]"" */

void __thiscall FUN_10414e50(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chAgree]","0x%02x",(int)*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[wFaction]",&DAT_11d9e0b4,
                        *(undefined2 *)(param_1 + 1));
  }
  return;
}



/* ===== FUN_104d92b0 @ 104d92b0  size=158 ===== */
// calls: CLeagueInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CLeagueInfo"

/* [RE-AUTO c0]
   calls: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo"" */

undefined4 FUN_104d92b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbdd78;
  puVar2 = (undefined4 *)CLeagueInfo__GetManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CLeagueInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bde54 & 1) == 0) {
        DAT_123bde54 = DAT_123bde54 | 1;
        FUN_104f04b0();
        FUN_11a8911f(&LAB_11c6ec40);
      }
      puVar2 = &DAT_123bde1c;
    }
  }
  if (((param_1 != -1) && (((param_1 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
     ((param_1 = param_1 - puVar2[0xc], -1 < param_1 && (param_1 < (int)puVar2[9])))) {
    iVar1 = *(int *)(puVar2[8] + (param_1 / (int)puVar2[10]) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % (int)puVar2[10]) * 4);
    }
  }
  return 0;
}



/* ===== FUN_104e4f00 @ 104e4f00  size=1419 ===== */
// calls: CNpcAtdGroupInfo::FindGroupId
// strings:
//   "_giftList"
//   "NPC_GIFT_CLASS_NAME"
//   "itemIconPathName"
//   "ItemID"
//   "slotid"
//   "IsUnLock"
//   "itemName"
//   "friendvalue"

/* [RE-AUTO c0]
   strings:
     ""_giftList""
     ""NPC_GIFT_CLASS_NAME""
     ""itemIconPathName""
     ""ItemID""
     ""slotid""
     ""IsUnLock""
     ""itemName""
     ""friendvalue"" */

void FUN_104e4f00(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 *puStack_d8;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  int local_bc [2];
  undefined4 *local_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_8c;
  int *piStack_7c;
  byte bStack_78;
  int local_74;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  uint uStack_60;
  int *piStack_5c;
  undefined1 *puStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&piStack_e8;
  local_b4 = param_1;
  local_74 = param_2;
  local_bc[0] = param_4;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_113f3640();
    iStack_ac = FUN_1115abd0();
    if ((iStack_ac != 0) && (iVar2 = thunk_FUN_1143c770(), iVar2 != 0)) {
      FUN_113f3640(*(undefined4 *)(iVar2 + 0x20));
      piStack_e8 = (int *)FUN_1115abb0();
      if ((piStack_e8 != (int *)0x0) &&
         ((iVar2 = (**(code **)(*piStack_e8 + 0xa8))(), iVar2 == 1 &&
          (iStack_b0 = *(int *)(iStack_ac + 0x2ac0), iStack_b0 != 0)))) {
        uStack_e4 = 0;
        iVar3 = FUN_113a2390(&uStack_e4);
        CNpcAtdGroupInfo__FindGroupId();
        piStack_e8 = (int *)FUN_104d88b0(unaff_ESI);
        uStack_cc = FUN_104d8bb0(unaff_ESI);
        puStack_c0 = (undefined4 *)FUN_104d8a30(unaff_ESI);
        iVar2 = iStack_c4;
        FUN_104f4330(iStack_c4);
        uStack_64 = 0;
        uStack_60 = 0;
        piStack_9c = (int *)0x0;
        uStack_98 = 0;
        if (unaff_EDI == 0) {
          cVar1 = (**(code **)(*piStack_7c + 0x10))
                            (local_74,"_giftList",&piStack_9c,(bStack_78 & 0x8f) == 10);
          if ((cVar1 != '\0') && (((byte)uStack_98 & 0x8f) == 9)) {
            (**(code **)(*piStack_9c + 0x44))(uStack_94,0,0xffffffff);
          }
        }
        if ((unaff_ESI != 0) && (piStack_d0 != (int *)0x0)) {
          piStack_d0 = (int *)0x0;
          cVar1 = (**(code **)(*piStack_7c + 0x10))
                            (local_74,"NPC_GIFT_CLASS_NAME",&uStack_64,(bStack_78 & 0x8f) == 10);
          if ((cVar1 != '\0') &&
             ((((byte)uStack_60 & 0x8f) == 6 && (piStack_d0 = piStack_5c, (uStack_60 >> 6 & 1) != 0)
              ))) {
            piStack_d0 = (int *)*piStack_5c;
          }
          if (iStack_c4 != 0) {
            cVar1 = (**(code **)(*piStack_7c + 0x10))
                              (local_74,"_giftList",&piStack_9c,(bStack_78 & 0x8f) == 10);
            if ((cVar1 != '\0') && (((byte)uStack_98 & 0x8f) == 9)) {
              (**(code **)(*piStack_9c + 0x44))(uStack_94,0,0xffffffff);
              uStack_cc = 0;
              puVar6 = *(undefined4 **)(iStack_c4 + 0x14);
              param_1 = puStack_c0;
              if (puVar6 != *(undefined4 **)(iStack_c4 + 0x18)) {
                do {
                  cVar1 = FUN_11509fa0(unaff_EDI,*puVar6,iVar2,iVar3,puVar6);
                  uStack_8c = cVar1 != '\0';
                  local_bc[0] = 0;
                  local_bc[1] = 0;
                  puVar8 = puStack_d8;
                  FUN_11a98de0(local_bc,puStack_d8,0,0);
                  uVar7 = *puVar6;
                  uStack_60 = puVar6[1];
                  piStack_5c = (int *)puVar6[2];
                  puStack_58 = (undefined1 *)puVar6[3];
                  uStack_64 = uVar7;
                  iStack_e0 = FUN_10254130(uVar7);
                  if (iStack_e0 == 0) {
                    FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                    FUN_104d1550("ItemID",0);
                    FUN_104d1550("slotid",uStack_e4);
                    FUN_104d1550(&DAT_11dbdc0c,0);
                    iVar4 = FUN_100e5b40(auStack_50);
                    FUN_104d1670("itemName",*(undefined4 *)(iVar4 + 0x14));
                    if ((puStack_40 != auStack_54) && (puStack_40 != (undefined1 *)0x0)) {
                      FUN_10c3d5d0(puStack_40);
                    }
                    FUN_104d1550("friendvalue",0);
                  }
                  else {
                    puVar6 = puVar8;
                    iVar4 = FUN_113f9300(5,uVar7,0);
                    iVar5 = FUN_113f9300(0,puVar6,0);
                    FUN_104d1670("itemIconPathName",*(undefined4 *)(iVar3 + 0xb4));
                    FUN_104d1550("ItemID",uVar7);
                    FUN_104d1550("slotid",iVar2);
                    FUN_104d15e0("IsUnLock",local_b4);
                    FUN_104d1550(&DAT_11dbdc0c,iVar4 + iVar5);
                    iVar4 = FUN_100e5b40(auStack_68);
                    FUN_104d1670("itemName",*(undefined4 *)(iVar4 + 0x14));
                    if ((puStack_58 != auStack_6c) && (puStack_58 != (undefined1 *)0x0)) {
                      FUN_10c3d5d0(puStack_58);
                    }
                    FUN_104d1550("friendvalue",local_74);
                  }
                  (**(code **)(*piStack_d0 + 0x3c))(uStack_c8,&piStack_e8);
                  FUN_104d7c10();
                  puVar6 = puVar6 + 4;
                  param_1 = puStack_c0;
                } while (puVar6 != *(undefined4 **)(iStack_c4 + 0x18));
              }
            }
            if (((uint)param_1[1] >> 6 & 1) != 0) {
              (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
              *param_1 = 0;
            }
            param_1[1] = 2;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_104d7c10();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10521420 @ 10521420  size=2756 ===== */
// strings:
//   "InitModel"
//   "GetSoulStoneData"
//   "GetAttrUpData"
//   "Reset"
//   "StageUp"
//   "UnlockStage"
//   "LearnAttr"
//   "GetItemName"
//   "CloseUI"
//   "SetAvatarFrameData"
//   "SendSoulBeastSocialAction"
//   "GetSoulBeastSocialActionData"
//   "UnLockBeast"
//   "GetSoulBeastConditionArr"
//   "GetSoulBeastData"
//   "GetSoulBeastDetailData"
//   "GetSoulBeastFace"
//   "GetSoulBeastFood"
//   "OnlyOneFeedTips"
//   "FeedSoulBeast"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""GetSoulStoneData""
     ""GetAttrUpData""
     ""Reset""
     ""StageUp""
     ""UnlockStage""
     ""LearnAttr""
     ""GetItemName""
     ""CloseUI""
     ""SetAvatarFrameData"" */

void __fastcall FUN_10521420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  code *pcStack_274;
  char *pcStack_270;
  code **ppcStack_26c;
  code ***pppcStack_268;
  code *pcStack_264;
  code **ppcStack_260;
  code ***pppcStack_25c;
  code ***pppcStack_258;
  code **ppcStack_254;
  code **ppcStack_250;
  code ***pppcStack_24c;
  code ***pppcStack_248;
  code ***pppcStack_244;
  code ***pppcStack_240;
  code ***pppcStack_23c;
  code ***pppcStack_238;
  code ***pppcStack_234;
  code ***pppcStack_230;
  code ***pppcStack_22c;
  code ***pppcStack_228;
  code ***pppcStack_224;
  code ***pppcStack_220;
  code ***pppcStack_21c;
  code ***pppcStack_218;
  code ***pppcStack_214;
  code ***pppcStack_210;
  code ***pppcStack_20c;
  code ***pppcStack_208;
  code ***pppcStack_204;
  code ***pppcStack_200;
  code ***pppcStack_1fc;
  code ***pppcStack_1f8;
  code ***pppcStack_1f4;
  code ***pppcStack_1f0;
  code ***pppcStack_1ec;
  code ***pppcStack_1e8;
  code ***pppcStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  code ***pppcStack_1d8;
  code ***pppcStack_1d4;
  code ***pppcStack_1d0;
  code ***pppcStack_1cc;
  code ***pppcStack_1c8;
  code ***pppcStack_1c4;
  code ***pppcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  code ***pppcStack_1b0;
  code ***pppcStack_1ac;
  code ***pppcStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  code ***pppcStack_19c;
  undefined4 ***pppuStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
  undefined4 ***pppuStack_17c;
  code ***pppcStack_178;
  code ***pppcStack_174;
  code ***pppcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  undefined4 ***pppuStack_164;
  undefined4 ***pppuStack_160;
  code ***pppcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  code ***pppcStack_14c;
  code ***pppcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  code ***pppcStack_138;
  code ***pppcStack_134;
  code ***pppcStack_130;
  code ***pppcStack_12c;
  undefined4 ***pppuStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  undefined4 ***pppuStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  code ***pppcStack_fc;
  code ***pppcStack_f8;
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined4 ***pppuStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  code ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  undefined4 ***pppuStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***pppuStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10521454;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10521f00;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10521465;
  FUN_10527090();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x1052147b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dc0568;
  pppuStack_40 = (undefined4 ***)0x11dc0558;
  pppuStack_44 = (undefined4 ***)0x1052149b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_10522000;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x105214ac;
  FUN_10527090();
  if (((undefined4 ****)pppcStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppcStack_30 != (undefined4 ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined4 ***)0x105214c2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppuStack_44;
  pppcStack_4c = (code ***)0x11dc0555;
  pppuStack_50 = (undefined4 ***)0x11dc0548;
  pppuStack_54 = (undefined4 ***)0x105214e2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)FUN_105253b0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppuStack_5c = (undefined4 ***)0x105214f3;
  FUN_10527090();
  if (((undefined4 ****)pppuStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x10521509;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppuStack_54;
  pppuStack_5c = (undefined4 ***)0x11dc05a5;
  pppcStack_60 = (code ***)0x11dc05a0;
  pppcStack_64 = (code ***)0x10521529;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&LAB_105256e0;
  pppcStack_68 = (code ***)&pppuStack_5c;
  pppuStack_6c = (undefined4 ***)0x1052153a;
  FUN_10527090();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    pppcStack_70 = (code ***)0x10521550;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_6c = (undefined4 ***)0x11dc059f;
  pppcStack_70 = (code ***)0x11dc0598;
  pppcStack_74 = (code ***)0x10521570;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)&LAB_10525710;
  pppuStack_78 = &pppuStack_6c;
  pppcStack_7c = (code ***)0x10521581;
  FUN_10527090();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10521597;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dc0597;
  pppcStack_80 = (code ***)0x11dc058c;
  pppcStack_84 = (code ***)0x105215b7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10525740;
  pppuStack_88 = &pppcStack_7c;
  pppcStack_8c = (code ***)0x105215c8;
  FUN_10527090();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppuStack_90 = (undefined4 ***)0x105215de;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dc0589;
  pppuStack_90 = (undefined4 ***)0x11dc0580;
  pppuStack_94 = (undefined4 ***)0x105215fe;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)FUN_105257a0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1052160f;
  FUN_10527090();
  if (((undefined4 ****)pppcStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppcStack_80 != (undefined4 ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x10521625;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppuStack_94;
  pppcStack_9c = (code ***)0x11dc05fb;
  pppcStack_a0 = (code ***)0x11dc05f0;
  pppcStack_a4 = (code ***)0x10521645;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10525850;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppuStack_ac = (undefined4 ***)0x10521656;
  FUN_10527090();
  if (((code ****)pppuStack_90 != &pppcStack_a4) && ((code ****)pppuStack_90 != (code ****)0x0)) {
    pppuStack_ac = pppuStack_90;
    pppcStack_b0 = (code ***)0x1052166c;
    FUN_10c3d5d0();
  }
  pppuStack_94 = &pppcStack_a4;
  pppuStack_ac = (undefined4 ***)0x11dbf4bb;
  pppcStack_b0 = (code ***)0x11dbf4b4;
  pppcStack_b4 = (code ***)0x1052168c;
  pppuStack_90 = pppuStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)&LAB_10525cd0;
  pppcStack_b8 = (code ***)&pppuStack_ac;
  pppcStack_bc = (code ***)0x1052169d;
  FUN_10527090();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x105216b3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dbf5a6;
  pppcStack_c0 = (code ***)0x11dbf594;
  pppcStack_c4 = (code ***)0x105216d3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_10525e00;
  pppuStack_c8 = &pppcStack_bc;
  pppcStack_cc = (code ***)0x105216e4;
  FUN_10527090();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x105216fa;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dc05ed;
  pppcStack_d0 = (code ***)0x11dc05d4;
  pppcStack_d4 = (code ***)0x1052171a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_105238d0;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x1052172b;
  FUN_10527090();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x10521741;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dc05d0;
  pppcStack_e0 = (code ***)0x11dc05b4;
  pppcStack_e4 = (code ***)0x10521761;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_105239c0;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x10521772;
  FUN_10527090();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppuStack_f0 = (undefined4 ***)0x10521788;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dc05b3;
  pppuStack_f0 = (undefined4 ***)0x11dc05a8;
  pppuStack_f4 = (undefined4 ***)0x105217a8;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppuStack_f4 = (undefined4 ***)FUN_10523e30;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x105217b9;
  FUN_10527090();
  if (((undefined4 ****)pppcStack_e0 != &pppuStack_f4) &&
     ((undefined4 ****)pppcStack_e0 != (undefined4 ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x105217cf;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppuStack_f4;
  pppcStack_fc = (code ***)0x11dc0654;
  pppcStack_100 = (code ***)0x11dc063c;
  pppcStack_104 = (code ***)0x105217ef;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)data__SoulBeastUnlockMo_10523e90;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppuStack_10c = (undefined4 ***)0x10521800;
  FUN_10527090();
  if (((code ****)pppuStack_f0 != &pppcStack_104) && ((code ****)pppuStack_f0 != (code ****)0x0)) {
    pppuStack_10c = pppuStack_f0;
    pppcStack_110 = (code ***)0x10521816;
    FUN_10c3d5d0();
  }
  pppuStack_f4 = &pppcStack_104;
  pppuStack_10c = (undefined4 ***)0x11dc0638;
  pppcStack_110 = (code ***)0x11dc0628;
  pppcStack_114 = (code ***)0x10521836;
  pppuStack_f0 = pppuStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)&LAB_105242c0;
  pppcStack_118 = (code ***)&pppuStack_10c;
  pppcStack_11c = (code ***)0x10521847;
  FUN_10527090();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x1052185d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dc0626;
  pppcStack_120 = (code ***)0x11dc0610;
  pppcStack_124 = (code ***)0x1052187d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)data__SoulBeastFoodMo_105245e0;
  pppuStack_128 = &pppcStack_11c;
  pppcStack_12c = (code ***)0x1052188e;
  FUN_10527090();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x105218a4;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dc060c;
  pppcStack_130 = (code ***)0x11dc05fc;
  pppcStack_134 = (code ***)0x105218c4;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)data__SoulBeastFaceMo_10524c10;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x105218d5;
  FUN_10527090();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x105218eb;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dc0698;
  pppcStack_140 = (code ***)0x11dc0688;
  pppcStack_144 = (code ***)0x1052190b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)data__SoulBeastFoodMo_10524f20;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x1052191c;
  FUN_10527090();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x10521932;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dc0687;
  pppcStack_150 = (code ***)0x11dc0678;
  pppcStack_154 = (code ***)0x10521952;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_10525190;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x10521963;
  FUN_10527090();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppuStack_160 = (undefined4 ***)0x10521979;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dc0675;
  pppuStack_160 = (undefined4 ***)0x11dc0668;
  pppuStack_164 = (undefined4 ***)0x10521999;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppuStack_164 = (undefined4 ***)FUN_10525200;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x105219aa;
  FUN_10527090();
  if (((undefined4 ****)pppcStack_150 != &pppuStack_164) &&
     ((undefined4 ****)pppcStack_150 != (undefined4 ****)0x0)) {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x105219c0;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppuStack_164;
  pppcStack_16c = (code ***)0x11dc0665;
  pppcStack_170 = (code ***)0x11dc0658;
  pppcStack_174 = (code ***)0x105219e0;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_10525270;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppuStack_17c = (undefined4 ***)0x105219f1;
  FUN_10527090();
  if (((code ****)pppuStack_160 != &pppcStack_174) && ((code ****)pppuStack_160 != (code ****)0x0))
  {
    pppuStack_17c = pppuStack_160;
    pppcStack_180 = (code ***)0x10521a07;
    FUN_10c3d5d0();
  }
  pppuStack_164 = &pppcStack_174;
  pppuStack_17c = (undefined4 ***)0x11dc06e9;
  pppcStack_180 = (code ***)0x11dc06d8;
  pppcStack_184 = (code ***)0x10521a27;
  pppuStack_160 = pppuStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)&LAB_10525310;
  pppcStack_188 = (code ***)&pppuStack_17c;
  pppcStack_18c = (code ***)0x10521a38;
  FUN_10527090();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x10521a4e;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11dc06d4;
  pppcStack_190 = (code ***)0x11dc06c0;
  pppcStack_194 = (code ***)0x10521a6e;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_105252c0;
  pppuStack_198 = &pppcStack_18c;
  pppcStack_19c = (code ***)0x10521a7f;
  FUN_10527090();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x10521a95;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11dc06bd;
  pppcStack_1a0 = (code ***)0x11dc06ac;
  pppcStack_1a4 = (code ***)0x10521ab5;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_10525340;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x10521ac6;
  FUN_10527090();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppcStack_1b0 = (code ***)0x10521adc;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11dc06aa;
  pppcStack_1b0 = (code ***)0x11dc069c;
  pppcStack_1b4 = (code ***)0x10521afc;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppcStack_1b4 = (code ***)FUN_10524ed0;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x10521b0d;
  FUN_10527090();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pppcStack_1c0 = (code ***)0x10521b23;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dc0755;
  pppcStack_1c0 = (code ***)0x11dc0744;
  pppcStack_1c4 = (code ***)0x10521b43;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppcStack_1c4 = (code ***)FUN_10526180;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppcStack_1cc = (code ***)0x10521b54;
  FUN_10527090();
  if (((code ****)pppcStack_1b0 != &pppcStack_1c4) && ((code ****)pppcStack_1b0 != (code ****)0x0))
  {
    pppcStack_1cc = pppcStack_1b0;
    pppcStack_1d0 = (code ***)0x10521b6a;
    FUN_10c3d5d0();
  }
  pppcStack_1b4 = (code ***)&pppcStack_1c4;
  pppcStack_1cc = (code ***)0x11dc0742;
  pppcStack_1d0 = (code ***)0x11dc0734;
  pppcStack_1d4 = (code ***)0x10521b8a;
  pppcStack_1b0 = pppcStack_1b4;
  FUN_100b62c0();
  pppcStack_1d4 = (code ***)FUN_10526220;
  pppcStack_1d8 = (code ***)&pppcStack_1cc;
  pppcStack_1dc = (code ***)0x10521b9b;
  FUN_10527090();
  if (((code ****)pppcStack_1c0 != &pppcStack_1d4) && ((code ****)pppcStack_1c0 != (code ****)0x0))
  {
    pppcStack_1dc = pppcStack_1c0;
    pppcStack_1e0 = (code ***)0x10521bb1;
    FUN_10c3d5d0();
  }
  pppcStack_1c4 = (code ***)&pppcStack_1d4;
  pppcStack_1dc = (code ***)0x11dc0731;
  pppcStack_1e0 = (code ***)0x11dc0710;
  pppcStack_1e4 = (code ***)0x10521bd1;
  pppcStack_1c0 = pppcStack_1c4;
  FUN_100b62c0();
  pppcStack_1e4 = (code ***)FUN_10526380;
  pppcStack_1e8 = (code ***)&pppcStack_1dc;
  pppcStack_1ec = (code ***)0x10521be2;
  FUN_10527090();
  if (((code ****)pppcStack_1d0 != &pppcStack_1e4) && ((code ****)pppcStack_1d0 != (code ****)0x0))
  {
    pppcStack_1ec = pppcStack_1d0;
    pppcStack_1f0 = (code ***)0x10521bf8;
    FUN_10c3d5d0();
  }
  pppcStack_1d4 = (code ***)&pppcStack_1e4;
  pppcStack_1ec = (code ***)0x11dc070c;
  pppcStack_1f0 = (code ***)0x11dc06ec;
  pppcStack_1f4 = (code ***)0x10521c18;
  pppcStack_1d0 = pppcStack_1d4;
  FUN_100b62c0();
  pppcStack_1f4 = (code ***)FUN_10526430;
  pppcStack_1f8 = (code ***)&pppcStack_1ec;
  pppcStack_1fc = (code ***)0x10521c29;
  FUN_10527090();
  if (((code ****)pppcStack_1e0 != &pppcStack_1f4) && ((code ****)pppcStack_1e0 != (code ****)0x0))
  {
    pppcStack_1fc = pppcStack_1e0;
    pppcStack_200 = (code ***)0x10521c3f;
    FUN_10c3d5d0();
  }
  pppcStack_1e4 = (code ***)&pppcStack_1f4;
  pppcStack_1fc = (code ***)0x11dc079e;
  pppcStack_200 = (code ***)0x11dc0790;
  pppcStack_204 = (code ***)0x10521c5f;
  pppcStack_1e0 = pppcStack_1e4;
  FUN_100b62c0();
  pppcStack_204 = (code ***)FUN_10526520;
  pppcStack_208 = (code ***)&pppcStack_1fc;
  pppcStack_20c = (code ***)0x10521c70;
  FUN_10527090();
  if (((code ****)pppcStack_1f0 != &pppcStack_204) && ((code ****)pppcStack_1f0 != (code ****)0x0))
  {
    pppcStack_20c = pppcStack_1f0;
    pppcStack_210 = (code ***)0x10521c86;
    FUN_10c3d5d0();
  }
  pppcStack_1f4 = (code ***)&pppcStack_204;
  pppcStack_20c = (code ***)0x11dc078f;
  pppcStack_210 = (code ***)0x11dc077c;
  pppcStack_214 = (code ***)0x10521ca6;
  pppcStack_1f0 = pppcStack_1f4;
  FUN_100b62c0();
  pppcStack_214 = (code ***)FUN_105264e0;
  pppcStack_218 = (code ***)&pppcStack_20c;
  pppcStack_21c = (code ***)0x10521cb7;
  FUN_10527090();
  if (((code ****)pppcStack_200 != &pppcStack_214) && ((code ****)pppcStack_200 != (code ****)0x0))
  {
    pppcStack_21c = pppcStack_200;
    pppcStack_220 = (code ***)0x10521ccd;
    FUN_10c3d5d0();
  }
  pppcStack_204 = (code ***)&pppcStack_214;
  pppcStack_21c = (code ***)0x11dc0779;
  pppcStack_220 = (code ***)0x11dc076c;
  pppcStack_224 = (code ***)0x10521ced;
  pppcStack_200 = pppcStack_204;
  FUN_100b62c0();
  pppcStack_224 = (code ***)FUN_10526750;
  pppcStack_228 = (code ***)&pppcStack_21c;
  pppcStack_22c = (code ***)0x10521cfe;
  FUN_10527090();
  if (((code ****)pppcStack_210 != &pppcStack_224) && ((code ****)pppcStack_210 != (code ****)0x0))
  {
    pppcStack_22c = pppcStack_210;
    pppcStack_230 = (code ***)0x10521d14;
    FUN_10c3d5d0();
  }
  pppcStack_214 = (code ***)&pppcStack_224;
  pppcStack_22c = (code ***)0x11dc0769;
  pppcStack_230 = (code ***)0x11dc0758;
  pppcStack_234 = (code ***)0x10521d34;
  pppcStack_210 = pppcStack_214;
  FUN_100b62c0();
  pppcStack_234 = (code ***)FUN_105265d0;
  pppcStack_238 = (code ***)&pppcStack_22c;
  pppcStack_23c = (code ***)0x10521d45;
  FUN_10527090();
  if (((code ****)pppcStack_220 != &pppcStack_234) && ((code ****)pppcStack_220 != (code ****)0x0))
  {
    pppcStack_23c = pppcStack_220;
    pppcStack_240 = (code ***)0x10521d5b;
    FUN_10c3d5d0();
  }
  pppcStack_224 = (code ***)&pppcStack_234;
  pppcStack_23c = (code ***)0x11dc07d8;
  pppcStack_240 = (code ***)0x11dc07c8;
  pppcStack_244 = (code ***)0x10521d7b;
  pppcStack_220 = pppcStack_224;
  FUN_100b62c0();
  pppcStack_244 = (code ***)FUN_105268d0;
  pppcStack_248 = (code ***)&pppcStack_23c;
  pppcStack_24c = (code ***)0x10521d8c;
  FUN_10527090();
  if (((code ****)pppcStack_230 != &pppcStack_244) && ((code ****)pppcStack_230 != (code ****)0x0))
  {
    pppcStack_24c = pppcStack_230;
    ppcStack_250 = (code **)0x10521da2;
    FUN_10c3d5d0();
  }
  pppcStack_234 = (code ***)&pppcStack_244;
  pppcStack_24c = (code ***)0x11dc07c6;
  ppcStack_250 = (code **)0x11dc07bc;
  ppcStack_254 = (code **)0x10521dc2;
  pppcStack_230 = pppcStack_234;
  FUN_100b62c0();
  ppcStack_254 = (code **)FUN_10526ae0;
  pppcStack_258 = (code ***)&pppcStack_24c;
  pppcStack_25c = (code ***)0x10521dd3;
  FUN_10527090();
  if ((pppcStack_240 != &ppcStack_254) && (pppcStack_240 != (code ***)0x0)) {
    pppcStack_25c = pppcStack_240;
    ppcStack_260 = (code **)0x10521de9;
    FUN_10c3d5d0();
  }
  pppcStack_244 = &ppcStack_254;
  pppcStack_25c = (code ***)0x11dc07bb;
  ppcStack_260 = (code **)0x11dc07b4;
  pcStack_264 = (code *)0x10521e09;
  pppcStack_240 = pppcStack_244;
  FUN_100b62c0();
  pcStack_264 = FUN_10526de0;
  pppcStack_268 = (code ***)&pppcStack_25c;
  ppcStack_26c = (code **)0x10521e1a;
  FUN_10527090();
  if ((ppcStack_250 != &pcStack_264) && (ppcStack_250 != (code **)0x0)) {
    ppcStack_26c = ppcStack_250;
    pcStack_270 = (char *)0x10521e30;
    FUN_10c3d5d0();
  }
  ppcStack_254 = &pcStack_264;
  ppcStack_26c = (code **)0x11dc07b1;
  pcStack_270 = "IsAchieveMaxLevel";
  pcStack_274 = (code *)0x10521e50;
  ppcStack_250 = ppcStack_254;
  FUN_100b62c0();
  pcStack_274 = FUN_10526e90;
  FUN_10527090(&ppcStack_26c);
  if ((ppcStack_260 != &pcStack_274) && (ppcStack_260 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_260);
  }
  uVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("gfx_draw_only");
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("gfx_draw");
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_1052a840();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107eca30 @ 107eca30  size=3567 ===== */
// strings:
//   "_getPlayerTasksList"
//   "_getNpcTaskInfo"
//   "_getNpcTaskInfoWithItem"
//   "_getPlayerTasksChapter"
//   "_getPlayerTasksTaskGroupDetail"
//   "_getNpcFriendList"
//   "_getTaskTimeLeftFunc"
//   "GetNpcOrgInfo"
//   "RefreshPlayerTaskDlg"
//   "OnResetTask"
//   "RefreshNpcDescrbiePanel"
//   "PlayerTaskListClick"
//   "OnAcceptTask"
//   "OnGiveupTask"
//   "OnPlayerShareTask"
//   "OnPlayerGiveupTask"
//   "OnCompleteNpcTaskDlg"
//   "OnCancelNpcTaskDlg"
//   "NpcTaskAwardClick"
//   "OnPlayerUnTrackOrTrackTask"

/* [RE-AUTO c0]
   strings:
     ""_getPlayerTasksList""
     ""_getNpcTaskInfo""
     ""_getNpcTaskInfoWithItem""
     ""_getPlayerTasksChapter""
     ""_getPlayerTasksTaskGroupDetail""
     ""_getNpcFriendList""
     ""_getTaskTimeLeftFunc""
     ""GetNpcOrgInfo""
     ""RefreshPlayerTaskDlg""
     ""OnResetTask"" */

void __thiscall
FUN_107eca30(code ******param_1,undefined4 param_2,code ******param_3,undefined4 param_4,
            code ******param_5,int param_6)

{
  code **ppcStack_2f8;
  char *pcStack_2f4;
  code *****pppppcStack_2f0;
  code **ppcStack_2ec;
  undefined1 *puStack_2e8;
  code ***pppcStack_2e4;
  code *****pppppcStack_2e0;
  undefined1 **ppuStack_2dc;
  code *pcStack_2d8;
  code ****ppppcStack_2d4;
  code *****pppppcStack_2d0;
  undefined1 **ppuStack_2cc;
  code *pcStack_2c8;
  char *pcStack_2c4;
  code *****pppppcStack_2c0;
  code *****pppppcStack_2bc;
  code *pcStack_2b8;
  char *pcStack_2b4;
  code *****pppppcStack_2b0;
  code *****pppppcStack_2ac;
  undefined1 *puStack_2a8;
  char *pcStack_2a4;
  code *****pppppcStack_2a0;
  code *****pppppcStack_29c;
  undefined1 *puStack_298;
  char *pcStack_294;
  code *****pppppcStack_290;
  code *****pppppcStack_28c;
  code ****ppppcStack_288;
  char *pcStack_284;
  code *****pppppcStack_280;
  code *****pppppcStack_27c;
  code ****ppppcStack_278;
  char *pcStack_274;
  code *****pppppcStack_270;
  code *****pppppcStack_26c;
  code ****ppppcStack_268;
  char *pcStack_264;
  code *****pppppcStack_260;
  code *****pppppcStack_25c;
  code ****ppppcStack_258;
  char *pcStack_254;
  code *****pppppcStack_250;
  code *****pppppcStack_24c;
  code ****ppppcStack_248;
  char *pcStack_244;
  code *****pppppcStack_240;
  code *****pppppcStack_23c;
  code ****ppppcStack_238;
  char *pcStack_234;
  code *****pppppcStack_230;
  code *****pppppcStack_22c;
  code ****ppppcStack_228;
  char *pcStack_224;
  code *****pppppcStack_220;
  code *****pppppcStack_21c;
  code ****ppppcStack_218;
  char *pcStack_214;
  code *****pppppcStack_210;
  code *****pppppcStack_20c;
  code ****ppppcStack_208;
  char *pcStack_204;
  code *****pppppcStack_200;
  undefined4 *****pppppuStack_1fc;
  code ****ppppcStack_1f8;
  char *pcStack_1f4;
  code *****pppppcStack_1f0;
  code *****pppppcStack_1ec;
  code ****ppppcStack_1e8;
  char *pcStack_1e4;
  code *****pppppcStack_1e0;
  code *****pppppcStack_1dc;
  code ****ppppcStack_1d8;
  char *pcStack_1d4;
  code *****pppppcStack_1d0;
  code *****pppppcStack_1cc;
  undefined4 ****ppppuStack_1c8;
  char *pcStack_1c4;
  undefined4 *****pppppuStack_1c0;
  code *****pppppcStack_1bc;
  code *****pppppcStack_1b8;
  undefined *puStack_1b4;
  char *****pppppcStack_1b0;
  char *****pppppcStack_1ac;
  code *****pppppcStack_1a8;
  code *****pppppcStack_1a4;
  code *****pppppcStack_1a0;
  code *****pppppcStack_19c;
  code *****pppppcStack_198;
  undefined4 *****pppppuStack_194;
  code *****pppppcStack_190;
  code *****pppppcStack_18c;
  code *****pppppcStack_188;
  undefined4 *****pppppuStack_184;
  code *****pppppcStack_180;
  undefined4 *****pppppuStack_17c;
  char *pcStack_178;
  code *****pppppcStack_174;
  code *****pppppcStack_170;
  code *****pppppcStack_16c;
  char *****pppppcStack_168;
  char *pcStack_164;
  code *****pppppcStack_160;
  code ***pppcStack_15c;
  code *****pppppcStack_158;
  code *****pppppcStack_154;
  char *pcStack_150;
  undefined4 *****pppppuStack_14c;
  code *****pppppcStack_148;
  code *****pppppcStack_144;
  code *pcStack_140;
  char *pcStack_13c;
  code *****pppppcStack_138;
  code *****pppppcStack_134;
  code *****pppppcStack_130;
  char *pcStack_12c;
  code *****pppppcStack_128;
  code **ppcStack_124;
  code *****pppppcStack_120;
  code *****pppppcStack_11c;
  code *****pppppcStack_118;
  code **ppcStack_114;
  undefined *puStack_110;
  undefined4 *****pppppuStack_10c;
  code *****pppppcStack_108;
  undefined1 **ppuStack_104;
  undefined *puStack_100;
  char *pcStack_fc;
  code *****pppppcStack_f8;
  code *****pppppcStack_f4;
  code *pcStack_f0;
  char *pcStack_ec;
  code *****pppppcStack_e8;
  code *****pppppcStack_e4;
  code *pcStack_e0;
  char *pcStack_dc;
  code *****pppppcStack_d8;
  code *****pppppcStack_d4;
  undefined1 *puStack_d0;
  char *pcStack_cc;
  code *****pppppcStack_c8;
  code *****pppppcStack_c4;
  code ****ppppcStack_c0;
  char *pcStack_bc;
  code *****pppppcStack_b8;
  code *****pppppcStack_b4;
  code ****ppppcStack_b0;
  char *pcStack_ac;
  code *****pppppcStack_a8;
  code *****pppppcStack_a4;
  code ****ppppcStack_a0;
  char *pcStack_9c;
  code *****pppppcStack_98;
  code *****pppppcStack_94;
  code ****ppppcStack_90;
  char *pcStack_8c;
  code *****pppppcStack_88;
  code *****pppppcStack_84;
  code ****ppppcStack_80;
  char *pcStack_7c;
  code *****pppppcStack_78;
  code *****pppppcStack_74;
  code ****ppppcStack_70;
  char *pcStack_6c;
  code *****pppppcStack_68;
  code *****pppppcStack_64;
  code ****ppppcStack_60;
  char *pcStack_5c;
  code *****pppppcStack_58;
  code *****pppppcStack_54;
  code *****pppppcStack_44;
  code ****local_40;
  code ****local_3c;
  code *****local_38;
  code *****local_34;
  code ****local_30;
  undefined4 uStack_2c;
  code *****local_28;
  code *****pppppcStack_24;
  code *****pppppcStack_18;
  code *****pppppcStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&pppppcStack_44;
  local_28 = (code *****)param_3;
  if (param_6 == 1) {
    local_3c = (code ****)param_5[1];
    local_34 = param_5[3];
    local_38 = param_5[2];
    local_30 = (code ****)param_5[4];
    local_40 = (code ****)0x0;
    if (((uint)local_3c >> 6 & 1) != 0) {
      local_40 = (code ****)*param_5;
      pppppcStack_58 = &local_40;
      pcStack_5c = (char *)0x107eca98;
      pppppcStack_54 = local_38;
      (*(code *)(*local_40)[1])();
    }
    if ((DAT_1202e818 == 0) || (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
      pppppcStack_54 = (code *****)param_5;
      pppppcStack_58 = (code *****)0x107ecac1;
      FUN_104f42b0();
      pppppcStack_58 = (code *****)FUN_107ee600;
      pcStack_5c = "_getPlayerTasksList";
      DAT_123bb9a0 = uStack_2c;
      DAT_123bb96a = 1;
      param_1[0x16] = (code *****)0x0;
      param_1[0x17] = (code *****)0x0;
      param_1[0x18] = (code *****)0x0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      ppppcStack_60 = (code ****)0x107ecb00;
      FUN_104d13b0();
      ppppcStack_60 = (code ****)FUN_107eef70;
      pppppcStack_64 = (code *****)0x11dca1d0;
      pppppcStack_68 = (code *****)0x107ecb15;
      FUN_104d13b0();
      pppppcStack_68 = (code *****)&DAT_107f0260;
      pcStack_6c = "_getNpcTaskInfoWithItem";
      ppppcStack_70 = (code ****)0x107ecb2a;
      FUN_104d13b0();
      ppppcStack_70 = (code ****)FUN_107f07d0;
      pppppcStack_74 = (code *****)0x11dca15c;
      pppppcStack_78 = (code *****)0x107ecb3f;
      FUN_104d13b0();
      pppppcStack_78 = (code *****)FUN_107f0270;
      pcStack_7c = "_getPlayerTasksTaskGroupDetail";
      ppppcStack_80 = (code ****)0x107ecb54;
      FUN_104d13b0();
      ppppcStack_80 = (code ****)FUN_107f0840;
      pppppcStack_84 = (code *****)0x11dca18c;
      pppppcStack_88 = (code *****)0x107ecb69;
      FUN_104d13b0();
      pppppcStack_88 = (code *****)FUN_107edaa0;
      pcStack_8c = "_getTaskTimeLeftFunc";
      ppppcStack_90 = (code ****)0x107ecb7e;
      FUN_104d13b0();
      pppppcStack_18 = (code *****)&local_28;
      pppppcStack_58 = (code *****)0x11dca24d;
      pcStack_5c = "GetNpcOrgInfo";
      ppppcStack_60 = (code ****)0x107ecb9e;
      pppppcStack_14 = pppppcStack_18;
      FUN_100b62c0();
      ppppcStack_60 = (code ****)FUN_107f4680;
      pppppcStack_64 = &local_30;
      pppppcStack_68 = (code *****)0x107ecbaf;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_24 != &local_38) &&
         ((code ******)pppppcStack_24 != (code ******)0x0)) {
        pppppcStack_68 = pppppcStack_24;
        pcStack_6c = (char *)0x107ecbc5;
        FUN_10c3d5d0();
      }
      local_28 = (code *****)&local_38;
      pppppcStack_68 = (code *****)0x11dca288;
      pcStack_6c = "RefreshPlayerTaskDlg";
      ppppcStack_70 = (code ****)0x107ecbe5;
      pppppcStack_24 = local_28;
      FUN_100b62c0();
      ppppcStack_70 = (code ****)&DAT_107f1d40;
      pppppcStack_74 = &local_40;
      pppppcStack_78 = (code *****)0x107ecbf6;
      FUN_107ff5b0();
      if ((local_34 != (code *****)&stack0xffffffb8) && ((code ******)local_34 != (code ******)0x0))
      {
        pppppcStack_78 = local_34;
        pcStack_7c = (char *)0x107ecc0c;
        FUN_10c3d5d0();
      }
      local_38 = (code *****)&stack0xffffffb8;
      pppppcStack_78 = (code *****)0x11dca273;
      pcStack_7c = "OnResetTask";
      ppppcStack_80 = (code ****)0x107ecc2c;
      local_34 = local_38;
      FUN_100b62c0();
      ppppcStack_80 = (code ****)&LAB_107f1ef0;
      pppppcStack_84 = (code *****)&stack0xffffffb0;
      pppppcStack_88 = (code *****)0x107ecc3d;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_44 != &pppppcStack_58) &&
         ((code ******)pppppcStack_44 != (code ******)0x0)) {
        pppppcStack_88 = pppppcStack_44;
        pcStack_8c = (char *)0x107ecc53;
        FUN_10c3d5d0();
      }
      pppppcStack_44 = (code *****)&pppppcStack_58;
      pppppcStack_88 = (code *****)0x11dca21f;
      pcStack_8c = "RefreshNpcDescrbiePanel";
      ppppcStack_90 = (code ****)0x107ecc73;
      FUN_100b62c0();
      ppppcStack_90 = (code ****)FUN_107f1c00;
      pppppcStack_94 = &ppppcStack_60;
      pppppcStack_98 = (code *****)0x107ecc84;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_54 != &pppppcStack_68) &&
         ((code ******)pppppcStack_54 != (code ******)0x0)) {
        pppppcStack_98 = pppppcStack_54;
        pcStack_9c = (char *)0x107ecc9a;
        FUN_10c3d5d0();
      }
      pppppcStack_58 = (code *****)&pppppcStack_68;
      pppppcStack_98 = (code *****)0x11dca207;
      pcStack_9c = "PlayerTaskListClick";
      ppppcStack_a0 = (code ****)0x107eccba;
      pppppcStack_54 = pppppcStack_58;
      FUN_100b62c0();
      ppppcStack_a0 = (code ****)FUN_107f1d50;
      pppppcStack_a4 = &ppppcStack_70;
      pppppcStack_a8 = (code *****)0x107ecccb;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_64 != &pppppcStack_78) &&
         ((code ******)pppppcStack_64 != (code ******)0x0)) {
        pppppcStack_a8 = pppppcStack_64;
        pcStack_ac = (char *)0x107ecce1;
        FUN_10c3d5d0();
      }
      pppppcStack_68 = (code *****)&pppppcStack_78;
      pppppcStack_a8 = (code *****)0x11dca23c;
      pcStack_ac = "OnAcceptTask";
      ppppcStack_b0 = (code ****)0x107ecd01;
      pppppcStack_64 = pppppcStack_68;
      FUN_100b62c0();
      ppppcStack_b0 = (code ****)FUN_107f1da0;
      pppppcStack_b4 = &ppppcStack_80;
      pppppcStack_b8 = (code *****)0x107ecd12;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_74 != &pppppcStack_88) &&
         ((code ******)pppppcStack_74 != (code ******)0x0)) {
        pppppcStack_b8 = pppppcStack_74;
        pcStack_bc = (char *)0x107ecd28;
        FUN_10c3d5d0();
      }
      pppppcStack_78 = (code *****)&pppppcStack_88;
      pppppcStack_b8 = (code *****)0x11dca22c;
      pcStack_bc = "OnGiveupTask";
      ppppcStack_c0 = (code ****)0x107ecd48;
      pppppcStack_74 = pppppcStack_78;
      FUN_100b62c0();
      ppppcStack_c0 = (code ****)&LAB_107f1e70;
      pppppcStack_c4 = &ppppcStack_90;
      pppppcStack_c8 = (code *****)0x107ecd59;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_84 != &pppppcStack_98) &&
         ((code ******)pppppcStack_84 != (code ******)0x0)) {
        pppppcStack_c8 = pppppcStack_84;
        pcStack_cc = (char *)0x107ecd6f;
        FUN_10c3d5d0();
      }
      pppppcStack_88 = (code *****)&pppppcStack_98;
      pppppcStack_c8 = (code *****)0x11dca315;
      pcStack_cc = "OnPlayerShareTask";
      puStack_d0 = (undefined1 *)0x107ecd8f;
      pppppcStack_84 = pppppcStack_88;
      FUN_100b62c0();
      puStack_d0 = &LAB_107f1eb0;
      pppppcStack_d4 = &ppppcStack_a0;
      pppppcStack_d8 = (code *****)0x107ecda0;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_94 != &pppppcStack_a8) &&
         ((code ******)pppppcStack_94 != (code ******)0x0)) {
        pppppcStack_d8 = pppppcStack_94;
        pcStack_dc = (char *)0x107ecdb6;
        FUN_10c3d5d0();
      }
      pppppcStack_98 = (code *****)&pppppcStack_a8;
      pppppcStack_d8 = (code *****)0x11dca302;
      pcStack_dc = "OnPlayerGiveupTask";
      pcStack_e0 = (code *)0x107ecdd6;
      pppppcStack_94 = pppppcStack_98;
      FUN_100b62c0();
      pcStack_e0 = FUN_107f1f30;
      pppppcStack_e4 = &ppppcStack_b0;
      pppppcStack_e8 = (code *****)0x107ecde7;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_a4 != &pppppcStack_b8) &&
         ((code ******)pppppcStack_a4 != (code ******)0x0)) {
        pppppcStack_e8 = pppppcStack_a4;
        pcStack_ec = (char *)0x107ecdfd;
        FUN_10c3d5d0();
      }
      pppppcStack_a8 = (code *****)&pppppcStack_b8;
      pppppcStack_e8 = (code *****)0x11dca340;
      pcStack_ec = "OnCompleteNpcTaskDlg";
      pcStack_f0 = (code *)0x107ece1d;
      pppppcStack_a4 = pppppcStack_a8;
      FUN_100b62c0();
      pcStack_f0 = FUN_107f21f0;
      pppppcStack_f4 = &ppppcStack_c0;
      pppppcStack_f8 = (code *****)0x107ece2e;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_b4 != &pppppcStack_c8) &&
         ((code ******)pppppcStack_b4 != (code ******)0x0)) {
        pppppcStack_f8 = pppppcStack_b4;
        pcStack_fc = (char *)0x107ece44;
        FUN_10c3d5d0();
      }
      pppppcStack_b8 = (code *****)&pppppcStack_c8;
      pppppcStack_f8 = (code *****)0x11dca32a;
      pcStack_fc = "OnCancelNpcTaskDlg";
      puStack_100 = (undefined *)0x107ece64;
      pppppcStack_b4 = pppppcStack_b8;
      FUN_100b62c0();
      puStack_100 = &DAT_107f2300;
      ppuStack_104 = &puStack_d0;
      pppppcStack_108 = (code *****)0x107ece75;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_c4 != &pppppcStack_d8) &&
         ((code ******)pppppcStack_c4 != (code ******)0x0)) {
        pppppcStack_108 = pppppcStack_c4;
        pppppuStack_10c = (undefined4 *****)0x107ece8b;
        FUN_10c3d5d0();
      }
      pppppcStack_c8 = (code *****)&pppppcStack_d8;
      pppppcStack_108 = (code *****)0x11dca2b9;
      pppppuStack_10c = (undefined4 *****)0x11dca2a8;
      puStack_110 = (undefined *)0x107eceab;
      pppppcStack_c4 = pppppcStack_c8;
      FUN_100b62c0();
      puStack_110 = &DAT_107f2310;
      ppcStack_114 = &pcStack_e0;
      pppppcStack_118 = (code *****)0x107ecebc;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_d4 != &pppppcStack_e8) &&
         ((code ******)pppppcStack_d4 != (code ******)0x0)) {
        pppppcStack_118 = pppppcStack_d4;
        pppppcStack_11c = (code *****)0x107eced2;
        FUN_10c3d5d0();
      }
      pppppcStack_d8 = (code *****)&pppppcStack_e8;
      pppppcStack_118 = (code *****)0x11dca2a6;
      pppppcStack_11c = (code *****)0x11dca28c;
      pppppcStack_120 = (code *****)0x107ecef2;
      pppppcStack_d4 = pppppcStack_d8;
      FUN_100b62c0();
      pppppcStack_120 = (code *****)FUN_107f3640;
      ppcStack_124 = &pcStack_f0;
      pppppcStack_128 = (code *****)0x107ecf03;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_e4 != &pppppcStack_f8) &&
         ((code ******)pppppcStack_e4 != (code ******)0x0)) {
        pppppcStack_128 = pppppcStack_e4;
        pcStack_12c = (char *)0x107ecf19;
        FUN_10c3d5d0();
      }
      pppppcStack_e8 = (code *****)&pppppcStack_f8;
      pppppcStack_128 = (code *****)0x11dca2ec;
      pcStack_12c = "OnPlayerUnTrackOrTrackWeapon";
      pppppcStack_130 = (code *****)0x107ecf39;
      pppppcStack_e4 = pppppcStack_e8;
      FUN_100b62c0();
      pppppcStack_130 = (code *****)FUN_107f3630;
      pppppcStack_134 = (code *****)&puStack_100;
      pppppcStack_138 = (code *****)0x107ecf4a;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_f4 != &pppppcStack_108) &&
         ((code ******)pppppcStack_f4 != (code ******)0x0)) {
        pppppcStack_138 = pppppcStack_f4;
        pcStack_13c = (char *)0x107ecf60;
        FUN_10c3d5d0();
      }
      pppppcStack_f8 = (code *****)&pppppcStack_108;
      pppppcStack_138 = (code *****)0x11dca2ce;
      pcStack_13c = "MsgBoxGiveupTaskOk";
      pcStack_140 = (code *)0x107ecf80;
      pppppcStack_f4 = pppppcStack_f8;
      FUN_100b62c0();
      pcStack_140 = FUN_107f36b0;
      pppppcStack_148 = (code *****)&puStack_110;
      pppppuStack_14c = (undefined4 *****)0x107ecf9b;
      pppppcStack_144 = (code *****)param_1;
      FUN_104d0ee0();
      if (((code ******)pppppcStack_108 != &pppppcStack_11c) &&
         ((code ******)pppppcStack_108 != (code ******)0x0)) {
        pppppuStack_14c = (undefined4 *****)pppppcStack_108;
        pcStack_150 = (char *)0x107ecfb1;
        FUN_10c3d5d0();
      }
      pppppuStack_10c = &pppppcStack_11c;
      pppppuStack_14c = (undefined4 *****)0x11dca3be;
      pcStack_150 = "MsgBoxGiveupTaskCancel";
      pppppcStack_154 = (code *****)0x107ecfd1;
      pppppcStack_108 = (code *****)pppppuStack_10c;
      FUN_100b62c0();
      pppppcStack_154 = (code *****)FUN_107f3710;
      pppcStack_15c = &ppcStack_124;
      pppppcStack_160 = (code *****)0x107ecfec;
      pppppcStack_158 = (code *****)param_1;
      FUN_104d0ee0();
      if (((code ******)pppppcStack_11c != &pppppcStack_130) &&
         ((code ******)pppppcStack_11c != (code ******)0x0)) {
        pppppcStack_160 = pppppcStack_11c;
        pcStack_164 = (char *)0x107ed002;
        FUN_10c3d5d0();
      }
      pppppcStack_120 = (code *****)&pppppcStack_130;
      pppppcStack_160 = (code *****)0x11dca3a5;
      pcStack_164 = "MsgBoxShareTaskOk";
      pppppcStack_168 = (char *****)0x107ed022;
      pppppcStack_11c = pppppcStack_120;
      FUN_100b62c0();
      pppppcStack_168 = (char *****)FUN_107f3740;
      pppppcStack_170 = (code *****)&pppppcStack_138;
      pppppcStack_174 = (code *****)0x107ed03d;
      pppppcStack_16c = (code *****)param_1;
      FUN_104d0ee0();
      if (((code ******)pppppcStack_130 != &pppppcStack_144) &&
         ((code ******)pppppcStack_130 != (code ******)0x0)) {
        pppppcStack_174 = pppppcStack_130;
        pcStack_178 = (char *)0x107ed053;
        FUN_10c3d5d0();
      }
      pppppcStack_134 = (code *****)&pppppcStack_144;
      pppppcStack_174 = (code *****)0x11dca3f5;
      pcStack_178 = "MsgBoxShareTaskCancel";
      pppppuStack_17c = (undefined4 *****)0x107ed073;
      pppppcStack_130 = pppppcStack_134;
      FUN_100b62c0();
      pppppuStack_17c = (undefined4 *****)&DAT_107f3770;
      pppppuStack_184 = &pppppuStack_14c;
      pppppcStack_188 = (code *****)0x107ed08e;
      pppppcStack_180 = (code *****)param_1;
      FUN_104d0ee0();
      if (((code ******)pppppcStack_144 != &pppppcStack_158) &&
         ((code ******)pppppcStack_144 != (code ******)0x0)) {
        pppppcStack_188 = pppppcStack_144;
        pppppcStack_18c = (code *****)0x107ed0a4;
        FUN_10c3d5d0();
      }
      pppppcStack_148 = (code *****)&pppppcStack_158;
      pppppcStack_188 = (code *****)0x11dca3dd;
      pppppcStack_18c = (code *****)0x11dca3c0;
      pppppcStack_190 = (code *****)0x107ed0c4;
      pppppcStack_144 = pppppcStack_148;
      FUN_100b62c0();
      pppppcStack_190 = (code *****)FUN_107f3780;
      pppppuStack_194 = &pppppcStack_160;
      pppppcStack_198 = (code *****)0x107ed0d5;
      FUN_107ff5b0();
      if (((char ******)pppppcStack_154 != &pppppcStack_168) &&
         ((char ******)pppppcStack_154 != (char ******)0x0)) {
        pppppcStack_198 = pppppcStack_154;
        pppppcStack_19c = (code *****)0x107ed0eb;
        FUN_10c3d5d0();
      }
      pppppcStack_158 = (code *****)&pppppcStack_168;
      pppppcStack_198 = (code *****)0x11dca36d;
      pppppcStack_19c = (code *****)0x11dca35c;
      pppppcStack_1a0 = (code *****)0x107ed10b;
      pppppcStack_154 = pppppcStack_158;
      FUN_100b62c0();
      pppppcStack_1a0 = (code *****)FUN_107f37c0;
      pppppcStack_1a8 = (code *****)&pppppcStack_170;
      pppppcStack_1ac = (char *****)0x107ed126;
      pppppcStack_1a4 = (code *****)param_1;
      FUN_104d0ee0();
      if (((undefined4 ******)pppppcStack_168 != &pppppuStack_17c) &&
         ((undefined4 ******)pppppcStack_168 != (undefined4 ******)0x0)) {
        pppppcStack_1ac = pppppcStack_168;
        pppppcStack_1b0 = (char *****)0x107ed13c;
        FUN_10c3d5d0();
      }
      pppppcStack_16c = (code *****)&pppppuStack_17c;
      pppppcStack_1ac = (char *****)0x11dca358;
      pppppcStack_1b0 = (char *****)0x11dca344;
      puStack_1b4 = (undefined *)0x107ed15c;
      pppppcStack_168 = (char *****)pppppcStack_16c;
      FUN_100b62c0();
      puStack_1b4 = &DAT_107f3860;
      pppppcStack_1bc = (code *****)&pppppuStack_184;
      pppppuStack_1c0 = (undefined4 *****)0x107ed177;
      pppppcStack_1b8 = (code *****)param_1;
      FUN_104d0ee0();
      if (((code ******)pppppuStack_17c != &pppppcStack_190) &&
         ((code ******)pppppuStack_17c != (code ******)0x0)) {
        pppppuStack_1c0 = pppppuStack_17c;
        pcStack_1c4 = (char *)0x107ed18d;
        FUN_10c3d5d0();
      }
      pppppcStack_180 = (code *****)&pppppcStack_190;
      pppppuStack_1c0 = (undefined4 *****)0x11dca392;
      pcStack_1c4 = "IsWarningLevel";
      ppppuStack_1c8 = (code *****)0x107ed1ad;
      pppppuStack_17c = (undefined4 *****)pppppcStack_180;
      FUN_100b62c0();
      ppppuStack_1c8 = (undefined4 ****)FUN_107f3870;
      pppppcStack_1cc = (code *****)&pppppcStack_198;
      pppppcStack_1d0 = (code *****)0x107ed1be;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_18c != &pppppcStack_1a0) &&
         ((code ******)pppppcStack_18c != (code ******)0x0)) {
        pppppcStack_1d0 = pppppcStack_18c;
        pcStack_1d4 = (char *)0x107ed1d4;
        FUN_10c3d5d0();
      }
      pppppcStack_190 = (code *****)&pppppcStack_1a0;
      pppppcStack_1d0 = (code *****)0x11dca381;
      pcStack_1d4 = "WeaponTraceChange";
      ppppcStack_1d8 = (code ****)0x107ed1f4;
      pppppcStack_18c = pppppcStack_190;
      FUN_100b62c0();
      ppppcStack_1d8 = (code ****)FUN_107f3960;
      pppppcStack_1dc = (code *****)&pppppcStack_1a8;
      pppppcStack_1e0 = (code *****)0x107ed205;
      FUN_107ff5b0();
      if (((char ******)pppppcStack_19c != &pppppcStack_1b0) &&
         ((char ******)pppppcStack_19c != (char ******)0x0)) {
        pppppcStack_1e0 = pppppcStack_19c;
        pcStack_1e4 = (char *)0x107ed21b;
        FUN_10c3d5d0();
      }
      pppppcStack_1a0 = (code *****)&pppppcStack_1b0;
      pppppcStack_1e0 = (code *****)0x11dca472;
      pcStack_1e4 = "RefreshWeaponTraceList";
      ppppcStack_1e8 = (code ****)0x107ed23b;
      pppppcStack_19c = pppppcStack_1a0;
      FUN_100b62c0();
      ppppcStack_1e8 = (code ****)CForgeView__BuildCraftUpgradeConfigVO;
      pppppcStack_1ec = (code *****)&pppppcStack_1b8;
      pppppcStack_1f0 = (code *****)0x107ed24c;
      FUN_107ff5b0();
      if (((undefined4 ******)pppppcStack_1ac != &pppppuStack_1c0) &&
         ((undefined4 ******)pppppcStack_1ac != (undefined4 ******)0x0)) {
        pppppcStack_1f0 = (code *****)pppppcStack_1ac;
        pcStack_1f4 = (char *)0x107ed262;
        FUN_10c3d5d0();
      }
      pppppcStack_1b0 = (char *****)&pppppuStack_1c0;
      pppppcStack_1f0 = (code *****)0x11dca459;
      pcStack_1f4 = "PlayerQuest_RefreshNotify";
      ppppcStack_1f8 = (code ****)0x107ed282;
      pppppcStack_1ac = pppppcStack_1b0;
      FUN_100b62c0();
      ppppcStack_1f8 = (code ****)FUN_107f4370;
      pppppuStack_1fc = &ppppuStack_1c8;
      pppppcStack_200 = (code *****)0x107ed293;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_1bc != &pppppcStack_1d0) &&
         ((code ******)pppppcStack_1bc != (code ******)0x0)) {
        pppppcStack_200 = pppppcStack_1bc;
        pcStack_204 = (char *)0x107ed2a9;
        FUN_10c3d5d0();
      }
      pppppuStack_1c0 = &pppppcStack_1d0;
      pppppcStack_200 = (code *****)0x11dca4ae;
      pcStack_204 = "QuestJournal_AutoTrack";
      ppppcStack_208 = (code ****)0x107ed2c9;
      pppppcStack_1bc = (code *****)pppppuStack_1c0;
      FUN_100b62c0();
      ppppcStack_208 = (code ****)FUN_107f44f0;
      pppppcStack_20c = &ppppcStack_1d8;
      pppppcStack_210 = (code *****)0x107ed2da;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_1cc != &pppppcStack_1e0) &&
         ((code ******)pppppcStack_1cc != (code ******)0x0)) {
        pppppcStack_210 = pppppcStack_1cc;
        pcStack_214 = (char *)0x107ed2f0;
        FUN_10c3d5d0();
      }
      pppppcStack_1d0 = (code *****)&pppppcStack_1e0;
      pppppcStack_210 = (code *****)0x11dca496;
      pcStack_214 = "QuestJournal_ShowCurrentQuestLevel";
      ppppcStack_218 = (code ****)0x107ed310;
      pppppcStack_1cc = pppppcStack_1d0;
      FUN_100b62c0();
      ppppcStack_218 = (code ****)FUN_107f4520;
      pppppcStack_21c = &ppppcStack_1e8;
      pppppcStack_220 = (code *****)0x107ed321;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_1dc != &pppppcStack_1f0) &&
         ((code ******)pppppcStack_1dc != (code ******)0x0)) {
        pppppcStack_220 = pppppcStack_1dc;
        pcStack_224 = (char *)0x107ed337;
        FUN_10c3d5d0();
      }
      pppppcStack_1e0 = (code *****)&pppppcStack_1f0;
      pppppcStack_220 = (code *****)0x11dca41d;
      pcStack_224 = "RefreshPlayerTaskDescribe";
      ppppcStack_228 = (code ****)0x107ed357;
      pppppcStack_1dc = pppppcStack_1e0;
      FUN_100b62c0();
      ppppcStack_228 = (code ****)FUN_107f2330;
      pppppcStack_22c = &ppppcStack_1f8;
      pppppcStack_230 = (code *****)0x107ed368;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_1ec != &pppppcStack_200) &&
         ((code ******)pppppcStack_1ec != (code ******)0x0)) {
        pppppcStack_230 = pppppcStack_1ec;
        pcStack_234 = (char *)0x107ed37e;
        FUN_10c3d5d0();
      }
      pppppcStack_1f0 = (code *****)&pppppcStack_200;
      pppppcStack_230 = (code *****)0x11dca402;
      pcStack_234 = "AwardClick";
      ppppcStack_238 = (code ****)0x107ed39e;
      pppppcStack_1ec = pppppcStack_1f0;
      FUN_100b62c0();
      ppppcStack_238 = (code ****)FUN_107f4a90;
      pppppcStack_23c = &ppppcStack_208;
      pppppcStack_240 = (code *****)0x107ed3af;
      FUN_107ff5b0();
      if (((code ******)pppppuStack_1fc != &pppppcStack_210) &&
         ((code ******)pppppuStack_1fc != (code ******)0x0)) {
        pppppcStack_240 = (code *****)pppppuStack_1fc;
        pcStack_244 = (char *)0x107ed3c5;
        FUN_10c3d5d0();
      }
      pppppcStack_200 = (code *****)&pppppcStack_210;
      pppppcStack_240 = (code *****)0x11dca43e;
      pcStack_244 = "FetchQuestData";
      ppppcStack_248 = (code ****)0x107ed3e5;
      pppppuStack_1fc = (undefined4 *****)pppppcStack_200;
      FUN_100b62c0();
      ppppcStack_248 = (code ****)FUN_107f4b10;
      pppppcStack_24c = &ppppcStack_218;
      pppppcStack_250 = (code *****)0x107ed3f6;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_20c != &pppppcStack_220) &&
         ((code ******)pppppcStack_20c != (code ******)0x0)) {
        pppppcStack_250 = pppppcStack_20c;
        pcStack_254 = (char *)0x107ed40c;
        FUN_10c3d5d0();
      }
      pppppcStack_210 = (code *****)&pppppcStack_220;
      pppppcStack_250 = (code *****)0x11dca42f;
      pcStack_254 = "QuestTraceClick";
      ppppcStack_258 = (code ****)0x107ed42c;
      pppppcStack_20c = pppppcStack_210;
      FUN_100b62c0();
      ppppcStack_258 = (code ****)FUN_107f5300;
      pppppcStack_25c = &ppppcStack_228;
      pppppcStack_260 = (code *****)0x107ed43d;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_21c != &pppppcStack_230) &&
         ((code ******)pppppcStack_21c != (code ******)0x0)) {
        pppppcStack_260 = pppppcStack_21c;
        pcStack_264 = (char *)0x107ed453;
        FUN_10c3d5d0();
      }
      pppppcStack_220 = (code *****)&pppppcStack_230;
      pppppcStack_260 = (code *****)0x11dca532;
      pcStack_264 = "NpcGroupTypeSelect";
      ppppcStack_268 = (code ****)0x107ed473;
      pppppcStack_21c = pppppcStack_220;
      FUN_100b62c0();
      ppppcStack_268 = (code ****)FUN_107f4ad0;
      pppppcStack_26c = &ppppcStack_238;
      pppppcStack_270 = (code *****)0x107ed484;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_22c != &pppppcStack_240) &&
         ((code ******)pppppcStack_22c != (code ******)0x0)) {
        pppppcStack_270 = pppppcStack_22c;
        pcStack_274 = (char *)0x107ed49a;
        FUN_10c3d5d0();
      }
      pppppcStack_230 = (code *****)&pppppcStack_240;
      pppppcStack_270 = (code *****)0x11dca51f;
      pcStack_274 = "InitTraceUI";
      ppppcStack_278 = (code ****)0x107ed4ba;
      pppppcStack_22c = pppppcStack_230;
      FUN_100b62c0();
      ppppcStack_278 = (code ****)FUN_107edba0;
      pppppcStack_27c = &ppppcStack_248;
      pppppcStack_280 = (code *****)0x107ed4cb;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_23c != &pppppcStack_250) &&
         ((code ******)pppppcStack_23c != (code ******)0x0)) {
        pppppcStack_280 = pppppcStack_23c;
        pcStack_284 = (char *)0x107ed4e1;
        FUN_10c3d5d0();
      }
      pppppcStack_240 = (code *****)&pppppcStack_250;
      pppppcStack_280 = (code *****)0x11dca54d;
      pcStack_284 = "TaskCheck";
      ppppcStack_288 = (code ****)0x107ed501;
      pppppcStack_23c = pppppcStack_240;
      FUN_100b62c0();
      ppppcStack_288 = (code ****)FUN_107f20a0;
      pppppcStack_28c = &ppppcStack_258;
      pppppcStack_290 = (code *****)0x107ed512;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_24c != &pppppcStack_260) &&
         ((code ******)pppppcStack_24c != (code ******)0x0)) {
        pppppcStack_290 = pppppcStack_24c;
        pcStack_294 = (char *)0x107ed528;
        FUN_10c3d5d0();
      }
      pppppcStack_250 = (code *****)&pppppcStack_260;
      pppppcStack_290 = (code *****)0x11dca540;
      pcStack_294 = "CloseTraceUI";
      puStack_298 = (undefined1 *)0x107ed548;
      pppppcStack_24c = pppppcStack_250;
      FUN_100b62c0();
      puStack_298 = &LAB_107edc40;
      pppppcStack_29c = &ppppcStack_268;
      pppppcStack_2a0 = (code *****)0x107ed559;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_25c != &pppppcStack_270) &&
         ((code ******)pppppcStack_25c != (code ******)0x0)) {
        pppppcStack_2a0 = pppppcStack_25c;
        pcStack_2a4 = (char *)0x107ed56f;
        FUN_10c3d5d0();
      }
      pppppcStack_260 = (code *****)&pppppcStack_270;
      pppppcStack_2a0 = (code *****)0x11dc1127;
      pcStack_2a4 = "OnClose";
      puStack_2a8 = (undefined1 *)0x107ed58f;
      pppppcStack_25c = pppppcStack_260;
      FUN_100b62c0();
      puStack_2a8 = &LAB_107f1be0;
      pppppcStack_2ac = &ppppcStack_278;
      pppppcStack_2b0 = (code *****)0x107ed5a0;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_26c != &pppppcStack_280) &&
         ((code ******)pppppcStack_26c != (code ******)0x0)) {
        pppppcStack_2b0 = pppppcStack_26c;
        pcStack_2b4 = (char *)0x107ed5b6;
        FUN_10c3d5d0();
      }
      pppppcStack_270 = (code *****)&pppppcStack_280;
      pppppcStack_2b0 = (code *****)0x11dca4e7;
      pcStack_2b4 = "QuestTraceLinkClick";
      pcStack_2b8 = (code *)0x107ed5d6;
      pppppcStack_26c = pppppcStack_270;
      FUN_100b62c0();
      pcStack_2b8 = FUN_107f4550;
      pppppcStack_2bc = &ppppcStack_288;
      pppppcStack_2c0 = (code *****)0x107ed5e7;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_27c != &pppppcStack_290) &&
         ((code ******)pppppcStack_27c != (code ******)0x0)) {
        pppppcStack_2c0 = pppppcStack_27c;
        pcStack_2c4 = (char *)0x107ed5fd;
        FUN_10c3d5d0();
      }
      pppppcStack_280 = (code *****)&pppppcStack_290;
      pppppcStack_2c0 = (code *****)0x11dca4d1;
      pcStack_2c4 = "UISetPlayerQuestEffectFlagVisible";
      pcStack_2c8 = (code *)0x107ed61d;
      pppppcStack_27c = pppppcStack_280;
      FUN_100b62c0();
      pcStack_2c8 = FUN_107edc90;
      ppuStack_2cc = &puStack_298;
      pppppcStack_2d0 = (code *****)0x107ed62e;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_28c != &pppppcStack_2a0) &&
         ((code ******)pppppcStack_28c != (code ******)0x0)) {
        pppppcStack_2d0 = pppppcStack_28c;
        ppppcStack_2d4 = (code ****)0x107ed644;
        FUN_10c3d5d0();
      }
      pppppcStack_290 = (code *****)&pppppcStack_2a0;
      pppppcStack_2d0 = (code *****)0x11dca510;
      ppppcStack_2d4 = (code ****)0x11dca4fc;
      pcStack_2d8 = (code *)0x107ed664;
      pppppcStack_28c = pppppcStack_290;
      FUN_100b62c0();
      pcStack_2d8 = FUN_107f43c0;
      ppuStack_2dc = &puStack_2a8;
      pppppcStack_2e0 = (code *****)0x107ed675;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_29c != &pppppcStack_2b0) &&
         ((code ******)pppppcStack_29c != (code ******)0x0)) {
        pppppcStack_2e0 = pppppcStack_29c;
        pppcStack_2e4 = (code ***)0x107ed68b;
        FUN_10c3d5d0();
      }
      pppppcStack_2a0 = (code *****)&pppppcStack_2b0;
      pppppcStack_2e0 = (code *****)0x11dca4fa;
      pppcStack_2e4 = (code ***)0x11dca4e8;
      puStack_2e8 = (undefined1 *)0x107ed6ab;
      pppppcStack_29c = pppppcStack_2a0;
      FUN_100b62c0();
      puStack_2e8 = &LAB_107f44c0;
      ppcStack_2ec = &pcStack_2b8;
      pppppcStack_2f0 = (code *****)0x107ed6bc;
      FUN_107ff5b0();
      if (((code ******)pppppcStack_2ac != &pppppcStack_2c0) &&
         ((code ******)pppppcStack_2ac != (code ******)0x0)) {
        pppppcStack_2f0 = pppppcStack_2ac;
        pcStack_2f4 = (char *)0x107ed6d2;
        FUN_10c3d5d0();
      }
      pppppcStack_2b0 = (code *****)&pppppcStack_2c0;
      pppppcStack_2f0 = (code *****)0x11dca5c0;
      pcStack_2f4 = "QuestTraceChange";
      ppcStack_2f8 = (code **)0x107ed6f2;
      pppppcStack_2ac = pppppcStack_2b0;
      FUN_100b62c0();
      ppcStack_2f8 = (code **)FUN_107f38f0;
      FUN_107ff5b0(&pcStack_2c8);
      if (((code ******)pppppcStack_2bc != &pppppcStack_2d0) &&
         ((code ******)pppppcStack_2bc != (code ******)0x0)) {
        FUN_10c3d5d0(pppppcStack_2bc);
      }
      pppppcStack_2c0 = (code *****)&pppppcStack_2d0;
      pppppcStack_2bc = pppppcStack_2c0;
      FUN_100b62c0("MsgBoxExpFullOK","");
      FUN_104d0ee0(&pcStack_2d8,param_1,FUN_107f1f70);
      if ((pppppcStack_2d0 != (code *****)&pppcStack_2e4) && (pppppcStack_2d0 != (code *****)0x0)) {
        FUN_10c3d5d0(pppppcStack_2d0);
      }
      ppppcStack_2d4 = &pppcStack_2e4;
      pppppcStack_2d0 = (code *****)ppppcStack_2d4;
      FUN_100b62c0("MsgBoxExpCancel","");
      FUN_104d0ee0(&ppcStack_2ec,param_1,&LAB_107f2060);
      if ((pppcStack_2e4 != &ppcStack_2f8) && ((code ****)pppcStack_2e4 != (code ****)0x0)) {
        FUN_10c3d5d0(pppcStack_2e4);
      }
      FUN_104d13b0("_IsTaskShouldCountDown",FUN_107ed850);
      FUN_104d13b0("_getTaskTraceMode",FUN_107ed9a0);
    }
    if (((uint)local_3c >> 6 & 1) != 0) {
      pppppcStack_58 = &local_40;
      pcStack_5c = (char *)0x107ed80b;
      pppppcStack_54 = local_38;
      (*(code *)(*local_40)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107eef70 @ 107eef70  size=4835 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "task_awardList"
//   "TASK_AWARD_CLASS_NAME"
//   "itemIconPathName"
//   "slotid"
//   "ItemID"
//   "task_selectawardList"
//   "limit"
//   "other_info"
//   "taskName"
//   "taskLevel"
//   "queststatus"
//   "cantGiveup"
//   "bTeam"
//   "bRepeat"
//   "farm_actuarialpoint"
//   "gold_bind"
//   "hunter_exp"
//   "hunter_fund"
//   "hunter_contribution"
//   "huntingCredit"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""task_awardList""
     ""TASK_AWARD_CLASS_NAME""
     ""itemIconPathName""
     ""slotid""
     ""ItemID""
     ""task_selectawardList""
     ""limit""
     ""other_info""
     ""taskName""
     ""taskLevel"" */

void FUN_107eef70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *******extraout_ECX;
  int *piVar6;
  int *unaff_ESI;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  undefined4 unaff_EDI;
  int ******ppppppiVar9;
  undefined4 uVar10;
  int *******pppppppiStack_160;
  int *******pppppppiStack_15c;
  int *******pppppppiStack_158;
  int *******pppppppiStack_154;
  int *******pppppppiStack_150;
  int *******pppppppiStack_14c;
  int *******pppppppiStack_148;
  int *******pppppppiStack_144;
  int *******pppppppiStack_140;
  int *******pppppppiStack_13c;
  int *******pppppppiStack_138;
  int *******pppppppiStack_134;
  int *******pppppppiStack_130;
  int *******pppppppiStack_12c;
  int *******pppppppiStack_128;
  int *******pppppppiStack_124;
  int ******ppppppiStack_114;
  int *piStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  int *piStack_100;
  int *piStack_fc;
  int *******pppppppiStack_f8;
  int *******pppppppiStack_f4;
  int *local_f0;
  int *piStack_ec;
  int *******local_e8;
  int *******local_e4;
  int *******pppppppiStack_e0;
  int *piStack_dc;
  int *******pppppppiStack_d8;
  int *******pppppppiStack_d4;
  int *******local_d0;
  uint local_cc;
  int *******local_c8;
  int local_c4;
  int local_c0;
  int *piStack_bc;
  int ******ppppppiStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int ******local_a8;
  int ******local_a4;
  int *******pppppppiStack_a0;
  int ******ppppppiStack_9c;
  undefined1 auStack_98 [4];
  int ******ppppppiStack_94;
  int *******local_90;
  int *******local_8c;
  int *******pppppppiStack_88;
  int *******pppppppiStack_84;
  uint uStack_80;
  int *******pppppppiStack_7c;
  int *piStack_78;
  int *****pppppiStack_74;
  int *******local_70;
  int *******local_6c;
  int *******pppppppiStack_68;
  int *****pppppiStack_64;
  undefined4 uStack_60;
  undefined1 local_3c [16];
  int *******local_2c;
  int *******local_28;
  undefined1 local_24 [16];
  int *******local_14;
  int *******local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppppppiStack_114;
  if (param_5 != 1) goto LAB_107f0245;
  local_14 = (int *******)local_24;
  piVar6 = (int *)0x0;
  local_2c = (int *******)local_3c;
  local_cc = param_4[1];
  local_c8 = (int *******)param_4[2];
  local_c4 = param_4[3];
  local_c0 = param_4[4];
  local_24[0] = 0;
  local_3c[0] = 0;
  local_f0 = (int *)0x0;
  local_d0 = (int *******)0x0;
  local_28 = local_2c;
  local_10 = local_14;
  if ((local_cc >> 6 & 1) != 0) {
    local_d0 = (int *******)*param_4;
    pppppppiStack_128 = (int *******)&local_d0;
    pppppppiStack_12c = (int *******)0x107ef016;
    pppppppiStack_124 = local_c8;
    (*(code *)(*local_d0)[1])();
  }
  local_a8 = (int ******)0x0;
  local_a4 = (int ******)0x0;
  local_e8 = (int *******)0x0;
  local_e4 = (int *******)0x0;
  local_90 = (int *******)0x0;
  local_8c = (int *******)0x0;
  local_70 = (int *******)0x0;
  local_6c = (int *******)0x0;
  DAT_1200acc0 = 0xffffffff;
  if ((DAT_123bb99c == (int *)0x0) || ((int)DAT_123bb998 < 1)) {
LAB_107f010b:
    pppppppiVar7 = pppppppiStack_124;
    pppppppiStack_124 = pppppppiStack_88;
    if (((uint)local_6c >> 6 & 1) != 0) {
      pppppppiStack_124 = pppppppiStack_68;
      pppppppiStack_128 = (int *******)&local_70;
      pppppppiStack_12c = (int *******)0x107f0128;
      (*(code *)(*local_70)[2])();
      local_70 = (int *******)0x0;
      pppppppiVar7 = pppppppiStack_124;
      pppppppiStack_124 = pppppppiStack_88;
    }
  }
  else {
    pppppppiStack_124 = DAT_123bb998;
    pppppppiStack_128 = (int *******)0x107ef079;
    piVar2 = (int *)(**(code **)(*DAT_123bb99c + 0x50))();
    pppppppiStack_128 = (int *******)0x107ef08d;
    piStack_78 = piVar2;
    FUN_114e79d0();
    pppppppiStack_128 = (int *******)0x107ef094;
    iVar3 = FUN_114f16f0();
    if (iVar3 != 0) {
      pppppppiStack_124 = DAT_123bb998;
      pppppppiStack_128 = (int *******)0x107ef0a9;
      piVar6 = (int *)FUN_114f3be0();
      piVar2 = piVar6;
      local_f0 = piVar6;
    }
    if (piVar2 == (int *)0x0) goto LAB_107f010b;
    pppppppiStack_128 = &local_a8;
    ppppppiStack_114 = (int ******)CONCAT31(ppppppiStack_114._1_3_,((byte)local_cc & 0x8f) == 10);
    pppppppiStack_124 = (int *******)ppppppiStack_114;
    pppppppiStack_12c = (int *******)0x11dca784;
    pppppppiStack_130 = local_c8;
    pppppppiStack_134 = (int *******)0x107ef0e6;
    cVar1 = (*(code *)(*local_d0)[4])();
    if (cVar1 != '\0') {
      pppppppiStack_134 = (int *******)0xffffffff;
      pppppppiStack_138 = (int *******)0x0;
      pppppppiStack_13c = (int *******)uStack_b0;
      pppppppiStack_140 = (int *******)0x107ef102;
      (*(code *)(*ppppppiStack_b8)[0x11])();
      pppppppiStack_144 = (int *******)&pppppiStack_74;
      pppppiStack_74 = (int *****)0x0;
      local_70 = (int *******)0x0;
      pppppppiStack_130 =
           (int *******)CONCAT31(pppppppiStack_130._1_3_,((byte)local_e8 & 0x8f) == 10);
      pppppppiStack_140 = pppppppiStack_130;
      pppppppiStack_148 = (int *******)0x11dca7b8;
      pppppppiStack_14c = local_e4;
      pppppppiStack_150 = (int *******)0x107ef148;
      cVar1 = (**(code **)(*piStack_ec + 0x10))();
      if ((cVar1 != '\0') && (((byte)uStack_80 & 0x8f) == 6)) {
        if ((uStack_80 >> 6 & 1) == 0) {
          pppppppiStack_d8 = pppppppiStack_7c;
        }
        else {
          pppppppiStack_d8 = (int *******)*pppppppiStack_7c;
        }
        pppppppiStack_154 = (int *******)(piVar6 + 0x13);
        pppppppiStack_134 = (int *******)0x0;
        pppppppiStack_150 = (int *******)0x1f;
        pppppppiStack_130 = (int *******)0x0;
        pppppppiStack_158 = (int *******)0x107ef19c;
        iVar3 = FUN_10804900();
        if (iVar3 != 0) {
          pppppppiStack_150 = (int *******)(iVar3 + 4);
          pppppppiStack_154 = (int *******)0x107ef1b4;
          FUN_107ff120();
          pppppppiVar7 = (int *******)0x0;
          pppppppiStack_138 = local_e4;
          pppppppiStack_140 =
               (int *******)((uint)((int)pppppppiStack_e0 + (3 - (int)local_e4)) >> 2);
          if (pppppppiStack_e0 < local_e4) {
            pppppppiStack_140 = (int *******)0x0;
          }
          if (pppppppiStack_140 != (int *******)0x0) {
            do {
              ppppppiVar9 = *pppppppiStack_138;
              pppppppiStack_150 = (int *******)0x0;
              pppppppiStack_154 = (int *******)0x0;
              pppppppiStack_158 = pppppppiStack_d8;
              pppppppiStack_15c = (int *******)&pppppppiStack_134;
              pppppppiStack_160 = (int *******)0x107ef1fd;
              FUN_11a98de0();
              if (pppppppiStack_128 == (int *******)0x0) {
                pppppppiStack_160 = (int *******)&DAT_11d9d32b;
                FUN_104d1670("itemIconPathName");
                FUN_104d1550("slotid",10);
                FUN_104d1550("ItemID",0);
                FUN_104d1550(&DAT_11dbdc0c,0);
              }
              else {
                pppppppiStack_160 = (int *******)pppppppiStack_128[0x2d];
                FUN_104d1670("itemIconPathName");
                FUN_104d1550("slotid",pppppppiVar7);
                pppppppiStack_160 = (int *******)0x107ef237;
                pppppppiStack_160 = (int *******)(*(code *)(*ppppppiVar9[1])[6])();
                FUN_104d1550("ItemID");
                FUN_104d1550(&DAT_11dbdc0c,ppppppiVar9[2]);
                FUN_104d1550(&DAT_11dca14c,pppppppiStack_128[4]);
              }
              pppppppiStack_160 = (int *******)&pppppppiStack_144;
              (*(code *)(*local_e4)[0xf])(piStack_dc);
              pppppppiVar7 = (int *******)((int)pppppppiVar7 + 1);
              pppppppiStack_138 = pppppppiStack_138 + 1;
              piVar6 = unaff_ESI;
            } while (pppppppiVar7 != pppppppiStack_140);
          }
          if (local_e4 != (int *******)0x0) {
            pppppppiStack_150 = local_e4;
            pppppppiStack_154 = (int *******)0x107ef2fc;
            FUN_10c3d5d0();
          }
        }
        pppppppiStack_150 = (int *******)0x107ef308;
        FUN_104d7c10();
      }
      pppppppiStack_150 = (int *******)0x107ef314;
      FUN_104d7c10();
    }
    pppppppiStack_138 = &ppppppiStack_b8;
    pppppppiStack_124 =
         (int *******)CONCAT31(pppppppiStack_124._1_3_,((byte)piStack_dc & 0x8f) == 10);
    pppppppiStack_134 = pppppppiStack_124;
    pppppppiStack_13c = (int *******)0x11dca7a0;
    pppppppiStack_140 = pppppppiStack_d8;
    pppppppiStack_144 = (int *******)0x107ef341;
    cVar1 = (*(code *)(*pppppppiStack_e0)[4])();
    if (cVar1 != '\0') {
      pppppppiStack_144 = (int *******)0xffffffff;
      pppppppiStack_148 = (int *******)0x0;
      pppppppiStack_14c = (int *******)local_c0;
      pppppppiStack_150 = (int *******)0x107ef35d;
      (*(code *)(*local_c8)[0x11])();
      pppppppiStack_154 = (int *******)&pppppppiStack_84;
      pppppppiStack_84 = (int *******)0x0;
      uStack_80 = 0;
      pppppppiStack_140 =
           (int *******)CONCAT31(pppppppiStack_140._1_3_,((byte)pppppppiStack_f8 & 0x8f) == 10);
      pppppppiStack_150 = pppppppiStack_140;
      pppppppiStack_158 = (int *******)0x11dca7b8;
      pppppppiStack_15c = pppppppiStack_f4;
      pppppppiStack_160 = (int *******)0x107ef3a3;
      cVar1 = (**(code **)(*piStack_fc + 0x10))();
      if ((cVar1 != '\0') && (((byte)pppppiStack_74 & 0x8f) == 6)) {
        pppppppiStack_12c = local_70;
        if (((uint)pppppiStack_74 >> 6 & 1) != 0) {
          pppppppiStack_12c = (int *******)*local_70;
        }
        pppppppiStack_148 = (int *******)(piVar6 + 0x47);
        pppppppiStack_144 = (int *******)0x1e;
        pppppppiStack_14c = (int *******)&pppppppiStack_d8;
        pppppppiStack_128 = (int *******)0x0;
        pppppppiStack_124 = (int *******)0x0;
        pppppppiStack_150 = (int *******)0x107ef3f9;
        FUN_10804880();
        iVar3 = 0;
        iStack_10c = (int)pppppppiStack_d4 - (int)pppppppiStack_d8 >> 2;
        pppppppiStack_144 = pppppppiStack_d8;
        if (0 < iStack_10c) {
          do {
            pppppppiStack_134 = (int *******)pppppppiStack_144[iVar3][1];
            if (pppppppiStack_134 != (int *******)0x0) {
              ppppppiVar9 = pppppppiStack_134[1];
              pppppppiStack_144 = (int *******)0x0;
              pppppppiStack_148 = (int *******)0x0;
              pppppppiStack_14c = pppppppiStack_12c;
              pppppppiStack_150 = (int *******)&pppppppiStack_128;
              pppppppiStack_154 = (int *******)0x107ef449;
              FUN_11a98de0();
              if (ppppppiVar9 == (int ******)0x0) {
                pppppppiStack_154 = (int *******)&DAT_11d9d32b;
                pppppppiStack_158 = (int *******)0x11dbdbd0;
                pppppppiStack_15c = (int *******)0x107ef4cd;
                FUN_104d1670();
                pppppppiStack_15c = (int *******)0xa;
                pppppppiStack_160 = (int *******)0x11dbdc1c;
                FUN_104d1550();
                FUN_104d1550("ItemID",0);
                FUN_104d1550(&DAT_11dbdc0c,0);
              }
              else {
                pppppppiStack_154 = (int *******)ppppppiVar9[0x2d];
                pppppppiStack_158 = (int *******)0x11dbdbd0;
                pppppppiStack_15c = (int *******)0x107ef463;
                FUN_104d1670();
                pppppppiStack_160 = (int *******)0x11dbdc1c;
                pppppppiStack_15c = (int *******)iVar3;
                FUN_104d1550();
                pppppppiStack_154 = (int *******)0x107ef47e;
                pppppppiStack_154 = (int *******)(*(code *)(*ppppppiVar9)[6])();
                pppppppiStack_158 = (int *******)0x11dbdbe4;
                pppppppiStack_15c = (int *******)0x107ef48f;
                FUN_104d1550();
                pppppppiStack_15c = (int *******)pppppppiStack_144[2];
                pppppppiStack_160 = (int *******)&DAT_11dbdc0c;
                FUN_104d1550();
                FUN_104d1550(&DAT_11dca14c,ppppppiVar9[4]);
              }
              pppppppiStack_154 = (int *******)&pppppppiStack_138;
              pppppppiStack_158 = local_d0;
              pppppppiStack_15c = (int *******)0x107ef51b;
              (*(code *)(*pppppppiStack_d8)[0xf])();
              pppppppiStack_144 = pppppppiStack_d8;
            }
            iVar3 = iVar3 + 1;
            piVar6 = piStack_110;
          } while (iVar3 < iStack_10c);
        }
        if (pppppppiStack_144 != (int *******)0x0) {
          pppppppiStack_148 = (int *******)0x107ef538;
          FUN_10c3d5d0();
        }
        pppppppiStack_144 = (int *******)0x107ef544;
        FUN_104d7c10();
      }
      if (((uint)pppppiStack_74 >> 6 & 1) != 0) {
        pppppppiStack_148 = (int *******)&piStack_78;
        pppppppiStack_144 = local_70;
        pppppppiStack_14c = (int *******)0x107ef56e;
        (**(code **)(*piStack_78 + 8))();
      }
    }
    pppppppiStack_148 = (int *******)&local_90;
    pppppppiStack_134 =
         (int *******)CONCAT31(pppppppiStack_134._1_3_,((byte)piStack_ec & 0x8f) == 10);
    pppppppiStack_144 = pppppppiStack_134;
    pppppppiStack_14c = (int *******)0x11dca764;
    pppppppiStack_150 = local_e8;
    pppppppiStack_154 = (int *******)0x107ef59e;
    cVar1 = (**(code **)(*local_f0 + 0x10))();
    if (cVar1 != '\0') {
      pppppppiStack_154 = (int *******)param_2;
      pppppppiStack_158 = (int *******)0x107ef5b2;
      FUN_107f18e0();
    }
    pppppppiStack_158 = (int *******)&stack0xfffffee8;
    pppppppiStack_144 =
         (int *******)CONCAT31(pppppppiStack_144._1_3_,((byte)piStack_fc & 0x8f) == 10);
    pppppppiStack_154 = pppppppiStack_144;
    pppppppiStack_15c = (int *******)0x11dca758;
    pppppppiStack_160 = pppppppiStack_f8;
    cVar1 = (**(code **)(*piStack_100 + 0x10))();
    if (cVar1 != '\0') {
      pppppppiStack_88 = (int *******)auStack_98;
      auStack_98[0] = 0;
      pppppppiStack_84 = pppppppiStack_88;
      FUN_100e5aa0(pppppppiStack_88);
      FUN_104d1670("taskName",pppppppiStack_88);
      pppppppiVar7 = &ppppppiStack_9c;
      if ((pppppppiStack_88 != pppppppiVar7) && (pppppppiStack_88 != (int *******)0x0)) {
        FUN_10c3d5d0(pppppppiStack_88);
        pppppppiVar7 = extraout_ECX;
      }
      FUN_104d8d20(piVar6[1],pppppppiVar7,&pppppppiStack_158);
      puVar4 = (undefined4 *)FUN_117c1280();
      FUN_104d1550("taskLevel",*puVar4);
      pppppppiStack_a0 = (int *******)((uint)pppppppiStack_a0 & 0xffffff00);
      local_90 = (int *******)&pppppppiStack_a0;
      local_8c = local_90;
      FUN_100e5aa0(local_90);
      FUN_104d1670("taskName",local_90);
      if ((local_90 != &local_a4) && (local_90 != (int *******)0x0)) {
        FUN_10c3d5d0(local_90);
      }
      if (local_c0 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(local_c0 + 0x14);
      }
      FUN_104d1550("queststatus",uVar10);
      FUN_104d15e0("cantGiveup",(char)piVar6[7]);
      iVar3 = FUN_10804c90();
      if ((iVar3 == 0) || (**(int **)(iVar3 + 4) < 2)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      FUN_104d15e0("bTeam",uVar10);
      FUN_104d15e0("bRepeat",(char)piVar6[0x20] != '\0');
      pppppppiStack_13c =
           (int *******)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      piVar2 = piVar6 + 0x13;
      pppppppiStack_160 = (int *******)FUN_10804980();
      pppppppiStack_138 = (int *******)0x0;
      if (pppppppiStack_160 == (int *******)0x0) {
        iVar3 = 0;
      }
      else {
        pppppppiStack_158 = (int *******)0x0;
        if (pppppppiStack_13c != (int *******)0x0) {
          uVar10 = CPlayer__GetHuntRankOrCount(pppppppiStack_160[1],0,0,0,&pppppppiStack_158);
          FUN_1185f2e0(uVar10);
        }
        iVar3 = (int)((float)(int)pppppppiStack_160[2] * (float)pppppppiStack_158);
      }
      FUN_104d1550("farm_actuarialpoint",iVar3);
      pppppppiStack_160 = (int *******)FUN_10804cd0(piVar2,0x19);
      if (pppppppiStack_160 == (int *******)0x0) {
        iVar3 = 0;
      }
      else {
        pppppppiStack_158 = (int *******)0x0;
        if (pppppppiStack_13c != (int *******)0x0) {
          uVar10 = CPlayer__GetHuntRankOrCount(pppppppiStack_160[1],0,0,&pppppppiStack_158,0);
          FUN_1185f2e0(uVar10);
        }
        iVar3 = (int)((float)(int)pppppppiStack_160[2] * (float)pppppppiStack_158);
      }
      FUN_104d1550(&DAT_11dbfbc8,iVar3);
      pppppppiStack_f8 = (int *******)FUN_10804940(piVar2,0x18);
      if (pppppppiStack_f8 == (int *******)0x0) {
        FUN_104d1550(&DAT_11dc0944,0);
        iVar3 = 0;
      }
      else {
        pppppppiStack_158 = (int *******)0x0;
        pppppppiStack_160 = (int *******)0x0;
        if (pppppppiStack_13c != (int *******)0x0) {
          uVar10 = CPlayer__GetHuntRankOrCount
                             (pppppppiStack_f8[1],&pppppppiStack_160,&pppppppiStack_158,0,0);
          FUN_1185f2e0(uVar10);
          pppppppiStack_138 = pppppppiStack_158;
        }
        FUN_104d1550(&DAT_11dc0944,(int)((float)(int)pppppppiStack_f8[2] * (float)pppppppiStack_138)
                    );
        iVar3 = (int)((float)(int)pppppppiStack_f8[3] * (float)pppppppiStack_160);
      }
      FUN_104d1550("gold_bind",iVar3);
      pppppppiStack_160 = (int *******)FUN_108049c0(piVar2,0x21);
      if (pppppppiStack_160 == (int *******)0x0) {
        FUN_104d1550("hunter_exp",0);
        ppppppiVar9 = (int ******)0x0;
      }
      else {
        FUN_104d1550("hunter_exp",pppppppiStack_160[2]);
        ppppppiVar9 = pppppppiStack_160[3];
      }
      FUN_104d1550("hunter_fund",ppppppiVar9);
      iVar3 = FUN_108049c0(piVar2,0x21);
      if (iVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar3 + 4);
      }
      FUN_104d1550("hunter_contribution",uVar10);
      FUN_10804d10(piVar2,0x24);
      FUN_104d1550("huntingCredit",0);
      iVar3 = FUN_10804a00();
      if (iVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar3 + 8);
      }
      FUN_104d1550("npcfriendvalue",uVar10);
      local_a4 = (int ******)((uint)local_a4 & 0xffffff00);
      ppppppiStack_94 = (int ******)&local_a4;
      local_90 = (int *******)ppppppiStack_94;
      FUN_100e5aa0(ppppppiStack_94);
      FUN_104d1670("TaskContent",ppppppiStack_94);
      if (((int *******)ppppppiStack_94 != &local_a8) && (ppppppiStack_94 != (int ******)0x0)) {
        FUN_10c3d5d0(ppppppiStack_94);
      }
      if (local_c4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_107ec910();
        iVar3 = FUN_113f3640();
        iVar5 = (**(code **)(**(int **)(iVar3 + 0x78) + 0x14))(uVar10);
        iVar3 = local_c4;
        if (iVar5 != 0) {
          FUN_113a23b0(*(undefined4 *)(*(int *)(local_c4 + 8) + 4));
          FUN_11681360();
          cVar1 = FUN_116d3a70();
          if (cVar1 != '\0') {
            uVar10 = *(undefined4 *)(iVar3 + 0x14);
            goto LAB_107efab8;
          }
        }
        uVar10 = 1;
      }
LAB_107efab8:
      FUN_104d1550("queststatus",uVar10);
    }
    pppppppiStack_154 =
         (int *******)CONCAT31(pppppppiStack_154._1_3_,((byte)iStack_10c & 0x8f) == 10);
    cVar1 = (**(code **)(*piStack_110 + 0x10))
                      (uStack_108,"task_targets",&local_d0,pppppppiStack_154);
    if (cVar1 != '\0') {
      pppppppiStack_124 = (int *******)0xffffffff;
      pppppppiStack_128 = (int *******)0x0;
      pppppppiStack_12c = pppppppiStack_88;
      pppppppiStack_130 = (int *******)0x107efb1a;
      (*(code *)(*local_90)[0x11])();
      pppppppiStack_134 = (int *******)&pppppiStack_64;
      pppppiStack_64 = (int *****)0x0;
      uStack_60 = 0;
      pppppppiStack_130 =
           (int *******)CONCAT31((int3)((uint)unaff_EDI >> 8),((byte)pppppppiStack_d8 & 0x8f) == 10)
      ;
      local_c4 = 0;
      pppppppiStack_138 = (int *******)0x11dca840;
      pppppppiStack_13c = pppppppiStack_d4;
      local_c0 = 0;
      piStack_bc = (int *)0x0;
      pppppppiStack_140 = (int *******)0x107efb7b;
      cVar1 = (**(code **)(*piStack_dc + 0x10))();
      if ((cVar1 != '\0') && (((byte)local_70 & 0x8f) == 6)) {
        pppppppiVar7 = local_6c;
        if (((uint)local_70 >> 6 & 1) != 0) {
          pppppppiVar7 = (int *******)*local_6c;
        }
        pppppppiStack_140 = (int *******)&DAT_11d9d32b;
        pppppppiStack_144 = (int *******)0x107efbc4;
        pppppppiStack_130 = pppppppiVar7;
        cVar1 = FUN_100e57c0();
        if (cVar1 == '\0') {
          if (piVar6 == (int *)0x0) goto LAB_107f0054;
          pppppppiStack_140 = (int *******)0x0;
          pppppppiStack_144 = (int *******)0x0;
          pppppppiStack_14c = (int *******)&pppppppiStack_124;
          pppppppiStack_124 = (int *******)0x0;
          pppppppiStack_150 = (int *******)0x107f000a;
          pppppppiStack_148 = pppppppiVar7;
          FUN_11a98de0();
          pppppppiStack_150 = (int *******)(piVar6 + 5);
          pppppppiStack_154 = (int *******)0x11dbe704;
          pppppppiStack_158 = (int *******)0x107f001e;
          FUN_104d1790();
          pppppppiStack_158 = (int *******)0x1f;
          pppppppiStack_15c = (int *******)0x11dbe6f0;
          pppppppiStack_160 = (int *******)0x107f0030;
          FUN_104d1550();
LAB_107f0033:
          pppppppiStack_150 = (int *******)&pppppppiStack_134;
          pppppppiStack_154 = (int *******)piStack_b4;
          pppppppiStack_158 = (int *******)0x107f004b;
          (**(code **)(*piStack_bc + 0x3c))();
        }
        else {
          pppppppiStack_140 = (int *******)0x107efbdb;
          FUN_107fa640();
          pppppppiVar7 = pppppppiStack_130;
          pppppppiStack_124 = (int *******)0x0;
          pppppppiVar8 = pppppppiStack_d4;
          if (pppppppiStack_d4 != local_d0) {
            do {
              pppppppiStack_140 = (int *******)0x0;
              pppppppiStack_144 = (int *******)0x0;
              pppppppiStack_148 = pppppppiVar7;
              pppppppiStack_14c = (int *******)&pppppppiStack_124;
              pppppppiStack_150 = (int *******)0x107efc11;
              FUN_11a98de0();
              if ((pppppppiVar8[0x3a] == (int ******)0x3) && (pppppppiVar8[0x34] != (int ******)0x4)
                 ) {
                if (pppppppiVar8[6] == pppppppiVar8[7]) {
                  pppppppiStack_150 = (int *******)*pppppppiVar8;
                  pppppppiStack_154 = (int *******)0x11dbe6a8;
                  pppppppiStack_158 = (int *******)0x107efc4b;
                  FUN_104d1550();
                  pppppppiStack_158 = (int *******)pppppppiVar8[1];
                  pppppppiStack_15c = (int *******)0x11dbe69c;
                  pppppppiStack_160 = (int *******)0x107efc5e;
                  FUN_104d1550();
                  pppppppiStack_160 = (int *******)pppppppiVar8[2];
                  FUN_104d1550("nTargetID3");
                  FUN_104d1550("nTargetID4",pppppppiVar8[3]);
                  FUN_104d1550("nTargetID5",pppppppiVar8[4]);
                  FUN_104d1670("strTarget1",pppppppiVar8[0xd]);
                  FUN_104d1670("strTarget2",pppppppiVar8[0x13]);
                  FUN_104d1670("strTarget3",pppppppiVar8[0x19]);
                  pppppppiStack_150 = (int *******)pppppppiVar8[0x1f];
                  pppppppiStack_154 = (int *******)0x11dbe704;
                  pppppppiStack_158 = (int *******)0x107efce6;
                  FUN_104d1670();
                  pppppppiStack_158 = (int *******)pppppppiVar8[0x25];
                  pppppppiStack_15c = (int *******)0x11dbe6f8;
                  pppppppiStack_160 = (int *******)0x107efcfc;
                  FUN_104d1670();
                  pppppppiStack_160 = (int *******)pppppppiVar8[5];
                  FUN_104d1550("nOpType");
                  FUN_104d1550("nCurCount",pppppppiVar8[6]);
                  FUN_104d1550("nMaxCount",pppppppiVar8[7]);
                  FUN_104d1550(&DAT_11dca838,pppppppiVar8[0x39]);
                  FUN_104d1550(&DAT_11dca874,0);
                }
                else if ((int)pppppppiVar8[6] < (int)pppppppiVar8[7]) {
                  pppppppiStack_150 = (int *******)*pppppppiVar8;
                  pppppppiStack_154 = (int *******)0x11dbe6a8;
                  pppppppiStack_158 = (int *******)0x107efece;
                  FUN_104d1550();
                  pppppppiStack_158 = (int *******)pppppppiVar8[1];
                  pppppppiStack_15c = (int *******)0x11dbe69c;
                  pppppppiStack_160 = (int *******)0x107efee1;
                  FUN_104d1550();
                  pppppppiStack_160 = (int *******)pppppppiVar8[2];
                  FUN_104d1550("nTargetID3");
                  FUN_104d1550("nTargetID4",pppppppiVar8[3]);
                  FUN_104d1550("nTargetID5",pppppppiVar8[4]);
                  FUN_104d1670("strTarget1",pppppppiVar8[0xd]);
                  FUN_104d1670("strTarget2",pppppppiVar8[0x13]);
                  FUN_104d1670("strTarget3",pppppppiVar8[0x19]);
                  pppppppiStack_150 = (int *******)pppppppiVar8[0x1f];
                  pppppppiStack_154 = (int *******)0x11dbe704;
                  pppppppiStack_158 = (int *******)0x107eff69;
                  FUN_104d1670();
                  pppppppiStack_158 = (int *******)pppppppiVar8[0x25];
                  pppppppiStack_15c = (int *******)0x11dbe6f8;
                  pppppppiStack_160 = (int *******)0x107eff7f;
                  FUN_104d1670();
                  pppppppiStack_160 = (int *******)pppppppiVar8[5];
                  FUN_104d1550("nOpType");
                  FUN_104d1550("nCurCount",pppppppiVar8[6]);
                  FUN_104d1550("nMaxCount",pppppppiVar8[7]);
                  FUN_104d1550(&DAT_11dca838,pppppppiVar8[0x39]);
                  FUN_104d1550(&DAT_11dca874,0);
                  goto LAB_107f0033;
                }
              }
              pppppppiStack_150 = (int *******)*pppppppiVar8;
              pppppppiStack_154 = (int *******)0x11dbe6a8;
              pppppppiStack_158 = (int *******)0x107efd7a;
              FUN_104d1550();
              pppppppiStack_158 = (int *******)pppppppiVar8[1];
              pppppppiStack_15c = (int *******)0x11dbe69c;
              pppppppiStack_160 = (int *******)0x107efd8d;
              FUN_104d1550();
              pppppppiStack_160 = (int *******)pppppppiVar8[2];
              FUN_104d1550("nTargetID3");
              FUN_104d1550("nTargetID4",pppppppiVar8[3]);
              FUN_104d1550("nTargetID5",pppppppiVar8[4]);
              FUN_104d1670("strTarget1",pppppppiVar8[0xd]);
              FUN_104d1670("strTarget2",pppppppiVar8[0x13]);
              FUN_104d1670("strTarget3",pppppppiVar8[0x19]);
              pppppppiStack_150 = (int *******)pppppppiVar8[0x1f];
              pppppppiStack_154 = (int *******)0x11dbe704;
              pppppppiStack_158 = (int *******)0x107efe15;
              FUN_104d1670();
              pppppppiStack_158 = (int *******)pppppppiVar8[0x25];
              pppppppiStack_15c = (int *******)0x11dbe6f8;
              pppppppiStack_160 = (int *******)0x107efe2b;
              FUN_104d1670();
              pppppppiStack_160 = (int *******)pppppppiVar8[0x39];
              FUN_104d1550(&DAT_11dca838);
              FUN_104d1550("nOpType",pppppppiVar8[5]);
              FUN_104d1550("nCurCount",pppppppiVar8[6]);
              FUN_104d1550("nMaxCount",pppppppiVar8[7]);
              FUN_104d1550(&DAT_11dca874,0);
              pppppppiStack_150 = (int *******)&pppppppiStack_134;
              pppppppiStack_154 = (int *******)piStack_b4;
              pppppppiStack_158 = (int *******)0x107efea7;
              (**(code **)(*piStack_bc + 0x3c))();
              pppppppiVar8 = pppppppiVar8 + 0x3b;
            } while (pppppppiVar8 != local_d0);
          }
        }
        pppppppiStack_140 = (int *******)0x107f0054;
        FUN_104d7c10();
      }
LAB_107f0054:
      if (((uint)local_70 >> 6 & 1) != 0) {
        pppppppiStack_144 = (int *******)&pppppiStack_74;
        pppppppiStack_140 = local_6c;
        pppppppiStack_148 = (int *******)0x107f007d;
        (*(code *)(*pppppiStack_74)[2])();
        pppppiStack_74 = (int *****)0x0;
      }
      local_70 = (int *******)0x0;
      pppppppiStack_140 = (int *******)0x107f009c;
      FUN_104f9a70();
    }
    pppppppiVar7 = pppppppiStack_124;
    pppppppiStack_124 = pppppppiStack_88;
    if (((uint)local_6c >> 6 & 1) != 0) {
      pppppppiStack_128 = (int *******)&local_70;
      pppppppiStack_124 = pppppppiStack_68;
      pppppppiStack_12c = (int *******)0x107f00c5;
      (*(code *)(*local_70)[2])();
      local_70 = (int *******)0x0;
      pppppppiVar7 = pppppppiStack_124;
      pppppppiStack_124 = pppppppiStack_88;
    }
  }
  local_6c = (int *******)0x0;
  pppppppiStack_88 = pppppppiStack_124;
  if (((uint)local_8c >> 6 & 1) != 0) {
    local_6c = (int *******)0x0;
    pppppppiStack_128 = (int *******)&local_90;
    pppppppiStack_12c = (int *******)0x107f0167;
    (*(code *)(*local_90)[2])();
    local_90 = (int *******)0x0;
    pppppppiVar7 = pppppppiStack_124;
  }
  pppppppiStack_124 = pppppppiVar7;
  local_8c = (int *******)0x0;
  if (((uint)local_e4 >> 6 & 1) != 0) {
    pppppppiStack_128 = (int *******)&local_e8;
    pppppppiStack_124 = pppppppiStack_e0;
    pppppppiStack_12c = (int *******)0x107f019a;
    (*(code *)(*local_e8)[2])();
    local_e8 = (int *******)0x0;
  }
  local_e4 = (int *******)0x0;
  if (((uint)local_a4 >> 6 & 1) != 0) {
    pppppppiStack_128 = &local_a8;
    pppppppiStack_124 = pppppppiStack_a0;
    pppppppiStack_12c = (int *******)0x107f01ca;
    (*(code *)(*local_a8)[2])();
    local_a8 = (int ******)0x0;
  }
  local_a4 = (int ******)0x0;
  if ((local_cc >> 6 & 1) != 0) {
    pppppppiStack_128 = (int *******)&local_d0;
    pppppppiStack_124 = local_c8;
    pppppppiStack_12c = (int *******)0x107f01f7;
    (*(code *)(*local_d0)[2])();
    local_d0 = (int *******)0x0;
  }
  local_cc = 0;
  if ((local_28 != (int *******)local_3c) && (local_28 != (int *******)0x0)) {
    pppppppiStack_124 = local_28;
    pppppppiStack_128 = (int *******)0x107f0223;
    FUN_10c3d5d0();
  }
  if ((local_10 != (int *******)local_24) && (local_10 != (int *******)0x0)) {
    pppppppiStack_124 = local_10;
    pppppppiStack_128 = (int *******)0x107f0242;
    FUN_10c3d5d0();
  }
LAB_107f0245:
  FUN_11a89daa();
  return;
}



