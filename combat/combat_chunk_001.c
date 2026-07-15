/* ===== FUN_102d9480 @ 102d9480  size=1976 ===== */
// strings:
//   "[dwShooterId]"
//   "[dwTargetId]"
//   "[dwWeaponId]"
//   "[dwProjectileId]"
//   "[iMaterial]"
//   "[iType]"
//   "[iBulletType]"
//   "[fDamageMin]"
//   "[fPierce]"
//   "[iPartId]"
//   "[stPos]"
//   "[stLpos]"
//   "[stDir]"
//   "[stNormal]"
//   "[stLnorm]"
//   "[stAttackDir]"
//   "[stTScarDir]"
//   "[stTPos]"
//   "[stTUp]"
//   "[stTNormal]"

/* [RE-AUTO c0]
   strings:
     ""[dwShooterId]""
     ""[dwTargetId]""
     ""[dwWeaponId]""
     ""[dwProjectileId]""
     ""[iMaterial]""
     ""[iType]""
     ""[iBulletType]""
     ""[fDamageMin]""
     ""[fPierce]""
     ""[iPartId]"" */

void __thiscall FUN_102d9480(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
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
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwShooterId]",&DAT_11d9f574,*param_1);
  if (((((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwTargetId]",&DAT_11d9f574,param_1[1]),
        iVar1 == 0)) &&
       (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwWeaponId]",&DAT_11d9f574,param_1[2]),
       iVar1 == 0)) &&
      (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwProjectileId]",&DAT_11d9f574,param_1[3]),
        iVar1 == 0 &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iMaterial]",&DAT_11d9e0b4,param_1[4]),
        iVar1 == 0)) &&
       ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iType]",&DAT_11d9e0b4,param_1[5]),
        iVar1 == 0 &&
        ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBulletType]",&DAT_11d9e0b4,param_1[6]),
         iVar1 == 0 &&
         (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fDamageMin]",&DAT_11da0cf4,
                               (double)(float)param_1[7]), iVar1 == 0)))))))) &&
     ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fPierce]",&DAT_11da0cf4,
                            (double)(float)param_1[8]), iVar1 == 0 &&
      ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iPartId]",&DAT_11d9e0b4,param_1[9]),
       iVar1 == 0 && (iVar1 = FUN_1024a1e0(param_4,"[stPos]",extraout_ECX), iVar1 == 0)))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,CONCAT44(param_4,iVar1));
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stLpos]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stDir]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stNormal]",extraout_ECX_02), iVar1 == 0)
           ) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_102713d0(param_2,iVar1,param_4);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_1024a1e0(param_4,"[stLnorm]",extraout_ECX_03), iVar1 == 0)) {
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = FUN_102713d0(param_2,iVar1,param_4);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_1024a1e0(param_4,"[stAttackDir]",extraout_ECX_04), iVar1 == 0)) {
              iVar1 = param_3;
              if (-1 < param_3) {
                iVar1 = param_3 + 1;
              }
              iVar1 = FUN_102713d0(param_2,iVar1,param_4);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_1024a1e0(param_4,"[stTScarDir]",extraout_ECX_05), iVar1 == 0)) {
                iVar1 = param_3;
                if (-1 < param_3) {
                  iVar1 = param_3 + 1;
                }
                iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_1024a1e0(param_4,"[stTPos]",extraout_ECX_06), iVar1 == 0)) {
                  iVar1 = param_3;
                  if (-1 < param_3) {
                    iVar1 = param_3 + 1;
                  }
                  iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                  if ((iVar1 == 0) &&
                     (iVar1 = FUN_1024a1e0(param_4,"[stTUp]",extraout_ECX_07), iVar1 == 0)) {
                    iVar1 = param_3;
                    if (-1 < param_3) {
                      iVar1 = param_3 + 1;
                    }
                    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                    if ((iVar1 == 0) &&
                       (iVar1 = FUN_1024a1e0(param_4,"[stTNormal]",extraout_ECX_08), iVar1 == 0)) {
                      iVar1 = param_3;
                      if (-1 < param_3) {
                        iVar1 = param_3 + 1;
                      }
                      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                      if ((iVar1 == 0) &&
                         (iVar1 = FUN_1024a1e0(param_4,"[stLocalnormangle]",extraout_ECX_09),
                         iVar1 == 0)) {
                        iVar1 = param_3;
                        if (-1 < param_3) {
                          iVar1 = param_3 + 1;
                        }
                        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                        if (((((((iVar1 == 0) &&
                                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fShakeStrength]",
                                                      &DAT_11da0cf4,(double)(float)param_1[0x2b]),
                                iVar1 == 0)) &&
                               (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fShakeDurationTime]",
                                                     &DAT_11da0cf4,(double)(float)param_1[0x2c]),
                               iVar1 == 0)) &&
                              ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[fShakeStillTime]",
                                                     &DAT_11da0cf4,(double)(float)param_1[0x2d]),
                               iVar1 == 0 &&
                               (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wProjectileClassId]",
                                                     &DAT_11d9e0b4,*(undefined2 *)(param_1 + 0x2e)),
                               iVar1 == 0)))) &&
                             (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wWeaponClassId]",
                                                   &DAT_11d9e0b4,
                                                   *(undefined2 *)((int)param_1 + 0xba)), iVar1 == 0
                             )) && (((((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRemote]",
                                                             &DAT_11d9e0b4,param_1[0x2f]),
                                       iVar1 == 0 &&
                                       (iVar1 = FUN_1024a290(param_2,param_3,param_4,
                                                             "[iDamageLevel]",&DAT_11d9e0b4,
                                                             param_1[0x30]), iVar1 == 0)) &&
                                      ((iVar1 = FUN_1024a290(param_2,param_3,param_4,
                                                             "[dwAttackType]",&DAT_11d9f574,
                                                             param_1[0x31]), iVar1 == 0 &&
                                       (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHitType]"
                                                               ,&DAT_11d9f574,param_1[0x32]),
                                         iVar1 == 0 &&
                                         (iVar1 = FUN_1024a290(param_2,param_3,param_4,
                                                               "[iDefenseResult]",&DAT_11d9e0b4,
                                                               param_1[0x33]), iVar1 == 0)) &&
                                        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iHitIndex]",
                                                              &DAT_11d9e0b4,param_1[0x34]),
                                        iVar1 == 0)))))) &&
                                     ((iVar1 = FUN_1024a290(param_2,param_3,param_4,
                                                            "[iShooterSrvId]",&DAT_11d9e0b4,
                                                            param_1[0x35]), iVar1 == 0 &&
                                      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iTargetSrvId]"
                                                            ,&DAT_11d9e0b4,param_1[0x36]),
                                      iVar1 == 0)))) &&
                                    (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iWeaponSrvId]",
                                                          &DAT_11d9e0b4,param_1[0x37]), iVar1 == 0))
                                   )) &&
                           ((((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iProjectileSrvId]",
                                                    &DAT_11d9e0b4,param_1[0x38]), iVar1 == 0 &&
                              (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHashWeaponClass]",
                                                    &DAT_11d9f574,param_1[0x39]), iVar1 == 0)) &&
                             ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHashFireMode]",
                                                    &DAT_11d9f574,param_1[0x3a]), iVar1 == 0 &&
                              (((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHashAttacker]",
                                                      &DAT_11d9f574,param_1[0x3b]), iVar1 == 0 &&
                                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHashMeleeParams]",
                                                      &DAT_11d9f574,param_1[0x3c]), iVar1 == 0)) &&
                               (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwHashCurEvent]",
                                                     &DAT_11d9f574,param_1[0x3d]), iVar1 == 0))))))
                            && ((iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSkillResID]",
                                                      &DAT_11d9e0b4,param_1[0x3e]), iVar1 == 0 &&
                                (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[llSkillSeq]","%I64i"
                                                      ,param_1[0x3f],param_1[0x40]), iVar1 == 0)))))
                           ) {
                          FUN_1024a290(param_2,param_3,param_4,"[fCurStamina]",&DAT_11da0cf4,
                                       (double)(float)param_1[0x41]);
                        }
                      }
                    }
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



/* ===== FUN_10a5ab60 @ 10a5ab60  size=58 ===== */
// strings:
//   "OnChgFireMode"

/* [RE-AUTO c0]
   strings:
     ""OnChgFireMode"" */

void __thiscall FUN_10a5ab60(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  local_18 = 0x11d;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "OnChgFireMode";
  local_10 = param_2;
  (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_18);
  return;
}



/* ===== FUN_10a9bc30 @ 10a9bc30  size=1248 ===== */
// strings:
//   "CChangeArea"
//   "CSetTimerEvent"
//   "CBuffAreaPorcess"
//   "CNpcSkillPlay"
//   "CNpcStateAbnoraml"
//   "CCombatNpcRotateToPos"
//   "CCombatNpcRotateToTarget"
//   "CBTObjEnableItemListener"
//   "CPetExistNearestLedge"
//   "CApplyEffect"
//   "CShowIcon"
//   "CLocalPlayerGotoState"
//   "CNpcGetClientTimeTable"
//   "CPetAddGroupBuff"
//   "CPetApplyGroupEffect"
//   "CEnableMoveCollision"
//   "CEntityFollowTarget"
//   "CEntityPursuitTarget"
//   "CResetLocomotion"
//   "CCommonRotateToPos"

/* [RE-AUTO c0]
   strings:
     ""CChangeArea""
     ""CSetTimerEvent""
     ""CBuffAreaPorcess""
     ""CNpcSkillPlay""
     ""CNpcStateAbnoraml""
     ""CCombatNpcRotateToPos""
     ""CCombatNpcRotateToTarget""
     ""CBTObjEnableItemListener""
     ""CPetExistNearestLedge""
     ""CApplyEffect"" */

void FUN_10a9bc30(void)

{
  int *piVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  if (DAT_12020a88 == '\0') {
    DAT_12020a88 = '\x01';
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 0x2c))(FUN_10a9c110);
    FUN_113168d0("CChangeArea");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c310,1,0);
    FUN_10aa0200();
    FUN_113168d0("CSetTimerEvent");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d0e0,1,0);
    FUN_10aa6870();
    FUN_113168d0("CBuffAreaPorcess");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c270,1,0);
    FUN_10aa0000();
    FUN_113168d0("CNpcSkillPlay");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cbe0,1,0);
    FUN_10aa5760();
    FUN_113168d0("CNpcStateAbnoraml");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cd20,1,0);
    FUN_10aa5d50();
    FUN_113168d0("CCombatNpcRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c450,1,0);
    FUN_10aa0760();
    FUN_113168d0("CCombatNpcRotateToTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c4f0,1,0);
    FUN_10aa10c0();
    FUN_113168d0("CBTObjEnableItemListener");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c1d0,1,0);
    FUN_10a9feb0();
    FUN_113168d0("CPetExistNearestLedge");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cf00,1,0);
    FUN_113168d0("CApplyEffect");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c130,1,0);
    FUN_10a9eed0();
    FUN_113168d0("CShowIcon");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d150,1,0);
    FUN_10aa6bc0();
    FUN_113168d0("CLocalPlayerGotoState");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c950,1,0);
    FUN_10aa33e0();
    FUN_113168d0("CNpcGetClientTimeTable");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9ca00,1,0);
    FUN_10aa3650();
    FUN_113168d0("CPetAddGroupBuff");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cdc0,1,0);
    FUN_10aa5ed0();
    FUN_113168d0("CPetApplyGroupEffect");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9ce60,1,0);
    FUN_10aa61d0();
    FUN_113168d0("CEnableMoveCollision");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c630,1,0);
    FUN_10aa1800();
    FUN_113168d0("CEntityFollowTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c6d0,1,0);
    FUN_10aa1d10();
    FUN_113168d0("CEntityPursuitTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c810,1,0);
    FUN_10aa2990();
    FUN_113168d0("CResetLocomotion");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cfa0,1,0);
    FUN_10aa64f0();
    FUN_113168d0("CCommonRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c590,1,0);
    FUN_10aa1370();
    FUN_113168d0("CEntityMoveToPosEx");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c770,1,0);
    FUN_10aa2420();
    FUN_113168d0("CLMGRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c8b0,1,0);
    FUN_10aa3140();
    FUN_113168d0("CNpcStartCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cc80,1,0);
    FUN_10aa5c00();
    FUN_113168d0("CNpcNextCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cb40,1,0);
    FUN_10aa46b0();
    FUN_113168d0("CNpcLeaveCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9caa0,1,0);
    FUN_10aa40c0();
    FUN_113168d0("CSceneObjectHide");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d040,1,0);
    FUN_10aa65c0();
    FUN_113168d0("CSwitchMonsterPartDefence");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d1f0,1,0);
    FUN_10aa6d90();
    FUN_113168d0("CCheckBattleGround");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c3b0,1,0);
    iVar2 = FUN_1048b080();
    *(undefined1 *)(iVar2 + 0x50) = 1;
  }
  return;
}



/* ===== FUN_10aa0760 @ 10aa0760  size=378 ===== */
// strings:
//   "CCombatNpcRotateToPos"
//   "RotateAngle"
//   "TargetPos"

/* [RE-AUTO c0]
   strings:
     ""CCombatNpcRotateToPos""
     ""RotateAngle""
     ""TargetPos"" */

void FUN_10aa0760(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetOrientation","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CCombatNpcRotateToPos","");
  FUN_1048b080(local_1c,local_34,0,1,1);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("RotateAngle","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCombatNpcRotateToPos","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCombatNpcRotateToPos","");
  FUN_1048b080(local_34,local_1c,2);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}



/* ===== FUN_10aa10c0 @ 10aa10c0  size=130 ===== */
// strings:
//   "CCombatNpcRotateToTarget"

/* [RE-AUTO c0]
   strings:
     ""CCombatNpcRotateToTarget"" */

void FUN_10aa10c0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetID","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CCombatNpcRotateToTarget","");
  FUN_1048b080(local_1c,local_34,0);
  FUN_1048b250();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}



/* ===== FUN_10aa1800 @ 10aa1800  size=382 ===== */
// strings:
//   "Living"
//   "CEnableMoveCollision"
//   "CombatNPCMovCol"

/* [RE-AUTO c0]
   strings:
     ""Living""
     ""CEnableMoveCollision""
     ""CombatNPCMovCol"" */

