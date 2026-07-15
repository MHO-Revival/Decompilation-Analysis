/* ===== FUN_1002c890 @ 1002c890  size=281 ===== */
// strings:
//   "Invalid number of colors in palette"
//   "Ignoring request to write a PLTE chunk in grayscale PNG"

/* [RE-AUTO c0]
   strings:
     ""Invalid number of colors in palette""
     ""Ignoring request to write a PLTE chunk in grayscale PNG"" */

void FUN_1002c890(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  uint local_c;
  undefined1 *local_8;
  
  if ((((*(uint *)(param_1 + 600) & 1) == 0) && (param_3 == 0)) || (0x100 < param_3)) {
    if (*(char *)(param_1 + 0x13b) != '\x03') {
      FUN_10016240(param_1,"Invalid number of colors in palette");
      return;
    }
    FUN_10016000(param_1,"Invalid number of colors in palette");
  }
  if ((*(byte *)(param_1 + 0x13b) & 2) == 0) {
    FUN_10016240(param_1,"Ignoring request to write a PLTE chunk in grayscale PNG");
  }
  else {
    *(undefined2 *)(param_1 + 300) = (undefined2)param_3;
    FUN_1002c180(param_1,0x504c5445,param_3 * 3);
    local_8 = param_2;
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      local_10 = *local_8;
      local_f = local_8[1];
      local_e = local_8[2];
      FUN_1002c220(param_1,&local_10,3);
      local_8 = local_8 + 3;
    }
    FUN_1002c270(param_1);
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 2;
  }
  return;
}



/* ===== FUN_101468d0 @ 101468d0  size=513 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_ArrayElemLabel
// strings:
//   "[groupID]"
//   "[groupStatCnt]"
//   "[groupStatType]"
//   " 0x%02x"
//   "[groupStatValue]"
//   "[groupLevelCnt]"
//   "[entrustLevelStat]"

/* [RE-AUTO c0]
   strings:
     ""[groupID]""
     ""[groupStatCnt]""
     ""[groupStatType]""
     "" 0x%02x""
     ""[groupStatValue]""
     ""[groupLevelCnt]""
     ""[entrustLevelStat]"" */

int __thiscall FUN_101468d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  short sVar3;
  short sVar4;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[groupID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[groupStatCnt]",&DAT_11d9e0b4,
                                  (int)*(short *)(param_1 + 1)), iVar1 == 0)) {
    sVar3 = *(short *)(param_1 + 1);
    if (sVar3 < 0) {
      return -6;
    }
    if (10 < sVar3) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(10,"[groupStatType]",(int)sVar3,(int)sVar3 >> 0x1f);
    if (iVar1 == 0) {
      sVar3 = 0;
      if (0 < *(short *)(param_1 + 1)) {
        do {
          iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)(sVar3 + 6 + (int)param_1));
          if (iVar1 != 0) {
            return iVar1;
          }
          sVar3 = sVar3 + 1;
        } while (sVar3 < *(short *)(param_1 + 1));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        sVar3 = *(short *)(param_1 + 1);
        if (sVar3 < 0) {
          return -6;
        }
        if (10 < sVar3) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(10,"[groupStatValue]",(int)sVar3,(int)sVar3 >> 0x1f);
        if (iVar1 == 0) {
          sVar3 = 0;
          if (0 < *(short *)(param_1 + 1)) {
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f608,param_1[sVar3 + 4]);
              if (iVar1 != 0) {
                return iVar1;
              }
              sVar3 = sVar3 + 1;
            } while (sVar3 < *(short *)(param_1 + 1));
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if ((iVar1 == 0) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[groupLevelCnt]",&DAT_11d9e0b4,
                                          (int)*(short *)(param_1 + 0xe)), iVar1 == 0)) {
            sVar3 = *(short *)(param_1 + 0xe);
            if (sVar3 < 0) {
              return -6;
            }
            if (0x40 < sVar3) {
              return -7;
            }
            uVar2 = 0;
            sVar4 = 0;
            if (0 < sVar3) {
              do {
                iVar1 = TdrText_ArrayElemLabel(param_4,"[entrustLevelStat]",(int)sVar4,uVar2);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = param_3;
                if (-1 < param_3) {
                  iVar1 = param_3 + 1;
                }
                iVar1 = FUN_10145900(param_2,iVar1,param_4);
                if (iVar1 != 0) {
                  return iVar1;
                }
                sVar4 = sVar4 + 1;
                uVar2 = extraout_ECX;
              } while (sVar4 < *(short *)(param_1 + 0xe));
            }
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1019be00 @ 1019be00  size=176 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEntrustUIStep]"

/* [RE-AUTO c0]
   strings:
     ""[iEntrustUIStep]"" */

undefined4 __thiscall
FUN_1019be00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c6ac38;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_20 = param_2;
  local_14 = '\0';
  local_1c = 0;
  local_18 = param_3;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = TdrText_FieldScalar(&local_20,param_5,param_6,"[iEntrustUIStep]",&DAT_11d9e0b4,*param_1,
                              DAT_11e11390 ^ (uint)&stack0xfffffffc);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_1c;
  }
  if (local_14 != '\0') {
    FUN_10c3da30(local_20);
  }
  ExceptionList = local_10;
  return uVar1;
}



/* ===== FUN_1019beb0 @ 1019beb0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEntrustUIStep]"

/* [RE-AUTO c0]
   strings:
     ""[iEntrustUIStep]"" */

void __thiscall
FUN_1019beb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iEntrustUIStep]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_1019bee0 @ 1019bee0  size=195 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEntrustUIStep]"

/* [RE-AUTO c0]
   strings:
     ""[iEntrustUIStep]"" */

undefined1 * __thiscall
FUN_1019bee0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_20;
  uint local_1c;
  uint local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c6ac68;
  local_10 = ExceptionList;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_14 = '\0';
    local_20 = param_2;
    local_1c = 0;
    local_18 = param_3;
    local_8 = 0;
    ExceptionList = &local_10;
    TdrText_FieldScalar(&local_20,param_5,param_6,"[iEntrustUIStep]",&DAT_11d9e0b4,*param_1,
                        DAT_11e11390 ^ (uint)&stack0xfffffffc);
    puVar1 = local_20;
    uVar2 = local_1c;
    if (param_3 <= local_1c) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_1c;
    }
    if (local_14 != '\0') {
      FUN_10c3da30(local_20);
    }
    ExceptionList = local_10;
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1019bfb0 @ 1019bfb0  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iEntrustUIStep]"

/* [RE-AUTO c0]
   strings:
     ""[iEntrustUIStep]"" */

undefined1 * __thiscall
FUN_1019bfb0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iEntrustUIStep]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_102bdfa0 @ 102bdfa0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTargetID]"
//   "[iRequestPlayer]"

/* [RE-AUTO c0]
   strings:
     ""[iTargetID]""
     ""[iRequestPlayer]"" */

int __thiscall
FUN_102bdfa0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iTargetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRequestPlayer]",&DAT_11d9e0b4,
                                param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_102be040 @ 102be040  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTargetID]"
//   "[iRequestPlayer]"

/* [RE-AUTO c0]
   strings:
     ""[iTargetID]""
     ""[iRequestPlayer]"" */

void __thiscall
FUN_102be040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iRequestPlayer]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_102bf990 @ 102bf990  size=248 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrDebugFormat_InteractRequestWrap, TdrDebugFormat_ActionPointDataWrap
// strings:
//   "0x%02x"
//   "[chExtType]"
//   "[iResultCode]"
//   "[stRequest]"
//   "[stResult]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[chExtType]""
     ""[iResultCode]""
     ""[stRequest]""
     ""[stResult]"" */

int __thiscall FUN_102bf990(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chExtType]","0x%02x",(int)*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResultCode]",&DAT_11d9e0b4,
                              *(undefined4 *)(param_1 + 1));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = TdrText_FieldLabelChar(param_4,"[stRequest]",extraout_ECX);
  if (iVar1 != 0) {
    return iVar1;
  }
  pcVar2 = param_1;
  if (param_3 < 0) {
    iVar1 = param_3;
    if (*param_1 != '\x02') goto LAB_102bfa33;
  }
  else {
    if (*param_1 != '\x02') goto LAB_102bfa33;
    iVar1 = param_3 + 1;
  }
  iVar1 = TdrDebugFormat_InteractRequestWrap(param_2,iVar1,param_4);
  pcVar2 = extraout_ECX_00;
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_102bfa33:
  iVar1 = TdrText_FieldLabelChar(param_4,"[stResult]",pcVar2);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 < 0) {
    if (*param_1 != '\x02') {
      return 0;
    }
  }
  else {
    if (*param_1 != '\x02') {
      return 0;
    }
    param_3 = param_3 + 1;
  }
  iVar1 = TdrDebugFormat_ActionPointDataWrap(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* ===== FUN_1041e840 @ 1041e840  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"
//   "[iIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]""
     ""[iIndex]"" */

int __thiscall
FUN_1041e840(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iChapterId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iIndex]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1041e8e0 @ 1041e8e0  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"
//   "[iIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]""
     ""[iIndex]"" */

void __thiscall
FUN_1041e8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iIndex]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_1041ec50 @ 1041ec50  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iChapterId]"
//   "[iIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iChapterId]""
     ""[iIndex]"" */

void __thiscall
FUN_1041ec50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iIndex]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1041f870 @ 1041f870  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]"" */

undefined4 __thiscall
FUN_1041f870(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iChapterId]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1041f8f0 @ 1041f8f0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]"" */

void __thiscall
FUN_1041f8f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_1041f920 @ 1041f920  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]"" */

undefined1 * __thiscall
FUN_1041f920(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iChapterId]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1041f9b0 @ 1041f9b0  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iChapterId]"" */

undefined1 * __thiscall
FUN_1041f9b0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1041fba0 @ 1041fba0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iChapterId]"" */

int __thiscall
FUN_1041fba0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iChapterId]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1041fc40 @ 1041fc40  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iChapterId]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iChapterId]"" */

void __thiscall
FUN_1041fc40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iChapterId]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_104d8260 @ 104d8260  size=158 ===== */
// calls: CLevelEntrustNpcInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CLevelEntrustNpcInfo"

/* [RE-AUTO c0]
   calls: CLevelEntrustNpcInfo::GetManagers
   strings:
     ""CLevelEntrustNpcInfo"" */

undefined4 FUN_104d8260(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbddb8;
  puVar2 = (undefined4 *)CLevelEntrustNpcInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CLevelEntrustNpcInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123be070 & 1) == 0) {
        DAT_123be070 = DAT_123be070 | 1;
        FUN_104efe70();
        FUN_11a8911f(&LAB_11c6f000);
      }
      puVar2 = &DAT_123be038;
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



/* ===== FUN_104faa60 @ 104faa60  size=889 ===== */
// strings:
//   "GetReviveData"
//   "RequestRevive"
//   "StartDeathWatchModel"
//   "StopDeathWatchModel"
//   "ChangeZIconFunc"
//   "RequestQuikBuy"
//   "ChangeAutoRevieState"
//   "PlayerRefuseRevive"

/* [RE-AUTO c0]
   strings:
     ""GetReviveData""
     ""RequestRevive""
     ""StartDeathWatchModel""
     ""StopDeathWatchModel""
     ""ChangeZIconFunc""
     ""RequestQuikBuy""
     ""ChangeAutoRevieState""
     ""PlayerRefuseRevive"" */

