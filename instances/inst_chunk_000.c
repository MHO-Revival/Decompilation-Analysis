/* ===== FUN_101480d0 @ 101480d0  size=286 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[levelMode]"
//   "0x%02x"
//   "[modeStatCnt]"
//   "[modeStatType]"
//   " 0x%02x"
//   "[modeStatVal]"

/* [RE-AUTO c0]
   strings:
     ""[levelMode]""
     ""0x%02x""
     ""[modeStatCnt]""
     ""[modeStatType]""
     "" 0x%02x""
     ""[modeStatVal]"" */

int __thiscall
FUN_101480d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelMode]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[modeStatCnt]","0x%02x",
                                  *(undefined1 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[modeStatType]",*(byte *)(param_1 + 1),0);
    if (iVar1 == 0) {
      bVar2 = 0;
      if (*(char *)(param_1 + 1) != '\0') {
        do {
          iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)(bVar2 + 5 + (int)param_1));
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *(byte *)(param_1 + 1));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        if (10 < *(byte *)(param_1 + 1)) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[modeStatVal]",*(byte *)(param_1 + 1),0);
        if (iVar1 == 0) {
          bVar2 = 0;
          if (*(char *)(param_1 + 1) != '\0') {
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,
                                   *(undefined4 *)((int)param_1 + (uint)bVar2 * 4 + 0xf));
              if (iVar1 != 0) {
                return iVar1;
              }
              bVar2 = bVar2 + 1;
            } while (bVar2 < *(byte *)(param_1 + 1));
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1015f5a0 @ 1015f5a0  size=396 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[fixedTimes]"
//   "[blockArg1]"
//   "[blockArg2]"
//   "[blockArg3]"
//   "[blockArg4]"
//   "[completeBitCount]"
//   "[completeBit]"
//   " 0x%02x"
//   "[levelId]"
//   "[levelResult]"

/* [RE-AUTO c0]
   strings:
     ""[fixedTimes]""
     ""[blockArg1]""
     ""[blockArg2]""
     ""[blockArg3]""
     ""[blockArg4]""
     ""[completeBitCount]""
     ""[completeBit]""
     "" 0x%02x""
     ""[levelId]""
     ""[levelResult]"" */

int __thiscall
FUN_1015f5a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fixedTimes]",&DAT_11d9e0b4,*param_1);
  if (((((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[blockArg1]",&DAT_11d9e0b4,param_1[1])
        , iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[blockArg2]",&DAT_11d9e0b4,param_1[2]),
       iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[blockArg3]",&DAT_11d9e0b4,param_1[3]),
       iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[blockArg4]",&DAT_11d9e0b4,param_1[4]),
       iVar1 == 0)))) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[completeBitCount]",&DAT_11d9e0b4,
                                  param_1[5]), iVar1 == 0)) {
    iVar1 = param_1[5];
    if (iVar1 < 0) {
      return -6;
    }
    if (5 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[completeBit]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[5]) {
        do {
          iVar2 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)((int)param_1 + iVar1 + 0x18));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)param_1[5]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelId]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x1d)), iVar1 == 0)) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelResult]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0x21));
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1028b500 @ 1028b500  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTriggerId]"
//   "[iInstancePoint]"
//   "[iLevelID]"
//   "[iLevelDiff]"
//   "[iLevelMode]"

/* [RE-AUTO c0]
   strings:
     ""[iTriggerId]""
     ""[iInstancePoint]""
     ""[iLevelID]""
     ""[iLevelDiff]""
     ""[iLevelMode]"" */

void __thiscall
FUN_1028b500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTriggerId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInstancePoint]",&DAT_11d9e0b4,param_1[1])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelDiff]",&DAT_11d9e0b4,param_1[3])
        ;
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelMode]",&DAT_11d9e0b4,param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1028bbb0 @ 1028bbb0  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTriggerId]"
//   "[iInstancePoint]"
//   "[iLevelID]"
//   "[iLevelDiff]"
//   "[iLevelMode]"

/* [RE-AUTO c0]
   strings:
     ""[iTriggerId]""
     ""[iInstancePoint]""
     ""[iLevelID]""
     ""[iLevelDiff]""
     ""[iLevelMode]"" */

void __thiscall
FUN_1028bbb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTriggerId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInstancePoint]",&DAT_11d9e0b4,param_1[1])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelDiff]",&DAT_11d9e0b4,param_1[3])
        ;
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelMode]",&DAT_11d9e0b4,param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1029ab90 @ 1029ab90  size=268 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iInstanceDataCnt]"
//   "[instanceDataType]"
//   "[instanceDataValue]"

/* [RE-AUTO c0]
   strings:
     ""[iInstanceDataCnt]""
     ""[instanceDataType]""
     ""[instanceDataValue]"" */

int __thiscall FUN_1029ab90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInstanceDataCnt]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[instanceDataType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      piVar3 = param_1;
      if (0 < *param_1) {
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,piVar3[1]);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar1 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = *param_1;
        if (iVar1 < 0) {
          return -6;
        }
        if (0x28 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[instanceDataValue]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < *param_1) {
            piVar3 = param_1 + 0x29;
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*piVar3);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar1 < *param_1);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1029cd70 @ 1029cd70  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iInstanceID]"

/* [RE-AUTO c0]
   strings:
     ""[iInstanceID]"" */

undefined4 __thiscall
FUN_1029cd70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iInstanceID]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1029cdf0 @ 1029cdf0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iInstanceID]"

/* [RE-AUTO c0]
   strings:
     ""[iInstanceID]"" */

void __thiscall
FUN_1029cdf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iInstanceID]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_1029ce20 @ 1029ce20  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iInstanceID]"

/* [RE-AUTO c0]
   strings:
     ""[iInstanceID]"" */

undefined1 * __thiscall
FUN_1029ce20(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iInstanceID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1029ceb0 @ 1029ceb0  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iInstanceID]"

/* [RE-AUTO c0]
   strings:
     ""[iInstanceID]"" */

undefined1 * __thiscall
FUN_1029ceb0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iInstanceID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_102a22d0 @ 102a22d0  size=355 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iBattleGroundID]"
//   "[iLevelID]"
//   "[iCreateMaxPlayerCount]"
//   "[iGameMode]"
//   "[iTimeType]"
//   "[iWeatherType]"
//   "[fTime]"
//   "[iLevelRandSeed]"
//   "0x%02x"
//   "[bWarningFlag]"
//   "[iCreatePlayerMaxLv]"

/* [RE-AUTO c0]
   strings:
     ""[iBattleGroundID]""
     ""[iLevelID]""
     ""[iCreateMaxPlayerCount]""
     ""[iGameMode]""
     ""[iTimeType]""
     ""[iWeatherType]""
     ""[fTime]""
     ""[iLevelRandSeed]""
     ""0x%02x""
     ""[bWarningFlag]"" */

void __thiscall
FUN_102a22d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBattleGroundID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCreateMaxPlayerCount]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGameMode]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTimeType]",&DAT_11d9e0b4,param_1[4]
                                     );
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeatherType]",&DAT_11d9e0b4,
                                        param_1[5]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fTime]",&DAT_11da0cf4,
                                          (double)(float)param_1[6]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelRandSeed]",&DAT_11d9e0b4
                                            ,param_1[7]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bWarningFlag]","0x%02x",
                                              *(undefined1 *)(param_1 + 8));
                  if (iVar1 == 0) {
                    TdrText_FieldScalar(param_2,param_3,param_4,"[iCreatePlayerMaxLv]",&DAT_11d9e0b4
                                        ,*(undefined4 *)((int)param_1 + 0x21));
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



/* ===== FUN_102a2a40 @ 102a2a40  size=399 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar
// strings:
//   "[iErrNo]"
//   "[iRoleId]"
//   "[iInstanceID]"
//   "[szBattleSvr]"
//   "[iServiceID]"
//   "[szKey]"
//   "[stInstanceInfo]"
//   "0x%02x"
//   "[bSameBS]"
//   "[bCrossRegion]"
//   "[bMatchRoom]"

/* [RE-AUTO c0]
   strings:
     ""[iErrNo]""
     ""[iRoleId]""
     ""[iInstanceID]""
     ""[szBattleSvr]""
     ""[iServiceID]""
     ""[szKey]""
     ""[stInstanceInfo]""
     ""0x%02x""
     ""[bSameBS]""
     ""[bCrossRegion]"" */

void __thiscall FUN_102a2a40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrNo]",&DAT_11d9e0b4,*param_1);
  if (((((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRoleId]",&DAT_11d9e0b4,param_1[1]),
        iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInstanceID]",&DAT_11d9e0b4,param_1[2]
                                   ), iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldValueFmt(param_4,"[szBattleSvr]",param_1 + 3), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iServiceID]",&DAT_11d9e0b4,
                                    param_1[0x83]), iVar1 == 0)))) &&
     ((iVar1 = TdrText_FieldValueFmt(param_4,"[szKey]",param_1 + 0x84), iVar1 == 0 &&
      (iVar1 = TdrText_FieldLabelChar(param_4,"[stInstanceInfo]",extraout_ECX), iVar1 == 0)))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102a22d0(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSameBS]","0x%02x",
                                     *(undefined1 *)((int)param_1 + 0x255)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bCrossRegion]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0x256)), iVar1 == 0)) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bMatchRoom]","0x%02x",
                          *(undefined1 *)((int)param_1 + 599));
    }
  }
  return;
}



/* ===== FUN_102a3760 @ 102a3760  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLevelid]"
//   "[iInstanceid]"

/* [RE-AUTO c0]
   strings:
     ""[iLevelid]""
     ""[iInstanceid]"" */

int __thiscall
FUN_102a3760(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iLevelid]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iInstanceid]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_102a3800 @ 102a3800  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLevelid]"
//   "[iInstanceid]"

/* [RE-AUTO c0]
   strings:
     ""[iLevelid]""
     ""[iInstanceid]"" */

void __thiscall
FUN_102a3800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelid]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iInstanceid]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_102a83b0 @ 102a83b0  size=429 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iOnlinePlayerNum]"
//   "[iPlayerInTown]"
//   "[iPlayerInBattle]"
//   "[iActiveInstanceCount]"
//   "[iPlayerInWaitQueue]"
//   "[fWorldFPS]"
//   "[townFPS]"
//   "[battleFPS]"

/* [RE-AUTO c0]
   strings:
     ""[iOnlinePlayerNum]""
     ""[iPlayerInTown]""
     ""[iPlayerInBattle]""
     ""[iActiveInstanceCount]""
     ""[iPlayerInWaitQueue]""
     ""[fWorldFPS]""
     ""[townFPS]""
     ""[battleFPS]"" */

void __thiscall
FUN_102a83b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar2;
  float *pfVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOnlinePlayerNum]",&DAT_11d9e0b4,*param_1);
  if (((((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerInTown]",&DAT_11d9e0b4,
                                     param_1[1]), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerInBattle]",&DAT_11d9e0b4,
                                    param_1[2]), iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iActiveInstanceCount]",&DAT_11d9e0b4,
                                    param_1[3]), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerInWaitQueue]",&DAT_11d9e0b4,
                                    param_1[4]), iVar1 == 0)))) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fWorldFPS]",&DAT_11da0cf4,
                                   (double)(float)param_1[5]), iVar1 == 0 &&
      (iVar1 = TdrText_ArrayHeader(extraout_ECX,"[townFPS]",10,0), iVar1 == 0)))) {
    uVar2 = 0;
    pfVar3 = (float *)(param_1 + 6);
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11da064c,(double)*pfVar3);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar2 < 10);
    iVar1 = TdrBuf_PutU8Z(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[battleFPS]",10,0), iVar1 == 0)) {
      uVar2 = 0;
      pfVar3 = (float *)(param_1 + 0x10);
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11da064c,(double)*pfVar3);
        if (iVar1 != 0) {
          return;
        }
        uVar2 = uVar2 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < 10);
      TdrBuf_PutU8Z(param_4);
    }
  }
  return;
}



/* ===== FUN_102fbb60 @ 102fbb60  size=249 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemValueFmt
// strings:
//   "[dwBattleSvrID]"
//   "[dwInstanceID]"
//   "[szLevelName]"
//   "[nCount]"
//   "[aszPlayerName]"

/* [RE-AUTO c0]
   strings:
     ""[dwBattleSvrID]""
     ""[dwInstanceID]""
     ""[szLevelName]""
     ""[nCount]""
     ""[aszPlayerName]"" */

int __thiscall
FUN_102fbb60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwBattleSvrID]",&DAT_11d9f574,*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwInstanceID]",&DAT_11d9f574,
                                    param_1[1]), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldValueFmt(param_4,"[szLevelName]",param_1 + 2), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                                  (int)*(short *)(param_1 + 10)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 10);
    if (sVar1 < 0) {
      return -6;
    }
    if (8 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_ArrayElemValueFmt
                          (param_4,"[aszPlayerName]",(int)sVar3,sVar3 * 0x20 + 0x2a + (int)param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 10));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_102fc860 @ 102fc860  size=263 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[dwIndex]"
//   "[nErrCode]"
//   "[nCount]"
//   "[astInstanceInfo]"

/* [RE-AUTO c0]
   strings:
     ""[dwIndex]""
     ""[nErrCode]""
     ""[nCount]""
     ""[astInstanceInfo]"" */

int __thiscall FUN_102fc860(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  short sVar4;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwIndex]",&DAT_11d9f574,*param_1);
  if (((iVar2 == 0) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nErrCode]",&DAT_11d9e0b4,
                                   (int)*(short *)(param_1 + 1)), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                                  (int)*(short *)((int)param_1 + 6)), iVar2 == 0)) {
    sVar1 = *(short *)((int)param_1 + 6);
    if (sVar1 < 0) {
      return -6;
    }
    if (10 < sVar1) {
      return -7;
    }
    uVar3 = 0;
    sVar4 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astInstanceInfo]",(int)sVar4,uVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102fbb60(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar4 = sVar4 + 1;
        uVar3 = extraout_ECX;
      } while (sVar4 < *(short *)((int)param_1 + 6));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_103169b0 @ 103169b0  size=240 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[nLevelMode]"
//   "[dwMapId]"
//   "[dwLevelGrpId]"
//   "[nDifficulty]"
//   "[nCrossLine]"
//   "[dwBeginFrom]"
//   "[dwEndTo]"

/* [RE-AUTO c0]
   strings:
     ""[nLevelMode]""
     ""[dwMapId]""
     ""[dwLevelGrpId]""
     ""[nDifficulty]""
     ""[nCrossLine]""
     ""[dwBeginFrom]""
     ""[dwEndTo]"" */

void __thiscall
FUN_103169b0(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nLevelMode]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMapId]",&DAT_11d9f574,
                                *(undefined4 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLevelGrpId]",&DAT_11d9f574,
                                  *(undefined4 *)(param_1 + 3));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nDifficulty]",&DAT_11d9e0b4,
                                    (int)param_1[5]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCrossLine]",&DAT_11d9e0b4,
                                      (int)param_1[6]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwBeginFrom]",&DAT_11d9f574,
                                        *(undefined4 *)(param_1 + 7));
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[dwEndTo]",&DAT_11d9f574,
                                  *(undefined4 *)(param_1 + 9));
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1047cee0 @ 1047cee0  size=361 ===== */
// strings:
//   "BT Res"
//   "Template BT Tree/Nodes"
//   "Instanced BT Tree/Nodes"

/* [RE-AUTO c0]
   strings:
     ""BT Res""
     ""Template BT Tree/Nodes""
     ""Instanced BT Tree/Nodes"" */

void __thiscall FUN_1047cee0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != (int *)0x0) {
    local_8 = (**(code **)(*param_2 + 0xc))();
    uVar2 = (**(code **)(*param_2 + 0x18))(local_8,"BT Res",1);
    (**(code **)(*param_2 + 0x10))(uVar2);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0xb0,1);
  FUN_1047b3b0(param_1 + 0xc);
  FUN_1047b3b0(param_1 + 0x24);
  FUN_104808e0(param_1 + 0x60);
  FUN_10480940(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(*param_2 + 0x4c))(*(int *)(param_1 + 0x44),0x14,1);
  }
  if (*(int *)(*(int *)(param_1 + 0x44) + 4) == 1) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar3 = (**(code **)(*param_2 + 0x18))(uVar2,"Template BT Tree/Nodes",1);
    (**(code **)(*param_2 + 0x10))(uVar3);
    FUN_1047ce00(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc));
    (**(code **)(*param_2 + 0x10))(uVar2);
  }
  uVar2 = (**(code **)(*param_2 + 0xc))();
  uVar3 = (**(code **)(*param_2 + 0x18))(uVar2,"Instanced BT Tree/Nodes",1);
  (**(code **)(*param_2 + 0x10))(uVar3);
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 != param_1 + 0x48) {
    do {
      FUN_1047ce00(*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc));
      iVar4 = *(int *)(iVar5 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar5 + 4);
        if (iVar5 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar5 = iVar4;
            iVar4 = *(int *)(iVar5 + 4);
          } while (iVar5 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar5 + 0xc) != iVar4) {
          iVar5 = iVar4;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar4 + 8); iVar5 = iVar4, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar4 = iVar1;
        }
      }
    } while (iVar5 != param_1 + 0x48);
  }
  (**(code **)(*param_2 + 0x10))(uVar2);
  (**(code **)(*param_2 + 0x10))(local_8);
  return;
}



/* ===== FUN_104fb080 @ 104fb080  size=178 ===== */
// strings:
//   "GreyImg_Active"
//   "FlashUI"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""GreyImg_Active""
     ""FlashUI""
     ""NewLobby"" */

void FUN_104fb080(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_10;
  int *local_c;
  
  if ((DAT_1202e818 != (int *)0x0) && ((int *)DAT_1202e818[0xd] != (int *)0x0)) {
    (**(code **)(*(int *)DAT_1202e818[0xd] + 0x2b4))("GreyImg_Active",0,0);
  }
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_10);
  }
  piVar3 = local_c;
  piVar4 = (int *)(**(code **)(*local_10 + 0x3c))("NewLobby");
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 100))(0);
  }
  return;
}



