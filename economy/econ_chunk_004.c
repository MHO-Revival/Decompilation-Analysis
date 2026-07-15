/* ===== FUN_107f7e50 @ 107f7e50  size=4629 ===== */
// calls: CSkillLevelMap::Insert, CMaterialTagDescInfo::GetManager, CInfoManager::FindByName, memcpy
// strings:
//   "itemUpgradeDatas"
//   "TASK_QUEST_VO_NAME"
//   "subTaskArr"
//   "nItemLevel"
//   "nTargetID1"
//   "strTarget1"
//   "rareType"
//   "nCurCount"
//   "nMaxCount"
//   "CMaterialTagDescInfo"
//   "mh_sharemem_addrinfo"
//   u"<Error When GetUnicodeString>"
//   "isPointMaterial"
//   "nQuestID"
//   "nQuestStatus"
//   "nQuestLevel"
//   "strQuestName"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""itemUpgradeDatas""
     ""TASK_QUEST_VO_NAME""
     ""subTaskArr""
     ""nItemLevel""
     ""nTargetID1""
     ""strTarget1""
     ""rareType""
     ""nCurCount""
     ""nMaxCount""
     ""CMaterialTagDescInfo"" */

void FUN_107f7e50(int *param_1)

{
  int ***pppiVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int ****ppppiVar11;
  undefined4 uVar12;
  int **ppiVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  void *pvVar16;
  int iVar17;
  int **ppiVar18;
  int ****ppppiVar19;
  int ****ppppiVar20;
  int **ppiVar21;
  size_t _Size;
  int iVar22;
  int *piStack_1b8;
  int **ppiStack_1b4;
  undefined4 uStack_1a8;
  int *local_1a4;
  undefined4 uStack_1a0;
  int *local_19c;
  int *piStack_198;
  uint uStack_194;
  undefined4 uStack_190;
  int ***pppiStack_18c;
  int iStack_184;
  undefined4 uStack_180;
  int **appiStack_17c [2];
  int aiStack_174 [2];
  int *piStack_16c;
  int **ppiStack_168;
  int **local_164;
  int ***pppiStack_154;
  int ****ppppiStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int iStack_140;
  undefined1 uStack_13c;
  int iStack_138;
  int iStack_134;
  int *piStack_130;
  int *piStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_104;
  int *piStack_100;
  uint uStack_fc;
  int iStack_f8;
  int **ppiStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  uint uStack_dc;
  int **ppiStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int **ppiStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int *piStack_b4;
  int ****ppppiStack_ac;
  int ***pppiStack_a8;
  uint uStack_a4;
  int ***pppiStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [20];
  int **ppiStack_78;
  int **ppiStack_74;
  undefined8 uStack_70;
  int ***pppiStack_68;
  int ***pppiStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int ****ppppiStack_54;
  int ****ppppiStack_50;
  undefined2 auStack_48 [16];
  undefined2 *puStack_28;
  undefined2 *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_1a8;
  piStack_1b8 = &local_98;
  local_164 = (int **)CONCAT31(local_164._1_3_,((byte)DAT_123bcebc & 0x8f) == 10);
  local_98 = 0;
  ppiStack_1b4 = local_164;
  local_94 = 0;
  local_19c = (int *)0x0;
  iVar22 = DAT_123bcec0;
  (**(code **)(*DAT_123bceb8 + 0x10))(DAT_123bcec0,"itemUpgradeDatas");
  uVar4 = uStack_a4 & 0x8f;
  if (((uVar4 == 8) || (uVar4 == 9)) || (uVar4 == 10)) {
    (*(code *)(*pppiStack_a8)[0x11])(pppiStack_a0,0,0xffffffff);
    (**(code **)(*param_1 + 0x370))(7);
    piVar5 = (int *)FUN_1159a350();
    piStack_b4 = piVar5;
    if ((piVar5 != (int *)0x0) && (local_19c = (int *)param_1[0xb47], local_19c != (int *)0x0)) {
      piStack_118 = (int *)0x0;
      uStack_114 = 0;
      aiStack_174[0] = CONCAT31(aiStack_174[0]._1_3_,((byte)DAT_123bcebc & 0x8f) == 10);
      piStack_e0 = (int *)0x0;
      uStack_dc = 0;
      appiStack_17c[0] = (int **)0x0;
      cVar3 = (**(code **)(*DAT_123bceb8 + 0x10))
                        (DAT_123bcec0,"TASK_QUEST_VO_NAME",&piStack_e0,aiStack_174[0]);
      if ((cVar3 != '\0') && (((byte)uStack_dc & 0x8f) == 6)) {
        if ((uStack_dc >> 6 & 1) == 0) {
          appiStack_17c[0] = ppiStack_d8;
        }
        else {
          appiStack_17c[0] = (int **)*ppiStack_d8;
        }
      }
      aiStack_174[0] = 0;
      if (0 < *piVar5) {
        do {
          uStack_1a0 = 4;
          uStack_70 = *(undefined8 *)(piVar5 + aiStack_174[0] * 3 + 1);
          iVar17 = piVar5[aiStack_174[0] * 3 + 3];
          FUN_11a98de0(&piStack_118,appiStack_17c[0],0,0);
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_1a8 = 0;
          local_1a4 = (int *)0x0;
          FUN_11a98a70(&uStack_110);
          uStack_c4 = CONCAT31(uStack_c4._1_3_,((byte)iStack_128 & 0x8f) == 10);
          (**(code **)(*piStack_12c + 0x14))(uStack_124,"subTaskArr",&uStack_114,uStack_c4);
          FUN_104d1550("nItemLevel",iVar17);
          iVar6 = FUN_10254130(uStack_90);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 0x34) != 2)) {
            if ((uStack_194 >> 6 & 1) != 0) {
              (**(code **)(*piStack_198 + 8))(&piStack_198,uStack_190);
              piStack_198 = (int *)0x0;
            }
            uStack_194 = 0;
            if ((uStack_fc >> 6 & 1) != 0) {
              (**(code **)(*piStack_100 + 8))(&piStack_100,iStack_f8);
              piStack_100 = (int *)0x0;
            }
            uStack_fc = 0;
            break;
          }
          iVar7 = FUN_107ec3e0(*(undefined4 *)(iVar6 + 0x298));
          if (iVar7 == 0) {
            piStack_120 = (int *)FUN_117b6d70(*(undefined4 *)(iVar6 + 0x11c));
            if ((piStack_120 != (int *)0x0) &&
               (puVar14 = (undefined4 *)piStack_120[0x35],
               puVar14 != (undefined4 *)piStack_120[0x36])) {
              do {
                iVar17 = FUN_113fa680(*puVar14,0,1);
                iVar6 = FUN_113fa680(*puVar14,1,1);
                pppiStack_154 = (int ***)FUN_10254130(*puVar14);
                if (pppiStack_154 != (int ***)0x0) {
                  FUN_11a98de0(&local_19c,uStack_180,0,0);
                  FUN_104d1550("nTargetID1",*puVar14);
                  pppiStack_64 = &ppiStack_74;
                  ppiStack_74 = (int **)((uint)ppiStack_74 & 0xffffff00);
                  pppiStack_60 = pppiStack_64;
                  FUN_100e5aa0(pppiStack_64);
                  FUN_104d1670("strTarget1",pppiStack_64);
                  if ((pppiStack_64 != &ppiStack_78) && (pppiStack_64 != (int ***)0x0)) {
                    FUN_10c3d5d0(pppiStack_64);
                  }
                  FUN_104d1550("rareType",ppiStack_168[0x13]);
                  FUN_104d1550("nCurCount",iVar17 + iVar6);
                  FUN_104d1550("nMaxCount",puVar14[1]);
                  if ((piStack_1b8 != (int *)&DAT_00000004) || (iVar17 + iVar6 < (int)puVar14[1])) {
                    piStack_1b8 = (int *)0x0;
                  }
                  (**(code **)(*piStack_118 + 0x3c))(uStack_110,&stack0xfffffe50);
                }
                puVar14 = puVar14 + 2;
              } while (puVar14 != (undefined4 *)piStack_120[0x36]);
            }
          }
          else {
            piStack_120 = (int *)FUN_1183b990();
            if (piStack_120 != (int *)0x0) {
              ppppiStack_148 = (int ****)&ppppiStack_150;
              iStack_140 = 0;
              iVar6 = 0;
              piVar5 = piStack_120 + 10;
              ppppiStack_150 = (int ****)0x0;
              ppppiStack_14c = (int ****)0x0;
              uStack_13c = uStack_1a8._3_1_;
              ppppiStack_144 = ppppiStack_148;
              do {
                if (*piVar5 == 0) break;
                FUN_11a98de0(&local_19c,uStack_180,0,0);
                iVar7 = FUN_10254130(*piVar5);
                if (iVar7 != 0) {
                  FUN_104d1550("nTargetID1",*piVar5);
                  pppiStack_64 = (int ***)((uint)pppiStack_64 & 0xffffff00);
                  ppppiStack_54 = &pppiStack_64;
                  ppppiStack_50 = ppppiStack_54;
                  FUN_100e5aa0(ppppiStack_54);
                  FUN_104d1670("strTarget1",ppppiStack_54);
                  if ((ppppiStack_54 != &pppiStack_68) && (ppppiStack_54 != (int ****)0x0)) {
                    FUN_10c3d5d0(ppppiStack_54);
                  }
                  FUN_104d1550("rareType",*(undefined4 *)(iVar7 + 0x4c));
                  iVar8 = FUN_113fa680(*piVar5,0,1);
                  iVar9 = FUN_113fa680(*piVar5,1,1);
                  iVar7 = piVar5[6];
                  FUN_104d1550("nCurCount",iVar8 + iVar9);
                  FUN_104d1550("nMaxCount",iVar7);
                  if ((iVar22 != 4) || (iVar22 = 4, iVar8 + iVar9 < iVar7)) {
                    iVar22 = 0;
                  }
                  (**(code **)(*piStack_120 + 0x3c))(piStack_118,&piStack_1b8);
                  piVar10 = (int *)FUN_107e00f0(auStack_8c,piVar5);
                  if ((int ***)*piVar10 == appiStack_17c) {
                    piVar10 = (int *)FUN_104ef0a0(piVar5);
                    *piVar10 = piVar5[6];
                  }
                  else {
                    piVar10 = (int *)FUN_104ef0a0(piVar5);
                    iVar7 = *piVar10;
                    piVar10 = (int *)FUN_104ef0a0(piVar5);
                    *piVar10 = iVar7 + 1;
                  }
                }
                piVar5 = piVar5 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar6 < 6);
              pppiStack_154 = (int ***)0x0;
              do {
                piVar5 = piStack_120;
                pppiVar1 = pppiStack_154;
                if (piStack_120[(int)pppiStack_154 + 0x16] == 0) break;
                uVar4 = 0;
                FUN_11a98de0(&local_19c,uStack_180,0,0);
                iStack_f8 = piVar5[(int)(pppiVar1 + 7)];
                iVar6 = piVar5[(int)pppiVar1 + 0x16];
                ppiStack_d8 = (int **)0x0;
                uStack_d4 = 0;
                uStack_d0 = 0;
                iStack_184 = iVar6;
                FUN_113faa10(iVar6,&ppiStack_d8,0x1e);
                ppppiStack_144 = (int ****)0x0;
                ppppiStack_148 = &pppiStack_154;
                iStack_140 = CONCAT31(iStack_140._1_3_,(char)((uint)iVar17 >> 0x18));
                pppiStack_154 = (int ***)0x0;
                ppppiStack_150 = (int ****)0x0;
                ppppiStack_14c = &pppiStack_154;
                piVar5 = piStack_e4;
                if (piStack_e4 != piStack_e0) {
                  do {
                    iVar7 = FUN_11669730();
                    ppppiVar19 = &pppiStack_154;
                    ppppiVar11 = ppppiStack_150;
                    ppppiVar20 = ppppiVar19;
                    if (ppppiStack_150 != (int ****)0x0) {
                      do {
                        if ((int)ppppiVar11[4] < iVar7) {
                          ppppiVar20 = (int ****)ppppiVar11[3];
                        }
                        else {
                          ppppiVar20 = (int ****)ppppiVar11[2];
                          ppppiVar19 = ppppiVar11;
                        }
                        ppppiVar11 = ppppiVar20;
                      } while (ppppiVar20 != (int ****)0x0);
                      ppppiVar20 = ppppiVar19;
                      if ((ppppiVar19 != &pppiStack_154) &&
                         (ppppiVar20 = &pppiStack_154, (int)ppppiVar19[4] <= iVar7)) {
                        ppppiVar20 = ppppiVar19;
                      }
                    }
                    ppppiVar11 = &pppiStack_154;
                    ppppiVar19 = ppppiStack_150;
                    if (ppppiVar20 == &pppiStack_154) {
                      while (ppppiVar19 != (int ****)0x0) {
                        if ((int)ppppiVar19[4] < iVar7) {
                          ppppiVar19 = (int ****)ppppiVar19[3];
                        }
                        else {
                          ppppiVar11 = ppppiVar19;
                          ppppiVar19 = (int ****)ppppiVar19[2];
                        }
                      }
                      if ((ppppiVar11 == &pppiStack_154) ||
                         (uVar4 = uVar4 | 1, iVar7 < (int)ppppiVar11[4])) {
                        bVar2 = true;
                      }
                      else {
                        bVar2 = false;
                      }
                      if ((uVar4 & 1) != 0) {
                        uVar4 = uVar4 & 0xfffffffe;
                      }
                      if (bVar2) {
                        local_94 = 0;
                        local_98 = iVar7;
                        CSkillLevelMap__Insert(&ppppiStack_ac,ppppiVar11,&local_98);
                        ppppiVar11 = ppppiStack_ac;
                      }
                      ppppiVar11[5] = (int ***)0x1;
                    }
                    piVar5 = piVar5 + 3;
                  } while (piVar5 != piStack_e0);
                }
                piStack_198 = (int *)0x0;
                ppppiVar19 = ppppiStack_14c;
                if (ppppiStack_14c != &pppiStack_154) {
                  do {
                    pppiVar1 = ppppiVar19[4];
                    pppiStack_18c = pppiVar1;
                    uVar12 = FUN_113fa680(pppiVar1,0,1);
                    FUN_113fa680(ppppiVar19[4],1,1);
                    iVar7 = FUN_10540d00(pppiVar1);
                    if (iVar7 != 0) {
                      ppiVar21 = &piStack_16c;
                      ppiVar13 = ppiStack_168;
                      ppiVar18 = ppiVar21;
                      if (ppiStack_168 != (int **)0x0) {
                        do {
                          if ((int)ppiVar13[4] < (int)pppiStack_18c) {
                            ppiVar18 = (int **)ppiVar13[3];
                          }
                          else {
                            ppiVar18 = (int **)ppiVar13[2];
                            ppiVar21 = ppiVar13;
                          }
                          ppiVar13 = ppiVar18;
                        } while (ppiVar18 != (int **)0x0);
                        ppiVar18 = ppiVar21;
                        if ((ppiVar21 != &piStack_16c) &&
                           (ppiVar18 = &piStack_16c, (int)ppiVar21[4] <= (int)pppiStack_18c)) {
                          ppiVar18 = ppiVar21;
                        }
                      }
                      ppiVar13 = &piStack_16c;
                      ppiVar21 = ppiStack_168;
                      if (ppiVar18 == &piStack_16c) {
                        cVar3 = FUN_116c0720(iVar6,uVar12);
                        if (cVar3 == '\0') {
                          iVar7 = FUN_116c04a0(uStack_190);
                        }
                        else {
                          iVar7 = FUN_116c0400();
                        }
                        piStack_198 = (int *)((int)piStack_198 + (int)piVar5 * iVar7);
                      }
                      else {
                        while (ppiVar21 != (int **)0x0) {
                          if ((int)ppiVar21[4] < (int)pppiStack_18c) {
                            ppiVar21 = (int **)ppiVar21[3];
                          }
                          else {
                            ppiVar13 = ppiVar21;
                            ppiVar21 = (int **)ppiVar21[2];
                          }
                        }
                        if ((ppiVar13 == &piStack_16c) ||
                           (uVar4 = uVar4 | 2, (int)pppiStack_18c < (int)ppiVar13[4])) {
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                        if ((uVar4 & 2) != 0) {
                          uVar4 = uVar4 & 0xfffffffd;
                        }
                        if (bVar2) {
                          pppiStack_a0 = pppiStack_18c;
                          uStack_9c = 0;
                          CSkillLevelMap__Insert(&ppiStack_d8,ppiVar13,&pppiStack_a0);
                          ppiVar13 = ppiStack_d8;
                        }
                        if ((int)ppiVar13[5] < (int)piVar5) {
                          ppiVar13 = &piStack_16c;
                          ppiVar21 = ppiStack_168;
                          while (ppiVar21 != (int **)0x0) {
                            if ((int)ppiVar21[4] < (int)pppiStack_18c) {
                              ppiVar21 = (int **)ppiVar21[3];
                            }
                            else {
                              ppiVar13 = ppiVar21;
                              ppiVar21 = (int **)ppiVar21[2];
                            }
                          }
                          if ((ppiVar13 == &piStack_16c) ||
                             (uVar4 = uVar4 | 4, (int)pppiStack_18c < (int)ppiVar13[4])) {
                            bVar2 = true;
                          }
                          else {
                            bVar2 = false;
                          }
                          if ((uVar4 & 4) != 0) {
                            uVar4 = uVar4 & 0xfffffffb;
                          }
                          if (bVar2) {
                            pppiStack_a8 = pppiStack_18c;
                            uStack_a4 = 0;
                            CSkillLevelMap__Insert(&ppiStack_cc,ppiVar13,&pppiStack_a8);
                            ppiVar13 = ppiStack_cc;
                          }
                          iVar7 = FUN_116c04a0(uStack_190);
                          piStack_198 = (int *)((int)piStack_198 +
                                               iVar7 * ((int)piVar5 - (int)ppiVar13[5]));
                        }
                      }
                    }
                    ppppiVar11 = (int ****)ppppiVar19[3];
                    if (ppppiVar11 == (int ****)0x0) {
                      ppppiVar11 = (int ****)ppppiVar19[1];
                      if (ppppiVar19 == (int ****)ppppiVar11[3]) {
                        do {
                          ppppiVar19 = ppppiVar11;
                          ppppiVar11 = (int ****)ppppiVar19[1];
                        } while (ppppiVar19 == (int ****)ppppiVar11[3]);
                      }
                      if ((int ****)ppppiVar19[3] != ppppiVar11) {
                        ppppiVar19 = ppppiVar11;
                      }
                    }
                    else {
                      for (ppppiVar20 = (int ****)ppppiVar11[2]; ppppiVar19 = ppppiVar11,
                          ppppiVar20 != (int ****)0x0; ppppiVar20 = (int ****)ppppiVar20[2]) {
                        ppppiVar11 = ppppiVar20;
                      }
                    }
                  } while (ppppiVar19 != &pppiStack_154);
                }
                puVar14 = (undefined4 *)CMaterialTagDescInfo__GetManager();
                puVar15 = (undefined *)*puVar14;
                if ((puVar15 == (undefined *)0x0) &&
                   (puVar15 = (undefined *)
                              CInfoManager__FindByName(&ppiStack_1b4,"CMaterialTagDescInfo",0),
                   puVar15 == (undefined *)0x0)) {
                  if ((DAT_123bf160 & 1) == 0) {
                    DAT_123bf188 = 0;
                    DAT_123bf198 = 0;
                    uRam123bf19c = 0;
                    _DAT_123bf1a0 = 0;
                    DAT_123bf1a4 = 0;
                    DAT_123bf160 = DAT_123bf160 | 1;
                    _DAT_123bf184 = &PTR_FUN_11dcb140;
                    DAT_123bf1a8 = _DAT_11de9ae0;
                    DAT_123bf1ac = _UNK_11de9ae4;
                    uRam123bf1b0 = _UNK_11de9ae8;
                    DAT_123bf1b4 = _UNK_11de9aec;
                    DAT_123bf1b8 = 1;
                    DAT_123bf18c = puVar15;
                    _DAT_123bf190 = puVar15;
                    _DAT_123bf194 = puVar15;
                    FUN_11a8911f(&LAB_11c719a0);
                  }
                  puVar15 = &DAT_123bf184;
                }
                ppiStack_1b4 = (int **)&PTR_FUN_11da54a8;
                if ((aiStack_174[0] == -1) ||
                   ((((aiStack_174[0] == 0 && (*(int *)(puVar15 + 0x30) != 0)) ||
                     (iVar6 = *(int *)(puVar15 + 0x28), iVar6 == 0)) ||
                    ((iVar7 = aiStack_174[0] - *(int *)(puVar15 + 0x30), iVar7 < 0 ||
                     (*(int *)(puVar15 + 0x24) <= iVar7)))))) {
LAB_107f87d1:
                  iVar6 = 0;
                }
                else {
                  iVar8 = *(int *)(*(int *)(puVar15 + 0x20) + (iVar7 / iVar6) * 4);
                  if (iVar8 == 0) goto LAB_107f87d1;
                  iVar6 = *(int *)(iVar8 + (iVar7 % iVar6) * 4);
                }
                if (iVar6 != 0) {
                  if (piStack_1b8 != (int *)0x0) {
                    iStack_5c = aiStack_174[0];
                    pppiStack_64 = (int ***)0x0;
                    pppiStack_60 = (int ***)0x3;
                    (**(code **)(*local_19c + 0x14))
                              (uStack_194,"nTargetID1",&pppiStack_64,
                               ((byte)piStack_198 & 0x8f) == 10);
                    if (((uint)pppiStack_60 >> 6 & 1) != 0) {
                      (*(code *)(*pppiStack_64)[2])(&pppiStack_64,iStack_5c);
                    }
                  }
                  puStack_28 = auStack_48;
                  auStack_48[0] = 0;
                  ppiStack_1b4 = (int **)&DAT_11d9d32b;
                  if (*(int ***)(iVar6 + 0x14) != (int **)0x0) {
                    ppiStack_1b4 = *(int ***)(iVar6 + 0x14);
                  }
                  ppppiStack_54 = &pppiStack_64;
                  ppiVar21 = ppiStack_1b4;
                  do {
                    ppiVar13 = ppiVar21;
                    ppiVar21 = (int **)((int)ppiVar13 + 1);
                  } while (*(char *)ppiVar13 != '\0');
                  _Size = (int)ppiVar13 - (int)ppiStack_1b4;
                  uVar4 = _Size + 1;
                  ppppiStack_50 = ppppiStack_54;
                  puStack_24 = puStack_28;
                  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_100b73e0();
                  }
                  if (0x10 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580(uVar4);
                  }
                  if (ppiVar13 != ppiStack_1b4) {
                    pvVar16 = memcpy(ppppiStack_54,ppiStack_1b4,_Size);
                    ppppiStack_54 = (int ****)(_Size + (int)pvVar16);
                  }
                  *(undefined1 *)ppppiStack_54 = 0;
                  cVar3 = FUN_100ecfd0(ppppiStack_50,(int)ppppiStack_54 - (int)ppppiStack_50,
                                       auStack_48,4);
                  if (cVar3 == '\0') {
                    FUN_100e61d0(L"<Error When GetUnicodeString>",L"");
                  }
                  if ((ppppiStack_50 != &pppiStack_64) && (ppppiStack_50 != (int ****)0x0)) {
                    FUN_10c3d5d0(ppppiStack_50);
                  }
                  piVar5 = piStack_1b8;
                  if ((piStack_1b8 != (int *)0x0) && (puStack_24 != (undefined2 *)0x0)) {
                    piStack_16c = (int *)0x0;
                    ppiStack_168 = (int **)0x0;
                    FUN_11a98e20(&piStack_16c,puStack_24);
                    (**(code **)(*local_1a4 + 0x14))
                              (local_19c,"strTarget1",aiStack_174,((byte)uStack_1a0 & 0x8f) == 10);
                    if (((uint)ppiStack_168 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_16c + 8))(&piStack_16c,local_164);
                    }
                  }
                  if ((puStack_24 != auStack_48) && (puStack_24 != (undefined2 *)0x0)) {
                    FUN_10c3d5d0(puStack_24);
                  }
                  ppiVar21 = appiStack_17c[0];
                  if (piVar5 != (int *)0x0) {
                    piStack_16c = (int *)0x0;
                    ppiStack_168 = (int **)0x2;
                    local_164 = (int **)CONCAT31(local_164._1_3_,1);
                    (**(code **)(*local_19c + 0x14))
                              (uStack_194,"isPointMaterial",&piStack_16c,
                               ((byte)piStack_198 & 0x8f) == 10);
                    if (((uint)ppiStack_168 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_16c + 8))(&piStack_16c,local_164);
                    }
                    ppiVar21 = appiStack_17c[0];
                    if (piVar5 != (int *)0x0) {
                      piStack_16c = (int *)0x0;
                      ppiStack_168 = (int **)0x3;
                      local_164 = appiStack_17c[0];
                      (**(code **)(*local_19c + 0x14))
                                (uStack_194,"nCurCount",&piStack_16c,
                                 ((byte)piStack_198 & 0x8f) == 10);
                      if (((uint)ppiStack_168 >> 6 & 1) != 0) {
                        (**(code **)(*piStack_16c + 8))(&piStack_16c,local_164);
                      }
                    }
                  }
                  ppiVar13 = ppiStack_e8;
                  if (piVar5 != (int *)0x0) {
                    piStack_16c = (int *)0x0;
                    ppiStack_168 = (int **)0x3;
                    local_164 = ppiStack_e8;
                    (**(code **)(*local_19c + 0x14))
                              (uStack_194,"nMaxCount",&piStack_16c,((byte)piStack_198 & 0x8f) == 10)
                    ;
                    if (((uint)ppiStack_168 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_16c + 8))(&piStack_16c,local_164);
                    }
                  }
                  if ((local_1a4 != (int *)&DAT_00000004) || ((int)ppiVar21 < (int)ppiVar13)) {
                    local_1a4 = (int *)0x0;
                  }
                  (**(code **)(*piStack_104 + 0x3c))(uStack_fc,&local_19c);
                }
                iVar6 = iStack_134;
                if (iStack_128 != 0) {
                  while (iVar6 != 0) {
                    FUN_10463900(*(undefined4 *)(iVar6 + 0xc));
                    iVar7 = *(int *)(iVar6 + 8);
                    FUN_10c3d5d0(iVar6);
                    iVar6 = iVar7;
                  }
                  piStack_130 = &iStack_138;
                  iStack_134 = 0;
                  iStack_128 = 0;
                  piStack_12c = piStack_130;
                }
                if (iStack_c8 != 0) {
                  FUN_10c3d5d0(iStack_c8);
                }
                pppiStack_154 = (int ***)((int)pppiStack_154 + 1);
              } while ((int)pppiStack_154 < 6);
              ppppiVar19 = ppppiStack_14c;
              if (iStack_140 != 0) {
                while (ppppiVar19 != (int ****)0x0) {
                  FUN_10463900(ppppiVar19[3]);
                  ppppiVar11 = (int ****)ppppiVar19[2];
                  FUN_10c3d5d0(ppppiVar19);
                  ppppiVar19 = ppppiVar11;
                }
              }
            }
          }
          if (piStack_1b8 != (int *)0x0) {
            local_164 = ppiStack_74;
            piStack_16c = (int *)0x0;
            ppiStack_168 = (int **)0x3;
            (**(code **)(*piStack_11c + 0x14))
                      (uStack_114,"nQuestID",&piStack_16c,((byte)piStack_118 & 0x8f) == 10);
            if (((uint)ppiStack_168 >> 6 & 1) != 0) {
              (**(code **)(*piStack_16c + 8))(&piStack_16c,local_164);
            }
          }
          FUN_104d1550("nQuestStatus",local_1a4);
          uVar12 = (undefined4)uStack_70;
          FUN_104d1550("nQuestLevel",(undefined4)uStack_70);
          iVar17 = FUN_1052bdd0(uVar12);
          if (iVar17 != 0) {
            ppppiStack_54 = &pppiStack_64;
            pppiStack_64 = (int ***)((uint)pppiStack_64 & 0xffffff00);
            ppppiStack_50 = ppppiStack_54;
            FUN_100e5aa0(ppppiStack_54);
            FUN_104d1670("strQuestName",ppppiStack_54);
            if ((ppppiStack_50 != &pppiStack_64) && (ppppiStack_50 != (int ****)0x0)) {
              FUN_10c3d5d0(ppppiStack_50);
            }
          }
          (*(code *)(*ppppiStack_ac)[0xf])(uStack_a4,&piStack_11c);
          if ((uStack_194 >> 6 & 1) != 0) {
            (**(code **)(*piStack_198 + 8))(&piStack_198,uStack_190);
            piStack_198 = (int *)0x0;
          }
          uStack_194 = 0;
          if ((uStack_fc >> 6 & 1) != 0) {
            (**(code **)(*piStack_100 + 8))(&piStack_100,iStack_f8);
          }
          aiStack_174[0] = aiStack_174[0] + 1;
          piVar5 = piStack_b4;
        } while (aiStack_174[0] < *piStack_b4);
      }
      if ((uStack_dc >> 6 & 1) != 0) {
        (**(code **)(*piStack_e0 + 8))(&piStack_e0,ppiStack_d8);
        piStack_e0 = (int *)0x0;
      }
      uStack_dc = 0;
      if ((uStack_114 >> 6 & 1) != 0) {
        (**(code **)(*piStack_118 + 8))(&piStack_118,uStack_110);
      }
    }
  }
  if ((uStack_a4 >> 6 & 1) != 0) {
    (*(code *)(*pppiStack_a8)[2])(&pppiStack_a8,pppiStack_a0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10812910 @ 10812910  size=1085 ===== */
// strings:
//   "ReqTrade"
//   "ConfirmTrade"
//   "CancelTrade"
//   "LockTrade"
//   "MoveItemToTrade"
//   "UpdataMoneyToTrade"
//   "RemoveItemFromTrade"
//   "DragItemInTrade"
//   "TradeRespondOkHandler"
//   "TradeRespondCancelHandler"
//   "C2AS_GetDealLimitLevel"
//   "C2AS_IsUnderDealLimit"

/* [RE-AUTO c0]
   strings:
     ""ReqTrade""
     ""ConfirmTrade""
     ""CancelTrade""
     ""LockTrade""
     ""MoveItemToTrade""
     ""UpdataMoneyToTrade""
     ""RemoveItemFromTrade""
     ""DragItemInTrade""
     ""TradeRespondOkHandler""
     ""TradeRespondCancelHandler"" */

void __fastcall FUN_10812910(code ****param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  code *pcStack_10c;
  char *pcStack_108;
  code **ppcStack_104;
  undefined4 ***pppuStack_100;
  code *pcStack_fc;
  code **ppcStack_f8;
  code ***pppcStack_f4;
  undefined4 ***pppuStack_f0;
  code ***pppcStack_ec;
  code **ppcStack_e8;
  char *pcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code *pcStack_d4;
  char *pcStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  code ***pppcStack_c4;
  code *pcStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  undefined4 ***pppuStack_b4;
  code ***pppcStack_b0;
  code *pcStack_ac;
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
  undefined1 *puStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  undefined4 ***pppuStack_50;
  code ***pppcStack_4c;
  undefined1 *puStack_48;
  char *pcStack_44;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  code ***pppcStack_38;
  code *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined4 ***local_24 [4];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)local_24;
  local_10 = (undefined1 *)local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "ReqTrade";
  pcStack_34 = (code *)0x10812944;
  FUN_100b62c0();
  pcStack_34 = FUN_10812d60;
  pppuStack_3c = (undefined4 ***)&pcStack_2c;
  pppuStack_40 = (undefined4 ***)0x1081295f;
  pppcStack_38 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppuStack_40 = local_24[0];
    pcStack_44 = (char *)0x10812975;
    FUN_10c3d5d0();
  }
  local_24[0] = &pppcStack_38;
  pppuStack_40 = (undefined4 ***)0x11dcb9e0;
  pcStack_44 = "ConfirmTrade";
  puStack_48 = (undefined1 *)0x10812995;
  FUN_100b62c0();
  puStack_48 = &LAB_10812ef0;
  pppuStack_50 = &pppuStack_40;
  pppcStack_54 = (code ***)0x108129b0;
  pppcStack_4c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x108129c6;
    FUN_10c3d5d0();
  }
  pppuStack_3c = &pppcStack_4c;
  pppcStack_54 = (code ***)0x11dcb9d3;
  pcStack_58 = "CancelTrade";
  puStack_5c = (undefined1 *)0x108129e6;
  pppcStack_38 = (code ***)pppuStack_3c;
  FUN_100b62c0();
  puStack_5c = &LAB_10812f30;
  pppuStack_64 = &pppcStack_54;
  pppcStack_68 = (code ***)0x10812a01;
  pppcStack_60 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_4c != &pppcStack_60) && ((code ****)pppcStack_4c != (code ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x10812a17;
    FUN_10c3d5d0();
  }
  pppuStack_50 = &pppcStack_60;
  pppcStack_68 = (code ***)0x11dcb9fd;
  pcStack_6c = "LockTrade";
  pcStack_70 = (code *)0x10812a37;
  pppcStack_4c = (code ***)pppuStack_50;
  FUN_100b62c0();
  pcStack_70 = FUN_10812f70;
  pppuStack_78 = &pppcStack_68;
  pppcStack_7c = (code ***)0x10812a52;
  pppcStack_74 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pcStack_80 = (char *)0x10812a68;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppcStack_7c = (code ***)0x11dcb9f3;
  pcStack_80 = "MoveItemToTrade";
  pcStack_84 = (code *)0x10812a88;
  pppcStack_60 = (code ***)pppuStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_10812ff0;
  pppuStack_8c = &pppcStack_7c;
  pppcStack_90 = (code ***)0x10812aa3;
  pppcStack_88 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_74 != &pppcStack_88) && ((code ****)pppcStack_74 != (code ****)0x0)) {
    pppcStack_90 = pppcStack_74;
    pcStack_94 = (char *)0x10812ab9;
    FUN_10c3d5d0();
  }
  pppuStack_78 = &pppcStack_88;
  pppcStack_90 = (code ***)0x11dcbaa2;
  pcStack_94 = "UpdataMoneyToTrade";
  pcStack_98 = (code *)0x10812ad9;
  pppcStack_74 = (code ***)pppuStack_78;
  FUN_100b62c0();
  pcStack_98 = FUN_10813150;
  pppuStack_a0 = &pppcStack_90;
  pppcStack_a4 = (code ***)0x10812af4;
  pppcStack_9c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x10812b0a;
    FUN_10c3d5d0();
  }
  pppuStack_8c = &pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dcba8f;
  pcStack_a8 = "RemoveItemFromTrade";
  pcStack_ac = (code *)0x10812b2a;
  pppcStack_88 = (code ***)pppuStack_8c;
  FUN_100b62c0();
  pcStack_ac = FUN_108130f0;
  pppuStack_b4 = &pppcStack_a4;
  pppcStack_b8 = (code ***)0x10812b45;
  pppcStack_b0 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x10812b5b;
    FUN_10c3d5d0();
  }
  pppuStack_a0 = &pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dcbacb;
  pcStack_bc = "DragItemInTrade";
  pcStack_c0 = (code *)0x10812b7b;
  pppcStack_9c = (code ***)pppuStack_a0;
  FUN_100b62c0();
  pcStack_c0 = FUN_10813090;
  pppuStack_c8 = &pppcStack_b8;
  pppcStack_cc = (code ***)0x10812b96;
  pppcStack_c4 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pcStack_d0 = (char *)0x10812bac;
    FUN_10c3d5d0();
  }
  pppuStack_b4 = &pppcStack_c4;
  pppcStack_cc = (code ***)0x11dcbab9;
  pcStack_d0 = "TradeRespondOkHandler";
  pcStack_d4 = (code *)0x10812bcc;
  pppcStack_b0 = (code ***)pppuStack_b4;
  FUN_100b62c0();
  pcStack_d4 = FUN_10812e60;
  pppcStack_dc = (code ***)&pppcStack_cc;
  pppcStack_e0 = (code ***)0x10812be7;
  pppcStack_d8 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_c4 != &pppcStack_d8) && ((code ****)pppcStack_c4 != (code ****)0x0)) {
    pppcStack_e0 = pppcStack_c4;
    pcStack_e4 = (char *)0x10812bfd;
    FUN_10c3d5d0();
  }
  pppuStack_c8 = &pppcStack_d8;
  pppcStack_e0 = (code ***)0x11dcba49;
  pcStack_e4 = "TradeRespondCancelHandler";
  ppcStack_e8 = (code **)0x10812c1d;
  pppcStack_c4 = (code ***)pppuStack_c8;
  FUN_100b62c0();
  ppcStack_e8 = (code **)FUN_10812ea0;
  pppuStack_f0 = &pppcStack_e0;
  pppcStack_f4 = (code ***)0x10812c38;
  pppcStack_ec = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_d8 != &pppcStack_ec) && ((code ****)pppcStack_d8 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d8;
    ppcStack_f8 = (code **)0x10812c4e;
    FUN_10c3d5d0();
  }
  pppcStack_dc = (code ***)&pppcStack_ec;
  pppcStack_f4 = (code ***)0x11dcba2e;
  ppcStack_f8 = (code **)0x11dcba18;
  pcStack_fc = (code *)0x10812c6e;
  pppcStack_d8 = pppcStack_dc;
  FUN_100b62c0();
  pcStack_fc = FUN_10813420;
  pppuStack_100 = &pppcStack_f4;
  ppcStack_104 = (code **)0x10812c7f;
  FUN_10813750();
  if ((ppcStack_e8 != &pcStack_fc) && (ppcStack_e8 != (code **)0x0)) {
    ppcStack_104 = ppcStack_e8;
    pcStack_108 = (char *)0x10812c95;
    FUN_10c3d5d0();
  }
  pppcStack_ec = (code ***)&pcStack_fc;
  ppcStack_104 = (code **)0x11dcba79;
  pcStack_108 = "C2AS_IsUnderDealLimit";
  pcStack_10c = (code *)0x10812cb5;
  ppcStack_e8 = (code **)pppcStack_ec;
  FUN_100b62c0();
  pcStack_10c = FUN_10813460;
  FUN_10813750(&ppcStack_104);
  if ((ppcStack_f8 != &pcStack_10c) && (ppcStack_f8 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_f8);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10813950();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_108139a0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1081a400 @ 1081a400  size=471 ===== */
// strings:
//   "enforceLevel"

/* [RE-AUTO c0]
   strings:
     ""enforceLevel"" */

void FUN_1081a400(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 3;
  param_1[2] = 0;
  local_20 = (int *)0x0;
  local_1c = param_4[1];
  local_14 = param_4[3];
  local_18 = param_4[2];
  local_10 = param_4[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*param_4;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    uStack_28 = param_4[8];
  }
  else {
    uStack_28 = 0xdeadbeaf;
  }
  if (((param_4[0xd] & 0x8f) == 3) || (uVar4 = 0xdeadbeaf, (param_4[0xd] & 0x8f) == 4)) {
    uVar4 = param_4[0xe];
  }
  uVar5 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar3 != 0) {
      iVar3 = FUN_113f9bb0(uStack_28,uVar4);
      if (iVar3 == 0) {
        uVar5 = 0x29812;
      }
      else {
        iVar3 = FUN_11669250();
        if (*(int *)(iVar3 + 0x34) == 2) {
          iVar3 = FUN_11669250();
          if (*(int *)(iVar3 + 0xc0) == 6) {
            uVar5 = 0x2981b;
          }
        }
        else {
          uVar5 = 0x29813;
        }
      }
      uStack_2c = 0;
      iVar3 = FUN_107cb630();
      if (iVar3 != 0) {
        cVar2 = FUN_116698a0();
        if (cVar2 != '\0') {
          uStack_2c = FUN_1166c160();
        }
      }
      FUN_107cb6d0();
      FUN_104d1550("enforceLevel",uStack_2c);
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
        *param_1 = 0;
      }
      param_1[1] = 3;
      param_1[2] = uVar5;
    }
  }
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1081a9f0 @ 1081a9f0  size=221 ===== */
// strings:
//   "_requestPutItemIn"
//   "_requestRankLevelUp"
//   "_msgBoxConfirm"
//   "_requestRankLevelUpItemInfo"
//   "_isRankLevelUpItemRequireLevelBigger"