void FUN_10aa1800(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("Living","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("WithWall","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_34,local_1c,1,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CombatNPCMovCol","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}



/* ===== FUN_10aa4e10 @ 10aa4e10  size=78 ===== */
// calls: CCombatNPCComboInfo::FindInfoByKey
// strings:
//   "CCombatNPCComboInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCComboInfo::GetManagers
   strings:
     ""CCombatNPCComboInfo"" */

undefined4 FUN_10aa4e10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CCombatNPCComboInfo__FindInfoByKey(0,"CCombatNPCComboInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10aaea10 @ 10aaea10  size=52 ===== */
// calls: CCombatNPCInfo::FindInfoByKey
// strings:
//   "CCombatNPCInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo"" */

undefined4 FUN_10aaea10(int param_1)

{
  int iVar1;
  
  iVar1 = CCombatNPCInfo__FindInfoByKey(0,"CCombatNPCInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_10abaa70 @ 10abaa70  size=78 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

undefined4 FUN_10abaa70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10ae4c50 @ 10ae4c50  size=1398 ===== */
// calls: atoi, CAvatarInfo::ResolveRecordById
// strings:
//   "female"
//   "Can not find avatar info. itemid(%d), avatarid(%s), part(%s), male(%s)."
//   ".fxparams"
//   "Libs\\PlayerFSM\\WE99FSMStates.xml"
//   "/Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"
//   "CAvatarInfo"
//   "mh_sharemem_addrinfo"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""female""
     ""Can not find avatar info. itemid(%d), avatarid(%s), part(%s), male(%s).""
     "".fxparams""
     ""Libs\\PlayerFSM\\WE99FSMStates.xml""
     ""/Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml""
     ""CAvatarInfo""
     ""mh_sharemem_addrinfo"" */

undefined4 __thiscall FUN_10ae4c50(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  undefined1 local_444 [4];
  int local_440;
  undefined1 *local_43c;
  undefined1 local_438 [512];
  undefined1 local_238 [4];
  int local_234;
  undefined1 *local_230;
  undefined1 local_22c [512];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  byte *local_8;
  
  local_18 = 0;
  local_c = param_1;
  iVar4 = atoi(param_2);
  if (param_3 - 0x1e < 0xe) {
    iVar5 = CAvatarInfo__ResolveRecordById(iVar4);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_10f19240();
        cVar3 = FUN_1139a8d0();
        pcVar6 = "male";
        if (cVar3 != '\0') goto LAB_10ae4cb5;
      }
      pcVar6 = "female";
LAB_10ae4cb5:
      uVar11 = param_3;
      uVar7 = FUN_10ae6a60(param_3,pcVar6);
      uVar7 = FUN_10ae6b10(param_2,uVar11,param_2,uVar7);
      FUN_104f3640("Can not find avatar info. itemid(%d), avatarid(%s), part(%s), male(%s).",uVar7);
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x1e64) == iVar4) {
      return 0;
    }
    FUN_10a6c4c0(*(undefined4 *)(iVar5 + 0x2c));
    puVar8 = (undefined4 *)FUN_10ae9170(local_444,local_238,".fxparams");
    FUN_10a92310(puVar8[2],*puVar8);
    if (local_43c != local_438) {
      DAT_1202015c = DAT_1202015c + (-1 - local_440);
      FUN_10c3d900(local_43c);
    }
    FUN_11003730(0,local_230);
    FUN_11003730(0,"Libs\\PlayerFSM\\WE99FSMStates.xml");
    iVar4 = FUN_11111ec0(*(undefined4 *)(iVar5 + 0x14));
    if (iVar4 != 0) {
      puVar8 = (undefined4 *)FUN_10a9b770(&local_14);
      FUN_10a91ee0(*puVar8);
      FUN_104f6f60();
      FUN_10adf180("/Scripts/Entities/Items/XML/Weapons/");
      FUN_10adf180(*(undefined4 *)(iVar4 + 4));
      FUN_10adf180("_firemode.xml");
      FUN_11003730(0,local_230);
    }
    if (local_230 != local_22c) {
      DAT_1202015c = DAT_1202015c + (-1 - local_234);
      FUN_10c3d900(local_230);
    }
  }
  else if ((param_3 < 8) &&
          (local_14 = *(int *)(param_1 + 0x10), *(int *)(local_14 + 0x2264 + param_3 * 4) == iVar4))
  {
    param_2 = (char *)0x0;
    iVar5 = 0;
    FUN_10ae7630(&local_20,&param_3);
    if (local_20 != param_1 + 0x7c) {
      param_2 = (char *)(local_20 + 0x14);
    }
    iVar12 = local_14 + 0x2238;
    piVar9 = (int *)FUN_10ae7630(local_2c,&param_3);
    if (*piVar9 != iVar12) {
      iVar5 = *piVar9 + 0x14;
    }
    if (((param_2 != (char *)0x0) && (iVar5 != 0)) && (cVar3 = FUN_10ae8410(iVar5), cVar3 != '\0'))
    {
      return 0;
    }
    iVar5 = CAvatarInfo__ResolveRecordById(iVar4);
  }
  else {
    iVar5 = FUN_1053a880(0,"CAvatarInfo",0);
    if (((iVar4 != -1) &&
        (((iVar4 != 0 || (*(int *)(iVar5 + 0x30) == 0)) &&
         (iVar12 = *(int *)(iVar5 + 0x28), iVar12 != 0)))) &&
       ((iVar4 = iVar4 - *(int *)(iVar5 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar5 + 0x24))))) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / iVar12) * 4);
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + (iVar4 % iVar12) * 4);
        goto LAB_10ae4efc;
      }
    }
    iVar5 = 0;
  }
LAB_10ae4efc:
  if (iVar5 == 0) {
    return 1;
  }
  bVar15 = 0xd < param_3 - 0x1e;
  if (bVar15) {
    piVar9 = (int *)FUN_10ae5a60(&local_1c,*(undefined4 *)(iVar5 + 0x2c));
  }
  else {
    piVar9 = (int *)FUN_10ae5bb0(&local_28);
  }
  param_2._3_1_ = !bVar15;
  if (*(int *)(*piVar9 + -0xc) < 0) {
    pbVar14 = &DAT_1201fc98;
    local_8 = &DAT_1201fc98;
  }
  else {
    pbVar14 = (byte *)*piVar9;
    local_8 = pbVar14;
    FUN_10c3dab0(pbVar14 + -0xc);
  }
  if (((bVar15) && (piVar9 = (int *)(local_1c + -0xc), pbVar14 = local_8, -1 < *piVar9)) &&
     (iVar4 = FUN_10c3dad0(piVar9), pbVar14 = local_8, iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
    FUN_10c3d900(piVar9);
    pbVar14 = local_8;
  }
  if (((!bVar15) && (piVar9 = (int *)(local_28 + -0xc), pbVar14 = local_8, -1 < *piVar9)) &&
     (iVar4 = FUN_10c3dad0(piVar9), pbVar14 = local_8, iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_28 + -4));
    FUN_10c3d900(piVar9);
    pbVar14 = local_8;
  }
  pbVar13 = &DAT_11d9d32b;
  pbVar10 = pbVar14;
  do {
    bVar1 = *pbVar10;
    bVar15 = bVar1 < *pbVar13;
    if (bVar1 != *pbVar13) {
LAB_10ae5000:
      uVar11 = -(uint)bVar15 | 1;
      goto LAB_10ae5005;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar15 = bVar1 < pbVar13[1];
    if (bVar1 != pbVar13[1]) goto LAB_10ae5000;
    pbVar10 = pbVar10 + 2;
    pbVar13 = pbVar13 + 2;
  } while (bVar1 != 0);
  uVar11 = 0;
LAB_10ae5005:
  if (uVar11 == 0) {
LAB_10ae501e:
    if (!param_2._3_1_) goto LAB_10ae5044;
    bVar2 = true;
    bVar15 = false;
    local_10 = (int *)FUN_10ae5bb0(&local_18,*(undefined4 *)(iVar5 + 0x44));
  }
  else {
    if (param_2._3_1_) {
      FUN_110038f0();
      goto LAB_10ae501e;
    }
    FUN_11003730(4,pbVar14);
LAB_10ae5044:
    bVar2 = false;
    bVar15 = true;
    local_10 = (int *)FUN_10ae5a60(&local_24,*(undefined4 *)(iVar5 + 0x44));
  }
  if (pbVar14 != (byte *)*local_10) {
    if (*(int *)(pbVar14 + -0xc) < 0) {
      pbVar14 = local_8;
      if (*(int *)(*local_10 + -0xc) < 0) goto LAB_10ae50a7;
      pbVar14 = (byte *)*local_10;
    }
    else {
      if (*(int *)(*local_10 + -0xc) < 0) {
        FUN_1083ac70();
        local_8 = (byte *)*local_10;
        pbVar14 = local_8;
        goto LAB_10ae50a7;
      }
      FUN_1083ac70();
      pbVar14 = (byte *)*local_10;
    }
    local_8 = pbVar14;
    FUN_10c3dab0(pbVar14 + -0xc);
  }
LAB_10ae50a7:
  if (((bVar15) && (piVar9 = (int *)(local_24 + -0xc), pbVar14 = local_8, -1 < *piVar9)) &&
     (iVar4 = FUN_10c3dad0(piVar9), pbVar14 = local_8, iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
    FUN_10c3d900(piVar9);
    pbVar14 = local_8;
  }
  iVar4 = local_18;
  if (((bVar2) && (piVar9 = (int *)(local_18 + -0xc), pbVar14 = local_8, -1 < *piVar9)) &&
     (iVar12 = FUN_10c3dad0(piVar9), pbVar14 = local_8, iVar12 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar4 + -4));
    FUN_10c3d900(piVar9);
    pbVar14 = local_8;
  }
  pbVar13 = &DAT_11d9d32b;
  pbVar10 = pbVar14;
  do {
    bVar1 = *pbVar10;
    bVar15 = bVar1 < *pbVar13;
    if (bVar1 != *pbVar13) {
LAB_10ae5140:
      uVar11 = -(uint)bVar15 | 1;
      goto LAB_10ae5145;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar15 = bVar1 < pbVar13[1];
    if (bVar1 != pbVar13[1]) goto LAB_10ae5140;
    pbVar10 = pbVar10 + 2;
    pbVar13 = pbVar13 + 2;
  } while (bVar1 != 0);
  uVar11 = 0;
LAB_10ae5145:
  if (uVar11 != 0) {
    if (param_2._3_1_) {
      FUN_110038f0();
    }
    else {
      FUN_11003730(4,pbVar14);
    }
  }
  cVar3 = FUN_100fd0c0(iVar5 + 0x58,&DAT_11d9d32b);
  if (cVar3 == '\0') {
    FUN_11003730(5,*(undefined4 *)(iVar5 + 0x6c));
  }
  pbVar10 = pbVar14 + -0xc;
  if ((-1 < *(int *)pbVar10) && (iVar4 = FUN_10c3dad0(pbVar10), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar14 + -4));
    FUN_10c3d900(pbVar10);
  }
  return 1;
}



/* ===== FUN_10ae6470 @ 10ae6470  size=876 ===== */
// calls: atoi, CInfoRecord::GetModelString, CPetAvatarInfo::FindInfoByKey
// strings:
//   "CAvatarInfo"
//   "/Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"
//   "CPetAvatarInfo"
//   "mh_sharemem_addrinfo"

/* WARNING: Removing unreachable block (ram,0x10ae65f1) */
/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""CAvatarInfo""
     ""/Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml""
     ""CPetAvatarInfo""
     ""mh_sharemem_addrinfo"" */

void __thiscall FUN_10ae6470(int param_1,byte *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 local_204 [512];
  
  iVar4 = atoi((char *)param_2);
  iVar5 = FUN_1053a880(0,"CAvatarInfo",0);
  if (iVar4 == -1) {
    return;
  }
  if ((iVar4 == 0) && (*(int *)(iVar5 + 0x30) != 0)) {
    return;
  }
  iVar12 = *(int *)(iVar5 + 0x28);
  if (iVar12 == 0) {
    return;
  }
  iVar4 = iVar4 - *(int *)(iVar5 + 0x30);
  if (iVar4 < 0) {
    return;
  }
  if (*(int *)(iVar5 + 0x24) <= iVar4) {
    return;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / iVar12) * 4);
  if (iVar5 == 0) {
    return;
  }
  iVar4 = *(int *)(iVar5 + (iVar4 % iVar12) * 4);
  if (iVar4 == 0) {
    return;
  }
  if ((char)param_4 != '\0') {
    local_204[0] = 0;
    iVar5 = FUN_11111ec0(*(undefined4 *)(iVar4 + 0x14));
    if (iVar5 != 0) {
      uVar6 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
      CInfoRecord__GetModelString(uVar6);
      if (param_4 == (char *)0x0) {
        iVar12 = 0;
      }
      else {
        param_2 = (byte *)(param_4 + 1);
        pcVar13 = param_4;
        do {
          cVar3 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar3 != '\0');
        iVar12 = (int)pcVar13 - (int)param_2;
      }
      FUN_10a92310(param_4,iVar12);
      FUN_104f6f60();
      FUN_10ae0250("/Scripts/Entities/Items/XML/Weapons/",0x24);
      pcVar13 = *(char **)(iVar5 + 4);
      if (pcVar13 == (char *)0x0) {
        iVar5 = 0;
      }
      else {
        pcVar10 = pcVar13;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar5 = (int)pcVar10 - (int)(pcVar13 + 1);
      }
      FUN_10ae0250(pcVar13,iVar5);
      FUN_10ae0250("_firemode.xml",0xd);
      FUN_11003730(0,local_204);
    }
  }
  if ((*(int **)(param_1 + 0x10) != (int *)0x0) &&
     (iVar5 = (**(code **)(**(int **)(param_1 + 0x10) + 800))(), iVar5 != 0)) {
    piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 800))();
    iVar5 = (**(code **)(*piVar7 + 0xa8))();
    if (iVar5 == 8) {
      (**(code **)(**(int **)(param_1 + 0x10) + 800))();
    }
  }
  iVar5 = FUN_113ef9d0();
  iVar12 = CPetAvatarInfo__FindInfoByKey(0,"CPetAvatarInfo",0);
  if ((iVar5 != -1) &&
     ((((iVar5 != 0 || (*(int *)(iVar12 + 0x30) == 0)) && (*(int *)(iVar12 + 0x28) != 0)) &&
      ((iVar5 = iVar5 - *(int *)(iVar12 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar12 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar12 + 0x20) + (iVar5 / *(int *)(iVar12 + 0x28)) * 4);
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + (iVar5 % *(int *)(iVar12 + 0x28)) * 4);
      goto LAB_10ae6696;
    }
  }
  iVar5 = 0;
LAB_10ae6696:
  CInfoRecord__GetModelString(&DAT_11d9d32b);
  if (iVar5 != 0) {
    pcVar13 = *(char **)(iVar5 + 0x28);
    if (pcVar13 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar10 = pcVar13;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar5 = (int)pcVar10 - (int)(pcVar13 + 1);
    }
    FUN_1083ab70(pcVar13,iVar5);
  }
  cVar3 = FUN_100fd0c0(iVar4 + 0x18,&DAT_11d9d32b);
  if ((cVar3 == '\0') &&
     (cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x28))(*(undefined4 *)(iVar4 + 0x2c),0),
     cVar3 == '\0')) {
    FUN_110038f0(*(undefined4 *)(iVar4 + 0x2c));
  }
  cVar3 = FUN_100fd0c0(iVar4 + 0x30,&DAT_11d9d32b);
  if ((cVar3 == '\0') &&
     (cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x28))(*(undefined4 *)(iVar4 + 0x44),0),
     cVar3 == '\0')) {
    FUN_110038f0(*(undefined4 *)(iVar4 + 0x44));
  }
  cVar3 = FUN_100fd0c0(iVar4 + 0x58,&DAT_11d9d32b);
  if (cVar3 == '\0') {
    FUN_11003730(5,*(undefined4 *)(iVar4 + 0x6c));
  }
  pbVar11 = &DAT_11d9d32b;
  pbVar8 = param_2;
  do {
    bVar1 = *pbVar8;
    bVar14 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_10ae6790:
      uVar9 = -(uint)bVar14 | 1;
      goto LAB_10ae6795;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar14 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_10ae6790;
    pbVar8 = pbVar8 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar1 != 0);
  uVar9 = 0;
LAB_10ae6795:
  if (uVar9 != 0) {
    FUN_11003730(2,param_2);
  }
  pbVar8 = param_2 + -0xc;
  if ((-1 < *(int *)pbVar8) && (iVar4 = FUN_10c3dad0(pbVar8), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
    FUN_10c3d900(pbVar8);
  }
  return;
}



