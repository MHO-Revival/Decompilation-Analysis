/* ===== FUN_101717d0 @ 101717d0  size=218 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[catCuisineID]"
//   "[state]"

/* [RE-AUTO c0]
   strings:
     ""[catCuisineID]""
     ""[state]"" */

int __thiscall
FUN_101717d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c698e8;
  local_10 = ExceptionList;
  uVar1 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    return -0x13;
  }
  local_20 = param_2;
  local_14 = '\0';
  local_1c = 0;
  local_18 = param_3;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[catCuisineID]",&DAT_11d9e0b4,*param_1,
                              uVar1);
  if (iVar2 == 0) {
    iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[state]",&DAT_11d9f574,param_1[1],uVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_1c;
  }
  if (local_14 != '\0') {
    FUN_10c3da30(local_20);
  }
  ExceptionList = local_10;
  return iVar2;
}



/* ===== FUN_101718b0 @ 101718b0  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[catCuisineID]"
//   "[state]"

/* [RE-AUTO c0]
   strings:
     ""[catCuisineID]""
     ""[state]"" */

void __thiscall
FUN_101718b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[catCuisineID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[state]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_101ff650 @ 101ff650  size=206 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[curExp]"
//   "[level]"
//   "[gatherCount]"
//   "[lastRefreshTime]"
//   "[petID]"
//   "[gatherLevel]"

/* [RE-AUTO c0]
   strings:
     ""[curExp]""
     ""[level]""
     ""[gatherCount]""
     ""[lastRefreshTime]""
     ""[petID]""
     ""[gatherLevel]"" */

void __thiscall
FUN_101ff650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[curExp]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,
                                (int)*(short *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[gatherCount]",&DAT_11d9e0b4,
                                  (int)*(short *)((int)param_1 + 6));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[lastRefreshTime]",&DAT_11d9e0b4,
                                    param_1[2]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[petID]",&DAT_11d9e0b4,param_1[3]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[gatherLevel]",&DAT_11d9e0b4,
                                (int)*(short *)(param_1 + 4));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10200df0 @ 10200df0  size=230 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[petID]"
//   "[skinID]"
//   "[avatarInfo]"
//   "0x%02x"
//   "[sex]"
//   "[slot]"

/* [RE-AUTO c0]
   strings:
     ""[petID]""
     ""[skinID]""
     ""[avatarInfo]""
     ""0x%02x""
     ""[sex]""
     ""[slot]"" */

void __thiscall
FUN_10200df0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[petID]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[skinID]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) && (iVar1 = TdrText_ArrayHeader(extraout_ECX,"[avatarInfo]",6,0), iVar1 == 0)) {
    uVar2 = 0;
    puVar3 = param_1 + 2;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 6);
    iVar1 = TdrBuf_PutU8Z(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[sex]","0x%02x",
                                    (int)*(char *)(param_1 + 8)), iVar1 == 0)) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[slot]",&DAT_11d9e0b4,
                          *(undefined4 *)((int)param_1 + 0x21));
    }
  }
  return;
}



/* ===== FUN_102074e0 @ 102074e0  size=271 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[soulBeastGID]"
//   "[oCharLevel]"
//   "[oCharExp]"
//   "[oCharGlut]"
//   "[oEvloveStage]"
//   "[oImage]"
//   "[oFollow]"
//   "[oFeedTime]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[soulBeastGID]""
     ""[oCharLevel]""
     ""[oCharExp]""
     ""[oCharGlut]""
     ""[oEvloveStage]""
     ""[oImage]""
     ""[oFollow]""
     ""[oFeedTime]"" */

void __thiscall
FUN_102074e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[soulBeastGID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharLevel]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharExp]",&DAT_11d9e0b4,param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oCharGlut]",&DAT_11d9e0b4,param_1[4]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oEvloveStage]",&DAT_11d9e0b4,
                                      param_1[5]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oImage]",&DAT_11d9e0b4,param_1[6])
            ;
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[oFollow]",&DAT_11d9e0b4,
                                          param_1[7]);
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[oFeedTime]",&DAT_11d9e0b4,param_1[8]);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102c00d0 @ 102c00d0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iCatCuisineID]"
//   "[dwState]"

/* [RE-AUTO c0]
   strings:
     ""[iCatCuisineID]""
     ""[dwState]"" */

int __thiscall
FUN_102c00d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iCatCuisineID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwState]",&DAT_11d9f574,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_102c0170 @ 102c0170  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iCatCuisineID]"
//   "[dwState]"

/* [RE-AUTO c0]
   strings:
     ""[iCatCuisineID]""
     ""[dwState]"" */

void __thiscall
FUN_102c0170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCatCuisineID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwState]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_10393970 @ 10393970  size=194 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[dwEntityId]"
//   "[iSize]"
//   "[szPet1]"

/* [RE-AUTO c0]
   strings:
     ""[dwEntityId]""
     ""[iSize]""
     ""[szPet1]"" */

int __thiscall
FUN_10393970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSize]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x400 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szPet1]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[1]) {
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar1 + 8));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)param_1[1]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_103bf800 @ 103bf800  size=322 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iFacilityType]"
//   "[iFacilityIndex]"
//   "[iPlowLandIndex]"
//   "[pet]"
//   "[tools]"
//   "0x%02x"
//   "[bSkipCutScene]"

/* [RE-AUTO c0]
   strings:
     ""[iFacilityType]""
     ""[iFacilityIndex]""
     ""[iPlowLandIndex]""
     ""[pet]""
     ""[tools]""
     ""0x%02x""
     ""[bSkipCutScene]"" */

void __thiscall
FUN_103bf800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityType]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityIndex]",&DAT_11d9e0b4,
                                    param_1[1]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlowLandIndex]",&DAT_11d9e0b4,
                                   param_1[2]), iVar1 == 0)) &&
     (iVar1 = TdrText_ArrayHeader(extraout_ECX,"[pet]",4,0), iVar1 == 0)) {
    uVar2 = 0;
    puVar3 = param_1 + 3;
    do {
      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 4);
    iVar1 = TdrBuf_PutU8Z(param_4);
    if ((iVar1 == 0) && (iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[tools]",4,0), iVar1 == 0)) {
      uVar2 = 0;
      puVar3 = param_1 + 7;
      do {
        iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
        if (iVar1 != 0) {
          return;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < 4);
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[bSkipCutScene]","0x%02x",
                            *(undefined1 *)(param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_103c1430 @ 103c1430  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iFacilityType]"
//   "[iFacilityIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iFacilityType]""
     ""[iFacilityIndex]"" */

void __thiscall
FUN_103c1430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityType]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityIndex]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_103c1ab0 @ 103c1ab0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iFacilityType]"
//   "[iFacilityIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iFacilityType]""
     ""[iFacilityIndex]"" */

void __thiscall
FUN_103c1ab0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityType]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityIndex]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_103c1d80 @ 103c1d80  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iErrCode]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iErrCode]"" */

int __thiscall
FUN_103c1d80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iErrCode]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_103c1e20 @ 103c1e20  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iErrCode]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iErrCode]"" */

void __thiscall
FUN_103c1e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_103c2150 @ 103c2150  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iFacilityType]"
//   "[iFacilityIndex]"
//   "[nFacilitySlot]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iFacilityType]""
     ""[iFacilityIndex]""
     ""[nFacilitySlot]"" */

void __thiscall
FUN_103c2150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityType]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityIndex]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[nFacilitySlot]",&DAT_11d9e0b4,
                            (int)*(short *)(param_1 + 3));
      }
    }
  }
  return;
}



/* ===== FUN_103c2530 @ 103c2530  size=238 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetID]"
//   "[iErrCode]"
//   "[iFacilityType]"
//   "[iFacilityIndex]"
//   "[nFacilitySlot]"
//   "[nIsFirstUse]"
//   "[dwLeftTime]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iErrCode]""
     ""[iFacilityType]""
     ""[iFacilityIndex]""
     ""[nFacilitySlot]""
     ""[nIsFirstUse]""
     ""[dwLeftTime]"" */

void __thiscall
FUN_103c2530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityType]",&DAT_11d9e0b4,param_1[2]
                                 );
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFacilityIndex]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nFacilitySlot]",&DAT_11d9e0b4,
                                      (int)*(short *)(param_1 + 4));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nIsFirstUse]",&DAT_11d9e0b4,
                                        (int)*(short *)((int)param_1 + 0x12));
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[dwLeftTime]",&DAT_11d9f574,param_1[5]);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103c3420 @ 103c3420  size=302 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iPetID]"
//   "[iTrainID]"
//   "[iMelee]"
//   "[iDefence]"
//   "[iMaxHP]"
//   "[iLoyalPoint]"
//   "[iSpirit]"
//   "[iPotential]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iPetID]""
     ""[iTrainID]""
     ""[iMelee]""
     ""[iDefence]""
     ""[iMaxHP]""
     ""[iLoyalPoint]""
     ""[iSpirit]""
     ""[iPotential]"" */

void __thiscall
FUN_103c3420(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTrainID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMelee]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDefence]",&DAT_11d9e0b4,param_1[4])
          ;
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMaxHP]",&DAT_11d9e0b4,param_1[5])
            ;
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLoyalPoint]",&DAT_11d9e0b4,
                                          param_1[6]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSpirit]",&DAT_11d9e0b4,
                                            param_1[7]);
                if (iVar1 == 0) {
                  TdrText_FieldScalar(param_2,param_3,param_4,"[iPotential]",&DAT_11d9e0b4,
                                      param_1[8]);
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



/* ===== FUN_104123c0 @ 104123c0  size=108 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szSoulBeastType]"

/* WARNING: Removing unreachable block (ram,0x10412418) */
/* [RE-AUTO c0]
   strings:
     ""[szSoulBeastType]"" */

undefined4 __thiscall
FUN_104123c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = TdrText_FieldValueFmt(param_6,"[szSoulBeastType]",param_1);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    return uVar1;
  }
  return 0xffffffed;
}



/* ===== FUN_10412430 @ 10412430  size=30 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szSoulBeastType]"

/* [RE-AUTO c0]
   strings:
     ""[szSoulBeastType]"" */

void __thiscall
FUN_10412430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldValueFmt(param_4,"[szSoulBeastType]",param_1);
  return;
}



/* ===== FUN_10412450 @ 10412450  size=128 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[szSoulBeastType]"

/* WARNING: Removing unreachable block (ram,0x104124b0) */
/* [RE-AUTO c0]
   strings:
     ""[szSoulBeastType]"" */

undefined1 * __thiscall
FUN_10412450(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    TdrText_FieldValueFmt(param_6,"[szSoulBeastType]",param_1);
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



/* ===== FUN_104124d0 @ 104124d0  size=79 ===== */
// calls: TdrText_FieldValueFmt, TdrBuf_PutNulAt
// strings:
//   "[szSoulBeastType]"

/* [RE-AUTO c0]
   strings:
     ""[szSoulBeastType]"" */

undefined1 * __thiscall
FUN_104124d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldValueFmt(param_4,"[szSoulBeastType]",param_1);
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



/* ===== FUN_104190e0 @ 104190e0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iPetIdx]"
//   "[iDateDay]"
//   "[iCurHigher]"

/* [RE-AUTO c0]
   strings:
     ""[iPetIdx]""
     ""[iDateDay]""
     ""[iCurHigher]"" */

void __thiscall
FUN_104190e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDateDay]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iCurHigher]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_104fd510 @ 104fd510  size=134 ===== */
// calls: CCatCuisineInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CCatCuisineInfo"

/* [RE-AUTO c0]
   calls: CCatCuisineInfo::GetManagers
   strings:
     ""CCatCuisineInfo"" */

undefined4 FUN_104fd510(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbea0c;
  puVar1 = (undefined4 *)CCatCuisineInfo__GetManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CCatCuisineInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be344 = DAT_123be344 | 1;
        FUN_10500500();
        FUN_11a8911f(&LAB_11c6f2d0);
      }
      puVar1 = &DAT_123be30c;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_104fd5a0 @ 104fd5a0  size=109 ===== */
// calls: CCatCuisineInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CCatCuisineInfo"

/* [RE-AUTO c0]
   calls: CCatCuisineInfo::GetManagers
   strings:
     ""CCatCuisineInfo"" */

void FUN_104fd5a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbea0c;
  puVar1 = (undefined4 *)CCatCuisineInfo__GetManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CCatCuisineInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be344 = DAT_123be344 | 1;
        FUN_10500500();
        FUN_11a8911f(&LAB_11c6f2d0);
      }
      piVar2 = &DAT_123be30c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_10510ff0 @ 10510ff0  size=792 ===== */
// calls: CPetInfoPanel::BuildPetDetailVO_ByLookup
// strings:
//   "_petList"
//   "PetPropertyALLVO_CLASS_NAME"
//   "_PetPos"
//   "ResetPos"
//   "RefreshPetInfoByPos"

/* [RE-AUTO c0]
   strings:
     ""_petList""
     ""PetPropertyALLVO_CLASS_NAME""
     ""_PetPos""
     ""ResetPos""
     ""RefreshPetInfoByPos"" */

