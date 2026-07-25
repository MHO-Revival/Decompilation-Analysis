
// ================= TlvMonsterSkillSyncV2::PrintText @ 102ed140 =================

/* [RE-R1]
   strings:
     ""0x%02x""
     ""[bSteeringEnabled]""
     ""%I64i""
     ""[llSyncTime]""
     ""[dwMonsterID]""
     ""[szAnimSeqName]""
     ""[szPartBoneName]""
     ""[iSkillID]""
     ""[iSkillLv]""
     ""[dwSyncFlag]"" */

int __thiscall
TlvMonsterSkillSyncV2__PrintText
          (undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar3;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  
  iVar2 = param_3;
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSteeringEnabled]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",
                                    *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 9)), iVar1 == 0)) &&
     (((((iVar1 = TdrText_FieldValueFmt(param_4,"[szAnimSeqName]",param_1 + 0xd), iVar1 == 0 &&
         (iVar1 = TdrText_FieldValueFmt(param_4,"[szPartBoneName]",param_1 + 0x10d), iVar1 == 0)) &&
        ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 299)), iVar1 == 0 &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillLv]",&DAT_11d9e0b4,
                                       *(undefined4 *)(param_1 + 0x12f)), iVar1 == 0 &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSyncFlag]",&DAT_11d9f574,
                                       *(undefined4 *)(param_1 + 0x133)), iVar1 == 0)))))) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwTargetID]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 0x137)), iVar1 == 0)) &&
      (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetSrvID]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x13b)), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwFlag]",&DAT_11d9f574,
                                     *(undefined4 *)(param_1 + 0x13f)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetDis]",extraout_ECX), iVar1 == 0)))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stMoveSpeed]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetRot]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_4,"[stRotSpeed]",extraout_ECX_02), iVar1 == 0)) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_102713d0(param_2,iVar1,param_4);
          if (((iVar1 == 0) &&
              (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRotSpeedByAnim]","0x%02x",
                                           param_1[0x173]), iVar1 == 0)) &&
             (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterPos]",extraout_ECX_03), iVar1 == 0))
          {
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = FUN_102713d0(param_2,iVar1,param_4);
            if ((iVar1 == 0) &&
               (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterRot]",extraout_ECX_04), iVar1 == 0
               )) {
              iVar1 = param_3;
              if (-1 < param_3) {
                iVar1 = param_3 + 1;
              }
              iVar1 = TdrDebugFormat_FloatField_at0xc(param_2,iVar1,param_4);
              if (((iVar1 == 0) && (iVar1 = TdrText_FieldScalar(), iVar1 == 0)) &&
                 ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRestartAnim]","0x%02x",
                                               param_1[0x194]), iVar1 == 0 &&
                  ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRotFlag]",&DAT_11d9e0b4,
                                                *(undefined4 *)(param_1 + 0x195)), iVar1 == 0 &&
                   (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetAttackNum]",
                                                &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x199)),
                   iVar1 == 0)))))) {
                iVar1 = *(int *)(param_1 + 0x199);
                if (iVar1 < 0) {
                  return -6;
                }
                if (8 < iVar1) {
                  return -7;
                }
                iVar3 = 0;
                param_3 = 0;
                if (0 < iVar1) {
                  do {
                    iVar1 = TdrText_ArrayElemLabel
                                      (param_4,"[astTargetMultiAttackPos]",param_3,param_3);
                    if (iVar1 != 0) {
                      return iVar1;
                    }
                    iVar1 = FUN_102713d0(param_2);
                    if (iVar1 != 0) {
                      return iVar1;
                    }
                    iVar3 = param_3 + 1;
                    param_3 = iVar3;
                  } while (iVar3 < *(int *)(param_1 + 0x199));
                }
                iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetAttackPos]",iVar3);
                if (iVar1 == 0) {
                  iVar1 = iVar2;
                  if (-1 < iVar2) {
                    iVar1 = iVar2 + 1;
                  }
                  iVar1 = FUN_102713d0(param_2,CONCAT44(param_4,iVar1));
                  if ((((((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedTargetAttackPos]"
                                                      ,"0x%02x",param_1[0x209]), iVar1 == 0)) &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[dwAckFlag]",
                                                     &DAT_11d9f574,*(undefined4 *)(param_1 + 0x20a))
                        , iVar1 == 0)) &&
                       ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iUserParam1]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x20e))
                        , iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iUserParam2]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x212))
                        , iVar1 == 0)))) &&
                      ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetRotate]","0x%02x",
                                                    param_1[0x216]), iVar1 == 0 &&
                       ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetPos]","0x%02x",
                                                     param_1[0x217]), iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNoTransferCorrection]"
                                                     ,"0x%02x",param_1[0x218]), iVar1 == 0)))))) &&
                     ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedMoveSpeedAcc]",
                                                   "0x%02x",param_1[0x219]), iVar1 == 0 &&
                      (iVar1 = TdrText_FieldLabelChar
                                         (param_4,"[stMoveSpeedAccelerate]",extraout_ECX_05),
                      iVar1 == 0)))) {
                    iVar1 = iVar2;
                    if (-1 < iVar2) {
                      iVar1 = iVar2 + 1;
                    }
                    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                    if ((((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccStart]",
                                                      &DAT_11da0cf4,
                                                      (double)*(float *)(param_1 + 0x226)),
                         iVar1 == 0)) &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccEnd]",
                                                     &DAT_11da0cf4,
                                                     (double)*(float *)(param_1 + 0x22a)),
                        iVar1 == 0)) &&
                       (iVar1 = TdrText_FieldLabelChar
                                          (param_4,"[stMoveSplineScale]",extraout_ECX_06),
                       iVar1 == 0)) {
                      if (iVar2 < 0) {
                        iVar2 = FUN_102713d0(param_2,iVar2,param_4);
                        return iVar2;
                      }
                      iVar1 = FUN_102713d0(param_2,iVar2 + 1,param_4);
                    }
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


