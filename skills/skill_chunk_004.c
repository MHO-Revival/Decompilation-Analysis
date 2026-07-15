/* ===== FUN_1085b470 @ 1085b470  size=1751 ===== */
// calls: CPet::SetName, CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance
// strings:
//   "randPassiveSkillTitle"
//   "PASSIVESKILL_VO_CLASSNAME"
//   "arrayRandPassiveSkillDesc"
//   "bIsHidden"
//   "nVisibleMoney"
//   "strName"
//   "ACTIVATE_VO_CLASSNAME"
//   "nType"
//   "activateInfoList"

/* [RE-AUTO c0]
   strings:
     ""randPassiveSkillTitle""
     ""PASSIVESKILL_VO_CLASSNAME""
     ""arrayRandPassiveSkillDesc""
     ""bIsHidden""
     ""nVisibleMoney""
     ""strName""
     ""ACTIVATE_VO_CLASSNAME""
     ""nType""
     ""activateInfoList"" */

void FUN_1085b470(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int *unaff_ESI;
  int **ppiVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  undefined1 auStack_15c [4];
  undefined4 uStack_158;
  int *piStack_154;
  int iStack_150;
  char *pcStack_14c;
  int *piStack_148;
  int ***pppiStack_144;
  int ***pppiStack_140;
  char *pcStack_13c;
  uint *puStack_138;
  int *piStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  int **ppiStack_128;
  int *piStack_124;
  int *piStack_118;
  undefined4 uStack_114;
  int *local_110;
  int *local_108;
  uint local_104;
  int *local_100;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  uint uStack_f0;
  int *piStack_ec;
  int aiStack_e4 [2];
  undefined1 auStack_dc [8];
  int *piStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b0 [20];
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint uStack_78;
  uint auStack_74 [4];
  uint *puStack_64;
  uint *puStack_60;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&piStack_118;
  if (param_5 == 3) {
    uVar2 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar2 == 3) || (ppiVar5 = (int **)0xdeadbeaf, uVar2 == 4)) {
      ppiVar5 = *(int ***)(param_4 + 8);
    }
    uVar2 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      local_110 = *(int **)(param_4 + 0x20);
    }
    else {
      local_110 = (int *)0xdeadbeaf;
    }
    local_104 = *(uint *)(param_4 + 0x34);
    local_100 = *(int **)(param_4 + 0x38);
    local_fc = *(undefined4 *)(param_4 + 0x3c);
    local_f8[0] = *(undefined4 *)(param_4 + 0x40);
    local_108 = (int *)0x0;
    if ((local_104 >> 6 & 1) != 0) {
      local_108 = *(int **)(param_4 + 0x30);
      piStack_124 = *(int **)(param_4 + 0x38);
      ppiStack_128 = &local_108;
      piStack_12c = (int *)0x1085b519;
      (**(code **)(*local_108 + 4))();
    }
    if ((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
       (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) {
      piStack_124 = (int *)0x1085b544;
      iVar3 = (**(code **)(*piVar6 + 0xb4))();
      if (iVar3 != 0) {
        piStack_124 = (int *)0x1085b567;
        iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2d1c) != 0)) {
          piStack_124 = local_110;
          piStack_12c = (int *)0x1085b587;
          ppiStack_128 = ppiVar5;
          iVar3 = FUN_113f9bb0();
          aiStack_e4[0] = iVar3;
          if (iVar3 != 0) {
            piStack_124 = (int *)0x1085b59c;
            cVar1 = FUN_116698a0();
            if (cVar1 != '\0') {
              piStack_124 = (int *)0x1085b5ab;
              cVar1 = FUN_1166e120();
              if (cVar1 != '\0') {
                uStack_114 = CONCAT31(uStack_114._1_3_,((byte)local_104 & 0x8f) == 10);
                piStack_124 = (int *)uStack_114;
                ppiStack_128 = (int **)0x11dd1550;
                piStack_12c = local_100;
                puStack_130 = (undefined4 *)0x1085b5db;
                cVar1 = (**(code **)(*local_108 + 0xc))();
                if (cVar1 != '\0') {
                  puStack_130 = (undefined4 *)&DAT_11d9d32b;
                  piStack_124 = (int *)0x0;
                  piStack_134 = (int *)0x1085b5f5;
                  CPet__SetName();
                  piStack_134 = (int *)0x0;
                  puStack_138 = (uint *)0x13a4;
                  pcStack_13c = (char *)local_f8;
                  pppiStack_140 = &ppiStack_128;
                  pppiStack_144 = (int ***)0x1085b60b;
                  FUN_1024ebe0();
                  pppiStack_144 = &ppiStack_128;
                  piStack_148 = (int *)0x11dd1550;
                  pcStack_14c = (char *)0x1085b620;
                  FUN_104d1790();
                  piStack_134 = (int *)0x1085b62c;
                  FUN_100e5670();
                }
                puStack_130 = &uStack_cc;
                uStack_cc = 0;
                uStack_c8 = 0;
                piStack_134 = (int *)0x1085b648;
                FUN_11a98a70();
                puStack_138 = &uStack_78;
                uStack_78 = 0;
                auStack_74[0] = 0;
                piStack_124 = (int *)CONCAT31(piStack_124._1_3_,((byte)uStack_114 & 0x8f) == 10);
                local_100 = (int *)0x0;
                piStack_134 = piStack_124;
                pcStack_13c = "PASSIVESKILL_VO_CLASSNAME";
                pppiStack_140 = (int ***)local_110;
                pppiStack_144 = (int ***)0x1085b696;
                cVar1 = (**(code **)(*piStack_118 + 0x10))();
                if (((cVar1 != '\0') && (((byte)uStack_84 & 0x8f) == 6)) &&
                   (local_110 = (int *)uStack_80, (uStack_84 >> 6 & 1) != 0)) {
                  local_110 = (int *)*(int *)uStack_80;
                }
                piStack_148 = aiStack_e4 + 1;
                piStack_134 = (int *)CONCAT31(piStack_134._1_3_,((byte)piStack_124 & 0x8f) == 10);
                pppiStack_144 = (int ***)piStack_134;
                pcStack_14c = "arrayRandPassiveSkillDesc";
                piStack_154 = (int *)0x1085b6ee;
                iStack_150 = unaff_EDI;
                cVar1 = (*(code *)(*ppiStack_128)[4])();
                if (cVar1 != '\0') {
                  piStack_154 = (int *)(iVar3 + 0x1bc);
                  uStack_158 = 0x1085b709;
                  FUN_10867910();
                  pppiStack_140 = (int ***)0x0;
                  piStack_118 = (int *)((iStack_d0 - (int)piStack_d4) / 0x1c);
                  piVar6 = piStack_d4;
                  if (piStack_118 != (int *)0x0) {
                    do {
                      piStack_154 = (int *)0x0;
                      uStack_158 = 0;
                      local_108 = (int *)0x0;
                      local_104 = 0;
                      pppiStack_144 = (int ***)piVar6;
                      FUN_11a98de0(&local_108);
                      iVar3 = *piVar6;
                      iStack_8c = piVar6[1];
                      iStack_88 = piVar6[2];
                      uStack_84 = piVar6[3];
                      uStack_78 = piVar6[6];
                      uStack_80 = *(undefined8 *)(piVar6 + 4);
                      iStack_90 = iVar3;
                      FUN_104d15e0("bIsHidden",iVar3 == 1);
                      piVar6 = piStack_124;
                      if (iVar3 == 1) {
                        uVar4 = (**(code **)(*piStack_124 + 0x2c))();
                        uVar4 = (**(code **)(*piVar6 + 0x18))(uVar4);
                        uVar4 = CEquipHiddenSkillCondOpenInfo__GetInfoManagerInstance
                                          (iStack_150,uVar4);
                        FUN_104d1550("nVisibleMoney",uVar4);
                      }
                      iVar3 = FUN_1050ebc0(iStack_88);
                      if (iVar3 == 0) {
                        (**(code **)(*local_100 + 0x3c))(local_f8[0],&piStack_118);
                      }
                      else {
                        uStack_158 = 0;
                        CPet__SetName(&DAT_11d9d32b);
                        iStack_150 = (iStack_88 < 0) + 0x13a5;
                        puVar7 = &DAT_11d9d32b;
                        if (*(undefined1 **)(iVar3 + 0x2c) != (undefined1 *)0x0) {
                          puVar7 = *(undefined1 **)(iVar3 + 0x2c);
                        }
                        uVar4 = FUN_1024e8a0(iStack_88,2);
                        uVar4 = FUN_1024e9b0(puVar7,0x2a,extraout_ECX,uVar4);
                        FUN_1024e720(auStack_15c,iStack_150,uVar4);
                        auStack_74[0] = auStack_74[0] & 0xffffff00;
                        puStack_64 = auStack_74;
                        puStack_60 = puStack_64;
                        FUN_100e5aa0(puStack_64);
                        FUN_104d1670("strName",puStack_64);
                        if ((puStack_64 != &uStack_78) && (puStack_64 != (uint *)0x0)) {
                          FUN_10c3d5d0(puStack_64);
                        }
                        uStack_c8 = 0;
                        uStack_c4 = 0;
                        FUN_11a98a70(&uStack_c8);
                        aiStack_e4[0] = 0;
                        aiStack_e4[1] = 0;
                        ppiStack_128 = (int **)CONCAT31(ppiStack_128._1_3_,
                                                        ((byte)iStack_150 & 0x8f) == 10);
                        puStack_138 = (uint *)0x0;
                        cVar1 = (**(code **)(*piStack_154 + 0x10))
                                          (pcStack_14c,"ACTIVATE_VO_CLASSNAME",aiStack_e4,
                                           ppiStack_128);
                        if ((cVar1 != '\0') && (((byte)uStack_f0 & 0x8f) == 6)) {
                          if ((uStack_f0 >> 6 & 1) == 0) {
                            piStack_148 = piStack_ec;
                          }
                          else {
                            piStack_148 = (int *)*piStack_ec;
                          }
                        }
                        iVar3 = FUN_10856700(uStack_98);
                        if (((iVar3 != 0) &&
                            (pcStack_13c = *(char **)(iVar3 + 0x2c), pcStack_13c != (char *)0x0)) &&
                           (puVar8 = *(undefined4 **)(pcStack_13c + 0x10),
                           puVar8 != *(undefined4 **)(pcStack_13c + 0x14))) {
                          do {
                            iStack_8c = 0;
                            iStack_88 = 0;
                            puVar9 = puVar8;
                            FUN_11a98de0(&iStack_8c,piStack_148,0,0);
                            piVar6 = (int *)*puVar8;
                            uVar4 = (**(code **)(*piVar6 + 0x10))();
                            FUN_104d1550("nType",uVar4);
                            uVar4 = (**(code **)(*piVar6 + 0x10))(piVar6);
                            FUN_1085a0c0(iStack_150,param_2,auStack_9c,uVar4);
                            (**(code **)(*local_100 + 0x3c))(local_f8[0],auStack_b0);
                            FUN_104d7c10();
                            puVar8 = puVar9 + 1;
                          } while (puVar8 != *(undefined4 **)(pcStack_13c + 0x14));
                        }
                        FUN_104d12b0("activateInfoList",auStack_dc);
                        (**(code **)(*unaff_ESI + 0x3c))(uStack_114,&piStack_134);
                        FUN_104d7c10();
                        FUN_104d7c10();
                        FUN_100e5670();
                      }
                      FUN_104d7c10();
                      pppiStack_140 = (int ***)((int)pppiStack_140 + 1);
                      pppiStack_144 = pppiStack_144 + 7;
                      piVar6 = (int *)pppiStack_144;
                    } while (pppiStack_140 < piStack_118);
                  }
                  if (piStack_d4 != (int *)0x0) {
                    uStack_158 = 0x1085badd;
                    FUN_10c3d5d0();
                  }
                }
                piStack_154 = (int *)0x1085baec;
                FUN_104d7c10();
                piStack_154 = (int *)0x1085baf5;
                FUN_104d7c10();
                piStack_154 = (int *)0x1085bafe;
                FUN_104d7c10();
                pcStack_14c = (char *)0x1085bb0e;
                FUN_11a89daa();
                return;
              }
            }
          }
        }
      }
    }
    if ((local_104 >> 6 & 1) != 0) {
      ppiStack_128 = &local_108;
      piStack_124 = local_100;
      piStack_12c = (int *)0x1085bb31;
      (**(code **)(*local_108 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1085bcb0 @ 1085bcb0  size=1275 ===== */
// calls: CPet::SetName
// strings:
//   "passiveSkillTitle"
//   "arrayPassiveSkillValue"
//   "arrayPassiveSkillDesc"
//   "arrayPassiveSkillEnabled"

/* [RE-AUTO c0]
   strings:
     ""passiveSkillTitle""
     ""arrayPassiveSkillValue""
     ""arrayPassiveSkillDesc""
     ""arrayPassiveSkillEnabled"" */

void FUN_1085bcb0(void)

{
  int **ppiVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  int **ppiVar7;
  int **ppiVar8;
  int *piVar9;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *puVar10;
  int **ppiStack_100;
  int **ppiStack_fc;
  int **ppiStack_ec;
  undefined1 auStack_e8 [4];
  int **ppiStack_e4;
  int *local_e0;
  uint local_dc;
  int **local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 auStack_c8 [8];
  undefined4 *local_c0;
  int iStack_bc;
  int *piStack_b8;
  uint uStack_b4;
  int **ppiStack_b0;
  undefined4 uStack_a4;
  int *piStack_a0;
  uint uStack_9c;
  int **ppiStack_98;
  undefined4 uStack_8c;
  int *piStack_88;
  uint uStack_84;
  int **ppiStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *piStack_40;
  undefined4 uStack_3c;
  int *apiStack_38 [2];
  undefined1 auStack_30 [12];
  int **ppiStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppiStack_ec;
  local_c0 = in_stack_00000010;
  if (in_stack_00000014 == 4) {
    local_dc = in_stack_00000010[1];
    local_d4 = in_stack_00000010[3];
    ppiStack_fc = (int **)in_stack_00000010[2];
    local_d0 = in_stack_00000010[4];
    local_e0 = (int *)0x0;
    local_d8 = ppiStack_fc;
    if ((local_dc >> 6 & 1) != 0) {
      local_e0 = (int *)*in_stack_00000010;
      ppiStack_100 = &local_e0;
      (**(code **)(*local_e0 + 4))();
    }
    if (((in_stack_00000010[7] & 0x8f) == 3) ||
       (ppiStack_fc = (int **)0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
      ppiStack_fc = (int **)in_stack_00000010[8];
    }
    ppiStack_100 = (int **)0x1085bd3e;
    iVar4 = FUN_10254130();
    iStack_bc = iVar4;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x34) == 2)) {
      ppiStack_ec = (int **)CONCAT31(ppiStack_ec._1_3_,((byte)local_dc & 0x8f) == 10);
      ppiStack_fc = ppiStack_ec;
      ppiStack_100 = (int **)0x11dd15e8;
      cVar3 = (**(code **)(*local_e0 + 0xc))(local_d8);
      if (cVar3 != '\0') {
        ppiStack_fc = (int **)&DAT_11d9d32b;
        ppiStack_e4 = (int **)0x0;
        ppiStack_100 = (int **)0x1085bda1;
        CPet__SetName();
        ppiStack_100 = (int **)0x0;
        FUN_1024ebe0(auStack_e8,auStack_c8,0x13a4);
        FUN_104d1790("passiveSkillTitle",auStack_e8);
        uStack_a4 = 0;
        piStack_a0 = (int *)0x0;
        uStack_8c = 0;
        ppiStack_100 = (int **)CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)local_e0 & 0x8f) == 10);
        piStack_88 = (int *)0x0;
        iStack_bc = 0;
        piStack_b8 = (int *)0x0;
        cVar3 = (*(code *)(*ppiStack_e4)[4])(local_dc,"arrayPassiveSkillValue",&uStack_a4);
        if (cVar3 != '\0') {
          ppiStack_100 = &piStack_88;
          ppiStack_ec = (int **)CONCAT31(ppiStack_ec._1_3_,((byte)local_dc & 0x8f) == 10);
          ppiStack_fc = ppiStack_ec;
          cVar3 = (**(code **)(*local_e0 + 0x10))(local_d8,"arrayPassiveSkillDesc");
          if (cVar3 != '\0') {
            ppiStack_100 = &piStack_b8;
            ppiStack_ec = (int **)CONCAT31(ppiStack_ec._1_3_,((byte)local_dc & 0x8f) == 10);
            ppiStack_fc = ppiStack_ec;
            cVar3 = (**(code **)(*local_e0 + 0x10))(local_d8,"arrayPassiveSkillEnabled");
            if ((cVar3 != '\0') &&
               (ppiVar7 = *(int ***)(iVar4 + 0x21c), ppiStack_ec = ppiVar7,
               ppiVar7 != *(int ***)(iVar4 + 0x220))) {
              do {
                ppiStack_fc = &piStack_40;
                apiStack_38[0] = ppiVar7[1];
                piStack_40 = (int *)0x0;
                uStack_3c = 3;
                ppiStack_100 = ppiStack_98;
                ppiStack_ec = ppiVar7;
                (**(code **)(*piStack_a0 + 0x3c))();
                uStack_78 = 0;
                uStack_74 = 0;
                CPet__SetName(&DAT_11d9d32b);
                iVar4 = FUN_1050ebc0(*ppiVar7);
                if (iVar4 == 0) {
                  puVar10 = (undefined4 *)0x1085bf79;
                  CPet__SetName(&DAT_11d9d32b);
                }
                else {
                  iVar4 = FUN_108199e0(auStack_30);
                  puVar10 = *(undefined4 **)(iVar4 + 0x14);
                  CPet__SetName();
                  if ((ppiStack_24 != apiStack_38) && (ppiStack_24 != (int **)0x0)) {
                    FUN_10c3d5d0(ppiStack_24);
                  }
                }
                local_dc = 0;
                CPet__SetName(&DAT_11d9d32b);
                ppiVar1 = ppiStack_100;
                local_dc = 0x13a5;
                if ((int)ppiVar7[1] < 0) {
                  local_dc = 0x13a6;
                }
                ppiVar8 = (int **)&DAT_11d9d32b;
                if (ppiStack_100 != (int **)0x0) {
                  ppiVar8 = ppiStack_100;
                }
                uVar5 = FUN_1024e8a0(ppiVar7[1],2);
                uVar6 = FUN_1024e9b0(ppiVar8,0x2a);
                FUN_1024ebe0(&local_e0,&ppiStack_100,local_dc,2,uVar6,uVar5);
                piVar2 = local_e0;
                piVar9 = (int *)&DAT_11d9d32b;
                if (local_e0 != (int *)0x0) {
                  piVar9 = local_e0;
                }
                if ((uStack_84 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_88 + 8))(&piStack_88,ppiStack_80);
                  piStack_88 = (int *)0x0;
                }
                uStack_84 = 6;
                ppiStack_80 = (int **)piVar9;
                (**(code **)(*piStack_a0 + 0x3c))(ppiStack_98,&piStack_88);
                uStack_7c = FUN_1085bb50(local_e0,*puVar10,extraout_ECX);
                uStack_84 = 0;
                ppiStack_80 = (int **)0x2;
                (*(code *)(*ppiStack_e4)[0xf])(local_dc,&uStack_84);
                FUN_104d7c10();
                if (piVar2 != (int *)0x0) {
                  FUN_10c3da30(piVar2);
                }
                if (ppiVar1 != (int **)0x0) {
                  FUN_10c3da30(ppiVar1);
                }
                FUN_104d7c10();
                FUN_104d7c10();
                ppiVar7 = (int **)(puVar10 + 2);
                ppiStack_ec = ppiVar7;
              } while (ppiVar7 != *(int ***)(iStack_bc + 0x220));
            }
          }
        }
        if ((uStack_b4 >> 6 & 1) != 0) {
          ppiStack_100 = &piStack_b8;
          ppiStack_fc = ppiStack_b0;
          (**(code **)(*piStack_b8 + 8))();
          piStack_b8 = (int *)0x0;
        }
        uStack_b4 = 0;
        if ((uStack_84 >> 6 & 1) != 0) {
          ppiStack_100 = &piStack_88;
          ppiStack_fc = ppiStack_80;
          (**(code **)(*piStack_88 + 8))();
          piStack_88 = (int *)0x0;
        }
        uStack_84 = 0;
        if ((uStack_9c >> 6 & 1) != 0) {
          ppiStack_100 = &piStack_a0;
          ppiStack_fc = ppiStack_98;
          (**(code **)(*piStack_a0 + 8))();
          piStack_a0 = (int *)0x0;
        }
        uStack_9c = 0;
        if (ppiStack_e4 != (int **)0x0) {
          ppiStack_fc = ppiStack_e4;
          ppiStack_100 = (int **)0x1085c174;
          FUN_10c3da30();
        }
      }
    }
    if ((local_dc >> 6 & 1) != 0) {
      ppiStack_100 = &local_e0;
      ppiStack_fc = local_d8;
      (**(code **)(*local_e0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10862710 @ 10862710  size=3600 ===== */
// calls: CEquipSuitSkillGroupInfo::GetSuitSkillId, CEquipInfo::BuildSuitSetBonusDisplay, CPet::SetName
// strings:
//   "SUITEEFFECTDESC_VO_CLASSNAME"
//   "SUITEEQUIPTDESC_VO_CLASSNAME"
//   "m_nSuitID"
//   "m_strSuitName"
//   "m_nActEquipCnt"
//   "m_nMaxEquipCnt"
//   "m_strEquipName"
//   "m_bIsAct"
//   "m_strEffectName"
//   "m_strEffectTips"
//   "m_nEffectTotalNeed"
//   "m_nOtherEquipNeed"
//   "m_nOtherEquipAct"
//   "m_nSelfConfigSkillNeedCnt"
//   "m_nSelfConfigSkillActCnt"
//   "m_nType"
//   "m_nIndentationIndex"
//   "m_vecDesc"
//   "m_vecSuitDesc"
//   "m_vecEffectDesc"

/* [RE-AUTO c0]
   strings:
     ""SUITEEFFECTDESC_VO_CLASSNAME""
     ""SUITEEQUIPTDESC_VO_CLASSNAME""
     ""m_nSuitID""
     ""m_strSuitName""
     ""m_nActEquipCnt""
     ""m_nMaxEquipCnt""
     ""m_strEquipName""
     ""m_bIsAct""
     ""m_strEffectName""
     ""m_strEffectTips"" */

void FUN_10862710(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  bool bVar6;
  undefined4 *puVar7;
  char *pcStack_1a4;
  int ***pppiStack_1a0;
  int *piStack_19c;
  int **ppiStack_198;
  uint **ppuStack_194;
  int *piStack_190;
  undefined1 *puStack_18c;
  undefined4 uStack_188;
  char *pcStack_184;
  uint *puStack_180;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint ***pppuStack_170;
  uint **ppuStack_16c;
  undefined4 uStack_160;
  uint *local_15c;
  int *piStack_158;
  undefined4 uStack_154;
  uint ***local_150;
  uint *puStack_14c;
  uint **ppuStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  char *pcStack_13c;
  int *piStack_138;
  byte bStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint **local_128;
  uint local_124;
  uint *local_120;
  undefined4 *local_11c;
  undefined4 local_118;
  uint uStack_114;
  undefined4 *puStack_110;
  undefined1 *puStack_10c;
  uint **ppuStack_108;
  uint uStack_104;
  uint *puStack_100;
  undefined1 auStack_f8 [4];
  char acStack_f4 [4];
  uint auStack_f0 [10];
  uint **ppuStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  uint *puStack_a4;
  undefined4 uStack_a0;
  char cStack_9c;
  uint *puStack_98;
  uint *puStack_94;
  uint *puStack_90;
  uint *puStack_8c;
  uint *puStack_88;
  uint **ppuStack_84;
  uint **ppuStack_80;
  uint **ppuStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  uint **ppuStack_6c;
  uint **ppuStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int *piStack_58;
  uint uStack_54;
  int iStack_50;
  undefined1 auStack_4c [16];
  int *piStack_3c;
  int *piStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_160;
  uVar3 = *(uint *)(param_4 + 4) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    local_15c = *(uint **)(param_4 + 8);
  }
  else {
    local_15c = (uint *)0xdeadbeaf;
  }
  if (((byte)*(undefined4 *)(param_4 + 0x1c) & 0x8f) == 2) {
    local_150 = (uint ***)CONCAT31(local_150._1_3_,*(undefined1 *)(param_4 + 0x20));
  }
  else {
    local_150 = (uint ***)((uint)local_150._1_3_ << 8);
  }
  local_124 = *(uint *)(param_4 + 0x34);
  local_11c = *(undefined4 **)(param_4 + 0x3c);
  local_120 = *(uint **)(param_4 + 0x38);
  local_118 = *(undefined4 *)(param_4 + 0x40);
  local_128 = (uint **)0x0;
  if ((local_124 >> 6 & 1) != 0) {
    local_128 = *(uint ***)(param_4 + 0x30);
    pppuStack_170 = &local_128;
    puStack_174 = (uint *)0x108627aa;
    ppuStack_16c = (uint **)local_120;
    (*(code *)(*local_128)[1])();
  }
  if (((byte)*(undefined4 *)(param_4 + 0x4c) & 0x8f) == 2) {
    uStack_160 = CONCAT13(*(undefined1 *)(param_4 + 0x50),(undefined3)uStack_160);
  }
  else {
    uStack_160 = uStack_160 & 0xffffff;
  }
  ppuStack_108 = (uint **)0x0;
  uStack_104 = 0;
  puStack_10c = (undefined1 *)0x0;
  uStack_12c = 0;
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 == (int *)0x0))
  goto LAB_108634c7;
  ppuStack_16c = (uint **)0x10862808;
  iVar4 = (**(code **)(*piVar5 + 0xb4))();
  if (iVar4 == 0) goto LAB_108634c7;
  uStack_154 = *(undefined4 *)(iVar4 + 0x260e4);
  ppuStack_16c = (uint **)local_15c;
  pppuStack_170 = (uint ***)0x10862823;
  puStack_14c = (uint *)FUN_10254130();
  if (puStack_14c == (uint *)0x0) goto LAB_108634c7;
  puStack_a8 = &uStack_b0;
  auStack_f0[1] = 0;
  auStack_f0[4] = 0;
  auStack_f0[5] = 0;
  auStack_f0[6] = 0;
  auStack_f0[7] = 0;
  auStack_f0[8] = 0;
  auStack_f0[9] = 0;
  auStack_f0[2] = 0;
  auStack_f0[3] = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a0 = 0;
  cStack_9c = uStack_160._3_1_;
  puStack_a4 = puStack_a8;
  if (uStack_160._3_1_ == '\0') {
    if ((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
       (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) {
      ppuStack_16c = (uint **)0x108628f1;
      piVar5 = (int *)(**(code **)(*piVar5 + 0xb4))();
      if (piVar5 != (int *)0x0) {
        ppuStack_16c = (uint **)0x10862905;
        piVar5 = (int *)(**(code **)(*piVar5 + 0x56c))();
        local_15c = (uint *)0x0;
        piStack_158 = piVar5;
        do {
          puVar1 = local_15c;
          if (piVar5[(int)local_15c + 0x5b2] != 0) {
            ppuStack_16c = (uint **)0x10862920;
            cVar2 = FUN_116698a0();
            piVar5 = piStack_158;
            if (cVar2 != '\0') {
              ppuStack_16c = &local_15c;
              pppuStack_170 = (uint ***)0x10862935;
              piVar5 = (int *)FUN_10871a00();
              *piVar5 = piStack_158[(int)puVar1 + 0x5b2];
              piVar5 = piStack_158;
            }
          }
          local_15c = (uint *)((int)puVar1 + 1);
        } while ((int)local_15c < 0x11);
        ppuStack_16c = (uint **)puStack_14c[0x9f];
        pppuStack_170 = (uint ***)0x1086295f;
        iVar4 = FUN_10856c80();
        if (iVar4 != 0) {
          ppuStack_16c = (uint **)0x1086296d;
          iVar4 = CEquipSuitSkillGroupInfo__GetSuitSkillId();
          if (0 < iVar4) {
            piVar5 = piStack_158 + 0x8b6;
            uVar3 = 0;
            do {
              if (*piVar5 == iVar4) {
                pppuStack_170 = (uint ***)piStack_158[uVar3 * 0x102 + 0x8b7];
                goto LAB_10862995;
              }
              uVar3 = uVar3 + 1;
              piVar5 = piVar5 + 0x102;
            } while (uVar3 < 0x80);
          }
        }
        pppuStack_170 = (uint ***)0x0;
LAB_10862995:
        ppuStack_16c = (uint **)0x0;
        puStack_174 = auStack_f0;
        puStack_178 = (uint *)0x1;
        puStack_17c = &uStack_b0;
        puStack_180 = puStack_14c;
        pcStack_184 = (char *)0x108629b7;
        cVar2 = CEquipInfo__BuildSuitSetBonusDisplay();
        goto LAB_108629d9;
      }
    }
  }
  else {
    ppuStack_16c = (uint **)auStack_f0;
    pppuStack_170 = local_150;
    puStack_178 = (uint *)0x108629d9;
    puStack_174 = puStack_14c;
    cVar2 = FUN_113022d0();
LAB_108629d9:
    if (cVar2 != '\0') {
      pppuStack_170 = &ppuStack_108;
      uStack_154 = CONCAT31(uStack_154._1_3_,((byte)local_124 & 0x8f) == 10);
      ppuStack_16c = (uint **)uStack_154;
      puStack_174 = (uint *)0x11dd1988;
      puStack_178 = local_120;
      puStack_17c = (uint *)0x10862a0e;
      cVar2 = (*(code *)(*local_128)[4])();
      if ((cVar2 != '\0') && (((byte)uStack_114 & 0x8f) == 6)) {
        if ((uStack_114 >> 6 & 1) == 0) {
          local_11c = puStack_110;
        }
        else {
          local_11c = (undefined4 *)*puStack_110;
        }
      }
      puStack_180 = &local_118;
      bVar6 = (bStack_134 & 0x8f) == 10;
      puStack_17c = (uint *)CONCAT31((int3)((uint)unaff_ESI >> 8),bVar6);
      pcStack_184 = "SUITEEQUIPTDESC_VO_CLASSNAME";
      uStack_188 = uStack_130;
      puStack_18c = (undefined1 *)0x10862a66;
      cVar2 = (**(code **)(*piStack_138 + 0x10))();
      if ((cVar2 != '\0') && (((byte)local_124 & 0x8f) == 6)) {
        if ((local_124 >> 6 & 1) == 0) {
          puStack_14c = local_120;
        }
        else {
          puStack_14c = (uint *)*local_120;
        }
      }
      puStack_17c = (uint *)0x0;
      puStack_18c = &DAT_11d9d32b;
      if (puStack_10c != (undefined1 *)0x0) {
        puStack_18c = puStack_10c;
      }
      piStack_190 = (int *)0x10862ab1;
      CPet__SetName();
      piStack_190 = (int *)uStack_114;
      ppuStack_194 = (uint **)0x11dd1a5c;
      ppiStack_198 = (int **)0x10862ac5;
      FUN_104d1440();
      auStack_4c[0] = 0;
      piStack_190 = (int *)auStack_4c;
      ppuStack_194 = (uint **)0x10862aef;
      piStack_3c = piStack_190;
      piStack_38 = piStack_190;
      FUN_100e5aa0();
      ppuStack_194 = (uint **)piStack_3c;
      ppiStack_198 = (int **)0x11dd1a4c;
      piStack_19c = (int *)0x10862b06;
      FUN_104d1670();
      if ((piStack_3c != &iStack_50) && (piStack_3c != (int *)0x0)) {
        ppuStack_194 = (uint **)piStack_3c;
        ppiStack_198 = (int **)0x10862b25;
        FUN_10c3d5d0();
      }
      ppuStack_194 = (uint **)puStack_110;
      ppiStack_198 = (int **)0x11dd1a3c;
      piStack_19c = (int *)0x10862b3f;
      FUN_104d1440();
      piStack_19c = (int *)puStack_10c;
      pppiStack_1a0 = (int ***)0x11dd1a2c;
      pcStack_1a4 = (char *)0x10862b56;
      FUN_104d1440();
      puStack_a8 = (uint *)0x0;
      ppuStack_194 = &puStack_a8;
      puStack_a4 = (uint *)0x0;
      auStack_f0[0] = 0;
      auStack_f0[1] = 0;
      ppiStack_198 = (int **)0x10862b94;
      FUN_11a98a70();
      uVar3 = 0;
      if ((int)ppuStack_108 - (int)puStack_10c >> 3 != 0) {
        do {
          ppiStack_198 = (int **)0x0;
          piStack_19c = (int *)0x0;
          pppiStack_1a0 = (int ***)piStack_158;
          pcStack_1a4 = acStack_f4;
          FUN_11a98de0();
          ppuStack_6c = &puStack_8c;
          puStack_8c = (uint *)((uint)puStack_8c & 0xffff0000);
          ppuStack_68 = ppuStack_6c;
          FUN_100e5b60(&puStack_8c);
          FUN_104d1700("m_strEquipName",ppuStack_6c);
          if ((ppuStack_6c != &puStack_90) && (ppuStack_6c != (uint **)0x0)) {
            FUN_10c3d5d0(ppuStack_6c);
          }
          FUN_104d15e0("m_bIsAct",(char)local_120[uVar3 * 2 + 1]);
          (**(code **)(*piStack_c0 + 0x3c))(uStack_b8,&ppuStack_108);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)((int)ppuStack_108 - (int)puStack_10c >> 3));
      }
      ppiStack_198 = (int **)&puStack_94;
      puStack_94 = (uint *)0x0;
      puStack_90 = (uint *)0x0;
      puStack_174 = (uint *)0x0;
      pppuStack_170 = (uint ***)0x0;
      piStack_19c = (int *)0x10862cc6;
      FUN_11a98a70();
      puStack_180 = (uint *)0x0;
      iVar4 = (int)((int)puStack_100 - uStack_104) >> 0x1f;
      if ((int)((int)puStack_100 - uStack_104) / 0x38 + iVar4 != iVar4) {
        puStack_17c = (uint *)0x0;
        do {
          uVar3 = uStack_104;
          puVar1 = puStack_17c;
          piStack_19c = (int *)0x0;
          pppiStack_1a0 = (int ***)0x0;
          pcStack_1a4 = pcStack_13c;
          FUN_11a98de0(&puStack_178);
          ppuStack_80 = &puStack_90;
          puStack_90 = (uint *)((uint)puStack_90 & 0xffffff00);
          ppuStack_7c = ppuStack_80;
          FUN_100e5aa0(ppuStack_80);
          FUN_104d1670("m_strEffectName",ppuStack_80);
          if ((ppuStack_80 != &puStack_94) && (ppuStack_80 != (uint **)0x0)) {
            FUN_10c3d5d0(ppuStack_80);
          }
          ppuStack_84 = &puStack_94;
          puStack_94 = (uint *)((uint)puStack_94 & 0xffffff00);
          ppuStack_80 = ppuStack_84;
          FUN_100e5aa0(ppuStack_84);
          FUN_104d1670("m_strEffectTips",ppuStack_84);
          if ((ppuStack_84 != &puStack_98) && (ppuStack_84 != (uint **)0x0)) {
            FUN_10c3d5d0(ppuStack_84);
          }
          if (param_2 != 0) {
            puStack_90 = (uint *)CONCAT31(puStack_90._1_3_,*(undefined1 *)((int)puVar1 + uVar3 + 8))
            ;
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x2;
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_bIsAct",&puStack_98,((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0xc);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nEffectTotalNeed",&puStack_98,((byte)puStack_18c & 0x8f) == 10)
            ;
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0x1c);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nOtherEquipNeed",&puStack_98,((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0x20);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nOtherEquipAct",&puStack_98,((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0x24);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nSelfConfigSkillNeedCnt",&puStack_98,
                       ((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0x28);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nSelfConfigSkillActCnt",&puStack_98,
                       ((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          if (param_2 != 0) {
            puStack_98 = (uint *)0x0;
            puStack_94 = (uint *)0x4;
            puStack_90 = *(uint **)((int)puVar1 + uVar3 + 0x2c);
            (**(code **)(*piStack_190 + 0x14))
                      (uStack_188,"m_nType",&puStack_98,((byte)puStack_18c & 0x8f) == 10);
            if (((uint)puStack_94 >> 6 & 1) != 0) {
              (**(code **)(*puStack_98 + 8))(&puStack_98,puStack_90);
            }
          }
          FUN_104d1440("m_nIndentationIndex",*(undefined4 *)((int)puVar1 + uVar3 + 0x30));
          uStack_70 = 0;
          puVar7 = &uStack_70;
          ppuStack_6c = (uint **)0x0;
          auStack_f0[4] = 0;
          auStack_f0[5] = 0;
          FUN_11a98a70();
          pcStack_1a4 = (char *)0x0;
          if (*(int *)((int)puVar1 + uVar3 + 0x14) - *(int *)((int)puVar1 + uVar3 + 0x10) >> 3 != 0)
          {
            do {
              FUN_11a98de0(auStack_f0 + 3,puStack_178,0,0);
              puStack_8c = &uStack_ac;
              uStack_ac = uStack_ac & 0xffff0000;
              puStack_88 = puStack_8c;
              FUN_100e5b60(&uStack_ac);
              FUN_104d1700("m_strEquipName",puStack_8c);
              if ((puStack_8c != &uStack_b0) && (puStack_8c != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_8c);
              }
              FUN_104d15e0("m_bIsAct",
                           *(undefined1 *)((int)puVar7 + *(int *)((int)puVar1 + uVar3 + 0x10) + 4));
              (**(code **)(*puStack_88 + 0x3c))(ppuStack_80,auStack_f8);
              pcStack_1a4 = pcStack_1a4 + 1;
            } while (pcStack_1a4 <
                     (char *)(*(int *)((int)puVar1 + uVar3 + 0x14) -
                              *(int *)((int)puVar1 + uVar3 + 0x10) >> 3));
          }
          (*(code *)(*ppuStack_194)[5])
                    (puStack_18c,"m_vecDesc",auStack_74,((byte)piStack_190 & 0x8f) == 10);
          (**(code **)(*piStack_c4 + 0x3c))(uStack_bc,&pcStack_1a4);
          if (((uint)piStack_c4 >> 6 & 1) != 0) {
            pppiStack_1a0 = (int ***)&ppuStack_c8;
            piStack_19c = piStack_c0;
            pcStack_1a4 = (char *)0x108632e2;
            (*(code *)(*ppuStack_c8)[2])();
            ppuStack_c8 = (uint **)0x0;
          }
          piStack_c4 = (int *)0x0;
          if ((uStack_54 >> 6 & 1) != 0) {
            pppiStack_1a0 = (int ***)&piStack_58;
            piStack_19c = (int *)iStack_50;
            pcStack_1a4 = (char *)0x10863321;
            (**(code **)(*piStack_58 + 8))();
          }
          puStack_180 = (uint *)((int)puStack_180 + 1);
          puStack_17c = puStack_17c + 0xe;
        } while (puStack_180 < (uint *)((int)((int)puStack_100 - uStack_104) / 0x38));
      }
      piStack_19c = (int *)(uint)(((byte)uStack_154 & 0x8f) == 10);
      pppiStack_1a0 = (int ***)&uStack_b0;
      pcStack_1a4 = "m_vecSuitDesc";
      (**(code **)(*piStack_158 + 0x14))(local_150);
      (**(code **)(*unaff_EDI + 0x14))(uStack_160,"m_vecEffectDesc",&puStack_a8,bVar6 == true);
      if ((uStack_144 >> 6 & 1) != 0) {
        pppuStack_170 = &ppuStack_148;
        ppuStack_16c = (uint **)uStack_140;
        puStack_174 = (uint *)0x108633d0;
        (*(code *)(*ppuStack_148)[2])();
        ppuStack_148 = (uint **)0x0;
      }
      uStack_144 = 0;
      if ((uStack_64 >> 6 & 1) != 0) {
        pppuStack_170 = &ppuStack_68;
        ppuStack_16c = (uint **)uStack_60;
        puStack_174 = (uint *)0x10863409;
        (*(code *)(*ppuStack_68)[2])();
        ppuStack_68 = (uint **)0x0;
      }
      uStack_64 = 0;
      if (((uint)piStack_c4 >> 6 & 1) != 0) {
        pppuStack_170 = &ppuStack_c8;
        ppuStack_16c = (uint **)piStack_c0;
        puStack_174 = (uint *)0x10863448;
        (*(code *)(*ppuStack_c8)[2])();
        ppuStack_c8 = (uint **)0x0;
      }
      piStack_c4 = (int *)0x0;
      if (((uint)ppuStack_7c >> 6 & 1) != 0) {
        pppuStack_170 = &ppuStack_80;
        ppuStack_16c = (uint **)uStack_78;
        puStack_174 = (uint *)0x10863487;
        (*(code *)(*ppuStack_80)[2])();
        ppuStack_80 = (uint **)0x0;
      }
      ppuStack_7c = (uint **)0x0;
      if (local_15c != (uint *)0x0) {
        ppuStack_16c = (uint **)local_15c;
        pppuStack_170 = (uint ***)0x108634ab;
        FUN_10c3da30();
      }
    }
  }
  ppuStack_16c = (uint **)0x108634ba;
  FUN_1086c6f0();
  ppuStack_16c = (uint **)0x108634c3;
  FUN_10863570();
LAB_108634c7:
  if ((uStack_104 >> 6 & 1) != 0) {
    ppuStack_16c = (uint **)puStack_100;
    pppuStack_170 = &ppuStack_108;
    puStack_174 = (uint *)0x108634e0;
    (*(code *)(*ppuStack_108)[2])();
    ppuStack_108 = (uint **)0x0;
  }
  uStack_104 = 0;
  if ((local_124 >> 6 & 1) != 0) {
    pppuStack_170 = &local_128;
    ppuStack_16c = (uint **)local_120;
    puStack_174 = (uint *)0x1086350d;
    (*(code *)(*local_128)[2])();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10864360 @ 10864360  size=449 ===== */
// strings:
//   "collumn"
//   "m_bIsLocal"
//   "m_nWeaponCurrentSlash"
//   "m_nWeaponCurrentSlashBuffer"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""collumn""
     ""m_bIsLocal""
     ""m_nWeaponCurrentSlash""
     ""m_nWeaponCurrentSlashBuffer"" */

void FUN_10864360(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  char local_2d;
  int local_2c [3];
  int *local_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
    *in_stack_00000018 = 0;
  }
  in_stack_00000018[1] = 2;
  *(undefined1 *)(in_stack_00000018 + 2) = 0;
  if (in_stack_00000014 == 1) {
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    uStack_18 = in_stack_00000010[2];
    uStack_10 = in_stack_00000010[4];
    local_2d = '\0';
    local_20 = (int *)0x0;
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,uStack_18);
    }
    FUN_107ccc30(local_2c);
    FUN_107ccc30(local_2c + 1);
    FUN_107ccc30(local_2c + 2);
    FUN_107cccb0(&local_2d);
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0xb4))();
      if (((iVar2 != 0) && ((local_2c[0] == 3 || (local_2c[0] == 8)))) && (local_2d != '\0')) {
        uVar3 = FUN_113509f0(2);
        FUN_104d1550("m_nWeaponCurrentSlash",uVar3);
        uVar3 = FUN_113509f0(4);
        FUN_104d1550("m_nWeaponCurrentSlashBuffer",uVar3);
      }
    }
    if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
      *in_stack_00000018 = 0;
    }
    in_stack_00000018[1] = 2;
    *(undefined1 *)(in_stack_00000018 + 2) = 1;
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,uStack_18);
    }
  }
  return;
}