void __fastcall FUN_10510ff0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_EBX;
  int *unaff_ESI;
  int iVar6;
  int **ppiStack_bc;
  char *pcStack_b8;
  int **ppiStack_b4;
  int *piStack_b0;
  int **ppiStack_ac;
  char *pcStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  undefined4 *puStack_9c;
  int iStack_98;
  int *piStack_94;
  int **ppiStack_90;
  char *pcStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined4 *puStack_74;
  int aiStack_6c [2];
  int *piStack_64;
  uint uStack_60;
  undefined4 auStack_5c [4];
  int *piStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 0;
  local_34 = 0;
  piStack_84 = (int *)(uint)(((byte)DAT_123bcde4 & 0x8f) == 10);
  puStack_88 = &local_38;
  pcStack_8c = "_petList";
  ppiStack_90 = DAT_123bcde8;
  piStack_94 = (int *)0x1051103c;
  (**(code **)(*DAT_123bcde0 + 0x10))();
  piStack_94 = (int *)0xffffffff;
  iStack_98 = 0;
  puStack_9c = puStack_40;
  uStack_a0 = 0x1051104d;
  (**(code **)(*piStack_48 + 0x44))();
  piStack_a4 = aiStack_6c;
  aiStack_6c[0] = 0;
  aiStack_6c[1] = 0;
  puStack_88 = (undefined4 *)CONCAT31(puStack_88._1_3_,((byte)DAT_123bcde4 & 0x8f) == 10);
  pcStack_8c = (char *)0x0;
  uStack_a0 = (uint)puStack_88;
  pcStack_a8 = "PetPropertyALLVO_CLASS_NAME";
  ppiStack_ac = DAT_123bcde8;
  piStack_b0 = (int *)0x10511097;
  cVar3 = (**(code **)(*DAT_123bcde0 + 0x10))();
  if ((cVar3 != '\0') && (((byte)unaff_EBX & 0x8f) == 6)) {
    if ((unaff_EBX >> 6 & 1) == 0) {
      puStack_9c = puStack_74;
    }
    else {
      puStack_9c = (undefined4 *)*puStack_74;
    }
  }
  piStack_b0 = (int *)0x105110ca;
  iStack_98 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iStack_98 != 0) {
    piVar1 = (int *)(param_1 + 0x134);
    if (*piVar1 != *(int *)(param_1 + 0x138)) {
      ppiStack_bc = (int **)0x105110f3;
      pcStack_b8 = (char *)*piVar1;
      uVar4 = FUN_1051dd70();
      pcStack_b8 = (char *)0x10511102;
      FUN_1051eb20();
      *(undefined4 *)(param_1 + 0x138) = uVar4;
    }
    ppiStack_b4 = (int **)0x10511114;
    piStack_b0 = piVar1;
    FUN_112f5950();
    puVar2 = puStack_9c;
    iStack_98 = *(int *)(param_1 + 0x138);
    iVar6 = *piVar1;
    piStack_4c = (int *)0x0;
    piStack_48 = (int *)0x0;
    if (iVar6 != iStack_98) {
      do {
        ppiStack_bc = &piStack_4c;
        piStack_b0 = (int *)0x0;
        ppiStack_b4 = (int **)0x0;
        pcStack_b8 = (char *)puVar2;
        FUN_11a98de0();
        CPetInfoPanel__BuildPetDetailVO_ByLookup
                  (*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c),
                   *(undefined4 *)(param_1 + 0x24),auStack_5c);
        FUN_104d1670(&DAT_11dbf768,*(undefined4 *)(iVar6 + 0x1c));
        (**(code **)(*piStack_84 + 0x3c))(unaff_ESI,aiStack_6c);
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != iStack_98);
    }
    uVar5 = DAT_123bcde4 & 0x8f;
    if (((uVar5 == 8) || (uVar5 == 9)) || (uVar5 == 10)) {
      piStack_94 = (int *)0x0;
      ppiStack_90 = (int **)0x0;
      piStack_b0 = (int *)(uint)(uVar5 == 10);
      ppiStack_b4 = &piStack_94;
      pcStack_b8 = "_PetPos";
      ppiStack_bc = DAT_123bcde8;
      (**(code **)(*DAT_123bcde0 + 0x10))();
      if ((uStack_a0 >> 6 & 1) != 0) {
        (**(code **)(*piStack_a4 + 8))(&piStack_a4,puStack_9c);
        piStack_a4 = (int *)0x0;
      }
      uStack_a0 = 3;
      puStack_9c = (undefined4 *)0x0;
      (**(code **)(*DAT_123bcde0 + 0x18))
                (DAT_123bcde8,0,"ResetPos",0,0,((byte)DAT_123bcde4 & 0x8f) == 10);
      (**(code **)(*DAT_123bcde0 + 0x18))
                (DAT_123bcde8,0,"RefreshPetInfoByPos",&ppiStack_bc,1,
                 ((byte)DAT_123bcde4 & 0x8f) == 10);
      if (((uint)ppiStack_90 >> 6 & 1) != 0) {
        ppiStack_b4 = &piStack_94;
        piStack_b0 = (int *)pcStack_8c;
        pcStack_b8 = (char *)0x1051129e;
        (**(code **)(*piStack_94 + 8))();
      }
    }
    if (((uint)piStack_48 >> 6 & 1) != 0) {
      ppiStack_b4 = &piStack_4c;
      piStack_b0 = (int *)uStack_44;
      pcStack_b8 = (char *)0x105112bb;
      (**(code **)(*piStack_4c + 8))();
    }
  }
  if ((unaff_EBX >> 6 & 1) != 0) {
    ppiStack_b4 = (int **)&stack0xffffff84;
    pcStack_b8 = (char *)0x105112d8;
    (**(code **)(*unaff_ESI + 8))();
  }
  if ((uStack_60 >> 6 & 1) != 0) {
    ppiStack_b4 = &piStack_64;
    piStack_b0 = (int *)auStack_5c[0];
    pcStack_b8 = (char *)0x10511305;
    (**(code **)(*piStack_64 + 8))();
  }
  return;
}



/* ===== FUN_10512150 @ 10512150  size=380 ===== */
// calls: CPetPanelUI::BuildSubSkillListVO, CPetPanelUI::BuildEquippedSkillLists
// strings:
//   "_PetPos"
//   "RefreshPetPropertyUI"
//   "_root.Global_PetAvatarRefresh"

/* [RE-AUTO c0]
   strings:
     ""_PetPos""
     ""RefreshPetPropertyUI""
     ""_root.Global_PetAvatarRefresh"" */

void __fastcall FUN_10512150(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piStack_60;
  undefined4 **ppuStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  undefined4 *puStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0x2d;
  uStack_30 = 0x10512169;
  cVar1 = FUN_1050a550();
  if (cVar1 == '\0') {
    uStack_30 = 0x7b;
    uStack_34 = 0x105122b6;
    cVar1 = FUN_1050a550();
    if (cVar1 != '\0') {
      uStack_34 = *(undefined4 *)(param_1 + 0x24);
      uStack_3c = 0x105122c5;
      FUN_10510ff0();
    }
  }
  else {
    uStack_30 = 0;
    uStack_34 = *(undefined4 *)(param_1 + 0x24);
    uStack_38 = 0x1051217d;
    FUN_10512e20();
    uStack_38 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x24);
    uStack_40 = 0x10512189;
    CPetPanelUI__BuildSubSkillListVO();
    uStack_40 = *(undefined4 *)(param_1 + 0x24);
    uStack_44 = 0x10512193;
    CPetPanelUI__BuildEquippedSkillLists();
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_44 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    puStack_48 = &uStack_38;
    pcStack_4c = "_PetPos";
    uStack_50 = DAT_123bcdb8;
    uStack_54 = 0x105121d1;
    (**(code **)(*DAT_123bcdb0 + 0x10))();
    uStack_54 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    uStack_58 = 1;
    ppuStack_5c = &puStack_48;
    piStack_60 = (int *)0x11dbf7e4;
    (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,0);
    if (*(int **)(param_1 + 0x178) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x178) + 0x8c))();
      if (iVar2 != 0) {
        piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x178) + 0x8c))();
        (**(code **)(*piVar3 + 0xc0))("_root.Global_PetAvatarRefresh",0,0,0);
      }
    }
    if (((*(char *)(param_1 + 0x18c) == '\0') && (*(int *)(param_1 + 0x30) != 0)) &&
       (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0x138))) {
      *(undefined2 *)(param_1 + 0x18c) = 0x100;
    }
    (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0x138)))
    {
      *(undefined1 *)(param_1 + 0x18d) = 1;
    }
    if (((uint)ppuStack_5c >> 6 & 1) != 0) {
      (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
      return;
    }
  }
  return;
}



/* ===== FUN_10512310 @ 10512310  size=358 ===== */
// strings:
//   "_PetPos"
//   "RefreshPetInfoByPos"
//   "ShowAsEnviroment"

/* [RE-AUTO c0]
   strings:
     ""_PetPos""
     ""RefreshPetInfoByPos""
     ""ShowAsEnviroment"" */

void __fastcall FUN_10512310(int param_1)

{
  char cVar1;
  char *pcStack_6c;
  int **ppiStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined4 *puStack_54;
  uint uStack_50;
  int **ppiStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  uStack_44 = 0x2d;
  uStack_48 = 0x10512329;
  cVar1 = FUN_1050a550();
  if (cVar1 != '\0') {
    uStack_48 = 1;
    ppiStack_4c = *(int ***)(param_1 + 0x24);
    uStack_50 = 0x1051233d;
    FUN_10512e20();
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_50 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    puStack_54 = &uStack_2c;
    pcStack_58 = "_PetPos";
    uStack_5c = DAT_123bcdb8;
    uStack_60 = 0x1051237b;
    (**(code **)(*DAT_123bcdb0 + 0x10))();
    uStack_60 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    uStack_64 = 1;
    ppiStack_68 = &piStack_3c;
    pcStack_6c = "RefreshPetInfoByPos";
    (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,0);
    uStack_64 = *(undefined4 *)(param_1 + 0x180);
    pcStack_6c = (char *)0x0;
    ppiStack_68 = (int **)0x3;
    (**(code **)(*DAT_123bcdb0 + 0x18))
              (DAT_123bcdb8,0,"ShowAsEnviroment",&pcStack_6c,1,((byte)DAT_123bcdb4 & 0x8f) == 10);
    if ((uStack_38 >> 6 & 1) != 0) {
      ppiStack_4c = &piStack_3c;
      uStack_48 = uStack_34;
      uStack_50 = 0x10512416;
      (**(code **)(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    uStack_38 = 0;
    if ((uStack_20 >> 6 & 1) != 0) {
      ppiStack_4c = &piStack_24;
      uStack_48 = uStack_1c;
      uStack_50 = 0x10512443;
      (**(code **)(*piStack_24 + 8))();
      piStack_24 = (int *)0x0;
    }
    uStack_20 = 0;
  }
  uStack_48 = 0x7b;
  ppiStack_4c = (int **)0x10512460;
  cVar1 = FUN_1050a550();
  if (cVar1 != '\0') {
    ppiStack_4c = *(int ***)(param_1 + 0x24);
    puStack_54 = (undefined4 *)0x1051246f;
    FUN_10510ff0();
  }
  return;
}



/* ===== FUN_10512810 @ 10512810  size=404 ===== */
// calls: CMessageParmDescInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CMessageParmDescInfo"
//   "MsgBoxFirePetCancel"
//   "MsgBoxFirePetOk"

/* [RE-AUTO c0]
   calls: CMessageParmDescInfo::GetManagers
   strings:
     ""CMessageParmDescInfo""
     ""MsgBoxFirePetCancel""
     ""MsgBoxFirePetOk"" */

void __fastcall FUN_10512810(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 auStack_f8 [3];
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_b4;
  undefined4 uStack_10;
  
  local_110 = 0;
  local_10c = 0;
  local_118 = 0x7b;
  local_114 = 0;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440();
      piVar3 = (int *)FUN_10d17870();
      (**(code **)(*piVar3 + 4))(0x1e,&local_118);
    }
  }
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  FUN_1112d520();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iVar2 != 0) {
    uStack_ec = 0;
    uStack_e0 = 0;
    uStack_b4 = 0;
    uStack_10 = 0;
    FUN_112f64e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),auStack_f8);
    puVar4 = (undefined4 *)CMessageParmDescInfo__GetManager();
    puVar4 = (undefined4 *)*puVar4;
    if ((puVar4 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)CInfoManager__FindByName(&stack0xfffffed8,"CMessageParmDescInfo",0),
       puVar4 == (undefined4 *)0x0)) {
      if ((DAT_123bdb54 & 1) == 0) {
        DAT_123bdb54 = DAT_123bdb54 | 1;
        FUN_10252f40();
        FUN_11a8911f(&LAB_11c6e570);
      }
      puVar4 = &DAT_123bdacc;
    }
    iVar2 = puVar4[10];
    if (((iVar2 != 0) && (iVar5 = 0x2f - puVar4[0xc], -1 < iVar5)) && (iVar5 < (int)puVar4[9])) {
      iVar1 = *(int *)(puVar4[8] + (iVar5 / iVar2) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % iVar2) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x70);
      }
    }
    FUN_1112d7d0(0x1fb5,"MsgBoxFirePetOk","MsgBoxFirePetCancel",&local_114,0);
    FUN_1050f1c0();
  }
  FUN_1112d550();
  return;
}



/* ===== FUN_10512a20 @ 10512a20  size=240 ===== */
// strings:
//   "FlashUI"
//   "petavatarimg"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""petavatarimg"" */

void FUN_10512a20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined8 uStack_14;
  int *local_c;
  
  uStack_14 = (double)(ulonglong)(uint)uStack_14;
  local_c = (int *)0x0;
  piVar4 = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",(int)&uStack_14 + 4);
    piVar4 = uStack_14._4_4_;
  }
  piVar3 = local_c;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x3c))(&DAT_11dbd178);
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
    fVar6 = (float10)(**(code **)(*(int *)DAT_1202e818[0x2f] + 0xdc))();
    uStack_14 = (double)fVar6;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x8c))();
    iVar2 = *piVar4;
    uVar5 = (**(code **)(*(int *)DAT_1202e818[4] + 800))
                      (1,(int)(uStack_14 * _DAT_11de99c8),(int)(uStack_14 * _DAT_11de99d8));
    (**(code **)(iVar2 + 0xf0))("petavatarimg",1,uVar5);
  }
  return;
}



/* ===== FUN_10512b70 @ 10512b70  size=683 ===== */
// calls: CPetInfoPanel::BuildPetDetailVO_ByLookup, CPetInfoPanel::BuildPetInfoVO
// strings:
//   "_PetsList"
//   "PetPropertyALLVO_CLASS_NAME"
//   "strName"
//   "level"
//   "petindex"
//   "petid"
//   "status"

/* [RE-AUTO c0]
   strings:
     ""_PetsList""
     ""PetPropertyALLVO_CLASS_NAME""
     ""strName""
     ""level""
     ""petindex""
     ""petid""
     ""status"" */

