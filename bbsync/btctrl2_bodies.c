
// ===== caller of component accessor: FUN_104e5a60@104e5a60 =====

/* [RE-AUTO c0]
   strings:
     ""ParamCamera""
     ""Dof_Active"" */

void FUN_104e5a60(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puStack_90;
  char *pcStack_8c;
  int **ppiStack_88;
  int *piStack_84;
  undefined1 auStack_78 [8];
  int *local_70;
  uint uStack_6c;
  int *piStack_68;
  undefined1 auStack_58 [4];
  int aiStack_54 [3];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int *apiStack_40 [4];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  int aiStack_24 [5];
  int *piStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_78;
  if ((((param_1 == (int **)0x0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (int *)0x0))
  goto LAB_104e5dec;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    piStack_84 = param_1[2];
    ppiStack_88 = param_1;
    pcStack_8c = (char *)0x104e5ab5;
    (**(code **)(**param_1 + 8))();
    *param_1 = (int *)0x0;
  }
  param_1[1] = (int *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 0) goto LAB_104e5dec;
  piStack_84 = param_4;
  ppiStack_88 = (int **)0x104e5ada;
  FUN_104f4330();
  if ((((byte)uStack_6c & 0x8f) == 2) && ((char)piStack_68 != '\0')) {
    piStack_84 = (int *)0x104e5af8;
    FUN_113f3640();
    piStack_84 = (int *)0x104e5aff;
    iVar3 = FUN_1115abd0();
    if (iVar3 != 0) {
      piStack_84 = (int *)0x104e5b0e;
      iVar3 = thunk_FUN_1143c770();
      if ((iVar3 != 0) &&
         (((iVar1 = *(int *)(iVar3 + 0x1c), iVar1 == 2 || (iVar1 == 3)) ||
          ((iVar1 == 10 || ((iVar1 == 0xb || (iVar1 == 0xf)))))))) {
        piStack_84 = *(int **)(iVar3 + 0x20);
        ppiStack_88 = (int **)0x104e5b3e;
        FUN_113f3640();
        ppiStack_88 = (int **)0x104e5b45;
        piVar4 = (int *)FUN_1115abb0();
        if (piVar4 != (int *)0x0) {
          piStack_84 = (int *)0x104e5b59;
          iVar3 = (**(code **)(*piVar4 + 0xa8))();
          if (iVar3 == 1) {
            piStack_84 = (int *)0x104e5b69;
            iVar3 = FUN_11442f40();
            if (iVar3 == 0) goto LAB_104e5d0a;
            if (((uint)param_1[1] >> 6 & 1) != 0) {
              piStack_84 = param_1[2];
              ppiStack_88 = param_1;
              pcStack_8c = (char *)0x104e5b86;
              (**(code **)(**param_1 + 8))();
              *param_1 = (int *)0x0;
            }
            param_1[1] = (int *)0x2;
            *(undefined1 *)(param_1 + 2) = 1;
            piStack_84 = (int *)0x104e5b9e;
            piVar4 = (int *)FUN_11442f40();
            piStack_84 = (int *)0x104e5ba5;
            uVar5 = (**(code **)(*piVar4 + 0x18))();
            iVar3 = DAT_120286b8;
            if (DAT_120286b8 != 0) {
              *(undefined4 *)(DAT_120286b8 + 0xa30) = uVar5;
              piStack_84 = (int *)&DAT_11d9d32b;
              ppiStack_88 = (int **)0x104e5bc9;
              (**(code **)(**(int **)(iVar3 + 0xa2c) + 0x1c))();
              ppiStack_88 = (int **)0x104e5bd0;
              piVar4 = (int *)FUN_11442f40();
              ppiStack_88 = (int **)0x104e5bda;
              iVar3 = (**(code **)(*piVar4 + 0xc4))();
              puStack_48 = auStack_58;
              ppiStack_88 = *(int ***)(iVar3 + 0x164);
              pcStack_8c = *(char **)(iVar3 + 0x168);
              puStack_90 = (undefined1 *)0x104e5bf7;
              puStack_44 = puStack_48;
              FUN_100b62c0();
              puStack_90 = &stack0xffffff80;
              FUN_104e7430(auStack_30,&DAT_11dbdcac);
              (**(code **)(**(int **)(DAT_120286b8 + 0xa28) + 0x1c))(uStack_28);
              cVar2 = FUN_100fd0c0(apiStack_40,"ParamCamera");
              if ((cVar2 != '\0') && (puStack_90 != (undefined1 *)0xffffffff)) {
                FUN_104e7430(auStack_58,&DAT_11dbdcf4,&puStack_90);
                if (puStack_44 != puStack_48) {
                  (**(code **)(**(int **)(DAT_120286b8 + 0xa2c) + 0x1c))(puStack_44);
                }
                if ((puStack_44 != auStack_58) && (puStack_44 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_44);
                }
              }
              FUN_10ba9b00(1,1);
              FUN_10c00470();
              *(undefined4 *)(DAT_120286b8 + 0xad0) = 1;
              (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x438))(1);
              if ((piStack_10 != aiStack_24) && (piStack_10 != (int *)0x0)) {
                piStack_84 = piStack_10;
                ppiStack_88 = (int **)0x104e5ce1;
                FUN_10c3d5d0();
              }
              if ((apiStack_40[0] != aiStack_54) && (apiStack_40[0] != (int *)0x0)) {
                piStack_84 = apiStack_40[0];
                ppiStack_88 = (int **)0x104e5d02;
                FUN_10c3d5d0();
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_104e5d0a:
    if (*(int *)(DAT_120286c8 + 0xfc) != 0) {
      piStack_84 = (int *)0x0;
      *(undefined4 *)(DAT_120286b8 + 0xa30) = 0;
      ppiStack_88 = (int **)0x0;
      pcStack_8c = "Dof_Active";
      puStack_90 = (undefined1 *)0x104e5d47;
      (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x2b4))();
    }
    if (DAT_120286b8 != 0) {
      piStack_84 = (int *)0x1;
      ppiStack_88 = (int **)0x0;
      *(undefined4 *)(DAT_120286b8 + 0xad0) = 0;
      pcStack_8c = (char *)0x104e5d69;
      FUN_10ba9b00();
      pcStack_8c = (char *)0x104e5d70;
      FUN_10c00470();
      pcStack_8c = (char *)0x104e5d85;
      cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x160))();
      if ((cVar2 == '\0') || (*(char *)(DAT_1202e818 + 0x209) != '\0')) {
        pcStack_8c = (char *)0x0;
      }
      else {
        pcStack_8c = (char *)0x1;
      }
      puStack_90 = (undefined1 *)0x104e5da9;
      (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x438))();
    }
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_84 = param_1[2];
      ppiStack_88 = param_1;
      pcStack_8c = (char *)0x104e5dbe;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((uStack_6c >> 6 & 1) != 0) {
    ppiStack_88 = &local_70;
    piStack_84 = piStack_68;
    pcStack_8c = (char *)0x104e5dec;
    (**(code **)(*local_70 + 8))();
  }
LAB_104e5dec:
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: thunk_FUN_11442f40@112e3690 =====

/* [RE-AUTO c0] */

void __fastcall thunk_FUN_11442f40(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x11442f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


// ===== caller of component accessor: FUN_11429e60@11429e60 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_11429e60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_11442f40();
  if (*(int *)(param_1 + 0x2df4) != 0) {
    iVar1 = FUN_11442f40();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_11442f40();
      iVar1 = (**(code **)(*piVar2 + 0xfc))(param_2);
      if (iVar1 != 0) {
        uVar3 = FUN_11429f60(iVar1);
        return uVar3;
      }
    }
  }
  return 0;
}


// ===== caller of component accessor: FUN_10e17b80@10e17b80 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10e17b80(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (param_2 == 0) {
    if (((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0xac), piVar1 != (int *)0x0)) &&
       (cVar3 = (**(code **)(*piVar1 + 0x24))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 8)) {
        return;
      }
      FUN_10e17580(*(undefined4 *)(param_1 + 8));
      puVar2 = param_3;
      param_2 = CONCAT13(1,(undefined3)param_2);
      FUN_104fa470(param_3,0,(int)&param_2 + 3);
      FUN_10b9c510(puVar2,1,local_10);
      FUN_10b9c510(puVar2,2,local_c);
      FUN_10b9c510(puVar2,3,local_8);
      FUN_10b9c510(puVar2,4,local_14);
      FUN_10e184f0();
      return;
    }
    FUN_10e183a0();
    if (*(int *)(param_1 + 0x38) != 0) {
      (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0xc))(param_1 + 0x30,0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    (**(code **)(*(int *)*param_3 + 0xb4))(*(undefined2 *)(param_3 + 1),0);
  }
  else if (((param_2 == 1) && (iVar6 = *(int *)(DAT_1202e818 + 0xd0), iVar6 != 0)) &&
          (piVar1 = *(int **)(iVar6 + 0xac), piVar1 != (int *)0x0)) {
    piVar5 = *(int **)(iVar6 + 0x90);
    uVar4 = (**(code **)(*piVar1 + 0x14))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))(uVar4);
    if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 0xa8))(), iVar6 == 1)) {
      FUN_11442f40();
      puVar2 = param_3;
      if (((*(uint *)param_3[4] >> 1 & 1) != 0) &&
         (iVar6 = (**(code **)(*piVar1 + 4))(), iVar6 != 0)) {
        (**(code **)(*piVar1 + 0x1c))();
        FUN_10e17d60();
        (**(code **)(*(int *)*puVar2 + 0xb4))(*(undefined2 *)(puVar2 + 1),1);
      }
      if ((*(uint *)(puVar2[4] + 8) >> 1 & 1) != 0) {
        (**(code **)(*piVar1 + 0x20))();
        FUN_10e183a0();
        FUN_10e17df0();
        (**(code **)(*(int *)*puVar2 + 0xb4))(*(undefined2 *)(puVar2 + 1),0);
        return;
      }
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112e3200@112e3200 =====

/* [RE-AUTO c0]
   strings:
     ""TurnInBox_idle""
     ""TurnInBox_close"" */

void FUN_112e3200(char param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x112e321e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x11c))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x112e322e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x11c))();
  return;
}