/* [RE-AUTO c0]
   strings:
     ""_requestPutItemIn""
     ""_requestRankLevelUp""
     ""_msgBoxConfirm""
     ""_requestRankLevelUpItemInfo""
     ""_isRankLevelUpItemRequireLevelBigger"" */

void FUN_1081a9f0(void)

{
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_104d13b0("_requestPutItemIn",FUN_1081a400);
  FUN_104d13b0("_requestRankLevelUp",FUN_1081a5e0);
  FUN_104d13b0("_msgBoxConfirm",FUN_1081a740);
  FUN_104d13b0("_requestRankLevelUpItemInfo",FUN_1081a820);
  FUN_104d13b0("_isRankLevelUpItemRequireLevelBigger",FUN_1081aad0);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1082a2b0 @ 1082a2b0  size=1208 ===== */
// calls: CPet::SetName
// strings:
//   "InitModel"
//   "TrasferInitModel"
//   "PutEquipIntoSlot"
//   "RequireEquipEnforce"
//   "IsTransferReady"
//   "GetForceLevel"
//   "Dispose"
//   "StartTransfer"
//   "GetCanTransferLevel"
//   "IsEquipTransferRuleError"
//   "GetMaxForceLevel"
//   "IsTransferBindCost"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""TrasferInitModel""
     ""PutEquipIntoSlot""
     ""RequireEquipEnforce""
     ""IsTransferReady""
     ""GetForceLevel""
     ""Dispose""
     ""StartTransfer""
     ""GetCanTransferLevel""
     ""IsEquipTransferRuleError"" */

void FUN_1082a2b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 ****unaff_ESI;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code **ppcStack_108;
  code ***pppcStack_104;
  code **ppcStack_100;
  code *pcStack_fc;
  char *pcStack_f8;
  code ***pppcStack_f4;
  code **ppcStack_f0;
  code *pcStack_ec;
  char *pcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code *pcStack_dc;
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
  undefined *puStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code **ppcStack_8c;
  char *pcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code **ppcStack_7c;
  char *pcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code **ppcStack_6c;
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
  undefined4 **appuStack_2c [2];
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined4 ***local_14;
  undefined4 ***local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)appuStack_2c;
  local_14 = &local_24;
  pppuStack_34 = (undefined4 ***)0x11dbd585;
  pcStack_38 = "InitModel";
  ppuStack_3c = (code ***)0x1082a2e4;
  local_10 = local_14;
  FUN_100b62c0();
  ppuStack_3c = (undefined4 **)FUN_1082a9e0;
  pppuStack_40 = appuStack_2c;
  pppuStack_44 = (undefined4 ***)0x1082a2f5;
  FUN_1082d6b0();
  if (((undefined4 ****)pppuStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppuStack_20 != (undefined4 ****)0x0)) {
    pppuStack_44 = pppuStack_20;
    pcStack_48 = (char *)0x1082a30b;
    FUN_10c3d5d0();
  }
  local_24 = &pppuStack_34;
  pppuStack_44 = (undefined4 ***)0x11dcd130;
  pcStack_48 = "TrasferInitModel";
  ppcStack_4c = (code **)0x1082a32b;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  ppcStack_4c = (code **)FUN_1082aac0;
  pppuStack_50 = &ppuStack_3c;
  pppuStack_54 = (undefined4 ***)0x1082a33c;
  FUN_1082d6b0();
  if ((unaff_ESI != &pppuStack_44) && (unaff_ESI != (undefined4 ****)0x0)) {
    pcStack_58 = (char *)0x1082a352;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_54 = (undefined4 ***)0x11dcd144;
  pcStack_58 = "PutEquipIntoSlot";
  ppcStack_5c = (code **)0x1082a372;
  FUN_100b62c0();
  ppcStack_5c = (code **)FUN_1082b130;
  pppcStack_60 = &ppcStack_4c;
  pppcStack_64 = (code ***)0x1082a383;
  FUN_1082d6b0();
  if (((undefined4 ****)pppuStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0)) {
    pppcStack_64 = (code ***)pppuStack_40;
    pcStack_68 = (char *)0x1082a399;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppuStack_54;
  pppcStack_64 = (code ***)0x11dcd10f;
  pcStack_68 = "RequireEquipEnforce";
  ppcStack_6c = (code **)0x1082a3b9;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  ppcStack_6c = (code **)FUN_1082c420;
  pppcStack_70 = &ppcStack_5c;
  pppcStack_74 = (code ***)0x1082a3ca;
  FUN_1082d6b0();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppcStack_74 = (code ***)pppuStack_50;
    pcStack_78 = (char *)0x1082a3e0;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppcStack_74 = (code ***)0x11dcd11f;
  pcStack_78 = "IsTransferReady";
  ppcStack_7c = (code **)0x1082a400;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  ppcStack_7c = (code **)FUN_1082ce00;
  pppcStack_80 = &ppcStack_6c;
  pppcStack_84 = (code ***)0x1082a411;
  FUN_1082d6b0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_84 = pppcStack_60;
    pcStack_88 = (char *)0x1082a427;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_84 = (code ***)0x11dcd0e9;
  pcStack_88 = "GetForceLevel";
  ppcStack_8c = (code **)0x1082a447;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_8c = (code **)FUN_1082cd40;
  pppcStack_90 = &ppcStack_7c;
  pppcStack_94 = (code ***)0x1082a458;
  FUN_1082d6b0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_94 = pppcStack_70;
    puStack_98 = (undefined *)0x1082a46e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_94 = (code ***)&DAT_11dcc4fe;
  puStack_98 = &DAT_11dcc4f8;
  ppcStack_9c = (code **)0x1082a48e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  ppcStack_9c = (code **)FUN_1082ae80;
  pppcStack_a0 = &ppcStack_8c;
  pppcStack_a4 = (code ***)0x1082a49f;
  FUN_1082d6b0();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_80;
    pcStack_a8 = (char *)0x1082a4b5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_a4 = (code ***)0x11dcc4bf;
  pcStack_a8 = "Dispose";
  ppcStack_ac = (code **)0x1082a4d5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_ac = (code **)FUN_1082ae20;
  pppcStack_b0 = &ppcStack_9c;
  pppcStack_b4 = (code ***)0x1082a4e6;
  FUN_1082d6b0();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_b4 = pppcStack_90;
    pcStack_b8 = (char *)0x1082a4fc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_b4 = (code ***)0x11dcd0f9;
  pcStack_b8 = "StartTransfer";
  ppcStack_bc = (code **)0x1082a51c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  ppcStack_bc = (code **)FUN_1082a790;
  pppcStack_c0 = &ppcStack_ac;
  pppcStack_c4 = (code ***)0x1082a52d;
  FUN_1082d6b0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_c4 = pppcStack_a0;
    pcStack_c8 = (char *)0x1082a543;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_c4 = (code ***)0x11dcd1eb;
  pcStack_c8 = "GetCanTransferLevel";
  ppcStack_cc = (code **)0x1082a563;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  ppcStack_cc = (code **)FUN_1082cbd0;
  pppcStack_d0 = &ppcStack_bc;
  pppcStack_d4 = (code ***)0x1082a574;
  FUN_1082d6b0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_d4 = pppcStack_b0;
    pcStack_d8 = (char *)0x1082a58a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_d4 = (code ***)0x11dcd204;
  pcStack_d8 = "IsEquipTransferRuleError";
  pcStack_dc = (code *)0x1082a5aa;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pcStack_dc = FUN_1082c8c0;
  pppcStack_e0 = &ppcStack_cc;
  pppcStack_e4 = (code ***)0x1082a5bb;
  FUN_1082d6b0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_e4 = pppcStack_c0;
    pcStack_e8 = (char *)0x1082a5d1;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_e4 = (code ***)0x11dcd1c0;
  pcStack_e8 = "GetMaxForceLevel";
  pcStack_ec = (code *)0x1082a5f1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pcStack_ec = FUN_1082cc80;
  ppcStack_f0 = &pcStack_dc;
  pppcStack_f4 = (code ***)0x1082a602;
  FUN_1082d6b0();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d0;
    pcStack_f8 = (char *)0x1082a618;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_f4 = (code ***)0x11dcd1d6;
  pcStack_f8 = "IsTransferBindCost";
  pcStack_fc = (code *)0x1082a638;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pcStack_fc = FUN_1082ca00;
  ppcStack_100 = &pcStack_ec;
  pppcStack_104 = (code ***)0x1082a649;
  FUN_1082d6b0();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_104 = pppcStack_e0;
    ppcStack_108 = (code **)0x1082a65f;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&DAT_11d9d32b;
  ppcStack_108 = (code **)0x1082a66f;
  CPet__SetName();
  ppcStack_108 = (code **)0x1082a674;
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    ppcStack_108 = (code **)0x1082a67d;
    FUN_10d17440();
    ppcStack_108 = (code **)0x1082a684;
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      pppcStack_110 = (code ***)0x1082a68f;
      FUN_10d17440();
      pppcStack_110 = (code ***)0x1082a696;
      FUN_10d17870();
      pppcStack_110 = (code ***)0x1082a69d;
      FUN_1082dad0();
    }
  }
  ppcStack_108 = &pcStack_fc;
  pcStack_fc = (code *)0x298ea;
  pppcStack_10c = (code ***)0x1082a6b4;
  puVar2 = (undefined4 *)FUN_1081b5b0();
  ppcStack_100 = (code **)0x298e9;
  *puVar2 = 0x424;
  pppcStack_10c = &ppcStack_100;
  pppcStack_110 = (code ***)0x1082a6ce;
  puVar2 = (undefined4 *)FUN_1081b5b0();
  pppcStack_104 = (code ***)0x298e8;
  *puVar2 = 0x3ee;
  pppcStack_110 = (code ***)&pppcStack_104;
  pppcStack_114 = (code ***)0x1082a6e8;
  puVar2 = (undefined4 *)FUN_1081b5b0();
  ppcStack_108 = (code **)0x298e7;
  *puVar2 = 0x419;
  pppcStack_114 = &ppcStack_108;
  puVar2 = (undefined4 *)FUN_1081b5b0();
  pppcStack_10c = (code ***)0x298e6;
  *puVar2 = 0x418;
  puVar2 = (undefined4 *)FUN_1081b5b0(&pppcStack_10c);
  pppcStack_110 = (code ***)0x298e5;
  *puVar2 = 0x416;
  puVar2 = (undefined4 *)FUN_1081b5b0(&pppcStack_110);
  pppcStack_114 = (code ***)0x298e4;
  *puVar2 = 0x3f2;
  puVar2 = (undefined4 *)FUN_1081b5b0(&pppcStack_114);
  *puVar2 = 0x448;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082a9e0 @ 1082a9e0  size=221 ===== */
