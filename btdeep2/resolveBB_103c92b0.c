
// ===== [d0] FUN_103c92b0 @103c92b0  (420 bytes) =====

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


// ===== [d1] FUN_103c59e0 @103c59e0  (129 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103c59e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = *param_1;
  uVar2 = iVar1 - iVar3 >> 2;
  if (param_2 < uVar2) {
    iVar3 = iVar3 + param_2 * 4;
    if (iVar3 != iVar1) {
      iVar3 = FUN_103c6360(iVar3);
      FUN_103c63c0();
      param_1[1] = iVar3;
      return;
    }
  }
  else {
    param_2 = param_2 - uVar2;
    if (param_2 != 0) {
      if (param_2 <= (uint)(param_1[2] - iVar1 >> 2)) {
        FUN_103c61b0(iVar1,param_2,param_3,iVar3);
        return;
      }
      FUN_103c5ca0(iVar1,param_3,iVar3,param_2,0);
    }
  }
  return;
}


// [d1] FUN_112bed8e @112bed8e  (emitted in an earlier root)

// [d1] FUN_10653dc0 @10653dc0  (emitted in an earlier root)

// ===== [d1] FUN_100282d0 @100282d0  (9 bytes) =====

/* [RE-AUTO c0] */

int __thiscall FUN_100282d0(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint _Size;
  uint _Size_00;
  void *_Dst;
  
  _Size = param_3 - (int)param_2;
  pvVar1 = *(void **)(param_1 + 0x14);
  _Size_00 = *(int *)(param_1 + 0x10) - (int)pvVar1;
  if (_Size_00 < _Size) {
    if (_Size_00 != 0) {
      memcpy(pvVar1,param_2,_Size_00);
    }
    FUN_10028a60((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)) + (int)param_2,param_3);
  }
  else {
    if (_Size != 0) {
      memcpy(pvVar1,param_2,_Size);
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    _Dst = (void *)(*(int *)(param_1 + 0x14) + _Size);
    if (_Dst != pvVar1) {
      memmove(_Dst,pvVar1,1);
      *(int *)(param_1 + 0x10) = (int)_Dst + (*(int *)(param_1 + 0x10) - (int)pvVar1);
      return param_1;
    }
  }
  return param_1;
}


// [d1] FUN_10653d70 @10653d70  (emitted in an earlier root)

// ===== [d1] FUN_103cacf0 @103cacf0  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cacf0(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedec;
  param_1[7] = *param_2;
  return param_1;
}


// ===== [d1] FUN_103c5b00 @103c5b00  (56 bytes) =====

/* [RE-AUTO c0] */

int * __thiscall FUN_103c5b00(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 8) != '\0')) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = param_2;
  return param_1;
}


// ===== [d1] FUN_103cac30 @103cac30  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cac30(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedd0;
  param_1[7] = *param_2;
  return param_1;
}


// ===== [d1] FUN_103cac70 @103cac70  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cac70(undefined4 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedb8;
  *(undefined1 *)(param_1 + 7) = *param_2;
  return param_1;
}


// ===== [d1] FUN_10a5d560 @10a5d560  (69 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d560(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10)) {
    uVar1 = FUN_10a5dda0(*(int *)(param_2 + 0x14));
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = FUN_10a5dda0(&DAT_1139eb9e);
  *param_1 = uVar1;
  return param_1;
}


// ===== [d1] FUN_103ca360 @103ca360  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103ca360(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113beddc;
  param_1[7] = *param_2;
  return param_1;
}


// [d1] FUN_10a5d8a0 @10a5d8a0  (emitted in an earlier root)

// ===== [d2] FUN_103c5ca0 @103c5ca0  (372 bytes) =====

/* [RE-AUTO c0]
   calls: puts, exit
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_103c5ca0(int *param_1,int param_2,int *param_3,undefined4 param_4,int *param_5,char param_6)

{
  int iVar1;
  code *pcVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)(param_1[1] - *param_1 >> 2);
  local_c = param_5;
  if ((int *)(0x3fffffff - (int)local_8) < param_5) {
    FUN_103c6400();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppiVar3 = &local_8;
  if (local_8 <= param_5) {
    ppiVar3 = &local_c;
  }
  piVar6 = (int *)((int)*ppiVar3 + (int)local_8);
  if (((int *)0x3fffffff < piVar6) || (piVar6 < local_8)) {
    piVar6 = (int *)0x3fffffff;
  }
  if (&DAT_40000000 <= piVar6) {
LAB_103c5cf6:
    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (piVar6 == (int *)0x0) {
    local_8 = (int *)0x0;
    uVar7 = 0;
  }
  else {
    local_8 = (int *)FUN_10653d70((int)piVar6 << 2);
    if (local_8 == (int *)0x0) goto LAB_103c5cf6;
    uVar7 = (uint)piVar6 & 0x3fffffff;
  }
  piVar5 = (int *)*param_1;
  piVar6 = local_8;
  for (iVar4 = param_2 - (int)piVar5 >> 2; 0 < iVar4; iVar4 = iVar4 + -1) {
    if (piVar6 != (int *)0x0) {
      iVar1 = *piVar5;
      *piVar6 = iVar1;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  if (param_5 == (int *)0x1) {
    if (piVar6 != (int *)0x0) {
      iVar4 = *param_3;
      *piVar6 = iVar4;
      if ((iVar4 != 0) && (*(char *)(iVar4 + 8) != '\0')) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
    }
    piVar6 = piVar6 + 1;
  }
  else {
    piVar6 = (int *)FUN_103c62f0(param_3);
  }
  if ((param_6 == '\0') && (iVar4 = param_1[1] - param_2 >> 2, 0 < iVar4)) {
    param_2 = param_2 - (int)piVar6;
    do {
      if (piVar6 != (int *)0x0) {
        iVar1 = *(int *)(param_2 + (int)piVar6);
        *piVar6 = iVar1;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      iVar4 = iVar4 + -1;
      piVar6 = piVar6 + 1;
    } while (0 < iVar4);
  }
  FUN_103c6550(param_1[1],*param_1);
  if (*param_1 != 0) {
    FUN_10653dc0(*param_1);
  }
  *param_1 = (int)local_8;
  param_1[1] = (int)piVar6;
  param_1[2] = (int)(local_8 + uVar7);
  return;
}


// ===== [d2] FUN_103c6360 @103c6360  (90 bytes) =====

/* [RE-AUTO c0] */

