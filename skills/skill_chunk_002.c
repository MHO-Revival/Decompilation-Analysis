/* ===== FUN_102b1930 @ 102b1930  size=1073 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrDebugFormat_VarsList16
// strings:
//   "[dwNetID]"
//   "[szEntityName]"
//   "[szClassName]"
//   "[stPose]"
//   "[iSubTypeID]"
//   "[bSync2CE]"
//   "0x%02x"
//   "[chSpawnType]"
//   "[iBone]"
//   "[dwHolder]"
//   "[dwOwner]"
//   "[iFaction]"
//   "[iRegionId]"
//   "[iDataLen]"
//   "[szUsrData]"
//   "%I64u"
//   "[ullEntGUID]"
//   "[szPropertityFile]"
//   "[nMHSpawnType]"
//   "[szBTState]"

/* [RE-AUTO c0]
   strings:
     ""[dwNetID]""
     ""[szEntityName]""
     ""[szClassName]""
     ""[stPose]""
     ""[iSubTypeID]""
     ""[bSync2CE]""
     ""0x%02x""
     ""[chSpawnType]""
     ""[iBone]""
     ""[dwHolder]"" */

int __thiscall FUN_102b1930(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetID]",&DAT_11d9f574,*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldValueFmt(param_4,"[szEntityName]",param_1 + 1), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldValueFmt(param_4,"[szClassName]",param_1 + 9), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar2,param_4);
    if (((((iVar2 == 0) &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSubTypeID]",&DAT_11d9e0b4,
                                       param_1[0x18]), iVar2 == 0)) &&
         ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSync2CE]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x19)), iVar2 == 0 &&
          ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chSpawnType]","0x%02x",
                                        (int)*(char *)((int)param_1 + 0x65)), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBone]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x66)), iVar2 == 0)))))) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwHolder]",&DAT_11d9f574,
                                     *(undefined4 *)((int)param_1 + 0x6a)), iVar2 == 0)) &&
       ((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwOwner]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x6e)), iVar2 == 0 &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x72)), iVar2 == 0)) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRegionId]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x76)), iVar2 == 0)) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDataLen]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x7a)), iVar2 == 0)))) {
      iVar2 = *(int *)((int)param_1 + 0x7a);
      if (iVar2 < 0) {
        return -6;
      }
      if (100 < iVar2) {
        return -7;
      }
      iVar2 = TdrText_ArrayHeader(extraout_ECX_00,"[szUsrData]",iVar2,iVar2 >> 0x1f);
      if (iVar2 == 0) {
        if (0 < *(int *)((int)param_1 + 0x7a)) {
          iVar2 = 0;
          do {
            iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar2 + 0x7e))
            ;
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)((int)param_1 + 0x7a));
        }
        iVar2 = TdrBuf_PutU8Z(param_4);
        if ((((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEntGUID]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0xe2),
                                          *(undefined4 *)((int)param_1 + 0xe6)), iVar2 == 0)) &&
            ((iVar2 = TdrText_FieldValueFmt(param_4,"[szPropertityFile]",(int)param_1 + 0xea),
             iVar2 == 0 &&
             ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nMHSpawnType]",&DAT_11d9e0b4,
                                           (int)*(short *)((int)param_1 + 0x12a)), iVar2 == 0 &&
              (iVar2 = TdrText_FieldValueFmt(param_4,"[szBTState]",param_1 + 0x4b), iVar2 == 0))))))
           && (iVar2 = TdrText_FieldLabelChar(param_4,"[stBBVars]",extraout_ECX_01), iVar2 == 0)) {
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = TdrDebugFormat_VarsList16(param_2,iVar2,param_4);
          if ((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[wBuffSize]",&DAT_11d9e0b4,
                                          *(undefined2 *)((int)param_1 + 0xb6e)), iVar2 == 0)) {
            if (0x2800 < *(ushort *)((int)param_1 + 0xb6e)) {
              return -7;
            }
            iVar2 = TdrText_ArrayHeader(0x2800,"[szBuff]",*(ushort *)((int)param_1 + 0xb6e),0);
            if (iVar2 == 0) {
              if (*(short *)((int)param_1 + 0xb6e) != 0) {
                uVar1 = 0;
                do {
                  iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                       *(undefined1 *)(uVar1 + 0xb70 + (int)param_1));
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  uVar1 = uVar1 + 1;
                } while (uVar1 < *(ushort *)((int)param_1 + 0xb6e));
              }
              iVar2 = TdrBuf_PutU8Z(param_4);
              if ((iVar2 == 0) &&
                 (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwParentID]",&DAT_11d9f574,
                                              param_1[0xcdc]), iVar2 == 0)) {
                iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullParentGUID]","%I64u",
                                            param_1[0xcdd],param_1[0xcde]);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102b5700 @ 102b5700  size=1249 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrText_ArrayElemLabel, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[iNetID]"
//   "[iLauncherID]"
//   "[dwVehicleID]"
//   "[iTypeID]"
//   "[stPos]"
//   "[stDir]"
//   "[stAdditiveVel]"
//   "[iSkillId]"
//   "[iItemId]"
//   "[fDelay]"
//   "[fSpeedScale]"
//   "[fDamageScale]"
//   "[iOverrideTrail]"
//   "[stAcc]"
//   "[stVel]"
//   "[fRadius]"
//   "[fGravityChangeTime]"
//   "[fAdditiveGravity]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[iNetID]""
     ""[iLauncherID]""
     ""[dwVehicleID]""
     ""[iTypeID]""
     ""[stPos]""
     ""[stDir]""
     ""[stAdditiveVel]""
     ""[iSkillId]"" */

int __thiscall FUN_102b5700(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *puVar5;
  
  uVar1 = param_2;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,param_1[2]),
       iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLauncherID]",&DAT_11d9e0b4,param_1[3])
      , iVar2 == 0)) &&
     (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwVehicleID]",&DAT_11d9f574,param_1[4]
                                   ), iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTypeID]",&DAT_11d9e0b4,param_1[5]),
       iVar2 == 0)) && (iVar2 = TdrText_FieldLabelChar(param_4,"[stPos]",extraout_ECX), iVar2 == 0))
     )) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_102713d0(param_2,iVar2,param_4);
    if ((iVar2 == 0) &&
       (iVar2 = TdrText_FieldLabelChar(param_4,"[stDir]",extraout_ECX_00), iVar2 == 0)) {
      iVar2 = param_3;
      if (-1 < param_3) {
        iVar2 = param_3 + 1;
      }
      iVar2 = FUN_102713d0(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = TdrText_FieldLabelChar(param_4,"[stAdditiveVel]",extraout_ECX_01), iVar2 == 0)) {
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102713d0(param_2,iVar2,param_4);
        if (((((iVar2 == 0) &&
              (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillId]",&DAT_11d9e0b4,
                                           param_1[0xf]), iVar2 == 0)) &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemId]",&DAT_11d9e0b4,
                                          param_1[0x10]), iVar2 == 0)) &&
            ((iVar2 = TdrText_FieldScalar(), iVar2 == 0 &&
             (iVar2 = TdrText_FieldScalar(), iVar2 == 0)))) &&
           ((iVar2 = TdrText_FieldScalar(), iVar2 == 0 &&
            ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOverrideTrail]",&DAT_11d9e0b4,
                                          param_1[0x14]), iVar2 == 0 &&
             (iVar2 = TdrText_FieldLabelChar(param_4,"[stAcc]",extraout_ECX_02), iVar2 == 0)))))) {
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_102713d0(param_2,CONCAT44(param_4,iVar2));
          if ((iVar2 == 0) &&
             (iVar2 = TdrText_FieldLabelChar(param_4,"[stVel]",extraout_ECX_03), iVar2 == 0)) {
            iVar2 = param_3;
            if (-1 < param_3) {
              iVar2 = param_3 + 1;
            }
            iVar2 = FUN_102713d0(param_2,iVar2,param_4);
            if ((((iVar2 == 0) &&
                 (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[fRadius]",&DAT_11da0cf4,
                                              (double)(float)param_1[0x1b]), iVar2 == 0)) &&
                (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[fGravityChangeTime]",
                                             &DAT_11da0cf4,(double)(float)param_1[0x1c]), iVar2 == 0
                )) && (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[fAdditiveGravity]",
                                                     &DAT_11da0cf4,(double)(float)param_1[0x1d]),
                        iVar2 == 0 &&
                        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLaunchType]",
                                                     &DAT_11d9e0b4,param_1[0x1e]), iVar2 == 0)) &&
                       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAdditiveAccXYZMode]"
                                                     ,&DAT_11d9e0b4,param_1[0x1f]), iVar2 == 0 &&
                        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAdditiveAccCount]",
                                                     &DAT_11d9e0b4,param_1[0x20]), iVar2 == 0))))))
            {
              puVar5 = (undefined4 *)param_1[0x20];
              if ((int)puVar5 < 0) {
                return -6;
              }
              if ((int)puVar5 < 6) {
                param_2 = 0;
                if (0 < (int)puVar5) {
                  puVar5 = param_1 + 0x21;
                  do {
                    iVar2 = TdrText_ArrayElemLabel(param_4,"[astAdditiveAccXYZ]",param_2,puVar5);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    iVar2 = FUN_102713d0(uVar1);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    param_2 = param_2 + 1;
                    puVar5 = extraout_ECX_04;
                  } while (param_2 < (int)param_1[0x20]);
                }
                iVar2 = param_1[0x20];
                if (iVar2 < 0) {
                  return -6;
                }
                if (iVar2 < 6) {
                  iVar2 = TdrText_ArrayHeader(puVar5,"[additiveAccTime]",iVar2,iVar2 >> 0x1f);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar2 = 0;
                  if (0 < (int)param_1[0x20]) {
                    pfVar3 = (float *)(param_1 + 0x30);
                    do {
                      iVar4 = FUN_1010c010(uVar1,&DAT_11da064c,(double)*pfVar3);
                      if (iVar4 != 0) {
                        return iVar4;
                      }
                      iVar2 = iVar2 + 1;
                      pfVar3 = pfVar3 + 1;
                    } while (iVar2 < (int)param_1[0x20]);
                  }
                  iVar2 = TdrBuf_PutU8Z();
                  return iVar2;
                }
              }
              return -7;
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102cd750 @ 102cd750  size=1509 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iErrNo]"
//   "[iNetID]"
//   "[dwSessionID]"
//   "[szName]"
//   "[bGender]"
//   "[bAvatarSetID]"
//   "[iWeapon]"
//   "[iWeaponAtkFlag]"
//   "[wEquipSize]"
//   "[szEquipItem]"
//   "[wAttrSize]"
//   "[wEquipSkillCnt]"
//   "[skillGroup]"
//   "[skillId]"
//   "[skillActFlag]"
//   "[skillType]"
//   "[szAttr]"
//   "[szHunterStar]"
//   "[dwSuitSkillLen]"
//   "[szSuitSkillData]"