// ================= FUN_102713d0 @ 102713d0 =================

/* [RE-AUTO c0] */

void __thiscall
FUN_102713d0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f80,&DAT_11da0cf4,(double)*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f88,&DAT_11da0cf4,
                                (double)param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f84,&DAT_11da0cf4,(double)param_1[2]);
    }
  }
  return;
}


// ================= TdrText_FieldValueFmt @ 1024a410 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall
TdrText_FieldValueFmt
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0xaf);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,&DAT_11d9e0dc,param_5);
      if (iVar1 == 0) {
        TdrBuf_PutU8Z(param_3);
      }
    }
  }
  return;
}


// ================= TdrText_FieldLabelChar @ 1024a1e0 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall
TdrText_FieldLabelChar(undefined4 param_1,undefined4 param_2,char param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x2b);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,&DAT_11da4eb8,param_4,(int)param_3);
  }
  return;
}


// ================= TdrText_FieldScalar @ 1024a290 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert, _vsnprintf
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int TdrText_FieldScalar(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5
                       )

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x5b);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      uVar2 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_5,
                         &stack0x00000018);
      if ((-1 < (int)uVar2) && (uVar2 < (uint)(param_1[2] - param_1[1]))) {
        param_1[1] = uVar2 + param_1[1];
        iVar1 = TdrBuf_PutU8Z(param_3);
        return iVar1;
      }
      iVar1 = -1;
    }
  }
  return iVar1;
}


// ================= TdrDebugFormat_FloatField_at0xc @ 102717b0 =================

