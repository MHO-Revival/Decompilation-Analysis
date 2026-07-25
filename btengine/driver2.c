
//######## s9_common_10494cf0 ########

/* [RE-AUTO c0] */

void __thiscall FUN_10494cf0(int param_1,char param_2)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x10494d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
    return;
  }
  return;
}


//######## s3_10493e20 ########

/* [RE-AUTO c0] */

byte __fastcall FUN_10493e20(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  bVar2 = 1;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 != *(undefined4 **)(param_1 + 0x14)) {
    do {
      cVar1 = (**(code **)(*(int *)*puVar3 + 0xc))();
      puVar3 = puVar3 + 1;
      bVar2 = bVar2 & -(cVar1 != '\0');
    } while (puVar3 != *(undefined4 **)(param_1 + 0x14));
  }
  return bVar2;
}


//######## s6_10493e50 ########

/* [RE-AUTO c0] */

void __fastcall FUN_10493e50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//######## s17_10494f00 ########

/* [RE-AUTO c0] */

void FUN_10494f00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x10);
}


//######## s18_10494f90 ########

/* [RE-AUTO c0]
   calls: _snprintf_s */

void __thiscall FUN_10494f90(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 ***pppuVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined1 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int **ppiStack_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 *puStack_c0;
  int ***pppiStack_bc;
  int ***pppiStack_b8;
  undefined1 *puStack_b4;
  undefined1 **ppuStack_b0;
  undefined1 **ppuStack_ac;
  undefined1 **ppuStack_a4;
  undefined1 **ppuStack_a0;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppiStack_cc;
  local_c4 = param_2;
  if (*(char *)(*(int *)(param_1 + 0x44) + 0xc) == '\0') {
    puStack_e4 = local_c8;
    piStack_dc = (int *)0x0;
    piStack_e0 = (int *)&DAT_11dbb0fc;
    piStack_e8 = (int *)0x10494fdf;
    (**(code **)(**(int **)(DAT_123bb90c + 8) + 4))();
    ppuStack_a4 = &puStack_b4;
    puStack_b4 = (undefined1 *)((uint)puStack_b4 & 0xffffff00);
    piStack_e8 = (int *)0x10494ff8;
    ppuStack_a0 = ppuStack_a4;
    uStack_ec = (int *)FUN_11317f30();
    pppiStack_bc = &ppiStack_cc;
    piVar5 = uStack_ec;
    do {
      piStack_e8 = piVar5;
      piVar5 = (int *)((int)piStack_e8 + 1);
    } while ((char)*piStack_e8 != '\0');
    pppiStack_b8 = pppiStack_bc;
    FUN_100b62c0();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100e2390();
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_100b62c0();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((puStack_c0 != &stack0xffffff2c) && (puStack_c0 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    uVar4 = 0;
    iVar2 = param_3[1] - *param_3 >> 0x1f;
    if ((param_3[1] - *param_3) / 0x18 + iVar2 != iVar2) {
      do {
        _snprintf_s((char *)&ppuStack_a4,0x7f,0xffffffff,"%s/");
        pppuVar3 = &ppuStack_a4;
        do {
          cVar1 = *(char *)pppuVar3;
          pppuVar3 = (undefined1 ***)((int)pppuVar3 + 1);
        } while (cVar1 != '\0');
        FUN_100d9260();
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((param_3[1] - *param_3) / 0x18));
    }
    iVar2 = param_3[1];
    if (iVar2 != *param_3) {
      param_3[1] = iVar2 + -0x18;
      if ((*(int *)(iVar2 + -4) != iVar2 + -0x18) && (*(int *)(iVar2 + -4) != 0)) {
        FUN_10c3d5d0();
      }
    }
    (**(code **)(*piStack_dc + 0xa4))();
    (**(code **)(*(int *)*piStack_e0 + 0x60))();
    if ((puStack_b4 != local_c8) && (puStack_b4 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
      FUN_11a89daa();
      return;
    }
  }
  else {
    piStack_dc = (int *)0x1049518e;
    piStack_e0 = (int *)FUN_11317f30();
    ppuStack_b0 = &puStack_c0;
    piVar5 = piStack_e0;
    do {
      piStack_dc = piVar5;
      piVar5 = (int *)((int)piStack_dc + 1);
    } while ((char)*piStack_dc != '\0');
    puStack_e4 = (undefined1 *)0x104951b8;
    ppuStack_ac = ppuStack_b0;
    FUN_100b62c0();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100e2390(iVar2,&piStack_e0,(int)&uStack_ec + 3);
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_100b62c0();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((ppiStack_cc != &piStack_e0) && (ppiStack_cc != (int **)0x0)) {
      FUN_10c3d5d0();
    }
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    piVar5 = (int *)0x0;
    piStack_e8 = (int *)((uint)((int)*(undefined4 **)(param_1 + 0x14) + (3 - (int)puVar6)) >> 2);
    if (*(undefined4 **)(param_1 + 0x14) < puVar6) {
      piStack_e8 = (int *)0x0;
    }
    if (piStack_e8 != (int *)0x0) {
      do {
        (**(code **)(*(int *)*puVar6 + 0x48))();
        piVar5 = (int *)((int)piVar5 + 1);
        puVar6 = puVar6 + 1;
      } while (piVar5 != piStack_e8);
    }
    iVar2 = param_3[1];
    if (iVar2 != *param_3) {
      param_3[1] = iVar2 + -0x18;
      if ((*(int *)(iVar2 + -4) != iVar2 + -0x18) && (*(int *)(iVar2 + -4) != 0)) {
        FUN_10c3d5d0();
      }
    }
  }
  FUN_11a89daa();
  return;
}


//######## advance_10494ab0 ########

/* [RE-AUTO c0] */

void __fastcall FUN_10494ab0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int **)(param_1[8] + 0xc4) = param_1;
  (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1[0x11] + 0xc) = 1;
  piVar1 = *(int **)(param_1[8] + 200);
  while ((piVar1 != (int *)0x0 && (piVar1 == param_1))) {
    iVar2 = param_1[8];
    uVar3 = *(undefined4 *)(iVar2 + 0xd0);
    *(undefined4 *)(iVar2 + 200) = 0;
    *(undefined4 *)(iVar2 + 0xd0) = 2;
    (**(code **)(*param_1 + 0x2c))(uVar3);
    piVar1 = *(int **)(param_1[8] + 200);
  }
  return;
}


//######## rnd_pick_104c0e60 ########

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: __allmul, rand */

uint __fastcall FUN_104c0e60(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  lVar8 = __allmul(DAT_11e22898,DAT_11e2289c,0x343fd,0);
  DAT_11e22898 = (uint)(lVar8 + 0x269ec3);
  fVar7 = 0.0;
  DAT_11e2289c = (int)((ulonglong)(lVar8 + 0x269ec3) >> 0x20);
  uVar6 = 0;
  uVar2 = DAT_11e22898 >> 0x10 | DAT_11e2289c * 0x10000;
  if (0 < iVar1) {
    pfVar3 = *(float **)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x60) - (int)pfVar3;
    do {
      fVar7 = fVar7 + *(float *)(iVar4 + (int)pfVar3) + *pfVar3;
      if ((float)((double)(int)uVar2 + (double)(&DAT_11de9c60)[-((int)uVar2 >> 0x1f)]) *
          _DAT_11de98a4 * DAT_11de9a30 < fVar7) {
        uVar5 = 0;
        *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x10) + uVar6 * 4;
        uVar2 = DAT_11de9c90;
        if (uVar6 != *(uint *)(param_1 + 0x6c)) {
          if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2 != 0) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x60) + uVar5 * 4) = 0;
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2));
          }
          *(uint *)(param_1 + 0x6c) = uVar6;
          return uVar6;
        }
        do {
          if (uVar5 == uVar6) {
            *(uint *)(*(int *)(param_1 + 0x60) + uVar5 * 4) =
                 *(uint *)(*(int *)(param_1 + 0x54) + uVar5 * 4) ^ uVar2;
          }
          else {
            *(float *)(*(int *)(param_1 + 0x60) + uVar5 * 4) =
                 *(float *)(*(int *)(param_1 + 0x54) + uVar6 * 4) / (float)(iVar1 + -1);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar1);
        *(uint *)(param_1 + 0x6c) = uVar6;
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      pfVar3 = pfVar3 + 1;
    } while ((int)uVar6 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x10);
  uVar2 = rand();
  uVar2 = uVar2 % (uint)(iVar1 - iVar4 >> 2);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x10) + uVar2 * 4;
  return uVar2;
}


//######## base_s10_1047b490 ########

undefined4 FUN_1047b490(void)

{
  return 0;
}


//######## s5_10264a30 ########

undefined1 FUN_10264a30(void)

{
  return 1;
}


//######## rnd_ctor_104c02a0 ########

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_104c02a0(undefined4 *param_1,undefined4 param_2)

{
  FUN_104930e0(param_2);
  *param_1 = &PTR_FUN_11dbc1b8;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}


//######## base_ctor_104930e0 ########

/* WARNING: Removing unreachable block (ram,0x10493163) */
/* [RE-AUTO c0]
   calls: memmove */

void __thiscall FUN_104930e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_11dbae74;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_11316910();
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[1] = DAT_123bb91c;
  DAT_123bb91c = DAT_123bb91c + 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = 0;
  param_1[2] = param_2;
  param_1[9] = 0xffffffff;
  param_1[8] = 0;
  param_1[0xd] = 0;
  if (param_1[4] != param_1[5]) {
    param_1[5] = param_1[4];
  }
  param_1[3] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x10);
}