/* [RE-AUTO c0]
   strings:
     ""[iErrNo]""
     ""[iNetID]""
     ""[dwSessionID]""
     ""[szName]""
     ""[bGender]""
     ""[bAvatarSetID]""
     ""[iWeapon]""
     ""[iWeaponAtkFlag]""
     ""[wEquipSize]""
     ""[szEquipItem]"" */

int __thiscall
FUN_102cd750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  ushort uVar3;
  uint uVar4;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrNo]",&DAT_11d9e0b4,*param_1);
  if ((((((iVar1 == 0) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,param_1[1]),
         iVar1 == 0)) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSessionID]",&DAT_11d9f574,
                                     param_1[2]), iVar1 == 0)) &&
       ((iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 3), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGender]",&DAT_11d9e0b4,
                                     *(undefined1 *)(param_1 + 0xb)), iVar1 == 0)))) &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bAvatarSetID]",&DAT_11d9e0b4,
                                    *(undefined1 *)((int)param_1 + 0x2d)), iVar1 == 0 &&
       ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeapon]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x2e)), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeaponAtkFlag]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x32)), iVar1 == 0)))))) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipSize]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 0x36)), iVar1 == 0)) {
    if (0x1000 < *(ushort *)((int)param_1 + 0x36)) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(0x1000,"[szEquipItem]",*(ushort *)((int)param_1 + 0x36),0);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*(short *)((int)param_1 + 0x36) != 0) {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)(uVar3 + 0x38 + (int)param_1));
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)((int)param_1 + 0x36));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (((iVar1 == 0) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wAttrSize]",&DAT_11d9e0b4,
                                       *(undefined2 *)(param_1 + 0x40e)), iVar1 == 0)) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipSkillCnt]",&DAT_11d9e0b4,
                                      *(undefined2 *)((int)param_1 + 0x103a)), iVar1 == 0)) {
        if (0x19 < *(ushort *)((int)param_1 + 0x103a)) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(0x19,"[skillGroup]",*(ushort *)((int)param_1 + 0x103a),0);
        if (iVar1 == 0) {
          uVar3 = 0;
          if (*(short *)((int)param_1 + 0x103a) != 0) {
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x40f]);
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(ushort *)((int)param_1 + 0x103a));
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if (iVar1 == 0) {
            if (0x19 < *(ushort *)((int)param_1 + 0x103a)) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(0x19,"[skillId]",*(ushort *)((int)param_1 + 0x103a),0);
            if (iVar1 == 0) {
              if (*(short *)((int)param_1 + 0x103a) != 0) {
                uVar3 = 0;
                do {
                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x428]);
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 < *(ushort *)((int)param_1 + 0x103a));
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
              if (iVar1 == 0) {
                if (0x19 < *(ushort *)((int)param_1 + 0x103a)) {
                  return -7;
                }
                iVar1 = TdrText_ArrayHeader(0x19,"[skillActFlag]",*(ushort *)((int)param_1 + 0x103a)
                                            ,0);
                if (iVar1 == 0) {
                  if (*(short *)((int)param_1 + 0x103a) != 0) {
                    uVar3 = 0;
                    do {
                      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x441]);
                      if (iVar1 != 0) {
                        return iVar1;
                      }
                      uVar3 = uVar3 + 1;
                    } while (uVar3 < *(ushort *)((int)param_1 + 0x103a));
                  }
                  iVar1 = TdrBuf_PutU8Z(param_4);
                  if (iVar1 == 0) {
                    if (0x19 < *(ushort *)((int)param_1 + 0x103a)) {
                      return -7;
                    }
                    iVar1 = TdrText_ArrayHeader(0x19,"[skillType]",
                                                *(ushort *)((int)param_1 + 0x103a),0);
                    if (iVar1 == 0) {
                      if (*(short *)((int)param_1 + 0x103a) != 0) {
                        uVar3 = 0;
                        do {
                          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x45a]);
                          if (iVar1 != 0) {
                            return iVar1;
                          }
                          uVar3 = uVar3 + 1;
                        } while (uVar3 < *(ushort *)((int)param_1 + 0x103a));
                      }
                      iVar1 = TdrBuf_PutU8Z(param_4);
                      if (iVar1 == 0) {
                        if (0x5000 < *(ushort *)(param_1 + 0x40e)) {
                          return -7;
                        }
                        iVar1 = TdrText_ArrayHeader(0x5000,"[szAttr]",*(ushort *)(param_1 + 0x40e),0
                                                   );
                        if (iVar1 == 0) {
                          if (*(short *)(param_1 + 0x40e) != 0) {
                            uVar3 = 0;
                            do {
                              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                   *(undefined1 *)(uVar3 + 0x11cc + (int)param_1));
                              if (iVar1 != 0) {
                                return iVar1;
                              }
                              uVar3 = uVar3 + 1;
                            } while (uVar3 < *(ushort *)(param_1 + 0x40e));
                          }
                          iVar1 = TdrBuf_PutU8Z(param_4);
                          if (((iVar1 == 0) &&
                              (iVar1 = TdrText_FieldValueFmt
                                                 (param_4,"[szHunterStar]",param_1 + 0x1873),
                              iVar1 == 0)) &&
                             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSuitSkillLen]"
                                                          ,&DAT_11d9f574,param_1[0x1893]),
                             iVar1 == 0)) {
                            if (0x2800 < (uint)param_1[0x1893]) {
                              return -7;
                            }
                            iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szSuitSkillData]",
                                                        param_1[0x1893],0);
                            if (iVar1 == 0) {
                              uVar4 = 0;
                              if (param_1[0x1893] != 0) {
                                do {
                                  iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                       *(undefined1 *)
                                                        ((int)param_1 + uVar4 + 0x6250));
                                  if (iVar1 != 0) {
                                    return iVar1;
                                  }
                                  uVar4 = uVar4 + 1;
                                } while (uVar4 < (uint)param_1[0x1893]);
                              }
                              iVar1 = TdrBuf_PutU8Z(param_4);
                              if ((iVar1 == 0) &&
                                 (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,
                                                              "[iSoulStoneLen]",&DAT_11d9e0b4,
                                                              param_1[0x2294]), iVar1 == 0)) {
                                iVar1 = param_1[0x2294];
                                if (iVar1 < 0) {
                                  return -6;
                                }
                                if (0x400 < iVar1) {
                                  return -7;
                                }
                                iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[szSoulStone]",iVar1,
                                                            iVar1 >> 0x1f);
                                if (iVar1 == 0) {
                                  iVar1 = 0;
                                  if (0 < (int)param_1[0x2294]) {
                                    do {
                                      iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                                           *(undefined1 *)
                                                            ((int)param_1 + iVar1 + 0x8a54));
                                      if (iVar2 != 0) {
                                        return iVar2;
                                      }
                                      iVar1 = iVar1 + 1;
                                    } while (iVar1 < (int)param_1[0x2294]);
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
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102dcf40 @ 102dcf40  size=1430 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[fDamageResult]"
//   "[fWaterDamageResult]"
//   "[fFireDamageResult]"
//   "[fElectricDamageResult]"
//   "[fDragonDamageResult]"
//   "[fIceDamageResult]"
//   "[fNonDamageResult]"
//   "[iPIYOResut]"
//   "[iStaminaResult]"
//   "[iDamageMode]"
//   "[iDefenceLevel]"
//   "[iInjuryLevel]"
//   "[nTanDao]"
//   "[iAttack_levelP]"
//   "[iHitIndex]"
//   "[iAttackLogicEntityId]"
//   "[iHitLogicEntityId]"
//   "[iDefenceLogicEntityId]"
//   "[fDamageGener]"
//   "[fWaterDamageGener]"

/* [RE-AUTO c0]
   strings:
     ""[fDamageResult]""
     ""[fWaterDamageResult]""
     ""[fFireDamageResult]""
     ""[fElectricDamageResult]""
     ""[fDragonDamageResult]""
     ""[fIceDamageResult]""
     ""[fNonDamageResult]""
     ""[iPIYOResut]""
     ""[iStaminaResult]""
     ""[iDamageMode]"" */

void __thiscall FUN_102dcf40(float *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fDamageResult]",&DAT_11da0cf4,
                              (double)*param_1);
  if ((((((((((iVar1 == 0) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fWaterDamageResult]",
                                          &DAT_11da0cf4,(double)param_1[1]), iVar1 == 0)) &&
            (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fFireDamageResult]",&DAT_11da0cf4
                                         ,(double)param_1[2]), iVar1 == 0)) &&
           ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fElectricDamageResult]",
                                         &DAT_11da0cf4,(double)param_1[3]), iVar1 == 0 &&
            (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fDragonDamageResult]",
                                         &DAT_11da0cf4,(double)param_1[4]), iVar1 == 0)))) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fIceDamageResult]",&DAT_11da0cf4,
                                       (double)param_1[5]), iVar1 == 0)) &&
         (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fNonDamageResult]",&DAT_11da0cf4,
                                        (double)param_1[6]), iVar1 == 0 &&
           (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPIYOResut]",&DAT_11d9e0b4,
                                        param_1[7]), iVar1 == 0)) &&
          ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStaminaResult]",&DAT_11d9e0b4,
                                        param_1[8]), iVar1 == 0 &&
           (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDamageMode]",&DAT_11d9e0b4,
                                          param_1[9]), iVar1 == 0 &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDefenceLevel]",&DAT_11d9e0b4,
                                          param_1[10]), iVar1 == 0)) &&
            (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInjuryLevel]",&DAT_11d9e0b4,
                                         param_1[0xb]), iVar1 == 0)))))))) &&
        ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nTanDao]",&DAT_11d9e0b4,
                                      (int)*(short *)(param_1 + 0xc)), iVar1 == 0 &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttack_levelP]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x32)), iVar1 == 0)))) &&
       ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHitIndex]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x36)), iVar1 == 0 &&
        (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttackLogicEntityId]",
                                       &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x3a)),
          iVar1 == 0 &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHitLogicEntityId]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x3e)), iVar1 == 0)) &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDefenceLogicEntityId]",
                                       &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x42)),
          iVar1 == 0 &&
          (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fDamageGener]",&DAT_11da0cf4,
                                         (double)*(float *)((int)param_1 + 0x46)), iVar1 == 0 &&
            (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fWaterDamageGener]",&DAT_11da0cf4
                                         ,(double)*(float *)((int)param_1 + 0x4a)), iVar1 == 0)) &&
           (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fFireDamageGener]",&DAT_11da0cf4,
                                        (double)*(float *)((int)param_1 + 0x4e)), iVar1 == 0))))))))
       )) && (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fElectricDamageGener]",
                                            &DAT_11da0cf4,(double)*(float *)((int)param_1 + 0x52)),
               iVar1 == 0 &&
               (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fDragonDamageGener]",
                                            &DAT_11da0cf4,(double)*(float *)((int)param_1 + 0x56)),
               iVar1 == 0)) &&
              (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fIceDamageGener]",&DAT_11da0cf4
                                           ,(double)*(float *)((int)param_1 + 0x5a)), iVar1 == 0))))
     && (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPartId]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x5e)), iVar1 == 0 &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillResID]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x62)), iVar1 == 0)) &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemType]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x66)), iVar1 == 0 &&
          ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAttackDataID]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x6a)), iVar1 == 0 &&
           (iVar1 = TdrText_FieldLabelChar(param_4,"[stDir]",extraout_ECX), iVar1 == 0)))))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,CONCAT44(param_4,iVar1));
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stPos]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stNormal]",extraout_ECX_01), iVar1 == 0)) {
        if (-1 < param_3) {
          param_3 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,param_3,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_ArrayHeader(extraout_ECX_02,"[stateBuffID]",0x11,0), iVar1 == 0)) {
          uVar3 = 0;
          puVar2 = (undefined4 *)((int)param_1 + 0x92);
          do {
            iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar2);
            if (iVar1 != 0) {
              return;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 < 0x11);
          TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_102e36e0 @ 102e36e0  size=418 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[iErrCode]"
//   "[iNetID]"
//   "[iItemDataCount]"
//   "[astPaidItems]"
//   "[iBuffDataCount]"
//   "[astPaidBuffs]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iNetID]""
     ""[iItemDataCount]""
     ""[astPaidItems]""
     ""[iBuffDataCount]""
     ""[astPaidBuffs]"" */

int __thiscall FUN_102e36e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (((iVar2 == 0) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,param_1[1]),
      iVar2 == 0)) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemDataCount]",&DAT_11d9e0b4,
                                  param_1[2]), iVar2 == 0)) {
    iVar2 = param_1[2];
    if (iVar2 < 0) {
      return -6;
    }
    if (100 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      puVar4 = param_1 + 3;
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astPaidItems]",param_3,puVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_102ada60(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        puVar4 = param_1;
      } while (param_3 < (int)param_1[2]);
    }
    iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[iBuffDataCount]",&DAT_11d9e0b4,param_1[0xcb]
                               );
    if (iVar2 == 0) {
      iVar2 = param_1[0xcb];
      if (iVar2 < 0) {
        return -6;
      }
      if (100 < iVar2) {
        return -7;
      }
      if (0 < iVar2) {
        iVar2 = 0;
        puVar4 = param_1 + 0xcc;
        do {
          iVar3 = TdrText_ArrayElemLabel(param_4,"[astPaidBuffs]",iVar2,puVar4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = iVar1;
          if (-1 < iVar1) {
            iVar3 = iVar1 + 1;
          }
          iVar3 = FUN_102ada60(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar2 = iVar2 + 1;
          puVar4 = param_1;
        } while (iVar2 < (int)param_1[0xcb]);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_102ebf70 @ 102ebf70  size=1324 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_FloatField_at0xc, TdrText_ArrayElemLabel
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[dwMonsterID]"
//   "[szAnimSeqName]"
//   "[iSkillID]"
//   "[iSkillLv]"
//   "[dwSyncFlag]"
//   "[iTargetSrvID]"
//   "[stMoveSpeed]"
//   "[stRotSpeed]"
//   "[stMonsterPos]"
//   "[stMonsterRot]"
//   "[fSkillSpeed]"
//   "0x%02x"
//   "[bRestartAnim]"
//   "[iTargetAttackNum]"
//   "[astTargetMultiAttackPos]"
//   "[stTargetAttackPos]"
//   "[bNeedTargetAttackPos]"
//   "[dwAckFlag]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[dwMonsterID]""
     ""[szAnimSeqName]""
     ""[iSkillID]""
     ""[iSkillLv]""
     ""[dwSyncFlag]""
     ""[iTargetSrvID]""
     ""[stMoveSpeed]""
     ""[stRotSpeed]"" */

int __thiscall FUN_102ebf70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar3;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  
  iVar2 = param_3;
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,param_1[2]
                                   ), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldValueFmt(param_4,"[szAnimSeqName]",param_1 + 3), iVar1 == 0)) &&
     (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[0x43]
                                   ), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillLv]",&DAT_11d9e0b4,param_1[0x44]
                                   ), iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSyncFlag]",&DAT_11d9f574,
                                    param_1[0x45]), iVar1 == 0 &&
       ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetSrvID]",&DAT_11d9e0b4,
                                     param_1[0x46]), iVar1 == 0 &&
        (iVar1 = TdrText_FieldLabelChar(param_4,"[stMoveSpeed]",extraout_ECX), iVar1 == 0)))))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stRotSpeed]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterPos]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterRot]",extraout_ECX_02), iVar1 == 0)) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = TdrDebugFormat_FloatField_at0xc(param_2,iVar1,param_4);
          if ((((iVar1 == 0) && (iVar1 = TdrText_FieldScalar(), iVar1 == 0)) &&
              (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRestartAnim]","0x%02x",
                                           *(undefined1 *)(param_1 + 0x55)), iVar1 == 0)) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetAttackNum]",&DAT_11d9e0b4
                                          ,*(undefined4 *)((int)param_1 + 0x155)), iVar1 == 0)) {
            iVar1 = *(int *)((int)param_1 + 0x155);
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
                iVar1 = TdrText_ArrayElemLabel(param_4,"[astTargetMultiAttackPos]",param_3,param_3);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_102713d0(param_2);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar3 = param_3 + 1;
                param_3 = iVar3;
              } while (iVar3 < *(int *)((int)param_1 + 0x155));
            }
            iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetAttackPos]",iVar3);
            if (iVar1 == 0) {
              iVar1 = iVar2;
              if (-1 < iVar2) {
                iVar1 = iVar2 + 1;
              }
              iVar1 = FUN_102713d0(param_2,CONCAT44(param_4,iVar1));
              if (((((iVar1 == 0) &&
                    (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedTargetAttackPos]",
                                                 "0x%02x",*(undefined1 *)((int)param_1 + 0x1c5)),
                    iVar1 == 0)) &&
                   ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[dwAckFlag]",&DAT_11d9f574,
                                                 *(undefined4 *)((int)param_1 + 0x1c6)), iVar1 == 0
                    && ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetRotate]","0x%02x",
                                                     *(undefined1 *)((int)param_1 + 0x1ca)),
                        iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetPos]","0x%02x",
                                                     *(undefined1 *)((int)param_1 + 0x1cb)),
                        iVar1 == 0)))))) &&
                  (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNoTransferCorrection]",
                                               "0x%02x",*(undefined1 *)(param_1 + 0x73)), iVar1 == 0
                  )) && ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedMoveSpeedAcc]",
                                                      "0x%02x",*(undefined1 *)((int)param_1 + 0x1cd)
                                                     ), iVar1 == 0 &&
                         (iVar1 = TdrText_FieldLabelChar
                                            (param_4,"[stMoveSpeedAccelerate]",extraout_ECX_03),
                         iVar1 == 0)))) {
                iVar1 = iVar2;
                if (-1 < iVar2) {
                  iVar1 = iVar2 + 1;
                }
                iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                if ((((iVar1 == 0) &&
                     (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccStart]",
                                                  &DAT_11da0cf4,
                                                  (double)*(float *)((int)param_1 + 0x1da)),
                     iVar1 == 0)) &&
                    (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccEnd]",
                                                 &DAT_11da0cf4,
                                                 (double)*(float *)((int)param_1 + 0x1de)),
                    iVar1 == 0)) &&
                   (iVar1 = TdrText_FieldLabelChar(param_4,"[stMoveSplineScale]",extraout_ECX_04),
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
  return iVar1;
}