/* ===== FUN_10865c50 @ 10865c50  size=2036 ===== */
// calls: CPet::SetName
// strings:
//   "randomWeaponSkillName"
//   "randomWeaponSkillDesc"
//   "canUnbind"
//   "isRandomWeapon"
//   "isRecast"
//   "rareScore"
//   "m_strComments"
//   "m_nRareType"
//   "m_nWeaponCurrentSlash"

/* [RE-AUTO c0]
   strings:
     ""randomWeaponSkillName""
     ""randomWeaponSkillDesc""
     ""canUnbind""
     ""isRandomWeapon""
     ""isRecast""
     ""rareScore""
     ""m_strComments""
     ""m_nRareType""
     ""m_nWeaponCurrentSlash"" */

void FUN_10865c50(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  uint uVar5;
  undefined4 *in_stack_00000010;
  uint uStack_104;
  undefined4 uStack_100;
  char *pcStack_fc;
  int **ppiStack_f8;
  int *piStack_f4;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  int *piStack_d0;
  uint uStack_cc;
  int *local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int *piStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int *piStack_98;
  int *piStack_94;
  int *local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_7c [4];
  int *piStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  int *piStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  int **ppiStack_50;
  int **ppiStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint *puStack_40;
  int ***pppiStack_3c;
  int ***pppiStack_38;
  uint **ppuStack_34;
  uint **ppuStack_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_e4;
  local_c8 = (int *)0x0;
  local_c4 = in_stack_00000010[1];
  local_bc = in_stack_00000010[3];
  piStack_f4 = (int *)in_stack_00000010[2];
  local_b8 = in_stack_00000010[4];
  local_c0 = piStack_f4;
  if ((local_c4 >> 6 & 1) != 0) {
    local_c8 = (int *)*in_stack_00000010;
    ppiStack_f8 = &local_c8;
    pcStack_fc = (char *)0x10865cb0;
    (**(code **)(*local_c8 + 4))();
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
    local_90 = (int *)in_stack_00000010[8];
  }
  else {
    local_90 = (int *)0xdeadbeaf;
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
    uStack_dc = in_stack_00000010[0xe];
  }
  else {
    uStack_dc = 0xdeadbeaf;
  }
  if (((byte)in_stack_00000010[0x13] & 0x8f) == 2) {
    uStack_e0._0_3_ = CONCAT12(*(undefined1 *)(in_stack_00000010 + 0x14),(ushort)uStack_e0);
  }
  else {
    uStack_e0._0_3_ = (uint3)(ushort)uStack_e0;
  }
  if (((in_stack_00000010[0x19] & 0x8f) == 3) || ((in_stack_00000010[0x19] & 0x8f) == 4)) {
    uStack_8c = in_stack_00000010[0x1a];
  }
  else {
    uStack_8c = 0xdeadbeaf;
  }
  if (((byte)in_stack_00000010[0x1f] & 0x8f) == 2) {
    uStack_e0 = CONCAT13(*(undefined1 *)(in_stack_00000010 + 0x20),(uint3)uStack_e0);
  }
  else {
    uStack_e0 = (uint)(uint3)uStack_e0;
  }
  if (((byte)in_stack_00000010[0x25] & 0x8f) == 5) {
    uStack_d8 = *(undefined8 *)(in_stack_00000010 + 0x26);
  }
  else {
    uStack_d8 = 0;
  }
  if (((byte)in_stack_00000010[0x31] & 0x8f) == 2) {
    uStack_e0._0_2_ = CONCAT11(*(undefined1 *)(in_stack_00000010 + 0x32),(byte)uStack_e0);
  }
  else {
    uStack_e0._0_2_ = (ushort)(byte)uStack_e0;
  }
  uStack_ac = in_stack_00000010[0x37];
  uStack_a4 = in_stack_00000010[0x39];
  piStack_f4 = (int *)in_stack_00000010[0x38];
  uStack_a0 = in_stack_00000010[0x3a];
  piStack_b0 = (int *)0x0;
  piStack_a8 = piStack_f4;
  if ((uStack_ac >> 6 & 1) != 0) {
    piStack_b0 = (int *)in_stack_00000010[0x36];
    ppiStack_f8 = &piStack_b0;
    pcStack_fc = (char *)0x10865df6;
    (**(code **)(*piStack_b0 + 4))();
  }
  if (((byte)in_stack_00000010[0x3d] & 0x8f) == 2) {
    piStack_94 = (int *)CONCAT31(piStack_94._1_3_,*(undefined1 *)(in_stack_00000010 + 0x3e));
  }
  else {
    piStack_94 = (int *)((uint)piStack_94._1_3_ << 8);
  }
  if (uStack_e0._2_1_ == '\0') {
    if (DAT_1202e818 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piStack_f4 = (int *)0x10865e3d;
      piVar2 = (int *)FUN_10858a70();
    }
  }
  else {
    piStack_f4 = (int *)0x10865e27;
    piVar2 = (int *)FUN_107cb630();
  }
  if (uStack_e0._3_1_ != '\0') {
    if (DAT_1202e818 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piStack_f4 = piStack_94;
      ppiStack_f8 = (int **)uStack_d8._4_4_;
      pcStack_fc = (char *)(int *)uStack_d8;
      uStack_100 = 0x10865e66;
      piVar2 = (int *)FUN_10858670();
    }
  }
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  piStack_f4 = (int *)(uint)(((byte)local_c4 & 0x8f) == 10);
  ppiStack_f8 = (int **)&uStack_70;
  uStack_54 = 0;
  pcStack_fc = "randomWeaponSkillName";
  uStack_100 = local_c0;
  uStack_104 = 0x10865ec4;
  (**(code **)(*local_c8 + 0x10))();
  uStack_104 = (uint)(((byte)((ulonglong)uStack_d8 >> 0x20) & 0x8f) == 10);
  (**(code **)(*(int *)uStack_d8 + 0x10))(piStack_d0);
  if (piVar2 != (int *)0x0) {
    if (((piVar2[8] != 0) && (iVar3 = FUN_11669250(), *(int *)(iVar3 + 0x108) != 0)) &&
       (0 < *(int *)(iVar3 + 0x10c))) {
      FUN_104d15e0("canUnbind",1);
      cVar1 = FUN_116698a0();
      if (((cVar1 != '\0') && (cVar1 = FUN_1166e250(), cVar1 != '\0')) &&
         ((iVar3 = FUN_1166dc70(), 0 < iVar3 || (uStack_100._1_1_ != '\0')))) {
        FUN_104d15e0("canUnbind",0);
      }
    }
    cVar1 = FUN_116698a0();
    if (cVar1 != '\0') {
      cVar1 = FUN_1166e250();
      if (cVar1 == '\0') {
        FUN_104d15e0("isRandomWeapon",0);
        FUN_104d15e0("isRecast",0);
      }
      else {
        FUN_104d15e0("isRandomWeapon",1);
        iVar3 = FUN_1166dc70();
        FUN_104d15e0("isRecast",0 < iVar3);
        uVar4 = FUN_1166dbb0();
        FUN_104d1550("rareScore",uVar4);
        (**(code **)(*piVar2 + 0x20))();
        ppuStack_34 = &puStack_44;
        puStack_44 = (uint *)((uint)puStack_44 & 0xffffff00);
        ppuStack_30 = ppuStack_34;
        FUN_100e5aa0(ppuStack_34);
        FUN_104d1670("m_strComments",ppuStack_34);
        if ((ppuStack_34 != &puStack_48) && (ppuStack_34 != (uint **)0x0)) {
          FUN_10c3d5d0(ppuStack_34);
        }
        uVar4 = (**(code **)(*piVar2 + 0x14))();
        uStack_100 = 0;
        CPet__SetName(uVar4);
        pppiStack_3c = &ppiStack_4c;
        ppiStack_4c = (int **)((uint)ppiStack_4c & 0xffffff00);
        pppiStack_38 = pppiStack_3c;
        FUN_100e5aa0(pppiStack_3c);
        FUN_104d1670(&DAT_11dbac80,pppiStack_3c);
        if ((pppiStack_3c != &ppiStack_50) && (pppiStack_3c != (int ***)0x0)) {
          FUN_10c3d5d0(pppiStack_3c);
        }
        if (auStack_68 != (undefined1 *)0x0) {
          FUN_10c3da30(auStack_68);
        }
        uVar4 = (**(code **)(*piVar2 + 0x2c))();
        FUN_104d1550("m_nRareType",uVar4);
        uVar4 = FUN_1166dff0();
        FUN_104d1550("m_nWeaponCurrentSlash",uVar4);
        uVar4 = FUN_11669730();
        iVar3 = FUN_1052c9e0(uVar4);
        if (iVar3 == 0) goto LAB_10866365;
        iVar3 = FUN_100e5b40(&puStack_44);
        FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar3 + 0x14));
        if ((ppuStack_34 != &puStack_48) && (ppuStack_34 != (uint **)0x0)) {
          FUN_10c3d5d0(ppuStack_34);
        }
        iVar3 = FUN_100e5b40(&puStack_48);
        FUN_104d1670("m_strComments",*(undefined4 *)(iVar3 + 0x14));
        if ((pppiStack_3c != &ppiStack_50) && (pppiStack_3c != (int ***)0x0)) {
          FUN_10c3d5d0(pppiStack_3c);
        }
      }
      uStack_104 = 0;
      uStack_100 = 0;
      pcStack_fc = (char *)0x0;
      FUN_1166dac0(&uStack_104);
      piStack_a8 = (int *)0x0;
      uVar5 = 0;
      uStack_a4 = 0;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      if ((int)piStack_f4 - (int)ppiStack_f8 >> 2 != 0) {
        do {
          FUN_11a98e10(&piStack_a8,*(undefined4 *)((int)ppiStack_f8[uVar5] + 0x18));
          (**(code **)(*piStack_98 + 0x3c))(local_90,&piStack_b0);
          puStack_44 = &uStack_54;
          uStack_54 = uStack_54 & 0xffffff00;
          puStack_40 = puStack_44;
          FUN_100e5aa0(puStack_44);
          FUN_11a98e10(&uStack_74,puStack_44);
          if ((ppiStack_4c != &piStack_60) && (ppiStack_4c != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_4c);
          }
          (**(code **)(*piStack_94 + 0x3c))(uStack_8c,auStack_7c);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)piStack_f4 - (int)ppiStack_f8 >> 2));
      }
      if ((uStack_5c >> 6 & 1) != 0) {
        (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
        piStack_60 = (int *)0x0;
      }
      uStack_5c = 0;
      if ((uStack_a4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
        piStack_a8 = (int *)0x0;
      }
      uStack_a4 = 0;
      if (ppiStack_f8 != (int **)0x0) {
        FUN_10c3d5d0(ppiStack_f8);
      }
    }
  }