void __thiscall FUN_10512b70(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  int *local_58;
  uint local_54;
  undefined4 *local_50;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 *local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_70 = (int *)0x0;
  local_6c = 0;
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetsList",&local_70,((byte)DAT_123bcdb4 & 0x8f) == 10);
  (**(code **)(*local_70 + 0x44))(local_68,0,0xffffffff);
  local_58 = (int *)0x0;
  local_54 = 0;
  local_24 = CONCAT31(local_24._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
  local_28 = (undefined4 *)0x0;
  cVar1 = (**(code **)(*DAT_123bcdb0 + 0x10))
                    (DAT_123bcdb8,"PetPropertyALLVO_CLASS_NAME",&local_58,local_24);
  if ((cVar1 != '\0') && (((byte)local_54 & 0x8f) == 6)) {
    if ((local_54 >> 6 & 1) == 0) {
      local_28 = local_50;
    }
    else {
      local_28 = (undefined4 *)*local_50;
    }
  }
  local_24 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (local_24 != 0) {
    if (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0x138)) {
      uVar2 = FUN_1051dd70(*(int *)(param_1 + 0x134));
      FUN_1051eb20();
      *(undefined4 *)(param_1 + 0x138) = uVar2;
    }
    FUN_112f5950((int *)(param_1 + 0x134));
    local_24 = *(int *)(param_1 + 0x138);
    iVar3 = *(int *)(param_1 + 0x134);
    local_40 = (int *)0x0;
    local_3c = 0;
    if (iVar3 != local_24) {
      do {
        FUN_11a98de0(&local_40,local_28,0,0);
        CPetInfoPanel__BuildPetDetailVO_ByLookup
                  (*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c),param_2,&local_40);
        if ((*(int *)(param_1 + 0x34) == *(int *)(iVar3 + 0x2c)) &&
           (*(int *)(param_1 + 0x38) == *(int *)(iVar3 + 0x28))) {
          CPetInfoPanel__BuildPetInfoVO();
        }
        local_10 = local_20;
        local_20[0] = 0;
        local_c = local_10;
        FUN_100e5aa0(local_10);
        FUN_104d1670("strName",local_c);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
        FUN_104d1550("level",*(undefined4 *)(iVar3 + 4));
        FUN_104d1550("petindex",*(undefined4 *)(iVar3 + 0x2c));
        FUN_104d1550("petid",*(undefined4 *)(iVar3 + 0x28));
        FUN_104d1550("status",*(undefined4 *)(iVar3 + 0x20));
        FUN_104d1670(&DAT_11dbf768,*(undefined4 *)(iVar3 + 0x1c));
        (**(code **)(*local_70 + 0x3c))(local_68,&local_40);
        iVar3 = iVar3 + 0x30;
      } while (iVar3 != local_24);
    }
    if ((local_3c >> 6 & 1) != 0) {
      (**(code **)(*local_40 + 8))(&local_40,local_38);
    }
  }
  if ((local_54 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 8))(&local_58,local_50);
    local_58 = (int *)0x0;
  }
  local_54 = 0;
  if ((local_6c >> 6 & 1) != 0) {
    (**(code **)(*local_70 + 8))(&local_70,local_68);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10512e20 @ 10512e20  size=640 ===== */
// calls: CPetInfoPanel::BuildPetDetailVO_ByLookup, CPetInfoPanel::BuildPetInfoVO
// strings:
//   "_PetsList"
//   "PetPropertyALLVO_CLASS_NAME"

/* [RE-AUTO c0]
   strings:
     ""_PetsList""
     ""PetPropertyALLVO_CLASS_NAME"" */

void __thiscall FUN_10512e20(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *local_74;
  uint local_70;
  undefined4 local_6c;
  int *local_5c;
  uint local_58;
  undefined4 local_54;
  int *local_44;
  uint local_40;
  undefined4 local_3c;
  int *local_2c;
  uint local_28;
  undefined4 *local_24;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_44 = (int *)0x0;
  local_40 = 0;
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetsList",&local_44,((byte)DAT_123bcdb4 & 0x8f) == 10);
  local_74 = (int *)0x0;
  local_70 = 0;
  (**(code **)(*local_44 + 0x44))(local_3c,0,0xffffffff);
  local_2c = (int *)0x0;
  local_28 = 0;
  local_c = CONCAT31(local_c._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
  local_8 = (undefined4 *)0x0;
  cVar2 = (**(code **)(*DAT_123bcdb0 + 0x10))
                    (DAT_123bcdb8,"PetPropertyALLVO_CLASS_NAME",&local_2c,local_c);
  if ((cVar2 != '\0') && (((byte)local_28 & 0x8f) == 6)) {
    if ((local_28 >> 6 & 1) == 0) {
      local_8 = local_24;
    }
    else {
      local_8 = (undefined4 *)*local_24;
    }
  }
  local_c = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (local_c != 0) {
    piVar1 = (int *)(param_1 + 0x134);
    if (*piVar1 != *(int *)(param_1 + 0x138)) {
      uVar3 = FUN_1051dd70(*piVar1);
      FUN_1051eb20();
      *(undefined4 *)(param_1 + 0x138) = uVar3;
    }
    FUN_112f5950(piVar1);
    local_10 = *(int *)(param_1 + 0x138);
    iVar5 = *piVar1;
    local_5c = (int *)0x0;
    local_58 = 0;
    local_c = 0;
    if (iVar5 != local_10) {
      do {
        FUN_11a98de0(&local_5c,local_8,0,0);
        CPetInfoPanel__BuildPetDetailVO_ByLookup
                  (*(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c),param_2,&local_5c);
        FUN_104d1670(&DAT_11dbf768,*(undefined4 *)(iVar5 + 0x1c));
        if ((local_c == 0) && (param_3 == '\0')) {
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar5 + 0x2c);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar5 + 0x28);
          CPetInfoPanel__BuildPetInfoVO();
        }
        (**(code **)(*local_44 + 0x3c))(local_3c,&local_5c);
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x30;
      } while (iVar5 != local_10);
    }
    if (param_3 != '\0') {
      CPetInfoPanel__BuildPetInfoVO();
    }
    iVar4 = *(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x134);
    iVar5 = iVar4 >> 0x1f;
    if (iVar4 / 0x30 + iVar5 == iVar5) {
      CPetInfoPanel__BuildPetInfoVO();
    }
    if ((local_58 >> 6 & 1) != 0) {
      (**(code **)(*local_5c + 8))(&local_5c,local_54);
    }
  }
  if ((local_28 >> 6 & 1) != 0) {
    (**(code **)(*local_2c + 8))(&local_2c,local_24);
    local_2c = (int *)0x0;
  }
  local_28 = 0;
  if ((local_70 >> 6 & 1) != 0) {
    (**(code **)(*local_74 + 8))(&local_74,local_6c);
    local_74 = (int *)0x0;
  }
  local_70 = 0;
  if ((local_40 >> 6 & 1) != 0) {
    (**(code **)(*local_44 + 8))(&local_44,local_3c);
  }
  return;
}



/* ===== FUN_10515860 @ 10515860  size=744 ===== */
// strings:
//   "_PetEquips"
//   "PETEQUIPITEMVO_CLASS_NAME"
//   "asset"
//   "collumn"
//   "m_bUseItem"
//   "isBind"
//   "m_nBindType"
//   "RefreshPetEquipsUI"

/* [RE-AUTO c0]
   strings:
     ""_PetEquips""
     ""PETEQUIPITEMVO_CLASS_NAME""
     ""asset""
     ""collumn""
     ""m_bUseItem""
     ""isBind""
     ""m_nBindType""
     ""RefreshPetEquipsUI"" */

void __fastcall FUN_10515860(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *local_78;
  uint local_74;
  undefined4 local_70;
  int *local_60;
  uint local_5c;
  undefined4 *local_58;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iVar2 != 0) {
    FUN_112f7b30(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                 (int *)(param_1 + 0x158));
    local_78 = (int *)0x0;
    local_74 = 0;
    local_60 = (int *)0x0;
    local_5c = 0;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    (**(code **)(*DAT_123bcdb0 + 0x10))
              (DAT_123bcdb8,"_PetEquips",&local_78,((byte)DAT_123bcdb4 & 0x8f) == 10);
    (**(code **)(*local_78 + 0x44))(local_70,0,0xffffffff);
    local_2c = (undefined4 *)0x0;
    local_28 = (int *)CONCAT31(local_28._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
    cVar1 = (**(code **)(*DAT_123bcdb0 + 0x10))
                      (DAT_123bcdb8,"PETEQUIPITEMVO_CLASS_NAME",&local_60,local_28);
    if ((cVar1 != '\0') && (((byte)local_5c & 0x8f) == 6)) {
      if ((local_5c >> 6 & 1) == 0) {
        local_2c = local_58;
      }
      else {
        local_2c = (undefined4 *)*local_58;
      }
    }
    local_28 = *(int **)(param_1 + 0x15c);
    piVar3 = *(int **)(param_1 + 0x158);
    local_48 = (int *)0x0;
    local_44 = 0;
    if (piVar3 != local_28) {
      do {
        FUN_11a98de0(&local_48,local_2c,0,0);
        if (*piVar3 == 0) {
          FUN_104d1550(&DAT_11dbb0b4,0);
        }
        else {
          FUN_104d1550(&DAT_11dbb0b4,*piVar3);
          FUN_104d1670("asset",piVar3[0xb]);
          local_24[0] = 0;
          local_14 = local_24;
          local_10 = local_14;
          FUN_100e5aa0(local_14);
          FUN_104d1670(&DAT_11dbac80,local_10);
          if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_10);
          }
          FUN_104d1550("collumn",piVar3[2]);
          FUN_104d15e0("m_bUseItem",0 < piVar3[0xd]);
          FUN_104d1550(&DAT_11dbfe78,piVar3[1]);
          FUN_104d15e0("isBind",(char)piVar3[0xe]);
          FUN_104d1550("m_nBindType",piVar3[0xf]);
        }
        (**(code **)(*local_78 + 0x3c))(local_70,&local_48);
        piVar3 = piVar3 + 0x10;
      } while (piVar3 != local_28);
    }
    if ((local_44 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 8))(&local_48,local_40);
      local_48 = (int *)0x0;
    }
    local_44 = 0;
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
      local_60 = (int *)0x0;
    }
    local_5c = 0;
    if ((local_74 >> 6 & 1) != 0) {
      (**(code **)(*local_78 + 8))(&local_78,local_70);
    }
  }
  (**(code **)(*DAT_123bcdb0 + 0x18))
            (DAT_123bcdb8,0,"RefreshPetEquipsUI",0,0,((byte)DAT_123bcdb4 & 0x8f) == 10);
  FUN_11a89daa();
  return;
}



/* ===== FUN_10516d50 @ 10516d50  size=576 ===== */
// strings:
//   "petavatarimg"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""petavatarimg"" */

void __thiscall FUN_10516d50(int param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  float10 fVar6;
  int in_stack_00000010;
  int in_stack_00000014;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  
  if (((in_stack_00000014 == 5) && (*(int **)(param_1 + 400) != (int *)0x0)) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 400) + 8))(), iVar3 != 0)) {
    piVar4 = (int *)FUN_104d0280();
    cVar2 = (**(code **)(*piVar4 + 0x20))(0x2d);
    if (cVar2 != '\0') {
      dStack_24 = 0.0;
      if (((byte)*(undefined4 *)(in_stack_00000010 + 4) & 0x8f) == 5) {
        dStack_2c = *(double *)(in_stack_00000010 + 8);
      }
      else {
        dStack_2c = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x1c) & 0x8f) == 5) {
        dStack_34 = *(double *)(in_stack_00000010 + 0x20);
      }
      else {
        dStack_34 = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x34) & 0x8f) == 5) {
        dStack_1c = *(double *)(in_stack_00000010 + 0x38);
      }
      else {
        dStack_1c = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x4c) & 0x8f) == 5) {
        dStack_24 = *(double *)(in_stack_00000010 + 0x50);
      }
      fVar6 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xdc))();
      dVar1 = (double)fVar6;
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f4))();
      if ((iVar3 != 0) && (piVar4 = *(int **)(param_1 + 0x16c), piVar4 != (int *)0x0)) {
        cVar2 = (char)((uint)(int)(dVar1 * dStack_34) >> 0x18);
        (**(code **)(*piVar4 + 0x34))
                  ((int)(dVar1 * dStack_1c),(int)(dVar1 * dStack_24),(int)(dVar1 * dStack_2c));
        (**(code **)(*piVar4 + 0x2c))(cVar2 == '\0');
      }
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1);
      if (DAT_123be4d0 == iVar3) {
        cVar2 = (char)((uint)unaff_ESI >> 0x18);
      }
      else {
        DAT_123be4d0 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1);
        cVar2 = '\x01';
      }
      if (((*(char *)(param_1 + 0x18c) == '\0') || (cVar2 != '\0')) &&
         (iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1), iVar3 != 0)) {
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x178) + 0x8c))();
        iVar3 = *piVar4;
        uVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))
                          (1,(int)(dStack_1c * _DAT_11de99c8),(int)(dStack_1c * _DAT_11de99d8));
        (**(code **)(iVar3 + 0xf0))("petavatarimg",1,uVar5);
        *(undefined1 *)(param_1 + 0x18c) = 1;
      }
    }
  }
  return;
}



/* ===== FUN_10517820 @ 10517820  size=386 ===== */
// strings:
//   "_PetName"

/* [RE-AUTO c0]
   strings:
     ""_PetName"" */

void __thiscall FUN_10517820(int param_1)

