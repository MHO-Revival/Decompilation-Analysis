
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FlowNode_DoSpawn_B__GetConfiguration(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a088 & 1) == 0) {
    DAT_1203a088 = DAT_1203a088 | 1;
    _DAT_12039fb0 = "DoSpawn";
    _DAT_12039fb4 = 0;
    _DAT_12039fb8 = &DAT_11d9d32b;
    _DAT_12039fbc = 0;
    _DAT_12039fc0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039fc4,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a088 & 2) == 0) {
    DAT_1203a088 = DAT_1203a088 | 2;
    _DAT_1203a08c = "Spawned";
    uRam1203a090 = 0;
    puRam1203a094 = &DAT_11d9d32b;
    uRam1203a098 = 1;
    _DAT_1203a09c = 0;
    uRam1203a0a0 = 0;
    uRam1203a0a4 = 0;
    uRam1203a0a8 = 0;
  }
  *param_1 = &DAT_12039fb0;
  param_1[1] = &DAT_1203a08c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

