
/* [RE-RMI] RMI:CGameRules:ClAddSpawnGroup (S2C) */

undefined4 * RMI_CGameRules_ClAddSpawnGroup(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x44))("entityId",&local_8,0x656964);
  uVar2 = DAT_1202e744;
  uVar1 = *param_2;
  if (DAT_1202093c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x30);
  }
  puVar3 = (undefined4 *)FUN_10a4c290();
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = &PTR_LAB_11cbc174;
    *puVar3 = &PTR_FUN_11cd85b0;
    puVar3[1] = &PTR_LAB_11cd85bc;
    puVar3[3] = uVar1;
    puVar3[4] = uVar2;
    puVar3[8] = param_3;
    puVar3[2] = local_8;
    puVar3[6] = FUN_10c2eec0;
    puVar3[7] = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

