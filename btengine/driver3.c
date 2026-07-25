
//#### driver-caller @104b562f -> fn ? ####

undefined4 FUN_104b562f(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_10494ab0();
  FUN_104b5670();
  uVar1 = *(undefined4 *)(unaff_EDI + 0xd4);
  if (unaff_ESI != 0) {
    *(undefined4 *)(unaff_ESI + 0x124) = 0;
  }
  return uVar1;
}


//#### start_helper_10494a60 ####

/* [RE-AUTO c0] */

void __fastcall FUN_10494a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(int **)(param_1 + 0x20))[0x35];
  if ((iVar1 != 1) && (iVar1 != 2)) {
    FUN_10494ab0();
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(iVar1);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0x20);
  *(int *)(iVar3 + 0xd0) = iVar1;
  *(int *)(iVar3 + 200) = iVar2;
  return;
}


//#### ctx_ctor_104a2050 ####

/* [RE-R1]
   strings:
     ""/Scripts/AI/BehaviorTree/""
     ""BTFolder""
     ""Properties.BTFolder""
     "".AISetting.BTFolder""
     ""PropertyCustom"" */

void __thiscall
CBehaviorTreeContext__Ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          char *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  int iVar9;
  uint unaff_EDI;
  undefined4 uStack_84;
  int *piStack_80;
  char *pcStack_7c;
  undefined8 uStack_74;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 *apuStack_58 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  undefined1 auStack_38 [20];
  undefined1 *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_70;
  uStack_74 = CONCAT44(auStack_70,unaff_ESI);
  local_64 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_11dbac64;
  param_1[3] = param_1[3];
  puVar8 = param_1 + 6;
  param_1[4] = param_1[4];
  param_1[5] = param_5;
  *param_1 = &PTR_FUN_11dbc480;
  *puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = puVar8;
  param_1[9] = puVar8;
  param_1[10] = 0;
  puVar8 = param_1 + 0xc;
  *puVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = puVar8;
  param_1[0xf] = puVar8;
  param_1[0x10] = 0;
  puVar8 = param_1 + 0x12;
  *puVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  pcStack_7c = param_5;
  *(undefined1 *)puVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = puVar8;
  param_1[0x15] = puVar8;
  param_1[0x16] = 0;
  piStack_80 = (int *)0x104a20f8;
  FUN_1046c910();
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = param_2;
  param_1[0x4d] = param_4;
  param_1[0x4e] = param_3;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4f] = 0;
  piStack_80 = (int *)&DAT_11d9d32b;
  param_1[0x54] = param_1 + 0x50;
  uStack_84 = &DAT_11d9d32b;
  param_1[0x55] = param_1 + 0x50;
  FUN_100b62c0();
  param_1[0x5a] = param_1 + 0x56;
  pcVar1 = (char *)(param_1 + 0x5d);
  param_1[0x5b] = param_1 + 0x56;
  *(undefined1 *)param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 1;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  FUN_104a7df0();
  param_1[0x67] = 5;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_104a7ee0(param_1 + 0x68);
  puVar8 = param_1 + 0x73;
  param_1[0x72] = 10;
  *puVar8 = puVar8;
  param_1[0x74] = puVar8;
  puVar8 = param_1 + 0x75;
  *puVar8 = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(char *)(param_1 + 0x7a) = uStack_84._3_1_;
  *(undefined1 *)puVar8 = 0;
  param_1[0x76] = 0;
  param_1[0x77] = puVar8;
  param_1[0x78] = puVar8;
  param_1[0x79] = 0;
  puVar8 = param_1 + 0x81;
  param_1[0x7f] = param_1 + 0x7b;
  param_1[0x80] = param_1 + 0x7b;
  uStack_74 = 0;
  *(undefined1 *)param_1[0x7f] = 0;
  *puVar8 = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[0x82] = 0;
  param_1[0x83] = puVar8;
  param_1[0x84] = puVar8;
  param_1[0x85] = 0;
  *(char *)(param_1 + 0x86) = uStack_84._3_1_;
  FUN_104a3850();
  if (param_1[5] != 0) {
    if (param_1[4] == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(param_1[4] + 8);
    }
    if (puVar5 == (undefined8 *)(param_1 + 2)) {
      uVar2 = *(undefined8 *)(param_1 + 2);
      iVar9 = param_1[4];
      uStack_6c._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_6c._0_4_ = (undefined4)uVar2;
    }
    else {
      uStack_6c._0_4_ = 0;
      uStack_6c._4_4_ = 0;
      iVar9 = 0;
    }
    iVar3 = *(int *)(param_1[5] + 8);
    pcStack_7c = *(char **)(iVar9 + 300);
    if (*(char *)(iVar3 + 0x50) == '\0') {
      piStack_80 = (int *)(iVar3 + 8);
      FUN_10476d20(&stack0xffffff8c,&pcStack_7c);
      if (pcStack_7c != pcVar1) {
        FUN_104761b0();
      }
    }
    else {
      piStack_80 = (int *)(iVar3 + 0x20);
      FUN_10476d20(&stack0xffffff8c,&pcStack_7c);
      if (pcStack_7c != pcVar1) {
        FUN_104761b0();
      }
    }
    puVar5 = (undefined8 *)FUN_10476d70(&uStack_84);
    *puVar5 = uStack_6c;
    *(int *)(puVar5 + 1) = iVar9;
  }
  *(bool *)(param_1 + 0x30) = param_1[0x4d] == 0;
  iVar9 = DAT_123bb90c;
  if (DAT_123bb90c == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(DAT_123bb90c + 0x10);
  }
  param_1[0x1f] = uVar7;
  if ((((param_1[0x4d] != 0) || (param_1[5] == 0)) || (iVar9 == 0)) ||
     ((piVar6 = *(int **)(iVar9 + 0x10), piVar6 == (int *)0x0 ||
      (piVar6 = (int *)(**(code **)(*piVar6 + 4))(param_1[0x4b]), piVar6 == (int *)0x0))))
  goto LAB_104a25f2;
  (**(code **)(*piVar6 + 0x14))(&piStack_80);
  FUN_104a3e50("/Scripts/AI/BehaviorTree/");
  if (piStack_80 == (int *)0x0) {
LAB_104a24c7:
    uStack_84 = (undefined1 *)((uint)uStack_84 & 0xffffff);
  }
  else {
    cVar4 = (**(code **)(*piStack_80 + 0x3c))("BTFolder",&pcStack_7c);
    piVar6 = piStack_80;
    if (cVar4 == '\0') {
      unaff_EDI = 3;
      iVar9 = FUN_100b5f70("Properties.BTFolder",(int)&uStack_84 + 3);
      cVar4 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar9 + 0x14),&uStack_84);
      piVar6 = piStack_80;
      if (cVar4 == '\0') {
        unaff_EDI = 0x1f;
        uVar7 = FUN_100b5f70("PropertyCustom",(int)&uStack_84 + 3,".AISetting.BTFolder");
        iVar9 = FUN_100f2140(&stack0xffffff8c,uVar7);
        cVar4 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar9 + 0x14),&uStack_84);
        if (cVar4 == '\0') goto LAB_104a24c7;
      }
    }
    if (pcStack_7c == (char *)0x0) goto LAB_104a24c7;
    uStack_84 = (undefined1 *)CONCAT13(1,(undefined3)uStack_84);
    if (*pcStack_7c == '\0') goto LAB_104a24c7;
  }
  if ((((unaff_EDI & 0x10) != 0) &&
      (unaff_EDI = unaff_EDI & 0xffffffef, apuStack_58[0] != &uStack_6c)) &&
     (apuStack_58[0] != (undefined8 *)0x0)) {
    FUN_10c3d5d0(apuStack_58[0]);
  }
  if ((((unaff_EDI & 8) != 0) && (unaff_EDI = unaff_EDI & 0xfffffff7, puStack_3c != auStack_50)) &&
     (puStack_3c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_3c);
  }
  if ((unaff_EDI & 4) != 0) {
    unaff_EDI = unaff_EDI & 0xfffffffb;
  }
  if ((((unaff_EDI & 2) != 0) && (puStack_24 != auStack_38)) && (puStack_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_24);
  }
  if (uStack_84._3_1_ != '\0') {
    uVar7 = FUN_100b5f70(pcStack_7c,(int)&uStack_84 + 3,&DAT_11d9dc6c);
    uVar7 = FUN_100f21e0(apuStack_58,param_1 + 0x50,uVar7);
    puVar8 = (undefined4 *)FUN_100f2140(auStack_40,uVar7);
    if (puVar8 != param_1 + 0x50) {
      FUN_100d83d0(puVar8[5],puVar8[4]);
    }
    if ((puStack_24 != auStack_38) && (puStack_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_24);
    }
    if ((puStack_3c != auStack_50) && (puStack_3c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_3c);
    }
    if ((apuStack_58[0] != &uStack_6c) && (apuStack_58[0] != (undefined8 *)0x0)) {
      FUN_10c3d5d0(apuStack_58[0]);
    }
  }
  if (piStack_80 != (int *)0x0) {
    (**(code **)(*piStack_80 + 8))();
  }
LAB_104a25f2:
  FUN_11a89daa();
  return;
}


// callers of start_helper 10494a60:
//   @104b563c
