// CPetTrainUI::BuildTrainInfoVO @ 108e4680
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-R1]
   strings:
     ""TRAIN_VO_CLASSNAME""
     ""strDesc""
     ""level""
     ""upgradeCost""
     ""farmExpCost""
     ""trainCost""
     ""MATERIAL_ITEM_VO_CLASS_NAME""
     ""ItemID""
     ""itemIconPathName""
     ""itemList"" */

void CPetTrainUI__BuildTrainInfoVO
               (undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  char **ppcVar7;
  int unaff_ESI;
  ushort *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int **ppiVar11;
  char *pcVar12;
  char *pcStack_294;
  char **ppcStack_290;
  int *piStack_28c;
  undefined1 *puStack_288;
  int *piStack_284;
  int **ppiStack_280;
  undefined4 *puStack_27c;
  int **ppiStack_278;
  undefined1 *puStack_274;
  int *piStack_270;
  char *pcStack_26c;
  undefined4 *puStack_268;
  undefined4 uStack_264;
  undefined4 *puStack_260;
  int iStack_25c;
  int *piStack_24c;
  int iStack_248;
  undefined4 *puStack_244;
  int *piStack_240;
  uint uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  int *piStack_210;
  uint uStack_20c;
  int *piStack_208;
  char *pcStack_204;
  int *piStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [4];
  undefined4 *local_1ec;
  int *piStack_1e0;
  char *pcStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int *piStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  int *piStack_1b4;
  undefined4 uStack_1ac;
  int *piStack_1a0;
  uint uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_174;
  undefined4 *puStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [4];
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_d4;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [12];
  undefined4 uStack_88;
  int *piStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_74 [4];
  int aiStack_70 [4];
  undefined1 *puStack_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [16];
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_24c;
  local_1ec = param_1;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      iStack_25c = param_1[2];
      puStack_260 = param_1;
      uStack_264 = 0x108e46eb;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    iVar2 = DAT_1202e818;
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_25c = 0x108e4715;
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 0xd0) + 0x90) + 0xb4))();
    iStack_18c = iVar2;
    if (iVar2 != 0) {
      iStack_25c = 0x108e473c;
      cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))();
      if (((cVar1 != '\0') && (iStack_248 = *(int *)(DAT_1202e818 + 0xd0), iStack_248 != 0)) &&
         (piVar6 = *(int **)(iVar2 + 0x2cd8), piVar6 != (int *)0x0)) {
        iStack_25c = 0x108e4770;
        uStack_20c = (**(code **)(*piVar6 + 0x54))();
        if (uStack_20c != 0) {
          iStack_25c = 0x108e478b;
          uStack_23c = (**(code **)(*(int *)(iStack_248 + 0x140) + 4))();
          iStack_25c = param_4;
          puStack_260 = (undefined4 *)0x108e4799;
          FUN_104f4330();
          puStack_260 = &uStack_14c;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_264 = 0x108e47be;
          FUN_11a98a70();
          puStack_268 = &uStack_168;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_264 = CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)uStack_20c & 0x8f) == 10);
          uStack_234 = 0;
          pcStack_26c = "TRAIN_VO_CLASSNAME";
          piStack_270 = piStack_208;
          puStack_274 = (undefined1 *)0x108e480c;
          cVar1 = (**(code **)(*piStack_210 + 0x10))();
          if ((cVar1 == '\0') || (((byte)uStack_174 & 0x8f) != 6)) {
            puStack_170 = (undefined4 *)0x0;
          }
          else if ((uStack_174 >> 6 & 1) == 0) {
            puStack_244 = puStack_170;
          }
          else {
            puStack_170 = (undefined4 *)*puStack_170;
            puStack_244 = puStack_170;
          }
          piStack_24c = piVar6 + 8;
          puVar8 = (ushort *)(unaff_ESI + 0xa4);
          iVar2 = 0;
          puStack_27c = puStack_170;
          do {
            puStack_274 = (undefined1 *)0x0;
            ppiStack_278 = (int **)0x0;
            ppiStack_280 = &piStack_240;
            piStack_240 = (int *)0x0;
            uStack_23c = 0;
            piStack_284 = (int *)0x108e4884;
            FUN_11a98de0();
            piStack_284 = (int *)(uint)*puVar8;
            piStack_28c = (int *)0x2;
            ppcStack_290 = (char **)0x108e4890;
            puStack_288 = (undefined1 *)iVar2;
            uVar3 = FUN_11420f50();
            puStack_288 = (undefined1 *)0x108e489b;
            piStack_284 = (int *)uVar3;
            iVar4 = FUN_108e15c0();
            if (iVar4 == 0) {
              piStack_284 = (int *)0x108e48ad;
              FUN_104d7c10();
            }
            else {
              piStack_284 = (int *)(iVar4 + 0x50);
              puStack_288 = (undefined1 *)0x108e48bf;
              FUN_100e5580();
              puStack_288 = auStack_54;
              auStack_54[0] = 0;
              piStack_28c = (int *)0x108e48e6;
              puStack_44 = puStack_288;
              puStack_40 = puStack_288;
              FUN_100e5aa0();
              piStack_28c = (int *)puStack_44;
              ppcStack_290 = (char **)&DAT_11dbac80;
              pcStack_294 = (char *)0x108e48fd;
              FUN_104d1670();
              if ((puStack_44 != auStack_58) && (puStack_44 != (undefined1 *)0x0)) {
                piStack_28c = (int *)puStack_44;
                ppcStack_290 = (char **)0x108e491c;
                FUN_10c3d5d0();
              }
              piStack_28c = aiStack_70;
              ppcStack_290 = (char **)0x108e492f;
              iVar5 = FUN_100e5b40();
              ppcStack_290 = *(char ***)(iVar5 + 0x14);
              pcStack_294 = "strDesc";
              FUN_104d1670();
              if ((puStack_60 != auStack_74) && (puStack_60 != (undefined1 *)0x0)) {
                ppcStack_290 = (char **)puStack_60;
                pcStack_294 = (char *)0x108e4961;
                FUN_10c3d5d0();
              }
              ppcStack_290 = (char **)pcStack_26c;
              pcStack_294 = "type";
              FUN_104d1550();
              FUN_104d1550("level",(short)*piStack_270);
              FUN_104d1550("upgradeCost",*(undefined4 *)(iVar4 + 0x24));
              FUN_104d1550("farmExpCost",*(undefined4 *)(iVar4 + 0x20));
              iVar5 = FUN_108e1aa0(uVar3);
              if (iVar5 != 0) {
                ppcStack_290 = *(char ***)(iVar5 + 0x38);
                pcStack_294 = "trainCost";
                FUN_104d1550();
              }
              ppcStack_290 = &pcStack_1dc;
              pcStack_1dc = (char *)0x0;
              uStack_1d8 = 0;
              uStack_1fc = 0;
              uStack_1f8 = 0;
              pcStack_294 = (char *)0x108e4a14;
              FUN_11a98a70();
              ppiVar11 = &piStack_200;
              puStack_27c = (undefined4 *)0x0;
              pcStack_204 = (char *)CONCAT31(pcStack_204._1_3_,((byte)uStack_23c & 0x8f) == 10);
              pcStack_294 = pcStack_204;
              pcVar12 = "MATERIAL_ITEM_VO_CLASS_NAME";
              uVar3 = uStack_238;
              cVar1 = (**(code **)(*piStack_240 + 0x10))(uStack_238,"MATERIAL_ITEM_VO_CLASS_NAME");
              if (((cVar1 != '\0') && (((byte)uStack_20c & 0x8f) == 6)) &&
                 (piStack_28c = piStack_208, (uStack_20c >> 6 & 1) != 0)) {
                piStack_28c = (int *)*piStack_208;
              }
              puVar9 = (undefined4 *)(iVar4 + 0x3c);
              iVar4 = 5;
              do {
                ppcStack_290 = (char **)puVar9[-5];
                puStack_288 = (undefined1 *)FUN_10254130(ppcStack_290);
                if (puStack_288 != (undefined1 *)0x0) {
                  uStack_88 = 0;
                  piStack_84 = (int *)0x0;
                  FUN_11a98de0(&uStack_88,piStack_28c,0,0);
                  FUN_104d1550("ItemID",uVar3);
                  FUN_104d1550(&DAT_11dbdc0c,*puVar9);
                  FUN_104d1670("itemIconPathName",ppiVar11[0x2d]);
                  (**(code **)(*piStack_200 + 0x3c))(uStack_1f8,auStack_98);
                  FUN_104d7c10();
                }
                puVar9 = puVar9 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              FUN_104d12b0("itemList",auStack_1f0);
              iStack_230 = iVar4;
              iStack_22c = iVar4;
              FUN_11a98a70(&iStack_230);
              piStack_28c = (int *)0x0;
              uStack_1f8 = CONCAT31(uStack_1f8._1_3_,((byte)iVar2 & 0x8f) == 10);
              iStack_1d4 = iVar4;
              iStack_1d0 = iVar4;
              cVar1 = (**(code **)(*(int *)puVar8 + 0x10))
                                (piStack_24c,"PET_VO_CLASSNAME",&iStack_1d4,uStack_1f8);
              pcVar10 = (char *)0x0;
              if (((cVar1 != '\0') && (((byte)piStack_1e0 & 0x8f) == 6)) &&
                 (pcVar10 = pcStack_1dc, pcVar12 = pcStack_1dc, ((uint)piStack_1e0 >> 6 & 1) != 0))
              {
                pcVar10 = *(char **)pcStack_1dc;
                pcVar12 = *(char **)pcStack_1dc;
              }
              iVar4 = 4;
              ppcVar7 = ppcStack_290;
              do {
                piStack_84 = (int *)0x0;
                uStack_80 = 0;
                FUN_11a98de0(&piStack_84,pcVar10,0,0);
                iVar5 = (int)*ppcVar7;
                FUN_104d1550("petid",iVar5);
                FUN_104d1550("facialityIndex",iVar4);
                if (0 < iVar5) {
                  uVar3 = FUN_112fb110(iVar5);
                  ppiVar11 = &piStack_1a0;
                  uStack_194 = 0;
                  uStack_188 = 0;
                  uStack_15c = 0;
                  uStack_b8 = 0;
                  CPet__BuildPetDetailView(uVar3,iVar5);
                  piVar6 = (int *)&DAT_11d9d32b;
                  if (piStack_1a0 != (int *)0x0) {
                    piVar6 = piStack_1a0;
                  }
                  CPet__SetName(piVar6);
                  puStack_b0 = auStack_c0;
                  auStack_c0[0] = 0;
                  puStack_ac = puStack_b0;
                  FUN_100e5aa0(puStack_b0);
                  FUN_104d1670("strName",puStack_b0);
                  if ((puStack_b0 != auStack_c4) && (puStack_b0 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_b0);
                  }
                  FUN_104d1550("level",uStack_198);
                  auStack_c4[0] = 0;
                  puStack_b4 = auStack_c4;
                  puStack_b0 = puStack_b4;
                  FUN_100e5aa0(puStack_b4);
                  FUN_104d1670(&DAT_11dbf768,puStack_b4);
                  if ((puStack_b4 != auStack_c8) && (puStack_b4 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_b4);
                  }
                  FUN_104d1550("remainTrainTime",uStack_d4);
                  if (ppiVar11 != (int **)0x0) {
                    FUN_10c3da30(ppiVar11);
                  }
                  FUN_1050f1c0();
                }
                (**(code **)(*(int *)puVar8 + 0x3c))(piStack_24c,auStack_94);
                pcVar10 = pcVar12;
                if ((uStack_80 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_84 + 8))(&piStack_84,uStack_7c);
                  pcVar10 = pcVar12;
                }
                ppcVar7 = ppcVar7 + 1;
                iVar4 = iVar4 + -1;
                pcVar12 = pcVar10;
              } while (iVar4 != 0);
              (**(code **)(*piStack_284 + 0x14))
                        (puStack_27c,"petList",&puStack_244,((byte)ppiStack_280 & 0x8f) == 10);
              (**(code **)(*piStack_1b4 + 0x3c))(uStack_1ac,&pcStack_294);
              if ((uStack_19c >> 6 & 1) != 0) {
                ppiStack_278 = &piStack_1a0;
                puStack_274 = (undefined1 *)uStack_198;
                puStack_27c = (undefined4 *)0x108e4ea9;
                (**(code **)(*piStack_1a0 + 8))();
                piStack_1a0 = (int *)0x0;
              }
              uStack_19c = 0;
              if ((uStack_1fc >> 6 & 1) != 0) {
                ppiStack_278 = &piStack_200;
                puStack_274 = (undefined1 *)uStack_1f8;
                puStack_27c = (undefined4 *)0x108e4edc;
                (**(code **)(*piStack_200 + 8))();
                piStack_200 = (int *)0x0;
              }
              uStack_1fc = 0;
              if (((uint)pcStack_1dc >> 6 & 1) != 0) {
                ppiStack_278 = &piStack_1e0;
                puStack_274 = (undefined1 *)uStack_1d8;
                puStack_27c = (undefined4 *)0x108e4f15;
                (**(code **)(*piStack_1e0 + 8))();
                piStack_1e0 = (int *)0x0;
              }
              pcStack_1dc = (char *)0x0;
              if ((uStack_1bc >> 6 & 1) != 0) {
                ppiStack_278 = &piStack_1c0;
                puStack_274 = (undefined1 *)uStack_1b8;
                puStack_27c = (undefined4 *)0x108e4f54;
                (**(code **)(*piStack_1c0 + 8))();
                piStack_1c0 = (int *)0x0;
              }
              uStack_1bc = 0;
              if (iStack_248 != 0) {
                puStack_274 = (undefined1 *)iStack_248;
                ppiStack_278 = (int **)0x108e4f78;
                FUN_10c3da30();
              }
              iStack_248 = 0;
              if ((uStack_23c >> 6 & 1) != 0) {
                ppiStack_278 = &piStack_240;
                puStack_274 = (undefined1 *)uStack_238;
                puStack_27c = (undefined4 *)0x108e4fa0;
                (**(code **)(*piStack_240 + 8))();
              }
            }
            iVar2 = iVar2 + 1;
            piStack_24c = piStack_24c + 4;
            puVar8 = puVar8 + 1;
            puStack_27c = puStack_244;
          } while (iVar2 < 6);
          puStack_274 = auStack_160;
          ppiStack_278 = (int **)0x11dd7188;
          puStack_27c = (undefined4 *)0x108e4fdc;
          FUN_104d12b0();
          puStack_27c = (undefined4 *)0x108e4fe1;
          iVar2 = FUN_117c7e70();
          puStack_27c = *(undefined4 **)(iVar2 + 0x98);
          ppiStack_280 = (int **)0x11dd7084;
          piStack_284 = (int *)0x108e4ff8;
          FUN_104d1550();
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          puStack_274 = (undefined1 *)0x108e5019;
          uStack_188 = FUN_1025b060();
          puStack_274 = (undefined1 *)0x108e502b;
          uStack_184 = FUN_1025b060();
          puStack_274 = (undefined1 *)0x108e503d;
          uStack_180 = FUN_1025b060();
          puStack_274 = (undefined1 *)0x108e504f;
          uStack_17c = FUN_1025b060();
          puStack_274 = (undefined1 *)0x108e5062;
          FUN_105e2530();
          pcVar12 = pcStack_204;
          if ((*(uint *)(pcStack_204 + 4) >> 6 & 1) != 0) {
            puStack_274 = *(undefined1 **)(pcStack_204 + 8);
            ppiStack_278 = (int **)pcStack_204;
            puStack_27c = (undefined4 *)0x108e507b;
            (**(code **)(**(int **)pcStack_204 + 8))();
            pcVar12[0] = '\0';
            pcVar12[1] = '\0';
            pcVar12[2] = '\0';
            pcVar12[3] = '\0';
          }
          pcVar12[4] = '\x02';
          pcVar12[5] = '\0';
          pcVar12[6] = '\0';
          pcVar12[7] = '\0';
          pcVar12[8] = '\x01';
          puStack_274 = (undefined1 *)0x108e5098;
          FUN_104d7c10();
          puStack_274 = (undefined1 *)0x108e50a4;
          FUN_104d7c10();
          puStack_274 = (undefined1 *)0x108e50ad;
          FUN_104d7c10();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}