// strings:
//   "_requestEquipDetail"
//   "_requireEquipBreak"
//   "checkBindStateAfterEnforce"
//   "_openEquipShow"
//   "_CanEquipEnforceORBreak"

/* [RE-AUTO c0]
   strings:
     ""_requestEquipDetail""
     ""_requireEquipBreak""
     ""checkBindStateAfterEnforce""
     ""_openEquipShow""
     ""_CanEquipEnforceORBreak"" */

void FUN_1082a9e0(void)

{
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_104d13b0("_requestEquipDetail",FUN_1082ab30);
  FUN_104d13b0("_requireEquipBreak",FUN_1082c380);
  FUN_104d13b0("checkBindStateAfterEnforce",FUN_1082c7b0);
  FUN_104d13b0("_openEquipShow",FUN_1082d450);
  FUN_104d13b0("_CanEquipEnforceORBreak",FUN_1082d4e0);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1082ab30 @ 1082ab30  size=502 ===== */
// strings:
//   "openEnforceDiamond"

/* [RE-AUTO c0]
   strings:
     ""openEnforceDiamond"" */

void FUN_1082ab30(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_stack_00000010;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) ||
     (uVar5 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
    uVar5 = in_stack_00000010[8];
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) ||
     (uVar6 = 0xdeadbeaf, (in_stack_00000010[0xd] & 0x8f) == 4)) {
    uVar6 = in_stack_00000010[0xe];
  }
  if (((byte)in_stack_00000010[0x13] & 0x8f) == 2) {
    uVar1 = *(undefined1 *)(in_stack_00000010 + 0x14);
  }
  else {
    uVar1 = 0;
  }
  uStack_34 = in_stack_00000010[0x19];
  uStack_2c = in_stack_00000010[0x1b];
  uStack_30 = in_stack_00000010[0x1a];
  uStack_28 = in_stack_00000010[0x1c];
  piStack_38 = (int *)0x0;
  if ((uStack_34 >> 6 & 1) != 0) {
    piStack_38 = (int *)in_stack_00000010[0x18];
    (**(code **)(*piStack_38 + 4))(&piStack_38,uStack_30);
  }
  if (((byte)in_stack_00000010[0x1f] & 0x8f) == 2) {
    uVar2 = *(undefined1 *)(in_stack_00000010 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  iVar4 = FUN_107cb630();
  if (iVar4 != 0) {
    FUN_116ebf00();
    uVar3 = FUN_116ebf50();
    FUN_104d15e0("openEnforceDiamond",uVar3);
    FUN_1082b430(iVar4);
    FUN_1082b5c0(uVar5,uVar6,uVar2);
    FUN_1082b860(uVar5,uVar6,uVar2);
    FUN_1082bc10(uVar5,uVar6,uVar1,uVar2);
    FUN_1082bf40(uVar5,uVar6,uVar2);
    FUN_1082c130(uVar5,uVar6,uVar2);
  }
  if ((uStack_34 >> 6 & 1) != 0) {
    (**(code **)(*piStack_38 + 8))(&piStack_38,uStack_30);
    piStack_38 = (int *)0x0;
  }
  uStack_34 = 0;
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1082b380 @ 1082b380  size=168 ===== */
// strings:
//   "equipEnforceLevel"
//   "equipBreakLevel"
//   "enforceTopLevel"
//   "enforceBreakTopLevel"
//   "enforceLevelForBreak"

/* [RE-AUTO c0]
   strings:
     ""equipEnforceLevel""
     ""equipBreakLevel""
     ""enforceTopLevel""
     ""enforceBreakTopLevel""
     ""enforceLevelForBreak"" */

void FUN_1082b380(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_1166c160();
  FUN_104d1550("equipEnforceLevel",uVar2);
  uVar2 = FUN_1166c400();
  FUN_104d1550("equipBreakLevel",uVar2);
  uVar3 = FUN_1166d7c0();
  iVar4 = FUN_1166c4b0();
  uVar2 = *(undefined4 *)(iVar4 + 0x140);
  iVar4 = FUN_1166c4b0();
  uVar1 = *(undefined4 *)(iVar4 + 0x144);
  FUN_104d1550("enforceTopLevel",uVar3);
  FUN_104d1550("enforceBreakTopLevel",uVar2);
  FUN_104d1550("enforceLevelForBreak",uVar1);
  return;
}



/* ===== FUN_1082bc10 @ 1082bc10  size=806 ===== */
// calls: CPet::SetName
// strings:
//   "diamondItemID"
//   "diamondItemName"
//   "diamondCounts"
//   "diamondBindCounts"
//   "diamondUnbindCounts"
//   "diamondHasCounts"
//   "enforceRateInfo"
//   "enforceRate"

/* [RE-AUTO c0]
   strings:
     ""diamondItemID""
     ""diamondItemName""
     ""diamondCounts""
     ""diamondBindCounts""
     ""diamondUnbindCounts""
     ""diamondHasCounts""
     ""enforceRateInfo""
     ""enforceRate"" */

void FUN_1082bc10(undefined4 param_1,int param_2,uint param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_24 = param_2;
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
      ((iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0 && (*(int *)(iVar3 + 0x260e8) != 0))))
     && (*(int *)(iVar3 + 0x260e0) != 0)) {
    local_34 = 0;
    local_3c = 0;
    local_28 = 0;
    local_30 = 0;
    if (param_4 == '\0') {
      iVar3 = FUN_107cb6b0();
      if (iVar3 != 0) {
        FUN_115999a0(iVar3,&local_34,&local_3c,&local_28,&local_30);
      }
    }
    else {
      iVar3 = FUN_115997b0(local_2c,local_24);
      if ((iVar3 != 0) && (iVar3 = FUN_115c3a10(iVar3), iVar3 != 0)) {
        local_34 = *(undefined4 *)(iVar3 + 0xac);
        local_3c = *(undefined4 *)(iVar3 + 0xb0);
        local_28 = *(int *)(iVar3 + 0xc4);
        local_30 = *(int *)(iVar3 + 200);
      }
    }
    uVar4 = FUN_113fa680(local_34,1,1);
    local_38 = FUN_113fa680(local_34,0,1);
    iVar3 = FUN_10254130(local_28);
    if (iVar3 == 0) {
      FUN_104d1550("diamondItemID",0);
    }
    else {
      FUN_104d1550("diamondItemID",local_28);
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("diamondItemName",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_104d1550("diamondCounts",local_30);
      FUN_104d1550("diamondBindCounts",uVar4);
      FUN_104d1550("diamondUnbindCounts",local_38);
      uVar4 = FUN_113fa380(local_28);
      FUN_104d1440("diamondHasCounts",uVar4);
    }
    cVar6 = (char)param_3;
    if (((char)param_3 != '\0') && ((local_30 < 1 || (local_28 < 1)))) {
      cVar6 = '\0';
      param_3 = param_3 & 0xffffff00;
    }
    uVar4 = 0;
    local_2c = FUN_113f9bb0(local_2c,local_24);
    cVar2 = FUN_116698a0();
    if (cVar2 != '\0') {
      if (param_4 == '\0') {
        uVar4 = FUN_11599a70(local_2c,cVar6);
      }
      else {
        uVar4 = FUN_11599c50(local_2c,param_3);
      }
    }
    local_24 = 0;
    CPet__SetName(&DAT_11d9d32b);
    uVar5 = FUN_1024e8a0(uVar4,2);
    if (param_4 == '\0') {
      uVar7 = 0x48b;
    }
    else {
      uVar7 = 0x445;
    }
    FUN_1024ebe0(&local_24,&local_38,uVar7,1,uVar5);
    local_20[0] = 0;
    local_10 = local_20;
    local_c = local_10;
    FUN_100e5aa0(local_10);
    FUN_104d1670("enforceRateInfo",local_c);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    FUN_104d1550("enforceRate",uVar4);
    if (local_24 != 0) {
      FUN_10c3da30(local_24);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082bf40 @ 1082bf40  size=485 ===== */
// calls: CPet::SetName
// strings:
//   "enforcePunishmentInfo"
//   "maxLevel"
//   "minLevel"

/* [RE-AUTO c0]
   strings:
     ""enforcePunishmentInfo""
     ""maxLevel""
     ""minLevel"" */

void __fastcall
FUN_1082bf40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x260e0) != 0)) {
      local_2c = 0;
      local_30 = 0;
      uVar4 = FUN_113f9bb0(param_3,param_4);
      cVar2 = FUN_116698a0();
      if (cVar2 != '\0') {
        if (param_5 == '\0') {
          FUN_115998e0(uVar4,&local_2c,&local_30);
        }
        else {
          FUN_11599be0();
        }
      }
      local_28 = 0;
      CPet__SetName(&DAT_11d9d32b);
      if (local_30 == local_2c) {
        if (local_30 == 0) {
          uVar4 = 0x487;
          if (param_5 == '\x01') {
            uVar4 = 0x4c3;
          }
          FUN_1024ebe0(&local_28,local_34,uVar4,0);
        }
        else {
          uVar4 = FUN_1024e8a0(local_30,2);
          uVar5 = 0x488;
          if (param_5 == '\x01') {
            uVar5 = 0x4c4;
          }
          FUN_1024ebe0(&local_28,local_34,uVar5,1,uVar4);
        }
      }
      else {
        uVar4 = FUN_1024e8a0(local_30,2);
        uVar5 = FUN_1024e8a0(local_2c,2);
        uVar6 = 0x489;
        if (param_5 == '\x01') {
          uVar6 = 0x4c5;
        }
        FUN_1024ebe0(&local_28,local_34,uVar6,2,uVar5,uVar4);
      }
      local_14 = local_24;
      local_24[0] = 0;
      local_10 = local_14;
      FUN_100e5aa0(local_14);
      FUN_104d1670("enforcePunishmentInfo",local_10);
      if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_10);
      }
      FUN_104d1550("maxLevel",local_30);
      FUN_104d1550("minLevel",local_2c);
      if (local_28 != 0) {
        FUN_10c3da30(local_28);
      }
    }
  }
  FUN_11a89daa(param_1,param_2);
  return;
}



/* ===== FUN_1083f010 @ 1083f010  size=726 ===== */
// strings:
//   "GetBackItemSalesInfo"
//   "GetSalesRequirementBySaleItemID"
//   "InitModel"
//   "C2AS_NeedEquipShow"
//   "GetFilteredStoreData"
//   "SetFilterParams"
//   "GetUnifiedListData"
//   "GetCurrencyData"
//   "AS2C_NeedCreditCost"

/* [RE-AUTO c0]
   strings:
     ""GetBackItemSalesInfo""
     ""GetSalesRequirementBySaleItemID""
     ""InitModel""
     ""C2AS_NeedEquipShow""
     ""GetFilteredStoreData""
     ""SetFilterParams""
     ""GetUnifiedListData""
     ""GetCurrencyData""
     ""AS2C_NeedCreditCost"" */

