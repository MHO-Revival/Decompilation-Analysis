/* ===== FUN_104f9760 @ 104f9760  size=82 ===== */
// strings:
//   "WildHunt"

/* [RE-AUTO c0]
   strings:
     ""WildHunt"" */

undefined4 __fastcall FUN_104f9760(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
LAB_104f97a9:
    return *(undefined4 *)(param_1 + 0x20);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x260fc) != 0)) {
      uVar3 = FUN_1122b8f0("WildHunt");
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      goto LAB_104f97a9;
    }
  }
  return 0;
}



/* ===== FUN_109627c0 @ 109627c0  size=5414 ===== */
// calls: CPlayer::GetHuntRankOrCount, CLoadingTipsGroupInfo::GetManager, CInfoManager::FindByName, rand, CLoadingTipsDataInfo::GetManager, _time64, COperationActivityGroupInfo::GetInfoManager, COperationActivityDataInfo::GetInfoManager
// strings:
//   "CLoadingTipsGroupInfo"
//   "CLoadingTipsDataInfo"
//   "tipsString"
//   "COperationActivityGroupInfo"
//   "hasOperationData"
//   "COperationActivityDataInfo"
//   "loadingOperationPath"
//   "hasLoadingNewMapData"
//   "loadingNewMapPath"
//   "LOADING_ANIM_DATA_CLASSNAME"
//   "gameLoadingElementPic"
//   "gameLoadingElementTitle"
//   "gameLoadingElementDesc"
//   "arrayElementData"
//   "specialText"
//   "loadingAnimStyle"
//   "loadingCharImgPath"
//   "levelMainBGPath"
//   "xHunter"
//   "wildhunt"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CLoadingTipsGroupInfo::GetManagers, rand, CLoadingTipsDataInfo::GetManagers, _time64,
   COperationActivityGroupInfo::GetManagers, COperationActivityDataInfo::GetManagers
   strings:
     ""CLoadingTipsGroupInfo""
     ""CLoadingTipsDataInfo""
     ""tipsString""
     ""COperationActivityGroupInfo""
     ""hasOperationData""
     ""COperationActivityDataInfo""
     ""loadingOperationPath""
     ""hasLoadingNewMapData""
     ""loadingNewMapPath""
     ""LOADING_ANIM_DATA_CLASSNAME"" */