/* ===== FUN_102ed140 @ 102ed140  size=1755 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_FloatField_at0xc, TdrText_ArrayElemLabel
// strings:
//   "0x%02x"
//   "[bSteeringEnabled]"
//   "%I64i"
//   "[llSyncTime]"
//   "[dwMonsterID]"
//   "[szAnimSeqName]"
//   "[szPartBoneName]"
//   "[iSkillID]"
//   "[iSkillLv]"
//   "[dwSyncFlag]"
//   "[dwTargetID]"
//   "[iTargetSrvID]"
//   "[dwFlag]"
//   "[stTargetDis]"
//   "[stMoveSpeed]"
//   "[stTargetRot]"
//   "[stRotSpeed]"
//   "[bRotSpeedByAnim]"
//   "[stMonsterPos]"
//   "[stMonsterRot]"

/* [RE-AUTO c0]
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

int __thiscall FUN_102ed140(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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



/* ===== FUN_102ee200 @ 102ee200  size=1112 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrDebugFormat_VarsList16, TdrText_ArrayElemLabel, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iNetID]"
//   "[nSpawnType]"
//   "[iMonsterInfoID]"
//   "%I64u"
//   "[ullEntGUID]"
//   "[szName]"
//   "[szClass]"
//   "[stPose]"
//   "[iFaction]"
//   "[szBTState]"
//   "[stBBVars]"
//   "[bDead]"
//   "[stLcmState]"
//   "[nAttrCount]"
//   "[astAttrInit]"
//   "[iProjIdCount]"
//   "[astProjIds]"
//   "[nBuffSize]"
//   "[szBuff]"
//   "[ullParentGUID]"

/* [RE-AUTO c0]
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

int __thiscall FUN_102ee200(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar3 = FUN_102ed140(param_2,iVar3,param_4);
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



/* ===== FUN_102f2b50 @ 102f2b50  size=270 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iFirstBuffId]"
//   "[iFirstBuffOwner]"
//   "[iSecondBuffId]"
//   "[iSecondBuffOwner]"
//   "0x%02x"
//   "[chChange]"
//   "[iHittype]"
//   "[iResult]"
//   "[iParam1]"

/* [RE-AUTO c0]
   strings:
     ""[iFirstBuffId]""
     ""[iFirstBuffOwner]""
     ""[iSecondBuffId]""
     ""[iSecondBuffOwner]""
     ""0x%02x""
     ""[chChange]""
     ""[iHittype]""
     ""[iResult]""
     ""[iParam1]"" */