// ===== caller of component accessor: FUN_1129f8b0@1129f8b0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1129f8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = FUN_11248970();
  if ((iVar2 != 0) && (iVar2 = FUN_11248970(), *(int *)(iVar2 + 0x90) != 0)) {
    iVar2 = FUN_11248970();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x90) + 0xb4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0xb4))();
      iVar2 = *(int *)(iVar2 + 4);
      goto LAB_1129f904;
    }
  }
  iVar2 = 0;
LAB_1129f904:
  if (iVar2 == *(int *)((int)param_4 + 0x42eb)) {
    iVar2 = param_1 + 8;
    piVar3 = (int *)FUN_111e09f0();
    local_20 = (**(code **)(*piVar3 + 0x14))(*param_4);
    if (local_20 == 0) {
      local_1c = *(int *)((int)param_4 + 0x42ef) == 1;
      local_18 = local_20;
      local_20 = FUN_111e0990();
      local_18 = *(undefined4 *)((int)param_4 + 0x42f3);
      piVar3 = (int *)FUN_111e09f0();
      local_44 = *param_4;
      local_38 = &local_20;
      local_3c = *(undefined4 *)(param_1 + 0xc);
      local_48 = 1;
      local_40 = 1;
      local_30 = 0;
      local_28 = 0xffffffff;
      piVar3 = (int *)(**(code **)(*piVar3 + 0xc))(&local_48);
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_107d7df0(*(undefined4 *)((int)param_4 + 6));
        if (iVar4 == 0) {
          iVar4 = FUN_116812d0();
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(piVar3[3]);
        FUN_113a3720(param_4);
        iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piVar3);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_111e09f0();
          (**(code **)(*piVar5 + 0x1c))(piVar3[1],0);
          return;
        }
        iVar4 = FUN_11442f40();
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x10c))((int)param_4 + 0x92,0xa22);
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x114))((int)param_4 + 0xab5);
        }
        iVar4 = piVar3[1];
        iVar6 = FUN_111e0990();
        *(int *)(iVar6 + 0x2d88) = iVar4;
        piVar5 = (int *)FUN_111e0990();
        (**(code **)(*piVar5 + 0x41c))();
        cVar1 = (**(code **)(*piVar3 + 0x1c4))();
        if (cVar1 != '\0') {
          if (piVar3 + -2 != (int *)0x0) {
            iVar2 = (**(code **)(piVar3[-2] + 0x14))();
          }
          local_8 = 1;
          local_c = iVar2;
          FUN_11290a20(&local_c);
          local_14 = *param_4;
          local_10 = 1;
          FUN_112908e0(&local_14);
        }
      }
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112e3080@112e3080 =====