LAB_10866365:
  if ((uStack_74 >> 6 & 1) != 0) {
    (**(code **)(*piStack_78 + 8))(&piStack_78,uStack_70);
    piStack_78 = (int *)0x0;
  }
  uStack_74 = 0;
  if ((uStack_8c >> 6 & 1) != 0) {
    (**(code **)(*local_90 + 8))(&local_90,uStack_88);
    local_90 = (int *)0x0;
  }
  uStack_8c = 0;
  if ((uStack_cc >> 6 & 1) != 0) {
    (**(code **)(*piStack_d0 + 8))(&piStack_d0,local_c8);
    piStack_d0 = (int *)0x0;
  }
  uStack_cc = 0;
  if ((uStack_e4 >> 6 & 1) != 0) {
    (**(code **)(*unaff_EBX + 8))(&stack0xffffff18,uStack_e0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10866ba0 @ 10866ba0  size=377 ===== */
// strings:
//   "m_nEquipSkillBuffLevel"
//   "m_nEquipSkillBuffDesc"

/* [RE-AUTO c0]
   strings:
     ""m_nEquipSkillBuffLevel""
     ""m_nEquipSkillBuffDesc"" */

void FUN_10866ba0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *piStack_48;
  uint local_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_48;
  if (in_stack_00000014 == 1) {
    local_14 = local_24;
    local_44 = 0;
    local_10 = local_14;
    FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
    piStack_48 = (int *)0x0;
    local_44 = in_stack_00000010[1];
    uStack_3c = in_stack_00000010[3];
    piStack_40 = (int *)in_stack_00000010[2];
    uStack_38 = in_stack_00000010[4];
    if ((local_44 >> 6 & 1) != 0) {
      piStack_48 = (int *)*in_stack_00000010;
      (**(code **)(*piStack_48 + 4))(&piStack_48,piStack_40);
    }
    FUN_107ccc30(&stack0xffffffb4);
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2d1c) != 0)) {
        iVar3 = FUN_113f9820(local_44);
        if (iVar3 != 0) {
          uVar2 = *(undefined4 *)(iVar3 + 0x24);
          if ((undefined1 *)(iVar3 + 0xc) != local_24) {
            FUN_100d83d0(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x1c));
          }
          FUN_104d1550("m_nEquipSkillBuffLevel",uVar2);
          FUN_104d1670("m_nEquipSkillBuffDesc",local_10);
        }
      }
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
      piStack_40 = (int *)0x0;
    }
    uStack_3c = 0;
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_10);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108765a0 @ 108765a0  size=158 ===== */
// calls: CTalentInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   calls: CTalentInfo::GetManagers
   strings:
     ""CTalentInfo"" */

undefined4 FUN_108765a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd260c;
  puVar2 = (undefined4 *)CTalentInfo__GetInfoMgrSingleton();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CTalentInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c77f0 & 1) == 0) {
        DAT_123c77f0 = DAT_123c77f0 | 1;
        FUN_1087f0c0();
        FUN_11a8911f(&LAB_11c73ec0);
      }
      puVar2 = &DAT_123c77f4;
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



/* ===== FUN_10876810 @ 10876810  size=134 ===== */
// calls: CNewSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   calls: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo"" */

undefined4 FUN_10876810(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8590;
  puVar1 = (undefined4 *)CNewSkillInfo__GetInfoManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CNewSkillInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123be988 & 1) == 0) {
        DAT_123be988 = DAT_123be988 | 1;
        FUN_107d58f0();
        FUN_11a8911f(&LAB_11c70810);
      }
      puVar1 = &DAT_123be9c4;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_108768a0 @ 108768a0  size=109 ===== */
// calls: CNewSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   calls: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo"" */

void FUN_108768a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8590;
  puVar1 = (undefined4 *)CNewSkillInfo__GetInfoManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CNewSkillInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123be988 & 1) == 0) {
        DAT_123be988 = DAT_123be988 | 1;
        FUN_107d58f0();
        FUN_11a8911f(&LAB_11c70810);
      }
      piVar2 = &DAT_123be9c4;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_10876d10 @ 10876d10  size=1816 ===== */
// strings:
//   "InitModel"
//   "WeaponGeneralViewWindowHide"
//   "InitGeneral"
//   "WeaponUnlockUIOpened"
//   "InitWeaponUnlockView"
//   "ApplyWeaponTutorial"
//   "WeaponSelect"
//   "SetCurrentPlayerWeapon"
//   "VideoViewAlready"
//   "WeaponTalentActived"
//   "CloseUI"
//   "InitViewModel"
//   "InitTalentCom"
//   "GetProfoundSkillData"
//   "GetActiveProfoundSkillData"
//   "ActivateWeaponProfound"
//   "UnactivateWeaponProfound"
//   "SetWeaponStyle"
//   "GetWeaponStyleData"
//   "GetItemColumnGridByID"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""WeaponGeneralViewWindowHide""
     ""InitGeneral""
     ""WeaponUnlockUIOpened""
     ""InitWeaponUnlockView""
     ""ApplyWeaponTutorial""
     ""WeaponSelect""
     ""SetCurrentPlayerWeapon""
     ""VideoViewAlready""
     ""WeaponTalentActived"" */