{
  int iVar1;
  undefined4 *in_stack_00000010;
  undefined1 auStack_14c [4];
  int *local_148;
  uint local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int *local_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_d4;
  uint uStack_34;
  uint auStack_30 [4];
  uint *puStack_20;
  uint *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_14c;
  local_148 = (int *)0x0;
  local_144 = in_stack_00000010[1];
  local_13c = in_stack_00000010[3];
  local_140 = in_stack_00000010[2];
  local_138 = in_stack_00000010[4];
  if ((local_144 >> 6 & 1) != 0) {
    local_148 = (int *)*in_stack_00000010;
    (**(code **)(*local_148 + 4))(&local_148,local_140);
  }
  local_130 = (int *)0x0;
  local_12c = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iVar1 != 0) {
    uStack_10c = 0;
    uStack_100 = 0;
    uStack_d4 = 0;
    auStack_30[0] = 0;
    FUN_112f64e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),param_1 + 0x44);
    puStack_20 = auStack_30;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    puStack_1c = puStack_20;
    FUN_100e5aa0(puStack_20);
    FUN_104d1670("_PetName",puStack_20);
    if ((puStack_20 != &uStack_34) && (puStack_20 != (uint *)0x0)) {
      FUN_10c3d5d0(puStack_20);
    }
    FUN_1050f1c0();
  }
  if ((local_12c >> 6 & 1) != 0) {
    (**(code **)(*local_130 + 8))(&local_130,uStack_128);
    local_130 = (int *)0x0;
  }
  local_12c = 0;
  if ((local_144 >> 6 & 1) != 0) {
    (**(code **)(*local_148 + 8))(&local_148,local_140);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_105193a0 @ 105193a0  size=351 ===== */
// calls: _localtime64_s
// strings:
//   "PetShowChxTime"

/* [RE-AUTO c0]
   calls: _localtime64_s
   strings:
     ""PetShowChxTime"" */

void FUN_105193a0(void)

{
  int *piVar1;
  undefined4 unaff_ESI;
  char *in_stack_00000018;
  undefined4 uVar2;
  char *pcVar3;
  char *pcStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_94;
  undefined1 auStack_90 [4];
  char **ppcStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  tm tStack_80;
  int iStack_5c;
  int iStack_58;
  undefined8 uStack_44;
  tm tStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_90;
  uStack_94 = CONCAT44(auStack_90,unaff_ESI);
  if ((*(uint *)(in_stack_00000018 + 4) >> 6 & 1) != 0) {
    uStack_9c = *(undefined4 *)(in_stack_00000018 + 8);
    pcStack_a0 = in_stack_00000018;
    (**(code **)(**(int **)in_stack_00000018 + 8))();
    in_stack_00000018[0] = '\0';
    in_stack_00000018[1] = '\0';
    in_stack_00000018[2] = '\0';
    in_stack_00000018[3] = '\0';
  }
  in_stack_00000018[4] = '\x02';
  in_stack_00000018[5] = '\0';
  in_stack_00000018[6] = '\0';
  in_stack_00000018[7] = '\0';
  in_stack_00000018[8] = '\0';
  uStack_9c = 0x105193ea;
  FUN_10d17460();
  uStack_9c = 5;
  pcStack_a0 = (char *)0x105193f7;
  piVar1 = (int *)FUN_1126e800();
  if (piVar1 != (int *)0x0) {
    tStack_80.tm_min = (int)&ppcStack_8c;
    pcStack_a0 = "";
    pcVar3 = "PetShowChxTime";
    uStack_94 = 0;
    tStack_80.tm_hour = tStack_80.tm_min;
    FUN_100b62c0("PetShowChxTime");
    uVar2 = 8;
    (**(code **)(*piVar1 + 8))(&stack0xffffff6c,&uStack_9c,8);
    if ((ppcStack_8c != &pcStack_a0) && (ppcStack_8c != (char **)0x0)) {
      FUN_10c3d5d0(ppcStack_8c);
    }
    uStack_88 = uVar2;
    pcStack_84 = pcVar3;
    _localtime64_s(&tStack_80,(__time64_t *)&uStack_88);
    uStack_44 = FUN_111f8d20();
    _localtime64_s(&tStack_3c,&uStack_44);
    if (((iStack_58 + 0x76c != tStack_3c.tm_year + 0x76c) || (iStack_5c + 1 != tStack_3c.tm_mon + 1)
        ) || (tStack_80.tm_isdst != tStack_3c.tm_mday)) {
      if ((*(uint *)(in_stack_00000018 + 4) >> 6 & 1) != 0) {
        pcStack_a0 = *(char **)(in_stack_00000018 + 8);
        (**(code **)(**(int **)in_stack_00000018 + 8))(in_stack_00000018);
        in_stack_00000018[0] = '\0';
        in_stack_00000018[1] = '\0';
        in_stack_00000018[2] = '\0';
        in_stack_00000018[3] = '\0';
      }
      in_stack_00000018[4] = '\x02';
      in_stack_00000018[5] = '\0';
      in_stack_00000018[6] = '\0';
      in_stack_00000018[7] = '\0';
      in_stack_00000018[8] = '\x01';
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10519500 @ 10519500  size=312 ===== */
// strings:
//   "PetShowChxTime"

/* [RE-AUTO c0]
   strings:
     ""PetShowChxTime"" */

void FUN_10519500(void)

{
  int *piVar1;
  char cVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_34;
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
    *in_stack_00000018 = 0;
  }
  in_stack_00000018[1] = 2;
  *(undefined1 *)(in_stack_00000018 + 2) = 0;
  if (in_stack_00000014 == 1) {
    if (((byte)*(undefined4 *)(in_stack_00000010 + 4) & 0x8f) == 2) {
      cVar2 = *(char *)(in_stack_00000010 + 8);
    }
    else {
      cVar2 = '\0';
    }
    FUN_10d17460();
    piVar1 = (int *)FUN_1126e800(5);
    if (piVar1 != (int *)0x0) {
      if (cVar2 == '\0') {
        puStack_14 = auStack_24;
        puStack_10 = puStack_14;
        FUN_100b62c0("PetShowChxTime","");
        (**(code **)(*piVar1 + 0xc))((int)&uStack_30 + 4);
      }
      else {
        uStack_30 = FUN_111f8d20();
        puStack_14 = auStack_24;
        puStack_10 = puStack_14;
        FUN_100b62c0("PetShowChxTime","");
        (**(code **)(*piVar1 + 4))((int)&uStack_30 + 4,&stack0xffffffc8,8);
      }
      if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_10);
      }
    }
  }
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
    *in_stack_00000018 = 0;
  }
  *(undefined1 *)(in_stack_00000018 + 2) = 1;
  in_stack_00000018[1] = 2;
  FUN_11a89daa();
  return;
}



/* ===== FUN_10519640 @ 10519640  size=384 ===== */
// strings:
//   "SetRequireItemId"
//   "_PetPos"
//   "RefreshPetPropertyUI"

/* [RE-AUTO c0]
   strings:
     ""SetRequireItemId""
     ""_PetPos""
     ""RefreshPetPropertyUI"" */

void FUN_10519640(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piStack_90;
  uint uStack_8c;
  char *pcStack_88;
  undefined1 *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  int *piStack_78;
  char *pcStack_74;
  undefined1 *puStack_70;
  uint uStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_54 = 0x1051964e;
  iVar1 = FUN_116a6a70();
  iStack_30 = *(int *)(iVar1 + 0xf8);
  if (((0 < *(int *)(param_1 + 0x48)) && (iStack_30 == *(int *)(param_1 + 0x48))) &&
     ((uVar2 = DAT_123bcdb4 & 0x8f, uVar2 == 8 || ((uVar2 == 9 || (uVar2 == 10)))))) {
    uStack_20 = 0;
    uStack_54 = (uint)(uVar2 == 10);
    uStack_58 = 1;
    puStack_5c = &uStack_38;
    uStack_1c = 0;
    piStack_60 = (int *)0x11dbf864;
    puStack_64 = &uStack_20;
    uStack_38 = 0;
    uStack_34 = 3;
    piStack_68 = DAT_123bcdb8;
    uStack_6c = 0x105196d7;
    (**(code **)(*DAT_123bcdb0 + 0x18))();
    piStack_68 = (int *)0x0;
    puStack_64 = (undefined4 *)0x0;
    uStack_6c = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    pcStack_74 = "_PetPos";
    piStack_78 = DAT_123bcdb8;
    uStack_7c = 0x10519714;
    puStack_70 = (undefined1 *)&piStack_68;
    (**(code **)(*DAT_123bcdb0 + 0x10))();
    uStack_7c = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    uStack_80 = 1;
    pcStack_88 = "RefreshPetPropertyUI";
    uStack_8c = 0;
    piStack_90 = DAT_123bcdb8;
    puStack_84 = (undefined1 *)&piStack_78;
    (**(code **)(*DAT_123bcdb0 + 0x18))();
    if ((uStack_8c >> 6 & 1) != 0) {
      (**(code **)(*piStack_90 + 8))(&piStack_90,pcStack_88);
      piStack_90 = (int *)0x0;
    }
    uStack_8c = 0;
    if (((uint)pcStack_74 >> 6 & 1) != 0) {
      (**(code **)(*piStack_78 + 8))(&piStack_78,puStack_70);
      piStack_78 = (int *)0x0;
    }
    pcStack_74 = (char *)0x0;
    if (((uint)puStack_5c >> 6 & 1) != 0) {
      (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
    }
  }
  return;
}



/* ===== FUN_10520400 @ 10520400  size=158 ===== */
// calls: CSoulBeastInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CSoulBeastInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo"" */

undefined4 FUN_10520400(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0154;
  puVar2 = (undefined4 *)CSoulBeastInfo__GetInfoMgrSingleton();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CSoulBeastInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c7298 & 1) == 0) {
        DAT_123c7298 = DAT_123c7298 | 1;
        FUN_1052a290();
        FUN_11a8911f(&LAB_11c6fc40);
      }
      puVar2 = &DAT_123c729c;
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



/* ===== FUN_105204a0 @ 105204a0  size=134 ===== */
// calls: CSoulBeastInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CSoulBeastInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo"" */

undefined4 FUN_105204a0(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0154;
  puVar1 = (undefined4 *)CSoulBeastInfo__GetInfoMgrSingleton();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CSoulBeastInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123c7298 & 1) == 0) {
        DAT_123c7298 = DAT_123c7298 | 1;
        FUN_1052a290();
        FUN_11a8911f(&LAB_11c6fc40);
      }
      puVar1 = &DAT_123c729c;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_10520530 @ 10520530  size=109 ===== */
// calls: CSoulBeastInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CSoulBeastInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo"" */

void FUN_10520530(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0154;
  puVar1 = (undefined4 *)CSoulBeastInfo__GetInfoMgrSingleton();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CSoulBeastInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123c7298 & 1) == 0) {
        DAT_123c7298 = DAT_123c7298 | 1;
        FUN_1052a290();
        FUN_11a8911f(&LAB_11c6fc40);
      }
      piVar2 = &DAT_123c729c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== data::SoulBeastMo @ 10520c80  size=51 ===== */
// strings:
//   "mh.data::SoulBeastMo"

/* [RE-AUTO c3]
   id: data::SoulBeastMo
   strings:
     ""mh.data::SoulBeastMo"" */

undefined4 * __thiscall data__SoulBeastMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::SoulBeastMo",0,0);
  }
  return param_1;
}



/* ===== data::SoulBeastFaceMo @ 10520d90  size=51 ===== */
// strings:
//   "mh.data::SoulBeastFaceMo"

/* [RE-AUTO c3]
   id: data::SoulBeastFaceMo
   strings:
     ""mh.data::SoulBeastFaceMo"" */

undefined4 * __thiscall data__SoulBeastFaceMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::SoulBeastFaceMo",0,0);
  }
  return param_1;
}



/* ===== data::SoulBeastDetailMo @ 10520ea0  size=51 ===== */
// strings:
//   "mh.data::SoulBeastDetailMo"

/* [RE-AUTO c3]
   id: data::SoulBeastDetailMo
   strings:
     ""mh.data::SoulBeastDetailMo"" */

undefined4 * __thiscall data__SoulBeastDetailMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::SoulBeastDetailMo",0,0);
  }
  return param_1;
}



/* ===== data::SoulBeastUnlockMo @ 10521120  size=51 ===== */
// strings:
//   "mh.data::SoulBeastUnlockMo"

/* [RE-AUTO c3]
   id: data::SoulBeastUnlockMo
   strings:
     ""mh.data::SoulBeastUnlockMo"" */

undefined4 * __thiscall data__SoulBeastUnlockMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::SoulBeastUnlockMo",0,0);
  }
  return param_1;
}



/* ===== data::SoulBeastFoodMo @ 10521210  size=51 ===== */
// strings:
//   "mh.data::SoulBeastFoodMo"

/* [RE-AUTO c3]
   id: data::SoulBeastFoodMo
   strings:
     ""mh.data::SoulBeastFoodMo"" */

undefined4 * __thiscall data__SoulBeastFoodMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::SoulBeastFoodMo",0,0);
  }
  return param_1;
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



/* ===== FUN_10521f00 @ 10521f00  size=251 ===== */
// strings:
//   "_root.Global_SoulBeastAvatarRefresh"

/* [RE-AUTO c0]
   strings:
     ""_root.Global_SoulBeastAvatarRefresh"" */

void __thiscall FUN_10521f00(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuStack_44;
  code *pcStack_40;
  undefined ***pppuStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined1 auStack_14 [16];
  
  uStack_2c = 0x10521f26;
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iVar1 != 0) {
    uStack_34 = 1;
    uStack_2c = 0;
    uStack_30 = 0;
    pppuStack_3c = &ppuStack_20;
    pcStack_38 = (char *)0xffffffff;
    pcStack_40 = (code *)0xffffffff;
    ppuStack_44 = (undefined **)0xffffffff;
    ppuStack_20 = &PTR_FUN_11dc0130;
    pcStack_1c = FUN_105258f0;
    iStack_18 = param_1;
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))(auStack_14,0x1121);
    ppuStack_44 = &PTR_FUN_11dc0130;
    pcStack_40 = FUN_105258f0;
    pppuStack_3c = (undefined ***)param_1;
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))
              (&pcStack_38,0x1122,0xffffffff,0xffffffff,&ppuStack_44,0xffffffff,1,0,0);
  }
  if (param_2 != (int *)0x0) {
    uStack_2c = 0x10521fcd;
    iVar1 = (**(code **)(*param_2 + 0x8c))();
    if (iVar1 != 0) {
      uStack_2c = 0x10521fdb;
      piVar2 = (int *)(**(code **)(*param_2 + 0x8c))();
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      pcStack_38 = "_root.Global_SoulBeastAvatarRefresh";
      pppuStack_3c = (undefined ***)0x10521ff0;
      (**(code **)(*piVar2 + 0xc0))();
    }
  }
  *(int **)(param_1 + 0x44) = param_2;
  return;
}



/* ===== data::SoulBeastUnlockMo_10523e90 @ 10523e90  size=878 ===== */
// strings:
//   "lockConditionArr"
//   "mh.data::SoulBeastUnlockMo"
//   "iUnlockType"
//   "bIsUnlock"
//   "lockConditionTips"
//   "iLevel"
//   "lockType"