/* WARNING: Removing unreachable block (ram,0x102717c0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall
TdrDebugFormat_FloatField_at0xc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_WriteIndent(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f8c,&DAT_11da0cf4,
                          (double)*(float *)(param_1 + 0xc));
    }
  }
  return;
}


// ================= TdrText_ArrayElemLabel @ 1024a230 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __fastcall
TdrText_ArrayElemLabel
          (undefined4 param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x43);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[%u]%c",param_4,param_5,(int)param_3);
  }
  return;
}


// ================= FUN_102ed0d0 @ 102ed0d0 =================

/* [RE-AUTO c0] */

undefined4
FUN_102ed0d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_1 == 0) {
    return 0xffffffed;
  }
  local_14 = param_1;
  local_c = param_2;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TlvMonsterSkillSyncV2__PrintText(&local_14,param_4,param_5);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}


// ================= FUN_102ed8a0 @ 102ed8a0 =================

/* [RE-AUTO c0] */

undefined1 * FUN_102ed8a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    TlvMonsterSkillSyncV2__PrintText(param_1,param_2,param_3);
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_1;
  }
  return &DAT_11d9d32b;
}


// ================= TlvMonsterFullSnapshot::PrintText @ 102ee200 =================

/* [RE-R1]
   strings:
     ""[iNetID]""
     ""[nSpawnType]""
     ""[iMonsterInfoID]""
     ""%I64u""
     ""[ullEntGUID]""
     ""[szName]""
     ""[szClass]""
     ""[stPose]""
     ""[iFaction]""
     ""[szBTState]"" */

int __thiscall
TlvMonsterFullSnapshot__PrintText
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar5;
  uint extraout_ECX_02;
  int extraout_ECX_03;
  
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (((((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nSpawnType]",&DAT_11d9e0b4,
                                     (int)*(short *)(param_1 + 1)), iVar3 == 0)) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMonsterInfoID]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 6)), iVar3 == 0)) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEntGUID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 10),
                                    *(undefined4 *)((int)param_1 + 0xe)), iVar3 == 0 &&
       (iVar3 = TdrText_FieldValueFmt(param_4,"[szName]",(int)param_1 + 0x12), iVar3 == 0)))) &&
     ((iVar3 = TdrText_FieldValueFmt(param_4,"[szClass]",(int)param_1 + 0x32), iVar3 == 0 &&
      (iVar3 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar3 == 0)))) {
    iVar3 = param_3;
    if (-1 < param_3) {
      iVar3 = param_3 + 1;
    }
    iVar3 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar3,param_4);
    if (((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x6e)), iVar3 == 0)) &&
       ((iVar3 = TdrText_FieldValueFmt(param_4,"[szBTState]",(int)param_1 + 0x72), iVar3 == 0 &&
        (iVar3 = TdrText_FieldLabelChar(param_4,"[stBBVars]",extraout_ECX_00), iVar3 == 0)))) {
      iVar3 = param_3;
      if (-1 < param_3) {
        iVar3 = param_3 + 1;
      }
      iVar3 = TdrDebugFormat_VarsList16(param_2,iVar3,param_4);
      if (((iVar3 == 0) &&
          (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDead]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x2ad)), iVar3 == 0)) &&
         (iVar3 = TdrText_FieldLabelChar(param_4,"[stLcmState]",extraout_ECX_01), iVar3 == 0)) {
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = TlvMonsterSkillSyncV2__PrintText(param_2,iVar3,param_4);
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nAttrCount]",&DAT_11d9e0b4,
                                        (int)*(short *)((int)param_1 + 0xcef)), iVar3 == 0)) {
          uVar1 = *(ushort *)((int)param_1 + 0xcef);
          uVar5 = (uint)uVar1;
          if ((short)uVar1 < 0) {
            return -6;
          }
          if (100 < (short)uVar1) {
            return -7;
          }
          sVar2 = 0;
          if (0 < (short)uVar1) {
            do {
              iVar3 = TdrText_ArrayElemLabel(param_4,"[astAttrInit]",(int)sVar2,uVar5);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_3;
              if (-1 < param_3) {
                iVar3 = param_3 + 1;
              }
              iVar3 = FUN_102850c0(param_2,iVar3,param_4);
              if (iVar3 != 0) {
                return iVar3;
              }
              sVar2 = sVar2 + 1;
              uVar5 = extraout_ECX_02;
            } while (sVar2 < *(short *)((int)param_1 + 0xcef));
          }
          iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iProjIdCount]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x1a39));
          if (iVar3 == 0) {
            iVar3 = *(int *)((int)param_1 + 0x1a39);
            if (iVar3 < 0) {
              return -6;
            }
            if (0x14 < iVar3) {
              return -7;
            }
            if (0 < iVar3) {
              iVar3 = (int)param_1 + 0x1a3d;
              iVar4 = 0;
              do {
                iVar3 = TdrText_ArrayElemLabel(param_4,"[astProjIds]",iVar4,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_3;
                if (-1 < param_3) {
                  iVar3 = param_3 + 1;
                }
                iVar3 = FUN_102a4760(param_2,iVar3,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar4 = iVar4 + 1;
                iVar3 = extraout_ECX_03;
              } while (iVar4 < *(int *)((int)param_1 + 0x1a39));
            }
            iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nBuffSize]",&DAT_11d9e0b4,
                                        (int)*(short *)((int)param_1 + 0x1add));
            if (iVar3 == 0) {
              sVar2 = *(short *)((int)param_1 + 0x1add);
              if (sVar2 < 0) {
                return -6;
              }
              if (0x2800 < sVar2) {
                return -7;
              }
              iVar3 = TdrText_ArrayHeader(0x2800,"[szBuff]",(int)sVar2,(int)sVar2 >> 0x1f);
              if (iVar3 == 0) {
                sVar2 = 0;
                if (0 < *(short *)((int)param_1 + 0x1add)) {
                  do {
                    iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,
                                         *(undefined1 *)(sVar2 + 0x1adf + (int)param_1));
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    sVar2 = sVar2 + 1;
                  } while (sVar2 < *(short *)((int)param_1 + 0x1add));
                }
                iVar3 = TdrBuf_PutU8Z(param_4);
                if ((iVar3 == 0) &&
                   (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullParentGUID]","%I64u",
                                                *(undefined4 *)((int)param_1 + 0x42df),
                                                *(undefined4 *)((int)param_1 + 0x42e3)), iVar3 == 0)
                   ) {
                  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLastChildID]",&DAT_11d9e0b4
                                              ,*(undefined4 *)((int)param_1 + 0x42e7));
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