void __fastcall FUN_10876d10(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  code *pcStack_184;
  char *pcStack_180;
  code **ppcStack_17c;
  code ***pppcStack_178;
  code *pcStack_174;
  code **ppcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  code **ppcStack_164;
  code **ppcStack_160;
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
  code ***pppcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  code ***pppcStack_fc;
  code ***pppcStack_f8;
  code ***pppcStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  undefined4 ***pppuStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  undefined4 ***pppuStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
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
  undefined4 ***pppuStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  undefined4 ***pppuStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10876d44;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10877440;
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined4 ***)0x10876d55;
  FUN_1087c9e0();
  if (((code ****)pppuStack_20 != &pppcStack_34) && ((code ****)pppuStack_20 != (code ****)0x0)) {
    pppuStack_3c = pppuStack_20;
    pppcStack_40 = (code ***)0x10876d6b;
    FUN_10c3d5d0();
  }
  local_24 = &pppcStack_34;
  pppuStack_3c = (undefined4 ***)0x11dd1dff;
  pppcStack_40 = (code ***)0x11dd1de4;
  pppcStack_44 = (code ***)0x10876d8b;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)&LAB_1087a150;
  pppcStack_48 = (code ***)&pppuStack_3c;
  pppcStack_4c = (code ***)0x10876d9c;
  FUN_1087c9e0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10876db2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd1de3;
  pppcStack_50 = (code ***)0x11dd1dd8;
  pppcStack_54 = (code ***)0x10876dd2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1087a110;
  pppuStack_58 = &pppcStack_4c;
  pppcStack_5c = (code ***)0x10876de3;
  FUN_1087c9e0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10876df9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd1dd4;
  pppcStack_60 = (code ***)0x11dd1dc0;
  pppcStack_64 = (code ***)0x10876e19;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_1087a410;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10876e2a;
  FUN_1087c9e0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10876e40;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd1ed8;
  pppcStack_70 = (code ***)0x11dd1ec4;
  pppcStack_74 = (code ***)0x10876e60;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_1087a250;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10876e71;
  FUN_1087c9e0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10876e87;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd1ec3;
  pppcStack_80 = (code ***)0x11dd1eb0;
  pppcStack_84 = (code ***)0x10876ea7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10879fa0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10876eb8;
  FUN_1087c9e0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x10876ece;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dd1eac;
  pppcStack_90 = (code ***)0x11dd1ea0;
  pppcStack_94 = (code ***)0x10876eee;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_108774f0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x10876eff;
  FUN_1087c9e0();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x10876f15;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dd1e9e;
  pppcStack_a0 = (code ***)0x11dd1e88;
  pppcStack_a4 = (code ***)0x10876f35;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10879e90;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x10876f46;
  FUN_1087c9e0();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppuStack_b0 = (undefined4 ***)0x10876f5c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd1e84;
  pppuStack_b0 = (undefined4 ***)0x11dd1e74;
  pppuStack_b4 = (undefined4 ***)0x10876f7c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppuStack_b4 = (undefined4 ***)FUN_10877580;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x10876f8d;
  FUN_1087c9e0();
  if (((undefined4 ****)pppcStack_a0 != &pppuStack_b4) &&
     ((undefined4 ****)pppcStack_a0 != (undefined4 ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x10876fa3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppuStack_b4;
  pppcStack_bc = (code ***)0x11dd1e73;
  pppcStack_c0 = (code ***)0x11dd1e60;
  pppcStack_c4 = (code ***)0x10876fc3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_10877850;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppuStack_cc = (undefined4 ***)0x10876fd4;
  FUN_1087c9e0();
  if (((code ****)pppuStack_b0 != &pppcStack_c4) && ((code ****)pppuStack_b0 != (code ****)0x0)) {
    pppuStack_cc = pppuStack_b0;
    pppcStack_d0 = (code ***)0x10876fea;
    FUN_10c3d5d0();
  }
  pppuStack_b4 = &pppcStack_c4;
  pppuStack_cc = (undefined4 ***)0x11dbf4bb;
  pppcStack_d0 = (code ***)0x11dbf4b4;
  pppcStack_d4 = (code ***)0x1087700a;
  pppuStack_b0 = pppuStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)&LAB_10877660;
  pppcStack_d8 = (code ***)&pppuStack_cc;
  pppcStack_dc = (code ***)0x1087701b;
  FUN_1087c9e0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x10877031;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd1e5d;
  pppcStack_e0 = (code ***)0x11dd1e50;
  pppcStack_e4 = (code ***)0x10877051;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_10878b00;
  pppuStack_e8 = &pppcStack_dc;
  pppcStack_ec = (code ***)0x10877062;
  FUN_1087c9e0();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x10877078;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dd1e4d;
  pppcStack_f0 = (code ***)0x11dd1e40;
  pppcStack_f4 = (code ***)0x10877098;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)MHUI__RegisterWeaponTalentCallbacks;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x108770a9;
  FUN_1087c9e0();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x108770bf;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11dd1f90;
  pppcStack_100 = (code ***)0x11dd1f7c;
  pppcStack_104 = (code ***)0x108770df;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_1087a4c0;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x108770f0;
  FUN_1087c9e0();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x10877106;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd1f7a;
  pppcStack_110 = (code ***)0x11dd1f60;
  pppcStack_114 = (code ***)0x10877126;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_1087a9e0;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppcStack_11c = (code ***)0x10877137;
  FUN_1087c9e0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x1087714d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd1f5e;
  pppcStack_120 = (code ***)0x11dd1f48;
  pppcStack_124 = (code ***)0x1087716d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_1087b000;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x1087717e;
  FUN_1087c9e0();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x10877194;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd1f44;
  pppcStack_130 = (code ***)0x11dd1f2c;
  pppcStack_134 = (code ***)0x108771b4;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_1087b250;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x108771c5;
  FUN_1087c9e0();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x108771db;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dd1f2a;
  pppcStack_140 = (code ***)0x11dd1f1c;
  pppcStack_144 = (code ***)0x108771fb;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_1087b330;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x1087720c;
  FUN_1087c9e0();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x10877222;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dd1f1a;
  pppcStack_150 = (code ***)0x11dd1f08;
  pppcStack_154 = (code ***)0x10877242;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_1087b3e0;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x10877253;
  FUN_1087c9e0();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    ppcStack_160 = (code **)0x10877269;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dd1f05;
  ppcStack_160 = (code **)0x11dd1ef0;
  ppcStack_164 = (code **)0x10877289;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  ppcStack_164 = (code **)FUN_1087be80;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x1087729a;
  FUN_1087c9e0();
  if ((pppcStack_150 != &ppcStack_164) && (pppcStack_150 != (code ***)0x0)) {
    pppcStack_16c = pppcStack_150;
    ppcStack_170 = (code **)0x108772b0;
    FUN_10c3d5d0();
  }
  pppcStack_154 = &ppcStack_164;
  pppcStack_16c = (code ***)0x11dd1eef;
  ppcStack_170 = (code **)0x11dd1edc;
  pcStack_174 = (code *)0x108772d0;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pcStack_174 = MHUI__BuildWeaponDeriveTreeData;
  pppcStack_178 = (code ***)&pppcStack_16c;
  ppcStack_17c = (code **)0x108772e1;
  FUN_1087c9e0();
  if ((ppcStack_160 != &pcStack_174) && (ppcStack_160 != (code **)0x0)) {
    ppcStack_17c = ppcStack_160;
    pcStack_180 = (char *)0x108772f7;
    FUN_10c3d5d0();
  }
  ppcStack_164 = &pcStack_174;
  ppcStack_17c = (code **)0x11dd1fff;
  pcStack_180 = "GetWeaponDeriveTipsMaterial";
  pcStack_184 = (code *)0x10877317;
  ppcStack_160 = ppcStack_164;
  FUN_100b62c0();
  pcStack_184 = FUN_1087b630;
  FUN_1087c9e0(&ppcStack_17c);
  if ((ppcStack_170 != &pcStack_184) && (ppcStack_170 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_170);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_1087f430();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_1087f480();
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_1087f4d0(param_1,extraout_ECX_01);
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_1087f520();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_03);
      FUN_10d17870();
      FUN_1087f570();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10877440 @ 10877440  size=162 ===== */
// strings:
//   "_getSkillListData"

/* [RE-AUTO c0]
   strings:
     ""_getSkillListData"" */

void FUN_10877440(void)

{
  int *unaff_ESI;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    FUN_104d13b0("_getSkillListData",FUN_10877c00);
    FUN_104f42b0(&local_20);
    if (((uint)local_20 >> 6 & 1) != 0) {
      (**(code **)(*unaff_ESI + 8))(&stack0xffffffdc,local_1c);
    }
  }
  return;
}



/* ===== FUN_10877c00 @ 10877c00  size=3822 ===== */
// calls: CPet::SetName, CNewSkillInfo::BuildSkillDisplayList
// strings:
//   "VO_CLASS_NAME"
//   "skillid"
//   "skill_name"
//   "skill_status"
//   "skill_content"
//   "video_file"
//   "special"
//   "profoundIcon"
//   "unlockTips"
//   "skill_op_str1"
//   "skill_op_str2"
//   "skill_key_string"
//   "gp_num"
//   "skill_gp_op_str1"
//   "skill_gp_op_str2"
//   "skill_gp_op_str3"
//   "skill_gp_op_img1"
//   "skill_gp_op_img2"
//   "skill_gp_op_img3"
//   "gp_skill_content"

/* [RE-AUTO c0]
   strings:
     ""VO_CLASS_NAME""
     ""skillid""
     ""skill_name""
     ""skill_status""
     ""skill_content""
     ""video_file""
     ""special""
     ""profoundIcon""
     ""unlockTips""
     ""skill_op_str1"" */