/* ===== FUN_10b21b70 @ 10b21b70  size=1289 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "EventName"
//   "GameCommonEvent"
//   "EventParam"
//   "Breakage:Breakage"
//   "OnHit"

/* [RE-AUTO c0]
   strings:
     ""EventName""
     ""GameCommonEvent""
     ""EventParam""
     ""Breakage:Breakage""
     ""OnHit"" */

void __thiscall FUN_10b21b70(int *param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int *piVar10;
  undefined4 *puVar11;
  ushort local_158 [20];
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  int *local_24;
  undefined8 local_20;
  float local_18;
  undefined4 local_14;
  undefined1 *local_10;
  uint local_c;
  float local_8;
  
  piVar7 = param_2;
  iVar5 = *param_2;
  if (iVar5 == 0x124) {
    puVar6 = (undefined4 *)param_2[2];
    if ((puVar6 != (undefined4 *)0x0) && (puVar6[1] == 0)) {
      local_10 = &DAT_1201fc98;
      uVar4 = CInfoRecord__GetModelString(param_2[3]);
      FUN_10a72410(uVar4);
      FUN_104f6f60();
      local_c = *puVar6;
      FUN_10b07380(&local_10);
      FUN_10b05f90();
      return;
    }
    if (param_1[6] != 0) {
      iVar5 = FUN_100b4ca0(param_1[5]);
      param_1[7] = iVar5;
      if (iVar5 != 0) {
        uVar4 = FUN_113168d0("EventName",&local_8);
        cVar2 = FUN_1046dc90(uVar4);
        if (cVar2 != '\0') {
          FUN_113168d0("GameCommonEvent");
          FUN_1025bc60(local_8,&param_2);
          uVar4 = FUN_113168d0("EventParam",&local_8);
          cVar2 = FUN_1046dc90(uVar4);
          if (cVar2 != '\0') {
            puVar6 = (undefined4 *)FUN_113168d0(piVar7[3]);
            FUN_11316b50(*puVar6);
            FUN_1025bc60(local_8,&param_2);
            if (*(char *)((int)DAT_1202e818 + 0x209) != '\0') {
              piVar7 = (int *)FUN_10262a50();
              if (piVar7 != (int *)0x0) {
                FUN_104b57b0(0);
                (**(code **)(*piVar7 + 4))(1);
                FUN_104b5770();
                return;
              }
            }
          }
        }
      }
    }
  }
  else if (iVar5 == 0x125) {
    puVar6 = (undefined4 *)param_2[3];
    if (puVar6 != (undefined4 *)0x0) {
      piVar7 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0xc))(*puVar6);
      if (piVar7 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar7 + 0x1c4))();
        if (cVar2 == '\0') {
          iVar5 = param_1[0x4c];
        }
        else {
          iVar5 = param_1[0x4b];
        }
        if (iVar5 != 0) {
          local_24 = (int *)DAT_1202e818[0x27];
          if ((local_24 != (int *)0x0) && (*(char *)((int)param_1 + 0x135) != '\0')) {
            uVar3 = (**(code **)(*local_24 + 0x18))("Breakage:Breakage",puVar6[0x53]);
            local_c = (uint)uVar3;
            if (uVar3 != 0) {
              FUN_10a6f930();
              local_bc = (**(code **)(*(int *)param_1[3] + 4))();
              iVar5 = (**(code **)(*(int *)param_1[3] + 0xcc))(&local_20);
              piVar7 = (int *)param_1[3];
              local_f4 = *(float *)(iVar5 + 8) + DAT_11de993c;
              local_128 = (float)puVar6[0x16];
              local_c0 = 0x100;
              local_130 = *(undefined8 *)(puVar6 + 0x14);
              local_124 = local_130;
              local_11c = local_128;
              puVar8 = (undefined8 *)(**(code **)(*piVar7 + 200))(local_64);
              uVar1 = *puVar8;
              local_18 = *(float *)(puVar8 + 1);
              local_20._0_4_ = (float)uVar1;
              param_2 = (int *)((float)local_130 - (float)local_20);
              local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_8 = local_130._4_4_ - local_20._4_4_;
              local_28 = local_128 - local_18;
              local_20 = uVar1;
              pfVar9 = (float *)(**(code **)(*piVar7 + 0x74))();
              local_58 = *pfVar9;
              fStack_54 = pfVar9[1];
              fStack_50 = pfVar9[2];
              fStack_4c = pfVar9[3];
              local_48 = pfVar9[4];
              fStack_44 = pfVar9[5];
              fStack_40 = pfVar9[6];
              fStack_3c = pfVar9[7];
              local_38 = pfVar9[8];
              fStack_34 = pfVar9[9];
              fStack_30 = pfVar9[10];
              fStack_2c = pfVar9[0xb];
              FUN_10a78bc0();
              local_b0 = local_38 * (float)param_2 + fStack_34 * local_8 + fStack_30 * local_28;
              local_158[0] = local_158[0] & 0xfffb;
              local_b8 = CONCAT44(local_48 * (float)param_2 + fStack_44 * local_8 +
                                  fStack_40 * local_28,
                                  local_58 * (float)param_2 + fStack_54 * local_8 +
                                  fStack_50 * local_28);
              local_f0 = 0x3f800000;
              local_18 = local_b0;
              (**(code **)(*local_24 + 0x28))(local_c,local_158);
            }
          }
          FUN_10b26050(param_1 + 8,puVar6);
          uVar4 = FUN_10a77a10("OnHit",param_1 + 8);
          FUN_10b268e0(uVar4);
          if (*(char *)((int)DAT_1202e818 + 0x209) != '\0') {
            param_2 = (int *)FUN_10ba9b00();
            piVar7 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x2c))(*puVar6);
            piVar10 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
            piVar10 = (int *)(**(code **)(*piVar10 + 0x2c))(puVar6[1]);
            if (piVar10 == (int *)0x0) {
              puVar8 = &local_20;
              local_20 = 0;
              local_18 = 0.0;
            }
            else {
              puVar8 = (undefined8 *)(**(code **)(*piVar10 + 200))(local_64);
            }
            if (piVar7 == (int *)0x0) {
              local_14 = 0;
              puVar11 = &local_14;
              local_10 = (undefined1 *)0x0;
              local_c = 0;
            }
            else {
              puVar11 = (undefined4 *)(**(code **)(*piVar7 + 200))(local_70);
            }
            FUN_10c38390(puVar6,*puVar11,puVar11[1],puVar11[2],*(undefined4 *)puVar8,
                         *(undefined4 *)((int)puVar8 + 4),*(undefined4 *)(puVar8 + 1),local_7c,
                         0xbf800000);
            return;
          }
          if (*(char *)(puVar6 + 0x54) != '\0') {
            FUN_10bab190(puVar6);
            return;
          }
        }
      }
    }
  }
  else if (((iVar5 == 0x126) && (param_2[3] != 0)) && (param_2[4] != 0)) {
    (**(code **)(*param_1 + 0xe0))(param_2[3],param_2[4]);
  }
  return;
}



/* ===== FUN_10b255c0 @ 10b255c0  size=2585 ===== */
// calls: libm_sse2_acos_precise
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall FUN_10b255c0(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  float10 fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_200 [16];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  undefined8 local_1a4;
  float local_19c;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  uint local_130;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_cc;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  ulonglong local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  uint local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float *local_10;
  float local_c;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0xc);
  if (local_8 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x118) + -8) == 0) {
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 8);
  local_38 = 0;
  uVar4 = (**(code **)(*param_2 + 4))(0,0,0xffffffff,0xffffffff,0);
  FUN_10b27660(uVar7,uVar4);
  local_cc = CONCAT44((int)local_38,(int)local_38);
  local_3c = 0;
  local_c4 = 0;
  puVar5 = (undefined8 *)(**(code **)(*local_8 + 0xd8))();
  local_50 = *puVar5;
  local_3c = *(uint *)(puVar5 + 1);
  local_44._0_4_ = (float)local_50;
  local_44._4_4_ = (float)(local_50 >> 0x20);
  local_c = (float)((uint)local_44._4_4_ ^ DAT_11de9c90);
  local_10 = (float *)((uint)(float)local_44 ^ DAT_11de9c90);
  local_24 = (float)(local_3c ^ DAT_11de9c90);
  local_b4 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_1ec = 0;
  fVar11 = local_c * local_c + (float)local_10 * (float)local_10 + local_24 * local_24 +
           DAT_11de98a0;
  auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  local_b8 = auVar14._0_4_;
  local_b8 = (DAT_11de9938 - local_b8 * fVar11 * local_b8 * DAT_11de98e8) * local_b8;
  _local_c0 = CONCAT44(local_c * local_b8,(float)local_10 * local_b8);
  local_b8 = local_24 * local_b8;
  local_1f0 = 0;
  local_44 = local_50;
  local_8 = (int *)local_24;
  local_1e8 = FUN_10b27fd0(*(undefined4 *)(param_1 + 0x118));
  local_a4 = *(undefined4 *)(param_1 + 0x104);
  local_ec = 0;
  local_e8 = 0;
  fVar11 = (float)local_44 * (float)local_44 + local_44._4_4_ * local_44._4_4_ + (float)local_38;
  if (fVar11 <= DAT_11cbf070) {
    local_198 = DAT_1201fd04;
    local_190 = DAT_1201fd0c;
  }
  else {
    auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar14._0_4_;
    local_198._4_4_ = (float)(local_50 >> 0x20);
    fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
    local_190 = fVar12 * (float)local_38;
    local_198 = CONCAT44(local_198._4_4_ * fVar12,(float)local_44 * fVar12);
  }
  local_1e4 = local_1e8;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
  iVar2 = *piVar6;
  uVar7 = (**(code **)(*param_2 + 4))();
  (**(code **)(iVar2 + 0xc))(uVar7);
  fVar11 = local_c * local_c + (float)local_10 * (float)local_10 + (float)local_8 * (float)local_8;
  if (fVar11 <= DAT_11cbf070) {
    local_18c = DAT_1201fd04;
    local_184 = DAT_1201fd0c;
  }
  else {
    auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar14._0_4_;
    fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
    local_184 = (float)local_8 * fVar12;
    local_18c = CONCAT44(local_c * fVar12,(float)local_10 * fVar12);
  }
  local_1a8 = 0.0;
  local_1b0 = CONCAT44((int)local_38,(int)local_38);
  local_24 = 1.0;
  local_16c = 0x3f800000;
  local_174 = CONCAT44(DAT_11de9918,DAT_11de9918);
  pfVar8 = (float *)(**(code **)(*param_2 + 0xbc))();
  fVar11 = DAT_11de9918;
  if (*pfVar8 != (float)local_38) {
    pfVar8 = (float *)(**(code **)(*param_2 + 0xbc))();
    fVar11 = DAT_11de9918 / *pfVar8;
  }
  local_8 = (int *)fVar11;
  pfVar8 = (float *)(**(code **)(*param_2 + 0xd0))(local_48);
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 200))(&local_2c);
  local_18 = pfVar8[3];
  fVar11 = *pfVar8;
  fVar12 = pfVar8[1];
  uVar1 = *puVar5;
  fVar13 = pfVar8[2];
  local_1c = (float)((uint)fVar11 ^ DAT_11de9c90);
  local_68 = *(uint *)(puVar5 + 1);
  local_70._0_4_ = (uint)uVar1;
  local_70._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar15 = (float)((uint)local_70 ^ DAT_11de9c90);
  fVar18 = (float)(local_70._4_4_ ^ DAT_11de9c90);
  local_14 = (float)((uint)fVar12 ^ DAT_11de9c90);
  fVar19 = (float)(local_68 ^ DAT_11de9c90);
  local_10 = (float *)((uint)fVar13 ^ DAT_11de9c90);
  fVar17 = (fVar13 * fVar18 - fVar12 * fVar19) + local_18 * fVar15;
  fVar16 = (fVar11 * fVar19 - fVar13 * fVar15) + local_18 * fVar18;
  fVar11 = (fVar12 * fVar15 - fVar11 * fVar18) + local_18 * fVar19;
  local_c = fVar13 * fVar16 - pfVar8[1] * fVar11;
  local_c = fVar15 + local_c + local_c;
  fVar11 = *pfVar8 * fVar11 - fVar13 * fVar17;
  fVar16 = pfVar8[1] * fVar17 - *pfVar8 * fVar16;
  fVar17 = (local_1a8 * local_14 - local_1b0._4_4_ * (float)local_10) + local_18 * (float)local_1b0;
  fVar15 = ((float)local_1b0 * (float)local_10 - local_1a8 * local_1c) + local_18 * local_1b0._4_4_;
  fVar13 = (local_1b0._4_4_ * local_1c - (float)local_1b0 * local_14) + local_18 * local_1a8;
  fVar12 = local_14 * fVar13 - (float)local_10 * fVar15;
  fVar12 = (float)local_1b0 + fVar12 + local_c + fVar12;
  local_50 = (ulonglong)(uint)fVar12;
  fVar13 = (float)local_10 * fVar17 - local_1c * fVar13;
  fVar15 = local_1c * fVar15 - local_14 * fVar17;
  local_19c = (fVar15 + local_1a8 + fVar16 + fVar19 + fVar16 + fVar15) * (float)local_8;
  local_1a4 = CONCAT44((fVar13 + local_1b0._4_4_ + fVar11 + fVar18 + fVar11 + fVar13) *
                       (float)local_8,fVar12 * (float)local_8);
  fVar15 = (local_14 * local_184 - (float)local_10 * local_18c._4_4_) + local_18 * (float)local_18c;
  fVar13 = ((float)local_10 * (float)local_18c - local_1c * local_184) + local_18 * local_18c._4_4_;
  fVar12 = (local_1c * local_18c._4_4_ - local_14 * (float)local_18c) + local_18 * local_184;
  fVar11 = local_14 * fVar12 - (float)local_10 * fVar13;
  fVar11 = (float)local_18c + fVar11 + fVar11;
  fVar12 = (float)local_10 * fVar15 - local_1c * fVar12;
  local_178 = local_1c * fVar13 - local_14 * fVar15;
  fVar12 = fVar12 + local_18c._4_4_ + fVar12;
  fVar13 = (float)local_38;
  local_180 = CONCAT44(fVar12,fVar11);
  local_178 = local_178 + local_184 + local_178;
  fVar16 = fVar11 - local_178 * fVar13;
  fVar15 = local_178 * fVar13 - fVar12;
  local_8 = (int *)(fVar12 * fVar13);
  local_20 = (float)local_8 - fVar11 * fVar13;
  fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + local_20 * local_20;
  local_70 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar17 = auVar14._0_4_;
    fVar17 = (DAT_11de9938 - fVar17 * fVar12 * fVar17 * DAT_11de98e8) * fVar17;
    local_14 = fVar17 * fVar15;
    local_1c = fVar17 * fVar16;
    local_18 = fVar17 * local_20;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar17) {
      dVar10 = (double)(fVar11 * fVar13 + (float)local_8 + local_178);
      local_24 = local_178;
      libm_sse2_acos_precise();
      local_8 = (int *)((int)&local_38 + 4);
      local_10 = &local_c;
      local_20 = (float)dVar10 * DAT_11de98e8;
      fVar3 = (float10)fcos((float10)local_20);
      fVar9 = (float10)fsin((float10)local_20);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_38._4_4_ = (float)fVar3;
      local_c = (float)fVar9;
      local_30 = local_14 * local_c;
      local_2c = local_1c * local_c;
      local_28 = local_18 * local_c;
      local_24 = local_38._4_4_;
      FUN_10abc150(&local_30);
      local_24 = (float)local_3c;
      local_138 = local_44;
      goto LAB_10b25edf;
    }
  }
  local_138 = CONCAT44(fVar13,fVar13);
  local_24 = 0.0;
