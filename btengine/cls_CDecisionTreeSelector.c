// ===== creator FUN_10604500 @ 10604500 =====

/* [RE-AUTO c0] */

int * FUN_10604500(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10653d70(0x74);
  if (param_3 != 0) {
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_106140b0(param_3);
    }
    piVar2[2] = param_1;
    (**(code **)(*piVar2 + 4))(param_2);
    (**(code **)(*piVar2 + 0x18))();
    return piVar2;
  }
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_105a26d0(param_1,param_2);
    piVar2[0xf] = 0x10;
    return piVar2;
  }
  uRam0000003c = 0x10;
  return (int *)0x0;
}


// ===== CTOR (writes vtbl 113bf2e4) FUN_106140b0 @ 106140b0 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_106140b0(undefined4 *param_1,int param_2)

{
  FUN_103f4300(param_2);
  *param_1 = &PTR_FUN_113bf2e4;
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  *param_1 = &PTR_FUN_113097a0;
  FUN_10611ed0(param_2 + 0x60);
  param_1[0x1b] = &PTR_FUN_11309688;
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}


// CDecisionTreeSelector vtbl[0] @ 103dc890 (already emitted)

// CDecisionTreeSelector vtbl[1] @ 103dc6c0 (already emitted)

// CDecisionTreeSelector vtbl[2] @ 103dc930 (already emitted)

// CDecisionTreeSelector vtbl[3] @ 103d8a10 (already emitted)

// CDecisionTreeSelector vtbl[4] @ 103dc9d0 (already emitted)

// ===== CTOR (writes vtbl 113097a0) FUN_106140b0 @ 106140b0 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_106140b0(undefined4 *param_1,int param_2)

{
  FUN_103f4300(param_2);
  *param_1 = &PTR_FUN_113bf2e4;
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  *param_1 = &PTR_FUN_113097a0;
  FUN_10611ed0(param_2 + 0x60);
  param_1[0x1b] = &PTR_FUN_11309688;
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}


// ===== CDecisionTreeSelector vtbl[0] @ 105a36d0  FUN_105a36d0 =====

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


// CDecisionTreeSelector vtbl[1] @ 103dc6c0 (already emitted)

// CDecisionTreeSelector vtbl[2] @ 103dc930 (already emitted)

// CDecisionTreeSelector vtbl[3] @ 103d8a10 (already emitted)

// ===== CDecisionTreeSelector vtbl[4] @ 105a2710  FUN_105a2710 =====

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