/* [RE-AUTO c0] */

void FUN_112e3080(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x112e308d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x144))();
    return;
  }
  return;
}


// ===== caller of component accessor: FUN_112a1130@112a1130 =====

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""OnReturnTown_OK""
     ""Catch""
     ""virtuos_cinematic_3""
     ""Em004""
     ""Em003"" */

void __thiscall FUN_112a1130(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  int local_488;
  undefined4 local_484;
  int local_480;
  char local_47c [4];
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  int local_46c;
  int local_468;
  int local_464;
  undefined1 local_45d;
  undefined1 local_45c [4];
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined1 local_438 [16];
  undefined1 *local_428;
  undefined1 *local_424;
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  undefined1 *local_410;
  undefined1 *local_40c;
  undefined1 local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar5 = *(int *)(param_1 + 0xc);
  local_464 = param_1;
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0xb4) == 0)) goto LAB_112a175d;
  *(undefined4 *)(*(int *)(iVar5 + 0xb4) + 0x28) = 3;
  piVar3 = (int *)(**(code **)(**(int **)(iVar5 + 0x90) + 0xb4))();
  if (piVar3 == (int *)0x0) goto LAB_112a175d;
  if (*(char *)((int)piVar3 + 0x2d45) != '\0') {
    FUN_1112d520();
    FUN_1112d6b0(0x2087,"OnReturnTown_OK",&DAT_11d9d32b,local_418);
    FUN_1112d550();
    FUN_11a89daa();
    return;
  }
  (**(code **)(*(int *)piVar3[4] + 0x44))(0,0xc354,0,0,4);
  local_478 = *(undefined4 *)(param_4 + 0x18);
  local_474 = *(int *)(param_4 + 0x20) != 0;
  local_47c[0] = '\0';
  local_46c = 1;
  local_408 = 0;
  memset(local_407,0,0x3ff);
  local_488 = piVar3[3];
  local_484 = *(undefined4 *)(param_4 + 0xc);
  local_494 = 0x72;
  local_490 = 0xffffffff;
  local_48c = 0xffffffff;
  (**(code **)(**(int **)(local_488 + 0x98) + 0x14))(&local_494);
  if (*(int *)(param_4 + 0xc) == 1) {
    iVar4 = (**(code **)(*piVar3 + 0x44))();
    local_46c = 2 - (uint)(iVar4 != 2);
    FUN_100ea3b0(&local_408,&DAT_11d1cfd8);
    FUN_100b5f70(&DAT_11d9d32b,&local_45d);
    FUN_100b5f70(&local_408,&local_45d);
    FUN_111e09b0();
    FUN_1115cba0(8,local_438,local_420,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if ((local_424 != local_438) && (local_424 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
    if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
    local_458 = 0x581;
    local_454 = 0xffffffff;
    local_450 = 0xffffffff;
    (**(code **)(**(int **)(iVar5 + 0x98) + 0x14))(&local_458);
    local_47c[0] = '\x01';
  }
  else {
    if (*(int *)(param_4 + 0xc) == 4) {
      puVar10 = &DAT_11d1cfec;
LAB_112a13d1:
      local_46c = 0;
    }
    else {
      if (*(int *)(param_4 + 0x14) != 1) {
        puVar10 = &DAT_11d1d000;
        goto LAB_112a13d1;
      }
      iVar4 = (**(code **)(*piVar3 + 0x44))();
      puVar10 = &DAT_11d1d000;
      local_46c = 2 - (uint)(iVar4 != 1);
    }
    FUN_100ea3b0(&local_408,puVar10);
    FUN_100b5f70(&DAT_11d9d32b,&local_45d);
    FUN_100b5f70(&local_408,&local_45d);
    FUN_111e09b0();
    FUN_1115cba0(8,local_438,local_420,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if ((local_424 != local_438) && (local_424 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
    if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
    local_458 = 0x582;
    local_454 = 0xffffffff;
    local_450 = 0xffffffff;
    (**(code **)(**(int **)(iVar5 + 0x98) + 0x14))(&local_458);
    local_47c[0] = '\0';
  }
  cVar2 = FUN_1140e1d0();
  if (cVar2 != '\0') {
    uVar6 = *(undefined4 *)(param_4 + 0x1c);
    piVar3 = (int *)FUN_111e09f0();
    iVar5 = (**(code **)(*piVar3 + 0x14))(uVar6);
    if (iVar5 == 0) {
      piVar3 = (int *)FUN_11442f40();
      iVar5 = *(int *)(param_4 + 0xc);
      bVar9 = true;
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_11442f40();
      piVar3 = (int *)FUN_11442f40();
      bVar9 = *(int *)(param_4 + 0x20) == 1;
      iVar5 = *(int *)(param_4 + 0xc);
    }
    (**(code **)(*piVar3 + 0xc0))(uVar6,iVar5 == 1,bVar9);
  }
  FUN_11290b60(&local_46c);
  FUN_11290640(local_47c);
  if (local_47c[0] == '\0') goto LAB_112a175d;
  local_410 = local_420;
  local_468 = 0;
  iVar5 = *(int *)(param_4 + 4);
  local_470 = 0;
  local_420[0] = 0;
  local_40c = local_410;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_4 + 8);
    if (iVar5 != 0) {
      local_470 = 2;
      pcVar11 = "Catch";
      goto LAB_112a15d8;
    }
  }
  else {
    local_470 = 0;
    pcVar11 = "Kill";
LAB_112a15d8:
    local_468 = iVar5;
    FUN_100e0410(pcVar11);
  }
  piVar3 = (int *)FUN_111e09f0();
  local_480 = (**(code **)(*piVar3 + 0x14))(local_468);
  if ((local_480 != 0) && (iVar5 = FUN_11442f40(), iVar5 != 0)) {
    FUN_11162750(local_438);
    iVar4 = FUN_113a2390();
    iVar5 = *(int *)(local_464 + 0xc);
    local_468 = iVar4;
    if ((iVar5 != 0) &&
       ((iVar7 = *(int *)(iVar5 + 0x78), iVar7 != 0 &&
        (iVar1 = *(int *)(iVar7 + 0xdc),
        iVar7 = FUN_11295070(*(undefined4 *)(iVar7 + 0xd8),iVar1,&local_468,&local_45d),
        iVar7 != iVar1)))) {
      piVar3 = (int *)FUN_11442f40();
      (**(code **)(*piVar3 + 0x130))(local_470);
    }
    puVar8 = local_424;
    if (((local_424 != local_428) &&
        (cVar2 = FUN_100fd0c0(local_438,"virtuos_cinematic_3"), cVar2 != '\0')) && (iVar5 != 0)) {
      if (iVar4 == 0xea88) {
        pcVar11 = "Em004";
LAB_112a16d9:
        FUN_100e5f90(pcVar11);
      }
      else if (iVar4 == 0xea7e) {
        pcVar11 = "Em003";
        goto LAB_112a16d9;
      }
      FUN_1026d020(0x192);
      FUN_100e0410(local_40c);
      (**(code **)(**(int **)(iVar5 + 0x98) + 0x14))(local_45c);
      FUN_1026d600();
      puVar8 = local_424;
    }
    if ((puVar8 != local_438) && (puVar8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puVar8);
    }
  }
  if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
LAB_112a175d:
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: CMonsterInfo::SpawnMonstersFromList@112a2e10 =====

/* [RE-R1]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

void __thiscall
CMonsterInfo__SpawnMonstersFromList(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_1128e900();
  local_14 = 0;
  if (*param_4 < 1) {
    return;
  }
  local_10 = param_1 + 8;
  piVar6 = param_4 + 1;
  do {
    piVar2 = (int *)FUN_111e09f0();
    iVar3 = (**(code **)(*piVar2 + 0x14))(*piVar6);
    if (iVar3 == 0) {
      piVar2 = (int *)FUN_111e09f0();
      iVar3 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xc),1,*piVar6,0xffffffff);
      param_1 = local_8;
      local_18 = iVar3;
      if (iVar3 != 0) {
        iVar4 = FUN_1140dd10();
        if ((iVar4 == 0x13) && (iVar4 = FUN_1140dd10(), iVar4 == 0x14)) {
          local_20 = *piVar6;
          local_1c = 0;
          iVar4 = GetClientMessageChannel();
          if (iVar4 != 0) {
            piVar2 = (int *)GetClientMessageChannel();
            (**(code **)(*piVar2 + 4))(0x1e4,&local_20);
          }
        }
        iVar4 = *(int *)((int)piVar6 + 6);
        local_c = &PTR_FUN_11dc8ee8;
        if ((DAT_123bee5c & 1) == 0) {
          DAT_123bee5c = DAT_123bee5c | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CMonsterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70e30);
        }
        puVar5 = (undefined4 *)*DAT_123bee60;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)CInfoManager__FindByName(&local_c,"CMonsterInfo",0),
           puVar5 == (undefined4 *)0x0)) {
          if ((DAT_123bedd4 & 1) == 0) {
            DAT_123bedd4 = DAT_123bedd4 | 1;
            CMonsterInfo__InitInfoManager();
            FUN_11a8911f(&LAB_11c99700);
          }
          puVar5 = &DAT_123bedd8;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar4 == -1) ||
           ((((iVar4 == 0 && (puVar5[0xc] != 0)) || (puVar5[10] == 0)) ||
            ((iVar4 = iVar4 - puVar5[0xc], iVar4 < 0 || ((int)puVar5[9] <= iVar4)))))) {
LAB_112a2f89:
          iVar4 = FUN_116812d0();
        }
        else {
          iVar1 = *(int *)(puVar5[8] + (iVar4 / (int)puVar5[10]) * 4);
          if ((iVar1 == 0) || (iVar4 = *(int *)(iVar1 + (iVar4 % (int)puVar5[10]) * 4), iVar4 == 0))
          goto LAB_112a2f89;
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(*(undefined4 *)(iVar3 + 0xc));
        FUN_113a3720(piVar6);
        iVar4 = (**(code **)(**(int **)(local_8 + 0xc) + 0x18))(iVar3);
        if (iVar4 != 0) {
          piVar6 = (int *)FUN_111e09f0();
          (**(code **)(*piVar6 + 0x1c))(*(undefined4 *)(iVar3 + 4),0);
          return;
        }
        local_c = *(undefined ***)(iVar3 + 0x18);
        if ((local_c != (undefined **)0x0) && (iVar3 = 0, 0 < *(int *)((int)piVar6 + 0x1a39))) {
          puVar5 = (undefined4 *)((int)piVar6 + 0x1a3d);
          do {
            (**(code **)(*local_c + 0x3c))(*puVar5);
            puVar5 = puVar5 + 2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)piVar6 + 0x1a39));
        }
        iVar3 = FUN_11442f40();
        param_1 = local_8;
        if (iVar3 != 0) {
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x10c))((int)piVar6 + 0x92,0xa22);
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x114))((int)piVar6 + 0xab5);
          param_1 = local_8;
        }
      }
    }
    piVar6 = (int *)((int)piVar6 + 0x42eb);
    local_14 = local_14 + 1;
    if (*param_4 <= local_14) {
      return;
    }
  } while( true );
}


// ===== caller of component accessor: FUN_112a6f70@112a6f70 =====

/* [RE-AUTO c0] */

void __thiscall FUN_112a6f70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 in_XMM0_Da;
  undefined4 uVar9;
  undefined4 in_XMM0_Db;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_84 [36];
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  float local_8;
  
  puVar1 = param_4;
  iVar7 = param_4[3];
  param_4 = (undefined4 *)(param_1 + 8);
  piVar2 = (int *)FUN_111e09f0();
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_111e09f0();
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (*(int *)(iVar3 + 4) == iVar7) {
      piVar2 = (int *)FUN_111e0980();
      iVar3 = (**(code **)(*piVar2 + 0x6c))();
      if (iVar3 == 0) {
        return;
      }
      iVar7 = iVar7 + 1000;
    }
  }
  piVar2 = (int *)FUN_111e09f0();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x14))(iVar7);
  if ((piVar2 != (int *)0x0) && (piVar2[6] != 0)) {
    local_c = piVar2;
    iVar7 = (**(code **)(*piVar2 + 0xa8))();
    if ((iVar7 == 1) && (puVar1[0x1e] == 0)) {
      iVar7 = FUN_11442f40();
      if (iVar7 != 0) {
        piVar2 = (int *)FUN_11442f40();
        (**(code **)(*piVar2 + 0x118))(*puVar1,puVar1[1],puVar1[2]);
        return;
      }
    }
    else {
      piVar4 = (int *)FUN_111e0980();
      (**(code **)(*piVar4 + 0x70))();
      FUN_11a894ef();
      iVar7 = -1;
      if (0 < (int)puVar1[0xf]) {
        iVar7 = puVar1[0xf];
      }
      iVar3 = -1;
      if (0 < (int)puVar1[0x10]) {
        iVar3 = puVar1[0x10];
      }
      FUN_10d77020(iVar7,iVar3,puVar1[4],
                   (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da) / DAT_11de9a44 +
                   (float)puVar1[0x11],puVar1[0x12],puVar1[0x13]);
      if (puVar1[0x14] == 0) {
        local_60 = 0;
      }
      else {
        local_4c = puVar1[0x15];
        local_1c = puVar1[0x1f] == 1;
        local_48 = puVar1[0x16];
        local_60 = 1;
        local_5c = puVar1[0x17];
        uStack_58 = puVar1[0x18];
        uStack_54 = puVar1[0x19];
        uStack_50 = puVar1[0x1a];
        local_44 = puVar1[0x1b];
        local_40 = puVar1[0x1c];
        local_3c = puVar1[0x1d];
        if (((bool)local_1c) && (local_8 = 0.0, 0 < (int)puVar1[0x20])) {
          puVar8 = puVar1 + 0x22;
          puVar6 = puVar1 + 0x30;
          do {
            piVar2 = local_c;
            if (4 < (int)local_8) break;
            if (local_24 == local_20) {
              FUN_104c1300(local_24,puVar6,(int)&param_4 + 3,1,1);
            }
            else {
              *local_24 = *puVar6;
              local_24 = local_24 + 1;
            }
            local_18 = puVar8[-1];
            local_14 = *puVar8;
            local_10 = puVar8[1];
            FUN_10d792d0(&local_18);
            puVar6 = puVar6 + 1;
            local_8 = (float)((int)local_8 + 1);
            puVar8 = puVar8 + 3;
            piVar2 = local_c;
          } while ((int)local_8 < (int)puVar1[0x20]);
        }
      }
      fVar10 = (float)puVar1[6];
      piVar4 = (int *)puVar1[7];
      fVar11 = (float)puVar1[8];
      iVar7 = puVar1[5];
      local_38 = puVar1[0x1e];
      uVar9 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      param_4 = (undefined4 *)fVar10;
      local_c = piVar4;
      local_8 = fVar11;
      if (((iVar7 == 0xc) && ((uint)puVar1[4] < 9)) && (1 < (uint)puVar1[4])) {
        FUN_113f3640();
        iVar7 = FUN_1115abd0();
        fVar10 = (float)param_4;
        piVar4 = local_c;
        fVar11 = local_8;
        if (iVar7 != 0) {
          FUN_113f3640();
          piVar4 = (int *)FUN_1115abd0();
          pfVar5 = (float *)(**(code **)(*piVar4 + 0x30))(&local_18);
          fVar10 = *pfVar5 + 0.0;
          piVar4 = (int *)(pfVar5[1] + 0.0);
          fVar11 = pfVar5[2] + DAT_11de98e8;
        }
        uVar9 = 0;
        uVar12 = 0;
        iVar7 = 0x10d;
        uVar13 = DAT_11de9918;
      }
      (**(code **)(*(int *)piVar2[6] + 0x30))
                (iVar7,fVar10,piVar4,fVar11,uVar9,uVar12,uVar13,puVar1[2],local_84);
      if (local_28 != 0) {
        FUN_10c3d5d0(local_28);
      }
      if (local_34 != 0) {
        FUN_10c3d5d0(local_34);
      }
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112a72b0@112a72b0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_112a72b0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *in_XMM0_Da;
  undefined4 in_XMM0_Db;
  float fVar8;
  int iVar9;
  undefined1 local_a0 [12];
  undefined1 local_94 [36];
  undefined1 local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  undefined1 local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  undefined1 local_9;
  int local_8;
  
  local_18 = 0;
  if (0 < *param_4) {
    local_8 = param_1 + 8;
    piVar6 = param_4 + 10;
    do {
      iVar7 = piVar6[-6];
      piVar1 = (int *)FUN_111e09f0();
      iVar2 = (**(code **)(*piVar1 + 0x28))();
      if (iVar2 == 0) {
LAB_112a7324:
        piVar1 = (int *)FUN_111e09f0();
        piVar1 = (int *)(**(code **)(*piVar1 + 0x14))(iVar7);
        local_10 = piVar1;
        if ((piVar1 != (int *)0x0) && (piVar1[6] != 0)) {
          iVar7 = (**(code **)(*piVar1 + 0xa8))();
          if ((iVar7 == 1) && (piVar6[0x15] == 0)) {
            iVar7 = FUN_11442f40();
            if (iVar7 != 0) {
              piVar1 = (int *)FUN_11442f40();
              (**(code **)(*piVar1 + 0x118))(piVar6[-9],piVar6[-8],piVar6[-7]);
            }
          }
          else {
            piVar3 = (int *)FUN_111e0980();
            (**(code **)(*piVar3 + 0x70))();
            FUN_11a894ef();
            iVar7 = -1;
            if (0 < piVar6[6]) {
              iVar7 = piVar6[6];
            }
            iVar2 = -1;
            if (0 < piVar6[7]) {
              iVar2 = piVar6[7];
            }
            FUN_10d77020(iVar7,iVar2,piVar6[-5],
                         (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da) / DAT_11de9a44 +
                         (float)piVar6[8],piVar6[9],piVar6[10]);
            if (piVar6[0xb] == 0) {
              local_70 = 0;
            }
            else {
              local_5c = piVar6[0xc];
              local_2c = piVar6[0x16] == 1;
              local_58 = piVar6[0xd];
              local_70 = 1;
              local_6c = piVar6[0xe];
              iStack_68 = piVar6[0xf];
              iStack_64 = piVar6[0x10];
              iStack_60 = piVar6[0x11];
              local_54 = piVar6[0x12];
              local_50 = piVar6[0x13];
              local_4c = piVar6[0x14];
              if (((bool)local_2c) && (iVar7 = 0, piVar1 = local_10, 0 < piVar6[0x17])) {
                local_14 = piVar6 + 0x27;
                piVar3 = piVar6 + 0x19;
                do {
                  piVar1 = local_10;
                  if (4 < iVar7) break;
                  if (local_34 == local_30) {
                    FUN_104c1300(local_34,local_14,&local_9,1,1);
                  }
                  else {
                    *local_34 = *local_14;
                    local_34 = local_34 + 1;
                  }
                  local_28 = piVar3[-1];
                  local_24 = *piVar3;
                  local_20 = piVar3[1];
                  if (local_40 == local_3c) {
                    FUN_10d789d0(local_40,&local_28,&local_9,1,1);
                  }
                  else {
                    if (local_40 != (int *)0x0) {
                      *local_40 = local_28;
                      local_40[1] = local_24;
                      local_40[2] = local_20;
                    }
                    local_40 = local_40 + 3;
                  }
                  iVar7 = iVar7 + 1;
                  local_14 = local_14 + 1;
                  piVar3 = piVar3 + 3;
                  piVar1 = local_10;
                } while (iVar7 < piVar6[0x17]);
              }
            }
            in_XMM0_Da = (int *)piVar6[-3];
            piVar3 = (int *)piVar6[-2];
            fVar8 = (float)piVar6[-1];
            iVar5 = piVar6[-4];
            local_48 = piVar6[0x15];
            iVar7 = *piVar6;
            iVar2 = piVar6[1];
            iVar9 = piVar6[2];
            local_1c = fVar8;
            local_14 = in_XMM0_Da;
            local_10 = piVar3;
            if (((iVar5 == 0xc) && ((uint)piVar6[-5] < 9)) && (1 < (uint)piVar6[-5])) {
              FUN_113f3640();
              iVar7 = FUN_1115abd0();
              in_XMM0_Da = local_14;
              piVar3 = local_10;
              fVar8 = local_1c;
              if (iVar7 != 0) {
                FUN_113f3640();
                piVar3 = (int *)FUN_1115abd0();
                pfVar4 = (float *)(**(code **)(*piVar3 + 0x30))(local_a0);
                in_XMM0_Da = (int *)(*pfVar4 + 0.0);
                piVar3 = (int *)(pfVar4[1] + 0.0);
                fVar8 = pfVar4[2] + DAT_11de98e8;
              }
              iVar2 = 0;
              iVar7 = 0;
              iVar5 = 0x10d;
              iVar9 = DAT_11de9918;
            }
            in_XMM0_Db = 0;
            (**(code **)(*(int *)piVar1[6] + 0x30))
                      (iVar5,in_XMM0_Da,piVar3,fVar8,iVar7,iVar2,iVar9,piVar6[-7],local_94);
            if (local_38 != 0) {
              FUN_10c3d5d0(local_38);
            }
            if (local_44 != 0) {
              FUN_10c3d5d0(local_44);
            }
          }
        }
      }
      else {
        piVar1 = (int *)FUN_111e09f0();
        iVar2 = (**(code **)(*piVar1 + 0x28))();
        if (*(int *)(iVar2 + 4) != iVar7) goto LAB_112a7324;
        piVar1 = (int *)FUN_111e0980();
        iVar2 = (**(code **)(*piVar1 + 0x6c))();
        if (iVar2 != 0) {
          iVar7 = iVar7 + 1000;
          goto LAB_112a7324;
        }
      }
      piVar6 = piVar6 + 0x35;
      local_18 = local_18 + 1;
    } while (local_18 < *param_4);
  }
  return;
}


// ===== caller of component accessor: FUN_112ea790@112ea790 =====

/* [RE-AUTO c0]
   strings:
     ""SupplyBox_idle""
     ""SupplyBox_close"" */

void FUN_112ea790(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 local_18 [20];
  
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0x8c))(local_18);
  cVar1 = FUN_113a58c0();
  while (cVar1 == '\0') {
    FUN_113a5930();
    cVar1 = FUN_113a2a30(param_1,10);
    if ((cVar1 != '\0') && (piVar2 = (int *)FUN_11442f40(), piVar2 != (int *)0x0)) {
      if (param_2 == '\0') {
        pcVar3 = "SupplyBox_close";
      }
      else {
        pcVar3 = "SupplyBox_idle";
      }
      (**(code **)(*piVar2 + 0x11c))(pcVar3);
    }
    FUN_113a58d0();
    cVar1 = FUN_113a58c0();
  }
  FUN_113a5790();
  return;
}


