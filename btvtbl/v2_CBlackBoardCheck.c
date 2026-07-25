// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CBlackBoardCheck vtbl[4] @105f4960 =====

undefined4 FUN_105f4960(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  float fVar8;
  float afStack_24 [4];
  int iStack_14;
  
  iVar3 = FUN_103d8550(3);
  if (iVar3 != 0) {
    if ((DAT_113f38fc & 1) == 0) {
      DAT_113f38fc = DAT_113f38fc | 1;
      FUN_10a5d620(&DAT_113bed9c);
    }
    if ((*(int *)(iVar3 + 0xc) == 0) && (cVar2 = FUN_103f8050(0,afStack_24 + 3), cVar2 != '\0')) {
      cVar2 = FUN_10551180(afStack_24);
      if (cVar2 != '\0') {
        iStack_14 = 0;
        cVar2 = FUN_103dbab0(1,&iStack_14);
        if (cVar2 == '\0') {
          fVar8 = SQRT(afStack_24[0] * afStack_24[0] + afStack_24[1] * afStack_24[1] +
                       afStack_24[2] * afStack_24[2]);
        }
        else {
          fVar8 = afStack_24[iStack_14];
        }
        fVar8 = fVar8 - afStack_24[3];
        if ((DAT_113f38fc & 2) == 0) {
          DAT_113f38fc = DAT_113f38fc | 2;
          FUN_10a5d660();
        }
        cVar2 = FUN_103dbbb0(2,&DAT_113f3900);
        if (cVar2 == '\0') {
          FUN_10a5d8a0(DAT_113f38f8);
        }
        if (fVar8 < DAT_113c1280) {
          pbVar6 = &DAT_113a33e4;
          pbVar4 = (byte *)FUN_10a5ec80();
          do {
            bVar1 = *pbVar4;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_105f4ab7:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_105f4abc;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_105f4ab7;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_105f4abc:
          if (uVar5 == 0) {
            return 2;
          }
        }
        if (fVar8 == DAT_113c1280) {
          pbVar6 = &DAT_113bed9c;
          pbVar4 = (byte *)FUN_10a5ec80();
          do {
            bVar1 = *pbVar4;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_105f4b08:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_105f4b0d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_105f4b08;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_105f4b0d:
          if (uVar5 == 0) {
            return 2;
          }
        }
        if (DAT_113c1280 < fVar8) {
          pbVar6 = &DAT_113a3314;
          pbVar4 = (byte *)FUN_10a5ec80();
          do {
            bVar1 = *pbVar4;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_105f4b60:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_105f4b65;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_105f4b60;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_105f4b65:
          if (uVar5 == 0) {
            return 2;
          }
        }
      }
    }
    else {
      afStack_24[3] = (float)FUN_103d8550(0);
      if (afStack_24[3] != 0.0) {
        switch(*(undefined4 *)(iVar3 + 0xc)) {
        case 1:
        case 3:
          cVar2 = FUN_103c3080(afStack_24[3],&DAT_113f38f8);
          if (cVar2 != '\0') {
            return 2;
          }
          break;
        case 2:
        case 4:
        case 5:
        case 6:
          if ((DAT_113f38fc & 4) == 0) {
            DAT_113f38fc = DAT_113f38fc | 4;
            FUN_10a5d660();
          }
          cVar2 = FUN_103dbbb0(2,&DAT_113f3904);
          if (cVar2 == '\0') {
            FUN_10a5d8a0(DAT_113f38f8);
          }
          cVar2 = FUN_103c3080(afStack_24[3],&DAT_113f3904);
          if (cVar2 != '\0') {
            return 2;
          }
        }
      }
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CBlackBoardCheck vtbl[7] @10621470 =====

char * FUN_10621470(void)

{
  return "CBlackBoardCheck";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CBlackBoardCheck vtbl[10] @10623030 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10623030(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CBlackBoardCheck vtbl[13] @105f4e50 =====

void FUN_105f4e50(void)

{
  int iVar1;
  
  iVar1 = FUN_103d8550(3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_103d8720(0,*(int *)(iVar1 + 0xc));
      return;
    }
    FUN_103d8720(0,2);
  }
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