void __thiscall
FUN_102f2b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFirstBuffId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFirstBuffOwner]",&DAT_11d9e0b4,param_1[1]
                               );
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSecondBuffId]",&DAT_11d9e0b4,param_1[2]
                                 );
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSecondBuffOwner]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chChange]","0x%02x",
                                      (int)*(char *)(param_1 + 4));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHittype]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x11));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x15));
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[iParam1]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0x19));
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10305b50 @ 10305b50  size=163 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[dwEntityId]"
//   "[iSkillID]"
//   "[iSkillLevel]"
//   "[iType]"
//   "[szEventName]"

/* [RE-AUTO c0]
   strings:
     ""[dwEntityId]""
     ""[iSkillID]""
     ""[iSkillLevel]""
     ""[iType]""
     ""[szEventName]"" */

void __thiscall
FUN_10305b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillLevel]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldValueFmt(param_4,"[szEventName]",param_1 + 4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10306c30 @ 10306c30  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]"" */

undefined4 __thiscall
FUN_10306c30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10306cb0 @ 10306cb0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]"" */

void __thiscall
FUN_10306cb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_10306ce0 @ 10306ce0  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]"" */

undefined1 * __thiscall
FUN_10306ce0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iTalentID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10306d70 @ 10306d70  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iTalentID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]"" */

undefined1 * __thiscall
FUN_10306d70(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iTalentID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10306f60 @ 10306f60  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"
//   "[iErrorID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]""
     ""[iErrorID]"" */

int __thiscall
FUN_10306f60(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iErrorID]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10307000 @ 10307000  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"
//   "[iErrorID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]""
     ""[iErrorID]"" */

void __thiscall
FUN_10307000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iErrorID]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_103072b0 @ 103072b0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"
//   "[iIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]""
     ""[iIdx]"" */

int __thiscall
FUN_103072b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10307350 @ 10307350  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"
//   "[iIdx]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]""
     ""[iIdx]"" */

void __thiscall
FUN_10307350(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_103076c0 @ 103076c0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iTalentID]"
//   "[iIdx]"
//   "[iErrorID]"

/* [RE-AUTO c0]
   strings:
     ""[iTalentID]""
     ""[iIdx]""
     ""[iErrorID]"" */

void __thiscall
FUN_103076c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTalentID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iErrorID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10308810 @ 10308810  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iWeaponType]"
//   "[iIdx]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iWeaponType]""
     ""[iIdx]""
     ""[iSkillID]"" */

void __thiscall
FUN_10308810(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeaponType]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10308b60 @ 10308b60  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iWeaponType]"
//   "[iIdx]"
//   "[iSkillID]"
//   "[iErrorID]"

/* [RE-AUTO c0]
   strings:
     ""[iWeaponType]""
     ""[iIdx]""
     ""[iSkillID]""
     ""[iErrorID]"" */

void __thiscall
FUN_10308b60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeaponType]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iErrorID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_103092c0 @ 103092c0  size=257 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[iGroup]"
//   "[iSkill]"
//   "[iTagCnt]"
//   "[astTagItemData]"

/* [RE-AUTO c0]
   strings:
     ""[iGroup]""
     ""[iSkill]""
     ""[iTagCnt]""
     ""[astTagItemData]"" */

int __thiscall FUN_103092c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGroup]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTagCnt]",&DAT_11d9e0b4,param_1[2]),
     iVar1 == 0)) {
    iVar1 = param_1[2];
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astTagItemData]",iVar2,iVar1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10272300(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = extraout_ECX;
      } while (iVar2 < (int)param_1[2]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103096b0 @ 103096b0  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iArg]"
//   "[iGroup]"
//   "[iSkill]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iArg]""
     ""[iGroup]""
     ""[iSkill]"" */

void __thiscall
FUN_103096b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iArg]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGroup]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10309ad0 @ 10309ad0  size=245 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iGroup]"
//   "[iSkillCnt]"
//   "[skillID]"
//   "[iItemFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iGroup]""
     ""[iSkillCnt]""
     ""[skillID]""
     ""[iItemFlag]"" */

int __thiscall
FUN_10309ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGroup]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillCnt]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[skillID]",iVar1,iVar1 >> 0x1f);
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
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemFlag]",&DAT_11d9e0b4,
                                    param_1[0x2a]);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10309f70 @ 10309f70  size=267 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iRet]"
//   "[iArg]"
//   "[iGroup]"
//   "[iSkillCnt]"
//   "[skillID]"

/* [RE-AUTO c0]
   strings:
     ""[iRet]""
     ""[iArg]""
     ""[iGroup]""
     ""[iSkillCnt]""
     ""[skillID]"" */

int __thiscall
FUN_10309f70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRet]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iArg]",&DAT_11d9e0b4,param_1[1]),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGroup]",&DAT_11d9e0b4,param_1[2]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillCnt]",&DAT_11d9e0b4,param_1[3]),
     iVar1 == 0)) {
    iVar1 = param_1[3];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[skillID]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[3]) {
        puVar3 = param_1 + 4;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < (int)param_1[3]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_10310470 @ 10310470  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwEntityId]"
//   "[dwSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[dwEntityId]""
     ""[dwSkillID]"" */

int __thiscall
FUN_10310470(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwSkillID]",&DAT_11d9f574,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10310510 @ 10310510  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwEntityId]"
//   "[dwSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[dwEntityId]""
     ""[dwSkillID]"" */

void __thiscall
FUN_10310510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwEntityId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[dwSkillID]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_1031b4a0 @ 1031b4a0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iBuffId]"
//   "[iBuffRetainTime]"
//   "[iBuffStackCount]"

/* [RE-AUTO c0]
   strings:
     ""[iBuffId]""
     ""[iBuffRetainTime]""
     ""[iBuffStackCount]"" */

void __thiscall
FUN_1031b4a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffRetainTime]",&DAT_11d9e0b4,param_1[1]
                               );
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffStackCount]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1031ca70 @ 1031ca70  size=203 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNetId]"
//   "[iBuffOp]"
//   "[iBuffId]"
//   "[iBuffRetainTime]"
//   "[iBuffStackCount]"
//   "%I64u"
//   "[ullDbid]"

/* [RE-AUTO c0]
   strings:
     ""[dwNetId]""
     ""[iBuffOp]""
     ""[iBuffId]""
     ""[iBuffRetainTime]""
     ""[iBuffStackCount]""
     ""%I64u""
     ""[ullDbid]"" */

void __thiscall
FUN_1031ca70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffOp]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffId]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffRetainTime]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffStackCount]",&DAT_11d9e0b4,
                                      param_1[4]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[ullDbid]","%I64u",param_1[5],param_1[6]);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032f9d0 @ 1032f9d0  size=272 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[ullItemId]"
//   "[iItemType]"
//   "0x%02x"
//   "[bTargetPos]"
//   "[bCurCol]"
//   "[iCurGrid]"
//   "[astSkillBeadsInfo]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemId]""
     ""[iItemType]""
     ""0x%02x""
     ""[bTargetPos]""
     ""[bCurCol]""
     ""[iCurGrid]""
     ""[astSkillBeadsInfo]"" */

void __thiscall FUN_1032f9d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  uint uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemId]","%I64u",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemType]",&DAT_11d9e0b4,param_1[2]),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTargetPos]","0x%02x",
                                   *(undefined1 *)(param_1 + 3)), iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bCurCol]","0x%02x",
                                   *(undefined1 *)((int)param_1 + 0xd)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCurGrid]",&DAT_11d9e0b4,
                                   *(undefined4 *)((int)param_1 + 0xe)), iVar1 == 0)))) {
    uVar3 = 0;
    uVar2 = extraout_ECX;
    while (iVar1 = TdrText_ArrayElemLabel(param_4,"[astSkillBeadsInfo]",uVar3,uVar2), iVar1 == 0) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1032f5d0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      uVar2 = extraout_ECX_00;
      if (2 < uVar3) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_1033a080 @ 1033a080  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkill]"
//   "[iLevel]"

/* [RE-AUTO c0]
   strings:
     ""[iSkill]""
     ""[iLevel]"" */

int __thiscall
FUN_1033a080(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkill]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iLevel]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1033a120 @ 1033a120  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkill]"
//   "[iLevel]"

/* [RE-AUTO c0]
   strings:
     ""[iSkill]""
     ""[iLevel]"" */

void __thiscall
FUN_1033a120(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_1034a870 @ 1034a870  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkill]"
//   "[iLevel]"

/* [RE-AUTO c0]
   strings:
     ""[iSkill]""
     ""[iLevel]"" */

int __thiscall
FUN_1034a870(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkill]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iLevel]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1034a910 @ 1034a910  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkill]"
//   "[iLevel]"

/* [RE-AUTO c0]
   strings:
     ""[iSkill]""
     ""[iLevel]"" */

void __thiscall
FUN_1034a910(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_10368f40 @ 10368f40  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillId]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillId]"" */

undefined4 __thiscall
FUN_10368f40(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkillId]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10368fc0 @ 10368fc0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillId]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillId]"" */

void __thiscall
FUN_10368fc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillId]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_10368ff0 @ 10368ff0  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillId]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillId]"" */

undefined1 * __thiscall
FUN_10368ff0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkillId]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10369080 @ 10369080  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iSkillId]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillId]"" */

undefined1 * __thiscall
FUN_10369080(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillId]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10369ca0 @ 10369ca0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillId]"
//   "[iProficiencyLevel]"
//   "[iProficiencyDegree]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillId]""
     ""[iProficiencyLevel]""
     ""[iProficiencyDegree]"" */

void __thiscall
FUN_10369ca0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iProficiencyLevel]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iProficiencyDegree]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10391e30 @ 10391e30  size=265 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[iTalkStype]"
//   "[iQuality]"
//   "[iCharacter]"
//   "[iAtkTarget]"
//   "[iAtkMode]"
//   "[szName]"
//   "[iSkin]"
//   "[iSupportSkill]"