// ===== caller of component accessor: FUN_112e3190@112e3190 =====

/* [RE-AUTO c0]
   strings:
     ""TurnInBox_idle""
     ""TurnInBox_close"" */

void __thiscall FUN_112e3190(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0xac);
  iVar2 = FUN_11442f40();
  if ((piVar3 != (int *)0x0) && (iVar2 != 0)) {
    (**(code **)(*piVar3 + 0x10))(*(undefined4 *)(param_1 + 4));
    cVar1 = (**(code **)(*piVar3 + 0x24))();
    piVar3 = (int *)FUN_11442f40();
    if (piVar3 != (int *)0x0) {
      if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x112e31f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x11c))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x112e31e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x11c))();
      return;
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112e3ce0@112e3ce0 =====

/* [RE-AUTO c0]
   strings:
     ""SupplyBox_idle""
     ""SupplyBox_close"" */

void FUN_112e3ce0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_11442f40();
  if (piVar2 != (int *)0x0) {
    if (param_1 != (int *)0x0) {
      iVar3 = (**(code **)(*param_1 + 0x180))();
      if (iVar3 != 0) {
        cVar1 = FUN_112eb880(param_2);
        if (cVar1 != '\0') {
          cVar1 = FUN_115a95d0(*param_2,param_2[1]);
          if (cVar1 != '\0') {
            (**(code **)(*piVar2 + 0x11c))("SupplyBox_idle");
            return;
          }
        }
      }
    }
    (**(code **)(*piVar2 + 0x11c))("SupplyBox_close");
  }
  return;
}


