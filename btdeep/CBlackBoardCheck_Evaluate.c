
// ===== [d0] FUN_105f4960 @105f4960  (605 bytes) =====

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


// [d1] FUN_10a5d620 @10a5d620  (emitted in an earlier root)

// [d1] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d1] FUN_103dbbb0 @103dbbb0  (emitted in an earlier root)

// [d1] FUN_10551180 @10551180  (emitted in an earlier root)

// ===== [d1] FUN_103dbab0 @103dbab0  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dbab0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4430(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c3720();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// [d1] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// ===== [d1] FUN_10a5d8a0 @10a5d8a0  (14 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d8a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// ===== [d1] FUN_103d8550 @103d8550  (107 bytes) =====

/* [RE-AUTO c0] */

int __thiscall FUN_103d8550(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < piVar1[1] - *piVar1 >> 2) {
    iVar2 = *(int *)(*piVar1 + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    if ((param_2 < piVar1[4] - piVar1[3] >> 2) &&
       (iVar2 = *(int *)(piVar1[3] + param_2 * 4), -1 < iVar2)) {
      iVar2 = FUN_103c92b0(iVar2);
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}


// [d1] FUN_103f8050 @103f8050  (emitted in an earlier root)

// ===== [d1] FUN_103c3080 @103c3080  (25 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_103c3080(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) + 1;
  switch(uVar1) {
  case 0:
  case 7:
    uVar1 = FUN_103c4b40(param_3);
    return uVar1;
  default:
    return uVar1 & 0xffffff00;
  case 2:
    uVar1 = FUN_103c2d80(param_3);
    return uVar1;
  case 3:
    uVar1 = FUN_103c2cb0(param_3);
    return uVar1;
  case 4:
    uVar1 = FUN_103c4870(param_3);
    return uVar1;
  case 5:
    uVar1 = FUN_103c4960(param_3);
    return uVar1;
  case 6:
    uVar1 = FUN_103c4a50(param_3);
    return uVar1;
  }
}


// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)

// [d2] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// ===== [d2] FUN_105fc040 @105fc040  (29 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_105fc040(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return 1;
}


// ===== [d2] FUN_10551110 @10551110  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10551110(void)

