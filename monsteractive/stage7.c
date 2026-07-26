

// ================= hub_slot1_0x104d08e0  (FUN_104d08e0 @104d08e0 size=479) =================

/* [RE-AUTO c0]
   strings:
     ""RegisterEvent""
     ""RegisterUIFun""
     ""RegisterGameEvent""
     ""RegisterLogicEvent"" */

void __fastcall FUN_104d08e0(int *param_1)

{
  int iVar1;
  char ****unaff_ESI;
  char *pcStack_7c;
  char ***pppcStack_78;
  int **ppiStack_74;
  int *piStack_70;
  code *pcStack_6c;
  char **ppcStack_68;
  char ***pppcStack_64;
  int **ppiStack_60;
  int *piStack_5c;
  char ***pppcStack_58;
  char ***pppcStack_54;
  char *pcStack_50;
  code **ppcStack_4c;
  int *piStack_48;
  char ***pppcStack_44;
  char ***pppcStack_40;
  char *pcStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined1 auStack_24 [8];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_24;
  pcStack_34 = (code *)0x104d0901;
  (**(code **)(*param_1 + 8))();
  pcStack_34 = (code *)0x104d0914;
  (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xa0))();
  pcStack_34 = FUN_104d0810;
  pcStack_38 = (code *)0x104d092c;
  (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x9c))();
  pcStack_38 = (code *)0x104d093f;
  (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xac))();
  pcStack_38 = FUN_104d0870;
  pcStack_3c = (char *)0x104d0957;
  (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xa8))();
  puStack_1c = &stack0xffffffd4;
  pcStack_3c = "";
  pppcStack_40 = (char ***)0x11dbd0a0;
  pppcStack_44 = (char ***)0x104d0974;
  puStack_18 = puStack_1c;
  FUN_100b62c0();
  pppcStack_44 = (char ***)GameLogicEvent_Dispatch_A_virtualized_;
  ppcStack_4c = &pcStack_34;
  pcStack_50 = (char *)0x104d098e;
  piStack_48 = param_1;
  FUN_104d0ee0();
  if ((unaff_ESI != &pppcStack_40) && (unaff_ESI != (char ****)0x0)) {
    pppcStack_54 = (char ***)0x104d09a4;
    FUN_10c3d5d0();
  }
  pcStack_50 = "";
  pppcStack_54 = (char ***)0x11dbd0b0;
  pppcStack_58 = (char ***)0x104d09c4;
  FUN_100b62c0();
  pppcStack_58 = (char ***)GameLogicEvent_Dispatch_A_virtualized_;
  ppiStack_60 = &piStack_48;
  pppcStack_64 = (char ***)0x104d09de;
  piStack_5c = param_1;
  FUN_104d0ee0();
  if (((char ****)pppcStack_40 != &pppcStack_54) && ((char ****)pppcStack_40 != (char ****)0x0)) {
    pppcStack_64 = pppcStack_40;
    ppcStack_68 = (char **)0x104d09f4;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (char ***)&pppcStack_54;
  pppcStack_64 = (char ***)0x11dbd121;
  ppcStack_68 = (char **)0x11dbd110;
  pcStack_6c = (code *)0x104d0a14;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_6c = GameLogicEvent_Dispatch_A_virtualized_;
  ppiStack_74 = &piStack_5c;
  pppcStack_78 = (char ***)0x104d0a2e;
  piStack_70 = param_1;
  FUN_104d0ee0();
  if ((pppcStack_54 != &ppcStack_68) && (pppcStack_54 != (char ***)0x0)) {
    pppcStack_78 = pppcStack_54;
    pcStack_7c = (char *)0x104d0a44;
    FUN_10c3d5d0();
  }
  pppcStack_58 = &ppcStack_68;
  pppcStack_78 = (char ***)0x11dbd136;
  pcStack_7c = "RegisterLogicEvent";
  pppcStack_54 = pppcStack_58;
  FUN_100b62c0();
  FUN_104d0ee0(&piStack_70,param_1,GameLogicEvent_Dispatch_A_virtualized_);
  if ((ppcStack_68 != &pcStack_7c) && (ppcStack_68 != (char **)0x0)) {
    FUN_10c3d5d0(ppcStack_68);
  }
  iVar1 = param_1[0xf];
  if (iVar1 != 0) {
    FUN_1065ac70();
    FUN_10c3d5d0(iVar1);
    param_1[0xf] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x2a88);
}