/* [RE-AUTO c3]
   id: data::SoulBeastUnlockMo
   strings:
     ""lockConditionArr""
     ""mh.data::SoulBeastUnlockMo""
     ""iUnlockType""
     ""bIsUnlock""
     ""lockConditionTips""
     ""iLevel""
     ""lockType"" */

void data__SoulBeastUnlockMo_10523e90
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  uint *puVar6;
  undefined1 uVar7;
  uint *puStack_a4;
  int *piStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int iStack_7c;
  uint uStack_6c;
  int *local_68;
  uint local_64;
  uint *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint *puStack_48;
  int *piStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 *puStack_24;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_94;
  local_68 = (int *)0x0;
  local_64 = param_4[1];
  local_5c = param_4[3];
  puStack_a4 = (uint *)param_4[2];
  local_58 = param_4[4];
  local_60 = puStack_a4;
  if ((local_64 >> 6 & 1) != 0) {
    local_68 = (int *)*param_4;
    (**(code **)(*local_68 + 4))(&local_68);
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    puVar6 = (uint *)param_4[8];
  }
  else {
    puVar6 = (uint *)0xdeadbeaf;
  }
  puStack_a4 = (uint *)0x10523f25;
  puStack_48 = (uint *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((puStack_48 != (uint *)0x0) && (uStack_6c = puStack_48[0xac5], uStack_6c != 0)) {
    bVar1 = true;
    puStack_a4 = puVar6;
    cVar2 = FUN_11412fc0();
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_10520400();
      piStack_94 = piVar3;
      if (piVar3 == (int *)0x0) goto LAB_10524274;
      puStack_a4 = &uStack_40;
      uStack_40 = 0;
      uStack_3c = 0;
      FUN_11a98a70();
      FUN_104d12b0("lockConditionArr",&piStack_44);
      puVar6 = *(uint **)(piVar3[0xb] + 0x10);
      puStack_48 = *(uint **)(piVar3[0xb] + 0x14);
      if (puVar6 != puStack_48) {
        do {
          piStack_94 = (int *)0x0;
          uStack_90 = 0;
          iStack_7c = param_2;
          if (param_2 != 0) {
            FUN_11a98de0(&piStack_94,"mh.data::SoulBeastUnlockMo",0,0);
          }
          uVar4 = (**(code **)(*(int *)*puVar6 + 0x10))();
          FUN_104d1550("iUnlockType",uVar4);
          uVar4 = (**(code **)(*(int *)*puVar6 + 0x10))();
          FUN_11413840(uVar4);
          piVar3 = (int *)FUN_115d1b10();
          cVar2 = (**(code **)(*piVar3 + 8))(*(undefined4 *)(unaff_ESI + 0x2c),*puVar6,uStack_50);
          local_60 = (uint *)CONCAT31(local_60._1_3_,cVar2);
          FUN_104d15e0("bIsUnlock",local_60);
          if ((bVar1) && (cVar2 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          uVar4 = (**(code **)(*(int *)*puVar6 + 0x10))();
          switch(uVar4) {
          case 1:
          case 2:
          case 4:
          case 5:
          case 6:
            if (*puVar6 != 0) {
              FUN_104d1550("iUnlockParam",*(undefined4 *)(*puVar6 + 4));
            }
            break;
          case 3:
            local_64 = *puVar6;
            if (local_64 != 0) {
              FUN_104d1550("iUnlockParam",*(undefined4 *)(local_64 + 8));
              iVar5 = FUN_10520b90(*(int *)(local_64 + 4) * 100 + *(int *)(local_64 + 8));
              if (iVar5 != 0) {
                iVar5 = FUN_100e5b40(auStack_38);
                FUN_104d1670("strUnlockParamLabel",*(undefined4 *)(iVar5 + 0x14));
                if ((puStack_24 != auStack_38) && (puStack_24 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_24);
                }
              }
            }
          }
          (**(code **)(*piStack_54 + 0x3c))(uStack_4c,&puStack_a4);
          iStack_7c = 0;
          if ((uStack_90 >> 6 & 1) != 0) {
            (**(code **)(*piStack_94 + 8))(&piStack_94,uStack_8c);
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puStack_48);
      }
      if ((*(int *)(*(int *)(unaff_EBX + 0x2c) + 0x14) - *(int *)(*(int *)(unaff_EBX + 0x2c) + 0x10)
          & 0xfffffffcU) == 0) {
        FUN_116eb710();
        puStack_18 = auStack_28;
        auStack_28[0] = 0;
        puStack_14 = puStack_18;
        FUN_100e5aa0(puStack_18);
        FUN_104d1670("lockConditionTips",puStack_18);
        if ((puStack_14 != auStack_28) && (puStack_14 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_14);
        }
      }
      if (bVar1) {
        uVar7 = *(int *)(*(int *)(unaff_EBX + 0x2c) + 0x14) -
                *(int *)(*(int *)(unaff_EBX + 0x2c) + 0x10) >> 2 != 0;
      }
      else {
        uVar7 = false;
      }
      if ((uStack_40 >> 6 & 1) != 0) {
        (**(code **)(*piStack_44 + 8))(&piStack_44,uStack_3c);
      }
    }
    else {
      iVar5 = FUN_114137f0(puVar6);
      if (iVar5 == 0) goto LAB_10524274;
      puStack_a4 = (uint *)0x1052422c;
      puStack_a4 = (uint *)FUN_11439380();
      FUN_104d1550("iLevel");
      puStack_a4 = (uint *)0x10524247;
      puStack_a4 = (uint *)FUN_11439200();
      FUN_104d1550(&DAT_11dc09d4);
      uVar7 = 2;
    }
    FUN_104d1550("lockType",uVar7);
  }
LAB_10524274:
  if ((local_64 >> 6 & 1) != 0) {
    puStack_a4 = local_60;
    (**(code **)(*local_68 + 8))(&local_68);
  }
  FUN_11a89daa();
  return;
}



/* ===== data::SoulBeastFoodMo_105245e0 @ 105245e0  size=1580 ===== */
// calls: data::SoulBeastDetailMo, CSoulBeastLevelUpInfo::FindInfoByTypeLevel, CSoulBeastLevelUpInfo::GetMaxLevel, CSoulBeastEvolveInfo::GetMaxEvolveStage
// strings:
//   "iItemId"
//   "strName"
//   "iLevel"
//   "iGrow"
//   "iHungry"
//   "iMaxGrow"
//   "iMaxHungry"
//   "iMaxLevel"
//   "bCanEvolveBeast"
//   "iNeedGold"
//   "bEnoughGold"
//   "iNeedSilver"
//   "bEnoughSilver"
//   "mh.data::SoulBeastFoodMo"
//   "iItemCount"
//   "bEnough"
//   "arrNeedItems"
//   "iBoxCapacity"
//   "iMaxBoxCapacity"
//   "beastDetailInfo"

/* [RE-AUTO c3]
   id: data::SoulBeastFoodMo
   calls: data::SoulBeastDetailMo
   strings:
     ""iItemId""
     ""strName""
     ""iLevel""
     ""iGrow""
     ""iHungry""
     ""iMaxGrow""
     ""iMaxHungry""
     ""iMaxLevel""
     ""bCanEvolveBeast""
     ""iNeedGold"" */

void data__SoulBeastFoodMo_105245e0
               (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  int iVar9;
  int iStack_b4;
  undefined1 auStack_b0 [8];
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int *piStack_90;
  uint uStack_8c;
  int *piStack_88;
  undefined4 local_84;
  int *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *piStack_6c;
  int *piStack_60;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_48;
  int *piStack_44;
  int *apiStack_40 [3];
  int **ppiStack_34;
  int **ppiStack_30;
  int **ppiStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_b4;
  local_80 = (int *)0x0;
  local_7c = param_4[1];
  local_74 = param_4[3];
  local_78 = param_4[2];
  local_70 = param_4[4];
  if ((local_7c >> 6 & 1) != 0) {
    local_80 = (int *)*param_4;
    (**(code **)(*local_80 + 4))(&local_80,local_78);
  }
  if (((param_4[7] & 0x8f) == 3) || (uVar8 = 0xdeadbeaf, (param_4[7] & 0x8f) == 4)) {
    uVar8 = param_4[8];
  }
  local_84 = uVar8;
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  piStack_88 = piVar2;
  if ((((piVar2 == (int *)0x0) || (piVar2[0xac5] == 0)) || (iVar3 = FUN_114137f0(uVar8), iVar3 == 0)
      ) || (piStack_44 = (int *)piVar2[0xb47], piStack_44 == (int *)0x0)) goto LAB_10524bd8;
  piVar2 = param_2;
  data__SoulBeastDetailMo();
  iVar3 = FUN_115aad30();
  FUN_104d1550("iItemId",*(undefined4 *)(iVar3 + 4));
  FUN_115aad30();
  ppiStack_34 = &piStack_44;
  piStack_44 = (int *)((uint)piStack_44 & 0xffffff00);
  ppiStack_30 = ppiStack_34;
  FUN_100e5aa0(ppiStack_34);
  FUN_104d1670("strName",ppiStack_34);
  if ((ppiStack_34 != &piStack_48) && (ppiStack_34 != (int **)0x0)) {
    FUN_10c3d5d0(ppiStack_34);
  }
  uVar8 = FUN_11439380();
  FUN_104d1550("iLevel",uVar8);
  uVar8 = FUN_11439200();
  FUN_104d1550("iGrow",uVar8);
  uVar8 = FUN_115aad40();
  FUN_104d1550("iHungry",uVar8);
  uVar8 = FUN_11439380();
  iVar3 = FUN_115aad30(uVar8);
  iVar3 = CSoulBeastLevelUpInfo__FindInfoByTypeLevel(*(undefined4 *)(iVar3 + 0x38));
  if (iVar3 != 0) {
    FUN_104d1550("iMaxGrow",*(undefined4 *)(iVar3 + 0x1c));
  }
  iVar4 = FUN_1171a1d0();
  FUN_104d1550("iMaxHungry",*(undefined4 *)(iVar4 + 0x48));
  uVar8 = FUN_11439500();
  iVar4 = FUN_115aad30(uVar8);
  iStack_b4 = FUN_11534150(*(undefined4 *)(iVar4 + 0x34));
  if (iVar3 == 0) {
LAB_1052483f:
    if (iStack_b4 != 0) {
      iVar3 = FUN_115aad30();
      iVar3 = CSoulBeastEvolveInfo__GetMaxEvolveStage(*(undefined4 *)(iVar3 + 0x34));
      iVar4 = FUN_11439500();
      if (iVar4 < iVar3) {
        uVar8 = *(undefined4 *)(iStack_b4 + 0x1c);
      }
      else {
        uVar8 = 0xfffffffe;
      }
      goto LAB_10524872;
    }
  }
  else {
    iVar3 = FUN_115aad30();
    iVar3 = CSoulBeastLevelUpInfo__GetMaxLevel(*(undefined4 *)(iVar3 + 0x34));
    iVar4 = FUN_11439380();
    if (iVar4 < iVar3) goto LAB_1052483f;
    uVar8 = 0xffffffff;
LAB_10524872:
    FUN_104d1550("iMaxLevel",uVar8);
    if (iStack_b4 != 0) {
      iVar3 = *(int *)(iStack_b4 + 0x1c);
      iVar4 = FUN_11439380();
      FUN_104d15e0("bCanEvolveBeast",iVar3 <= iVar4);
      iVar1 = iStack_b4;
      FUN_104d1550("iNeedGold",*(undefined4 *)(iStack_b4 + 0x24));
      iVar3 = *(int *)(iVar1 + 0x24);
      iVar5 = FUN_11396e10(iVar3,0);
      FUN_104d15e0("bEnoughGold",iVar3 <= iVar5);
      FUN_104d1550("iNeedSilver",*(undefined4 *)(iVar1 + 0x20));
      iVar9 = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x20);
      iVar4 = FUN_11396e10(iVar9,1);
      FUN_104d15e0("bEnoughSilver",iVar9 <= iVar4);
      uStack_58 = 0;
      uStack_54 = 0;
      FUN_11a98a70(&uStack_58);
      iVar4 = *(int *)(iVar1 + 0x30);
      while (iVar4 != iVar1 + 0x28) {
        local_84 = 0;
        local_80 = (int *)0x0;
        piStack_6c = param_2;
        iVar9 = iVar4;
        if (param_2 != (int *)0x0) {
          FUN_11a98de0(&local_84,"mh.data::SoulBeastFoodMo",0,0);
        }
        FUN_104d1550("iItemId",*(undefined4 *)(iVar4 + 0x10));
        iVar6 = FUN_10254130(*(undefined4 *)(iVar4 + 0x10));
        if (iVar6 != 0) {
          ppiStack_30 = apiStack_40;
          apiStack_40[0] = (int *)((uint)apiStack_40[0] & 0xffffff00);
          ppiStack_2c = ppiStack_30;
          FUN_100e5aa0(ppiStack_30);
          FUN_104d1670("strName",ppiStack_30);
          if ((ppiStack_2c != apiStack_40) && (ppiStack_2c != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_2c);
          }
        }
        FUN_104d1550("iItemCount",*(undefined4 *)(iVar4 + 0x14));
        uVar7 = FUN_113fa380(*(undefined4 *)(iVar4 + 0x10));
        FUN_104d15e0("bEnough",*(uint *)(iVar4 + 0x14) <= uVar7);
        (**(code **)(*piStack_60 + 0x3c))(uStack_58,&piStack_88);
        local_78 = 0;
        if ((uStack_8c >> 6 & 1) != 0) {
          (**(code **)(*piStack_90 + 8))(&piStack_90,piStack_88);
        }
        FUN_10527ee0();
        iVar4 = iVar9;
      }
      (**(code **)(*piVar2 + 0x14))(unaff_ESI,"arrNeedItems",auStack_5c,iVar3 <= iVar5 == true);
      if (((uint)piStack_44 >> 6 & 1) != 0) {
        (**(code **)(*piStack_48 + 8))(&piStack_48,apiStack_40[0]);
      }
    }
  }
  iVar3 = FUN_117e7170();
  if ((uStack_8c == *(uint *)(iVar3 + 0x48)) && (piStack_90[0xac9] != 0)) {
    uVar8 = FUN_114c7530();
    FUN_104d1550("iBoxCapacity",uVar8);
    uVar8 = FUN_114c7510();
    FUN_104d1550("iMaxBoxCapacity",uVar8);
  }
  (**(code **)(*piStack_88 + 0x14))
            (local_80,"beastDetailInfo",auStack_b0,((byte)local_84 & 0x8f) == 10);
  piStack_90 = (int *)0x0;
  if ((uStack_a4 >> 6 & 1) != 0) {
    (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
    piStack_a8 = (int *)0x0;
  }
  uStack_a4 = 0;
LAB_10524bd8:
  if ((local_7c >> 6 & 1) != 0) {
    (**(code **)(*local_80 + 8))(&local_80,local_78);
  }
  FUN_11a89daa();
  return;
}



/* ===== data::SoulBeastFaceMo_10524c10 @ 10524c10  size=690 ===== */
// strings:
//   "beastFaceArray"
//   "CurrentFaceID"
//   "mh.data::SoulBeastFaceMo"
//   "iItemId"
//   "strIcon"
//   "iLevel"
//   "isLock"
//   "bIsUse"

/* [RE-AUTO c3]
   id: data::SoulBeastFaceMo
   strings:
     ""beastFaceArray""
     ""CurrentFaceID""
     ""mh.data::SoulBeastFaceMo""
     ""iItemId""
     ""strIcon""
     ""iLevel""
     ""isLock""
     ""bIsUse"" */

void __thiscall
data__SoulBeastFaceMo_10524c10
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  uint unaff_EBX;
  int *unaff_ESI;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piStack_5c;
  int *local_58;
  int *local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int *piStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_24;
  
  local_58 = (int *)0x0;
  local_54 = (int *)param_5[1];
  local_4c = param_5[3];
  local_50 = param_5[2];
  local_48 = param_5[4];
  if (((uint)local_54 >> 6 & 1) != 0) {
    local_58 = (int *)*param_5;
    (**(code **)(*local_58 + 4))(&local_58,local_50);
  }
  if (((param_5[7] & 0x8f) == 3) || ((param_5[7] & 0x8f) == 4)) {
    uVar3 = param_5[8];
  }
  else {
    uVar3 = 0xdeadbeaf;
  }
  uStack_40 = 0;
  piStack_3c = (int *)0x0;
  FUN_11a98a70(&uStack_40);
  puVar5 = auStack_44;
  (**(code **)(*piStack_5c + 0x14))(local_54,"beastFaceArray",puVar5,((byte)local_58 & 0x8f) == 10);
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b14) != 0)) {
    iVar1 = FUN_114137f0(uVar3);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_104d0280();
      (**(code **)(*piVar2 + 0x50))(3,0);
    }
    else {
      *(undefined4 *)(puVar5 + 0x3c) = uVar3;
      uVar3 = FUN_11439740();
      *(undefined4 *)(puVar5 + 0x38) = uVar3;
      puVar5[0x34] = 1;
      uVar3 = FUN_11439740();
      FUN_104d1550("CurrentFaceID",uVar3);
      iVar1 = FUN_115aad30();
      piVar2 = *(int **)(iVar1 + 0x2c);
      for (piVar4 = *(int **)(iVar1 + 0x28); piVar4 != piVar2; piVar4 = piVar4 + 1) {
        piStack_3c = (int *)0x0;
        uStack_38 = 0;
        iStack_24 = param_3;
        if (param_3 != 0) {
          FUN_11a98de0(&piStack_3c,"mh.data::SoulBeastFaceMo",0,0);
        }
        FUN_104d1550("iItemId",*(undefined4 *)(*piVar4 + 4));
        FUN_104d1670("strIcon",*(undefined4 *)(*piVar4 + 0x1c));
        FUN_104d1550("iLevel",*(undefined4 *)(*piVar4 + 0x50));
        iVar1 = FUN_11439380();
        FUN_104d15e0("isLock",iVar1 < *(int *)(*piVar4 + 0x50));
        iVar1 = FUN_11439740();
        FUN_104d15e0("bIsUse",*(int *)(*piVar4 + 4) == iVar1);
        (**(code **)(*local_54 + 0x3c))(local_4c,&piStack_3c);
        iStack_24 = 0;
        if ((uStack_38 >> 6 & 1) != 0) {
          (**(code **)(*piStack_3c + 8))(&piStack_3c,uStack_34);
        }
      }
    }
  }
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_54 + 8))(&local_54,local_4c);
    local_54 = (int *)0x0;
  }
  local_50 = 0;
  if ((unaff_EBX >> 6 & 1) != 0) {
    (**(code **)(*unaff_ESI + 8))(&stack0xffffff94,param_1);
  }
  return;
}