void FUN_109627c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined4 uVar8;
  uint extraout_ECX;
  uint uVar9;
  int unaff_EBX;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  char cVar17;
  bool bVar18;
  undefined4 *puStack_1d0;
  int *piStack_1cc;
  undefined4 uStack_1c8;
  char *pcStack_1c4;
  undefined4 ***pppuStack_1c0;
  undefined4 ***pppuStack_1bc;
  undefined4 ***pppuStack_1b8;
  char *pcStack_1b4;
  undefined4 *puStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  int ***pppiStack_1a4;
  char *pcStack_1a0;
  char *pcStack_19c;
  char *pcStack_198;
  undefined4 uStack_194;
  uint *puStack_190;
  undefined ***pppuStack_18c;
  int **ppiStack_188;
  undefined **ppuStack_174;
  undefined1 auStack_170 [4];
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int iStack_15c;
  int *local_158;
  uint local_154;
  uint *local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 *local_13c;
  uint *puStack_138;
  uint *puStack_134;
  uint *puStack_130;
  undefined ***pppuStack_12c;
  __time64_t a_Stack_128 [2];
  int *piStack_118;
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  int *piStack_f0;
  byte bStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 *puStack_e0;
  undefined2 auStack_dc [2];
  char acStack_d8 [8];
  undefined4 **ppuStack_d0;
  undefined4 **ppuStack_cc;
  undefined1 auStack_c8 [4];
  undefined4 **ppuStack_c4;
  char acStack_c0 [4];
  undefined4 **ppuStack_bc;
  undefined4 ***pppuStack_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  char *pcStack_a0;
  char *pcStack_9c;
  int *piStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  char acStack_60 [4];
  int **ppiStack_5c;
  int **ppiStack_58;
  int **ppiStack_54;
  uint uStack_50;
  undefined **ppuStack_4c;
  undefined **appuStack_48 [2];
  uint *puStack_40;
  uint *puStack_3c;
  undefined2 auStack_38 [16];
  undefined2 *puStack_18;
  undefined2 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppuStack_174;
  local_104 = param_4[1];
  local_fc = param_4[3];
  local_100 = param_4[2];
  local_f8[0] = param_4[4];
  local_160 = param_2;
  local_13c = param_4;
  local_108 = (int *)0x0;
  if ((local_104 >> 6 & 1) != 0) {
    local_108 = (int *)*param_4;
    ppiStack_188 = &local_108;
    pppuStack_18c = (undefined ***)0x10962835;
    (**(code **)(*local_108 + 4))();
  }
  local_154 = param_4[7];
  local_14c = param_4[9];
  local_150 = (uint *)param_4[8];
  local_148 = param_4[10];
  local_158 = (int *)0x0;
  if ((local_154 >> 6 & 1) != 0) {
    local_158 = (int *)param_4[6];
    ppiStack_188 = &local_158;
    pppuStack_18c = (undefined ***)0x10962873;
    (**(code **)(*local_158 + 4))();
  }
  if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
    iVar10 = param_4[0xe];
  }
  else {
    iVar10 = -0x21524151;
  }
  iVar13 = 0;
  iStack_168 = iVar10;
  iVar3 = FUN_10d17440();
  if (iVar3 != 0) {
    iVar3 = FUN_10d17440();
    if ((*(int *)(iVar3 + 4) != 0) &&
       (piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x3c), piVar4 != (int *)0x0)) {
      iVar13 = (**(code **)(*piVar4 + 0x28))();
    }
  }
  iStack_15c = 0;
  uStack_16c = 0;
  if (iVar13 != 0) {
    iStack_15c = CPlayer__GetHuntRankOrCount();
  }
  uStack_164 = 0;
  ppiStack_188 = (int **)0x109628e1;
  iVar3 = FUN_107d7930();
  if ((iVar3 != 0) && (0 < iVar10)) {
    uStack_16c = *(uint *)(iVar3 + 0x20);
    uStack_164 = *(undefined4 *)(iVar3 + 0x14);
  }
  puVar11 = (uint *)0x0;
  puVar14 = (uint *)0x0;
  puStack_138 = (uint *)0x0;
  puStack_134 = (uint *)0x0;
  puStack_130 = (uint *)0x0;
  ppiStack_188 = (int **)0x10962912;
  piVar4 = (int *)FUN_10968700();
  pppuStack_12c = (undefined ***)(**(code **)(*piVar4 + 0x28))();
  ppuStack_174 = (undefined **)0x0;
  puVar12 = puVar11;
  if (0 < (int)pppuStack_12c) {
    ppuVar15 = (undefined **)0x0;
    do {
      ppuStack_174 = &PTR_FUN_11ddd664;
      puVar5 = (undefined4 *)CLoadingTipsGroupInfo__GetManager();
      puVar6 = (undefined *)*puVar5;
      if (puVar6 == (undefined *)0x0) {
        pppuStack_18c = &ppuStack_174;
        ppiStack_188 = (int **)0x11ddd9c8;
        puStack_190 = (uint *)0x10962959;
        puVar6 = (undefined *)CInfoManager__FindByName();
        if (puVar6 == (undefined *)0x0) {
          if ((DAT_123c01b0 & 1) == 0) {
            DAT_123c01b8 = 0;
            DAT_123c01c8 = 0;
            DAT_123c01cc = 0;
            _DAT_123c01d0 = 0;
            uRam123c01d4 = 0;
            DAT_123c01b0 = DAT_123c01b0 | 1;
            _DAT_123c01b4 = &PTR_FUN_11ddd6e8;
            _DAT_123c01d8 = _DAT_11de9ae0;
            uRam123c01dc = _UNK_11de9ae4;
            uRam123c01e0 = _UNK_11de9ae8;
            uRam123c01e4 = _UNK_11de9aec;
            DAT_123c01e8 = 1;
            ppiStack_188 = (int **)0x109629c1;
            DAT_123c01bc = puVar6;
            _DAT_123c01c0 = puVar6;
            _DAT_123c01c4 = puVar6;
            FUN_11a8911f();
          }
          puVar6 = &DAT_123c01b4;
        }
      }
      ppuStack_174 = &PTR_FUN_11da54a8;
      ppuVar16 = ppuVar15;
      if (((((-1 < (int)puVar11) &&
            ((int)puVar11 < *(int *)(puVar6 + 0x18) - *(int *)(puVar6 + 0x14) >> 2)) &&
           (iVar10 = *(int *)(*(int *)(puVar6 + 0x14) + (int)puVar11 * 4), iVar10 != 0)) &&
          ((*(int *)(iVar10 + 0x18) <= iStack_15c && (iStack_15c <= *(int *)(iVar10 + 0x1c))))) &&
         ((*(uint *)(iVar10 + 0x14) == 0 || (*(uint *)(iVar10 + 0x14) == uStack_16c)))) {
        uStack_50 = *(uint *)(iVar10 + 0x10);
        ppuVar16 = (undefined **)((int)ppuVar15 + *(int *)(iVar10 + 0x20));
        ppuStack_4c = ppuVar15;
        appuStack_48[0] = ppuVar16;
        if (puVar14 == puStack_130) {
          puStack_190 = &uStack_50;
          pcStack_198 = (char *)0x10962a5a;
          uStack_194 = (undefined ***)puVar14;
          FUN_10968ee0();
          puVar14 = puStack_134;
        }
        else {
          *puVar14 = uStack_50;
          puVar14[1] = (uint)ppuVar15;
          puVar14[2] = (uint)ppuVar16;
          puStack_134 = puVar14 + 3;
          puVar14 = puStack_134;
        }
      }
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = puStack_138;
      param_2 = local_160;
      ppuVar15 = ppuVar16;
      ppuStack_174 = ppuVar16;
    } while ((int)puVar11 < (int)pppuStack_12c);
  }
  iVar10 = 0;
  if (0 < (int)ppuStack_174) {
    iVar10 = rand();
    iVar10 = iVar10 % (int)ppuStack_174;
  }
  for (; puVar12 != puVar14; puVar12 = puVar12 + 3) {
    if (((int)puVar12[1] <= iVar10) && (iVar10 < (int)puVar12[2])) {
      uVar9 = *puVar12;
      if (0 < (int)uVar9) {
        ppuStack_174 = &PTR_FUN_11ddd684;
        puVar5 = (undefined4 *)CLoadingTipsDataInfo__GetManager();
        puVar6 = (undefined *)*puVar5;
        if (puVar6 == (undefined *)0x0) {
          pppuStack_18c = &ppuStack_174;
          ppiStack_188 = (int **)0x11ddd9e0;
          puStack_190 = (uint *)0x10962ad9;
          puVar6 = (undefined *)CInfoManager__FindByName();
          if (puVar6 == (undefined *)0x0) {
            if ((DAT_123c02a0 & 1) == 0) {
              DAT_123c017c = 0;
              DAT_123c018c = 0;
              uRam123c0190 = 0;
              _DAT_123c0194 = 0;
              DAT_123c0198 = 0;
              DAT_123c02a0 = DAT_123c02a0 | 1;
              _DAT_123c0178 = &PTR_FUN_11ddd88c;
              DAT_123c019c = _DAT_11de9ae0;
              DAT_123c01a0 = _UNK_11de9ae4;
              uRam123c01a4 = _UNK_11de9ae8;
              DAT_123c01a8 = _UNK_11de9aec;
              DAT_123c01ac = 1;
              ppiStack_188 = (int **)0x10962b41;
              DAT_123c0180 = puVar6;
              _DAT_123c0184 = puVar6;
              _DAT_123c0188 = puVar6;
              FUN_11a8911f();
            }
            puVar6 = &DAT_123c0178;
          }
        }
        ppuStack_174 = &PTR_FUN_11da54a8;
        if ((((uVar9 != 0xffffffff) && (iVar10 = *(int *)(puVar6 + 0x28), iVar10 != 0)) &&
            (iVar3 = uVar9 - *(int *)(puVar6 + 0x30), -1 < iVar3)) &&
           (iVar3 < *(int *)(puVar6 + 0x24))) {
          iVar13 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar3 / iVar10) * 4);
          if (((iVar13 != 0) && (iVar10 = *(int *)(iVar13 + (iVar3 % iVar10) * 4), iVar10 != 0)) &&
             (iVar10 = *(int *)(iVar10 + 0x18) - *(int *)(iVar10 + 0x14) >> 3, 0 < iVar10)) {
            iVar3 = rand();
            if ((iVar3 % iVar10 < iVar10) && (-1 < iVar3 % iVar10)) {
              ppiStack_58 = (int **)auStack_68;
              auStack_68[0] = 0;
              ppiStack_188 = (int **)0x10962be0;
              ppiStack_54 = ppiStack_58;
              FUN_100e5aa0();
              ppiStack_188 = ppiStack_58;
              pppuStack_18c = (undefined ***)0x11dddb3c;
              puStack_190 = (uint *)0x10962bf7;
              FUN_104d1670();
              if ((ppiStack_54 != (int **)auStack_68) && (ppiStack_54 != (int **)0x0)) {
                ppiStack_188 = (int **)0x10962c16;
                FUN_10c3d5d0();
              }
            }
          }
        }
      }
      break;
    }
  }
  ppiStack_188 = (int **)0x10962c24;
  _time64(a_Stack_128);
  ppuStack_174 = &PTR_FUN_11ddd66c;
  piVar4 = (int *)COperationActivityGroupInfo__GetInfoManager();
  pppuVar7 = (undefined ***)*piVar4;
  if (pppuVar7 == (undefined ***)0x0) {
    pppuStack_18c = &ppuStack_174;
    ppiStack_188 = (int **)0x11ddda64;
    puStack_190 = (uint *)0x10962c4e;
    pppuVar7 = (undefined ***)CInfoManager__FindByName();
    if (pppuVar7 == (undefined ***)0x0) {
      if ((DAT_123c01ec & 1) == 0) {
        DAT_123c0104 = 0;
        DAT_123c0114 = 0;
        DAT_123c0118 = 0;
        _DAT_123c011c = 0;
        uRam123c0120 = 0;
        DAT_123c01ec = DAT_123c01ec | 1;
        DAT_123c0100 = &PTR_FUN_11ddd734;
        _DAT_123c0124 = _DAT_11de9ae0;
        uRam123c0128 = _UNK_11de9ae4;
        uRam123c012c = _UNK_11de9ae8;
        uRam123c0130 = _UNK_11de9aec;
        DAT_123c0134 = 1;
        ppiStack_188 = (int **)0x10962cb6;
        DAT_123c0108 = (int *)pppuVar7;
        _DAT_123c010c = pppuVar7;
        _DAT_123c0110 = pppuVar7;
        FUN_11a8911f();
      }
      pppuVar7 = &DAT_123c0100;
    }
  }
  ppuStack_174 = &PTR_FUN_11da54a8;
  local_160 = (*(code *)(*pppuVar7)[10])();
  iVar10 = 0;
  if (0 < local_160) {
    do {
      ppuStack_174 = &PTR_FUN_11ddd66c;
      puVar5 = (undefined4 *)COperationActivityGroupInfo__GetInfoManager();
      pppuVar7 = (undefined ***)*puVar5;
      if (pppuVar7 == (undefined ***)0x0) {
        pppuStack_18c = &ppuStack_174;
        ppiStack_188 = (int **)0x11ddda64;
        puStack_190 = (uint *)0x10962d07;
        pppuVar7 = (undefined ***)CInfoManager__FindByName();
        if (pppuVar7 == (undefined ***)0x0) {
          if ((DAT_123c01ec & 1) == 0) {
            DAT_123c0104 = 0;
            DAT_123c0114 = 0;
            DAT_123c0118 = 0;
            _DAT_123c011c = 0;
            uRam123c0120 = 0;
            DAT_123c01ec = DAT_123c01ec | 1;
            DAT_123c0100 = &PTR_FUN_11ddd734;
            _DAT_123c0124 = _DAT_11de9ae0;
            uRam123c0128 = _UNK_11de9ae4;
            uRam123c012c = _UNK_11de9ae8;
            uRam123c0130 = _UNK_11de9aec;
            DAT_123c0134 = 1;
            ppiStack_188 = (int **)0x10962d6f;
            DAT_123c0108 = (int *)pppuVar7;
            _DAT_123c010c = pppuVar7;
            _DAT_123c0110 = pppuVar7;
            FUN_11a8911f();
          }
          pppuVar7 = &DAT_123c0100;
        }
      }
      ppuStack_174 = &PTR_FUN_11da54a8;
      if ((iVar10 < 0) || ((int)pppuVar7[6] - (int)pppuVar7[5] >> 2 <= iVar10)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)pppuVar7[5][iVar10];
      }
      if (piVar4 != (int *)0x0) {
        puStack_40 = &uStack_50;
        uStack_50 = uStack_50 & 0xffffff00;
        ppiStack_188 = (int **)0x10962dc8;
        puStack_3c = puStack_40;
        FUN_100e5aa0();
        ppiStack_188 = (int **)auStack_6c;
        auStack_6c[0] = 0;
        pppuStack_18c = (undefined ***)0x10962dee;
        ppiStack_5c = ppiStack_188;
        ppiStack_58 = ppiStack_188;
        FUN_100e5aa0();
        pppuStack_18c = pppuStack_12c;
        puStack_190 = puStack_130;
        uStack_194 = (undefined ***)0x10962e09;
        cVar1 = FUN_10a1a840();
        if (cVar1 != '\0') {
          iVar10 = (**(code **)(*piVar4 + 0x18))();
          if ((ppiStack_54 != (int **)auStack_68) && (ppiStack_54 != (int **)0x0)) {
            ppiStack_188 = (int **)0x10962e80;
            FUN_10c3d5d0();
          }
          if ((puStack_3c != &uStack_50) && (puStack_3c != (uint *)0x0)) {
            ppiStack_188 = (int **)0x10962e9f;
            FUN_10c3d5d0();
          }
          if (iVar10 != 0) goto LAB_10962eab;
          break;
        }
        if ((ppiStack_54 != (int **)auStack_68) && (ppiStack_54 != (int **)0x0)) {
          ppiStack_188 = (int **)0x10962e2c;
          FUN_10c3d5d0();
        }
        if ((puStack_3c != &uStack_50) && (puStack_3c != (uint *)0x0)) {
          ppiStack_188 = (int **)0x10962e4b;
          FUN_10c3d5d0();
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_160);
  }
  iVar10 = 1;
LAB_10962eab:
  if (param_2 != 0) {
    piStack_90 = (int *)0x0;
    uStack_8c = 2;
    uStack_88 = uStack_88 & 0xffffff00;
    ppiStack_188 = &piStack_90;
    pppuStack_18c = (undefined ***)0x11dddb48;
    puStack_190 = local_150;
    uStack_194 = (undefined ***)0x10962ef9;
    (**(code **)(*local_158 + 0x14))();
    if ((uStack_8c >> 6 & 1) != 0) {
      ppiStack_188 = &piStack_90;
      pppuStack_18c = (undefined ***)0x10962f22;
      (**(code **)(*piStack_90 + 8))();
    }
  }
  if (0 < iVar10) {
    ppuStack_174 = &PTR_FUN_11ddd674;
    puVar5 = (undefined4 *)COperationActivityDataInfo__GetInfoManager();
    puVar6 = (undefined *)*puVar5;
    if (puVar6 == (undefined *)0x0) {
      pppuStack_18c = &ppuStack_174;
      ppiStack_188 = (int **)0x11ddda24;
      puStack_190 = (uint *)0x10962f51;
      puVar6 = (undefined *)CInfoManager__FindByName();
      if (puVar6 == (undefined *)0x0) {
        if ((DAT_123c0138 & 1) == 0) {
          DAT_123c0140 = 0;
          DAT_123c0150 = 0;
          uRam123c0154 = 0;
          _DAT_123c0158 = 0;
          DAT_123c015c = 0;
          DAT_123c0138 = DAT_123c0138 | 1;
          _DAT_123c013c = &PTR_FUN_11ddd69c;
          DAT_123c0160 = _DAT_11de9ae0;
          DAT_123c0164 = _UNK_11de9ae4;
          uRam123c0168 = _UNK_11de9ae8;
          DAT_123c016c = _UNK_11de9aec;
          DAT_123c0170 = 1;
          ppiStack_188 = (int **)0x10962fb9;
          DAT_123c0144 = puVar6;
          _DAT_123c0148 = puVar6;
          _DAT_123c014c = puVar6;
          FUN_11a8911f();
        }
        puVar6 = &DAT_123c013c;
      }
    }
    ppuStack_174 = &PTR_FUN_11da54a8;
    if ((((iVar10 != -1) && (iVar3 = *(int *)(puVar6 + 0x28), iVar3 != 0)) &&
        (iVar10 = iVar10 - *(int *)(puVar6 + 0x30), -1 < iVar10)) &&
       (iVar10 < *(int *)(puVar6 + 0x24))) {
      iVar13 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar10 / iVar3) * 4);
      if (((iVar13 != 0) && (iVar10 = *(int *)(iVar13 + (iVar10 % iVar3) * 4), iVar10 != 0)) &&
         (iVar3 = (*(int *)(iVar10 + 0x18) - *(int *)(iVar10 + 0x14)) / 0x1c, 0 < iVar3)) {
        iVar13 = rand();
        uVar9 = iVar13 % iVar3;
        if ((-1 < (int)uVar9) &&
           (uVar9 < (uint)((*(int *)(iVar10 + 0x18) - *(int *)(iVar10 + 0x14)) / 0x1c))) {
          iVar10 = *(int *)(iVar10 + 0x14);
          ppiStack_188 = (int **)0x11dddb48;
          pppuStack_18c = (undefined ***)0x10963067;
          FUN_104d15e0();
          pppuStack_18c = *(undefined ****)(iVar10 + 0x18 + uVar9 * 0x1c);
          puStack_190 = (uint *)0x11dddab0;
          uStack_194 = (undefined ***)0x10963084;
          FUN_104d1670();
        }
      }
    }
  }
  ppiStack_188 = (int **)0x11dddac8;
  pppuStack_18c = (undefined ***)0x10963099;
  FUN_104d15e0();
  ppiStack_188 = (int **)0x109630a1;
  piVar4 = (int *)FUN_10968af0();
  local_160 = (**(code **)(*piVar4 + 0x28))();
  iVar10 = 0;
  ppuStack_174 = (undefined **)CONCAT31(ppuStack_174._1_3_,1);
  if (0 < local_160) {
    do {
      ppiStack_188 = (int **)0x109630c6;
      iVar3 = FUN_10968af0();
      if (((-1 < iVar10) && (iVar10 < *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 2)) &&
         (piVar4 = *(int **)(*(int *)(iVar3 + 0x14) + iVar10 * 4), piVar4 != (int *)0x0)) {
        iVar3 = (**(code **)(*piVar4 + 0x18))();
        if (iVar3 == iStack_168) {
          ppiStack_188 = (int **)0x11dddac8;
          pppuStack_18c = (undefined ***)0x1096310f;
          FUN_104d15e0();
          pppuStack_18c = (undefined ***)piVar4[10];
          puStack_190 = (uint *)0x11ddda80;
          uStack_194 = (undefined ***)0x10963122;
          FUN_104d1670();
          puStack_18 = auStack_38;
          auStack_38[0] = 0;
          ppiStack_188 = (int **)0x10963154;
          puStack_14 = puStack_18;
          FUN_100e5b60();
          ppiStack_188 = (int **)puStack_18;
          pppuStack_18c = (undefined ***)0x11dddb3c;
          puStack_190 = (uint *)0x1096316b;
          FUN_104d1700();
          if ((puStack_14 != auStack_38) && (puStack_14 != (undefined2 *)0x0)) {
            ppiStack_188 = (int **)0x1096318a;
            FUN_10c3d5d0();
          }
          ppuStack_174 = (undefined **)((uint)ppuStack_174 & 0xffffff00);
          break;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_160);
  }
  ppiStack_188 = (int **)acStack_d8;
  acStack_d8[0] = '\0';
  acStack_d8[1] = '\0';
  acStack_d8[2] = '\0';
  acStack_d8[3] = '\0';
  cVar17 = ((byte)local_154 & 0x8f) == 10;
  acStack_d8[4] = '\0';
  acStack_d8[5] = '\0';
  acStack_d8[6] = '\0';
  acStack_d8[7] = '\0';
  pppuStack_18c = (undefined ***)0x11ddda94;
  puStack_190 = local_150;
  uStack_194 = (undefined ***)0x109631da;
  local_160._0_1_ = cVar17;
  cVar1 = (**(code **)(*local_158 + 0x10))();
  uStack_194 = (undefined ***)extraout_ECX;
  pcStack_19c = (char *)(undefined4 *)0x0;
  if (((cVar1 != '\0') && (uStack_194 = (undefined ***)uStack_e4, ((byte)uStack_e4 & 0x8f) == 6)) &&
     (uStack_194 = (undefined ***)(uStack_e4 >> 6), pcStack_19c = (char *)puStack_e0,
     ((uint)uStack_194 & 1) != 0)) {
    pcStack_19c = (char *)*puStack_e0;
  }
  uStack_16c = uStack_16c & 0xffffff00;
  pcStack_198 = (char *)0x10963215;
  iVar10 = FUN_10968c40();
  if ((unaff_EBX != -1) &&
     ((((unaff_EBX != 0 || (*(int *)(iVar10 + 0x30) == 0)) && (*(int *)(iVar10 + 0x28) != 0)) &&
      ((iVar3 = unaff_EBX - *(int *)(iVar10 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar10 + 0x24))
       ))))) {
    iVar13 = *(int *)(*(int *)(iVar10 + 0x20) + (iVar3 / *(int *)(iVar10 + 0x28)) * 4);
    if ((iVar13 != 0) && (*(int *)(iVar13 + (iVar3 % *(int *)(iVar10 + 0x28)) * 4) != 0)) {
      uStack_194 = (undefined ***)0x0;
      pcStack_198 = (char *)0x0;
      pcStack_1a0 = acStack_60;
      uStack_16c = CONCAT31(uStack_16c._1_3_,1);
      cVar17 = '\0';
      acStack_60[0] = '\0';
      acStack_60[1] = '\0';
      acStack_60[2] = '\0';
      acStack_60[3] = '\0';
      ppiStack_5c = (int **)0x0;
      pppiStack_1a4 = (int ***)0x109632a7;
      FUN_11a98de0();
      iVar10 = *(int *)((int)pppuStack_18c + 0x14);
      pcStack_1a8 = (char *)0x109632b4;
      iVar3 = FUN_10968d90();
      if ((((iVar10 != -1) && ((iVar10 != 0 || (*(int *)(iVar3 + 0x30) == 0)))) &&
          (*(int *)(iVar3 + 0x28) != 0)) &&
         ((iVar10 = iVar10 - *(int *)(iVar3 + 0x30), -1 < iVar10 &&
          (iVar10 < *(int *)(iVar3 + 0x24))))) {
        iVar13 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar10 / *(int *)(iVar3 + 0x28)) * 4);
        if ((iVar13 != 0) &&
           (iVar10 = *(int *)(iVar13 + (iVar10 % *(int *)(iVar3 + 0x28)) * 4), iVar10 != 0)) {
          if (((byte)*(uint *)(iStack_15c + 0x4c) & 0x8f) == 6) {
            ppiStack_188 = *(int ***)(iStack_15c + 0x50);
            if ((*(uint *)(iStack_15c + 0x4c) >> 6 & 1) != 0) {
              ppiStack_188 = (int **)*ppiStack_188;
            }
            if (ppiStack_188 != (int **)0x0) goto LAB_10963340;
          }
          else {
            ppiStack_188 = (int **)&DAT_11d9d32b;
LAB_10963340:
            pppiStack_1a4 = (int ***)0x0;
            pcStack_1a8 = (char *)0x0;
            puStack_1b0 = &uStack_110;
            uStack_110 = 0;
            uStack_10c = 0;
            pcStack_1b4 = (char *)0x1096336a;
            pcStack_1ac = (char *)ppiStack_188;
            FUN_11a98de0();
            pcStack_a0 = acStack_c0;
            acStack_c0[0] = '\0';
            acStack_c0[1] = '\0';
            pcStack_1b4 = acStack_c0;
            pppuStack_1b8 = (undefined4 ***)0x10963399;
            pcStack_9c = pcStack_a0;
            FUN_100e5b60();
            pppuStack_1b8 = (undefined4 ***)pcStack_a0;
            pppuStack_1bc = (undefined4 ***)0x11dddb0c;
            pppuStack_1c0 = (undefined4 ***)0x109633b3;
            FUN_104d1700();
            if (((undefined4 ***)pcStack_a0 != &ppuStack_c4) &&
               ((undefined4 ***)pcStack_a0 != (undefined4 ***)0x0)) {
              pppuStack_1b8 = (undefined4 ***)pcStack_a0;
              pppuStack_1bc = (undefined4 ***)0x109633d2;
              FUN_10c3d5d0();
            }
            pppuStack_1b8 = &ppuStack_c4;
            ppuStack_c4._0_1_ = 0;
            pppuStack_1bc = (undefined4 ***)0x109633fd;
            pppuStack_b4 = pppuStack_1b8;
            pppuStack_b0 = pppuStack_1b8;
            FUN_100e5aa0();
            pppuStack_1bc = pppuStack_b4;
            pppuStack_1c0 = (undefined4 ***)0x11dddb24;
            pcStack_1c4 = (char *)0x10963417;
            FUN_104d1670();
            if ((pppuStack_b4 != (undefined4 ***)auStack_c8) &&
               (pppuStack_b4 != (undefined4 ***)0x0)) {
              pppuStack_1bc = pppuStack_b4;
              pppuStack_1c0 = (undefined4 ***)0x10963436;
              FUN_10c3d5d0();
            }
            pppuStack_1bc = (undefined4 ***)auStack_c8;
            auStack_c8[0] = 0;
            pppuStack_1c0 = (undefined4 ***)0x1096345f;
            pppuStack_b8 = pppuStack_1bc;
            pppuStack_b4 = pppuStack_1bc;
            FUN_100e5aa0();
            pppuStack_1c0 = pppuStack_b8;
            pcStack_1c4 = "gameLoadingElementDesc";
            uStack_1c8 = 0x10963479;
            FUN_104d1670();
            if ((pppuStack_b8 != &ppuStack_cc) && (pppuStack_b8 != (undefined4 ***)0x0)) {
              pppuStack_1c0 = pppuStack_b8;
              pcStack_1c4 = (char *)0x10963498;
              FUN_10c3d5d0();
            }
            pppuStack_1c0 = (undefined4 ***)0x0;
            pcStack_1c4 = (char *)0x0;
            uStack_1c8 = pppiStack_1a4;
            piStack_1cc = &iStack_15c;
            iStack_15c = 0;
            local_158 = (int *)0x0;
            puStack_1d0 = (undefined4 *)0x109634bf;
            FUN_11a98de0();
            ppuStack_bc = (undefined4 **)auStack_dc;
            auStack_dc[0] = 0;
            puStack_1d0 = (undefined4 *)auStack_dc;
            pppuStack_b8 = (undefined4 ***)ppuStack_bc;
            FUN_100e5b60();
            FUN_104d1700("gameLoadingElementPic",ppuStack_bc);
            if ((ppuStack_bc != &puStack_e0) && (ppuStack_bc != (undefined4 **)0x0)) {
              FUN_10c3d5d0(ppuStack_bc);
            }
            ppuStack_d0 = &puStack_e0;
            puStack_e0 = (undefined4 *)((uint)puStack_e0 & 0xffffff00);
            ppuStack_cc = ppuStack_d0;
            FUN_100e5aa0(ppuStack_d0);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementTitle",uVar8);
            FUN_100b45f0();
            puVar12 = &uStack_e4;
            FUN_100e5b40(puVar12);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementDesc",uVar8);
            FUN_100b45f0();
            FUN_104d7c40();
            FUN_11a98de0(&piStack_90,pppuStack_1c0,0,0);
            FUN_104d1790("gameLoadingElementPic",iVar10 + 0x20);
            FUN_100e5b40(local_f8);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementTitle",uVar8);
            FUN_100b45f0();
            puVar5 = &local_fc;
            FUN_100e5b40(puVar5);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementDesc",uVar8);
            FUN_100b45f0();
            FUN_104d7c40();
            FUN_11a98de0(&puStack_130,puVar12,0,0);
            FUN_104d1790("gameLoadingElementPic",iVar10 + 0x24);
            FUN_100e5b40(&uStack_110);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementTitle",uVar8);
            FUN_100b45f0();
            FUN_100e5b40(auStack_114);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementDesc",uVar8);
            FUN_100b45f0();
            FUN_104d7c40();
            FUN_11a98de0(&puStack_130,puVar5,0,0);
            FUN_104d1790("gameLoadingElementPic",iVar10 + 0x28);
            FUN_100e5b40(a_Stack_128);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementTitle",uVar8);
            FUN_100b45f0();
            FUN_100e5b40(&pppuStack_12c);
            uVar8 = FUN_100b79d0();
            FUN_104d1670("gameLoadingElementDesc",uVar8);
            FUN_100b45f0();
            FUN_104d7c40();
            cVar1 = (**(code **)(*piStack_f0 + 0x10))
                              (uStack_e8,"arrayElementData",&local_108,(bStack_ec & 0x8f) == 10);
            if (cVar1 != '\0') {
              iVar3 = FUN_108c9c10();
              if (iVar3 != 0) {
                (**(code **)(*piStack_118 + 0x3c))(uStack_110,&pcStack_1a0);
              }
              iVar3 = FUN_108c9c10();
              if (iVar3 != 0) {
                (**(code **)(*piStack_118 + 0x3c))(uStack_110,&puStack_1d0);
              }
              iVar3 = FUN_108c9c10();
              if (iVar3 != 0) {
                (**(code **)(*piStack_118 + 0x3c))(uStack_110,&uStack_e8);
              }
              iVar3 = FUN_108c9c10();
              if (iVar3 != 0) {
                (**(code **)(*piStack_118 + 0x3c))(uStack_110,auStack_170);
              }
              iVar3 = FUN_108c9c10();
              if (iVar3 != 0) {
                (**(code **)(*piStack_118 + 0x3c))(uStack_110,&local_158);
              }
            }
            FUN_104d7c10();
            FUN_104d7c10();
            FUN_104d7c10();
            FUN_104d7c10();
            FUN_104d7c10();
            FUN_104d7c10();
          }
          pppiStack_1a4 = &ppiStack_58;
          pcStack_1a8 = (char *)0x10963927;
          FUN_100e5b40();
          pcStack_1a8 = (char *)0x1096392e;
          pcStack_1a8 = (char *)FUN_100b79d0();
          pcStack_1ac = "specialText";
          puStack_1b0 = (undefined4 *)0x10963942;
          FUN_104d1670();
          pcStack_1a8 = (char *)0x10963951;
          FUN_100b45f0();
          pcStack_1a8 = *(char **)(iVar10 + 0x14);
          pcStack_1ac = "loadingAnimStyle";
          puStack_1b0 = (undefined4 *)0x10963967;
          FUN_104d1550();
          puStack_1b0 = (undefined4 *)(iVar10 + 0x2c);
          pcStack_1b4 = "loadingCharImgPath";
          pppuStack_1b8 = (undefined4 ***)0x1096397e;
          FUN_104d1790();
          uStack_194 = (undefined ***)((uint)uStack_194 & 0xff);
          if (*(int *)(iVar10 + 0x14) == 0) {
            uStack_194 = (undefined ***)0x1;
          }
        }
      }
      pppiStack_1a4 = &ppiStack_58;
      pcStack_1a8 = (char *)0x109639b3;
      FUN_100e5b40();
      pcStack_1a8 = (char *)0x109639ba;
      pcStack_1a8 = (char *)FUN_100b79d0();
      pcStack_1ac = "levelMainBGPath";
      puStack_1b0 = (undefined4 *)0x109639ce;
      FUN_104d1670();
      pcStack_1a8 = (char *)0x109639dd;
      FUN_100b45f0();
      if ((unaff_EBX == 0x2bf85) || (unaff_EBX == 0x2bfe9)) {
        uStack_194 = (undefined ***)((uint)uStack_194 & 0xffffff);
        puStack_190 = (uint *)((uint)puStack_190 & 0xffffff00);
        pcStack_1a8 = (char *)0x10963a00;
        iVar10 = FUN_10962490();
        if (iVar10 != 0) {
          pcStack_1a8 = (char *)0x10963a0b;
          uVar2 = FUN_109de3d0();
          uStack_194 = (undefined ***)CONCAT13(uVar2,(undefined3)uStack_194);
        }
        pcStack_1a8 = (char *)0x10963a14;
        iVar10 = FUN_104d91d0();
        if (iVar10 == 0) {
          cVar1 = (char)puStack_190;
        }
        else {
          pcStack_1a8 = (char *)0x10963a1f;
          iVar10 = FUN_104f9690();
          cVar1 = (char)puStack_190;
          if (iVar10 != 0) {
            cVar1 = '\x01';
          }
        }
        if (uStack_194._3_1_ == '\0') {
          if (cVar1 != '\0') {
            pcStack_1a8 = "%\x01";
            uVar9 = rand();
            uVar9 = uVar9 & 0x80000001;
            bVar18 = uVar9 == 0;
            if ((int)uVar9 < 0) {
              bVar18 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
            }
LAB_10963a8b:
            if (bVar18) {
              pcStack_1a8 = "wildhunt";
              goto LAB_10963a92;
            }
          }
        }
        else {
          if (cVar1 == '\0') {
            pcStack_1a8 = "%\x01";
            uVar9 = rand();
            uVar9 = uVar9 & 0x80000001;
            bVar18 = uVar9 == 0;
            if ((int)uVar9 < 0) {
              bVar18 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (!bVar18) goto LAB_10963aa8;
            pcStack_1a8 = "xHunter";
          }
          else {
            pcStack_1a8 = (char *)0x10963a42;
            iVar10 = rand();
            if (iVar10 % 3 != 0) {
              bVar18 = iVar10 % 3 == 1;
              goto LAB_10963a8b;
            }
            pcStack_1a8 = "xHunter";
          }
LAB_10963a92:
          pcStack_1ac = "levelMainBGPath";
          puStack_1b0 = (undefined4 *)0x10963aa5;
          FUN_104d1670();
        }
      }
LAB_10963aa8:
      pcStack_1a8 = auStack_74;
      pcStack_1ac = "loadingAnimData";
      puStack_1b0 = (undefined4 *)0x10963abe;
      FUN_104d12b0();
      pcStack_1a8 = (char *)0x10963acd;
      FUN_104d7c10();
    }
  }
  uStack_194 = (undefined ***)uStack_16c;
  pcStack_198 = "loadingTutorialShow";
  pcStack_19c = (char *)0x10963ae1;
  FUN_104d15e0();
  uStack_194 = (undefined ***)0x10963ae9;
  FUN_116cc020();
  uStack_194 = (undefined ***)0x10963af0;
  uStack_194 = (undefined ***)FUN_10962450();
  pcStack_198 = "flyingTime";
  pcStack_19c = "j";
  FUN_104d1550();
  pcStack_19c = (char *)0x0;
  pcStack_1a0 = "canMoveAeroBoat";
  pppiStack_1a4 = (int ***)0x10963b13;
  FUN_104d15e0();
  uStack_194 = (undefined ***)local_150[8];
  if ((((0 < (int)uStack_194) && (0 < (int)ppuStack_174)) &&
      (uStack_194 != (undefined ***)ppuStack_174)) && (cVar17 != '\0')) {
    pcStack_198 = (char *)0x10963b4a;
    iVar10 = FUN_107caf90();
    if (iVar10 != 0) {
      uStack_194 = (undefined ***)0x10963b5e;
      uStack_194 = (undefined ***)FUN_10962420();
      pcStack_198 = "sourcePosX";
      pcStack_19c = (char *)0x10963b6f;
      FUN_104d1550();
      uStack_194 = (undefined ***)0x10963b79;
      uStack_194 = (undefined ***)FUN_10962430();
      pcStack_198 = "sourcePosY";
      pcStack_19c = (char *)0x10963b8a;
      FUN_104d1550();
    }
    uStack_194 = (undefined ***)ppuStack_174;
    pcStack_198 = (char *)0x10963b97;
    iVar3 = FUN_107caf90();
    if (iVar3 != 0) {
      uStack_194 = (undefined ***)0x10963ba7;
      uStack_194 = (undefined ***)FUN_10962420();
      pcStack_198 = "destPosX";
      pcStack_19c = (char *)0x10963bb8;
      FUN_104d1550();
      uStack_194 = (undefined ***)0x10963bc2;
      uStack_194 = (undefined ***)FUN_10962430();
      pcStack_198 = "destPosY";
      pcStack_19c = (char *)0x10963bd3;
      FUN_104d1550();
      uStack_194 = appuStack_48;
      pcStack_198 = (char *)0x10963be5;
      FUN_107caf80();
      pcStack_198 = (char *)0x10963bec;
      FUN_100e5b40();
      pcStack_198 = (char *)0x10963bf3;
      pcStack_198 = (char *)FUN_100b79d0();
      pcStack_19c = "mapName";
      pcStack_1a0 = (char *)0x10963c04;
      FUN_104d1670();
      pcStack_198 = (char *)0x10963c13;
      FUN_100b45f0();
    }
    if ((iVar10 != 0) && (iVar3 != 0)) {
      uStack_194 = (undefined ***)0x10963c26;
      iVar10 = FUN_10962420();
      if (iVar10 < 1) {
        uStack_194 = (undefined ***)0x10963c33;
        iVar10 = FUN_10962420();
        if (iVar10 < 1) goto LAB_10963c66;
      }
      uStack_194 = (undefined ***)0x10963c3e;
      iVar10 = FUN_10962420();
      if (iVar10 < 1) {
        uStack_194 = (undefined ***)0x10963c49;
        iVar10 = FUN_10962420();
        if (iVar10 < 1) goto LAB_10963c66;
      }
      uStack_194 = (undefined ***)0x1;
      pcStack_198 = "canMoveAeroBoat";
      pcStack_19c = (char *)0x10963c5f;
      FUN_104d15e0();
    }
  }