{
  uint uVar1;
  
  if (DAT_113cc83c == 0xffffffff) {
    DAT_113cc83c = 10;
  }
  else {
    uVar1 = DAT_113cc83c;
    if ((int)DAT_113cc83c < 1) goto LAB_10551138;
  }
  DAT_113cc83c = DAT_113cc83c - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10551138:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550f00 @10550f00  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550f00(void)

{
  uint uVar1;
  
  if (DAT_113cc840 == 0xffffffff) {
    DAT_113cc840 = 10;
  }
  else {
    uVar1 = DAT_113cc840;
    if ((int)DAT_113cc840 < 1) goto LAB_10550f28;
  }
  DAT_113cc840 = DAT_113cc840 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550f28:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10551140 @10551140  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10551140(void)

{
  uint uVar1;
  
  if (DAT_113cc844 == 0xffffffff) {
    DAT_113cc844 = 10;
  }
  else {
    uVar1 = DAT_113cc844;
    if ((int)DAT_113cc844 < 1) goto LAB_10551168;
  }
  DAT_113cc844 = DAT_113cc844 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10551168:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550ed0 @10550ed0  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550ed0(void)

{
  uint uVar1;
  
  if (DAT_113cc848 == 0xffffffff) {
    DAT_113cc848 = 10;
  }
  else {
    uVar1 = DAT_113cc848;
    if ((int)DAT_113cc848 < 1) goto LAB_10550ef8;
  }
  DAT_113cc848 = DAT_113cc848 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550ef8:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550e70 @10550e70  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550e70(void)

{
  uint uVar1;
  
  if (DAT_113cc84c == 0xffffffff) {
    DAT_113cc84c = 10;
  }
  else {
    uVar1 = DAT_113cc84c;
    if ((int)DAT_113cc84c < 1) goto LAB_10550e98;
  }
  DAT_113cc84c = DAT_113cc84c - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550e98:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550ea0 @10550ea0  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550ea0(void)

{
  uint uVar1;
  
  if (DAT_113cc850 == 0xffffffff) {
    DAT_113cc850 = 10;
  }
  else {
    uVar1 = DAT_113cc850;
    if ((int)DAT_113cc850 < 1) goto LAB_10550ec8;
  }
  DAT_113cc850 = DAT_113cc850 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550ec8:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550f60 @10550f60  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550f60(void)

{
  uint uVar1;
  
  if (DAT_113cc854 == 0xffffffff) {
    DAT_113cc854 = 10;
  }
  else {
    uVar1 = DAT_113cc854;
    if ((int)DAT_113cc854 < 1) goto LAB_10550f88;
  }
  DAT_113cc854 = DAT_113cc854 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550f88:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_10550f30 @10550f30  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_10550f30(void)

{
  uint uVar1;
  
  if (DAT_113cc858 == 0xffffffff) {
    DAT_113cc858 = 10;
  }
  else {
    uVar1 = DAT_113cc858;
    if ((int)DAT_113cc858 < 1) goto LAB_10550f58;
  }
  DAT_113cc858 = DAT_113cc858 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_10550f58:
  return uVar1 & 0xffffff00;
}


// [d2] FUN_101c4430 @101c4430  (emitted in an earlier root)

// [d2] FUN_101c3720 @101c3720  (emitted in an earlier root)

// ===== [d2] FUN_103c92b0 @103c92b0  (420 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103c92b0(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&uStack_54;
  if ((int)param_2 < 0) {
LAB_103c959f:
    FUN_112bed8e();
    return;
  }
  if ((int)param_2 < 1000000) {
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      FUN_112bed8e();
      return;
    }
    goto LAB_103c959f;
  }
  uVar1 = param_2 - 1000000;
  if ((((*(char *)(param_1 + 0x60) == '\0') || (*(int **)(param_1 + 0x1c) == (int *)0x0)) ||
      (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))
                                 (*(undefined4 *)(param_1 + 0x5c)), piVar2 == (int *)0x0)) ||
     (piVar2 = (int *)(**(code **)(*piVar2 + 4))(), piVar2 == (int *)0x0)) goto LAB_103c959f;
  puStack_38 = auStack_48;
  auStack_48[0] = 0;
  uStack_30 = 0;
  uStack_4c = 0;
  puStack_34 = puStack_38;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,uVar1);
  uStack_54 = *puVar3;
  if (puVar3 + 1 != &uStack_50) {
    FUN_100282d0(puVar3[6],puVar3[5]);
  }
  puStack_38 = (undefined1 *)puVar3[7];
  if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
    FUN_10653dc0(puStack_1c);
  }
  if ((uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2) <= uVar1) {
    FUN_103c59e0(param_2 - 999999,&stack0xffffffa4);
  }
  iVar4 = *(int *)(uVar1 * 4 + *(int *)(param_1 + 0x44));
  if (iVar4 == 0) {
    switch(puStack_38) {
    case (undefined1 *)0x0:
      iVar4 = FUN_10653d70(0x20);
      if (iVar4 != 0) {
        uVar5 = FUN_103cacf0(&stack0xffffffa4);
        FUN_103c5b00(uVar5);
        goto LAB_103c9570;
      }
      break;
    case (undefined1 *)0x1:
      iVar4 = FUN_10653d70(0x20);
      if (iVar4 != 0) {
        uVar5 = FUN_103cacf0(&uStack_54);
        FUN_103c5b00(uVar5);
        goto LAB_103c9570;
      }
      break;
    case (undefined1 *)0x2:
      iVar4 = FUN_10653d70(0x20);
      if (iVar4 != 0) {
        uVar5 = FUN_103cac30(&uStack_54);
        FUN_103c5b00(uVar5);
        goto LAB_103c9570;
      }
      break;
    case (undefined1 *)0x3:
      iVar4 = FUN_10653d70(0x20);
      if (iVar4 != 0) {
        uVar5 = FUN_103cac70(&uStack_54);
        FUN_103c5b00(uVar5);
        goto LAB_103c9570;
      }
      break;
    case (undefined1 *)0x4:
      iVar4 = FUN_10653d70(0x20);
      if (iVar4 != 0) {
        FUN_10a5d560(&uStack_50);
        uVar5 = FUN_103ca360(&stack0xffffffa4);
        FUN_103c5b00(uVar5);
        goto LAB_103c9570;
      }
      break;
    default:
      goto LAB_103c956e;
    }
    FUN_103c5b00(0);
  }
  else {
    switch(*(undefined4 *)(iVar4 + 0xc)) {
    case 1:
      if (puStack_38 == (undefined1 *)0x4) {
        puVar3 = (undefined4 *)FUN_10a5d560(&uStack_50);
        FUN_10a5d8a0(*puVar3);
        goto LAB_103c9570;
      }
      break;
    case 2:
      if (puStack_38 == (undefined1 *)0x2) {
        *(undefined4 *)(iVar4 + 0x1c) = uStack_54;
        goto LAB_103c9570;
      }
      break;
    case 3:
      if (puStack_38 == (undefined1 *)0x3) {
        *(undefined1 *)(iVar4 + 0x1c) = (undefined1)uStack_54;
        goto LAB_103c9570;
      }
      break;
    case 5:
      if (puStack_38 == (undefined1 *)0x0) {
        *(int *)(iVar4 + 0x1c) = (int)(short)uStack_54;
        goto LAB_103c9570;
      }
      if (puStack_38 == (undefined1 *)0x1) {
        *(undefined4 *)(iVar4 + 0x1c) = uStack_54;
        goto LAB_103c9570;
      }
    }
LAB_103c956e:
  }
LAB_103c9570:
  if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
    FUN_10653dc0(puStack_3c);
  }
  FUN_112bed8e();
  return;
}


