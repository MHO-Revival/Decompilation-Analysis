// ===== slot[0] (off 0x0) @ 103dc890  FUN_103dc890 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103dc890(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_113bf294;
  FUN_103d7de0();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// ===== slot[1] (off 0x4) @ 103dc6c0  FUN_103dc6c0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc6c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}


// ===== slot[2] (off 0x8) @ 103dc930  FUN_103dc930 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dc930(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = param_1[8];
  if (((iVar3 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar3 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar3 + 0xfc) = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x28))();
  param_1[0xd] = iVar3;
  (**(code **)(*(int *)param_1[8] + 0x14))(iVar3);
  (**(code **)(*(int *)param_1[8] + 0x18))(0);
  if ((iVar3 == 2) || (iVar3 == 1)) {
    (**(code **)(*(int *)param_1[8] + 0x18))(1);
    iVar1 = *(int *)(param_1[8] + 0xc0);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        bVar4 = param_1[0x17] == 1;
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        bVar4 = param_1[0x17] == 2;
      }
      if (!bVar4) {
        return;
      }
    }
    iVar1 = param_1[2];
    iVar2 = *(int *)(iVar1 + 0x20);
    *(int *)(iVar2 + 0xd0) = iVar3;
    *(int *)(iVar2 + 200) = iVar1;
  }
  return;
}


// ===== slot[3] (off 0xc) @ 103d8a10  FUN_103d8a10 =====

/* [RE-AUTO c0] */

byte __fastcall FUN_103d8a10(int param_1)

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


// ===== slot[4] (off 0x10) @ 103dc9d0  FUN_103dc9d0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dc9d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x103dc9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}


// ===== slot[6] (off 0x18) @ 103d8a40  FUN_103d8a40 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d8a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_10653d70(0x24);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_103d8a90(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ===== slot[8] (off 0x20) @ 103dca70  FUN_103dca70 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dca70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  return;
}


// ===== slot[9] (off 0x24) @ 103dc9e0  FUN_103dc9e0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc9e0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar1 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar1 + 0xfc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x103dca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
    return;
  }
  return;
}


// ===== slot[15] (off 0x3c) @ 103dc830  FUN_103dc830 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc830(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  (**(code **)(*param_1 + 0x38))();
  pcVar1 = (code *)(**(code **)(*param_3 + 8))(param_1 + 0x16,param_2,param_1[0x15],param_1);
  (*pcVar1)();
  return;
}


// ===== slot[16] (off 0x40) @ 103dc700  FUN_103dc700 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc700(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60);
    cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
      FUN_103d9340(param_2);
      (**(code **)(*param_2 + 0x20))(param_1);
      (**(code **)(*param_2 + 0x20))(param_1);
      goto LAB_103dc78d;
    }
  }
  else {
    cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar2 != '\0') {
      FUN_103d9340(param_2);
      goto LAB_103dc78d;
    }
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
  }
  FUN_103d9340(param_2);
  (**(code **)(*param_2 + 0x20))(param_1);
LAB_103dc78d:
  cVar2 = (**(code **)(*param_2 + 0x50))(param_1 + 0x58,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_2 + 8))();
    if (cVar2 == '\0') {
      uVar3 = FUN_10a5ec90();
    }
    else {
      uVar3 = FUN_10a5f9d0();
    }
    iVar1 = *param_2;
    uVar3 = FUN_10a5ec80(uVar3,1);
    (**(code **)(iVar1 + 0x4c))(uVar3);
  }
  return;
}


// ===== slot[17] (off 0x44) @ 103d9af0  FUN_103d9af0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d9af0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)FUN_10653d70(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
    *puVar3 = &PTR_FUN_113bf23c;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 2) != '\0')) {
    puVar3[1] = puVar3[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 **)(param_1 + 0x44) = puVar3;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar5 = 0;
  uVar4 = (uint)((int)*(undefined4 **)(param_1 + 0x14) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x14) < puVar3) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x44))();
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}


// ===== slot[18] (off 0x48) @ 103d9b80  FUN_103d9b80 =====

/* [RE-AUTO c0]
   calls: _snprintf_s */

