
/* [RE-AUTO c0] */

void __thiscall FUN_11644120(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x33];
  if ((iVar1 != -1) && (iVar1 != param_2)) {
    FUN_100ea6a0(iVar1);
  }
  param_1[0x33] = -1;
  (**(code **)(*param_1 + 0xb4))(1);
  CMonsterSpawnGroup___CheckRespawn();
  return;
}