void __fastcall FUN_104faa60(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  code *pcStack_a4;
  char *pcStack_a0;
  code **ppcStack_9c;
  code ***pppcStack_98;
  code *pcStack_94;
  code **ppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code **ppcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  undefined4 ***pppuStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  undefined4 ***pppuStack_4c;
  undefined4 ***pppuStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  undefined4 ***pppuStack_34;
  undefined4 ***pppuStack_30;
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
  pppuStack_30 = (undefined4 ***)0x11dbe800;
  *(undefined4 *)(param_1 + 0x24) = 0;
  pppuStack_34 = (undefined4 ***)0x104faa9b;
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x104faaa8;
  FUN_104fbd90();
  if (((undefined4 ****)pppcStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppcStack_20 != (undefined4 ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x104faabe;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppuStack_34;
  pppcStack_3c = (code ***)0x11dbe7fd;
  pppuStack_40 = (undefined4 ***)0x11dbe7f0;
  pppuStack_44 = (undefined4 ***)0x104faade;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_104fb540;
  pppuStack_48 = &pppcStack_3c;
  pppuStack_4c = (undefined4 ***)0x104faaef;
  FUN_104fbcd0();
  if (((undefined4 ****)pppuStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppuStack_30 != (undefined4 ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    pppcStack_50 = (code ***)0x104fab05;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_4c = (undefined4 ***)0x11dbe7ec;
  pppcStack_50 = (code ***)0x11dbe7d8;
  pppcStack_54 = (code ***)0x104fab25;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)&LAB_104fb590;
  pppcStack_58 = (code ***)&pppuStack_4c;
  pppuStack_5c = (undefined4 ***)0x104fab36;
  FUN_104fbcd0();
  if (((code ****)pppuStack_40 != &pppcStack_54) && ((code ****)pppuStack_40 != (code ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x104fab4c;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppcStack_54;
  pppuStack_5c = (undefined4 ***)0x11dbe7d7;
  pppcStack_60 = (code ***)0x11dbe7c4;
  pppcStack_64 = (code ***)0x104fab6c;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&LAB_104fb5d0;
  pppuStack_68 = &pppuStack_5c;
  pppcStack_6c = (code ***)0x104fab7d;
  FUN_104fbcd0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x104fab93;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dbe85b;
  pppcStack_70 = (code ***)0x11dbe84c;
  pppcStack_74 = (code ***)0x104fabb3;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_104fb530;
  pppuStack_78 = &pppcStack_6c;
  pppcStack_7c = (code ***)0x104fabc4;
  FUN_104fbcd0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x104fabda;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dbe84a;
  ppcStack_80 = (code **)0x11dbe83c;
  ppcStack_84 = (code **)0x104fabfa;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_84 = (code **)FUN_104fb940;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x104fac0b;
  FUN_104fbcd0();
  if ((pppcStack_70 != &ppcStack_84) && (pppcStack_70 != (code ***)0x0)) {
    pppcStack_8c = pppcStack_70;
    ppcStack_90 = (code **)0x104fac21;
    FUN_10c3d5d0();
  }
  pppcStack_74 = &ppcStack_84;
  pppcStack_8c = (code ***)0x11dbe838;
  ppcStack_90 = (code **)0x11dbe824;
  pcStack_94 = (code *)0x104fac41;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_104fbac0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  ppcStack_9c = (code **)0x104fac52;
  FUN_104fbcd0();
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    ppcStack_9c = ppcStack_80;
    pcStack_a0 = (char *)0x104fac68;
    FUN_10c3d5d0();
  }
  ppcStack_84 = &pcStack_94;
  ppcStack_9c = (code **)0x11dbe822;
  pcStack_a0 = "PlayerRefuseRevive";
  pcStack_a4 = (code *)0x104fac88;
  ppcStack_80 = ppcStack_84;
  FUN_100b62c0();
  pcStack_a4 = FUN_104fbb00;
  FUN_104fbcd0(&ppcStack_9c);
  if ((ppcStack_90 != &pcStack_a4) && (ppcStack_90 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_90);
  }
  if (DAT_120308e8 != 0) {
    FUN_10d6ef80(&PTR_PTR_1201fa08);
  }
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 4))(&PTR_PTR_1201fa0c);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_104fcd10();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_104fcd60();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_104fcdb0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_104fce00();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_03);
      FUN_10d17870();
      FUN_104fce50();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107ca920 @ 107ca920  size=134 ===== */
// calls: CHubEntryConfigKingQuestInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CHubEntryConfigKingQuestInfo"

/* [RE-AUTO c0]
   calls: CHubEntryConfigKingQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigKingQuestInfo"" */

undefined4 FUN_107ca920(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc85b8;
  puVar1 = (undefined4 *)CHubEntryConfigKingQuestInfo__GetInfoManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CHubEntryConfigKingQuestInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123beb2c & 1) == 0) {
        DAT_123beb2c = DAT_123beb2c | 1;
        FUN_107d5530();
        FUN_11a8911f(&LAB_11c70ab0);
      }
      puVar1 = &DAT_123beb30;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_107ca9b0 @ 107ca9b0  size=109 ===== */
// calls: CHubEntryConfigKingQuestInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CHubEntryConfigKingQuestInfo"

/* [RE-AUTO c0]
   calls: CHubEntryConfigKingQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigKingQuestInfo"" */

void FUN_107ca9b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc85b8;
  puVar1 = (undefined4 *)CHubEntryConfigKingQuestInfo__GetInfoManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CHubEntryConfigKingQuestInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123beb2c & 1) == 0) {
        DAT_123beb2c = DAT_123beb2c | 1;
        FUN_107d5530();
        FUN_11a8911f(&LAB_11c70ab0);
      }
      piVar2 = &DAT_123beb30;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_107cab60 @ 107cab60  size=134 ===== */
// calls: CHubEntryConfigLetterQuestInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CHubEntryConfigLetterQuestInfo"

/* [RE-AUTO c0]
   calls: CHubEntryConfigLetterQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigLetterQuestInfo"" */

undefined4 FUN_107cab60(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc85c0;
  puVar1 = (undefined4 *)CHubEntryConfigLetterQuestInfo__GetInfoManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CHubEntryConfigLetterQuestInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123beaf0 & 1) == 0) {
        DAT_123beaf0 = DAT_123beaf0 | 1;
        FUN_107d55d0();
        FUN_11a8911f(&LAB_11c70a50);
      }
      puVar1 = &DAT_123beaf4;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_107cabf0 @ 107cabf0  size=109 ===== */
// calls: CHubEntryConfigLetterQuestInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CHubEntryConfigLetterQuestInfo"

/* [RE-AUTO c0]
   calls: CHubEntryConfigLetterQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigLetterQuestInfo"" */

void FUN_107cabf0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc85c0;
  puVar1 = (undefined4 *)CHubEntryConfigLetterQuestInfo__GetInfoManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CHubEntryConfigLetterQuestInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123beaf0 & 1) == 0) {
        DAT_123beaf0 = DAT_123beaf0 | 1;
        FUN_107d55d0();
        FUN_11a8911f(&LAB_11c70a50);
      }
      piVar2 = &DAT_123beaf4;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_107cbc00 @ 107cbc00  size=1408 ===== */
// calls: CHubEntryConfigInfo::GetInfoManagerSingleton, CInfoManager::FindByName, CHubEntryConfigInfo::MatchEntry, CHubEntryConfigKingQuestInfo::GetInfoManager, memcpy, CHubEntryRaidConfigInfo::GetManager, CHubEntryConfigLetterQuestInfo::GetInfoManager
// strings:
//   "CHubEntryConfigInfo"
//   "CHubEntryConfigKingQuestInfo"
//   "CHubEntryRaidConfigInfo"
//   "CHubEntryConfigLetterQuestInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CHubEntryConfigInfo::GetManagers, CHubEntryConfigKingQuestInfo::GetManagers, memcpy,
   CHubEntryRaidConfigInfo::GetManagers, CHubEntryConfigLetterQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigInfo""
     ""CHubEntryConfigKingQuestInfo""
     ""CHubEntryRaidConfigInfo""
     ""CHubEntryConfigLetterQuestInfo"" */

