
/* [RE-R1]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

void __thiscall CMonsterSpawnGroup__ResolveSpawnGroupInfo(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x7c) =
           *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