LAB_10963c66:
  ppuVar15 = ppuStack_174;
  if (((local_150[8] == 0) && (ppuStack_174 == (undefined **)0x0)) && (unaff_EBX == 0)) {
    pcStack_198 = "hasLoadingNewMapData";
    pcStack_19c = (char *)0x10963c89;
    FUN_104d15e0();
    pcStack_19c = "MHOL_HEAD";
    pcStack_1a0 = "loadingNewMapPath";
    pppiStack_1a4 = (int ***)0x10963c9e;
    FUN_104d1670();
  }
  local_150[8] = (uint)ppuVar15;
  uStack_194 = (undefined ***)0x10963cb4;
  FUN_104d7c10();
  uStack_194 = (undefined ***)0x10963cbd;
  FUN_10965d80();
  uStack_194 = (undefined ***)0x10963cc6;
  FUN_104d7c10();
  uStack_194 = (undefined ***)0x10963ccf;
  FUN_104d7c10();
  ppiStack_188 = (int **)0x10963ce0;
  FUN_11a89daa();
  return;
}



/* ===== FUN_109d87e0 @ 109d87e0  size=683 ===== */
// strings:
//   "mh.view.NewOperationActivity.Data.ConstTableData"
//   "ServerConfigUrl"
//   "ImageUrlPrefix"
//   "ButtonImageUrl"
//   "ButtonImageUrl_WildHunt"
//   "ButtonImageUrl_WildHunt_Red"
//   "ButtonImageUrl_WildHunt_Yellow"
//   "ButtonImageUrl_WildHuntSecret_Red"
//   "ButtonImageUrl_WildHuntSecret_Yellow"

/* [RE-AUTO c0]
   strings:
     ""mh.view.NewOperationActivity.Data.ConstTableData""
     ""ServerConfigUrl""
     ""ImageUrlPrefix""
     ""ButtonImageUrl""
     ""ButtonImageUrl_WildHunt""
     ""ButtonImageUrl_WildHunt_Red""
     ""ButtonImageUrl_WildHunt_Yellow""
     ""ButtonImageUrl_WildHuntSecret_Red""
     ""ButtonImageUrl_WildHuntSecret_Yellow"" */

void FUN_109d87e0(void)

{
  int iVar1;
  undefined4 ***unaff_EBX;
  undefined4 ***unaff_EDI;
  undefined4 ***in_stack_00000018;
  undefined4 **ppuStack_74;
  char *pcStack_70;
  undefined4 **ppuStack_6c;
  char *pcStack_68;
  undefined4 **ppuStack_64;
  undefined4 **ppuStack_60;
  undefined4 **ppuStack_5c;
  undefined4 **ppuStack_58;
  undefined4 **ppuStack_54;
  undefined4 **ppuStack_50;
  undefined4 **ppuStack_4c;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_44;
  undefined4 **ppuStack_40;
  undefined4 **ppuStack_3c;
  undefined4 **ppuStack_38;
  undefined4 **ppuStack_34;
  undefined4 **ppuStack_24;
  undefined4 **ppuStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppuStack_24;
  ppuStack_34 = (undefined4 **)0x0;
  ppuStack_38 = (undefined4 ***)0x0;
  ppuStack_3c = (undefined4 **)0x11de3b70;
  ppuStack_40 = in_stack_00000018;
  ppuStack_44 = (undefined4 **)0x109d880e;
  FUN_11a98de0();
  ppuStack_44 = (undefined4 **)0x109d8813;
  iVar1 = FUN_11733fb0();
  ppuStack_24 = &ppuStack_34;
  ppuStack_44 = *(undefined4 ***)(iVar1 + 0x74);
  ppuStack_48 = *(undefined4 ***)(iVar1 + 0x78);
  ppuStack_4c = (undefined4 **)0x109d882e;
  ppuStack_20 = ppuStack_24;
  FUN_100b62c0();
  ppuStack_50 = (undefined4 **)0x11de4018;
  ppuStack_54 = (undefined4 **)0x109d8840;
  FUN_104d1670();
  if ((unaff_EBX != &ppuStack_3c) && (unaff_EBX != (undefined4 ***)0x0)) {
    ppuStack_50 = (undefined4 **)0x109d8859;
    FUN_10c3d5d0();
  }
  ppuStack_4c = *(undefined4 ***)(iVar1 + 0x8c);
  ppuStack_50 = *(undefined4 ***)(iVar1 + 0x90);
  ppuStack_54 = (undefined4 **)0x109d887b;
  FUN_100b62c0();
  ppuStack_58 = (undefined4 **)0x11de4008;
  ppuStack_5c = (undefined4 **)0x109d888d;
  FUN_104d1670();
  if ((unaff_EDI != &ppuStack_44) && (unaff_EDI != (undefined4 ***)0x0)) {
    ppuStack_58 = (undefined4 **)0x109d88a6;
    FUN_10c3d5d0();
  }
  ppuStack_54 = *(undefined4 ***)(iVar1 + 0xa4);
  ppuStack_34 = &ppuStack_44;
  ppuStack_58 = *(undefined4 ***)(iVar1 + 0xa8);
  ppuStack_5c = (undefined4 **)0x109d88c8;
  FUN_100b62c0();
  ppuStack_5c = ppuStack_38;
  ppuStack_60 = (undefined4 **)0x11de4040;
  ppuStack_64 = (undefined4 **)0x109d88da;
  FUN_104d1670();
  if (((undefined4 ***)ppuStack_38 != &ppuStack_4c) &&
     ((undefined4 ***)ppuStack_38 != (undefined4 ***)0x0)) {
    ppuStack_5c = ppuStack_38;
    ppuStack_60 = (undefined4 **)0x109d88f3;
    FUN_10c3d5d0();
  }
  ppuStack_5c = *(undefined4 ***)(iVar1 + 0xbc);
  ppuStack_3c = &ppuStack_4c;
  ppuStack_60 = *(undefined4 ***)(iVar1 + 0xc0);
  ppuStack_64 = (undefined4 **)0x109d8915;
  ppuStack_38 = ppuStack_3c;
  FUN_100b62c0();
  ppuStack_64 = ppuStack_40;
  pcStack_68 = "ButtonImageUrl_WildHunt";
  ppuStack_6c = (undefined4 **)0x109d8927;
  FUN_104d1670();
  if (((undefined4 ***)ppuStack_40 != &ppuStack_54) &&
     ((undefined4 ***)ppuStack_40 != (undefined4 ***)0x0)) {
    ppuStack_64 = ppuStack_40;
    pcStack_68 = (char *)0x109d8940;
    FUN_10c3d5d0();
  }
  ppuStack_64 = *(undefined4 ***)(iVar1 + 0xd4);
  ppuStack_44 = &ppuStack_54;
  pcStack_68 = *(char **)(iVar1 + 0xd8);
  ppuStack_6c = (undefined4 **)0x109d8962;
  ppuStack_40 = ppuStack_44;
  FUN_100b62c0();
  ppuStack_6c = ppuStack_48;
  pcStack_70 = "ButtonImageUrl_WildHunt_Red";
  ppuStack_74 = (undefined4 **)0x109d8974;
  FUN_104d1670();
  if (((undefined4 ***)ppuStack_48 != &ppuStack_5c) &&
     ((undefined4 ***)ppuStack_48 != (undefined4 ***)0x0)) {
    ppuStack_6c = ppuStack_48;
    pcStack_70 = (char *)0x109d898d;
    FUN_10c3d5d0();
  }
  ppuStack_6c = *(undefined4 ***)(iVar1 + 0xec);
  ppuStack_4c = &ppuStack_5c;
  pcStack_70 = *(char **)(iVar1 + 0xf0);
  ppuStack_74 = (undefined4 **)0x109d89af;
  ppuStack_48 = ppuStack_4c;
  FUN_100b62c0();
  ppuStack_74 = ppuStack_50;
  FUN_104d1670("ButtonImageUrl_WildHunt_Yellow");
  if (((undefined4 ***)ppuStack_50 != &ppuStack_64) &&
     ((undefined4 ***)ppuStack_50 != (undefined4 ***)0x0)) {
    ppuStack_74 = ppuStack_50;
    FUN_10c3d5d0();
  }
  ppuStack_74 = *(undefined4 ***)(iVar1 + 0x104);
  ppuStack_54 = &ppuStack_64;
  ppuStack_50 = ppuStack_54;
  FUN_100b62c0(*(undefined4 *)(iVar1 + 0x108));
  FUN_104d1670("ButtonImageUrl_WildHuntSecret_Red",ppuStack_58);
  if (((undefined4 ***)ppuStack_58 != &ppuStack_6c) &&
     ((undefined4 ***)ppuStack_58 != (undefined4 ***)0x0)) {
    FUN_10c3d5d0(ppuStack_58);
  }
  ppuStack_5c = &ppuStack_6c;
  ppuStack_58 = ppuStack_5c;
  FUN_100b62c0(*(undefined4 *)(iVar1 + 0x120),*(undefined4 *)(iVar1 + 0x11c));
  FUN_104d1670("ButtonImageUrl_WildHuntSecret_Yellow",ppuStack_60);
  if (((undefined4 ***)ppuStack_60 != &ppuStack_74) &&
     ((undefined4 ***)ppuStack_60 != (undefined4 ***)0x0)) {
    FUN_10c3d5d0(ppuStack_60);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10a63840 @ 10a63840  size=642 ===== */
// strings:
//   "Properties"
//   "bHaveBehaviorTree"
//   "bLevelActor"
//   "CatInCity"

/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""bHaveBehaviorTree""
     ""bLevelActor""
     ""CatInCity"" */

void __fastcall FUN_10a63840(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 local_24 [12];
  int *local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  char local_5;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x38))();
  }
  piVar2 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  if ((((iVar3 != 0) &&
       (cVar1 = FUN_10a68ce0("Properties",&local_14), piVar2 = local_14, cVar1 != '\0')) &&
      (cVar1 = FUN_10a68900("bHaveBehaviorTree",&local_10), cVar1 != '\0')) && (local_10 != 0)) {
    *(undefined1 *)(param_1 + 0xc4) = 1;
    local_5 = '\0';
    FUN_10a68da0("bLevelActor",&local_5);
    local_18 = *(int **)(DAT_1202e818 + 0xd0);
    if (local_18 == (int *)0x0) goto LAB_10a63ab0;
    local_14 = *(int **)(param_1 + 8);
    local_10 = local_18[0x1d];
    local_c = (undefined4 *)0x0;
    iVar3 = (**(code **)(*local_18 + 0x128))();
    puVar6 = (undefined4 *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*local_18 + 0x128))();
      iVar3 = (**(code **)(*piVar4 + 0x24))();
      if (iVar3 != 0) {
        piVar4 = (int *)(**(code **)(*local_18 + 0x128))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x24))();
        uVar5 = (**(code **)(*piVar4 + 0x38))(&local_18);
        FUN_10a72340(uVar5);
        puVar6 = local_c;
        if (local_18 != (int *)0x0) {
          piVar4 = local_18 + 1;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*local_18)(1);
            puVar6 = local_c;
          }
        }
      }
    }
    local_2c = local_3c;
    local_3c[0] = 0;
    local_28 = local_2c;
    if (*(int *)(param_1 + 0x155c) == 1) {
      iVar3 = FUN_10a60b80();
      if ((iVar3 != 0) && (iVar3 = FUN_113a23b0(), (undefined1 *)(iVar3 + 0x54) != local_3c)) {
        FUN_100d83d0(*(undefined4 *)(iVar3 + 0x68),*(undefined4 *)(iVar3 + 100));
      }
    }
    else if (*(int *)(param_1 + 0x155c) == 8) {
      local_18 = (int *)FUN_10a60b80();
      cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))();
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar1 == '\0')) {
        if (local_18 != (int *)0x0) {
          FUN_100e0410(*(undefined4 *)(local_18[0x7b4] + 0x94));
        }
      }
      else {
        FUN_100e0410("CatInCity");
      }
    }
    if (puVar6 != (undefined4 *)0x0) {
      if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
        if (local_5 == '\0') {
          puVar6[1] = puVar6[1] + 1;
          iVar3 = FUN_10a685d0(local_24,local_14,local_10,puVar6,local_3c,1);
          if (0 < *(int *)(*(int *)(iVar3 + 8) + 0x28)) {
            *(undefined1 *)(param_1 + 0x157d) = 1;
          }
        }
      }
      else {
        puVar6[1] = puVar6[1] + 1;
        if (local_5 == '\0') {
          FUN_10a68570(local_24,local_14,local_10,puVar6,local_3c,1);
        }
        else {
          FUN_10a68630();
        }
      }
    }
    if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_28);
    }
    if (puVar6 != (undefined4 *)0x0) {
      piVar4 = puVar6 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc0) + 4))();
LAB_10a63ab0:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}



/* ===== FUN_10a68450 @ 10a68450  size=95 ===== */
// strings:
//   "IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"" */

undefined4 * FUN_10a68450(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_12020970;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_100bcc20();
    *param_1 = uVar2;
    param_1[1] = iVar1;
    param_1[2] = param_2;
    if ((param_2 != 0) && ((undefined4 *)(param_2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_2 + 8) = uVar2;
      *(int *)(param_2 + 0xc) = iVar1;
      *(int *)(param_2 + 0x10) = param_2;
    }
    FUN_100b4ad0(uVar2,param_2,"IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName");
  }
  return param_1;
}



/* ===== FUN_10a68510 @ 10a68510  size=95 ===== */
// strings:
//   "IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"" */

undefined4 * FUN_10a68510(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_12020964;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_100bcc20();
    *param_1 = uVar2;
    param_1[1] = iVar1;
    param_1[2] = param_2;
    if ((param_2 != 0) && ((undefined4 *)(param_2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_2 + 8) = uVar2;
      *(int *)(param_2 + 0xc) = iVar1;
      *(int *)(param_2 + 0x10) = param_2;
    }
    FUN_100b4ad0(uVar2,param_2,"IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName");
  }
  return param_1;
}



/* ===== FUN_10a6b810 @ 10a6b810  size=147 ===== */
// strings:
//   "IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"" */

undefined4 * FUN_10a6b810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100dde50(0x2f0);
  iVar1 = DAT_12020970;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_100bcc20();
    *param_1 = uVar3;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    if ((iVar2 != 0) && ((undefined4 *)(iVar2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar2 + 0x10) = iVar2;
    }
    FUN_100b4ad0(uVar3,iVar2,"IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName");
  }
  if (iVar2 != 0) {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    FUN_10257270(*param_2,*param_3,iVar1);
  }
  return param_1;
}



/* ===== FUN_10a6b950 @ 10a6b950  size=147 ===== */
// strings:
//   "IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"" */

undefined4 * FUN_10a6b950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100dde50(800);
  iVar1 = DAT_12020964;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_100bcc20();
    *param_1 = uVar3;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    if ((iVar2 != 0) && ((undefined4 *)(iVar2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar2 + 0x10) = iVar2;
    }
    FUN_100b4ad0(uVar3,iVar2,"IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName");
  }
  if (iVar2 != 0) {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    FUN_10263ac0(*param_2,*param_3,iVar1);
  }
  return param_1;
}



/* ===== FUN_10a6c630 @ 10a6c630  size=38 ===== */
// strings:
//   "IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"" */

undefined4 * __fastcall FUN_10a6c630(undefined4 *param_1)

