
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