int * __fastcall FUN_103c6360(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = param_2 - param_1 >> 2;
  if (0 < iVar4) {
    param_1 = param_1 - (int)param_3;
    do {
      iVar2 = *(int *)(param_1 + (int)param_3);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 8) != '\0')) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      puVar3 = (undefined4 *)*param_3;
      if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 2) != '\0')) {
        piVar1 = puVar3 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      iVar4 = iVar4 + -1;
      *param_3 = *(int *)(param_1 + (int)param_3);
      param_3 = param_3 + 1;
    } while (0 < iVar4);
    return param_3;
  }
  return param_3;
}


// ===== [d2] FUN_103c61b0 @103c61b0  (254 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103c61b0(uint *param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *local_8;
  
  piVar1 = param_4;
  if ((param_4 < (int *)*param_1) || ((int *)param_1[1] <= param_4)) {
    local_8 = (undefined4 *)param_1[1];
    uVar3 = (int)local_8 - param_2 >> 2;
    if (param_3 < uVar3) {
      FUN_103c64a0(local_8,param_1);
      param_1[1] = param_1[1] + param_3 * 4;
      FUN_103c6650(local_8);
      FUN_103c66c0(param_4);
      return;
    }
    uVar2 = FUN_103c62f0(param_4);
    param_1[1] = uVar2;
    FUN_103c64a0(uVar2);
    param_1[1] = param_1[1] + uVar3 * 4;
    FUN_103c66c0(piVar1);
  }
  else {
    local_8 = (undefined4 *)*param_4;
    if ((local_8 != (undefined4 *)0x0) && (*(char *)(local_8 + 2) != '\0')) {
      local_8[1] = local_8[1] + 1;
    }
    param_4 = (int *)((uint)param_4 & 0xffffff);
    FUN_103c61b0(param_2,param_3,&local_8,(int)&param_4 + 3);
    if ((local_8 != (undefined4 *)0x0) && (*(char *)(local_8 + 2) != '\0')) {
      piVar1 = local_8 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_8)(1);
        return;
      }
    }
  }
  return;
}


// ===== [d2] FUN_103c63c0 @103c63c0  (49 bytes) =====

/* [RE-AUTO c0] */

void __fastcall FUN_103c63c0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    puVar2 = (undefined4 *)*param_1;
    if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}


// ===== [d2] ___report_gsfailure @112bf361  (251 bytes) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Library: Visual Studio 2015 Release */

void __cdecl ___report_gsfailure(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_116f5cd8 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_116f5ce0 = (undefined4)lVar9;
  _DAT_116f5cf0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_116f5cf4 = &stack0x00000004;
  _DAT_116f5c30 = 0x10001;
  _DAT_116f5be0 = 0xc0000409;
  _DAT_116f5be4 = 1;
  _DAT_116f5bf0 = 1;
  DAT_116f5bf4 = 2;
  _DAT_116f5bec = unaff_retaddr;
  _DAT_116f5cbc = in_GS;
  _DAT_116f5cc0 = in_FS;
  _DAT_116f5cc4 = in_ES;
  _DAT_116f5cc8 = in_DS;
  _DAT_116f5ccc = unaff_EDI;
  _DAT_116f5cd0 = unaff_ESI;
  _DAT_116f5cd4 = unaff_EBX;
  _DAT_116f5cdc = uVar3;
  _DAT_116f5ce4 = unaff_EBP;
  DAT_116f5ce8 = unaff_retaddr;
  _DAT_116f5cec = in_CS;
  _DAT_116f5cf8 = in_SS;
  ___raise_securityfailure(&PTR_DAT_1139e8ac);
  return;
}


// [d2] FUN_106889b0 @106889b0  (emitted in an earlier root)

// [d2] FUN_10a5dda0 @10a5dda0  (emitted in an earlier root)