/* [RE-AUTO c0]
   strings:
     ""[iTalkStype]""
     ""[iQuality]""
     ""[iCharacter]""
     ""[iAtkTarget]""
     ""[iAtkMode]""
     ""[szName]""
     ""[iSkin]""
     ""[iSupportSkill]"" */

void __thiscall
FUN_10391e30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTalkStype]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iQuality]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCharacter]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAtkTarget]",&DAT_11d9e0b4,param_1[3])
        ;
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAtkMode]",&DAT_11d9e0b4,param_1[4])
          ;
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 5);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkin]",&DAT_11d9e0b4,
                                          param_1[0xd]);
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[iSupportSkill]",&DAT_11d9e0b4,
                                    param_1[0xe]);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103921a0 @ 103921a0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillID]"
//   "[iCount]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]""
     ""[iCount]"" */

int __thiscall
FUN_103921a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkillID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iCount]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10392240 @ 10392240  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillID]"
//   "[iCount]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]""
     ""[iCount]"" */

void __thiscall
FUN_10392240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iCount]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_10392bd0 @ 10392bd0  size=1229 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_ArrayElemLabel
// strings:
//   "[iNetID]"
//   "[iOwnerID]"
//   "[iInfoID]"
//   "%I64u"
//   "[ullEntGUID]"
//   "[iPetUID]"
//   "[iPetIdx]"
//   "[szName]"
//   "[stPose]"
//   "[bAvatarSetID]"
//   "[fHealth]"
//   "[wEquipCount]"
//   "[equip]"
//   "[wAttrSize]"
//   "[szAttr]"
//   "[wBuffSize]"
//   "[szBuff]"
//   "[stRandAttrs]"
//   "[bSupport]"
//   "[iSkillNum]"

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iOwnerID]""
     ""[iInfoID]""
     ""%I64u""
     ""[ullEntGUID]""
     ""[iPetUID]""
     ""[iPetIdx]""
     ""[szName]""
     ""[stPose]""
     ""[bAvatarSetID]"" */

int __thiscall FUN_10392bd0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar4;
  undefined4 *extraout_ECX_01;
  
  uVar1 = param_2;
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if ((((iVar3 == 0) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iOwnerID]",&DAT_11d9e0b4,param_1[1]),
       iVar3 == 0)) &&
      (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iInfoID]",&DAT_11d9e0b4,param_1[2]),
      iVar3 == 0)) &&
     (((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEntGUID]","%I64u",param_1[3],
                                    param_1[4]), iVar3 == 0 &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetUID]",&DAT_11d9e0b4,param_1[5]),
       iVar3 == 0)) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetIdx]",&DAT_11d9e0b4,param_1[6]),
       iVar3 == 0 &&
       ((iVar3 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 7), iVar3 == 0 &&
        (iVar3 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar3 == 0)))))))) {
    iVar3 = param_3;
    if (-1 < param_3) {
      iVar3 = param_3 + 1;
    }
    iVar3 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar3,param_4);
    if ((((iVar3 == 0) &&
         (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bAvatarSetID]",&DAT_11d9e0b4,
                                      *(undefined1 *)(param_1 + 0x16)), iVar3 == 0)) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[fHealth]",&DAT_11da0cf4,
                                     (double)*(float *)((int)param_1 + 0x59)), iVar3 == 0)) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipCount]",&DAT_11d9e0b4,
                                    *(undefined2 *)((int)param_1 + 0x5d)), iVar3 == 0)) {
      if (10 < *(ushort *)((int)param_1 + 0x5d)) {
        return -7;
      }
      iVar3 = TdrText_ArrayHeader(10,"[equip]",*(ushort *)((int)param_1 + 0x5d),0);
      if (iVar3 == 0) {
        uVar2 = 0;
        if (*(short *)((int)param_1 + 0x5d) != 0) {
          do {
            iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,
                                 *(undefined4 *)((int)param_1 + (uint)uVar2 * 4 + 0x5f));
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(ushort *)((int)param_1 + 0x5d));
        }
        iVar3 = TdrBuf_PutU8Z();
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[wAttrSize]",&DAT_11d9e0b4,
                                        *(undefined2 *)((int)param_1 + 0x87)), iVar3 == 0)) {
          if (0x5000 < *(ushort *)((int)param_1 + 0x87)) {
            return -7;
          }
          iVar3 = TdrText_ArrayHeader(0x5000,"[szAttr]",*(ushort *)((int)param_1 + 0x87),0);
          if (iVar3 == 0) {
            uVar2 = 0;
            if (*(short *)((int)param_1 + 0x87) != 0) {
              do {
                iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,
                                     *(undefined1 *)(uVar2 + 0x89 + (int)param_1));
                if (iVar3 != 0) {
                  return iVar3;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(ushort *)((int)param_1 + 0x87));
            }
            iVar3 = TdrBuf_PutU8Z(param_4);
            if ((iVar3 == 0) &&
               (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[wBuffSize]",&DAT_11d9e0b4,
                                            *(undefined2 *)((int)param_1 + 0x5089)), iVar3 == 0)) {
              if (0x2800 < *(ushort *)((int)param_1 + 0x5089)) {
                return -7;
              }
              iVar3 = TdrText_ArrayHeader(0x2800,"[szBuff]",*(ushort *)((int)param_1 + 0x5089),0);
              if (iVar3 == 0) {
                uVar2 = 0;
                if (*(short *)((int)param_1 + 0x5089) != 0) {
                  do {
                    iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,
                                         *(undefined1 *)(uVar2 + 0x508b + (int)param_1));
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    uVar2 = uVar2 + 1;
                  } while (uVar2 < *(ushort *)((int)param_1 + 0x5089));
                }
                iVar3 = TdrBuf_PutU8Z(param_4);
                if ((iVar3 == 0) &&
                   (iVar3 = TdrText_FieldLabelChar(param_4,"[stRandAttrs]",extraout_ECX_00),
                   iVar3 == 0)) {
                  iVar3 = param_3;
                  if (-1 < param_3) {
                    iVar3 = param_3 + 1;
                  }
                  iVar3 = FUN_10391e30(param_2,iVar3,param_4);
                  if (((iVar3 == 0) &&
                      (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSupport]",
                                                   &DAT_11d9e0b4,
                                                   *(undefined1 *)((int)param_1 + 0x78c7)),
                      iVar3 == 0)) &&
                     (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillNum]",
                                                  &DAT_11d9e0b4,param_1[0x1e32]), iVar3 == 0)) {
                    iVar3 = param_1[0x1e32];
                    if (iVar3 < 0) {
                      return -6;
                    }
                    if (10 < iVar3) {
                      return -7;
                    }
                    param_2 = 0;
                    if (0 < iVar3) {
                      puVar4 = param_1 + 0x1e33;
                      do {
                        iVar3 = TdrText_ArrayElemLabel(param_4,"[astSkill]",param_2,puVar4);
                        if (iVar3 != 0) {
                          return iVar3;
                        }
                        iVar3 = param_3;
                        if (-1 < param_3) {
                          iVar3 = param_3 + 1;
                        }
                        iVar3 = FUN_10392240(uVar1,iVar3,param_4);
                        if (iVar3 != 0) {
                          return iVar3;
                        }
                        param_2 = param_2 + 1;
                        puVar4 = extraout_ECX_01;
                      } while (param_2 < (int)param_1[0x1e32]);
                    }
                    iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[iGrowHighDay]",&DAT_11d9e0b4
                                                ,param_1[0x1e47]);
                    if (iVar3 == 0) {
                      iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[iGrowHeight]",
                                                  &DAT_11d9e0b4,param_1[0x1e48]);
                    }
                  }
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



/* ===== FUN_10393dc0 @ 10393dc0  size=251 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "[iPetID]"
//   "[iIdx]"
//   "[iUID]"
//   "0x%02x"
//   "[chSex]"
//   "[iGiftSkill]"
//   "[stRandAttrs]"

/* [RE-AUTO c0]
   strings:
     ""[iPetID]""
     ""[iIdx]""
     ""[iUID]""
     ""0x%02x""
     ""[chSex]""
     ""[iGiftSkill]""
     ""[stRandAttrs]"" */

void __thiscall FUN_10393dc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chSex]","0x%02x",
                                    (int)*(char *)(param_1 + 3));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGiftSkill]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0xd));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldLabelChar(param_4,"[stRandAttrs]",extraout_ECX);
            if (iVar1 == 0) {
              if (param_3 < 0) {
                FUN_10391e30(param_2,param_3,param_4);
                return;
              }
              FUN_10391e30(param_2,param_3 + 1,param_4);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10396b40 @ 10396b40  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSlot]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSlot]""
     ""[iSkillID]"" */

void __thiscall
FUN_10396b40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSlot]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10396ef0 @ 10396ef0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10396ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10397240 @ 10397240  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10397240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_103975b0 @ 103975b0  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"
//   "[iSlot]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]""
     ""[iSlot]"" */

void __thiscall
FUN_103975b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSlot]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10397950 @ 10397950  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"
//   "[iSlot]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]""
     ""[iSlot]"" */

void __thiscall
FUN_10397950(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iSlot]",&DAT_11d9e0b4,param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10397d20 @ 10397d20  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10397d20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10398070 @ 10398070  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10398070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10398eb0 @ 10398eb0  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10398eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10399570 @ 10399570  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkillID]"" */

void __thiscall
FUN_10399570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_10399920 @ 10399920  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iBuffID]"" */

void __thiscall
FUN_10399920(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10399cb0 @ 10399cb0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iBuffID]"" */

void __thiscall
FUN_10399cb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1039b510 @ 1039b510  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSkill]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSkill]"" */

void __thiscall
FUN_1039b510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1039b860 @ 1039b860  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iResult]"
//   "[iIdx]"
//   "[iUID]"
//   "[iSkill]"

/* [RE-AUTO c0]
   strings:
     ""[iResult]""
     ""[iIdx]""
     ""[iUID]""
     ""[iSkill]"" */

void __thiscall
FUN_1039b860(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,param_1[3]);
      }
    }
  }
  return;
}



/* ===== FUN_1039c3c0 @ 1039c3c0  size=373 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[nCount]"
//   "[skill]"
//   "[szNewFlag]"
//   " 0x%02x"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[nCount]""
     ""[skill]""
     ""[szNewFlag]""
     "" 0x%02x"" */