{
  FUN_100d6d90();
  *param_1 = &PTR_FUN_11cbefa0;
  FUN_100d6da0("IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName",param_1,1);
  FUN_100d6fd0();
  return param_1;
}



/* ===== FUN_10a6c690 @ 10a6c690  size=38 ===== */
// strings:
//   "IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName"" */

undefined4 * __fastcall FUN_10a6c690(undefined4 *param_1)

{
  FUN_100d6d90();
  *param_1 = &PTR_FUN_11cbef80;
  FUN_100d6da0("IdPtrNameSvr<class CBTLevelActor>::GetIdPtrBaseName",param_1,1);
  FUN_100d6fd0();
  return param_1;
}



/* ===== FUN_10a86ac0 @ 10a86ac0  size=750 ===== */
// strings:
//   "/Scripts/AI"
//   "value"
//   "DefaultAnger"
//   "AngerPeak"
//   "BaseDecayFactor"
//   "MaxDecayOffset"
//   "MaxAgentsIntensitySpawned"
//   "MaxEnemiesSpawned"

/* [RE-AUTO c0]
   strings:
     ""/Scripts/AI""
     ""value""
     ""DefaultAnger""
     ""AngerPeak""
     ""BaseDecayFactor""
     ""MaxDecayOffset""
     ""MaxAgentsIntensitySpawned""
     ""MaxEnemiesSpawned"" */

void FUN_10a86ac0(uint param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  float10 fVar12;
  undefined1 local_5c [20];
  undefined1 *local_48;
  undefined1 local_44 [20];
  undefined1 *local_30;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  byte *local_10;
  int *local_c;
  int local_8;
  
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_10478770();
    local_1c = local_2c;
    pcVar10 = pcVar4;
    do {
      pcVar9 = pcVar10;
      pcVar10 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    local_18 = local_1c;
    FUN_100b62c0(pcVar4,pcVar9);
    FUN_100f2140(local_5c,local_2c,"/Scripts/AI");
    if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
    FUN_10261bb0(local_44,local_5c,param_1);
    piVar5 = (int *)FUN_10478730();
    (**(code **)(*piVar5 + 0xc))(&local_c,local_30,0);
    if (local_c != (int *)0x0) {
      local_14 = (**(code **)(*local_c + 100))();
      iVar2 = local_8;
      param_1 = 0;
      if (local_14 != 0) {
        do {
          piVar5 = (int *)(**(code **)(*local_c + 0x68))(param_1);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
            cVar3 = (**(code **)(*piVar5 + 0x58))(&DAT_11dbac80,&local_10);
            if ((cVar3 != '\0') &&
               (cVar3 = (**(code **)(*piVar5 + 0x58))("value",&local_8), cVar3 != '\0')) {
              pcVar10 = "DefaultAnger";
              pbVar6 = local_10;
              do {
                bVar1 = *pbVar6;
                bVar11 = bVar1 < (byte)*pcVar10;
                if (bVar1 != *pcVar10) {
LAB_10a86bf8:
                  uVar7 = -(uint)bVar11 | 1;
                  goto LAB_10a86bfd;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar11 = bVar1 < (byte)pcVar10[1];
                if (bVar1 != pcVar10[1]) goto LAB_10a86bf8;
                pbVar6 = pbVar6 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_10a86bfd:
              if (uVar7 == 0) {
                fVar12 = (float10)FUN_10a933f0(local_8);
                *(float *)(iVar2 + 0x40) = (float)fVar12;
              }
              else {
                pcVar10 = "AngerPeak";
                pbVar6 = local_10;
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_10a86c38:
                    uVar7 = -(uint)bVar11 | 1;
                    goto LAB_10a86c3d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_10a86c38;
                  pbVar6 = pbVar6 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_10a86c3d:
                if (uVar7 == 0) {
                  fVar12 = (float10)FUN_10a933f0(local_8);
                  *(float *)(iVar2 + 0x44) = (float)fVar12;
                }
                else {
                  pcVar10 = "BaseDecayFactor";
                  pbVar6 = local_10;
                  do {
                    bVar1 = *pbVar6;
                    bVar11 = bVar1 < (byte)*pcVar10;
                    if (bVar1 != *pcVar10) {
LAB_10a86c78:
                      uVar7 = -(uint)bVar11 | 1;
                      goto LAB_10a86c7d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar11 = bVar1 < (byte)pcVar10[1];
                    if (bVar1 != pcVar10[1]) goto LAB_10a86c78;
                    pbVar6 = pbVar6 + 2;
                    pcVar10 = pcVar10 + 2;
                  } while (bVar1 != 0);
                  uVar7 = 0;
LAB_10a86c7d:
                  if (uVar7 == 0) {
                    fVar12 = (float10)FUN_10a933f0(local_8);
                    *(float *)(iVar2 + 0x54) = (float)fVar12;
                  }
                  else {
                    pcVar10 = "MaxDecayOffset";
                    pbVar6 = local_10;
                    do {
                      bVar1 = *pbVar6;
                      bVar11 = bVar1 < (byte)*pcVar10;
                      if (bVar1 != *pcVar10) {
LAB_10a86cb8:
                        uVar7 = -(uint)bVar11 | 1;
                        goto LAB_10a86cbd;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar6[1];
                      bVar11 = bVar1 < (byte)pcVar10[1];
                      if (bVar1 != pcVar10[1]) goto LAB_10a86cb8;
                      pbVar6 = pbVar6 + 2;
                      pcVar10 = pcVar10 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_10a86cbd:
                    if (uVar7 == 0) {
                      fVar12 = (float10)FUN_10a933f0(local_8);
                      *(float *)(iVar2 + 0xa4) = (float)fVar12;
                    }
                    else {
                      pcVar10 = "MaxAgentsIntensitySpawned";
                      pbVar6 = local_10;
                      do {
                        bVar1 = *pbVar6;
                        bVar11 = bVar1 < (byte)*pcVar10;
                        if (bVar1 != *pcVar10) {
LAB_10a86d00:
                          uVar7 = -(uint)bVar11 | 1;
                          goto LAB_10a86d05;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar6[1];
                        bVar11 = bVar1 < (byte)pcVar10[1];
                        if (bVar1 != pcVar10[1]) goto LAB_10a86d00;
                        pbVar6 = pbVar6 + 2;
                        pcVar10 = pcVar10 + 2;
                      } while (bVar1 != 0);
                      uVar7 = 0;
LAB_10a86d05:
                      if (uVar7 == 0) {
                        fVar12 = (float10)FUN_10a933f0(local_8);
                        *(float *)(iVar2 + 0xac) = (float)fVar12;
                      }
                      else {
                        pcVar10 = "MaxEnemiesSpawned";
                        pbVar6 = local_10;
                        do {
                          bVar1 = *pbVar6;
                          bVar11 = bVar1 < (byte)*pcVar10;
                          if (bVar1 != *pcVar10) {
LAB_10a86d40:
                            uVar7 = -(uint)bVar11 | 1;
                            goto LAB_10a86d45;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar6[1];
                          bVar11 = bVar1 < (byte)pcVar10[1];
                          if (bVar1 != pcVar10[1]) goto LAB_10a86d40;
                          pbVar6 = pbVar6 + 2;
                          pcVar10 = pcVar10 + 2;
                        } while (bVar1 != 0);
                        uVar7 = 0;
LAB_10a86d45:
                        if (uVar7 == 0) {
                          uVar8 = FUN_10a93410(local_8);
                          *(undefined4 *)(iVar2 + 0xb0) = uVar8;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*piVar5 + 8))();
          }
          param_1 = param_1 + 1;
        } while (param_1 < local_14);
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))();
      }
    }
    if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_30);
    }
    if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_48);
    }
  }
  return;
}



/* ===== FUN_10aa66e0 @ 10aa66e0  size=398 ===== */
// strings:
//   "BehaviorTreeBase"
//   "BTCtrlObject"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""BTCtrlObject"" */

undefined4 __fastcall FUN_10aa66e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_11318380();
  if (cVar1 != '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar5 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  piVar2 = (int *)(**(code **)(iVar5 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    iVar5 = **(int **)m_pThis_exref;
    uVar3 = (**(code **)(*(int *)param_1[0x15] + 0xc))();
    piVar2 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar4 != (int *)0x0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        cVar1 = FUN_104969c0(4,&local_8);
        iVar5 = *piVar4;
        piVar2 = local_8;
        if (cVar1 == '\0') {
          piVar2 = (int *)0xffffffff;
        }
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a],piVar2);
        (**(code **)(iVar5 + 0xc0))(uVar3);
        return 2;
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar5 != 0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a]);
        FUN_10b24e30(uVar3);
        return 2;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x1d4))();
    if (cVar1 != '\0') {
      param_1[0x1c] = param_1[0x1c] + 1;
      *(undefined2 *)((int)param_1 + 0x72) = 0;
      FUN_10aa6af0(3,param_1 + 0x18);
      uVar3 = FUN_11317f30();
      cVar1 = FUN_10db7340(param_1[0x18],param_1[0x1b] + param_1[0x1c],(char)param_1[0x1a],uVar3);
      if (cVar1 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}



/* ===== FUN_10aab760 @ 10aab760  size=536 ===== */
// calls: strncpy, memcpy
// strings:
//   "GmMonsterAiInfo.xml"
//   "protocol size is not enough"

/* [RE-AUTO c0]
   calls: strncpy, memcpy
   strings:
     ""GmMonsterAiInfo.xml""
     ""protocol size is not enough"" */

void FUN_10aab760(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint _Size;
  undefined4 *puVar4;
  char local_4c [16];
  char *local_3c;
  char *local_38;
  char local_34 [16];
  char *local_24;
  char *local_20;
  undefined2 *local_18;
  size_t local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_24 = local_34;
  local_34[0] = '\0';
  local_c = 0;
  local_20 = local_24;
  FUN_100e49c0();
  local_8 = (int *)0x0;
  *local_18 = 0x71;
  cVar1 = FUN_10aab980(param_1,local_34,&local_c,&local_8);
  if (cVar1 == '\0') {
    *(int *)(local_18 + 8) = local_c;
    *(undefined1 *)(local_18 + 10) = 0;
    *(char *)((int)local_18 + 0x15) = '\0';
    if (local_20 != local_24) {
      strncpy((char *)((int)local_18 + 0x15),local_20,0x7ff);
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 4))();
    if (iVar2 < 2) {
      (**(code **)(*local_8 + 0x78))("GmMonsterAiInfo.xml");
      goto LAB_10aab944;
    }
    *(int *)(local_18 + 8) = local_c;
    local_18[10] = 1;
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x74))(local_4c,0,0);
      if (local_38 == local_3c) {
        *(undefined1 *)(local_18 + 10) = 0;
        pcVar3 = "protocol size is not enough";
      }
      else {
        _Size = (int)local_3c - (int)local_38;
        pcVar3 = local_38;
        if (0x7fe < _Size) {
          *(undefined1 *)(local_18 + 10) = 2;
          local_c = 0;
          local_10 = (int)(_Size + 0x7fe) / 0x7ff + -1;
          if (0 < local_10) {
            local_14 = _Size + local_10 * -0x7ff;
            do {
              pcVar3 = local_38 + local_c;
              puVar4 = (undefined4 *)((int)local_18 + 0x15);
              for (iVar2 = 0x1ff; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar4 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                puVar4 = puVar4 + 1;
              }
              local_c = local_c + 0x7ff;
              *(undefined2 *)puVar4 = *(undefined2 *)pcVar3;
              *(char *)((int)puVar4 + 2) = pcVar3[2];
              *(undefined1 *)(local_18 + 0x40a) = 0;
              (**(code **)(**(int **)m_pThis_exref + 0x254))(local_18);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            local_10 = 0;
            _Size = local_14;
          }
          memcpy((void *)((int)local_18 + 0x15),local_38 + local_c,_Size);
          *(undefined1 *)(_Size + 0x15 + (int)local_18) = 0;
          *(undefined1 *)(local_18 + 10) = 3;
          (**(code **)(**(int **)m_pThis_exref + 0x254))(local_18);
          if ((local_38 != local_4c) && (local_38 != (char *)0x0)) {
            FUN_10c3d5d0(local_38);
          }
          goto LAB_10aab944;
        }
      }
      strncpy((char *)((int)local_18 + 0x15),pcVar3,0x7ff);
      if ((local_38 != local_4c) && (local_38 != (char *)0x0)) {
        FUN_10c3d5d0(local_38);
      }
    }
  }
  (**(code **)(**(int **)m_pThis_exref + 0x254))(local_18);
LAB_10aab944:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_100e4a80();
  if ((local_20 != local_34) && (local_20 != (char *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}



/* ===== FUN_10aacc30 @ 10aacc30  size=627 ===== */
// calls: AISystem::LoadEntityBehaviorTree_Recursive
// strings:
//   "BehaviorTree"
//   "ClientBehaviorTree"
//   "AISetting"
//   "sBTFolder"
//   "/Scripts/AI/BehaviorTree/"
//   "sBlackBoardFile"
//   "sEventBT"
//   "sFilename"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTree""
     ""ClientBehaviorTree""
     ""AISetting""
     ""sBTFolder""
     ""/Scripts/AI/BehaviorTree/""
     ""sBlackBoardFile""
     ""sEventBT""
     ""sFilename"" */

void FUN_10aacc30(undefined4 param_1,int param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined1 *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_2c = "ClientBehaviorTree";
  if ((char)param_3 == '\0') {
    local_2c = "BehaviorTree";
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x9c))();
  local_28 = (**(code **)(*piVar3 + 8))(param_1);
  if ((local_28 != 0) && (*(int *)(local_28 + 0x1c) != 0)) {
    iVar6 = 0;
    local_10 = 0;
    iVar4 = (**(code **)(**(int **)(local_28 + 0x1c) + 0xa0))();
    local_24 = iVar4;
    if (0 < iVar4) {
      do {
        (**(code **)(**(int **)(local_28 + 0x1c) + 0xa8))(&param_3,iVar6);
        local_4c = local_5c;
        local_5c[0] = 0;
        local_48 = local_4c;
        cVar2 = (**(code **)(*param_3 + 0x28))("AISetting");
        if (cVar2 != '\0') {
          local_14 = (char *)0x0;
          (**(code **)(*param_3 + 0x78))("sBTFolder",&local_14);
          (**(code **)(**(int **)(param_2 + 8) + 0x1c))("/Scripts/AI/BehaviorTree/");
          if (local_14 != (char *)0x0) {
            local_34 = local_44;
            pcVar1 = local_14;
            do {
              pcVar5 = pcVar1;
              pcVar1 = pcVar5 + 1;
            } while (*pcVar5 != '\0');
            local_30 = local_34;
            FUN_100b62c0(local_14,pcVar5);
            if (local_30 != local_34) {
              FUN_104a3f50(local_30);
            }
            if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_30);
            }
          }
          local_c = 0;
          (**(code **)(*param_3 + 0x78))("sBlackBoardFile",&local_c);
          if (local_c != 0) {
            (**(code **)(**(int **)(param_2 + 8) + 0x18))(local_c);
          }
          local_18 = 0;
          (**(code **)(*param_3 + 0x78))("sEventBT",&local_18);
          if (local_18 != 0) {
            AISystem__LoadEntityBehaviorTree_Recursive(local_18);
          }
          iVar4 = 0;
          iVar6 = (**(code **)(*param_3 + 0xa0))();
          if (0 < iVar6) {
LAB_10aacdb6:
            (**(code **)(*param_3 + 0xa8))(&local_8,iVar4);
            cVar2 = (**(code **)(*local_8 + 0x28))(local_2c);
            if (cVar2 == '\0') goto code_r0x10aacdda;
            iVar6 = (**(code **)(*local_8 + 0xa0))();
            iVar4 = 0;
            if (0 < iVar6) {
              do {
                (**(code **)(*local_8 + 0xa8))(&local_20,iVar4);
                local_1c = 0;
                (**(code **)(*local_20 + 0x78))("sFilename",&local_1c);
                if (local_1c != 0) {
                  (**(code **)(**(int **)(param_2 + 8) + 4))(local_1c,1);
                }
                if (local_20 != (int *)0x0) {
                  (**(code **)(*local_20 + 4))();
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar6);
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 4))();
            }
          }
LAB_10aace57:
          iVar6 = local_10;
          iVar4 = local_24;
          if (local_c != 0) {
            (**(code **)(**(int **)(param_2 + 8) + 0x18))(local_c);
            iVar6 = local_10;
            iVar4 = local_24;
          }
        }
        if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_48);
        }
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 4))();
        }
        iVar6 = iVar6 + 1;
        local_10 = iVar6;
      } while (iVar6 < iVar4);
    }
  }
  return;
code_r0x10aacdda:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 4))();
  }
  iVar4 = iVar4 + 1;
  if (iVar6 <= iVar4) goto LAB_10aace57;
  goto LAB_10aacdb6;
}



/* ===== FUN_10aad5c0 @ 10aad5c0  size=1791 ===== */
// calls: _findfirst64i32, _findnext64i32, _findclose
// strings:
//   "/Libs/EntityArchetypes/"
//   "*.xml"
//   "EntityPrototypeLibrary"
//   "EntityPrototype"
//   "Properties"
//   "/Scripts/AI/BehaviorTree/"
//   "BTFolder"
//   "Scripts/AI/BehaviorTree/"
//   "file_BlackBoardFile"
//   "file_BTEventFileName"
//   "file_BTFileName1"
//   "file_BTFileName2"
//   "file_BTFileName3"

/* [RE-AUTO c0]
   calls: _findfirst64i32, _findnext64i32, _findclose
   strings:
     ""/Libs/EntityArchetypes/""
     ""*.xml""
     ""EntityPrototypeLibrary""
     ""EntityPrototype""
     ""Properties""
     ""/Scripts/AI/BehaviorTree/""
     ""BTFolder""
     ""Scripts/AI/BehaviorTree/""
     ""file_BlackBoardFile""
     ""file_BTEventFileName"" */

