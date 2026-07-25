// ===== creator FUN_10611660 @ 10611660 =====

/* [RE-AUTO c0] */

int * FUN_10611660(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10653d70(0xfc);
  if (param_3 != 0) {
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_1061be50(param_3);
    }
    piVar2[2] = param_1;
    (**(code **)(*piVar2 + 4))(param_2);
    (**(code **)(*piVar2 + 0x18))();
    return piVar2;
  }
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_105ed660(param_1,param_2);
    piVar2[0xf] = 0x10;
    return piVar2;
  }
  uRam0000003c = 0x10;
  return (int *)0x0;
}


// ===== CTOR (writes vtbl 113bf2e4) FUN_1061be50 @ 1061be50 =====

/* [RE-AUTO c0]
   calls: memcpy */

undefined4 * __thiscall FUN_1061be50(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  size_t sVar5;
  
  iVar1 = param_2;
  FUN_103f4300(param_2);
  *param_1 = &PTR_FUN_113bf2e4;
  param_1[0x15] = *(undefined4 *)(iVar1 + 0x54);
  param_1[0x16] = *(undefined4 *)(iVar1 + 0x58);
  param_1[0x17] = *(undefined4 *)(iVar1 + 0x5c);
  *param_1 = &PTR_FUN_1130d140;
  FUN_103da7d0(*(int *)(iVar1 + 100) - *(int *)(iVar1 + 0x60) >> 2,(int)&param_2 + 3);
  pvVar4 = *(void **)(iVar1 + 0x60);
  pvVar2 = (void *)param_1[0x18];
  if (*(void **)(iVar1 + 100) != pvVar4) {
    sVar5 = (int)*(void **)(iVar1 + 100) - (int)pvVar4;
    pvVar2 = memcpy(pvVar2,pvVar4,sVar5);
    pvVar2 = (void *)(sVar5 + (int)pvVar2);
  }
  param_1[0x19] = pvVar2;
  FUN_10611a80(iVar1 + 0x6c);
  FUN_10611a80(iVar1 + 0x84);
  FUN_10611a80(iVar1 + 0x9c);
  FUN_10611af0(iVar1 + 0xb4);
  FUN_10611cb0((*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc)) / 0x18,(int)&param_2 + 3);
  uVar3 = FUN_10600970(*(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0xd0),param_1[0x33],
                       (int)&param_2 + 3,0);
  param_1[0x34] = uVar3;
  FUN_103f5140(*(int *)(iVar1 + 0xdc) - *(int *)(iVar1 + 0xd8) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0xd8);
  pvVar4 = (void *)param_1[0x36];
  if (*(void **)(iVar1 + 0xdc) != pvVar2) {
    sVar5 = (int)*(void **)(iVar1 + 0xdc) - (int)pvVar2;
    pvVar4 = memcpy(pvVar4,pvVar2,sVar5);
    pvVar4 = (void *)((int)pvVar4 + sVar5);
  }
  param_1[0x37] = pvVar4;
  FUN_103f5140(*(int *)(iVar1 + 0xe8) - *(int *)(iVar1 + 0xe4) >> 2,(int)&param_2 + 3);
  pvVar4 = *(void **)(iVar1 + 0xe4);
  pvVar2 = (void *)param_1[0x39];
  if (*(void **)(iVar1 + 0xe8) != pvVar4) {
    sVar5 = (int)*(void **)(iVar1 + 0xe8) - (int)pvVar4;
    pvVar2 = memcpy(pvVar2,pvVar4,sVar5);
    pvVar2 = (void *)(sVar5 + (int)pvVar2);
  }
  param_1[0x3a] = pvVar2;
  FUN_10611b60(*(int *)(iVar1 + 0xf4) - *(int *)(iVar1 + 0xf0) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0xf0);
  if (*(void **)(iVar1 + 0xf4) == pvVar2) {
    param_1[0x3d] = (void *)param_1[0x3c];
    return param_1;
  }
  sVar5 = (int)*(void **)(iVar1 + 0xf4) - (int)pvVar2;
  pvVar2 = memcpy((void *)param_1[0x3c],pvVar2,sVar5);
  param_1[0x3d] = (int)pvVar2 + sVar5;
  return param_1;
}


// ===== CVotingSelector vtbl[0] @ 103dc890  FUN_103dc890 =====

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


// ===== CVotingSelector vtbl[1] @ 103dc6c0  FUN_103dc6c0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc6c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}


