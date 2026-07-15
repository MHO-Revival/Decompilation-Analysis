/* ===== FUN_108e4680 @ 108e4680  size=2626 ===== */
// calls: CPet::SetName
// strings:
//   "TRAIN_VO_CLASSNAME"
//   "strDesc"
//   "level"
//   "upgradeCost"
//   "farmExpCost"
//   "trainCost"
//   "MATERIAL_ITEM_VO_CLASS_NAME"
//   "ItemID"
//   "itemIconPathName"
//   "itemList"
//   "PET_VO_CLASSNAME"
//   "petid"
//   "facialityIndex"
//   "strName"
//   "remainTrainTime"
//   "petList"
//   "trainList"
//   "m_nUIMaxTrainPointLevel"

/* [RE-AUTO c0]
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

void FUN_108e4680(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

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
                  FUN_112f64e0(uVar3,iVar5);
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



/* ===== FUN_108ef270 @ 108ef270  size=396 ===== */
// strings:
//   "InitModel"
//   "RequireCraftMaterialId"
//   "PetTypeSelcted"
//   "OnStartForge"
//   "ForgeItemLevel"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""RequireCraftMaterialId""
     ""PetTypeSelcted""
     ""OnStartForge""
     ""ForgeItemLevel"" */

void FUN_108ef270(void)

