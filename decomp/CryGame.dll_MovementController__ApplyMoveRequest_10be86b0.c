
/* [RE-R1]
   strings:
     ""RequestedMoveAnim""
     ""MoveSpeedMultiplier""
     ""Steer_Enabled"" */

void __thiscall MovementController__ApplyMoveRequest(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined8 uVar8;
  undefined1 local_268 [4];
  undefined1 local_264 [76];
  undefined1 local_218 [4];
  undefined1 local_214 [212];
  undefined4 local_140;
  int local_13c;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  char local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  char local_cc;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar1 + 0x288))();
  if (iVar3 == 0) {
    return;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x180))();
  iVar3 = param_2;
  if (cVar2 != '\0') {
    return;
  }
  if ((*(uint *)(param_2 + 0x133) & 4) == 0) {
    if ((*(uint *)(param_2 + 0x133) & 2) == 0) goto LAB_10be8a0b;
    FUN_10bebab0(param_2);
    CInfoRecord__GetModelString(local_214);
    puVar4 = (undefined8 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x94))();
    uVar8 = *puVar4;
    local_c = *(float *)(puVar4 + 1);
    local_14._0_4_ = (float)uVar8;
    local_14._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_20 = CONCAT44(local_e8 - local_14._4_4_,local_ec - (float)local_14);
    local_18 = local_e4 - local_c;
    local_14 = uVar8;
    iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
    if (local_110 == iVar5) {
      uVar7 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    }
    else {
      uVar7 = (**(code **)(**(int **)m_pThis_exref + 0x2b0))(local_110);
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x534))(uVar7);
    FUN_10de9e40(*(undefined4 *)(param_1 + 0x48),local_218);
    cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x180))();
    if ((cVar2 == '\0') && (iVar5 = FUN_109835e0(&DAT_11d9d32b), iVar5 != 0)) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x288))();
      (**(code **)(**(int **)(iVar5 + 0x14) + 0x10))(local_10c,local_108);
      fVar6 = local_18;
      uVar8 = local_20;
      if (local_cc != '\x01') {
        uVar7 = extraout_ECX_01;
        if (local_cc == '\0') {
          cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0xb8))(local_8);
          uVar7 = extraout_ECX_02;
          uVar8 = local_20;
          fVar6 = local_18;
          goto joined_r0x10be8990;
        }
        goto LAB_10be89cb;
      }
      goto LAB_10be89b3;
    }
  }
  else {
    FUN_10a6fb20();
    FUN_10a672e0(iVar3);
    CInfoRecord__GetModelString(local_264);
    puVar4 = (undefined8 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x94))();
    uVar8 = *puVar4;
    local_18 = *(float *)(puVar4 + 1);
    local_20._0_4_ = (float)uVar8;
    local_20._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_14 = CONCAT44(local_fc - local_20._4_4_,local_100 - (float)local_20);
    local_c = local_f8 - local_18;
    local_20 = uVar8;
    iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
    if (local_13c == iVar5) {
      local_140 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    }
    else {
      local_140 = (**(code **)(**(int **)m_pThis_exref + 0x2b0))(local_13c);
    }
    FUN_10de9de0(*(undefined4 *)(param_1 + 0x48),local_268,0);
    iVar5 = FUN_109835e0(&DAT_11d9d32b);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x288))();
      (**(code **)(**(int **)(iVar5 + 0x14) + 0x10))(local_d8,local_d4);
      fVar6 = local_c;
      local_d0 = local_e4;
      uVar8 = local_14;
      if (local_e0 == '\x01') {
LAB_10be89b3:
        (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(local_8,local_d0,uVar8,fVar6,0);
        uVar7 = extraout_ECX_03;
        iVar3 = param_2;
      }
      else {
        uVar7 = extraout_ECX;
        if (local_e0 == '\0') {
          cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0xb8))(local_8);
          uVar7 = extraout_ECX_00;
          local_d0 = local_e4;
          uVar8 = local_14;
          fVar6 = local_c;
joined_r0x10be8990:
          if (cVar2 == '\0') goto LAB_10be89b3;
        }
      }
LAB_10be89cb:
      iVar5 = **(int **)(param_1 + 0x48);
      FUN_10a4bb60(&local_8,uVar7);
      (**(code **)(iVar5 + 0xd8))();
      iVar5 = FUN_109835e0();
      if (iVar5 == 0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x334))(1);
      }
    }
  }
  FUN_104f6f60();
LAB_10be8a0b:
  iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))();
  if (iVar5 != 0) {
    uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 4))();
    iVar5 = FUN_104753a0(uVar7);
    if ((iVar5 != 0) && (iVar5 != -0x60)) {
      FUN_113168d0(iVar3 + 0xd);
      uVar7 = FUN_113168d0("RequestedMoveAnim",&local_2c);
      FUN_1046dc90(uVar7);
      FUN_1025bc60(local_2c,&local_8);
      uVar7 = FUN_113168d0("MoveSpeedMultiplier",&local_28);
      FUN_1046dc90(uVar7);
      FUN_1025bcc0(local_28,iVar3 + 400);
      param_2 = CONCAT13(1,(undefined3)param_2);
      uVar7 = FUN_113168d0("Steer_Enabled",&local_24);
      FUN_1046dc90(uVar7);
      FUN_1025be30(local_24,(int)&param_2 + 3);
    }
  }
  return;
}