// ===== caller of component accessor: FUN_112e3260@112e3260 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset */

void __thiscall
FUN_112e3260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,char param_15)

{
  int *piVar1;
  int iVar2;
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  undefined4 uStack_a6d98;
  undefined4 uStack_a6d94;
  undefined4 uStack_a6d90;
  undefined8 uStack_a6d8c;
  undefined4 uStack_a6d84;
  undefined8 uStack_a6d80;
  undefined4 uStack_a6d78;
  undefined8 uStack_a6d74;
  undefined4 uStack_a6d6c;
  undefined8 uStack_a6d68;
  undefined4 uStack_a6d60;
  
  if (param_15 != '\0') {
    memset(auStack_a6da6,0,0xa6d9c);
    uStack_a6d8c = CONCAT44(param_3,param_2);
    uStack_a6da8 = 0x2e5;
    uStack_a6d98 = *(undefined4 *)(param_1 + 4);
    uStack_a6d80 = CONCAT44(param_6,param_5);
    uStack_a6d84 = param_4;
    uStack_a6d74 = CONCAT44(param_9,param_8);
    uStack_a6d78 = param_7;
    uStack_a6d6c = param_10;
    uStack_a6d94 = 0;
    uStack_a6d90 = param_14;
    uStack_a6d68 = CONCAT44(param_12,param_11);
    uStack_a6d60 = param_13;
    piVar1 = (int *)FUN_111e09b0();
    (**(code **)(*piVar1 + 0x14))(&uStack_a6da8);
  }
  iVar2 = FUN_11442f40();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_11442f40();
    (**(code **)(*piVar1 + 0x138))
              (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14);
    FUN_11a89daa();
    return;
  }
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: FUN_112e3970@112e3970 =====