void __fastcall FUN_1083f010(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_b4;
  char *pcStack_b0;
  code **ppcStack_ac;
  code ***pppcStack_a8;
  code *pcStack_a4;
  code **ppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code **ppcStack_94;
  code **ppcStack_90;
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
  pppcStack_30 = (code ***)0x11dcf1d0;
  pppcStack_34 = (code ***)0x1083f044;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10840f90;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1083f055;
  FUN_10845f00();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1083f06b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dcf207;
  pppcStack_40 = (code ***)0x11dcf1e8;
  pppcStack_44 = (code ***)0x1083f08b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10840690;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1083f09c;
  FUN_10845f00();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1083f0b2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dbd585;
  pppcStack_50 = (code ***)0x11dbd57c;
  pppcStack_54 = (code ***)0x1083f0d2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1083f300;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1083f0e3;
  FUN_10845f00();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x1083f0f9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dcf1b6;
  pppcStack_60 = (code ***)0x11dcf1a4;
  pppcStack_64 = (code ***)0x1083f119;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10845b30;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1083f12a;
  FUN_10845f00();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x1083f140;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dcf1cc;
  pppcStack_70 = (code ***)0x11dcf1b8;
  pppcStack_74 = (code ***)0x1083f160;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_108420c0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x1083f171;
  FUN_10845f00();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x1083f187;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dcf18f;
  pppcStack_80 = (code ***)0x11dcf180;
  pppcStack_84 = (code ***)0x1083f1a7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10842220;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x1083f1b8;
  FUN_10845f00();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    ppcStack_90 = (code **)0x1083f1ce;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dcf1a2;
  ppcStack_90 = (code **)0x11dcf190;
  ppcStack_94 = (code **)0x1083f1ee;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  ppcStack_94 = (code **)FUN_10842770;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1083f1ff;
  FUN_10845f00();
  if ((pppcStack_80 != &ppcStack_94) && (pppcStack_80 != (code ***)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x1083f215;
    FUN_10c3d5d0();
  }
  pppcStack_84 = &ppcStack_94;
  pppcStack_9c = (code ***)0x11dcf2bb;
  ppcStack_a0 = (code **)0x11dcf2ac;
  pcStack_a4 = (code *)0x1083f235;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pcStack_a4 = FUN_10843460;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  ppcStack_ac = (code **)0x1083f246;
  FUN_10845f00();
  if ((ppcStack_90 != &pcStack_a4) && (ppcStack_90 != (code **)0x0)) {
    ppcStack_ac = ppcStack_90;
    pcStack_b0 = (char *)0x1083f25c;
    FUN_10c3d5d0();
  }
  ppcStack_94 = &pcStack_a4;
  ppcStack_ac = (code **)0x11dcf2cf;
  pcStack_b0 = "AS2C_NeedCreditCost";
  pcStack_b4 = (code *)0x1083f27c;
  ppcStack_90 = ppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_10845bc0;
  FUN_10845f00(&ppcStack_ac);
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_a0);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10848f80();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1083f300 @ 1083f300  size=890 ===== */
// strings:
//   "_requestBuyBackItem"
//   "_requestBuyItem"
//   "_requestNpcSales"
//   "_requestSoldList"
//   "_requestSellItem"
//   "_requestResetSales"
//   "_requestGetBuyStackCounts"
//   "_refreshCurrency"
//   "_reqShopName"
//   "CurrentBindMoney"
//   "CurrentUnbindMoney"
//   "currencyGuildValue"
//   "currencyFarmValue"
//   "currencyClanMoney"
//   "currencyClanMoneyPvp"
//   "switchDrag"
//   "switchTipsOpen"

/* [RE-AUTO c0]
   strings:
     ""_requestBuyBackItem""
     ""_requestBuyItem""
     ""_requestNpcSales""
     ""_requestSoldList""
     ""_requestSellItem""
     ""_requestResetSales""
     ""_requestGetBuyStackCounts""
     ""_refreshCurrency""
     ""_reqShopName""
     ""CurrentBindMoney"" */

void FUN_1083f300(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_stack_00000010;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_104d13b0("_requestBuyBackItem",FUN_1083f680);
  FUN_104d13b0("_requestBuyItem",FUN_1083f820);
  FUN_104d13b0("_requestNpcSales",FUN_1083f9c0);
  FUN_104d13b0("_requestSoldList",FUN_1083fb60);
  FUN_104d13b0("_requestSellItem",FUN_10840320);
  FUN_104d13b0("_requestResetSales",FUN_10840470);
  FUN_104d13b0("_requestGetBuyStackCounts",FUN_108416d0);
  FUN_104d13b0("_refreshCurrency",FUN_10841c40);
  FUN_104d13b0("_reqShopName",FUN_10845a20);
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0))
  goto LAB_1083f654;
  iVar2 = (**(code **)(*piVar1 + 0xb4))();
  if (iVar2 == 0) goto LAB_1083f654;
  uVar3 = FUN_1025b060();
  uVar4 = FUN_1025b060();
  FUN_104d1550("CurrentBindMoney",uVar4);
  FUN_104d1550("CurrentUnbindMoney",uVar3);
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_1083f4cb:
    uStack_24 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_1083f4cb;
    uStack_24 = FUN_114b7530(1);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_1083f513:
    uStack_28 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_1083f513;
    uStack_28 = FUN_114b7530(2);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_1083f559:
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_1083f559;
    uVar3 = FUN_114b7530(3);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_1083f599:
    uVar4 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_1083f599;
    uVar4 = FUN_114b7530(4);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2afc) != 0)) {
      FUN_114b7530(5);
    }
  }
  FUN_104d1550("currencyGuildValue",uStack_28);
  FUN_104d1550("currencyFarmValue",uStack_24);
  FUN_104d1550("currencyClanMoney",uVar3);
  FUN_104d1550("currencyClanMoneyPvp",uVar4);
  iVar2 = FUN_11727ff0();
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  iVar2 = FUN_11727ff0();
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  FUN_104d1550("switchDrag",uVar3);
  FUN_104d1550("switchTipsOpen",uVar4);
LAB_1083f654:
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10841c40 @ 10841c40  size=1006 ===== */
// strings:
//   "CurrentBindMoney"
//   "CurrentUnbindMoney"
//   "currencyGuildValue"
//   "currencyFarmValue"
//   "currencyClanMoney"
//   "currencyClanMoneyPvp"
//   "currencyBindCredit"
//   "currencyCredit"
//   "currencyMonster"
//   "currencyLieHun"

/* [RE-AUTO c0]
   strings:
     ""CurrentBindMoney""
     ""CurrentUnbindMoney""
     ""currencyGuildValue""
     ""currencyFarmValue""
     ""currencyClanMoney""
     ""currencyClanMoneyPvp""
     ""currencyBindCredit""
     ""currencyCredit""
     ""currencyMonster""
     ""currencyLieHun"" */

void FUN_10841c40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_stack_00000010;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0))
  goto LAB_1084200a;
  iVar2 = (**(code **)(*piVar1 + 0xb4))();
  if (iVar2 == 0) goto LAB_1084200a;
  uVar3 = FUN_1025b060();
  uVar4 = FUN_1025b060();
  FUN_104d1550("CurrentBindMoney",uVar4);
  FUN_104d1550("CurrentUnbindMoney",uVar3);
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841d46:
    uStack_30 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841d46;
    uStack_30 = FUN_114b7530(1);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841d8e:
    uStack_34 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841d8e;
    uStack_34 = FUN_114b7530(2);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841dd6:
    uStack_2c = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841dd6;
    uStack_2c = FUN_114b7530(3);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841e1e:
    uStack_28 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841e1e;
    uStack_28 = FUN_114b7530(4);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2afc) != 0)) {
      FUN_114b7530(5);
    }
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841ea0:
    uStack_24 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841ea0;
    uStack_24 = FUN_114b7530(7);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841ee6:
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841ee6;
    uVar3 = FUN_114b7530(8);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841f26:
    uVar4 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841f26;
    uVar4 = FUN_114b7530(9);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10841f66:
    uVar5 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2afc) == 0)) goto LAB_10841f66;
    uVar5 = FUN_114b7530(10);
  }
  FUN_104d1550("currencyGuildValue",uStack_34);
  FUN_104d1550("currencyFarmValue",uStack_30);
  FUN_104d1550("currencyClanMoney",uStack_2c);
  FUN_104d1550("currencyClanMoneyPvp",uStack_28);
  FUN_104d1550("currencyBindCredit",uStack_24);
  FUN_104d1550("currencyCredit",uVar3);
  FUN_104d1550("currencyMonster",uVar4);
  FUN_104d1550("currencyLieHun",uVar5);
LAB_1084200a:
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10842770 @ 10842770  size=3288 ===== */
// calls: CPlayer::GetHuntRankOrCount, CCurrencyInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CCurrencyInfo"
//   "itemIdArr"
//   "itemNameArr"
//   "spIdArr"
//   "spNameArr"
//   "validShopIDs"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CCurrencyInfo::GetManagers
   strings:
     ""CCurrencyInfo""
     ""itemIdArr""
     ""itemNameArr""
     ""spIdArr""
     ""spNameArr""
     ""validShopIDs"" */

