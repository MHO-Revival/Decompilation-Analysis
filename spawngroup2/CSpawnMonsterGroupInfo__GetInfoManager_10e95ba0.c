
/* [RE-R1]
   id: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo::GetManagers"" */

undefined *
CSpawnMonsterGroupInfo__GetInfoManager(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cf489c;
  if (param_3 == 0) {
    if ((DAT_12039bf4 & 1) == 0) {
      DAT_12039bf4 = DAT_12039bf4 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CSpawnMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fbc0);
    }
    if ((undefined *)*DAT_12039bd8 != (undefined *)0x0) {
      return (undefined *)*DAT_12039bd8;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203a5b8 & 1) == 0) {
      DAT_1203a5b8 = DAT_1203a5b8 | 1;
      FUN_10e96460();
      FUN_11a8911f(&LAB_11c8f950);
    }
    puVar1 = &DAT_1203a580;
  }
  return puVar1;
}