int __thiscall
FUN_1039c3c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,
                                  (int)*(short *)(param_1 + 2)), iVar1 == 0)) {
    sVar2 = *(short *)(param_1 + 2);
    if (sVar2 < 0) {
      return -6;
    }
    if (10 < sVar2) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(10,"[skill]",(int)sVar2,(int)sVar2 >> 0x1f);
    if (iVar1 == 0) {
      sVar2 = 0;
      if (0 < *(short *)(param_1 + 2)) {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)((int)param_1 + sVar2 * 4 + 10))
          ;
          if (iVar1 != 0) {
            return iVar1;
          }
          sVar2 = sVar2 + 1;
        } while (sVar2 < *(short *)(param_1 + 2));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        sVar2 = *(short *)(param_1 + 2);
        if (sVar2 < 0) {
          return -6;
        }
        if (10 < sVar2) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(10,"[szNewFlag]",(int)sVar2,(int)sVar2 >> 0x1f);
        if (iVar1 == 0) {
          sVar2 = 0;
          if (0 < *(short *)(param_1 + 2)) {
            do {
              iVar1 = FUN_1010c010(param_2," 0x%02x",(int)*(char *)(sVar2 + 0x32 + (int)param_1));
              if (iVar1 != 0) {
                return iVar1;
              }
              sVar2 = sVar2 + 1;
            } while (sVar2 < *(short *)(param_1 + 2));
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1039c860 @ 1039c860  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iIdx]"
//   "[iUID]"
//   "[iSkill]"

/* [RE-AUTO c0]
   strings:
     ""[iIdx]""
     ""[iUID]""
     ""[iSkill]"" */

void __thiscall
FUN_1039c860(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIdx]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iSkill]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1039d1d0 @ 1039d1d0  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEnableSkillDebug]"

/* [RE-AUTO c0]
   strings:
     ""[iEnableSkillDebug]"" */

undefined4 __thiscall
FUN_1039d1d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iEnableSkillDebug]",&DAT_11d9e0b4,*param_1
                             );
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1039d250 @ 1039d250  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEnableSkillDebug]"

/* [RE-AUTO c0]
   strings:
     ""[iEnableSkillDebug]"" */

void __thiscall
FUN_1039d250(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iEnableSkillDebug]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_1039d280 @ 1039d280  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iEnableSkillDebug]"

/* [RE-AUTO c0]
   strings:
     ""[iEnableSkillDebug]"" */

undefined1 * __thiscall
FUN_1039d280(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iEnableSkillDebug]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1039d310 @ 1039d310  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iEnableSkillDebug]"

/* [RE-AUTO c0]
   strings:
     ""[iEnableSkillDebug]"" */

undefined1 * __thiscall
FUN_1039d310(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iEnableSkillDebug]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1039d5e0 @ 1039d5e0  size=203 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillInfo]"
//   "[iSkillID]"
//   "%I64i"
//   "[llSyncTime]"
//   "[iServerTimeHour]"
//   "[iServerTimeMin]"
//   "[iServerTimeSec]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillInfo]""
     ""[iSkillID]""
     ""%I64i""
     ""[llSyncTime]""
     ""[iServerTimeHour]""
     ""[iServerTimeMin]""
     ""[iServerTimeSec]"" */

void __thiscall
FUN_1039d5e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillInfo]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",param_1[2],
                                  param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iServerTimeHour]",&DAT_11d9e0b4,
                                    param_1[4]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iServerTimeMin]",&DAT_11d9e0b4,
                                      param_1[5]);
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[iServerTimeSec]",&DAT_11d9e0b4,param_1[6])
            ;
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1039dc20 @ 1039dc20  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]"" */

undefined4 __thiscall
FUN_1039dc20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkillID]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1039dca0 @ 1039dca0  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]"" */

void __thiscall
FUN_1039dca0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_1039dcd0 @ 1039dcd0  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]"" */

undefined1 * __thiscall
FUN_1039dcd0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iSkillID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_1039dd60 @ 1039dd60  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iSkillID]"

/* [RE-AUTO c0]
   strings:
     ""[iSkillID]"" */

undefined1 * __thiscall
FUN_1039dd60(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_103af940 @ 103af940  size=303 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "%I64u"
//   "[ullItemId]"
//   "[dwItemType]"
//   "[dwItemCount]"
//   "0x%02x"
//   "[bBindType]"
//   "[iLen]"
//   "[szBuffer]"
//   " 0x%02x"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemId]""
     ""[dwItemType]""
     ""[dwItemCount]""
     ""0x%02x""
     ""[bBindType]""
     ""[iLen]""
     ""[szBuffer]""
     "" 0x%02x"" */

int __thiscall
FUN_103af940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemId]","%I64u",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwItemType]",&DAT_11d9f574,param_1[2])
       , iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwItemCount]",&DAT_11d9f574,param_1[3])
      , iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bBindType]","0x%02x",
                                   *(undefined1 *)(param_1 + 4)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLen]",&DAT_11d9e0b4,
                                   *(undefined4 *)((int)param_1 + 0x11)), iVar1 == 0)))) {
    iVar1 = *(int *)((int)param_1 + 0x11);
    if (iVar1 < 0) {
      return -6;
    }
    if (0x800 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szBuffer]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < *(int *)((int)param_1 + 0x11)) {
        do {
          iVar2 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)((int)param_1 + iVar1 + 0x15));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)param_1 + 0x11));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_103be970 @ 103be970  size=172 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iId]"
//   "[wCount]"
//   "0x%02x"
//   "[bLevel]"
//   "[bBuffs]"
//   "[dwCatLastTm]"

/* [RE-AUTO c0]
   strings:
     ""[iId]""
     ""[wCount]""
     ""0x%02x""
     ""[bLevel]""
     ""[bBuffs]""
     ""[dwCatLastTm]"" */

void __thiscall
FUN_103be970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bLevel]","0x%02x",
                                  *(undefined1 *)((int)param_1 + 6));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bBuffs]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 7));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[dwCatLastTm]",&DAT_11d9f574,param_1[2]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10400cc0 @ 10400cc0  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iBuffID]"" */

undefined4 __thiscall
FUN_10400cc0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iBuffID]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10400d40 @ 10400d40  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iBuffID]"" */

void __thiscall
FUN_10400d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_10400d70 @ 10400d70  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iBuffID]"" */

undefined1 * __thiscall
FUN_10400d70(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
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
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iBuffID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10400e00 @ 10400e00  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iBuffID]"" */

undefined1 * __thiscall
FUN_10400e00(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,*param_1);
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



/* ===== FUN_10400ff0 @ 10400ff0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iBuffID]"" */

int __thiscall
FUN_10400ff0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
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
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iBuffID]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10401090 @ 10401090  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[iBuffID]"" */

void __thiscall
FUN_10401090(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_1040a880 @ 1040a880  size=247 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[nSigVer]"
//   "[dwSigTime]"
//   "[nSigLen]"
//   "[szSigBuff]"

/* [RE-AUTO c0]
   strings:
     ""[nSigVer]""
     ""[dwSigTime]""
     ""[nSigLen]""
     ""[szSigBuff]"" */

int __thiscall FUN_1040a880(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nSigVer]",&DAT_11d9e0b4,(int)*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSigTime]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 1)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[nSigLen]",&DAT_11d9e0b4,(int)param_1[3])
     , iVar1 == 0)) {
    sVar2 = param_1[3];
    if (sVar2 < 0) {
      return -6;
    }
    if (0x400 < sVar2) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(0x400,"[szSigBuff]",(int)sVar2,(int)sVar2 >> 0x1f);
    if (iVar1 == 0) {
      sVar2 = 0;
      if (0 < param_1[3]) {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)(sVar2 + 8 + (int)param_1));
          if (iVar1 != 0) {
            return iVar1;
          }
          sVar2 = sVar2 + 1;
        } while (sVar2 < param_1[3]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_1040e420 @ 1040e420  size=170 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[fRageValue]"
//   "[iRageSlot]"

/* [RE-AUTO c0]
   strings:
     ""[fRageValue]""
     ""[iRageSlot]"" */

int __thiscall
FUN_1040e420(float *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
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
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[fRageValue]",&DAT_11da0cf4,
                              (double)*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRageSlot]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30();
  }
  return iVar1;
}



/* ===== FUN_1040e4d0 @ 1040e4d0  size=87 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[fRageValue]"
//   "[iRageSlot]"

/* [RE-AUTO c0]
   strings:
     ""[fRageValue]""
     ""[iRageSlot]"" */

void __thiscall
FUN_1040e4d0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fRageValue]",&DAT_11da0cf4,(double)*param_1)
  ;
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iRageSlot]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_104a2af0 @ 104a2af0  size=1675 ===== */
// strings:
//   "BlackBoardFile"
//   "Properties."
//   ".AISetting."
//   "PropertyCustom"
//   ".AISetting"
//   "Health"
//   "RageDec"
//   "TailFire"
//   "mh_sharemem_addrinfo"

/* [RE-AUTO c0]
   strings:
     ""BlackBoardFile""
     ""Properties.""
     "".AISetting.""
     ""PropertyCustom""
     "".AISetting""
     ""Health""
     ""RageDec""
     ""TailFire""
     ""mh_sharemem_addrinfo"" */