void FUN_10842770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *******pppppppuVar7;
  undefined4 **ppuVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 ******ppppppuVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *******pppppppuVar15;
  undefined4 ******ppppppuVar16;
  undefined4 ******ppppppuVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *******pppppppuVar20;
  int *piVar21;
  int *unaff_ESI;
  byte unaff_DI;
  int *piVar22;
  undefined8 uVar23;
  byte bVar24;
  undefined1 *puVar25;
  byte bVar26;
  undefined1 *puVar27;
  uint *puVar28;
  byte bVar29;
  int **ppiVar30;
  int **ppiVar31;
  undefined1 auStack_170 [3];
  undefined1 uStack_16d;
  int *piStack_16c;
  int *piStack_168;
  int *apiStack_164 [2];
  undefined4 local_15c;
  int *local_158;
  uint local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined4 **ppuStack_13c;
  undefined4 **ppuStack_138;
  undefined4 **ppuStack_134;
  int iStack_130;
  undefined4 *****pppppuStack_12c;
  undefined4 *****pppppuStack_128;
  undefined4 ******ppppppuStack_124;
  undefined4 ******ppppppuStack_120;
  undefined4 ******ppppppuStack_11c;
  int iStack_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****ppppuStack_110;
  undefined4 *****pppppuStack_10c;
  undefined4 *****pppppuStack_108;
  undefined4 *****pppppuStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  int *piStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  uint uStack_e0;
  int aiStack_dc [3];
  int *piStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [4];
  int *piStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  int *piStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [8];
  int *piStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  int *piStack_60;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined1 auStack_3c [8];
  undefined1 *puStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined1 **ppuStack_24;
  undefined1 **ppuStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_170;
  local_15c = param_2;
  if (param_5 == 1) {
    local_158 = (int *)0x0;
    local_154 = param_4[1];
    local_14c = param_4[3];
    local_150 = param_4[2];
    local_148 = param_4[4];
    if ((local_154 >> 6 & 1) != 0) {
      local_158 = (int *)*param_4;
      (**(code **)(*local_158 + 4))(&local_158,local_150);
    }
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar22 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar22 != (int *)0x0)) &&
       (apiStack_164[0] = (int *)(**(code **)(*piVar22 + 0xb4))(), apiStack_164[0] != (int *)0x0)) {
      ppiVar31 = &piStack_58;
      if (DAT_123bcf6c != DAT_123bcf70) {
        DAT_123bcf70 = DAT_123bcf6c;
      }
      piStack_58 = (int *)0x0;
      uStack_54 = 0;
      FUN_11a98a70();
      ppppppuStack_124 = &pppppuStack_12c;
      ppppppuStack_11c = (undefined4 *******)0x0;
      piVar22 = (int *)0x0;
      pppppuStack_12c = (undefined4 ******)0x0;
      pppppuStack_128 = (undefined4 ******)0x0;
      iStack_118 = CONCAT31(iStack_118._1_3_,uStack_16d);
      piStack_16c = (int *)0x0;
      ppppppuStack_120 = ppppppuStack_124;
      iVar10 = FUN_1083e990();
      if (0 < iVar10) {
        do {
          iVar10 = FUN_1083e900(piVar22);
          if (iVar10 != 0) {
            iVar10 = FUN_11681360();
            iVar10 = *(int *)(iVar10 + 200);
            iVar11 = FUN_11681360();
            if (iVar10 != iVar11 + 0xc0) {
              do {
                apiStack_164[0] = *(int **)(iVar10 + 0x10);
                FUN_10467580(aiStack_dc,apiStack_164);
                iVar11 = *(int *)(iVar10 + 0xc);
                if (iVar11 == 0) {
                  iVar11 = *(int *)(iVar10 + 4);
                  if (iVar10 == *(int *)(iVar11 + 0xc)) {
                    do {
                      iVar10 = iVar11;
                      iVar11 = *(int *)(iVar10 + 4);
                    } while (iVar10 == *(int *)(iVar11 + 0xc));
                  }
                  if (*(int *)(iVar10 + 0xc) != iVar11) {
                    iVar10 = iVar11;
                  }
                }
                else {
                  for (iVar4 = *(int *)(iVar11 + 8); iVar10 = iVar11, iVar4 != 0;
                      iVar4 = *(int *)(iVar4 + 8)) {
                    iVar11 = iVar4;
                  }
                }
                iVar11 = FUN_11681360();
              } while (iVar10 != iVar11 + 0xc0);
            }
          }
          piVar22 = (int *)((int)piStack_16c + 1);
          piStack_16c = piVar22;
          iVar10 = FUN_1083e990();
        } while ((int)piVar22 < iVar10);
      }
      uVar23 = FUN_111f8d20();
      piStack_60 = (int *)((ulonglong)uVar23 >> 0x20);
      uStack_e0 = (uint)uVar23;
      ppuStack_13c = &puStack_144;
      iStack_130 = CONCAT31(iStack_130._1_3_,uStack_16d);
      pppppuStack_10c = &ppppuStack_114;
      puStack_144 = (undefined4 *)0x0;
      puStack_140 = (undefined4 *)0x0;
      ppuStack_134 = (undefined4 **)0x0;
      ppppuStack_114 = (undefined4 *****)0x0;
      ppppuStack_110 = (undefined4 *****)0x0;
      pppppuStack_104 = (undefined4 ******)0x0;
      uStack_100 = CONCAT31(uStack_100._1_3_,uStack_16d);
      ppuStack_138 = ppuStack_13c;
      pppppuStack_108 = pppppuStack_10c;
      aiStack_dc[0] = FUN_1083e4e0();
      apiStack_164[0] = (int *)0x0;
      if (0 < aiStack_dc[0]) {
        do {
          piStack_16c = (int *)FUN_1083e450(apiStack_164[0]);
          if (piStack_16c != (int *)0x0) {
            ppppppuVar12 = &pppppuStack_12c;
            piVar22 = (int *)piStack_16c[4];
            piStack_a0 = piVar22;
            ppppppuVar16 = (undefined4 ******)pppppuStack_128;
            if ((undefined4 ******)pppppuStack_128 != (undefined4 ******)0x0) {
              do {
                if ((int)ppppppuVar16[4] < (int)piVar22) {
                  ppppppuVar17 = (undefined4 ******)ppppppuVar16[3];
                }
                else {
                  ppppppuVar17 = (undefined4 ******)ppppppuVar16[2];
                  ppppppuVar12 = ppppppuVar16;
                }
                ppppppuVar16 = ppppppuVar17;
              } while (ppppppuVar17 != (undefined4 ******)0x0);
              if (((ppppppuVar12 != &pppppuStack_12c) && ((int)ppppppuVar12[4] <= (int)piVar22)) &&
                 (*(char *)((int)piStack_16c + 0x65) != '\0')) {
                if (piStack_16c[2] != 0 || piStack_16c[3] != 0) {
                  uStack_80 = piStack_16c[3];
                  uVar1 = piStack_16c[2];
                  uVar23 = FUN_100ed750();
                  if ((((uint)uVar23 & uVar1) != uVar1) ||
                     (((uint)((ulonglong)uVar23 >> 0x20) & uStack_80) != uStack_80))
                  goto LAB_10842cff;
                }
                iVar10 = piStack_16c[0x1a];
                iVar11 = CPlayer__GetHuntRankOrCount();
                if ((((iVar10 <= iVar11) &&
                     (((piStack_16c[0x1b] < 1 ||
                       (iVar10 = FUN_1083eb20(piStack_16c[0x1b]), iVar10 == 0)) ||
                      (iVar10 = *(int *)(iVar10 + 0x18), iVar11 = CPlayer__GetHuntRankOrCount(),
                      iVar10 <= iVar11)))) &&
                    (((iVar10 = FUN_104d90e0(piVar22), iVar10 == 0 || (*(int *)(iVar10 + 0x58) < 1))
                     || ((iVar11 = (**(code **)(*piStack_168 + 0x46c))(), iVar11 == 0 ||
                         (cVar9 = FUN_114e0340(*(undefined4 *)(iVar10 + 0x58)), cVar9 != '\0'))))))
                   && ((((piVar22 != (int *)&DAT_0000000a && (piVar22 != (int *)&DAT_0000001a)) &&
                        (piVar22 != (int *)0x2c)) || (cVar9 = FUN_1139ab70(), cVar9 != '\0')))) {
                  FUN_10461ba0(&piStack_a0);
                  uStack_30 = 0;
                  piStack_2c = (int *)0x3;
                  piStack_28 = piVar22;
                  (**(code **)(*piStack_60 + 0x3c))(piStack_58,&uStack_30);
                  piVar22 = piStack_16c + 10;
                  piVar18 = (int *)piStack_16c[0xc];
                  piVar21 = piStack_16c;
                  while (piStack_16c = piVar21, piVar18 != piVar22) {
                    FUN_10467580(&puStack_34,piVar18 + 4);
                    piVar13 = (int *)piVar18[3];
                    piVar21 = piStack_16c;
                    if (piVar13 == (int *)0x0) {
                      piVar13 = (int *)piVar18[1];
                      if (piVar18 == (int *)piVar13[3]) {
                        do {
                          piVar18 = piVar13;
                          piVar13 = (int *)piVar18[1];
                        } while (piVar18 == (int *)piVar13[3]);
                      }
                      if ((int *)piVar18[3] != piVar13) {
                        piVar18 = piVar13;
                      }
                    }
                    else {
                      for (piVar5 = (int *)piVar13[2]; piVar18 = piVar13, piVar5 != (int *)0x0;
                          piVar5 = (int *)piVar5[2]) {
                        piVar13 = piVar5;
                      }
                    }
                  }
                  piVar22 = (int *)piVar21[0x10];
                  if (piVar22 != (int *)piVar21[0x11]) {
                    do {
                      iVar10 = *piVar22;
                      if ((((*(int *)(iVar10 + 100) <= *(int *)(iVar10 + 0x6c)) &&
                           (((*(int *)(iVar10 + 100) < *(int *)(iVar10 + 0x6c) ||
                             (*(uint *)(iVar10 + 0x60) <= *(uint *)(iVar10 + 0x68))) &&
                            (*(int *)(iVar10 + 100) <= (int)piStack_60)))) &&
                          ((*(int *)(iVar10 + 100) < (int)piStack_60 ||
                           (*(uint *)(iVar10 + 0x60) <= uStack_e0)))) &&
                         (((int)piStack_60 <= *(int *)(iVar10 + 0x6c) &&
                          (((int)piStack_60 < *(int *)(iVar10 + 0x6c) ||
                           (uStack_e0 <= *(uint *)(iVar10 + 0x68))))))) {
                        piVar18 = (int *)(iVar10 + 0x84);
                        iVar11 = 0;
                        if (0 < (int)(*(int *)(iVar10 + 0x88) - *piVar18 & 0xfffffff8U)) {
                          do {
                            FUN_10467580(auStack_44,*piVar18 + iVar11 * 8);
                            iVar11 = iVar11 + 1;
                            piVar18 = (int *)(*piVar22 + 0x84);
                            piVar21 = piStack_16c;
                          } while (iVar11 < *(int *)(*piVar22 + 0x88) - *piVar18 >> 3);
                        }
                      }
                      piVar22 = piVar22 + 1;
                    } while (piVar22 != (int *)piVar21[0x11]);
                  }
                  piVar22 = (int *)piVar21[0x15];
                  while (piVar22 != piVar21 + 0x13) {
                    FUN_10467580(auStack_3c,piVar22 + 4);
                    piVar18 = (int *)piVar22[3];
                    if (piVar18 == (int *)0x0) {
                      piVar18 = (int *)piVar22[1];
                      if (piVar22 == (int *)piVar18[3]) {
                        do {
                          piVar22 = piVar18;
                          piVar18 = (int *)piVar22[1];
                        } while (piVar22 == (int *)piVar18[3]);
                      }
                      if ((int *)piVar22[3] != piVar18) {
                        piVar22 = piVar18;
                      }
                    }
                    else {
                      for (piVar13 = (int *)piVar18[2]; piVar22 = piVar18, piVar13 != (int *)0x0;
                          piVar13 = (int *)piVar13[2]) {
                        piVar18 = piVar13;
                      }
                    }
                  }
                  if (((uint)piStack_28 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_2c + 8))(&piStack_2c,ppuStack_24);
                  }
                }
              }
            }
          }
LAB_10842cff:
          apiStack_164[0] = (int *)((int)apiStack_164[0] + 1);
        } while ((int)apiStack_164[0] < aiStack_dc[0]);
      }
      uStack_7c = 0;
      piStack_78 = (int *)0x0;
      FUN_11a98a70(&uStack_7c);
      ppiVar30 = &piStack_a0;
      piStack_a0 = (int *)0x0;
      uStack_9c = 0;
      FUN_11a98a70(ppiVar30);
      puVar19 = puStack_144;
      if (puStack_144 != &local_14c) {
        do {
          uVar2 = puVar19[4];
          pppppuStack_104 = (undefined4 ******)0x0;
          uStack_100 = 3;
          uStack_fc = uVar2;
          (**(code **)(*piStack_84 + 0x3c))(uStack_7c,&pppppuStack_104);
          iVar10 = FUN_10254130(uVar2);
          if (iVar10 != 0) {
            ppuStack_24 = &puStack_34;
            puStack_34 = (undefined1 *)((uint)puStack_34 & 0xffffff00);
            ppuStack_20 = ppuStack_24;
            FUN_100e5aa0(ppuStack_24);
            FUN_11a98e10(&pppppuStack_108,ppuStack_24);
            if ((piStack_2c != &iStack_40) && (piStack_2c != (int *)0x0)) {
              FUN_10c3d5d0(piStack_2c);
            }
            (**(code **)(*piStack_b0 + 0x3c))(uStack_a8,&ppppuStack_110);
          }
          if ((uStack_100 >> 6 & 1) != 0) {
            (*(code *)(*pppppuStack_104)[2])(&pppppuStack_104,uStack_fc);
          }
          puVar14 = (undefined4 *)puVar19[3];
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)puVar19[1];
            if (puVar19 == (undefined4 *)puVar14[3]) {
              do {
                puVar19 = puVar14;
                puVar14 = (undefined4 *)puVar19[1];
              } while (puVar19 == (undefined4 *)puVar14[3]);
            }
            if ((undefined4 *)puVar19[3] != puVar14) {
              puVar19 = puVar14;
            }
          }
          else {
            for (puVar6 = (undefined4 *)puVar14[2]; puVar19 = puVar14, puVar6 != (undefined4 *)0x0;
                puVar6 = (undefined4 *)puVar6[2]) {
              puVar14 = puVar6;
            }
          }
        } while (puVar19 != &local_14c);
      }
      puVar19 = &uStack_c4;
      uStack_c4 = 0;
      uStack_c0 = 0;
      FUN_11a98a70(puVar19);
      puVar28 = &uStack_e0;
      uStack_e0 = 0;
      aiStack_dc[0] = 0;
      FUN_11a98a70();
      bVar29 = (byte)puVar19;
      pppppppuVar20 = (undefined4 *******)ppppppuStack_11c;
      if ((undefined4 *******)ppppppuStack_11c != &ppppppuStack_124) {
        do {
          ppppppuVar12 = pppppppuVar20[4];
          pppppuStack_10c = (undefined4 ******)0x0;
          pppppuStack_108 = (undefined4 ******)0x3;
          pppppuStack_104 = ppppppuVar12;
          (**(code **)(*piStack_cc + 0x3c))(uStack_c4,&pppppuStack_10c);
          puVar14 = (undefined4 *)CCurrencyInfo__GetManager();
          puVar14 = (undefined4 *)*puVar14;
          if ((puVar14 == (undefined4 *)0x0) &&
             (puVar14 = (undefined4 *)CInfoManager__FindByName(&stack0xfffffe88,"CCurrencyInfo",0),
             puVar14 == (undefined4 *)0x0)) {
            if ((DAT_123bf3b4 & 1) == 0) {
              DAT_123bf3f4 = 0;
              DAT_123bf404 = 0;
              uRam123bf408 = 0;
              _DAT_123bf40c = 0;
              DAT_123bf410 = 0;
              DAT_123bf3b4 = DAT_123bf3b4 | 1;
              DAT_123bf3f0 = &PTR_FUN_11dcf090;
              DAT_123bf414 = _DAT_11de9ae0;
              DAT_123bf418 = _UNK_11de9ae4;
              uRam123bf41c = _UNK_11de9ae8;
              DAT_123bf420 = _UNK_11de9aec;
              DAT_123bf424 = 1;
              DAT_123bf3f8 = puVar14;
              _DAT_123bf3fc = puVar14;
              _DAT_123bf400 = puVar14;
              FUN_11a8911f(&LAB_11c726d0);
            }
            puVar14 = &DAT_123bf3f0;
          }
          unaff_DI = 0xa8;
          if ((ppppppuVar12 == (undefined4 ******)0xffffffff) ||
             ((((ppppppuVar12 == (undefined4 ******)0x0 && (puVar14[0xc] != 0)) ||
               (iStack_ec = puVar14[10], iStack_ec == 0)) ||
              ((iVar10 = (int)ppppppuVar12 - puVar14[0xc], iVar10 < 0 || ((int)puVar14[9] <= iVar10)
               ))))) {
LAB_10843039:
            iVar10 = 0;
          }
          else {
            iVar11 = *(int *)(puVar14[8] + (iVar10 / iStack_ec) * 4);
            if (iVar11 == 0) goto LAB_10843039;
            iVar10 = *(int *)(iVar11 + (iVar10 % iStack_ec) * 4);
          }
          if (iVar10 != 0) {
            piStack_2c = (int *)auStack_3c;
            auStack_3c[0] = 0;
            piStack_28 = piStack_2c;
            FUN_100e5aa0(piStack_2c);
            FUN_11a98e10(&ppppuStack_110,piStack_2c);
            if ((puStack_34 != auStack_48) && (puStack_34 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_34);
            }
            (**(code **)(*piStack_f0 + 0x3c))(uStack_e8,&iStack_118);
          }
          if (((uint)pppppuStack_108 >> 6 & 1) != 0) {
            (*(code *)(*pppppuStack_10c)[2])(&pppppuStack_10c,pppppuStack_104);
          }
          bVar29 = (byte)puVar19;
          pppppppuVar15 = (undefined4 *******)pppppppuVar20[3];
          if (pppppppuVar15 == (undefined4 *******)0x0) {
            pppppppuVar15 = (undefined4 *******)pppppppuVar20[1];
            if (pppppppuVar20 == (undefined4 *******)pppppppuVar15[3]) {
              do {
                pppppppuVar20 = pppppppuVar15;
                pppppppuVar15 = (undefined4 *******)pppppppuVar20[1];
              } while (pppppppuVar20 == (undefined4 *******)pppppppuVar15[3]);
            }
            if ((undefined4 *******)pppppppuVar20[3] != pppppppuVar15) {
              pppppppuVar20 = pppppppuVar15;
            }
          }
          else {
            for (pppppppuVar7 = (undefined4 *******)pppppppuVar15[2]; pppppppuVar20 = pppppppuVar15,
                pppppppuVar7 != (undefined4 *******)0x0;
                pppppppuVar7 = (undefined4 *******)pppppppuVar7[2]) {
              pppppppuVar15 = pppppppuVar7;
            }
          }
        } while (pppppppuVar20 != &ppppppuStack_124);
      }
      puVar27 = auStack_8c;
      bVar26 = 0xf0;
      piVar22 = apiStack_164[0];
      (**(code **)(*piStack_16c + 0x14))
                (apiStack_164[0],"itemIdArr",puVar27,((byte)piStack_168 & 0x8f) == 10);
      puVar25 = auStack_bc;
      bVar24 = 0xfc;
      (*(code *)(*ppiVar31)[5])(unaff_ESI,"itemNameArr",puVar25,(unaff_DI & 0x8f) == 10);
      (**(code **)(*puVar28 + 0x14))(ppiVar30,"spIdArr",&iStack_ec,(bVar29 & 0x8f) == 10);
      (**(code **)(*piVar22 + 0x14))(puVar27,"spNameArr",&ppppuStack_114,(bVar26 & 0x8f) == 10);
      (**(code **)(*unaff_ESI + 0x14))(puVar25,"validShopIDs",auStack_ac,(bVar24 & 0x8f) == 10);
      if (((uint)piStack_cc >> 6 & 1) != 0) {
        (**(code **)(*piStack_d0 + 8))(&piStack_d0,uStack_c8);
        piStack_d0 = (int *)0x0;
      }
      piStack_cc = (int *)0x0;
      if ((uStack_b4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_b8 + 8))(&piStack_b8,piStack_b0);
        piStack_b8 = (int *)0x0;
      }
      uStack_b4 = 0;
      if ((uStack_94 >> 6 & 1) != 0) {
        (**(code **)(*piStack_98 + 8))(&piStack_98,uStack_90);
        piStack_98 = (int *)0x0;
      }
      uStack_94 = 0;
      if ((uStack_74 >> 6 & 1) != 0) {
        (**(code **)(*piStack_78 + 8))(&piStack_78,uStack_70);
        piStack_78 = (int *)0x0;
      }
      uStack_74 = 0;
      ppppppuVar12 = (undefined4 ******)pppppuStack_10c;
      if (uStack_100 != 0) {
        while (ppppppuVar12 != (undefined4 ******)0x0) {
          FUN_10463ae0(ppppppuVar12[3]);
          ppppppuVar16 = (undefined4 ******)ppppppuVar12[2];
          FUN_10c3d5d0(ppppppuVar12);
          ppppppuVar12 = ppppppuVar16;
        }
        pppppuStack_108 = &ppppuStack_110;
        pppppuStack_10c = (undefined4 ******)0x0;
        uStack_100 = 0;
        pppppuStack_104 = pppppuStack_108;
      }
      ppuVar8 = ppuStack_13c;
      if (iStack_130 != 0) {
        while (ppuVar8 != (undefined4 **)0x0) {
          FUN_10463ae0(ppuVar8[3]);
          ppuVar3 = (undefined4 **)ppuVar8[2];
          FUN_10c3d5d0(ppuVar8);
          ppuVar8 = ppuVar3;
        }
        ppuStack_138 = &puStack_140;
        ppuStack_13c = (undefined4 **)0x0;
        iStack_130 = 0;
        ppuStack_134 = ppuStack_138;
      }
      pppppppuVar20 = (undefined4 *******)ppppppuStack_124;
      if (iStack_118 != 0) {
        while (pppppppuVar20 != (undefined4 *******)0x0) {
          FUN_10463ae0(pppppppuVar20[3]);
          pppppppuVar15 = (undefined4 *******)pppppppuVar20[2];
          FUN_10c3d5d0(pppppppuVar20);
          pppppppuVar20 = pppppppuVar15;
        }
        ppppppuStack_120 = &pppppuStack_128;
        ppppppuStack_124 = (undefined4 *******)0x0;
        iStack_118 = 0;
        ppppppuStack_11c = ppppppuStack_120;
      }
      if ((uStack_54 >> 6 & 1) != 0) {
        (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
        piStack_58 = (int *)0x0;
      }
      uStack_54 = 0;
    }
    if ((local_154 >> 6 & 1) != 0) {
      (**(code **)(*local_158 + 8))(&local_158,local_150);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10843460 @ 10843460  size=3102 ===== */
// calls: CPet::SetName, CCurrencyInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CURRENCY_VO_CLASSNAME"
//   "currency_silver"
//   "nCurrencyID"
//   "strIconPath"
//   "strName"
//   "strTips"
//   "nCount"
//   "currency_gold"
//   "CCurrencyInfo"
//   "nAttrID"
//   "nCountMax"
//   "nCount2"
//   "nCountMax2"
//   "MatchEntry"
//   "currencyList"

/* WARNING: Removing unreachable block (ram,0x10843957) */
/* WARNING: Removing unreachable block (ram,0x10843dba) */
/* [RE-AUTO c0]
   calls: CCurrencyInfo::GetManagers
   strings:
     ""CURRENCY_VO_CLASSNAME""
     ""currency_silver""
     ""nCurrencyID""
     ""strIconPath""
     ""strName""
     ""strTips""
     ""nCount""
     ""currency_gold""
     ""CCurrencyInfo""
     ""nAttrID"" */

void FUN_10843460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  undefined *puVar8;
  undefined ******ppppppuVar9;
  undefined *puVar10;
  undefined ******ppppppuVar11;
  undefined ******ppppppuVar12;
  undefined *****pppppuStack_12c;
  undefined4 uStack_128;
  char *pcStack_124;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_11c;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_114;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_10c;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_104;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_fc;
  undefined *****pppppuStack_f8;
  undefined ****ppppuStack_f4;
  undefined *****pppppuStack_f0;
  int *piStack_ec;
  undefined *****pppppuStack_e8;
  undefined *****pppppuStack_e4;
  int aiStack_d4 [2];
  undefined ****ppppuStack_cc;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined *****pppppuStack_b8;
  undefined *****pppppuStack_b4;
  uint uStack_b0;
  undefined *****pppppuStack_ac;
  undefined4 local_a8;
  int *piStack_a4;
  undefined *****pppppuStack_9c;
  undefined ****ppppuStack_98;
  undefined ****ppppuStack_94;
  undefined1 auStack_90 [8];
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_84;
  undefined *****pppppuStack_80;
  undefined ****ppppuStack_7c;
  undefined ****local_70;
  undefined *****local_6c;
  undefined *****local_68;
  undefined ****local_64;
  undefined ****local_60;
  undefined *****pppppuStack_5c;
  undefined *****pppppuStack_58;
  undefined *****pppppuStack_54;
  undefined *****pppppuStack_50;
  undefined ****ppppuStack_4c;
  undefined *****pppppuStack_48;
  undefined *****pppppuStack_40;
  undefined *****pppppuStack_3c;
  undefined *****pppppuStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)aiStack_d4;
  local_a8 = param_2;
  if (param_5 < 1) goto LAB_10844067;
  local_70 = (undefined ****)0x0;
  local_6c = (undefined *****)param_4[1];
  local_64 = (undefined ****)param_4[3];
  local_68 = (undefined *****)param_4[2];
  local_60 = (undefined ****)param_4[4];
  if (((uint)local_6c >> 6 & 1) != 0) {
    local_70 = (undefined ****)*param_4;
    pppppuStack_e8 = &local_70;
    piStack_ec = (int *)0x108434d1;
    pppppuStack_e4 = local_68;
    (*(code *)(*local_70)[1])();
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    pppppuStack_e4 = (undefined *****)0x10843502;
    ppppuStack_cc = (undefined ****)(**(code **)(*piVar1 + 0xb4))();
    if ((undefined *****)ppppuStack_cc != (undefined *****)0x0) {
      pppppuStack_e8 = (undefined *****)&pppppuStack_50;
      pppppuStack_50 = (undefined *****)0x0;
      aiStack_d4[0] = CONCAT31(aiStack_d4[0]._1_3_,((byte)local_6c & 0x8f) == 10);
      ppppuStack_4c = (undefined ****)0x0;
      pppppuStack_e4 = (undefined *****)aiStack_d4[0];
      piStack_a4 = (int *)0x0;
      piStack_ec = (int *)0x11dcf6b0;
      pppppuStack_f0 = local_68;
      ppppuStack_f4 = (undefined ****)0x10843559;
      cVar3 = (*(code *)(*local_70)[4])();
      ppppppuVar12 = (undefined ******)0x0;
      if (((cVar3 != '\0') && (((byte)pppppuStack_5c & 0x8f) == 6)) &&
         (ppppppuVar12 = (undefined ******)pppppuStack_58, pppppuStack_b4 = pppppuStack_58,
         ((uint)pppppuStack_5c >> 6 & 1) != 0)) {
        pppppuStack_b4 = (undefined *****)*pppppuStack_58;
        ppppppuVar12 = (undefined ******)pppppuStack_b4;
      }
      ppppuStack_f4 = (undefined ****)&ppppuStack_98;
      ppppuStack_98 = (undefined ****)0x0;
      ppppuStack_94 = (undefined ****)0x0;
      pppppuStack_f8 = (undefined *****)0x108435a9;
      FUN_11a98a70();
      if (DAT_123bcfd4 != '\0') {
        pppppuStack_f8 = (undefined *****)0x0;
        pppppuStack_fc = (undefined *****)0x0;
        pppppuStack_104 = (undefined *****)&pppppuStack_b4;
        pppppuStack_b4 = (undefined *****)0x0;
        uStack_b0 = 0;
        pppppuStack_108 = (undefined *****)0x108435d7;
        pppppuStack_100 = (undefined *****)ppppppuVar12;
        FUN_11a98de0();
        pppppuStack_108 = (undefined *****)0x11dcf688;
        pppppuStack_f8 = (undefined *****)0x0;
        pppppuStack_10c = (undefined *****)0x108435ed;
        CPet__SetName();
        pppppuStack_10c = (undefined *****)&DAT_11dcf698;
        pppppuStack_f8 = (undefined *****)0x0;
        pppppuStack_110 = (undefined *****)0x10843603;
        CPet__SetName();
        pppppuStack_110 = (undefined *****)0x0;
        pppppuStack_114 = (undefined *****)0x11dcf674;
        pppppuStack_118 = (undefined *****)0x1084361d;
        FUN_104d1550();
        local_64 = (undefined ****)((uint)local_64 & 0xffffff00);
        pppppuStack_110 = &local_64;
        pppppuStack_114 = (undefined *****)0x10843647;
        pppppuStack_54 = pppppuStack_110;
        pppppuStack_50 = pppppuStack_110;
        FUN_100e5aa0();
        pppppuStack_114 = pppppuStack_54;
        pppppuStack_118 = (undefined *****)0x11dbdc6c;
        pppppuStack_11c = (undefined *****)0x1084365e;
        FUN_104d1670();
        if (((undefined ******)pppppuStack_54 != &local_68) &&
           ((undefined ******)pppppuStack_54 != (undefined ******)0x0)) {
          pppppuStack_114 = pppppuStack_54;
          pppppuStack_118 = (undefined *****)0x1084367d;
          FUN_10c3d5d0();
        }
        pppppuStack_114 = (undefined *****)&local_68;
        local_68 = (undefined *****)((uint)local_68 & 0xffffff00);
        pppppuStack_118 = (undefined *****)0x108436a7;
        pppppuStack_58 = pppppuStack_114;
        pppppuStack_54 = pppppuStack_114;
        FUN_100e5aa0();
        pppppuStack_118 = pppppuStack_58;
        pppppuStack_11c = (undefined *****)0x11dbf948;
        pppppuStack_120 = (undefined *****)0x108436be;
        FUN_104d1670();
        if (((undefined ******)pppppuStack_58 != &local_6c) &&
           ((undefined ******)pppppuStack_58 != (undefined ******)0x0)) {
          pppppuStack_118 = pppppuStack_58;
          pppppuStack_11c = (undefined *****)0x108436dd;
          FUN_10c3d5d0();
        }
        pppppuStack_118 = (undefined *****)0x0;
        pppppuStack_11c = (undefined *****)0x571;
        pppppuStack_120 = (undefined *****)&pppppuStack_88;
        pcStack_124 = &stack0xffffff20;
        uStack_128 = 0x108436f9;
        FUN_1024ebe0();
        local_6c = (undefined *****)((uint)local_6c & 0xffffff00);
        pppppuStack_118 = (undefined *****)&local_6c;
        pppppuStack_11c = (undefined *****)0x10843723;
        pppppuStack_5c = pppppuStack_118;
        pppppuStack_58 = pppppuStack_118;
        FUN_100e5aa0();
        pppppuStack_11c = pppppuStack_5c;
        pppppuStack_120 = (undefined *****)0x11dcf680;
        pcStack_124 = (char *)0x1084373a;
        FUN_104d1670();
        if ((pppppuStack_5c != &local_70) &&
           ((undefined ******)pppppuStack_5c != (undefined ******)0x0)) {
          pppppuStack_11c = pppppuStack_5c;
          pppppuStack_120 = (undefined *****)0x10843759;
          FUN_10c3d5d0();
        }
        pppppuStack_11c = (undefined *****)0x10843767;
        pppppuStack_11c = (undefined *****)FUN_1025b060();
        pppppuStack_120 = (undefined *****)0x11dcf71c;
        pcStack_124 = (char *)0x10843778;
        FUN_104d1550();
        pppppuStack_11c = (undefined *****)&stack0xffffff28;
        pppppuStack_120 = pppppuStack_b8;
        pcStack_124 = "j";
        (**(code **)(*piStack_c0 + 0x3c))();
        pcStack_124 = (char *)0x0;
        uStack_128 = 0;
        pppppuStack_108 = (undefined *****)0x0;
        pppppuStack_104 = (undefined *****)0x0;
        pppppuStack_12c = (undefined *****)ppppppuVar12;
        FUN_11a98de0(&pppppuStack_108);
        CPet__SetName("currency_gold");
        CPet__SetName(&DAT_11dcf70c);
        FUN_104d1550("nCurrencyID",0);
        auStack_90[0] = 0;
        pppppuStack_80 = (undefined *****)auStack_90;
        ppppuStack_7c = (undefined ****)pppppuStack_80;
        FUN_100e5aa0(pppppuStack_80);
        FUN_104d1670("strIconPath",pppppuStack_80);
        if ((pppppuStack_80 != &ppppuStack_94) && (pppppuStack_80 != (undefined *****)0x0)) {
          FUN_10c3d5d0(pppppuStack_80);
        }
        pppppuStack_84 = &ppppuStack_94;
        ppppuStack_94 = (undefined ****)((uint)ppppuStack_94 & 0xffffff00);
        pppppuStack_80 = pppppuStack_84;
        FUN_100e5aa0(pppppuStack_84);
        FUN_104d1670("strName",pppppuStack_84);
        if ((pppppuStack_84 != &ppppuStack_98) &&
           ((undefined ******)pppppuStack_84 != (undefined ******)0x0)) {
          FUN_10c3d5d0(pppppuStack_84);
        }
        FUN_1024ebe0(&pppppuStack_10c,&pppppuStack_b4,0x572,0);
        ppppuStack_98 = (undefined ****)((uint)ppppuStack_98 & 0xffffff00);
        pppppuStack_88 = &ppppuStack_98;
        pppppuStack_84 = pppppuStack_88;
        FUN_100e5aa0(pppppuStack_88);
        FUN_104d1670("strTips",pppppuStack_88);
        if (((undefined ******)pppppuStack_88 != &pppppuStack_9c) &&
           ((undefined ******)pppppuStack_88 != (undefined ******)0x0)) {
          FUN_10c3d5d0(pppppuStack_88);
        }
        uVar4 = FUN_1025b060();
        FUN_104d1550("nCount",uVar4);
        (**(code **)(*piStack_ec + 0x3c))(pppppuStack_e4,&pppppuStack_12c);
        if (piStack_c0 != (int *)0x0) {
          pppppuStack_f8 = (undefined *****)piStack_c0;
          pppppuStack_fc = (undefined *****)0x10843987;
          FUN_10c3da30();
        }
        if (pppppuStack_e4 != (undefined *****)0x0) {
          pppppuStack_f8 = pppppuStack_e4;
          pppppuStack_fc = (undefined *****)0x10843998;
          FUN_10c3da30();
        }
        if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
          pppppuStack_f8 = pppppuStack_e8;
          pppppuStack_fc = (undefined *****)0x108439a9;
          FUN_10c3da30();
        }
        if ((uStack_b0 >> 6 & 1) != 0) {
          pppppuStack_fc = (undefined *****)&pppppuStack_b4;
          pppppuStack_f8 = pppppuStack_ac;
          pppppuStack_100 = (undefined *****)0x108439c9;
          (*(code *)(*pppppuStack_b4)[2])();
        }
      }
      ppppppuVar12 = (undefined ******)0x0;
LAB_108439cb:
      do {
        pppppuStack_e8 = (undefined *****)&PTR_FUN_11dcefd4;
        pppppuStack_f8 = (undefined *****)0x108439dc;
        pppppuStack_e4 = (undefined *****)ppppppuVar12;
        puVar5 = (undefined4 *)CCurrencyInfo__GetManager();
        pppppuStack_f8 = (undefined *****)*puVar5;
        if (pppppuStack_f8 == (undefined *****)0x0) {
          pppppuStack_100 = (undefined *****)&pppppuStack_e8;
          pppppuStack_fc = (undefined *****)0x11dcf124;
          pppppuStack_104 = (undefined *****)0x108439f2;
          pppppuStack_f8 = (undefined *****)CInfoManager__FindByName();
          if (pppppuStack_f8 == (undefined *****)0x0) {
            if ((DAT_123bf3b4 & 1) == 0) {
              DAT_123bf3b4 = DAT_123bf3b4 | 1;
              pppppuStack_f8 = (undefined *****)0x10843a11;
              FUN_10848b50();
              pppppuStack_f8 = (undefined *****)&LAB_11c726d0;
              pppppuStack_fc = (undefined *****)0x10843a1b;
              FUN_11a8911f();
            }
            pppppuStack_f8 = (undefined *****)&DAT_123bf3f0;
          }
        }
        pppppuStack_e8 = (undefined *****)&PTR_FUN_11da54a8;
        iVar6 = (int)*pppppuStack_f8;
        pppppuStack_f8 = (undefined *****)0x10843a30;
        iVar6 = (**(code **)(iVar6 + 0x28))();
        puVar10 = DAT_123bcff8;
        if (iVar6 <= (int)ppppppuVar12) goto joined_r0x10843dde;
        pppppuStack_fc = (undefined *****)0x10843a3e;
        iVar6 = FUN_10848370();
        if (((int)ppppppuVar12 < 0) ||
           (*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x14) >> 2 <= (int)ppppppuVar12)) {
          ppppppuVar11 = (undefined ******)0x0;
        }
        else {
          ppppppuVar11 = *(undefined *******)(*(int *)(iVar6 + 0x14) + (int)ppppppuVar12 * 4);
        }
        if ((ppppppuVar11 != (undefined ******)0x0) && (DAT_123bcfdc != (undefined ******)0x0)) {
          ppppppuVar9 = (undefined ******)&DAT_123bcfd8;
          ppppppuVar7 = DAT_123bcfdc;
          do {
            if ((int)ppppppuVar7[4] < (int)ppppppuVar11[0xe]) {
              pppppuStack_f8 = ppppppuVar7[3];
            }
            else {
              pppppuStack_f8 = ppppppuVar7[2];
              ppppppuVar9 = ppppppuVar7;
            }
            ppppppuVar7 = (undefined ******)pppppuStack_f8;
          } while ((undefined ******)pppppuStack_f8 != (undefined ******)0x0);
          if ((ppppppuVar9 != (undefined ******)&DAT_123bcfd8) &&
             ((int)ppppppuVar9[4] <= (int)ppppppuVar11[0xe])) {
            pppppuStack_100 = pppppuStack_b8;
            pppppuStack_104 = (undefined *****)&stack0xffffff24;
            pppppuStack_108 = (undefined *****)0x10843ac2;
            pppppuStack_fc = pppppuStack_f8;
            pppppuStack_e8 = (undefined *****)ppppppuVar11;
            FUN_11a98de0();
            pppppuStack_108 = ppppppuVar11[4];
            pppppuStack_10c = (undefined *****)0x11dcf674;
            pppppuStack_110 = (undefined *****)0x10843ad5;
            FUN_104d1550();
            pppppuStack_110 = ppppppuVar11[5];
            pppppuStack_114 = (undefined *****)0x11dcf714;
            pppppuStack_118 = (undefined *****)0x10843ae8;
            FUN_104d1550();
            pppppuStack_118 = ppppppuVar11[0xc];
            pppppuStack_11c = (undefined *****)0x11dbdc6c;
            pppppuStack_120 = (undefined *****)0x10843afb;
            FUN_104d1670();
            pppppuStack_3c = (undefined *****)&pppppuStack_5c;
            pppppuStack_5c = (undefined *****)((uint)pppppuStack_5c & 0xffff0000);
            pppppuStack_108 = (undefined *****)&pppppuStack_5c;
            pppppuStack_10c = (undefined *****)0x10843b2d;
            pppppuStack_38 = pppppuStack_3c;
            FUN_100e5b60();
            pppppuStack_10c = pppppuStack_3c;
            pppppuStack_110 = (undefined *****)0x11dbf948;
            pppppuStack_114 = (undefined *****)0x10843b44;
            FUN_104d1700();
            if ((pppppuStack_3c != &local_60) &&
               ((undefined ******)pppppuStack_3c != (undefined ******)0x0)) {
              pppppuStack_10c = pppppuStack_3c;
              pppppuStack_110 = (undefined *****)0x10843b63;
              FUN_10c3d5d0();
            }
            pppppuStack_40 = &local_60;
            local_60 = (undefined ****)((uint)local_60 & 0xffff0000);
            pppppuStack_10c = &local_60;
            pppppuStack_110 = (undefined *****)0x10843b95;
            pppppuStack_3c = pppppuStack_40;
            FUN_100e5b60();
            pppppuStack_110 = pppppuStack_40;
            pppppuStack_114 = (undefined *****)0x11dcf680;
            pppppuStack_118 = (undefined *****)0x10843bac;
            FUN_104d1700();
            if ((pppppuStack_40 != &local_64) &&
               ((undefined ******)pppppuStack_40 != (undefined ******)0x0)) {
              pppppuStack_110 = pppppuStack_40;
              pppppuStack_114 = (undefined *****)0x10843bcb;
              FUN_10c3d5d0();
            }
            if (ppppppuVar11[4] == (undefined *****)0x3) {
              pppppuStack_110 = (undefined *****)0x10843be9;
              pppppuStack_110 = (undefined *****)FUN_1025b060();
              pppppuStack_114 = (undefined *****)0x11dcf71c;
              pppppuStack_118 = (undefined *****)0x10843bfa;
              FUN_104d1550();
              pppppuStack_110 = (undefined *****)0x10843c08;
              pppppuStack_110 = (undefined *****)FUN_1134c890();
              pppppuStack_114 = (undefined *****)0x11dcf6f8;
              pppppuStack_118 = (undefined *****)0x10843c19;
              FUN_104d1550();
              pppppuStack_110 = (undefined *****)0x10843c29;
              pppppuStack_110 = (undefined *****)FUN_1025b060();
              pppppuStack_114 = (undefined *****)0x11dcf704;
              pppppuStack_118 = (undefined *****)0x10843c3a;
              FUN_104d1550();
              pppppuStack_110 = (undefined *****)0x10843c48;
              pppppuStack_110 = (undefined *****)FUN_1134c8b0();
              pppppuStack_114 = (undefined *****)0x11dcf6dc;
              pppppuStack_118 = (undefined *****)0x10843c59;
              FUN_104d1550();
              ppppppuVar12 = (undefined ******)pppppuStack_fc;
            }
            else if (ppppppuVar11[4] == (undefined *****)0x4) {
              pppppuStack_110 = (undefined *****)0x10843c73;
              iVar6 = FUN_117fa140();
              ppppppuVar12 = *(undefined *******)(iVar6 + 0xa4);
              pppppuStack_110 = (undefined *****)0x10843c7e;
              iVar6 = FUN_117fa140();
              uVar4 = *(undefined4 *)(iVar6 + 0xa0);
              pppppuStack_110 = (undefined *****)0x10843c90;
              iVar6 = (*(code *)(*pppppuStack_f8)[0x139])();
              pppppuStack_110 = (undefined *****)0x10843ca1;
              pppppuStack_110 = (undefined *****)FUN_1025b060();
              pppppuStack_114 = (undefined *****)0x11dcf71c;
              pppppuStack_118 = (undefined *****)0x10843cb4;
              FUN_104d1550();
              pppppuStack_11c = (undefined *****)0x11dcf6f8;
              pppppuStack_120 = (undefined *****)0x10843cc9;
              pppppuStack_118 = (undefined *****)ppppppuVar12;
              FUN_104d1550();
              pppppuStack_120 = *(undefined ******)(iVar6 + 0x14);
              pcStack_124 = "nCount2";
              uStack_128 = 0x10843cdc;
              FUN_104d1550();
              pppppuStack_12c = (undefined *****)0x11dcf6dc;
              uStack_128 = uVar4;
              FUN_104d1550();
              ppppppuVar11 = (undefined ******)pppppuStack_100;
              ppppppuVar12 = (undefined ******)pppppuStack_fc;
            }
            else {
              pppppuStack_114 = &local_64;
              pppppuStack_110 = ppppppuVar11[5];
              pppppuStack_118 = (undefined *****)0x10843d14;
              FUN_11348ac0();
              pppppuStack_118 = local_6c;
              pppppuStack_11c = (undefined *****)0x11dcf71c;
              pppppuStack_120 = (undefined *****)0x10843d2b;
              FUN_104d1550();
              if (((undefined ******)pppppuStack_48 != &pppppuStack_5c) &&
                 ((undefined ******)pppppuStack_48 != (undefined ******)0x0)) {
                pppppuStack_110 = pppppuStack_48;
                pppppuStack_114 = (undefined *****)0x10843d4a;
                FUN_10c3d5d0();
              }
            }
            if (ppppppuVar11[4] == (undefined *****)0x4) {
              if ((DAT_123c2d20 & 1) == 0) {
                DAT_123c2d20 = DAT_123c2d20 | 1;
                pppppuStack_110 = (undefined *****)0x10843d69;
                FUN_104d02c0();
                pppppuStack_110 = (undefined *****)&LAB_11c6e910;
                pppppuStack_114 = (undefined *****)0x10843d73;
                FUN_11a8911f();
              }
              pppppuStack_110 = (undefined *****)0x11d9daf8;
              pppppuStack_114 = (undefined *****)0x10843d8a;
              cVar3 = (**(code **)(DAT_123c2d28 + 0x54))();
              if (cVar3 == '\0') {
                pppppuStack_110 = (undefined *****)0x10843d97;
                FUN_104d7c10();
                ppppppuVar12 = (undefined ******)((int)ppppppuVar12 + 1);
                goto LAB_108439cb;
              }
            }
            pppppuStack_110 = &ppppuStack_f4;
            pppppuStack_114 = pppppuStack_ac;
            pppppuStack_118 = (undefined *****)0x10843daf;
            (*(code *)(*pppppuStack_b4)[0xf])();
          }
        }
        ppppppuVar12 = (undefined ******)((int)ppppppuVar12 + 1);
      } while( true );
    }
  }
  goto LAB_1084404a;