/* ===== FUN_10509470 @ 10509470  size=2177 ===== */
// strings:
//   "Dialog_LinkClick"
//   "GuideUIStepComplete"
//   "WinModelChange"
//   "EnableAction"
//   "GamepadUIFocus"
//   "QuickSpeakModeFocus"
//   "RelaySvrOk"
//   "RelaySvrCancel"
//   "ReloadUIInfo"
//   "onLimitUnlockFunc"
//   "OpenSafeModeUrl"
//   "OpenSensitiveUrl"
//   "OpenBangBangWnd"
//   "ReqChangeLineToTeamLeader"
//   "ReqChangeTownInstance"
//   "ReqLeaveFarm"
//   "ReqLeaveCamp"
//   "OpenXianYouWnd"
//   "InitModel"
//   "UnloadSwfNotify"

/* [RE-AUTO c0]
   strings:
     ""Dialog_LinkClick""
     ""GuideUIStepComplete""
     ""WinModelChange""
     ""EnableAction""
     ""GamepadUIFocus""
     ""QuickSpeakModeFocus""
     ""RelaySvrOk""
     ""RelaySvrCancel""
     ""ReloadUIInfo""
     ""onLimitUnlockFunc"" */

void __fastcall FUN_10509470(code ****param_1)

{
  int *piVar1;
  int iVar2;
  code *pcStack_1b8;
  char *pcStack_1b4;
  code **ppcStack_1b0;
  code ***pppcStack_1ac;
  code *pcStack_1a8;
  code **ppcStack_1a4;
  code ***pppcStack_1a0;
  code ***pppcStack_19c;
  code **ppcStack_198;
  code **ppcStack_194;
  code ***pppcStack_190;
  undefined4 ***pppuStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
  undefined4 ***pppuStack_17c;
  code ***pppcStack_178;
  code ***pppcStack_174;
  char *pcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  code ***pppcStack_164;
  code *pcStack_160;
  char *pcStack_15c;
  code ***pppcStack_158;
  undefined4 ***pppuStack_154;
  code ***pppcStack_150;
  code *pcStack_14c;
  char *pcStack_148;
  code ***pppcStack_144;
  undefined4 ***pppuStack_140;
  code ***pppcStack_13c;
  code *pcStack_138;
  char *pcStack_134;
  code ***pppcStack_130;
  undefined4 ***pppuStack_12c;
  code ***pppcStack_128;
  code *pcStack_124;
  char *pcStack_120;
  code ***pppcStack_11c;
  undefined4 ***pppuStack_118;
  code ***pppcStack_114;
  code *pcStack_110;
  char *pcStack_10c;
  code ***pppcStack_108;
  undefined4 ***pppuStack_104;
  code ***pppcStack_100;
  undefined1 *puStack_fc;
  char *pcStack_f8;
  code ***pppcStack_f4;
  undefined4 ***pppuStack_f0;
  code ***pppcStack_ec;
  code *pcStack_e8;
  char *pcStack_e4;
  code ***pppcStack_e0;
  undefined4 ***pppuStack_dc;
  code ***pppcStack_d8;
  code *pcStack_d4;
  char *pcStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  code ***pppcStack_c4;
  undefined1 *puStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  undefined4 ***pppuStack_b4;
  code ***pppcStack_b0;
  undefined1 *puStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  undefined4 ***pppuStack_a0;
  code ***pppcStack_9c;
  code *pcStack_98;
  char *pcStack_94;
  code ***pppcStack_90;
  undefined4 ***pppuStack_8c;
  code ***pppcStack_88;
  code *pcStack_84;
  char *pcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code *pcStack_70;
  char *pcStack_6c;
  code ***pppcStack_68;
  undefined4 ***pppuStack_64;
  code ***pppcStack_60;
  code *pcStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  undefined4 ***pppuStack_50;
  code ***pppcStack_4c;
  code *pcStack_48;
  char *pcStack_44;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  code ***pppcStack_38;
  undefined *puStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  undefined4 ***apppuStack_24 [4];
  undefined4 ***pppuStack_14;
  undefined4 ***pppuStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)apppuStack_24;
  pcStack_2c = (char *)0x1050948c;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x10509497;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105094a4;
      pppcStack_30 = (code ***)param_1;
      FUN_1050da00();
    }
  }
  pcStack_2c = (char *)0x105094a9;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x105094b4;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105094c1;
      pppcStack_30 = (code ***)param_1;
      FUN_1050da50();
    }
  }
  pcStack_2c = (char *)0x105094c6;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x105094d1;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105094de;
      pppcStack_30 = (code ***)param_1;
      FUN_1050daa0();
    }
  }
  pcStack_2c = (char *)0x105094e3;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x105094ee;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105094fb;
      pppcStack_30 = (code ***)param_1;
      FUN_1050daf0();
    }
  }
  pcStack_2c = (char *)0x10509500;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x1050950b;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x10509518;
      pppcStack_30 = (code ***)param_1;
      FUN_1050db40();
    }
  }
  pcStack_2c = (char *)0x1050951d;
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    pcStack_2c = (char *)0x10509528;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x10509535;
      pppcStack_30 = (code ***)param_1;
      FUN_1050db90();
    }
  }
  pcStack_2c = (char *)0x1050953a;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x10509543;
    FUN_10d17440();
    pcStack_2c = (char *)0x1050954a;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x10509555;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x1050955c;
      FUN_10d17870();
      puStack_34 = (undefined *)0x10509563;
      FUN_1050dbe0();
    }
  }
  pcStack_2c = (char *)0x10509568;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x10509571;
    FUN_10d17440();
    pcStack_2c = (char *)0x10509578;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x10509583;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x1050958a;
      FUN_10d17870();
      puStack_34 = (undefined *)0x10509591;
      FUN_1050dc30();
    }
  }
  pcStack_2c = (char *)0x10509596;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x1050959f;
    FUN_10d17440();
    pcStack_2c = (char *)0x105095a6;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105095b1;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x105095b8;
      FUN_10d17870();
      puStack_34 = (undefined *)0x105095bf;
      FUN_1050dc80();
    }
  }
  pcStack_2c = (char *)0x105095c4;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x105095cd;
    FUN_10d17440();
    pcStack_2c = (char *)0x105095d4;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x105095df;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x105095e6;
      FUN_10d17870();
      puStack_34 = (undefined *)0x105095ed;
      FUN_1050dcd0();
    }
  }
  pcStack_2c = (char *)0x105095f2;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x105095fb;
    FUN_10d17440();
    pcStack_2c = (char *)0x10509602;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x1050960d;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x10509614;
      FUN_10d17870();
      puStack_34 = (undefined *)0x1050961b;
      FUN_1050dd20();
    }
  }
  pcStack_2c = (char *)0x10509620;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    pcStack_2c = (char *)0x10509629;
    FUN_10d17440();
    pcStack_2c = (char *)0x10509630;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_34 = (undefined *)0x1050963b;
      pppcStack_30 = (code ***)param_1;
      FUN_10d17440();
      puStack_34 = (undefined *)0x10509642;
      FUN_10d17870();
      puStack_34 = (undefined *)0x10509649;
      FUN_1050dd70();
    }
  }
  pppuStack_14 = apppuStack_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbef8c;
  puStack_34 = (undefined *)0x10509666;
  pppuStack_10 = pppuStack_14;
  FUN_100b62c0();
  puStack_34 = &DAT_1050b1c0;
  pppuStack_3c = (undefined4 ***)&pcStack_2c;
  pppuStack_40 = (undefined4 ***)0x10509681;
  pppcStack_38 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)apppuStack_24[0] != &pppcStack_38) &&
     ((code ****)apppuStack_24[0] != (code ****)0x0)) {
    pppuStack_40 = apppuStack_24[0];
    pcStack_44 = (char *)0x10509697;
    FUN_10c3d5d0();
  }
  apppuStack_24[0] = &pppcStack_38;
  pppuStack_40 = (undefined4 ***)0x11dbeff7;
  pcStack_44 = "GuideUIStepComplete";
  pcStack_48 = (code *)0x105096b7;
  FUN_100b62c0();
  pcStack_48 = FUN_1050b1d0;
  pppuStack_50 = &pppuStack_40;
  pppcStack_54 = (code ***)0x105096d2;
  pppcStack_4c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x105096e8;
    FUN_10c3d5d0();
  }
  pppuStack_3c = &pppcStack_4c;
  pppcStack_54 = (code ***)0x11dbefe2;
  pcStack_58 = "WinModelChange";
  pcStack_5c = (code *)0x10509708;
  pppcStack_38 = (code ***)pppuStack_3c;
  FUN_100b62c0();
  pcStack_5c = FUN_1050b220;
  pppuStack_64 = &pppcStack_54;
  pppcStack_68 = (code ***)0x10509723;
  pppcStack_60 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_4c != &pppcStack_60) && ((code ****)pppcStack_4c != (code ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x10509739;
    FUN_10c3d5d0();
  }
  pppuStack_50 = &pppcStack_60;
  pppcStack_68 = (code ***)0x11dbefd0;
  pcStack_6c = "EnableAction";
  pcStack_70 = (code *)0x10509759;
  pppcStack_4c = (code ***)pppuStack_50;
  FUN_100b62c0();
  pcStack_70 = FUN_1050b190;
  pppuStack_78 = &pppcStack_68;
  pppcStack_7c = (code ***)0x10509774;
  pppcStack_74 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pcStack_80 = (char *)0x1050978a;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppcStack_7c = (code ***)0x11dbefc2;
  pcStack_80 = "GamepadUIFocus";
  pcStack_84 = (code *)0x105097aa;
  pppcStack_60 = (code ***)pppuStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_1050b170;
  pppuStack_8c = &pppcStack_7c;
  pppcStack_90 = (code ***)0x105097c5;
  pppcStack_88 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_74 != &pppcStack_88) && ((code ****)pppcStack_74 != (code ****)0x0)) {
    pppcStack_90 = pppcStack_74;
    pcStack_94 = (char *)0x105097db;
    FUN_10c3d5d0();
  }
  pppuStack_78 = &pppcStack_88;
  pppcStack_90 = (code ***)0x11dbf037;
  pcStack_94 = "QuickSpeakModeFocus";
  pcStack_98 = (code *)0x105097fb;
  pppcStack_74 = (code ***)pppuStack_78;
  FUN_100b62c0();
  pcStack_98 = FUN_1050b180;
  pppuStack_a0 = &pppcStack_90;
  pppcStack_a4 = (code ***)0x10509816;
  pppcStack_9c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x1050982c;
    FUN_10c3d5d0();
  }
  pppuStack_8c = &pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dbf022;
  pcStack_a8 = "RelaySvrOk";
  puStack_ac = (undefined1 *)0x1050984c;
  pppcStack_88 = (code ***)pppuStack_8c;
  FUN_100b62c0();
  puStack_ac = &LAB_1050b250;
  pppuStack_b4 = &pppcStack_a4;
  pppcStack_b8 = (code ***)0x10509867;
  pppcStack_b0 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x1050987d;
    FUN_10c3d5d0();
  }
  pppuStack_a0 = &pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dbf016;
  pcStack_bc = "RelaySvrCancel";
  puStack_c0 = (undefined1 *)0x1050989d;
  pppcStack_9c = (code ***)pppuStack_a0;
  FUN_100b62c0();
  puStack_c0 = &LAB_1050b280;
  pppuStack_c8 = &pppcStack_b8;
  pppcStack_cc = (code ***)0x105098b8;
  pppcStack_c4 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pcStack_d0 = (char *)0x105098ce;
    FUN_10c3d5d0();
  }
  pppuStack_b4 = &pppcStack_c4;
  pppcStack_cc = (code ***)0x11dbf004;
  pcStack_d0 = "ReloadUIInfo";
  pcStack_d4 = (code *)0x105098ee;
  pppcStack_b0 = (code ***)pppuStack_b4;
  FUN_100b62c0();
  pcStack_d4 = FUN_1050b370;
  pppuStack_dc = &pppcStack_cc;
  pppcStack_e0 = (code ***)0x10509909;
  pppcStack_d8 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_c4 != &pppcStack_d8) && ((code ****)pppcStack_c4 != (code ****)0x0)) {
    pppcStack_e0 = pppcStack_c4;
    pcStack_e4 = (char *)0x1050991f;
    FUN_10c3d5d0();
  }
  pppuStack_c8 = &pppcStack_d8;
  pppcStack_e0 = (code ***)0x11dbf07d;
  pcStack_e4 = "onLimitUnlockFunc";
  pcStack_e8 = (code *)0x1050993f;
  pppcStack_c4 = (code ***)pppuStack_c8;
  FUN_100b62c0();
  pcStack_e8 = FUN_1050b2b0;
  pppuStack_f0 = &pppcStack_e0;
  pppcStack_f4 = (code ***)0x1050995a;
  pppcStack_ec = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_d8 != &pppcStack_ec) && ((code ****)pppcStack_d8 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d8;
    pcStack_f8 = (char *)0x10509970;
    FUN_10c3d5d0();
  }
  pppuStack_dc = &pppcStack_ec;
  pppcStack_f4 = (code ***)0x11dbf06b;
  pcStack_f8 = "OpenSafeModeUrl";
  puStack_fc = (undefined1 *)0x10509990;
  pppcStack_d8 = (code ***)pppuStack_dc;
  FUN_100b62c0();
  puStack_fc = &LAB_1050bf50;
  pppuStack_104 = &pppcStack_f4;
  pppcStack_108 = (code ***)0x105099ab;
  pppcStack_100 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_ec != &pppcStack_100) && ((code ****)pppcStack_ec != (code ****)0x0)) {
    pppcStack_108 = pppcStack_ec;
    pcStack_10c = (char *)0x105099c1;
    FUN_10c3d5d0();
  }
  pppuStack_f0 = &pppcStack_100;
  pppcStack_108 = (code ***)0x11dbf058;
  pcStack_10c = "OpenSensitiveUrl";
  pcStack_110 = (code *)0x105099e1;
  pppcStack_ec = (code ***)pppuStack_f0;
  FUN_100b62c0();
  pcStack_110 = FUN_1050bf90;
  pppuStack_118 = &pppcStack_108;
  pppcStack_11c = (code ***)0x105099fc;
  pppcStack_114 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pcStack_120 = (char *)0x10509a12;
    FUN_10c3d5d0();
  }
  pppuStack_104 = &pppcStack_114;
  pppcStack_11c = (code ***)0x11dbf047;
  pcStack_120 = "OpenBangBangWnd";
  pcStack_124 = (code *)0x10509a32;
  pppcStack_100 = (code ***)pppuStack_104;
  FUN_100b62c0();
  pcStack_124 = FUN_1050c0d0;
  pppuStack_12c = &pppcStack_11c;
  pppcStack_130 = (code ***)0x10509a4d;
  pppcStack_128 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_114 != &pppcStack_128) && ((code ****)pppcStack_114 != (code ****)0x0))
  {
    pppcStack_130 = pppcStack_114;
    pcStack_134 = (char *)0x10509a63;
    FUN_10c3d5d0();
  }
  pppuStack_118 = &pppcStack_128;
  pppcStack_130 = (code ***)0x11dbf0d1;
  pcStack_134 = "ReqChangeLineToTeamLeader";
  pcStack_138 = (code *)0x10509a83;
  pppcStack_114 = (code ***)pppuStack_118;
  FUN_100b62c0();
  pcStack_138 = FUN_1050c3a0;
  pppuStack_140 = &pppcStack_130;
  pppcStack_144 = (code ***)0x10509a9e;
  pppcStack_13c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_128 != &pppcStack_13c) && ((code ****)pppcStack_128 != (code ****)0x0))
  {
    pppcStack_144 = pppcStack_128;
    pcStack_148 = (char *)0x10509ab4;
    FUN_10c3d5d0();
  }
  pppuStack_12c = &pppcStack_13c;
  pppcStack_144 = (code ***)0x11dbf0b5;
  pcStack_148 = "ReqChangeTownInstance";
  pcStack_14c = (code *)0x10509ad4;
  pppcStack_128 = (code ***)pppuStack_12c;
  FUN_100b62c0();
  pcStack_14c = FUN_1050c550;
  pppuStack_154 = &pppcStack_144;
  pppcStack_158 = (code ***)0x10509aef;
  pppcStack_150 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_13c != &pppcStack_150) && ((code ****)pppcStack_13c != (code ****)0x0))
  {
    pppcStack_158 = pppcStack_13c;
    pcStack_15c = (char *)0x10509b05;
    FUN_10c3d5d0();
  }
  pppuStack_140 = &pppcStack_150;
  pppcStack_158 = (code ***)0x11dbf09c;
  pcStack_15c = "ReqLeaveFarm";
  pcStack_160 = (code *)0x10509b25;
  pppcStack_13c = (code ***)pppuStack_140;
  FUN_100b62c0();
  pcStack_160 = FUN_1050c4a0;
  pppcStack_168 = (code ***)&pppcStack_158;
  pppcStack_16c = (code ***)0x10509b40;
  pppcStack_164 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pcStack_170 = (char *)0x10509b56;
    FUN_10c3d5d0();
  }
  pppuStack_154 = &pppcStack_164;
  pppcStack_16c = (code ***)0x11dbf08c;
  pcStack_170 = "ReqLeaveCamp";
  pppcStack_174 = (code ***)0x10509b76;
  pppcStack_150 = (code ***)pppuStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)&LAB_1050c520;
  pppuStack_17c = &pppcStack_16c;
  pppcStack_180 = (code ***)0x10509b91;
  pppcStack_178 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_164 != &pppcStack_178) && ((code ****)pppcStack_164 != (code ****)0x0))
  {
    pppcStack_180 = pppcStack_164;
    pppcStack_184 = (code ***)0x10509ba7;
    FUN_10c3d5d0();
  }
  pppcStack_168 = (code ***)&pppcStack_178;
  pppcStack_180 = (code ***)0x11dbf116;
  pppcStack_184 = (code ***)0x11dbf108;
  pppcStack_188 = (code ***)0x10509bc7;
  pppcStack_164 = pppcStack_168;
  FUN_100b62c0();
  pppcStack_188 = (code ***)FUN_1050c1c0;
  pppuStack_18c = &pppcStack_180;
  pppcStack_190 = (code ***)0x10509bd8;
  FUN_1050c7d0();
  if (((code ****)pppcStack_174 != &pppcStack_188) && ((code ****)pppcStack_174 != (code ****)0x0))
  {
    pppcStack_190 = pppcStack_174;
    ppcStack_194 = (code **)0x10509bee;
    FUN_10c3d5d0();
  }
  pppcStack_178 = (code ***)&pppcStack_188;
  pppcStack_190 = (code ***)0x11dbd585;
  ppcStack_194 = (code **)0x11dbd57c;
  ppcStack_198 = (code **)0x10509c0e;
  pppcStack_174 = pppcStack_178;
  FUN_100b62c0();
  ppcStack_198 = (code **)FUN_1050a0a0;
  pppcStack_19c = (code ***)&pppcStack_190;
  pppcStack_1a0 = (code ***)0x10509c1f;
  FUN_1050c7d0();
  if ((pppcStack_184 != &ppcStack_198) && (pppcStack_184 != (code ***)0x0)) {
    pppcStack_1a0 = pppcStack_184;
    ppcStack_1a4 = (code **)0x10509c35;
    FUN_10c3d5d0();
  }
  pppcStack_188 = &ppcStack_198;
  pppcStack_1a0 = (code ***)0x11dbf107;
  ppcStack_1a4 = (code **)0x11dbf0f8;
  pcStack_1a8 = (code *)0x10509c55;
  pppcStack_184 = pppcStack_188;
  FUN_100b62c0();
  pcStack_1a8 = FUN_1050c280;
  pppcStack_1ac = (code ***)&pppcStack_1a0;
  ppcStack_1b0 = (code **)0x10509c66;
  FUN_1050c7d0();
  if ((ppcStack_194 != &pcStack_1a8) && (ppcStack_194 != (code **)0x0)) {
    ppcStack_1b0 = ppcStack_194;
    pcStack_1b4 = (char *)0x10509c7c;
    FUN_10c3d5d0();
  }
  ppcStack_198 = &pcStack_1a8;
  ppcStack_1b0 = (code **)0x11dbf0f5;
  pcStack_1b4 = "LoadSwfNotify";
  pcStack_1b8 = (code *)0x10509c9c;
  ppcStack_194 = ppcStack_198;
  FUN_100b62c0();
  pcStack_1b8 = FUN_1050c300;
  FUN_1050c7d0(&ppcStack_1b0);
  if ((ppcStack_1a4 != &pcStack_1b8) && (ppcStack_1a4 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_1a4);
  }
  piVar1 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x114))();
  (**(code **)(*piVar1 + 4))(param_1[8]);
  FUN_11a89daa();
  return;
}