void __fastcall FUN_104a2af0(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int **ppiVar7;
  int ***pppiVar8;
  char cVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 auStack_134 [36];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  float fStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  undefined1 auStack_bc [12];
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  undefined1 auStack_8c [20];
  undefined1 *puStack_78;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined1 auStack_5c [20];
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_134;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar16 = false;
  local_f4 = (byte *)0x0;
  local_ec = param_1;
  if (((param_1[0x4d] != 0) || (param_1[5] == 0)) ||
     (pbVar10 = (byte *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]),
     local_f4 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_104a3164;
  iVar11 = (**(code **)(*(int *)pbVar10 + 0x24))();
  param_1[0x3f] = iVar11;
  (**(code **)(*(int *)pbVar10 + 0x14))(&piStack_e8);
  ppppiStack_b0 = &pppiStack_c0;
  ppppiStack_ac = ppppiStack_b0;
  FUN_100b62c0();
  piVar6 = piStack_e8;
  piStack_e4 = (int *)0x0;
  if (piStack_e8 == (int *)0x0) {
LAB_104a2c67:
    uStack_fc = uStack_fc & 0xffffff;
  }
  else {
    pppiStack_c4 = &ppiStack_d4;
    bVar3 = false;
    bVar2 = false;
    bVar16 = false;
    pppiStack_c0 = pppiStack_c4;
    FUN_100b62c0("Properties.","");
    iVar11 = FUN_100f21e0();
    cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
    piVar6 = piStack_e8;
    if (cVar9 == '\0') {
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar16 = true;
      uVar12 = FUN_100b5f70("PropertyCustom",(int)&uStack_fc + 3,".AISetting.",auStack_bc);
      FUN_100f2140(auStack_94,uVar12);
      iVar11 = FUN_100f21e0();
      cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
      if (cVar9 == '\0') goto LAB_104a2c67;
    }
    bVar5 = true;
    bVar4 = true;
    uStack_fc = CONCAT13(1,(undefined3)uStack_fc);
    if (piStack_e4 == (int *)0x0) goto LAB_104a2c67;
  }
  if (((bVar16) && (puStack_48 != auStack_5c)) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  if (((bVar2) && (puStack_78 != auStack_8c)) && (puStack_78 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_78);
  }
  if (((bVar3) && (puStack_60 != auStack_74)) && (puStack_60 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_60);
  }
  if (((bVar4) && (puStack_90 != auStack_a4)) && (puStack_90 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_90);
  }
  if (((bVar5) && (pppiStack_c0 != &ppiStack_d4)) && (pppiStack_c0 != (int ***)0x0)) {
    FUN_10c3d5d0(pppiStack_c0);
  }
  if (uStack_fc._3_1_ != '\0') {
    (**(code **)(*param_1 + 0x18))(piStack_e4);
    piStack_f8 = (int *)(**(code **)(*piStack_f8 + 4))();
    if (0 < (int)(param_1[0x21] - param_1[0x20] & 0xfffffff8U)) {
      puVar13 = (undefined4 *)FUN_10478dc0(&piStack_f8);
      *puVar13 = param_1 + 0x18;
    }
    piVar6 = local_ec;
    pppiStack_c8 = &ppiStack_d8;
    pcVar18 = "";
    local_f4 = (byte *)0x0;
    pcVar17 = "PropertyCustom";
    pppiStack_c4 = pppiStack_c8;
    FUN_100b62c0();
    FUN_100f2140(&ppppiStack_b0,&fStack_e0,".AISetting",pcVar17,pcVar18);
    cVar9 = (**(code **)(*piVar6 + 0x30))();
    if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_90);
    }
    if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
      FUN_10c3d5d0(pppiStack_c0);
    }
    if (cVar9 != '\0') {
      ppiStack_dc = (int **)0x0;
      cVar9 = (**(code **)(*piStack_f0 + 0x38))("Health",&ppiStack_dc);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e4)) {
        ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffffff00);
        pppiStack_cc = &ppiStack_dc;
        pppiStack_c8 = pppiStack_cc;
        FUN_104a1b30(pppiStack_cc,&DAT_11da0cf4,(double)(float)piStack_e4);
        pppiVar8 = pppiStack_c8;
        piStack_100 = (int *)0xffffffff;
        FUN_113168d0("Health",&piStack_100);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_100,pppiVar8);
        }
        if ((pppiStack_c8 != &ppiStack_dc) && (pppiStack_c8 != (int ***)0x0)) {
          FUN_10c3d5d0();
        }
      }
      fStack_e0 = 0.0;
      cVar9 = (**(code **)(*piStack_f8 + 0x38))(&DAT_11dbc56c,&fStack_e0);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e8)) {
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_d4 = &piStack_e4;
        ppiStack_d0 = ppiStack_d4;
        FUN_104a1b30(ppiStack_d4,&DAT_11da0cf4,(double)(float)piStack_e8);
        ppiVar7 = ppiStack_d0;
        piStack_108 = (int *)0xffffffff;
        FUN_113168d0(&DAT_11dbc56c,&piStack_108);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_108,ppiVar7);
        }
        if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_fc = 0;
      cVar9 = (**(code **)(*piStack_100 + 0x38))("RageDec",&uStack_fc);
      if ((cVar9 != '\0') && (0.0 < fStack_104)) {
        local_ec = (int *)((uint)local_ec & 0xffffff00);
        ppiStack_dc = &local_ec;
        ppiStack_d8 = ppiStack_dc;
        FUN_104a1b30(ppiStack_dc,&DAT_11da0cf4,(double)fStack_104);
        ppiVar7 = ppiStack_d8;
        uStack_110 = 0xffffffff;
        uVar12 = FUN_113168d0("RageDec",&uStack_110);
        cVar9 = FUN_1046dc90(uVar12);
        if (cVar9 != '\0') {
          FUN_1046d130(uStack_110,ppiVar7);
        }
        if ((ppiStack_d8 != &local_ec) && (ppiStack_d8 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_10c = 0;
      cVar9 = (**(code **)(*piStack_108 + 0x3c))("TailFire",&uStack_10c);
      if (cVar9 != '\0') {
        pbVar15 = &DAT_11d9d32b;
        pbVar10 = local_f4;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_104a30a0:
            uVar14 = -(uint)bVar16 | 1;
            goto LAB_104a30a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_104a30a0;
          pbVar10 = pbVar10 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        uVar14 = 0;
LAB_104a30a5:
        if (uVar14 != 0) {
          pppiStack_c4 = &ppiStack_d4;
          ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
          pppiStack_c0 = pppiStack_c4;
          FUN_104a1b30();
          pppiVar8 = pppiStack_c0;
          piStack_f8 = (int *)0xffffffff;
          FUN_113168d0("TailFire",&piStack_f8);
          cVar9 = FUN_1046dc90();
          if (cVar9 != '\0') {
            FUN_1046d130(piStack_f8,pppiVar8);
          }
          if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_c0);
          }
        }
      }
    }
    if (piStack_f0 != (int *)0x0) {
      (**(code **)(*piStack_f0 + 8))();
    }
  }
  if ((puStack_a8 != auStack_bc) && (puStack_a8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_a8);
  }
  if (piStack_e8 != (int *)0x0) {
    (**(code **)(*piStack_e8 + 8))();
  }
LAB_104a3164:
  FUN_11a89daa();
  return;
}



/* ===== FUN_104bc010 @ 104bc010  size=577 ===== */
// strings:
//   "NodePathRT"
//   "TimeStamp"
//   "NodeName"
//   "NodeId"
//   "TotalMiliSec"
//   "AccountTime"
//   "SuccessTime"
//   "FailureTime"
//   "Average"
//   "Percent"

/* [RE-AUTO c0]
   strings:
     ""NodePathRT""
     ""TimeStamp""
     ""NodeName""
     ""NodeId""
     ""TotalMiliSec""
     ""AccountTime""
     ""SuccessTime""
     ""FailureTime""
     ""Average""
     ""Percent"" */

void __thiscall FUN_104bc010(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1 + 0x28;
  FUN_104bc260(iVar1);
  iVar6 = *(int *)(param_1 + 0x30);
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  if (iVar6 != iVar1) {
    do {
      (**(code **)(**(int **)(DAT_123bb90c + 8) + 4))(&local_24,&DAT_11dbb4bc,0);
      if (local_24 != (int *)0x0) {
        if ((undefined1 *)(iVar6 + 0x10) != local_20) {
          FUN_100d83d0(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x20));
        }
        iVar3 = 0;
        if (0 < (int)local_10 - (int)local_c) {
          do {
            cVar5 = local_c[iVar3];
            if (('@' < cVar5) && (cVar5 < '[')) {
              cVar5 = cVar5 + ' ';
            }
            local_c[iVar3] = cVar5;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)local_10 - (int)local_c);
        }
        (**(code **)(*local_24 + 0xa4))("NodePathRT",local_c);
        (**(code **)(*local_24 + 0xa4))("TimeStamp",*(undefined4 *)(iVar6 + 0x3c));
        iVar3 = *local_24;
        uVar4 = FUN_11317f30();
        (**(code **)(iVar3 + 0xa4))("NodeName",uVar4);
        (**(code **)(*local_24 + 0xa0))("NodeId",*(undefined4 *)(iVar6 + 0x4c));
        (**(code **)(*local_24 + 0x9c))("TotalMiliSec",*(undefined4 *)(iVar6 + 0x44));
        (**(code **)(*local_24 + 0xa0))("AccountTime",*(undefined4 *)(iVar6 + 0x50));
        (**(code **)(*local_24 + 0xa0))("SuccessTime",*(undefined4 *)(iVar6 + 0x54));
        (**(code **)(*local_24 + 0xa0))("FailureTime",*(undefined4 *)(iVar6 + 0x58));
        FUN_104a1b30(local_20,&DAT_11dbca10,(double)*(float *)(iVar6 + 0x5c));
        (**(code **)(*local_24 + 0xa4))("Average",local_c);
        FUN_104a1b30(local_20,&DAT_11dbca10,(double)*(float *)(iVar6 + 0x60));
        (**(code **)(*local_24 + 0xa4))();
        (**(code **)(*(int *)*param_2 + 0x60))(local_24);
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))();
        }
      }
      iVar3 = *(int *)(iVar6 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar6 + 4);
        if (iVar6 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar6 = iVar3;
            iVar3 = *(int *)(iVar6 + 4);
          } while (iVar6 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar6 + 0xc) != iVar3) {
          iVar6 = iVar3;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar3 + 8); iVar6 = iVar3, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar3 = iVar2;
        }
      }
    } while (iVar6 != iVar1);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_104fd710 @ 104fd710  size=158 ===== */
// calls: CBuffInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo"" */

undefined4 FUN_104fd710(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbea04;
  puVar2 = (undefined4 *)CBuffInfo__GetInfoManagerSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CBuffInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be308 & 1) == 0) {
        DAT_123be308 = DAT_123be308 | 1;
        FUN_105005e0();
        FUN_11a8911f(&LAB_11c6f270);
      }
      puVar3 = &DAT_123be2d0;
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



/* ===== CEquipPassiveSkillGroupInfo::GetManagers @ 1050eb10  size=115 ===== */
// strings:
//   "CEquipPassiveSkillGroupInfo::GetManagers"
//   "StcMbrNameSvr<class CInfoManager>::GetSingletonName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipPassiveSkillGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be514 & 1) == 0) {
    DAT_123be514 = DAT_123be514 | 1;
    _DAT_123be52c = &DAT_123be51c;
    DAT_123be530 = &DAT_123be51c;
    DAT_123be51c = 0;
    FUN_100d83d0("CEquipPassiveSkillGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f650);
  }
  return DAT_123be518;
}



/* ===== FUN_1050ebc0 @ 1050ebc0  size=158 ===== */
// calls: CEquipPassiveSkillGroupInfo::GetManagers, CInfoManager::FindByName
// strings:
//   "CEquipPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo"" */

