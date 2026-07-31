
/* [RE-AUTO c3]
   id: CPlayer::ReqRegionJump
   calls: sprintf_s
   strings:
     ""[TPREGION] InstID[%d] LevelID[%d] TP Begin""
     ""CPlayer::ReqRegionJump"" */

void __thiscall CPlayer__ReqRegionJump(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char local_110 [256];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(*param_1 + 800))();
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[3] + 0x94))();
    local_10 = *puVar2;
    local_c = puVar2[1];
    local_8 = puVar2[2];
    (**(code **)(*piVar1 + 0x350))(&local_10,param_2);
    uVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x6c))();
    sprintf_s(local_110,0x100,"[TPREGION] InstID[%d] LevelID[%d] TP Begin",
              *(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0x74),uVar3);
    (**(code **)(*piVar1 + 0x360))(local_110,3);
    param_1[0x874] = 5;
    FUN_10f1de80();
    iVar4 = FUN_100ea610("CPlayer::ReqRegionJump",60000,5,param_1,FUN_10efb4f0,0);
    param_1[0x873] = iVar4;
  }
  return;
}

