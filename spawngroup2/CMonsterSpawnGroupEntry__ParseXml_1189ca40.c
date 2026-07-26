
/* [RE-R1]
   strings:
     ""RegionID""
     ""SpawnAmountMin""
     ""SpawnAmountMax""
     ""FirstSpawnDelayMax""
     ""FirstSpawnDelayMin""
     ""RespawnAmont""
     ""RespawnDelayMax""
     ""RespawnDelayMin""
     ""SpawnMonsterGroupID""
     ""RandomMonsters"" */

uint __thiscall CMonsterSpawnGroupEntry__ParseXml(uint *param_1,uint param_2,uint *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint in_EAX;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  if (param_2 == 0) {
    return in_EAX & 0xffffff00;
  }
  cVar2 = FUN_100f6ef0(param_2,&DAT_11de661c,param_1);
  if (cVar2 == '\0') {
LAB_1189ca9f:
    if (*param_1 == 0) goto LAB_1189caa4;
  }
  else {
    if (0 < (int)*param_1) {
      for (puVar3 = *(uint **)((int)param_3 + 0x10); puVar3 != (uint *)((int)param_3 + 0x10);
          puVar3 = (uint *)*puVar3) {
        if (puVar3[2] == *param_1) goto LAB_1189cc03;
      }
      goto LAB_1189ca9f;
    }
    *param_1 = 0;
LAB_1189caa4:
    iVar5 = 0;
    for (puVar1 = *(undefined4 **)((int)param_3 + 0x10);
        puVar1 != (undefined4 *)((int)param_3 + 0x10); puVar1 = (undefined4 *)*puVar1) {
      iVar5 = iVar5 + 1;
    }
    *param_1 = iVar5 + 1U | 0x10000000;
  }
  puVar3 = (uint *)FUN_100f6ef0(iVar4,"RegionID",param_1 + 1);
  if ((char)puVar3 != '\0') {
    param_2 = param_1[2];
    param_3 = (uint *)param_1[3];
    puVar3 = (uint *)FUN_100f6ef0(iVar4,"SpawnAmountMin",&param_2);
    if (((char)puVar3 != '\0') &&
       (puVar3 = (uint *)FUN_100f6ef0(iVar4,"SpawnAmountMax",&param_3), (char)puVar3 != '\0')) {
      param_1[2] = param_2;
      param_1[3] = (uint)param_3;
      puVar3 = param_3;
    }
    if (0 < (int)param_1[3]) {
      FUN_1189a8a0(iVar4,"FirstSpawnDelayMin","FirstSpawnDelayMax",param_1 + 4);
      FUN_100f6ef0(iVar4,"RespawnAmont",param_1 + 6);
      FUN_1189a8a0(iVar4,"RespawnDelayMin","RespawnDelayMax",param_1 + 7);
      FUN_100f6ef0(iVar4,"SpawnMonsterGroupID",param_1 + 9);
      iVar4 = FUN_100f3ce0("RandomMonsters");
      if (iVar4 != 0) {
        iVar4 = FUN_100f3cb0();
        while (iVar4 != 0) {
          local_c = 0;
          local_8 = 100;
          FUN_100f6ef0(iVar4,"MonsterID",&local_c);
          if ((0 < local_c) && (FUN_100f6ef0(iVar4,"SpawnWeight",&local_8), 0 < local_8)) {
            FUN_1189db00(&local_c);
          }
          iVar4 = FUN_100f3d20();
        }
      }
      puVar3 = (uint *)0x0;
      if (0 < (int)param_1[9]) {
LAB_1189cc0e:
        return CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
      puVar3 = (uint *)param_1[10];
      iVar4 = 0;
      if (puVar3 != param_1 + 10) {
        do {
          puVar3 = (uint *)*puVar3;
          iVar4 = iVar4 + 1;
        } while (puVar3 != param_1 + 10);
        if (iVar4 != 0) goto LAB_1189cc0e;
      }
    }
  }
LAB_1189cc03:
  return (uint)puVar3 & 0xffffff00;
}