void FUN_10aad5c0(undefined8 *param_1,char param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  intptr_t _FindHandle;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  code *pcVar14;
  _finddata64i32_t local_240;
  undefined1 local_118 [12];
  undefined1 local_10c [20];
  undefined1 *local_f8;
  undefined1 local_f4 [20];
  undefined1 *local_e0;
  char local_dc [20];
  char *local_c8;
  undefined8 local_c4;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 *local_74;
  undefined4 local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_44 [20];
  undefined1 *local_30;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  intptr_t local_10;
  int *local_c;
  int local_8;
  
  piVar3 = (int *)FUN_10478730();
  local_6c = piVar3;
  if (piVar3 != (int *)0x0) {
    pcVar4 = (char *)FUN_10478770();
    local_90 = local_a0;
    pcVar1 = pcVar4;
    do {
      pcVar12 = pcVar1;
      pcVar1 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    local_8c = local_90;
    FUN_100b62c0(pcVar4,pcVar12);
    FUN_100f2140(local_10c,local_a0,"/Libs/EntityArchetypes/");
    FUN_100f2140(local_dc,local_10c,"*.xml");
    _FindHandle = _findfirst64i32(local_c8,&local_240);
    pcVar14 = _findnext64i32_exref;
    local_10 = _FindHandle;
    if (_FindHandle != -1) {
      iVar5 = _findnext64i32(_FindHandle,&local_240);
      while (iVar5 != -1) {
        uVar6 = FUN_100f2140(local_88,local_a0,"/Libs/EntityArchetypes/",local_240.name);
        FUN_100f2140(local_f4,uVar6);
        if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_74);
        }
        (**(code **)(*piVar3 + 0xc))(&local_c,local_e0,0);
        if (local_c == (int *)0x0) {
          if ((local_e0 != local_f4) && (local_e0 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_e0);
          }
          goto LAB_10aadc32;
        }
        cVar2 = (**(code **)(*local_c + 0x10))("EntityPrototypeLibrary");
        if (cVar2 != '\0') {
          pcVar4 = (char *)(**(code **)(*local_c + 0x5c))(&DAT_11da7300);
          local_a8 = local_b8;
          pcVar1 = pcVar4;
          do {
            pcVar12 = pcVar1;
            pcVar1 = pcVar12 + 1;
          } while (*pcVar12 != '\0');
          local_a4 = local_a8;
          FUN_100b62c0(pcVar4,pcVar12);
          FUN_100d9260(&DAT_11d9f004,&DAT_11d9f005);
          iVar5 = 0;
          local_60 = 0;
          local_64 = (**(code **)(*local_c + 100))();
          if (0 < local_64) {
            do {
              piVar3 = (int *)(**(code **)(*local_c + 0x68))(iVar5);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 4))();
              }
              cVar2 = (**(code **)(*piVar3 + 0x10))("EntityPrototype");
              if (cVar2 != '\0') {
                pcVar4 = (char *)(**(code **)(*piVar3 + 0x5c))(&DAT_11da7300);
                local_78 = local_88;
                pcVar1 = pcVar4;
                do {
                  pcVar12 = pcVar1;
                  pcVar1 = pcVar12 + 1;
                } while (*pcVar12 != '\0');
                local_74 = local_78;
                FUN_100b62c0(pcVar4,pcVar12);
                iVar5 = 0;
                local_8 = 0;
                local_68 = (**(code **)(*piVar3 + 100))();
                if (0 < local_68) {
                  do {
                    piVar7 = (int *)(**(code **)(*piVar3 + 0x68))(iVar5);
                    if (piVar7 != (int *)0x0) {
                      (**(code **)(*piVar7 + 4))();
                    }
                    cVar2 = (**(code **)(*piVar7 + 0x10))("Properties");
                    if (cVar2 == '\0') {
LAB_10aadb7b:
                      (**(code **)(*piVar7 + 8))();
                    }
                    else {
                      if (param_2 == '\0') {
                        local_c4 = *param_1;
                        piVar13 = *(int **)(param_1 + 1);
                      }
                      else {
                        local_14 = DAT_11df7390;
                        DAT_11df7390 = DAT_11df7390 + 1;
                        local_70 = 0;
                        puVar8 = (undefined8 *)FUN_10aae120(local_118,&local_14,&local_70,&param_4);
                        local_c4 = *puVar8;
                        piVar13 = *(int **)(puVar8 + 1);
                        FUN_10258d40();
                        piVar9 = (int *)FUN_100f21e0(local_44,local_b8,local_88);
                        if (piVar9 != piVar13 + 0x7b) {
                          FUN_100d83d0(piVar9[5],piVar9[4]);
                        }
                        if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_30);
                        }
                      }
                      (**(code **)(*piVar13 + 0x1c))("/Scripts/AI/BehaviorTree/");
                      local_4c = local_5c;
                      local_5c[0] = 0;
                      local_48 = local_4c;
                      cVar2 = (**(code **)(*piVar7 + 0x28))("BTFolder",local_5c);
                      if (cVar2 != '\0') {
                        FUN_104a3f50(local_48);
                        puVar10 = (undefined1 *)
                                  FUN_104977f0(local_44,"Scripts/AI/BehaviorTree/",local_5c);
                        if (puVar10 != local_5c) {
                          FUN_100d83d0(*(undefined4 *)(puVar10 + 0x14),
                                       *(undefined4 *)(puVar10 + 0x10));
                        }
                        if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_30);
                        }
                        local_1c = local_2c;
                        local_2c[0] = 0;
                        local_18 = local_1c;
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BlackBoardFile",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 0x18))(*(undefined4 *)(iVar5 + 0x14));
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTEventFileName",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName1",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName2",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName3",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        if (param_2 == '\0') {
                          (**(code **)(*piVar13 + 0xc))();
                        }
                        else {
                          local_14 = DAT_11df7390 + -1;
                          puVar11 = (undefined4 *)FUN_10aadda0(&local_14);
                          *puVar11 = (undefined4)local_c4;
                          puVar11[1] = local_c4._4_4_;
                          puVar11[2] = piVar13;
                        }
                        if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_18);
                        }
                        iVar5 = local_8;
                        if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_48);
                          iVar5 = local_8;
                        }
                        goto LAB_10aadb7b;
                      }
                      if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(local_48);
                      }
                      (**(code **)(*piVar7 + 8))();
                      iVar5 = local_8;
                    }
                    iVar5 = iVar5 + 1;
                    local_8 = iVar5;
                  } while (iVar5 < local_68);
                }
                if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_74);
                }
              }
              (**(code **)(*piVar3 + 8))();
              iVar5 = local_60 + 1;
              piVar3 = local_6c;
              local_60 = iVar5;
            } while (iVar5 < local_64);
          }
          _FindHandle = local_10;
          pcVar14 = _findnext64i32_exref;
          if ((local_a4 != local_b8) && (local_a4 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_a4);
            _FindHandle = local_10;
            pcVar14 = _findnext64i32_exref;
          }
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))();
        }
        if ((local_e0 != local_f4) && (local_e0 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_e0);
        }
        iVar5 = (*pcVar14)(_FindHandle,&local_240);
      }
      _findclose(_FindHandle);
    }
LAB_10aadc32:
    if ((local_c8 != local_dc) && (local_c8 != (char *)0x0)) {
      FUN_10c3d5d0(local_c8);
    }
    if ((local_f8 != local_10c) && (local_f8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_f8);
    }
    if ((local_8c != local_a0) && (local_8c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_8c);
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    piVar3 = param_4 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_4)(1);
    }
  }
  return;
}



/* ===== FUN_10aae120 @ 10aae120  size=147 ===== */
// strings:
//   "IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName"" */

undefined4 * FUN_10aae120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100dde50(0x2f0);
  iVar1 = DAT_12020970;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_100bcc20();
    *param_1 = uVar3;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    if ((iVar2 != 0) && ((undefined4 *)(iVar2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar2 + 0x10) = iVar2;
    }
    FUN_100b4ad0(uVar3,iVar2,"IdPtrNameSvr<class CBTActor>::GetIdPtrBaseName");
  }
  if (iVar2 != 0) {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    FUN_10257270(*param_2,*param_3,iVar1);
  }
  return param_1;
}



/* ===== FUN_10ab1740 @ 10ab1740  size=754 ===== */
// calls: _stricmp
// strings:
//   "flags"
//   "ClientOnly"
//   "value"
//   "ServerOnly"
//   "ServerSpawn"
//   "PredictSpawn"
//   "Reusable"
//   "params"
//   "lifetime"
//   "showtime"
//   "bulletType"
//   "hitPoints"
//   "noBulletHits"
//   "quietRemoval"
//   "sleepTime"
//   "radius"
//   "aitype"
//   "grenade"

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""flags""
     ""ClientOnly""
     ""value""
     ""ServerOnly""
     ""ServerSpawn""
     ""PredictSpawn""
     ""Reusable""
     ""params""
     ""lifetime""
     ""showtime"" */

void __fastcall FUN_10ab1740(uint *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *_Str1;
  uint uVar4;
  uint local_c;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)param_1[0x2f] + 0x58))("flags");
  if (iVar2 != 0) {
    local_8 = iVar2;
    piVar3 = (int *)FUN_10ab25f0("ClientOnly");
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        uVar4 = local_c;
      }
    }
    *param_1 = *param_1 | -(uint)(uVar4 != 0) & 0x100;
    piVar3 = (int *)FUN_10ab25f0("ServerOnly");
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        uVar4 = local_c;
      }
    }
    *param_1 = *param_1 | -(uint)(uVar4 != 0) & 0x200;
    piVar3 = (int *)FUN_10ab25f0("ServerSpawn");
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        *(bool *)(param_1 + 1) = local_c != 0;
      }
    }
    if ((char)param_1[1] == '\0') {
      piVar3 = (int *)FUN_10ab25f0("Reusable");
      if (piVar3 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
        if (cVar1 != '\0') {
          *(bool *)((int)param_1 + 6) = local_c != 0;
        }
      }
    }
    else {
      piVar3 = (int *)FUN_10ab25f0("PredictSpawn");
      if (piVar3 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
        if (cVar1 != '\0') {
          *(bool *)((int)param_1 + 5) = local_c != 0;
        }
      }
    }
  }
  local_8 = (**(code **)(*(int *)param_1[0x2f] + 0x58))("params");
  if (local_8 != 0) {
    piVar3 = (int *)FUN_10ab25f0("lifetime");
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))("value",param_1 + 2);
    }
    piVar3 = (int *)FUN_10ab25f0("showtime");
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))("value",param_1 + 3);
    }
    piVar3 = (int *)FUN_10ab25f0("bulletType");
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        param_1[5] = local_c;
      }
    }
    piVar3 = (int *)FUN_10ab25f0("hitPoints");
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        param_1[6] = local_c;
      }
    }
    piVar3 = (int *)FUN_10ab25f0("noBulletHits");
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        *(bool *)(param_1 + 7) = local_c != 0;
      }
    }
    piVar3 = (int *)FUN_10ab25f0("quietRemoval");
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))("value",&local_c);
      if (cVar1 != '\0') {
        *(bool *)((int)param_1 + 0x1d) = local_c != 0;
      }
    }
    piVar3 = (int *)FUN_10ab25f0("sleepTime");
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))("value",param_1 + 8);
    }
    piVar3 = (int *)FUN_10ab25f0("radius");
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))("value",param_1 + 0xc);
    }
    piVar3 = (int *)FUN_10ab25f0("aitype");
    if (piVar3 != (int *)0x0) {
      _Str1 = (char *)(**(code **)(*piVar3 + 0x28))("value");
      if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) {
        iVar2 = _stricmp(_Str1,"grenade");
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 4) = 0x96;
          return;
        }
        iVar2 = _stricmp(_Str1,"rpg");
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 4) = 0x97;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10b13370 @ 10b13370  size=536 ===== */
// strings:
//   "OnSpawnBubble"
//   "OnSpawnSplash"

/* [RE-AUTO c0]
   strings:
     ""OnSpawnBubble""
     ""OnSpawnSplash"" */

void __thiscall FUN_10b13370(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_14;
  int *local_10;
  
  if (*(int **)(param_3 + 0xb8) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_3 + 0xb8) + 0x150))(2);
    if (piVar1 == (int *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = (**(code **)(*piVar1 + 0x38))();
    }
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0xb0) == 0) {
        FUN_10a68b10("OnSpawnBubble",(int *)(param_1 + 0xb0));
      }
      if (*(int *)(param_1 + 0xb4) == 0) {
        FUN_10a68b10("OnSpawnSplash",param_1 + 0xb4);
      }
      if (param_4 == 0) {
        iVar2 = *(int *)(param_1 + 0xb0);
      }
      else {
        if (param_4 != 1) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0xb4);
      }
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0xac) == 0) {
          piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x30))(0);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))();
          }
          if (*(int **)(param_1 + 0xac) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0xac) + 0xc))();
          }
          *(int **)(param_1 + 0xac) = piVar1;
        }
        piVar1 = *(int **)(param_1 + 0xac);
        (**(code **)(*piVar1 + 0x30))();
        local_10 = (int *)*param_2;
        local_14 = 4;
        (**(code **)(*piVar1 + 0x18))(&DAT_11dd2bbc,&local_14,1);
        if (local_14 == 6) {
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 0xc))();
          }
        }
        else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
        }
        local_10 = (int *)param_2[1];
        local_14 = 4;
        (**(code **)(*piVar1 + 0x18))(&DAT_11dd2bc0,&local_14,1);
        if (local_14 == 6) {
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 0xc))();
          }
        }
        else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
        }
        local_10 = (int *)param_2[2];
        local_14 = 4;
        (**(code **)(*piVar1 + 0x18))(&DAT_11de94bc,&local_14,1);
        if (local_14 == 6) {
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 0xc))();
          }
        }
        else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
        }
        (**(code **)(*piVar1 + 0x34))();
        piVar1 = *(int **)(DAT_1202e818 + 0x30);
        iVar2 = (**(code **)(*piVar1 + 0x40))(iVar2);
        if (iVar2 != 0) {
          FUN_10b13640(piVar1,&param_3,param_2);
          (**(code **)(*piVar1 + 0x44))();
        }
      }
    }
  }
  return;
}



/* ===== FUN_10b1e3f0 @ 10b1e3f0  size=2776 ===== */
// calls: CInfoRecord::GetModelString, libm_sse2_cos_precise, memcpy
// strings:
//   "count"
//   "model"
//   "model1"
//   "model2"
//   "model3"
//   "model4"
//   "character"
//   "animation"
//   "behavior"
//   "boid_mass"
//   "boid_size"
//   "boid_size_random"
//   "min_height"
//   "max_height"
//   "min_attract_distance"
//   "max_attract_distance"
//   "min_speed"
//   "max_speed"
//   "factor_align"
//   "factor_cohesion"

/* [RE-AUTO c0]
   calls: libm_sse2_cos_precise, memcpy
   strings:
     ""count""
     ""model""
     ""model1""
     ""model2""
     ""model3""
     ""model4""
     ""character""
     ""animation""
     ""behavior""
     ""boid_mass"" */

undefined4 FUN_10b1e3f0(int *param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  size_t _Size;
  double dVar11;
  int local_78;
  int *local_74;
  int local_68;
  int *local_64;
  float local_58;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  int *local_50;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  (**(code **)(*param_1 + 0x30))();
  iVar5 = param_3[2];
  if (param_3[1] != iVar5) {
    local_45 = 0;
    local_36 = 0;
    uVar4 = FUN_10aefb20(iVar5,iVar5,param_3[1],&local_38,0);
    local_d = 0;
    FUN_10aefe10(uVar4,param_3[2],0,&local_d);
    param_3[2] = uVar4;
  }
  *param_3 = 0;
  FUN_10a9ab00("count",param_3);
  cVar3 = FUN_10a68fd0("model",&local_8);
  if (cVar3 != '\0') {
    CInfoRecord__GetModelString(local_8);
    piVar8 = (int *)param_3[2];
    if (piVar8 == (int *)param_3[3]) {
      local_3e = 0;
      local_12 = 0;
      FUN_10af2cd0(piVar8,&local_18,&local_12,1,1);
    }
    else {
      local_3a = 0;
      local_3c = 0;
      if (piVar8 != (int *)0x0) {
        if (-1 < *(int *)(local_18 + -0xc)) {
          *piVar8 = local_18;
          FUN_10c3dab0((int *)(local_18 + -0xc));
          param_3[2] = param_3[2] + 4;
          goto LAB_10b1e4d7;
        }
        *piVar8 = (int)&DAT_1201fc98;
      }
      param_3[2] = param_3[2] + 4;
    }
LAB_10b1e4d7:
    piVar8 = (int *)(local_18 + -0xc);
    if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_18 + -4));
      FUN_10c3d900(piVar8);
    }
  }
  cVar3 = FUN_10a68fd0("model1",&local_8);
  if ((cVar3 != '\0') && ((char)*local_8 != '\0')) {
    CInfoRecord__GetModelString(local_8);
    piVar8 = (int *)param_3[2];
    if (piVar8 == (int *)param_3[3]) {
      local_44 = 0;
      local_e = 0;
      FUN_10af2cd0(piVar8,&local_30,&local_e,1,1);
    }
    else {
      local_40 = 0;
      local_42 = 0;
      if (piVar8 != (int *)0x0) {
        if (-1 < *(int *)(local_30 + -0xc)) {
          *piVar8 = local_30;
          FUN_10c3dab0((int *)(local_30 + -0xc));
          param_3[2] = param_3[2] + 4;
          goto LAB_10b1e58e;
        }
        *piVar8 = (int)&DAT_1201fc98;
      }
      param_3[2] = param_3[2] + 4;
    }
LAB_10b1e58e:
    piVar8 = (int *)(local_30 + -0xc);
    if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_30 + -4));
      FUN_10c3d900(piVar8);
    }
  }
  cVar3 = FUN_10a68fd0("model2",&local_8);
  if ((cVar3 != '\0') && ((char)*local_8 != '\0')) {
    CInfoRecord__GetModelString(local_8);
    piVar8 = (int *)param_3[2];
    if (piVar8 == (int *)param_3[3]) {
      local_37 = 0;
      local_f = 0;
      FUN_10af2cd0(piVar8,&local_28,&local_f,1,1);
    }
    else {
      local_46 = 0;
      local_48 = 0;
      if (piVar8 != (int *)0x0) {
        if (-1 < *(int *)(local_28 + -0xc)) {
          *piVar8 = local_28;
          FUN_10c3dab0((int *)(local_28 + -0xc));
          param_3[2] = param_3[2] + 4;
          goto LAB_10b1e645;
        }
        *piVar8 = (int)&DAT_1201fc98;
      }
      param_3[2] = param_3[2] + 4;
    }
LAB_10b1e645:
    piVar8 = (int *)(local_28 + -0xc);
    if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_28 + -4));
      FUN_10c3d900(piVar8);
    }
  }
  cVar3 = FUN_10a68fd0("model3",&local_8);
  if ((cVar3 != '\0') && ((char)*local_8 != '\0')) {
    CInfoRecord__GetModelString(local_8);
    piVar8 = (int *)param_3[2];
    if (piVar8 == (int *)param_3[3]) {
      local_35 = 0;
      local_14 = 0;
      FUN_10af2cd0(piVar8,&local_1c,&local_14,1,1);
    }
    else {
      local_52 = 0;
      local_39 = 0;
      if (piVar8 != (int *)0x0) {
        if (-1 < *(int *)(local_1c + -0xc)) {
          *piVar8 = local_1c;
          FUN_10c3dab0((int *)(local_1c + -0xc));
          param_3[2] = param_3[2] + 4;
          goto LAB_10b1e6fc;
        }
        *piVar8 = (int)&DAT_1201fc98;
      }
      param_3[2] = param_3[2] + 4;
    }
LAB_10b1e6fc:
    piVar8 = (int *)(local_1c + -0xc);
    if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
      FUN_10c3d900(piVar8);
    }
  }
  cVar3 = FUN_10a68fd0("model4",&local_8);
  if ((cVar3 == '\0') || ((char)*local_8 == '\0')) goto LAB_10b1e7e2;
  CInfoRecord__GetModelString(local_8);
  piVar8 = (int *)param_3[2];
  if (piVar8 == (int *)param_3[3]) {
    local_3d = 0;
    local_11 = 0;
    FUN_10af2cd0(piVar8,&local_24,&local_11,1,1);
  }
  else {
    local_3b = 0;
    local_51 = 0;
    if (piVar8 != (int *)0x0) {
      if (-1 < *(int *)(local_24 + -0xc)) {
        *piVar8 = local_24;
        FUN_10c3dab0((int *)(local_24 + -0xc));
        param_3[2] = param_3[2] + 4;
        goto LAB_10b1e7b3;
      }
      *piVar8 = (int)&DAT_1201fc98;
    }
    param_3[2] = param_3[2] + 4;
  }