LAB_10b25edf:
  local_130 = (uint)local_24;
  local_148 = 0x43fa0000;
  local_150 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_160 = 0x43fa0000;
  local_24 = 500.0;
  local_13c = 0x43fa0000;
  local_168 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_144 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1b8 = 0xffffffff;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
  local_64 = (**(code **)(*piVar6 + 0x18))("GameOnHit");
  local_58 = local_200;
  local_60 = 0x4ffff;
  local_5c = 0;
  local_54 = 0;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar2 = *piVar6;
  uVar7 = (**(code **)(*param_2 + 4))();
  piVar6 = (int *)(**(code **)(iVar2 + 0x144))(uVar7);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x24))(&local_64);
  }
  return;
}



/* ===== FUN_10b78ab0 @ 10b78ab0  size=2470 ===== */
// calls: memset
// strings:
//   "Firemode: %s (%.1f)"
//   "pierceability"
//   "RayWorldIntersection(Game)"
//   "%s (%i)"
//   "%.1f m"
//   "%.1f kg"
//   "pe_type: %i"
//   "%.2f submerged"
//   "%.2f m/s"
//   "GetFrozenAmount"
//   "Frozen: %.2f"
//   "%i health"
//   "%.0f%% health"
//   "%i passengers"
//   "Running"
//   "GetHealth"
//   "%.0f health"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""Firemode: %s (%.1f)""
     ""pierceability""
     ""RayWorldIntersection(Game)""
     ""%s (%i)""
     ""%.1f m""
     ""%.1f kg""
     ""pe_type: %i""
     ""%.2f submerged""
     ""%.2f m/s""
     ""GetFrozenAmount"" */