/* ===== data::SoulBeastFoodMo_10524f20 @ 10524f20  size=619 ===== */
// strings:
//   "beastFoodArray"
//   "mh.data::SoulBeastFoodMo"
//   "iItemId"
//   "iItemCount"
//   "iItemLevel"

/* [RE-AUTO c3]
   id: data::SoulBeastFoodMo
   strings:
     ""beastFoodArray""
     ""mh.data::SoulBeastFoodMo""
     ""iItemId""
     ""iItemCount""
     ""iItemLevel"" */

void data__SoulBeastFoodMo_10524f20
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EBX;
  undefined4 uVar5;
  int *unaff_ESI;
  int *piVar6;
  int **ppiStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  int *local_58;
  int *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  int *local_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_24;
  
  local_58 = (int *)0x0;
  local_54 = (int *)param_4[1];
  local_4c = param_4[3];
  puStack_74 = (undefined4 *)param_4[2];
  local_48 = param_4[4];
  local_50 = puStack_74;
  if (((uint)local_54 >> 6 & 1) != 0) {
    local_58 = (int *)*param_4;
    ppiStack_78 = &local_58;
    (**(code **)(*local_58 + 4))();
  }
  if (((param_4[7] & 0x8f) == 3) || (uVar5 = 0xdeadbeaf, (param_4[7] & 0x8f) == 4)) {
    uVar5 = param_4[8];
  }
  puStack_74 = &local_40;
  local_40 = 0;
  local_3c = (int *)0x0;
  ppiStack_78 = (int **)0x10524fa5;
  FUN_11a98a70();
  ppiStack_78 = (int **)(uint)(((byte)local_58 & 0x8f) == 10);
  (**(code **)(*piStack_5c + 0x14))(local_54,"beastFoodArray",auStack_44);
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 != 0 && (*(int *)(iVar2 + 0x2b14) != 0)) &&
      ((iVar3 = FUN_114137f0(uVar5), iVar3 != 0 &&
       (ppiStack_78 = *(int ***)(iVar2 + 0x2d1c), ppiStack_78 != (int **)0x0)))))) {
    iVar2 = FUN_115aad30();
    piVar1 = *(int **)(iVar2 + 0x20);
    for (piVar6 = *(int **)(iVar2 + 0x1c); piVar6 != piVar1; piVar6 = piVar6 + 1) {
      local_3c = (int *)0x0;
      uStack_38 = 0;
      iStack_24 = param_2;
      if (param_2 != 0) {
        FUN_11a98de0(&local_3c,"mh.data::SoulBeastFoodMo",0,0);
      }
      FUN_104d1550("iItemId",*(undefined4 *)(*piVar6 + 4));
      uVar5 = FUN_113fa380(*(undefined4 *)(*piVar6 + 4));
      FUN_104d1550("iItemCount",uVar5);
      piVar4 = (int *)FUN_113f99c0(*(undefined4 *)(*piVar6 + 4),&puStack_74,&ppiStack_78,0xffffffff)
      ;
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*piVar4 + 0x18))();
        FUN_104d1550("iItemLevel",uVar5);
      }
      (**(code **)(*unaff_EBX + 0x3c))(uStack_60,&local_50);
      iStack_24 = 0;
      if ((uStack_38 >> 6 & 1) != 0) {
        (**(code **)(*local_3c + 8))(&local_3c,uStack_34);
      }
    }
  }
  if (((uint)local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_54 + 8))(&local_54,local_4c);
    local_54 = (int *)0x0;
  }
  local_50 = (undefined4 *)0x0;
  if (((uint)unaff_EBX >> 6 & 1) != 0) {
    (**(code **)(*unaff_ESI + 8))(&stack0xffffff94,uStack_64);
  }
  return;
}



/* ===== FUN_10525e00 @ 10525e00  size=639 ===== */
// strings:
//   "avatarSoulBeastShow"
//   "_root.Global_SoulBeastAvatarRefresh"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""avatarSoulBeastShow""
     ""_root.Global_SoulBeastAvatarRefresh"" */

void __thiscall FUN_10525e00(int param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  float10 fVar6;
  int in_stack_00000010;
  int in_stack_00000014;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xbc) != 0)) &&
      (*(int *)(DAT_1202e818 + 0x34) != 0)) &&
     (((in_stack_00000014 == 5 && (*(int **)(param_1 + 0x2c) != (int *)0x0)) &&
      (iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 8))(), iVar3 != 0)))) {
    piVar4 = (int *)FUN_104d0280();
    cVar2 = (**(code **)(*piVar4 + 0x20))(0xf5);
    if (cVar2 != '\0') {
      dStack_24 = 0.0;
      if (((byte)*(undefined4 *)(in_stack_00000010 + 4) & 0x8f) == 5) {
        dStack_2c = *(double *)(in_stack_00000010 + 8);
      }
      else {
        dStack_2c = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x1c) & 0x8f) == 5) {
        dStack_34 = *(double *)(in_stack_00000010 + 0x20);
      }
      else {
        dStack_34 = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x34) & 0x8f) == 5) {
        dStack_1c = *(double *)(in_stack_00000010 + 0x38);
      }
      else {
        dStack_1c = 0.0;
      }
      if (((byte)*(undefined4 *)(in_stack_00000010 + 0x4c) & 0x8f) == 5) {
        dStack_24 = *(double *)(in_stack_00000010 + 0x50);
      }
      fVar6 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xdc))();
      dVar1 = (double)fVar6;
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f4))();
      if ((iVar3 != 0) && (piVar4 = *(int **)(param_1 + 0x20), piVar4 != (int *)0x0)) {
        cVar2 = (char)((uint)(int)(dVar1 * dStack_34) >> 0x18);
        (**(code **)(*piVar4 + 0x34))
                  ((int)(dVar1 * dStack_1c),(int)(dVar1 * dStack_24),(int)(dVar1 * dStack_2c));
        (**(code **)(*piVar4 + 0x2c))(cVar2 == '\0');
      }
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1);
      if (DAT_123be578 == iVar3) {
        cVar2 = (char)((uint)unaff_ESI >> 0x18);
      }
      else {
        DAT_123be578 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1);
        cVar2 = '\x01';
      }
      if (((*(char *)(param_1 + 0x40) == '\0') || (cVar2 != '\0')) &&
         (iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))(1), iVar3 != 0)) {
        if ((*(int **)(param_1 + 0x44) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(param_1 + 0x44) + 0x8c))(), iVar3 != 0)) {
          piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x44) + 0x8c))();
          iVar3 = *piVar4;
          uVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 800))
                            (1,(int)(dStack_1c * _DAT_11de99c0),(int)(dStack_1c * _DAT_11de99c0));
          (**(code **)(iVar3 + 0xf0))("avatarSoulBeastShow",1,uVar5);
          piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x44) + 0x8c))();
          (**(code **)(*piVar4 + 0xc0))("_root.Global_SoulBeastAvatarRefresh",0,0,0);
        }
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
    }
  }
  return;
}



/* ===== FUN_10526080 @ 10526080  size=246 ===== */
// strings:
//   "FlashUI"
//   "avatarSoulBeastShow"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""avatarSoulBeastShow"" */

void FUN_10526080(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  int local_18;
  double local_14;
  
  if (((DAT_1202e818 != (int *)0x0) && (DAT_1202e818[4] != 0)) && (DAT_1202e818[0x2f] != 0)) {
    local_18 = 0;
    local_14 = (double)((ulonglong)local_14 & 0xffffffff00000000);
    if (*DAT_1202e818 != 0) {
      FUN_104d7640("FlashUI",&local_18);
    }
    bVar5 = local_18 != 0;
    FUN_104d7800();
    if (bVar5) {
      puVar2 = (undefined4 *)FUN_1052b5b0();
      piVar3 = (int *)(**(code **)(*(int *)*puVar2 + 0x3c))(&DAT_11dbd178);
      FUN_104d7800();
      if (piVar3 != (int *)0x0) {
        fVar6 = (float10)(**(code **)(*(int *)DAT_1202e818[0x2f] + 0xdc))();
        local_14 = (double)fVar6;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))();
        iVar1 = *piVar3;
        uVar4 = (**(code **)(*(int *)DAT_1202e818[4] + 800))
                          (1,(int)(local_14 * _DAT_11de99c0),(int)(local_14 * _DAT_11de99c0));
        (**(code **)(iVar1 + 0xf0))("avatarSoulBeastShow",1,uVar4);
      }
    }
  }
  return;
}



/* ===== FUN_1052bf70 @ 1052bf70  size=158 ===== */
// calls: CPetInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CPetInfo"

/* [RE-AUTO c0]
   calls: CPetInfo::GetManagers
   strings:
     ""CPetInfo"" */

undefined4 FUN_1052bf70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0b30;
  puVar2 = (undefined4 *)CPetInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CPetInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be7b4 & 1) == 0) {
        DAT_123be7b4 = DAT_123be7b4 | 1;
        FUN_1053ca80();
        FUN_11a8911f(&LAB_11c70230);
      }
      puVar3 = &DAT_123be77c;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10530e20 @ 10530e20  size=1000 ===== */
// strings:
//   "Libs/WeaponUIConfig.xml"
//   "WeaponUICOnfigs"
//   "GlobalConfig"
//   "maxscale"
//   "minscale"
//   "scalespeed"
//   "WeaponConfigs"
//   "weaponid"
//   "EquipConfigs"
//   "PlayerConfig"
//   "PetConfig"
//   "WeaponConfigOverride"

/* [RE-AUTO c0]
   strings:
     ""Libs/WeaponUIConfig.xml""
     ""WeaponUICOnfigs""
     ""GlobalConfig""
     ""maxscale""
     ""minscale""
     ""scalespeed""
     ""WeaponConfigs""
     ""weaponid""
     ""EquipConfigs""
     ""PlayerConfig"" */