void FUN_10877c00(int ****param_1,int param_2,int param_3,int ***param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int ****ppppiVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int iVar9;
  int *unaff_ESI;
  bool bVar10;
  char *pcVar11;
  int ***pppiStack_1d4;
  undefined4 uStack_1d0;
  int ***pppiStack_1cc;
  int ***pppiStack_1c8;
  int ***pppiStack_1c4;
  int ****ppppiStack_1c0;
  int ***pppiStack_1bc;
  int ***pppiStack_1b8;
  int ****ppppiStack_1b4;
  char *pcStack_1b0;
  int ***pppiStack_1ac;
  int ***pppiStack_1a8;
  int iStack_1a4;
  undefined4 **ppuStack_1a0;
  undefined1 *puStack_19c;
  undefined4 uStack_198;
  int ***pppiStack_194;
  int ***pppiStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int ***pppiStack_184;
  char *pcStack_180;
  int ****ppppiStack_17c;
  int ***pppiStack_178;
  int ***pppiStack_174;
  int ***pppiStack_170;
  char *pcStack_16c;
  undefined4 *puStack_168;
  int *piStack_164;
  int ****ppppiStack_160;
  int ***pppiStack_15c;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_138;
  int iStack_134;
  int *piStack_130;
  char *pcStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  int **ppiStack_120;
  int ***pppiStack_11c;
  int **ppiStack_118;
  undefined1 auStack_114 [4];
  int ***pppiStack_110;
  int ***pppiStack_10c;
  int ***local_108;
  int ***pppiStack_104;
  int ***pppiStack_100;
  int ***pppiStack_fc;
  undefined4 *puStack_f8;
  int ***pppiStack_f4;
  undefined4 uStack_f0;
  int ****local_ec;
  int ***pppiStack_e8;
  uint uStack_e4;
  int ***pppiStack_e0;
  int ***pppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  int **ppiStack_cc;
  int ***apppiStack_c8 [2];
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  int ***pppiStack_b8;
  int ***pppiStack_b4;
  int ***pppiStack_b0;
  int ***pppiStack_ac;
  uint ***pppuStack_a8;
  uint ***pppuStack_a4;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined1 *puStack_74;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 auStack_58 [16];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [4];
  int **appiStack_3c [4];
  undefined1 *puStack_2c;
  int ***pppiStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_14c;
  local_ec = param_1;
  if ((((param_1 != (int ****)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int ***)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      pppiStack_15c = param_1[2];
      ppppiStack_160 = param_1;
      piStack_164 = (int *)0x10877c6b;
      (*(code *)(**param_1)[2])();
      *param_1 = (int ***)0x0;
    }
    pppiStack_15c = param_4;
    param_1[1] = (int ***)0x3;
    param_1[2] = (int ***)0x0;
    ppppiStack_160 = (int ****)0x10877c89;
    FUN_104f4330();
    ppppiStack_160 = (int ****)(param_4 + 6);
    piStack_164 = (int *)0x10877c99;
    FUN_104f4330();
    if ((((uint)pppiStack_bc & 0x8f) == 3) || (((uint)pppiStack_bc & 0x8f) == 4)) {
      pppiStack_11c = pppiStack_b8;
    }
    else {
      pppiStack_11c = (int ***)0xdeadbeaf;
    }
    puStack_168 = &uStack_f0;
    uStack_f0 = 0;
    local_ec = (int ****)0x0;
    piStack_130 = (int *)CONCAT31(piStack_130._1_3_,((byte)pppiStack_10c & 0x8f) == 10);
    ppiStack_118 = (int **)0x0;
    piStack_164 = piStack_130;
    pcStack_16c = "VO_CLASS_NAME";
    pppiStack_170 = local_108;
    pppiStack_174 = (int ***)0x10877d09;
    cVar2 = (*(code *)(*pppiStack_110)[4])();
    if ((cVar2 != '\0') && (((byte)pppiStack_fc & 0x8f) == 6)) {
      if (((uint)pppiStack_fc >> 6 & 1) == 0) {
        puStack_128 = puStack_f8;
      }
      else {
        puStack_128 = (undefined4 *)*puStack_f8;
      }
    }
    pppiStack_174 = (int ***)&pppiStack_e8;
    pppiStack_e8 = (int ***)0x0;
    uStack_e4 = 0;
    pppiStack_178 = (int ***)0x10877d59;
    FUN_11a98a70();
    ppppiStack_17c = (int ****)0x10877d5f;
    piVar4 = (int *)FUN_107d45b0();
    pppiStack_178 = (int ***)0x10877d69;
    iStack_144 = (**(code **)(*piVar4 + 0x28))();
    iVar9 = 0;
    puStack_48 = auStack_58;
    iStack_138 = 0;
    auStack_58[0] = 0;
    iStack_134 = 0;
    pppiStack_178 = (int ***)0x0;
    puStack_44 = puStack_48;
    if (DAT_1202e818 != 0) {
      pppiStack_178 = (int ***)0x0;
      if (*(int *)(DAT_1202e818 + 0xd0) != 0) {
        piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
        pppiStack_178 = (int ***)0x0;
        if (piVar4 != (int *)0x0) {
          pppiStack_178 = (int ***)0x10877dbe;
          iVar5 = (**(code **)(*piVar4 + 0xb4))();
          pppiStack_178 = (int ***)extraout_ECX;
          if (iVar5 != 0) {
            pppiStack_178 = (int ***)0x10877dca;
            iVar9 = (**(code **)(**(int **)(iVar5 + 0x14) + 4))();
            pppiStack_178 = (int ***)extraout_ECX_00;
            iStack_134 = iVar9;
          }
        }
      }
    }
    puStack_128 = (undefined4 *)0x0;
    iStack_148 = 0;
    if (0 < iStack_144) {
      do {
        ppppiStack_17c = (int ****)0x10877df6;
        iVar5 = FUN_107d45b0();
        pppiStack_178 = (int ***)extraout_ECX_01;
        if ((((-1 < iStack_148) &&
             (pppiStack_178 = (int ***)(*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2),
             iStack_148 < (int)pppiStack_178)) &&
            (piVar4 = *(int **)(*(int *)(iVar5 + 0x14) + iStack_148 * 4), piVar4 != (int *)0x0)) &&
           ((int *)piVar4[5] == piStack_130)) {
          pppiStack_178 = (int ***)0x0;
          ppppiStack_17c = (int ****)0x0;
          pcStack_180 = pcStack_12c;
          pppiStack_184 = (int ***)&piStack_164;
          piStack_164 = (int *)0x0;
          ppppiStack_160 = (int ****)0x0;
          uStack_188 = (int ****)0x10877e55;
          FUN_11a98de0();
          uStack_188 = (int ****)0x10877e5c;
          uStack_188 = (int ****)(**(code **)(*piVar4 + 0x18))();
          uStack_18c = "skillid";
          pppiStack_190 = (int ***)0x10877e6d;
          FUN_104d1550();
          apppiStack_c8[0] = (int ***)((uint)apppiStack_c8[0] & 0xffffff00);
          uStack_188 = apppiStack_c8;
          uStack_18c = (char *)0x10877e96;
          pppiStack_b8 = (int ***)uStack_188;
          pppiStack_b4 = (int ***)uStack_188;
          FUN_100e5aa0();
          uStack_18c = (char *)pppiStack_b8;
          pppiStack_190 = (int ***)0x11dd20ac;
          pppiStack_194 = (int ***)0x10877ead;
          FUN_104d1670();
          if ((pppiStack_b8 != &ppiStack_cc) && ((int ****)pppiStack_b8 != (int ****)0x0)) {
            uStack_18c = (char *)pppiStack_b8;
            pppiStack_190 = (int ***)0x10877ecc;
            FUN_10c3d5d0();
          }
          uStack_18c = (char *)&ppiStack_cc;
          ppiStack_cc = (int **)((uint)ppiStack_cc & 0xffffff00);
          pppiStack_190 = (int ***)0x10877ef5;
          pppiStack_bc = (int ***)uStack_18c;
          pppiStack_b8 = (int ***)uStack_18c;
          FUN_100e5aa0();
          pppiStack_190 = pppiStack_bc;
          pppiStack_194 = (int ***)0x11dd209c;
          uStack_198 = (char *)0x10877f0c;
          FUN_104d1670();
          if (((int ****)pppiStack_bc != &pppiStack_d0) && ((int ****)pppiStack_bc != (int ****)0x0)
             ) {
            pppiStack_190 = pppiStack_bc;
            pppiStack_194 = (int ***)0x10877f2b;
            FUN_10c3d5d0();
          }
          pppiStack_190 = (int ***)&pppiStack_d0;
          pppiStack_d0 = (int ***)((uint)pppiStack_d0 & 0xffffff00);
          pppiStack_194 = (int ***)0x10877f57;
          pppiStack_c0 = pppiStack_190;
          pppiStack_bc = pppiStack_190;
          FUN_100e5aa0();
          pppiStack_194 = pppiStack_c0;
          uStack_198 = "skill_content";
          puStack_19c = (undefined1 *)0x10877f6e;
          FUN_104d1670();
          if (((int ****)pppiStack_c0 != &pppiStack_d4) && ((int ****)pppiStack_c0 != (int ****)0x0)
             ) {
            pppiStack_194 = pppiStack_c0;
            uStack_198 = (char *)0x10877f8d;
            FUN_10c3d5d0();
          }
          pppiStack_194 = (int ***)piVar4[0x65];
          uStack_198 = "video_file";
          puStack_19c = (undefined1 *)0x10877fa6;
          FUN_104d1670();
          puStack_19c = (undefined1 *)piVar4[0x5f];
          ppuStack_1a0 = (undefined4 **)0x11dd2078;
          iStack_1a4 = 0x10877fbc;
          FUN_104d1670();
          iStack_1a4 = piVar4[0x6d];
          pppiStack_1a8 = (int ***)0x11dd2068;
          pppiStack_1ac = (int ***)0x10877fd2;
          FUN_104d1670();
          pppiStack_1ac = (int ***)piVar4[0x5f];
          pcStack_1b0 = "special";
          ppppiStack_1b4 = (int ****)0x10877fe8;
          FUN_104d1670();
          pppiStack_184 = (int ***)((uint)pppiStack_184 & 0xffffff);
          if (iVar9 == 0) {
            pppiStack_194 = (int ***)0x0;
            uStack_198 = &DAT_11dd2124;
            puStack_19c = (undefined1 *)0x1087812c;
            FUN_104d15e0();
          }
          else {
            pppiStack_194 = (int ***)0x10878007;
            pppiStack_194 = (int ***)(**(code **)(*piVar4 + 0x18))();
            uStack_198 = (char *)0x1087800f;
            uVar3 = FUN_112b4000();
            uStack_188 = (int ****)CONCAT13(uVar3,(undefined3)uStack_188);
            uStack_198 = (char *)0x1087801a;
            uStack_198 = (char *)(**(code **)(*piVar4 + 0x18))();
            puStack_19c = (undefined1 *)0x10878022;
            ppppiVar6 = (int ****)FUN_112b3610();
            ppppiStack_160 = ppppiVar6;
            if (uStack_18c._3_1_ == '\0') {
              puStack_19c = (undefined1 *)0x10878034;
              puStack_19c = (undefined1 *)(**(code **)(*piVar4 + 0x18))();
              ppuStack_1a0 = (undefined4 **)0x1087803c;
              ppppiVar6 = (int ****)FUN_112b4040();
              if ((char)ppppiVar6 != '\0') goto LAB_10878044;
              puStack_19c = (undefined1 *)CONCAT31((int3)((uint)ppppiVar6 >> 8),1);
            }
            else {
LAB_10878044:
              puStack_19c = (undefined1 *)((uint)ppppiVar6 & 0xffffff00);
            }
            ppuStack_1a0 = (undefined4 **)&DAT_11dd2060;
            iStack_1a4 = 0x10878057;
            FUN_104d15e0();
            piStack_164 = (int *)0x0;
            puStack_19c = &DAT_11d9d32b;
            ppuStack_1a0 = (undefined4 **)0x10878070;
            CPet__SetName();
            ppuStack_1a0 = &puStack_168;
            iStack_1a4 = 0x1087807c;
            iStack_1a4 = (**(code **)(*piVar4 + 0x18))();
            pppiStack_1a8 = (int ***)0x10878084;
            cVar2 = FUN_112b3590();
            if (cVar2 != '\0') {
              pppiStack_1a8 = (int ***)&pppiStack_e8;
              pppiStack_e8 = (int ***)((uint)pppiStack_e8 & 0xffffff00);
              pppiStack_1ac = (int ***)0x108780af;
              pppiStack_d8 = pppiStack_1a8;
              pppiStack_d4 = pppiStack_1a8;
              FUN_100e5aa0();
              pppiStack_1ac = pppiStack_d8;
              pcStack_1b0 = "unlockTips";
              ppppiStack_1b4 = (int ****)0x108780c6;
              FUN_104d1670();
              if (((int ****)pppiStack_d4 != &pppiStack_e8) &&
                 ((int ****)pppiStack_d4 != (int ****)0x0)) {
                pppiStack_1a8 = pppiStack_d4;
                pppiStack_1ac = (int ***)0x108780e5;
                FUN_10c3d5d0();
              }
            }
            pppiStack_1a8 = (int ***)(uint)(uStack_198._3_1_ == '\0');
            pppiStack_1ac = (int ***)&DAT_11dd2124;
            pcStack_1b0 = (char *)0x10878104;
            FUN_104d15e0();
            if ((int ****)pppiStack_170 != (int ****)0x0) {
              pppiStack_1a8 = pppiStack_170;
              pppiStack_1ac = (int ***)0x10878115;
              FUN_10c3da30();
            }
          }
          pppuStack_a8 = (uint ***)&pppiStack_b8;
          puStack_90 = auStack_a0;
          puStack_60 = auStack_70;
          pppiStack_b8 = (int ***)((uint)pppiStack_b8 & 0xffffff00);
          auStack_a0[0] = 0;
          auStack_70[0] = 0;
          pppiStack_1a8 = (int ***)0x10878196;
          pppuStack_a4 = pppuStack_a8;
          puStack_8c = puStack_90;
          puStack_5c = puStack_60;
          puVar7 = (undefined1 *)FUN_10877b00();
          if (puVar7 != auStack_88) {
            pppiStack_1a8 = *(int ****)(puVar7 + 0x10);
            pppiStack_1ac = *(int ****)(puVar7 + 0x14);
            pcStack_1b0 = (char *)0x108781ac;
            FUN_100d83d0();
          }
          if (((int ****)pppiStack_d4 != &pppiStack_e8) && ((int ****)pppiStack_d4 != (int ****)0x0)
             ) {
            pppiStack_1a8 = pppiStack_d4;
            pppiStack_1ac = (int ***)0x108781c8;
            FUN_10c3d5d0();
          }
          if (piVar4[0x15] == 2) {
            pppiStack_1a8 = (int ***)0x108781e4;
            pppiStack_1ac = (int ***)FUN_10839dd0();
            pcVar11 = (char *)pppiStack_1ac;
            do {
              pppiStack_1a8 = (int ***)pcVar11;
              pcVar11 = (char *)((int)pppiStack_1a8 + 1);
            } while (*(char *)pppiStack_1a8 != '\0');
            pcStack_1b0 = (char *)0x1087820a;
            FUN_100d83d0();
            pcStack_1b0 = (char *)0x1087821c;
            ppppiStack_1b4 = (int ****)FUN_10839dd0();
            pcVar11 = (char *)ppppiStack_1b4;
            do {
              pcStack_1b0 = pcVar11;
              pcVar11 = pcStack_1b0 + 1;
            } while (*pcStack_1b0 != '\0');
            pppiStack_1b8 = (int ***)0x1087823d;
            FUN_100d83d0();
            pppiStack_1bc = (int ***)apppiStack_c8;
            pppiStack_1b8 = (int ***)&DAT_11d9d32b;
            ppppiStack_1c0 = (int ****)0x1087824f;
            cVar2 = FUN_100fd0c0();
            if (cVar2 != '\0') {
              pppiStack_1b8 = (int ***)0x1087825e;
              pppiStack_1bc = (int ***)FUN_10839d50();
              pcVar11 = (char *)pppiStack_1bc;
              do {
                pppiStack_1b8 = (int ***)pcVar11;
                pcVar11 = (char *)((int)pppiStack_1b8 + 1);
              } while (*(char *)pppiStack_1b8 != '\0');
              ppppiStack_1c0 = (int ****)0x1087827f;
              FUN_100d83d0();
            }
            pppiStack_1bc = (int ***)&pppiStack_b0;
            pppiStack_1b8 = (int ***)&DAT_11d9d32b;
            ppppiStack_1c0 = (int ****)0x10878291;
            cVar2 = FUN_100fd0c0();
            if (cVar2 != '\0') {
              pppiStack_1b8 = (int ***)0x108782a3;
              pppiStack_1bc = (int ***)FUN_10839d50();
              pcVar11 = (char *)pppiStack_1bc;
              do {
                pppiStack_1b8 = (int ***)pcVar11;
                pcVar11 = (char *)((int)pppiStack_1b8 + 1);
              } while (*(char *)pppiStack_1b8 != '\0');
              ppppiStack_1c0 = (int ****)0x108782ca;
              FUN_100d83d0();
            }
            pppiStack_1b8 = pppiStack_b4;
            pppiStack_1bc = (int ***)0x11dd2114;
            ppppiStack_1c0 = (int ****)0x108782e1;
            FUN_104d1670();
            ppppiStack_1c0 = (int ****)uStack_9c;
            pppiStack_1c4 = (int ***)0x11dd2104;
            pppiStack_1c8 = (int ***)0x108782f8;
            FUN_104d1670();
            pppiStack_1bc = (int ***)&pppiStack_1cc;
            pppiStack_1b8 = (int ***)&pppiStack_1cc;
            uStack_1d0 = (int ****)pppiStack_b8;
            pppiStack_1d4 = pppiStack_b4;
            FUN_100b62c0();
            ppppiVar6 = (int ****)FUN_10877990();
            if (ppppiVar6 != &pppiStack_d0) {
              ppppiStack_1c0 = (int ****)ppppiVar6[4];
              pppiStack_1c4 = ppppiVar6[5];
              pppiStack_1c8 = (int ***)0x1087833b;
              FUN_100d83d0();
            }
            if ((local_ec != &pppiStack_100) && (local_ec != (int ****)0x0)) {
              ppppiStack_1c0 = local_ec;
              pppiStack_1c4 = (int ***)0x10878357;
              FUN_10c3d5d0();
            }
            pppiStack_1c4 = (int ***)&pppiStack_1d4;
            ppppiStack_1c0 = &pppiStack_1d4;
            FUN_100b62c0(pppuStack_a4,pppuStack_a8);
            ppppiVar6 = (int ****)FUN_10877990();
            if (ppppiVar6 != &pppiStack_c0) {
              pppiStack_1c8 = ppppiVar6[4];
              pppiStack_1cc = ppppiVar6[5];
              uStack_1d0 = (int ****)0x1087839d;
              FUN_100d83d0();
            }
            if (((int ****)pppiStack_f4 != &local_108) && ((int ****)pppiStack_f4 != (int ****)0x0))
            {
              pppiStack_1c8 = pppiStack_f4;
              pppiStack_1cc = (int ***)0x108783b9;
              FUN_10c3d5d0();
            }
            pppiStack_1c8 = (int ***)&DAT_11dbaa24;
            pppiStack_1cc = (int ***)&pppiStack_d8;
            uStack_1d0 = &local_108;
            pppiStack_1d4 = (int ***)0x108783d6;
            ppuVar8 = (undefined1 **)FUN_100f2140();
            if (ppuVar8 != &puStack_90) {
              pppiStack_1c8 = (int ***)ppuVar8[4];
              pppiStack_1cc = (int ***)ppuVar8[5];
              uStack_1d0 = (int ****)0x108783ef;
              FUN_100d83d0();
            }
            if (((int ****)pppiStack_f4 != &local_108) && ((int ****)pppiStack_f4 != (int ****)0x0))
            {
              pppiStack_1c8 = pppiStack_f4;
              pppiStack_1cc = (int ***)0x1087840b;
              FUN_10c3d5d0();
            }
            pppiStack_1c8 = pppiStack_b0;
            pppiStack_1cc = pppiStack_ac;
            uStack_1d0 = (int ****)0x10878428;
            FUN_100d9260();
          }
          else {
            pppiStack_1a8 = (int ***)0x10878432;
            pppiStack_1ac = (int ***)FUN_10839dd0();
            pcVar11 = (char *)pppiStack_1ac;
            do {
              pppiStack_1a8 = (int ***)pcVar11;
              pcVar11 = (char *)((int)pppiStack_1a8 + 1);
            } while (*(char *)pppiStack_1a8 != '\0');
            pcStack_1b0 = (char *)0x1087845a;
            FUN_100d83d0();
            ppppiStack_1b4 = &pppiStack_c0;
            pcStack_1b0 = "";
            pppiStack_1b8 = (int ***)0x1087846c;
            cVar2 = FUN_100fd0c0();
            if (cVar2 != '\0') {
              pcStack_1b0 = (char *)0x1087847b;
              ppppiStack_1b4 = (int ****)FUN_10839d50();
              pcVar11 = (char *)ppppiStack_1b4;
              do {
                pcStack_1b0 = pcVar11;
                pcVar11 = pcStack_1b0 + 1;
              } while (*pcStack_1b0 != '\0');
              pppiStack_1b8 = (int ***)0x1087849c;
              FUN_100d83d0();
            }
            pcStack_1b0 = "";
            ppppiStack_1b4 = (int ****)&DAT_11d9d32b;
            pppiStack_1b8 = (int ***)0x108784b2;
            FUN_100d83d0();
            pppiStack_1b8 = pppiStack_b4;
            pppiStack_1bc = (int ***)0x11dd2114;
            ppppiStack_1c0 = (int ****)0x108784c9;
            FUN_104d1670();
            ppppiStack_1c0 = (int ****)uStack_9c;
            pppiStack_1c4 = (int ***)0x11dd2104;
            pppiStack_1c8 = (int ***)0x108784e0;
            FUN_104d1670();
            pppiStack_1bc = (int ***)&pppiStack_1cc;
            pppiStack_1b8 = (int ***)&pppiStack_1cc;
            uStack_1d0 = (int ****)pppiStack_b8;
            pppiStack_1d4 = pppiStack_b4;
            FUN_100b62c0();
            ppppiVar6 = (int ****)FUN_10877990();
            if (ppppiVar6 != &pppiStack_d0) {
              ppppiStack_1c0 = (int ****)ppppiVar6[4];
              pppiStack_1c4 = ppppiVar6[5];
              pppiStack_1c8 = (int ***)0x10878523;
              FUN_100d83d0();
            }
            if ((local_ec != &pppiStack_100) && (local_ec != (int ****)0x0)) {
              ppppiStack_1c0 = local_ec;
              pppiStack_1c4 = (int ***)0x1087853f;
              FUN_10c3d5d0();
            }
            ppppiStack_1c0 = (int ****)pppiStack_c0;
            pppiStack_1c4 = pppiStack_bc;
            pppiStack_1c8 = (int ***)0x1087855c;
            FUN_100d83d0();
          }
          uStack_1d0 = (int ****)uStack_84;
          pppiStack_1d4 = (int ***)0x11dd20f0;
          FUN_104d1670();
          FUN_104d1550("gp_num",piVar4[0x30]);
          pppiStack_110 = (int ***)((uint)pppiStack_110 & 0xffffff00);
          uStack_1d0 = &pppiStack_110;
          pppiStack_1d4 = (int ***)0x108785b5;
          pppiStack_100 = (int ***)uStack_1d0;
          pppiStack_fc = (int ***)uStack_1d0;
          FUN_100e5aa0();
          pppiStack_1d4 = pppiStack_100;
          FUN_104d1670("skill_gp_op_str1");
          if ((pppiStack_100 != (int ***)auStack_114) && ((int ****)pppiStack_100 != (int ****)0x0))
          {
            pppiStack_1d4 = pppiStack_100;
            FUN_10c3d5d0();
          }
          pppiStack_1d4 = (int ***)auStack_114;
          auStack_114[0] = 0;
          pppiStack_104 = pppiStack_1d4;
          pppiStack_100 = pppiStack_1d4;
          FUN_100e5aa0();
          FUN_104d1670("skill_gp_op_str2",pppiStack_104);
          if ((pppiStack_104 != &ppiStack_118) && (pppiStack_104 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_104);
          }
          local_108 = &ppiStack_118;
          ppiStack_118 = (int **)((uint)ppiStack_118 & 0xffffff00);
          pppiStack_104 = local_108;
          FUN_100e5aa0(local_108);
          FUN_104d1670("skill_gp_op_str3",local_108);
          if (((int ****)local_108 != &pppiStack_11c) && ((int ****)local_108 != (int ****)0x0)) {
            FUN_10c3d5d0(local_108);
          }
          FUN_104d1670("skill_gp_op_img1",piVar4[0x3d]);
          FUN_104d1670("skill_gp_op_img2",piVar4[0x4a]);
          FUN_104d1670("skill_gp_op_img3",piVar4[0x57]);
          pppiStack_11c = (int ***)((uint)pppiStack_11c & 0xffffff00);
          pppiStack_10c = (int ***)&pppiStack_11c;
          local_108 = pppiStack_10c;
          FUN_100e5aa0(pppiStack_10c);
          FUN_104d1670("gp_skill_content",pppiStack_10c);
          if ((pppiStack_10c != &ppiStack_120) && ((int ****)pppiStack_10c != (int ****)0x0)) {
            FUN_10c3d5d0(pppiStack_10c);
          }
          if ((char)piVar4[0x67] == '\0') {
            FUN_104d15e0("bIsProFoundMeaning",0);
            (**(code **)(*unaff_ESI + 0x3c))(uStack_14c,&pppiStack_1cc);
            iStack_138 = iStack_138 + 1;
          }
          else {
            FUN_112efed0();
            puVar7 = puStack_19c;
            if (puStack_19c != (undefined1 *)0x0) {
              CNewSkillInfo__BuildSkillDisplayList(DAT_123bba3c,&ppiStack_120);
            }
            if (pppiStack_110 != pppiStack_10c) {
              ppppiVar6 = (int ****)pppiStack_110;
              do {
                if (ppppiVar6[3] == (int ***)piVar4[4]) {
                  FUN_104d15e0("bequipped",ppppiVar6[0x12] == (int ***)0x1);
                  break;
                }
                ppppiVar6 = ppppiVar6 + 0x13;
              } while (ppppiVar6 != (int ****)pppiStack_10c);
            }
            pppiStack_190 = (int ***)((int)pppiStack_190 + 1);
            if ((int ****)pppiStack_190 == (int ****)0x1) {
              FUN_104d15e0("bIsProFoundMeaning",1);
              if (puVar7 == (undefined1 *)0x0) {
                bVar10 = false;
              }
              else {
                bVar10 = uStack_1d0._3_1_ == '\0';
              }
              FUN_104d15e0(&DAT_11dd2124,bVar10);
              FUN_104d1550("unlockHunterstarLevel",iStack_1a4);
              bVar1 = (byte)uStack_188;
              pcVar11 = "profoundmeaning1";
LAB_108788f5:
              (*(code *)(*(int ****)uStack_18c)[5])
                        (pppiStack_184,pcVar11,&pppiStack_1cc,(bVar1 & 0x8f) == 10);
            }
            else if ((int ****)pppiStack_190 == (int ****)0x2) {
              FUN_104d15e0("bIsProFoundMeaning",1);
              if (puVar7 == (undefined1 *)0x0) {
                bVar10 = false;
              }
              else {
                bVar10 = uStack_1d0._3_1_ == '\0';
              }
              FUN_104d15e0(&DAT_11dd2124,bVar10);
              FUN_104d1550("unlockHunterstarLevel",iStack_1a4);
              bVar1 = (byte)uStack_188;
              pcVar11 = "profoundmeaning2";
              goto LAB_108788f5;
            }
            FUN_112f0210();
          }
          if ((puStack_2c != auStack_40) && (puStack_2c != (undefined1 *)0x0)) {
            pppiStack_178 = (int ***)puStack_2c;
            ppppiStack_17c = (int ****)0x1087892a;
            FUN_10c3d5d0();
          }
          if ((puStack_5c != auStack_70) && (puStack_5c != (undefined1 *)0x0)) {
            pppiStack_178 = (int ***)puStack_5c;
            ppppiStack_17c = (int ****)0x10878949;
            FUN_10c3d5d0();
          }
          pppiStack_178 = (int ***)auStack_88;
          if (((int ***)puStack_74 != pppiStack_178) && (puStack_74 != (undefined1 *)0x0)) {
            pppiStack_178 = (int ***)puStack_74;
            ppppiStack_17c = (int ****)0x10878968;
            FUN_10c3d5d0();
            pppiStack_178 = (int ***)extraout_ECX_02;
          }
          if (((uint)ppppiStack_160 >> 6 & 1) != 0) {
            ppppiStack_17c = (int ****)&piStack_164;
            pppiStack_178 = pppiStack_15c;
            pcStack_180 = (char *)0x10878988;
            (**(code **)(*piStack_164 + 8))();
            pppiStack_178 = (int ***)extraout_ECX_03;
          }
        }
        iStack_148 = iStack_148 + 1;
        iVar9 = iStack_134;
      } while (iStack_148 < iStack_144);
    }
    pppiStack_178 = (int ***)(uint)(((byte)ppiStack_120 & 0x8f) == 10);
    ppppiStack_17c = (int ****)&local_ec;
    pcStack_180 = "SkillListData";
    pppiStack_184 = pppiStack_11c;
    uStack_188 = (int ****)0x108789cb;
    (**(code **)(*piStack_124 + 0x14))();
    ppppiVar6 = local_ec;
    if (((uint)local_ec[1] >> 6 & 1) != 0) {
      pppiStack_15c = local_ec[2];
      ppppiStack_160 = local_ec;
      piStack_164 = (int *)0x108789e4;
      (*(code *)(**local_ec)[2])();
      *ppppiVar6 = (int ***)0x0;
    }
    ppppiVar6[2] = pppiStack_11c;
    ppppiVar6[1] = (int ***)0x3;
    if ((pppiStack_28 != appiStack_3c) && (pppiStack_28 != (int ***)0x0)) {
      pppiStack_15c = pppiStack_28;
      ppppiStack_160 = (int ****)0x10878a14;
      FUN_10c3d5d0();
    }
    if (((uint)ppiStack_cc >> 6 & 1) != 0) {
      ppppiStack_160 = &pppiStack_d0;
      pppiStack_15c = apppiStack_c8[0];
      piStack_164 = (int *)0x10878a40;
      (*(code *)(*pppiStack_d0)[2])();
      pppiStack_d0 = (int ***)0x0;
    }
    ppiStack_cc = (int **)0x0;
    if ((uStack_e4 >> 6 & 1) != 0) {
      ppppiStack_160 = &pppiStack_e8;
      pppiStack_15c = pppiStack_e0;
      piStack_164 = (int *)0x10878a73;
      (*(code *)(*pppiStack_e8)[2])();
      pppiStack_e8 = (int ***)0x0;
    }
    uStack_e4 = 0;
    if (((uint)pppiStack_b4 >> 6 & 1) != 0) {
      ppppiStack_160 = &pppiStack_b8;
      pppiStack_15c = pppiStack_b0;
      piStack_164 = (int *)0x10878aac;
      (*(code *)(*pppiStack_b8)[2])();
      pppiStack_b8 = (int ***)0x0;
    }
    pppiStack_b4 = (int ***)0x0;
    if (((uint)pppiStack_104 >> 6 & 1) != 0) {
      ppppiStack_160 = &local_108;
      pppiStack_15c = pppiStack_100;
      piStack_164 = (int *)0x10878adf;
      (*(code *)(*local_108)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10878ba0 @ 10878ba0  size=441 ===== */
// strings:
//   "profoundFinishRate"
//   "skillFinishRate"
//   "talentFinishRate"

/* [RE-AUTO c0]
   strings:
     ""profoundFinishRate""
     ""skillFinishRate""
     ""talentFinishRate"" */

void FUN_10878ba0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_stack_00000010;
  undefined1 auStack_48 [8];
  int *piStack_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  uint uStack_24;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x14) + 4))();
      if (iVar2 != 0) {
        piStack_38 = (int *)0x0;
        uStack_34 = in_stack_00000010[1];
        uStack_2c = in_stack_00000010[3];
        uStack_30 = in_stack_00000010[2];
        piStack_28 = (int *)in_stack_00000010[4];
        if ((uStack_34 >> 6 & 1) != 0) {
          piStack_38 = (int *)*in_stack_00000010;
          (**(code **)(*piStack_38 + 4))(&piStack_38,uStack_30);
        }
        if (((in_stack_00000010[7] & 0x8f) == 3) ||
           (uVar5 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
          uVar5 = in_stack_00000010[8];
        }
        uStack_1c = in_stack_00000010[0xd];
        uStack_14 = in_stack_00000010[0xf];
        uStack_18 = in_stack_00000010[0xe];
        uStack_10 = in_stack_00000010[0x10];
        piStack_20 = (int *)0x0;
        if ((uStack_1c >> 6 & 1) != 0) {
          piStack_20 = (int *)in_stack_00000010[0xc];
          (**(code **)(*piStack_20 + 4))(&piStack_20,uStack_18);
        }
        FUN_112efdc0();
        FUN_112b3da0(uVar5,auStack_48);
        uVar5 = FUN_112f04a0();
        uVar3 = FUN_112f04b0();
        uVar4 = FUN_112f04c0();
        FUN_104d1550("profoundFinishRate",uVar5);
        FUN_104d1550("skillFinishRate",uVar3);
        FUN_104d1550("talentFinishRate",uVar4);
        FUN_112f0190();
        if ((uStack_24 >> 6 & 1) != 0) {
          (**(code **)(*piStack_28 + 8))(&piStack_28,piStack_20);
          piStack_28 = (int *)0x0;
        }
        uStack_24 = 0;
        if ((uStack_3c >> 6 & 1) != 0) {
          (**(code **)(*piStack_40 + 8))(&piStack_40,piStack_38);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1087a4c0 @ 1087a4c0  size=1302 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME"
//   "status"
//   "isWeaponProfound"
//   "profoundID"
//   "strprofoundTips"
//   "isActivateSkill"
//   "profoundIcon"
//   "profoundName"
//   "weaponType"
//   "video_file"
//   "profoundDescribe"

/* [RE-AUTO c0]
   strings:
     ""SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME""
     ""status""
     ""isWeaponProfound""
     ""profoundID""
     ""strprofoundTips""
     ""isActivateSkill""
     ""profoundIcon""
     ""profoundName""
     ""weaponType""
     ""video_file"" */

void FUN_1087a4c0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  int local_ac;
  int iStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  int *local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint uStack_4c;
  undefined4 *puStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 **ppuStack_34;
  int **ppiStack_30;
  int **ppiStack_2c;
  int **ppiStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_b4;
  local_b0 = param_2;
  local_68 = (int *)0x0;
  local_64 = param_4[1];
  local_5c = param_4[3];
  local_60 = param_4[2];
  local_58 = param_4[4];
  if ((local_64 >> 6 & 1) != 0) {
    local_68 = (int *)*param_4;
    (**(code **)(*local_68 + 4))(&local_68,local_60);
  }
  if (((param_4[7] & 0x8f) == 3) || (iVar6 = -0x21524151, (param_4[7] & 0x8f) == 4)) {
    iVar6 = param_4[8];
  }
  local_7c = param_4[0xd];
  local_74 = param_4[0xf];
  uStack_78 = param_4[0xe];
  uStack_70 = param_4[0x10];
  local_80 = (int *)0x0;
  local_ac = iVar6;
  if ((local_7c >> 6 & 1) != 0) {
    local_80 = (int *)param_4[0xc];
    (**(code **)(*local_80 + 4))(&local_80,uStack_78);
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
     (uStack_4c = (**(code **)(*piVar3 + 0xb4))(), uStack_4c != 0)) {
    iStack_a8 = (**(code **)(**(int **)(uStack_4c + 0x14) + 4))();
    piStack_40 = (int *)0x0;
    piStack_a4 = (int *)CONCAT31(piStack_a4._1_3_,((byte)local_64 & 0x8f) == 10);
    piStack_3c = (int *)0x0;
    uStack_a0 = 0;
    cVar1 = (**(code **)(*local_68 + 0x10))
                      (local_60,"SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME",&piStack_40,piStack_a4);
    if ((cVar1 != '\0') && (((byte)uStack_4c & 0x8f) == 6)) {
      if ((uStack_4c >> 6 & 1) == 0) {
        local_b0 = puStack_48;
      }
      else {
        local_b0 = (undefined4 *)*puStack_48;
      }
    }
    piStack_44 = (int *)FUN_108768a0();
    piStack_a4 = (int *)0x0;
    if (0 < (int)piStack_44) {
      do {
        iVar2 = FUN_10876810(piStack_a4);
        if ((iVar2 != 0) && (-1 < *(int *)(iVar2 + 0x44))) {
          if (*(int *)(iVar2 + 0x40) == iVar6) {
LAB_1087a693:
            iStack_9c = CONCAT31(iStack_9c._1_3_,1);
          }
          else {
            if (*(int *)(iVar2 + 0x40) != 0) goto LAB_1087a935;
            if (iVar6 == 0) goto LAB_1087a693;
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          piVar3 = (int *)FUN_107cd3d0();
          if (piVar3 != (int *)0x0) {
            if (iStack_a8 != 0) {
              uVar4 = (**(code **)(*piVar3 + 0x18))();
              cVar1 = FUN_112b4000(uVar4);
              uVar4 = (**(code **)(*piVar3 + 0x18))();
              puStack_48 = (undefined4 *)FUN_112b3610(uVar4);
              iVar6 = local_ac;
              if (cVar1 == '\0') {
                uVar4 = (**(code **)(*piVar3 + 0x18))();
                cVar1 = FUN_112b4040(uVar4);
                iVar6 = local_ac;
                if ((cVar1 == '\0') &&
                   (iVar5 = CPlayer__GetHuntRankOrCount(), iVar6 = local_ac, iVar5 < (int)puStack_48
                   )) goto LAB_1087a935;
              }
            }
            piStack_98 = (int *)0x0;
            uStack_94 = 0;
            FUN_11a98de0(&piStack_98,uStack_a0,0,0);
            uVar4 = FUN_1087c890(iVar6,*(undefined4 *)(iVar2 + 0x10));
            FUN_104d1550("status",uVar4);
            FUN_104d15e0("isWeaponProfound",uStack_b4);
            FUN_104d1550("profoundID",*(undefined4 *)(iVar2 + 0x10));
            piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
            ppiStack_2c = &piStack_3c;
            ppiStack_28 = ppiStack_2c;
            FUN_100e5aa0(ppiStack_2c);
            FUN_104d1670("strprofoundTips",ppiStack_2c);
            if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_2c);
            }
            FUN_104d15e0("isActivateSkill",0);
            FUN_104d1670("profoundIcon",piVar3[0x6d]);
            piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
            ppiStack_30 = &piStack_40;
            ppiStack_2c = ppiStack_30;
            FUN_100e5aa0(ppiStack_30);
            FUN_104d1670("profoundName",ppiStack_30);
            if ((ppiStack_30 != &piStack_44) && (ppiStack_30 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_30);
            }
            FUN_104d1550("weaponType",iVar6);
            FUN_104d1670("video_file",piVar3[0x65]);
            piStack_44 = (int *)((uint)piStack_44 & 0xffffff00);
            ppuStack_34 = &piStack_44;
            ppiStack_30 = ppuStack_34;
            FUN_100e5aa0(ppuStack_34);
            FUN_104d1670("profoundDescribe",ppuStack_34);
            if ((ppuStack_34 != &puStack_48) && (ppuStack_34 != (int **)0x0)) {
              FUN_10c3d5d0(ppuStack_34);
            }
            (**(code **)(*piStack_a4 + 0x3c))(iStack_9c,&stack0xffffff44);
            if ((uStack_94 >> 6 & 1) != 0) {
              (**(code **)(*piStack_98 + 8))(&piStack_98,uStack_90);
            }
          }
        }
LAB_1087a935:
        piStack_a4 = (int *)((int)piStack_a4 + 1);
        iVar6 = local_ac;
      } while ((int)piStack_a4 < (int)piStack_44);
    }
    if (((uint)piStack_3c >> 6 & 1) != 0) {
      (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
    }
  }
  if ((local_7c >> 6 & 1) != 0) {
    (**(code **)(*local_80 + 8))(&local_80,uStack_78);
    local_80 = (int *)0x0;
  }
  local_7c = 0;
  if ((local_64 >> 6 & 1) != 0) {
    (**(code **)(*local_68 + 8))(&local_68,local_60);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1087a9e0 @ 1087a9e0  size=1568 ===== */
// strings:
//   "SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME"
//   "profoundID"
//   "profoundIndex"
//   "status"
//   "strprofoundTips"
//   "isActivateSkill"
//   "profoundIcon"
//   "profoundName"
//   "weaponType"
//   "video_file"
//   "profoundDescribe"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME""
     ""profoundID""
     ""profoundIndex""
     ""status""
     ""strprofoundTips""
     ""isActivateSkill""
     ""profoundIcon""
     ""profoundName""
     ""weaponType""
     ""video_file"" */

void FUN_1087a9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 *******pppppppuVar6;
  undefined4 unaff_ESI;
  undefined4 uVar7;
  undefined4 *******pppppppuStack_e4;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 *******pppppppuStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  undefined4 *******pppppppuStack_b8;
  int *piStack_b4;
  undefined4 uStack_ac;
  int *local_a8;
  uint local_a4;
  undefined4 *******pppppppuStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int *piStack_90;
  uint uStack_8c;
  undefined4 *******pppppppuStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *local_78;
  uint local_74;
  undefined4 *******local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int iStack_64;
  int iStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 *******pppppppuStack_50;
  undefined4 ******ppppppuStack_4c;
  undefined4 *****apppppuStack_48 [2];
  undefined4 *******pppppppuStack_40;
  undefined4 *******pppppppuStack_3c;
  undefined4 *******pppppppuStack_38;
  undefined4 ******ppppppuStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_d4;
  local_cc = param_2;
  local_78 = (int *)0x0;
  local_74 = param_4[1];
  local_6c = param_4[3];
  local_70 = (undefined4 *******)param_4[2];
  local_68 = param_4[4];
  if ((local_74 >> 6 & 1) != 0) {
    local_78 = (int *)*param_4;
    pppppppuStack_e4 = local_70;
    (**(code **)(*local_78 + 4))(&local_78);
  }
  if (((param_4[7] & 0x8f) == 3) || (uVar7 = 0xdeadbeaf, (param_4[7] & 0x8f) == 4)) {
    uVar7 = param_4[8];
  }
  local_a4 = param_4[0xd];
  local_9c = param_4[0xf];
  pppppppuStack_a0 = (undefined4 *******)param_4[0xe];
  uStack_98 = param_4[0x10];
  local_a8 = (int *)0x0;
  local_d0 = uVar7;
  if ((local_a4 >> 6 & 1) != 0) {
    local_a8 = (int *)param_4[0xc];
    pppppppuStack_e4 = pppppppuStack_a0;
    (**(code **)(*local_a8 + 4))(&local_a8);
  }
  uStack_8c = param_4[0x13];
  uStack_84 = param_4[0x15];
  pppppppuStack_88 = (undefined4 *******)param_4[0x14];
  uStack_80 = param_4[0x16];
  piStack_90 = (int *)0x0;
  if ((uStack_8c >> 6 & 1) != 0) {
    piStack_90 = (int *)param_4[0x12];
    pppppppuStack_e4 = pppppppuStack_88;
    (**(code **)(*piStack_90 + 4))(&piStack_90);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    pppppppuStack_e4 = (undefined4 *******)0x1087ab0f;
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar3 != 0) {
      pppppppuStack_40 = (undefined4 *******)0x0;
      pppppppuStack_3c = (undefined4 *******)0x0;
      pppppppuStack_c4 =
           (undefined4 *******)CONCAT31(pppppppuStack_c4._1_3_,((byte)local_74 & 0x8f) == 10);
      uStack_c8 = 0;
      pppppppuStack_e4 = pppppppuStack_c4;
      (**(code **)(*local_78 + 0x10))
                (local_70,"SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME",&pppppppuStack_40);
      uStack_d4 = (**(code **)(**(int **)(iVar3 + 0x14) + 8))();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x2af4) + 0x10))(uVar7);
      local_6c = 0;
      local_68 = 3;
      iStack_64 = iVar3;
      (**(code **)(*piStack_bc + 0x3c))(piStack_b4,&local_6c);
      pppppppuVar6 = (undefined4 *******)0x0;
      iStack_5c = 3 - (uint)(iVar3 != 0);
      if (0 < iStack_5c) {
        do {
          pppppppuStack_e4 = pppppppuVar6;
          iVar4 = FUN_1141cdc0(uVar7);
          iVar3 = FUN_1141cdc0(0,pppppppuVar6);
          FUN_11679c30();
          if (0 < iVar4) {
            iVar3 = iVar4;
          }
          uVar7 = FUN_1169e670();
          iVar4 = FUN_107cd4f0(uVar7);
          uStack_d4 = 0;
          local_d0 = 0;
          uVar7 = 0;
          FUN_11a98de0(&uStack_d4,unaff_ESI,0,0);
          FUN_104d1550("profoundID",0);
          FUN_104d1550("profoundIndex",pppppppuVar6);
          if (iVar4 != 0) {
            if (*(int *)(iVar4 + 0x40) == 0) {
              iVar3 = *(int *)(iVar4 + 0x50 + iVar3 * 4);
              iVar5 = FUN_107d45b0(extraout_ECX);
              if ((iVar3 == -1) ||
                 ((((iVar3 == 0 && (*(int *)(iVar5 + 0x30) != 0)) || (*(int *)(iVar5 + 0x28) == 0))
                  || ((iVar3 = iVar3 - *(int *)(iVar5 + 0x30), iVar3 < 0 ||
                      (*(int *)(iVar5 + 0x24) <= iVar3)))))) goto LAB_1087ad14;
              iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar3 / *(int *)(iVar5 + 0x28)) * 4);
              if (iVar2 == 0) goto LAB_1087ad14;
              iVar3 = *(int *)(iVar2 + (iVar3 % *(int *)(iVar5 + 0x28)) * 4);
            }
            else {
              iVar3 = *(int *)(iVar4 + 0x54);
              iVar5 = FUN_107d45b0(extraout_ECX);
              if ((((iVar3 != -1) && ((iVar3 != 0 || (*(int *)(iVar5 + 0x30) == 0)))) &&
                  (*(int *)(iVar5 + 0x28) != 0)) &&
                 ((iVar3 = iVar3 - *(int *)(iVar5 + 0x30), -1 < iVar3 &&
                  (iVar3 < *(int *)(iVar5 + 0x24))))) {
                iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar3 / *(int *)(iVar5 + 0x28)) * 4);
                if (iVar2 != 0) {
                  iVar3 = *(int *)(iVar2 + (iVar3 % *(int *)(iVar5 + 0x28)) * 4);
                  goto LAB_1087ad16;
                }
              }
LAB_1087ad14:
              iVar3 = 0;
            }
LAB_1087ad16:
            if (iVar3 != 0) {
              FUN_104d1550("status",1);
              FUN_104d1550("profoundID",*(undefined4 *)(iVar4 + 0x10));
              apppppuStack_48[0] = (undefined4 *****)((uint)apppppuStack_48[0] & 0xffffff00);
              pppppppuStack_38 = (undefined4 *******)apppppuStack_48;
              ppppppuStack_34 = pppppppuStack_38;
              FUN_100e5aa0(pppppppuStack_38);
              FUN_104d1670("strprofoundTips",pppppppuStack_38);
              if ((pppppppuStack_38 != &ppppppuStack_4c) &&
                 (pppppppuStack_38 != (undefined4 *******)0x0)) {
                FUN_10c3d5d0(pppppppuStack_38);
              }
              FUN_104d15e0("isActivateSkill",1);
              FUN_104d1670("profoundIcon",*(undefined4 *)(iVar3 + 0x1b4));
              ppppppuStack_4c = (undefined4 ******)((uint)ppppppuStack_4c & 0xffffff00);
              pppppppuStack_3c = &ppppppuStack_4c;
              pppppppuStack_38 = pppppppuStack_3c;
              FUN_100e5aa0(pppppppuStack_3c);
              FUN_104d1670("profoundName",pppppppuStack_3c);
              if (((undefined4 ********)pppppppuStack_3c != &pppppppuStack_50) &&
                 (pppppppuStack_3c != (undefined4 *******)0x0)) {
                FUN_10c3d5d0(pppppppuStack_3c);
              }
              FUN_104d1550("weaponType",uVar7);
              FUN_104d1670("video_file",*(undefined4 *)(iVar3 + 0x194));
              pppppppuStack_50 = (undefined4 *******)((uint)pppppppuStack_50 & 0xffffff00);
              pppppppuStack_40 = &pppppppuStack_50;
              pppppppuStack_3c = pppppppuStack_40;
              FUN_100e5aa0(pppppppuStack_40);
              FUN_104d1670("profoundDescribe",pppppppuStack_40);
              if ((ppppppuStack_34 != apppppuStack_48) &&
                 (ppppppuStack_34 != (undefined4 ******)0x0)) {
                FUN_10c3d5d0(ppppppuStack_34);
              }
            }
          }
          (**(code **)(*piStack_b4 + 0x3c))(uStack_ac,&pppppppuStack_e4);
          if (((uint)piStack_bc >> 6 & 1) != 0) {
            pppppppuStack_e4 = pppppppuStack_b8;
            (**(code **)(*piStack_c0 + 8))(&piStack_c0);
          }
          pppppppuVar6 = (undefined4 *******)((int)pppppppuVar6 + 1);
          uVar7 = local_d0;
        } while ((int)pppppppuVar6 < iStack_5c);
      }
      if ((uStack_54 >> 6 & 1) != 0) {
        pppppppuStack_e4 = pppppppuStack_50;
        (**(code **)(*piStack_58 + 8))(&piStack_58);
        piStack_58 = (int *)0x0;
      }
      uStack_54 = 0;
      if (((uint)pppppppuStack_3c >> 6 & 1) != 0) {
        pppppppuStack_e4 = pppppppuStack_38;
        (*(code *)(*pppppppuStack_40)[2])(&pppppppuStack_40);
      }
    }
  }
  if ((uStack_8c >> 6 & 1) != 0) {
    pppppppuStack_e4 = pppppppuStack_88;
    (**(code **)(*piStack_90 + 8))(&piStack_90);
    piStack_90 = (int *)0x0;
  }
  uStack_8c = 0;
  if ((local_a4 >> 6 & 1) != 0) {
    pppppppuStack_e4 = pppppppuStack_a0;
    (**(code **)(*local_a8 + 8))(&local_a8);
    local_a8 = (int *)0x0;
  }
  local_a4 = 0;
  if ((local_74 >> 6 & 1) != 0) {
    pppppppuStack_e4 = local_70;
    (**(code **)(*local_78 + 8))(&local_78);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1087b3e0 @ 1087b3e0  size=581 ===== */
// strings:
//   "SKILL_VIDEO_WEAPON_STYLE_DATA_VO_CLASSNAME"
//   "weaponStyle"

/* [RE-AUTO c0]
   strings:
     ""SKILL_VIDEO_WEAPON_STYLE_DATA_VO_CLASSNAME""
     ""weaponStyle"" */

void FUN_1087b3e0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint unaff_EBX;
  int *unaff_ESI;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_stack_00000010;
  int *piStack_94;
  uint uStack_90;
  char *pcStack_8c;
  int **ppiStack_88;
  uint uStack_84;
  int *piStack_74;
  undefined4 uStack_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *piStack_50;
  int *piStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = (int *)0x0;
  local_64 = (int *)in_stack_00000010[1];
  local_5c = in_stack_00000010[3];
  uStack_84 = in_stack_00000010[2];
  local_58 = in_stack_00000010[4];
  local_60 = uStack_84;
  if (((uint)local_64 >> 6 & 1) != 0) {
    local_68 = (int *)*in_stack_00000010;
    ppiStack_88 = &local_68;
    pcStack_8c = (char *)0x1087b42a;
    (**(code **)(*local_68 + 4))();
  }
  piStack_4c = (int *)in_stack_00000010[0xd];
  uStack_44 = in_stack_00000010[0xf];
  uStack_84 = in_stack_00000010[0xe];
  puStack_40 = (undefined4 *)in_stack_00000010[0x10];
  piStack_50 = (int *)0x0;
  uStack_48 = uStack_84;
  if (((uint)piStack_4c >> 6 & 1) != 0) {
    piStack_50 = (int *)in_stack_00000010[0xc];
    ppiStack_88 = &piStack_50;
    pcStack_8c = (char *)0x1087b493;
    (**(code **)(*piStack_50 + 4))();
  }
  ppiStack_88 = (int **)&uStack_38;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_6c = CONCAT31(uStack_6c._1_3_,((byte)local_64 & 0x8f) == 10);
  uStack_84 = uStack_6c;
  pcStack_8c = "SKILL_VIDEO_WEAPON_STYLE_DATA_VO_CLASSNAME";
  piStack_94 = (int *)0x1087b4cd;
  uStack_90 = local_60;
  cVar2 = (**(code **)(*local_68 + 0x10))();
  puVar5 = (undefined4 *)0x0;
  if (((cVar2 != '\0') && (((byte)uStack_44 & 0x8f) == 6)) &&
     (puVar5 = puStack_40, (uStack_44 >> 6 & 1) != 0)) {
    puVar5 = (undefined4 *)*puStack_40;
  }
  iVar6 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piStack_94 = (int *)0x1087b51b;
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar3 != 0) {
      iVar6 = iVar3;
    }
  }
  piStack_94 = (int *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_11a98de0(&uStack_30,puVar5,0);
  uVar4 = (**(code **)(**(int **)(iVar6 + 0x2af4) + 0x10))(uStack_90);
  FUN_104d1550("weaponStyle",uVar4);
  (**(code **)(*piStack_74 + 0x3c))(uStack_6c,&uStack_44);
  if ((uStack_48 >> 6 & 1) != 0) {
    (**(code **)(*piStack_4c + 8))(&piStack_4c,uStack_44);
    piStack_4c = (int *)0x0;
  }
  uStack_48 = 0;
  if ((local_60 >> 6 & 1) != 0) {
    (**(code **)(*local_64 + 8))(&local_64,local_5c);
    local_64 = (int *)0x0;
  }
  local_60 = 0;
  if ((unaff_EBX >> 6 & 1) != 0) {
    (**(code **)(*unaff_ESI + 8))(&stack0xffffff84,piStack_74);
  }
  if ((uStack_90 >> 6 & 1) != 0) {
    (**(code **)(*piStack_94 + 8))(&piStack_94,pcStack_8c);
  }
  return;
}



