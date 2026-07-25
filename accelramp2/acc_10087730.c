// FUN_10087730 @ 10087730
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0]
   calls: malloc */

void * FUN_10087730(int param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 *in_EAX;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  pcVar1 = malloc_exref;
  if (in_EAX == (undefined4 *)0x0) {
    pvVar4 = malloc(0x1f0);
    pcVar3 = free_exref;
    pcVar2 = realloc_exref;
    if (pvVar4 == (void *)0x0) {
      return (void *)0x0;
    }
    puVar7 = (undefined4 *)((int)pvVar4 + 0xc);
    *puVar7 = pcVar1;
    *(code **)((int)pvVar4 + 0x10) = pcVar2;
    *(code **)((int)pvVar4 + 0x14) = pcVar3;
  }
  else {
    pvVar4 = (void *)(*(code *)*in_EAX)();
    if (pvVar4 == (void *)0x0) {
      return (void *)0x0;
    }
    puVar7 = (undefined4 *)((int)pvVar4 + 0xc);
    *puVar7 = *in_EAX;
    *(undefined4 *)((int)pvVar4 + 0x10) = in_EAX[1];
    *(undefined4 *)((int)pvVar4 + 0x14) = in_EAX[2];
  }
  pcVar1 = (code *)*puVar7;
  *(undefined4 *)((int)pvVar4 + 8) = 0;
  *(undefined4 *)((int)pvVar4 + 0x20) = 0;
  *(undefined4 *)((int)pvVar4 + 0x17c) = 0x10;
  iVar5 = (*pcVar1)(0x100);
  *(int *)((int)pvVar4 + 0x188) = iVar5;
  if (iVar5 == 0) {
    (**(code **)((int)pvVar4 + 0x14))(pvVar4);
    return (void *)0x0;
  }
  iVar5 = (*(code *)*puVar7)(0x400);
  *(int *)((int)pvVar4 + 0x2c) = iVar5;
  if (iVar5 == 0) {
    (**(code **)((int)pvVar4 + 0x14))(*(undefined4 *)((int)pvVar4 + 0x188));
    (**(code **)((int)pvVar4 + 0x14))(pvVar4);
    return (void *)0x0;
  }
  *(int *)((int)pvVar4 + 0x30) = iVar5 + 0x400;
  if (param_3 == 0) {
    iVar5 = FUN_10081c50();
    *(int *)((int)pvVar4 + 0x164) = iVar5;
    if (iVar5 == 0) {
      (**(code **)((int)pvVar4 + 0x14))(*(undefined4 *)((int)pvVar4 + 0x2c));
      (**(code **)((int)pvVar4 + 0x14))(*(undefined4 *)((int)pvVar4 + 0x188));
      (**(code **)((int)pvVar4 + 0x14))(pvVar4);
      return (void *)0x0;
    }
  }
  else {
    *(int *)((int)pvVar4 + 0x164) = param_3;
  }
  *(undefined4 *)((int)pvVar4 + 0x178) = 0;
  *(undefined4 *)((int)pvVar4 + 0x170) = 0;
  *(undefined4 *)((int)pvVar4 + 0x130) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1d4) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1d0) = 0;
  *(undefined4 *)((int)pvVar4 + 0x7c) = 0;
  *(undefined4 *)((int)pvVar4 + 0xf8) = 0;
  *(undefined1 *)((int)pvVar4 + 0x1d8) = 0x21;
  *(undefined1 *)((int)pvVar4 + 0xec) = 0;
  *(undefined1 *)((int)pvVar4 + 0xed) = 0;
  *(undefined4 *)((int)pvVar4 + 0x18c) = 0;
  *(undefined4 *)((int)pvVar4 + 400) = 0;
  *(undefined1 *)((int)pvVar4 + 0x194) = 0;
  *(undefined4 **)((int)pvVar4 + 0x1b4) = puVar7;
  *(undefined4 *)((int)pvVar4 + 0x1a0) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1a4) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1b0) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1ac) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1a8) = 0;
  *(undefined4 **)((int)pvVar4 + 0x1cc) = puVar7;
  *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1bc) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1c8) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1c4) = 0;
  *(undefined4 *)((int)pvVar4 + 0x1c0) = 0;
  FUN_100873f0();
  if ((param_1 != 0) && (*(int *)((int)pvVar4 + 0xe8) == 0)) {
    FUN_10082270(pvVar4);
    return (void *)0x0;
  }
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = FUN_10092380();
    *(undefined4 *)((int)pvVar4 + 0xe4) = uVar6;
    return pvVar4;
  }
  *(undefined1 *)((int)pvVar4 + 0xec) = 1;
  uVar6 = FUN_10092590();
  *(undefined4 *)((int)pvVar4 + 0xe4) = uVar6;
  *(undefined1 *)((int)pvVar4 + 0x1d8) = *param_2;
  return pvVar4;
}

