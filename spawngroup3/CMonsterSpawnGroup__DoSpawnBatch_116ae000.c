
/* [RE-R1]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

int __thiscall CMonsterSpawnGroup__DoSpawnBatch(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x278);
  if (0 < iVar3) {
    iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
        ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
       ) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
        iVar3 = FUN_116f86a0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
        if (iVar3 != 0) {
          if ((param_2 < 1) || (*(char *)(param_1 + 0xe4) == '\0')) {
            param_2 = *(int *)(param_1 + 0x38);
          }
          FUN_1184a310(param_2);
          FUN_1184a540(iVar3);
          iVar3 = FUN_1184a650(param_3);
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          FUN_116433b0();
          return iVar3;
        }
      }
    }
  }
  return 0;
}