void __fastcall FUN_10b78ab0(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float local_d8;
  int *local_d4;
  short local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_98 [12];
  float local_8c;
  float local_88;
  float local_84 [3];
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  float *local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  cVar2 = (**(code **)(*param_1 + 0x90))();
  if (cVar2 != '\0') {
    piVar9 = (int *)DAT_1202e818[4];
    local_20 = piVar9;
    local_14 = (int *)(**(code **)(*piVar9 + 0x468))();
    local_10 = (int *)0x2000000;
    (**(code **)(*local_14 + 4))(&local_10);
    iVar3 = (**(code **)(*piVar9 + 0x174))
                      (0x3fb33333,&DAT_11df796c,0,"Firemode: %s (%.1f)",
                       *(undefined4 *)(param_1[0x12f] + param_1[0x132] * 8),
                       (double)*(float *)(param_1[0x12f] + 4 + param_1[0x132] * 8));
    iVar3 = (**(code **)(*piVar9 + 0x178))((float)(iVar3 + -0x23));
    FUN_10b6ffa0(piVar9,(float)iVar3 / DAT_11cbf0b8);
    pcVar10 = "pierceability";
    local_18 = (int *)0x40f;
    pbVar4 = *(byte **)(param_1[0x12f] + param_1[0x132] * 8);
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10b78bb0:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_10b78bb5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10b78bb0;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10b78bb5:
    if (uVar5 == 0) {
      uVar5 = FUN_11a89150();
      local_18 = (int *)(uVar5 & 0xf);
    }
    iVar3 = (**(code **)(*(int *)*DAT_1202e818 + 0x1d0))();
    local_28 = (ulonglong)(uint)(*(float *)(iVar3 + 4) * DAT_11cc9180);
    local_8 = (int *)(*(float *)(iVar3 + 0x14) * DAT_11cc9180);
    local_30 = (ulonglong)(uint)(*(float *)(iVar3 + 0xc) + *(float *)(iVar3 + 4));
    fVar13 = *(float *)(iVar3 + 0x24) * DAT_11cc9180;
    local_10 = (int *)(*(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x14));
    local_34 = *(float *)(iVar3 + 0x2c) + *(float *)(iVar3 + 0x24);
    piVar6 = (int *)DAT_1202e818[0x10];
    memset(local_84,0,0x48);
    local_70 = local_34;
    local_5c = (uint)local_18;
    local_54 = &local_d8;
    local_78 = CONCAT44(local_10,(int)local_30);
    local_6c = CONCAT44(local_8,(int)local_28);
    local_60 = 0x11f;
    local_58 = 0;
    local_50 = 1.4013e-45;
    local_84[0] = 0.0;
    local_84[1] = 0.0;
    local_4c = 0.0;
    local_44 = 0;
    local_48 = 0;
    local_64 = fVar13;
    iVar3 = (**(code **)(*piVar6 + 0x8c))(local_84,"RayWorldIntersection(Game)",4);
    if (iVar3 != 0) {
      local_10 = (int *)(**(code **)(*(int *)DAT_1202e818[0xd] + 0x298))();
      piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      uVar7 = (**(code **)(*piVar6 + 0x68))();
      local_30 = CONCAT44(uVar7,(undefined4)local_30);
      piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      local_8 = (int *)(**(code **)(*piVar6 + 0x80))();
      iVar3 = (**(code **)(*piVar9 + 0x178))();
      iVar11 = 5 - (int)((float)iVar3 * DAT_11de9a5c);
      local_c = iVar11;
      iVar3 = (**(code **)(*piVar9 + 0x174))();
      local_1c = 0x800000c8;
      fVar13 = (float)iVar3 * DAT_11de9a5c;
      iVar3 = -(int)fVar13 + -10;
      local_3c = local_bc + local_b0 * DAT_11de9900;
      local_38 = local_b8 + local_ac * DAT_11de9900;
      local_34 = local_b4 + local_a8 * DAT_11de9900;
      (**(code **)(*local_14 + 0x18))(&local_bc,&local_1c,&local_3c,&local_1c,0x3f800000);
      (**(code **)(*local_14 + 0x5c))(&local_3c,&local_b0,0x3dcccccd,0x3e4ccccd,&local_1c,1);
      local_14 = (int *)(**(code **)(*local_d4 + 0x28))(2);
      piVar9 = local_20;
      if (local_14 != (int *)0x0) {
        iVar3 = -(int)fVar13 + 5;
        uVar7 = (**(code **)(*local_14 + 0x48))();
        piVar9 = local_20;
        FUN_10b6ffa0(local_20,(float)iVar11,(float)iVar3,0x3fb33333,&DAT_11df796c,0,uVar7);
      }
      piVar6 = (int *)(**(code **)(*local_10 + 0x4c))((int)local_c8,0);
      pcVar10 = (char *)(**(code **)(*piVar6 + 0xc))();
      if (*pcVar10 != '\0') {
        iVar3 = iVar3 + 0xf;
        FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar3,0x3f99999a,&DAT_11df796c,0,"%s (%i)",pcVar10
                     ,(int)local_c8);
      }
      iVar11 = iVar3 + 0xf;
      FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar11,0x3f99999a,&DAT_11df796c,0,"%.1f m",
                   (double)local_d8);
      if (local_14 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*local_14 + 0x150))(2);
        if (piVar6 == (int *)0x0) {
          local_18 = (int *)0x0;
        }
        else {
          local_18 = (int *)(**(code **)(*piVar6 + 0x38))();
        }
        local_10 = local_18;
        piVar6 = (int *)(**(code **)(*local_14 + 0x16c))();
        local_28._4_4_ = piVar6;
        if (piVar6 != (int *)0x0) {
          FUN_10a70bf0();
          iVar8 = (**(code **)(*local_28._4_4_ + 0x18))(local_98);
          if (iVar8 != 0) {
            iVar8 = iVar11;
            if (0.0 < local_4c) {
              iVar8 = iVar3 + 0x1e;
              FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar8,0x3f99999a,&DAT_11df796c,0,"%.1f kg",
                           (double)local_4c);
            }
            iVar11 = iVar8 + 0xf;
            uVar7 = (**(code **)(*local_28._4_4_ + 4))();
            FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar11,0x3f99999a,&DAT_11df796c,0,
                         "pe_type: %i",uVar7);
            if (0.0 < local_50) {
              iVar11 = iVar8 + 0x1e;
              FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar11,0x3f99999a,&DAT_11df796c,0,
                           "%.2f submerged",(double)local_50);
            }
            fVar13 = local_8c * local_8c + local_88 * local_88 + local_84[0] * local_84[0];
            if (DAT_11de98b4 < fVar13) {
              iVar11 = iVar11 + 0xf;
              FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar11,0x3f99999a,&DAT_11df796c,0,"%.2f m/s"
                           ,(double)SQRT(fVar13));
            }
          }
        }
        if (local_18 != (int *)0x0) {
          local_28._4_4_ = (int *)0x0;
          cVar2 = FUN_10a68b10("GetFrozenAmount",(int)&local_28 + 4);
          piVar6 = local_28._4_4_;
          if ((cVar2 != '\0') && (local_28._4_4_ != (int *)0x0)) {
            local_28._4_4_ = (int *)0x0;
            FUN_10b79a10(DAT_1202e818[0xc],piVar6,&local_10,(int)&local_28 + 4);
            if (0.0 < (float)local_28._4_4_) {
              iVar11 = iVar11 + 0xf;
              FUN_10b6ffa0(piVar9,(float)local_c,(float)iVar11,0x3f99999a,&DAT_11df796c,0,
                           "Frozen: %.2f",(double)(float)local_28._4_4_);
            }
          }
        }
        iVar3 = *local_30._4_4_;
        uVar7 = (**(code **)(*local_14 + 4))();
        piVar9 = (int *)(**(code **)(iVar3 + 0xc))(uVar7);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x304))();
          uVar7 = FUN_11a897a0();
          FUN_10b6ffa0(local_20,(float)local_c,(float)(iVar11 + 0xf),0x3f99999a,&DAT_11df796c,0,
                       "%i health",uVar7);
          return;
        }
        iVar3 = *local_8;
        uVar7 = (**(code **)(*local_14 + 4))();
        local_8 = (int *)(**(code **)(iVar3 + 0x30))(uVar7);
        if (local_8 == (int *)0x0) {
          if (local_18 != (int *)0x0) {
            local_8 = (int *)0x0;
            cVar2 = FUN_10a68b10("GetHealth",&local_8);
            piVar9 = local_8;
            if ((cVar2 != '\0') && (local_8 != (int *)0x0)) {
              local_8 = (int *)0x0;
              cVar2 = FUN_10b79a10(DAT_1202e818[0xc],piVar9,&local_10,&local_8);
              if (cVar2 != '\0') {
                FUN_10b6ffa0(local_20,(float)local_c,(float)(iVar11 + 0xf),0x3f99999a,&DAT_11df796c,
                             0,"%.0f health",(double)(float)local_8);
              }
            }
          }
        }
        else {
          iVar3 = (**(code **)(*local_8 + 0x70))();
          FUN_10b6ffa0(local_20,(float)local_c,(float)(iVar11 + 0xf),0x3f99999a,&DAT_11df796c,0,
                       "%.0f%% health",(double)(*(float *)(iVar3 + 0x10) * DAT_11de9a30));
          piVar9 = local_20;
          FUN_10b6ffa0(local_20,(float)local_c,(float)(iVar11 + 0x1e),0x3f99999a,&DAT_11df796c,0,
                       "%i passengers",*(undefined4 *)(iVar3 + 0x1c));
          iVar3 = (**(code **)(*local_8 + 0x118))();
          if (iVar3 != 0) {
            piVar6 = (int *)(**(code **)(*local_8 + 0x118))();
            cVar2 = (**(code **)(*piVar6 + 100))();
            if (cVar2 != '\0') {
              FUN_10b6ffa0(piVar9,(float)local_c,(float)(iVar11 + 0x2d),0x3f99999a,&DAT_11df796c,0,
                           "Running");
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10bc0de0 @ 10bc0de0  size=11675 ===== */
// strings:
//   "moveleft"
//   "moveright"
//   "moveforward"
//   "moveback"
//   "crouch"
//   "prone"
//   "togglestance"
//   "sprint"
//   "special"
//   "leanleft"
//   "leanright"
//   "rotateyaw"
//   "rotatepitch"
//   "rotatepitchfp"
//   "nextspawnpoint"
//   "flymode"
//   "godmode"
//   "toggleaidebugdraw"
//   "togglepdrawhelpers"
//   "toggle_airstrike"

/* [RE-AUTO c0]
   strings:
     ""moveleft""
     ""moveright""
     ""moveforward""
     ""moveback""
     ""crouch""
     ""prone""
     ""togglestance""
     ""sprint""
     ""special""
     ""leanleft"" */

int * __fastcall FUN_10bc0de0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveleft");
  piVar2 = (int *)*param_1;
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    *param_1 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveright");
  piVar2 = (int *)param_1[1];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveforward");
  piVar2 = (int *)param_1[2];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[2] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveback");
  piVar2 = (int *)param_1[3];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[3] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11ccda2c);
  piVar2 = (int *)param_1[4];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[4] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("crouch");
  piVar2 = (int *)param_1[5];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[5] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("prone");
  piVar2 = (int *)param_1[6];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[6] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("togglestance");
  piVar2 = (int *)param_1[7];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[7] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("sprint");
  piVar2 = (int *)param_1[8];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[8] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11dce988);
  piVar2 = (int *)param_1[9];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[9] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("special");
  piVar2 = (int *)param_1[10];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[10] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("leanleft");
  piVar2 = (int *)param_1[0xb];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xb] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("leanright");
  piVar2 = (int *)param_1[0xc];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xc] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotateyaw");
  piVar2 = (int *)param_1[0xd];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xd] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotatepitch");
  piVar2 = (int *)param_1[0xe];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xe] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotatepitchfp");
  piVar2 = (int *)param_1[0xf];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xf] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("nextspawnpoint");
  piVar2 = (int *)param_1[0x10];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x10] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("flymode");
  piVar2 = (int *)param_1[0x11];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x11] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("godmode");
  piVar2 = (int *)param_1[0x12];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x12] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("toggleaidebugdraw");
  piVar2 = (int *)param_1[0x13];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x13] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("togglepdrawhelpers");
  piVar2 = (int *)param_1[0x14];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x14] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("toggle_airstrike");
  piVar2 = (int *)param_1[0x15];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x15] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("ulammo");
  piVar2 = (int *)param_1[0x16];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x16] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("giveitems");
  piVar2 = (int *)param_1[0x17];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x17] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("view_param_up");
  piVar2 = (int *)param_1[0x18];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x18] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("view_param_down");
  piVar2 = (int *)param_1[0x19];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x19] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("attack1");
  piVar2 = (int *)param_1[0x1a];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1a] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("attack2");
  piVar2 = (int *)param_1[0x1b];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1b] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11ccdb2c);
  piVar2 = (int *)param_1[0x1c];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1c] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("modify");
  piVar2 = (int *)param_1[0x1d];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1d] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("additem");
  piVar2 = (int *)param_1[0x1e];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1e] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("nextitem");
  piVar2 = (int *)param_1[0x1f];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1f] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("previtem");
  piVar2 = (int *)param_1[0x20];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x20] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("small");
  piVar2 = (int *)param_1[0x21];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x21] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("medium");
  piVar2 = (int *)param_1[0x22];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x22] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11cbea6c);
  piVar2 = (int *)param_1[0x23];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x23] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("explosive");
  piVar2 = (int *)param_1[0x24];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x24] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("handgrenade");
  piVar2 = (int *)param_1[0x25];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x25] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("xi_handgrenade");
  piVar2 = (int *)param_1[0x26];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x26] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("holsteritem");
  piVar2 = (int *)param_1[0x27];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x27] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("utility");
  piVar2 = (int *)param_1[0x28];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x28] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("debug");
  piVar2 = (int *)param_1[0x29];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x29] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11cc90a4);
  piVar2 = (int *)param_1[0x2a];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2a] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("firemode");
  piVar2 = (int *)param_1[0x2b];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2b] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("binoculars");
  piVar2 = (int *)param_1[0x2c];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2c] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("objectives");
  piVar2 = (int *)param_1[0x2d];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2d] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("grenade");
  piVar2 = (int *)param_1[0x2e];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2e] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("xi_grenade");
  piVar2 = (int *)param_1[0x2f];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2f] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("speedmode");
  piVar2 = (int *)param_1[0x30];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x30] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("strengthmode");
  piVar2 = (int *)param_1[0x31];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x31] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("defensemode");
  piVar2 = (int *)param_1[0x32];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x32] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_1083aa20("melee1key");
  FUN_1083aa20("melee2key");
  FUN_1083aa20(&DAT_11ccdbec);
  FUN_1083aa20(&DAT_11ccdbf4);
  FUN_1083aa20("dodge");
  FUN_1083aa20("jumpEvade");
  FUN_1083aa20("defense");
  FUN_1083aa20("holster");
  FUN_1083aa20("catHandcart");
  FUN_1083aa20("reload");
  FUN_1083aa20("MhItem_1");
  FUN_1083aa20("MhItem_2");
  FUN_1083aa20("MhItem_3");
  FUN_1083aa20("MhItem_4");
  FUN_1083aa20("MhItem_5");
  FUN_1083aa20("MhItem_6");
  FUN_1083aa20("MhItem_7");
  FUN_1083aa20("MhItem_8");
  FUN_1083aa20("MhItem_9");
  FUN_1083aa20("MhItem_0");
  FUN_1083aa20("MSkill_1");
  FUN_1083aa20("MSkill_2");
  FUN_1083aa20("MSkill_3");
  FUN_1083aa20("MSkill_4");
  FUN_1083aa20("MSkill_5");
  FUN_1083aa20("MSkill_6");
  FUN_1083aa20("MSkill_7");
  FUN_1083aa20("QuickItemPage_1");
  FUN_1083aa20("QuickItemPage_2");
  FUN_1083aa20("QuickItemPage_3");
  FUN_1083aa20("GP_moveleft_Focus");
  FUN_1083aa20("GP_moveright_Focus");
  FUN_1083aa20("GP_moveup_Focus");
  FUN_1083aa20("GP_movedown_Focus");
  FUN_1083aa20("GP_moveleft_Quick");
  FUN_1083aa20("GP_moveright_Quick");
  FUN_1083aa20("GP_moveup_Quick");
  FUN_1083aa20("GP_movedown_Quick");
  FUN_1083aa20("GP_moveleft_Bullet");
  FUN_1083aa20("GP_moveright_Bullet");
  FUN_1083aa20("GP_moveup_Bullet");
  FUN_1083aa20("GP_movedown_Bullet");
  FUN_1083aa20("GP_moveleft");
  FUN_1083aa20("GP_moveright");
  FUN_1083aa20("GP_moveup");
  FUN_1083aa20("GP_movedown");
  FUN_1083aa20(&DAT_11ccddb4);
  FUN_1083aa20("GP_useitem");
  FUN_1083aa20("GP_useitem1");
  FUN_1083aa20(&DAT_11ccddd4);
  FUN_1083aa20(&DAT_11ccdddc);
  FUN_1083aa20(&DAT_11ccdde4);
  FUN_1083aa20("ui_unGamePad_back");
  FUN_1083aa20("ui_unGamePad_start");
  FUN_1083aa20("GP_lb");
  FUN_1083aa20("GP_lt");
  FUN_1083aa20("GP_rb");
  FUN_1083aa20("GP_rt");
  FUN_1083aa20("GP_open");
  FUN_1083aa20("GP_close");
  FUN_1083aa20("interact");
  FUN_1083aa20("bulletf1");
  FUN_1083aa20("bulletf2");
  FUN_1083aa20("bulletf3");
  FUN_1083aa20("bulletf4");
  FUN_1083aa20("bulletf5");
  FUN_1083aa20("zoom_in");
  FUN_1083aa20("zoom_out");
  FUN_1083aa20("invert_mouse");
  FUN_1083aa20("thirdperson");
  FUN_1083aa20(&DAT_11ccde6c);
  FUN_1083aa20("xi_use");
  FUN_1083aa20("focus");
  FUN_1083aa20(&DAT_11ccde78);
  FUN_1083aa20("gyroscope");
  FUN_1083aa20("gboots");
  FUN_1083aa20("lights");
  FUN_1083aa20("radio_group_0");
  FUN_1083aa20("radio_group_1");
  FUN_1083aa20("radio_group_2");
  FUN_1083aa20("radio_group_3");
  FUN_1083aa20("radio_group_4");
  FUN_1083aa20("voice_chat_talk");
  FUN_1083aa20(&DAT_11ccdefc);
  FUN_1083aa20(&DAT_11ccdf04);
  FUN_1083aa20("ai_goto");
  FUN_1083aa20("ai_follow");
  FUN_1083aa20("xi_zoom");
  FUN_1083aa20("xi_binoculars");
  FUN_1083aa20("xi_movex");
  FUN_1083aa20("xi_movey");
  FUN_1083aa20("xi_left_aim_movex");
  FUN_1083aa20("xi_left_aim_movey");
  FUN_1083aa20("xi_right_aim_movex");
  FUN_1083aa20("xi_right_aim_movey");
  FUN_1083aa20("xi_rotatepitch");
  FUN_1083aa20("xi_rotateyaw");
  FUN_1083aa20("xi_rotatepitch_up");
  FUN_1083aa20("xi_rotatepitch_down");
  FUN_1083aa20("xi_rotateyaw_left");
  FUN_1083aa20("xi_rotateyaw_right");
  FUN_1083aa20("xi_gun_aim_rotatepitch_up");
  FUN_1083aa20("xi_gun_aim_rotatepitch_down");
  FUN_1083aa20("xi_gun_aim_rotateyaw_left");
  FUN_1083aa20("xi_gun_aim_rotateyaw_right");
  FUN_1083aa20("xi_camera_reset");
  FUN_1083aa20("xi_boss_camera_reset");
  FUN_1083aa20("xi_switch_lb");
  FUN_1083aa20("xi_switch_rb");
  FUN_1083aa20("xi_switch_l3");
  FUN_1083aa20("xi_switch_r3");
  FUN_1083aa20("xi_v_rotatepitch");
  FUN_1083aa20("xi_v_rotateyaw");
  FUN_1083aa20("xi_disconnect");
  FUN_1083aa20("v_changeseat1");
  FUN_1083aa20("v_changeseat2");
  FUN_1083aa20("v_changeseat3");
  FUN_1083aa20("v_changeseat4");
  FUN_1083aa20("v_changeseat5");
  FUN_1083aa20("v_changebullet1");
  FUN_1083aa20("v_changebullet2");
  FUN_1083aa20("v_changefiremode");
  FUN_1083aa20("v_changeview");
  FUN_1083aa20("v_viewoption");
  FUN_1083aa20("v_zoom_in");
  FUN_1083aa20("v_zoom_out");
  FUN_1083aa20("v_attack1");
  FUN_1083aa20("v_attack2");
  FUN_1083aa20("v_firemode");
  FUN_1083aa20("v_lights");
  FUN_1083aa20("v_horn");
  FUN_1083aa20("v_exit");
  FUN_1083aa20("v_rotateyaw");
  FUN_1083aa20("v_rotatepitch");
  FUN_1083aa20("v_moveforward");
  FUN_1083aa20("v_moveback");
  FUN_1083aa20("v_moveup");
  FUN_1083aa20("v_movedown");
  FUN_1083aa20("v_rotatedir");
  FUN_1083aa20("v_turnleft");
  FUN_1083aa20("v_turnright");
  FUN_1083aa20("v_strafeleft");
  FUN_1083aa20("v_straferight");
  FUN_1083aa20("v_rollleft");
  FUN_1083aa20("v_rollright");
  FUN_1083aa20("v_pitchup");
  FUN_1083aa20("v_pitchdown");
  FUN_1083aa20("v_brake");
  FUN_1083aa20("v_afterburner");
  FUN_1083aa20("v_boost");
  FUN_1083aa20("v_changeseat");
  FUN_1083aa20("v_debug_1");
  FUN_1083aa20("v_debug_2");
  FUN_1083aa20("buyammo");
  FUN_1083aa20("loadLastSave");
  FUN_1083aa20("debug_ag_step");
  FUN_1083aa20("toggle_debugtimer");
  FUN_1083aa20("speedup_timer");
  FUN_1083aa20("slowdown_timer");
  FUN_1083aa20("toggle_game_freeze");
  FUN_1083aa20("toggle_bt_debugger");
  FUN_1083aa20("toggle_camera_pitch_style");
  FUN_1083aa20("first_atk_adjust_dir");
  FUN_1083aa20("other_atk_adjust_dir");
  FUN_1083aa20("stop_rec");
  FUN_1083aa20("stop_rep");
  FUN_1083aa20("start_auto_record");
  FUN_1083aa20("end_auto_record");
  FUN_1083aa20("start_auto_test");
  FUN_1083aa20("end_auto_test");
  FUN_1083aa20("movement_error_notify");
  FUN_1083aa20("debug_mouse_z");
  FUN_1083aa20("flymode_movedown");
  FUN_1083aa20("flymode_moveup");
  FUN_1083aa20("rotate_speeddown");
  FUN_1083aa20("rotate_speedup");
  FUN_1083aa20("toggle_camera_smooth_mode");
  FUN_1083aa20("toggle_spectator_mode");
  FUN_1083aa20("switch_spectator_target");
  FUN_1083aa20("g_DoTestLua");
  FUN_1083aa20("scores");
  FUN_1083aa20("ui_f8");
  FUN_1083aa20("ui_f9");
  FUN_1083aa20("ui_toggle_pause");
  FUN_1083aa20("ui_start_pause");
  FUN_1083aa20("ui_space");
  FUN_1083aa20("ui_up");
  FUN_1083aa20("ui_down");
  FUN_1083aa20("ui_left");
  FUN_1083aa20("ui_right");
  FUN_1083aa20("ui_mouse1_click");
  FUN_1083aa20("ui_mouse2_click");
  FUN_1083aa20("ui_esc_click");
  FUN_1083aa20("ui_back");
  FUN_1083aa20("ui_mode");
  FUN_1083aa20("ui_confirm");
  FUN_1083aa20("ui_reset");
  FUN_1083aa20("ui_skip_video");
  FUN_1083aa20("ui_taskuishortcut");
  FUN_1083aa20("ui_inventoryuishortcut");
  FUN_1083aa20("ui_switchTeam");
  FUN_1083aa20("ui_equipSkill");
  FUN_1083aa20("ui_enter");
  FUN_1083aa20("ui_npEnterChat");
  FUN_1083aa20("ui_playerproperty");
  FUN_1083aa20("ui_storehouse");
  FUN_1083aa20("ui_manufacture");
  FUN_1083aa20("ui_social");
  FUN_1083aa20("ui_guild");
  FUN_1083aa20("ui_mailbox");
  FUN_1083aa20("ui_Skillvideo");
  FUN_1083aa20("ui_hunterRoad");
  FUN_1083aa20("ui_petlist");
  FUN_1083aa20("ui_OpenChating");
  FUN_1083aa20("ui_OpenChating2");
  FUN_1083aa20("ui_CopyChat");
  FUN_1083aa20("ui_PasteChat");
  FUN_1083aa20("ui_SelectChat");
  FUN_1083aa20("ui_ChatQuickBack");
  FUN_1083aa20("ui_HunterBook");
  FUN_1083aa20("ui_RaidHud");
  FUN_1083aa20("ui_FarmMain");
  FUN_1083aa20("ui_FarmSeed");
  FUN_1083aa20("ui_RankingList");
  FUN_1083aa20("ui_WeaponTalent");
  FUN_1083aa20("ui_HunterStarBackSpace");
  FUN_1083aa20("ui_PvpScoreList");
  FUN_1083aa20("ui_Mart");
  FUN_1083aa20("ui_clan");
  FUN_1083aa20("ui_giftpack");
  FUN_1083aa20("ui_systemconfig");
  FUN_1083aa20("ui_callQuickSpeak");
  FUN_1083aa20("ui_callQuickSpeakConfig");
  FUN_1083aa20("ui_PrivateChat");
  FUN_1083aa20("ui_WorldMap");
  FUN_1083aa20("ui_Illustrate");
  FUN_1083aa20("ui_SoulStone");
  FUN_1083aa20("ui_Wardrobe");
  FUN_1083aa20("testup");
  FUN_1083aa20("testdown");
  FUN_1083aa20("testleft");
  FUN_1083aa20("testright");
  FUN_1083aa20("close_look");
  FUN_1083aa20("playerlmouseclick");
  FUN_1083aa20("TaskUIShortCut");
  FUN_1083aa20("rage_1");
  FUN_1083aa20("rage_2");
  FUN_1083aa20("rage_3");
  FUN_1083aa20("GiantSwordExplode");
  FUN_1083aa20("screenshot");
  FUN_1083aa20("iterate_next_item");
  FUN_1083aa20("iterate_prev_item");
  FUN_1083aa20("iterate_next_item_alt");
  FUN_1083aa20("iterate_prev_item_alt");
  FUN_1083aa20("iterate_next_item_ctrl");
  FUN_1083aa20("iterate_prev_item_ctrl");
  FUN_1083aa20("iterate_next_item_shift");
  FUN_1083aa20("iterate_prev_item_shift");
  FUN_1083aa20("show_debugUI");
  FUN_1083aa20("show_qt");
  FUN_1083aa20("enter_team");
  FUN_1083aa20("switchflyingcamera");
  FUN_1083aa20("toggleflyingcamera");
  FUN_1083aa20("TeamViewPlayer");
  FUN_1083aa20("TeamViewPet");
  FUN_1083aa20("handle_adaptation");
  FUN_1083aa20("enable_video_cam_mode");
  FUN_1083aa20("toggle_video_cam");
  FUN_1083aa20("videocam_up");
  FUN_1083aa20("videocam_down");
  FUN_1083aa20("videocam_left");
  FUN_1083aa20("videocam_right");
  FUN_1083aa20("enable_circle_cam_mode");
  FUN_1083aa20("videocam_speedup");
  FUN_1083aa20("videocam_speeddown");
  FUN_1083aa20("toogle_caminfo");
  FUN_1083aa20("videocam_distance_add");
  FUN_1083aa20("videocam_distance_dec");
  FUN_1083aa20("videocam_accelerate_add");
  FUN_1083aa20("videocam_accelerate_dec");
  FUN_1083aa20("savefacial");
  FUN_1083aa20("deletefacial");
  FUN_1083aa20("prefacial");
  FUN_1083aa20("nextfacial");
  FUN_1083aa20("savefacialibrary");
  FUN_1083aa20("copycurfacial");
  FUN_1083aa20("pastecurfacial");
  FUN_1083aa20("spectator_followmode");
  FUN_1083aa20("spectator_freemode");
  FUN_1083aa20("spectator_overlookmode");
  FUN_1083aa20("yk_recordctrl");
  FUN_1083aa20("yk_upload");
  return param_1;
}



/* ===== FUN_10bc94c0 @ 10bc94c0  size=2652 ===== */
// calls: libm_sse2_acos_precise
// strings:
//   "BuffArea"
//   "GameOnHit"

/* [RE-AUTO c0]
   calls: libm_sse2_acos_precise
   strings:
     ""BuffArea""
     ""GameOnHit"" */