/* [RE-AUTO c0] */

void __fastcall FUN_112e3970(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)FUN_11442f40();
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    if (iVar3 != -1) {
      FUN_1146b2c0();
      iVar3 = FUN_111e0990();
      (**(code **)(*piVar2 + 0x134))();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_11442f40();
        (**(code **)(*piVar4 + 200))(iVar3);
      }
      cVar1 = (**(code **)(*param_1 + 0x180))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x60))();
      }
      cVar1 = (**(code **)(*param_1 + 0x180))();
      if ((cVar1 != '\0') && ((char)param_1[0x103c] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x112e39f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x148))();
        return;
      }
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112e3aa0@112e3aa0 =====

/* [RE-AUTO c0] */

void FUN_112e3aa0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))();
    if ((uVar2 >> 3 & 1) != 0) {
      (**(code **)(*piVar1 + 0xe4))(*(char *)(param_1 + 4) != '\0');
    }
  }
  return;
}


// ===== caller of component accessor: FUN_112e3ae0@112e3ae0 =====

/* [RE-AUTO c0] */

void FUN_112e3ae0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xf0))(*(char *)(param_1 + 4) != '\0',param_1 + 5);
  }
  return;
}


// ===== caller of component accessor: FUN_112e3b20@112e3b20 =====

/* [RE-AUTO c0] */