LAB_10b1e7b3:
  piVar8 = (int *)(local_24 + -0xc);
  if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
    FUN_10c3d900(piVar8);
  }
LAB_10b1e7e2:
  cVar3 = FUN_10a68fd0("character",&local_8);
  if (cVar3 != '\0') {
    if (local_8 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      piVar8 = local_8;
      do {
        iVar5 = *piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
      } while ((char)iVar5 != '\0');
      iVar5 = (int)piVar8 - (int)((int)local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar5);
  }
  cVar3 = FUN_10a68fd0("animation",&local_8);
  if (cVar3 != '\0') {
    if (local_8 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      piVar8 = local_8;
      do {
        iVar5 = *piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
      } while ((char)iVar5 != '\0');
      iVar5 = (int)piVar8 - (int)((int)local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar5);
  }
  FUN_10a9ab00("behavior",param_2 + 0x18);
  FUN_10a68f50("boid_mass",param_2 + 0x28);
  FUN_10a68f50("boid_size",param_2 + 0xa8);
  FUN_10a68f50("boid_size_random",param_2 + 0xac);
  FUN_10a68f50("min_height",param_2 + 0x38);
  FUN_10a68f50("max_height",param_2 + 0x3c);
  pfVar1 = (float *)(param_2 + 0x44);
  FUN_10a68f50("min_attract_distance",pfVar1);
  FUN_10a68f50("max_attract_distance",param_2 + 0x40);
  fVar2 = DAT_11de98c4;
  if (*pfVar1 <= DAT_11de98c4) {
    *pfVar1 = 0.05;
  }
  if (*(float *)(param_2 + 0x40) <= *pfVar1) {
    *(float *)(param_2 + 0x40) = *pfVar1 + fVar2;
  }
  FUN_10a68f50("min_speed",param_2 + 0x50);
  FUN_10a68f50("max_speed",param_2 + 0x4c);
  FUN_10a68f50("factor_align",param_2 + 0x58);
  FUN_10a68f50("factor_cohesion",param_2 + 0x5c);
  FUN_10a68f50("factor_separation",param_2 + 0x60);
  FUN_10a68f50("factor_origin",param_2 + 100);
  FUN_10a68f50("factor_keep_height",param_2 + 0x68);
  FUN_10a68f50("factor_avoid_land",param_2 + 0x6c);
  FUN_10a68f50("factor_random_accel",param_2 + 0x78);
  FUN_10a68f50("flight_time",param_2 + 0x48);
  FUN_10a68f50("factor_take_off",param_2 + 0x70);
  FUN_10a68f50("land_deceleration_height",param_2 + 0x54);
  FUN_10a68f50("max_anim_speed",param_2 + 0x90);
  FUN_10a690f0("follow_player",param_2 + 0x94);
  FUN_10a690f0("no_landing",param_2 + 0x96);
  FUN_10a690f0("start_on_ground",param_2 + 0x97);
  FUN_10a690f0("avoid_water",param_2 + 0x98);
  FUN_10a690f0("avoid_obstacles",param_2 + 0x95);
  FUN_10a68f50("max_view_distance",param_2 + 0xa0);
  pfVar1 = (float *)(param_2 + 0xa4);
  FUN_10a68f50("max_animation_distance",pfVar1);
  *pfVar1 = *pfVar1 * *pfVar1;
  FUN_10a690f0("spawn_from_point",param_2 + 0x99);
  FUN_10a68f50("spawn_radius",param_2 + 0x1c);
  FUN_10a68f50("gravity_at_death",param_2 + 0x2c);
  FUN_10a68f50("boid_mass",param_2 + 0x28);
  cVar3 = FUN_10a68f50("fov_angle",&local_58);
  if (cVar3 != '\0') {
    local_58 = local_58 * DAT_11de98e8;
    dVar11 = (double)((local_58 * DAT_11de99b0) / DAT_11de9a34);
    libm_sse2_cos_precise();
    *(float *)(param_2 + 0x74) = (float)dVar11;
  }
  local_c = (int *)0x0;
  cVar3 = FUN_10a9ac00("ground",&local_c);
  piVar8 = local_c;
  if (cVar3 != '\0') {
    (**(code **)(*local_c + 0x30))();
    FUN_10a68f50("factor_align",param_2 + 0x7c);
    FUN_10a68f50("factor_cohesion",param_2 + 0x80);
    FUN_10a68f50("factor_separation",param_2 + 0x84);
    FUN_10a68f50("factor_origin",param_2 + 0x88);
    FUN_10a68f50("walk_speed",param_2 + 0x8c);
    FUN_10a68f50("offset",param_2 + 0x9c);
    (**(code **)(*piVar8 + 0x34))();
  }
  local_50 = (int *)0x0;
  cVar3 = FUN_10a9ac00("Sounds",&local_50);
  if (cVar3 != '\0') {
    param_3 = (undefined4 *)0x1;
    do {
      local_68 = 5;
      cVar3 = (**(code **)(*local_50 + 0x44))(param_3,&local_68);
      piVar8 = local_64;
      if ((cVar3 == '\0') || (local_68 != 5)) {
        if (local_68 == 6) {
          if (local_64 != (int *)0x0) {
            (**(code **)(*local_64 + 0xc))();
          }
        }
        else if ((local_68 == 7) && (local_64 != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_64);
        }
        local_68 = 0;
        local_64 = (int *)0x0;
        piVar8 = local_c;
        break;
      }
      local_64 = (int *)0x0;
      local_68 = 0;
      CInfoRecord__GetModelString(piVar8);
      piVar8 = *(int **)(param_2 + 0x104);
      if (piVar8 == *(int **)(param_2 + 0x108)) {
        local_53 = 0;
        local_13 = 0;
        FUN_10af2cd0(piVar8,&local_2c,&local_13,1,1);
      }
      else {
        local_47 = 0;
        local_3f = 0;
        if (piVar8 != (int *)0x0) {
          if (-1 < *(int *)(local_2c + -0xc)) {
            *piVar8 = local_2c;
            FUN_10c3dab0((int *)(local_2c + -0xc));
            *(int *)(param_2 + 0x104) = *(int *)(param_2 + 0x104) + 4;
            goto LAB_10b1ec6f;
          }
          *piVar8 = (int)&DAT_1201fc98;
        }
        *(int *)(param_2 + 0x104) = *(int *)(param_2 + 0x104) + 4;
      }
LAB_10b1ec6f:
      iVar5 = local_2c;
      piVar8 = (int *)(local_2c + -0xc);
      if ((-1 < *piVar8) && (iVar6 = FUN_10c3dad0(piVar8), iVar6 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar5 + -4));
        FUN_10c3d900(piVar8);
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
      piVar8 = local_c;
    } while ((int)param_3 < 100);
  }
  local_20 = (int *)0x0;
  cVar3 = FUN_10a9ac00("Animations",&local_20);
  piVar9 = local_20;
  if (cVar3 != '\0') {
    param_3 = (undefined4 *)0x1;
    do {
      piVar9 = local_20;
      local_78 = 5;
      cVar3 = (**(code **)(*local_20 + 0x44))(param_3,&local_78);
      piVar8 = local_74;
      if ((cVar3 == '\0') || (local_78 != 5)) {
        piVar8 = local_c;
        if (local_78 == 6) {
          if (local_74 != (int *)0x0) {
            (**(code **)(*local_74 + 0xc))();
            piVar8 = local_c;
          }
        }
        else if ((local_78 == 7) && (local_74 != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_74);
          piVar8 = local_c;
        }
        break;
      }
      piVar9 = (int *)&DAT_1201fc98;
      local_8 = local_74;
      local_74 = (int *)0x0;
      local_78 = 0;
      local_34 = (int *)&DAT_1201fc98;
      if (piVar8 != (int *)0x0) {
        piVar10 = piVar8;
        do {
          iVar5 = *piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
        } while ((char)iVar5 != '\0');
        _Size = (int)piVar10 - (int)((int)piVar8 + 1);
        if (_Size != 0) {
          puVar7 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
          DAT_123be268 = DAT_123be268 + _Size + 0xd;
          *puVar7 = 1;
          piVar9 = puVar7 + 3;
          puVar7[1] = _Size;
          puVar7[2] = _Size;
          *(char *)((int)piVar9 + _Size) = '\0';
          local_34 = piVar9;
          if (piVar9 != piVar8) {
            memcpy(piVar9,piVar8,_Size);
          }
        }
      }
      piVar8 = local_34;
      puVar7 = *(undefined4 **)(param_2 + 0x110);
      if (puVar7 == *(undefined4 **)(param_2 + 0x114)) {
        local_43 = 0;
        local_10 = 0;
        FUN_10af2cd0(puVar7,&local_34,&local_10,1,1);
      }
      else {
        local_41 = 0;
        local_49 = 0;
        if (puVar7 != (undefined4 *)0x0) {
          if (-1 < piVar9[-3]) {
            *puVar7 = local_34;
            FUN_10c3dab0(piVar9 + -3);
            *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) + 4;
            piVar9 = piVar8;
            goto LAB_10b1ee14;
          }
          *puVar7 = &DAT_1201fc98;
          piVar9 = local_34;
        }
        *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) + 4;
      }
LAB_10b1ee14:
      piVar8 = piVar9 + -3;
      if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - piVar9[-1]);
        FUN_10c3d900(piVar8);
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
      piVar8 = local_c;
      piVar9 = local_20;
    } while ((int)param_3 < 100);
  }
  (**(code **)(*param_1 + 0x34))();
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))();
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))();
  }
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  return 1;
}



/* ===== FUN_10b367b0 @ 10b367b0  size=1593 ===== */
// strings:
//   "mh_sharemem_addrinfo"
//   "Particle.SpawnEffect"
//   "Bip01 Spine"
//   "PoisonEffect"
//   "BurnEffect"

/* [RE-AUTO c0]
   strings:
     ""mh_sharemem_addrinfo""
     ""Particle.SpawnEffect""
     ""Bip01 Spine""
     ""PoisonEffect""
     ""BurnEffect"" */

void __thiscall FUN_10b367b0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int *piVar7;
  undefined2 *puVar8;
  float fVar9;
  char cVar10;
  short sVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  float *pfVar18;
  char *pcVar19;
  byte *pbVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  float local_3c;
  float local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  char *local_14;
  int local_10;
  undefined8 local_c;
  
  pbVar20 = &DAT_11d9d32b;
  pbVar12 = *(byte **)(param_1 + 0x34);
  do {
    bVar6 = *pbVar12;
    bVar22 = bVar6 < *pbVar20;
    if (bVar6 != *pbVar20) {
LAB_10b367f0:
      uVar13 = -(uint)bVar22 | 1;
      goto LAB_10b367f5;
    }
    if (bVar6 == 0) break;
    bVar6 = pbVar12[1];
    bVar22 = bVar6 < pbVar20[1];
    if (bVar6 != pbVar20[1]) goto LAB_10b367f0;
    pbVar12 = pbVar12 + 2;
    pbVar20 = pbVar20 + 2;
  } while (bVar6 != 0);
  uVar13 = 0;