{
  undefined *puStack_74;
  char *pcStack_70;
  code **ppcStack_6c;
  undefined4 ***pppuStack_68;
  code *pcStack_64;
  undefined **ppuStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code **ppcStack_54;
  code **ppcStack_50;
  undefined4 ***pppuStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
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
  pppuStack_30 = (undefined4 ***)0x11dbd57c;
  pppuStack_34 = (undefined4 ***)0x108ef2a4;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)FUN_108efeb0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x108ef2b5;
  FUN_108f0580();
  if (((undefined4 ****)pppcStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppcStack_20 != (undefined4 ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x108ef2cb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppuStack_34;
  pppcStack_3c = (code ***)0x11dd730a;
  pppcStack_40 = (code ***)0x11dd72f4;
  pppcStack_44 = (code ***)0x108ef2eb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_108ef420;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppuStack_4c = (undefined4 ***)0x108ef2fc;
  FUN_108f0580();
  if (((code ****)pppuStack_30 != &pppcStack_44) && ((code ****)pppuStack_30 != (code ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    ppcStack_50 = (code **)0x108ef312;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppcStack_44;
  pppuStack_4c = (undefined4 ***)0x11dd7282;
  ppcStack_50 = (code **)0x11dd7274;
  ppcStack_54 = (code **)0x108ef332;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  ppcStack_54 = (code **)&DAT_108efe30;
  pppcStack_58 = (code ***)&pppuStack_4c;
  pppcStack_5c = (code ***)0x108ef343;
  FUN_108f0580();
  if ((pppcStack_40 != &ppcStack_54) && (pppcStack_40 != (code ***)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppuStack_60 = (undefined **)0x108ef359;
    FUN_10c3d5d0();
  }
  pppcStack_44 = &ppcStack_54;
  pppcStack_5c = (code ***)0x11dd7290;
  ppuStack_60 = (undefined **)0x11dd7284;
  pcStack_64 = (code *)0x108ef379;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_108efe40;
  pppuStack_68 = &pppcStack_5c;
  ppcStack_6c = (code **)0x108ef38a;
  FUN_108f0580();
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    ppcStack_6c = ppcStack_50;
    pcStack_70 = (char *)0x108ef3a0;
    FUN_10c3d5d0();
  }
  ppcStack_54 = &pcStack_64;
  ppcStack_6c = (code **)0x11dd72a2;
  pcStack_70 = "ForgeItemLevel";
  puStack_74 = (undefined *)0x108ef3c0;
  ppcStack_50 = ppcStack_54;
  FUN_100b62c0();
  puStack_74 = &DAT_108ef410;
  FUN_108f0580(&ppcStack_6c);
  if ((ppuStack_60 != &puStack_74) && (ppuStack_60 != (undefined **)0x0)) {
    FUN_10c3d5d0(ppuStack_60);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ef420 @ 108ef420  size=2474 ===== */
// strings:
//   "forgematerialList"
//   "_ForgeItem"
//   "m_nAttack"
//   "m_nDefense"
//   "m_nLife"
//   "m_nForce"
//   "m_nBurst"
//   "m_nLucky"
//   "m_nSinew"
//   "m_nWeaponCurrentSlash"
//   "m_nWeaponMaxSlash"
//   "m_nWeaponSlash_Red"
//   "m_nWeaponSlash_Orange"
//   "m_nWeaponSlash_Yellow"
//   "m_nWeaponSlash_Green"
//   "m_nWeaponSlash_Blue"
//   "m_nWeaponSlash_White"
//   "m_nWeaponSlash_Purple"
//   "m_nWeaponSlash_Copper"
//   "m_nEAttack_Water"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""forgematerialList""
     ""_ForgeItem""
     ""m_nAttack""
     ""m_nDefense""
     ""m_nLife""
     ""m_nForce""
     ""m_nBurst""
     ""m_nLucky""
     ""m_nSinew""
     ""m_nWeaponCurrentSlash"" */

void FUN_108ef420(void)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int **ppiVar14;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_c9;
  int iStack_c8;
  undefined4 local_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  int *piStack_b0;
  byte bStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int *local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *piStack_80;
  undefined4 uStack_78;
  int *piStack_70;
  uint uStack_6c;
  undefined4 auStack_68 [2];
  undefined1 auStack_60 [8];
  uint *puStack_58;
  undefined4 uStack_54;
  byte bStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_d4;
  if (in_stack_00000014 != 3) goto LAB_108efdb3;
  local_9c = in_stack_00000010[1];
  local_94 = in_stack_00000010[3];
  local_98 = in_stack_00000010[2];
  local_90 = in_stack_00000010[4];
  local_a0 = (int *)0x0;
  if ((local_9c >> 6 & 1) != 0) {
    local_a0 = (int *)*in_stack_00000010;
    (**(code **)(*local_a0 + 4))(&local_a0,local_98);
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
    local_c4 = in_stack_00000010[8];
  }
  else {
    local_c4 = 0xdeadbeaf;
  }
  if (((byte)in_stack_00000010[0xd] & 0x8f) == 2) {
    uStack_c9 = *(undefined1 *)(in_stack_00000010 + 0xe);
  }
  else {
    uStack_c9 = 0;
  }
  iVar4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  iStack_a4 = iVar4;
  iStack_c8 = FUN_11162d90();
  if ((iVar4 != 0) && (iStack_c8 != 0)) {
    piStack_70 = (int *)0x0;
    uStack_6c = 0;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,((byte)local_9c & 0x8f) == 10);
    cVar2 = (**(code **)(*local_a0 + 0x10))(local_98,"forgematerialList",&piStack_70,uStack_d0);
    if (cVar2 != '\0') {
      ppiVar14 = &piStack_c0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_d0 = CONCAT31(uStack_d0._1_3_,((byte)local_9c & 0x8f) == 10);
      puStack_58 = (uint *)0x0;
      uStack_54 = 0;
      piStack_c0 = (int *)0x0;
      uStack_bc = 0;
      pcVar13 = "_ForgeItem";
      iVar4 = local_98;
      cVar2 = (**(code **)(*local_a0 + 0x10))(local_98,"_ForgeItem",ppiVar14,uStack_d0);
      if (cVar2 != '\0') {
        iVar5 = FUN_107ec240(iStack_d4);
        if (iVar5 != 0) {
          iVar5 = FUN_10254130(*(undefined4 *)(iVar5 + 0x5c));
          if (iVar5 != 0) {
            if ((char)((uint)unaff_ESI >> 0x18) != '\0') {
              FUN_105e5ce0(&stack0xffffff20);
            }
            if (*(int *)(iVar5 + 0x34) == 4) {
              FUN_104d1550("m_nAttack",0);
              FUN_104d1550("m_nDefense",*(undefined4 *)(iVar5 + 0x128));
              FUN_104d1550("m_nLife",*(undefined4 *)(iVar5 + 300));
              FUN_104d1550("m_nForce",0);
              FUN_104d1550("m_nBurst",0);
              FUN_104d1550("m_nLucky",0);
              FUN_104d1550("m_nSinew",0);
              FUN_104d1550("m_nWeaponCurrentSlash",*(undefined4 *)(iVar5 + 0x140));
              iVar6 = FUN_116cc020();
              FUN_104d1550("m_nWeaponMaxSlash",*(undefined4 *)(iVar6 + 0x40));
              FUN_104d1550("m_nWeaponSlash_Red",*(undefined4 *)(iVar5 + 0x144));
              FUN_104d1550("m_nWeaponSlash_Orange",*(undefined4 *)(iVar5 + 0x148));
              FUN_104d1550("m_nWeaponSlash_Yellow",*(undefined4 *)(iVar5 + 0x14c));
              FUN_104d1550("m_nWeaponSlash_Green",*(undefined4 *)(iVar5 + 0x150));
              FUN_104d1550("m_nWeaponSlash_Blue",*(undefined4 *)(iVar5 + 0x154));
              FUN_104d1550("m_nWeaponSlash_White",*(undefined4 *)(iVar5 + 0x158));
              FUN_104d1550("m_nWeaponSlash_Purple",*(undefined4 *)(iVar5 + 0x15c));
              FUN_104d1550("m_nWeaponSlash_Copper",*(undefined4 *)(iVar5 + 0x160));
              FUN_104d1550("m_nEAttack_Water",*(undefined4 *)(iVar5 + 0x170));
              FUN_104d1550("m_nEAttack_Fire",*(undefined4 *)(iVar5 + 0x174));
              FUN_104d1550("m_nEAttack_Thunder",*(undefined4 *)(iVar5 + 0x178));
              FUN_104d1550("m_nEAttack_Dragon",*(undefined4 *)(iVar5 + 0x17c));
              FUN_104d1550("m_nEAttack_Ice",*(undefined4 *)(iVar5 + 0x180));
              FUN_104d1550("m_nResistance_Water",*(undefined4 *)(iVar5 + 0x194));
              FUN_104d1550("m_nResistance_Fire",*(undefined4 *)(iVar5 + 0x198));
              FUN_104d1550("m_nResistance_Thunder",*(undefined4 *)(iVar5 + 0x19c));
              FUN_104d1550("m_nResistance_Dragon",*(undefined4 *)(iVar5 + 0x1a0));
              FUN_104d1550("m_nResistance_Ice",*(undefined4 *)(iVar5 + 0x1a4));
              FUN_104d1550("m_nPoisonAdd",*(undefined4 *)(iVar5 + 0x184));
              FUN_104d1550("m_nSleepAdd",*(undefined4 *)(iVar5 + 0x188));
              FUN_104d1550("m_nNarcosisAdd",*(undefined4 *)(iVar5 + 0x18c));
              FUN_104d1550("m_nDynamiteAdd",*(undefined4 *)(iVar5 + 400));
            }
            goto LAB_108ef919;
          }
LAB_108efc49:
          FUN_104d7c10(iVar4,pcVar13);
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
          goto LAB_108efd96;
        }
LAB_108ef919:
        cVar2 = (**(code **)(*piStack_b0 + 0x10))
                          (uStack_a8,"forgeOtherInfo",auStack_68,(bStack_ac & 0x8f) == 10);
        iVar5 = iStack_d4;
        if (cVar2 != '\0') {
          bVar3 = (*(code *)(*ppiVar14)[7])(iStack_d4);
          pcVar13 = (char *)(uint)bVar3;
          iVar6 = FUN_107ec240(iStack_d4);
          if (iVar6 == 0) goto LAB_108efc49;
          iVar5 = iVar6;
          iVar7 = FUN_1025b060();
          if ((iVar7 < *(int *)(iVar6 + 0x80)) &&
             (iVar7 = FUN_1025b060(), iVar7 < *(int *)(iVar6 + 0x80))) {
            FUN_1025b060();
            iVar6 = iVar5;
            FUN_1025b060();
            iVar5 = iVar6;
          }
          iVar12 = 0;
          iVar6 = FUN_113f9300(0,*(undefined4 *)(iVar6 + 0x5c),0);
          uVar9 = *(undefined4 *)(iVar4 + 0x5c);
          iVar11 = 2;
          iVar4 = FUN_113f9300(2,uVar9,0);
          iVar7 = FUN_113f9300(10,*(undefined4 *)(iVar12 + 0x5c),0);
          FUN_104d15e0("bReallyCanForge",iVar12);
          FUN_104d15e0("bMoneyIsEnough",uVar9);
          FUN_104d1550("nHaveNum",iVar6 + iVar4 + iVar7);
          FUN_104d1550("nMoney",*(undefined4 *)(iVar11 + 0x80));
        }
        cVar2 = (**(code **)(*piStack_c0 + 0x10))
                          (piStack_b8,"PET_MATERIAL_ITEM_DATA_CLASS",auStack_60,
                           ((byte)uStack_bc & 0x8f) == 10);
        if ((((cVar2 != '\0') && ((bStack_4c & 0x8f) == 6)) &&
            ((**(code **)(*piStack_80 + 0x44))(uStack_78,0,0xffffffff), 0 < iVar5)) &&
           ((iVar4 = FUN_107ec240(iVar5), iVar4 != 0 &&
            (*(int *)(iVar4 + 0x120) != *(int *)(iVar4 + 0x124))))) {
          puVar1 = *(undefined4 **)(iVar4 + 0x124);
          for (puVar8 = *(undefined4 **)(iVar4 + 0x120); puVar8 != puVar1; puVar8 = puVar8 + 2) {
            iVar4 = FUN_113f9300(0,*puVar8,0);
            uVar9 = *puVar8;
            iVar11 = 2;
            iVar5 = FUN_113f9300(2,uVar9,0);
            iVar7 = 0;
            iVar6 = FUN_113f9300(10,*puVar8);
            FUN_10254130(*puVar8);
            uStack_bc = 0;
            piStack_b8 = (int *)0x0;
            uVar10 = 0;
            FUN_11a98de0(&uStack_bc,uVar9,0,0);
            if (iVar11 == 0) {
              iVar4 = FUN_100e5b40(auStack_68);
              FUN_104d1670("strItemName",*(undefined4 *)(iVar4 + 0x14));
              if ((puStack_58 != &uStack_6c) && (puStack_58 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_58);
              }
              FUN_104d1670("strItemIconName",_DAT_000000b4);
              FUN_104d1550("nNeedItemNum",0);
              FUN_104d1550("nSelfHasItemNum",0);
              uVar9 = 0;
            }
            else {
              iVar11 = FUN_100e5b40(auStack_68);
              FUN_104d1670("strItemName",*(undefined4 *)(iVar11 + 0x14));
              if ((puStack_58 != &uStack_6c) && (puStack_58 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_58);
              }
              FUN_104d1670("strItemIconName",*(undefined4 *)(iVar7 + 0xb4));
              FUN_104d1550("nNeedItemNum",puVar8[1]);
              FUN_104d1550("nSelfHasItemNum",iVar4 + iVar5 + iVar6);
              uVar9 = *puVar8;
            }
            FUN_104d1550(&DAT_11dbb0b4,uVar9);
            FUN_104d1550("nMatID",uVar10);
            (**(code **)(*piStack_b8 + 0x3c))(piStack_b0,&uStack_d0);
            FUN_104d7c10();
          }
        }
      }
      FUN_104d7c10();
      FUN_104d7c10();
      FUN_104d7c10();
    }
    if ((uStack_6c >> 6 & 1) != 0) {
      (**(code **)(*piStack_70 + 8))(&piStack_70,auStack_68[0]);
    }
  }
LAB_108efd96:
  if ((local_9c >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 8))(&local_a0,local_98);
  }
LAB_108efdb3:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108efeb0 @ 108efeb0  size=1559 ===== */
// calls: CCraftInfo::BuildCraftLists
// strings:
//   "forgeitemdataCacheList"
//   "PET_FORGE_ITEM_DATA_CLASS"
//   "canCraft"
//   "craftID"
//   "PetType"
//   "PetEquipType"
//   "EquipLevel"
//   "PetEquipSeries"
//   "EquipProperty"
//   "nMoney"
//   "nLevelLimit"
//   "strItemName"
//   "PET_MATERIAL_ITEM_DATA_CLASS"
//   "nNeedItemNum"
//   "materialIDArr"
//   "strItemIconName"
//   "strItemDescrbie"
//   "item_icon_42"
//   "ceshi"

/* [RE-AUTO c0]
   strings:
     ""forgeitemdataCacheList""
     ""PET_FORGE_ITEM_DATA_CLASS""
     ""canCraft""
     ""craftID""
     ""PetType""
     ""PetEquipType""
     ""EquipLevel""
     ""PetEquipSeries""
     ""EquipProperty""
     ""nMoney"" */

void FUN_108efeb0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_EDI;
  int *piVar6;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *piStack_10c;
  char *pcStack_108;
  char *pcStack_104;
  char *pcStack_100;
  int **ppiStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int **ppiStack_f0;
  int *piStack_ec;
  int *local_dc;
  int iStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  byte bStack_c8;
  undefined4 *puStack_c4;
  int *local_c0;
  uint local_bc;
  int *local_b8;
  undefined4 local_b4;
  int *local_b0;
  int *piStack_a8;
  int *local_a0;
  uint local_9c;
  int *piStack_98;
  undefined4 uStack_94;
  int iStack_88;
  int *piStack_84;
  uint uStack_80;
  int *apiStack_7c [2];
  int iStack_74;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [4];
  char acStack_3c [16];
  undefined1 *puStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_dc;
  if (in_stack_00000014 == 1) {
    local_c0 = (int *)0x0;
    local_b4 = in_stack_00000010[3];
    local_bc = in_stack_00000010[1];
    piStack_ec = (int *)in_stack_00000010[2];
    local_b0 = (int *)in_stack_00000010[4];
    local_b8 = piStack_ec;
    if ((local_bc >> 6 & 1) != 0) {
      local_c0 = (int *)*in_stack_00000010;
      ppiStack_f0 = &local_c0;
      piStack_f4 = (int *)0x108eff19;
      (**(code **)(*local_c0 + 4))();
    }
    local_a0 = (int *)0x0;
    local_9c = 0;
    ppiStack_f0 = &local_a0;
    local_dc = (int *)CONCAT31(local_dc._1_3_,((byte)local_bc & 0x8f) == 10);
    piStack_ec = local_dc;
    piStack_f4 = (int *)0x11dd3054;
    ppiStack_fc = (int **)0x108eff5b;
    piStack_f8 = local_b8;
    cVar1 = (**(code **)(*local_c0 + 0x10))();
    if (cVar1 != '\0') {
      piStack_ec = (int *)0xffffffff;
      piStack_70 = (int *)0x0;
      uStack_6c = 0;
      ppiStack_f0 = (int **)0x0;
      piStack_f4 = piStack_98;
      piStack_f8 = (int *)0x108eff87;
      (**(code **)(*local_a0 + 0x44))();
      ppiStack_fc = apiStack_7c;
      piStack_f8 = (int *)CONCAT31((int3)((uint)unaff_EDI >> 8),(bStack_c8 & 0x8f) == 10);
      pcStack_100 = "PET_FORGE_ITEM_DATA_CLASS";
      pcStack_104 = (char *)puStack_c4;
      pcStack_108 = (char *)0x108effb4;
      cVar1 = (**(code **)(*piStack_cc + 0x10))();
      if ((cVar1 != '\0') && (((byte)uStack_6c & 0x8f) == 6)) {
        if ((uStack_6c >> 6 & 1) == 0) {
          piStack_a8 = piStack_68;
        }
        else {
          piStack_a8 = (int *)*piStack_68;
        }
        piStack_ec = (int *)0x108effef;
        iVar3 = FUN_107cb5c0();
        if (iVar3 != 0) {
          piStack_ec = (int *)0x108efffe;
          iStack_88 = FUN_11162d90();
          if (iStack_88 != 0) {
            piStack_ec = (int *)0x108f0011;
            iStack_74 = FUN_10876bc0();
            local_dc = (int *)0x0;
            if (0 < iStack_74) {
              do {
                ppiStack_f0 = (int **)0x108f002b;
                piStack_ec = local_dc;
                piVar4 = (int *)FUN_10876b30();
                piStack_84 = piVar4;
                if ((piVar4 != (int *)0x0) && (piVar4[0x11] != 1)) {
                  piStack_ec = (int *)0x0;
                  ppiStack_f0 = (int **)0x0;
                  piStack_f4 = piStack_a8;
                  piStack_f8 = &iStack_d8;
                  iStack_d8 = 0;
                  piStack_d4 = (int *)0x0;
                  ppiStack_fc = (int **)0x108f006a;
                  FUN_11a98de0();
                  ppiStack_fc = (int **)0x108f0071;
                  ppiStack_fc = (int **)(**(code **)(*piVar4 + 0x18))();
                  pcStack_100 = (char *)0x108f0079;
                  uVar2 = FUN_1124f6a0();
                  uStack_94 = CONCAT31(uStack_94._1_3_,uVar2);
                  pcStack_100 = (char *)uStack_94;
                  pcStack_104 = "canCraft";
                  pcStack_108 = (char *)0x108f0091;
                  FUN_104d15e0();
                  pcStack_100 = (char *)0x108f009b;
                  pcStack_100 = (char *)(**(code **)(*piVar4 + 0x18))();
                  pcStack_104 = "craftID";
                  pcStack_108 = (char *)0x108f00ac;
                  FUN_104d1550();
                  pcStack_108 = (char *)piVar4[0x14];
                  piStack_10c = (int *)0x11dd7444;
                  FUN_104d1550();
                  FUN_104d1550("PetEquipType",piVar4[0x12]);
                  FUN_104d1550("EquipLevel",piVar4[0x15]);
                  FUN_104d1550("PetEquipSeries",piVar4[0x13]);
                  FUN_104d1550("EquipProperty",piVar4[0x16]);
                  FUN_104d1550("nMoney",piVar4[0x20]);
                  FUN_104d1550(&DAT_11dbb0b4,piVar4[0x17]);
                  pcStack_100 = (char *)piVar4[0x17];
                  pcStack_104 = (char *)0x108f013f;
                  iVar3 = FUN_10254130();
                  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x34) != 4)) {
                    pcStack_100 = (char *)0x0;
                    pcStack_104 = "nLevelLimit";
                    pcStack_108 = (char *)0x108f01c0;
                    FUN_104d1550();
                    pcStack_108 = "";
                    piStack_10c = (int *)0x11dbdc98;
                    FUN_104d1670();
                  }
                  else {
                    pcStack_100 = *(char **)(iVar3 + 0x110);
                    pcStack_104 = "nLevelLimit";
                    pcStack_108 = (char *)0x108f0164;
                    FUN_104d1550();
                    pcStack_100 = acStack_3c;
                    pcStack_104 = (char *)0x108f0177;
                    iVar3 = FUN_100e5b40();
                    pcStack_104 = *(char **)(iVar3 + 0x14);
                    pcStack_108 = "strItemName";
                    piStack_10c = (int *)0x108f018a;
                    FUN_104d1670();
                    if ((puStack_2c != auStack_40) && (puStack_2c != (undefined1 *)0x0)) {
                      pcStack_104 = puStack_2c;
                      pcStack_108 = (char *)0x108f01a9;
                      FUN_10c3d5d0();
                    }
                  }
                  pcStack_104 = (char *)&uStack_58;
                  uStack_58 = 0;
                  uStack_54 = 0;
                  pcStack_108 = (char *)0x108f01fd;
                  FUN_11a98a70();
                  piStack_10c = &iStack_74;
                  iStack_74 = 0;
                  piStack_70 = (int *)0x0;
                  uStack_94 = CONCAT31(uStack_94._1_3_,((byte)iStack_d8 & 0x8f) == 10);
                  pcStack_108 = (char *)uStack_94;
                  cVar1 = (**(code **)(*local_dc + 0x10))(piStack_d4,"PET_MATERIAL_ITEM_DATA_CLASS")
                  ;
                  if ((cVar1 != '\0') && (((byte)uStack_80 & 0x8f) == 6)) {
                    piVar5 = apiStack_7c[0];
                    if ((uStack_80 >> 6 & 1) != 0) {
                      piVar5 = (int *)*apiStack_7c[0];
                    }
                    piVar6 = (int *)piVar4[0x48];
                    piStack_a8 = (int *)piVar4[0x49];
                    piStack_d0 = piVar5;
                    if (piVar6 != piStack_a8) {
                      do {
                        uStack_54 = 0;
                        uStack_50 = 0;
                        FUN_11a98de0(&uStack_54,piVar5,0,0);
                        FUN_104d1550(&DAT_11dbb0b4,*piVar6);
                        FUN_104d1550("nNeedItemNum",piVar6[1]);
                        (**(code **)(*apiStack_7c[0] + 0x3c))(iStack_74,auStack_64);
                        FUN_104d7c10();
                        piVar6 = piVar6 + 2;
                        piVar4 = local_b0;
                      } while (piVar6 != piStack_a8);
                    }
                  }
                  FUN_104d12b0("materialIDArr",&uStack_6c);
                  iVar3 = FUN_10254130(piVar4[0x17]);
                  if (iVar3 == 0) {
                    FUN_104d1670("strItemIconName","item_icon_42");
                    FUN_104d1670("strItemDescrbie","ceshi");
                  }
                  else {
                    FUN_100e5b40(&uStack_54);
                    FUN_104d1670("strItemIconName",*(undefined4 *)(iVar3 + 0xb4));
                    FUN_116bd4d0(&uStack_58);
                    FUN_100e5aa0();
                    FUN_104d1670("strItemDescrbie",puStack_48);
                    if ((puStack_48 != auStack_5c) && (puStack_48 != (undefined1 *)0x0)) {
                      FUN_10c3d5d0(puStack_48);
                    }
                  }
                  (**(code **)(*piStack_d4 + 0x3c))(piStack_cc,&piStack_10c);
                  FUN_104d7c10();
                  FUN_104d7c10();
                  FUN_104d7c10();
                }
                local_dc = (int *)((int)local_dc + 1);
              } while ((int)local_dc < iStack_74);
            }
            piStack_ec = (int *)0x108f0445;
            CCraftInfo__BuildCraftLists();
          }
        }
      }
      if ((uStack_6c >> 6 & 1) != 0) {
        ppiStack_f0 = &piStack_70;
        piStack_ec = piStack_68;
        piStack_f4 = (int *)0x108f0466;
        (**(code **)(*piStack_70 + 8))();
      }
    }
    if ((local_9c >> 6 & 1) != 0) {
      ppiStack_f0 = &local_a0;
      piStack_ec = piStack_98;
      piStack_f4 = (int *)0x108f0483;
      (**(code **)(*local_a0 + 8))();
      local_a0 = (int *)0x0;
    }
    local_9c = 0;
    if ((local_bc >> 6 & 1) != 0) {
      ppiStack_f0 = &local_c0;
      piStack_ec = local_b8;
      piStack_f4 = (int *)0x108f04b0;
      (**(code **)(*local_c0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108f07e0 @ 108f07e0  size=396 ===== */
// strings:
//   "InitModel"
//   "OnDecompose"
//   "OnCancel"
//   "OnContinue"
//   "OnEnd"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""OnDecompose""
     ""OnCancel""
     ""OnContinue""
     ""OnEnd"" */

void FUN_108f07e0(void)

{
  undefined *puStack_74;
  char *pcStack_70;
  undefined **ppuStack_6c;
  undefined4 ***pppuStack_68;
  undefined *puStack_64;
  undefined **ppuStack_60;
  undefined ***pppuStack_5c;
  undefined4 ***pppuStack_58;
  undefined **ppuStack_54;
  undefined **ppuStack_50;
  undefined4 ***pppuStack_4c;
  code ***pppcStack_48;
  undefined ***pppuStack_44;
  undefined ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  char **ppcStack_38;
  undefined4 ***pppuStack_34;
  undefined4 ***pppuStack_30;
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
  pppuStack_30 = (undefined4 ***)0x11dbd57c;
  pppuStack_34 = (undefined4 ***)0x108f0814;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)FUN_108f0980;
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined4 ***)0x108f0825;
  FUN_108f0ae0();
  if (((undefined4 ****)pppuStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppuStack_20 != (undefined4 ****)0x0)) {
    pppuStack_3c = pppuStack_20;
    pppuStack_40 = (undefined ***)0x108f083b;
    FUN_10c3d5d0();
  }
  local_24 = &pppuStack_34;
  pppuStack_3c = (undefined4 ***)0x11dd759f;
  pppuStack_40 = (undefined ***)0x11dd7594;
  pppuStack_44 = (undefined ***)0x108f085b;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined ***)&DAT_108f09f0;
  pppcStack_48 = (code ***)&pppuStack_3c;
  pppuStack_4c = (undefined4 ***)0x108f086c;
  FUN_108f0ae0();
  if (((undefined ****)pppuStack_30 != &pppuStack_44) &&
     ((undefined ****)pppuStack_30 != (undefined ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    ppuStack_50 = (undefined **)0x108f0882;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_4c = (undefined4 ***)0x11dbf4c4;
  ppuStack_50 = (undefined **)0x11dbf4bc;
  ppuStack_54 = (undefined **)0x108f08a2;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  ppuStack_54 = (undefined **)&DAT_108f0a00;
  pppuStack_58 = &pppuStack_4c;
  pppuStack_5c = (undefined ***)0x108f08b3;
  FUN_108f0ae0();
  if ((pppuStack_40 != &ppuStack_54) && (pppuStack_40 != (undefined ***)0x0)) {
    pppuStack_5c = pppuStack_40;
    ppuStack_60 = (undefined **)0x108f08c9;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &ppuStack_54;
  pppuStack_5c = (undefined ***)0x11dd75aa;
  ppuStack_60 = (undefined **)0x11dd75a0;
  puStack_64 = (undefined *)0x108f08e9;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  puStack_64 = &DAT_108f0a10;
  pppuStack_68 = &pppuStack_5c;
  ppuStack_6c = (undefined **)0x108f08fa;
  FUN_108f0ae0();
  if ((ppuStack_50 != &puStack_64) && (ppuStack_50 != (undefined **)0x0)) {
    ppuStack_6c = ppuStack_50;
    pcStack_70 = (char *)0x108f0910;
    FUN_10c3d5d0();
  }
  ppuStack_54 = &puStack_64;
  ppuStack_6c = (undefined **)0x11dd75b1;
  pcStack_70 = "OnEnd";
  puStack_74 = (undefined *)0x108f0930;
  ppuStack_50 = ppuStack_54;
  FUN_100b62c0();
  puStack_74 = &DAT_108f0a20;
  FUN_108f0ae0(&ppuStack_6c);
  if ((ppuStack_60 != &puStack_74) && (ppuStack_60 != (undefined **)0x0)) {
    FUN_10c3d5d0(ppuStack_60);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108f2e10 @ 108f2e10  size=158 ===== */
// calls: CLevelEnGroupRewardInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CLevelEnGroupRewardInfo"

/* [RE-AUTO c0]
   calls: CLevelEnGroupRewardInfo::GetManagers
   strings:
     ""CLevelEnGroupRewardInfo"" */

undefined4 FUN_108f2e10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd7748;
  puVar2 = (undefined4 *)CLevelEnGroupRewardInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CLevelEnGroupRewardInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123bfbf8 & 1) == 0) {
        DAT_123bfbf8 = DAT_123bfbf8 | 1;
        FUN_108faa80();
        FUN_11a8911f(&LAB_11c76910);
      }
      puVar3 = &DAT_123bfbfc;
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



/* ===== FUN_108f3b90 @ 108f3b90  size=9713 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPet::SetName, CHubEntryConfig::IsQuestUnlocked, CLevelEnSubGroupRewardInfo::SumSubGroupRewards, CLeagueInfo::CollectLeagueScheduleEntries
// strings:
//   "groupID"
//   "strTitleName"
//   "maxEntrustCount"
//   "repeatCycle"
//   "curEntrustCount"
//   "nEntrustVipCnt"
//   "LEVELENTRUST_LISTVO_CLASSNAME"
//   "LEVELENTRUST_TASKVO_CLASSNAME"
//   "subGroupId"
//   "nUnLockNeedLev"
//   "strUnLockNeedTask"
//   "strUnLockNeedHunterStar"
//   "strUnLockNeedGoldHunterStar"
//   "strUnLockNeedFinishLevel"
//   "strUnLockNeedHunterCard"
//   "strUnLockNeedCardDes"
//   "iUseItemID"
//   "iUseItemCount"
//   "bIsAndOpration"
//   "iUnlockNeedLevelsCount"

/* [RE-AUTO c0]
   strings:
     ""groupID""
     ""strTitleName""
     ""maxEntrustCount""
     ""repeatCycle""
     ""curEntrustCount""
     ""nEntrustVipCnt""
     ""LEVELENTRUST_LISTVO_CLASSNAME""
     ""LEVELENTRUST_TASKVO_CLASSNAME""
     ""subGroupId""
     ""nUnLockNeedLev"" */

void FUN_108f3b90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int ***pppiVar1;
  undefined1 ****ppppuVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int ****ppppiVar7;
  int *piVar8;
  int *****pppppiVar9;
  undefined1 *****pppppuVar10;
  undefined1 ******ppppppuVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined1 ******ppppppuVar15;
  int iVar16;
  undefined1 ******unaff_ESI;
  int *****pppppiVar17;
  uint uVar18;
  int unaff_EDI;
  int ******ppppppiVar19;
  int *****pppppiStack_374;
  int *****pppppiStack_370;
  undefined1 ******ppppppuStack_36c;
  undefined1 ******ppppppuStack_368;
  int *****pppppiStack_364;
  int *****pppppiStack_360;
  undefined1 *****pppppuStack_35c;
  int ****ppppiStack_358;
  int *****pppppiStack_354;
  undefined4 uStack_350;
  int *****pppppiStack_34c;
  int *****pppppiStack_348;
  int *****pppppiStack_344;
  undefined1 *****pppppuStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined1 ******ppppppuStack_334;
  undefined1 ******ppppppuStack_330;
  undefined1 ******ppppppuStack_32c;
  undefined4 uStack_328;
  int *****pppppiStack_324;
  undefined1 auStack_320 [4];
  int *****pppppiStack_31c;
  int *****pppppiStack_318;
  int ****ppppiStack_314;
  undefined1 auStack_310 [4];
  int *****pppppiStack_30c;
  undefined4 uStack_308;
  int *****pppppiStack_304;
  int *****pppppiStack_300;
  undefined1 *****pppppuStack_2fc;
  undefined1 *****pppppuStack_2f8;
  undefined1 *****pppppuStack_2f4;
  int ****ppppiStack_2f0;
  int *****pppppiStack_2ec;
  int ****ppppiStack_2e8;
  int *piStack_2e4;
  int ****ppppiStack_2e0;
  int *****pppppiStack_2dc;
  int *****pppppiStack_2d8;
  int ****ppppiStack_2d4;
  int *piStack_2d0;
  int *****pppppiStack_2cc;
  int *****pppppiStack_2c8;
  int ****ppppiStack_2c4;
  undefined1 ****ppppuStack_2c0;
  int ****ppppiStack_2bc;
  int **ppiStack_2b8;
  undefined1 ****ppppuStack_2b4;
  int local_2a8;
  undefined1 *****pppppuStack_2a4;
  int *piStack_2a0;
  undefined1 *****pppppuStack_29c;
  undefined1 *****pppppuStack_298;
  undefined1 *****pppppuStack_294;
  int *piStack_290;
  int ***pppiStack_28c;
  int *piStack_288;
  int ****ppppiStack_284;
  undefined4 uStack_280;
  undefined1 *****pppppuStack_27c;
  int *piStack_278;
  undefined1 ****ppppuStack_274;
  undefined1 *****pppppuStack_270;
  int ****ppppiStack_26c;
  int *piStack_268;
  int iStack_264;
  int *****pppppiStack_260;
  int aiStack_25c [4];
  int iStack_24c;
  int iStack_248;
  int iStack_240;
  undefined1 ****ppppuStack_23c;
  char cStack_234;
  int ****ppppiStack_230;
  int *piStack_228;
  int *****pppppiStack_224;
  undefined1 ****ppppuStack_220;
  int *piStack_21c;
  int *piStack_210;
  byte bStack_20c;
  int *piStack_208;
  int *piStack_204;
  int *local_200;
  undefined1 *****local_1fc;
  undefined1 ****local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  uint uStack_1ec;
  undefined1 ****ppppuStack_1e8;
  undefined4 *local_1e4;
  int ****ppppiStack_1e0;
  uint uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 uStack_1d4;
  int *piStack_1d0;
  uint uStack_1cc;
  undefined1 ****ppppuStack_1c8;
  undefined1 auStack_1c4 [4];
  int ***pppiStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  uint uStack_1b4;
  undefined1 ****ppppuStack_1b0;
  int *piStack_1a0;
  uint uStack_19c;
  undefined1 ****ppppuStack_198;
  undefined1 auStack_17c [16];
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int ***pppiStack_160;
  undefined1 auStack_15c [4];
  undefined1 auStack_158 [12];
  int ****ppppiStack_14c;
  int ****appppiStack_148 [2];
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [4];
  int ****ppppiStack_138;
  int ****ppppiStack_134;
  int ***pppiStack_130;
  undefined1 *puStack_12c;
  undefined1 ***pppuStack_128;
  int ****ppppiStack_124;
  undefined1 *****pppppuStack_120;
  int ****ppppiStack_11c;
  undefined1 **ppuStack_118;
  undefined1 ****ppppuStack_114;
  int ****ppppiStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [4];
  undefined1 ***pppuStack_104;
  undefined1 *****pppppuStack_100;
  undefined1 *****pppppuStack_fc;
  int *****pppppiStack_f8;
  int *****pppppiStack_f4;
  undefined1 ****ppppuStack_f0;
  int *****apppppiStack_ec [4];
  int *****pppppiStack_dc;
  int *****pppppiStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [12];
  int *****pppppiStack_c4;
  undefined1 *puStack_bc;
  undefined1 auStack_b8 [4];
  int ****ppppiStack_b4;
  undefined4 uStack_b0;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined8 uStack_84;
  int iStack_7c;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  undefined1 *puStack_20;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&local_2a8;
  local_2a8 = param_2;
  if (param_5 == 2) {
    local_1fc = (undefined1 *****)param_4[1];
    local_1f4 = param_4[3];
    ppppuStack_2b4 = (undefined1 ****)param_4[2];
    local_1f0 = param_4[4];
    local_200 = (int *)0x0;
    local_1f8 = ppppuStack_2b4;
    if (((uint)local_1fc >> 6 & 1) != 0) {
      local_200 = (int *)*param_4;
      ppiStack_2b8 = &local_200;
      ppppiStack_2bc = (int ****)0x108f3c12;
      (**(code **)(*local_200 + 4))();
    }
    if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
      local_1e4 = (undefined4 *)param_4[8];
    }
    else {
      local_1e4 = (undefined4 *)0xdeadbeaf;
    }
    ppppuStack_2b4 = (undefined1 ****)0x108f3c56;
    pppppuStack_2a4 =
         (undefined1 *****)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((((int *****)pppppuStack_2a4 != (int *****)0x0) &&
        (ppppiVar7 = (int ****)pppppuStack_2a4[0xae7], ppppuStack_23c = (undefined1 ****)ppppiVar7,
        ppppiVar7 != (int ****)0x0)) && ((int ****)pppppuStack_2a4[0xab8] != (int ****)0x0)) {
      ppppuStack_2b4 = (undefined1 ****)0x108f3c86;
      piStack_204 = (int *)FUN_107cb5c0();
      if (piStack_204 != (int *)0x0) {
        ppppuStack_2b4 = (undefined1 ****)0x108f3c9a;
        ppppiStack_1e0 = (int ****)FUN_1145b350();
        if (ppppiStack_1e0 != (int ****)0x0) {
          ppppuStack_2b4 = (undefined1 ****)ppppiVar7[5];
          ppiStack_2b8 = (int **)0x11dcd85c;
          ppppiStack_2bc = (int ****)0x108f3cbf;
          FUN_104d1550();
          ppppiStack_2bc = (int ****)0x108f3cc4;
          aiStack_25c[0] = FUN_107cb5c0();
          ppppiStack_2bc = (int ****)ppppiVar7[5];
          aiStack_25c[0] = aiStack_25c[0] + 0x261d0;
          uStack_1dc = uStack_1dc & 0xffffff00;
          piStack_278 = (int *)((uint)piStack_278 & 0xffffff);
          ppppuStack_2c0 = (undefined1 ****)0x108f3ce2;
          iVar5 = FUN_104d8540();
          if (iVar5 != 0) {
            ppppuStack_2b4 = (undefined1 ****)auStack_30;
            ppiStack_2b8 = (int **)0x108f3cff;
            iVar6 = FUN_100e5b40();
            ppiStack_2b8 = *(int ***)(iVar6 + 0x14);
            ppppiStack_2bc = (int ****)0x11dd79f4;
            ppppuStack_2c0 = (undefined1 ****)0x108f3d15;
            FUN_104d1670();
            if ((puStack_20 != auStack_34) && (puStack_20 != (undefined1 *)0x0)) {
              ppiStack_2b8 = (int **)puStack_20;
              ppppiStack_2bc = (int ****)0x108f3d34;
              FUN_10c3d5d0();
            }
            ppiStack_2b8 = *(int ***)(iVar5 + 0x30);
            ppppiStack_2bc = *(int *****)(iStack_240 + 0x14);
            ppppuStack_2c0 = (undefined1 ****)0x108f3d52;
            iVar6 = (**(code **)(**(int **)(local_2a8 + 0x2b98) + 0x20))();
            ppppuStack_2c0 = (undefined1 ****)(*(int *)(iVar5 + 0x2c) + iVar6);
            ppppiStack_2c4 = (int ****)0x11dd7a20;
            pppppiStack_2c8 = (int *****)0x108f3d6f;
            FUN_104d1440();
            pppppiStack_2c8 = *(int ******)(iVar5 + 0x28);
            pppppiStack_2cc = (int *****)0x11dd7a14;
            piStack_2d0 = (int *)0x108f3d87;
            FUN_104d1550();
            ppppuStack_2c0 = *(undefined1 *****)(iStack_248 + 0x14);
            ppppiStack_2c4 = (int ****)0x108f3da2;
            ppppiStack_2c4 = (int ****)(**(code **)(**(int **)(unaff_EDI + 0x2b98) + 0x28))();
            pppppiStack_2c8 = (int *****)0x11dd7a40;
            pppppiStack_2cc = (int *****)0x108f3dbc;
            ppppiStack_284 = ppppiStack_2c4;
            FUN_104d1550();
            ppppiStack_2c4 = (int ****)0x0;
            if (*(int *)((int)ppppuStack_2b4 + 11000) != 0) {
              ppppiStack_2c4 = *(int *****)(iStack_24c + 0x14);
              pppppiStack_2c8 = (int *****)0x108f3ddb;
              ppppiStack_2c4 = (int ****)FUN_11548ea0();
            }
            pppppiStack_2c8 = (int *****)0x11dd7a30;
            pppppiStack_2cc = (int *****)0x108f3df1;
            FUN_104d1550();
            if ((0 < *(int *)(iVar5 + 0x28)) &&
               (uStack_1dc = uStack_1dc & 0xff,
               (iVar6 - (int)ppppuStack_274) + *(int *)(iVar5 + 0x2c) == 0)) {
              uStack_1dc = 1;
            }
          }
          ppiStack_2b8 = &piStack_1d0;
          piStack_1d0 = (int *)0x0;
          uStack_1cc = 0;
          ppppuStack_274 =
               (undefined1 ****)CONCAT31(ppppuStack_274._1_3_,((byte)local_1fc & 0x8f) == 10);
          uStack_1d4 = 0;
          ppppuStack_2b4 = ppppuStack_274;
          ppppiStack_2bc = (int ****)0x11dd7a70;
          ppppuStack_2c0 = local_1f8;
          ppppiStack_2c4 = (int ****)0x108f3e78;
          cVar3 = (**(code **)(*local_200 + 0x10))();
          if ((cVar3 != '\0') && (((byte)uStack_1dc & 0x8f) == 6)) {
            if ((uStack_1dc >> 6 & 1) == 0) {
              local_1e4 = puStack_1d8;
            }
            else {
              local_1e4 = (undefined4 *)*puStack_1d8;
            }
          }
          pppppiStack_2c8 = &ppppiStack_1e0;
          ppppuStack_1e8 = (undefined1 ****)0x0;
          ppppiStack_284 = (int ****)CONCAT31(ppppiStack_284._1_3_,(bStack_20c & 0x8f) == 10);
          ppppiStack_2c4 = ppppiStack_284;
          pppppiStack_2cc = (int *****)0x11dd7a50;
          piStack_2d0 = piStack_208;
          ppppiStack_2d4 = (int ****)0x108f3ef3;
          cVar3 = (**(code **)(*piStack_210 + 0x10))();
          if ((cVar3 != '\0') && (((byte)uStack_1ec & 0x8f) == 6)) {
            if ((uStack_1ec >> 6 & 1) == 0) {
              local_1f8 = ppppuStack_1e8;
            }
            else {
              local_1f8 = (undefined1 ****)*ppppuStack_1e8;
            }
          }
          pppppiStack_260 = (int *****)ppppiStack_2c4[0xae3];
          ppppiStack_2d4 = &pppiStack_1c0;
          pppiStack_1c0 = (int ***)0x0;
          uStack_1bc = 0;
          pppppiStack_2d8 = (int *****)0x108f3f5d;
          FUN_11a98a70();
          pppppuStack_298 = (undefined1 *****)0x0;
          if ((int)pppppiStack_260[7] - (int)pppppiStack_260[6] >> 4 != 0) {
            do {
              pppppiStack_2d8 = (int *****)(pppppiStack_260[6] + (int)pppppuStack_298 * 4);
              pppppiStack_2dc = (int *****)0x108f3f8a;
              FUN_108f6190();
              pppppiStack_2dc = (int *****)pppppuStack_27c;
              ppppiStack_2e0 = (int ****)0x108f3f93;
              ppppiVar7 = (int ****)FUN_104d83d0();
              pppiStack_28c = (int ***)ppppiVar7;
              if (ppppiVar7 == (int ****)0x0) {
                if ((int ****)ppppuStack_274 != (int ****)0x0) {
                  pppppiStack_2d8 = (int *****)ppppuStack_274;
LAB_108f5c37:
                  pppppiStack_2dc = (int *****)0x108f5c3c;
                  FUN_10c3d5d0();
                }
              }
              else {
                pppppiStack_2d8 = (int *****)ppppiVar7[0x25];
                if (pppppiStack_2d8 == (int *****)pppppiStack_260[5]) {
                  pppppiStack_2dc = (int *****)piStack_208;
                  ppppiStack_2e0 = (int ****)0x108f3feb;
                  cVar3 = (**(code **)(*piStack_204 + 0x50))();
                  if (cVar3 == '\0') {
                    if ((int ****)ppppuStack_274 != (int ****)0x0) {
                      pppppiStack_2d8 = (int *****)ppppuStack_274;
                      goto LAB_108f5c37;
                    }
                  }
                  else {
                    pppppiStack_2d8 = (int *****)ppppiVar7[4];
                    pppppiStack_2dc = (int *****)piStack_208;
                    ppppiStack_2e0 = (int ****)0x108f4019;
                    cVar3 = (**(code **)(*piStack_204 + 0x54))();
                    if (cVar3 == '\0') {
                      if ((int ****)ppppuStack_274 != (int ****)0x0) {
                        pppppiStack_2d8 = (int *****)ppppuStack_274;
                        goto LAB_108f5c37;
                      }
                    }
                    else {
                      pppppiStack_2d8 = (int *****)0x108f4036;
                      cVar3 = FUN_108f2b90();
                      if (cVar3 == '\0') {
                        if ((int ****)ppppuStack_274 != (int ****)0x0) {
                          pppppiStack_2d8 = (int *****)ppppuStack_274;
                          goto LAB_108f5c37;
                        }
                      }
                      else {
                        pppppiStack_2d8 = (int *****)0x0;
                        pppppiStack_2dc = (int *****)0x0;
                        ppppiStack_2e0 = (int ****)local_1f8;
                        piStack_2e4 = aiStack_25c;
                        aiStack_25c[0] = 0;
                        aiStack_25c[1] = 0;
                        ppppiStack_2e8 = (int ****)0x108f407c;
                        FUN_11a98de0();
                        ppppiStack_2e8 = (int ****)piStack_288;
                        pppppiVar17 = (int *****)ppppiVar7[0x25];
                        pppppiStack_2ec = (int *****)0x11dd7bdc;
                        ppppiStack_2f0 = (int ****)0x108f4098;
                        FUN_104d1550();
                        ppppiStack_2e8 = (int ****)auStack_d4;
                        pppppiStack_2ec = (int *****)0x108f40ab;
                        iVar5 = FUN_100e5b40();
                        pppppiStack_2ec = *(int ******)(iVar5 + 0x14);
                        ppppiStack_2f0 = (int ****)&DAT_11dbac80;
                        pppppuStack_2f4 = (undefined1 *****)0x108f40c0;
                        FUN_104d1670();
                        if (((int ******)pppppiStack_c4 != &pppppiStack_d8) &&
                           ((int ******)pppppiStack_c4 != (int ******)0x0)) {
                          pppppiStack_2ec = pppppiStack_c4;
                          ppppiStack_2f0 = (int ****)0x108f40df;
                          FUN_10c3d5d0();
                        }
                        pppppiStack_2ec = (int *****)ppppiVar7[0xd];
                        ppppiStack_2f0 = (int ****)pppiStack_28c;
                        pppppuStack_2f8 = (undefined1 *****)0x108f40fb;
                        pppppuStack_2f4 = (undefined1 *****)pppppiVar17;
                        iVar5 = (**(code **)(**(int **)((int)pppppiStack_2dc + 0x2b98) + 0x24))();
                        pppppuStack_2f8 = unaff_ESI[0xb];
                        pppppuStack_2fc = (undefined1 *****)0x11dd7a14;
                        pppppiStack_300 = (int *****)0x108f4116;
                        FUN_104d1550();
                        pppppiStack_300 = (int *****)((int)unaff_ESI[0xc] + iVar5);
                        pppppiStack_304 = (int *****)0x11dd7a20;
                        uStack_308 = (char *)0x108f4137;
                        FUN_104d1440();
                        pppppuStack_2f8 = pppppuStack_298;
                        pppppiStack_300 = (int *****)0x108f4150;
                        pppppuStack_2fc = (undefined1 *****)pppppiVar17;
                        pppppiStack_300 =
                             (int *****)
                             (**(code **)(**(int **)((int)ppppiStack_2e8 + 0x2b98) + 0x2c))();
                        pppppiStack_304 = (int *****)0x11dd7a40;
                        uStack_308 = "j";
                        FUN_104d1550();
                        uStack_308 = (char *)0x0;
                        pppppiStack_30c = (int *****)0x11dd7a30;
                        auStack_310 = (undefined1  [4])0x108f4179;
                        FUN_104d1550();
                        ppppiStack_26c = (int ****)0x0;
                        pppppiStack_300 = &ppppiStack_26c;
                        piStack_268 = (int *)0x0;
                        pppppiStack_304 = (int *****)0x108f41a1;
                        FUN_11a98a70();
                        pppppiStack_304 = (int *****)pppppuStack_2a4;
                        ppppiStack_2f0 = (int ****)0x0;
                        pppppiStack_2ec = (int *****)0x0;
                        pppppuStack_294 = (undefined1 *****)0x0;
                        pppppiStack_30c = (int *****)0x108f41c7;
                        uStack_308 = (char *)pppppiVar17;
                        pppppiStack_2dc = (int *****)(*(code *)(*pppiStack_28c)[0x12])();
                        if (cStack_234 == '\0') {
                          ppppiStack_314 = (int ****)0x108f4237;
                          auStack_310 = (undefined1  [4])pppppiVar17;
                          pppppiStack_30c = (int *****)unaff_ESI;
                          cVar3 = (*(code *)(*pppppuStack_2fc[0xae6])[2])();
                          pppppuStack_2a4 = (undefined1 *****)(int *****)0x0;
                          if (cVar3 != '\0') {
                            pppppuStack_2a4 = (undefined1 *****)&DAT_00000007;
                          }
                        }
                        else {
                          if (((uint)pppppuStack_2f4 >> 6 & 1) != 0) {
                            auStack_310 = (undefined1  [4])&pppppuStack_2f8;
                            pppppiStack_30c = (int *****)ppppiStack_2f0;
                            ppppiStack_314 = (int ****)0x108f41f3;
                            (*(code *)(*pppppuStack_2f8)[2])();
                            pppppuStack_2f8 = (undefined1 *****)0x0;
                          }
                          pppppiStack_30c = (int *****)&pppppuStack_2f8;
                          pppppuStack_2f4 = (undefined1 *****)0x3;
                          ppppiStack_2f0 = (int ****)0x7;
                          auStack_310 = (undefined1  [4])pppppuStack_270;
                          ppppiStack_314 = (int ****)0x108f421f;
                          (**(code **)(*piStack_278 + 0x3c))();
                        }
                        ppppiStack_314 = (int ****)0x1;
                        pppppiStack_318 = (int *****)0x108f4255;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          pppppiStack_318 = *(int ******)(iVar5 + 4);
                          pppppiStack_31c = (int *****)0x11dd7bcc;
                          auStack_320 = (undefined1  [4])0x108f4274;
                          FUN_104d1550();
                          pppppiStack_318 = (int *****)0x108f4286;
                          iVar6 = CPlayer__GetHuntRankOrCount();
                          if (iVar6 < *(int *)(iVar5 + 4)) {
                            ppppiStack_2e8 = (int ****)0x1;
                            if (((uint)pppppiStack_300 >> 6 & 1) != 0) {
                              pppppiStack_31c = (int *****)&pppppiStack_304;
                              pppppiStack_318 = (int *****)pppppuStack_2fc;
                              auStack_320 = (undefined1  [4])0x108f42b0;
                              (*(code *)(*pppppiStack_304)[2])();
                              pppppiStack_304 = (int *****)0x0;
                            }
                            pppppiStack_318 = (int *****)&pppppiStack_304;
                            pppppiStack_300 = (int *****)0x3;
                            pppppuStack_2fc = (undefined1 *****)0x1;
                            pppppiStack_31c = (int *****)pppppuStack_27c;
                            auStack_320 = (undefined1  [4])0x108f42e0;
                            (*(code *)(*ppppiStack_284)[0xf])();
                          }
                        }
                        pppppiStack_318 = (int *****)&DAT_00000008;
                        pppppiStack_31c = (int *****)0x108f42e9;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          if ((undefined1 *****)pppppiStack_30c[0xaac] != (undefined1 *****)0x0) {
                            pppppiStack_31c = *(int ******)(iVar5 + 4);
                            auStack_320 = (undefined1  [4])0x108f430b;
                            cVar3 = (*(code *)(*pppppiStack_30c[0xaac])[0x18])();
                            if (cVar3 != '\0') {
                              pppppiStack_31c = (int *****)&DAT_11d9d32b;
                              auStack_320 = (undefined1  [4])0x11dd7c00;
                              pppppiStack_324 = (int *****)0x108f4326;
                              FUN_104d1670();
                              goto LAB_108f43ed;
                            }
                          }
                          pppppiStack_31c = *(int ******)(iVar5 + 4);
                          pppppiStack_2ec = (int *****)0x1;
                          auStack_320 = (undefined1  [4])0x108f433e;
                          iVar5 = FUN_104d8d20();
                          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2c) != 0)) {
                            if (((uint)pppppiStack_304 >> 6 & 1) != 0) {
                              auStack_320 = (undefined1  [4])&uStack_308;
                              pppppiStack_31c = pppppiStack_300;
                              pppppiStack_324 = (int *****)0x108f4373;
                              (*(code *)(*(int *****)uStack_308)[2])();
                              uStack_308 = (char *)0x0;
                            }
                            pppppiStack_31c = (int *****)&uStack_308;
                            pppppiStack_304 = (int *****)0x3;
                            pppppiStack_300 = (int *****)0x2;
                            auStack_320 = (undefined1  [4])uStack_280;
                            pppppiStack_324 = (int *****)0x108f43a3;
                            (**(code **)(*piStack_288 + 0x3c))();
                            pppppiStack_324 = &ppppiStack_110;
                            uStack_328 = (int *)0x108f43b6;
                            iVar5 = FUN_100e5b40();
                            uStack_328 = *(int **)(iVar5 + 0x14);
                            ppppppuStack_32c = (undefined1 ******)0x11dd7c00;
                            ppppppuStack_330 = (undefined1 ******)0x108f43cb;
                            FUN_104d1670();
                            if ((pppppiStack_f4 != (int *****)auStack_108) &&
                               ((undefined1 ******)pppppiStack_f4 != (undefined1 ******)0x0)) {
                              pppppiStack_31c = pppppiStack_f4;
                              auStack_320 = (undefined1  [4])0x108f43ea;
                              FUN_10c3d5d0();
                            }
                          }
                        }
LAB_108f43ed:
                        pppppiStack_31c = (int *****)&DAT_00000004;
                        auStack_320 = (undefined1  [4])0x108f43f6;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          auStack_320 = (undefined1  [4])0x108f4410;
                          piVar8 = (int *)(*(code *)(*(int *****)auStack_310)[0x11b])();
                          auStack_320 = (undefined1  [4])0x108f4419;
                          iVar6 = (**(code **)(*piVar8 + 0x18))();
                          if (iVar6 < *(int *)(iVar5 + 4)) {
                            ppppiStack_2f0 = (int ****)0x1;
                            if (((uint)uStack_308 >> 6 & 1) != 0) {
                              pppppiStack_324 = (int *****)&pppppiStack_30c;
                              auStack_320 = (undefined1  [4])pppppiStack_304;
                              uStack_328 = (int *)0x108f4443;
                              (*(code *)(*pppppiStack_30c)[2])();
                              pppppiStack_30c = (int *****)0x0;
                            }
                            auStack_320 = (undefined1  [4])&pppppiStack_30c;
                            uStack_308 = (char *)0x3;
                            pppppiStack_304 = (int *****)0x3;
                            pppppiStack_324 = (int *****)ppppiStack_284;
                            uStack_328 = (int *)0x108f4473;
                            (*(code *)(*pppiStack_28c)[0xf])();
                            uStack_328 = *(int **)(iVar5 + 4);
                            ppppppuStack_32c = (undefined1 ******)0x11dd7be8;
                            ppppppuStack_330 = (undefined1 ******)0x108f4488;
                            FUN_104d1550();
                          }
                        }
                        auStack_320 = (undefined1  [4])&DAT_00000005;
                        pppppiStack_324 = (int *****)0x108f4494;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          pppppiStack_324 = (int *****)0x108f44ae;
                          (*(code *)(*ppppiStack_314)[0x11b])();
                          pppppiStack_324 = (int *****)0x108f44b5;
                          iVar6 = FUN_114dfc10();
                          if (iVar6 < *(int *)(iVar5 + 4)) {
                            pppppuStack_2f4 = (undefined1 *****)0x1;
                            if (((uint)pppppiStack_30c >> 6 & 1) != 0) {
                              uStack_328 = (int *)auStack_310;
                              pppppiStack_324 = (int *****)uStack_308;
                              ppppppuStack_32c = (undefined1 ******)0x108f44df;
                              (*(code *)(*(int *****)auStack_310)[2])();
                              auStack_310 = (undefined1  [4])0x0;
                            }
                            pppppiStack_324 = (int *****)auStack_310;
                            pppppiStack_30c = (int *****)0x3;
                            uStack_308 = &DAT_00000004;
                            uStack_328 = piStack_288;
                            ppppppuStack_32c = (undefined1 ******)0x108f450f;
                            (**(code **)(*piStack_290 + 0x3c))();
                            ppppppuStack_32c = *(undefined1 *******)(iVar5 + 4);
                            ppppppuStack_330 = (undefined1 ******)0x11dd7c30;
                            ppppppuStack_334 = (undefined1 ******)0x108f4524;
                            FUN_104d1550();
                          }
                        }
                        pppppiStack_324 = (int *****)&DAT_00000007;
                        uStack_328 = (int *)0x108f4530;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          uStack_328 = (int *)0x108f4546;
                          FUN_108f61f0();
                          uStack_328 = &local_1f4;
                          ppppppuStack_32c = (undefined1 ******)0x0;
                          ppppppuStack_330 = *(undefined1 *******)(iVar5 + 4);
                          ppppppuStack_334 = (undefined1 ******)pppppiStack_318;
                          uStack_338 = (int ******)0x108f455c;
                          FUN_1130cd50();
                          uStack_328 = *(int **)(iVar5 + 4);
                          ppppppuStack_32c = (undefined1 ******)0x108f4571;
                          iVar5 = FUN_114cd590();
                          if (iVar5 != 3) {
                            pppppuStack_2fc = (undefined1 *****)0x1;
                            if (((uint)ppppiStack_314 >> 6 & 1) != 0) {
                              ppppppuStack_330 = (undefined1 ******)&pppppiStack_318;
                              ppppppuStack_32c = (undefined1 ******)auStack_310;
                              ppppppuStack_334 = (undefined1 ******)0x108f459f;
                              (*(code *)(*pppppiStack_318)[2])();
                              pppppiStack_318 = (int *****)0x0;
                            }
                            ppppppuStack_32c = (undefined1 ******)&pppppiStack_318;
                            ppppiStack_314 = (int ****)0x3;
                            auStack_310 = (undefined1  [4])&DAT_00000005;
                            ppppppuStack_330 = (undefined1 ******)piStack_290;
                            ppppppuStack_334 = (undefined1 ******)0x108f45cf;
                            (*(code *)(*pppppuStack_298)[0xf])();
                            ppppppuStack_334 = (undefined1 ******)auStack_108;
                            auStack_108[0] = 0;
                            uStack_338 = (int ******)0x108f45f9;
                            pppppiStack_f8 = (int *****)ppppppuStack_334;
                            pppppiStack_f4 = (int *****)ppppppuStack_334;
                            FUN_100e5aa0();
                            uStack_338 = (int ******)pppppiStack_f8;
                            uStack_33c = "strUnLockNeedFinishLevel";
                            pppppuStack_340 = (undefined1 *****)0x108f4612;
                            FUN_104d1670();
                            if (((undefined1 ******)apppppiStack_ec[0] != &pppppuStack_100) &&
                               ((undefined1 ******)apppppiStack_ec[0] != (undefined1 ******)0x0)) {
                              ppppppuStack_32c = (undefined1 ******)apppppiStack_ec[0];
                              ppppppuStack_330 = (undefined1 ******)0x108f4631;
                              FUN_10c3d5d0();
                            }
                          }
                          ppppppuStack_32c = (undefined1 ******)0x108f4640;
                          FUN_108f62b0();
                        }
                        uStack_328 = (int *)0x6;
                        ppppppuStack_32c = (undefined1 ******)0x108f4649;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          ppppppuStack_32c = *(undefined1 *******)(iVar5 + 4);
                          ppppppuStack_330 = (undefined1 ******)0x108f4666;
                          (*(code *)(*pppppiStack_31c)[0x11b])();
                          ppppppuStack_330 = (undefined1 ******)0x108f466d;
                          cVar3 = FUN_114e0340();
                          if (cVar3 == '\0') {
                            ppppppuStack_32c = *(undefined1 *******)(iVar5 + 4);
                            ppppppuStack_330 = (undefined1 ******)0x108f467d;
                            iVar5 = FUN_104d86c0();
                            if (iVar5 != 0) {
                              pppppuStack_2fc = (undefined1 *****)0x1;
                              if (((uint)ppppiStack_314 >> 6 & 1) != 0) {
                                ppppppuStack_330 = (undefined1 ******)&pppppiStack_318;
                                ppppppuStack_32c = (undefined1 ******)auStack_310;
                                ppppppuStack_334 = (undefined1 ******)0x108f46b0;
                                (*(code *)(*pppppiStack_318)[2])();
                                pppppiStack_318 = (int *****)0x0;
                              }
                              ppppppuStack_32c = (undefined1 ******)&pppppiStack_318;
                              ppppiStack_314 = (int ****)0x3;
                              auStack_310 = (undefined1  [4])&DAT_00000006;
                              ppppppuStack_330 = (undefined1 ******)piStack_290;
                              ppppppuStack_334 = (undefined1 ******)0x108f46e0;
                              (*(code *)(*pppppuStack_298)[0xf])();
                              ppppppuStack_334 = &pppppuStack_120;
                              uStack_338 = (int ******)0x108f46f0;
                              iVar5 = FUN_100e5b40();
                              uStack_338 = *(int *******)(iVar5 + 0x14);
                              uStack_33c = "strUnLockNeedHunterCard";
                              pppppuStack_340 = (undefined1 *****)0x108f4705;
                              FUN_104d1670();
                              if (((int *****)ppppiStack_110 != &ppppiStack_124) &&
                                 ((int *****)ppppiStack_110 != (int *****)0x0)) {
                                uStack_338 = (int ******)ppppiStack_110;
                                uStack_33c = (char *)0x108f4724;
                                FUN_10c3d5d0();
                              }
                              uStack_338 = (int ******)&ppppiStack_124;
                              uStack_33c = (char *)0x108f4736;
                              FUN_117f69d0();
                              uStack_33c = (char *)0x108f473d;
                              iVar5 = FUN_100e5b40();
                              uStack_33c = *(char **)(iVar5 + 0x14);
                              pppppuStack_340 = (undefined1 *****)0x11dd7c4c;
                              pppppiStack_344 = (int *****)0x108f4752;
                              FUN_104d1670();
                              if ((pppuStack_104 != &ppuStack_118) &&
                                 (pppuStack_104 != (undefined1 ***)0x0)) {
                                ppppppuStack_32c = (undefined1 ******)pppuStack_104;
                                ppppppuStack_330 = (undefined1 ******)0x108f4771;
                                FUN_10c3d5d0();
                              }
                            }
                          }
                        }
                        ppppppuStack_32c = (undefined1 ******)0x2;
                        ppppppuStack_330 = (undefined1 ******)0x108f477d;
                        iVar5 = FUN_117e7460();
                        if (iVar5 != 0) {
                          ppppppuStack_330 = (undefined1 ******)piStack_2d0;
                          ppppppuStack_334 = (undefined1 ******)0x108f479c;
                          cVar3 = (**(code **)(**(int **)((int)auStack_320 + 0x2b80) + 0x38))();
                          if (cVar3 == '\0') {
                            pppppiStack_300 = (int *****)0x1;
                            if (((uint)pppppiStack_318 >> 6 & 1) != 0) {
                              ppppppuStack_334 = (undefined1 ******)&pppppiStack_31c;
                              ppppppuStack_330 = (undefined1 ******)ppppiStack_314;
                              uStack_338 = (int ******)0x108f47c9;
                              (*(code *)(*pppppiStack_31c)[2])();
                              pppppiStack_31c = (int *****)0x0;
                            }
                            ppppppuStack_330 = (undefined1 ******)&pppppiStack_31c;
                            pppppiStack_318 = (int *****)0x3;
                            ppppiStack_314 = (int ****)&DAT_00000008;
                            ppppppuStack_334 = (undefined1 ******)pppppuStack_294;
                            uStack_338 = (int ******)0x108f47f9;
                            (*(code *)(*pppppuStack_29c)[0xf])();
                            uStack_338 = *(int *******)(iVar5 + 4);
                            uStack_33c = "iUseItemID";
                            pppppuStack_340 = (undefined1 *****)0x108f480e;
                            FUN_104d1550();
                            pppppuStack_340 = *(undefined1 ******)(iVar5 + 8);
                            pppppiStack_344 = (int *****)0x11dd7b48;
                            pppppiStack_348 = (int *****)0x108f4826;
                            FUN_104d1550();
                          }
                        }
                        ppppppuStack_330 = (undefined1 ******)&DAT_0000000a;
                        ppppiStack_2e8 = (int ****)0x0;
                        ppppppuStack_334 = (undefined1 ******)0x108f4838;
                        pppppiVar9 = (int *****)FUN_117e7460();
                        pppppiVar17 = (int *****)0x0;
                        if (pppppiVar9 != (int *****)0x0) {
                          uStack_338 = (int ******)0x108f4854;
                          ppppppuStack_334 = (undefined1 ******)pppppiVar9;
                          cVar3 = (*(code *)(*pppppiStack_324[0xae0])[0x12])();
                          if (cVar3 == '\0') {
                            pppppiStack_304 = (int *****)0x1;
                            if (((uint)pppppiStack_31c >> 6 & 1) != 0) {
                              uStack_338 = (int ******)auStack_320;
                              ppppppuStack_334 = (undefined1 ******)pppppiStack_318;
                              uStack_33c = (char *)0x108f4881;
                              (**(code **)(*(int *)auStack_320 + 8))();
                              auStack_320 = (undefined1  [4])0x0;
                            }
                            ppppppuStack_334 = (undefined1 ******)auStack_320;
                            pppppiStack_31c = (int *****)0x3;
                            pppppiStack_318 = (int *****)&DAT_0000000a;
                            uStack_338 = (int ******)pppppuStack_298;
                            uStack_33c = (char *)0x108f48ad;
                            (**(code **)(*piStack_2a0 + 0x3c))();
                            pppppuStack_2f4 = (undefined1 *****)pppppiVar9;
                            if ((int ****)((int)pppppiVar9[4] - (int)pppppiVar9[3] >> 2) ==
                                pppppiVar9[1]) {
                              uStack_33c = (char *)0x1;
                              pppppuStack_340 = (undefined1 *****)0x11dd7b7c;
                              pppppiStack_344 = (int *****)0x108f48d5;
                              FUN_104d15e0();
                            }
                            uStack_33c = (char *)pppppiVar9[1];
                            pppppuStack_340 = (undefined1 *****)0x11dd7b64;
                            pppppiStack_344 = (int *****)0x108f48ed;
                            FUN_104d1550();
                            pppppiVar17 = pppppiVar9;
                          }
                        }
                        ppppppuStack_334 = (undefined1 ******)&DAT_0000000b;
                        uStack_338 = (int ******)0x108f48fe;
                        pppppiVar9 = (int *****)FUN_117e7460();
                        if (pppppiVar9 != (int *****)0x0) {
                          uStack_33c = (char *)0x108f491a;
                          uStack_338 = (int ******)pppppiVar9;
                          cVar3 = (**(code **)(**(int **)((int)uStack_328 + 0x2b80) + 0x48))();
                          if (cVar3 == '\0') {
                            uStack_308 = (char *)0x1;
                            if (((uint)auStack_320 >> 6 & 1) != 0) {
                              uStack_33c = (char *)&pppppiStack_324;
                              uStack_338 = (int ******)pppppiStack_31c;
                              pppppuStack_340 = (undefined1 *****)0x108f4947;
                              (*(code *)(*pppppiStack_324)[2])();
                              pppppiStack_324 = (int *****)0x0;
                            }
                            uStack_338 = &pppppiStack_324;
                            auStack_320 = (undefined1  [4])0x3;
                            pppppiStack_31c = (int *****)&DAT_00000009;
                            uStack_33c = (char *)pppppuStack_29c;
                            pppppuStack_340 = (undefined1 *****)0x108f4977;
                            (*(code *)(*pppppuStack_2a4)[0xf])();
                            pppppuStack_2f8 = (undefined1 *****)pppppiVar9;
                            if ((int ****)((int)pppppiVar9[4] - (int)pppppiVar9[3] >> 2) ==
                                pppppiVar9[2]) {
                              pppppuStack_340 = (undefined1 *****)0x1;
                              pppppiStack_344 = (int *****)0x11dd7b7c;
                              pppppiStack_348 = (int *****)0x108f499f;
                              FUN_104d15e0();
                            }
                            pppppuStack_340 = (undefined1 *****)pppppiVar9[1];
                            pppppiStack_344 = (int *****)0x11dd7ba0;
                            pppppiStack_348 = (int *****)0x108f49b7;
                            FUN_104d1550();
                            pppppiStack_348 = (int *****)pppppiVar9[2];
                            pppppiStack_34c = (int *****)0x11dd7b64;
                            uStack_350 = (char *)0x108f49d1;
                            FUN_104d1550();
                            pppppiVar17 = pppppiVar9;
                          }
                        }
                        if (pppppiVar17 != (int *****)0x0) {
                          pppppuStack_2f4 = (undefined1 *****)0x0;
                          pppppiStack_300 = (int *****)0x0;
                          uStack_338 = (int ******)&DAT_11d9d32b;
                          uStack_33c = (char *)0x108f49fa;
                          CPet__SetName();
                          ppppiVar7 = pppppiVar17[3];
                          if (ppppiVar7 != pppppiVar17[4]) {
                            do {
                              pppiVar1 = *ppppiVar7;
                              pppppuStack_2f8 = (undefined1 *****)((int)pppppuStack_2f8 + 1);
                              pppppuStack_340 = (undefined1 *****)0x108f4a29;
                              uStack_33c = (char *)pppiVar1;
                              cVar3 = FUN_114cdd70();
                              if (cVar3 == '\0') {
                                pppppuStack_340 = (undefined1 *****)0x108f4a37;
                                uStack_33c = (char *)pppiVar1;
                                iVar5 = FUN_107d7930();
                                if (iVar5 != 0) {
                                  pppppuStack_340 = (undefined1 *****)&DAT_11d9d32b;
                                  if (*(undefined1 **)(iVar5 + 0x1c) != (undefined1 *)0x0) {
                                    pppppuStack_340 =
                                         (undefined1 *****)*(undefined1 **)(iVar5 + 0x1c);
                                  }
                                  pppppiVar17 = (int *****)&DAT_11d9d32b;
                                  if (pppppiStack_304 != (int *****)0x0) {
                                    pppppiVar17 = pppppiStack_304;
                                  }
                                  uStack_33c = (char *)((int)&uStack_308 + 3);
                                  pppppiStack_344 = (int *****)0x108f4a6f;
                                  pppppiStack_344 = (int *****)FUN_100b5f70();
                                  pppppiStack_348 = (int *****)(auStack_310 + 3);
                                  uStack_350 = (char *)0x108f4a82;
                                  pppppiStack_34c = pppppiVar17;
                                  uStack_350 = (char *)FUN_100b5f70();
                                  pppppiStack_354 = &ppppiStack_138;
                                  ppppiStack_358 = (int ****)0x108f4a90;
                                  iVar5 = FUN_100f21e0();
                                  pppppiStack_34c = *(int ******)(iVar5 + 0x14);
                                  uStack_350 = (char *)0x108f4a9f;
                                  CPet__SetName();
                                  if ((ppppuStack_114 != &pppuStack_128) &&
                                     ((int ****)ppppuStack_114 != (int ****)0x0)) {
                                    uStack_33c = (char *)ppppuStack_114;
                                    pppppuStack_340 = (undefined1 *****)0x108f4abb;
                                    FUN_10c3d5d0();
                                  }
                                  if (((int *****)pppppuStack_fc != &ppppiStack_110) &&
                                     ((int *****)pppppuStack_fc != (int *****)0x0)) {
                                    uStack_33c = (char *)pppppuStack_fc;
                                    pppppuStack_340 = (undefined1 *****)0x108f4ada;
                                    FUN_10c3d5d0();
                                  }
                                  if ((puStack_bc != auStack_d0) &&
                                     (puStack_bc != (undefined1 *)0x0)) {
                                    uStack_33c = puStack_bc;
                                    pppppuStack_340 = (undefined1 *****)0x108f4af9;
                                    FUN_10c3d5d0();
                                  }
                                  if ((int *****)
                                      ((int)pppppuStack_2f4[4] - (int)pppppuStack_2f4[3] >> 2) !=
                                      (int *****)pppppuStack_2f8) {
                                    uStack_33c = &DAT_11d9dc4c;
                                    pppppiStack_344 = (int *****)&DAT_11d9d32b;
                                    if (pppppiStack_304 != (int *****)0x0) {
                                      pppppiStack_344 = pppppiStack_304;
                                    }
                                    pppppuStack_340 = (undefined1 *****)((int)&uStack_308 + 3);
                                    pppppiStack_348 = (int *****)0x108f4b38;
                                    pppppiStack_348 = (int *****)FUN_100b5f70();
                                    pppppiStack_34c = (int *****)&pppppiStack_d8;
                                    uStack_350 = (char *)0x108f4b46;
                                    iVar5 = FUN_100f2140();
                                    pppppiStack_344 = *(int ******)(iVar5 + 0x14);
                                    pppppiStack_348 = (int *****)0x108f4b55;
                                    CPet__SetName();
                                    if ((puStack_bc != auStack_d0) &&
                                       (puStack_bc != (undefined1 *)0x0)) {
                                      uStack_33c = puStack_bc;
                                      pppppuStack_340 = (undefined1 *****)0x108f4b71;
                                      FUN_10c3d5d0();
                                    }
                                    if ((ppppuStack_114 != &pppuStack_128) &&
                                       ((int ****)ppppuStack_114 != (int ****)0x0)) {
                                      uStack_33c = (char *)ppppuStack_114;
                                      pppppuStack_340 = (undefined1 *****)0x108f4b90;
                                      FUN_10c3d5d0();
                                    }
                                  }
                                }
                              }
                              ppppiVar7 = ppppiVar7 + 1;
                            } while (ppppiVar7 != (int ****)pppppuStack_2f4[4]);
                          }
                          uStack_33c = (char *)&ppppiStack_110;
                          ppppiStack_110 = (int ****)((uint)ppppiStack_110 & 0xffffff00);
                          pppppuStack_340 = (undefined1 *****)0x108f4bca;
                          pppppuStack_100 = (undefined1 *****)uStack_33c;
                          pppppuStack_fc = (undefined1 *****)uStack_33c;
                          FUN_100e5aa0();
                          pppppuStack_340 = pppppuStack_100;
                          pppppiStack_344 = (int *****)0x11dd7b8c;
                          pppppiStack_348 = (int *****)0x108f4be5;
                          FUN_104d1670();
                          if ((pppppuStack_100 != &ppppuStack_114) &&
                             ((int *****)pppppuStack_100 != (int *****)0x0)) {
                            pppppuStack_340 = pppppuStack_100;
                            pppppiStack_344 = (int *****)0x108f4c04;
                            FUN_10c3d5d0();
                          }
                          pppppuStack_340 = (undefined1 *****)0x108f4c10;
                          FUN_100e5670();
                        }
                        uStack_338 = (int ******)pppppiStack_2ec[10];
                        uStack_33c = "showState";
                        pppppuStack_340 = (undefined1 *****)0x108f4c27;
                        FUN_104d1440();
                        pppppuStack_340 = (undefined1 *****)uStack_308;
                        pppppiStack_344 = (int *****)0x11dbb0f4;
                        pppppiStack_348 = (int *****)0x108f4c3e;
                        FUN_104d1550();
                        pppppiStack_348 = (int *****)&pppppuStack_2a4;
                        pppppiStack_34c = (int *****)0x11dd7bb8;
                        uStack_350 = (char *)0x108f4c57;
                        FUN_104d12b0();
                        ppppiStack_b4 = (int ****)0x0;
                        uStack_338 = (int ******)&ppppiStack_b4;
                        uStack_b0 = 0;
                        uStack_33c = (char *)0x108f4c7f;
                        FUN_11a98a70();
                        pppppuVar10 = (undefined1 *****)
                                      ((int)ppppiStack_2d4 - (int)pppppiStack_2d8 >> 2);
                        pppppuStack_2f4 = (undefined1 *****)0x0;
                        ppppppuVar15 = ppppppuStack_32c;
                        pppppiVar17 = pppppiStack_2d8;
                        ppppiStack_2f0 = (int ****)pppppuVar10;
                        if (pppppuVar10 != (undefined1 *****)0x0) {
                          do {
                            if (*(int *)((int)ppppppuVar15 + 0x2b80) != 0) {
                              pppppiVar9 = (int *****)pppppiVar17[(int)pppppuStack_2f4];
                              pppppuStack_340 = (undefined1 *****)0x108f4cc6;
                              uStack_33c = (char *)pppppiVar9;
                              pppppiStack_30c = (int *****)FUN_107d7930();
                              ppppppuVar15 = ppppppuStack_32c;
                              pppppuVar10 = (undefined1 *****)ppppiStack_2f0;
                              pppppiVar17 = pppppiStack_2d8;
                              if ((undefined1 ******)pppppiStack_30c != (undefined1 ******)0x0) {
                                if (((undefined1 *****)pppppiStack_30c[0x10] !=
                                     (undefined1 *****)0x1) &&
                                   ((undefined1 *****)pppppiStack_30c[0x10] != (undefined1 *****)0x0
                                   )) {
                                  pppppuStack_340 = (undefined1 *****)0x108f4cf3;
                                  uStack_33c = (char *)pppppiVar9;
                                  cVar3 = (**(code **)(**(int **)((int)ppppppuStack_32c + 0x2b80) +
                                                      0x28))();
                                  ppppppuVar15 = ppppppuStack_32c;
                                  pppppuVar10 = (undefined1 *****)ppppiStack_2f0;
                                  pppppiVar17 = pppppiStack_2d8;
                                  if (cVar3 == '\0') goto LAB_108f5bc4;
                                }
                                pppppuStack_340 = (undefined1 *****)ppppiStack_26c;
                                pppppiStack_344 = (int *****)0x108f4d11;
                                uStack_33c = (char *)pppppiVar9;
                                cVar3 = (**(code **)(*piStack_268 + 0x58))();
                                ppppppuVar15 = ppppppuStack_32c;
                                pppppuVar10 = (undefined1 *****)ppppiStack_2f0;
                                pppppiVar17 = pppppiStack_2d8;
                                if (cVar3 != '\0') {
                                  uStack_33c = (char *)0x0;
                                  pppppuStack_340 = (undefined1 *****)0x0;
                                  pppppiStack_344 = pppppiStack_260;
                                  pppppiStack_304 = (int *****)0x0;
                                  ppppiStack_110 = (int ****)0x0;
                                  uStack_10c = 0;
                                  pppppiStack_348 = &ppppiStack_110;
                                  pppppiStack_34c = (int *****)0x108f4d45;
                                  FUN_11a98de0();
                                  pppppiStack_34c = pppppiStack_2ec;
                                  uStack_350 = "levelGroupID";
                                  pppppiStack_354 = (int *****)0x108f4d5c;
                                  FUN_104d1550();
                                  ppppiStack_358 = (int ****)0x11dd7d18;
                                  pppppuStack_35c = (undefined1 *****)0x108f4d70;
                                  pppppiStack_354 = pppppiVar9;
                                  FUN_104d1550();
                                  if ((int ****)pppppuStack_29c[0xac3] != (int ****)0x0) {
                                    uStack_350 = (char *)0x108f4d8a;
                                    pppppiStack_34c = pppppiVar9;
                                    uVar18 = FUN_115312e0();
                                    uStack_350 = (char *)(uVar18 & 0xff);
                                    pppppiStack_354 = (int *****)0x11dd7d38;
                                    ppppiStack_358 = (int ****)0x108f4da1;
                                    FUN_104d15e0();
                                    uStack_350 = (char *)0x108f4db6;
                                    iVar5 = FUN_1025b060();
                                    uStack_350 = (char *)(uint)(iVar5 == 1);
                                    pppppiStack_354 = (int *****)0x11dd7d30;
                                    ppppiStack_358 = (int ****)0x108f4dd3;
                                    FUN_104d15e0();
                                  }
                                  pppppiStack_34c = (int *****)pppppiStack_31c[8];
                                  uStack_350 = (char *)0x108f4de6;
                                  cVar3 = FUN_112fccd0();
                                  if (cVar3 == '\0') {
LAB_108f4dfc:
                                    uStack_350 = (char *)&ppppiStack_2bc;
                                    pppppiStack_354 = (int *****)0x108f4e0b;
                                    FUN_11a98a70();
                                    pppppiStack_354 = (int *****)0x108f4e17;
                                    FUN_108f61f0();
                                    pppppiStack_354 = (int *****)&ppppuStack_220;
                                    ppppiStack_358 = (int ****)0x0;
                                    pppppiStack_360 = pppppiStack_344;
                                    pppppiStack_364 = (int *****)0x108f4e2b;
                                    pppppuStack_35c = (undefined1 *****)pppppiVar9;
                                    FUN_1130cd50();
                                    ppppppuStack_368 = (undefined1 ******)pppppiStack_344;
                                    ppppppuStack_36c = (undefined1 ******)0x108f4e35;
                                    pppppiStack_364 = pppppiVar9;
                                    uVar4 = CHubEntryConfig__IsQuestUnlocked();
                                    pppppiStack_224 =
                                         (int *****)CONCAT31(pppppiStack_224._1_3_,uVar4);
                                    ppppppuStack_36c = (undefined1 ******)pppppiStack_224;
                                    pppppiStack_370 = (int *****)0x11dd7d58;
                                    pppppiStack_374 = (int *****)0x108f4e56;
                                    FUN_104d15e0();
                                    pppppiStack_354 = (int *****)0x1;
                                    ppppiStack_358 = (int ****)0x108f4e67;
                                    ppppiStack_358 = (int ****)FUN_1130cb50();
                                    pppppuStack_35c = (undefined1 *****)0x11dd7d48;
                                    pppppiStack_360 = (int *****)0x108f4e7b;
                                    FUN_104d1550();
                                    ppppiStack_358 = (int ****)0x1;
                                    pppppuStack_35c = (undefined1 *****)0x108f4e8c;
                                    iVar5 = FUN_1130cb50();
                                    ppppiStack_230 =
                                         (int ****)
                                         CONCAT31(ppppiStack_230._1_3_,
                                                  *(int *)((int)ppppppuStack_32c + 0x14) != 0x4b2 &&
                                                  0 < iVar5);
                                    pppppuStack_35c = (undefined1 *****)ppppiStack_230;
                                    pppppiStack_360 = (int *****)0x11dd7d70;
                                    pppppiStack_364 = (int *****)0x108f4ec5;
                                    FUN_104d15e0();
                                    if ((int *****)pppppiStack_34c[0xae2] != (int *****)0x0) {
                                      pppppiStack_360 = (int *****)0x108f4edc;
                                      pppppuStack_35c = (undefined1 *****)pppppiVar9;
                                      pppppiStack_360 = (int *****)FUN_114cd4a0();
                                      pppppiStack_364 = (int *****)0x11dd7d64;
                                      ppppppuStack_368 = (undefined1 ******)0x108f4ef0;
                                      FUN_104d1550();
                                    }
                                    pppppuStack_35c = (undefined1 *****)appppiStack_148;
                                    appppiStack_148[0] =
                                         (int ****)((uint)appppiStack_148[0] & 0xffffff00);
                                    pppppiStack_360 = (int *****)0x108f4f1d;
                                    ppppiStack_138 = (int ****)pppppuStack_35c;
                                    ppppiStack_134 = (int ****)pppppuStack_35c;
                                    FUN_100e5aa0();
                                    pppppiStack_360 = (int *****)ppppiStack_138;
                                    pppppiStack_364 = (int *****)&DAT_11dbac80;
                                    ppppppuStack_368 = (undefined1 ******)0x108f4f37;
                                    FUN_104d1670();
                                    if (((int *****)ppppiStack_138 != &ppppiStack_14c) &&
                                       ((int *****)ppppiStack_138 != (int *****)0x0)) {
                                      pppppiStack_360 = (int *****)ppppiStack_138;
                                      pppppiStack_364 = (int *****)0x108f4f56;
                                      FUN_10c3d5d0();
                                    }
                                    pppppiStack_360 = (int *****)0x2;
                                    pppppiStack_364 = (int *****)0x108f4f67;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      ppppppuStack_368 = (undefined1 ******)0x108f4f83;
                                      pppppiStack_364 = pppppiVar9;
                                      cVar3 = (*(code *)(*pppppiStack_354[0xae0])[10])();
                                      if (cVar3 == '\0') {
                                        ppppppuStack_32c = (undefined1 ******)0x1;
                                        if (((uint)pppppiStack_34c >> 6 & 1) != 0) {
                                          ppppppuStack_368 = (undefined1 ******)&uStack_350;
                                          pppppiStack_364 = pppppiStack_348;
                                          ppppppuStack_36c = (undefined1 ******)0x108f4fb0;
                                          (*(code *)(*(undefined1 ******)uStack_350)[2])();
                                          uStack_350 = (char *)0x0;
                                        }
                                        pppppiStack_364 = (int *****)&uStack_350;
                                        pppppiStack_34c = (int *****)0x3;
                                        pppppiStack_348 = (int *****)&DAT_00000008;
                                        ppppppuStack_368 = (undefined1 ******)pppppiStack_2c8;
                                        ppppppuStack_36c = (undefined1 ******)0x108f4fe0;
                                        (**(code **)(*piStack_2d0 + 0x3c))();
                                        ppppppuStack_36c = *(undefined1 *******)(iVar5 + 4);
                                        pppppiStack_370 = (int *****)0x11dd7b58;
                                        pppppiStack_374 = (int *****)0x108f4ff8;
                                        FUN_104d1550();
                                        pppppiStack_374 = *(int ******)(iVar5 + 8);
                                        FUN_104d1550("iUseItemCount");
                                      }
                                    }
                                    pppppiStack_364 = (int *****)&DAT_0000000a;
                                    ppppppuStack_330 =
                                         (undefined1 ******)((uint)ppppppuStack_330 & 0xffffff);
                                    ppppppuStack_368 = (undefined1 ******)0x108f5028;
                                    ppppppuVar11 = (undefined1 ******)FUN_117e7460();
                                    ppppppuVar15 = (undefined1 ******)0x0;
                                    if (ppppppuVar11 != (undefined1 ******)0x0) {
                                      ppppppuStack_36c = (undefined1 ******)0x108f5044;
                                      ppppppuStack_368 = ppppppuVar11;
                                      cVar3 = (*(code *)(*ppppiStack_358[0xae0])[0x12])();
                                      if (cVar3 == '\0') {
                                        ppppppuStack_330 = (undefined1 ******)0x1;
                                        if (((uint)uStack_350 >> 6 & 1) != 0) {
                                          ppppppuStack_36c = (undefined1 ******)&pppppiStack_354;
                                          ppppppuStack_368 = (undefined1 ******)pppppiStack_34c;
                                          pppppiStack_370 = (int *****)0x108f5071;
                                          (*(code *)(*pppppiStack_354)[2])();
                                          pppppiStack_354 = (int *****)0x0;
                                        }
                                        ppppppuStack_368 = (undefined1 ******)&pppppiStack_354;
                                        uStack_350 = (char *)0x3;
                                        pppppiStack_34c = (int *****)&DAT_0000000a;
                                        ppppppuStack_36c = (undefined1 ******)pppppiStack_2cc;
                                        pppppiStack_370 = (int *****)0x108f509d;
                                        (*(code *)(*ppppiStack_2d4)[0xf])();
                                        if ((undefined1 *****)
                                            ((int)ppppppuVar11[4] - (int)ppppppuVar11[3] >> 2) ==
                                            ppppppuVar11[1]) {
                                          pppppiStack_370 = (int *****)0x1;
                                          pppppiStack_374 = (int *****)0x11dd7b7c;
                                          FUN_104d15e0();
                                        }
                                        pppppiStack_370 = (int *****)ppppppuVar11[1];
                                        pppppiStack_374 = (int *****)0x11dd7b64;
                                        FUN_104d1550();
                                        ppppppuVar15 = ppppppuVar11;
                                      }
                                    }
                                    ppppppuStack_368 = (undefined1 ******)&DAT_0000000b;
                                    ppppppuStack_36c = (undefined1 ******)0x108f50f0;
                                    ppppppuVar11 = (undefined1 ******)FUN_117e7460();
                                    if (ppppppuVar11 != (undefined1 ******)0x0) {
                                      pppppiStack_370 = (int *****)0x108f510c;
                                      ppppppuStack_36c = ppppppuVar11;
                                      cVar3 = (*(code *)(*pppppuStack_35c[0xae0])[0x12])();
                                      if (cVar3 == '\0') {
                                        ppppppuStack_334 = (undefined1 ******)0x1;
                                        uStack_338 = (int ******)CONCAT13(1,(undefined3)uStack_338);
                                        if (((uint)pppppiStack_354 >> 6 & 1) != 0) {
                                          pppppiStack_370 = &ppppiStack_358;
                                          ppppppuStack_36c = (undefined1 ******)uStack_350;
                                          pppppiStack_374 = (int *****)0x108f513e;
                                          (*(code *)(*ppppiStack_358)[2])();
                                          ppppiStack_358 = (int ****)0x0;
                                        }
                                        ppppppuStack_36c = (undefined1 ******)&ppppiStack_358;
                                        pppppiStack_354 = (int *****)0x3;
                                        uStack_350 = &DAT_00000009;
                                        pppppiStack_370 = (int *****)piStack_2d0;
                                        pppppiStack_374 = (int *****)0x108f516e;
                                        (*(code *)(*pppppiStack_2d8)[0xf])();
                                        if ((undefined1 *****)
                                            ((int)ppppppuVar11[4] - (int)ppppppuVar11[3] >> 2) ==
                                            ppppppuVar11[2]) {
                                          pppppiStack_374 = (int *****)0x1;
                                          FUN_104d15e0("bIsAndOpration");
                                        }
                                        pppppiStack_374 = (int *****)ppppppuVar11[1];
                                        FUN_104d1550("iUnlockNeedAppraisal");
                                        FUN_104d1550("iUnlockNeedLevelsCount",ppppppuVar11[2]);
                                        ppppppuVar15 = ppppppuVar11;
                                      }
                                    }
                                    if (ppppppuVar15 != (undefined1 ******)0x0) {
                                      pppppiStack_318 = (int *****)0x0;
                                      uStack_328 = (int *)0x0;
                                      ppppppuStack_36c = (undefined1 ******)&DAT_11d9d32b;
                                      pppppiStack_370 = (int *****)0x108f51eb;
                                      CPet__SetName();
                                      ppppiStack_314 = (int ****)ppppppuVar15[3];
                                      if ((undefined1 *****)ppppiStack_314 != ppppppuVar15[4]) {
                                        do {
                                          ppppuVar2 = (undefined1 ****)*ppppiStack_314;
                                          pppppiStack_31c = (int *****)((int)pppppiStack_31c + 1);
                                          pppppiStack_370 = (int *****)ppppuVar2;
                                          if (uStack_33c._3_1_ == '\0') {
                                            pppppiStack_374 = (int *****)0x108f522d;
                                            cVar3 = FUN_114cdd70();
                                          }
                                          else {
                                            pppppiStack_374 = (int *****)0x108f5220;
                                            iVar5 = FUN_114cd4a0();
                                            cVar3 = (int)ppppppuVar15[1] <= iVar5;
                                          }
                                          if (cVar3 == '\0') {
                                            pppppiStack_374 = (int *****)0x108f523b;
                                            pppppiStack_370 = (int *****)ppppuVar2;
                                            iVar5 = FUN_107d7930();
                                            if (iVar5 != 0) {
                                              pppppiStack_374 = (int *****)&DAT_11d9d32b;
                                              if (*(int ******)(iVar5 + 0x1c) != (int *****)0x0) {
                                                pppppiStack_374 = *(int ******)(iVar5 + 0x1c);
                                              }
                                              ppppppuVar11 = (undefined1 ******)"";
                                              if (ppppppuStack_32c != (undefined1 ******)0x0) {
                                                ppppppuVar11 = ppppppuStack_32c;
                                              }
                                              pppppiStack_370 = (int *****)(auStack_320 + 3);
                                              uVar12 = FUN_100b5f70();
                                              uVar12 = FUN_100b5f70(ppppppuVar11,
                                                                    (int)&uStack_328 + 3,uVar12);
                                              iVar5 = FUN_100f21e0(&ppppuStack_114,uVar12);
                                              CPet__SetName(*(undefined4 *)(iVar5 + 0x14));
                                              if ((ppppuStack_f0 != &pppuStack_104) &&
                                                 (ppppuStack_f0 != (undefined1 ****)0x0)) {
                                                pppppiStack_370 = (int *****)ppppuStack_f0;
                                                pppppiStack_374 = (int *****)0x108f52bf;
                                                FUN_10c3d5d0();
                                              }
                                              if ((appppiStack_148[0] != (int ****)auStack_15c) &&
                                                 ((int *****)appppiStack_148[0] != (int *****)0x0))
                                              {
                                                pppppiStack_370 = (int *****)appppiStack_148[0];
                                                pppppiStack_374 = (int *****)0x108f52de;
                                                FUN_10c3d5d0();
                                              }
                                              if ((ppuStack_118 != &puStack_12c) &&
                                                 (ppuStack_118 != (undefined1 **)0x0)) {
                                                pppppiStack_370 = (int *****)ppuStack_118;
                                                pppppiStack_374 = (int *****)0x108f52fd;
                                                FUN_10c3d5d0();
                                              }
                                              if ((int *****)
                                                  ((int)ppppppuVar15[4] - (int)ppppppuVar15[3] >> 2)
                                                  != pppppiStack_31c) {
                                                pppppiStack_370 = (int *****)&DAT_11d9dc4c;
                                                ppppppuVar11 = (undefined1 ******)"";
                                                if (ppppppuStack_32c != (undefined1 ******)0x0) {
                                                  ppppppuVar11 = ppppppuStack_32c;
                                                }
                                                pppppiStack_374 = (int *****)(auStack_320 + 3);
                                                uVar12 = FUN_100b5f70(ppppppuVar11);
                                                iVar5 = FUN_100f2140(&ppppiStack_134,uVar12);
                                                CPet__SetName(*(undefined4 *)(iVar5 + 0x14));
                                                if ((ppuStack_118 != &puStack_12c) &&
                                                   (ppuStack_118 != (undefined1 **)0x0)) {
                                                  pppppiStack_370 = (int *****)ppuStack_118;
                                                  pppppiStack_374 = (int *****)0x108f5371;
                                                  FUN_10c3d5d0();
                                                }
                                                if ((ppppuStack_f0 != &pppuStack_104) &&
                                                   (ppppuStack_f0 != (undefined1 ****)0x0)) {
                                                  pppppiStack_370 = (int *****)ppppuStack_f0;
                                                  pppppiStack_374 = (int *****)0x108f5390;
                                                  FUN_10c3d5d0();
                                                }
                                              }
                                            }
                                          }
                                          ppppiStack_314 = ppppiStack_314 + 1;
                                        } while ((undefined1 *****)ppppiStack_314 != ppppppuVar15[4]
                                                );
                                      }
                                      pppppiStack_370 = (int *****)auStack_15c;
                                      auStack_15c[0] = 0;
                                      pppppiStack_374 = (int *****)0x108f53ce;
                                      ppppiStack_14c = (int ****)pppppiStack_370;
                                      appppiStack_148[0] = (int ****)pppppiStack_370;
                                      FUN_100e5aa0();
                                      pppppiStack_374 = (int *****)ppppiStack_14c;
                                      FUN_104d1670("strUnlockNeedLevels");
                                      if ((ppppiStack_14c != &pppiStack_160) &&
                                         ((int *****)ppppiStack_14c != (int *****)0x0)) {
                                        pppppiStack_374 = (int *****)ppppiStack_14c;
                                        FUN_10c3d5d0();
                                      }
                                      pppppiStack_374 = (int *****)0x108f5417;
                                      FUN_100e5670();
                                    }
                                    ppppppuStack_36c = (undefined1 ******)0x1;
                                    pppppiStack_370 = (int *****)0x108f542b;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      pppppiStack_370 = *(int ******)(iVar5 + 4);
                                      pppppiStack_374 = (int *****)0x11dd7bcc;
                                      FUN_104d1550();
                                      pppppiStack_370 = (int *****)0x108f545d;
                                      iVar6 = CPlayer__GetHuntRankOrCount();
                                      if (iVar6 < *(int *)(iVar5 + 4)) {
                                        uStack_338 = (int ******)0x1;
                                        if (((uint)ppppiStack_358 >> 6 & 1) != 0) {
                                          pppppiStack_374 = (int *****)&pppppuStack_35c;
                                          pppppiStack_370 = pppppiStack_354;
                                          (*(code *)(*pppppuStack_35c)[2])();
                                          pppppuStack_35c = (undefined1 *****)0x0;
                                        }
                                        pppppiStack_370 = (int *****)&pppppuStack_35c;
                                        ppppiStack_358 = (int ****)0x3;
                                        pppppiStack_354 = (int *****)0x1;
                                        pppppiStack_374 = (int *****)ppppiStack_2d4;
                                        (**(code **)((int)*pppppiStack_2dc + 0x3c))();
                                      }
                                    }
                                    pppppiStack_370 = (int *****)&DAT_00000008;
                                    pppppiStack_374 = (int *****)0x108f54c5;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      if (pppppiStack_364[0xaac] != (int ****)0x0) {
                                        pppppiStack_374 = *(int ******)(iVar5 + 4);
                                        cVar3 = (*(code *)(*pppppiStack_364[0xaac])[0x18])();
                                        if (cVar3 != '\0') {
                                          pppppiStack_374 = (int *****)&DAT_11d9d32b;
                                          FUN_104d1670("strUnLockNeedTask");
                                          goto LAB_108f55be;
                                        }
                                      }
                                      uStack_33c = (char *)0x1;
                                      if (((uint)pppppuStack_35c >> 6 & 1) != 0) {
                                        pppppiStack_374 = (int *****)ppppiStack_358;
                                        (*(code *)(*pppppiStack_360)[2])(&pppppiStack_360);
                                        pppppiStack_360 = (int *****)0x0;
                                      }
                                      pppppiStack_374 = (int *****)&pppppiStack_360;
                                      pppppuStack_35c = (undefined1 *****)0x3;
                                      ppppiStack_358 = (int ****)0x2;
                                      (*(code *)(*ppppiStack_2e0)[0xf])(pppppiStack_2d8);
                                      iVar5 = FUN_104d8d20(*(undefined4 *)(iVar5 + 4));
                                      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2c) != 0)) {
                                        pppppiStack_374 = (int *****)&pppiStack_130;
                                        iVar5 = FUN_100e5b40();
                                        FUN_104d1670("strUnLockNeedTask",
                                                     *(undefined4 *)(iVar5 + 0x14));
                                        if ((ppppiStack_11c != &pppiStack_130) &&
                                           ((int *****)ppppiStack_11c != (int *****)0x0)) {
                                          pppppiStack_374 = (int *****)ppppiStack_11c;
                                          FUN_10c3d5d0();
                                        }
                                      }
                                    }
LAB_108f55be:
                                    pppppiStack_374 = (int *****)&DAT_00000006;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      (*(code *)(*ppppppuStack_368)[0x11b])
                                                (*(undefined4 *)(iVar5 + 4));
                                      cVar3 = FUN_114e0340();
                                      if ((cVar3 == '\0') &&
                                         (iVar5 = FUN_104d86c0(*(undefined4 *)(iVar5 + 4)),
                                         iVar5 != 0)) {
                                        pppppuStack_340 = (undefined1 *****)0x1;
                                        if (((uint)pppppiStack_360 >> 6 & 1) != 0) {
                                          (*(code *)(*pppppiStack_364)[2])
                                                    (&pppppiStack_364,pppppuStack_35c);
                                          pppppiStack_364 = (int *****)0x0;
                                        }
                                        pppppiStack_360 = (int *****)0x3;
                                        pppppuStack_35c = (undefined1 *****)&DAT_00000006;
                                        (**(code **)(*piStack_2e4 + 0x3c))
                                                  (pppppiStack_2dc,&pppppiStack_364);
                                        iVar5 = FUN_100e5b40(auStack_13c);
                                        FUN_104d1670("strUnLockNeedHunterCard",
                                                     *(undefined4 *)(iVar5 + 0x14));
                                        if ((puStack_12c != auStack_140) &&
                                           (puStack_12c != (undefined1 *)0x0)) {
                                          FUN_10c3d5d0(puStack_12c);
                                        }
                                        FUN_117f69d0(auStack_140);
                                        iVar5 = FUN_100e5b40();
                                        FUN_104d1670("strUnLockNeedCardDes",
                                                     *(undefined4 *)(iVar5 + 0x14));
                                        if (((int *****)pppppuStack_120 != &ppppiStack_134) &&
                                           ((int *****)pppppuStack_120 != (int *****)0x0)) {
                                          FUN_10c3d5d0(pppppuStack_120);
                                        }
                                      }
                                    }
                                    piVar8 = (int *)&DAT_00000004;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      piVar13 = (int *)(*(code *)(*ppppppuStack_36c)[0x11b])();
                                      iVar6 = (**(code **)(*piVar13 + 0x18))();
                                      if (iVar6 < *(int *)(iVar5 + 4)) {
                                        pppppiStack_344 = (int *****)0x1;
                                        if (((uint)pppppiStack_364 >> 6 & 1) != 0) {
                                          (*(code *)(*ppppppuStack_368)[2])
                                                    (&ppppppuStack_368,pppppiStack_360);
                                          ppppppuStack_368 = (undefined1 ******)0x0;
                                        }
                                        pppppiStack_364 = (int *****)0x3;
                                        pppppiStack_360 = (int *****)0x3;
                                        (**(code **)((int)*ppppiStack_2e8 + 0x3c))
                                                  (ppppiStack_2e0,&ppppppuStack_368);
                                        FUN_104d1550("strUnLockNeedHunterStar",
                                                     *(undefined4 *)(iVar5 + 4));
                                      }
                                    }
                                    iVar5 = FUN_117e7460(5);
                                    if (iVar5 != 0) {
                                      (**(code **)((int)*pppppiStack_370 + 0x46c))();
                                      iVar6 = FUN_114dfc10();
                                      if (iVar6 < *(int *)(iVar5 + 4)) {
                                        pppppiStack_348 = (int *****)0x1;
                                        if (((uint)ppppppuStack_368 >> 6 & 1) != 0) {
                                          (*(code *)(*ppppppuStack_36c)[2])
                                                    (&ppppppuStack_36c,pppppiStack_364);
                                          ppppppuStack_36c = (undefined1 ******)0x0;
                                        }
                                        ppppppuStack_368 = (undefined1 ******)0x3;
                                        pppppiStack_364 = (int *****)&DAT_00000004;
                                        (**(code **)((int)*pppppiStack_2ec + 0x3c))
                                                  (piStack_2e4,&ppppppuStack_36c);
                                        FUN_104d1550("strUnLockNeedGoldHunterStar",
                                                     *(undefined4 *)(iVar5 + 4));
                                      }
                                    }
                                    iVar6 = 7;
                                    iVar5 = FUN_117e7460();
                                    if (iVar5 != 0) {
                                      FUN_108f61f0();
                                      FUN_1130cd50(pppppiStack_374,*(undefined4 *)(iVar5 + 4),0,
                                                   &ppppiStack_1e0);
                                      iVar5 = FUN_114cd590(*(undefined4 *)(iVar5 + 4));
                                      if (iVar5 != 3) {
                                        uStack_350 = (char *)0x1;
                                        if (((uint)pppppiStack_370 >> 6 & 1) != 0) {
                                          (*(code *)(*pppppiStack_374)[2])
                                                    (&pppppiStack_374,ppppppuStack_36c);
                                          pppppiStack_374 = (int *****)0x0;
                                        }
                                        pppppiStack_370 = (int *****)0x3;
                                        ppppppuStack_36c = (undefined1 ******)&DAT_00000005;
                                        (*(code *)(*pppppuStack_2f4)[0xf])
                                                  (pppppiStack_2ec,&pppppiStack_374);
                                        puStack_16c = auStack_17c;
                                        auStack_17c[0] = 0;
                                        puStack_168 = puStack_16c;
                                        FUN_100e5aa0(puStack_16c);
                                        FUN_104d1670("strUnLockNeedFinishLevel",puStack_16c);
                                        FUN_100b45f0();
                                      }
                                      FUN_108f62b0();
                                    }
                                    ppppppiVar19 = (int ******)pppppiStack_34c;
                                    if ((int ******)pppppiStack_34c == (int ******)0x0) {
                                      iVar5 = FUN_1130bb80(1);
                                      if ((iVar5 != 0) &&
                                         (iVar16 = CPlayer__GetHuntRankOrCount(),
                                         iVar16 < *(int *)(iVar5 + 4))) {
                                        ppppppiVar19 = (int ******)0x2;
                                        pppppiStack_318 = (int *****)0x1;
                                        uStack_350 = (char *)0x2;
                                      }
                                      piVar8 = (int *)(**(code **)(*piVar8 + 0x3a4))();
                                      iVar5 = FUN_1130bb80(8);
                                      if (((iVar5 != 0) && (piVar8 != (int *)0x0)) &&
                                         (ppppppiVar19 == (int ******)0x0)) {
                                        ppppppuStack_330 = *(undefined1 *******)(iVar5 + 4);
                                        uVar18 = *(uint *)(iVar5 + 8);
                                        if (((int ****)pppppuStack_35c[9] != (int ****)0x0) &&
                                           ((int ***)pppppuStack_35c[9][6] == (int ***)0x1)) {
                                          ppppppuStack_330 =
                                               (undefined1 ******)
                                               (int)((double)(int)ppppppuStack_330 * DAT_11de9968);
                                          uVar18 = (uint)((double)(int)uVar18 * DAT_11de9968);
                                        }
                                        uStack_338 = (int ******)(**(code **)(*piVar8 + 0xa4))();
                                        pppppiStack_348 = (int *****)0x1;
                                        ppppppiVar19 = (int ******)&uStack_338;
                                        if ((int)uStack_338 < 2) {
                                          ppppppiVar19 = &pppppiStack_348;
                                        }
                                        if ((int)*ppppppiVar19 < (int)ppppppuStack_330) {
                                          pppppiStack_354 = (int *****)0x2;
                                          pppppiStack_31c = (int *****)0x2;
                                        }
                                        ppppppiVar19 = (int ******)pppppiStack_354;
                                        if ((uVar18 != 0) &&
                                           (uVar14 = (**(code **)(*piVar8 + 0xa4))(),
                                           ppppppiVar19 = (int ******)pppppiStack_354,
                                           uVar18 < uVar14)) {
                                          pppppiStack_31c = (int *****)&DAT_00000006;
                                          ppppppiVar19 = (int ******)0x2;
                                        }
                                      }
                                      iVar5 = FUN_1130bb80(3);
                                      if ((((iVar5 != 0) && (*(int *)(iVar6 + 0x2d1c) != 0)) &&
                                          (ppppppiVar19 == (int ******)0x0)) &&
                                         (uVar18 = *(uint *)(iVar5 + 8),
                                         uVar14 = FUN_113fa380(*(undefined4 *)(iVar5 + 4)),
                                         uVar14 < uVar18)) {
                                        ppppppiVar19 = (int ******)0x2;
                                        auStack_320 = (undefined1  [4])0x3;
                                      }
                                      iVar5 = FUN_1130cb50(4);
                                      if (iVar5 != 0) {
                                        iVar5 = FUN_1130cb50(7);
                                        iVar6 = FUN_1130cb50(5);
                                        if ((iVar6 <= iVar5) && (ppppppiVar19 == (int ******)0x0)) {
                                          ppppppiVar19 = (int ******)0x2;
                                          iVar5 = FUN_1130cb50(4);
                                          ppppiStack_314 = (int ****)&DAT_0000000a;
                                          if (iVar5 < 4) {
                                            ppppiStack_314 = (int ****)&DAT_00000004;
                                          }
                                        }
                                      }
                                    }
                                    FUN_104d1550("state",ppppppiVar19);
                                    FUN_104d1550(&DAT_11dd7c8c,ppppiStack_314);
                                    FUN_104d12b0("codes",&ppppiStack_2f0);
                                    (*(code *)(*pppppuStack_100)[0xf])(pppppiStack_f8,auStack_158);
                                    if (uStack_350._3_1_ == '\0') {
                                      cVar3 = FUN_112fccd0(pppppuStack_35c[8]);
                                      uStack_350 = (char *)((uint)uStack_350 & 0xffffff);
                                      if (cVar3 != '\0') goto LAB_108f5b97;
                                    }
                                    else {
LAB_108f5b97:
                                      uStack_350 = (char *)CONCAT13(1,(undefined3)uStack_350);
                                    }
                                    FUN_108f62b0();
                                  }
                                  else {
                                    pppppiStack_354 = (int *****)0x108f4df4;
                                    uStack_350 = (char *)pppppiVar9;
                                    cVar3 = FUN_112fcbf0();
                                    if (cVar3 != '\0') goto LAB_108f4dfc;
                                  }
                                  uStack_350 = (char *)0x108f5bb4;
                                  FUN_104d7c10();
                                  ppppppuVar15 = ppppppuStack_32c;
                                  pppppuVar10 = (undefined1 *****)ppppiStack_2f0;
                                  pppppiVar17 = pppppiStack_2d8;
                                }
                              }
                            }
LAB_108f5bc4:
                            pppppuStack_2f4 = (undefined1 *****)((int)pppppuStack_2f4 + 1);
                          } while (pppppuStack_2f4 < pppppuVar10);
                        }
                        uStack_33c = auStack_b8;
                        pppppuStack_340 = (undefined1 *****)0x11dd7c7c;
                        pppppiStack_344 = (int *****)0x108f5bea;
                        FUN_104d12b0();
                        uStack_33c = (char *)&ppppuStack_2c0;
                        pppppuStack_340 = (undefined1 *****)ppppuStack_220;
                        pppppiStack_344 = (int *****)0x108f5c08;
                        (**(code **)(*piStack_228 + 0x3c))();
                        pppppiStack_344 = (int *****)0x108f5c14;
                        FUN_104d7c10();
                        pppppiStack_344 = (int *****)0x108f5c1d;
                        FUN_104d7c10();
                        pppppiStack_344 = (int *****)0x108f5c29;
                        FUN_104d7c10();
                        pppppiStack_344 = (int *****)0x108f5c32;
                        FUN_104d7c10();
                        pppppiStack_2d8 = pppppiVar17;
                        if (pppppiVar17 != (int *****)0x0) goto LAB_108f5c37;
                      }
                    }
                  }
                }
                else if ((int ****)ppppuStack_274 != (int ****)0x0) {
                  pppppiStack_2d8 = (int *****)ppppuStack_274;
                  goto LAB_108f5c37;
                }
              }
              pppppuStack_298 = (undefined1 *****)((int)pppppuStack_298 + 1);
            } while (pppppuStack_298 <
                     (int *****)((int)pppppiStack_260[7] - (int)pppppiStack_260[6] >> 4));
          }
          pppppiStack_2d8 = (int *****)pppppiStack_260[5];
          pppppuStack_298 = (undefined1 *****)((uint)pppppuStack_298 & 0xffffff00);
          uVar18 = 0;
          pppppiStack_2dc = (int *****)0x108f5c6c;
          iVar5 = FUN_108f2e10();
          if (iVar5 != 0) {
            pppppuStack_298 = (undefined1 *****)CONCAT31(pppppuStack_298._1_3_,1);
            pppppiStack_2d8 = (int *****)0x108f5c82;
            iVar6 = FUN_108f8850();
            if (0 < iVar6) {
              piVar8 = *(int **)(iVar5 + 0x14);
              iStack_94 = *piVar8;
              iStack_90 = piVar8[1];
              iStack_8c = piVar8[2];
              iStack_88 = piVar8[3];
              uStack_84 = *(undefined8 *)(piVar8 + 4);
              iStack_7c = piVar8[6];
              uVar18 = (uint)(iStack_94 == 2);
              pppppiStack_2d8 = (int *****)0x108f5cc8;
              FUN_117e8eb0();
            }
          }
          pppppiStack_2dc = (int *****)0x11dd7cac;
          ppppiStack_2e0 = (int ****)0x108f5ce0;
          pppppiStack_2d8 = (int *****)uVar18;
          FUN_104d1550();
          ppppiStack_2e0 = (int ****)pppppuStack_298;
          piStack_2e4 = (int *)0x11dd7c94;
          ppppiStack_2e8 = (int ****)0x108f5cf7;
          FUN_104d15e0();
          if (iStack_264 != 0) {
            pppppiStack_2d8 = (int *****)&pppppuStack_27c;
            pppppuStack_298 = (undefined1 *****)0x0;
            pppppiStack_2dc = (int *****)&pppppuStack_298;
            pppppuStack_27c = (undefined1 *****)0x0;
            ppppiStack_2e0 = (int ****)0x108f5d26;
            CLevelEnSubGroupRewardInfo__SumSubGroupRewards();
            ppppiStack_2e0 = (int ****)piStack_2a0;
            piStack_2e4 = (int *)0x11dd7cd4;
            ppppiStack_2e8 = (int ****)0x108f5d3d;
            FUN_104d1550();
            ppppiStack_2e8 = ppppiStack_284;
            pppppiStack_2ec = (int *****)0x11dd7cc0;
            ppppiStack_2f0 = (int ****)0x108f5d54;
            FUN_104d1550();
          }
          pppppiStack_2d8 = (int *****)auStack_1c4;
          pppppiStack_2dc = (int *****)0x11dd7d08;
          ppppiStack_2e0 = (int ****)0x108f5d70;
          FUN_104d12b0();
          pppppiStack_2dc = (int *****)&local_1f4;
          ppppiStack_284 = (int ****)0x0;
          iStack_264 = CONCAT31(iStack_264._1_3_,((byte)ppppuStack_220 & 0x8f) == 10);
          pppppiStack_2d8 = (int *****)iStack_264;
          ppppiStack_2e0 = (int ****)0x11dd7ce8;
          piStack_2e4 = piStack_21c;
          ppppiStack_2e8 = (int ****)0x108f5db2;
          cVar3 = (*(code *)(*pppppiStack_224)[4])();
          pppppiVar17 = (int *****)0x0;
          if (((cVar3 != '\0') && (((byte)local_200 & 0x8f) == 6)) &&
             (pppppiVar17 = (int *****)local_1fc, pppppuStack_294 = local_1fc,
             ((uint)local_200 >> 6 & 1) != 0)) {
            pppppuStack_294 = (undefined1 *****)*local_1fc;
            pppppiVar17 = (int *****)pppppuStack_294;
          }
          ppppiStack_2e8 = (int ****)&uStack_1ec;
          uStack_1ec = 0;
          ppppuStack_1e8 = (undefined1 ****)0x0;
          pppppiStack_2ec = (int *****)0x108f5e0b;
          FUN_11a98a70();
          if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
            pppppiStack_2ec = (int *****)&pppiStack_28c;
            pppiStack_28c = (int ***)0x0;
            piStack_288 = (int *)0x0;
            ppppiStack_284 = (int ****)0x0;
            ppppiStack_2f0 = (int ****)0x108f5e3c;
            CLeagueInfo__CollectLeagueScheduleEntries();
            uVar18 = 0;
            iVar5 = (int)pppiStack_28c - (int)piStack_290 >> 0x1f;
            if (((int)pppiStack_28c - (int)piStack_290) / 0x18 + iVar5 != iVar5) {
              iVar5 = 0;
              do {
                ppppiStack_2f0 = (int ****)0x0;
                pppppuStack_2f4 = (undefined1 *****)0x0;
                pppppuStack_2fc = &ppppuStack_274;
                ppppuStack_274 = (undefined1 ****)0x0;
                pppppuStack_270 = (undefined1 *****)0x0;
                pppppiStack_300 = (int *****)0x108f5e93;
                pppppuStack_2f8 = (undefined1 *****)pppppiVar17;
                FUN_11a98de0();
                pppppiStack_300 = *(int ******)(iVar5 + (int)piStack_2a0);
                pppppiStack_304 = (int *****)0x11dd7e14;
                uStack_308 = (char *)0x108f5eaa;
                FUN_104d1550();
                uStack_308 = (char *)((int)piStack_2a0 + iVar5 + 0x10);
                pppppiStack_30c = (int *****)0x11dd7dfc;
                auStack_310 = (undefined1  [4])0x108f5ec7;
                FUN_104d1790();
                auStack_310 = (undefined1  [4])((int)piStack_2a0 + iVar5 + 0x14);
                ppppiStack_314 = (int ****)0x11dd7e3c;
                pppppiStack_318 = (int *****)0x108f5ee4;
                FUN_104d1790();
                pppppiStack_318 = *(int ******)(iVar5 + 8 + (int)piStack_2a0);
                pppppiStack_31c = (int *****)0x11dd7e24;
                auStack_320 = (undefined1  [4])0x108f5eff;
                FUN_104d1550();
                pppppiStack_300 = (int *****)0x108f5f07;
                pppiStack_28c = (int ***)FUN_108f2fb0();
                iVar6 = 0;
                if (0 < (int)pppiStack_28c) {
                  do {
                    pppppiStack_304 = (int *****)0x108f5f1b;
                    pppppiStack_300 = (int *****)iVar6;
                    iVar16 = FUN_108f2f20();
                    if ((iVar16 != 0) &&
                       (*(int *)(iVar16 + 0x10) == *(int *)(iVar5 + (int)piStack_2a0))) {
                      pppppiStack_300 = (int *****)apppppiStack_ec;
                      apppppiStack_ec[0] = (int *****)((uint)apppppiStack_ec[0] & 0xffffff00);
                      pppppiStack_304 = (int *****)0x108f5f5d;
                      pppppiStack_dc = pppppiStack_300;
                      pppppiStack_d8 = pppppiStack_300;
                      FUN_100e5aa0();
                      pppppiStack_304 = pppppiStack_dc;
                      uStack_308 = "noticeLeagueName";
                      pppppiStack_30c = (int *****)0x108f5f76;
                      FUN_104d1670();
                      if (((int ******)pppppiStack_d8 != apppppiStack_ec) &&
                         ((int ******)pppppiStack_d8 != (int ******)0x0)) {
                        pppppiStack_300 = pppppiStack_d8;
                        pppppiStack_304 = (int *****)0x108f5f95;
                        FUN_10c3d5d0();
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (int)pppiStack_28c);
                }
                pppppiStack_300 = (int *****)0x108f5f9d;
                pppiStack_28c = (int ***)FUN_108f3180();
                iVar6 = 0;
                local_2a8 = 0;
                if (0 < (int)pppiStack_28c) {
                  do {
                    pppppiStack_304 = (int *****)0x108f5fb6;
                    pppppiStack_300 = (int *****)iVar6;
                    iVar16 = FUN_108f30f0();
                    if ((iVar16 != 0) &&
                       (*(int *)(iVar16 + 0x14) == *(int *)(iVar5 + 0xc + (int)piStack_2a0))) {
                      local_2a8 = local_2a8 + 1;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (int)pppiStack_28c);
                }
                pppppiStack_300 = (int *****)(uint)(local_2a8 < 2);
                pppppiStack_304 = (int *****)0x11dd7e50;
                uStack_308 = (char *)0x108f5ffc;
                FUN_104d15e0();
                pppppiStack_300 = &ppppiStack_284;
                pppppiStack_304 = (int *****)local_1fc;
                uStack_308 = (char *)0x108f601a;
                (**(code **)(*piStack_204 + 0x3c))();
                if (((uint)pppppuStack_270 >> 6 & 1) != 0) {
                  pppppuStack_2f4 = &ppppuStack_274;
                  ppppiStack_2f0 = ppppiStack_26c;
                  pppppuStack_2f8 = (undefined1 *****)0x108f603a;
                  (*(code *)(*ppppuStack_274)[2])();
                }
                iVar5 = iVar5 + 0x18;
                uVar18 = uVar18 + 1;
                pppppiVar17 = (int *****)pppppuStack_29c;
              } while (uVar18 < (uint)(((int)pppiStack_28c - (int)piStack_290) / 0x18));
            }
            ppppiStack_2f0 = (int ****)0x108f6074;
            FUN_104e9b40();
          }
          pppppiStack_2ec = (int *****)&local_1f0;
          ppppiStack_2f0 = (int ****)0x11dd7e84;
          pppppuStack_2f4 = (undefined1 *****)0x108f608d;
          FUN_104d12b0();
          if ((uStack_1b4 >> 6 & 1) != 0) {
            ppiStack_2b8 = &piStack_1b8;
            ppppuStack_2b4 = ppppuStack_1b0;
            ppppiStack_2bc = (int ****)0x108f60b9;
            (**(code **)(*piStack_1b8 + 8))();
            piStack_1b8 = (int *)0x0;
          }
          uStack_1b4 = 0;
          if ((uStack_19c >> 6 & 1) != 0) {
            ppiStack_2b8 = &piStack_1a0;
            ppppuStack_2b4 = ppppuStack_198;
            ppppiStack_2bc = (int ****)0x108f60f8;
            (**(code **)(*piStack_1a0 + 8))();
            piStack_1a0 = (int *)0x0;
          }
          uStack_19c = 0;
          if ((uStack_1cc >> 6 & 1) != 0) {
            ppiStack_2b8 = &piStack_1d0;
            ppppuStack_2b4 = ppppuStack_1c8;
            ppppiStack_2bc = (int ****)0x108f6137;
            (**(code **)(*piStack_1d0 + 8))();
            piStack_1d0 = (int *)0x0;
          }
          uStack_1cc = 0;
        }
      }
    }
    if (((uint)local_1fc >> 6 & 1) != 0) {
      ppiStack_2b8 = &local_200;
      ppppuStack_2b4 = local_1f8;
      ppppiStack_2bc = (int ****)0x108f6176;
      (**(code **)(*local_200 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