void FUN_112e3b20(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_c = *(undefined4 *)(param_1 + 0x2c);
    local_8 = *(undefined4 *)(param_1 + 0x30);
    (**(code **)(*piVar1 + 0xcc))(&local_10,*(undefined4 *)(param_1 + 0x34));
  }
  return;
}


// ===== caller of component accessor: FUN_112e3b80@112e3b80 =====

/* [RE-AUTO c0] */

void FUN_112e3b80(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    local_10 = *(undefined4 *)(param_1 + 5);
    local_c = *(undefined4 *)(param_1 + 9);
    local_8 = *(undefined4 *)(param_1 + 0xd);
    (**(code **)(*piVar1 + 0xd0))(&local_10,*(char *)(param_1 + 4) == '\x01');
  }
  return;
}


// ===== caller of component accessor: FUN_112e3be0@112e3be0 =====

/* [RE-AUTO c0] */

void FUN_112e3be0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xdc))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// ===== caller of component accessor: FUN_112e3c00@112e3c00 =====

/* [RE-AUTO c0] */

void FUN_112e3c00(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    local_10 = *(undefined4 *)(param_1 + 4);
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = *(undefined4 *)(param_1 + 0xc);
    (**(code **)(*piVar1 + 0xd4))(&local_10);
  }
  return;
}


// ===== caller of component accessor: FUN_112e3c50@112e3c50 =====

/* [RE-AUTO c0] */

void FUN_112e3c50(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x112e3c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xe8))();
    return;
  }
  return;
}


// ===== caller of component accessor: FUN_112e3c80@112e3c80 =====

/* [RE-AUTO c0] */

void FUN_112e3c80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd8))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// ===== caller of component accessor: FUN_112e3cc0@112e3cc0 =====

/* [RE-AUTO c0] */

void FUN_112e3cc0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x112e3cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x84))();
    return;
  }
  return;
}


// ===== caller of component accessor: FUN_10d4ef45@10d4ef45 =====

/* WARNING: Control flow encountered bad instruction data */
/* [RE-AUTO c0] */