/* ===== FUN_1050adc0 @ 1050adc0  size=357 ===== */
// strings:
//   "FlashUI"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""NewLobby"" */

void __fastcall FUN_1050adc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fStack_18;
  int *piStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  
  bVar1 = false;
  if (((0.0 < *(float *)(param_1 + 0x24)) && (DAT_1202e818 != (int *)0x0)) &&
     ((int *)DAT_1202e818[10] != (int *)0x0)) {
    fVar6 = (float10)(**(code **)(*(int *)DAT_1202e818[10] + 0xc))(0);
    fStack_18 = (float)fVar6;
    if (*(float *)(param_1 + 0x24) <= fStack_18 && fStack_18 != *(float *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_1050ba30();
    }
  }
  if ((DAT_120286c8 != 0) && (iVar4 = FUN_10bac530(), iVar4 == 3)) {
    fStack_18 = 0.0;
    piStack_14 = (int *)0x0;
    if ((DAT_1202e818 == (int *)0x0) ||
       ((*DAT_1202e818 == 0 || (FUN_104d7640("FlashUI",&fStack_18), fStack_18 == 0.0)))) {
      piVar5 = (int *)0x0;
    }
    else {
      bVar1 = true;
      piStack_10 = (int *)0x0;
      uStack_c = 0;
      if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
        FUN_104d7640("FlashUI",&piStack_10);
      }
      piVar5 = (int *)(**(code **)(*piStack_10 + 0x3c))("NewLobby");
    }
    piVar2 = piStack_14;
    if (bVar1) {
      FUN_104d7800();
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar4 = piVar2[1] + -1;
      piVar2[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        (**(code **)(*piVar2 + 4))();
        LOCK();
        iVar4 = piVar2[2] + -1;
        piVar2[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          (**(code **)(*piVar2 + 8))();
        }
      }
    }
    if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 0x68))(), cVar3 != '\0')) {
      (**(code **)(*piVar5 + 100))(0);
    }
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_1050af30();
  }
  FUN_1050b060();
  return;
}



/* ===== FUN_1050b730 @ 1050b730  size=293 ===== */
// calls: __alloca_probe, CPet::SetName, memset, strncpy
// strings:
//   "mhui_reload"
//   "ReqChangeTownInstance"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset, strncpy
   strings:
     ""mhui_reload""
     ""ReqChangeTownInstance"" */

void __thiscall FUN_1050b730(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *_Source;
  undefined2 uStack_a6db8;
  undefined1 auStack_a6db6 [14];
  char acStack_a6da8 [683428];
  
  cVar1 = FUN_104d1e40();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x84))("mhui_reload",0,0);
    FUN_1050bac0(1);
  }
  puVar3 = &DAT_11d9d32b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  CPet__SetName(puVar3);
  cVar1 = FUN_1050a110(0x9e);
  if (cVar1 != '\0') {
    FUN_1112d520();
    FUN_1112d6b0(0x202f,"ReqChangeTownInstance",&DAT_11d9d32b,&stack0xfff59238);
    FUN_1112d550();
    FUN_11a89daa();
    return;
  }
  memset(auStack_a6db6,0,0xa6d9c);
  uStack_a6db8 = 0x42;
  _Source = "";
  if (*(char **)(param_1 + 0x306c) != (char *)0x0) {
    _Source = *(char **)(param_1 + 0x306c);
  }
  strncpy(acStack_a6da8,_Source,0x100);
  iVar2 = FUN_113f3640();
  (**(code **)(**(int **)(iVar2 + 0xa0) + 0x14))(&uStack_a6db8);
  FUN_11a89daa();
  return;
}



/* ===== FUN_1050bac0 @ 1050bac0  size=909 ===== */
// strings:
//   "FlashUI"
//   "NewLobby"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""NewLobby"" */

void FUN_1050bac0(char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *local_3c;
  int local_38;
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_3c = (int *)0x0;
  piStack_34 = (int *)FUN_10bac530();
  if (((*(int *)(local_38 + 0x3c) == 2) && (piStack_34 == (int *)0x3)) || (param_1 != '\0')) {
    FUN_10b69e10();
    iStack_30 = 0;
    piStack_2c = (int *)0x0;
    if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
       (FUN_104d7640("FlashUI",&iStack_30), iStack_30 == 0)) {
      piVar2 = (int *)0x0;
      piVar4 = piStack_24;
    }
    else {
      piStack_28 = (int *)0x0;
      piStack_24 = (int *)0x0;
      local_3c = (int *)0x1;
      if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
        FUN_104d7640("FlashUI",&piStack_28);
      }
      piVar4 = piStack_24;
      piVar2 = (int *)(**(code **)(*piStack_28 + 0x3c))(&DAT_11dbd178);
    }
    piVar1 = piStack_2c;
    if ((local_3c != (int *)0x0) && (local_3c = (int *)0x0, piVar4 != (int *)0x0)) {
      LOCK();
      iVar3 = piVar4[1] + -1;
      piVar4[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*piVar4 + 4))();
        LOCK();
        iVar3 = piVar4[2] + -1;
        piVar4[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*piVar4 + 8))();
        }
      }
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 4))();
        LOCK();
        iVar3 = piVar1[2] + -1;
        piVar1[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*piVar1 + 8))();
        }
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 100))(1);
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 1;
    iVar3 = FUN_10d17440();
    if (iVar3 != 0) {
      FUN_10d17440();
      iVar3 = FUN_10d17870();
      if (iVar3 != 0) {
        FUN_10d17440();
        piVar4 = (int *)FUN_10d17870();
        (**(code **)(*piVar4 + 4))(0x33,&uStack_20);
      }
    }
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    iVar3 = FUN_10d17440();
    if (iVar3 != 0) {
      FUN_10d17440();
      iVar3 = FUN_10d17870();
      if (iVar3 != 0) {
        FUN_10d17440();
        piVar4 = (int *)FUN_10d17870();
        (**(code **)(*piVar4 + 4))(0x1f,&uStack_14);
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14c))(0,0,0,0,0);
    }
    uVar5 = 0;
    FUN_10b69c40();
    FUN_10b69ec0(1);
    (**(code **)(*(int *)DAT_1202e818[5] + 0xdc))(1,0);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x8c))();
      (**(code **)(*piVar4 + 0x3c))(0);
    }
    local_38 = 0;
    piStack_34 = (int *)0x0;
    if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
       (FUN_104d7640("FlashUI",&local_38), local_38 == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      uVar5 = uVar5 | 2;
      if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
        FUN_104d7640("FlashUI",&stack0xffffffc0);
      }
      local_3c = (int *)0x0;
      piVar4 = (int *)(**(code **)(_DAT_00000000 + 0x3c))("NewLobby");
    }
    piVar2 = piStack_34;
    if (((uVar5 & 2) != 0) && (local_3c != (int *)0x0)) {
      LOCK();
      iVar3 = local_3c[1] + -1;
      local_3c[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_3c + 4))();
        LOCK();
        iVar3 = local_3c[2] + -1;
        local_3c[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*local_3c + 8))();
        }
      }
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar3 = piVar2[1] + -1;
      piVar2[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*piVar2 + 4))();
        piVar1 = piVar2 + 2;
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*piVar2 + 8))();
        }
      }
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 100))(0);
    }
    iVar3 = (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0xb4))();
    if ((iVar3 != 0) && (*(int *)(iVar3 + 11000) != 0)) {
      FUN_112e0770(0);
    }
  }
  *(int **)(local_38 + 0x3c) = piStack_34;
  FUN_10b69b00();
  return;
}



/* ===== FUN_1052ce50 @ 1052ce50  size=1983 ===== */
// calls: WeaponUIConfig::LoadFromXml
// strings:
//   "InitModel"
//   "onBtn_Left"
//   "onBtn_Right"
//   "onBtn_Near"
//   "onBtn_Reset"
//   "OnClose"
//   "SetAvatarFrameData"
//   "ResetEquip"
//   "ClearEquip"
//   "onCommonShowItem"
//   "onShowItem"
//   "onShowItemWithColor"
//   "C2AS_SetBodyType"
//   "C2AS_SetPoseType"
//   "OnCheckPackType"
//   "OnShowPackAvatars"
//   "OnCheckAvatarWndPos"
//   "onBtn_Down"
//   "onMoveLeft"
//   "onMoveRight"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""onBtn_Left""
     ""onBtn_Right""
     ""onBtn_Near""
     ""onBtn_Reset""
     ""OnClose""
     ""SetAvatarFrameData""
     ""ResetEquip""
     ""ClearEquip""
     ""onCommonShowItem"" */