// ===== CVotingSelector vtbl[2] @ 103dc930  FUN_103dc930 =====

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


// ===== CVotingSelector vtbl[3] @ 103d8a10  FUN_103d8a10 =====

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


// ===== CVotingSelector vtbl[4] @ 103dc9d0  FUN_103dc9d0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dc9d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x103dc9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}


// ===== CTOR (writes vtbl 1130d140) FUN_1061be50 @ 1061be50 =====

/* [RE-AUTO c0]
   calls: memcpy */

undefined4 * __thiscall FUN_1061be50(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  size_t sVar5;
  
  iVar1 = param_2;
  FUN_103f4300(param_2);
  *param_1 = &PTR_FUN_113bf2e4;
  param_1[0x15] = *(undefined4 *)(iVar1 + 0x54);
  param_1[0x16] = *(undefined4 *)(iVar1 + 0x58);
  param_1[0x17] = *(undefined4 *)(iVar1 + 0x5c);
  *param_1 = &PTR_FUN_1130d140;
  FUN_103da7d0(*(int *)(iVar1 + 100) - *(int *)(iVar1 + 0x60) >> 2,(int)&param_2 + 3);
  pvVar4 = *(void **)(iVar1 + 0x60);
  pvVar2 = (void *)param_1[0x18];
  if (*(void **)(iVar1 + 100) != pvVar4) {
    sVar5 = (int)*(void **)(iVar1 + 100) - (int)pvVar4;
    pvVar2 = memcpy(pvVar2,pvVar4,sVar5);
    pvVar2 = (void *)(sVar5 + (int)pvVar2);
  }
  param_1[0x19] = pvVar2;
  FUN_10611a80(iVar1 + 0x6c);
  FUN_10611a80(iVar1 + 0x84);
  FUN_10611a80(iVar1 + 0x9c);
  FUN_10611af0(iVar1 + 0xb4);
  FUN_10611cb0((*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc)) / 0x18,(int)&param_2 + 3);
  uVar3 = FUN_10600970(*(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0xd0),param_1[0x33],
                       (int)&param_2 + 3,0);
  param_1[0x34] = uVar3;
  FUN_103f5140(*(int *)(iVar1 + 0xdc) - *(int *)(iVar1 + 0xd8) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0xd8);
  pvVar4 = (void *)param_1[0x36];
  if (*(void **)(iVar1 + 0xdc) != pvVar2) {
    sVar5 = (int)*(void **)(iVar1 + 0xdc) - (int)pvVar2;
    pvVar4 = memcpy(pvVar4,pvVar2,sVar5);
    pvVar4 = (void *)((int)pvVar4 + sVar5);
  }
  param_1[0x37] = pvVar4;
  FUN_103f5140(*(int *)(iVar1 + 0xe8) - *(int *)(iVar1 + 0xe4) >> 2,(int)&param_2 + 3);
  pvVar4 = *(void **)(iVar1 + 0xe4);
  pvVar2 = (void *)param_1[0x39];
  if (*(void **)(iVar1 + 0xe8) != pvVar4) {
    sVar5 = (int)*(void **)(iVar1 + 0xe8) - (int)pvVar4;
    pvVar2 = memcpy(pvVar2,pvVar4,sVar5);
    pvVar2 = (void *)(sVar5 + (int)pvVar2);
  }
  param_1[0x3a] = pvVar2;
  FUN_10611b60(*(int *)(iVar1 + 0xf4) - *(int *)(iVar1 + 0xf0) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0xf0);
  if (*(void **)(iVar1 + 0xf4) == pvVar2) {
    param_1[0x3d] = (void *)param_1[0x3c];
    return param_1;
  }
  sVar5 = (int)*(void **)(iVar1 + 0xf4) - (int)pvVar2;
  pvVar2 = memcpy((void *)param_1[0x3c],pvVar2,sVar5);
  param_1[0x3d] = (int)pvVar2 + sVar5;
  return param_1;
}


// ===== CVotingSelector vtbl[0] @ 105f0a30  FUN_105f0a30 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_105f0a30(undefined4 param_1,byte param_2)

{
  FUN_105f0540();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// CVotingSelector vtbl[1] @ 103dc6c0 (already emitted)

// CVotingSelector vtbl[2] @ 103dc930 (already emitted)

// CVotingSelector vtbl[3] @ 103d8a10 (already emitted)