void __fastcall FUN_107cbc00(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  size_t sVar12;
  undefined **local_28;
  undefined1 local_24 [16];
  undefined **local_14;
  undefined **local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar11 = 0;
  while( true ) {
    local_28 = &PTR_FUN_11dc85a8;
    puVar4 = (undefined4 *)CHubEntryConfigInfo__GetInfoManagerSingleton();
    piVar5 = (int *)*puVar4;
    if ((piVar5 == (int *)0x0) &&
       (piVar5 = (int *)CInfoManager__FindByName(&local_28,"CHubEntryConfigInfo",0),
       piVar5 == (int *)0x0)) {
      if ((DAT_123beba4 & 1) == 0) {
        DAT_123bebac = 0;
        DAT_123bebbc = 0;
        DAT_123bebc0 = 0;
        _DAT_123bebc4 = 0;
        DAT_123bebc8 = 0;
        DAT_123beba4 = DAT_123beba4 | 1;
        DAT_123beba8 = &PTR_FUN_11dc88c8;
        DAT_123bebcc = _DAT_11de9ae0;
        DAT_123bebd0 = _UNK_11de9ae4;
        uRam123bebd4 = _UNK_11de9ae8;
        DAT_123bebd8 = _UNK_11de9aec;
        DAT_123bebdc = 1;
        DAT_123bebb0 = piVar5;
        _DAT_123bebb4 = piVar5;
        _DAT_123bebb8 = piVar5;
        FUN_11a8911f(&LAB_11c70bd0);
      }
      piVar5 = (int *)&DAT_123beba8;
    }
    local_28 = &PTR_FUN_11da54a8;
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    if (iVar6 <= iVar11) {
      iVar11 = 0;
      goto LAB_107cbd70;
    }
    FUN_107ca3d0(iVar11);
    iVar6 = CHubEntryConfigInfo__MatchEntry(param_2);
    if (((iVar6 != 0) && (iVar6 = FUN_107d7930(*(undefined4 *)(iVar6 + 0x28)), iVar6 != 0)) &&
       (iVar6 = FUN_107caf90(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) break;
    iVar11 = iVar11 + 1;
  }
  local_14 = (undefined **)local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  param_1[4] = param_1;
  param_1[5] = param_1;
  ppuVar9 = local_10;
  do {
    cVar2 = *(char *)ppuVar9;
    ppuVar9 = (undefined **)((int)ppuVar9 + 1);
  } while (cVar2 != '\0');
LAB_107cbd29:
  FUN_100b62c0(local_10,(char *)((int)ppuVar9 + -1));
LAB_107cbd37:
  if ((local_10 != (undefined **)local_24) && (local_10 != (undefined **)0x0)) {
    FUN_10c3d5d0(local_10);
    FUN_11a89daa();
    return;
  }
LAB_107cc193:
  FUN_11a89daa();
  return;
LAB_107cbd70:
  local_28 = &PTR_FUN_11dc85b8;
  puVar4 = (undefined4 *)CHubEntryConfigKingQuestInfo__GetInfoManager();
  piVar5 = (int *)*puVar4;
  if ((piVar5 == (int *)0x0) &&
     (piVar5 = (int *)CInfoManager__FindByName(&local_28,"CHubEntryConfigKingQuestInfo",0),
     piVar5 == (int *)0x0)) {
    if ((DAT_123beb2c & 1) == 0) {
      DAT_123beb34 = 0;
      DAT_123beb44 = 0;
      DAT_123beb48 = 0;
      _DAT_123beb4c = 0;
      uRam123beb50 = 0;
      DAT_123beb2c = DAT_123beb2c | 1;
      DAT_123beb30 = &PTR_FUN_11dc8798;
      _DAT_123beb54 = _DAT_11de9ae0;
      uRam123beb58 = _UNK_11de9ae4;
      uRam123beb5c = _UNK_11de9ae8;
      uRam123beb60 = _UNK_11de9aec;
      DAT_123beb64 = 1;
      DAT_123beb38 = piVar5;
      _DAT_123beb3c = piVar5;
      _DAT_123beb40 = piVar5;
      FUN_11a8911f(&LAB_11c70ab0);
    }
    piVar5 = (int *)&DAT_123beb30;
  }
  local_28 = &PTR_FUN_11da54a8;
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  if (iVar6 <= iVar11) {
    iVar11 = 0;
    goto LAB_107cbee0;
  }
  FUN_107ca920(iVar11);
  iVar6 = FUN_107ca8b0(param_2);
  if (((iVar6 != 0) && (iVar6 = FUN_107d7930(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) &&
     (iVar6 = FUN_107caf90(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) goto LAB_107cbe4e;
  iVar11 = iVar11 + 1;
  goto LAB_107cbd70;
LAB_107cbee0:
  local_28 = &PTR_FUN_11dc8588;
  puVar4 = (undefined4 *)CHubEntryRaidConfigInfo__GetManager();
  piVar5 = (int *)*puVar4;
  if ((piVar5 == (int *)0x0) &&
     (piVar5 = (int *)CInfoManager__FindByName(&local_28,"CHubEntryRaidConfigInfo",0),
     piVar5 == (int *)0x0)) {
    if ((DAT_123bea00 & 1) == 0) {
      DAT_123bea08 = 0;
      DAT_123bea18 = 0;
      DAT_123bea1c = 0;
      _DAT_123bea20 = 0;
      uRam123bea24 = 0;
      DAT_123bea00 = DAT_123bea00 | 1;
      DAT_123bea04 = &PTR_FUN_11dc8700;
      _DAT_123bea28 = _DAT_11de9ae0;
      uRam123bea2c = _UNK_11de9ae4;
      uRam123bea30 = _UNK_11de9ae8;
      uRam123bea34 = _UNK_11de9aec;
      DAT_123bea38 = 1;
      DAT_123bea0c = piVar5;
      _DAT_123bea10 = piVar5;
      _DAT_123bea14 = piVar5;
      FUN_11a8911f(&LAB_11c709f0);
    }
    piVar5 = (int *)&DAT_123bea04;
  }
  local_28 = &PTR_FUN_11da54a8;
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  if (iVar6 <= iVar11) {
    iVar11 = 0;
    goto LAB_107cc070;
  }
  FUN_107cadb0(iVar11);
  iVar6 = FUN_107cad30(param_2);
  if (((iVar6 != 0) && (iVar6 = FUN_107d7930(*(undefined4 *)(iVar6 + 0x28)), iVar6 != 0)) &&
     (iVar6 = FUN_107caf90(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) goto LAB_107cbfc2;
  iVar11 = iVar11 + 1;
  goto LAB_107cbee0;
LAB_107cc070:
  local_28 = &PTR_FUN_11dc85c0;
  puVar4 = (undefined4 *)CHubEntryConfigLetterQuestInfo__GetInfoManager();
  piVar5 = (int *)*puVar4;
  if ((piVar5 == (int *)0x0) &&
     (piVar5 = (int *)CInfoManager__FindByName(&local_28,"CHubEntryConfigLetterQuestInfo",0),
     piVar5 == (int *)0x0)) {
    if ((DAT_123beaf0 & 1) == 0) {
      DAT_123beaf8 = 0;
      DAT_123beb08 = 0;
      DAT_123beb0c = 0;
      _DAT_123beb10 = 0;
      uRam123beb14 = 0;
      DAT_123beaf0 = DAT_123beaf0 | 1;
      DAT_123beaf4 = &PTR_FUN_11dc8830;
      _DAT_123beb18 = _DAT_11de9ae0;
      uRam123beb1c = _UNK_11de9ae4;
      uRam123beb20 = _UNK_11de9ae8;
      uRam123beb24 = _UNK_11de9aec;
      DAT_123beb28 = 1;
      DAT_123beafc = piVar5;
      _DAT_123beb00 = piVar5;
      _DAT_123beb04 = piVar5;
      FUN_11a8911f(&LAB_11c70a50);
    }
    piVar5 = (int *)&DAT_123beaf4;
  }
  local_28 = &PTR_FUN_11da54a8;
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  if (iVar6 <= iVar11) {
    param_1[4] = param_1;
    param_1[5] = param_1;
    FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
    goto LAB_107cc193;
  }
  FUN_107cab60(iVar11);
  iVar6 = FUN_107caaf0(param_2);
  if (((iVar6 != 0) && (iVar6 = FUN_107d7930(*(undefined4 *)(iVar6 + 0x10)), iVar6 != 0)) &&
     (iVar6 = FUN_107caf90(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) goto LAB_107cc14a;
  iVar11 = iVar11 + 1;
  goto LAB_107cc070;
LAB_107cc14a:
  local_14 = (undefined **)local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  param_1[4] = param_1;
  param_1[5] = param_1;
  ppuVar9 = local_10;
  do {
    cVar2 = *(char *)ppuVar9;
    ppuVar9 = (undefined **)((int)ppuVar9 + 1);
  } while (cVar2 != '\0');
  goto LAB_107cbd29;
LAB_107cbfc2:
  local_14 = (undefined **)local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  param_1[4] = param_1;
  param_1[5] = param_1;
  ppuVar9 = local_10;
  do {
    local_28 = ppuVar9;
    ppuVar9 = (undefined **)((int)local_28 + 1);
  } while (*(char *)local_28 != '\0');
  sVar12 = (int)local_28 - (int)local_10;
  uVar1 = sVar12 + 1;
  if (uVar1 == 0) goto LAB_107cc1a6;
  if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar1);
  }
  puVar8 = (undefined1 *)param_1[5];
  if (local_28 != local_10) {
    pvVar7 = memcpy(puVar8,local_10,sVar12);
    puVar8 = (undefined1 *)((int)pvVar7 + sVar12);
  }
  param_1[4] = puVar8;
  *puVar8 = 0;
  goto LAB_107cbd37;
LAB_107cbe4e:
  local_14 = (undefined **)local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  ppuVar9 = local_10;
  param_1[4] = param_1;
  param_1[5] = param_1;
  ppuVar3 = local_10;
  do {
    ppuVar10 = ppuVar3;
    ppuVar3 = (undefined **)((int)ppuVar10 + 1);
  } while (*(char *)ppuVar10 != '\0');
  sVar12 = (int)ppuVar10 - (int)local_10;
  local_28 = (undefined **)(sVar12 + 1);
  if (local_28 == (undefined **)0x0) {
LAB_107cc1a6:
                    /* WARNING: Subroutine does not return */
    FUN_100b73e0();
  }
  if (&DAT_00000010 < local_28) {
    iVar11 = FUN_100b6d60(local_28,&local_28);
    param_1[4] = iVar11;
    param_1[5] = iVar11;
    *param_1 = (char *)((int)local_28 + iVar11);
  }
  puVar8 = (undefined1 *)param_1[5];
  if (ppuVar10 != ppuVar9) {
    pvVar7 = memcpy(puVar8,ppuVar9,sVar12);
    puVar8 = (undefined1 *)((int)pvVar7 + sVar12);
  }
  param_1[4] = puVar8;
  *puVar8 = 0;
  goto LAB_107cbd37;
}



/* ===== FUN_107e1d80 @ 107e1d80  size=1634 ===== */
// strings:
//   "InitModel"
//   "HasOperationActivityNew"
//   "RequestOPSimpleData"
//   "_getSimpleData"
//   "C2AS_Download"
//   "C2AS_IsFileDownloaded"
//   "C2AS_GetFileSavePath"
//   "C2AS_RequestExeByEntryId"
//   "C2AS_LevelMatch"
//   "C2AS_LevelStart"
//   "C2AS_IsCheckNeverPopToday"
//   "C2AS_SetNeverPopToday"
//   "C2AS_OpenBuyVipView"
//   "GetActivityNoticeStatus"
//   "GetActivityNoticeStatusByID"
//   "ReadOperationActiviyPage"
//   "LogStarHunterOption"
//   "s_loginIngameEachDay"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""HasOperationActivityNew""
     ""RequestOPSimpleData""
     ""_getSimpleData""
     ""C2AS_Download""
     ""C2AS_IsFileDownloaded""
     ""C2AS_GetFileSavePath""
     ""C2AS_RequestExeByEntryId""
     ""C2AS_LevelMatch""
     ""C2AS_LevelStart"" */

void __fastcall FUN_107e1d80(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 ****unaff_EDI;
  code ***pppcStack_134;
  code **ppcStack_130;
  code *pcStack_12c;
  char *pcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code *pcStack_11c;
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
  code ***pppcStack_f0;
  code **ppcStack_ec;
  char *pcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code **ppcStack_dc;
  char *pcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code **ppcStack_cc;
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
  char *pcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  undefined4 **ppuStack_6c;
  char *pcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code **ppcStack_5c;
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
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined4 ***local_14;
  undefined4 ***local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  piVar2 = *(int **)(DAT_1202e818 + 0x58);
  if (piVar2 != (int *)0x0) {
    pppuStack_34 = &local_24;
    pcStack_38 = (char *)0x107e1dae;
    iVar1 = FUN_107e5ba0();
    pcStack_38 = (char *)0x0;
    ppuStack_3c = *(undefined4 ***)(iVar1 + 0x14);
    pppuStack_40 = (undefined4 ***)0x107e1dbd;
    (**(code **)(*piVar2 + 0xfc))();
    if (((undefined4 ****)local_10 != &local_24) &&
       ((undefined4 ****)local_10 != (undefined4 ****)0x0)) {
      pppuStack_34 = local_10;
      pcStack_38 = (char *)0x107e1dd3;
      FUN_10c3d5d0();
    }
  }
  local_14 = &local_24;
  pppuStack_34 = (undefined4 ***)0x11dbd585;
  pcStack_38 = "InitModel";
  ppuStack_3c = (code ***)0x107e1df3;
  local_10 = local_14;
  FUN_100b62c0();
  ppuStack_3c = (undefined4 **)FUN_107e2430;
  pppuStack_40 = (undefined4 ***)&stack0xffffffd4;
  pppuStack_44 = (undefined4 ***)0x107e1e04;
  FUN_107e70f0();
  if (((undefined4 ****)pppuStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppuStack_20 != (undefined4 ****)0x0)) {
    pppuStack_44 = pppuStack_20;
    pcStack_48 = (char *)0x107e1e1a;
    FUN_10c3d5d0();
  }
  local_24 = &pppuStack_34;
  pppuStack_44 = (undefined4 ***)0x11dc993b;
  pcStack_48 = "HasOperationActivityNew";
  ppcStack_4c = (code **)0x107e1e3a;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  ppcStack_4c = (code **)FUN_107e5a60;
  pppuStack_50 = &ppuStack_3c;
  pppuStack_54 = (undefined4 ***)0x107e1e4b;
  FUN_107e70f0();
  if ((unaff_EDI != &pppuStack_44) && (unaff_EDI != (undefined4 ****)0x0)) {
    pcStack_58 = (char *)0x107e1e61;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_54 = (undefined4 ***)0x11dc99b3;
  pcStack_58 = "RequestOPSimpleData";
  ppcStack_5c = (code **)0x107e1e81;
  FUN_100b62c0();
  ppcStack_5c = (code **)&DAT_107e4e80;
  pppcStack_60 = &ppcStack_4c;
  pppcStack_64 = (code ***)0x107e1e92;
  FUN_107e70f0();
  if (((undefined4 ****)pppuStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0)) {
    pppcStack_64 = (code ***)pppuStack_40;
    pcStack_68 = (char *)0x107e1ea8;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppuStack_54;
  pppcStack_64 = (code ***)0x11dc999e;
  pcStack_68 = "_getSimpleData";
  ppuStack_6c = (code ***)0x107e1ec8;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  ppuStack_6c = (undefined4 **)FUN_107e5120;
  pppcStack_70 = &ppcStack_5c;
  pppcStack_74 = (code ***)0x107e1ed9;
  FUN_107e70f0();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppcStack_74 = (code ***)pppuStack_50;
    pcStack_78 = (char *)0x107e1eef;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppcStack_74 = (code ***)0x11dc98ed;
  pcStack_78 = "C2AS_Download";
  ppcStack_7c = (code **)0x107e1f0f;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  ppcStack_7c = (code **)FUN_107e6800;
  pppuStack_80 = &ppuStack_6c;
  pppcStack_84 = (code ***)0x107e1f20;
  FUN_107e70f0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_84 = pppcStack_60;
    pcStack_88 = (char *)0x107e1f36;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_84 = (code ***)0x11dc98dd;
  pcStack_88 = "C2AS_IsFileDownloaded";
  ppcStack_8c = (code **)0x107e1f56;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_8c = (code **)FUN_107e6930;
  pppcStack_90 = &ppcStack_7c;
  pppcStack_94 = (code ***)0x107e1f67;
  FUN_107e70f0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_94 = pppcStack_70;
    pcStack_98 = (char *)0x107e1f7d;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_94 = (code ***)0x11dc9920;
  pcStack_98 = "C2AS_GetFileSavePath";
  ppcStack_9c = (code **)0x107e1f9d;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  ppcStack_9c = (code **)FUN_107e6a20;
  pppcStack_a0 = &ppcStack_8c;
  pppcStack_a4 = (code ***)0x107e1fae;
  FUN_107e70f0();
  if (((code ****)pppuStack_80 != &pppcStack_94) && ((code ****)pppuStack_80 != (code ****)0x0)) {
    pppcStack_a4 = (code ***)pppuStack_80;
    pcStack_a8 = (char *)0x107e1fc4;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_a4 = (code ***)0x11dc9908;
  pcStack_a8 = "C2AS_RequestExeByEntryId";
  ppcStack_ac = (code **)0x107e1fe4;
  pppuStack_80 = (undefined4 ***)pppcStack_84;
  FUN_100b62c0();
  ppcStack_ac = (code **)FUN_107e6af0;
  pppcStack_b0 = &ppcStack_9c;
  pppcStack_b4 = (code ***)0x107e1ff5;
  FUN_107e70f0();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_b4 = pppcStack_90;
    pcStack_b8 = (char *)0x107e200b;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_b4 = (code ***)0x11dc9a37;
  pcStack_b8 = "C2AS_LevelMatch";
  ppcStack_bc = (code **)0x107e202b;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  ppcStack_bc = (code **)FUN_107e6bc0;
  pppcStack_c0 = &ppcStack_ac;
  pppcStack_c4 = (code ***)0x107e203c;
  FUN_107e70f0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_c4 = pppcStack_a0;
    pcStack_c8 = (char *)0x107e2052;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_c4 = (code ***)0x11dc9a27;
  pcStack_c8 = "C2AS_LevelStart";
  ppcStack_cc = (code **)0x107e2072;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  ppcStack_cc = (code **)FUN_107e6c60;
  pppcStack_d0 = &ppcStack_bc;
  pppcStack_d4 = (code ***)0x107e2083;
  FUN_107e70f0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_d4 = pppcStack_b0;
    pcStack_d8 = (char *)0x107e2099;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_d4 = (code ***)0x11dc9a69;
  pcStack_d8 = "C2AS_IsCheckNeverPopToday";
  ppcStack_dc = (code **)0x107e20b9;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  ppcStack_dc = (code **)FUN_107e6ce0;
  pppcStack_e0 = &ppcStack_cc;
  pppcStack_e4 = (code ***)0x107e20ca;
  FUN_107e70f0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_e4 = pppcStack_c0;
    pcStack_e8 = (char *)0x107e20e0;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_e4 = (code ***)0x11dc9a4d;
  pcStack_e8 = "C2AS_SetNeverPopToday";
  ppcStack_ec = (code **)0x107e2100;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  ppcStack_ec = (code **)FUN_107e6d60;
  pppcStack_f0 = &ppcStack_dc;
  pppcStack_f4 = (code ***)0x107e2111;
  FUN_107e70f0();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d0;
    pcStack_f8 = (char *)0x107e2127;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_f4 = (code ***)0x11dc99df;
  pcStack_f8 = "C2AS_OpenBuyVipView";
  ppcStack_fc = (code **)0x107e2147;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  ppcStack_fc = (code **)FUN_107e6da0;
  pppcStack_100 = &ppcStack_ec;
  pppcStack_104 = (code ***)0x107e2158;
  FUN_107e70f0();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_104 = pppcStack_e0;
    pcStack_108 = (char *)0x107e216e;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_104 = (code ***)0x11dc99cb;
  pcStack_108 = "GetActivityNoticeStatus";
  ppcStack_10c = (code **)0x107e218e;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  ppcStack_10c = (code **)FUN_107e54c0;
  pppcStack_110 = &ppcStack_fc;
  pppcStack_114 = (code ***)0x107e219f;
  FUN_107e70f0();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_114 = pppcStack_f0;
    pcStack_118 = (char *)0x107e21b5;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_114 = (code ***)0x11dc9a17;
  pcStack_118 = "GetActivityNoticeStatusByID";
  pcStack_11c = (code *)0x107e21d5;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pcStack_11c = FUN_107e5950;
  pppcStack_120 = &ppcStack_10c;
  pppcStack_124 = (code ***)0x107e21e6;
  FUN_107e70f0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_124 = pppcStack_100;
    pcStack_128 = (char *)0x107e21fc;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_124 = (code ***)0x11dc99f8;
  pcStack_128 = "ReadOperationActiviyPage";
  pcStack_12c = (code *)0x107e221c;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pcStack_12c = FUN_107e5780;
  ppcStack_130 = &pcStack_11c;
  pppcStack_134 = (code ***)0x107e222d;
  FUN_107e70f0();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_134 = pppcStack_110;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_134 = (code ***)0x11dc9adf;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0("LogStarHunterOption");
  FUN_107e70f0(&pcStack_12c,FUN_107e5850);
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    FUN_10c3d5d0(pppcStack_120);
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_107e8ba0(param_1,extraout_ECX);
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_107e8bf0(param_1,extraout_ECX_00);
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_107e8c40(param_1,extraout_ECX_01);
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_107e8c90(param_1,extraout_ECX_02);
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_107e8ce0(param_1,extraout_ECX_03);
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_04);
      FUN_10d17870();
      FUN_107e8d30();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_05);
      FUN_10d17870();
      FUN_107e8d80();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_06);
      FUN_10d17870();
      FUN_107e8dd0();
    }
  }
  if (*(int **)(DAT_1202e818 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x18))
              ("s_loginIngameEachDay",param_1 + 0x24,1,0x100,0,0,1);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107e2430 @ 107e2430  size=422 ===== */
// strings:
//   "_OpenInternalAddress"
//   "_RequestExeByUniqueID"
//   "_RequestOPSimpleData"
//   "_RequestOPDetailInfo"
//   "_getOnlineTimeFunc"

/* [RE-AUTO c0]
   strings:
     ""_OpenInternalAddress""
     ""_RequestExeByUniqueID""
     ""_RequestOPSimpleData""
     ""_RequestOPDetailInfo""
     ""_getOnlineTimeFunc"" */

void FUN_107e2430(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  byte unaff_SI;
  int *piVar1;
  undefined4 uStack_54;
  int *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  local_50 = (int *)0x0;
  local_4c = param_4[1];
  local_44 = param_4[3];
  local_48 = param_4[2];
  local_40 = param_4[4];
  if ((local_4c >> 6 & 1) != 0) {
    local_50 = (int *)*param_4;
    (**(code **)(*local_50 + 4))(&local_50,local_48);
  }
  local_34 = param_4[7];
  local_2c = param_4[9];
  local_30 = param_4[8];
  local_28 = param_4[10];
  local_38 = (int *)0x0;
  if ((local_34 >> 6 & 1) != 0) {
    local_38 = (int *)param_4[6];
    (**(code **)(*local_38 + 4))(&local_38,local_30);
  }
  FUN_104d13b0("_OpenInternalAddress",FUN_107e27c0);
  FUN_104d13b0("_RequestExeByUniqueID",FUN_107e2900);
  if (param_2 != 0) {
    piVar1 = (int *)&DAT_107e2990;
    piStack_20 = (int *)0x0;
    uStack_1c = 0;
    FUN_11a98b50(&piStack_20,&PTR_PTR_1201fa00);
    (**(code **)(*piVar1 + 0x14))
              (uStack_54,"_RequestOPSimpleData",&local_2c,(unaff_SI & 0x8f) == 10);
    if ((uStack_1c >> 6 & 1) != 0) {
      (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
    }
  }
  FUN_104d13b0("_RequestOPDetailInfo",FUN_107e29a0);
  FUN_104d13b0("_getOnlineTimeFunc",FUN_107e5ae0);
  if ((local_34 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 8))(&local_38,local_30);
    local_38 = (int *)0x0;
  }
  local_34 = 0;
  if ((local_4c >> 6 & 1) != 0) {
    (**(code **)(*local_50 + 8))(&local_50,local_48);
  }
  return;
}



/* ===== FUN_107eb990 @ 107eb990  size=162 ===== */
// calls: CTaskChapterInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CTaskChapterInfo"

/* [RE-AUTO c0]
   calls: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo"" */

undefined4 __fastcall FUN_107eb990(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcaee4;
  puVar2 = (undefined4 *)CTaskChapterInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CTaskChapterInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bf11c & 1) == 0) {
        DAT_123bf11c = DAT_123bf11c | 1;
        FUN_10805fe0();
        FUN_11a8911f(&LAB_11c718b0);
      }
      puVar2 = &DAT_123bf0e4;
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



/* ===== FUN_107eba40 @ 107eba40  size=134 ===== */
// calls: CTaskChapterInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CTaskChapterInfo"

/* [RE-AUTO c0]
   calls: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo"" */

undefined4 FUN_107eba40(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcaee4;
  puVar1 = (undefined4 *)CTaskChapterInfo__GetInfoManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CTaskChapterInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bf11c & 1) == 0) {
        DAT_123bf11c = DAT_123bf11c | 1;
        FUN_10805fe0();
        FUN_11a8911f(&LAB_11c718b0);
      }
      puVar1 = &DAT_123bf0e4;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_107ebad0 @ 107ebad0  size=109 ===== */
// calls: CTaskChapterInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CTaskChapterInfo"

/* [RE-AUTO c0]
   calls: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo"" */

void FUN_107ebad0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcaee4;
  puVar1 = (undefined4 *)CTaskChapterInfo__GetInfoManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CTaskChapterInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123bf11c & 1) == 0) {
        DAT_123bf11c = DAT_123bf11c | 1;
        FUN_10805fe0();
        FUN_11a8911f(&LAB_11c718b0);
      }
      piVar2 = &DAT_123bf0e4;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
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



/* ===== FUN_107edd80 @ 107edd80  size=202 ===== */
// strings:
//   "QuestTraceUIMouseEnable"

/* [RE-AUTO c0]
   strings:
     ""QuestTraceUIMouseEnable"" */

void FUN_107edd80(undefined1 param_1)

{
  uint uVar1;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  
  local_18 = CONCAT31(local_18._1_3_,param_1);
  local_20 = (int *)0x0;
  uVar1 = DAT_123bcea4 & 0x8f;
  local_1c = 2;
  local_38 = (int *)0x0;
  local_34 = 0;
  if (((uVar1 == 8) || (uVar1 == 9)) || (uVar1 == 10)) {
    (**(code **)(*DAT_123bcea0 + 0x18))
              (DAT_123bcea8,&local_38,"QuestTraceUIMouseEnable",&local_20,1,uVar1 == 10);
  }
  if ((local_34 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 8))(&local_38,local_30);
    local_38 = (int *)0x0;
  }
  local_34 = 0;
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_107ee600 @ 107ee600  size=2405 ===== */
// strings:
//   "accepted_tasks_list"
//   "TASK_TASKDATA_CLASS_NAME"
//   "quest_id"
//   "level"
//   "questStatus"
//   "taskName"
//   "groupName"
//   "curStage"
//   "totalStage"
//   "groupType"
//   "group_id"
//   "bTracked"
//   "canShared"
//   "history_tasks_list"
//   "TASKHISTORY_CHAPTER_CLASS_NAME"
//   "TASKHISTORY_GROUP_CLASS_NAME"
//   "ChapterID"
//   "sourceR"
//   "describe"
//   "levelMin"

/* [RE-AUTO c0]
   strings:
     ""accepted_tasks_list""
     ""TASK_TASKDATA_CLASS_NAME""
     ""quest_id""
     ""level""
     ""questStatus""
     ""taskName""
     ""groupName""
     ""curStage""
     ""totalStage""
     ""groupType"" */

void FUN_107ee600(void)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  char *unaff_EBX;
  uint uVar11;
  int *piVar12;
  undefined4 unaff_EDI;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int **ppiVar13;
  undefined1 *puVar14;
  char *pcStack_13c;
  undefined4 *puStack_138;
  int **ppiStack_134;
  char *pcStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int **ppiStack_120;
  int *piStack_11c;
  undefined3 uVar15;
  int *local_10c;
  undefined4 uStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int **ppiStack_e4;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int **ppiStack_bc;
  int *piStack_b8;
  int *piStack_ac;
  int *local_a8;
  int *local_a4;
  int *piStack_a0;
  undefined4 auStack_9c [3];
  int *local_90;
  uint local_8c;
  int *piStack_88;
  undefined4 uStack_80;
  int *piStack_7c;
  int iStack_74;
  int *piStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int *piStack_64;
  char acStack_60 [4];
  int **ppiStack_5c;
  undefined1 *puStack_54;
  int **ppiStack_50;
  byte abStack_4c [4];
  undefined1 auStack_48 [4];
  char acStack_44 [4];
  int *piStack_40;
  undefined4 uStack_3c;
  byte *pbStack_38;
  undefined1 *puStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_10c;
  if (in_stack_00000014 != 1) goto LAB_107eef50;
  local_e0 = (int *)0x0;
  local_dc = in_stack_00000010[1];
  local_d4 = (int *)in_stack_00000010[3];
  local_d8 = (int *)in_stack_00000010[2];
  local_d0 = (int *)in_stack_00000010[4];
  if ((local_dc >> 6 & 1) != 0) {
    local_e0 = (int *)*in_stack_00000010;
    ppiStack_120 = &local_e0;
    piStack_124 = (int *)0x107ee66a;
    piStack_11c = local_d8;
    (**(code **)(*local_e0 + 4))();
  }
  DAT_123bb96a = 1;
  if (DAT_123bb99c != (int *)0x0) {
    local_90 = (int *)0x0;
    local_8c = 0;
    local_a8 = (int *)0x0;
    local_a4 = (int *)0x0;
    uVar15 = (undefined3)((uint)unaff_EDI >> 8);
    if (DAT_1200acbc == 1) {
      ppiStack_120 = &local_a8;
      local_10c = (int *)CONCAT31(local_10c._1_3_,((byte)local_dc & 0x8f) == 10);
      piStack_11c = local_10c;
      piStack_124 = (int *)0x11dca638;
      piStack_128 = local_d8;
      piStack_12c = (undefined4 *)0x107ee6df;
      cVar1 = (**(code **)(*local_e0 + 0x10))();
      if (cVar1 != '\0') {
        piStack_11c = (int *)0xffffffff;
        ppiStack_120 = (int **)0x0;
        piStack_124 = piStack_a0;
        piStack_128 = (int *)0x107ee6fb;
        (**(code **)(*local_a8 + 0x44))();
        piStack_12c = auStack_9c;
        piStack_128 = (int *)CONCAT31(uVar15,((byte)piStack_e8 & 0x8f) == 10);
        pcStack_130 = "TASK_TASKDATA_CLASS_NAME";
        ppiStack_134 = ppiStack_e4;
        puStack_138 = (undefined4 *)0x107ee72b;
        cVar1 = (**(code **)(*piStack_ec + 0x10))();
        if ((cVar1 != '\0') && (((byte)local_8c & 0x8f) == 6)) {
          if ((local_8c >> 6 & 1) == 0) {
            piStack_104 = piStack_88;
          }
          else {
            piStack_104 = (int *)*piStack_88;
          }
          ppiStack_120 = &piStack_64;
          piStack_11c = (int *)0x5f7;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          piStack_124 = (int *)0x107ee7a4;
          piStack_124 = (int *)(**(code **)(*DAT_123bb99c + 0x48))();
          piStack_128 = (int *)0x107ee7ae;
          FUN_10804b60();
          if (piStack_70 != (int *)0x0) {
            piStack_128 = piStack_70;
            piStack_12c = (undefined4 *)0x107ee7bf;
            FUN_10c3d5d0();
          }
          if (local_d4 != local_d0) {
            uVar11 = 0;
            uVar10 = (uint)((int)local_d0 + (3 - (int)local_d4)) >> 2;
            if (local_d0 < local_d4) {
              uVar10 = 0;
            }
            piVar3 = local_d4;
            if (uVar10 != 0) {
              do {
                iVar8 = *piVar3;
                if (iVar8 != 0) {
                  piStack_128 = (int *)0x0;
                  piStack_12c = (undefined4 *)0x0;
                  ppiStack_134 = &local_10c;
                  puStack_138 = (undefined4 *)0x107ee813;
                  pcStack_130 = unaff_EBX;
                  FUN_11a98de0();
                  puStack_138 = *(undefined4 **)(*(int *)(iVar8 + 8) + 4);
                  pcStack_13c = "quest_id";
                  FUN_104d1550();
                  puStack_138 = &uStack_80;
                  pcStack_13c = (char *)0x107ee83b;
                  FUN_114f4840();
                  pcStack_13c = (char *)0x107ee842;
                  puVar4 = (undefined4 *)FUN_117c1280();
                  pcStack_13c = (char *)*puVar4;
                  FUN_104d1550("level");
                  FUN_104d1550("questStatus",*(undefined4 *)(iVar8 + 0x14));
                  pcStack_13c = acStack_60;
                  iVar5 = FUN_100e5b40();
                  FUN_104d1670("taskName",*(undefined4 *)(iVar5 + 0x14));
                  if ((ppiStack_50 != &piStack_64) && (ppiStack_50 != (int **)0x0)) {
                    FUN_10c3d5d0(ppiStack_50);
                  }
                  FUN_114f4840();
                  iVar5 = FUN_117c1760();
                  if (iVar5 != 0) {
                    FUN_114f4840();
                    FUN_117c1760();
                  }
                  iVar5 = FUN_100e5b40(&piStack_64);
                  FUN_104d1670("groupName",*(undefined4 *)(iVar5 + 0x14));
                  if ((puStack_54 != auStack_68) && (puStack_54 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_54);
                  }
                  FUN_104d1550("curStage",1);
                  FUN_104d1550("totalStage",1);
                  uVar6 = FUN_107f1d10();
                  FUN_104d1550("groupType",uVar6);
                  FUN_104d1550("group_id",*(undefined4 *)(*(int *)(iVar8 + 8) + 4));
                  FUN_104d15e0("bTracked",*(undefined1 *)(iVar8 + 0x1c));
                  FUN_104d15e0("canShared",*(undefined1 *)(*(int *)(iVar8 + 8) + 0x81));
                  (**(code **)(*local_d0 + 0x3c))(uStack_c8,&piStack_128);
                }
                piVar3 = piVar3 + 1;
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar10);
            }
          }
          if (local_d4 != (int *)0x0) {
            piStack_12c = (undefined4 *)0x107ee9e3;
            piStack_128 = local_d4;
            FUN_10c3d5d0();
          }
LAB_107eeed8:
          piStack_128 = (int *)0x107eeedd;
          FUN_104d7c10();
        }
      }
    }
    else if (DAT_1200acbc == 2) {
      ppiStack_120 = &local_a8;
      uStack_108 = 0;
      local_10c = (int *)CONCAT31(local_10c._1_3_,((byte)local_dc & 0x8f) == 10);
      piStack_11c = local_10c;
      piStack_124 = (int *)0x11dca684;
      piStack_128 = local_d8;
      piStack_12c = (undefined4 *)0x107eea2d;
      cVar1 = (**(code **)(*local_e0 + 0x10))();
      if (cVar1 != '\0') {
        piStack_11c = (int *)0xffffffff;
        ppiStack_120 = (int **)0x0;
        piStack_124 = piStack_a0;
        piStack_128 = (int *)0x107eea49;
        (**(code **)(*local_a8 + 0x44))();
        piStack_12c = auStack_9c;
        piStack_128 = (int *)CONCAT31(uVar15,((byte)piStack_e8 & 0x8f) == 10);
        pcStack_130 = "TASKHISTORY_CHAPTER_CLASS_NAME";
        ppiStack_134 = ppiStack_e4;
        puStack_138 = (undefined4 *)0x107eea79;
        cVar1 = (**(code **)(*piStack_ec + 0x10))();
        if ((cVar1 != '\0') && (((byte)local_8c & 0x8f) == 6)) {
          if ((local_8c >> 6 & 1) == 0) {
            piStack_ac = piStack_88;
          }
          else {
            piStack_ac = (int *)*piStack_88;
          }
          ppiStack_120 = &piStack_40;
          piStack_40 = (int *)0x0;
          uStack_3c = 0;
          local_10c = (int *)CONCAT31(local_10c._1_3_,((byte)local_dc & 0x8f) == 10);
          piStack_11c = local_10c;
          piStack_124 = (int *)0x11dca6a4;
          piStack_128 = local_d8;
          piStack_12c = (int *)0x107eeaf8;
          (**(code **)(*local_e0 + 0x10))();
          local_10c = (int *)0x0;
          piStack_12c = (int *)0x107eeb3e;
          iStack_74 = FUN_107ebad0();
          piStack_11c = (int *)0x0;
          if (0 < iStack_74) {
            do {
              piVar3 = piStack_11c;
              pcStack_130 = (char *)0x107eeb59;
              piStack_12c = piStack_11c;
              piVar7 = (int *)FUN_107eba40();
              piStack_7c = piVar7;
              if (piVar7 != (int *)0x0) {
                piStack_12c = (int *)0x107eeb74;
                cVar1 = FUN_107ee5b0();
                if (cVar1 != '\0') {
                  piStack_12c = (int *)0x0;
                  pcStack_130 = (char *)0x0;
                  ppiStack_134 = ppiStack_bc;
                  puStack_138 = (undefined4 *)&stack0xfffffef0;
                  pcStack_13c = (char *)0x107eeb90;
                  FUN_11a98de0();
                  pcStack_13c = (char *)0x107eeb97;
                  pcStack_13c = (char *)(**(code **)(*piVar7 + 0x18))();
                  FUN_104d1550("ChapterID");
                  FUN_104d1670("sourceR",*(undefined4 *)(piVar7[0xb] + 0x28));
                  pcStack_13c = acStack_44;
                  iVar8 = FUN_100e5b40();
                  FUN_104d1670(&DAT_11da7300,*(undefined4 *)(iVar8 + 0x14));
                  if ((puStack_34 != auStack_48) && (puStack_34 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_34);
                  }
                  puVar14 = auStack_48;
                  iVar8 = FUN_100e5b40(puVar14);
                  FUN_104d1670("describe",*(undefined4 *)(iVar8 + 0x14));
                  if ((pbStack_38 != abStack_4c) && (pbStack_38 != (byte *)0x0)) {
                    FUN_10c3d5d0(pbStack_38);
                  }
                  FUN_104d1550("levelMin",**(undefined4 **)(piVar7[0xb] + 0x10));
                  FUN_104d1550("levelMax",*(undefined4 *)(*(int *)(piVar7[0xb] + 0x10) + 4));
                  uStack_80 = 0;
                  piStack_7c = (int *)0x0;
                  uStack_f0 = 0;
                  local_90 = (int *)CONCAT31(local_90._1_3_,((byte)piStack_124 & 0x8f) == 10);
                  piStack_ec = (int *)0x0;
                  ppiVar13 = ppiStack_120;
                  piVar7 = local_90;
                  cVar1 = (**(code **)(*piStack_128 + 0x10))(ppiStack_120,"taskgroups",&uStack_80);
                  if (cVar1 != '\0') {
                    (**(code **)(*local_90 + 0x44))(piStack_88,0,0xffffffff);
                    puVar9 = (uint *)FUN_118a8960();
                    piStack_e8 = (int *)0x0;
                    piVar12 = (int *)*puVar9;
                    piStack_ac = (int *)((uint)((int)puVar9[1] + (3 - (int)piVar12)) >> 2);
                    if ((int *)puVar9[1] < piVar12) {
                      piStack_ac = (int *)0x0;
                    }
                    if (piStack_ac != (int *)0x0) {
                      do {
                        piVar3 = piVar7;
                        iVar8 = *piVar12;
                        piStack_11c = (int *)0x0;
                        pcStack_13c = (char *)0x0;
                        uVar2 = FUN_107ee460(&pcStack_13c);
                        local_a8 = (int *)CONCAT31(local_a8._1_3_,uVar2);
                        FUN_107ee4f0(&pcStack_13c);
                        if ((iVar8 != 0) && (0 < (int)piStack_11c)) {
                          FUN_11a98de0(&uStack_100,puVar14,0,0);
                          iVar5 = FUN_100e5b40(auStack_6c);
                          FUN_104d1670("txtTaskGroup",*(undefined4 *)(iVar5 + 0x14));
                          if ((ppiStack_5c != &piStack_70) && (ppiStack_5c != (int **)0x0)) {
                            FUN_10c3d5d0(ppiStack_5c);
                          }
                          FUN_104d1550("nTaskGroupID",*(undefined4 *)(*(int *)(iVar8 + 0x2c) + 4));
                          FUN_104d1550("curStage",pcStack_130);
                          FUN_104d1550("TotoalStage",ppiVar13);
                          FUN_104d15e0("IsComplete",ppiStack_bc);
                          uVar6 = (**(code **)(*piStack_b8 + 0x18))();
                          FUN_104d1550("nChapterID",uVar6);
                          (**(code **)(*local_a4 + 0x3c))(auStack_9c[0],&stack0xfffffeec);
                        }
                        piVar12 = piVar12 + 1;
                        piStack_e8 = (int *)((int)piStack_e8 + 1);
                        piVar7 = piVar3;
                      } while (piStack_e8 != piStack_ac);
                    }
                  }
                  (**(code **)(*local_e0 + 0x3c))(local_d8,&puStack_138);
                  FUN_104d7c10();
                  FUN_104d7c10();
                }
              }
              piStack_11c = (int *)((int)piVar3 + 1);
            } while ((int)piStack_11c < iStack_74);
          }
          piStack_12c = (undefined4 *)0x107eeed1;
          FUN_104d7c10();
          goto LAB_107eeed8;
        }
      }
    }
    if (((uint)local_a4 >> 6 & 1) != 0) {
      ppiStack_120 = &local_a8;
      piStack_11c = piStack_a0;
      piStack_124 = (int *)0x107eeefa;
      (**(code **)(*local_a8 + 8))();
      local_a8 = (int *)0x0;
    }
    local_a4 = (int *)0x0;
    if ((local_8c >> 6 & 1) != 0) {
      ppiStack_120 = &local_90;
      piStack_11c = piStack_88;
      piStack_124 = (int *)0x107eef33;
      (**(code **)(*local_90 + 8))();
    }
  }
  if ((local_dc >> 6 & 1) != 0) {
    ppiStack_120 = &local_e0;
    piStack_11c = local_d8;
    piStack_124 = (int *)0x107eef50;
    (**(code **)(*local_e0 + 8))();
  }
LAB_107eef50:
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



/* ===== FUN_107f0270 @ 107f0270  size=1361 ===== */
// strings:
//   "selectchapterrecall_chapterid"
//   "selectchapterrecall_groupid"
//   "history_task_groups"
//   "TASKHISTORY_CONTENT_CLASS_NAME"
//   "content"
//   "taskname"
//   "iscomplete"

/* [RE-AUTO c0]
   strings:
     ""selectchapterrecall_chapterid""
     ""selectchapterrecall_groupid""
     ""history_task_groups""
     ""TASKHISTORY_CONTENT_CLASS_NAME""
     ""content""
     ""taskname""
     ""iscomplete"" */

void FUN_107f0270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_EBX;
  byte unaff_SI;
  undefined4 *puVar7;
  int *unaff_EDI;
  byte bVar8;
  int **ppiVar9;
  int *piStack_cc;
  int *local_c8;
  uint local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 *local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  int *local_a0;
  uint local_9c;
  undefined4 uStack_98;
  int *local_88;
  uint local_84;
  undefined4 uStack_80;
  int *piStack_70;
  uint uStack_6c;
  undefined4 *apuStack_68 [3];
  undefined1 auStack_5c [4];
  int *local_58;
  uint local_54;
  undefined4 uStack_50;
  int *piStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [12];
  uint *puStack_28;
  uint *puStack_24;
  uint *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_cc;
  local_a4 = param_2;
  if (param_5 == 1) {
    local_c8 = (int *)0x0;
    local_c4 = param_4[1];
    local_bc = (int *)param_4[3];
    local_c0 = (int *)param_4[2];
    local_b8 = param_4[4];
    if ((local_c4 >> 6 & 1) != 0) {
      local_c8 = (int *)*param_4;
      (**(code **)(*local_c8 + 4))(&local_c8,local_c0);
    }
    local_58 = (int *)0x0;
    local_54 = 0;
    local_88 = (int *)0x0;
    local_84 = 0;
    local_a0 = (int *)0x0;
    local_9c = 0;
    local_ac = (undefined4 *)0x0;
    if ((local_c4 & 0x8f) != 1) {
      ppiVar9 = &local_88;
      bVar8 = 0x54;
      piVar5 = local_c0;
      (**(code **)(*local_c8 + 0x10))
                (local_c0,"selectchapterrecall_chapterid",ppiVar9,(local_c4 & 0x8f) == 10);
      (**(code **)(*unaff_EDI + 0x10))
                (unaff_EBX,"selectchapterrecall_groupid",apuStack_68,(unaff_SI & 0x8f) == 10);
      cVar2 = (**(code **)(*piVar5 + 0x10))
                        (ppiVar9,"history_task_groups",&local_c0,(bVar8 & 0x8f) == 10);
      if (cVar2 != '\0') {
        (**(code **)(*unaff_EBX + 0x44))(local_c8,0,0xffffffff);
      }
      iVar4 = FUN_107eb990();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_118a8960();
        puVar7 = (undefined4 *)*piVar5;
        puVar1 = (undefined4 *)piVar5[1];
        piStack_40 = (int *)0x0;
        uStack_3c = 0;
        piStack_70 = (int *)0x0;
        uStack_a8 = CONCAT31(uStack_a8._1_3_,((byte)local_c4 & 0x8f) == 10);
        uStack_6c = 0;
        cVar2 = (**(code **)(*local_c8 + 0x10))
                          (local_c0,"TASKHISTORY_CONTENT_CLASS_NAME",&piStack_70,uStack_a8);
        if ((cVar2 != '\0') && (((byte)uStack_6c & 0x8f) == 6)) {
          if ((uStack_6c >> 6 & 1) == 0) {
            local_ac = apuStack_68[0];
          }
          else {
            local_ac = (undefined4 *)*apuStack_68[0];
          }
        }
        if (puVar7 != puVar1) {
LAB_107f0496:
          piVar5 = (int *)(**(code **)(*(int *)*puVar7 + 0x18))();
          if (piVar5 != piStack_cc) goto code_r0x107f04a9;
          piVar6 = (int *)FUN_119d8a30();
          piVar5 = (int *)*piVar6;
          piVar6 = (int *)piVar6[1];
          piStack_cc = piVar6;
          if (piVar5 != piVar6) {
            do {
              if ((*piVar5 != 0) && (iVar4 = *(int *)(*piVar5 + 0x2c), iVar4 != 0)) {
                FUN_11a98de0(&piStack_40,local_ac,0,0);
                puStack_24 = (uint *)auStack_34;
                auStack_34[0] = 0;
                puStack_20 = puStack_24;
                FUN_100e5aa0(puStack_24);
                FUN_104d1670("content",puStack_24);
                if ((puStack_24 != &uStack_38) && (puStack_24 != (uint *)0x0)) {
                  FUN_10c3d5d0(puStack_24);
                }
                puStack_28 = &uStack_38;
                uStack_38 = uStack_38 & 0xffffff00;
                puStack_24 = puStack_28;
                FUN_100e5aa0(puStack_28);
                FUN_104d1670("taskname",puStack_28);
                if ((puStack_28 != &uStack_3c) && (puStack_28 != (uint *)0x0)) {
                  FUN_10c3d5d0(puStack_28);
                }
                uVar3 = (**(code **)(*DAT_123bb99c + 0x60))(*(undefined4 *)(iVar4 + 4));
                local_c4 = CONCAT31(local_c4._1_3_,uVar3);
                FUN_104d15e0("iscomplete",local_c4);
                (**(code **)(*local_bc + 0x3c))(uStack_b4,auStack_5c);
                piVar6 = piStack_cc;
              }
              piVar5 = piVar5 + 1;
            } while (piVar5 != piVar6);
          }
          if ((uStack_6c >> 6 & 1) != 0) {
            (**(code **)(*piStack_70 + 8))(&piStack_70,apuStack_68[0]);
            piStack_70 = (int *)0x0;
          }
          uStack_6c = 0;
          if ((uStack_3c >> 6 & 1) != 0) {
            (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
            piStack_40 = (int *)0x0;
          }
          uStack_3c = 0;
          goto joined_r0x107f07b5;
        }
LAB_107f04b8:
        if ((uStack_6c >> 6 & 1) != 0) {
          (**(code **)(*piStack_70 + 8))(&piStack_70,apuStack_68[0]);
          piStack_70 = (int *)0x0;
        }
        uStack_6c = 0;
        if ((uStack_3c >> 6 & 1) != 0) {
          (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
        }
      }
    }
joined_r0x107f07b5:
    if ((local_9c >> 6 & 1) != 0) {
      (**(code **)(*local_a0 + 8))(&local_a0,uStack_98);
      local_a0 = (int *)0x0;
    }
    local_9c = 0;
    if ((local_84 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 8))(&local_88,uStack_80);
      local_88 = (int *)0x0;
    }
    local_84 = 0;
    if ((local_54 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 8))(&local_58,uStack_50);
      local_58 = (int *)0x0;
    }
    local_54 = 0;
    if ((local_c4 >> 6 & 1) != 0) {
      (**(code **)(*local_c8 + 8))(&local_c8,local_c0);
    }
  }
  FUN_11a89daa();
  return;
code_r0x107f04a9:
  puVar7 = puVar7 + 1;
  if (puVar7 == puVar1) goto LAB_107f04b8;
  goto LAB_107f0496;
}



/* ===== FUN_107f2330 @ 107f2330  size=4857 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "task_awardList"
//   "TASK_AWARD_CLASS_NAME"
//   "itemIconPathName"
//   "slotid"
//   "ItemID"
//   "limit"
//   "task_selectawardList"
//   "other_info"
//   "taskName"
//   "taskLevel"
//   "taskid"
//   "tasktype"
//   "cantGiveup"
//   "queststatus"
//   "bTeam"
//   "bRepeat"
//   "gold_bind"
//   "TaskContent"
//   "bTrace"
//   "farm_actuarialpoint"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""task_awardList""
     ""TASK_AWARD_CLASS_NAME""
     ""itemIconPathName""
     ""slotid""
     ""ItemID""
     ""limit""
     ""task_selectawardList""
     ""other_info""
     ""taskName""
     ""taskLevel"" */

void __thiscall
FUN_107f2330(int param_1,undefined4 param_2,int ****param_3,undefined4 param_4,int param_5,
            int param_6,int *****param_7)

{
  int ****ppppiVar1;
  int **ppiVar2;
  int ****ppppiVar3;
  char cVar4;
  uint uVar5;
  int ****ppppiVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int ****unaff_EBX;
  int ****ppppiVar11;
  byte unaff_SI;
  int *unaff_EDI;
  char *pcVar12;
  int *****pppppiVar13;
  int ***pppiVar14;
  int *****pppppiStack_180;
  int *****pppppiStack_17c;
  int ****ppppiStack_178;
  int *****pppppiStack_174;
  int *****pppppiStack_170;
  int *****pppppiStack_16c;
  int ****ppppiStack_168;
  int ***pppiStack_164;
  int ****ppppiStack_160;
  int *****pppppiStack_15c;
  char *pcStack_158;
  int **ppiStack_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ****ppppiStack_140;
  int ****ppppiStack_13c;
  int ****ppppiStack_138;
  int *****pppppiStack_134;
  int ****ppppiStack_130;
  int ****ppppiStack_12c;
  int *****pppppiStack_128;
  int ****ppppiStack_124;
  int ****ppppiStack_114;
  int ****ppppiStack_110;
  int ****ppppiStack_108;
  int *piStack_104;
  int *piStack_100;
  int *****local_fc;
  int *piStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int ****ppppiStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  int ****local_e0;
  uint local_dc;
  int ****ppppiStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  int *****apppppiStack_cc [2];
  int ****local_c4;
  int local_c0;
  int ****local_bc;
  int ****local_b8;
  int *local_b4;
  int ****ppppiStack_b0;
  int **ppiStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int ****local_88;
  int ****local_84;
  int ****ppppiStack_80;
  uint uStack_7c;
  int ***pppiStack_78;
  int ****ppppiStack_74;
  int *****local_70;
  int *****local_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****local_58;
  int ****local_54;
  int ****ppppiStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppppiStack_114;
  local_fc = param_7;
  local_c0 = param_1;
  if (param_6 != 2) goto LAB_107f3612;
  uVar5 = *(uint *)(param_5 + 4) & 0x8f;
  if ((uVar5 == 3) || (uVar5 == 4)) {
    local_c4 = *(int *****)(param_5 + 8);
  }
  else {
    local_c4 = (int ****)0xdeadbeaf;
  }
  ppppiStack_124 = (int ****)(param_5 + 0x18);
  local_b8 = (int ****)0x0;
  ppppiVar11 = (int ****)0x0;
  local_b4 = (int *)0x0;
  local_88 = (int ****)0x0;
  local_84 = (int ****)0x0;
  local_e0 = (int ****)0x0;
  local_dc = 0;
  local_70 = (int *****)0x0;
  local_6c = (int *****)0x0;
  local_58 = (int ****)0x0;
  local_54 = (int ****)0x0;
  local_bc = (int ****)0x0;
  pppppiStack_128 = (int *****)0x107f2402;
  FUN_104f42b0();
  ppppiVar1 = *(int *****)(param_1 + 0x3c);
  *(int *****)(param_1 + 0x38) = local_c4;
  if (0 < (int)ppppiVar1) {
    *(int *****)(param_1 + 0x38) = ppppiVar1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    ppppiStack_110 = ppppiVar1;
    if (((uint)local_fc[1] >> 6 & 1) != 0) {
      ppppiStack_124 = local_fc[2];
      pppppiStack_128 = local_fc;
      ppppiStack_12c = (int ****)0x107f2433;
      (*(code *)(**local_fc)[2])();
      *local_fc = (int ****)0x0;
    }
    local_fc[1] = (int ****)0x3;
    local_fc[2] = ppppiStack_110;
    local_c4 = *(int *****)(param_1 + 0x38);
  }
  ppppiVar1 = ppppiStack_130;
  if ((*(int *)(param_1 + 0x38) != -1) && (DAT_123bb99c != (int *)0x0)) {
    pppppiStack_128 = (int *****)0x107f246e;
    ppppiStack_124 = local_c4;
    ppppiVar6 = (int ****)(**(code **)(*DAT_123bb99c + 0x50))();
    pppppiStack_128 = (int *****)0x107f247f;
    ppppiStack_114 = ppppiVar6;
    FUN_114e79d0();
    pppppiStack_128 = (int *****)0x107f2486;
    iVar7 = FUN_114f16f0();
    ppppiVar1 = ppppiStack_130;
    ppppiVar3 = ppppiStack_b0;
    if (iVar7 != 0) {
      ppppiStack_124 = local_c4;
      pppppiStack_128 = (int *****)0x107f249f;
      ppppiVar11 = (int ****)FUN_114f3be0();
      local_bc = ppppiVar11;
      ppppiVar1 = ppppiStack_130;
      ppppiVar3 = ppppiStack_b0;
      ppppiVar6 = ppppiVar11;
    }
    ppppiStack_130 = ppppiVar3;
    ppppiStack_b0 = ppppiStack_130;
    if ((ppppiVar6 != (int ****)0x0) && (((uint)local_b4 & 0x8f) != 1)) {
      pppppiStack_128 = &local_88;
      uVar5 = (uint)ppppiStack_108 >> 8;
      ppppiStack_108 = (int ****)CONCAT31((int3)uVar5,((uint)local_b4 & 0x8f) == 10);
      ppppiStack_124 = ppppiStack_108;
      ppppiStack_12c = (int ****)0x11dca784;
      pppppiStack_134 = (int *****)0x107f24e8;
      cVar4 = (*(code *)(*local_b8)[4])();
      ppppiVar1 = ppppiStack_130;
      if (cVar4 != '\0') {
        ppppiStack_124 = (int ****)0xffffffff;
        pppppiStack_128 = (int *****)0x0;
        ppppiStack_12c = ppppiStack_80;
        ppppiStack_130 = (int ****)0x107f2507;
        (*(code *)(*local_88)[0x11])();
        pppppiStack_134 = (int *****)&uStack_4c;
        uStack_4c = 0;
        uStack_48 = 0;
        ppppiStack_114 = (int ****)CONCAT31(ppppiStack_114._1_3_,((byte)local_c0 & 0x8f) == 10);
        ppppiStack_130 = ppppiStack_114;
        ppppiStack_138 = (int ****)0x11dca7b8;
        ppppiStack_13c = local_bc;
        ppppiStack_140 = (int ****)0x107f254d;
        cVar4 = (*(code *)(*local_c4)[4])();
        if ((cVar4 != '\0') && (((byte)local_58 & 0x8f) == 6)) {
          unaff_EBX = local_54;
          if (((uint)local_58 >> 6 & 1) != 0) {
            unaff_EBX = (int ****)*local_54;
          }
          ppppiStack_144 = ppppiVar11 + 0x13;
          local_bc = (int ****)0x0;
          ppppiStack_140 = (int ****)0x1f;
          local_b8 = (int ****)0x0;
          ppppiStack_148 = (int ****)0x107f25a7;
          iVar7 = FUN_10804900();
          if (iVar7 != 0) {
            ppppiStack_140 = (int ****)(iVar7 + 4);
            ppppiStack_144 = (int ****)0x107f25bf;
            FUN_107ff120();
            pcVar12 = (char *)0x0;
            ppppiStack_124 = ppppiStack_114;
            pcVar10 = (char *)((uint)((int)ppppiStack_110 + (3 - (int)ppppiStack_114)) >> 2);
            if (ppppiStack_110 < ppppiStack_114) {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 != (char *)0x0) {
              do {
                local_e0 = (int ****)*ppppiStack_124;
                ppppiStack_140 = (int ****)0x0;
                ppppiStack_144 = (int ****)0x0;
                pppppiStack_128 = (int *****)local_e0[1];
                pppppiStack_14c = &local_bc;
                pppppiStack_150 = (int *****)0x107f260a;
                ppppiStack_148 = unaff_EBX;
                FUN_11a98de0();
                if (ppppiStack_138 == (int ****)0x0) {
                  pppppiStack_150 = (int *****)&DAT_11d9d32b;
                  ppiStack_154 = (int **)0x11dbdbd0;
                  pcStack_158 = (char *)0x107f26ae;
                  FUN_104d1670();
                  pcStack_158 = (char *)0xa;
                  pppppiStack_15c = (int *****)0x11dbdc1c;
                  ppppiStack_160 = (int ****)0x107f26c3;
                  FUN_104d1550();
                  ppppiStack_160 = (int ****)0x0;
                  pppiStack_164 = (int ***)0x11dbdbe4;
                  ppppiStack_168 = (int ****)0x107f26d8;
                  FUN_104d1550();
                  ppppiStack_168 = (int ****)0x0;
                  pppppiStack_16c = (int *****)&DAT_11dbdc0c;
                  pppppiStack_170 = (int *****)0x107f26ed;
                  FUN_104d1550();
                }
                else {
                  pppppiStack_150 = (int *****)ppppiStack_138[0x2d];
                  ppiStack_154 = (int **)0x11dbdbd0;
                  pcStack_158 = (char *)0x107f262f;
                  FUN_104d1670();
                  pppppiStack_15c = (int *****)0x11dbdc1c;
                  ppppiStack_160 = (int ****)0x107f2643;
                  pcStack_158 = pcVar12;
                  FUN_104d1550();
                  pppppiStack_150 = (int *****)0x107f2652;
                  pppppiStack_150 = (int *****)(**(code **)(*(int *)piStack_f0[1] + 0x18))();
                  ppiStack_154 = (int **)0x11dbdbe4;
                  pcStack_158 = (char *)0x107f2666;
                  FUN_104d1550();
                  pcStack_158 = (char *)piStack_f0[2];
                  pppppiStack_15c = (int *****)&DAT_11dbdc0c;
                  ppppiStack_160 = (int ****)0x107f2680;
                  FUN_104d1550();
                  ppppiStack_160 = (int ****)ppppiStack_138[4];
                  pppiStack_164 = (int ***)&DAT_11dca14c;
                  ppppiStack_168 = (int ****)0x107f269a;
                  FUN_104d1550();
                }
                pppppiStack_150 = (int *****)apppppiStack_cc;
                ppiStack_154 = ppiStack_ac;
                pcStack_158 = (char *)0x107f270b;
                (**(code **)(*local_b4 + 0x3c))();
                pcVar12 = pcVar12 + 1;
                ppppiStack_124 = ppppiStack_124 + 1;
                ppppiVar11 = ppppiStack_d8;
              } while (pcVar12 != pcVar10);
            }
            if (ppppiStack_114 != (int ****)0x0) {
              ppppiStack_140 = ppppiStack_114;
              ppppiStack_144 = (int ****)0x107f2731;
              FUN_10c3d5d0();
            }
          }
          ppppiStack_140 = (int ****)0x107f2740;
          FUN_104d7c10();
        }
        ppppiStack_144 = (int ****)&ppppiStack_74;
        ppppiStack_124 = (int ****)CONCAT31(ppppiStack_124._1_3_,((byte)uStack_d0 & 0x8f) == 10);
        ppppiStack_140 = ppppiStack_124;
        ppppiStack_148 = (int ****)0x11dca764;
        pppppiStack_14c = apppppiStack_cc[0];
        pppppiStack_150 = (int *****)0x107f2770;
        cVar4 = (**(code **)(*piStack_d4 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_150 = (int *****)param_3;
          ppiStack_154 = (int **)0x107f2784;
          FUN_107f18e0();
        }
        ppiStack_154 = &local_b4;
        pppppiStack_134 = (int *****)CONCAT31(pppppiStack_134._1_3_,((byte)local_e0 & 0x8f) == 10);
        pppppiStack_150 = pppppiStack_134;
        pcStack_158 = "task_selectawardList";
        pppppiStack_15c = (int *****)local_dc;
        ppppiStack_160 = (int ****)0x107f27b7;
        cVar4 = (**(code **)(*piStack_e4 + 0x10))();
        if (cVar4 != '\0') {
          ppppiStack_160 = (int ****)0xffffffff;
          pppiStack_164 = (int ***)0x0;
          ppppiStack_168 = local_bc;
          pppppiStack_16c = (int *****)0x107f27d6;
          (*(code *)(*local_c4)[0x11])();
          pppppiStack_170 = (int *****)&local_70;
          local_70 = (int *****)0x0;
          local_6c = (int *****)0x0;
          pppppiStack_150 = (int *****)CONCAT31(pppppiStack_150._1_3_,((byte)local_fc & 0x8f) == 10)
          ;
          pppppiStack_16c = pppppiStack_150;
          pppppiStack_174 = (int *****)0x11dca7b8;
          ppppiStack_178 = (int ****)piStack_f8;
          pppppiStack_17c = (int *****)0x107f281c;
          cVar4 = (**(code **)(*piStack_100 + 0x10))();
          if ((cVar4 != '\0') && (((byte)uStack_7c & 0x8f) == 6)) {
            if ((uStack_7c >> 6 & 1) != 0) {
              pppiStack_78 = (int ***)*pppiStack_78;
            }
            pppppiStack_180 = (int *****)(ppppiVar11 + 0x47);
            pppppiStack_17c = (int *****)0x1e;
            piStack_f8 = (int *)0x0;
            piStack_f4 = (int *)0x0;
            ppppiStack_160 = (int ****)pppiStack_78;
            FUN_10804880(&pppppiStack_150);
            iVar7 = 0;
            ppiStack_154 = (int **)((int)pppppiStack_14c - (int)pppppiStack_150 >> 2);
            pppppiStack_17c = pppppiStack_150;
            if (0 < (int)ppiStack_154) {
              do {
                pppiStack_164 = pppppiStack_17c[iVar7][1];
                if (pppiStack_164 != (int ***)0x0) {
                  ppiVar2 = pppiStack_164[1];
                  pppppiStack_17c = (int *****)0x0;
                  pppppiStack_180 = (int *****)0x0;
                  FUN_11a98de0(&piStack_f8,ppppiStack_160);
                  if (ppiVar2 == (int **)0x0) {
                    FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                    FUN_104d1550("slotid",10);
                    FUN_104d1550("ItemID",0);
                    FUN_104d1550(&DAT_11dbdc0c,0);
                  }
                  else {
                    FUN_104d1670("itemIconPathName",ppiVar2[0x2d]);
                    FUN_104d1550("slotid",iVar7);
                    uVar8 = (*(code *)(*ppiVar2)[6])();
                    FUN_104d1550("ItemID",uVar8);
                    FUN_104d1550(&DAT_11dbdc0c,pppppiStack_174[2]);
                    FUN_104d1550(&DAT_11dca14c,ppiVar2[4]);
                  }
                  (**(code **)(*piStack_f0 + 0x3c))(uStack_e8,&ppppiStack_108);
                  pppppiStack_17c = pppppiStack_150;
                }
                iVar7 = iVar7 + 1;
                ppppiVar11 = ppppiStack_114;
              } while (iVar7 < (int)ppiStack_154);
            }
            if (pppppiStack_17c != (int *****)0x0) {
              pppppiStack_180 = (int *****)0x107f29d3;
              FUN_10c3d5d0();
            }
            pppppiStack_17c = (int *****)0x107f29e2;
            FUN_104d7c10();
          }
          pppppiStack_17c = (int *****)0x107f29ee;
          FUN_104d7c10();
        }
        pppiStack_164 = (int ***)&stack0xfffffee4;
        ppppiStack_144 = (int ****)CONCAT31(ppppiStack_144._1_3_,((byte)piStack_f0 & 0x8f) == 10);
        ppppiStack_160 = ppppiStack_144;
        ppppiStack_168 = (int ****)0x11dca758;
        pppppiStack_16c = (int *****)ppppiStack_ec;
        pppppiStack_170 = (int *****)0x107f2a1b;
        cVar4 = (**(code **)(*piStack_f4 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_170 = &ppppiStack_74;
          pppppiStack_174 = (int *****)0x107f2a33;
          iVar7 = FUN_100e5b40();
          pppppiStack_174 = *(int ******)(iVar7 + 0x14);
          ppppiStack_178 = (int ****)0x11dca5f8;
          pppppiStack_17c = (int *****)0x107f2a46;
          FUN_104d1670();
          if ((ppppiStack_64 != &pppiStack_78) && (ppppiStack_64 != (int ****)0x0)) {
            pppppiStack_174 = (int *****)ppppiStack_64;
            ppppiStack_178 = (int ****)0x107f2a65;
            FUN_10c3d5d0();
          }
          ppppiVar1 = ppppiStack_160;
          if (ppppiStack_160 == (int ****)0x0) {
            ppppiStack_178 = ppppiVar11 + 8;
            pppppiStack_174 = (int *****)0x1;
            pppppiStack_17c = (int *****)0x107f2a92;
            iVar7 = FUN_10804e80();
            if (iVar7 == 0) {
              ppppiStack_178 = (int ****)0x0;
            }
            else {
              ppppiStack_178 = (int ****)**(undefined4 **)(iVar7 + 4);
            }
          }
          else {
            pppppiStack_174 = (int *****)&pcStack_158;
            ppppiStack_178 = (int ****)0x107f2a7c;
            FUN_114f4840();
            ppppiStack_178 = (int ****)0x107f2a83;
            puVar9 = (undefined4 *)FUN_117c1280();
            ppppiStack_178 = (int ****)*puVar9;
          }
          pppppiStack_17c = (int *****)0x11dca778;
          pppppiStack_180 = (int *****)0x107f2ab2;
          FUN_104d1550();
          ppppiStack_178 = (int ****)&uStack_7c;
          pppppiStack_17c = (int *****)0x107f2ac5;
          iVar7 = FUN_100e5b40();
          pppppiStack_17c = *(int ******)(iVar7 + 0x14);
          pppppiStack_180 = (int *****)0x11dca5f8;
          FUN_104d1670();
          if ((local_6c != &ppppiStack_80) && (local_6c != (int *****)0x0)) {
            pppppiStack_17c = local_6c;
            pppppiStack_180 = (int *****)0x107f2af7;
            FUN_10c3d5d0();
          }
          pppppiStack_17c = (int *****)ppppiVar11[1];
          pppppiStack_180 = (int *****)0x11dcaa80;
          FUN_104d1550();
          FUN_104d1550("tasktype",ppppiVar11[4]);
          FUN_104d15e0("cantGiveup",*(undefined1 *)(ppppiVar11 + 7));
          if (ppppiVar1 == (int ****)0x0) {
            pppppiStack_17c = (int *****)0x0;
          }
          else {
            pppppiStack_17c = (int *****)ppppiVar1[5];
          }
          pppppiStack_180 = (int *****)0x11dca76c;
          FUN_104d1550();
          pppppiStack_17c = (int *****)0x107f2b61;
          iVar7 = FUN_10804c90();
          if ((iVar7 == 0) || (**(int **)(iVar7 + 4) < 2)) {
            pppppiStack_17c = (int *****)0x0;
          }
          else {
            pppppiStack_17c = (int *****)0x1;
          }
          pppppiStack_180 = (int *****)0x11dca808;
          FUN_104d15e0();
          pppppiStack_17c = (int *****)(uint)(*(char *)(ppppiVar11 + 0x20) != '\0');
          pppppiStack_180 = (int *****)0x11dca830;
          FUN_104d15e0();
          pppppiStack_180 = (int *****)(ppppiVar11 + 0x13);
          pppppiStack_17c = (int *****)0x19;
          pppiStack_164 = (int ***)FUN_10804cd0();
          ppppiStack_114 = (int ****)0x0;
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_17c = (int *****)0x0;
            pppppiStack_180 = (int *****)&DAT_11dbfbc8;
            FUN_104d1550();
          }
          else {
            ppppiStack_160 = (int ****)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_17c = (int *****)0x0;
              pppppiStack_180 = &ppppiStack_160;
              uVar8 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)pppiStack_164 + 4),0,0);
              FUN_1185f2e0(uVar8);
              FUN_104d1550(&DAT_11dbfbc8,
                           (int)((float)*(int *)((int)pppiStack_164 + 8) * (float)ppppiStack_160));
            }
          }
          pppppiStack_180 = (int *****)(ppppiVar11 + 0x13);
          pppppiStack_17c = (int *****)0x18;
          pppiStack_164 = (int ***)FUN_10804940();
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_17c = (int *****)0x0;
            pppppiStack_180 = (int *****)&DAT_11dc0944;
            FUN_104d1550();
            iVar7 = 0;
          }
          else {
            ppppiStack_160 = (int ****)0x0;
            ppiStack_154 = (int **)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_17c = (int *****)0x0;
              pppppiStack_180 = (int *****)0x0;
              uVar8 = CPlayer__GetHuntRankOrCount
                                (*(undefined4 *)((int)pppiStack_164 + 4),&ppiStack_154,
                                 &ppppiStack_160);
              FUN_1185f2e0(uVar8);
            }
            pppppiStack_17c =
                 (int *****)(int)((float)*(int *)((int)pppiStack_164 + 8) * (float)ppppiStack_160);
            pppppiStack_180 = (int *****)&DAT_11dc0944;
            FUN_104d1550();
            iVar7 = (int)((float)*(int *)((int)pppiStack_164 + 0xc) * (float)ppiStack_154);
          }
          FUN_104d1550("gold_bind",iVar7);
          pppppiStack_17c = &ppppiStack_80;
          pppppiStack_180 = (int *****)0x107f2d10;
          iVar7 = FUN_100e5b40();
          pppppiStack_180 = *(int ******)(iVar7 + 0x14);
          FUN_104d1670("TaskContent");
          if ((local_70 != &local_84) && (local_70 != (int *****)0x0)) {
            pppppiStack_180 = local_70;
            FUN_10c3d5d0();
          }
          if (pppppiStack_16c == (int *****)0x0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = (int *****)(uint)*(byte *)(pppppiStack_16c + 7);
          }
          FUN_104d15e0("bTrace");
          pppppiStack_180 = (int *****)0x107f2d71;
          pppiStack_164 = (int ***)FUN_10804980();
          pppppiVar13 = (int *****)unaff_EBX;
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_16c = (int *****)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_180 = (int *****)&pppppiStack_16c;
              uVar8 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)pppiStack_164 + 4),0,0,0);
              FUN_1185f2e0(uVar8);
              pppppiVar13 = pppppiStack_16c;
            }
            pppppiStack_180 =
                 (int *****)(int)((float)*(int *)((int)pppiStack_164 + 8) * (float)pppppiVar13);
          }
          FUN_104d1550("farm_actuarialpoint");
          pppppiStack_180 = (int *****)0x21;
          pppppiStack_16c = (int *****)FUN_108049c0(ppppiVar11 + 0x13);
          if (pppppiStack_16c == (int *****)0x0) {
            pppppiStack_180 = (int *****)0x0;
            FUN_104d1550("hunter_contribution");
            FUN_104d1550("hunter_fund",0);
            pppiVar14 = (int ***)0x0;
          }
          else {
            pppppiStack_180 = (int *****)pppppiStack_16c[1];
            FUN_104d1550("hunter_contribution");
            FUN_104d1550("hunter_fund",pppppiStack_16c[3]);
            pppiVar14 = (int ***)pppppiStack_16c[2];
          }
          FUN_104d1550("hunter_exp",pppiVar14);
          pppppiStack_180 = (int *****)0x24;
          iVar7 = FUN_10804d10(ppppiVar11 + 0x13);
          if (iVar7 == 0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = *(int ******)(iVar7 + 4);
          }
          FUN_104d1550("huntingCredit");
          pppppiStack_180 = (int *****)0x107f2e95;
          iVar7 = FUN_10804a00();
          if (iVar7 == 0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = *(int ******)(iVar7 + 8);
          }
          FUN_104d1550("npcfriendvalue");
          pppppiStack_180 = (int *****)(uint)*(byte *)(unaff_EBX + 0x11);
          FUN_104d15e0("autotrak");
          FUN_104d15e0("shoqwCurQuestLevel",*(undefined *)((int)unaff_EBX + 0x45));
          FUN_104d15e0("bShare",*(undefined1 *)((int)ppppiVar11 + 0x81));
          unaff_EBX = (int ****)pppppiVar13;
        }
        pppppiStack_174 = &local_bc;
        pppppiStack_15c =
             (int *****)CONCAT31(pppppiStack_15c._1_3_,((byte)piStack_100 & 0x8f) == 10);
        pppppiStack_170 = pppppiStack_15c;
        ppppiStack_178 = (int ****)0x11dca89c;
        pppppiStack_17c = local_fc;
        pppppiStack_180 = (int *****)0x107f2f2e;
        cVar4 = (**(code **)(*piStack_104 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_180 = (int *****)0xffffffff;
          (*(code *)(*apppppiStack_cc[0])[0x11])(local_c4,0);
          ppppiStack_108 = (int ****)0x0;
          piStack_104 = (int *)0x0;
          ppppiStack_178 = (int ****)CONCAT31(ppppiStack_178._1_3_,(unaff_SI & 0x8f) == 10);
          pppppiStack_170 = (int *****)0x0;
          pppppiStack_16c = (int *****)0x0;
          ppppiStack_168 = (int ****)0x0;
          cVar4 = (**(code **)(*unaff_EDI + 0x10))
                            (unaff_EBX,"TASK_TARGET_VO_NAME",&ppppiStack_108,ppppiStack_178);
          if ((cVar4 != '\0') && (((byte)ppppiStack_114 & 0x8f) == 6)) {
            ppppiStack_138 = ppppiStack_110;
            if (((uint)ppppiStack_114 >> 6 & 1) != 0) {
              ppppiStack_138 = (int ****)*ppppiStack_110;
            }
            cVar4 = FUN_100e57c0(&DAT_11d9d32b);
            if (cVar4 == '\0') {
              if (ppppiVar11 == (int ****)0x0) goto LAB_107f34ea;
              uStack_a0 = 0;
              uStack_9c = 0;
              FUN_11a98de0(&uStack_a0,ppppiStack_138,0,0);
              FUN_104d1790("strTarget4",unaff_EBX);
              FUN_104d1550("nOpType",0x1f);
              (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&ppppiStack_b0);
            }
            else {
              FUN_107fa640();
              ppppiVar1 = ppppiStack_138;
              pppppiStack_170 = (int *****)0x0;
              pppppiStack_16c = (int *****)0x0;
              pppppiVar13 = pppppiStack_180;
              if (pppppiStack_180 != pppppiStack_17c) {
                do {
                  FUN_11a98de0(&pppppiStack_170,ppppiVar1,0,0);
                  FUN_104d1550("nQuestType",pppppiVar13[0x38]);
                  if ((pppppiVar13[0x3a] == (int ****)0x3) && (pppppiVar13[0x34] != (int ****)0x4))
                  {
                    if (pppppiVar13[6] == pppppiVar13[7]) {
                      FUN_104d1550("nTargetID1",*pppppiVar13);
                      FUN_104d1550("nTargetID2",pppppiVar13[1]);
                      FUN_104d1550("nTargetID3",pppppiVar13[2]);
                      FUN_104d1550("nTargetID4",pppppiVar13[3]);
                      FUN_104d1550("nTargetID5",pppppiVar13[4]);
                      FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                      FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                      FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                      FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                      FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                      FUN_104d1550("nOpType",pppppiVar13[5]);
                      FUN_104d1550("nCurCount",pppppiVar13[6]);
                      FUN_104d1550("nMaxCount",pppppiVar13[7]);
                      FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                      FUN_104d1550(&DAT_11dca874,0);
                    }
                    else if ((int)pppppiVar13[6] < (int)pppppiVar13[7]) {
                      FUN_104d1550("nTargetID1",*pppppiVar13);
                      FUN_104d1550("nTargetID2",pppppiVar13[1]);
                      FUN_104d1550("nTargetID3",pppppiVar13[2]);
                      FUN_104d1550("nTargetID4",pppppiVar13[3]);
                      FUN_104d1550("nTargetID5",pppppiVar13[4]);
                      FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                      FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                      FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                      FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                      FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                      FUN_104d1550("nOpType",pppppiVar13[5]);
                      FUN_104d1550("nCurCount",pppppiVar13[6]);
                      FUN_104d1550("nMaxCount",pppppiVar13[7]);
                      FUN_104d1550("nQuestType",pppppiVar13[0x38]);
                      FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                      FUN_104d1550(&DAT_11dca874,0);
                      (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&pppppiStack_180);
                      break;
                    }
                  }
                  FUN_104d1550("nTargetID1",*pppppiVar13);
                  FUN_104d1550("nTargetID2",pppppiVar13[1]);
                  FUN_104d1550("nTargetID3",pppppiVar13[2]);
                  FUN_104d1550("nTargetID4",pppppiVar13[3]);
                  FUN_104d1550("nTargetID5",pppppiVar13[4]);
                  FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                  FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                  FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                  FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                  FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                  FUN_104d1550("nOpType",pppppiVar13[5]);
                  FUN_104d1550("nCurCount",pppppiVar13[6]);
                  FUN_104d1550("nMaxCount",pppppiVar13[7]);
                  FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                  FUN_104d1550(&DAT_11dca874,0);
                  (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&pppppiStack_180);
                  pppppiVar13 = pppppiVar13 + 0x3b;
                } while (pppppiVar13 != pppppiStack_17c);
              }
            }
            FUN_104d7c10();
          }
LAB_107f34ea:
          FUN_104d7c10();
          FUN_104f9a70();
        }
        pppppiStack_180 = (int *****)0x107f350b;
        FUN_104d7c10();
        ppppiVar1 = ppppiStack_130;
      }
    }
  }
  ppppiStack_130 = ppppiVar1;
  if (((uint)local_54 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_58;
    ppppiStack_124 = ppppiStack_50;
    ppppiStack_12c = (int ****)0x107f3534;
    (*(code *)(*local_58)[2])();
    local_58 = (int ****)0x0;
  }
  local_54 = (int ****)0x0;
  if (((uint)local_6c >> 6 & 1) != 0) {
    pppppiStack_128 = (int *****)&local_70;
    ppppiStack_124 = ppppiStack_68;
    ppppiStack_12c = (int ****)0x107f3573;
    (*(code *)(*local_70)[2])();
    local_70 = (int *****)0x0;
  }
  local_6c = (int *****)0x0;
  if ((local_dc >> 6 & 1) != 0) {
    pppppiStack_128 = &local_e0;
    ppppiStack_124 = ppppiStack_d8;
    ppppiStack_12c = (int ****)0x107f35a6;
    (*(code *)(*local_e0)[2])();
    local_e0 = (int ****)0x0;
  }
  local_dc = 0;
  if (((uint)local_84 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_88;
    ppppiStack_124 = ppppiStack_80;
    ppppiStack_12c = (int ****)0x107f35df;
    (*(code *)(*local_88)[2])();
    local_88 = (int ****)0x0;
  }
  local_84 = (int ****)0x0;
  if (((uint)local_b4 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_b8;
    ppppiStack_124 = ppppiStack_b0;
    ppppiStack_12c = (int ****)0x107f3612;
    (*(code *)(*local_b8)[2])();
  }
LAB_107f3612:
  FUN_11a89daa();
  return;
}