// ================= hub_slot6_0x104d0d70  (no function) =================


// ================= hub_getter_0x10d17870  (FUN_10d17870 @10d17870 size=15) =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10d17870(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10d17879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    return uVar1;
  }
  return 0;
}



// ================= recv640_handler_0x10924760  (FUN_10924760 @10924760 size=319) =================

/* [RE-AUTO c0]
   calls: strcpy_s */

void __fastcall FUN_10924760(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *_Src;
  undefined1 auStack_3c [7];
  char local_35;
  int iStack_34;
  int iStack_30;
  char acStack_2c [32];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_3c;
  if (((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
       (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 == (int *)0x0)) ||
      ((iVar2 = (**(code **)(*piVar5 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0xc) == 0)))) ||
     (cVar1 = FUN_1140e1d0(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  iVar2 = 0;
  piVar5 = (int *)(param_1 + 0x24);
  local_35 = cVar1;
  do {
    iStack_34 = 0;
    iStack_30 = 0;
    acStack_2c[0] = '\0';
    acStack_2c[1] = '\0';
    acStack_2c[2] = '\0';
    acStack_2c[3] = '\0';
    acStack_2c[4] = '\0';
    acStack_2c[5] = '\0';
    acStack_2c[6] = '\0';
    acStack_2c[7] = '\0';
    acStack_2c[8] = '\0';
    acStack_2c[9] = '\0';
    acStack_2c[10] = '\0';
    acStack_2c[0xb] = '\0';
    acStack_2c[0xc] = '\0';
    acStack_2c[0xd] = '\0';
    acStack_2c[0xe] = '\0';
    acStack_2c[0xf] = '\0';
    acStack_2c[0x10] = '\0';
    acStack_2c[0x11] = '\0';
    acStack_2c[0x12] = '\0';
    acStack_2c[0x13] = '\0';
    acStack_2c[0x14] = '\0';
    acStack_2c[0x15] = '\0';
    acStack_2c[0x16] = '\0';
    acStack_2c[0x17] = '\0';
    acStack_2c[0x18] = '\0';
    acStack_2c[0x19] = '\0';
    acStack_2c[0x1a] = '\0';
    acStack_2c[0x1b] = '\0';
    acStack_2c[0x1c] = '\0';
    acStack_2c[0x1d] = '\0';
    acStack_2c[0x1e] = '\0';
    acStack_2c[0x1f] = '\0';
    if (cVar1 == '\0') {
      iVar3 = iVar2;
      if (0x1d < iVar2) break;
LAB_1092480c:
      iStack_30 = *piVar5;
      iStack_34 = iVar3;
      if (iStack_30 == 0) {
        iStack_30 = 0;
        _Src = "";
LAB_10924843:
        strcpy_s(acStack_2c,0x20,_Src);
      }
      else {
        iVar3 = FUN_10254130(iStack_30);
        if ((iVar3 != 0) && (iStack_30 != 0)) {
          _Src = *(char **)(iVar3 + 0xb4);
          goto LAB_10924843;
        }
      }
      iVar3 = FUN_10d17440();
      cVar1 = local_35;
      if (iVar3 != 0) {
        FUN_10d17440();
        iVar3 = FUN_10d17870();
        cVar1 = local_35;
        if (iVar3 != 0) {
          FUN_10d17440();
          piVar4 = (int *)FUN_10d17870();
          (**(code **)(*piVar4 + 4))(0x32,&iStack_34);
          cVar1 = local_35;
        }
      }
    }
    else if (0x1d < iVar2) {
      iVar3 = iVar2 + -0x1e;
      goto LAB_1092480c;
    }
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar2 < 0x3c);
  FUN_11a89daa();
  return;
}



// ================= recv648_cb_0x109bab40  (FUN_109bab40 @109bab40 size=338) =================

/* [RE-AUTO c0] */

void __thiscall FUN_109bab40(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  char cStack_c;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x38);
  *(char *)(param_1 + 0x58) = param_2[0x3c];
  *(char *)(param_1 + 0x59) = param_2[0x3d];
  *(char *)(param_1 + 0x5a) = param_2[0x3e];
  if (*param_2 != '\0') {
    piVar2 = (int *)FUN_104d0280();
    cVar1 = (**(code **)(*piVar2 + 0x20))(0xf0);
    if (cVar1 == '\0') {
      uStack_10 = 0;
      uStack_18 = 0xf0;
      uStack_14 = 1;
      cStack_c = cVar1;
      iVar3 = FUN_10d17440();
      if (iVar3 != 0) {
        FUN_10d17440();
        iVar3 = FUN_10d17870();
        if (iVar3 != 0) {
          FUN_10d17440();
          piVar2 = (int *)FUN_10d17870();
          (**(code **)(*piVar2 + 4))(0x1e,&uStack_18);
        }
      }
    }
  }
  if (param_2[1] != '\0') {
    piVar2 = (int *)FUN_104d0280();
    cVar1 = (**(code **)(*piVar2 + 0x20))(0xf0);
    if (cVar1 != '\0') {
      uStack_14 = 0;
      uStack_10 = uStack_10 & 0xffffff00;
      uStack_1c = 0xf0;
      uStack_18 = 0;
      iVar3 = FUN_10d17440();
      if (iVar3 != 0) {
        FUN_10d17440();
        iVar3 = FUN_10d17870();
        if (iVar3 != 0) {
          FUN_10d17440();
          piVar2 = (int *)FUN_10d17870();
          (**(code **)(*piVar2 + 4))(0x1e,&uStack_1c);
        }
      }
    }
  }
  return;
}



// ================= recv645_cb_0x1084f360  (no function) =================


// ================= site641_a_0x112e3e70  (FUN_112e3e70 @112e3e70 size=51) =================

/* [RE-AUTO c0] */

undefined4 FUN_112e3e70(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x281,param_1);
    return 1;
  }
  return 0;
}