joined_r0x10843dde:
  while (puVar10 != &DAT_123bcff0) {
    pppppuStack_f8 = (undefined *****)0x0;
    pppppuStack_fc = (undefined *****)0x0;
    pppppuStack_104 = (undefined *****)&pppppuStack_b4;
    pppppuStack_b4 = (undefined *****)0x0;
    uStack_b0 = 0;
    pppppuStack_108 = (undefined *****)0x10843e08;
    FUN_11a98de0();
    pppppuStack_108 = *(undefined ******)(puVar10 + 0x10);
    pppppuStack_10c = (undefined *****)0x10843e15;
    ppppuStack_cc = (undefined ****)pppppuStack_108;
    iVar6 = FUN_10254130();
    if (iVar6 != 0) {
      pppppuStack_f8 = (undefined *****)uStack_bc;
      pppppuStack_fc = (undefined *****)0x11dcf674;
      pppppuStack_100 = (undefined *****)0x10843e36;
      FUN_104d1550();
      pppppuStack_100 = *(undefined ******)(iVar6 + 0xb4);
      pppppuStack_104 = (undefined *****)0x11dbdc6c;
      pppppuStack_108 = (undefined *****)0x10843e4c;
      FUN_104d1670();
      ppppuStack_4c = (undefined ****)((uint)ppppuStack_4c & 0xffffff00);
      pppppuStack_f8 = &ppppuStack_4c;
      pppppuStack_fc = (undefined *****)0x10843e75;
      pppppuStack_3c = pppppuStack_f8;
      pppppuStack_38 = pppppuStack_f8;
      FUN_100e5aa0();
      pppppuStack_fc = pppppuStack_3c;
      pppppuStack_100 = (undefined *****)0x11dbf948;
      pppppuStack_104 = (undefined *****)0x10843e8c;
      FUN_104d1670();
      if (((undefined ******)pppppuStack_3c != &pppppuStack_50) &&
         ((undefined ******)pppppuStack_3c != (undefined ******)0x0)) {
        pppppuStack_fc = pppppuStack_3c;
        pppppuStack_100 = (undefined *****)0x10843eab;
        FUN_10c3d5d0();
      }
      pppppuStack_fc = (undefined *****)0x10843eb5;
      FUN_116bd4d0();
      pppppuStack_fc = (undefined *****)&pppppuStack_50;
      pppppuStack_50 = (undefined *****)((uint)pppppuStack_50 & 0xffffff00);
      pppppuStack_100 = (undefined *****)0x10843eda;
      pppppuStack_40 = pppppuStack_fc;
      pppppuStack_3c = pppppuStack_fc;
      FUN_100e5aa0();
      pppppuStack_100 = pppppuStack_40;
      pppppuStack_104 = (undefined *****)0x11dcf680;
      pppppuStack_108 = (undefined *****)0x10843ef1;
      FUN_104d1670();
      if (((undefined ******)pppppuStack_40 != &pppppuStack_54) &&
         ((undefined ******)pppppuStack_40 != (undefined ******)0x0)) {
        pppppuStack_100 = pppppuStack_40;
        pppppuStack_104 = (undefined *****)0x10843f10;
        FUN_10c3d5d0();
      }
      pppppuStack_100 = (undefined *****)0x0;
      if ((undefined *****)pppppuStack_e8[0xb47] != (undefined *****)0x0) {
        pppppuStack_100 = (undefined *****)uStack_c4;
        pppppuStack_104 = (undefined *****)0x10843f2c;
        pppppuStack_100 = (undefined *****)FUN_113fa380();
      }
      pppppuStack_104 = (undefined *****)0x11dcf71c;
      pppppuStack_108 = (undefined *****)0x10843f3d;
      FUN_104d1550();
      pppppuStack_100 = (undefined *****)&uStack_bc;
      pppppuStack_104 = pppppuStack_9c;
      pppppuStack_108 = (undefined *****)0x10843f52;
      (**(code **)(*piStack_a4 + 0x3c))();
    }
    if ((uStack_b0 >> 6 & 1) != 0) {
      pppppuStack_fc = (undefined *****)&pppppuStack_b4;
      pppppuStack_f8 = pppppuStack_ac;
      pppppuStack_100 = (undefined *****)0x10843f6f;
      (*(code *)(*pppppuStack_b4)[2])();
    }
    puVar8 = *(undefined **)(puVar10 + 0xc);
    if (puVar8 == (undefined *)0x0) {
      puVar8 = *(undefined **)(puVar10 + 4);
      if (puVar10 == *(undefined **)(puVar8 + 0xc)) {
        do {
          puVar10 = puVar8;
          puVar8 = *(undefined **)(puVar10 + 4);
        } while (puVar10 == *(undefined **)(puVar8 + 0xc));
      }
      if (*(undefined **)(puVar10 + 0xc) != puVar8) {
        puVar10 = puVar8;
      }
    }
    else {
      for (puVar2 = *(undefined **)(puVar8 + 8); puVar10 = puVar8, puVar2 != (undefined *)0x0;
          puVar2 = *(undefined **)(puVar2 + 8)) {
        puVar8 = puVar2;
      }
    }
  }
  pppppuStack_f8 = (undefined *****)(uint)(((byte)pppppuStack_80 & 0x8f) == 10);
  pppppuStack_fc = (undefined *****)&pppppuStack_9c;
  pppppuStack_100 = (undefined *****)0x11dcf6e8;
  pppppuStack_108 = (undefined *****)0x10843fde;
  pppppuStack_104 = (undefined *****)ppppuStack_7c;
  (*(code *)(*pppppuStack_84)[5])();
  if (((uint)pppppuStack_84 >> 6 & 1) != 0) {
    pppppuStack_e8 = (undefined *****)&pppppuStack_88;
    pppppuStack_e4 = pppppuStack_80;
    piStack_ec = (int *)0x10843ffb;
    (*(code *)(*pppppuStack_88)[2])();
    pppppuStack_88 = (undefined *****)0x0;
  }
  pppppuStack_84 = (undefined *****)0x0;
  if (((uint)ppppuStack_4c >> 6 & 1) != 0) {
    pppppuStack_e8 = (undefined *****)&pppppuStack_50;
    pppppuStack_e4 = pppppuStack_48;
    piStack_ec = (int *)0x10844034;
    (*(code *)(*pppppuStack_50)[2])();
    pppppuStack_50 = (undefined *****)0x0;
  }
  ppppuStack_4c = (undefined ****)0x0;
LAB_1084404a:
  if (((uint)local_6c >> 6 & 1) != 0) {
    pppppuStack_e8 = &local_70;
    pppppuStack_e4 = local_68;
    piStack_ec = (int *)0x10844067;
    (*(code *)(*local_70)[2])();
  }
