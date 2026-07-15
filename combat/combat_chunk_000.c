/* ===== FUN_101dc8a0 @ 101dc8a0  size=4959 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharSex]"
//   "[oCharExp]"
//   "[oStarLevel]"
//   "[oCharHP]"
//   "[oCharMaxHP]"
//   "[oCharMaxReju]"
//   "[oDeath]"
//   "[oSharpness]"
//   "[oCharAnimSpeed]"
//   "[oMaleFace]"
//   "[oMaleHair]"
//   "[oQiRenLevel]"
//   "[oRejuFlag]"
//   "[oTeamID]"

/* WARNING: Removing unreachable block (ram,0x101dc8b0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[oCharLevel]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[oCharSex]""
     ""[oCharExp]""
     ""[oStarLevel]""
     ""[oCharHP]"" */

int __thiscall FUN_101dc8a0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *puVar3;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  float *pfVar4;
  uint uVar5;
  
  piVar1 = param_2;
  iVar2 = FUN_1024a140(param_3);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0), iVar2 == 0)) {
    uVar5 = 0;
    do {
      iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 7);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if ((uint)(param_2[2] - param_2[1]) < 2) {
      iVar2 = -1;
    }
    else {
      *(char *)(param_2[1] + *param_2) = (char)param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharSex]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0x1c));
      if ((((iVar2 == 0) &&
           (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharExp]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x20)), iVar2 == 0)) &&
          (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarLevel]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x24)), iVar2 == 0)) &&
         ((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharHP]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x28)), iVar2 == 0 &&
          (iVar2 = FUN_1024a3b0(extraout_ECX,"[oCharMaxHP]",7,0), iVar2 == 0)))) {
        puVar3 = (undefined4 *)(param_1 + 0x2c);
        param_2 = (int *)0x0;
        do {
          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_2 = (int *)((int)param_2 + 1);
          puVar3 = puVar3 + 1;
        } while (param_2 < 7);
        iVar2 = FUN_1010c060(param_4);
        if ((iVar2 == 0) && (iVar2 = FUN_1024a3b0(extraout_ECX_00,"[oCharMaxReju]",7,0), iVar2 == 0)
           ) {
          puVar3 = (undefined4 *)(param_1 + 0x48);
          param_2 = (int *)0x0;
          do {
            iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
            if (iVar2 != 0) {
              return iVar2;
            }
            param_2 = (int *)((int)param_2 + 1);
            puVar3 = puVar3 + 1;
          } while (param_2 < 7);
          iVar2 = FUN_1010c060(param_4);
          if ((((iVar2 == 0) &&
               (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDeath]",&DAT_11d9e0b4,
                                     (int)*(short *)(param_1 + 100)), iVar2 == 0)) &&
              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSharpness]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x66)), iVar2 == 0)) &&
             (iVar2 = FUN_1024a3b0(extraout_ECX_01,"[oCharAnimSpeed]",7,0), iVar2 == 0)) {
            puVar3 = (undefined4 *)(param_1 + 0x6a);
            param_2 = (int *)0x0;
            do {
              iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
              if (iVar2 != 0) {
                return iVar2;
              }
              param_2 = (int *)((int)param_2 + 1);
              puVar3 = puVar3 + 1;
            } while (param_2 < 7);
            iVar2 = FUN_1010c060(param_4);
            if (((((iVar2 == 0) &&
                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMaleFace]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 0x86)), iVar2 == 0)) &&
                 ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMaleHair]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 0x8a)), iVar2 == 0 &&
                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQiRenLevel]",&DAT_11d9e0b4,
                                         *(undefined4 *)(param_1 + 0x8e)), iVar2 == 0 &&
                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRejuFlag]",&DAT_11d9e0b4,
                                         *(undefined4 *)(param_1 + 0x92)), iVar2 == 0)))))) &&
                (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTeamID]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 0x96)), iVar2 == 0)) &&
               (iVar2 = FUN_1024a3b0(extraout_ECX_02,"[oPVPDef]",7,0), iVar2 == 0)) {
              puVar3 = (undefined4 *)(param_1 + 0x9a);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar3 = puVar3 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if ((iVar2 == 0) &&
                 (iVar2 = FUN_1024a3b0(extraout_ECX_03,"[oPVPDefAngle]",7,0), iVar2 == 0)) {
                puVar3 = (undefined4 *)(param_1 + 0xb6);
                param_2 = (int *)0x0;
                do {
                  iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  param_2 = (int *)((int)param_2 + 1);
                  puVar3 = puVar3 + 1;
                } while (param_2 < 7);
                iVar2 = FUN_1010c060(param_4);
                if ((((iVar2 == 0) &&
                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oRegion]",&DAT_11d9e0b4,
                                           *(undefined4 *)(param_1 + 0xd2)), iVar2 == 0)) &&
                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oUnderClothes]",&DAT_11d9e0b4,
                                          *(undefined4 *)(param_1 + 0xd6)), iVar2 == 0)) &&
                   (iVar2 = FUN_1024a3b0(extraout_ECX_04,"[oCharRejuPer]",7,0), iVar2 == 0)) {
                  puVar3 = (undefined4 *)(param_1 + 0xda);
                  param_2 = (int *)0x0;
                  do {
                    iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar3);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    param_2 = (int *)((int)param_2 + 1);
                    puVar3 = puVar3 + 1;
                  } while (param_2 < 7);
                  iVar2 = FUN_1010c060(param_4);
                  if ((((((iVar2 == 0) &&
                         (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharRemainsExp]",
                                               &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xf6)),
                         iVar2 == 0)) &&
                        ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLastResetTime]",
                                               &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0xfa)),
                         iVar2 == 0 &&
                         ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSkinColor]",&DAT_11d9e0b4,
                                                *(undefined4 *)(param_1 + 0xfe)), iVar2 == 0 &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHairColor]",&DAT_11d9e0b4,
                                                *(undefined4 *)(param_1 + 0x102)), iVar2 == 0))))))
                       && ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oInnerColor]",
                                                 &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x106)),
                           iVar2 == 0 &&
                           (((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFaceTattooIndex]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x10a))
                               , iVar2 == 0 &&
                               (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEyeBall]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x10e))
                               , iVar2 == 0)) &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFaceTattooColor]",
                                                    &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x112)),
                              iVar2 == 0)) &&
                             ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEyeColor]",
                                                    &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x116)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCombatNPCID]",
                                                    &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x11a)),
                              iVar2 == 0)))) &&
                            ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideFashion]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x11e)),
                             iVar2 == 0 &&
                             ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideSuite]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x120)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oHideHelm]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x122)),
                              iVar2 == 0)))))))))) &&
                      ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oJinLiValue]",&DAT_11d9e0b4,
                                             *(undefined4 *)(param_1 + 0x124)), iVar2 == 0 &&
                       (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oEquipTitleID]",
                                               &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x128)),
                         iVar2 == 0 &&
                         (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTitleLevel]",&DAT_11d9e0b4,
                                               *(undefined4 *)(param_1 + 300)), iVar2 == 0)) &&
                        (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGuildId]",&DAT_11d9e0b4,
                                              *(undefined4 *)(param_1 + 0x130)), iVar2 == 0)))))) &&
                     ((((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTeamPasswordFlag]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x134)),
                          iVar2 == 0 &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo1]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x136)),
                          iVar2 == 0)) &&
                         (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo2]",
                                                 &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x138)),
                           iVar2 == 0 &&
                           ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo3]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x13a)),
                            iVar2 == 0 &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo4]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x13c)),
                            iVar2 == 0)))) &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo5]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x13e)),
                          iVar2 == 0)))) &&
                        ((((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo6]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x140)),
                             iVar2 == 0 &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo7]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x142)),
                             iVar2 == 0)) &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo8]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x144)),
                            iVar2 == 0)) &&
                           (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo9]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x146)),
                             iVar2 == 0 &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo10]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x148)),
                             iVar2 == 0)) &&
                            ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo11]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x14a)),
                             iVar2 == 0 &&
                             ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo12]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x14c)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo13]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x14e)),
                              iVar2 == 0)))))))) &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo14]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x150)),
                          iVar2 == 0)) &&
                         ((((((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo15]",
                                                      &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x152)
                                                     ), iVar2 == 0 &&
                                (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo16]",
                                                      &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x154)
                                                     ), iVar2 == 0)) &&
                               (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo17]",
                                                     &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x156))
                               , iVar2 == 0)) &&
                              ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo18]",
                                                     &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x158))
                               , iVar2 == 0 &&
                               (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo19]",
                                                     &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x15a))
                               , iVar2 == 0)))) &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo20]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x15c)),
                             iVar2 == 0)) &&
                            ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo21]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x15e)),
                             iVar2 == 0 &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo22]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x160)),
                             iVar2 == 0)))) &&
                           ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo23]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x162)),
                            iVar2 == 0 &&
                            (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo24]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x164)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo25]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x166)),
                              iVar2 == 0)) &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIP]",&DAT_11d9e0b4,
                                                   (int)*(short *)(param_1 + 0x168)), iVar2 == 0))))
                           )) && ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPLevel]",
                                                        &DAT_11d9e0b4,
                                                        *(undefined4 *)(param_1 + 0x16a)),
                                  iVar2 == 0 &&
                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPExp]",
                                                        &DAT_11d9e0b4,
                                                        *(undefined4 *)(param_1 + 0x16e)),
                                  iVar2 == 0)))))))) &&
                       ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oVIPBaseCanUse]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x172)),
                          iVar2 == 0 &&
                          (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oGameVIP]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x174)), iVar2 == 0 &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oQQVIP]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x176)), iVar2 == 0)) &&
                           ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oYearQQVIP]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x178)),
                            iVar2 == 0 &&
                            (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSuperQQVIP]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x17a)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oNetbarLevel]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x17c)),
                              iVar2 == 0)) &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharHRLevel]",
                                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x17e)),
                             iVar2 == 0)))))))) &&
                         (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oCharHRPoint]",
                                                 &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x182)),
                           iVar2 == 0 &&
                           (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oXYVIP]",&DAT_11d9e0b4,
                                                 (int)*(short *)(param_1 + 0x186)), iVar2 == 0)) &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo26]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x188)),
                          iVar2 == 0)))) &&
                        (((((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo27]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x18a)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo28]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x18c)),
                              iVar2 == 0)) &&
                             ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo29]",
                                                    &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x18e)),
                              iVar2 == 0 &&
                              ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo30]",
                                                       &DAT_11d9e0b4,(int)*(short *)(param_1 + 400))
                                 , iVar2 == 0 &&
                                 (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo31]",
                                                       &DAT_11d9e0b4,
                                                       (int)*(short *)(param_1 + 0x192)), iVar2 == 0
                                 )) && (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                             "[oFacialInfo32]",&DAT_11d9e0b4,
                                                             (int)*(short *)(param_1 + 0x194)),
                                       iVar2 == 0)) &&
                               ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo33]",
                                                      &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x196)
                                                     ), iVar2 == 0 &&
                                (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo34]",
                                                      &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x198)
                                                     ), iVar2 == 0)))))))) &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo35]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x19a)),
                            iVar2 == 0)) &&
                           ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo36]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x19c)),
                            iVar2 == 0 &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo37]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x19e)),
                            iVar2 == 0)))) &&
                          ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo38]",
                                                 &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1a0)),
                           iVar2 == 0 &&
                           (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo39]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1a2)),
                             iVar2 == 0 &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo40]",
                                                   &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1a4)),
                             iVar2 == 0)) &&
                            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo41]",
                                                  &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1a6)),
                            iVar2 == 0)))))) &&
                         (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo42]",
                                                 &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1a8)),
                           iVar2 == 0 &&
                           (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo43]",
                                                 &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1aa)),
                           iVar2 == 0)) &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo44]",
                                                &DAT_11d9e0b4,(int)*(short *)(param_1 + 0x1ac)),
                          iVar2 == 0)))))))) &&
                      (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo45]",&DAT_11d9e0b4
                                              ,(int)*(short *)(param_1 + 0x1ae)), iVar2 == 0 &&
                        (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo46]",&DAT_11d9e0b4
                                              ,(int)*(short *)(param_1 + 0x1b0)), iVar2 == 0)) &&
                       ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFacialInfo47]",&DAT_11d9e0b4
                                              ,(int)*(short *)(param_1 + 0x1b2)), iVar2 == 0 &&
                        (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTGPVIP]",&DAT_11d9e0b4,
                                                (int)*(short *)(param_1 + 0x1b4)), iVar2 == 0 &&
                          (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oFluteTune]",&DAT_11d9e0b4,
                                                *(undefined4 *)(param_1 + 0x1b6)), iVar2 == 0)) &&
                         (iVar2 = FUN_1024a3b0(extraout_ECX_05,"[oDefenseReduceHPModifyRate]",7,0),
                         iVar2 == 0)))))))))) {
                    pfVar4 = (float *)(param_1 + 0x1ba);
                    param_2 = (int *)0x0;
                    do {
                      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar4);
                      if (iVar2 != 0) {
                        return iVar2;
                      }
                      param_2 = (int *)((int)param_2 + 1);
                      pfVar4 = pfVar4 + 1;
                    } while (param_2 < 7);
                    iVar2 = FUN_1010c060(param_4);
                    if ((iVar2 == 0) &&
                       (iVar2 = FUN_1024a3b0(extraout_ECX_06,"[oDefenseReduceStaModifyRate]",7,0),
                       iVar2 == 0)) {
                      pfVar4 = (float *)(param_1 + 0x1d6);
                      param_2 = (int *)0x0;
                      do {
                        iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar4);
                        if (iVar2 != 0) {
                          return iVar2;
                        }
                        param_2 = (int *)((int)param_2 + 1);
                        pfVar4 = pfVar4 + 1;
                      } while (param_2 < 7);
                      iVar2 = FUN_1010c060(param_4);
                      if ((((iVar2 == 0) &&
                           (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDeadTime]",&DAT_11d9e0b4,
                                                 *(undefined4 *)(param_1 + 0x1f2)), iVar2 == 0)) &&
                          ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWildHuntCamp]",
                                                 &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x1f6)),
                           iVar2 == 0 &&
                           ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oTotalHRPoint]",
                                                    &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x1fa)),
                              iVar2 == 0 &&
                              (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLikeHunterOfficer]",
                                                    &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x1fe)),
                              iVar2 == 0)) &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oLevelShowType]",
                                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x202)),
                             iVar2 == 0)) &&
                            ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyRoundCount]",
                                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x206)),
                             iVar2 == 0 &&
                             (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyActivity]",
                                                   &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x20a)),
                             iVar2 == 0)))))))) &&
                         ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oMonolopyCurGrid]",
                                                &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x20e)),
                          iVar2 == 0 &&
                          ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSoulStoneLevel]",
                                                 &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x212)),
                           iVar2 == 0 &&
                           (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oWeeklyRefreshTime]",
                                                 &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x216)),
                           iVar2 == 0)))))) {
                        iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oSoulStoneAtkLevel]",
                                             &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x21a));
                        return iVar2;
                      }
                    }
                  }
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



