
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""SpawnMonsterGroupInfo"" */

undefined * __thiscall
SpawnMonsterGroupInfo__GetTypeDescriptor(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239bdb4 & 1) == 0) {
    DAT_1239bdb4 = DAT_1239bdb4 | 1;
    FUN_1024f010("SpawnMonsterGroupInfo");
    _DAT_1239bd94 = 0x27;
    _DAT_1239bd9c = 1;
    _DAT_1239bda0 = 0;
    _DAT_1239bda4 = 0;
    _DAT_1239bda8 = 0;
    _DAT_1239bdac = 0;
    _DAT_1239bdb0 = 0;
    _DAT_1239bd98 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239bd94;
}

