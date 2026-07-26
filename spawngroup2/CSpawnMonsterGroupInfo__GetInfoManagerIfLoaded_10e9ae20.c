
/* [RE-R1]
   id: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo::GetManagers"" */

undefined4 CSpawnMonsterGroupInfo__GetInfoManagerIfLoaded(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12039bf4 & 1) == 0) {
      DAT_12039bf4 = DAT_12039bf4 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CSpawnMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fbc0);
    }
    return *DAT_12039bd8;
  }
  return 0;
}