undefined4 FUN_1050ebc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbffc8;
  puVar2 = (undefined4 *)CEquipPassiveSkillGroupInfo__GetManagers();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CEquipPassiveSkillGroupInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123be440 & 1) == 0) {
        DAT_123be440 = DAT_123be440 | 1;
        FUN_1051d130();
        FUN_11a8911f(&LAB_11c6f8c0);
      }
      puVar2 = &DAT_123be444;
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



/* ===== FUN_1050ef40 @ 1050ef40  size=158 ===== */
// calls: CPetSkillInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   calls: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo"" */

undefined4 FUN_1050ef40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbffc0;
  puVar2 = (undefined4 *)CPetSkillInfo__GetInfoManagerSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CPetSkillInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be404 & 1) == 0) {
        DAT_123be404 = DAT_123be404 | 1;
        FUN_1051d270();
        FUN_11a8911f(&LAB_11c6f7a0);
      }
      puVar3 = &DAT_123be408;
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



/* ===== FUN_10511480 @ 10511480  size=1097 ===== */
// calls: CPetPanelUI::BuildEquippedSkillLists
// strings:
//   "_HasEnoughItemOfRename"
//   "_getRenameItemName"
//   "_getSkillUnlockItemName"
//   "_IsSkillUnlock"
//   "_renameMoney"
//   "SetRennameMoney"
//   "_PetPos"
//   "RefreshPetPropertyUI"
//   "MAX_NUM_ADVANCED_SKILL"
//   "SetRequireItemId"
//   "setPetTempSkillMaxNum"
//   "_root.Global_PetAvatarRefresh"

/* [RE-AUTO c0]
   strings:
     ""_HasEnoughItemOfRename""
     ""_getRenameItemName""
     ""_getSkillUnlockItemName""
     ""_IsSkillUnlock""
     ""_renameMoney""
     ""SetRennameMoney""
     ""_PetPos""
     ""RefreshPetPropertyUI""
     ""MAX_NUM_ADVANCED_SKILL""
     ""SetRequireItemId"" */

void __thiscall
FUN_10511480(int param_1,int *param_2,char *param_3,undefined4 param_4,int *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint unaff_EDI;
  int *piStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char *pcStack_f8;
  code **ppcStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  undefined4 *puStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  code *pcStack_d0;
  int **ppiStack_cc;
  code *pcStack_c8;
  char *pcStack_c4;
  code *pcStack_c0;
  char *pcStack_bc;
  code *pcStack_b8;
  int *piStack_b4;
  int *piStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  int *piStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  char acStack_40 [60];
  
  if (param_6 != 1) {
    return;
  }
  piStack_b4 = param_5;
  pcStack_b8 = (code *)0x105114a8;
  FUN_104f42b0();
  pcStack_b8 = FUN_105105a0;
  pcStack_bc = "_HasEnoughItemOfRename";
  pcStack_c0 = (code *)0x105114c1;
  FUN_104d13b0();
  pcStack_c0 = FUN_10510e80;
  pcStack_c4 = "_getRenameItemName";
  pcStack_c8 = (code *)0x105114d7;
  FUN_104d13b0();
  pcStack_c8 = FUN_10510660;
  ppiStack_cc = (int **)0x11dbf78c;
  pcStack_d0 = (code *)0x105114ed;
  FUN_104d13b0();
  pcStack_d0 = FUN_10510ba0;
  pcStack_d4 = "_IsSkillUnlock";
  pcStack_d8 = (char *)0x10511503;
  FUN_104d13b0();
  uStack_54 = 0;
  iStack_50 = 0;
  pcStack_b8 = (code *)(uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  pcStack_bc = (char *)&uStack_54;
  pcStack_c0 = (code *)0x11dbf80c;
  pcStack_c4 = (char *)DAT_123bcdb8;
  pcStack_c8 = (code *)0x10511544;
  (**(code **)(*DAT_123bcdb0 + 0x10))();
  pcStack_c8 = (code *)0x10511549;
  iVar2 = FUN_116a6a70();
  uVar1 = *(undefined4 *)(iVar2 + 0xcc);
  ppiStack_cc = (int **)0x10511559;
  pcStack_c8 = (code *)uVar1;
  iVar2 = FUN_10254130();
  if (iVar2 != 0) {
    if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
       (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 == (int *)0x0))
    goto LAB_105118a3;
    pcStack_c8 = (code *)0x10511595;
    iVar2 = (**(code **)(*piVar3 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x260d8) == 0)) goto LAB_105118a3;
    ppiStack_cc = (int **)0x105115b4;
    pcStack_c8 = (code *)uVar1;
    pcStack_d0 = (code *)FUN_1092fb60();
    ppiStack_cc = (int **)0x1;
    pcStack_d4 = (char *)0x105115be;
    iVar2 = FUN_112d62a0();
    acStack_40[0] = '\0';
    acStack_40[1] = '\0';
    acStack_40[2] = '\0';
    acStack_40[3] = '\0';
    acStack_40[4] = '\0';
    acStack_40[5] = '\0';
    acStack_40[6] = '\0';
    acStack_40[7] = '\0';
    uStack_58 = 0;
    iStack_50 = 0;
    if (0 < iVar2) {
      iStack_50 = iVar2;
    }
    uStack_54 = 3;
    pcStack_d4 = (char *)(uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    pcStack_d8 = (char *)0x1;
    puStack_dc = &uStack_58;
    pcStack_e0 = "SetRennameMoney";
    pcStack_e4 = acStack_40;
    uStack_e8 = DAT_123bcdb8;
    uStack_ec = 0x1051162d;
    (**(code **)(*DAT_123bcdb0 + 0x18))();
    uStack_ec = 0x10511636;
    FUN_104d7c10();
    uStack_ec = 0x10511642;
    FUN_104d7c10();
  }
  pcStack_c8 = (code *)0x0;
  ppiStack_cc = (int **)param_3;
  *(char **)(param_1 + 0x24) = param_3;
  pcStack_d0 = (code *)0x1051164f;
  FUN_10512e20();
  pcStack_d0 = (code *)0x0;
  pcStack_d4 = param_3;
  pcStack_d8 = (char *)0x10511659;
  FUN_105130a0();
  pcStack_d8 = param_3;
  puStack_dc = (undefined4 *)0x10511661;
  CPetPanelUI__BuildEquippedSkillLists();
  puStack_dc = (undefined4 *)(uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  pcStack_e0 = &stack0xffffff58;
  pcStack_e4 = "_PetPos";
  uStack_e8 = DAT_123bcdb8;
  uStack_ec = 0x1051169f;
  (**(code **)(*DAT_123bcdb0 + 0x10))();
  uStack_ec = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  uStack_f0 = 1;
  ppcStack_f4 = &pcStack_b8;
  pcStack_f8 = "RefreshPetPropertyUI";
  uStack_fc = 0;
  uStack_100 = DAT_123bcdb8;
  uStack_104 = 0x105116d1;
  (**(code **)(*DAT_123bcdb0 + 0x18))();
  uStack_104 = 0x105116d6;
  iVar2 = FUN_116a6a70();
  uStack_104 = *(undefined4 *)(iVar2 + 0xf4);
  piStack_108 = (int *)0x11dbf878;
  FUN_104d1550();
  uStack_104 = 0x105116f5;
  iVar2 = FUN_116a6a70();
  uVar1 = *(undefined4 *)(iVar2 + 0xec);
  uStack_104 = 0x10511700;
  iVar2 = FUN_116a6a70();
  uStack_e8 = *(undefined4 *)(iVar2 + 0xf8);
  pcStack_b8 = (code *)0x0;
  piStack_b4 = (int *)0x0;
  uStack_f0 = 0;
  uStack_ec = 3;
  uStack_104 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  piStack_108 = (int *)0x1;
  (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,&pcStack_b8,"SetRequireItemId",&uStack_f0);
  if ((uStack_104 >> 6 & 1) != 0) {
    (**(code **)(*piStack_108 + 8))(&piStack_108,uStack_100);
    piStack_108 = (int *)0x0;
  }
  uStack_104 = 3;
  uStack_100 = uVar1;
  (**(code **)(*DAT_123bcdb0 + 0x18))
            (DAT_123bcdb8,&pcStack_d0,"setPetTempSkillMaxNum",&piStack_108,1,
             ((byte)DAT_123bcdb4 & 0x8f) == 10);
  if (param_2 != (int *)0x0) {
    pcStack_c8 = (code *)0x105117d6;
    iVar2 = (**(code **)(*param_2 + 0x8c))();
    if (iVar2 != 0) {
      pcStack_c8 = (code *)0x105117e4;
      piVar3 = (int *)(**(code **)(*param_2 + 0x8c))();
      pcStack_c8 = (code *)0x0;
      ppiStack_cc = (int **)0x0;
      pcStack_d0 = (code *)0x0;
      pcStack_d4 = "_root.Global_PetAvatarRefresh";
      pcStack_d8 = (char *)0x105117f9;
      (**(code **)(*piVar3 + 0xc0))();
    }
  }
  *(int **)(param_1 + 0x178) = param_2;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0x138))) {
    *(undefined2 *)(param_1 + 0x18c) = 0x100;
  }
  if ((unaff_EDI >> 6 & 1) != 0) {
    ppiStack_cc = &piStack_b4;
    pcStack_d0 = (code *)0x10511839;
    (**(code **)(*piStack_b4 + 8))();
    piStack_b4 = (int *)0x0;
  }
  if ((uStack_78 >> 6 & 1) != 0) {
    ppiStack_cc = &piStack_7c;
    pcStack_c8 = (code *)uStack_74;
    pcStack_d0 = (code *)0x10511866;
    (**(code **)(*piStack_7c + 8))();
    piStack_7c = (int *)0x0;
  }
  uStack_78 = 0;
  if ((uStack_90 >> 6 & 1) != 0) {
    ppiStack_cc = &piStack_94;
    pcStack_c8 = (code *)uStack_8c;
    pcStack_d0 = (code *)0x10511893;
    (**(code **)(*piStack_94 + 8))();
    piStack_94 = (int *)0x0;
  }
  uStack_90 = 0;
LAB_105118a3:
  if ((uStack_60 >> 6 & 1) != 0) {
    ppiStack_cc = &piStack_64;
    pcStack_c8 = (code *)uStack_5c;
    pcStack_d0 = (code *)0x105118c0;
    (**(code **)(*piStack_64 + 8))();
  }
  return;
}