void __thiscall FUN_103d9b80(int param_1,undefined4 param_2,int *param_3)

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
  
  local_c = DAT_113dd8c0 ^ (uint)&ppiStack_cc;
  local_c4 = param_2;
  if (*(char *)(*(int *)(param_1 + 0x44) + 0xc) == '\0') {
    puStack_e4 = local_c8;
    piStack_dc = (int *)0x0;
    piStack_e0 = (int *)&DAT_113bf21c;
    piStack_e8 = (int *)0x103d9bcf;
    (**(code **)(**(int **)(DAT_116f75dc + 8) + 4))();
    ppuStack_a4 = &puStack_b4;
    puStack_b4 = (undefined1 *)((uint)puStack_b4 & 0xffffff00);
    piStack_e8 = (int *)0x103d9be8;
    ppuStack_a0 = ppuStack_a4;
    uStack_ec = (int *)FUN_10a5ec80();
    pppiStack_bc = &ppiStack_cc;
    piVar5 = uStack_ec;
    do {
      piStack_e8 = piVar5;
      piVar5 = (int *)((int)piStack_e8 + 1);
    } while ((char)*piStack_e8 != '\0');
    pppiStack_b8 = pppiStack_bc;
    FUN_1001ea30();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100208d0();
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_1001ea30();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((puStack_c0 != &stack0xffffff2c) && (puStack_c0 != (undefined1 *)0x0)) {
      FUN_10653dc0();
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
        FUN_10028a60();
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((param_3[1] - *param_3) / 0x18));
    }
    iVar2 = param_3[1];
    if (iVar2 != *param_3) {
      param_3[1] = iVar2 + -0x18;
      if ((*(int *)(iVar2 + -4) != iVar2 + -0x18) && (*(int *)(iVar2 + -4) != 0)) {
        FUN_10653dc0();
      }
    }
    (**(code **)(*piStack_dc + 0xa4))();
    (**(code **)(*(int *)*piStack_e0 + 0x60))();
    if ((puStack_b4 != local_c8) && (puStack_b4 != (undefined1 *)0x0)) {
      FUN_10653dc0();
    }
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
      FUN_112bed8e();
      return;
    }
  }
  else {
    piStack_dc = (int *)0x103d9d7e;
    piStack_e0 = (int *)FUN_10a5ec80();
    ppuStack_b0 = &puStack_c0;
    piVar5 = piStack_e0;
    do {
      piStack_dc = piVar5;
      piVar5 = (int *)((int)piStack_dc + 1);
    } while ((char)*piStack_dc != '\0');
    puStack_e4 = (undefined1 *)0x103d9da8;
    ppuStack_ac = ppuStack_b0;
    FUN_1001ea30();
    iVar2 = param_3[1];
    if (iVar2 == param_3[2]) {
      FUN_100208d0(iVar2,&piStack_e0,(int)&uStack_ec + 3);
    }
    else {
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar2;
        *(int *)(iVar2 + 0x14) = iVar2;
        FUN_1001ea30();
      }
      param_3[1] = param_3[1] + 0x18;
    }
    if ((ppiStack_cc != &piStack_e0) && (ppiStack_cc != (int **)0x0)) {
      FUN_10653dc0();
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
        FUN_10653dc0();
      }
    }
  }
  FUN_112bed8e();
  return;
}


// ===== slot[0] (off 0x0) @ 105f0a30  FUN_105f0a30 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_105f0a30(undefined4 param_1,byte param_2)

{
  FUN_105f0540();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// ===== slot[10] (off 0x28) @ 105ed910  FUN_105ed910 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ed910(int param_1)

{
  int *piVar1;
  char cVar2;
  int local_8;
  
  local_8 = param_1;
  FUN_105ed990(&local_8);
  cVar2 = FUN_103d8660(2);
  if ((((cVar2 != '\0') &&
       (piVar1 = *(int **)(param_1 + 0x2c), 2 < (uint)(piVar1[1] - *piVar1 >> 2))) &&
      (8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar1[3] + 8))) {
    FUN_103d8940(*(int *)(piVar1[3] + 8),&local_8);
    FUN_101cbef0();
  }
  return 2;
}


// ===== slot[16] (off 0x40) @ 105f0b30  FUN_105f0b30 =====

/* [RE-AUTO c0] */

void __thiscall FUN_105f0b30(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0xfc,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}


// ===== slot[0] (off 0x0) @ 105a36d0  FUN_105a36d0 =====

/* [RE-AUTO c0] */

int __thiscall FUN_105a36d0(int param_1,byte param_2)

{
  FUN_1059d800();
  FUN_1059edb0(*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10653dc0();
  }
  FUN_103dc920();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0();
  }
  return param_1;
}


// ===== slot[4] (off 0x10) @ 105a2710  FUN_105a2710 =====

/* [RE-AUTO c0] */

void __fastcall FUN_105a2710(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_38 [20];
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 local_8 [4];
  
  FUN_103dc9d0();
  FUN_10a5d660();
  FUN_103dbbb0(0,local_8);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar3 = FUN_103dd050(uVar2);
  local_10 = local_20;
  local_c = local_10;
  FUN_1001ea30(*(undefined4 *)(iVar3 + 0x154),*(undefined4 *)(iVar3 + 0x150));
  puVar1 = local_c;
  uVar2 = FUN_10a5d940();
  uVar2 = FUN_103e1c60(local_38,puVar1,uVar2);
  FUN_10a5d820(uVar2);
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_24);
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10653dc0(local_c);
  }
  uVar2 = FUN_10a5ec80();
  FUN_1059d410(uVar2);
  return;
}


// ===== slot[10] (off 0x28) @ 105a27d0  FUN_105a27d0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105a27d0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_105a2840();
  uStack_8 = uStack_8 & 0xffffff;
  FUN_103db9b0(2,(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    FUN_105a2b90();
    iVar1 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) != iVar1) {
      uVar2 = FUN_105a2fa0(iVar1,iVar1,*(int *)(param_1 + 0x60),(int)&uStack_8 + 2,0);
      FUN_105a3200(uVar2,*(undefined4 *)(param_1 + 100),0,(int)&uStack_8 + 2);
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
  }
  return 2;
}