LAB_10b367f5:
  if (uVar13 != 0) {
    local_10 = param_1;
    local_24._4_4_ =
         (float)(**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                          (*(byte **)(param_1 + 0x34),"Particle.SpawnEffect",1,1);
    if (param_2 == '\0') {
      FUN_10b36df0();
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4) + 0xc);
      if ((piVar7 != (int *)0x0) && ((**(code **)(*piVar7 + 0x94))(), local_24._4_4_ != 0.0)) {
        cVar10 = FUN_10a67670(param_1 + 0x58,&DAT_11d9d32b);
        if (cVar10 == '\0') {
          local_14 = "Bip01 Spine";
        }
        else {
          local_14 = *(char **)(param_1 + 0x58);
        }
        fVar23 = *(float *)(param_1 + 0x48);
        fVar1 = *(float *)(param_1 + 0x4c);
        local_78 = 0;
        dVar30 = (double)(*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x50));
        dVar27 = (double)(fVar1 + fVar1);
        local_44 = DAT_11de9978 - (double)fVar23 * (double)(fVar23 + fVar23);
        local_34 = (double)fVar1 * dVar27;
        fVar2 = *(float *)(param_1 + 0x54);
        local_2c = (double)fVar2 * (double)(fVar23 + fVar23);
        local_1c = (double)fVar2 * dVar27;
        local_80 = (float)((double)fVar23 * dVar27 - (double)fVar2 * dVar30);
        local_24 = (double)*(float *)(param_1 + 0x48) * dVar30;
        dVar28 = (double)*(float *)(param_1 + 0x50) * dVar30;
        local_74 = (float)((double)fVar2 * dVar30 + (double)fVar23 * dVar27);
        local_c = (DAT_11de9978 - local_34) - dVar28;
        local_7c = (float)(local_24 + local_1c);
        local_70 = (float)(local_44 - dVar28);
        local_6c = (float)((double)fVar1 * dVar30 - local_2c);
        local_60 = (float)((double)fVar1 * dVar30 + local_2c);
        local_64 = (float)(local_24 - local_1c);
        local_5c = (float)(local_44 - local_34);
        local_50 = (ulonglong)(uint)local_5c;
        local_84 = (float)local_c;
        local_68 = 0;
        local_58 = 0;
        FUN_10b36e80(&local_84);
        local_54 = local_54 * DAT_11de9a28;
        local_50 = CONCAT44((float)local_50._4_4_ * DAT_11de9a28,(float)local_50 * DAT_11de9a28);
        (**(code **)(*piVar7 + 0x1e8))
                  (*(undefined4 *)(param_1 + 0x34),local_14,param_1 + 0x38,&local_54,
                   *(undefined4 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x5c),1,1,0,0);
        cVar10 = FUN_10a675d0(param_1 + 0xc,"PoisonEffect");
        if ((cVar10 != '\0') || (cVar10 = FUN_10a675d0(param_1 + 0xc,"BurnEffect"), cVar10 != '\0'))
        {
          FUN_100e49c0();
          puVar8 = local_50._4_4_;
          *local_50._4_4_ = 0x2a7;
          *(undefined1 *)(local_50._4_4_ + 0x51) = 0;
          uVar14 = (**(code **)(*piVar7 + 0x274))();
          *(undefined4 *)(puVar8 + 8) = uVar14;
          *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(local_10 + 0x44);
          piVar15 = (int *)(**(code **)(*piVar7 + 0x1b8))(0);
          iVar21 = local_10;
          if (piVar15 != (int *)0x0) {
            iVar16 = (**(code **)(*piVar15 + 0x50))();
            local_c = (double)CONCAT44(iVar16,(undefined4)local_c);
            iVar21 = local_10;
            if (iVar16 != 0) {
              (**(code **)(*piVar7 + 200))(local_48);
              puVar17 = (uint *)(**(code **)(*piVar7 + 0xd0))(&local_3c);
              fVar23 = (float)puVar17[3];
              iVar21 = *local_c._4_4_;
              local_1c = (double)CONCAT44(*puVar17 ^ DAT_11de9c90,(undefined4)local_1c);
              local_24 = (double)CONCAT44(puVar17[2] ^ DAT_11de9c90,(undefined4)local_24);
              local_2c._4_4_ = (float)(puVar17[1] ^ DAT_11de9c90);
              sVar11 = (**(code **)(iVar21 + 0x10))(local_14);
              puVar17 = (uint *)(**(code **)(iVar21 + 0x20))((int)sVar11);
              iVar21 = local_10;
              fVar9 = local_2c._4_4_;
              fVar24 = (float)(*puVar17 ^ DAT_11de9c90);
              fVar1 = *(float *)(local_10 + 0x50);
              fVar2 = *(float *)(local_10 + 0x4c);
              fVar3 = *(float *)(local_10 + 0x48);
              local_c = (double)CONCAT44(fVar24,(undefined4)local_c);
              fVar25 = (float)(puVar17[1] ^ DAT_11de9c90);
              fVar26 = (float)(puVar17[2] ^ DAT_11de9c90);
              local_44 = (double)CONCAT44(fVar26,(undefined4)local_44);
              fVar4 = *(float *)(local_10 + 0x54);
              fVar31 = (local_2c._4_4_ * fVar1 - local_24._4_4_ * fVar2) + fVar23 * fVar3 +
                       local_1c._4_4_ * fVar4;
              local_2c = (double)CONCAT44(fVar31,(undefined4)local_2c);
              fVar32 = (local_24._4_4_ * fVar3 - local_1c._4_4_ * fVar1) + fVar23 * fVar2 +
                       fVar9 * fVar4;
              fVar5 = (float)puVar17[3];
              fVar29 = (local_1c._4_4_ * fVar2 - fVar9 * fVar3) + fVar23 * fVar1 +
                       local_24._4_4_ * fVar4;
              fVar23 = fVar23 * fVar4 -
                       (local_1c._4_4_ * fVar3 + fVar9 * fVar2 + local_24._4_4_ * fVar1);
              local_3c = (fVar29 * fVar25 - fVar32 * fVar26) + fVar31 * fVar5 + fVar23 * fVar24;
              local_38 = (fVar31 * fVar26 - fVar29 * fVar24) + fVar32 * fVar5 + fVar23 * fVar25;
              local_34 = (double)CONCAT44(fVar23 * fVar5 -
                                          (fVar32 * fVar25 + fVar31 * fVar24 + fVar29 * fVar26),
                                          (fVar32 * fVar24 - fVar31 * fVar25) + fVar29 * fVar5 +
                                          fVar23 * fVar26);
              pfVar18 = (float *)FUN_10abc150(&local_3c);
              fVar3 = DAT_11de9a28;
              fVar23 = *pfVar18;
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              *(undefined4 *)(puVar8 + 0x32) = *(undefined4 *)(iVar21 + 0x38);
              *(undefined4 *)(puVar8 + 0x34) = *(undefined4 *)(iVar21 + 0x3c);
              *(undefined4 *)(puVar8 + 0x36) = *(undefined4 *)(iVar21 + 0x40);
              *(float *)(puVar8 + 0x2c) = fVar23 * fVar3;
              *(float *)(puVar8 + 0x2e) = fVar1 * fVar3;
              *(float *)(puVar8 + 0x30) = fVar2 * fVar3;
            }
          }
          pcVar19 = local_14;
          do {
            cVar10 = *pcVar19;
            pcVar19 = pcVar19 + 1;
          } while (cVar10 != '\0');
          FUN_10b372f0(puVar8 + 0x38,local_14,pcVar19 + (1 - (int)(local_14 + 1)));
          FUN_10b372f0(puVar8 + 0xc,*(int *)(iVar21 + 0x34),
                       *(int *)(*(int *)(iVar21 + 0x34) + -8) + 1);
          (**(code **)(**(int **)m_pThis_exref + 0x254))(puVar8);
          FUN_100e4a80();
          return;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10b839c0 @ 10b839c0  size=2991 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "/Scripts/GameRules/BattleDust.xml"
//   "params"
//   "fogspawnpower"
//   "defaultlifetime"
//   "maxlifetime"
//   "maxeventpower"
//   "minparticlecount"
//   "maxparticlecount"
//   "distancebetweenevents"
//   "events"
//   "shotfired"
//   "power"
//   "lifetime"
//   "default"
//   "explosion"
//   "vehicleexplosion"
//   "bulletimpact"

/* [RE-AUTO c0]
   strings:
     ""/Scripts/GameRules/BattleDust.xml""
     ""params""
     ""fogspawnpower""
     ""defaultlifetime""
     ""maxlifetime""
     ""maxeventpower""
     ""minparticlecount""
     ""maxparticlecount""
     ""distancebetweenevents""
     ""events"" */

void __fastcall FUN_10b839c0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 *local_b0;
  byte *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  byte *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_79;
  int *local_78;
  undefined1 local_71;
  int local_70;
  undefined1 local_69;
  undefined4 local_68;
  undefined1 local_61;
  undefined4 local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  byte *local_18;
  byte *local_14;
  int *local_10;
  byte *local_c;
  byte *local_8;
  
  iVar6 = *(int *)(param_1 + 0x68);
  local_70 = param_1;
  if (*(int *)(param_1 + 100) != iVar6) {
    uVar4 = FUN_10b85580(iVar6,iVar6,*(int *)(param_1 + 100),&local_59,0);
    FUN_10b85770(uVar4,*(undefined4 *)(param_1 + 0x68),0,&local_61);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x70) != iVar6) {
    uVar4 = FUN_10b85580(iVar6,iVar6,*(int *)(param_1 + 0x70),&local_49,0);
    FUN_10b85770(uVar4,*(undefined4 *)(param_1 + 0x74),0,&local_79);
    *(undefined4 *)(param_1 + 0x74) = uVar4;
  }
  iVar6 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x7c) != iVar6) {
    uVar4 = FUN_10b85580(iVar6,iVar6,*(int *)(param_1 + 0x7c),&local_51,0);
    FUN_10b85770(uVar4,*(undefined4 *)(param_1 + 0x80),0,&local_8a);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
  local_b4 = param_1 + 0x88;
  iVar6 = *(int *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0x88) != iVar6) {
    uVar4 = FUN_10b85580(iVar6,iVar6,*(int *)(param_1 + 0x88),&local_89,0);
    FUN_10b85770(uVar4,*(undefined4 *)(param_1 + 0x8c),0,&local_71);
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
  }
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x1c4))();
  piVar5 = (int *)(**(code **)(*piVar5 + 4))();
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
    piVar5 = (int *)*DAT_1202e818;
    local_1c = piVar5;
    uVar4 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
    CInfoRecord__GetModelString(uVar4);
    piVar11 = (int *)(local_b0 + -0xc);
    if (*piVar11 < 0) {
      local_88 = &DAT_1201fc98;
    }
    else {
      local_88 = local_b0;
      FUN_10c3dab0(piVar11);
    }
    FUN_10a4c990("/Scripts/GameRules/BattleDust.xml",0x21);
    puVar3 = local_88;
    (**(code **)(*piVar5 + 0x1c0))(&local_78,local_88,0,1,0);
    piVar5 = (int *)(puVar3 + -0xc);
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
      FUN_10c3d900(piVar5);
    }
    if ((-1 < *piVar11) && (iVar6 = FUN_10c3dad0(piVar11), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_b0 + -4));
      FUN_10c3d900(piVar11);
    }
    if (local_78 != (int *)0x0) {
      (**(code **)(*local_78 + 0xac))(&local_10,"params");
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 100))("fogspawnpower",param_1);
        (**(code **)(*local_10 + 100))("defaultlifetime",param_1 + 4);
        (**(code **)(*local_10 + 100))("maxlifetime",param_1 + 8);
        (**(code **)(*local_10 + 100))("maxeventpower",param_1 + 0xc);
        (**(code **)(*local_10 + 100))("minparticlecount",param_1 + 0x10);
        (**(code **)(*local_10 + 100))("maxparticlecount",param_1 + 0x14);
        (**(code **)(*local_10 + 100))("distancebetweenevents",param_1 + 0x18);
      }
      (**(code **)(*local_78 + 0xac))(&local_20,"events");
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xac))(&local_2c,"shotfired");
        if (local_2c != (int *)0x0) {
          local_1c = (int *)0x0;
          iVar6 = (**(code **)(*local_2c + 0xa0))();
          if (0 < iVar6) {
            piVar5 = (int *)0x0;
            do {
              (**(code **)(*local_2c + 0xa8))(&local_3c,piVar5);
              if (local_3c != (int *)0x0) {
                local_14 = &DAT_1201fc98;
                local_44 = 0x3f800000;
                local_84 = 0x3f800000;
                (**(code **)(*local_3c + 0x4c))(&DAT_11dbac80,&local_14);
                (**(code **)(*local_3c + 100))("power",&local_44);
                (**(code **)(*local_3c + 100))("lifetime",&local_84);
                pcVar10 = "default";
                pbVar8 = local_14;
                do {
                  bVar1 = *pbVar8;
                  bVar14 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_10b83d30:
                    uVar9 = -(uint)bVar14 | 1;
                    goto LAB_10b83d35;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar14 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_10b83d30;
                  pbVar8 = pbVar8 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                uVar9 = 0;
LAB_10b83d35:
                if (uVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x20) = local_44;
                  *(undefined4 *)(param_1 + 0x24) = local_84;
                }
                else {
                  CInfoRecord__GetModelString(&DAT_11d9d32b);
                  local_c0 = 0;
                  local_bc = 0;
                  local_b8 = 0;
                  FUN_10a72410(&local_14);
                  piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
                  local_b8 = (**(code **)(*piVar5 + 0xc))(local_14);
                  local_c0 = local_44;
                  local_bc = local_84;
                  FUN_10b86370(local_c4);
                  FUN_10b85c10();
                }
                pbVar13 = local_14;
                pbVar8 = local_14 + -0xc;
                if ((-1 < *(int *)(local_14 + -0xc)) && (iVar6 = FUN_10c3dad0(pbVar8), iVar6 < 1)) {
                  DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar13 + -4));
                  FUN_10c3d900(pbVar8);
                }
                piVar5 = local_1c;
                if (local_3c != (int *)0x0) {
                  (**(code **)(*local_3c + 4))();
                  piVar5 = local_1c;
                }
              }
              piVar5 = (int *)((int)piVar5 + 1);
              local_1c = piVar5;
              iVar6 = (**(code **)(*local_2c + 0xa0))();
            } while ((int)piVar5 < iVar6);
          }
        }
        (**(code **)(*local_20 + 0xac))(&local_40,"explosion");
        if (local_40 != (int *)0x0) {
          iVar12 = 0;
          iVar6 = (**(code **)(*local_40 + 0xa0))();
          if (0 < iVar6) {
            do {
              (**(code **)(*local_40 + 0xa8))(&local_34,iVar12);
              if (local_34 != (int *)0x0) {
                local_18 = &DAT_1201fc98;
                local_80 = 0x3f800000;
                local_48 = 0x3f800000;
                (**(code **)(*local_34 + 0x4c))(&DAT_11dbac80,&local_18);
                (**(code **)(*local_34 + 100))("power",&local_80);
                (**(code **)(*local_34 + 100))("lifetime",&local_48);
                pcVar10 = "default";
                pbVar8 = local_18;
                do {
                  bVar1 = *pbVar8;
                  bVar14 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_10b83ef0:
                    uVar9 = -(uint)bVar14 | 1;
                    goto LAB_10b83ef5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar14 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_10b83ef0;
                  pbVar8 = pbVar8 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                uVar9 = 0;
LAB_10b83ef5:
                if (uVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x30) = local_80;
                  *(undefined4 *)(param_1 + 0x34) = local_48;
                }
                else {
                  CInfoRecord__GetModelString(&DAT_11d9d32b);
                  local_d0 = 0;
                  local_cc = 0;
                  local_c8 = 0;
                  FUN_10a72410(&local_18);
                  piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
                  local_c8 = (**(code **)(*piVar5 + 0xc))(local_18);
                  local_d0 = local_80;
                  local_cc = local_48;
                  FUN_10b86370(&local_d4);
                  iVar6 = local_d4;
                  piVar5 = (int *)(local_d4 + -0xc);
                  if ((-1 < *piVar5) && (iVar7 = FUN_10c3dad0(piVar5), iVar7 < 1)) {
                    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
                    FUN_10c3d900(piVar5);
                  }
                }
                pbVar8 = local_18;
                pbVar13 = local_18 + -0xc;
                if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                  DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                  FUN_10c3d900(pbVar13);
                }
                if (local_34 != (int *)0x0) {
                  (**(code **)(*local_34 + 4))();
                }
              }
              iVar12 = iVar12 + 1;
              iVar6 = (**(code **)(*local_40 + 0xa0))();
            } while (iVar12 < iVar6);
          }
        }
        (**(code **)(*local_20 + 0xac))(&local_24,"vehicleexplosion");
        if (local_24 != (int *)0x0) {
          iVar12 = 0;
          iVar6 = (**(code **)(*local_24 + 0xa0))();
          if (0 < iVar6) {
            do {
              (**(code **)(*local_24 + 0xa8))(&local_28,iVar12);
              if (local_28 != (int *)0x0) {
                local_c = &DAT_1201fc98;
                local_50 = 0x3f800000;
                local_58 = 0x3f800000;
                (**(code **)(*local_28 + 0x4c))(&DAT_11dbac80,&local_c);
                (**(code **)(*local_28 + 100))("power",&local_50);
                (**(code **)(*local_28 + 100))("lifetime",&local_58);
                pcVar10 = "default";
                pbVar8 = local_c;
                do {
                  bVar1 = *pbVar8;
                  bVar14 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_10b840d0:
                    uVar9 = -(uint)bVar14 | 1;
                    goto LAB_10b840d5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar14 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_10b840d0;
                  pbVar8 = pbVar8 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                uVar9 = 0;
LAB_10b840d5:
                if (uVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x40) = local_50;
                  *(undefined4 *)(param_1 + 0x44) = local_58;
                }
                else {
                  CInfoRecord__GetModelString(&DAT_11d9d32b);
                  local_a8 = 0;
                  local_a4 = 0;
                  local_a0 = 0;
                  if (local_ac != local_c) {
                    if (*(int *)(local_ac + -0xc) < 0) {
                      pbVar8 = local_c + -0xc;
                      if (-1 < *(int *)pbVar8) {
LAB_10b84179:
                        local_ac = local_c;
                        FUN_10c3dab0(pbVar8);
                      }
                    }
                    else {
                      if (-1 < *(int *)(local_c + -0xc)) {
                        FUN_1083ac70();
                        pbVar8 = local_c + -0xc;
                        goto LAB_10b84179;
                      }
                      FUN_1083ac70();
                      local_ac = local_c;
                    }
                  }
                  piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
                  local_a0 = (**(code **)(*piVar5 + 0xc))(local_c);
                  local_a8 = local_50;
                  local_a4 = local_58;
                  FUN_10b86370(&local_ac);
                  pbVar8 = local_ac;
                  pbVar13 = local_ac + -0xc;
                  if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                    FUN_10c3d900(pbVar13);
                  }
                }
                pbVar8 = local_c;
                pbVar13 = local_c + -0xc;
                if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                  DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                  FUN_10c3d900(pbVar13);
                }
                if (local_28 != (int *)0x0) {
                  (**(code **)(*local_28 + 4))();
                }
              }
              iVar12 = iVar12 + 1;
              iVar6 = (**(code **)(*local_24 + 0xa0))();
            } while (iVar12 < iVar6);
          }
        }
        (**(code **)(*local_20 + 0xac))(&local_38,"bulletimpact");
        if (local_38 != (int *)0x0) {
          iVar12 = 0;
          iVar6 = (**(code **)(*local_38 + 0xa0))();
          if (0 < iVar6) {
            do {
              (**(code **)(*local_38 + 0xa8))(&local_30,iVar12);
              if (local_30 != (int *)0x0) {
                local_8 = &DAT_1201fc98;
                local_68 = 0x3f800000;
                local_60 = 0x3f800000;
                (**(code **)(*local_30 + 0x4c))(&DAT_11dbac80,&local_8);
                (**(code **)(*local_30 + 100))("power",&local_68);
                (**(code **)(*local_30 + 100))("lifetime",&local_60);
                pcVar10 = "default";
                pbVar8 = local_8;
                do {
                  bVar1 = *pbVar8;
                  bVar14 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_10b84308:
                    uVar9 = -(uint)bVar14 | 1;
                    goto LAB_10b8430d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar14 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_10b84308;
                  pbVar8 = pbVar8 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                uVar9 = 0;
LAB_10b8430d:
                if (uVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x50) = local_68;
                  *(undefined4 *)(param_1 + 0x54) = local_60;
                }
                else {
                  CInfoRecord__GetModelString(&DAT_11d9d32b);
                  pbVar8 = local_9c;
                  if (local_9c != local_8) {
                    pbVar13 = local_9c + -0xc;
                    if (*(int *)pbVar13 < 0) {
                      pbVar13 = local_8 + -0xc;
                      if (-1 < *(int *)pbVar13) {
LAB_10b843d2:
                        pbVar8 = local_8;
                        local_9c = local_8;
                        FUN_10c3dab0(pbVar13);
                      }
                    }
                    else {
                      if (-1 < *(int *)(local_8 + -0xc)) {
                        if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                          FUN_10c3d900(pbVar13);
                        }
                        pbVar13 = local_8 + -0xc;
                        goto LAB_10b843d2;
                      }
                      if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                        FUN_10c3d900(pbVar13);
                      }
                      local_9c = local_8;
                      pbVar8 = local_8;
                    }
                  }
                  piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
                  local_90 = (**(code **)(*piVar5 + 0xc))(local_8);
                  pbVar13 = local_9c;
                  local_94 = local_60;
                  puVar2 = *(undefined4 **)(local_b4 + 4);
                  local_98 = local_68;
                  if (puVar2 == *(undefined4 **)(local_b4 + 8)) {
                    FUN_10b85fe0(puVar2,&local_9c,&local_69,1,1);
                    pbVar8 = local_9c;
                  }
                  else {
                    if (puVar2 != (undefined4 *)0x0) {
                      if (*(int *)(pbVar8 + -0xc) < 0) {
                        *puVar2 = &DAT_1201fc98;
                      }
                      else {
                        *puVar2 = local_9c;
                        FUN_10c3dab0(pbVar8 + -0xc);
                      }
                      puVar2[1] = local_98;
                      puVar2[2] = local_94;
                      puVar2[3] = local_90;
                      pbVar8 = pbVar13;
                    }
                    *(int *)(local_b4 + 4) = *(int *)(local_b4 + 4) + 0x10;
                  }
                  pbVar13 = pbVar8 + -0xc;
                  param_1 = local_70;
                  if ((-1 < *(int *)pbVar13) &&
                     (iVar6 = FUN_10c3dad0(pbVar13), param_1 = local_70, iVar6 < 1)) {
                    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                    FUN_10c3d900(pbVar13);
                    param_1 = local_70;
                  }
                }
                pbVar8 = local_8;
                pbVar13 = local_8 + -0xc;
                if ((-1 < *(int *)pbVar13) && (iVar6 = FUN_10c3dad0(pbVar13), iVar6 < 1)) {
                  DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
                  FUN_10c3d900(pbVar13);
                }
                if (local_30 != (int *)0x0) {
                  (**(code **)(*local_30 + 4))();
                }
              }
              iVar12 = iVar12 + 1;
              iVar6 = (**(code **)(*local_38 + 0xa0))();
            } while (iVar12 < iVar6);
          }
          if (local_38 != (int *)0x0) {
            (**(code **)(*local_38 + 4))();
          }
        }
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 4))();
        }
        if (local_40 != (int *)0x0) {
          (**(code **)(*local_40 + 4))();
        }
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 4))();
        }
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 4))();
        }
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
      if (local_78 != (int *)0x0) {
        (**(code **)(*local_78 + 4))();
      }
    }
  }
  return;
}



/* ===== FUN_10b898f0 @ 10b898f0  size=678 ===== */
// strings:
//   "Properties"
//   "fWanderSpeed"
//   "fCloudHeight"
//   "Radius"
//   "fSpinImpulse"
//   "fAttractionImpulse"
//   "fUpImpulse"
//   "FunnelEffect"

/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""fWanderSpeed""
     ""fCloudHeight""
     ""Radius""
     ""fSpinImpulse""
     ""fAttractionImpulse""
     ""fUpImpulse""
     ""FunnelEffect"" */

undefined1 __fastcall FUN_10b898f0(int param_1)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  pfVar1 = (float *)(param_1 + 0x28);
  piVar7 = (int *)0x0;
  *pfVar1 = 376.0;
  *(undefined1 **)(param_1 + 0xa4) = &DAT_41200000;
  *(undefined4 *)(param_1 + 0x30) = 0x43960000;
  *(undefined1 **)(param_1 + 0xc0) = &DAT_41100000;
  *(undefined1 **)(param_1 + 0xc4) = &DAT_41500000;
  *(undefined1 **)(param_1 + 200) = &DAT_41900000;
  local_8 = (int *)0x0;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x38))();
    if (iVar4 != 0) {
      cVar2 = FUN_10a68ce0("Properties",&local_8);
      piVar7 = local_8;
      if (cVar2 != '\0') {
        FUN_10a68a10("fWanderSpeed",param_1 + 0xa4);
        FUN_10a68a10("fCloudHeight",pfVar1);
        FUN_10a68a10("Radius",param_1 + 0x30);
        FUN_10a68a10("fSpinImpulse",param_1 + 0xc0);
        FUN_10a68a10("fAttractionImpulse",param_1 + 0xc4);
        FUN_10a68a10("fUpImpulse",param_1 + 200);
        FUN_10a68bb0("FunnelEffect",&local_c);
        cVar2 = FUN_10b89ba0(local_c);
        if (cVar2 != '\0') {
          iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
          fVar10 = DAT_11cca92c;
          fVar8 = *(float *)(iVar4 + 0x14);
          local_1c = *(float *)(iVar4 + 0x24);
          fVar9 = *(float *)(iVar4 + 4) * DAT_11cca92c;
          *(undefined2 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0xbc) = 0;
          local_1c = local_1c * fVar10;
          *(ulonglong *)(param_1 + 0x98) = CONCAT44(fVar8 * fVar10,fVar9);
          *(float *)(param_1 + 0xa0) = local_1c;
          (**(code **)(**(int **)(param_1 + 0xc) + 200))(&local_18);
          fVar9 = local_18 + 0.0;
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(fStack_14,local_18);
          fVar10 = fStack_14 + 0.0;
          *(float *)(param_1 + 0x40) = local_10;
          fVar8 = *pfVar1 * DAT_11de98c8;
          *(ulonglong *)(param_1 + 0x44) = CONCAT44(fVar10,fVar9);
          *(float *)(param_1 + 0x4c) = local_10 + fVar8;
          fVar8 = *pfVar1 * DAT_11de98e8;
          *(ulonglong *)(param_1 + 0x50) = CONCAT44(fVar10,fVar9);
          *(float *)(param_1 + 0x58) = fVar8 + local_10;
          local_1c = *pfVar1 + local_10;
          *(ulonglong *)(param_1 + 0x5c) = CONCAT44(fVar10,fVar9);
          *(float *)(param_1 + 100) = local_1c;
          *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x58);
          *(ulonglong *)(param_1 + 0x68) = CONCAT44(fStack_14,local_18);
          *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_1 + 0x5c);
          *(float *)(param_1 + 0x70) = local_10;
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 100);
          puVar5 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0xc) + 200))(local_24);
          *(undefined8 *)(param_1 + 0xa8) = *puVar5;
          *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(puVar5 + 1);
          (**(code **)(**(int **)(param_1 + 4) + 0x10))(0x20);
          FUN_10b89fa0();
          uVar6 = 1;
          goto LAB_10b89b82;
        }
      }
    }
  }
  uVar6 = 0;