void __thiscall FUN_10bc94c0(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  float10 fVar2;
  int *piVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  int **ppiVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_1f0 [16];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  float local_120;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  float local_28;
  int **local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  int *local_c;
  int *local_8;
  
  local_24 = (int **)param_1;
  local_8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                             (*(undefined4 *)(param_1 + 0x44));
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                            (*(undefined4 *)(param_2 + 8));
  if (local_8 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_30 = 0;
  FUN_10b27660(*(undefined4 *)((int)local_24 + 0x44),*(undefined4 *)(param_2 + 8),0,0,0xffffffff,
               0xffffffff,0);
  local_c = (int *)0x0;
  local_bc = CONCAT44((int)local_30,(int)local_30);
  local_b4 = 0;
  puVar4 = (undefined8 *)(**(code **)(*piVar3 + 0x94))();
  pfVar5 = (float *)(**(code **)(*local_8 + 0x94))();
  local_14 = (float)*puVar4;
  fStack_10 = (float)((ulonglong)*puVar4 >> 0x20);
  local_1c = *pfVar5 - local_14;
  local_18 = pfVar5[1] - fStack_10;
  local_c = (int *)(pfVar5[2] - *(float *)(puVar4 + 1));
  local_a4 = 0;
  local_9c = 0;
  local_a0 = 0;
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_c * (float)local_c +
           DAT_11de98a0;
  auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  local_a8 = auVar13._0_4_;
  local_a8 = (DAT_11de9938 - local_a8 * fVar10 * local_a8 * DAT_11de98e8) * local_a8;
  _local_b0 = CONCAT44(local_18 * local_a8,local_1c * local_a8);
  local_a8 = (float)local_c * local_a8;
  local_8 = local_c;
  local_1dc = FUN_10b27fd0(param_3);
  local_1e0 = FUN_10b27fd0("BuffArea");
  local_c = (int *)((uint)local_8 ^ DAT_11de9c90);
  local_1c = (float)((uint)local_1c ^ DAT_11de9c90);
  local_18 = (float)((uint)local_18 ^ DAT_11de9c90);
  local_1d8 = 0;
  local_1d4 = 0;
  local_dc = 0;
  local_d8 = 0;
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_30;
  if (fVar10 <= DAT_11cbf070) {
    local_188 = DAT_1201fd04;
    local_180 = DAT_1201fd0c;
  }
  else {
    auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar13._0_4_;
    fVar11 = (DAT_11de9938 - fVar11 * fVar10 * fVar11 * DAT_11de98e8) * fVar11;
    local_180 = fVar11 * (float)local_30;
    local_188 = CONCAT44(local_18 * fVar11,local_1c * fVar11);
  }
  local_8 = local_c;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
  (**(code **)(*piVar6 + 0xc))(*(undefined4 *)(param_2 + 8));
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_8 * (float)local_8;
  if (fVar10 <= DAT_11cbf070) {
    local_17c = DAT_1201fd04;
    local_174 = DAT_1201fd0c;
  }
  else {
    auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar13._0_4_;
    fVar11 = (DAT_11de9938 - fVar11 * fVar10 * fVar11 * DAT_11de98e8) * fVar11;
    local_174 = (float)local_8 * fVar11;
    local_17c = CONCAT44(local_18 * fVar11,local_1c * fVar11);
  }
  local_1a0 = CONCAT44((int)local_30,(int)local_30);
  local_198 = 0.0;
  local_164 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_c = (int *)0x3f800000;
  local_15c = 0x3f800000;
  pfVar5 = (float *)(**(code **)(*piVar3 + 0xbc))();
  ppiVar8 = DAT_11de9918;
  if (*pfVar5 != (float)local_30) {
    pfVar5 = (float *)(**(code **)(*piVar3 + 0xbc))();
    ppiVar8 = (int **)((float)DAT_11de9918 / *pfVar5);
  }
  local_24 = ppiVar8;
  pfVar5 = (float *)(**(code **)(*piVar3 + 0xd0))(&local_40);
  puVar4 = (undefined8 *)(**(code **)(*piVar3 + 200))(&local_14);
  fVar10 = pfVar5[3];
  fVar11 = *pfVar5;
  fVar12 = pfVar5[1];
  uVar1 = *puVar4;
  fVar16 = pfVar5[2];
  local_20 = (float)((uint)fVar11 ^ DAT_11de9c90);
  local_58 = *(uint *)(puVar4 + 1);
  local_60._0_4_ = (uint)uVar1;
  local_60._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar14 = (float)((uint)local_60 ^ DAT_11de9c90);
  fVar18 = (float)(local_60._4_4_ ^ DAT_11de9c90);
  local_18 = (float)((uint)fVar12 ^ DAT_11de9c90);
  fVar19 = (float)(local_58 ^ DAT_11de9c90);
  local_8 = (int *)((uint)fVar16 ^ DAT_11de9c90);
  fVar17 = (fVar16 * fVar18 - fVar12 * fVar19) + fVar10 * fVar14;
  fVar15 = (fVar11 * fVar19 - fVar16 * fVar14) + fVar10 * fVar18;
  fVar11 = (fVar12 * fVar14 - fVar11 * fVar18) + fVar10 * fVar19;
  local_1c = fVar16 * fVar15 - pfVar5[1] * fVar11;
  local_1c = fVar14 + local_1c + local_1c;
  fVar11 = *pfVar5 * fVar11 - fVar16 * fVar17;
  fVar14 = pfVar5[1] * fVar17 - *pfVar5 * fVar15;
  fVar15 = (local_198 * local_18 - local_1a0._4_4_ * (float)local_8) + fVar10 * (float)local_1a0;
  fVar16 = ((float)local_1a0 * (float)local_8 - local_198 * local_20) + fVar10 * local_1a0._4_4_;
  fVar12 = (local_1a0._4_4_ * local_20 - (float)local_1a0 * local_18) + fVar10 * local_198;
  fStack_10 = local_18 * fVar12 - (float)local_8 * fVar16;
  fStack_10 = (float)local_1a0 + fStack_10 + local_1c + fStack_10;
  fVar12 = (float)local_8 * fVar15 - local_20 * fVar12;
  fVar16 = local_20 * fVar16 - local_18 * fVar15;
  local_18c = (fVar16 + local_198 + fVar14 + fVar19 + fVar14 + fVar16) * (float)local_24;
  local_194 = CONCAT44((fVar12 + local_1a0._4_4_ + fVar11 + fVar18 + fVar11 + fVar12) *
                       (float)local_24,fStack_10 * (float)local_24);
  fVar16 = (local_18 * local_174 - (float)local_8 * local_17c._4_4_) + fVar10 * (float)local_17c;
  fVar12 = ((float)local_8 * (float)local_17c - local_20 * local_174) + fVar10 * local_17c._4_4_;
  fVar11 = (local_20 * local_17c._4_4_ - local_18 * (float)local_17c) + fVar10 * local_174;
  fVar10 = local_18 * fVar11 - (float)local_8 * fVar12;
  fVar10 = (float)local_17c + fVar10 + fVar10;
  local_28 = (float)local_8 * fVar16 - local_20 * fVar11;
  local_168 = local_20 * fVar12 - local_18 * fVar16;
  local_28 = local_28 + local_17c._4_4_ + local_28;
  fVar16 = (float)local_30;
  local_170 = CONCAT44(local_28,fVar10);
  local_168 = local_168 + local_174 + local_168;
  fVar15 = fVar10 - local_168 * fVar16;
  fVar14 = local_168 * fVar16 - local_28;
  local_28 = local_28 * fVar16;
  fVar11 = local_28 - fVar10 * fVar16;
  fVar12 = fVar14 * fVar14 + fVar15 * fVar15 + fVar11 * fVar11;
  local_60 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar17 = auVar13._0_4_;
    fVar17 = (DAT_11de9938 - fVar17 * fVar12 * fVar17 * DAT_11de98e8) * fVar17;
    local_1c = fVar17 * fVar14;
    local_18 = fVar17 * fVar15;
    local_20 = fVar17 * fVar11;
    if (DAT_11cbf074 <= (float)DAT_11de9918 / fVar17) {
      dVar9 = (double)(fVar10 * fVar16 + local_28 + local_168);
      local_c = (int *)local_168;
      libm_sse2_acos_precise();
      local_28 = (float)((int)&local_30 + 4);
      local_24 = &local_8;
      fVar2 = (float10)fcos((float10)((float)dVar9 * DAT_11de98e8));
      fVar7 = (float10)fsin((float10)((float)dVar9 * DAT_11de98e8));
                    /* WARNING: Ignoring partial resolution of indirect */
      local_30._4_4_ = (float)fVar2;
      local_8 = (int *)(float)fVar7;
      local_40 = local_1c * (float)local_8;
      local_3c = local_18 * (float)local_8;
      local_38 = local_20 * (float)local_8;
      local_34 = local_30._4_4_;
      FUN_10abc150(&local_40);
      local_128 = CONCAT44(fStack_10,local_14);
      goto LAB_10bc9e29;
    }
  }
  local_128 = CONCAT44(fVar16,fVar16);
  local_c = (int *)0x0;
LAB_10bc9e29:
  local_120 = (float)local_c;
  local_138 = 0x43fa0000;
  local_140 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_150 = 0x43fa0000;
  local_c = (int *)0x43fa0000;
  local_12c = 0x43fa0000;
  local_158 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_134 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1a8 = 0xffffffff;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
  local_54 = (**(code **)(*piVar3 + 0x18))("GameOnHit");
  local_48 = local_1f0;
  local_50 = 0x4ffff;
  local_4c = 0;
  local_44 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x144))(*(undefined4 *)(param_2 + 8));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x24))(&local_54);
  }
  return;
}



/* ===== FUN_10bc9f20 @ 10bc9f20  size=735 ===== */
// calls: atoi, CLogicBuffArea::SetEnable
// strings:
//   "Properties"
//   "SkillInfo"
//   "b_HaveSkill"
//   "s_i_SkillID"
//   "i_SkillLv"
//   "AttackName"
//   "BuffInfo"
//   "i_BuffID"
//   "f_LifeTime"
//   "f_CheckDelta"
//   "b_Continous"
//   "b_InitEnable"
//   "b_EnterTrigger"
//   "b_LeaveTrigger"
//   "b_EnterAdd"
//   "b_LeaveAdd"
//   "b_NeedRemove"
//   "TriggerInfo"
//   "b_UseBox"
//   "vBoxParam"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""Properties""
     ""SkillInfo""
     ""b_HaveSkill""
     ""s_i_SkillID""
     ""i_SkillLv""
     ""AttackName""
     ""BuffInfo""
     ""i_BuffID""
     ""f_LifeTime""
     ""f_CheckDelta"" */

void __thiscall FUN_10bc9f20(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar3 = (int *)(**(code **)(*param_2 + 0x150))(2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x38))();
  }
  FUN_10a68ce0("Properties",&local_8);
  piVar3 = local_8;
  if (local_8 != (int *)0x0) {
    local_8 = (int *)0x0;
    cVar2 = FUN_10a68ce0("SkillInfo",&local_8);
    if (cVar2 != '\0') {
      cVar2 = FUN_10a68da0("b_HaveSkill",(int)&param_2 + 3);
      if (cVar2 != '\0') {
        *(char *)(param_1[0x10] + 0x18c) = param_2._3_1_;
      }
      cVar2 = FUN_10a68bb0("s_i_SkillID",&param_2);
      if (cVar2 != '\0') {
        iVar4 = 0;
        if (param_2 != (int *)0x0) {
          iVar4 = atoi((char *)param_2);
        }
        *(int *)(param_1[0x10] + 0x184) = iVar4;
      }
      cVar2 = FUN_10a68900("i_SkillLv",&local_c);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1[0x10] + 0x188) = local_c;
      }
      cVar2 = FUN_10a68bb0("AttackName",&param_2);
      if (cVar2 != '\0') {
        FUN_11415410(param_2);
      }
    }
    cVar2 = FUN_10a68ce0("BuffInfo",&local_8);
    if (cVar2 != '\0') {
      cVar2 = FUN_10a68900("i_BuffID",&param_2);
      if (cVar2 != '\0') {
        *(int **)(param_1[0x10] + 0x170) = param_2;
      }
      cVar2 = FUN_10a68a10("f_LifeTime",&param_2);
      if (cVar2 != '\0') {
        *(int **)(param_1[0x10] + 0x178) = param_2;
      }
      cVar2 = FUN_10a68a10("f_CheckDelta",&param_2);
      if (cVar2 != '\0') {
        *(int **)(param_1[0x10] + 0x16c) = param_2;
      }
      cVar2 = FUN_10a68da0("b_Continous",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x168) = param_2._0_1_;
      }
      cVar2 = FUN_10a68da0("b_InitEnable",&param_2);
      if (cVar2 != '\0') {
        CLogicBuffArea__SetEnable(param_2);
      }
      cVar2 = FUN_10a68da0("b_EnterTrigger",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x1a8) = param_2._0_1_;
      }
      cVar2 = FUN_10a68da0("b_LeaveTrigger",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x1a9) = param_2._0_1_;
      }
      cVar2 = FUN_10a68da0("b_EnterAdd",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x1aa) = param_2._0_1_;
      }
      cVar2 = FUN_10a68da0("b_LeaveAdd",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x1ab) = param_2._0_1_;
      }
      cVar2 = FUN_10a68da0("b_NeedRemove",&param_2);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1[0x10] + 0x1ac) = param_2._0_1_;
      }
    }
    cVar2 = FUN_10a68ce0("TriggerInfo",&local_8);
    piVar1 = local_8;
    if (((cVar2 != '\0') && (cVar2 = FUN_10a68da0("b_UseBox",(int)&param_2 + 3), cVar2 != '\0')) &&
       (param_2._3_1_ != '\0')) {
      local_10 = 0;
      local_14 = 0;
      local_18 = 0;
      cVar2 = FUN_10a68c40("vBoxParam",&local_18);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0xb8))(&local_18);
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    (**(code **)(*piVar3 + 0xc))();
  }
  return;
}



/* ===== FUN_10bcfb70 @ 10bcfb70  size=130 ===== */
// strings:
//   "CombatNpc"

/* [RE-AUTO c0]
   strings:
     ""CombatNpc"" */

void __fastcall FUN_10bcfb70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_11ccf8d0;
  param_1[1] = &PTR_FUN_11ccfbe4;
  param_1[0x10] = &PTR_LAB_11ccfbec;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x60))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x20))(param_1[0x16]);
  if (piVar2 == (int *)0x0) {
    if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x17])(1);
      param_1[0x17] = 0;
    }
  }
  else {
    (**(code **)(*piVar2 + 0xec))("CombatNpc",3);
  }
  puVar1 = (undefined4 *)param_1[0x20];
  if ((puVar1 != param_1 + 0x1b) && (puVar1 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar1);
  }
  FUN_10bf27f0();
  return;
}



/* ===== FUN_10bcfc00 @ 10bcfc00  size=883 ===== */
// strings:
//   "CombatNpc"
//   "OwnerPlayerID"
//   "SelfFSMState"
//   "NpcName"
//   "NpcWeaponType"

/* [RE-AUTO c0]
   strings:
     ""CombatNpc""
     ""OwnerPlayerID""
     ""SelfFSMState""
     ""NpcName""
     ""NpcWeaponType"" */