void __fastcall FUN_1052ce50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 ****unaff_EDI;
  code ***pppcStack_194;
  undefined1 **ppuStack_190;
  undefined1 *puStack_18c;
  char *pcStack_188;
  code ***pppcStack_184;
  undefined4 ***pppuStack_180;
  undefined1 *puStack_17c;
  char *pcStack_178;
  code ***pppcStack_174;
  code ***pppcStack_170;
  undefined4 **ppuStack_16c;
  char *pcStack_168;
  code ***pppcStack_164;
  code ***pppcStack_160;
  code **ppcStack_15c;
  undefined *puStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  code **ppcStack_14c;
  char *pcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code **ppcStack_13c;
  char *pcStack_138;
  code ***pppcStack_134;
  code ***pppcStack_130;
  code **ppcStack_12c;
  char *pcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code **ppcStack_11c;
  char *pcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code **ppcStack_10c;
  char *pcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  code **ppcStack_fc;
  char *pcStack_f8;
  code ***pppcStack_f4;
  undefined4 ***pppuStack_f0;
  code **ppcStack_ec;
  char *pcStack_e8;
  code ***pppcStack_e4;
  undefined4 ***pppuStack_e0;
  undefined4 **ppuStack_dc;
  char *pcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  undefined4 **ppuStack_cc;
  char *pcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code **ppcStack_bc;
  char *pcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  code **ppcStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code **ppcStack_9c;
  char *pcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code **ppcStack_8c;
  char *pcStack_88;
  code ***pppcStack_84;
  undefined4 ***pppuStack_80;
  code **ppcStack_7c;
  undefined *puStack_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 **ppuStack_6c;
  char *pcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 **ppuStack_5c;
  char *pcStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***pppuStack_50;
  code **ppcStack_4c;
  char *pcStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  undefined4 **ppuStack_3c;
  char *pcStack_38;
  undefined4 ***pppuStack_34;
  undefined1 auStack_28 [4];
  undefined4 ***pppuStack_24;
  undefined4 ***pppuStack_20;
  undefined4 ***pppuStack_14;
  undefined4 ***pppuStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  pppuStack_34 = (undefined4 ***)0x1052ce6d;
  WeaponUIConfig__LoadFromXml();
  puVar1 = (undefined4 *)(param_1 + 0x420);
  if ((*(uint *)(param_1 + 0x424) >> 6 & 1) != 0) {
    pppuStack_34 = *(undefined4 ****)(param_1 + 0x428);
    ppuStack_3c = (code ***)0x1052ce8b;
    pcStack_38 = (char *)puVar1;
    (**(code **)(*(int *)*puVar1 + 8))();
    *puVar1 = 0;
  }
  pppuStack_14 = &pppuStack_24;
  *(undefined4 *)(param_1 + 0x424) = 1;
  pppuStack_34 = (undefined4 ***)0x11dbd585;
  pcStack_38 = "InitModel";
  ppuStack_3c = (code ***)0x1052ceb5;
  pppuStack_10 = pppuStack_14;
  FUN_100b62c0();
  ppuStack_3c = (undefined4 **)CEquipForgeUI__OnPanelActivate;
  pppuStack_40 = (undefined4 ***)&stack0xffffffd4;
  pppuStack_44 = (undefined4 ***)0x1052cec6;
  FUN_10534a80();
  if (((undefined4 ****)pppuStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppuStack_20 != (undefined4 ****)0x0)) {
    pppuStack_44 = pppuStack_20;
    pcStack_48 = (char *)0x1052cedc;
    FUN_10c3d5d0();
  }
  pppuStack_24 = &pppuStack_34;
  pppuStack_44 = (undefined4 ***)0x11dc1106;
  pcStack_48 = "onBtn_Left";
  ppcStack_4c = (code **)0x1052cefc;
  pppuStack_20 = pppuStack_24;
  FUN_100b62c0();
  ppcStack_4c = (code **)&LAB_1052e4d0;
  pppuStack_50 = &ppuStack_3c;
  pppuStack_54 = (undefined4 ***)0x1052cf0d;
  FUN_10534a80();
  if ((unaff_EDI != &pppuStack_44) && (unaff_EDI != (undefined4 ****)0x0)) {
    pcStack_58 = (char *)0x1052cf23;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_54 = (undefined4 ***)0x11dc10fb;
  pcStack_58 = "onBtn_Right";
  ppuStack_5c = (code ***)0x1052cf43;
  FUN_100b62c0();
  ppuStack_5c = (undefined4 **)&LAB_1052e510;
  pppcStack_60 = &ppcStack_4c;
  pppcStack_64 = (code ***)0x1052cf54;
  FUN_10534a80();
  if (((undefined4 ****)pppuStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0)) {
    pppcStack_64 = (code ***)pppuStack_40;
    pcStack_68 = (char *)0x1052cf6a;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppuStack_54;
  pppcStack_64 = (code ***)0x11dc10ee;
  pcStack_68 = "onBtn_Near";
  ppuStack_6c = (code ***)0x1052cf8a;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  ppuStack_6c = (undefined4 **)FUN_1052e850;
  pppuStack_70 = &ppuStack_5c;
  pppuStack_74 = (undefined4 ***)0x1052cf9b;
  FUN_10534a80();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_74 = pppuStack_50;
    puStack_78 = (undefined *)0x1052cfb1;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_74 = (undefined4 ***)&DAT_11dc10e1;
  puStack_78 = &DAT_11dc10d8;
  ppcStack_7c = (code **)0x1052cfd1;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  ppcStack_7c = (code **)FUN_1052e930;
  pppuStack_80 = &ppuStack_6c;
  pppcStack_84 = (code ***)0x1052cfe2;
  FUN_10534a80();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_84 = pppcStack_60;
    pcStack_88 = (char *)0x1052cff8;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_84 = (code ***)0x11dc1133;
  pcStack_88 = "onBtn_Reset";
  ppcStack_8c = (code **)0x1052d018;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_8c = (code **)FUN_1052ea10;
  pppcStack_90 = &ppcStack_7c;
  pppcStack_94 = (code ***)0x1052d029;
  FUN_10534a80();
  if (((code ****)pppuStack_70 != &pppcStack_84) && ((code ****)pppuStack_70 != (code ****)0x0)) {
    pppcStack_94 = (code ***)pppuStack_70;
    pcStack_98 = (char *)0x1052d03f;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppcStack_94 = (code ***)0x11dc1127;
  pcStack_98 = "OnClose";
  ppcStack_9c = (code **)0x1052d05f;
  pppuStack_70 = pppuStack_74;
  FUN_100b62c0();
  ppcStack_9c = (code **)FUN_1052d850;
  pppcStack_a0 = &ppcStack_8c;
  pppcStack_a4 = (code ***)0x1052d070;
  FUN_10534a80();
  if (((code ****)pppuStack_80 != &pppcStack_94) && ((code ****)pppuStack_80 != (code ****)0x0)) {
    pppcStack_a4 = (code ***)pppuStack_80;
    pcStack_a8 = (char *)0x1052d086;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_a4 = (code ***)0x11dbf5a6;
  pcStack_a8 = "SetAvatarFrameData";
  ppcStack_ac = (code **)0x1052d0a6;
  pppuStack_80 = (undefined4 ***)pppcStack_84;
  FUN_100b62c0();
  ppcStack_ac = (code **)FUN_1052e290;
  pppcStack_b0 = &ppcStack_9c;
  pppcStack_b4 = (code ***)0x1052d0b7;
  FUN_10534a80();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_b4 = pppcStack_90;
    pcStack_b8 = (char *)0x1052d0cd;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_b4 = (code ***)0x11dc111e;
  pcStack_b8 = "ResetEquip";
  ppcStack_bc = (code **)0x1052d0ed;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  ppcStack_bc = (code **)&LAB_1052e270;
  pppcStack_c0 = &ppcStack_ac;
  pppcStack_c4 = (code ***)0x1052d0fe;
  FUN_10534a80();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_c4 = pppcStack_a0;
    pcStack_c8 = (char *)0x1052d114;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_c4 = (code ***)0x11dc1112;
  pcStack_c8 = "ClearEquip";
  ppuStack_cc = (code ***)0x1052d134;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  ppuStack_cc = (undefined4 **)&LAB_1052e280;
  pppcStack_d0 = &ppcStack_bc;
  pppcStack_d4 = (code ***)0x1052d145;
  FUN_10534a80();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_d4 = pppcStack_b0;
    pcStack_d8 = (char *)0x1052d15b;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_d4 = (code ***)0x11dc1178;
  pcStack_d8 = "onCommonShowItem";
  ppuStack_dc = (code ***)0x1052d17b;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  ppuStack_dc = (undefined4 **)FUN_1052f0c0;
  pppuStack_e0 = &ppuStack_cc;
  pppcStack_e4 = (code ***)0x1052d18c;
  FUN_10534a80();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_e4 = pppcStack_c0;
    pcStack_e8 = (char *)0x1052d1a2;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_e4 = (code ***)0x11dc1166;
  pcStack_e8 = "onShowItem";
  ppcStack_ec = (code **)0x1052d1c2;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  ppcStack_ec = (code **)FUN_1052f630;
  pppuStack_f0 = &ppuStack_dc;
  pppcStack_f4 = (code ***)0x1052d1d3;
  FUN_10534a80();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d0;
    pcStack_f8 = (char *)0x1052d1e9;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_f4 = (code ***)0x11dc115b;
  pcStack_f8 = "onShowItemWithColor";
  ppcStack_fc = (code **)0x1052d209;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  ppcStack_fc = (code **)FUN_1052f6c0;
  pppcStack_100 = &ppcStack_ec;
  pppcStack_104 = (code ***)0x1052d21a;
  FUN_10534a80();
  if (((code ****)pppuStack_e0 != &pppcStack_f4) && ((code ****)pppuStack_e0 != (code ****)0x0)) {
    pppcStack_104 = (code ***)pppuStack_e0;
    pcStack_108 = (char *)0x1052d230;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_104 = (code ***)0x11dc1144;
  pcStack_108 = "C2AS_SetBodyType";
  ppcStack_10c = (code **)0x1052d250;
  pppuStack_e0 = (undefined4 ***)pppcStack_e4;
  FUN_100b62c0();
  ppcStack_10c = (code **)FUN_1052f9a0;
  pppcStack_110 = &ppcStack_fc;
  pppcStack_114 = (code ***)0x1052d261;
  FUN_10534a80();
  if (((code ****)pppuStack_f0 != &pppcStack_104) && ((code ****)pppuStack_f0 != (code ****)0x0)) {
    pppcStack_114 = (code ***)pppuStack_f0;
    pcStack_118 = (char *)0x1052d277;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_114 = (code ***)0x11dc11c4;
  pcStack_118 = "C2AS_SetPoseType";
  ppcStack_11c = (code **)0x1052d297;
  pppuStack_f0 = (undefined4 ***)pppcStack_f4;
  FUN_100b62c0();
  ppcStack_11c = (code **)FUN_1052f9d0;
  pppcStack_120 = &ppcStack_10c;
  pppcStack_124 = (code ***)0x1052d2a8;
  FUN_10534a80();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_124 = pppcStack_100;
    pcStack_128 = (char *)0x1052d2be;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_124 = (code ***)0x11dc11b3;
  pcStack_128 = "OnCheckPackType";
  ppcStack_12c = (code **)0x1052d2de;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  ppcStack_12c = (code **)FUN_1052eb90;
  pppcStack_130 = &ppcStack_11c;
  pppcStack_134 = (code ***)0x1052d2ef;
  FUN_10534a80();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_134 = pppcStack_110;
    pcStack_138 = (char *)0x1052d305;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_134 = (code ***)0x11dc11a1;
  pcStack_138 = "OnShowPackAvatars";
  ppcStack_13c = (code **)0x1052d325;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  ppcStack_13c = (code **)FUN_1052ecf0;
  pppcStack_140 = &ppcStack_12c;
  pppcStack_144 = (code ***)0x1052d336;
  FUN_10534a80();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_144 = pppcStack_120;
    pcStack_148 = (char *)0x1052d34c;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_144 = (code ***)0x11dc118f;
  pcStack_148 = "OnCheckAvatarWndPos";
  ppcStack_14c = (code **)0x1052d36c;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  ppcStack_14c = (code **)FUN_1052ec00;
  pppcStack_150 = &ppcStack_13c;
  pppcStack_154 = (code ***)0x1052d37d;
  FUN_10534a80();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_154 = pppcStack_130;
    puStack_158 = (undefined *)0x1052d393;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_154 = (code ***)&DAT_11dc11f4;
  puStack_158 = &DAT_11dc11ec;
  ppcStack_15c = (code **)0x1052d3b3;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  ppcStack_15c = (code **)&LAB_1052e550;
  pppcStack_160 = &ppcStack_14c;
  pppcStack_164 = (code ***)0x1052d3c4;
  FUN_10534a80();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_164 = pppcStack_140;
    pcStack_168 = (char *)0x1052d3da;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_164 = (code ***)0x11dc11ea;
  pcStack_168 = "onBtn_Down";
  ppuStack_16c = (code ***)0x1052d3fa;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  ppuStack_16c = (undefined4 **)&LAB_1052e590;
  pppcStack_170 = &ppcStack_15c;
  pppcStack_174 = (code ***)0x1052d40b;
  FUN_10534a80();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_174 = pppcStack_150;
    pcStack_178 = (char *)0x1052d421;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_174 = (code ***)0x11dc11de;
  pcStack_178 = "onMoveLeft";
  puStack_17c = (undefined1 *)0x1052d441;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  puStack_17c = &LAB_1052e5d0;
  pppuStack_180 = &ppuStack_16c;
  pppcStack_184 = (code ***)0x1052d452;
  FUN_10534a80();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_184 = pppcStack_160;
    pcStack_188 = (char *)0x1052d468;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_184 = (code ***)0x11dc11d3;
  pcStack_188 = "onMoveRight";
  puStack_18c = (undefined1 *)0x1052d488;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  puStack_18c = &LAB_1052e610;
  ppuStack_190 = &puStack_17c;
  pppcStack_194 = (code ***)0x1052d499;
  FUN_10534a80();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_194 = pppcStack_170;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_194 = (code ***)0x11dc1273;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0("onShowEquipItemInstance");
  FUN_10534a80(&puStack_18c,FUN_1052f800);
  if (((code ****)pppuStack_180 != &pppcStack_194) && ((code ****)pppuStack_180 != (code ****)0x0))
  {
    FUN_10c3d5d0(pppuStack_180);
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_1053dc20();
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0xc))();
    if (iVar2 != 0) {
      FUN_1053dc70(param_1,extraout_ECX_00);
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_1053dcc0();
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0xc))();
    if (iVar2 != 0) {
      FUN_1053dd10(param_1,extraout_ECX_02);
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0xc))();
    if (iVar2 != 0) {
      FUN_1053dd60(param_1,extraout_ECX_03);
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_04);
      FUN_10d17870();
      FUN_1053ddb0();
    }
  }
  iVar2 = DAT_1202e818;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  uVar4 = (**(code **)(**(int **)(iVar2 + 0x2c) + 0x54))("gfx_draw_only");
  *(undefined4 *)(param_1 + 0x460) = uVar4;
  FUN_11a89daa();
  return;
}



/* ===== FUN_107ccd30 @ 107ccd30  size=124 ===== */
// strings:
//   "instanceChannelNumber"

/* [RE-AUTO c0]
   strings:
     ""instanceChannelNumber"" */

void __thiscall FUN_107ccd30(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_c;
  
  local_28 = (int *)0x0;
  local_24 = 0;
  local_c = CONCAT31(local_c._1_3_,((byte)param_1[1] & 0x8f) == 10);
  cVar1 = (**(code **)(*(int *)*param_1 + 0x10))
                    (param_1[2],"instanceChannelNumber",&local_28,local_c);
  if (cVar1 != '\0') {
    if (((byte)local_24 & 0x8f) == 5) {
      uVar2 = CONCAT44(uStack_1c,local_20);
    }
    else {
      uVar2 = 0;
    }
    *param_2 = uVar2;
  }
  if ((local_24 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 8))(&local_28,local_20);
  }
  return;
}



/* ===== FUN_107d8f60 @ 107d8f60  size=1877 ===== */
// calls: memset
// strings:
//   "InstanceWin"
//   "InstanceLose"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""InstanceWin""
     ""InstanceLose"" */

void __fastcall FUN_107d8f60(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 auStack_90 [132];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_1a0;
  local_98 = 0;
  local_94 = 0;
  local_a0 = 0x34;
  local_9c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&local_a0);
    }
  }
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_180);
    }
  }
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 2;
  uStack_fc = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_100);
    }
  }
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0xc;
  uStack_15c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_160);
    }
  }
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0xd;
  uStack_bc = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_c0);
    }
  }
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0xe;
  uStack_13c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_140);
    }
  }
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0xf;
  uStack_dc = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_e0);
    }
  }
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0x10;
  uStack_11c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_120);
    }
  }
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0x13;
  uStack_19c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_1a0);
    }
  }
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 4;
  uStack_18c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_190);
    }
  }
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0x18;
  uStack_16c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_170);
    }
  }
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0x1a;
  uStack_14c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_150);
    }
  }
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0x1b;
  uStack_12c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_130);
    }
  }
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0x1f;
  uStack_10c = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_110);
    }
  }
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0x20;
  uStack_ec = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_f0);
    }
  }
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0x33;
  uStack_cc = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_d0);
    }
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0x6e;
  uStack_ac = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&uStack_b0);
    }
  }
  iVar2 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 0xb4))();
    if (iVar4 != 0) {
      iVar2 = iVar4;
    }
  }
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xdc))(0,0);
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xe4))(0,0);
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xf4))(0);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x2d45) != '\0')) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xf4))(1);
    }
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    cVar1 = FUN_1140e1d0();
    if (cVar1 == '\0') {
      cVar1 = FUN_1140e140();
      if (cVar1 == '\0') {
        piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
        memset(auStack_90,0,0x80);
        if (*(char *)(param_1 + 0x20) == '\0') {
          FUN_104ef1c0(auStack_90,"InstanceLose");
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x2b4))();
          }
        }
        else {
          FUN_104ef1c0(auStack_90,"InstanceWin");
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x2b0))();
          }
        }
        FUN_105e3410(auStack_90);
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107db7f0 @ 107db7f0  size=229 ===== */
// strings:
//   "mh.model.Instance.InstanceLevelCatCostData"
//   "CostType"
//   "CostValue"

/* [RE-AUTO c0]
   strings:
     ""mh.model.Instance.InstanceLevelCatCostData""
     ""CostType""
     ""CostValue"" */

void FUN_107db7f0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uVar6;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  if (in_stack_00000014 == 1) {
    uVar3 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar3 == 3) || (uVar5 = 0xdeadbeaf, uVar3 == 4)) {
      uVar5 = *(undefined4 *)(in_stack_00000010 + 8);
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar4 != 0) && (iVar2 = *(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0x78), iVar2 != 0)) {
        uStack_10 = 0;
        auStack_c[0] = 0;
        FUN_11574f20(iVar4,iVar2,uVar5,&uStack_10,auStack_c);
        uVar6 = 0;
        uVar5 = 0;
        FUN_11a98de0(in_stack_00000018,"mh.model.Instance.InstanceLevelCatCostData",0,0);
        FUN_104d1550("CostType",uVar5);
        FUN_104d1550("CostValue",uVar6);
      }
    }
  }
  return;
}



/* ===== FUN_107dcf10 @ 107dcf10  size=553 ===== */
// strings:
//   "mh.model.Instance.InstancePlayerStateData"
//   "StateDatas"
//   "mh.model.Instance.vo.ScoreDataVo"
//   "nScoreType"
//   "nScore"
//   "InitData"

/* [RE-AUTO c0]
   strings:
     ""mh.model.Instance.InstancePlayerStateData""
     ""StateDatas""
     ""mh.model.Instance.vo.ScoreDataVo""
     ""nScoreType""
     ""nScore""
     ""InitData"" */

void FUN_107dcf10(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined1 *puStack_7c;
  uint uStack_78;
  int *piStack_74;
  undefined4 *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_4c [4];
  int iStack_48;
  int *piStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uStack_64 = 0;
  uStack_68 = 0;
  piStack_6c = (int *)0x11dc9038;
  puStack_70 = param_2;
  piStack_74 = (int *)0x107dcf31;
  FUN_11a98de0();
  piStack_74 = &iStack_48;
  iStack_48 = 0;
  piStack_44 = (int *)0x0;
  uStack_78 = 0x107dcf4e;
  FUN_11a98a70();
  uStack_78 = (uint)(((byte)param_2[1] & 0x8f) == 10);
  puStack_7c = auStack_4c;
  pcStack_80 = "StateDatas";
  uStack_84 = param_2[2];
  (**(code **)(*(int *)*param_2 + 0x14))();
  uStack_78 = param_3 + 0x50;
  iVar5 = *(int *)(param_3 + 0x58);
  if (iVar5 != uStack_78) {
    do {
      uVar1 = *(undefined4 *)(iVar5 + 0x10);
      uVar2 = *(undefined4 *)(iVar5 + 0x14);
      piStack_74 = (int *)0x0;
      puStack_70 = (undefined4 *)0x0;
      FUN_11a98de0(&piStack_74,"mh.model.Instance.vo.ScoreDataVo",0,0);
      (**(code **)(*piStack_6c + 0x3c))(uStack_64,&uStack_84);
      if (param_1 != 0) {
        piStack_44 = (int *)0x0;
        uStack_40 = 3;
        uStack_3c = uVar1;
        (**(code **)(*piStack_74 + 0x14))
                  (piStack_6c,"nScoreType",&piStack_44,((byte)puStack_70 & 0x8f) == 10);
        if ((uStack_40 >> 6 & 1) != 0) {
          (**(code **)(*piStack_44 + 8))(&piStack_44,uStack_3c);
        }
        if (param_1 != 0) {
          piStack_44 = (int *)0x0;
          uStack_40 = 3;
          uStack_3c = uVar2;
          (**(code **)(*piStack_74 + 0x14))
                    (piStack_6c,"nScore",&piStack_44,((byte)puStack_70 & 0x8f) == 10);
          if ((uStack_40 >> 6 & 1) != 0) {
            (**(code **)(*piStack_44 + 8))(&piStack_44,uStack_3c);
          }
        }
      }
      if (((uint)puStack_70 >> 6 & 1) != 0) {
        (**(code **)(*piStack_74 + 8))(&piStack_74,piStack_6c);
      }
      iVar4 = *(int *)(iVar5 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar5 + 4);
        if (iVar5 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar5 = iVar4;
            iVar4 = *(int *)(iVar5 + 4);
          } while (iVar5 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar5 + 0xc) != iVar4) {
          iVar5 = iVar4;
        }
      }
      else {
        for (iVar3 = *(int *)(iVar4 + 8); iVar5 = iVar4, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
          iVar4 = iVar3;
        }
      }
    } while (iVar5 != uStack_78);
  }
  (**(code **)(*(int *)*param_2 + 0x18))
            (param_2[2],0,"InitData",0,0,((byte)param_2[1] & 0x8f) == 10);
  if (((uint)puStack_70 >> 6 & 1) != 0) {
    (**(code **)(*piStack_74 + 8))(&piStack_74,piStack_6c);
  }
  return;
}



/* ===== FUN_10838500 @ 10838500  size=484 ===== */
// strings:
//   "s_SFXVolume"
//   "s_FmodMusicVolume"
//   "r_colorchart_Gamma2"
//   "g_npc_language"
//   "NewLobby"
//   "_root.EnableCreateRoleView"

/* [RE-AUTO c0]
   strings:
     ""s_SFXVolume""
     ""s_FmodMusicVolume""
     ""r_colorchart_Gamma2""
     ""g_npc_language""
     ""NewLobby""
     ""_root.EnableCreateRoleView"" */