// [d2] FUN_101c35a0 @101c35a0  (emitted in an earlier root)

// [d2] FUN_101c4190 @101c4190  (emitted in an earlier root)

// ===== [d2] FUN_103c2d80 @103c2d80  (190 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c2d80(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  FUN_10a5d660();
  FUN_10a5d660();
  uVar2 = FUN_101cec60(&local_c);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_101cec60(&local_8);
    if ((char)uVar2 != '\0') {
      cVar1 = FUN_10a5d8d0(&DAT_113bed9c);
      if (cVar1 != '\0') {
        iVar3 = FUN_10a5f090(&local_8);
        return (uint)(iVar3 == 0);
      }
      cVar1 = FUN_10a5d8d0(&DAT_113a33e4);
      if (cVar1 != '\0') {
        return (uint)(local_c < local_8);
      }
      uVar2 = FUN_10a5d8d0(&DAT_113a3314);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_10a5d940();
        uVar4 = FUN_10a5d940();
        return (uint)(uVar2 < uVar4);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


// ===== [d2] FUN_103c4870 @103c4870  (230 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c4870(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_101c4350(&DAT_116fad08);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_101c4350(&DAT_116facc4);
    if ((char)uVar1 != '\0') {
      if ((DAT_116faccc & 1) == 0) {
        DAT_116faccc = DAT_116faccc | 1;
        FUN_10a5d620(&DAT_113bed9c);
      }
      if ((DAT_116faccc & 2) == 0) {
        DAT_116faccc = DAT_116faccc | 2;
        FUN_10a5d620(&DAT_113a3314);
      }
      if ((DAT_116faccc & 4) == 0) {
        DAT_116faccc = DAT_116faccc | 4;
        FUN_10a5d620(&DAT_113a33e4);
      }
      uVar1 = *param_1;
      if (uVar1 == DAT_116facf0) {
        return (uint)(DAT_116fad08 == DAT_116facc4);
      }
      if (uVar1 == DAT_116fac98) {
        return (uint)(DAT_116fad08 < DAT_116facc4);
      }
      if (uVar1 == DAT_116fac78) {
        return (uint)(DAT_116facc4 < DAT_116fad08);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_103c2cb0 @103c2cb0  (202 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c2cb0(void)

{
  char cVar1;
  uint uVar2;
  float unaff_ESI;
  undefined1 local_10 [12];
  
  uVar2 = FUN_101c4190();
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_101c4190();
    if ((char)uVar2 != '\0') {
      cVar1 = FUN_10a5d8d0();
      if (cVar1 != '\0') {
        return (uint)((double)(float)(double)((ulonglong)(double)((float)local_10 - unaff_ESI) &
                                             DAT_113c13f0) < DAT_113c12b0);
      }
      cVar1 = FUN_10a5d8d0(&DAT_113a33e4);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar2 = FUN_10a5d8d0(&DAT_113a3314);
      if ((char)uVar2 != '\0') {
        return (uint)((float)local_10 < 1.4824918e-28);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


// ===== [d2] FUN_103c4960 @103c4960  (230 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c4960(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_103c3fd0(&DAT_116facd8);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_103c3fd0(&DAT_116faca4);
    if ((char)uVar1 != '\0') {
      if ((DAT_116facf8 & 1) == 0) {
        DAT_116facf8 = DAT_116facf8 | 1;
        FUN_10a5d620(&DAT_113bed9c);
      }
      if ((DAT_116facf8 & 2) == 0) {
        DAT_116facf8 = DAT_116facf8 | 2;
        FUN_10a5d620(&DAT_113a3314);
      }
      if ((DAT_116facf8 & 4) == 0) {
        DAT_116facf8 = DAT_116facf8 | 4;
        FUN_10a5d620(&DAT_113a33e4);
      }
      uVar1 = *param_1;
      if (uVar1 == DAT_116fac7c) {
        return (uint)(DAT_116facd8 == DAT_116faca4);
      }
      if (uVar1 == DAT_116facec) {
        return (uint)(DAT_116facd8 < DAT_116faca4);
      }
      if (uVar1 == DAT_116fac6c) {
        return (uint)(DAT_116faca4 < DAT_116facd8);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_103c4a50 @103c4a50  (234 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c4a50(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_101c4280(&DAT_116facf4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_101c4280(&DAT_116faca8);
    if ((char)uVar1 != '\0') {
      if ((DAT_116face0 & 1) == 0) {
        DAT_116face0 = DAT_116face0 | 1;
        FUN_10a5d620(&DAT_113bed9c);
      }
      if ((DAT_116face0 & 2) == 0) {
        DAT_116face0 = DAT_116face0 | 2;
        FUN_10a5d620(&DAT_113a3314);
      }
      if ((DAT_116face0 & 4) == 0) {
        DAT_116face0 = DAT_116face0 | 4;
        FUN_10a5d620(&DAT_113a33e4);
      }
      uVar1 = *param_1;
      if (uVar1 == DAT_116fac8c) {
        return (uint)(DAT_116facf4 == DAT_116faca8);
      }
      if (uVar1 == DAT_116face8) {
        return (uint)(DAT_116facf4 < DAT_116faca8);
      }
      if (uVar1 == DAT_116facac) {
        return (uint)(DAT_116faca8 < DAT_116facf4);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_103c4b40 @103c4b40  (230 bytes) =====

/* [RE-AUTO c0] */

uint FUN_103c4b40(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_101c4430(&DAT_116facd4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_101c4430(&DAT_116fac5c);
    if ((char)uVar1 != '\0') {
      if ((DAT_116facb4 & 1) == 0) {
        DAT_116facb4 = DAT_116facb4 | 1;
        FUN_10a5d620(&DAT_113bed9c);
      }
      if ((DAT_116facb4 & 2) == 0) {
        DAT_116facb4 = DAT_116facb4 | 2;
        FUN_10a5d620(&DAT_113a3314);
      }
      if ((DAT_116facb4 & 4) == 0) {
        DAT_116facb4 = DAT_116facb4 | 4;
        FUN_10a5d620(&DAT_113a33e4);
      }
      uVar1 = *param_1;
      if (uVar1 == DAT_116fac84) {
        return (uint)(DAT_116facd4 == DAT_116fac5c);
      }
      if (uVar1 == DAT_116fac60) {
        return (uint)(DAT_116facd4 < DAT_116fac5c);
      }
      if (uVar1 == DAT_116fac88) {
        return (uint)(DAT_116fac5c < DAT_116facd4);
      }
    }
  }
  return uVar1 & 0xffffff00;
}