void FUN_10d4ef45(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  FUN_11442f40();
  if (*(int *)(param_1 + 0x2df4) != 0) {
    FUN_1240422a();
    return;
  }
  bVar1 = false;
  bVar2 = false;
  func_0x123f0da1();
  if (bVar1 || bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// ===== caller of component accessor: FUN_1240422a@1240422a =====

/* WARNING: Control flow encountered bad instruction data */
/* [RE-AUTO c0] */

void FUN_1240422a(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_11442f40();
  uVar7 = iVar3 < 0;
  uVar6 = iVar3 == 0;
  if ((bool)uVar6) {
    bVar4 = false;
    bVar5 = false;
    func_0x123f0da1();
    if (bVar4 || bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  puVar1 = (undefined4 *)FUN_11442f40();
                    /* WARNING: Call to offcut address within same function */
  uVar8 = func_0x123ee076(*puVar1);
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  if ((bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x123ee07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(iVar3 + -0x3c2f))();
    return;
  }
  if ((bool)uVar6) {
    *(char *)uVar8 = *(char *)uVar8 + (char)uVar8;
                    /* WARNING: Could not recover jumptable at 0x123ee0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  piVar2 = (int *)(**(code **)(iVar3 + 0xc))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2cc))(0);
  }
  *(undefined4 *)(UNRECOVERED_JUMPTABLE + 0x1f44) = 0xffffffff;
                    /* WARNING: Call to offcut address within same function */
  func_0x124012d6(**(undefined4 **)(UNRECOVERED_JUMPTABLE + 0xc),2);
  func_0x44c0a032();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== caller of component accessor: FUN_112e8530@112e8530 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset */

void __thiscall
FUN_112e8530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,char param_15)

{
  int *piVar1;
  int iVar2;
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  undefined4 uStack_a6d98;
  undefined4 uStack_a6d94;
  undefined4 uStack_a6d90;
  undefined8 uStack_a6d8c;
  undefined4 uStack_a6d84;
  undefined8 uStack_a6d80;
  undefined4 uStack_a6d78;
  undefined8 uStack_a6d74;
  undefined4 uStack_a6d6c;
  undefined8 uStack_a6d68;
  undefined4 uStack_a6d60;
  
  if (param_15 != '\0') {
    memset(auStack_a6da6,0,0xa6d9c);
    uStack_a6d8c = CONCAT44(param_3,param_2);
    uStack_a6da8 = 0x2e5;
    uStack_a6d98 = *(undefined4 *)(param_1 + 4);
    uStack_a6d80 = CONCAT44(param_6,param_5);
    uStack_a6d84 = param_4;
    uStack_a6d74 = CONCAT44(param_9,param_8);
    uStack_a6d78 = param_7;
    uStack_a6d6c = param_10;
    uStack_a6d94 = 0;
    uStack_a6d90 = param_14;
    uStack_a6d68 = CONCAT44(param_12,param_11);
    uStack_a6d60 = param_13;
    piVar1 = (int *)FUN_111e09b0();
    (**(code **)(*piVar1 + 0x14))(&uStack_a6da8);
  }
  iVar2 = FUN_11442f40();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_11442f40();
    (**(code **)(*piVar1 + 0x138))
              (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14);
    FUN_11a89daa();
    return;
  }
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: FUN_112e8a80@112e8a80 =====

/* [RE-AUTO c0] */

void FUN_112e8a80(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_11442f40();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x112e8a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x84))();
    return;
  }
  return;
}


// ===== caller of component accessor: FUN_112ea8c0@112ea8c0 =====

/* [RE-AUTO c0]
   strings:
     ""SupplyBox_idle"" */

void FUN_112ea8c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [20];
  
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0x8c))(local_18);
  cVar1 = FUN_113a58c0();
  while (cVar1 == '\0') {
    iVar2 = FUN_113a5930();
    if ((*(int *)(iVar2 + 4) == *param_2) && (piVar3 = (int *)FUN_11442f40(), piVar3 != (int *)0x0))
    {
      (**(code **)(*piVar3 + 0x11c))("SupplyBox_idle");
    }
    FUN_113a58d0();
    cVar1 = FUN_113a58c0();
  }
  FUN_113a5790();
  return;
}


// ===== caller of component accessor: FUN_113a3cc0@113a3cc0 =====

/* [RE-AUTO c0] */

void FUN_113a3cc0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_11442f40();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_11442f40();
                    /* WARNING: Could not recover jumptable at 0x113a3cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0xc))();
    return;
  }
  return;
}


// ===== caller of component accessor: FUN_115ed230@115ed230 =====

/* [RE-AUTO c0] */

void __thiscall FUN_115ed230(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)FUN_1164bd60(param_2);
  iVar3 = (**(code **)(*piVar2 + 0xa8))();
  if (iVar3 == 1) {
    piVar2 = (int *)FUN_11442f40();
    local_28 = local_38;
    pcVar1 = *(char **)(param_1 + 0x30);
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    local_24 = local_28;
    FUN_100b62c0(*(char **)(param_1 + 0x30),pcVar4);
    local_10 = local_20;
    pcVar1 = *(char **)(param_1 + 0x18);
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    local_c = local_10;
    FUN_100b62c0(*(char **)(param_1 + 0x18),pcVar4);
    (**(code **)(*piVar2 + 0x150))(0,local_20,local_38);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_24);
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: FUN_115ed320@115ed320 =====

/* [RE-AUTO c0] */

void __thiscall FUN_115ed320(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)FUN_1164bd60(param_2);
  iVar3 = (**(code **)(*piVar2 + 0xa8))();
  if (iVar3 == 1) {
    piVar2 = (int *)FUN_11442f40();
    local_28 = local_38;
    pcVar1 = *(char **)(param_1 + 0x30);
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    local_24 = local_28;
    FUN_100b62c0(*(char **)(param_1 + 0x30),pcVar4);
    local_10 = local_20;
    pcVar1 = *(char **)(param_1 + 0x18);
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    local_c = local_10;
    FUN_100b62c0(*(char **)(param_1 + 0x18),pcVar4);
    (**(code **)(*piVar2 + 0x150))(1,local_20,local_38);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_24);
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of component accessor: FUN_11416980@11416980 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_11416980(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x90), piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(*(undefined4 *)(param_1 + 0x1a0));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0xa8))();
      if (iVar2 == 1) {
        uVar3 = FUN_11442f40();
        return uVar3;
      }
    }
    return 0;
  }
  return 0;
}


// ===== FUN_10be8640@10be8640 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10be8640(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_23c [568];
  
  FUN_10a6fb20();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x18))();
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(uVar3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38c))(local_23c);
    FUN_10beac30(param_2);
  }
  return;
}


// ===== FUN_11038a20@11038a20 =====

/* [RE-AUTO c0]
   strings:
     ""__this"" */

void __thiscall FUN_11038a20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int *local_14;
  int local_8;
  
  iVar1 = (int)param_2;
  local_8 = param_1;
  piVar2 = (int *)(**(code **)(**(int **)((int)param_2 + 0xc) + 0x150))(2);
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x38))(), iVar3 != 0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0x30))(0);
    param_2 = piVar2;
    (**(code **)(*piVar2 + 8))();
    local_14 = *(int **)(iVar1 + 8);
    local_18 = 3;
    (**(code **)(*piVar2 + 0x18))("__this",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(local_8 + 0x44));
    FUN_10c0df10(&DAT_11cc35f8,&param_2);
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


// ===== FUN_10bd1110@10bd1110 =====

/* [RE-AUTO c0] */

void __fastcall FUN_10bd1110(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10bd111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x78))();
  return;
}


// ===== FUN_10bd10d0@10bd10d0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10bd10d0(int param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x74))(&local_10);
  return;
}


// ===== FUN_10be8b60@10be8b60 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10be8b60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10be8b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x2f0))();
    return uVar1;
  }
  return 0;
}