void FUN_10838500(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 *in_stack_00000014;
  char *pcStack_40;
  char *pcStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcStack_34 = "s_SFXVolume";
  uStack_38 = (char *)0x1083851d;
  DAT_123bba0c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
  uStack_38 = "s_FmodMusicVolume";
  pcStack_3c = (char *)0x10838536;
  DAT_123bba10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
  pcStack_3c = "r_colorchart_Gamma2";
  pcStack_40 = (char *)0x1083854f;
  DAT_123bba14 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
  pcStack_40 = "g_npc_language";
  DAT_123bba00 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
  if (DAT_123bba0c != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*DAT_123bba0c + 0xc))();
    DAT_1200acd0 = (float)fVar3;
  }
  if (DAT_123bba10 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*DAT_123bba10 + 0xc))();
    DAT_1200acc8 = (float)fVar3;
  }
  if (DAT_123bba14 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*DAT_123bba14 + 0xc))();
    DAT_1200acd8 = (float)fVar3;
  }
  if (DAT_123bba00 != (int *)0x0) {
    DAT_123bba18 = (**(code **)(*DAT_123bba00 + 8))();
  }
  pcStack_40 = (char *)(DAT_1200acd0 * DAT_11de9a30);
  pcStack_3c = (char *)(DAT_1200acc8 * DAT_11de9a30);
  DAT_11e228fe = DAT_1200acd0 <= 0.0;
  DAT_11e228fd = DAT_1200acc8 <= 0.0;
  uStack_38._0_2_ = CONCAT11(DAT_11e228fd,DAT_11e228fe);
  pcStack_34 = (char *)DAT_123bba18;
  FUN_10d17440();
  piVar1 = (int *)FUN_10d17870();
  (**(code **)(*piVar1 + 4))(0x62,&pcStack_40);
  iVar2 = FUN_10bac530();
  if (iVar2 == 2) {
    if (DAT_1202e818 == 0) {
      return;
    }
    if (*(int **)(DAT_1202e818 + 0xbc) == (int *)0x0) {
      return;
    }
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
    pcStack_3c = (char *)0x2;
    pcStack_34 = (char *)((uint)pcStack_34 & 0xffffff00);
    (**(code **)(*piVar1 + 0xc0))("_root.EnableCreateRoleView",&pcStack_3c,1,0);
    uStack_30 = CONCAT31(uStack_30._1_3_,1);
  }
  else {
    uStack_30 = uStack_30 & 0xffffff00;
  }
  *in_stack_00000014 = 2;
  in_stack_00000014[1] = pcStack_34;
  in_stack_00000014[2] = uStack_30;
  in_stack_00000014[3] = uStack_2c;
  return;
}



/* ===== FUN_108394b0 @ 108394b0  size=121 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableCreateRoleView"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableCreateRoleView"" */

void FUN_108394b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18 [2];
  undefined1 local_10;
  
  (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  iVar1 = FUN_10bac530();
  if (((iVar1 == 2) && (DAT_1202e818 != (undefined4 *)0x0)) &&
     ((int *)DAT_1202e818[0x2f] != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[0x2f] + 0x3c))("NewLobby");
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x8c))();
      local_18[0] = 2;
      local_10 = 1;
      (**(code **)(*piVar2 + 0xc0))("_root.EnableCreateRoleView",local_18,1,0);
    }
  }
  return;
}



/* ===== FUN_1083fb60 @ 1083fb60  size=1974 ===== */
// calls: CPet::SetName
// strings:
//   "shopSaleItemDataArray"
//   "SALE_ITEM_DATA"
//   "instanceID"
//   "instanceType"
//   "backItem"
//   "SaleItemId"
//   "ItemId"
//   "salesCount"
//   "ItemNum"
//   "backItemIndex"
//   "backItemBind"
//   "backItemTransmogrifyItemId"
//   "backItemRequireSex"
//   "factItemLevel"
//   "factRankLevel"
//   "itemTypeCanUse"
//   "needPlayerLevel"
//   "itemPrice"
//   "itemName"
//   "packTag"

/* [RE-AUTO c0]
   strings:
     ""shopSaleItemDataArray""
     ""SALE_ITEM_DATA""
     ""instanceID""
     ""instanceType""
     ""backItem""
     ""SaleItemId""
     ""ItemId""
     ""salesCount""
     ""ItemNum""
     ""backItemIndex"" */

