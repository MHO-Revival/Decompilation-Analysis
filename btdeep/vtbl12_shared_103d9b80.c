
// ===== [d0] FUN_103d9b80 @103d9b80  (747 bytes) =====

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


// [d1] _snprintf_s @EXTERNAL:00000120  (emitted in an earlier root)

// [d1] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// [d1] FUN_1001ea30 @1001ea30  (emitted in an earlier root)

// [d1] FUN_112bed8e @112bed8e  (emitted in an earlier root)

// ===== [d1] FUN_100208d0 @100208d0  (169 bytes) =====

/* [RE-AUTO c0] */

void __thiscall
FUN_100208d0(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined1 *param_6)

{
  uint *unaff_ESI;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined1 *puStack_34;
  undefined1 auStack_28 [3];
  undefined1 local_25;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)auStack_28;
  if ((param_3 < *param_1) || (param_1[1] <= param_3)) {
    puStack_34 = param_6;
    puStack_3c = &local_25;
    uStack_38 = param_5;
    uStack_40 = param_3;
    FUN_10020ab0(param_2);
  }
  else {
    puStack_34 = *(undefined1 **)(param_3 + 0x10);
    local_14 = local_24;
    uStack_38 = *(uint *)(param_3 + 0x14);
    puStack_3c = (undefined1 *)0x1002090e;
    local_10 = local_14;
    FUN_1001ea30();
    puStack_3c = param_6;
    uStack_40 = param_5;
    FUN_10020ab0(param_2,&stack0xffffffd4,&stack0xffffffd3);
    if ((unaff_ESI != &uStack_40) && (unaff_ESI != (uint *)0x0)) {
      FUN_10653dc0(unaff_ESI);
      FUN_112bed8e();
      return;
    }
  }
  FUN_112bed8e();
  return;
}


// [d1] FUN_10028a60 @10028a60  (emitted in an earlier root)

// [d1] FUN_10653dc0 @10653dc0  (emitted in an earlier root)

// ===== [d2] FUN_1001f4d0 @1001f4d0  (74 bytes) =====

/* [RE-AUTO c0]
   calls: puts, exit
   strings:
     ""out of memory\n"" */

int FUN_1001f4d0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_10653d70(param_1);
  if (iVar1 == 0) {
    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *param_2 = param_1;
  return iVar1;
}


// [d2] memcpy @112be478  (emitted in an earlier root)

// ===== [d2] FUN_1001fb50 @1001fb50  (20 bytes) =====

/* [RE-AUTO c0]
   calls: puts
   strings:
     ""basic_string"" */

void FUN_1001fb50(void)

{
  puts("basic_string");
                    /* WARNING: Could not recover jumptable at 0x1001fb5e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
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


// ===== [d2] FUN_10020ab0 @10020ab0  (193 bytes) =====

/* [RE-AUTO c0] */

void __thiscall
FUN_10020ab0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  uint local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = FUN_10020d40(param_5);
  iVar1 = FUN_10021090(local_c,&local_c);
  local_10 = local_10 & 0xffffff00;
  iVar2 = FUN_100211c0(*param_1,param_2,iVar1,local_10,&local_5);
  if (param_5 == 1) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = iVar2;
      *(int *)(iVar2 + 0x14) = iVar2;
      FUN_1001ea30(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x10));
    }
    iVar2 = iVar2 + 0x18;
  }
  else {
    iVar2 = FUN_10021240(iVar2,param_5,param_3);
  }
  if (param_6 == '\0') {
    param_5 = param_5 & 0xffffff00;
    iVar2 = FUN_100211c0(param_2,param_1[1],iVar2,param_5,&stack0x00000017);
  }
  if (*param_1 != 0) {
    FUN_10653dc0(*param_1);
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar1 + local_c * 0x18;
  return;
}


// ===== [d2] FUN_10028d10 @10028d10  (67 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10028d10(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
  if (param_2 <= -local_8 - 2) {
    puVar1 = &local_8;
    if (local_8 <= param_2) {
      puVar1 = &param_2;
    }
    uVar2 = *puVar1 + 1 + local_8;
    if ((uVar2 == 0xffffffff) || (uVar2 < local_8)) {
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001fb50();
}


// [d2] FUN_106889b0 @106889b0  (emitted in an earlier root)