/* ===== FUN_101ea1c0 @ 101ea1c0  size=9912 ===== */
// calls: _wassert
// strings:
//   "[oCharLevel]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[0 : %I64i]:"
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"
//   "[oCharSex]"
//   "[oCharExp]"
//   "[oStarLevel]"
//   "[oStarCollection]"
//   "[oStarQuest]"
//   "[oStarCombat]"
//   "[oStarPet]"
//   "[oStarProduct]"
//   "[oStarGuild]"
//   "[oStarTame]"
//   "[oStarPvP]"
//   "[oCharHP]"
//   "[oCharMaxHP]"
//   "[oDeath]"

/* WARNING: Removing unreachable block (ram,0x101ea1d0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp, TdrBuf.h
   calls: _wassert
   strings:
     ""[oCharLevel]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:""
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length""
     ""[oCharSex]""
     ""[oCharExp]""
     ""[oStarLevel]""
     ""[oStarCollection]"" */

int __thiscall FUN_101ea1c0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
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
  float *pfVar3;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 *puVar4;
  uint uVar5;
  
  piVar1 = param_2;
  iVar2 = FUN_1024a140(param_3);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1010c010(param_2,"%s[0 : %I64i]:","[oCharLevel]",6,0), iVar2 == 0)) {
    uVar5 = 0;
    do {
      iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined4 *)(param_1 + uVar5 * 4));
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 7);
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
    }
    if ((uint)(param_2[2] - param_2[1]) < 2) {
      iVar2 = -1;
    }
    else {
      *(char *)(param_2[1] + *param_2) = (char)param_4;
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharSex]",&DAT_11d9e0b4,
                           *(undefined4 *)(param_1 + 0x1c));
      if ((((((iVar2 == 0) &&
             (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharExp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x20)), iVar2 == 0)) &&
            (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarLevel]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x24)), iVar2 == 0)) &&
           (((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarCollection]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x28)), iVar2 == 0 &&
             (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarQuest]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x2c)), iVar2 == 0)) &&
            ((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarCombat]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x30)), iVar2 == 0 &&
             ((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarPet]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x34)), iVar2 == 0 &&
              (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarProduct]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x38)), iVar2 == 0)))))))) &&
          (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarGuild]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x3c)), iVar2 == 0)) &&
         ((((iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarTame]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x40)), iVar2 == 0 &&
            (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oStarPvP]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 0x44)), iVar2 == 0)) &&
           (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[oCharHP]",&DAT_11d9e0b4,
                                 *(undefined4 *)(param_1 + 0x48)), iVar2 == 0)) &&
          (iVar2 = FUN_1024a3b0(extraout_ECX,"[oCharMaxHP]",7,0), iVar2 == 0)))) {
        puVar4 = (undefined4 *)(param_1 + 0x4c);
        param_2 = (int *)0x0;
        do {
          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_2 = (int *)((int)param_2 + 1);
          puVar4 = puVar4 + 1;
        } while (param_2 < 7);
        iVar2 = FUN_1010c060(param_4);
        if (((iVar2 == 0) &&
            (iVar2 = FUN_1024a290(piVar1,param_3,param_4,"[oDeath]",&DAT_11d9e0b4,
                                  (int)*(short *)(param_1 + 0x68)), iVar2 == 0)) &&
           (iVar2 = FUN_1024a3b0(extraout_ECX_00,"[oCharMaxSta]",7,0), iVar2 == 0)) {
          puVar4 = (undefined4 *)(param_1 + 0x6a);
          param_2 = (int *)0x0;
          do {
            iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
            if (iVar2 != 0) {
              return iVar2;
            }
            param_2 = (int *)((int)param_2 + 1);
            puVar4 = puVar4 + 1;
          } while (param_2 < 7);
          iVar2 = FUN_1010c060(param_4);
          if ((iVar2 == 0) && (iVar2 = FUN_1024a3b0(extraout_ECX_01,"[oCharStr]",7,0), iVar2 == 0))
          {
            puVar4 = (undefined4 *)(param_1 + 0x86);
            param_2 = (int *)0x0;
            do {
              iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
              if (iVar2 != 0) {
                return iVar2;
              }
              param_2 = (int *)((int)param_2 + 1);
              puVar4 = puVar4 + 1;
            } while (param_2 < 7);
            iVar2 = FUN_1010c060(param_4);
            if ((iVar2 == 0) && (iVar2 = FUN_1024a3b0(extraout_ECX_02,"[oCharBst]",7,0), iVar2 == 0)
               ) {
              puVar4 = (undefined4 *)(param_1 + 0xa2);
              param_2 = (int *)0x0;
              do {
                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar4 = puVar4 + 1;
              } while (param_2 < 7);
              iVar2 = FUN_1010c060(param_4);
              if ((iVar2 == 0) &&
                 (iVar2 = FUN_1024a3b0(extraout_ECX_03,"[oCharLck]",7,0), iVar2 == 0)) {
                puVar4 = (undefined4 *)(param_1 + 0xbe);
                param_2 = (int *)0x0;
                do {
                  iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  param_2 = (int *)((int)param_2 + 1);
                  puVar4 = puVar4 + 1;
                } while (param_2 < 7);
                iVar2 = FUN_1010c060(param_4);
                if ((iVar2 == 0) &&
                   (iVar2 = FUN_1024a3b0(extraout_ECX_04,"[oCharVgr]",7,0), iVar2 == 0)) {
                  puVar4 = (undefined4 *)(param_1 + 0xda);
                  param_2 = (int *)0x0;
                  do {
                    iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    param_2 = (int *)((int)param_2 + 1);
                    puVar4 = puVar4 + 1;
                  } while (param_2 < 7);
                  iVar2 = FUN_1010c060(param_4);
                  if ((iVar2 == 0) &&
                     (iVar2 = FUN_1024a3b0(extraout_ECX_05,"[oCharMelee]",7,0), iVar2 == 0)) {
                    pfVar3 = (float *)(param_1 + 0xf6);
                    param_2 = (int *)0x0;
                    do {
                      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                      if (iVar2 != 0) {
                        return iVar2;
                      }
                      param_2 = (int *)((int)param_2 + 1);
                      pfVar3 = pfVar3 + 1;
                    } while (param_2 < 7);
                    iVar2 = FUN_1010c060(param_4);
                    if ((iVar2 == 0) &&
                       (iVar2 = FUN_1024a3b0(extraout_ECX_06,"[oCharRange]",7,0), iVar2 == 0)) {
                      pfVar3 = (float *)(param_1 + 0x112);
                      param_2 = (int *)0x0;
                      do {
                        iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,(double)*pfVar3);
                        if (iVar2 != 0) {
                          return iVar2;
                        }
                        param_2 = (int *)((int)param_2 + 1);
                        pfVar3 = pfVar3 + 1;
                      } while (param_2 < 7);
                      iVar2 = FUN_1010c060(param_4);
                      if ((iVar2 == 0) &&
                         (iVar2 = FUN_1024a3b0(extraout_ECX_07,"[oCharDefence]",7,0), iVar2 == 0)) {
                        puVar4 = (undefined4 *)(param_1 + 0x12e);
                        param_2 = (int *)0x0;
                        do {
                          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                          if (iVar2 != 0) {
                            return iVar2;
                          }
                          param_2 = (int *)((int)param_2 + 1);
                          puVar4 = puVar4 + 1;
                        } while (param_2 < 7);
                        iVar2 = FUN_1010c060(param_4);
                        if ((iVar2 == 0) &&
                           (iVar2 = FUN_1024a3b0(extraout_ECX_08,"[oCritLevel]",7,0), iVar2 == 0)) {
                          puVar4 = (undefined4 *)(param_1 + 0x14a);
                          param_2 = (int *)0x0;
                          do {
                            iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                            if (iVar2 != 0) {
                              return iVar2;
                            }
                            param_2 = (int *)((int)param_2 + 1);
                            puVar4 = puVar4 + 1;
                          } while (param_2 < 7);
                          iVar2 = FUN_1010c060(param_4);
                          if ((iVar2 == 0) &&
                             (iVar2 = FUN_1024a3b0(extraout_ECX_09,"[oCritDmg]",7,0), iVar2 == 0)) {
                            puVar4 = (undefined4 *)(param_1 + 0x166);
                            param_2 = (int *)0x0;
                            do {
                              iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                              if (iVar2 != 0) {
                                return iVar2;
                              }
                              param_2 = (int *)((int)param_2 + 1);
                              puVar4 = puVar4 + 1;
                            } while (param_2 < 7);
                            iVar2 = FUN_1010c060(param_4);
                            if ((iVar2 == 0) &&
                               (iVar2 = FUN_1024a3b0(extraout_ECX_10,"[oAntiCritDmg]",7,0),
                               iVar2 == 0)) {
                              puVar4 = (undefined4 *)(param_1 + 0x182);
                              param_2 = (int *)0x0;
                              do {
                                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                if (iVar2 != 0) {
                                  return iVar2;
                                }
                                param_2 = (int *)((int)param_2 + 1);
                                puVar4 = puVar4 + 1;
                              } while (param_2 < 7);
                              iVar2 = FUN_1010c060(param_4);
                              if ((iVar2 == 0) &&
                                 (iVar2 = FUN_1024a3b0(extraout_ECX_11,"[oWaterAttack]",7,0),
                                 iVar2 == 0)) {
                                puVar4 = (undefined4 *)(param_1 + 0x19e);
                                param_2 = (int *)0x0;
                                do {
                                  iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                  if (iVar2 != 0) {
                                    return iVar2;
                                  }
                                  param_2 = (int *)((int)param_2 + 1);
                                  puVar4 = puVar4 + 1;
                                } while (param_2 < 7);
                                iVar2 = FUN_1010c060(param_4);
                                if ((iVar2 == 0) &&
                                   (iVar2 = FUN_1024a3b0(extraout_ECX_12,"[oFireAttack]",7,0),
                                   iVar2 == 0)) {
                                  puVar4 = (undefined4 *)(param_1 + 0x1ba);
                                  param_2 = (int *)0x0;
                                  do {
                                    iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                    if (iVar2 != 0) {
                                      return iVar2;
                                    }
                                    param_2 = (int *)((int)param_2 + 1);
                                    puVar4 = puVar4 + 1;
                                  } while (param_2 < 7);
                                  iVar2 = FUN_1010c060(param_4);
                                  if ((iVar2 == 0) &&
                                     (iVar2 = FUN_1024a3b0(extraout_ECX_13,"[oLightningAttack]",7,0)
                                     , iVar2 == 0)) {
                                    puVar4 = (undefined4 *)(param_1 + 0x1d6);
                                    param_2 = (int *)0x0;
                                    do {
                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                      if (iVar2 != 0) {
                                        return iVar2;
                                      }
                                      param_2 = (int *)((int)param_2 + 1);
                                      puVar4 = puVar4 + 1;
                                    } while (param_2 < 7);
                                    iVar2 = FUN_1010c060(param_4);
                                    if ((iVar2 == 0) &&
                                       (iVar2 = FUN_1024a3b0(extraout_ECX_14,"[oDragonAttack]",7,0),
                                       iVar2 == 0)) {
                                      puVar4 = (undefined4 *)(param_1 + 0x1f2);
                                      param_2 = (int *)0x0;
                                      do {
                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                        if (iVar2 != 0) {
                                          return iVar2;
                                        }
                                        param_2 = (int *)((int)param_2 + 1);
                                        puVar4 = puVar4 + 1;
                                      } while (param_2 < 7);
                                      iVar2 = FUN_1010c060(param_4);
                                      if ((iVar2 == 0) &&
                                         (iVar2 = FUN_1024a3b0(extraout_ECX_15,"[oIceAttack]",7,0),
                                         iVar2 == 0)) {
                                        puVar4 = (undefined4 *)(param_1 + 0x20e);
                                        param_2 = (int *)0x0;
                                        do {
                                          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                          if (iVar2 != 0) {
                                            return iVar2;
                                          }
                                          param_2 = (int *)((int)param_2 + 1);
                                          puVar4 = puVar4 + 1;
                                        } while (param_2 < 7);
                                        iVar2 = FUN_1010c060(param_4);
                                        if ((iVar2 == 0) &&
                                           (iVar2 = FUN_1024a3b0(extraout_ECX_16,"[oNonAttack]",7,0)
                                           , iVar2 == 0)) {
                                          puVar4 = (undefined4 *)(param_1 + 0x22a);
                                          param_2 = (int *)0x0;
                                          do {
                                            iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                            if (iVar2 != 0) {
                                              return iVar2;
                                            }
                                            param_2 = (int *)((int)param_2 + 1);
                                            puVar4 = puVar4 + 1;
                                          } while (param_2 < 7);
                                          iVar2 = FUN_1010c060(param_4);
                                          if ((iVar2 == 0) &&
                                             (iVar2 = FUN_1024a3b0(extraout_ECX_17,"[oPoisonAttack]"
                                                                   ,7,0), iVar2 == 0)) {
                                            puVar4 = (undefined4 *)(param_1 + 0x246);
                                            param_2 = (int *)0x0;
                                            do {
                                              iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                              if (iVar2 != 0) {
                                                return iVar2;
                                              }
                                              param_2 = (int *)((int)param_2 + 1);
                                              puVar4 = puVar4 + 1;
                                            } while (param_2 < 7);
                                            iVar2 = FUN_1010c060(param_4);
                                            if ((iVar2 == 0) &&
                                               (iVar2 = FUN_1024a3b0(extraout_ECX_18,
                                                                     "[oSleepyAttack]",7,0),
                                               iVar2 == 0)) {
                                              puVar4 = (undefined4 *)(param_1 + 0x262);
                                              param_2 = (int *)0x0;
                                              do {
                                                iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4);
                                                if (iVar2 != 0) {
                                                  return iVar2;
                                                }
                                                param_2 = (int *)((int)param_2 + 1);
                                                puVar4 = puVar4 + 1;
                                              } while (param_2 < 7);
                                              iVar2 = FUN_1010c060(param_4);
                                              if ((iVar2 == 0) &&
                                                 (iVar2 = FUN_1024a3b0(extraout_ECX_19,
                                                                       "[oParalysisAttack]",7,0),
                                                 iVar2 == 0)) {
                                                puVar4 = (undefined4 *)(param_1 + 0x27e);
                                                param_2 = (int *)0x0;
                                                do {
                                                  iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,*puVar4)
                                                  ;
                                                  if (iVar2 != 0) {
                                                    return iVar2;
                                                  }
                                                  param_2 = (int *)((int)param_2 + 1);
                                                  puVar4 = puVar4 + 1;
                                                } while (param_2 < 7);
                                                iVar2 = FUN_1010c060(param_4);
                                                if ((iVar2 == 0) &&
                                                   (iVar2 = FUN_1024a3b0(extraout_ECX_20,
                                                                         "[oWaterRes]",7,0),
                                                   iVar2 == 0)) {
                                                  puVar4 = (undefined4 *)(param_1 + 0x29a);
                                                  param_2 = (int *)0x0;
                                                  do {
                                                    iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                         *puVar4);
                                                    if (iVar2 != 0) {
                                                      return iVar2;
                                                    }
                                                    param_2 = (int *)((int)param_2 + 1);
                                                    puVar4 = puVar4 + 1;
                                                  } while (param_2 < 7);
                                                  iVar2 = FUN_1010c060(param_4);
                                                  if ((iVar2 == 0) &&
                                                     (iVar2 = FUN_1024a3b0(extraout_ECX_21,
                                                                           "[oFireRes]",7,0),
                                                     iVar2 == 0)) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x2b6);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_22,
                                                                             "[oLightningRes]",7,0),
                                                       iVar2 == 0)) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x2d2);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if ((iVar2 == 0) &&
                                                         (iVar2 = FUN_1024a3b0(extraout_ECX_23,
                                                                               "[oDragonRes]",7,0),
                                                         iVar2 == 0)) {
                                                        puVar4 = (undefined4 *)(param_1 + 0x2ee);
                                                        param_2 = (int *)0x0;
                                                        do {
                                                          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                               *puVar4);
                                                          if (iVar2 != 0) {
                                                            return iVar2;
                                                          }
                                                          param_2 = (int *)((int)param_2 + 1);
                                                          puVar4 = puVar4 + 1;
                                                        } while (param_2 < 7);
                                                        iVar2 = FUN_1010c060(param_4);
                                                        if ((iVar2 == 0) &&
                                                           (iVar2 = FUN_1024a3b0(extraout_ECX_24,
                                                                                 "[oIceRes]",7,0),
                                                           iVar2 == 0)) {
                                                          puVar4 = (undefined4 *)(param_1 + 0x30a);
                                                          param_2 = (int *)0x0;
                                                          do {
                                                            iVar2 = FUN_1010c010(piVar1,&
                                                  DAT_11d9f710,*puVar4);
                                                  if (iVar2 != 0) {
                                                    return iVar2;
                                                  }
                                                  param_2 = (int *)((int)param_2 + 1);
                                                  puVar4 = puVar4 + 1;
                                                  } while (param_2 < 7);
                                                  iVar2 = FUN_1010c060(param_4);
                                                  if ((iVar2 == 0) &&
                                                     (iVar2 = FUN_1024a3b0(extraout_ECX_25,
                                                                           "[oParaThrsh]",7,0),
                                                     iVar2 == 0)) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x326);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if (((iVar2 == 0) &&
                                                        (iVar2 = FUN_1024a290(piVar1,param_3,param_4
                                                                              ,"[oCharEnergy]",
                                                                              &DAT_11d9e0b4,
                                                                              *(undefined4 *)
                                                                               (param_1 + 0x342)),
                                                        iVar2 == 0)) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_26,
                                                                             "[oCharMaxEnergy]",7,0)
                                                       , iVar2 == 0)) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x346);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if (((((iVar2 == 0) &&
                                                            (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                  param_4,
                                                  "[oClaymoreExp]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x362)), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oHammerExp]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x366)),
                                                   iVar2 == 0 &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oKatanaExp]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x36a)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oDuelSwordExp]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x36e)),
                                                    iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oSwordExp]",&DAT_11d9e0b4
                                                                         ,*(undefined4 *)
                                                                           (param_1 + 0x372)),
                                                   iVar2 == 0 &&
                                                   ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oSpearExp]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x376)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oGunExp]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x37a)),
                                                      iVar2 == 0)) &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oBowExp]",&DAT_11d9e0b4
                                                                           ,*(undefined4 *)
                                                                             (param_1 + 0x37e)),
                                                     iVar2 == 0)) &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oCrossbowExp]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x382)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFluteExp]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x386)),
                                                     iVar2 == 0)))))))) &&
                                                  ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oCharGuild]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x38a)),
                                                     iVar2 == 0 &&
                                                     ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oCharWarteam]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x38e)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oMaleFace]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x392)),
                                                      iVar2 == 0)))) &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oMaleHair]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x396)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1024a3b0(extraout_ECX_27,"[oPVEDef]"
                                                                         ,7,0), iVar2 == 0)))) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x39a);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_28,
                                                                             "[oPVEDefAngle]",7,0),
                                                       iVar2 == 0)) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x3b6);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if ((iVar2 == 0) &&
                                                         (iVar2 = FUN_1024a3b0(extraout_ECX_29,
                                                                               "[oPVPDef]",7,0),
                                                         iVar2 == 0)) {
                                                        puVar4 = (undefined4 *)(param_1 + 0x3d2);
                                                        param_2 = (int *)0x0;
                                                        do {
                                                          iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                               *puVar4);
                                                          if (iVar2 != 0) {
                                                            return iVar2;
                                                          }
                                                          param_2 = (int *)((int)param_2 + 1);
                                                          puVar4 = puVar4 + 1;
                                                        } while (param_2 < 7);
                                                        iVar2 = FUN_1010c060(param_4);
                                                        if ((iVar2 == 0) &&
                                                           (iVar2 = FUN_1024a3b0(extraout_ECX_30,
                                                                                 "[oPVPDefAngle]",7,
                                                                                 0), iVar2 == 0)) {
                                                          puVar4 = (undefined4 *)(param_1 + 0x3ee);
                                                          param_2 = (int *)0x0;
                                                          do {
                                                            iVar2 = FUN_1010c010(piVar1,&
                                                  DAT_11d9f710,*puVar4);
                                                  if (iVar2 != 0) {
                                                    return iVar2;
                                                  }
                                                  param_2 = (int *)((int)param_2 + 1);
                                                  puVar4 = puVar4 + 1;
                                                  } while (param_2 < 7);
                                                  iVar2 = FUN_1010c060(param_4);
                                                  if (((((((((iVar2 == 0) &&
                                                            (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                  param_4,
                                                  "[oUnderClothes]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x40a)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oNewbie]",&DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x40e)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oStateFlag]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x412)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oPetCarryNum]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x416)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oPetHomeNum]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x41a)),
                                                  iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oPetOwendNumMax]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x41e)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oCharContribution]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x422)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oCharRemainsExp]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x426)),
                                                    iVar2 == 0 &&
                                                    (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oFarmOpenFlag]",
                                                                            &DAT_11d9e0b4,
                                                                            (int)*(short *)(param_1 
                                                  + 0x42a)), iVar2 == 0 &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFarmExp]",&DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x42c)),
                                                  iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFarmEvaluation]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x430)),
                                                  iVar2 == 0)))))))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oLastResetTime]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x434)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oSkinColor]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x438)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oHairColor]",&DAT_11d9e0b4
                                                                        ,*(undefined4 *)
                                                                          (param_1 + 0x43c)),
                                                  iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oInnerColor]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x440)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFaceTattooIndex]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x444)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oEyeBall]",&DAT_11d9e0b4
                                                                          ,*(undefined4 *)
                                                                            (param_1 + 0x448)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a3b0(extraout_ECX_31,
                                                                          "[oAdditionalHate]",7,0),
                                                    iVar2 == 0)))))) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x44c);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_32,
                                                                             "[oPlayerAtk]",7,0),
                                                       iVar2 == 0)) {
                                                      pfVar3 = (float *)(param_1 + 0x468);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,
                                                                             (double)*pfVar3);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        pfVar3 = pfVar3 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if (((iVar2 == 0) &&
                                                          (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                param_4,
                                                  "[oFarmFriendGatherCount]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x484)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a3b0(extraout_ECX_33,
                                                                        "[oPlayerCrit]",7,0),
                                                  iVar2 == 0)) {
                                                    pfVar3 = (float *)(param_1 + 0x488);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,
                                                                           (double)*pfVar3);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      pfVar3 = pfVar3 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if (((iVar2 == 0) &&
                                                        (iVar2 = FUN_1024a290(piVar1,param_3,param_4
                                                                              ,"[oFaceTattooColor]",
                                                                              &DAT_11d9e0b4,
                                                                              *(undefined4 *)
                                                                               (param_1 + 0x4a4)),
                                                        iVar2 == 0)) &&
                                                       ((iVar2 = FUN_1024a290(piVar1,param_3,param_4
                                                                              ,"[oEyeColor]",
                                                                              &DAT_11d9e0b4,
                                                                              *(undefined4 *)
                                                                               (param_1 + 0x4a8)),
                                                        iVar2 == 0 &&
                                                        (iVar2 = FUN_1024a3b0(extraout_ECX_34,
                                                                              "[oAttrAtkFlag]",7,0),
                                                        iVar2 == 0)))) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x4ac);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if (((iVar2 == 0) &&
                                                          (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                param_4,
                                                  "[oCombatNPCID]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x4c8)), iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oBattleState]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x4cc)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a3b0(extraout_ECX_35,
                                                                         "[oHammerModeTime]",7,0),
                                                   iVar2 == 0)))) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x4d0);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if (((((iVar2 == 0) &&
                                                          (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                param_4,
                                                  "[oHideFashion]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x4ec)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oHideSuite]",&DAT_11d9e0b4
                                                                        ,(int)*(short *)(param_1 +
                                                                                        0x4ee)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oHideHelm]",&DAT_11d9e0b4
                                                                         ,(int)*(short *)(param_1 +
                                                                                         0x4f0)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oJinLiValue]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x4f2)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1024a3b0(extraout_ECX_36,
                                                                        "[oJinLiStep1MaxValue]",7,0)
                                                  , iVar2 == 0)) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x4f6);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_37,
                                                                             "[oJinLiStep2MaxValue]"
                                                                             ,7,0), iVar2 == 0)) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x512);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if (((((((iVar2 == 0) &&
                                                              (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                    param_4,
                                                  "[oJinLiStep1ReduceValue]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x52e)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oJinLiStep2ReduceValue]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x532)),
                                                  iVar2 == 0)) &&
                                                  ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oEquipTitleID]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x536)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oTitleExp]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x53a)),
                                                     iVar2 == 0)) &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oTitleLevel]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x53e)),
                                                     iVar2 == 0 &&
                                                     ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oEquipTitleBuff]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x542)),
                                                      iVar2 == 0 &&
                                                      (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oSystemUnlockData]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x546)),
                                                      iVar2 == 0)))))) &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oGuildContribution]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x54a)),
                                                   iVar2 == 0)))) &&
                                                  ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oExtDailyExp]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x54e)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oGuildId]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x552)),
                                                     iVar2 == 0)) &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oTeamPasswordFlag]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x556)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo1]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x558)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo2]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x55a)),
                                                    iVar2 == 0)))))) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo3]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x55c)),
                                                    iVar2 == 0 &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo4]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x55e)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo5]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x560)),
                                                     iVar2 == 0)))) &&
                                                   (((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oFacialInfo6]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x562)
                                                                            ), iVar2 == 0 &&
                                                       ((((iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                param_4,
                                                  "[oFacialInfo7]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x564)), iVar2 == 0 &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo8]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x566)),
                                                  iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo9]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x568)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo10]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x56a)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo11]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x56c)),
                                                   iVar2 == 0)))))) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo12]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x56e)),
                                                    iVar2 == 0 &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo13]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x570)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo14]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x572)),
                                                     iVar2 == 0)))) &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo15]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x574)),
                                                   iVar2 == 0)))) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo16]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x576)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo17]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x578)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo18]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x57a)),
                                                   iVar2 == 0)))) &&
                                                  ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo19]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x57c)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo20]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x57e)),
                                                     iVar2 == 0)) &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo21]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x580)),
                                                     iVar2 == 0 &&
                                                     ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oFacialInfo22]",
                                                                            &DAT_11d9e0b4,
                                                                            (int)*(short *)(param_1 
                                                  + 0x582)), iVar2 == 0 &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo23]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x584)),
                                                  iVar2 == 0)))))) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo24]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x586)),
                                                  iVar2 == 0)))))))) &&
                                                  ((((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oFacialInfo25]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x588)
                                                                            ), iVar2 == 0 &&
                                                       (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oVIP]",&DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x58a)
                                                                            ), iVar2 == 0)) &&
                                                      (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oVIPLevel]",
                                                                            &DAT_11d9e0b4,
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x58c)),
                                                      iVar2 == 0)) &&
                                                     (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oVIPExp]",
                                                                             &DAT_11d9e0b4,
                                                                             *(undefined4 *)
                                                                              (param_1 + 0x590)),
                                                       iVar2 == 0 &&
                                                       (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oVIPBaseCanUse]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x594)
                                                                            ), iVar2 == 0)) &&
                                                      ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oGameVIP]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x596)
                                                                            ), iVar2 == 0 &&
                                                       ((iVar2 = FUN_1024a290(piVar1,param_3,param_4
                                                                              ,"[oQQVIP]",
                                                                              &DAT_11d9e0b4,
                                                                              (int)*(short *)(
                                                  param_1 + 0x598)), iVar2 == 0 &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oYearQQVIP]",&DAT_11d9e0b4
                                                                        ,(int)*(short *)(param_1 +
                                                                                        0x59a)),
                                                  iVar2 == 0)))))))) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oSuperQQVIP]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x59c)),
                                                    iVar2 == 0 &&
                                                    ((((((iVar2 = FUN_1024a290(piVar1,param_3,
                                                                               param_4,
                                                  "[oNetbarLevel]",&DAT_11d9e0b4,
                                                  (int)*(short *)(param_1 + 0x59e)), iVar2 == 0 &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oCharHRLevel]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x5a0)),
                                                  iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oCharHRPoint]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x5a4)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oXYVIP]",&DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5a8)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo26]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5aa)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo27]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x5ac)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo28]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5ae)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo29]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5b0)),
                                                   iVar2 == 0)))))) &&
                                                  ((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFacialInfo30]",
                                                                           &DAT_11d9e0b4,
                                                                           (int)*(short *)(param_1 +
                                                                                          0x5b2)),
                                                     iVar2 == 0 &&
                                                     (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oFacialInfo31]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x5b4)
                                                                            ), iVar2 == 0 &&
                                                       (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                             "[oFacialInfo32]",
                                                                             &DAT_11d9e0b4,
                                                                             (int)*(short *)(param_1
                                                                                            + 0x5b6)
                                                                            ), iVar2 == 0)) &&
                                                      (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oFacialInfo33]",
                                                                            &DAT_11d9e0b4,
                                                                            (int)*(short *)(param_1 
                                                  + 0x5b8)), iVar2 == 0)))) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo34]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5ba)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo35]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5bc)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo36]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5be)),
                                                   iVar2 == 0)))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo37]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5c0)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo38]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5c2)),
                                                   iVar2 == 0)))))))) &&
                                                  (((((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                            "[oFacialInfo39]",
                                                                            &DAT_11d9e0b4,
                                                                            (int)*(short *)(param_1 
                                                  + 0x5c4)), iVar2 == 0 &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo40]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5c6)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo41]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5c8)),
                                                    iVar2 == 0)) &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo42]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5ca)),
                                                   iVar2 == 0)))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo43]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5cc)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oFacialInfo44]",
                                                                         &DAT_11d9e0b4,
                                                                         (int)*(short *)(param_1 +
                                                                                        0x5ce)),
                                                   iVar2 == 0)))) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oFacialInfo45]",
                                                                        &DAT_11d9e0b4,
                                                                        (int)*(short *)(param_1 +
                                                                                       0x5d0)),
                                                  iVar2 == 0)) &&
                                                  (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo46]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5d2)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oFacialInfo47]",
                                                                          &DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5d4)),
                                                    iVar2 == 0)) &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oTGPVIP]",&DAT_11d9e0b4,
                                                                          (int)*(short *)(param_1 +
                                                                                         0x5d6)),
                                                    iVar2 == 0 &&
                                                    ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oFluteTune]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x5d8)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a3b0(extraout_ECX_38,
                                                                                                                                                      
                                                  "[oDefenseReduceHPModifyRate]",7,0), iVar2 == 0)))
                                                  ))))))))) {
                                                    pfVar3 = (float *)(param_1 + 0x5dc);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,
                                                                           (double)*pfVar3);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      pfVar3 = pfVar3 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_39,
                                                                                                                                                          
                                                  "[oDefenseReduceStaModifyRate]",7,0), iVar2 == 0))
                                                  {
                                                    pfVar3 = (float *)(param_1 + 0x5f8);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11da064c,
                                                                           (double)*pfVar3);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      pfVar3 = pfVar3 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((((((iVar2 == 0) &&
                                                           (iVar2 = FUN_1024a290(piVar1,param_3,
                                                                                 param_4,
                                                  "[oWildHuntCamp]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x614)), iVar2 == 0)) &&
                                                  (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                        "[oTotalHRPoint]",
                                                                        &DAT_11d9e0b4,
                                                                        *(undefined4 *)
                                                                         (param_1 + 0x618)),
                                                  iVar2 == 0)) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oLikeHunterOfficer]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x61c)),
                                                   iVar2 == 0 &&
                                                   (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oLevelShowType]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x620)),
                                                   iVar2 == 0)))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oMonolopyRoundCount]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x624)),
                                                   iVar2 == 0 &&
                                                   ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oMonolopyActivity]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x628)),
                                                    iVar2 == 0 &&
                                                    (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                          "[oMonolopyCurGrid]",
                                                                          &DAT_11d9e0b4,
                                                                          *(undefined4 *)
                                                                           (param_1 + 0x62c)),
                                                    iVar2 == 0)))))) &&
                                                  ((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                         "[oSoulStoneLevel]",
                                                                         &DAT_11d9e0b4,
                                                                         *(undefined4 *)
                                                                          (param_1 + 0x630)),
                                                   iVar2 == 0 &&
                                                   (((iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oWeeklyRefreshTime]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x634)),
                                                     iVar2 == 0 &&
                                                     (iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                           "[oSoulStoneAtkLevel]",
                                                                           &DAT_11d9e0b4,
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x638)),
                                                     iVar2 == 0)) &&
                                                    (iVar2 = FUN_1024a3b0(extraout_ECX_40,
                                                                          "[oDynamiteAttack]",7,0),
                                                    iVar2 == 0)))))) {
                                                    puVar4 = (undefined4 *)(param_1 + 0x63c);
                                                    param_2 = (int *)0x0;
                                                    do {
                                                      iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                           *puVar4);
                                                      if (iVar2 != 0) {
                                                        return iVar2;
                                                      }
                                                      param_2 = (int *)((int)param_2 + 1);
                                                      puVar4 = puVar4 + 1;
                                                    } while (param_2 < 7);
                                                    iVar2 = FUN_1010c060(param_4);
                                                    if ((iVar2 == 0) &&
                                                       (iVar2 = FUN_1024a3b0(extraout_ECX_41,
                                                                             "[oDynamiteThrsh]",7,0)
                                                       , iVar2 == 0)) {
                                                      puVar4 = (undefined4 *)(param_1 + 0x658);
                                                      param_2 = (int *)0x0;
                                                      do {
                                                        iVar2 = FUN_1010c010(piVar1,&DAT_11d9f710,
                                                                             *puVar4);
                                                        if (iVar2 != 0) {
                                                          return iVar2;
                                                        }
                                                        param_2 = (int *)((int)param_2 + 1);
                                                        puVar4 = puVar4 + 1;
                                                      } while (param_2 < 7);
                                                      iVar2 = FUN_1010c060(param_4);
                                                      if (iVar2 == 0) {
                                                        iVar2 = FUN_1024a290(piVar1,param_3,param_4,
                                                                                                                                                          
                                                  "[oGuildBanChatEndTime]",&DAT_11d9e0b4,
                                                  *(undefined4 *)(param_1 + 0x674));
                                                  return iVar2;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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



/* ===== FUN_10259b80 @ 10259b80  size=1951 ===== */
// calls: _stricmp
// strings:
//   "/Scripts/AI/EventBT"
//   "Parent"
//   "BTFile"
//   "EntityType"
//   "monster"
//   "combatnpc"
//   "BTFolder"
//   "/Scripts/AI/BehaviorTree/"
//   "Event"
//   "FunBT"

/* WARNING: Removing unreachable block (ram,0x1025a287) */
/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""/Scripts/AI/EventBT""
     ""Parent""
     ""BTFile""
     ""EntityType""
     ""monster""
     ""combatnpc""
     ""BTFolder""
     ""/Scripts/AI/BehaviorTree/""
     ""Event""
     ""FunBT"" */

void __thiscall FUN_10259b80(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 auStack_1c8 [12];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  char *pcStack_19c;
  char *pcStack_194;
  char *local_144;
  int local_13c;
  int iStack_138;
  int *local_128;
  char *local_124;
  uint local_11c;
  undefined1 local_114 [20];
  undefined1 *local_100;
  undefined1 local_fc [20];
  undefined1 *local_e8;
  undefined1 local_e4 [20];
  undefined1 *local_d0;
  undefined1 local_cc [20];
  undefined1 *local_b8;
  undefined1 local_b4 [20];
  undefined1 *local_a0;
  undefined1 local_9c [16];
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 local_84 [16];
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 local_6c [16];
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 local_54 [16];
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    pcVar12 = *(char **)(DAT_123bb90c + 0x18);
    local_44 = local_54;
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    local_40 = local_44;
    FUN_100b62c0();
    pcStack_194 = (char *)0x10259be9;
    FUN_100f2140();
    FUN_10261bb0();
    if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    if ((local_40 != local_54) && (local_40 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    (**(code **)(**(int **)(DAT_123bb90c + 8) + 0xc))();
    if (local_128 != (int *)0x0) {
      if ((DAT_123c2b34 & 1) == 0) {
        DAT_123c2b34 = DAT_123c2b34 | 1;
        FUN_10256190();
        FUN_11a8911f();
      }
      uVar4 = (**(code **)(*local_128 + 100))();
      local_11c = 0;
      if (uVar4 != 0) {
        do {
          piVar5 = (int *)(**(code **)(*local_128 + 0x68))();
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
            if (((local_11c == 0) && (cVar3 = (**(code **)(*piVar5 + 0x10))(), cVar3 != '\0')) &&
               (cVar3 = (**(code **)(*piVar5 + 0x58))(), cVar3 != '\0')) {
              FUN_10259b80();
            }
            else {
              cVar3 = (**(code **)(*piVar5 + 0x58))();
              if ((cVar3 == '\0') || (cVar3 = (**(code **)(*piVar5 + 0x58))(), cVar3 == '\0')) {
                FUN_1025a5e0();
              }
              else {
                cVar3 = (**(code **)(*piVar5 + 0x58))();
                if (((cVar3 != '\0') &&
                    (piVar6 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(),
                    piVar6 != (int *)0x0)) && (iVar7 = (**(code **)(*piVar6 + 0x20))(), iVar7 != 0))
                {
                  piVar6 = (int *)(**(code **)(*piVar6 + 0x20))();
                  pcStack_194 = (char *)0x10259da5;
                  iVar7 = _stricmp((char *)0x0,"monster");
                  if (iVar7 == 0) {
                    iVar7 = (**(code **)(*piVar6 + 0xa8))();
                    bVar13 = iVar7 == 1;
                  }
                  else {
                    pcStack_194 = (char *)0x10259dde;
                    iVar7 = _stricmp((char *)0x0,"combatnpc");
                    if (iVar7 == 0) {
                      iVar7 = (**(code **)(*piVar6 + 0xa8))();
                      bVar13 = iVar7 == 0xb;
                    }
                    else {
                      pcStack_194 = (char *)0x10259e05;
                      iVar7 = _stricmp((char *)0x0,"pet");
                      if (iVar7 != 0) goto LAB_10259e1b;
                      iVar7 = (**(code **)(*piVar6 + 0xa8))();
                      bVar13 = iVar7 == 8;
                    }
                  }
                  if (!bVar13) {
                    (**(code **)(*piVar5 + 8))();
                    goto LAB_1025a2bd;
                  }
                }
LAB_10259e1b:
                local_14 = local_24;
                local_24[0] = 0;
                pcStack_194 = (char *)0x10259e3d;
                local_10 = local_14;
                cVar3 = (**(code **)(*piVar5 + 0x58))();
                if (cVar3 == '\0') {
                  pcStack_1b4 = (char *)&pcStack_1a8;
                  pcStack_1b0 = (char *)(param_1 + 0x140);
                  uStack_1b8 = 0x1025a04b;
                  FUN_10261bb0();
                  pcStack_1ac = (char *)0x1025a059;
                  puVar9 = (undefined1 *)FUN_102616b0();
                  if (puVar9 != local_24) {
                    pcStack_1b4 = *(char **)(puVar9 + 0x10);
                    uStack_1b8 = *(undefined4 *)(puVar9 + 0x14);
                    uStack_1bc = 0x1025a06e;
                    FUN_100d83d0();
                  }
                  puVar9 = local_b4;
                  pcStack_1b4 = local_a0;
                }
                else {
                  local_2c = local_3c;
                  pcVar12 = local_124;
                  do {
                    pcStack_194 = pcVar12;
                    pcVar12 = pcStack_194 + 1;
                  } while (*pcStack_194 != '\0');
                  pcStack_19c = (char *)0x10259e76;
                  local_28 = local_2c;
                  FUN_100b62c0();
                  local_74 = local_84;
                  pcVar12 = local_144;
                  do {
                    pcStack_19c = pcVar12;
                    pcVar12 = pcStack_19c + 1;
                  } while (*pcStack_19c != '\0');
                  pcStack_1a4 = (char *)0x10259ea6;
                  local_70 = local_74;
                  FUN_100b62c0();
                  local_8c = local_9c;
                  pcStack_1a4 = "";
                  pcStack_1a8 = "/Scripts/AI/BehaviorTree/";
                  pcStack_1ac = (char *)0x10259ec9;
                  local_88 = local_8c;
                  FUN_100b62c0();
                  pcStack_1b0 = *(char **)(DAT_123bb90c + 0x18);
                  local_5c = local_6c;
                  pcVar12 = pcStack_1b0;
                  do {
                    pcStack_1ac = pcVar12;
                    pcVar12 = pcStack_1ac + 1;
                  } while (*pcStack_1ac != '\0');
                  pcStack_1b4 = (char *)0x10259ef6;
                  local_58 = local_5c;
                  FUN_100b62c0();
                  uVar8 = FUN_100f21e0(local_b4,local_6c,local_9c,local_84,&DAT_11d9dc6c,local_3c);
                  uVar8 = FUN_100f21e0(local_e4,uVar8);
                  uVar8 = FUN_100f2140(local_fc,uVar8);
                  FUN_100f21e0(auStack_1c8,uVar8);
                  puVar9 = (undefined1 *)FUN_102616b0();
                  if (puVar9 != local_24) {
                    pcStack_1b4 = *(char **)(puVar9 + 0x10);
                    uStack_1b8 = *(undefined4 *)(puVar9 + 0x14);
                    uStack_1bc = 0x10259f6c;
                    FUN_100d83d0();
                  }
                  if ((local_100 != local_114) && (local_100 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_100;
                    uStack_1b8 = 0x10259f86;
                    FUN_10c3d5d0();
                  }
                  if ((local_e8 != local_fc) && (local_e8 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_e8;
                    uStack_1b8 = 0x10259fa3;
                    FUN_10c3d5d0();
                  }
                  if ((local_d0 != local_e4) && (local_d0 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_d0;
                    uStack_1b8 = 0x10259fc0;
                    FUN_10c3d5d0();
                  }
                  if ((local_a0 != local_b4) && (local_a0 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_a0;
                    uStack_1b8 = 0x10259fdd;
                    FUN_10c3d5d0();
                  }
                  if ((local_58 != local_6c) && (local_58 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_58;
                    uStack_1b8 = 0x10259ff4;
                    FUN_10c3d5d0();
                  }
                  if ((local_88 != local_9c) && (local_88 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_88;
                    uStack_1b8 = 0x1025a011;
                    FUN_10c3d5d0();
                  }
                  if ((local_70 != local_84) && (local_70 != (undefined1 *)0x0)) {
                    pcStack_1b4 = local_70;
                    uStack_1b8 = 0x1025a028;
                    FUN_10c3d5d0();
                  }
                  puVar9 = local_3c;
                  pcStack_1b4 = local_28;
                }
                if ((pcStack_1b4 != puVar9) && (pcStack_1b4 != (undefined1 *)0x0)) {
                  uStack_1b8 = 0x1025a088;
                  FUN_10c3d5d0();
                }
                pcStack_1b4 = "Event";
                uStack_1b8 = 0x1025a0a7;
                cVar3 = (**(code **)(*piVar5 + 0x10))();
                if ((cVar3 == '\0') && (cVar3 = (**(code **)(*piVar5 + 0x10))(), cVar3 == '\0')) {
LAB_1025a121:
                  FUN_1025c060();
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580();
                }
                puVar10 = (undefined8 *)FUN_104a43f0();
                uVar1 = *puVar10;
                uVar8 = *(undefined4 *)(puVar10 + 1);
                iStack_138 = (int)((ulonglong)uVar1 >> 0x20);
                if ((iStack_138 == 0) || (local_13c = (int)uVar1, local_13c == 0))
                goto LAB_1025a121;
                cVar3 = (**(code **)(*piVar5 + 0x10))();
                if (cVar3 == '\0') {
                  cVar3 = (**(code **)(*piVar5 + 0x10))();
                  if (cVar3 != '\0') {
                    puVar10 = (undefined8 *)FUN_1025c110();
                    *puVar10 = uVar1;
                    *(undefined4 *)(puVar10 + 1) = uVar8;
                    FUN_10261610();
                    FUN_1025c270();
                    FUN_100e0410();
                    goto LAB_1025a277;
                  }
                }
                else {
                  puVar11 = (undefined *)FUN_1025e850();
                  if (puVar11 != &DAT_123c2b38) {
                    iVar7 = FUN_10256f10();
                    if ((-1 < iVar7) &&
                       (iVar7 < (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c)) / 0xc)) {
                      iVar2 = *(int *)(param_1 + 0x10c);
                      *(undefined8 *)(iVar2 + iVar7 * 0xc) = uVar1;
                      *(undefined4 *)(iVar2 + 8 + iVar7 * 0xc) = uVar8;
                    }
LAB_1025a277:
                    FUN_104b5420();
                  }
                }
                if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0();
                }
              }
            }
            (**(code **)(*piVar5 + 8))();
          }
LAB_1025a2bd:
          local_11c = local_11c + 1;
        } while (local_11c < uVar4);
      }
      if (local_128 != (int *)0x0) {
        (**(code **)(*local_128 + 8))();
      }
    }
    if ((local_b8 != local_cc) && (local_b8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
  }
  FUN_11a89daa();
  return;
}