LAB_10844067:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10844080 @ 10844080  size=5417 ===== */
// calls: CPet::SetName, _snprintf, memcpy
// strings:
//   "SALE_ITEM_DATA"
//   "EXCHANGE_DATA_CLASS"
//   "mh_sharemem_addrinfo"
//   "itemLimitType"
//   "isSkillFormula"
//   "isManuFormula"
//   "currentLimitBuyCounts"
//   "hasBeenLearnedSkill"
//   "hasBeenLearnedFormula"
//   "backItem"
//   "SaleItemId"
//   "shopID"
//   "ItemId"
//   "ItemNum"
//   "UnBindGold"
//   "salesCount"
//   "itemClass1"
//   "itemClass2"
//   "currentBindMoney"
//   "currentMoney"

/* [RE-AUTO c0]
   calls: _snprintf, memcpy
   strings:
     ""SALE_ITEM_DATA""
     ""EXCHANGE_DATA_CLASS""
     ""mh_sharemem_addrinfo""
     ""itemLimitType""
     ""isSkillFormula""
     ""isManuFormula""
     ""currentLimitBuyCounts""
     ""hasBeenLearnedSkill""
     ""hasBeenLearnedFormula""
     ""backItem"" */

void __fastcall
FUN_10844080(undefined4 param_1,undefined4 *param_2,int ***param_3,int param_4,int param_5,
            int *param_6)