/* ===== FUN_1088eaa0 @ 1088eaa0  size=500 ===== */
// strings:
//   "passiveSkillLength"
//   "arrayPassiveSkillData"
//   "passiveSkillGroupID"
//   "passiveSkillValue"
//   "passiveSkillName"

/* [RE-AUTO c0]
   strings:
     ""passiveSkillLength""
     ""arrayPassiveSkillData""
     ""passiveSkillGroupID""
     ""passiveSkillValue""
     ""passiveSkillName"" */

void __thiscall FUN_1088eaa0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *local_7c;
  uint local_78;
  uint local_74;
  int *local_64;
  uint local_60;
  undefined4 local_5c;
  int *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_2c = param_3;
  local_28 = param_1;
  if (param_3 != 0) {
    local_7c = (int *)0x0;
    local_78 = 0;
    local_24 = CONCAT31(local_24._1_3_,((byte)param_2[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_2 + 0x10))
                      (param_2[2],"passiveSkillLength",&local_7c,local_24);
    if (cVar2 != '\0') {
      local_64 = (int *)0x0;
      local_60 = 0;
      local_24 = CONCAT31(local_24._1_3_,((byte)param_2[1] & 0x8f) == 10);
      cVar2 = (**(code **)(*(int *)*param_2 + 0x10))
                        (param_2[2],"arrayPassiveSkillData",&local_64,local_24);
      if (cVar2 != '\0') {
        if (((local_78 & 0x8f) == 3) || (local_24 = 0xdeadbeaf, (local_78 & 0x8f) == 4)) {
          local_24 = local_74;
        }
        puVar4 = *(undefined4 **)(param_3 + 0x21c);
        uVar5 = 0;
        if (puVar4 != *(undefined4 **)(param_3 + 0x220)) {
          do {
            uVar1 = *puVar4;
            local_34 = puVar4[1];
            local_30 = uVar1;
            if (local_24 <= uVar5) break;
            local_4c = (int *)0x0;
            local_48 = 0;
            cVar2 = (**(code **)(*local_64 + 0x30))(local_5c,uVar5,&local_4c);
            if (cVar2 != '\0') {
              iVar3 = FUN_1050ebc0(uVar1);
              if (iVar3 != 0) {
                FUN_104d1550("passiveSkillGroupID",local_30);
                FUN_104d1550("passiveSkillValue",local_34);
                local_10 = local_20;
                local_c = local_10;
                FUN_100b62c0(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x24));
                FUN_104d1670("passiveSkillName",local_c);
                if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_c);
                }
              }
            }
            if ((local_48 >> 6 & 1) != 0) {
              (**(code **)(*local_4c + 8))(&local_4c,local_44);
            }
            puVar4 = puVar4 + 2;
            uVar5 = uVar5 + 1;
          } while (puVar4 != *(undefined4 **)(local_2c + 0x220));
        }
      }
      if ((local_60 >> 6 & 1) != 0) {
        (**(code **)(*local_64 + 8))(&local_64,local_5c);
      }
    }
    if ((local_78 >> 6 & 1) != 0) {
      (**(code **)(*local_7c + 8))(&local_7c,local_74);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a7660 @ 108a7660  size=806 ===== */
// strings:
//   "EXPAND_COST_VO_CLASSNAME"
//   "nItemID"
//   "nItemCost"
//   "nCreditCost"
//   "strIconPath"
//   "lineCostList"
//   "nStorageExpandFunc"

/* [RE-AUTO c0]
   strings:
     ""EXPAND_COST_VO_CLASSNAME""
     ""nItemID""
     ""nItemCost""
     ""nCreditCost""
     ""strIconPath""
     ""lineCostList""
     ""nStorageExpandFunc"" */

void FUN_108a7660(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EBX;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *in_stack_00000010;
  int in_stack_00000014;
  int *piVar9;
  int *piStack_90;
  int *piStack_8c;
  undefined4 auStack_78 [2];
  int *piStack_70;
  byte bStack_6c;
  int *piStack_68;
  uint uStack_64;
  int *piStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_4c;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [5];
  int aiStack_24 [8];
  
  if (in_stack_00000014 == 2) {
    piStack_8c = (int *)0x108a768f;
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x260e0) != 0)) {
      piStack_8c = in_stack_00000010;
      piStack_90 = (int *)0x108a76b2;
      FUN_104f4330();
      if (((in_stack_00000010[7] & 0x8fU) == 3) || ((in_stack_00000010[7] & 0x8fU) == 4)) {
        piVar6 = (int *)in_stack_00000010[8];
      }
      else {
        piVar6 = (int *)0xdeadbeaf;
      }
      if (((piVar6 != (int *)0x2) && (piVar6 != (int *)&DAT_0000000a)) ||
         (piStack_90 = piVar6, uVar3 = FUN_113f9390(), uVar3 == 0)) {
        piStack_90 = (int *)0x108a76f5;
        FUN_104d7c10();
        return;
      }
      piStack_90 = aiStack_24;
      aiStack_24[0] = 0;
      aiStack_24[1] = 0;
      uStack_3c = 0;
      auStack_38[0] = 0;
      FUN_11a98a70();
      auStack_78[0] = CONCAT31(auStack_78[0]._1_3_,(bStack_6c & 0x8f) == 10);
      piVar9 = piStack_68;
      cVar1 = (**(code **)(*piStack_70 + 0x10))
                        (piStack_68,"EXPAND_COST_VO_CLASSNAME",&uStack_40,auStack_78[0]);
      if ((cVar1 != '\0') && (((byte)uStack_4c & 0x8f) == 6)) {
        if ((uStack_4c >> 6 & 1) == 0) {
          piStack_8c = piStack_48;
        }
        else {
          piStack_8c = (int *)*piStack_48;
        }
      }
      uVar4 = FUN_11522b10(piVar6);
      uVar3 = uVar3 / uVar4;
      if (uVar3 != 0) {
        iVar8 = 1;
        iVar2 = 0;
        do {
          FUN_115226e0(piVar6,iVar2);
          piStack_68 = (int *)0x0;
          uStack_64 = 0;
          FUN_11a98de0(&piStack_68,piStack_8c,0,0);
          if (piVar6 == (int *)0x2) {
            iVar5 = FUN_108ad830(iVar8);
            if (iVar5 != 0) {
              puVar7 = (undefined4 *)(iVar5 + 0x10);
              piVar6 = piVar9;
              goto LAB_108a7818;
            }
          }
          else if ((piVar6 == (int *)&DAT_0000000a) && (iVar5 = FUN_108aca50(iVar8), iVar5 != 0)) {
            puVar7 = (undefined4 *)(iVar5 + 0x18);
            piVar6 = piVar9;
LAB_108a7818:
            piVar9 = piVar6;
            if (puVar7 != (undefined4 *)0x0) {
              FUN_104d1440("nItemID",*puVar7);
              FUN_104d1440("nItemCost",puVar7[1]);
              FUN_104d1440("nCreditCost",puVar7[2]);
              iVar5 = FUN_10254130(*puVar7);
              piVar9 = piVar6;
              if (iVar5 != 0) {
                FUN_104d1670("strIconPath",*(undefined4 *)(iVar5 + 0xb4));
                piVar9 = piVar6;
              }
            }
          }
          (**(code **)(*piStack_48 + 0x3c))(uStack_40,auStack_78);
          if ((uStack_64 >> 6 & 1) != 0) {
            (**(code **)(*piStack_68 + 8))(&piStack_68,piStack_60);
          }
          iVar2 = iVar2 + uVar4;
          iVar8 = iVar8 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      (**(code **)(*unaff_EBX + 0x14))(auStack_78[0],"lineCostList",auStack_38,0);
      iVar2 = FUN_11727ff0();
      FUN_104d1550("nStorageExpandFunc",*(undefined4 *)(iVar2 + 0x54));
      if ((uStack_5c >> 6 & 1) != 0) {
        (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
        piStack_60 = (int *)0x0;
      }
      uStack_5c = 0;
      if ((uStack_44 >> 6 & 1) != 0) {
        (**(code **)(*piStack_48 + 8))(&piStack_48,uStack_40);
        piStack_48 = (int *)0x0;
      }
      uStack_44 = 0;
      if (((uint)piStack_8c >> 6 & 1) != 0) {
        (**(code **)(*piStack_90 + 8))(&piStack_90,0);
      }
    }
  }
  return;
}



/* ===== FUN_108a86a0 @ 108a86a0  size=572 ===== */
// strings:
//   "m_bSkillItem"
//   "m_nSkillCount"
//   "m_nSkillCDTime"
//   "m_strSkillName"
//   "m_nSkillId"
//   "m_nCDTime"

/* [RE-AUTO c0]
   strings:
     ""m_bSkillItem""
     ""m_nSkillCount""
     ""m_nSkillCDTime""
     ""m_strSkillName""
     ""m_nSkillId""
     ""m_nCDTime"" */

void FUN_108a86a0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int iVar5;
  int in_stack_00000010;
  undefined4 *in_stack_00000018;
  int *piStack_64;
  int *local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined2 auStack_3c [2];
  undefined2 auStack_38 [14];
  undefined2 *puStack_1c;
  undefined2 *puStack_18;
  undefined2 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_64;
  uVar2 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
  piStack_64 = (int *)(uint)(uint3)piStack_64;
  if ((uVar2 == 3) || (iVar5 = -0x21524151, uVar2 == 4)) {
    iVar5 = *(int *)(in_stack_00000010 + 8);
  }
  local_5c = *(uint *)(in_stack_00000010 + 0x1c);
  local_58 = *(undefined4 *)(in_stack_00000010 + 0x20);
  local_54 = *(undefined4 *)(in_stack_00000010 + 0x24);
  local_50 = *(undefined4 *)(in_stack_00000010 + 0x28);
  local_60 = (int *)0x0;
  if ((local_5c >> 6 & 1) != 0) {
    local_60 = *(int **)(in_stack_00000010 + 0x18);
    (**(code **)(*local_60 + 4))(&local_60,*(undefined4 *)(in_stack_00000010 + 0x20));
  }
  iVar3 = FUN_116a6a70();
  if (*(int *)(iVar3 + 0x100) == iVar5) {
    puStack_18 = auStack_38;
    auStack_38[0] = 0;
    puStack_14 = puStack_18;
    cVar1 = FUN_108a8910(&uStack_44);
  }
  else {
    iVar3 = FUN_108a8a30(iVar5);
    if (iVar3 < 1) {
      cVar1 = (char)((uint)unaff_EBX >> 0x18);
      goto LAB_108a8886;
    }
    puStack_1c = auStack_3c;
    auStack_3c[0] = 0;
    puStack_18 = puStack_1c;
    uVar4 = FUN_108a8a30(iVar5);
    cVar1 = FUN_108a89a0(auStack_4c,uVar4);
  }
  if (cVar1 == '\0') {
    FUN_104d15e0("m_bSkillItem",1);
    FUN_104d1550("m_nSkillCount",0);
    FUN_104d1550("m_nSkillCDTime",0);
    FUN_104d1670("m_strSkillName",&DAT_11d9d32b);
    FUN_104d1550("m_nSkillId",0);
    iStack_40 = 0;
  }
  else {
    FUN_104d15e0("m_bSkillItem",uStack_48);
    FUN_104d1550("m_nSkillCount",uStack_44);
    FUN_104d1550("m_nSkillCDTime",iStack_40);
    FUN_104d1700("m_strSkillName",puStack_18);
    FUN_104d1550("m_nSkillId",puStack_14);
    iStack_40 = iStack_40 * 1000;
  }
  FUN_104d1550("m_nCDTime",iStack_40);
  if ((puStack_18 != auStack_3c) && (puStack_18 != (undefined2 *)0x0)) {
    FUN_10c3d5d0(puStack_18);
  }
LAB_108a8886:
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
    *in_stack_00000018 = 0;
  }
  in_stack_00000018[1] = 2;
  *(char *)(in_stack_00000018 + 2) = cVar1;
  if (((uint)local_60 >> 6 & 1) != 0) {
    (**(code **)(*piStack_64 + 8))(&piStack_64,local_5c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108d7da0 @ 108d7da0  size=1474 ===== */
// strings:
//   "TITLE_VO_CLASS_NAME"
//   "TITLEMAININFO_VO_CLASS_NAME"
//   "titleList"
//   "bcarry"
//   "titleId"
//   "description"
//   "bNull"
//   "bGetInHand"
//   "curproperty"
//   "detail"
//   "nEquipBuffID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""TITLE_VO_CLASS_NAME""
     ""TITLEMAININFO_VO_CLASS_NAME""
     ""titleList""
     ""bcarry""
     ""titleId""
     ""description""
     ""bNull""
     ""bGetInHand""
     ""curproperty""
     ""detail"" */

void FUN_108d7da0(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char **unaff_ESI;
  int iVar6;
  undefined8 uVar7;
  char *pcStack_d0;
  char **ppcStack_cc;
  uint uStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  int **ppiStack_bc;
  char *pcStack_b8;
  int iStack_b4;
  char *pcStack_a4;
  undefined1 auStack_9c [4];
  int *piStack_98;
  undefined4 uStack_90;
  int iStack_80;
  int *piStack_7c;
  uint uStack_78;
  char *pcStack_74;
  int *piStack_6c;
  byte bStack_68;
  undefined4 uStack_64;
  int *piStack_5c;
  uint local_58;
  char *apcStack_54 [4];
  int *piStack_44;
  uint uStack_40;
  char *pcStack_3c;
  int *piStack_24;
  uint uStack_20;
  char *pcStack_1c;
  
  if ((((param_1 != (char *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if ((*(uint *)(param_1 + 4) >> 6 & 1) != 0) {
      iStack_b4 = *(int *)(param_1 + 8);
      pcStack_b8 = param_1;
      ppiStack_bc = (int **)0x108d7dfa;
      (**(code **)(**(int **)param_1 + 8))();
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    if (param_5 != 0) {
      iStack_b4 = param_4;
      pcStack_b8 = (char *)0x108d7e21;
      FUN_104f4330();
      piStack_44 = (int *)0x0;
      uStack_40 = 0;
      piStack_7c = (int *)0x0;
      uStack_78 = 0;
      piStack_24 = (int *)0x0;
      uStack_20 = 0;
      pcStack_b8 = (char *)0x108d7e64;
      iStack_80 = FUN_107cb5c0();
      if (iStack_80 != 0) {
        ppiStack_bc = &piStack_44;
        pcStack_a4 = (char *)CONCAT31(pcStack_a4._1_3_,((byte)local_58 & 0x8f) == 10);
        pcStack_b8 = pcStack_a4;
        pcStack_c0 = "TITLE_VO_CLASS_NAME";
        pcStack_c4 = apcStack_54[0];
        uStack_c8 = 0x108d7ea1;
        (**(code **)(*piStack_5c + 0x10))();
        uStack_c8 = (uint)((bStack_68 & 0x8f) == 10);
        ppcStack_cc = apcStack_54;
        pcStack_d0 = "TITLEMAININFO_VO_CLASS_NAME";
        (**(code **)(*piStack_6c + 0x10))(uStack_64);
        pcStack_c4 = (char *)CONCAT31(pcStack_c4._1_3_,((byte)uStack_78 & 0x8f) == 10);
        cVar1 = (**(code **)(*piStack_7c + 0x10))(pcStack_74,"titleList",auStack_9c,pcStack_c4);
        if ((cVar1 != '\0') && (((byte)uStack_78 & 0x8f) == 9)) {
          pcStack_b8 = (char *)0xffffffff;
          ppiStack_bc = (int **)0x0;
          pcStack_c0 = pcStack_74;
          pcStack_c4 = (char *)0x108d7f46;
          (**(code **)(*piStack_7c + 0x44))();
          pcStack_c4 = (char *)0x108d7f4b;
          piVar3 = (int *)FUN_11442b40();
          pcStack_c4 = (char *)0x108d7f6a;
          pcStack_c4 = (char *)FUN_1025b060();
          uStack_c8 = 0x108d7f70;
          iStack_b4 = FUN_11442b60();
          pcStack_c4 = (char *)0x108d7f82;
          piStack_6c = (int *)FUN_1025b060();
          if (iStack_b4 != 0) {
            pcStack_c4 = (char *)0x0;
            uStack_c8 = 0;
            pcStack_d0 = &stack0xffffff58;
            FUN_11a98de0();
            FUN_104d15e0("bcarry",1);
            FUN_104d1790(&DAT_11dbac80,(int)pcStack_c4 + 0x14);
            FUN_104d1550("titleId",*(undefined4 *)((int)pcStack_c4 + 0x10));
            FUN_104d1790("description",(int)pcStack_c4 + 0x90);
            FUN_104d15e0("bNull",0);
            uVar2 = FUN_10a03d10();
            piStack_44 = (int *)CONCAT31(piStack_44._1_3_,uVar2);
            FUN_104d15e0("bGetInHand",piStack_44);
            FUN_104d15e0("bNull",0);
            FUN_104d1790("curproperty",(int)pcStack_c4 + 0xac);
            FUN_104d1790("detail",(int)pcStack_c4 + 0xc0);
            FUN_104d1550("nEquipBuffID",piStack_7c);
            (**(code **)(*piStack_98 + 0x3c))(uStack_90,&pcStack_b8);
          }
          pcStack_c4 = (char *)0x0;
          uStack_c8 = 0;
          pcStack_d0 = &stack0xffffff58;
          ppcStack_cc = unaff_ESI;
          FUN_11a98de0();
          FUN_104d15e0("bNull",1);
          FUN_104d15e0("bGetInHand",1);
          FUN_104d15e0("bcarry",pcStack_c4 == (char *)0x0);
          FUN_104d1550("nEquipBuffID",piStack_7c);
          (**(code **)(*piStack_98 + 0x3c))(uStack_90,&pcStack_b8);
          iVar6 = 0;
          if (-1 < (int)uStack_c8) {
            do {
              iVar4 = FUN_108d1a20();
              if (iVar4 != 0) {
                uVar7 = (**(code **)(_DAT_00000000 + 0x184))();
                cVar1 = FUN_11442be0(*(undefined4 *)(iVar4 + 0x10),uVar7);
                if ((cVar1 == '\0') && (iVar5 = FUN_1025b060(), iVar5 != *(int *)(iVar4 + 0x10))) {
                  FUN_11a98de0(&pcStack_c0,pcStack_c4,0,0);
                  FUN_104d15e0("bNull",0);
                  FUN_104d15e0("bcarry",0);
                  FUN_104d1790(&DAT_11dbac80,iVar4 + 0x14);
                  FUN_104d1550("titleId",*(undefined4 *)(iVar4 + 0x10));
                  FUN_104d1790("description",iVar4 + 0x90);
                  uVar2 = FUN_10a03d10();
                  iStack_b4 = CONCAT31(iStack_b4._1_3_,uVar2);
                  FUN_104d15e0("bGetInHand",iStack_b4);
                  FUN_104d1790("curproperty",iVar4 + 0xac);
                  FUN_104d1790("detail",iVar4 + 0xc0);
                  (**(code **)(*piVar3 + 0x3c))(0,&pcStack_d0);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= (int)uStack_c8);
          }
          if ((*(uint *)(param_1 + 4) >> 6 & 1) != 0) {
            (**(code **)(**(int **)param_1 + 8))(param_1,*(undefined4 *)(param_1 + 8));
            param_1[0] = '\0';
            param_1[1] = '\0';
            param_1[2] = '\0';
            param_1[3] = '\0';
          }
          param_1[4] = '\x02';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          param_1[8] = '\x01';
          FUN_104d7c10();
        }
      }
      if ((uStack_20 >> 6 & 1) != 0) {
        ppiStack_bc = &piStack_24;
        pcStack_b8 = pcStack_1c;
        pcStack_c0 = (char *)0x108d82ce;
        (**(code **)(*piStack_24 + 8))();
        piStack_24 = (int *)0x0;
      }
      uStack_20 = 0;
      if ((uStack_78 >> 6 & 1) != 0) {
        ppiStack_bc = &piStack_7c;
        pcStack_b8 = pcStack_74;
        pcStack_c0 = (char *)0x108d8301;
        (**(code **)(*piStack_7c + 8))();
        piStack_7c = (int *)0x0;
      }
      uStack_78 = 0;
      if ((uStack_40 >> 6 & 1) != 0) {
        ppiStack_bc = &piStack_44;
        pcStack_b8 = pcStack_3c;
        pcStack_c0 = (char *)0x108d832e;
        (**(code **)(*piStack_44 + 8))();
        piStack_44 = (int *)0x0;
      }
      uStack_40 = 0;
      if ((local_58 >> 6 & 1) != 0) {
        ppiStack_bc = &piStack_5c;
        pcStack_b8 = apcStack_54[0];
        pcStack_c0 = (char *)0x108d835b;
        (**(code **)(*piStack_5c + 8))();
      }
    }
  }
  return;
}



/* ===== FUN_108d8370 @ 108d8370  size=745 ===== */
// strings:
//   "TITLEPROPERTY_VO_CLASS_NAME"
//   "propertyList"
//   "description"
//   "buffid"
//   "propertyType"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""TITLEPROPERTY_VO_CLASS_NAME""
     ""propertyList""
     ""description""
     ""buffid""
     ""propertyType"" */

void FUN_108d8370(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piStack_6c;
  uint uStack_68;
  int *apiStack_64 [2];
  undefined4 uStack_5c;
  int *piStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int *piStack_3c;
  uint uStack_38;
  int *piStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      FUN_104f4330(param_4);
      piStack_3c = (int *)0x0;
      uStack_38 = 0;
      piStack_6c = (int *)0x0;
      uStack_68 = 0;
      piStack_54 = (int *)0x0;
      uStack_50 = 0;
      iVar2 = FUN_107cb5c0();
      if (iVar2 != 0) {
        (**(code **)(*piStack_24 + 0x10))
                  (uStack_1c,"TITLEPROPERTY_VO_CLASS_NAME",&piStack_3c,((byte)local_20 & 0x8f) == 10
                  );
        (**(code **)(*piStack_34 + 0x10))
                  (uStack_2c,"propertyList",apiStack_64,(bStack_30 & 0x8f) == 10);
        (**(code **)(_DAT_00000000 + 0x44))(piStack_6c,0,0xffffffff);
        iVar2 = FUN_11442b40();
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            iVar3 = FUN_108d1a20();
            if ((iVar3 != 0) && (cVar1 = FUN_10a03d10(), cVar1 != '\0')) {
              FUN_11a98de0(&piStack_6c,0,0,0);
              FUN_104d1790(&DAT_11dbac80,iVar3 + 0xac);
              FUN_104d1790("description",iVar3 + 0xc0);
              FUN_104d1440("buffid",*(undefined4 *)(iVar3 + 0x98));
              FUN_104d1550("propertyType",*(undefined4 *)(iVar3 + 0x1c));
              (**(code **)(*apiStack_64[0] + 0x3c))(uStack_5c,&stack0xffffff84);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
          *param_1 = 0;
        }
        param_1[1] = 2;
        *(undefined1 *)(param_1 + 2) = 1;
      }
      if ((uStack_50 >> 6 & 1) != 0) {
        (**(code **)(*piStack_54 + 8))(&piStack_54,uStack_4c);
        piStack_54 = (int *)0x0;
      }
      uStack_50 = 0;
      if ((uStack_68 >> 6 & 1) != 0) {
        (**(code **)(*piStack_6c + 8))(&piStack_6c,apiStack_64[0]);
        piStack_6c = (int *)0x0;
      }
      uStack_68 = 0;
      if ((uStack_38 >> 6 & 1) != 0) {
        (**(code **)(*piStack_3c + 8))(&piStack_3c,piStack_34);
        piStack_3c = (int *)0x0;
      }
      uStack_38 = 0;
      if ((local_20 >> 6 & 1) != 0) {
        (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
      }
    }
  }
  return;
}



/* ===== FUN_108d8b00 @ 108d8b00  size=2556 ===== */
// calls: CPet::SetName, memcpy, puts, exit
// strings:
//   "arrayBufferID"
//   "arrayBuffer"
//   "arrayBufferTips"
//   "out of memory\n"
//   "catCuisineName"

/* [RE-AUTO c0]
   calls: memcpy, puts, exit
   strings:
     ""arrayBufferID""
     ""arrayBuffer""
     ""arrayBufferTips""
     ""out of memory\n""
     ""catCuisineName"" */

void FUN_108d8b00(int **param_1,void *param_2,int param_3,int *param_4,int param_5)

{
  int **ppiVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int **ppiVar13;
  undefined4 unaff_ESI;
  int **ppiVar14;
  undefined4 *unaff_EDI;
  undefined4 *puVar15;
  int **ppiVar16;
  size_t sVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puStack_13c;
  char *pcStack_138;
  int **ppiStack_134;
  undefined4 *puStack_130;
  int **ppiStack_12c;
  int **ppiStack_128;
  int *piStack_124;
  int *piStack_114;
  undefined4 uStack_110;
  int *piStack_10c;
  uint uStack_108;
  int *piStack_104;
  byte bStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int **ppiStack_ec;
  int *local_e8;
  uint uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_ac;
  undefined4 uStack_a8;
  int iStack_9c;
  int iStack_98;
  void *pvStack_94;
  void *pvStack_90;
  void *pvStack_88;
  void *local_84;
  undefined4 uStack_80;
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 *puStack_58;
  int ***pppiStack_54;
  int **ppiStack_50;
  int **ppiStack_4c;
  undefined1 auStack_44 [4];
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_114;
  local_84 = param_2;
  if ((((param_1 != (int **)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_124 = param_1[2];
      ppiStack_128 = param_1;
      ppiStack_12c = (int **)0x108d8b6f;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      piStack_124 = param_4;
      ppiStack_128 = (int **)0x108d8b93;
      FUN_104f4330();
      ppiStack_128 = (int **)0x108d8b98;
      iVar3 = FUN_107cb5c0();
      if ((iVar3 != 0) && (*(int **)(iVar3 + 0x2d60) != (int *)0x0)) {
        piStack_124 = (int *)0x108d8bb5;
        pvVar4 = (void *)(**(code **)(**(int **)(iVar3 + 0x2d60) + 0x10))();
        piStack_124 = (int *)0x108d8bc9;
        pvStack_88 = pvVar4;
        (**(code **)(**(int **)(iVar3 + 0x2d60) + 0x14))();
        piStack_124 = (int *)0x108d8bd6;
        uVar5 = (**(code **)(**(int **)(iVar3 + 0x2d60) + 0x18))();
        piStack_124 = (int *)0x108d8be6;
        uVar6 = (**(code **)(**(int **)(iVar3 + 0x2d60) + 0x1c))();
        if (0 < (int)pvVar4) {
          piStack_124 = (int *)0x108d8bfd;
          FUN_10a04620();
          puStack_130 = (undefined4 *)0x108d8c0c;
          ppiStack_12c = pvVar4;
          ppiStack_128 = (int **)(uVar6 & 0xff);
          piStack_124 = (int *)(uVar5 & 0xff);
          FUN_10a04770();
          ppiVar1 = ppiStack_ec;
          ppiStack_134 = &piStack_ac;
          piStack_ac = (int *)0x0;
          uStack_a8 = 0;
          puVar18 = (undefined4 *)
                    CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)piStack_f0 & 0x8f) == 10);
          pcStack_138 = "arrayBufferID";
          puStack_130 = puVar18;
          cVar2 = (**(code **)(*piStack_f4 + 0x10))();
          if (cVar2 != '\0') {
            FUN_10a04ae0(&stack0xfffffee4);
            uVar6 = 0;
            uVar5 = (uint)((int)puVar18 + (3 - (int)unaff_EDI)) >> 2;
            if (puVar18 < unaff_EDI) {
              uVar5 = 0;
            }
            if (uVar5 != 0) {
              do {
                puStack_58 = (undefined4 *)*unaff_EDI;
                piStack_60 = (int *)0x0;
                piStack_5c = (int *)0x3;
                (**(code **)(*piStack_c0 + 0x3c))(uStack_b8,&piStack_60);
                if (((uint)piStack_5c >> 6 & 1) != 0) {
                  (**(code **)(*piStack_60 + 8))(&piStack_60,puStack_58);
                }
                uVar6 = uVar6 + 1;
                unaff_EDI = unaff_EDI + 1;
              } while (uVar6 != uVar5);
            }
            FUN_10a04b30(auStack_44);
            uVar6 = 0;
            uVar5 = (uint)((int)puStack_3c + (3 - (int)puStack_40)) >> 2;
            if (puStack_3c < puStack_40) {
              uVar5 = 0;
            }
            puVar15 = puStack_40;
            if (uVar5 != 0) {
              do {
                pppiStack_54 = (int ***)*puVar15;
                piStack_5c = (int *)0x0;
                puStack_58 = (undefined4 *)0x3;
                (**(code **)(*piStack_bc + 0x3c))(uStack_b4,&piStack_5c);
                if (((uint)puStack_58 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_5c + 8))(&piStack_5c,pppiStack_54);
                }
                uVar6 = uVar6 + 1;
                puVar15 = puVar15 + 1;
              } while (uVar6 != uVar5);
            }
            if (puStack_40 != (undefined4 *)0x0) {
              FUN_10c3d5d0(puStack_40);
            }
            if (puVar18 != (undefined4 *)0x0) {
              FUN_10c3d5d0(puVar18);
            }
          }
          uStack_d4 = 0;
          uStack_d0 = 0;
          ppiStack_12c = (int **)CONCAT31(ppiStack_12c._1_3_,(bStack_100 & 0x8f) == 10);
          cVar2 = (**(code **)(*piStack_104 + 0x10))
                            (iStack_fc,"arrayBuffer",&uStack_d4,ppiStack_12c);
          if (cVar2 != '\0') {
            FUN_10a04f90(iStack_98 - iStack_9c >> 2,extraout_ECX);
            puVar15 = puStack_58;
            puVar7 = (undefined4 *)FUN_10a059b0(puStack_58);
            puVar18 = puVar7;
            uVar10 = extraout_ECX_00;
            for (; puVar15 != puVar7; puVar15 = puVar15 + 1) {
              puVar11 = &DAT_11d9d32b;
              if ((undefined1 *)*puVar15 != (undefined1 *)0x0) {
                puVar11 = (undefined1 *)*puVar15;
              }
              CPet__SetName(puVar11);
              pcStack_138 = (char *)0x0;
              puStack_130 = (undefined4 *)&DAT_11d9d32b;
              if (puVar18 != (undefined4 *)0x0) {
                puStack_130 = puVar18;
              }
              ppiStack_134 = (int **)&DAT_00000006;
              puVar20 = puVar18;
              (**(code **)(*piStack_f0 + 0x3c))(local_e8,&pcStack_138);
              uVar10 = extraout_ECX_01;
              if (((uint)puStack_130 >> 6 & 1) != 0) {
                (*(code *)(*ppiStack_134)[2])(&ppiStack_134,ppiStack_12c);
                ppiStack_134 = (int **)0x0;
                uVar10 = extraout_ECX_02;
              }
              puStack_130 = (undefined4 *)0x0;
              if (puVar18 != (undefined4 *)0x0) {
                FUN_10c3da30(puVar18);
                uVar10 = extraout_ECX_03;
              }
              puVar18 = puVar20;
            }
            FUN_10a04f90((int)pvStack_94 - iStack_98 >> 2,uVar10);
            ppiVar8 = (int **)FUN_10a059b0(ppiVar1);
            ppiVar13 = ppiVar1;
            ppiVar16 = ppiVar1;
            ppiStack_134 = ppiVar8;
            if (ppiVar8 != ppiVar1) {
              do {
                pcStack_138 = (char *)0x0;
                piVar12 = (int *)&DAT_11d9d32b;
                if (*ppiVar16 != (int *)0x0) {
                  piVar12 = *ppiVar16;
                }
                CPet__SetName(piVar12);
                uStack_70 = 0;
                ppiStack_68 = (int **)&DAT_11d9d32b;
                if (ppiVar1 != (int **)0x0) {
                  ppiStack_68 = ppiVar1;
                }
                ppiStack_6c = (int **)&DAT_00000006;
                (**(code **)(*local_e8 + 0x3c))(piStack_e0,&uStack_70);
                if (((uint)ppiStack_68 >> 6 & 1) != 0) {
                  (*(code *)(*ppiStack_6c)[2])(&ppiStack_6c,uStack_64);
                  ppiStack_6c = (int **)0x0;
                }
                ppiStack_68 = (int **)0x0;
                if (ppiVar1 != (int **)0x0) {
                  FUN_10c3da30(ppiVar1);
                }
                ppiVar13 = ppiStack_12c;
                ppiVar16 = ppiVar16 + 1;
                ppiVar14 = ppiStack_134;
              } while (ppiVar16 != ppiVar8);
              while (ppiVar14 != ppiVar13) {
                ppiVar14 = ppiVar14 + -1;
                if (*ppiVar14 != (int *)0x0) {
                  FUN_10c3da30(*ppiVar14);
                }
                *ppiVar14 = (int *)0x0;
              }
            }
            if (ppiVar13 != (int **)0x0) {
              FUN_10c3d5d0(ppiVar13);
            }
            ppiVar16 = ppiStack_50;
            ppiVar13 = ppiVar1;
            while (ppiVar13 != ppiVar16) {
              ppiVar13 = ppiVar13 + -1;
              if (*ppiVar13 != (int *)0x0) {
                FUN_10c3da30(*ppiVar13);
              }
              *ppiVar13 = (int *)0x0;
            }
            if (ppiVar16 != (int **)0x0) {
              FUN_10c3d5d0(ppiVar16);
            }
          }
          piVar12 = &iStack_fc;
          iStack_fc = 0;
          uStack_f8 = 0;
          puStack_13c = (undefined4 *)
                        CONCAT31((int3)((uint)ppiVar1 >> 8),((byte)uStack_110 & 0x8f) == 10);
          cVar2 = (**(code **)(*piStack_114 + 0x10))
                            (piStack_10c,"arrayBufferTips",piVar12,puStack_13c);
          if (cVar2 != '\0') {
            sVar17 = (int)pvStack_90 - (int)pvStack_94;
            FUN_10463080((int)sVar17 >> 2,&stack0xfffffec3);
            if (pvStack_90 != pvStack_94) {
              pvVar4 = memcpy(puStack_13c,pvStack_94,sVar17);
              for (puVar18 = puStack_13c; puVar18 != (undefined4 *)(sVar17 + (int)pvVar4);
                  puVar18 = puVar18 + 1) {
                iVar3 = FUN_104fd710(*puVar18);
                if (iVar3 != 0) {
                  ppiStack_50 = &piStack_60;
                  piStack_60 = (int *)((uint)piStack_60 & 0xffffff00);
                  ppiStack_4c = ppiStack_50;
                  FUN_100e5aa0(ppiStack_50);
                  CPet__SetName(ppiStack_50);
                  piVar19 = piVar12;
                  if ((pppiStack_54 != &ppiStack_68) && (pppiStack_54 != (int ***)0x0)) {
                    FUN_10c3d5d0(pppiStack_54);
                    piVar19 = piVar12;
                  }
                  local_84 = (void *)0x0;
                  piStack_7c = (int *)&DAT_11d9d32b;
                  if (piVar19 != (int *)0x0) {
                    piStack_7c = piVar19;
                  }
                  uStack_80 = 6;
                  piVar12 = piVar19;
                  (**(code **)(*piStack_114 + 0x3c))(piStack_10c,&local_84);
                  if ((uStack_78 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_7c + 8))(&piStack_7c,uStack_74);
                    piStack_7c = (int *)0x0;
                  }
                  uStack_78 = 0;
                  if (piVar19 != (int *)0x0) {
                    FUN_10c3da30(piVar19);
                  }
                }
              }
            }
            sVar17 = (int)local_84 - (int)pvStack_88;
            uVar5 = (int)sVar17 >> 2;
            if (0x3fffffff < uVar5) {
              puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(uVar5 << 2);
            }
            iVar3 = 0;
            if (local_84 != pvStack_88) {
              pvVar4 = memcpy((void *)0x0,pvStack_88,sVar17);
              puVar18 = (undefined4 *)0x0;
              if ((undefined4 *)(sVar17 + (int)pvVar4) != (undefined4 *)0x0) {
                do {
                  iVar9 = FUN_104fd710(*puVar18);
                  if (iVar9 != 0) {
                    ppiStack_50 = &piStack_60;
                    piStack_60 = (int *)((uint)piStack_60 & 0xffffff00);
                    ppiStack_4c = ppiStack_50;
                    FUN_100e5aa0(ppiStack_50);
                    CPet__SetName(ppiStack_50);
                    piVar19 = piVar12;
                    if ((pppiStack_54 != &ppiStack_68) && (pppiStack_54 != (int ***)0x0)) {
                      FUN_10c3d5d0(pppiStack_54);
                      piVar19 = piVar12;
                    }
                    local_84 = (void *)0x0;
                    piStack_7c = (int *)&DAT_11d9d32b;
                    if (piVar19 != (int *)0x0) {
                      piStack_7c = piVar19;
                    }
                    uStack_80 = 6;
                    piVar12 = piVar19;
                    (**(code **)(*piStack_114 + 0x3c))(piStack_10c,&local_84);
                    if ((uStack_78 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_7c + 8))(&piStack_7c,uStack_74);
                      piStack_7c = (int *)0x0;
                    }
                    uStack_78 = 0;
                    if (piVar19 != (int *)0x0) {
                      FUN_10c3da30(piVar19);
                    }
                  }
                  puVar18 = puVar18 + 1;
                } while (puVar18 != (undefined4 *)(sVar17 + (int)pvVar4));
              }
            }
            if (iVar3 != 0) {
              FUN_10c3d5d0(iVar3);
            }
            if (puStack_13c != (undefined4 *)0x0) {
              FUN_10c3d5d0(puStack_13c);
            }
          }
          iVar3 = FUN_108d15f0(uStack_c4);
          if (iVar3 != 0) {
            ppiStack_6c = &piStack_7c;
            piStack_7c = (int *)((uint)piStack_7c & 0xffffff00);
            ppiStack_68 = ppiStack_6c;
            FUN_100e5aa0(ppiStack_6c);
            FUN_104d1670("catCuisineName",ppiStack_6c);
            if ((ppiStack_68 != &piStack_7c) && (ppiStack_68 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_68);
            }
          }
          if ((uStack_108 >> 6 & 1) != 0) {
            (**(code **)(*piStack_10c + 8))(&piStack_10c,piStack_104);
            piStack_10c = (int *)0x0;
          }
          uStack_108 = 0;
          if (((uint)piStack_f0 >> 6 & 1) != 0) {
            (**(code **)(*piStack_f4 + 8))(&piStack_f4,ppiStack_ec);
            piStack_f4 = (int *)0x0;
          }
          piStack_f0 = (int *)0x0;
          if ((uStack_d8 >> 6 & 1) != 0) {
            (**(code **)(*piStack_dc + 8))(&piStack_dc,uStack_d4);
            piStack_dc = (int *)0x0;
          }
          uStack_d8 = 0;
          FUN_10a046e0();
        }
      }
      if ((uStack_e4 >> 6 & 1) != 0) {
        ppiStack_128 = &local_e8;
        piStack_124 = piStack_e0;
        ppiStack_12c = (int **)0x108d94f6;
        (**(code **)(*local_e8 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