void __fastcall FUN_10530e20(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_7c [4];
  int local_78;
  int *local_74;
  int *local_70;
  uint local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_60,"Libs/WeaponUIConfig.xml",0,1,0);
  if (local_60 != (int *)0x0) {
    cVar2 = (**(code **)(*local_60 + 0x28))("WeaponUICOnfigs");
    if (cVar2 != '\0') {
      (**(code **)(*local_60 + 0xac))(&local_64,"GlobalConfig");
      if (local_64 != (int *)0x0) {
        (**(code **)(*local_64 + 100))("maxscale",&DAT_11e22934);
        (**(code **)(*local_64 + 100))("minscale",&DAT_11e22938);
        (**(code **)(*local_64 + 100))("scalespeed",param_1 + 0x2c);
      }
      (**(code **)(*local_60 + 0xac))(&local_74,"WeaponConfigs");
      if (local_74 != (int *)0x0) {
        iVar3 = (**(code **)(*local_74 + 0xa0))();
        iVar4 = 0;
        local_78 = iVar3;
        if (0 < iVar3) {
          do {
            (**(code **)(*local_74 + 0xa8))(&local_58,iVar4);
            local_5c = (int *)0x0;
            (**(code **)(*local_58 + 0x74))("weaponid",&local_5c);
            local_6c = (int)local_5c - 0x1f;
            if (local_6c < 0xc) {
              iVar3 = param_1 + local_6c * 0x48;
              FUN_10530da0(iVar3 + 0x54,&local_58);
              (**(code **)(*local_58 + 0x58))(&DAT_11dc1454,iVar3 + 0x74);
              (**(code **)(*local_58 + 0x54))(&DAT_11dc144c,iVar3 + 100);
              (**(code **)(*local_58 + 0x58))(&DAT_11dc1444,param_1 + (local_6c * 9 + 0x12) * 8);
              (**(code **)(*local_58 + 0x54))(&DAT_11dc1494,iVar3 + 0x80);
              iVar3 = local_78;
            }
            else {
              FUN_10530da0(param_1 + 0x3b4,&local_58);
              (**(code **)(*local_58 + 0x58))(&DAT_11dc1454,param_1 + 0x3d4);
              (**(code **)(*local_58 + 0x54))(&DAT_11dc144c,param_1 + 0x3c4);
              (**(code **)(*local_58 + 0x58))(&DAT_11dc1444,param_1 + 0x3f0);
              (**(code **)(*local_58 + 0x54))(&DAT_11dc1494,param_1 + 0x3e0);
            }
            if (local_58 != (int *)0x0) {
              (**(code **)(*local_58 + 4))();
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
      }
      (**(code **)(*local_60 + 0xac))(&local_68,"EquipConfigs");
      if (local_68 != (int *)0x0) {
        (**(code **)(*local_68 + 0xac))(&local_5c,"PlayerConfig");
        if (local_5c != (int *)0x0) {
          FUN_10530da0(param_1 + 0x3fc,&local_5c);
        }
        (**(code **)(*local_68 + 0xac))(&local_58,"PetConfig");
        if (local_58 != (int *)0x0) {
          FUN_10530da0(param_1 + 0x40c,&local_58);
          if (local_58 != (int *)0x0) {
            (**(code **)(*local_58 + 4))();
          }
        }
        if (local_5c != (int *)0x0) {
          (**(code **)(*local_5c + 4))();
        }
      }
      (**(code **)(*local_60 + 0xac))(&local_70,"WeaponConfigOverride");
      if (local_70 != (int *)0x0) {
        iVar3 = (**(code **)(*local_70 + 0xa0))();
        iVar4 = 0;
        local_78 = iVar3;
        if (0 < iVar3) {
          local_6c = param_1 + 0x3c;
          do {
            (**(code **)(*local_70 + 0xa8))(&local_58,iVar4);
            local_5c = (int *)0x0;
            (**(code **)(*local_58 + 0x74))("weaponid",&local_5c);
            piVar1 = local_5c;
            FUN_10530da0(&local_54,&local_58);
            (**(code **)(*local_58 + 0x58))(&DAT_11dc1454,&local_34);
            (**(code **)(*local_58 + 0x54))(&DAT_11dc144c,&local_44);
            (**(code **)(*local_58 + 0x58))(&DAT_11dc1444,&uStack_18);
            (**(code **)(*local_58 + 0x54))(&DAT_11dc1494,&uStack_28);
            local_c8 = local_54;
            uStack_c4 = uStack_50;
            uStack_c0 = uStack_4c;
            uStack_bc = uStack_48;
            local_cc = piVar1;
            local_b8 = local_44;
            uStack_b4 = uStack_40;
            uStack_b0 = uStack_3c;
            uStack_ac = uStack_38;
            local_a8 = local_34;
            uStack_a4 = uStack_30;
            uStack_a0 = uStack_2c;
            uStack_9c = uStack_28;
            local_98 = local_24;
            uStack_94 = uStack_20;
            uStack_90 = uStack_1c;
            uStack_8c = uStack_18;
            local_88 = local_14;
            FUN_1053a460(local_7c,&local_cc);
            if (local_58 != (int *)0x0) {
              (**(code **)(*local_58 + 4))();
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        if (local_70 != (int *)0x0) {
          (**(code **)(*local_70 + 4))();
        }
      }
      if (local_68 != (int *)0x0) {
        (**(code **)(*local_68 + 4))();
      }
      if (local_74 != (int *)0x0) {
        (**(code **)(*local_74 + 4))();
      }
      if (local_64 != (int *)0x0) {
        (**(code **)(*local_64 + 4))();
      }
    }
    if (local_60 != (int *)0x0) {
      (**(code **)(*local_60 + 4))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107cb110 @ 107cb110  size=158 ===== */
// calls: CPetEquipInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CPetEquipInfo"

/* [RE-AUTO c0]
   calls: CPetEquipInfo::GetManagers
   strings:
     ""CPetEquipInfo"" */

undefined4 FUN_107cb110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8580;
  puVar2 = (undefined4 *)CPetEquipInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CPetEquipInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123bea3c & 1) == 0) {
        DAT_123bea3c = DAT_123bea3c | 1;
        FUN_107d57b0();
        FUN_11a8911f(&LAB_11c708d0);
      }
      puVar3 = &DAT_123bea40;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10835cb0 @ 10835cb0  size=3593 ===== */
// calls: sprintf
// strings:
//   "sys_show_damage_number"
//   "cl_MHFCCameraPitchControlByMouseZ"
//   "g_firstAtkRotEnable"
//   "r_Fullscreen"
//   "cl_ShowLocalPlayerNamePad"
//   "g_otherAtkRotEnable"
//   "pl_autoHolster"
//   "g_iCommonResetCameraType"
//   "g_iGunAimControlType"
//   "cl_ShowLocalPlayerTitle"
//   "r_ShowHrLevel"
//   "cl_invertMouse"
//   "cl_iEnableBothKeyAndPad"
//   "cl_iEnablePadHeadIcon"
//   "cl_fXICameraMoveHValue"
//   "cl_fXICameraMoveVValue"
//   "cl_fXIStickAimCameraMoveHValue"
//   "cl_fXIStickAimCameraMoveVValue"
//   "g_fGamepadMouseMoveSpeed"
//   "g_Gamepad_Feedback"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""sys_show_damage_number""
     ""cl_MHFCCameraPitchControlByMouseZ""
     ""g_firstAtkRotEnable""
     ""r_Fullscreen""
     ""cl_ShowLocalPlayerNamePad""
     ""g_otherAtkRotEnable""
     ""pl_autoHolster""
     ""g_iCommonResetCameraType""
     ""g_iGunAimControlType""
     ""cl_ShowLocalPlayerTitle"" */

void FUN_10835cb0(int **param_1,int param_2,int param_3,float param_4,int param_5)

{
  int **ppiVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfStack_268;
  int *piStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  char *pcStack_254;
  int **ppiStack_250;
  float fStack_24c;
  float fStack_248;
  char *pcStack_244;
  char *pcStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  char *pcStack_224;
  char *pcStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  char *pcStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  char *pcStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  char *pcStack_1f4;
  char *pcStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  int **ppiStack_1a0;
  int *piStack_19c;
  uint uStack_18c;
  int *piStack_188;
  uint uStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_164;
  char acStack_160 [8];
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_148;
  float fStack_138;
  undefined4 uStack_130;
  char acStack_124 [4];
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  int **local_e0;
  int *piStack_d0;
  uint uStack_cc;
  int *piStack_c8;
  int *piStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_18c;
  local_e0 = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0.0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_19c = param_1[2];
      ppiStack_1a0 = param_1;
      pcStack_1a4 = (char *)0x10835d1e;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar7 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_19c = (int *)0x11dcdf00;
    ppiStack_1a0 = (int **)0x10835d41;
    piVar5 = (int *)(**(code **)(**(int **)(iVar7 + 0x2c) + 0x54))();
    ppiStack_1a0 = (int **)0x10835d48;
    uVar6 = (**(code **)(*piVar5 + 8))();
    ppiStack_1a0 = (int **)0x11dcdedc;
    pcStack_1a4 = (char *)0x10835d5d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a4 = (char *)0x10835d64;
    uStack_110 = (**(code **)(*piVar5 + 8))();
    pcStack_1a4 = "g_firstAtkRotEnable";
    pcStack_1a8 = (char *)0x10835d7e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a8 = (char *)0x10835d85;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1a8 = "r_Fullscreen";
    pcStack_1ac = (char *)0x10835d9f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ac = (char *)0x10835da6;
    DAT_123bb9f4 = (**(code **)(*piVar5 + 8))();
    pcStack_1ac = "cl_ShowLocalPlayerNamePad";
    pcStack_1b0 = (char *)0x10835dbd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b0 = (char *)0x10835dc4;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1b0 = "g_otherAtkRotEnable";
    pcStack_1b4 = (char *)0x10835dde;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b4 = (char *)0x10835de5;
    uStack_f0 = (**(code **)(*piVar5 + 8))();
    pcStack_1b4 = "pl_autoHolster";
    pcStack_1b8 = (char *)0x10835dff;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b8 = (char *)0x10835e06;
    uStack_f8 = (**(code **)(*piVar5 + 8))();
    pcStack_1b8 = "g_iCommonResetCameraType";
    pcStack_1bc = (char *)0x10835e20;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1bc = (char *)0x10835e27;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1bc = "g_iGunAimControlType";
    pcStack_1c0 = (char *)0x10835e3e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c0 = (char *)0x10835e45;
    uStack_154 = (**(code **)(*piVar5 + 8))();
    pcStack_1c0 = "cl_ShowLocalPlayerTitle";
    pcStack_1c4 = (char *)0x10835e5c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c4 = (char *)0x10835e63;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1c4 = "r_ShowHrLevel";
    pcStack_1c8 = (char *)0x10835e7d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c8 = (char *)0x10835e84;
    uStack_114 = (**(code **)(*piVar5 + 8))();
    pcStack_1c8 = "cl_invertMouse";
    pcStack_1cc = (char *)0x10835e9e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1cc = (char *)0x10835ea5;
    uStack_164 = (**(code **)(*piVar5 + 8))();
    pcStack_1cc = "cl_iEnableBothKeyAndPad";
    piStack_188 = (int *)0x0;
    pcStack_1d0 = (char *)0x10835ec4;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d0 = "cl_iEnableBothKeyAndPad";
      pcStack_1d4 = (char *)0x10835eda;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d4 = (char *)0x10835ee1;
      uStack_18c = (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d0 = "cl_iEnablePadHeadIcon";
    pcStack_1d4 = (char *)0x10835f00;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d4 = "cl_iEnablePadHeadIcon";
      pcStack_1d8 = (char *)0x10835f16;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d8 = (char *)0x10835f1d;
      (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d4 = "cl_fXICameraMoveHValue";
    pcStack_1d8 = (char *)0x10835f34;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1d8 = (char *)0x10835f3b;
    uStack_130 = (**(code **)(*piVar5 + 8))();
    pcStack_1d8 = "cl_fXICameraMoveVValue";
    pcStack_1dc = (char *)0x10835f55;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1dc = (char *)0x10835f5c;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1dc = "cl_fXIStickAimCameraMoveHValue";
    pcStack_1e0 = (char *)0x10835f73;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e0 = (char *)0x10835f7a;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1e0 = "cl_fXIStickAimCameraMoveVValue";
    pcStack_1e4 = (char *)0x10835f94;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e4 = (char *)0x10835f9b;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1e4 = "g_fGamepadMouseMoveSpeed";
    pcStack_1e8 = (char *)0x10835fb2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e8 = (char *)0x10835fbb;
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_1e8 = "g_Gamepad_Feedback";
    fStack_138 = (float)fVar9;
    pcStack_1ec = (char *)0x10835fd4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ec = (char *)0x10835fdb;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1ec = "g_DInputKeyboard";
    pcStack_1ac = (char *)0x0;
    pcStack_1f0 = (char *)0x10835ffd;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f0 = "g_DInputKeyboard";
      pcStack_1f4 = (char *)0x10836013;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f4 = (char *)0x1083601a;
      pcStack_1b0 = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f0 = "g_UseEmbeddedIME";
    pcStack_1b8 = (char *)0x0;
    pcStack_1f4 = (char *)0x10836039;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f4 = "g_UseEmbeddedIME";
      pcStack_1f8 = (char *)0x1083604f;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f8 = (char *)0x10836056;
      pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f4 = "g_refuseTeamInvite";
    pcStack_1f8 = (char *)0x1083606d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1f8 = (char *)0x10836074;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1f8 = "g_FriendRemind";
    pcStack_1fc = (char *)0x1083608e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1fc = (char *)0x10836095;
    pcStack_1b4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_1fc = "g_refuseTradeRequest";
    pcStack_200 = (char *)0x108360ac;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_200 = (char *)0x108360b3;
    uStack_148 = (**(code **)(*piVar5 + 8))();
    pcStack_200 = "g_refuseTeamRequest";
    pcStack_204 = (char *)0x108360cd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_204 = (char *)0x108360d4;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_204 = "g_GuilderRemind";
    pcStack_208 = (char *)0x108360ee;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_208 = (char *)0x108360f5;
    uStack_120 = (**(code **)(*piVar5 + 8))();
    pcStack_208 = "g_OtherGuildName";
    pcStack_20c = (char *)0x1083610f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_20c = (char *)0x10836116;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_20c = "g_selfGuildName";
    pcStack_210 = (char *)0x10836130;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_210 = (char *)0x10836137;
    pcStack_1c4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_210 = "e_ChatDialogRendering";
    pcStack_214 = (char *)0x1083614e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_214 = (char *)0x10836155;
    pcStack_1c0 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_214 = "g_refuseGuildRequest";
    pcStack_218 = (char *)0x1083616c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_218 = (char *)0x10836173;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_218 = "g_refuseClanRequest";
    pcStack_21c = (char *)0x1083618a;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_21c = (char *)0x10836191;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_21c = "cl_ShowPlayerNamePadMode";
    pcStack_220 = (char *)0x108361a8;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_220 = (char *)0x108361af;
    piStack_180 = (int *)(**(code **)(*piVar5 + 8))();
    pcStack_220 = "cl_ShowHeroNamePadMode";
    pcStack_224 = (char *)0x108361c9;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_224 = (char *)0x108361d0;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_224 = "cl_ShowPlayerPetName";
    pcStack_228 = (char *)0x108361e7;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_228 = (char *)0x108361ee;
    fStack_138 = (float)(**(code **)(*piVar5 + 8))();
    pcStack_228 = "cl_ShowHeroPetName";
    pcStack_22c = (char *)0x10836208;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_22c = (char *)0x1083620f;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_22c = "cl_ShowBossDeadGlow";
    pcStack_230 = (char *)0x10836226;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_230 = (char *)0x1083622d;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_230 = "g_NPCName_hide";
    pcStack_234 = (char *)0x10836244;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_234 = (char *)0x1083624b;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_234 = "cl_TaskTraceMode";
    pcStack_238 = (char *)0x10836262;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_238 = (char *)0x10836269;
    pcStack_1ac = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_238 = "g_hideEmoji";
    pcStack_23c = (char *)0x10836283;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_23c = (char *)0x1083628a;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_23c = "r_HideC2PlaeyerEffect";
    pcStack_240 = (char *)0x108362a4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_240 = (char *)0x108362ab;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_240 = "r_HideSelfPlaeyerEffect";
    pcStack_244 = (char *)0x108362c2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_244 = (char *)0x108362c9;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_244 = "cl_iHideBreakEffect";
    fStack_248 = 5.182273e-29;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    fStack_248 = 5.182277e-29;
    pcStack_21c = (char *)(**(code **)(*piVar5 + 8))();
    fStack_248 = param_4;
    fStack_24c = 5.1822875e-29;
    FUN_104f4330();
    ppiStack_250 = &piStack_180;
    piStack_180 = (int *)0x0;
    uStack_17c = 0;
    pcStack_1c4 = (char *)CONCAT31(pcStack_1c4._1_3_,((byte)uStack_154 & 0x8f) == 10);
    fStack_24c = (float)pcStack_1c4;
    pcStack_254 = "SWITCH_CLASS_NAME";
    uStack_258 = uStack_150;
    uStack_25c = 0x10836351;
    cVar2 = (**(code **)(*piStack_158 + 0x10))();
    piStack_264 = (int *)0x0;
    if (((cVar2 != '\0') && (((byte)uStack_18c & 0x8f) == 6)) &&
       (piStack_264 = piStack_188, (uStack_18c >> 6 & 1) != 0)) {
      piStack_264 = (int *)*piStack_188;
    }
    uStack_25c = 0;
    uStack_260 = 0;
    pfStack_268 = &fStack_248;
    fStack_248 = 0.0;
    pcStack_244 = (char *)0x0;
    FUN_11a98de0();
    FUN_104d1550("isShowDamageNum",uVar6);
    FUN_104d1550("isMouseWheelControlCamera",pcStack_1d8);
    FUN_104d1550("isCamereFollowAction",pcStack_1d0);
    FUN_104d15e0("isWindowsMode",DAT_123bb9f4 == 0);
    FUN_104d1550("isShowSelf",pcStack_1c8);
    FUN_104d1550("unisCamereFollowAction",pcStack_1a8);
    FUN_104d1550("g_iCommonResetCameraType",pcStack_21c);
    FUN_104d1550("autoHolster",pcStack_1ac);
    if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x2c) != 0)) {
      iVar8 = 1;
      iVar7 = DAT_1202e818;
      do {
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2c) != 0)) {
          sprintf(acStack_160,"g_Gamepad_WeaponType_%d",iVar8);
          piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))(acStack_160);
          uVar6 = (**(code **)(*piVar5 + 8))();
          sprintf(acStack_124,"weapon_type_%d",iVar8);
          FUN_104d1550(acStack_124,uVar6);
          iVar7 = DAT_1202e818;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xd);
    }
    FUN_104d1550("g_playerTitleType",pcStack_214);
    FUN_104d1550("g_otherPlayerTitleType",pcStack_1cc);
    FUN_104d1550("g_hideSelfCat",pcStack_20c);
    FUN_104d1550("g_hideOtherCat",uStack_17c);
    FUN_104d1550("gamePad_cameraReversal",pcStack_204);
    FUN_104d1550("gamePad_disableMouse",pcStack_228);
    FUN_104d1550("gamePad_HeadIcon",pcStack_230);
    FUN_104d1550("gamePad_cameraHorizon",pcStack_1c4);
    FUN_104d1550("gamePad_cameraVertical",pcStack_1fc);
    FUN_104d1550("gamePad_foucsHorizon",pcStack_1a4);
    FUN_104d1550("gamePad_fouceVertical",pcStack_1f4);
    FUN_104d14d0("gamePad_mouseSpeed");
    FUN_104d1550("gamePad_Shake",pcStack_1ec);
    FUN_104d1550("g_useKeyboardCapable",pcStack_22c);
    FUN_104d1550("g_useInputPadCapable",pcStack_234);
    FUN_104d1550("g_refuseTeamInvite",piStack_180);
    FUN_104d1550("g_FriendRemind",pcStack_224);
    FUN_104d1550("g_refuseTradeRequest",pcStack_1b4);
    FUN_104d1550("g_refuseTeamRequest",pcStack_1dc);
    FUN_104d1550("g_GuilderRemind",uStack_184);
    FUN_104d1550("g_OtherGuildName",pcStack_1d4);
    FUN_104d1550("g_selfGuildName",pcStack_220);
    FUN_104d1550("g_popChat",pcStack_218);
    FUN_104d1550("g_refuseGuildRequest",pcStack_210);
    FUN_104d1550("g_refuseClanRequest",pcStack_208);
    FUN_104d1550("gunAim_ControlType",pcStack_200);
    FUN_104d1550("hideCapture",pcStack_1f8);
    FUN_104d1550("hideNpc",pcStack_1f0);
    FUN_104d1550("hideEmoji",pcStack_1e8);
    FUN_104d1550("taskTraceMode",pcStack_1e0);
    FUN_104d1550("hidetrailother",pcStack_23c);
    FUN_104d1550("hidetrailself",pcStack_238);
    FUN_104d1550("hideBreakEffect",pcStack_240);
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_244 = (char *)(float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouse");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel_v");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_248 = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseV");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_MHFpsRotSpeed");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_24c = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseJ");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_invertMouse");
    uVar6 = (**(code **)(*piVar5 + 8))();
    FUN_104d1550("i_mouse_accel_v_reverse",uVar6);
    (**(code **)(*piStack_188 + 0x14))
              (piStack_180,"switchVO",&pfStack_268,((byte)uStack_184 & 0x8f) == 10);
    FUN_113f3640();
    iVar7 = FUN_1115abd0();
    if (iVar7 == 0) {
      FUN_104d15e0("hidefashion",1);
      FUN_104d15e0("hidetaojian",1);
      uVar6 = 1;
    }
    else {
      piVar5 = (int *)(iVar7 + 0x25ddc);
      uVar3 = (**(code **)(*piVar5 + 4))();
      uStack_260 = CONCAT31(uStack_260._1_3_,uVar3);
      uVar4 = (**(code **)(*piVar5 + 0xc))();
      uStack_258 = CONCAT31(uStack_258._1_3_,uVar4);
      DAT_123bb9f1 = (**(code **)(*piVar5 + 0x14))();
      uStack_25c = CONCAT31(uStack_25c._1_3_,DAT_123bb9f1);
      DAT_123bb96b = uVar4;
      DAT_123bb9f0 = uVar3;
      FUN_104d15e0("hidefashion",uStack_260);
      FUN_104d15e0("hidetaojian",uStack_258);
      uVar6 = uStack_25c;
    }
    FUN_104d15e0("hidehelmet",uVar6);
    FUN_104d15e0("hidetitle",pcStack_1e0 == (char *)0x0);
    FUN_104d15e0("hideHRLevel",pcStack_1d8 == (char *)0x0);
    ppiVar1 = local_e0;
    if (((uint)local_e0[1] >> 6 & 1) != 0) {
      piStack_19c = local_e0[2];
      ppiStack_1a0 = local_e0;
      pcStack_1a4 = (char *)0x108369fe;
      (**(code **)(**local_e0 + 8))();
      *ppiVar1 = (int *)0x0;
    }
    ppiVar1[1] = (int *)0x2;
    *(undefined1 *)(ppiVar1 + 2) = 1;
    if ((uStack_184 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_188;
      piStack_19c = piStack_180;
      pcStack_1a4 = (char *)0x10836a2c;
      (**(code **)(*piStack_188 + 8))();
      piStack_188 = (int *)0x0;
    }
    uStack_184 = 0;
    if ((uStack_cc >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_d0;
      piStack_19c = piStack_c8;
      pcStack_1a4 = (char *)0x10836a65;
      (**(code **)(*piStack_d0 + 8))();
      piStack_d0 = (int *)0x0;
    }
    uStack_cc = 0;
    if ((uStack_a4 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_a8;
      piStack_19c = piStack_a0;
      pcStack_1a4 = (char *)0x10836aa4;
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10836b50 @ 10836b50  size=1346 ===== */
// strings:
//   "g_refuseTeamInvite"
//   "g_FriendRemind"
//   "r_HideSelfPlaeyerEffect"
//   "r_HideC2PlaeyerEffect"
//   "g_refuseClanRequest"
//   "g_refuseGuildRequest"
//   "g_refuseTradeRequest"
//   "g_refuseTeamRequest"
//   "g_GuilderRemind"
//   "cl_ShowPlayerNamePadMode"
//   "cl_ShowHeroNamePadMode"
//   "cl_ShowPlayerPetName"
//   "cl_ShowHeroPetName"
//   "cl_ShowBossDeadGlow"
//   "g_NPCName_hide"
//   "g_hideEmoji"
//   "cl_TaskTraceMode"
//   "g_DInputKeyboard"
//   "g_UseEmbeddedIME"
//   "cl_iHideBreakEffect"

/* [RE-AUTO c0]
   strings:
     ""g_refuseTeamInvite""
     ""g_FriendRemind""
     ""r_HideSelfPlaeyerEffect""
     ""r_HideC2PlaeyerEffect""
     ""g_refuseClanRequest""
     ""g_refuseGuildRequest""
     ""g_refuseTradeRequest""
     ""g_refuseTeamRequest""
     ""g_GuilderRemind""
     ""cl_ShowPlayerNamePadMode"" */

void FUN_10836b50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  
  uVar1 = *(undefined1 *)(param_3 + 0x28);
  uVar2 = *(undefined1 *)(param_3 + 0x38);
  uVar3 = *(undefined1 *)(param_3 + 0x48);
  uVar18 = *(undefined4 *)(param_3 + 0x58);
  uVar19 = *(undefined4 *)(param_3 + 0x68);
  uVar4 = *(undefined1 *)(param_3 + 0x78);
  cVar5 = *(char *)(param_3 + 0x88);
  uVar6 = *(undefined1 *)(param_3 + 0x98);
  uVar7 = *(undefined1 *)(param_3 + 8);
  uVar8 = *(undefined1 *)(param_3 + 0x18);
  uVar9 = *(undefined1 *)(param_3 + 0x138);
  uVar10 = *(undefined1 *)(param_3 + 0xa8);
  cVar11 = *(char *)(param_3 + 0xb8);
  cVar12 = *(char *)(param_3 + 200);
  cVar13 = *(char *)(param_3 + 0xd8);
  iVar23 = *(int *)(param_3 + 0xe8);
  uVar14 = *(undefined1 *)(param_3 + 0xf8);
  uVar15 = *(undefined1 *)(param_3 + 0x108);
  uVar16 = *(undefined1 *)(param_3 + 0x118);
  uVar17 = *(undefined1 *)(param_3 + 0x128);
  param_3 = (uint)*(byte *)(param_3 + 0x148);
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamInvite");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar7);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_FriendRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar8);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideSelfPlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar9);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideC2PlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar17);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseClanRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar10);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseGuildRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar6);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTradeRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar1);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar2);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_GuilderRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar19);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar18);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar11 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar5 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowBossDeadGlow");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar12 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_NPCName_hide");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar13 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_hideEmoji");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar16);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  bVar24 = false;
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_TaskTraceMode");
  if (piVar21 != (int *)0x0) {
    iVar22 = (**(code **)(*piVar21 + 8))();
    bVar24 = iVar22 != iVar23;
    (**(code **)(*piVar21 + 0x14))(iVar23);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_DInputKeyboard");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar14);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_UseEmbeddedIME");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar15);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_iHideBreakEffect");
  uVar20 = param_3;
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(param_3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0xb4))();
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x3b0))();
    FUN_11167fd0(uVar20 == 0);
    piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_ChatDialogRendering");
    if (piVar21 != (int *)0x0) {
      (**(code **)(*piVar21 + 0x14))(uVar4);
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
    }
    if ((bVar24) && (iVar23 = FUN_10d17440(), iVar23 != 0)) {
      FUN_10d17440();
      iVar23 = FUN_10d17870();
      if (iVar23 != 0) {
        FUN_10d17440();
        piVar21 = (int *)FUN_10d17870();
        (**(code **)(*piVar21 + 4))(0x231,(int)&param_3 + 3);
      }
    }
  }
  return;
}



