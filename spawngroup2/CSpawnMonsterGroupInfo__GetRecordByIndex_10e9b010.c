
/* [RE-R1]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

undefined4 CSpawnMonsterGroupInfo__GetRecordByIndex(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}