undefined1 __thiscall FUN_10bcfc00(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_1f4 [4];
  undefined4 local_1f0;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [40];
  undefined4 local_40;
  undefined1 local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_1;
  cVar1 = FUN_10bf2840(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))();
  param_1[0x16] = iVar2;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x20))(param_1[0x16]);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar3 + 0xec))("CombatNpc",2);
  param_1[0x17] = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = FUN_11419510();
  FUN_10b713f0(uVar4);
  FUN_10bd0110(local_2c,0x401,FUN_10bcffb0,0,param_1,0xffffffff,1);
  FUN_10bd0110(local_2c,0x6a9,FUN_10bd0030,0,param_1,0xffffffff,1);
  local_20 = 0xffffffff;
  iVar2 = 0;
  local_1c = 0xffffffff;
  piVar3 = *(int **)(DAT_1202e818 + 0xd0);
  uVar4 = (**(code **)(*param_1 + 0x18))();
  (**(code **)(*piVar3 + 0xe0))(uVar4);
  iVar5 = FUN_104753a0();
  if ((iVar5 != 0) && (iVar2 = iVar5 + 0x60, iVar2 != 0)) {
    uVar4 = FUN_113168d0("OwnerPlayerID",&local_20);
    FUN_1046dc90(uVar4);
    uVar4 = FUN_113168d0("SelfFSMState",&local_1c);
    FUN_1046dc90(uVar4);
  }
  if ((*(char *)(DAT_1202e818 + 0x209) != '\0') ||
     (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))(), cVar1 != '\0')) {
    if (iVar2 == 0) goto LAB_10bcfee6;
    if ((int *)param_2[0xb81] != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*(int *)param_2[0xb81] + 0xd8))();
      local_c = (**(code **)(*piVar3 + 0x18))();
      FUN_1025bc30(local_20,&local_c);
    }
  }
  if (iVar2 != 0) {
    local_8 = (**(code **)(*param_1 + 0x130))();
    FUN_1025bec0(local_1c,&local_8);
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    local_8 = (**(code **)(*piVar3 + 0xc))(param_1[0x16]);
    if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x348);
    }
    piVar6 = param_2 + 0xb83;
    local_8 = 0;
    for (piVar3 = (int *)*piVar6; piVar3 != piVar6; piVar3 = (int *)*piVar3) {
      if (piVar3[7] != piVar3[6]) {
        FUN_1046e140(piVar3[7],piVar3[0xd],0);
      }
      param_1 = local_10;
    }
    local_c = 0xffffffff;
    uVar4 = FUN_113168d0("NpcName",&local_c);
    cVar1 = FUN_1046dc90(uVar4);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)(**(code **)(*param_2 + 0xb8))();
      puVar8 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)*puVar7;
      }
      uVar4 = FUN_113168d0(puVar8);
      FUN_1025bc60(local_c,uVar4);
    }
    local_18[0] = 0xffffffff;
    uVar4 = FUN_113168d0("NpcWeaponType",local_18);
    cVar1 = FUN_1046dc90(uVar4);
    if (cVar1 != '\0') {
      param_2 = (int *)0x0;
      FUN_1025bfc0(local_18[0],&param_2);
      if (param_2 == (int *)0x0) {
        local_10 = *(int **)(local_8 + 0x15b4);
        FUN_1025bd00(local_18[0],&local_10);
      }
    }
  }
LAB_10bcfee6:
  if ((*(char *)(DAT_1202e818 + 0x209) != '\0') ||
     (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))(), cVar1 != '\0')) {
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x14] + 0x68))();
    (**(code **)(*piVar3 + 4))();
  }
  local_74 = 0x8a8;
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_30 = 0;
  piVar3 = (int *)(**(code **)(param_1[1] + 4))();
  local_40 = (**(code **)(*piVar3 + 4))();
  FUN_10bb4150();
  piVar3 = (int *)(**(code **)(param_1[1] + 4))();
  local_1f0 = (**(code **)(*piVar3 + 4))();
  FUN_10bd00a0(local_1f4,local_68);
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_74);
  return 1;
}



/* ===== FUN_10bd08a0 @ 10bd08a0  size=37 ===== */
// strings:
//   "CombatNpc"

/* [RE-AUTO c0]
   strings:
     ""CombatNpc"" */

int FUN_10bd08a0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("CombatNpc","");
  return param_1;
}



/* ===== FUN_10bd1c70 @ 10bd1c70  size=34686 ===== */
// calls: memset, sprintf
// strings:
//   "cl_fov"
//   "cl_bob"
//   "cl_headBob"
//   "cl_headBobLimit"
//   "cl_tpvDist"
//   "cl_tpvYaw"
//   "cl_nearPlane"
//   "cl_sprintShake"
//   "cl_sensitivityZeroG"
//   "cl_sensitivity"
//   "cl_invertMouse"
//   "cl_invertController"
//   "cl_crouchToggle"
//   "cl_fpBody"
//   "cl_player_landing_forcefeedback"
//   "cl_strengthscale"
//   "cl_sprintToggle"
//   "cl_sprintTime"
//   "cl_sprintRestingTime"
//   "cl_camModify"
// <decompile failed/virtualized>

/* ===== FUN_10be3840 @ 10be3840  size=2934 ===== */
// strings:
//   "NullAI"
//   "BTEmCommon"
//   "BTCtrlObject"
//   "MHBuffArea"
//   "BehaviorTreeBase"
//   "MHCommonArea"
//   "MHTestSpawner"
//   "SceneObject"
//   "MHAttackable"
//   "MHBurnable"
//   "MHContAttacker"
//   "GroupAI"
//   "EmCommon"
//   "RageBullet"
//   "Player"
//   "CombatNpc"
//   "MonsterCtrlPlugin"
//   "CatHandcart"
//   "PlayerFeature"
//   "Accessory"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""NullAI""
     ""BTEmCommon""
     ""BTCtrlObject""
     ""MHBuffArea""
     ""BehaviorTreeBase""
     ""MHCommonArea""
     ""MHTestSpawner""
     ""SceneObject""
     ""MHAttackable""
     ""MHBurnable"" */