// ================= site641_b_0x112e5150  (FUN_112e50f0 @112e50f0 size=163) =================

/* [RE-AUTO c0] */

void FUN_112e50f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = GetClientMessageChannel();
  if (iVar2 != 0) {
    piVar3 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar3 + 4))(0x178,&local_8);
  }
  piVar3 = param_1;
  FUN_11161e40(param_1);
  cVar1 = (**(code **)(*piVar3 + 0x168))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*piVar3 + 0x174))();
    if (cVar1 == '\0') {
      FUN_11564070();
      iVar2 = GetClientMessageChannel();
      if (iVar2 != 0) {
        piVar3 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar3 + 4))(0x281,(int)&param_1 + 3);
      }
    }
  }
  return;
}



// ================= site648_0x10e4a7d3_owner  (FUN_10e4a4c0 @10e4a4c0 size=839) =================

/* [RE-AUTO c0] */

void __thiscall FUN_10e4a4c0(int *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  short sVar9;
  undefined1 local_98;
  undefined1 local_97;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  int *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = param_3;
  if (param_2 == 1) {
    puVar1 = (uint *)param_3[4];
    local_54 = *puVar1 >> 1 & 0xffffff01;
    local_40 = puVar1[2] >> 1 & 0xffffff01;
    if (*(int *)(puVar1[4] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 5;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_28 = *puVar4;
    if (*(int *)(puVar1[6] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 7;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_50 = *puVar4;
    if (*(int *)(puVar1[8] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 9;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_30 = *puVar4;
    if (*(int *)(puVar1[10] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0xb;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_48 = *puVar4;
    if (*(int *)(puVar1[0xc] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0xd;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_38 = *puVar4;
    if (*(int *)(puVar1[0xe] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0xf;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_1c = *puVar4;
    if (*(int *)(puVar1[0x10] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x11;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_20 = *puVar4;
    if (*(int *)(puVar1[0x12] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x13;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_24 = *puVar4;
    if (*(int *)(puVar1[0x14] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x15;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_2c = *puVar4;
    if (*(int *)(puVar1[0x16] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x17;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_34 = *puVar4;
    if (*(int *)(puVar1[0x18] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x19;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_3c = *puVar4;
    if (*(int *)(puVar1[0x1a] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x1b;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_44 = *puVar4;
    if (*(int *)(puVar1[0x1c] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x1d;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_4c = *puVar4;
    if (*(int *)(puVar1[0x1e] & 0xfffffffc) == 1) {
      puVar4 = puVar1 + 0x1f;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    uVar2 = *puVar4;
    local_58 = param_1;
    if ((*(int *)(puVar1[0x20] & 0xfffffffc) == 6) && (puVar1 + 0x21 != (uint *)0x0)) {
      param_2._3_1_ = (undefined1)puVar1[0x21];
    }
    else {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0x40;
      local_c = 0;
      local_8 = 0;
      (**(code **)(*param_1 + 0x10))(&local_18);
      param_2._3_1_ = 0;
    }
    if ((*(int *)(*(uint *)(puVar3[4] + 0x88) & 0xfffffffc) == 6) &&
       (pbVar7 = (byte *)(puVar3[4] + 0x8c), pbVar7 != (byte *)0x0)) {
      iVar5 = (uint)*pbVar7 << 8;
    }
    else {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0x40;
      local_c = 0;
      local_8 = 0;
      (**(code **)(*param_1 + 0x10))(&local_18);
      iVar5 = 0;
    }
    if ((*(int *)(*(uint *)(puVar3[4] + 0x90) & 0xfffffffc) == 6) &&
       (puVar8 = (undefined1 *)(puVar3[4] + 0x94), puVar8 != (undefined1 *)0x0)) {
      sVar9 = (short)CONCAT31((int3)((uint)iVar5 >> 8),*puVar8);
    }
    else {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0x40;
      local_c = 0;
      local_8 = 0;
      (**(code **)(*local_58 + 0x10))(&local_18);
      sVar9 = (short)((uint)iVar5 >> 8) << 8;
    }
    FUN_10546ca0();
    local_98 = (undefined1)local_54;
    local_97 = (undefined1)local_40;
    local_94 = local_28;
    local_90 = local_50;
    local_8c = local_30;
    local_88 = local_48;
    local_84 = local_38;
    local_80 = local_1c;
    local_7c = local_20;
    local_78 = local_24;
    local_74 = local_2c;
    local_70 = local_34;
    local_6c = local_3c;
    local_68 = local_44;
    local_64 = local_4c;
    local_5c = param_2._3_1_;
    local_5b = (undefined1)((ushort)sVar9 >> 8);
    local_5a = (undefined1)sVar9;
    local_60 = uVar2;
    iVar5 = FUN_10d17440();
    if (iVar5 != 0) {
      FUN_10d17440();
      iVar5 = FUN_10d17870();
      if (iVar5 != 0) {
        FUN_10d17440();
        piVar6 = (int *)FUN_10d17870();
        (**(code **)(*piVar6 + 4))(0x288,&local_98);
      }
    }
    param_3 = (undefined4 *)CONCAT13(1,param_3._0_3_);
    param_2 = CONCAT22(0x100,*(undefined2 *)(puVar3 + 1));
    (**(code **)(*(int *)*puVar3 + 4))(param_2,(int)&param_3 + 3);
  }
  return;
}



// ================= flashbridge528_0x10589e40  (FUN_10589e40 @10589e40 size=305) =================

/* [RE-AUTO c0]
   src: _root.h
   strings:
     ""handleLogicNotification""
     ""_root.handleLogicNotification"" */

void __fastcall FUN_10589e40(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  piVar8 = *(int **)(param_1 + 0x1110);
  if (piVar8 != (int *)(param_1 + 0x1110)) {
    do {
      piVar6 = (int *)piVar8[2];
      if (((piVar6 != (int *)0x0) &&
          (piVar2 = (int *)(**(code **)(*piVar6 + 0x8c))(), piVar2 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x108))(), iVar3 != 0)) {
        piStack_20 = (int *)0x0;
        uStack_1c = 3;
        uStack_18 = 0x210;
        pbVar4 = (byte *)(**(code **)(*piVar6 + 0x24))();
        pbVar7 = &DAT_11dbd178;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_10589ee3:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_10589ee8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_10589ee3;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10589ee8:
        if (uVar5 == 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x80)) {
            piVar6 = *(int **)(param_1 + 0x2418);
            do {
              if (*piVar6 == 0x210) goto LAB_10589f41;
              iVar3 = iVar3 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x80));
          }
          FUN_1050ab30("handleLogicNotification",&piStack_20,1,iVar3);
        }
        else {
          FUN_1050abc0(&piStack_20,1,pbVar7);
        }
LAB_10589f41:
        if ((uStack_1c >> 6 & 1) != 0) {
          (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
        }
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)(param_1 + 0x1110));
  }
  return;
}

