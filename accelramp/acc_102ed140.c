// TlvMonsterSkillSyncV2::PrintText @ 102ed140
// ramp offsets referenced: [537, 538, 550, 554]


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