void FUN_10be3840(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("NullAI",&DAT_1202e01c,1);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("NullAI");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("BTEmCommon",&DAT_1202e014,1);
  if ((DAT_1202e010 & 1) == 0) {
    DAT_1202e010 = DAT_1202e010 | 1;
    _DAT_1202e00c = &PTR_FUN_11cd50cc;
    FUN_11a8911f(&LAB_11c85bf0);
  }
  (**(code **)(*param_1 + 4))("BTCtrlObject",&DAT_1202e00c,1);
  if ((DAT_1202e028 & 1) == 0) {
    DAT_1202e028 = DAT_1202e028 | 1;
    _DAT_1202e024 = &PTR_FUN_11cd50f0;
    FUN_11a8911f(&LAB_11c85c80);
  }
  (**(code **)(*param_1 + 4))("MHBuffArea",&DAT_1202e024,0);
  if ((DAT_1202e030 & 1) == 0) {
    DAT_1202e030 = DAT_1202e030 | 1;
    _DAT_1202e02c = &PTR_FUN_11cd50fc;
    FUN_11a8911f(&LAB_11c85c00);
  }
  (**(code **)(*param_1 + 4))("BehaviorTreeBase",&DAT_1202e02c,0);
  if ((DAT_1202e038 & 1) == 0) {
    DAT_1202e038 = DAT_1202e038 | 1;
    _DAT_1202e034 = &PTR_FUN_11cd5108;
    FUN_11a8911f(&LAB_11c85ca0);
  }
  (**(code **)(*param_1 + 4))("MHCommonArea",&DAT_1202e034,0);
  if ((DAT_1202e040 & 1) == 0) {
    DAT_1202e040 = DAT_1202e040 | 1;
    _DAT_1202e03c = &PTR_FUN_11cd5114;
    FUN_11a8911f(&LAB_11c85cd0);
  }
  (**(code **)(*param_1 + 4))("MHTestSpawner",&DAT_1202e03c,0);
  if ((DAT_1202e048 & 1) == 0) {
    DAT_1202e048 = DAT_1202e048 | 1;
    _DAT_1202e044 = &PTR_FUN_11cd5120;
    FUN_11a8911f(&LAB_11c85cc0);
  }
  (**(code **)(*param_1 + 4))("SceneObject",&DAT_1202e044,0);
  if ((DAT_1202e050 & 1) == 0) {
    DAT_1202e050 = DAT_1202e050 | 1;
    _DAT_1202e04c = &PTR_FUN_11cd512c;
    FUN_11a8911f(&LAB_11c85c70);
  }
  (**(code **)(*param_1 + 4))("MHAttackable",&DAT_1202e04c,0);
  if ((DAT_1202e058 & 1) == 0) {
    DAT_1202e058 = DAT_1202e058 | 1;
    _DAT_1202e054 = &PTR_FUN_11cd5138;
    FUN_11a8911f(&LAB_11c85c90);
  }
  (**(code **)(*param_1 + 4))("MHBurnable",&DAT_1202e054,0);
  if ((DAT_1202e060 & 1) == 0) {
    DAT_1202e060 = DAT_1202e060 | 1;
    _DAT_1202e05c = &PTR_FUN_11cd5144;
    FUN_11a8911f(&LAB_11c85cb0);
  }
  (**(code **)(*param_1 + 4))("MHContAttacker",&DAT_1202e05c,0);
  if ((DAT_1202e068 & 1) == 0) {
    DAT_1202e068 = DAT_1202e068 | 1;
    _DAT_1202e064 = &PTR_FUN_11cd5150;
    FUN_11a8911f(&LAB_11c85c40);
  }
  (**(code **)(*param_1 + 4))("GroupAI",&DAT_1202e064,0);
  FUN_10be3540(param_1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("EmCommon",&DAT_1202e014,1);
  if ((DAT_1202e070 & 1) == 0) {
    DAT_1202e070 = DAT_1202e070 | 1;
    _DAT_1202e06c = &PTR_FUN_11cd515c;
    FUN_11a8911f(&LAB_11c85d30);
  }
  (**(code **)(*param_1 + 4))("RageBullet",&DAT_1202e06c,1);
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("Player",&DAT_1202e01c,0);
  if ((DAT_1202e078 & 1) == 0) {
    DAT_1202e078 = DAT_1202e078 | 1;
    _DAT_1202e074 = &PTR_FUN_11cd5168;
    FUN_11a8911f(&LAB_11c85c20);
  }
  (**(code **)(*param_1 + 4))("CombatNpc",&DAT_1202e074,0);
  if ((DAT_1202e080 & 1) == 0) {
    DAT_1202e080 = DAT_1202e080 | 1;
    _DAT_1202e07c = &PTR_FUN_11cd5174;
    FUN_11a8911f(&LAB_11c85cf0);
  }
  (**(code **)(*param_1 + 4))("MonsterCtrlPlugin",&DAT_1202e07c,0);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("CatHandcart",&DAT_1202e014,1);
  if ((DAT_1202e088 & 1) == 0) {
    DAT_1202e088 = DAT_1202e088 | 1;
    _DAT_1202e084 = &PTR_FUN_11cd5180;
    FUN_11a8911f(&LAB_11c85c50);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cc4fa8,&DAT_1202e084,0);
  if ((DAT_1202e090 & 1) == 0) {
    DAT_1202e090 = DAT_1202e090 | 1;
    _DAT_1202e08c = &PTR_FUN_11cd518c;
    FUN_11a8911f(&LAB_11c85d20);
  }
  (**(code **)(*param_1 + 0xc))("PlayerFeature",&DAT_1202e08c,0);
  if ((DAT_1202e098 & 1) == 0) {
    DAT_1202e098 = DAT_1202e098 | 1;
    _DAT_1202e094 = &PTR_FUN_11cd5198;
    FUN_11a8911f(&LAB_11c85c60);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cd4e7c,&DAT_1202e094,0);
  if ((DAT_1202e0a0 & 1) == 0) {
    DAT_1202e0a0 = DAT_1202e0a0 | 1;
    _DAT_1202e09c = &PTR_FUN_11cd51a4;
    FUN_11a8911f(&LAB_11c85be0);
  }
  (**(code **)(*param_1 + 0xc))("Accessory",&DAT_1202e09c,0);
  if ((DAT_1202e0a8 & 1) == 0) {
    DAT_1202e0a8 = DAT_1202e0a8 | 1;
    _DAT_1202e0a4 = &PTR_FUN_11cd51b0;
    FUN_11a8911f(&LAB_11c85d50);
  }
  (**(code **)(*param_1 + 0xc))("Weapon",&DAT_1202e0a4,0);
  if ((DAT_1202e0b0 & 1) == 0) {
    DAT_1202e0b0 = DAT_1202e0b0 | 1;
    _DAT_1202e0ac = &PTR_FUN_11cd51bc;
    FUN_11a8911f(&LAB_11c85d40);
  }
  (**(code **)(*param_1 + 0xc))("VehicleWeapon",&DAT_1202e0ac,0);
  if ((DAT_1202e0b8 & 1) == 0) {
    DAT_1202e0b8 = DAT_1202e0b8 | 1;
    _DAT_1202e0b4 = &PTR_FUN_11cd51c8;
    FUN_11a8911f(&LAB_11c85c10);
  }
  (**(code **)(*param_1 + 4))("CameraRegion",&DAT_1202e0b4,0);
  if ((DAT_1202e0c0 & 1) == 0) {
    DAT_1202e0c0 = DAT_1202e0c0 | 1;
    _DAT_1202e0bc = &PTR_FUN_11cd51d4;
    FUN_11a8911f(&LAB_11c85d00);
  }
  (**(code **)(*param_1 + 0xc))("OffHand",&DAT_1202e0bc,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x80))();
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)("EntityAttachment",&DAT_10be45c0,0);
    DAT_1203eb70 = (**(code **)(*piVar2 + 0x6c))();
    (**(code **)(*piVar2 + 0x14))("Hovercraft",&DAT_10be45e0,0);
    (**(code **)(*piVar2 + 0x14))("Helicopter",&DAT_10be4600,0);
    (**(code **)(*piVar2 + 0x14))("StdBoat",&DAT_10be4620,0);
    (**(code **)(*piVar2 + 0x14))("StdWheeled",&DAT_10be4640,0);
    (**(code **)(*piVar2 + 0x14))("ArcadeWheeled",&DAT_10be4660,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f04,&DAT_10be4680,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f0c,&DAT_10be46a0,0);
    (**(code **)(*piVar2 + 0x14))("Warrior",&DAT_10be46c0,0);
    (**(code **)(*piVar2 + 0x14))("Amphibious",&DAT_10be46e0,0);
  }
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Tornado";
  local_24 = "Scripts/Entities/Environment/Tornado.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 1) == 0) {
    DAT_1202dfec = DAT_1202dfec | 1;
    _DAT_1202dfe8 = &PTR_FUN_11cd4f54;
    FUN_11a8911f(&LAB_11c85b60);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Tornado",&DAT_1202dfe8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Shake";
  local_24 = "Scripts/Entities/Environment/Shake.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 2) == 0) {
    DAT_1202dfec = DAT_1202dfec | 2;
    _DAT_1202dff0 = &PTR_FUN_11cd4f88;
    FUN_11a8911f(&LAB_11c85b70);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Shake",&DAT_1202dff0,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Rain";
  local_24 = "Scripts/Entities/Environment/Rain.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 4) == 0) {
    DAT_1202dfec = DAT_1202dfec | 4;
    _DAT_1202dff4 = &PTR_FUN_11cd4fc4;
    FUN_11a8911f(&LAB_11c85bc0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4f94,&DAT_1202dff4,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Snow";
  local_24 = "Scripts/Entities/Environment/Snow.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 8) == 0) {
    DAT_1202dfec = DAT_1202dfec | 8;
    _DAT_1202dff8 = &PTR_FUN_11cd5000;
    FUN_11a8911f(&LAB_11c85bd0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4fd0,&DAT_1202dff8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "WaterRipplesGenerator";
  local_24 = "Scripts/Entities/Environment/WaterRipplesGenerator.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x10) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x10;
    _DAT_1202dffc = &PTR_FUN_11cd505c;
    FUN_11a8911f(&LAB_11c85b80);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("WaterRipplesGenerator",&DAT_1202dffc,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "RopeEntAttach";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x20) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x20;
    _DAT_1202e000 = &PTR_FUN_11cd5078;
    FUN_11a8911f(&LAB_11c85b90);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("RopeEntAttach",&DAT_1202e000,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "BattleEvent";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x40) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x40;
    _DAT_1202e004 = &PTR_FUN_11cd5084;
    FUN_11a8911f(&LAB_11c85ba0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("BattleEvent",&DAT_1202e004,&local_2c);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("BattleEvent");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if (-1 < (char)DAT_1202dfec) {
    DAT_1202dfec = DAT_1202dfec | 0x80;
    _DAT_1202e008 = &PTR_FUN_11cd5090;
    FUN_11a8911f(&LAB_11c85bb0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("ScriptControlledPhysics",&DAT_1202e008,0);
  if ((DAT_1202e0c8 & 1) == 0) {
    DAT_1202e0c8 = DAT_1202e0c8 | 1;
    _DAT_1202e0c4 = &PTR_FUN_11cd51e0;
    FUN_11a8911f(&LAB_11c85c30);
  }
  (**(code **)(*param_1 + 4))("GameRulesClient",&DAT_1202e0c4,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("SinglePlayer","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("SinglePlayer",&DAT_11cd50c4);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("DeathMatch","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("DeathMatch",&DAT_11cd50c8);
  return;
}



/* ===== FUN_10bec410 @ 10bec410  size=781 ===== */
// calls: atoi, CInfoRecord::GetModelString, CAvatarInfo::ResolveRecordById
// strings:
//   "CAvatarInfo"
//   ".fxparams"
//   "Libs\\PlayerFSM\\WE99FSMStates.xml"
//   "/Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"
//   "mh_sharemem_addrinfo"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""CAvatarInfo""
     "".fxparams""
     ""Libs\\PlayerFSM\\WE99FSMStates.xml""
     ""/Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml""
     ""mh_sharemem_addrinfo"" */

void __thiscall FUN_10bec410(int param_1,char *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 local_41c [4];
  int local_418;
  undefined1 *local_414;
  undefined1 local_410 [512];
  undefined1 local_210 [4];
  int local_20c;
  byte *local_208;
  byte local_204 [512];
  
  iVar3 = atoi(param_2);
  iVar4 = FUN_1053a880(0,"CAvatarInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar11 = *(int *)(iVar4 + 0x28), iVar11 != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar11) * 4);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar11) * 4), iVar3 != 0)) {
      cVar2 = FUN_116a3e10();
      if (cVar2 == '\0') {
        iVar4 = 0;
        if (param_4 != "") {
          iVar11 = atoi(param_4);
          iVar11 = CAvatarInfo__ResolveRecordById(iVar11);
          if ((iVar11 != 0) && (*(int *)(iVar11 + 0x14) == 1)) {
            iVar4 = iVar11;
          }
        }
        FUN_10ad9880(iVar3,iVar4,param_1 + 0x34,0,param_1 + 0x144);
      }
      else {
        FUN_10a6c4c0(*(undefined4 *)(iVar3 + 0x2c));
        puVar5 = (undefined4 *)FUN_10ae9170(local_41c,local_210,".fxparams");
        FUN_10a92310(puVar5[2],*puVar5);
        if (local_414 != local_410) {
          DAT_1202015c = DAT_1202015c + (-1 - local_418);
          FUN_10c3d900(local_414);
        }
        FUN_11003730(0,local_208);
        FUN_11003730(0,"Libs\\PlayerFSM\\WE99FSMStates.xml");
        iVar4 = FUN_11111ec0(*(undefined4 *)(iVar3 + 0x14));
        if (iVar4 != 0) {
          uVar6 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
          CInfoRecord__GetModelString(uVar6);
          if (param_2 == (char *)0x0) {
            iVar11 = 0;
          }
          else {
            pcVar12 = param_2;
            do {
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            iVar11 = (int)pcVar12 - (int)(param_2 + 1);
          }
          FUN_10a92310(param_2,iVar11);
          FUN_104f6f60();
          FUN_10ae0250("/Scripts/Entities/Items/XML/Weapons/",0x24);
          pcVar12 = *(char **)(iVar4 + 4);
          if (pcVar12 == (char *)0x0) {
            iVar4 = 0;
          }
          else {
            pcVar9 = pcVar12;
            do {
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            iVar4 = (int)pcVar9 - (int)(pcVar12 + 1);
          }
          FUN_10ae0250(pcVar12,iVar4);
          FUN_10ae0250("_firemode.xml",0xd);
          FUN_11003730(0,local_208);
        }
        FUN_11003730(3,*(undefined4 *)(iVar3 + 0x2c));
        FUN_11003730(5,*(undefined4 *)(iVar3 + 0x6c));
        pcVar12 = *(char **)(iVar3 + 0x44);
        if (pcVar12 == (char *)0x0) {
          iVar4 = 0;
        }
        else {
          pcVar9 = pcVar12;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          iVar4 = (int)pcVar9 - (int)(pcVar12 + 1);
        }
        FUN_10a92310(pcVar12,iVar4);
        pbVar10 = &DAT_11d9d32b;
        pbVar7 = local_208;
        do {
          bVar1 = *pbVar7;
          bVar13 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_10bec648:
            uVar8 = -(uint)bVar13 | 1;
            goto LAB_10bec64d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar13 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_10bec648;
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_10bec64d:
        if (uVar8 != 0) {
          FUN_10adfd20(local_210);
          FUN_10ae0250(".fxparams",9);
          FUN_11003730(0,local_208);
        }
        FUN_11003730(3,*(undefined4 *)(iVar3 + 0x44));
        FUN_11003730(5,*(undefined4 *)(iVar3 + 0x94));
        if (local_208 != local_204) {
          DAT_1202015c = DAT_1202015c + (-1 - local_20c);
          FUN_10c3d900(local_208);
          return;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10c25a20 @ 10c25a20  size=265 ===== */
// strings:
//   "OnHit"

/* [RE-AUTO c0]
   strings:
     ""OnHit"" */

void __thiscall FUN_10c25a20(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x124))();
  piVar2 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(*(undefined4 *)(param_2 + 4));
  if ((piVar2 == piVar1) && (*(int **)(DAT_1202e818 + 0x14) != (int *)0x0)) {
    local_18 = 2;
    local_14 = 0;
    local_10 = *(float *)(param_2 + 0x44) * DAT_11cbf080;
    local_c = 0;
    local_8 = *(float *)(param_2 + 0x44) * DAT_11de98e8 * DAT_11de98bc;
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0x30))(&local_18);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x674))(param_2);
  }
  FUN_10c06020(param_1 + 0x160,param_2);
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x38))("OnHit");
    if (iVar3 == 4) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar1,"OnHit");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69580(param_1 + 0x160);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
  }
  return;
}



/* ===== FUN_10c25c70 @ 10c25c70  size=543 ===== */
// strings:
//   "OnHit"

/* [RE-AUTO c0]
   strings:
     ""OnHit"" */

void __thiscall FUN_10c25c70(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int **local_18;
  int *local_14;
  int *local_10;
  float local_c;
  uint local_8;
  
  local_8 = CONCAT31(local_8._1_3_,1);
  local_10 = (int *)FUN_10c007c0(*param_2);
  if ((*param_2 != 0) && (local_10 != (int *)0x0)) {
    fVar9 = (float10)(**(code **)(*local_10 + 0x304))();
    local_c = (float)fVar9;
    local_8 = local_8 & 0xff;
    if (local_c <= 0.0) {
      local_8 = 0;
    }
  }
  if ((((param_2[1] == 0) || (piVar6 = (int *)FUN_10c007c0(param_2[1]), piVar6 == (int *)0x0)) ||
      (cVar5 = (**(code **)(*piVar6 + 0x1a4))(), cVar5 == '\0')) && ((char)local_8 != '\0')) {
    FUN_10c06020(param_1 + 0x160,param_2);
    piVar6 = *(int **)(param_1 + 0x6c);
    if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 0x38))("OnHit"), iVar7 == 4)) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar6,"OnHit");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69580(param_1 + 0x160);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
    if ((*(int *)(param_1 + 0x25c) != *(int *)(param_1 + 0x260)) &&
       (uVar8 = 0, *(int *)(param_1 + 0x260) - *(int *)(param_1 + 0x25c) >> 2 != 0)) {
      do {
        iVar7 = *(int *)(param_1 + 0x260);
        iVar2 = *(int *)(param_1 + 0x25c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x25c) + uVar8 * 4) + 4))(param_2);
        if (iVar7 - iVar2 >> 2 == *(int *)(param_1 + 0x260) - *(int *)(param_1 + 0x25c) >> 2) {
          uVar8 = uVar8 + 1;
        }
      } while (uVar8 < (uint)(*(int *)(param_1 + 0x260) - *(int *)(param_1 + 0x25c) >> 2));
    }
    piVar6 = local_10;
    if (local_10 != (int *)0x0) {
      piVar3 = (int *)param_2[1];
      if (((((int *)*param_2 != piVar3) && (piVar4 = (int *)param_2[2], piVar4 != (int *)*param_2))
          && (piVar4 != piVar3)) && (DAT_11de9890 <= (float)param_2[0x11])) {
        local_18 = &local_14;
        local_2c[0] = 0x19;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        piVar1 = local_10 + 3;
        local_14 = piVar4;
        local_10 = piVar3;
        (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(*piVar1,local_2c);
      }
      local_18 = (int **)param_2[2];
      local_2c[0] = 0x17;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(piVar6[3],local_2c);
      local_24 = param_2[0x11];
      local_18 = (int **)param_2[2];
      local_2c[0] = 0x18;
      local_28 = 0;
      local_20 = 0;
      local_1c = 0;
      (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(piVar6[3],local_2c);
    }
  }
  return;
}



/* ===== FUN_10c26e50 @ 10c26e50  size=1090 ===== */
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   strings:
     ""GameOnHit"" */

int FUN_10c26e50(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined4 local_514 [100];
  int local_384 [100];
  int local_1f4;
  undefined4 local_1f0 [2];
  int local_1e8;
  undefined4 local_1dc;
  undefined4 local_1ac;
  undefined8 local_1a4;
  float local_19c;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  uint local_178;
  undefined1 local_a4;
  undefined1 local_74 [20];
  uint local_60;
  float local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  float local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int local_10;
  char local_c;
  int *local_8;
  
  piVar3 = param_1;
  iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    iVar5 = (**(code **)(*piVar6 + 0x60))();
    if (iVar5 != 0) {
      param_1[0xc] = (int)local_384;
      param_1[0xd] = (int)local_514;
      param_1[0xb] = 100;
      piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*param_1);
      if ((((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x288))(), iVar5 != 0)) &&
          (DAT_11de9890 < (float)param_1[7])) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
        iVar5 = (**(code **)(*piVar6 + 0x288))(param_1[4],param_1[5],param_1[6],param_1[7]);
        FUN_10c2c080(*(undefined4 *)(iVar5 + 4));
        (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(local_4c);
      }
      local_8 = (int *)(**(code **)(*local_8 + 0x364))(param_1);
      if ((*(char *)((int)param_1 + 0x26) == '\0') ||
         (piVar6 = param_1 + 10, param_1._3_1_ = '\x01', *piVar6 < 1)) {
        param_1._3_1_ = '\0';
      }
      puStack_18 = &local_20;
      local_10 = 0;
      local_20 = 0;
      iStack_1c = 0;
      local_c = param_1._3_1_;
      if (0 < (int)local_8) {
        puStack_14 = puStack_18;
        FUN_10bb4150();
        iVar5 = 0;
        if (0 < piVar3[0xb]) {
          do {
            if (((int *)local_384[iVar5] == (int *)0x0) ||
               ((piVar6 = (int *)(**(code **)(*(int *)local_384[iVar5] + 0x288))(),
                piVar6 != (int *)0x0 && (cVar4 = (**(code **)(*piVar6 + 0x9c))(), cVar4 != '\0'))))
            break;
            local_1f4 = *piVar3;
            local_1e8 = piVar3[1];
            local_1f0[0] = (**(code **)(*(int *)local_384[iVar5] + 4))();
            if (param_1._3_1_ == '\0') {
LAB_10c2705b:
              if (*(char *)((int)piVar3 + 0x26) == '\0') {
                local_1ac = 0xffffffff;
              }
              else {
                local_1ac = local_514[iVar5];
              }
              puVar8 = (undefined8 *)(**(code **)(*(int *)local_384[iVar5] + 200))(local_74);
              uVar1 = *puVar8;
              uVar2 = *(undefined8 *)(piVar3 + 4);
              local_1a4._0_4_ = (float)uVar1;
              local_19c = *(float *)(puVar8 + 1);
              local_1a4._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_2c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              local_1a4._4_4_ = local_1a4._4_4_ - local_2c._4_4_;
              local_2c._0_4_ = (float)uVar2;
              local_1a4._0_4_ = (float)local_1a4 - (float)local_2c;
              local_24 = (float)piVar3[6];
              local_54 = local_19c - local_24;
              fVar11 = local_1a4._4_4_ * local_1a4._4_4_ + (float)local_1a4 * (float)local_1a4 +
                       local_54 * local_54 + DAT_11de98a0;
              auVar10 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              fVar12 = auVar10._0_4_;
              fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
              local_184 = local_54 * fVar12;
              local_18c = CONCAT44(local_1a4._4_4_ * fVar12,(float)local_1a4 * fVar12);
              local_178 = (uint)local_184 ^ DAT_11de9c90;
              local_180 = CONCAT44((uint)(local_1a4._4_4_ * fVar12) ^ DAT_11de9c90,
                                   (uint)((float)local_1a4 * fVar12) ^ DAT_11de9c90);
              local_1a4 = uVar1;
              local_60 = local_178;
              local_2c = uVar2;
              local_1dc = FUN_10b27fd0(piVar3[0xe]);
              iVar9 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
              local_a4 = iVar9 == local_1f4;
              piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
              local_40 = (**(code **)(*piVar6 + 0x18))("GameOnHit");
              local_34 = &local_1f4;
              local_3c = 0x4ffff;
              local_38 = 0;
              local_30 = 0;
              piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x144))(local_1f0[0]);
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 0x24))(&local_40);
              }
            }
            else {
              piVar6 = (int *)FUN_10c2b2e0(local_50,local_1f0);
              if ((undefined4 *)*piVar6 == &local_20) {
                puVar7 = (undefined4 *)FUN_10c2a980(local_1f0);
                *puVar7 = 1;
                goto LAB_10c2705b;
              }
              piVar6 = (int *)FUN_10c2a980(local_1f0);
              if (*piVar6 < piVar3[10]) {
                piVar6 = (int *)FUN_10c2a980(local_1f0);
                *piVar6 = *piVar6 + 1;
                goto LAB_10c2705b;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < piVar3[0xb]);
        }
        iVar5 = iStack_1c;
        if (local_10 != 0) {
          while (iVar5 != 0) {
            FUN_10c1ac80(*(undefined4 *)(iVar5 + 0xc));
            iVar9 = *(int *)(iVar5 + 8);
            FUN_10c3d5d0(iVar5);
            iVar5 = iVar9;
          }
        }
      }
      return (int)local_8;
    }
  }
  return 0;
}