void FUN_1083fb60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  bool bVar8;
  int *piVar9;
  int iStack_168;
  undefined4 uStack_164;
  int **ppiStack_160;
  undefined4 uStack_15c;
  char *pcStack_158;
  undefined4 *puStack_154;
  int *piStack_150;
  int *piStack_14c;
  int **ppiStack_148;
  int *piStack_144;
  undefined1 auStack_138 [4];
  undefined4 uStack_134;
  int *piStack_130;
  uint uStack_12c;
  int iStack_128;
  int *piStack_124;
  int *piStack_120;
  undefined8 uStack_11c;
  int *piStack_110;
  int *local_10c;
  int *piStack_108;
  undefined4 local_104;
  undefined4 *puStack_100;
  int *piStack_ec;
  byte bStack_e8;
  undefined4 uStack_e4;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined4 *puStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  int *piStack_9c;
  int *piStack_98;
  uint uStack_94;
  int *piStack_90;
  int *apiStack_8c [3];
  undefined4 uStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  int *piStack_74;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  undefined1 auStack_60 [8];
  uint *puStack_58;
  undefined4 uStack_50;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)auStack_138;
  local_104 = param_2;
  local_e0 = (int *)0x0;
  local_dc = param_4[1];
  local_d4 = param_4[3];
  local_d8 = (int *)param_4[2];
  local_d0 = param_4[4];
  if ((local_dc >> 6 & 1) != 0) {
    local_e0 = (int *)*param_4;
    ppiStack_148 = &local_e0;
    piStack_14c = (int *)0x1083fbc3;
    piStack_144 = local_d8;
    (**(code **)(*local_e0 + 4))();
  }
  local_10c = (int *)0x0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    piStack_144 = (int *)0x1083fbf2;
    piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))();
    local_10c = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      local_10c = piVar3;
    }
  }
  if (param_5 == 5) {
    if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
      puStack_100 = (undefined4 *)param_4[0xe];
    }
    else {
      puStack_100 = (undefined4 *)0xdeadbeaf;
    }
    if (((param_4[0x13] & 0x8f) == 3) || ((param_4[0x13] & 0x8f) == 4)) {
      uStack_134 = param_4[0x14];
    }
    else {
      uStack_134 = 0xdeadbeaf;
    }
    if (((byte)param_4[0x19] & 0x8f) == 2) {
      uStack_12c = CONCAT31(uStack_12c._1_3_,*(undefined1 *)(param_4 + 0x1a));
    }
    else {
      uStack_12c = (uint)uStack_12c._1_3_ << 8;
    }
    if ((local_10c != (int *)0x0) && (local_10c[0xabf] != 0)) {
      ppiStack_148 = &piStack_c8;
      piStack_c8 = (int *)0x0;
      puStack_c4 = (undefined4 *)0x0;
      piStack_130 = (int *)CONCAT31(piStack_130._1_3_,((byte)local_dc & 0x8f) == 10);
      piStack_144 = piStack_130;
      piStack_14c = (int *)0x11dcf3bc;
      piStack_150 = local_d8;
      puStack_154 = (undefined4 *)0x1083fcb6;
      cVar1 = (**(code **)(*local_e0 + 0x10))();
      if (cVar1 != '\0') {
        piStack_144 = (int *)0xffffffff;
        ppiStack_148 = (int **)0x0;
        piStack_14c = piStack_c0;
        piStack_150 = (int *)0x1083fcd2;
        (**(code **)(*piStack_c8 + 0x44))();
        puStack_154 = &uStack_bc;
        uStack_bc = 0;
        uStack_b8 = 0;
        piStack_150 = (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),(bStack_e8 & 0x8f) == 10);
        pcStack_158 = "SALE_ITEM_DATA";
        uStack_15c = uStack_e4;
        ppiStack_160 = (int **)0x1083fd18;
        cVar1 = (**(code **)(*piStack_ec + 0x10))();
        if ((cVar1 == '\0') || (((byte)piStack_c8 & 0x8f) != 6)) {
          ppiStack_160 = (int **)0x108402c5;
          FUN_104d7c10();
        }
        else {
          puStack_100 = puStack_c4;
          if (((uint)piStack_c8 >> 6 & 1) != 0) {
            puStack_100 = (undefined4 *)*puStack_c4;
          }
          if (*(int *)(iStack_128 + 0x260e0) != 0) {
            ppiStack_160 = (int **)0x0;
            uStack_164 = 3;
            iStack_168 = 0x1083fd62;
            iVar4 = FUN_113f9bb0();
            if (iVar4 != 0) {
              ppiStack_160 = (int **)0x1083fd6d;
              ppiStack_160 = (int **)FUN_11669730();
              uStack_164 = 0x1083fd73;
              FUN_1052bdd0();
            }
          }
          ppiStack_160 = ppiStack_148;
          uStack_164 = 0x1083fd85;
          uStack_164 = FUN_114b82c0();
          iStack_168 = 0x1083fd92;
          FUN_10846080();
          piVar3 = (int *)0x0;
          uStack_12c = 0;
          piStack_150 = (int *)0x0;
          local_10c = (int *)0x0;
          if ((pcStack_158 != (char *)0xffffffff) && (0 < (int)piStack_124)) {
            local_10c = (int *)((int)pcStack_158 * (int)piStack_124);
          }
          iStack_168 = 0x1083fdc8;
          uStack_bc = FUN_10846030();
          uStack_11c = 0;
          piStack_b4 = piStack_9c;
          piStack_b0 = piStack_98;
          uStack_ac = uStack_94;
          piStack_a8 = piStack_90;
          if (piStack_9c != apiStack_8c[0]) {
            do {
              if (local_10c <= piVar3) {
                puVar7 = (undefined4 *)0x1;
                if (uStack_12c == 0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else if (uStack_12c == (int)piStack_124 - 1U) {
                  puVar7 = (undefined4 *)0x2;
                }
                iStack_168 = 0x1083fe38;
                piStack_74 = piStack_b4;
                piStack_70 = piStack_b0;
                uStack_6c = uStack_ac;
                piStack_68 = piStack_a8;
                FUN_10846a10();
                if (piStack_74 == apiStack_8c[0]) {
                  puVar7 = (undefined4 *)0x2;
                }
                piVar3 = (int *)*piStack_b4;
                if ((piVar3[8] == 1) ||
                   (piStack_120 = (int *)((uint)piStack_120 & 0xffffff00), piVar3[8] == 2)) {
                  piStack_120 = (int *)CONCAT31(piStack_120._1_3_,1);
                }
                iStack_168 = 0;
                piStack_14c = (int *)0x0;
                ppiStack_148 = (int **)0x0;
                piVar9 = piStack_108;
                puStack_154 = puVar7;
                piStack_110 = piVar3;
                FUN_11a98de0(&piStack_14c,piStack_108,0);
                FUN_104d14d0("instanceID");
                FUN_104d1550("instanceType",9);
                bVar8 = 0xfffffffe < uStack_12c;
                uStack_12c = uStack_12c + 1;
                iStack_128 = iStack_128 + (uint)bVar8;
                FUN_104d15e0("backItem",1);
                FUN_104d15e0("backItem",1);
                FUN_104d1550("SaleItemId",0);
                uVar5 = FUN_11669730();
                FUN_104d1550("ItemId",uVar5);
                FUN_104d1550("salesCount",uStack_cc);
                uVar5 = (**(code **)(*piVar3 + 0xc))();
                FUN_104d1440("ItemNum",uVar5);
                FUN_104d1440("backItemIndex",ppiStack_160);
                FUN_104d15e0("backItemBind",piStack_130);
                cVar1 = FUN_116698a0();
                if (cVar1 != '\0') {
                  FUN_104d1440("backItemTransmogrifyItemId",piVar3[0x7d]);
                }
                iVar4 = FUN_11669250();
                FUN_104d1550("backItemRequireSex",*(undefined4 *)(iVar4 + 0xfc));
                uVar5 = (**(code **)(*piVar3 + 0x18))();
                uVar6 = FUN_11669840();
                FUN_104d1550("factItemLevel",uVar5);
                FUN_104d1550("factRankLevel",uVar6);
                piVar3 = piStack_120;
                uVar5 = FUN_11669730();
                iStack_168 = FUN_10254130(uVar5);
                if (iStack_168 == 0) {
                  FUN_104d1550("itemPrice",0);
                  FUN_104d1670("itemName",&DAT_11d9d32b);
                }
                else {
                  uVar5 = (**(code **)(*piVar3 + 0xc))();
                  uVar5 = FUN_114b7130(iStack_168,uVar5);
                  uVar2 = FUN_10842030();
                  piStack_c8 = (int *)CONCAT31(piStack_c8._1_3_,uVar2);
                  FUN_104d15e0("itemTypeCanUse",piStack_c8);
                  uStack_80 = *(undefined4 *)(iStack_168 + 0xcc);
                  FUN_104d1550("needPlayerLevel",*(undefined4 *)(iStack_168 + 200));
                  FUN_104d1550("itemPrice",uVar5);
                  FUN_100e5b40(auStack_60);
                  piVar3 = piStack_124;
                  cVar1 = FUN_116698a0();
                  if (cVar1 == '\0') {
                    FUN_104d1670("itemName",uStack_50);
                  }
                  else {
                    uVar5 = (**(code **)(*piVar3 + 0x14))();
                    CPet__SetName(uVar5);
                    ppiStack_7c = apiStack_8c;
                    apiStack_8c[0] = (int *)((uint)apiStack_8c[0] & 0xffffff00);
                    ppiStack_78 = ppiStack_7c;
                    FUN_100e5aa0(ppiStack_7c);
                    FUN_104d1670("itemName",ppiStack_7c);
                    if ((ppiStack_7c != &piStack_90) && (ppiStack_7c != (int **)0x0)) {
                      FUN_10c3d5d0(ppiStack_7c);
                    }
                    FUN_100e5670();
                  }
                  if ((puStack_58 != &uStack_6c) && (puStack_58 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_58);
                  }
                }
                FUN_104d1550("packTag",piVar9);
                uVar5 = FUN_1025b060();
                uVar6 = FUN_1025b060();
                FUN_104d1550("currentBindMoney",uVar5);
                FUN_104d1550("currentMoney",uVar6);
                (**(code **)(*piStack_108 + 0x3c))(puStack_100,&iStack_168);
                piStack_150 = (int *)((int)piStack_150 + 1);
                FUN_104d7c10();
                piVar3 = piStack_150;
                if (puStack_154 == (undefined4 *)0x2) break;
              }
              piVar3 = (int *)((int)piVar3 + 1);
              iStack_168 = 0x1084024e;
              piStack_150 = piVar3;
              FUN_10846a10();
            } while (piStack_b4 != apiStack_8c[0]);
          }
          iStack_168 = 0x10840278;
          FUN_10847f80();
          if ((uStack_ac >> 6 & 1) != 0) {
            ppiStack_148 = &piStack_b0;
            piStack_144 = piStack_a8;
            piStack_14c = (int *)0x108402a1;
            (**(code **)(*piStack_b0 + 8))();
            piStack_b0 = (int *)0x0;
          }
          uStack_ac = 0;
        }
      }
      if (((uint)puStack_c4 >> 6 & 1) != 0) {
        ppiStack_148 = &piStack_c8;
        piStack_144 = piStack_c0;
        piStack_14c = (int *)0x108402e5;
        (**(code **)(*piStack_c8 + 8))();
      }
    }
  }
  if ((local_dc >> 6 & 1) != 0) {
    ppiStack_148 = &local_e0;
    piStack_144 = local_d8;
    piStack_14c = (int *)0x10840302;
    (**(code **)(*local_e0 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1084a130 @ 1084a130  size=5457 ===== */
// strings:
//   "InitModel"
//   "FaceEditing"
//   "AvatarSubId"
//   "SexSelected"
//   "Return"
//   "CreateRoleOk"
//   "CreateRole"
//   "SelectRoleMode"
//   "DeleteRole"
//   "StartGame"
//   "CreateRoleClickOK"
//   "ColorSelected"
//   "AvatarTypeSelected"
//   "DoRefresh"
//   "SelectedRole"
//   "RoleNumError"
//   "ResetFace"
//   "ReturnRoleList"
//   "ChangeFaceMode"
//   "ReqGotoChangeFaceRole"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""FaceEditing""
     ""AvatarSubId""
     ""SexSelected""
     ""Return""
     ""CreateRoleOk""
     ""CreateRole""
     ""SelectRoleMode""
     ""DeleteRole""
     ""StartGame"" */

void __fastcall FUN_1084a130(undefined4 ****param_1)

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
  undefined4 ***pppuStack_4a8;
  undefined *puStack_4a4;
  char *pcStack_4a0;
  undefined4 ***pppuStack_49c;
  undefined4 ***pppuStack_498;
  undefined4 ***pppuStack_494;
  undefined1 *puStack_490;
  char *pcStack_48c;
  undefined4 ***pppuStack_488;
  undefined4 ***pppuStack_484;
  undefined4 ***pppuStack_480;
  undefined1 *puStack_47c;
  char *pcStack_478;
  undefined4 ***pppuStack_474;
  undefined4 ***pppuStack_470;
  undefined4 ***pppuStack_46c;
  undefined1 *puStack_468;
  char *pcStack_464;
  undefined4 ***pppuStack_460;
  undefined4 ***pppuStack_45c;
  undefined4 ***pppuStack_458;
  undefined1 *puStack_454;
  char *pcStack_450;
  undefined4 ***pppuStack_44c;
  undefined4 ***pppuStack_448;
  undefined4 ***pppuStack_444;
  undefined1 *puStack_440;
  char *pcStack_43c;
  undefined4 ***pppuStack_438;
  undefined4 ***pppuStack_434;
  undefined4 ***pppuStack_430;
  code *pcStack_42c;
  char *pcStack_428;
  undefined4 ***pppuStack_424;
  undefined4 ***pppuStack_420;
  undefined4 ***pppuStack_41c;
  code *pcStack_418;
  char *pcStack_414;
  undefined4 ***pppuStack_410;
  code ***pppcStack_40c;
  undefined4 ***pppuStack_408;
  code *pcStack_404;
  char *pcStack_400;
  undefined4 ***pppuStack_3fc;
  code ***pppcStack_3f8;
  undefined4 ***pppuStack_3f4;
  char *pcStack_3f0;
  code ***pppcStack_3ec;
  code ***pppcStack_3e8;
  undefined4 ***pppuStack_3e4;
  undefined4 ***pppuStack_3e0;
  code ***pppcStack_3dc;
  code ***pppcStack_3d8;
  code ***pppcStack_3d4;
  code ***pppcStack_3d0;
  code ***pppcStack_3cc;
  code ***pppcStack_3c8;
  code ***pppcStack_3c4;
  code ***pppcStack_3c0;
  code ***pppcStack_3bc;
  code ***pppcStack_3b8;
  code ***pppcStack_3b4;
  code ***pppcStack_3b0;
  code ***pppcStack_3ac;
  code ***pppcStack_3a8;
  code ***pppcStack_3a4;
  code ***pppcStack_3a0;
  code ***pppcStack_39c;
  code ***pppcStack_398;
  code ***pppcStack_394;
  code ***pppcStack_390;
  code ***pppcStack_38c;
  code ***pppcStack_388;
  code ***pppcStack_384;
  code ***pppcStack_380;
  code ***pppcStack_37c;
  undefined4 ***pppuStack_378;
  code ***pppcStack_374;
  code ***pppcStack_370;
  code ***pppcStack_36c;
  code ***pppcStack_368;
  code ***pppcStack_364;
  code ***pppcStack_360;
  undefined4 ***pppuStack_35c;
  code ***pppcStack_358;
  code ***pppcStack_354;
  code ***pppcStack_350;
  code ***pppcStack_34c;
  code ***pppcStack_348;
  undefined4 ***pppuStack_344;
  undefined4 ***pppuStack_340;
  code ***pppcStack_33c;
  undefined4 ***pppuStack_338;
  code ***pppcStack_334;
  code ***pppcStack_330;
  code ***pppcStack_32c;
  code ***pppcStack_328;
  code ***pppcStack_324;
  code ***pppcStack_320;
  undefined4 ***pppuStack_31c;
  undefined4 ***pppuStack_318;
  code ***pppcStack_314;
  code ***pppcStack_310;
  code ***pppcStack_30c;
  undefined4 ***pppuStack_308;
  undefined4 ***pppuStack_304;
  undefined4 ***pppuStack_300;
  undefined4 ***pppuStack_2fc;
  undefined4 ***pppuStack_2f8;
  code ***pppcStack_2f4;
  code ***pppcStack_2f0;
  undefined4 ***pppuStack_2ec;
  code ***pppcStack_2e8;
  undefined4 ***pppuStack_2e4;
  undefined4 ***pppuStack_2e0;
  undefined4 ***pppuStack_2dc;
  code ***pppcStack_2d8;
  undefined4 ***pppuStack_2d4;
  undefined4 ***pppuStack_2d0;
  code ***pppcStack_2cc;
  code ***pppcStack_2c8;
  undefined4 ***pppuStack_2c4;
  undefined4 ***pppuStack_2c0;
  code ***pppcStack_2bc;
  code ***pppcStack_2b8;
  code ***pppcStack_2b4;
  code ***pppcStack_2b0;
  code ***pppcStack_2ac;
  undefined4 ***pppuStack_2a8;
  code ***pppcStack_2a4;
  code ***pppcStack_2a0;
  code ***pppcStack_29c;
  code ***pppcStack_298;
  code ***pppcStack_294;
  code ***pppcStack_290;
  undefined4 ***pppuStack_28c;
  code ***pppcStack_288;
  code ***pppcStack_284;
  code ***pppcStack_280;
  code ***pppcStack_27c;
  undefined4 ***pppuStack_278;
  undefined4 ***pppuStack_274;
  undefined4 ***pppuStack_270;
  code ***pppcStack_26c;
  code ***pppcStack_268;
  code ***pppcStack_264;
  code ***pppcStack_260;
  undefined4 ***pppuStack_25c;
  code ***pppcStack_258;
  code ***pppcStack_254;
  code ***pppcStack_250;
  code ***pppcStack_24c;
  code ***pppcStack_248;
  undefined4 ***pppuStack_244;
  undefined4 ***pppuStack_240;
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
  code ***pppcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
  code ***pppcStack_17c;
  code ***pppcStack_178;
  code ***pppcStack_174;
  code ***pppcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  code ***pppcStack_164;
  code ***pppcStack_160;
  code ***pppcStack_15c;
  undefined4 ***pppuStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  code ***pppcStack_14c;
  code ***pppcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  undefined4 ***pppuStack_13c;
  code ***pppcStack_138;
  code ***pppcStack_134;
  code ***pppcStack_130;
  code ***pppcStack_12c;
  undefined4 ***pppuStack_128;
  undefined4 ***pppuStack_124;
  undefined4 ***pppuStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  undefined4 ***pppuStack_10c;
  undefined4 ***pppuStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  code ***pppcStack_fc;
  undefined4 ***pppuStack_f8;
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
  undefined4 ***pppuStack_ec;
  code ***pppcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  undefined4 ***pppuStack_dc;
  code ***pppcStack_d8;
  undefined4 ***pppuStack_d4;
  undefined4 ***pppuStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  undefined4 ***pppuStack_c4;
  undefined4 ***pppuStack_c0;
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
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
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
  pppcStack_34 = (code ***)0x1084a164;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1084c040;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1084a175;
  FUN_10851ec0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1084a18b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dcfb53;
  pppcStack_40 = (code ***)0x11dcfb48;
  pppcStack_44 = (code ***)0x1084a1ab;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1084c170;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1084a1bc;
  FUN_10851ec0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1084a1d2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dcfb5f;
  pppcStack_50 = (code ***)0x11dcfb54;
  pppcStack_54 = (code ***)0x1084a1f2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1084c690;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1084a203;
  FUN_10851ec0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x1084a219;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dcfbd7;
  pppcStack_60 = (code ***)0x11dcfbcc;
  pppcStack_64 = (code ***)0x1084a239;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_1084d4c0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1084a24a;
  FUN_10851ec0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x1084a260;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)&DAT_11dcfbdc;
  pppcStack_70 = (code ***)&DAT_11dcfbd8;
  pppcStack_74 = (code ***)0x1084a280;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_1084da50;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x1084a291;
  FUN_10851ec0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x1084a2a7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dcfbba;
  pppcStack_80 = (code ***)0x11dcfbb4;
  pppcStack_84 = (code ***)0x1084a2c7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_1084da90;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x1084a2d8;
  FUN_10851ec0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppuStack_90 = (undefined4 ***)0x1084a2ee;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dcfbc8;
  pppuStack_90 = (undefined4 ***)0x11dcfbbc;
  pppuStack_94 = (undefined4 ***)0x1084a30e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)FUN_1084daf0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1084a31f;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppcStack_80 != (undefined4 ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x1084a335;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppuStack_94;
  pppcStack_9c = (code ***)0x11dc4086;
  pppcStack_a0 = (code ***)0x11dc407c;
  pppcStack_a4 = (code ***)0x1084a355;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10850d40;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppuStack_ac = (undefined4 ***)0x1084a366;
  FUN_10851ec0();
  if (((code ****)pppuStack_90 != &pppcStack_a4) && ((code ****)pppuStack_90 != (code ****)0x0)) {
    pppuStack_ac = pppuStack_90;
    pppcStack_b0 = (code ***)0x1084a37c;
    FUN_10c3d5d0();
  }
  pppuStack_94 = &pppcStack_a4;
  pppuStack_ac = (undefined4 ***)0x11dcfba6;
  pppcStack_b0 = (code ***)0x11dcfb98;
  pppcStack_b4 = (code ***)0x1084a39c;
  pppuStack_90 = pppuStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)&LAB_10850d10;
  pppcStack_b8 = (code ***)&pppuStack_ac;
  pppcStack_bc = (code ***)0x1084a3ad;
  FUN_10851ec0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppuStack_c0 = (undefined4 ***)0x1084a3c3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dc407a;
  pppuStack_c0 = (undefined4 ***)0x11dc4070;
  pppuStack_c4 = (undefined4 ***)0x1084a3e3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppuStack_c4 = (undefined4 ***)FUN_1084e150;
  pppuStack_c8 = &pppcStack_bc;
  pppcStack_cc = (code ***)0x1084a3f4;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_b0 != &pppuStack_c4) &&
     ((undefined4 ****)pppcStack_b0 != (undefined4 ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppuStack_d0 = (undefined4 ***)0x1084a40a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppuStack_c4;
  pppcStack_cc = (code ***)0x11dcfbb1;
  pppuStack_d0 = (undefined4 ***)0x11dcfba8;
  pppuStack_d4 = (undefined4 ***)0x1084a42a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppuStack_d4 = (undefined4 ***)FUN_1084eeb0;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppuStack_dc = (undefined4 ***)0x1084a43b;
  FUN_10851ec0();
  if (((undefined4 ****)pppuStack_c0 != &pppuStack_d4) &&
     ((undefined4 ****)pppuStack_c0 != (undefined4 ****)0x0)) {
    pppuStack_dc = pppuStack_c0;
    pppcStack_e0 = (code ***)0x1084a451;
    FUN_10c3d5d0();
  }
  pppuStack_c4 = &pppuStack_d4;
  pppuStack_dc = (undefined4 ***)0x11dcfb85;
  pppcStack_e0 = (code ***)0x11dcfb74;
  pppcStack_e4 = (code ***)0x1084a471;
  pppuStack_c0 = pppuStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)&DAT_1084f040;
  pppcStack_e8 = (code ***)&pppuStack_dc;
  pppuStack_ec = (undefined4 ***)0x1084a482;
  FUN_10851ec0();
  if (((code ****)pppuStack_d0 != &pppcStack_e4) && ((code ****)pppuStack_d0 != (code ****)0x0)) {
    pppuStack_ec = pppuStack_d0;
    pppuStack_f0 = (undefined4 ***)0x1084a498;
    FUN_10c3d5d0();
  }
  pppuStack_d4 = &pppcStack_e4;
  pppuStack_ec = (undefined4 ***)0x11dcfb95;
  pppuStack_f0 = (undefined4 ***)0x11dcfb88;
  pppuStack_f4 = (undefined4 ***)0x1084a4b8;
  pppuStack_d0 = pppuStack_d4;
  FUN_100b62c0();
  pppuStack_f4 = (undefined4 ***)&DAT_1084f050;
  pppuStack_f8 = &pppuStack_ec;
  pppcStack_fc = (code ***)0x1084a4c9;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_e0 != &pppuStack_f4) &&
     ((undefined4 ****)pppcStack_e0 != (undefined4 ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x1084a4df;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppuStack_f4;
  pppcStack_fc = (code ***)0x11dcfc56;
  pppcStack_100 = (code ***)0x11dcfc44;
  pppcStack_104 = (code ***)0x1084a4ff;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_1084d9b0;
  pppuStack_108 = &pppcStack_fc;
  pppuStack_10c = (undefined4 ***)0x1084a510;
  FUN_10851ec0();
  if (((code ****)pppuStack_f0 != &pppcStack_104) && ((code ****)pppuStack_f0 != (code ****)0x0)) {
    pppuStack_10c = pppuStack_f0;
    pppcStack_110 = (code ***)0x1084a526;
    FUN_10c3d5d0();
  }
  pppuStack_f4 = &pppcStack_104;
  pppuStack_10c = (undefined4 ***)0x11dcfc61;
  pppcStack_110 = (code ***)0x11dcfc58;
  pppcStack_114 = (code ***)0x1084a546;
  pppuStack_f0 = pppuStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)&LAB_1084f060;
  pppcStack_118 = (code ***)&pppuStack_10c;
  pppcStack_11c = (code ***)0x1084a557;
  FUN_10851ec0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppuStack_120 = (undefined4 ***)0x1084a56d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dcfc30;
  pppuStack_120 = (undefined4 ***)0x11dcfc24;
  pppuStack_124 = (undefined4 ***)0x1084a58d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppuStack_124 = (undefined4 ***)FUN_1084f0b0;
  pppuStack_128 = &pppcStack_11c;
  pppcStack_12c = (code ***)0x1084a59e;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_110 != &pppuStack_124) &&
     ((undefined4 ****)pppcStack_110 != (undefined4 ****)0x0)) {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x1084a5b4;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppuStack_124;
  pppcStack_12c = (code ***)0x11dcfc40;
  pppcStack_130 = (code ***)0x11dcfc34;
  pppcStack_134 = (code ***)0x1084a5d4;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_10850130;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppuStack_13c = (undefined4 ***)0x1084a5e5;
  FUN_10851ec0();
  if (((code ****)pppuStack_120 != &pppcStack_134) && ((code ****)pppuStack_120 != (code ****)0x0))
  {
    pppuStack_13c = pppuStack_120;
    pppcStack_140 = (code ***)0x1084a5fb;
    FUN_10c3d5d0();
  }
  pppuStack_124 = &pppcStack_134;
  pppuStack_13c = (undefined4 ***)0x11dcfc11;
  pppcStack_140 = (code ***)0x11dcfc08;
  pppcStack_144 = (code ***)0x1084a61b;
  pppuStack_120 = pppuStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)&DAT_1084c230;
  pppcStack_148 = (code ***)&pppuStack_13c;
  pppcStack_14c = (code ***)0x1084a62c;
  FUN_10851ec0();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x1084a642;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dcfc22;
  pppcStack_150 = (code ***)0x11dcfc14;
  pppcStack_154 = (code ***)0x1084a662;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_1084cc40;
  pppuStack_158 = &pppcStack_14c;
  pppcStack_15c = (code ***)0x1084a673;
  FUN_10851ec0();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x1084a689;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dcfbee;
  pppcStack_160 = (code ***)0x11dcfbe0;
  pppcStack_164 = (code ***)0x1084a6a9;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_10850dc0;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x1084a6ba;
  FUN_10851ec0();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x1084a6d0;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dcfc05;
  pppcStack_170 = (code ***)0x11dcfbf0;
  pppcStack_174 = (code ***)0x1084a6f0;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_1084e400;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x1084a701;
  FUN_10851ec0();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    pppcStack_180 = (code ***)0x1084a717;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11dcfcf1;
  pppcStack_180 = (code ***)0x11dcfcdc;
  pppcStack_184 = (code ***)0x1084a737;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)FUN_1084e2b0;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x1084a748;
  FUN_10851ec0();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x1084a75e;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11dcfd06;
  pppcStack_190 = (code ***)0x11dcfcf4;
  pppcStack_194 = (code ***)0x1084a77e;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_1084e8a0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  pppcStack_19c = (code ***)0x1084a78f;
  FUN_10851ec0();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x1084a7a5;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11dcfcc6;
  pppcStack_1a0 = (code ***)0x11dcfcb0;
  pppcStack_1a4 = (code ***)0x1084a7c5;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_1084e960;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x1084a7d6;
  FUN_10851ec0();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppcStack_1b0 = (code ***)0x1084a7ec;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11dcfcd9;
  pppcStack_1b0 = (code ***)0x11dcfcc8;
  pppcStack_1b4 = (code ***)0x1084a80c;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppcStack_1b4 = (code ***)FUN_1084e9f0;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x1084a81d;
  FUN_10851ec0();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pppcStack_1c0 = (code ***)0x1084a833;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dcfca1;
  pppcStack_1c0 = (code ***)0x11dcfc8c;
  pppcStack_1c4 = (code ***)0x1084a853;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppcStack_1c4 = (code ***)FUN_1084eab0;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppcStack_1cc = (code ***)0x1084a864;
  FUN_10851ec0();
  if (((code ****)pppcStack_1b0 != &pppcStack_1c4) && ((code ****)pppcStack_1b0 != (code ****)0x0))
  {
    pppcStack_1cc = pppcStack_1b0;
    pppcStack_1d0 = (code ***)0x1084a87a;
    FUN_10c3d5d0();
  }
  pppcStack_1b4 = (code ***)&pppcStack_1c4;
  pppcStack_1cc = (code ***)0x11dcfcae;
  pppcStack_1d0 = (code ***)0x11dcfca4;
  pppcStack_1d4 = (code ***)0x1084a89a;
  pppcStack_1b0 = pppcStack_1b4;
  FUN_100b62c0();
  pppcStack_1d4 = (code ***)FUN_1084dcf0;
  pppcStack_1d8 = (code ***)&pppcStack_1cc;
  pppcStack_1dc = (code ***)0x1084a8ab;
  FUN_10851ec0();
  if (((code ****)pppcStack_1c0 != &pppcStack_1d4) && ((code ****)pppcStack_1c0 != (code ****)0x0))
  {
    pppcStack_1dc = pppcStack_1c0;
    pppcStack_1e0 = (code ***)0x1084a8c1;
    FUN_10c3d5d0();
  }
  pppcStack_1c4 = (code ***)&pppcStack_1d4;
  pppcStack_1dc = (code ***)0x11dcfc77;
  pppcStack_1e0 = (code ***)0x11dcfc64;
  pppcStack_1e4 = (code ***)0x1084a8e1;
  pppcStack_1c0 = pppcStack_1c4;
  FUN_100b62c0();
  pppcStack_1e4 = (code ***)FUN_1084e4a0;
  pppcStack_1e8 = (code ***)&pppcStack_1dc;
  pppcStack_1ec = (code ***)0x1084a8f2;
  FUN_10851ec0();
  if (((code ****)pppcStack_1d0 != &pppcStack_1e4) && ((code ****)pppcStack_1d0 != (code ****)0x0))
  {
    pppcStack_1ec = pppcStack_1d0;
    pppcStack_1f0 = (code ***)0x1084a908;
    FUN_10c3d5d0();
  }
  pppcStack_1d4 = (code ***)&pppcStack_1e4;
  pppcStack_1ec = (code ***)0x11dcfc89;
  pppcStack_1f0 = (code ***)0x11dcfc78;
  pppcStack_1f4 = (code ***)0x1084a928;
  pppcStack_1d0 = pppcStack_1d4;
  FUN_100b62c0();
  pppcStack_1f4 = (code ***)FUN_1084e800;
  pppcStack_1f8 = (code ***)&pppcStack_1ec;
  pppcStack_1fc = (code ***)0x1084a939;
  FUN_10851ec0();
  if (((code ****)pppcStack_1e0 != &pppcStack_1f4) && ((code ****)pppcStack_1e0 != (code ****)0x0))
  {
    pppcStack_1fc = pppcStack_1e0;
    pppcStack_200 = (code ***)0x1084a94f;
    FUN_10c3d5d0();
  }
  pppcStack_1e4 = (code ***)&pppcStack_1f4;
  pppcStack_1fc = (code ***)0x11dcfd79;
  pppcStack_200 = (code ***)0x11dcfd64;
  pppcStack_204 = (code ***)0x1084a96f;
  pppcStack_1e0 = pppcStack_1e4;
  FUN_100b62c0();
  pppcStack_204 = (code ***)FUN_1084eb40;
  pppcStack_208 = (code ***)&pppcStack_1fc;
  pppcStack_20c = (code ***)0x1084a980;
  FUN_10851ec0();
  if (((code ****)pppcStack_1f0 != &pppcStack_204) && ((code ****)pppcStack_1f0 != (code ****)0x0))
  {
    pppcStack_20c = pppcStack_1f0;
    pppcStack_210 = (code ***)0x1084a996;
    FUN_10c3d5d0();
  }
  pppcStack_1f4 = (code ***)&pppcStack_204;
  pppcStack_20c = (code ***)0x11dcfd87;
  pppcStack_210 = (code ***)0x11dcfd7c;
  pppcStack_214 = (code ***)0x1084a9b6;
  pppcStack_1f0 = pppcStack_1f4;
  FUN_100b62c0();
  pppcStack_214 = (code ***)FUN_1084eb80;
  pppcStack_218 = (code ***)&pppcStack_20c;
  pppcStack_21c = (code ***)0x1084a9c7;
  FUN_10851ec0();
  if (((code ****)pppcStack_200 != &pppcStack_214) && ((code ****)pppcStack_200 != (code ****)0x0))
  {
    pppcStack_21c = pppcStack_200;
    pppcStack_220 = (code ***)0x1084a9dd;
    FUN_10c3d5d0();
  }
  pppcStack_204 = (code ***)&pppcStack_214;
  pppcStack_21c = (code ***)0x11dcfd4c;
  pppcStack_220 = (code ***)0x11dcfd40;
  pppcStack_224 = (code ***)0x1084a9fd;
  pppcStack_200 = pppcStack_204;
  FUN_100b62c0();
  pppcStack_224 = (code ***)FUN_1084deb0;
  pppcStack_228 = (code ***)&pppcStack_21c;
  pppcStack_22c = (code ***)0x1084aa0e;
  FUN_10851ec0();
  if (((code ****)pppcStack_210 != &pppcStack_224) && ((code ****)pppcStack_210 != (code ****)0x0))
  {
    pppcStack_22c = pppcStack_210;
    pppcStack_230 = (code ***)0x1084aa24;
    FUN_10c3d5d0();
  }
  pppcStack_214 = (code ***)&pppcStack_224;
  pppcStack_22c = (code ***)0x11dcfd60;
  pppcStack_230 = (code ***)0x11dcfd50;
  pppcStack_234 = (code ***)0x1084aa44;
  pppcStack_210 = pppcStack_214;
  FUN_100b62c0();
  pppcStack_234 = (code ***)FUN_1084df70;
  pppcStack_238 = (code ***)&pppcStack_22c;
  pppcStack_23c = (code ***)0x1084aa55;
  FUN_10851ec0();
  if (((code ****)pppcStack_220 != &pppcStack_234) && ((code ****)pppcStack_220 != (code ****)0x0))
  {
    pppcStack_23c = pppcStack_220;
    pppuStack_240 = (undefined4 ***)0x1084aa6b;
    FUN_10c3d5d0();
  }
  pppcStack_224 = (code ***)&pppcStack_234;
  pppcStack_23c = (code ***)0x11dcfd2f;
  pppuStack_240 = (undefined4 ***)0x11dcfd24;
  pppuStack_244 = (undefined4 ***)0x1084aa8b;
  pppcStack_220 = pppcStack_224;
  FUN_100b62c0();
  pppuStack_244 = (undefined4 ***)FUN_1084e000;
  pppcStack_248 = (code ***)&pppcStack_23c;
  pppcStack_24c = (code ***)0x1084aa9c;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_230 != &pppuStack_244) &&
     ((undefined4 ****)pppcStack_230 != (undefined4 ****)0x0)) {
    pppcStack_24c = pppcStack_230;
    pppcStack_250 = (code ***)0x1084aab2;
    FUN_10c3d5d0();
  }
  pppcStack_234 = (code ***)&pppuStack_244;
  pppcStack_24c = (code ***)0x11dcfd3f;
  pppcStack_250 = (code ***)0x11dcfd30;
  pppcStack_254 = (code ***)0x1084aad2;
  pppcStack_230 = pppcStack_234;
  FUN_100b62c0();
  pppcStack_254 = (code ***)FUN_1084e0c0;
  pppcStack_258 = (code ***)&pppcStack_24c;
  pppuStack_25c = (undefined4 ***)0x1084aae3;
  FUN_10851ec0();
  if (((code ****)pppuStack_240 != &pppcStack_254) && ((code ****)pppuStack_240 != (code ****)0x0))
  {
    pppuStack_25c = pppuStack_240;
    pppcStack_260 = (code ***)0x1084aaf9;
    FUN_10c3d5d0();
  }
  pppuStack_244 = &pppcStack_254;
  pppuStack_25c = (undefined4 ***)0x11dcfd12;
  pppcStack_260 = (code ***)0x11dcfd08;
  pppcStack_264 = (code ***)0x1084ab19;
  pppuStack_240 = pppuStack_244;
  FUN_100b62c0();
  pppcStack_264 = (code ***)&DAT_1084c240;
  pppcStack_268 = (code ***)&pppuStack_25c;
  pppcStack_26c = (code ***)0x1084ab2a;
  FUN_10851ec0();
  if (((code ****)pppcStack_250 != &pppcStack_264) && ((code ****)pppcStack_250 != (code ****)0x0))
  {
    pppcStack_26c = pppcStack_250;
    pppuStack_270 = (undefined4 ***)0x1084ab40;
    FUN_10c3d5d0();
  }
  pppcStack_254 = (code ***)&pppcStack_264;
  pppcStack_26c = (code ***)0x11dcfd20;
  pppuStack_270 = (undefined4 ***)0x11dcfd14;
  pppuStack_274 = (undefined4 ***)0x1084ab60;
  pppcStack_250 = pppcStack_254;
  FUN_100b62c0();
  pppuStack_274 = (undefined4 ***)FUN_1084d110;
  pppuStack_278 = &pppcStack_26c;
  pppcStack_27c = (code ***)0x1084ab71;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_260 != &pppuStack_274) &&
     ((undefined4 ****)pppcStack_260 != (undefined4 ****)0x0)) {
    pppcStack_27c = pppcStack_260;
    pppcStack_280 = (code ***)0x1084ab87;
    FUN_10c3d5d0();
  }
  pppcStack_264 = (code ***)&pppuStack_274;
  pppcStack_27c = (code ***)0x11dcfde9;
  pppcStack_280 = (code ***)0x11dcfddc;
  pppcStack_284 = (code ***)0x1084aba7;
  pppcStack_260 = pppcStack_264;
  FUN_100b62c0();
  pppcStack_284 = (code ***)FUN_1084cd80;
  pppcStack_288 = (code ***)&pppcStack_27c;
  pppuStack_28c = (undefined4 ***)0x1084abb8;
  FUN_10851ec0();
  if (((code ****)pppuStack_270 != &pppcStack_284) && ((code ****)pppuStack_270 != (code ****)0x0))
  {
    pppuStack_28c = pppuStack_270;
    pppcStack_290 = (code ***)0x1084abce;
    FUN_10c3d5d0();
  }
  pppuStack_274 = &pppcStack_284;
  pppuStack_28c = (undefined4 ***)0x11dcfdf9;
  pppcStack_290 = (code ***)0x11dcfdec;
  pppcStack_294 = (code ***)0x1084abee;
  pppuStack_270 = pppuStack_274;
  FUN_100b62c0();
  pppcStack_294 = (code ***)&DAT_1084c250;
  pppcStack_298 = (code ***)&pppuStack_28c;
  pppcStack_29c = (code ***)0x1084abff;
  FUN_10851ec0();
  if (((code ****)pppcStack_280 != &pppcStack_294) && ((code ****)pppcStack_280 != (code ****)0x0))
  {
    pppcStack_29c = pppcStack_280;
    pppcStack_2a0 = (code ***)0x1084ac15;
    FUN_10c3d5d0();
  }
  pppcStack_284 = (code ***)&pppcStack_294;
  pppcStack_29c = (code ***)0x11dcfdcb;
  pppcStack_2a0 = (code ***)0x11dcfdc0;
  pppcStack_2a4 = (code ***)0x1084ac35;
  pppcStack_280 = pppcStack_284;
  FUN_100b62c0();
  pppcStack_2a4 = (code ***)FUN_1084c260;
  pppuStack_2a8 = &pppcStack_29c;
  pppcStack_2ac = (code ***)0x1084ac46;
  FUN_10851ec0();
  if (((code ****)pppcStack_290 != &pppcStack_2a4) && ((code ****)pppcStack_290 != (code ****)0x0))
  {
    pppcStack_2ac = pppcStack_290;
    pppcStack_2b0 = (code ***)0x1084ac5c;
    FUN_10c3d5d0();
  }
  pppcStack_294 = (code ***)&pppcStack_2a4;
  pppcStack_2ac = (code ***)0x11dcfddb;
  pppcStack_2b0 = (code ***)0x11dcfdcc;
  pppcStack_2b4 = (code ***)0x1084ac7c;
  pppcStack_290 = pppcStack_294;
  FUN_100b62c0();
  pppcStack_2b4 = (code ***)FUN_1084c380;
  pppcStack_2b8 = (code ***)&pppcStack_2ac;
  pppcStack_2bc = (code ***)0x1084ac8d;
  FUN_10851ec0();
  if (((code ****)pppcStack_2a0 != &pppcStack_2b4) && ((code ****)pppcStack_2a0 != (code ****)0x0))
  {
    pppcStack_2bc = pppcStack_2a0;
    pppuStack_2c0 = (undefined4 ***)0x1084aca3;
    FUN_10c3d5d0();
  }
  pppcStack_2a4 = (code ***)&pppcStack_2b4;
  pppcStack_2bc = (code ***)0x11dcfdab;
  pppuStack_2c0 = (undefined4 ***)0x11dcfd9c;
  pppuStack_2c4 = (undefined4 ***)0x1084acc3;
  pppcStack_2a0 = pppcStack_2a4;
  FUN_100b62c0();
  pppuStack_2c4 = (undefined4 ***)FUN_1084f260;
  pppcStack_2c8 = (code ***)&pppcStack_2bc;
  pppcStack_2cc = (code ***)0x1084acd4;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_2b0 != &pppuStack_2c4) &&
     ((undefined4 ****)pppcStack_2b0 != (undefined4 ****)0x0)) {
    pppcStack_2cc = pppcStack_2b0;
    pppuStack_2d0 = (undefined4 ***)0x1084acea;
    FUN_10c3d5d0();
  }
  pppcStack_2b4 = (code ***)&pppuStack_2c4;
  pppcStack_2cc = (code ***)0x11dcfdbc;
  pppuStack_2d0 = (undefined4 ***)0x11dcfdac;
  pppuStack_2d4 = (undefined4 ***)0x1084ad0a;
  pppcStack_2b0 = pppcStack_2b4;
  FUN_100b62c0();
  pppuStack_2d4 = (undefined4 ***)FUN_1084f370;
  pppcStack_2d8 = (code ***)&pppcStack_2cc;
  pppuStack_2dc = (undefined4 ***)0x1084ad1b;
  FUN_10851ec0();
  if (((undefined4 ****)pppuStack_2c0 != &pppuStack_2d4) &&
     ((undefined4 ****)pppuStack_2c0 != (undefined4 ****)0x0)) {
    pppuStack_2dc = pppuStack_2c0;
    pppuStack_2e0 = (undefined4 ***)0x1084ad31;
    FUN_10c3d5d0();
  }
  pppuStack_2c4 = &pppuStack_2d4;
  pppuStack_2dc = (undefined4 ***)0x11dcfd8f;
  pppuStack_2e0 = (undefined4 ***)0x11dcfd88;
  pppuStack_2e4 = (undefined4 ***)0x1084ad51;
  pppuStack_2c0 = pppuStack_2c4;
  FUN_100b62c0();
  pppuStack_2e4 = (undefined4 ***)&LAB_10850e40;
  pppcStack_2e8 = (code ***)&pppuStack_2dc;
  pppuStack_2ec = (undefined4 ***)0x1084ad62;
  FUN_10851ec0();
  if (((undefined4 ****)pppuStack_2d0 != &pppuStack_2e4) &&
     ((undefined4 ****)pppuStack_2d0 != (undefined4 ****)0x0)) {
    pppuStack_2ec = pppuStack_2d0;
    pppcStack_2f0 = (code ***)0x1084ad78;
    FUN_10c3d5d0();
  }
  pppuStack_2d4 = &pppuStack_2e4;
  pppuStack_2ec = (undefined4 ***)0x11dcfd98;
  pppcStack_2f0 = (code ***)0x11dcfd90;
  pppcStack_2f4 = (code ***)0x1084ad98;
  pppuStack_2d0 = pppuStack_2d4;
  FUN_100b62c0();
  pppcStack_2f4 = (code ***)&LAB_10850ea0;
  pppuStack_2f8 = &pppuStack_2ec;
  pppuStack_2fc = (undefined4 ***)0x1084ada9;
  FUN_10851ec0();
  if (((code ****)pppuStack_2e0 != &pppcStack_2f4) && ((code ****)pppuStack_2e0 != (code ****)0x0))
  {
    pppuStack_2fc = pppuStack_2e0;
    pppuStack_300 = (undefined4 ***)0x1084adbf;
    FUN_10c3d5d0();
  }
  pppuStack_2e4 = &pppcStack_2f4;
  pppuStack_2fc = (undefined4 ***)0x11dcfe63;
  pppuStack_300 = (undefined4 ***)0x11dcfe54;
  pppuStack_304 = (undefined4 ***)0x1084addf;
  pppuStack_2e0 = pppuStack_2e4;
  FUN_100b62c0();
  pppuStack_304 = (undefined4 ***)&LAB_10851020;
  pppuStack_308 = &pppuStack_2fc;
  pppcStack_30c = (code ***)0x1084adf0;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_2f0 != &pppuStack_304) &&
     ((undefined4 ****)pppcStack_2f0 != (undefined4 ****)0x0)) {
    pppcStack_30c = pppcStack_2f0;
    pppcStack_310 = (code ***)0x1084ae06;
    FUN_10c3d5d0();
  }
  pppcStack_2f4 = (code ***)&pppuStack_304;
  pppcStack_30c = (code ***)0x11dcfe72;
  pppcStack_310 = (code ***)0x11dcfe64;
  pppcStack_314 = (code ***)0x1084ae26;
  pppcStack_2f0 = pppcStack_2f4;
  FUN_100b62c0();
  pppcStack_314 = (code ***)FUN_10850fe0;
  pppuStack_318 = &pppcStack_30c;
  pppuStack_31c = (undefined4 ***)0x1084ae37;
  FUN_10851ec0();
  if (((code ****)pppuStack_300 != &pppcStack_314) && ((code ****)pppuStack_300 != (code ****)0x0))
  {
    pppuStack_31c = pppuStack_300;
    pppcStack_320 = (code ***)0x1084ae4d;
    FUN_10c3d5d0();
  }
  pppuStack_304 = &pppcStack_314;
  pppuStack_31c = (undefined4 ***)0x11dcfe47;
  pppcStack_320 = (code ***)0x11dcfe38;
  pppcStack_324 = (code ***)0x1084ae6d;
  pppuStack_300 = pppuStack_304;
  FUN_100b62c0();
  pppcStack_328 = (code ***)&pppuStack_31c;
  pppcStack_32c = (code ***)0x1084ae7a;
  FUN_10851df0();
  if (((code ****)pppcStack_310 != &pppcStack_324) && ((code ****)pppcStack_310 != (code ****)0x0))
  {
    pppcStack_32c = pppcStack_310;
    pppcStack_330 = (code ***)0x1084ae90;
    FUN_10c3d5d0();
  }
  pppcStack_314 = (code ***)&pppcStack_324;
  pppcStack_32c = (code ***)0x11dcfe52;
  pppcStack_330 = (code ***)0x11dcfe48;
  pppcStack_334 = (code ***)0x1084aeb0;
  pppcStack_310 = pppcStack_314;
  FUN_100b62c0();
  pppcStack_334 = (code ***)FUN_1084cbe0;
  pppuStack_338 = &pppcStack_32c;
  pppcStack_33c = (code ***)0x1084aec1;
  FUN_10851ec0();
  if (((code ****)pppcStack_320 != &pppcStack_334) && ((code ****)pppcStack_320 != (code ****)0x0))
  {
    pppcStack_33c = pppcStack_320;
    pppuStack_340 = (undefined4 ***)0x1084aed7;
    FUN_10c3d5d0();
  }
  pppcStack_324 = (code ***)&pppcStack_334;
  pppcStack_33c = (code ***)0x11dcfe2a;
  pppuStack_340 = (undefined4 ***)0x11dcfe20;
  pppuStack_344 = (undefined4 ***)0x1084aef7;
  pppcStack_320 = pppcStack_324;
  FUN_100b62c0();
  pppuStack_344 = (undefined4 ***)FUN_10850260;
  pppcStack_348 = (code ***)&pppcStack_33c;
  pppcStack_34c = (code ***)0x1084af08;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_330 != &pppuStack_344) &&
     ((undefined4 ****)pppcStack_330 != (undefined4 ****)0x0)) {
    pppcStack_34c = pppcStack_330;
    pppcStack_350 = (code ***)0x1084af1e;
    FUN_10c3d5d0();
  }
  pppcStack_334 = (code ***)&pppuStack_344;
  pppcStack_34c = (code ***)0x11dcfe37;
  pppcStack_350 = (code ***)0x11dcfe2c;
  pppcStack_354 = (code ***)0x1084af3e;
  pppcStack_330 = pppcStack_334;
  FUN_100b62c0();
  pppcStack_354 = (code ***)FUN_10850f00;
  pppcStack_358 = (code ***)&pppcStack_34c;
  pppuStack_35c = (undefined4 ***)0x1084af4f;
  FUN_10851ec0();
  if (((code ****)pppuStack_340 != &pppcStack_354) && ((code ****)pppuStack_340 != (code ****)0x0))
  {
    pppuStack_35c = pppuStack_340;
    pppcStack_360 = (code ***)0x1084af65;
    FUN_10c3d5d0();
  }
  pppuStack_344 = &pppcStack_354;
  pppuStack_35c = (undefined4 ***)0x11dcfe0a;
  pppcStack_360 = (code ***)0x11dcfdfc;
  pppcStack_364 = (code ***)0x1084af85;
  pppuStack_340 = pppuStack_344;
  FUN_100b62c0();
  pppcStack_364 = (code ***)&LAB_10850fb0;
  pppcStack_368 = (code ***)&pppuStack_35c;
  pppcStack_36c = (code ***)0x1084af96;
  FUN_10851ec0();
  if (((code ****)pppcStack_350 != &pppcStack_364) && ((code ****)pppcStack_350 != (code ****)0x0))
  {
    pppcStack_36c = pppcStack_350;
    pppcStack_370 = (code ***)0x1084afac;
    FUN_10c3d5d0();
  }
  pppcStack_354 = (code ***)&pppcStack_364;
  pppcStack_36c = (code ***)0x11dcfe1c;
  pppcStack_370 = (code ***)0x11dcfe0c;
  pppcStack_374 = (code ***)0x1084afcc;
  pppcStack_350 = pppcStack_354;
  FUN_100b62c0();
  pppcStack_374 = (code ***)FUN_1084d3b0;
  pppuStack_378 = &pppcStack_36c;
  pppcStack_37c = (code ***)0x1084afdd;
  FUN_10851ec0();
  if (((code ****)pppcStack_360 != &pppcStack_374) && ((code ****)pppcStack_360 != (code ****)0x0))
  {
    pppcStack_37c = pppcStack_360;
    pppcStack_380 = (code ***)0x1084aff3;
    FUN_10c3d5d0();
  }
  pppcStack_364 = (code ***)&pppcStack_374;
  pppcStack_37c = (code ***)0x11dcfedb;
  pppcStack_380 = (code ***)0x11dcfed0;
  pppcStack_384 = (code ***)0x1084b013;
  pppcStack_360 = pppcStack_364;
  FUN_100b62c0();
  pppcStack_384 = (code ***)FUN_1084cc70;
  pppcStack_388 = (code ***)&pppcStack_37c;
  pppcStack_38c = (code ***)0x1084b024;
  FUN_10851ec0();
  if (((code ****)pppcStack_370 != &pppcStack_384) && ((code ****)pppcStack_370 != (code ****)0x0))
  {
    pppcStack_38c = pppcStack_370;
    pppcStack_390 = (code ***)0x1084b03a;
    FUN_10c3d5d0();
  }
  pppcStack_374 = (code ***)&pppcStack_384;
  pppcStack_38c = (code ***)0x11dcfee4;
  pppcStack_390 = (code ***)0x11dcfedc;
  pppcStack_394 = (code ***)0x1084b05a;
  pppcStack_370 = pppcStack_374;
  FUN_100b62c0();
  pppcStack_394 = (code ***)FUN_1084c540;
  pppcStack_398 = (code ***)&pppcStack_38c;
  pppcStack_39c = (code ***)0x1084b06b;
  FUN_10851ec0();
  if (((code ****)pppcStack_380 != &pppcStack_394) && ((code ****)pppcStack_380 != (code ****)0x0))
  {
    pppcStack_39c = pppcStack_380;
    pppcStack_3a0 = (code ***)0x1084b081;
    FUN_10c3d5d0();
  }
  pppcStack_384 = (code ***)&pppcStack_394;
  pppcStack_39c = (code ***)0x11dcfec0;
  pppcStack_3a0 = (code ***)0x11dcfeb4;
  pppcStack_3a4 = (code ***)0x1084b0a1;
  pppcStack_380 = pppcStack_384;
  FUN_100b62c0();
  pppcStack_3a4 = (code ***)FUN_1084c5a0;
  pppcStack_3a8 = (code ***)&pppcStack_39c;
  pppcStack_3ac = (code ***)0x1084b0b2;
  FUN_10851ec0();
  if (((code ****)pppcStack_390 != &pppcStack_3a4) && ((code ****)pppcStack_390 != (code ****)0x0))
  {
    pppcStack_3ac = pppcStack_390;
    pppcStack_3b0 = (code ***)0x1084b0c8;
    FUN_10c3d5d0();
  }
  pppcStack_394 = (code ***)&pppcStack_3a4;
  pppcStack_3ac = (code ***)0x11dcfecf;
  pppcStack_3b0 = (code ***)0x11dcfec4;
  pppcStack_3b4 = (code ***)0x1084b0e8;
  pppcStack_390 = pppcStack_394;
  FUN_100b62c0();
  pppcStack_3b4 = (code ***)FUN_1084edc0;
  pppcStack_3b8 = (code ***)&pppcStack_3ac;
  pppcStack_3bc = (code ***)0x1084b0f9;
  FUN_10851ec0();
  if (((code ****)pppcStack_3a0 != &pppcStack_3b4) && ((code ****)pppcStack_3a0 != (code ****)0x0))
  {
    pppcStack_3bc = pppcStack_3a0;
    pppcStack_3c0 = (code ***)0x1084b10f;
    FUN_10c3d5d0();
  }
  pppcStack_3a4 = (code ***)&pppcStack_3b4;
  pppcStack_3bc = (code ***)0x11dcfea0;
  pppcStack_3c0 = (code ***)0x11dcfe98;
  pppcStack_3c4 = (code ***)0x1084b12f;
  pppcStack_3a0 = pppcStack_3a4;
  FUN_100b62c0();
  pppcStack_3c4 = (code ***)FUN_1084b6a0;
  pppcStack_3c8 = (code ***)&pppcStack_3bc;
  pppcStack_3cc = (code ***)0x1084b140;
  FUN_10851ec0();
  if (((code ****)pppcStack_3b0 != &pppcStack_3c4) && ((code ****)pppcStack_3b0 != (code ****)0x0))
  {
    pppcStack_3cc = pppcStack_3b0;
    pppcStack_3d0 = (code ***)0x1084b156;
    FUN_10c3d5d0();
  }
  pppcStack_3b4 = (code ***)&pppcStack_3c4;
  pppcStack_3cc = (code ***)0x11dcfeb3;
  pppcStack_3d0 = (code ***)0x11dcfea4;
  pppcStack_3d4 = (code ***)0x1084b176;
  pppcStack_3b0 = pppcStack_3b4;
  FUN_100b62c0();
  pppcStack_3d4 = (code ***)FUN_1084c600;
  pppcStack_3d8 = (code ***)&pppcStack_3cc;
  pppcStack_3dc = (code ***)0x1084b187;
  FUN_10851ec0();
  if (((code ****)pppcStack_3c0 != &pppcStack_3d4) && ((code ****)pppcStack_3c0 != (code ****)0x0))
  {
    pppcStack_3dc = pppcStack_3c0;
    pppuStack_3e0 = (undefined4 ***)0x1084b19d;
    FUN_10c3d5d0();
  }
  pppcStack_3c4 = (code ***)&pppcStack_3d4;
  pppcStack_3dc = (code ***)0x11dcfe7e;
  pppuStack_3e0 = (undefined4 ***)0x11dcfe74;
  pppuStack_3e4 = (undefined4 ***)0x1084b1bd;
  pppcStack_3c0 = pppcStack_3c4;
  FUN_100b62c0();
  pppuStack_3e4 = (undefined4 ***)FUN_1084c640;
  pppcStack_3e8 = (code ***)&pppcStack_3dc;
  pppcStack_3ec = (code ***)0x1084b1ce;
  FUN_10851ec0();
  if (((undefined4 ****)pppcStack_3d0 != &pppuStack_3e4) &&
     ((undefined4 ****)pppcStack_3d0 != (undefined4 ****)0x0)) {
    pppcStack_3ec = pppcStack_3d0;
    pcStack_3f0 = (char *)0x1084b1e4;
    FUN_10c3d5d0();
  }
  pppcStack_3d4 = (code ***)&pppuStack_3e4;
  pppcStack_3ec = (code ***)0x11dcfe97;
  pcStack_3f0 = "ShowNewSimpleDialogById";
  pppuStack_3f4 = (undefined4 ***)0x1084b204;
  pppcStack_3d0 = pppcStack_3d4;
  FUN_100b62c0();
  pppuStack_3f4 = (undefined4 ***)FUN_10851070;
  pppcStack_3f8 = (code ***)&pppcStack_3ec;
  pppuStack_3fc = (undefined4 ***)0x1084b215;
  FUN_10851ec0();
  if (((undefined4 ****)pppuStack_3e0 != &pppuStack_3f4) &&
     ((undefined4 ****)pppuStack_3e0 != (undefined4 ****)0x0)) {
    pppuStack_3fc = pppuStack_3e0;
    pcStack_400 = (char *)0x1084b22b;
    FUN_10c3d5d0();
  }
  pppuStack_3e4 = &pppuStack_3f4;
  pppuStack_3fc = (undefined4 ***)0x11dcff85;
  pcStack_400 = "DeleteRole_OK";
  pcStack_404 = (code *)0x1084b24b;
  pppuStack_3e0 = pppuStack_3e4;
  FUN_100b62c0();
  pcStack_404 = FUN_1084f530;
  pppcStack_40c = (code ***)&pppuStack_3fc;
  pppuStack_410 = (undefined4 ***)0x1084b266;
  pppuStack_408 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_3f4 != &pppuStack_408) &&
     ((undefined4 ****)pppuStack_3f4 != (undefined4 ****)0x0)) {
    pppuStack_410 = pppuStack_3f4;
    pcStack_414 = (char *)0x1084b27c;
    FUN_10c3d5d0();
  }
  pppcStack_3f8 = (code ***)&pppuStack_408;
  pppuStack_410 = (undefined4 ***)0x11dcff95;
  pcStack_414 = "DeleteRole_No";
  pcStack_418 = (code *)0x1084b29c;
  pppuStack_3f4 = (undefined4 ***)pppcStack_3f8;
  FUN_100b62c0();
  pcStack_418 = FUN_1084f5b0;
  pppuStack_420 = &pppuStack_410;
  pppuStack_424 = (undefined4 ***)0x1084b2b7;
  pppuStack_41c = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_408 != &pppuStack_41c) &&
     ((undefined4 ****)pppuStack_408 != (undefined4 ****)0x0)) {
    pppuStack_424 = pppuStack_408;
    pcStack_428 = (char *)0x1084b2cd;
    FUN_10c3d5d0();
  }
  pppcStack_40c = (code ***)&pppuStack_41c;
  pppuStack_424 = (undefined4 ***)0x11dcff55;
  pcStack_428 = "AutoConfigSystemPreference_OK";
  pcStack_42c = (code *)0x1084b2ed;
  pppuStack_408 = (undefined4 ***)pppcStack_40c;
  FUN_100b62c0();
  pcStack_42c = FUN_1084fde0;
  pppuStack_434 = &pppuStack_424;
  pppuStack_438 = (undefined4 ***)0x1084b308;
  pppuStack_430 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_41c != &pppuStack_430) &&
     ((undefined4 ****)pppuStack_41c != (undefined4 ****)0x0)) {
    pppuStack_438 = pppuStack_41c;
    pcStack_43c = (char *)0x1084b31e;
    FUN_10c3d5d0();
  }
  pppuStack_420 = &pppuStack_430;
  pppuStack_438 = (undefined4 ***)0x11dcff75;
  pcStack_43c = "AutoConfigSystemPreference_NO";
  puStack_440 = (undefined1 *)0x1084b33e;
  pppuStack_41c = pppuStack_420;
  FUN_100b62c0();
  puStack_440 = &LAB_108500a0;
  pppuStack_448 = &pppuStack_438;
  pppuStack_44c = (undefined4 ***)0x1084b359;
  pppuStack_444 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_430 != &pppuStack_444) &&
     ((undefined4 ****)pppuStack_430 != (undefined4 ****)0x0)) {
    pppuStack_44c = pppuStack_430;
    pcStack_450 = (char *)0x1084b36f;
    FUN_10c3d5d0();
  }
  pppuStack_434 = &pppuStack_444;
  pppuStack_44c = (undefined4 ***)0x11dbf1a4;
  pcStack_450 = "LineFullMessageBoxOK";
  puStack_454 = (undefined1 *)0x1084b38f;
  pppuStack_430 = pppuStack_434;
  FUN_100b62c0();
  puStack_454 = &LAB_108500e0;
  pppuStack_45c = &pppuStack_44c;
  pppuStack_460 = (undefined4 ***)0x1084b3aa;
  pppuStack_458 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_444 != &pppuStack_458) &&
     ((undefined4 ****)pppuStack_444 != (undefined4 ****)0x0)) {
    pppuStack_460 = pppuStack_444;
    pcStack_464 = (char *)0x1084b3c0;
    FUN_10c3d5d0();
  }
  pppuStack_448 = &pppuStack_458;
  pppuStack_460 = (undefined4 ***)0x11dcff18;
  pcStack_464 = "CreatRoleNameInputOK";
  puStack_468 = (undefined1 *)0x1084b3e0;
  pppuStack_444 = pppuStack_448;
  FUN_100b62c0();
  puStack_468 = &LAB_1084f6a0;
  pppuStack_470 = &pppuStack_460;
  pppuStack_474 = (undefined4 ***)0x1084b3fb;
  pppuStack_46c = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_458 != &pppuStack_46c) &&
     ((undefined4 ****)pppuStack_458 != (undefined4 ****)0x0)) {
    pppuStack_474 = pppuStack_458;
    pcStack_478 = (char *)0x1084b411;
    FUN_10c3d5d0();
  }
  pppuStack_45c = &pppuStack_46c;
  pppuStack_474 = (undefined4 ***)0x11dcff34;
  pcStack_478 = "CreatRoleNameInputCancel";
  puStack_47c = (undefined1 *)0x1084b431;
  pppuStack_458 = pppuStack_45c;
  FUN_100b62c0();
  puStack_47c = &LAB_1084f6f0;
  pppuStack_484 = &pppuStack_474;
  pppuStack_488 = (undefined4 ***)0x1084b44c;
  pppuStack_480 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_46c != &pppuStack_480) &&
     ((undefined4 ****)pppuStack_46c != (undefined4 ****)0x0)) {
    pppuStack_488 = pppuStack_46c;
    pcStack_48c = (char *)0x1084b462;
    FUN_10c3d5d0();
  }
  pppuStack_470 = &pppuStack_480;
  pppuStack_488 = (undefined4 ***)0x11dcfef4;
  pcStack_48c = "LobbyExitYes";
  puStack_490 = (undefined1 *)0x1084b482;
  pppuStack_46c = pppuStack_470;
  FUN_100b62c0();
  puStack_490 = &LAB_1084da30;
  pppuStack_498 = &pppuStack_488;
  pppuStack_49c = (undefined4 ***)0x1084b49d;
  pppuStack_494 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_480 != &pppuStack_494) &&
     ((undefined4 ****)pppuStack_480 != (undefined4 ****)0x0)) {
    pppuStack_49c = pppuStack_480;
    pcStack_4a0 = (char *)0x1084b4b3;
    FUN_10c3d5d0();
  }
  pppuStack_484 = &pppuStack_494;
  pppuStack_49c = (undefined4 ***)0x11dcff03;
  pcStack_4a0 = "LobbyExitNo";
  puStack_4a4 = (undefined *)0x1084b4d3;
  pppuStack_480 = pppuStack_484;
  FUN_100b62c0();
  puStack_4a4 = &DAT_1084da40;
  pppuStack_4a8 = param_1;
  FUN_104d0ee0(&pppuStack_49c);
  if (((undefined4 ****)pppuStack_494 != &pppuStack_4a8) &&
     ((undefined4 ****)pppuStack_494 != (undefined4 ****)0x0)) {
    FUN_10c3d5d0(pppuStack_494);
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_108544a0(param_1,extraout_ECX);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_108544f0(param_1,extraout_ECX_00);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_10854540(param_1,extraout_ECX_01);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_10854590(param_1,extraout_ECX_02);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_108545e0(param_1,extraout_ECX_03);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_10854630(param_1,extraout_ECX_04);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_10854680(param_1,extraout_ECX_05);
    }
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_108546d0(param_1,extraout_ECX_06);
    }
  }
  FUN_10853d30();
  FUN_10853d70();
  FUN_10853db0();
  FUN_10853df0();
  param_1[0x48] = (undefined4 ***)0x1;
  param_1[0x49] = (undefined4 ***)0x1;
  param_1[8] = (undefined4 ***)0x0;
  param_1[9] = (undefined4 ***)0x1;
  param_1[10] = (undefined4 ***)0x1;
  param_1[0xc] = (undefined4 ***)0x1;
  param_1[0x14] = (undefined4 ***)0x0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x46] = (undefined4 ***)0xffffffff;
  *(undefined2 *)(param_1 + 0x47) = 0;
  DAT_123bba2c = 0xffffffff;
  DAT_123bba28 = 0;
  FUN_11a89daa();
  return;
}