LAB_10b89b82:
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  return uVar6;
}



/* ===== FUN_10b8b1c0 @ 10b8b1c0  size=356 ===== */
// strings:
//   "Properties"
//   "fScale"
//   "fStrength"
//   "bEnabled"
//   "Spawning"
//   "bAutoSpawn"
//   "bSpawnOnMovement"
//   "fFrequency"
//   "Randomization"
//   "fRandomFreq"
//   "fRandomScale"
//   "fRandomStrength"
//   "fRandomOffsetX"
//   "fRandomOffsetY"

/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""fScale""
     ""fStrength""
     ""bEnabled""
     ""Spawning""
     ""bAutoSpawn""
     ""bSpawnOnMovement""
     ""fFrequency""
     ""Randomization""
     ""fRandomFreq"" */

void __thiscall FUN_10b8b1c0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(**(code **)(*param_2 + 0x150))(2);
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x38))(), iVar4 != 0)) {
    param_2 = (int *)0x0;
    cVar2 = FUN_10a68ce0("Properties",&param_2);
    piVar3 = param_2;
    if (cVar2 != '\0') {
      FUN_10a68a10("fScale",param_1);
      FUN_10a68a10("fStrength",param_1 + 4);
      FUN_10a68da0("bEnabled",param_1 + 0x18);
      param_2 = (int *)0x0;
      cVar2 = FUN_10a68ce0("Spawning",&param_2);
      piVar1 = param_2;
      if (cVar2 != '\0') {
        FUN_10a68da0("bAutoSpawn",param_1 + 0x19);
        FUN_10a68da0("bSpawnOnMovement",param_1 + 0x1a);
        FUN_10a68a10("fFrequency",param_1 + 8);
      }
      param_2 = (int *)0x0;
      cVar2 = FUN_10a68ce0("Randomization",&param_2);
      if (cVar2 != '\0') {
        FUN_10a68a10("fRandomFreq",param_1 + 0xc);
        FUN_10a68a10("fRandomScale",param_1 + 0x10);
        FUN_10a68a10("fRandomStrength",param_1 + 0x14);
        FUN_10a68a10("fRandomOffsetX",param_1 + 0x1c);
        FUN_10a68a10("fRandomOffsetY",param_1 + 0x20);
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0xc))();
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  return;
}



/* ===== FUN_10bcb9a0 @ 10bcb9a0  size=3109 ===== */
// calls: memset, _snprintf, _itoa, CInfoRecord::GetModelString
// strings:
//   "CGameCollectPoint_%08x"
//   "MHCommonArea"
//   "collect_point_net_id"
//   "collect_type"
//   "monster_net_id"
//   "monster_info_id"
//   "bind_entity_class"
//   "life_time"
//   "trigger_radius"
//   "model_filename"
//   "particlefile"
//   "Scale"
//   "Spawned"

/* [RE-AUTO c0]
   calls: memset, _snprintf, _itoa
   strings:
     ""CGameCollectPoint_%08x""
     ""MHCommonArea""
     ""collect_point_net_id""
     ""collect_type""
     ""monster_net_id""
     ""monster_info_id""
     ""bind_entity_class""
     ""life_time""
     ""trigger_radius""
     ""model_filename"" */

undefined1 __thiscall FUN_10bcb9a0(int *param_1,int *param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  float10 fVar4;
  int **ppiVar5;
  char cVar6;
  short sVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 uVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char local_354;
  undefined1 local_353 [259];
  char local_250;
  undefined1 local_24f [127];
  undefined1 local_1d0 [28];
  undefined1 local_1b4 [12];
  undefined1 local_1a8 [4];
  char *local_1a4;
  undefined4 local_1a0;
  int **local_19c;
  undefined8 local_17c;
  float local_174;
  undefined1 local_158 [24];
  int *local_140;
  char *local_134;
  undefined8 local_124;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_df;
  int local_d8;
  int *local_d0;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined1 local_94 [16];
  undefined1 *local_84;
  undefined1 *local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c [2];
  int local_64 [2];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int **local_1c;
  int *local_18;
  int *local_14;
  char local_d;
  int *local_c;
  int *local_8;
  
  local_30._4_4_ = param_1;
  FUN_10a6f680();
  local_250 = '\0';
  memset(local_24f,0,0x7f);
  param_1[0x10] = (int)param_2;
  if (param_2 != (int *)0x0) {
    local_d = '\0';
    puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x28))();
    local_124 = *puVar8;
    local_11c = *(float *)(puVar8 + 1);
    local_50 = local_11c;
    pfVar9 = (float *)(**(code **)(*(int *)param_1[0x10] + 0x1c))();
    local_50 = 1.0;
    local_118 = *pfVar9;
    fStack_114 = pfVar9[1];
    fStack_110 = pfVar9[2];
    fStack_10c = pfVar9[3];
    local_100 = 0x3f800000;
    local_108 = CONCAT44(DAT_11de9918,DAT_11de9918);
    local_354 = '\0';
    memset(local_353,0,0x103);
    _snprintf(&local_354,0x104,"CGameCollectPoint_%08x",*(undefined4 *)(param_1[0x10] + 4));
    local_134 = &local_354;
    piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
    local_140 = (int *)(**(code **)(*piVar10 + 0xc))("MHCommonArea");
    local_f8 = 2;
    local_fc = 0;
    if (*(int **)(param_1[0x10] + 0x1a8) != (int *)0x0) {
      local_df = (**(code **)(**(int **)(param_1[0x10] + 0x1a8) + 0x34))();
    }
    if (local_140 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x30))(0);
      local_24 = piVar10;
      (**(code **)(*piVar10 + 8))();
      iVar11 = (**(code **)(*local_140 + 0x1c))();
      if (iVar11 != 0) {
        local_8 = (int *)0x0;
        FUN_10a68ce0("PropertiesInstance",&local_8);
        piVar13 = local_8;
        (**(code **)(*piVar10 + 0x5c))(local_8,1,0);
        param_1 = local_30._4_4_;
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 0xc))();
          param_1 = local_30._4_4_;
        }
      }
      local_c = (int *)_itoa(*(int *)(param_1[0x10] + 4),&local_250,10);
      FUN_10bccf20("collect_point_net_id",&local_c);
      local_74 = (**(code **)(*(int *)param_1[0x10] + 0x1c8))();
      FUN_10bccf80("collect_type",&local_74);
      param_1[0x13] = ((int *)param_1[0x10])[0x5c];
      iVar11 = (**(code **)(*(int *)param_1[0x10] + 0x1c8))();
      if ((9 < iVar11) && ((iVar11 < 0xc || (iVar11 == 0xe)))) {
        local_18 = (int *)_itoa(*(int *)(param_1[0x10] + 0x1a0),&local_250,10);
        FUN_10bccf20("monster_net_id",&local_18);
        local_20 = *(undefined1 **)(param_1[0x10] + 0x1a4);
        FUN_10ab3590("monster_info_id",&local_20);
        local_1c = *(int ***)(param_1[0x10] + 0x1d8);
        FUN_10ab3600("bind_entity_class",&local_1c);
        local_14 = *(int **)(param_1[0x10] + 0x174);
        FUN_10bcceb0("life_time",&local_14);
        iVar11 = (**(code **)(*(int *)param_1[0x10] + 0x1c8))();
        if (iVar11 == 0xb) {
          FUN_10a68a10("trigger_radius",param_1 + 0x13);
        }
        else {
          iVar11 = (**(code **)(*(int *)param_1[0x10] + 0x1c8))();
          if (iVar11 == 0xe) {
            iVar11 = *(int *)(param_1[0x10] + 0x170);
          }
          else {
            local_1c = (int **)FUN_107d7df0(*(undefined4 *)(param_1[0x10] + 0x1a4));
            if (local_1c == (int **)0x0) {
LAB_10bcc1c5:
              piVar13 = (int *)FUN_11416980();
              if (piVar13 != (int *)0x0) {
                uVar12 = (**(code **)(*piVar13 + 0x18))();
                local_28 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar12);
                if (local_28 != (int *)0x0) {
                  puVar8 = (undefined8 *)(**(code **)(*local_28 + 0x94))();
                  local_124 = *puVar8;
                  local_11c = *(float *)(puVar8 + 1);
                  pfVar9 = (float *)(**(code **)(*local_28 + 0xb4))();
                  local_118 = *pfVar9;
                  fStack_114 = pfVar9[1];
                  fStack_110 = pfVar9[2];
                  fStack_10c = pfVar9[3];
                }
              }
            }
            else {
              local_84 = local_94;
              param_1[0x13] = (int)local_1c[0x24e];
              local_80 = local_84;
              FUN_100b62c0(local_1c[0x254],local_1c[0x253]);
              cVar6 = FUN_100fd0c0(local_94,&DAT_11d9d32b);
              if ((cVar6 == '\0') && (piVar13 = (int *)FUN_11416980(), piVar13 != (int *)0x0)) {
                local_20 = (undefined1 *)(**(code **)(*piVar13 + 0x18))();
                local_c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(local_20);
                if ((local_c != (int *)0x0) &&
                   ((local_14 = (int *)(**(code **)(*local_c + 0x1b8))(0), local_14 != (int *)0x0 &&
                    (local_18 = (int *)(**(code **)(*local_14 + 0x50))(), local_18 != (int *)0x0))))
                {
                  piVar13 = (int *)(**(code **)(*local_14 + 0x50))();
                  sVar7 = (**(code **)(*piVar13 + 0x10))(local_80);
                  ppiVar5 = local_1c;
                  local_8 = (int *)(int)sVar7;
                  if (local_8 != (int *)0xffffffff) {
                    local_14 = (int *)((float)local_1c[600] * DAT_11de98c0);
                    piVar13 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
                    piVar13 = (int *)(**(code **)(*piVar13 + 0x68))();
                    piVar13 = (int *)(**(code **)(*piVar13 + 0xc))(local_20);
                    if ((piVar13 == (int *)0x0) ||
                       (cVar6 = (**(code **)(*piVar13 + 200))(local_8,&local_4c), cVar6 == '\0')) {
                      iVar11 = (**(code **)(*local_18 + 0x20))(local_8);
                      local_3c = *(undefined8 *)(iVar11 + 0x10);
                      local_34 = *(float *)(iVar11 + 0x18);
                    }
                    local_40 = 1.0;
                    local_4c = 0.0;
                    local_48 = 0.0;
                    local_44 = 0.0;
                    local_3c = CONCAT44(local_3c._4_4_ + (float)ppiVar5[0x256],
                                        (float)local_3c + (float)ppiVar5[0x255]);
                    local_34 = local_34 + (float)ppiVar5[599];
                    pfVar9 = (float *)(**(code **)(*local_c + 0xd0))(local_1d0);
                    puVar8 = (undefined8 *)(**(code **)(*local_c + 200))(local_1b4);
                    fVar17 = pfVar9[2];
                    uVar2 = *puVar8;
                    fVar1 = pfVar9[3];
                    local_174 = *(float *)(puVar8 + 1);
                    fVar20 = (pfVar9[1] * local_34 - fVar17 * local_3c._4_4_) +
                             fVar1 * (float)local_3c;
                    fVar19 = (fVar17 * (float)local_3c - *pfVar9 * local_34) +
                             fVar1 * local_3c._4_4_;
                    fVar18 = (*pfVar9 * local_3c._4_4_ - pfVar9[1] * (float)local_3c) +
                             fVar1 * local_34;
                    fVar16 = pfVar9[1] * fVar18 - fVar17 * fVar19;
                    fVar17 = fVar17 * fVar20 - *pfVar9 * fVar18;
                    fVar18 = *pfVar9 * fVar19 - pfVar9[1] * fVar20;
                    local_17c._0_4_ = (float)uVar2;
                    local_17c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                    local_d = '\x01';
                    local_11c = local_174 + fVar18 + local_34 + fVar18;
                    fVar18 = (pfVar9[1] * local_44 - pfVar9[2] * local_48) + local_4c * fVar1 +
                             *pfVar9 * local_40;
                    local_18 = (int *)((pfVar9[2] * local_4c - *pfVar9 * local_44) +
                                       local_48 * fVar1 + pfVar9[1] * local_40);
                    fVar19 = (*pfVar9 * local_48 - pfVar9[1] * local_4c) + local_44 * fVar1 +
                             pfVar9[2] * local_40;
                    local_1c = &local_28;
                    local_20 = local_70;
                    local_124 = CONCAT44(local_17c._4_4_ + fVar17 + local_3c._4_4_ + fVar17,
                                         (float)local_17c + (float)local_3c + fVar16 + fVar16);
                    local_14 = (int *)((float)local_14 * DAT_11de98e8);
                    local_c = (int *)(fVar1 * local_40 -
                                     (pfVar9[1] * local_48 + *pfVar9 * local_4c +
                                     pfVar9[2] * local_44));
                    fVar4 = (float10)fcos((float10)(float)local_14);
                    fVar15 = (float10)fsin((float10)(float)local_14);
                    local_28 = (int *)(float)fVar4;
                    fVar17 = (float)fVar15;
                    local_118 = ((float)local_18 * fVar17 - fVar19 * 0.0) + (float)local_c * 0.0 +
                                fVar18 * (float)local_28;
                    fStack_114 = (fVar19 * 0.0 - fVar18 * fVar17) + (float)local_c * 0.0 +
                                 (float)local_18 * (float)local_28;
                    local_8 = (int *)(fVar18 * 0.0);
                    fStack_110 = (float)local_c * fVar17 + ((float)local_8 - (float)local_18 * 0.0)
                                 + fVar19 * (float)local_28;
                    fStack_10c = (float)local_c * (float)local_28 -
                                 (fVar19 * fVar17 + (float)local_18 * 0.0 + (float)local_8);
                    param_1 = local_30._4_4_;
                    local_17c = uVar2;
                    local_50 = local_11c;
                  }
                }
              }
              if ((local_80 != local_94) && (local_80 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(local_80);
              }
              if (local_d == '\0') goto LAB_10bcc1c5;
            }
            iVar11 = FUN_107d7df0(*(undefined4 *)(param_1[0x10] + 0x1a4));
            if (iVar11 == 0) goto LAB_10bcc275;
            iVar11 = *(int *)(iVar11 + 0x938);
          }
          param_1[0x13] = iVar11;
        }
      }
LAB_10bcc275:
      local_8 = *(int **)(param_1[0x10] + 0x1a8);
      if ((local_8 == (int *)0x0) || (iVar11 = (**(code **)(*local_8 + 4))(), iVar11 != 3)) {
        iVar11 = *(int *)(param_1[0x10] + 0x1ac);
        if ((iVar11 != 0) && (*(int *)(iVar11 + 100) != *(int *)(iVar11 + 0x60))) {
          uVar12 = CInfoRecord__GetModelString(*(int *)(iVar11 + 100));
          FUN_10a72410(uVar12);
          goto LAB_10bcc343;
        }
      }
      else {
        param_1[0x13] = local_8[0x28];
        local_64[0] = local_8[0x2e];
        FUN_10ab3600("model_filename",local_64);
        local_6c[0] = local_8[0x34];
        FUN_10ab3600("particlefile",local_6c);
        local_5c = local_8[0x3e];
        FUN_10bcceb0("Scale",&local_5c);
        uVar12 = CInfoRecord__GetModelString(local_8[0x46]);
        FUN_10a72410(uVar12);
LAB_10bcc343:
        FUN_104f6f60();
      }
      local_d0 = piVar10;
      local_8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x24))(local_158,1);
      if (local_8 != (int *)0x0) {
        iVar11 = (**(code **)(*local_8 + 4))();
        param_1[0x11] = iVar11;
        local_7c = (**(code **)(*param_2 + 0xd0))();
        local_c0 = local_118;
        fStack_bc = fStack_114;
        fStack_b8 = fStack_110;
        fStack_b4 = fStack_10c;
        local_a0 = (undefined4)local_124;
        local_9c = local_124._4_4_;
        local_98 = local_11c;
        (**(code **)(*param_1 + 0xc0))(&local_7c,&local_a0,&local_c0);
        (**(code **)(*local_8 + 0x280))(param_2);
        (**(code **)(*local_8 + 0x20))(0x10);
        piVar13 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        (**(code **)(*piVar13 + 0x22c))(local_8);
        piVar13 = *(int **)(param_1[0x10] + 0x1a8);
        if (piVar13 != (int *)0x0) {
          iVar11 = (**(code **)(*piVar13 + 4))();
          if (iVar11 == 3) {
            iVar11 = (**(code **)(*piVar13 + 0x54))();
            piVar13 = local_8;
            while (iVar11 != 0) {
              local_58 = *(undefined4 *)(iVar11 + 0x34);
              local_54 = *(undefined4 *)(iVar11 + 0x38);
              local_50 = *(float *)(iVar11 + 0x3c);
              iVar3 = *(int *)(iVar11 + 0x40);
              local_b0 = *(undefined4 *)(iVar11 + 0x24);
              uStack_ac = *(undefined4 *)(iVar11 + 0x28);
              uStack_a8 = *(undefined4 *)(iVar11 + 0x2c);
              uStack_a4 = *(undefined4 *)(iVar11 + 0x30);
              (**(code **)(*piVar13 + 0x220))
                        (iVar11,*(undefined4 *)(iVar11 + 0x20),&local_b0,&local_58);
              piVar10 = local_24;
              iVar11 = iVar3;
              param_1 = local_30._4_4_;
            }
          }
        }
        (**(code **)(*piVar10 + 0xc))();
        if (*(int **)(param_1[0x10] + 0x1a8) != (int *)0x0) {
          local_30 = (**(code **)(**(int **)(param_1[0x10] + 0x1a8) + 8))();
          iVar11 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x8c))(&local_30);
          if (iVar11 != -1) {
            piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(iVar11);
            if (piVar10 != (int *)0x0) {
              FUN_10b8ade0(0x10);
              local_1a4 = "Spawned";
              local_1a0 = 0;
              local_24 = *(int **)(param_1[0x10] + 4);
              local_19c = &local_24;
              (**(code **)(*piVar10 + 0x110))(local_1a8);
            }
          }
        }
        if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x14);
        }
        uVar14 = 1;
        goto LAB_10bcc398;
      }
      (**(code **)(*piVar10 + 0xc))();
    }
  }
  (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x40))(param_1[0x11],0);
  param_1[0x11] = -1;
  uVar14 = 0;
  param_1[0x10] = 0;
LAB_10bcc398:
  piVar10 = (int *)(local_d8 + -0xc);
  if (-1 < *piVar10) {
    iVar11 = FUN_10c3dad0(piVar10);
    if (iVar11 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_d8 + -4));
      FUN_10c3d900(piVar10);
    }
    return uVar14;
  }
  return uVar14;
}