// ================= FUN_102ed820 @ 102ed820 =================

/* [RE-AUTO c0] */

undefined1 *
FUN_102ed820(undefined1 *param_1,uint param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    local_8 = '\0';
    local_14 = param_1;
    local_10 = 0;
    local_c = param_2;
    TlvMonsterSkillSyncV2__PrintText(&local_14,param_4,param_5);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_2 <= local_10) {
      uVar2 = param_2 - 1;
    }
    param_1[uVar2] = 0;
    if (param_3 != (uint *)0x0) {
      *param_3 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}


// ================= TdrDebugFormat_ByteThenFloatSub @ 10271b90 =================

/* WARNING: Removing unreachable block (ram,0x10271ba0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void TdrDebugFormat_ByteThenFloatSub(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_WriteIndent(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,&DAT_11da9f98,(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = TdrDebugFormat_FloatField_at0xc(param_1,iVar1,param_3);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_3,&DAT_11da9f94,extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_102713d0(param_1,param_2,param_3);
        return;
      }
      FUN_102713d0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}


// ================= FUN_102a4760 @ 102a4760 =================

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iTypeID]"" */

void __thiscall
FUN_102a4760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iTypeID]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}


// ================= TdrBuf_PutU8Z @ 1010c060 =================

/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall TdrBuf_PutU8Z(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
  }
  if ((uint)(param_1[2] - param_1[1]) < 2) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return 0;
}


