
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CMonsterSpawnGroup::_CheckRespawn
   strings:
     ""CMonsterSpawnGroup::_CheckRespawn"" */

void __fastcall CMonsterSpawnGroup___CheckRespawn(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x32] < param_1[0x27]) {
    cVar1 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar1 != '\0') && (param_1[0x33] == -1)) {
      iVar3 = param_1[0x29];
      iVar4 = param_1[0x28];
      FUN_100ee470();
      iVar2 = FUN_100ee450();
      iVar4 = (int)((double)iVar2 * _DAT_11de98f0 * (double)((iVar3 - iVar4) + 1)) + iVar4;
      if (0 < iVar4) {
        iVar3 = FUN_100ea610("CMonsterSpawnGroup::_CheckRespawn",iVar4 * 1000,1,param_1,FUN_11644120
                             ,0);
        param_1[0x33] = iVar3;
        return;
      }
      FUN_11644120(0xffffffff,1);
    }
  }
  return;
}