// ===== slot[16] (off 0x40) @ 105a3770  FUN_105a3770 =====

/* [RE-AUTO c0] */

void __thiscall FUN_105a3770(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x74,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}


// ===== slot[0] (off 0x0) @ 1061f9c0  FUN_1061f9c0 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1061f9c0(undefined4 param_1,byte param_2)

{
  FUN_103dc920();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// ===== slot[10] (off 0x28) @ 105f95b0  FUN_105f95b0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105f95b0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  cVar2 = FUN_103dba30(0,&local_c);
  if (cVar2 == '\0') {
    return 1;
  }
  local_1c = param_1;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar4 = FUN_103dd050(uVar3);
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + 0x174);
    iVar6 = 0;
    piVar5 = (int *)*piVar1;
    local_10 = *(int **)(iVar4 + 0x17c);
    iVar7 = *(int *)(iVar4 + 0x180);
    if (piVar5 != *(int **)(iVar4 + 0x184)) {
      local_14 = *(int **)(iVar4 + 0x184);
      piVar8 = local_10;
      do {
        if ((local_c < iVar6) || (*piVar5 != param_1)) break;
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + 1;
        if (piVar5 == piVar8) {
          piVar5 = *(int **)(iVar7 + 4);
          iVar7 = iVar7 + 4;
          piVar8 = piVar5 + 0x20;
        }
      } while (piVar5 != local_14);
    }
    *(int *)(param_1 + 0x60) = param_1;
    if (iVar6 != local_c) {
      local_18 = piVar1;
      local_8 = iVar4;
      if (*(int *)(iVar4 + 0x19c) <
          (*(int *)(iVar4 + 400) - *(int *)(iVar4 + 0x180) >> 2) * 0x20 +
          (*(int *)(iVar4 + 0x184) - *(int *)(iVar4 + 0x188) >> 2) + -0x20 +
          (*(int *)(iVar4 + 0x17c) - *piVar1 >> 2)) {
        iVar7 = *(int *)(iVar4 + 0x184);
        iVar6 = *(int *)(iVar4 + 0x188);
        if (iVar7 == iVar6) {
          if (iVar6 != 0) {
            FUN_10653dc0(iVar6);
          }
          piVar5 = (int *)(*(int *)(iVar4 + 400) + -4);
          *(int **)(iVar4 + 400) = piVar5;
          iVar7 = *piVar5;
          *(int *)(iVar4 + 0x188) = iVar7;
          iVar7 = iVar7 + 0x80;
          *(int *)(iVar4 + 0x18c) = iVar7;
        }
        *(int *)(iVar4 + 0x184) = iVar7 + -4;
      }
      if (*piVar1 == *(int *)(iVar4 + 0x178)) {
        FUN_105f9af0(&local_1c);
        return 2;
      }
      *(int *)(*piVar1 + -4) = param_1;
      *piVar1 = *piVar1 + -4;
      return 2;
    }
  }
  return 1;
}


// ===== slot[16] (off 0x40) @ 10626530  FUN_10626530 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10626530(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,100,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}


// ===== slot[0] (off 0x0) @ 1061d9e0  FUN_1061d9e0 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1061d9e0(undefined4 param_1,byte param_2)

{
  FUN_103dc920();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// ===== slot[10] (off 0x28) @ 1055eaa0  FUN_1055eaa0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1055eaa0(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 local_c [7];
  char local_5;
  
  FUN_10a5d660();
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)FUN_103dd050(uVar3);
  if (piVar4 != (int *)0x0) {
    local_1c = piVar4[0x46];
    iVar6 = piVar4[0x48];
    local_18 = piVar4[0x47];
    local_5 = '\0';
    cVar2 = FUN_103dbbb0(0,local_c);
    if (cVar2 == '\0') {
      cVar2 = FUN_103db9b0(2,&local_5);
      if ((cVar2 != '\0') && (local_5 != '\0')) {
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
    else {
      pcVar5 = (char *)FUN_10a5d940();
      local_24 = local_34;
      pcVar1 = pcVar5;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      local_20 = local_24;
      FUN_1001ea30(pcVar5,pcVar7);
      iVar6 = (**(code **)(*piVar4 + 0x58))(&local_1c,local_34);
      iVar6 = *(int *)(iVar6 + 8);
      if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
        FUN_10653dc0(local_20);
      }
    }
    if ((iVar6 != 0) && (cVar2 = FUN_103dba30(1,&local_10), cVar2 != '\0')) {
      switch(local_10) {
      case 0:
        if (iVar6 != *(int *)(param_1 + 0x20)) {
          FUN_103e0e60(0);
          return 2;
        }
        break;
      case 1:
        func_0x103e0e30();
        return 2;
      case 2:
        func_0x103e0e00();
        return 2;
      case 3:
        func_0x103e0e20();
      }
      return 2;
    }
  }
  return 1;
}


// ===== slot[16] (off 0x40) @ 10622f90  FUN_10622f90 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10622f90(undefined4 param_1,int *param_2)

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