{
  int **ppiVar1;
  int **ppiVar2;
  bool bVar3;
  undefined8 uVar4;
  int **ppiVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  void *pvVar17;
  int ***pppiVar18;
  undefined *puVar19;
  char *pcVar20;
  int *unaff_EBX;
  uint uVar21;
  int unaff_ESI;
  int *piVar22;
  uint unaff_EDI;
  int ***pppiVar23;
  int **_Src;
  float10 fVar24;
  undefined8 uVar25;
  int ***pppiStack_194;
  int **ppiStack_190;
  int ***pppiStack_18c;
  int ***pppiStack_188;
  int ***pppiStack_184;
  int ***pppiStack_180;
  int ****ppppiStack_17c;
  int ***pppiStack_178;
  int *piStack_174;
  int ****ppppiStack_170;
  int ***pppiStack_16c;
  uint uVar26;
  float *local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int *piStack_150;
  int ***pppiStack_14c;
  int ***pppiStack_148;
  char cStack_141;
  int **ppiStack_140;
  uint uStack_13c;
  int ***local_138;
  int ***pppiStack_134;
  int iStack_128;
  uint uStack_124;
  int *piStack_120;
  int **ppiStack_11c;
  int ***pppiStack_118;
  int ***pppiStack_114;
  int ***local_110;
  int iStack_10c;
  int **ppiStack_108;
  uint uStack_104;
  int ***pppiStack_100;
  uint uStack_f8;
  uint uStack_f0;
  int ***pppiStack_ec;
  int ***pppiStack_e4;
  int **ppiStack_e0;
  undefined1 auStack_dc [4];
  int **ppiStack_d8;
  int **ppiStack_d4;
  int ***pppiStack_d0;
  int ***pppiStack_cc;
  int ***local_c8;
  int ***local_c4;
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *local_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  int **ppiStack_9c;
  int **appiStack_98 [2];
  int **ppiStack_90;
  int **ppiStack_8c;
  int ***pppiStack_88;
  int ***pppiStack_84;
  int **appiStack_80 [4];
  int ***pppiStack_70;
  int ***pppiStack_6c;
  char acStack_68 [92];
  uint local_c;
  
  bVar7 = (byte)unaff_EDI;
  local_c = DAT_11e11390 ^ (uint)&local_15c;
  local_110 = param_3;
  ppppiStack_170 = &local_c8;
  local_ac = param_6;
  local_c8 = (int ***)0x0;
  local_c4 = (int ***)0x0;
  local_138 = (int ***)CONCAT31(local_138._1_3_,((byte)param_2[1] & 0x8f) == 10);
  pppiStack_16c = local_138;
  piStack_174 = (int *)0x11dcf390;
  pppiStack_178 = (int ***)param_2[2];
  ppppiStack_17c = (int ****)0x108440f8;
  cVar6 = (**(code **)(*(int *)*param_2 + 0x10))();
  if ((cVar6 != '\0') && (((byte)ppiStack_d4 & 0x8f) == 6)) {
    if (((uint)ppiStack_d4 >> 6 & 1) == 0) {
      pppiStack_e4 = pppiStack_d0;
    }
    else {
      pppiStack_e4 = (int ***)*pppiStack_d0;
    }
    pppiStack_180 = &ppiStack_d8;
    pppiStack_148 = (int ***)CONCAT31(pppiStack_148._1_3_,((byte)param_2[1] & 0x8f) == 10);
    ppppiStack_17c = (int ****)pppiStack_148;
    pppiStack_184 = (int ***)0x11dcf7a0;
    pppiStack_188 = (int ***)param_2[2];
    pppiStack_18c = (int ***)0x10844163;
    cVar6 = (**(code **)(*(int *)*param_2 + 0x10))();
    if ((cVar6 != '\0') && (((byte)ppiStack_d4 & 0x8f) == 6)) {
      if (((uint)ppiStack_d4 >> 6 & 1) == 0) {
        pppiStack_ec = pppiStack_d0;
      }
      else {
        pppiStack_ec = (int ***)*pppiStack_d0;
      }
      ppppiStack_17c = (int ****)0x108441a7;
      iStack_10c = FUN_107cb5c0();
      iStack_128 = *(int *)(iStack_10c + 0x2afc);
      ppppiStack_17c = (int ****)0x108441ba;
      FUN_1083e700();
      uVar25 = CONCAT44(uStack_158,piStack_150);
      pppiStack_118 = (int ***)0x0;
      pppiStack_114 = (int ***)0x0;
      local_110 = (int ***)0x0;
      local_15c = (float *)*piStack_120;
      if (local_15c != (float *)piStack_120[1]) {
        do {
          uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
          piStack_150 = (int *)uVar25;
          ppppiStack_17c = (int ****)*local_15c;
          pppiStack_180 = (int ***)0x108441e7;
          unaff_ESI = FUN_1052c2d0();
          uVar25 = CONCAT44(uStack_158,piStack_150);
          if (unaff_ESI != 0) {
            ppppiStack_17c = (int ****)0x108441fd;
            uVar25 = FUN_111f8d20();
            unaff_EBX = *(int **)(unaff_ESI + 0x1c);
            uVar26 = unaff_EDI;
            uVar4 = uVar25;
            if (unaff_EBX != *(int **)(unaff_ESI + 0x20)) {
              do {
                iVar13 = (int)((ulonglong)uVar4 >> 0x20);
                uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
                piStack_150 = (int *)uVar25;
                ppiVar1 = (int **)*unaff_EBX;
                unaff_EDI = uVar26;
                ppiStack_11c = ppiVar1;
                if (*(char *)(ppiVar1 + 0x1d) != '\0') {
                  if ((((int)ppiVar1[0x1b] < (int)ppiVar1[0x19]) ||
                      (((int)ppiVar1[0x1b] <= (int)ppiVar1[0x19] && (ppiVar1[0x1a] < ppiVar1[0x18]))
                      )) || (((int)ppiVar1[0x19] <= iVar13 &&
                             (((((int)ppiVar1[0x19] < iVar13 || (ppiVar1[0x18] <= (int *)uVar4)) &&
                               (iVar13 <= (int)ppiVar1[0x1b])) &&
                              ((iVar13 < (int)ppiVar1[0x1b] || ((int *)uVar4 <= ppiVar1[0x1a])))))))
                     ) {
                    if (iStack_128 != 0) {
                      ppppiStack_17c = (int ****)ppiVar1[0xb];
                      pppiStack_180 = (int ***)ppiVar1[10];
                      pppiStack_184 = (int ***)ppiVar1[2];
                      pppiStack_188 = (int ***)ppiVar1[3];
                      pppiStack_18c = (int ***)ppiVar1[0x15];
                      ppiStack_190 = (int **)0x10844288;
                      cVar6 = FUN_114b5d80();
                      uVar25 = CONCAT44(uStack_158,piStack_150);
                      uVar4 = uVar25;
                      if (cVar6 == '\0') goto LAB_108445a1;
                    }
                    uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
                    piStack_150 = (int *)uVar25;
                    uVar4 = uVar25;
                    if (DAT_123bcfd0 != '\0') {
                      uStack_124 = (uint)unaff_EBX & 0xffffff00;
                      unaff_EDI = uVar26 & 0xffffff;
                      pppiStack_14c = (int ***)0x1;
                      cStack_141 = '\0';
                      uStack_154 = uStack_154 & 0xffffff;
                      if (DAT_123bcf9c == '\0') {
                        if (DAT_123bcf9d != '\0') {
                          ppppiStack_17c = (int ****)0x0;
                          pppiStack_180 = (int ***)0x108442d6;
                          fVar24 = (float10)FUN_117dac50();
                          uVar25 = CONCAT44(uStack_158,piStack_150);
                          pppiStack_148 = (int ***)(float)fVar24;
                          uStack_124 = (uint)(0.0 < (float)pppiStack_148);
                        }
                        if ((DAT_123bcfb0 != 0) &&
                           (uVar21 = 0, (int)ppiVar1[0x28] - (int)ppiVar1[0x27] >> 5 != 0)) {
                          piVar22 = ppiVar1[0x27];
                          do {
                            uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
                            piStack_150 = (int *)uVar25;
                            pppiStack_148 = (int ***)*piVar22;
                            ppppiStack_17c = &pppiStack_148;
                            pppiStack_180 = (int ***)&uStack_b4;
                            pppiStack_184 = (int ***)0x10844331;
                            puVar10 = (undefined4 *)FUN_10463b20();
                            uVar25 = CONCAT44(uStack_158,piStack_150);
                            if ((undefined *)*puVar10 != &DAT_123bcfa0) {
                              cStack_141 = '\x01';
                              uVar25 = CONCAT44(uStack_158,piStack_150);
                              break;
                            }
                            uVar21 = uVar21 + 1;
                            piVar22 = piVar22 + 8;
                          } while (uVar21 < (uint)((int)ppiVar1[0x28] - (int)ppiVar1[0x27] >> 5));
                        }
                        if (DAT_123bcfc8 == 0) {
LAB_108443c7:
                          cVar6 = uStack_154._3_1_;
                        }
                        else {
                          uVar21 = 0;
                          if ((int)ppiVar1[0x22] - (int)ppiVar1[0x21] >> 3 != 0) {
                            piVar22 = ppiVar1[0x21];
                            do {
                              puVar19 = &DAT_123bcfb8;
                              puVar11 = DAT_123bcfbc;
                              if (DAT_123bcfbc != (undefined *)0x0) {
                                do {
                                  if (*(int *)(puVar11 + 0x10) < *piVar22) {
                                    puVar12 = *(undefined **)(puVar11 + 0xc);
                                  }
                                  else {
                                    puVar12 = *(undefined **)(puVar11 + 8);
                                    puVar19 = puVar11;
                                  }
                                  puVar11 = puVar12;
                                } while (puVar12 != (undefined *)0x0);
                                if ((puVar19 != &DAT_123bcfb8) &&
                                   (*(int *)(puVar19 + 0x10) <= *piVar22)) {
                                  cVar6 = '\x01';
                                  goto LAB_108443d3;
                                }
                              }
                              uVar21 = uVar21 + 1;
                              piVar22 = piVar22 + 2;
                            } while (uVar21 < (uint)((int)ppiVar1[0x22] - (int)ppiVar1[0x21] >> 3));
                            goto LAB_108443c7;
                          }
                          cVar6 = '\0';
                        }
LAB_108443d3:
                        if ((((char)uStack_124 == '\0') && (cStack_141 == '\0')) && (cVar6 == '\0'))
                        {
                          bVar3 = false;
                        }
                        else {
                          bVar3 = true;
                        }
                      }
                      else {
                        bVar3 = true;
                      }
                      uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
                      piStack_150 = (int *)uVar25;
                      if ((0 < (int)DAT_123bcf90) &&
                         (pppiStack_14c = (int ***)((uint)pppiStack_14c & 0xff),
                         ppiVar1[0x1e] != DAT_123bcf90)) {
                        pppiStack_14c = (int ***)0x0;
                      }
                      bVar7 = (byte)pppiStack_14c;
                      if (0 < (int)DAT_123bcf94) {
                        if (ppiVar1[0x1f] != DAT_123bcf94) {
                          bVar7 = 0;
                        }
                        pppiStack_14c = (int ***)(uint)bVar7;
                      }
                      if (0 < (int)DAT_123bcf98) {
                        if (ppiVar1[0x20] != DAT_123bcf98) {
                          bVar7 = 0;
                        }
                        pppiStack_14c = (int ***)CONCAT31(pppiStack_14c._1_3_,bVar7);
                      }
                      ppppiStack_17c = (int ****)ppiVar1[10];
                      pppiStack_180 = (int ***)0x1084444e;
                      iVar13 = FUN_10254130();
                      if (iVar13 != 0) {
                        pppiStack_70 = appiStack_80;
                        pppiStack_180 = (int ***)"";
                        if (*(char **)(iVar13 + 0x14) != (char *)0x0) {
                          pppiStack_180 = (int ***)*(char **)(iVar13 + 0x14);
                        }
                        pppiStack_148 = (int ***)((int)pppiStack_180 + 1);
                        pcVar20 = (char *)pppiStack_180;
                        do {
                          cVar6 = *pcVar20;
                          pcVar20 = pcVar20 + 1;
                        } while (cVar6 != '\0');
                        ppppiStack_17c =
                             (int ****)((int)pppiStack_180 + ((int)pcVar20 - (int)pppiStack_148));
                        pppiStack_184 = (int ***)0x108444a2;
                        pppiStack_6c = pppiStack_70;
                        FUN_100b62c0();
                        pppiStack_184 = *(int ****)(iVar13 + 0x28);
                        ppiStack_90 = &piStack_a0;
                        pppiStack_188 = *(int ****)(iVar13 + 0x2c);
                        pppiStack_18c = (int ***)0x108444c4;
                        ppiStack_8c = ppiStack_90;
                        FUN_100b62c0();
                        pppiVar23 = DAT_123bcf8c;
                        ppppiStack_17c = (int ****)(DAT_123bcf88 - (int)DAT_123bcf8c);
                        if (ppppiStack_17c == (int ****)0x0) {
                          pppiStack_180 = (int ***)&DAT_11d9d32b;
                          pppiStack_184 = DAT_123bcf8c;
                          pppiStack_188 = (int ***)0x108444df;
                          iVar13 = FUN_100b7960();
                          if (iVar13 != 0) goto LAB_108444e6;
LAB_1084450e:
                          unaff_EDI = CONCAT13(1,(int3)uVar26);
                        }
                        else {
LAB_108444e6:
                          ppppiStack_17c = (int ****)0x0;
                          pppiStack_180 = pppiVar23;
                          pppiStack_184 = (int ***)0x108444f5;
                          iVar13 = FUN_10254970();
                          if (iVar13 != -1) goto LAB_1084450e;
                          ppppiStack_17c = (int ****)0x0;
                          pppiStack_180 = pppiVar23;
                          pppiStack_184 = (int ***)0x10844509;
                          iVar13 = FUN_10254970();
                          if (iVar13 != -1) goto LAB_1084450e;
                        }
                        if ((pppiStack_84 != appiStack_98) && (pppiStack_84 != (int ***)0x0)) {
                          ppppiStack_17c = (int ****)pppiStack_84;
                          pppiStack_180 = (int ***)0x1084452f;
                          FUN_10c3d5d0();
                        }
                        if ((pppiStack_6c != appiStack_80) && (pppiStack_6c != (int ***)0x0)) {
                          ppppiStack_17c = (int ****)pppiStack_6c;
                          pppiStack_180 = (int ***)0x1084454e;
                          FUN_10c3d5d0();
                        }
                      }
                      uVar4 = CONCAT44(uStack_158,piStack_150);
                      uVar25 = CONCAT44(uStack_158,piStack_150);
                      if (((!bVar3) ||
                          (uVar25 = CONCAT44(uStack_158,piStack_150), (char)pppiStack_14c == '\0'))
                         || (uVar25 = uVar4, (char)(unaff_EDI >> 0x18) == '\0')) goto LAB_108445a1;
                    }
                    uStack_158 = (undefined4)((ulonglong)uVar4 >> 0x20);
                    piStack_150 = (int *)uVar4;
                    ppppiStack_17c = (int ****)0x1084456e;
                    FUN_10845940();
                    uVar25 = CONCAT44(uStack_158,piStack_150);
                    if (pppiStack_114 == local_110) {
                      pppiStack_188 = &ppiStack_11c;
                      pppiStack_18c = pppiStack_114;
                      ppiStack_190 = (int **)0x10844595;
                      FUN_10848530();
                      uVar25 = CONCAT44(uStack_158,piStack_150);
                      uVar4 = uVar25;
                    }
                    else {
                      *pppiStack_114 = ppiVar1;
                      pppiStack_114 = pppiStack_114 + 1;
                      uVar4 = uVar25;
                    }
                  }
                }
LAB_108445a1:
                unaff_EBX = unaff_EBX + 1;
                uVar26 = unaff_EDI;
              } while (unaff_EBX != *(int **)(unaff_ESI + 0x20));
            }
          }
          uStack_158 = (undefined4)((ulonglong)uVar25 >> 0x20);
          bVar7 = (byte)unaff_EDI;
          local_15c = local_15c + 1;
        } while (local_15c != (float *)piStack_120[1]);
      }
      pppiVar23 = pppiStack_118;
      piVar22 = (int *)0x0;
      uStack_124 = 0;
      piStack_150 = (int *)0x0;
      piStack_120 = (int *)0x0;
      if ((-1 < param_5) && (0 < param_4)) {
        piStack_120 = (int *)(param_4 * param_5);
      }
      iStack_b8 = (int)pppiStack_114 - (int)pppiStack_118 >> 2;
      if (*(int *)(iStack_10c + 0x260e0) != 0) {
        ppppiStack_17c = (int ****)0x0;
        pppiStack_180 = (int ***)0x3;
        pppiStack_184 = (int ***)0x10844626;
        iVar13 = FUN_113f9bb0();
        if (iVar13 != 0) {
          ppppiStack_17c = (int ****)0x10844631;
          ppppiStack_17c = (int ****)FUN_11669730();
          pppiStack_180 = (int ***)0x10844637;
          FUN_1052bdd0();
        }
      }
      pppiStack_14c = pppiVar23;
      if (pppiVar23 != pppiStack_114) {
        do {
          ppiVar1 = *pppiStack_14c;
          if (piVar22 < piStack_120) {
LAB_10845535:
            piStack_150 = (int *)((int)piVar22 + 1);
          }
          else {
            pppiStack_148 = (int ***)0x1;
            if (uStack_124 == 0) {
              pppiStack_148 = (int ***)0x0;
            }
            else if (uStack_124 == param_4 - 1U) {
              pppiStack_148 = (int ***)0x2;
            }
            ppiStack_140 = (int **)0x0;
            ppppiStack_17c = (int ****)0x0;
            pppiStack_180 = (int ***)0x0;
            pppiStack_184 = pppiStack_e4;
            if (pppiStack_14c + 1 == pppiStack_114) {
              pppiStack_148 = (int ***)0x2;
            }
            uStack_13c = 0;
            pppiStack_188 = &ppiStack_140;
            pppiStack_18c = (int ***)0x108446b5;
            FUN_11a98de0();
            pppiVar23 = (int ***)0x0;
            piVar22 = ppiVar1[10];
            pppiStack_ec = (int ***)((uint)pppiStack_ec & 0xffffff00);
            uStack_f0 = uStack_f0 & 0xffffff00;
            pppiStack_16c = (int ***)0x0;
            uStack_f8 = uStack_f8 & 0xffffff00;
            ppiStack_11c = (int **)((uint)ppiStack_11c & 0xffffff00);
            if (local_138 != (int ***)0x0) {
              pppiStack_18c = (int ***)ppiVar1[2];
              ppiStack_190 = (int **)ppiVar1[3];
              pppiStack_194 = (int ***)0x1;
              pppiVar23 = (int ***)FUN_114b65c0();
              pppiStack_184 = (int ***)FUN_114b66e0(1,ppiVar1[3],ppiVar1[2]);
              uVar8 = FUN_114b8160(piVar22);
              ppiStack_108 = (int **)CONCAT31(ppiStack_108._1_3_,uVar8);
              uVar8 = FUN_114b7fb0(piVar22);
              local_110 = (int ***)CONCAT31(local_110._1_3_,uVar8);
              uVar8 = FUN_114b7c50(ppiVar1[3],ppiVar1[2]);
              piStack_120 = (int *)CONCAT31(piStack_120._1_3_,uVar8);
              uVar8 = FUN_114b7bb0(ppiVar1[3],ppiVar1[2]);
              ppiStack_11c = (int **)CONCAT31(ppiStack_11c._1_3_,uVar8);
            }
            ppiStack_190 = (int **)0x11dcf7b4;
            pppiStack_194 = (int ***)0x10844767;
            pppiStack_18c = pppiVar23;
            FUN_104d1550();
            pppiStack_194 = pppiStack_ec;
            FUN_104d15e0("isSkillFormula");
            FUN_104d15e0("isManuFormula",uStack_f0);
            FUN_104d1550("currentLimitBuyCounts",pppiStack_16c);
            FUN_104d15e0("hasBeenLearnedSkill",uStack_f8);
            FUN_104d15e0("hasBeenLearnedFormula",ppiStack_11c);
            FUN_104d15e0("backItem",0);
            FUN_104d1550("SaleItemId",ppiVar1[2]);
            pppiStack_18c = (int ***)ppiVar1[3];
            ppiStack_190 = (int **)0x11dcf74c;
            pppiStack_194 = (int ***)0x10844812;
            FUN_104d1550();
            pppiStack_194 = (int ***)ppiVar1[10];
            FUN_104d1550("ItemId");
            FUN_104d1550("ItemNum",ppiVar1[0xb]);
            FUN_104d15e0("UnBindGold",*(undefined1 *)(ppiVar1 + 0xd));
            FUN_104d1550("salesCount",local_c8);
            FUN_104d1550("itemClass1",ppiVar1[0x1e]);
            FUN_104d1550("itemClass2",ppiVar1[0x1f]);
            iVar13 = 0;
            if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
               (piVar22 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar22 != (int *)0x0)) {
              pppiStack_18c = (int ***)0x108448b5;
              iVar14 = (**(code **)(*piVar22 + 0xb4))();
              if (iVar14 != 0) {
                iVar13 = iVar14;
              }
            }
            pppiVar23 = (int ***)0x0;
            pppiStack_16c = (int ***)0x0;
            if (iVar13 != 0) {
              pppiStack_18c = (int ***)0x108448cf;
              pppiVar23 = (int ***)FUN_1025b060();
              pppiStack_18c = (int ***)0x108448dc;
              pppiStack_16c = (int ***)FUN_1025b060();
            }
            ppiStack_190 = (int **)0x11dcf4a0;
            pppiStack_194 = (int ***)0x108448f5;
            pppiStack_18c = pppiVar23;
            FUN_104d1550();
            pppiStack_194 = pppiStack_16c;
            FUN_104d1550("currentMoney");
            FUN_104d1440("backItemIndex",unaff_EBX);
            iVar14 = FUN_10254130(ppiVar1[10]);
            if (iVar14 == 0) {
              pppiStack_18c = (int ***)0x0;
              ppiStack_190 = (int **)0x11dcf4c4;
              pppiStack_194 = (int ***)0x10844ab3;
              FUN_104d1550();
              pppiStack_194 = (int ***)&DAT_11d9d32b;
              FUN_104d1670("itemName");
              FUN_104d1550("maxStackCount",0);
            }
            else {
              pppiStack_18c = (int ***)0x1;
              pppiStack_194 = (int ***)0x1084493e;
              ppiStack_190 = ppiVar1;
              pppiStack_178 = (int ***)FUN_114b74e0();
              ppppiStack_170 = (int ****)ppiVar1[2];
              ppppiStack_17c = (int ****)ppiVar1[3];
              piStack_174 = (int *)0xffffffff;
              if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
                 (piVar22 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar22 != (int *)0x0))
              {
                pppiStack_194 = (int ***)0x1084497e;
                iVar15 = (**(code **)(*piVar22 + 0xb4))();
                if ((iVar15 != 0) && (*(int *)(iVar15 + 0x2afc) != 0)) {
                  pppiStack_194 = pppiStack_178;
                  piStack_174 = (int *)FUN_114b6660(ppppiStack_17c,ppppiStack_170);
                }
              }
              if (iVar13 == 0) {
LAB_108449ca:
                pppiStack_134 = (int ***)((uint)pppiStack_134 & 0xffffff00);
              }
              else {
                pppiStack_194 = (int ***)0x108449ae;
                cVar6 = FUN_10842030();
                if (cVar6 == '\0') goto LAB_108449ca;
                pppiStack_194 = (int ***)ppiVar1[2];
                cVar6 = FUN_114b80d0(ppiVar1[3]);
                pppiStack_134 = (int ***)CONCAT31(pppiStack_134._1_3_,1);
                if (cVar6 == '\0') goto LAB_108449ca;
              }
              pppiStack_194 = pppiStack_134;
              FUN_104d15e0("itemTypeCanUse");
              local_c8 = *(int ****)(iVar14 + 0xcc);
              FUN_104d1550("needPlayerLevel",*(undefined4 *)(iVar14 + 200));
              FUN_104d1550("itemPrice",piStack_174);
              appiStack_98[0] = (int **)((uint)appiStack_98[0] & 0xffffff00);
              pppiStack_194 = appiStack_98;
              pppiStack_88 = pppiStack_194;
              pppiStack_84 = pppiStack_194;
              FUN_100e5aa0();
              FUN_104d1670("itemName",pppiStack_88);
              FUN_104d1440("maxStackCount",*(undefined4 *)(iVar14 + 0x50));
              if ((pppiStack_88 != &ppiStack_9c) && (pppiStack_88 != (int ***)0x0)) {
                FUN_10c3d5d0(pppiStack_88);
              }
            }
            FUN_104d1550("packTag",unaff_ESI);
            uStack_124 = 0;
            piStack_120 = (int *)0x0;
            local_c4 = (int ***)CONCAT31(local_c4._1_3_,((byte)uStack_158 & 0x8f) == 10);
            pppiVar23 = local_c4;
            cVar6 = (**(code **)((int)*local_15c + 0x10))
                              (uStack_154,"arrayExchangeItem",&uStack_124);
            if (cVar6 != '\0') {
              piVar22 = ppiVar1[0x21];
              if (piVar22 != ppiVar1[0x22]) {
                do {
                  pppiStack_188 = (int ***)FUN_10254130(*piVar22);
                  if (pppiStack_188 != (int ***)0x0) {
                    iVar14 = *piVar22;
                    iVar15 = FUN_114b7110(ppiVar1,iVar14);
                    pppiStack_194 = (int ***)(iVar15 + piVar22[1]);
                    uStack_b4 = 0;
                    uStack_b0 = 0;
                    FUN_11a98de0(&uStack_b4,piStack_120,0,0);
                    pppiVar18 = (int ***)auStack_dc;
                    auStack_dc[0] = 0;
                    pppiStack_cc = pppiVar18;
                    local_c8 = pppiVar18;
                    FUN_100e5aa0();
                    cVar6 = (char)((uint)pppiVar18 >> 0x18);
                    FUN_104d1670("itemName",pppiStack_cc);
                    if ((pppiStack_cc != &ppiStack_e0) && (pppiStack_cc != (int ***)0x0)) {
                      FUN_10c3d5d0(pppiStack_cc);
                    }
                    FUN_104d1550("itemCount",iVar14);
                    FUN_104d1550("itemID",*piVar22);
                    if (iVar13 != 0) {
                      if ((*(int **)(iVar13 + 0xc) != (int *)0x0) &&
                         (cVar9 = (**(code **)(**(int **)(iVar13 + 0xc) + 0x168))(), cVar9 == '\0'))
                      {
                        (**(code **)(**(int **)(iVar13 + 0xc) + 0x174))();
                      }
                      uVar16 = FUN_113f9470(*piVar22);
                      iVar14 = FUN_113f9300(uVar16,*piVar22,0);
                      if (cVar6 == '\0') {
                        FUN_113f9300(2,*piVar22,0);
                        iVar15 = FUN_113f9300(10,*piVar22,0);
                        iVar14 = iVar14 + iVar15;
                      }
                      FUN_104d1550("currentCounts",iVar14);
                    }
                    (**(code **)(*piStack_150 + 0x3c))(pppiStack_148,&local_c8);
                    if ((uStack_a8 >> 6 & 1) != 0) {
                      (**(code **)(*local_ac + 8))(&local_ac,uStack_a4);
                    }
                  }
                  piVar22 = piVar22 + 2;
                } while (piVar22 != ppiVar1[0x22]);
              }
              uVar16 = FUN_114b6f80(ppiVar1[0x16]);
              FUN_117daa40(&ppiStack_d4,uVar16);
              pppiVar18 = pppiStack_d0;
              if (pppiStack_d0 != pppiStack_cc) {
                do {
                  ppiVar2 = *pppiVar18;
                  cVar6 = FUN_117da9c0(ppiVar2[2]);
                  if ((cVar6 == '\0') &&
                     (pppiStack_188 = (int ***)FUN_117daaf0(), pppiStack_188 != (int ***)0x0)) {
                    local_ac = (int *)0x0;
                    uStack_a8 = 0;
                    FUN_11a98de0(&local_ac,pppiStack_118,0,0);
                    local_c4 = &ppiStack_d4;
                    ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
                    pppiStack_c0 = local_c4;
                    FUN_100e5aa0(local_c4);
                    FUN_104d1670("itemName",local_c4);
                    if ((local_c4 != &ppiStack_d8) && (local_c4 != (int ***)0x0)) {
                      FUN_10c3d5d0(local_c4);
                    }
                    FUN_104d1550("itemCount",(int)ppiVar2[3] * (int)ppiVar1[0xb]);
                    FUN_104d1550("itemID",ppiVar2[2]);
                    (*(code *)(*pppiStack_148)[0xf])(ppiStack_140,&pppiStack_c0);
                    if ((uStack_a8 >> 6 & 1) != 0) {
                      (**(code **)(*local_ac + 8))(&local_ac,uStack_a4);
                    }
                  }
                  pppiVar18 = pppiVar18 + 1;
                } while (pppiVar18 != pppiStack_cc);
              }
              if (pppiStack_d0 != (int ***)0x0) {
                FUN_10c3d5d0(pppiStack_d0);
              }
            }
            pppiStack_184 = (int ***)0x1;
            pppiStack_18c = (int ***)0x0;
            do {
              pppiVar18 = pppiStack_18c;
              pppiStack_188 = (int ***)0x0;
              ppiStack_190 = (int **)0x0;
              CPet__SetName(&DAT_11d9d32b);
              FUN_108418c0(&pppiStack_18c,&pppiStack_194);
              ppiVar2 = ppiStack_190;
              if (0 < (int)pppiStack_188) {
                _snprintf(acStack_68,0x20,"specialItemName%d",pppiStack_184);
                pppiStack_70 = &ppiStack_90;
                ppiStack_90 = (int **)((uint)ppiStack_90 & 0xffff0000);
                ppiStack_9c = &local_ac;
                ppiVar5 = (int **)&DAT_11d9d32b;
                _Src = (int **)&DAT_11d9d32b;
                if (ppiVar2 != (int **)0x0) {
                  ppiVar5 = ppiVar2;
                  _Src = ppiVar2;
                }
                do {
                  ppiStack_e0 = ppiVar5;
                  ppiVar5 = (int **)((int)ppiStack_e0 + 1);
                } while (*(char *)ppiStack_e0 != '\0');
                ppiStack_190 = (int **)((int)ppiStack_e0 - (int)_Src);
                ppiStack_d8 = (int **)((int)ppiStack_190 + 1);
                appiStack_98[0] = ppiStack_9c;
                pppiStack_6c = pppiStack_70;
                if (ppiStack_d8 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_100b73e0();
                }
                if (&DAT_00000010 < (char *)((int)ppiStack_190 + 1)) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580((char *)((int)ppiStack_190 + 1));
                }
                if (ppiStack_e0 != _Src) {
                  pvVar17 = memcpy(ppiStack_9c,_Src,(size_t)ppiStack_190);
                  ppiStack_9c = (int **)((int)pvVar17 + (int)ppiStack_190);
                }
                *(char *)ppiStack_9c = '\0';
                cVar6 = FUN_100ecfd0(appiStack_98[0],(int)ppiStack_9c - (int)appiStack_98[0],
                                     &ppiStack_90,4);
                if (cVar6 == '\0') {
                  FUN_100e61d0(L"<Error When GetUnicodeString>",L"");
                }
                if ((appiStack_98[0] != &local_ac) && (appiStack_98[0] != (int **)0x0)) {
                  FUN_10c3d5d0(appiStack_98[0]);
                }
                if ((pppiVar23 != (int ***)0x0) && (pppiStack_6c != (int ***)0x0)) {
                  local_c4 = (int ***)0x0;
                  pppiStack_c0 = (int ***)0x0;
                  FUN_11a98e20(&local_c4,pppiStack_6c);
                  (**(code **)(*piStack_174 + 0x14))
                            (pppiStack_16c,&pppiStack_70,&pppiStack_cc,
                             ((byte)ppppiStack_170 & 0x8f) == 10);
                  if (((uint)pppiStack_c0 >> 6 & 1) != 0) {
                    (*(code *)(*local_c4)[2])(&local_c4,pppiStack_bc);
                  }
                }
                if ((pppiStack_6c != &ppiStack_90) && (pppiStack_6c != (int ***)0x0)) {
                  FUN_10c3d5d0(pppiStack_6c);
                }
                _snprintf(acStack_68,0x20,"specialItemCounts%d",pppiStack_184);
                if (pppiVar23 != (int ***)0x0) {
                  pppiStack_bc = pppiStack_188;
                  local_c4 = (int ***)0x0;
                  pppiStack_c0 = (int ***)0x3;
                  (*(code *)(*pppiStack_16c)[5])
                            (unaff_ESI,acStack_68,&local_c4,(bVar7 & 0x8f) == 10);
                  if (((uint)pppiStack_c0 >> 6 & 1) != 0) {
                    (*(code *)(*local_c4)[2])(&local_c4,pppiStack_bc);
                  }
                }
                _snprintf(acStack_68,0x20,"specialItemDiscount%d",1);
                if ((int)ppiVar1[0x28] - (int)ppiVar1[0x27] >> 5 != 0) {
                  FUN_104d1670(acStack_68,ppiVar1[0x27][7]);
                }
                if ((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
                    (piVar22 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
                    piVar22 == (int *)0x0)) ||
                   ((iVar13 = (**(code **)(*piVar22 + 0xb4))(), iVar13 == 0 ||
                    (*(int *)(iVar13 + 0x2afc) == 0)))) {
                  pppiVar18 = (int ***)0x0;
                }
                else {
                  pppiVar18 = (int ***)FUN_114b7530(pppiStack_18c);
                }
                if (pppiStack_18c == (int ***)&DAT_00000007) {
                  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
                     ((piVar22 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
                      piVar22 == (int *)0x0 ||
                      ((iVar13 = (**(code **)(*piVar22 + 0xb4))(), iVar13 == 0 ||
                       (*(int *)(iVar13 + 0x2afc) == 0)))))) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = FUN_114b7530(8);
                  }
                  pppiVar18 = (int ***)((int)pppiVar18 + iVar13);
                }
                _snprintf(acStack_68,0x20,"currentSpecialItem%dCounts",pppiStack_184);
                if (pppiVar23 != (int ***)0x0) {
                  local_c4 = (int ***)0x0;
                  pppiStack_c0 = (int ***)0x3;
                  pppiStack_bc = pppiVar18;
                  (*(code *)(*pppiStack_16c)[5])
                            (unaff_ESI,acStack_68,&local_c4,(bVar7 & 0x8f) == 10);
                  if (((uint)pppiStack_c0 >> 6 & 1) != 0) {
                    (*(code *)(*local_c4)[2])(&local_c4,pppiStack_bc);
                  }
                }
                _snprintf(acStack_68,0x20,"specialItemType%d",pppiStack_184);
                pppiVar18 = pppiStack_18c;
                if (pppiVar23 != (int ***)0x0) {
                  local_c4 = (int ***)0x0;
                  pppiStack_c0 = (int ***)0x3;
                  pppiStack_bc = pppiStack_18c;
                  (*(code *)(*pppiStack_16c)[5])
                            (unaff_ESI,acStack_68,&local_c4,(bVar7 & 0x8f) == 10);
                  if (((uint)pppiStack_c0 >> 6 & 1) != 0) {
                    (*(code *)(*local_c4)[2])(&local_c4,pppiStack_bc);
                  }
                }
                pppiStack_184 = (int ***)((int)pppiStack_184 + 1);
              }
              if (ppiVar2 != (int **)0x0) {
                FUN_10c3da30(ppiVar2);
              }
              pppiStack_18c = (int ***)((int)pppiVar18 + 1);
            } while ((int)pppiStack_18c < 0xd);
            FUN_104d1550("currencyShowType",ppiVar1[0x1c]);
            if ((DAT_123c2d20 & 1) == 0) {
              DAT_123c2d20 = DAT_123c2d20 | 1;
              FUN_104d02c0();
              FUN_11a8911f(&LAB_11c6e910);
            }
            cVar6 = (**(code **)(DAT_123c2d28 + 0x54))("MatchEntry");
            if ((cVar6 != '\0') || (ppiVar1[0x1c] != (int *)0x6)) {
              ppppiStack_17c = (int ****)&ppiStack_140;
              pppiStack_180 = (int ***)pppiStack_bc[2];
              pppiStack_184 = (int ***)0x108454d8;
              (*(code *)(**pppiStack_bc)[0xf])();
              uStack_124 = uStack_124 + 1;
              if (pppiStack_148 != (int ***)0x2) {
                if ((uStack_104 >> 6 & 1) != 0) {
                  pppiStack_180 = &ppiStack_108;
                  ppppiStack_17c = (int ****)pppiStack_100;
                  pppiStack_184 = (int ***)0x10845500;
                  (*(code *)(*ppiStack_108)[2])();
                  ppiStack_108 = (int **)0x0;
                }
                uStack_104 = 0;
                piVar22 = piStack_150;
                if ((uStack_13c >> 6 & 1) != 0) {
                  pppiStack_180 = &ppiStack_140;
                  ppppiStack_17c = (int ****)local_138;
                  pppiStack_184 = (int ***)0x1084552d;
                  (*(code *)(*ppiStack_140)[2])();
                  piVar22 = piStack_150;
                }
                goto LAB_10845535;
              }
              if ((uStack_104 >> 6 & 1) != 0) {
                pppiStack_180 = &ppiStack_108;
                ppppiStack_17c = (int ****)pppiStack_100;
                pppiStack_184 = (int ***)0x1084556b;
                (*(code *)(*ppiStack_108)[2])();
                ppiStack_108 = (int **)0x0;
              }
              uStack_104 = 0;
              pppiVar23 = pppiStack_118;
              if ((uStack_13c >> 6 & 1) != 0) {
                pppiStack_180 = &ppiStack_140;
                ppppiStack_17c = (int ****)local_138;
                pppiStack_184 = (int ***)0x10845598;
                (*(code *)(*ppiStack_140)[2])();
                pppiVar23 = pppiStack_118;
              }
              break;
            }
            if ((uStack_104 >> 6 & 1) != 0) {
              pppiStack_180 = &ppiStack_108;
              ppppiStack_17c = (int ****)pppiStack_100;
              pppiStack_184 = (int ***)0x10845477;
              (*(code *)(*ppiStack_108)[2])();
              ppiStack_108 = (int **)0x0;
            }
            uStack_104 = 0;
            if ((uStack_13c >> 6 & 1) != 0) {
              pppiStack_180 = &ppiStack_140;
              ppppiStack_17c = (int ****)local_138;
              pppiStack_184 = (int ***)0x108454a4;
              (*(code *)(*ppiStack_140)[2])();
            }
          }
          pppiStack_14c = pppiStack_14c + 1;
          pppiVar23 = pppiStack_118;
          piVar22 = piStack_150;
        } while (pppiStack_14c != pppiStack_114);
      }
      if (pppiVar23 != (int ***)0x0) {
        pppiStack_180 = (int ***)0x108455a6;
        ppppiStack_17c = (int ****)pppiVar23;
        FUN_10c3d5d0();
      }
    }
  }
  if (((uint)ppiStack_d4 >> 6 & 1) != 0) {
    pppiStack_180 = &ppiStack_d8;
    ppppiStack_17c = (int ****)pppiStack_d0;
    pppiStack_184 = (int ***)0x108455d3;
    (*(code *)(*ppiStack_d8)[2])();
  }
  ppppiStack_170 = (int ****)0x108455e4;
  FUN_11a89daa();
  return;
}