// ================= TdrDebugFormat_VarsList16 @ 10273da0 =================

/* WARNING: Removing unreachable block (ram,0x10273e1f) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nCount]""
     ""[astVars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TdrDebugFormat_VarsList16(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_WriteIndent(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVars]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10273930(param_2,iVar2,param_4);
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


// ================= TdrText_ArrayHeader @ 1024a3b0 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:"" */

void __fastcall
TdrText_ArrayHeader(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                   ,int param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x9d);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[0 : %I64i]:",param_4,param_5 + -1,param_6 - (uint)(param_5 == 0));
  }
  return;
}


// ================= FUN_1010c010 @ 1010c010 =================

/* [RE-AUTO c0]
   calls: _vsnprintf */

undefined4 FUN_1010c010(int *param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_2,
                     &stack0x0000000c);
  if ((-1 < (int)uVar1) && (uVar1 < (uint)(param_1[2] - param_1[1]))) {
    param_1[1] = uVar1 + param_1[1];
    return 0;
  }
  return 0xffffffff;
}


// ================= FUN_102850c0 @ 102850c0 =================

/* [RE-AUTO c0]
   strings:
     ""[dwAttrID]""
     ""[wType]""
     ""[stValue]"" */

void __thiscall FUN_102850c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwAttrID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wType]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldLabelChar(param_4,"[stValue]",extraout_ECX);
      if (iVar1 == 0) {
        if (param_3 < 0) {
          TdrDebugFormat_Union_BaseOrBonus(*(undefined2 *)(param_1 + 1),0,param_2,param_3,param_4);
          return;
        }
        TdrDebugFormat_Union_BaseOrBonus(*(undefined2 *)(param_1 + 1),0,param_2,param_3 + 1,param_4)
        ;
      }
    }
  }
  return;
}


// ================= FUN_102ee190 @ 102ee190 =================

/* [RE-AUTO c0] */

undefined4
FUN_102ee190(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_1 == 0) {
    return 0xffffffed;
  }
  local_14 = param_1;
  local_c = param_2;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TlvMonsterFullSnapshot__PrintText(&local_14,param_4,param_5);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}


// ================= FUN_102ee660 @ 102ee660 =================

/* [RE-AUTO c0] */

undefined1 *
FUN_102ee660(undefined1 *param_1,uint param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    local_8 = '\0';
    local_14 = param_1;
    local_10 = 0;
    local_c = param_2;
    TlvMonsterFullSnapshot__PrintText(&local_14,param_4,param_5);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_2 <= local_10) {
      uVar2 = param_2 - 1;
    }
    param_1[uVar2] = 0;
    if (param_3 != (uint *)0x0) {
      *param_3 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}


// ================= TdrText_AppearEffect @ 102ee980 =================

/* WARNING: Removing unreachable block (ram,0x102ee990) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stBaseInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[iOwnerId]""
     ""[iType]""
     ""[fDuration]"" */

void __thiscall TdrText_AppearEffect(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_WriteIndent(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = TlvMonsterFullSnapshot__PrintText(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOwnerId]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x42eb)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x42ef)), iVar1 == 0)) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[fDuration]",&DAT_11da0cf4,
                          (double)*(float *)(param_1 + 0x42f3));
    }
  }
  return;
}


// ================= TdrText_AppearList @ 102eeec0 =================

/* WARNING: Removing unreachable block (ram,0x102eef2d) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iCount]""
     ""[astAppear]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall TdrText_AppearList(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_WriteIndent(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astAppear]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TlvMonsterFullSnapshot__PrintText(param_2,iVar1,param_4);
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


// ================= FUN_102ee6e0 @ 102ee6e0 =================

/* [RE-AUTO c0] */

undefined1 * FUN_102ee6e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    TlvMonsterFullSnapshot__PrintText(param_1,param_2,param_3);
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_1;
  }
  return &DAT_11d9d32b;
}

