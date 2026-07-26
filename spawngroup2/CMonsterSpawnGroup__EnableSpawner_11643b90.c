
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CMonsterSpawnGroup::EnableSpawner
   strings:
     ""CMonsterSpawnGroup::EnableSpawner"" */

void __fastcall CMonsterSpawnGroup__EnableSpawner(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x24];
  iVar3 = param_1[0x23];
  FUN_100ee470();
  iVar1 = FUN_100ee450();
  iVar3 = (int)((double)iVar1 * _DAT_11de98f0 * (double)((iVar2 - iVar3) + 1)) + iVar3;
  if (0 < iVar3) {
    iVar2 = FUN_100ea610("CMonsterSpawnGroup::EnableSpawner",iVar3 * 1000,1,param_1,FUN_116440b0,0);
    param_1[0x31] = iVar2;
    return;
  }
  iVar2 = param_1[0x26];
  iVar3 = param_1[0x25];
  FUN_100ee470();
  iVar1 = FUN_100ee450();
  (**(code **)(*param_1 + 0xb4))
            ((int)((double)iVar1 * _DAT_11de98f0 * (double)((iVar2 - iVar3) + 1)) + iVar3);
  return;
}

