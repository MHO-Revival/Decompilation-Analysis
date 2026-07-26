
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FlowNode_DoSpawn_D__GetConfiguration(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_12039f88 & 1) == 0) {
    DAT_12039f88 = DAT_12039f88 | 1;
    _DAT_12039e98 = "DoSpawn";
    _DAT_12039e9c = 0;
    _DAT_12039ea0 = &DAT_11d9d32b;
    _DAT_12039ea4 = 0;
    _DAT_12039ea8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039eac,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_12039f88 & 2) == 0) {
    DAT_12039f88 = DAT_12039f88 | 2;
    _DAT_12039f8c = "Spawned";
    uRam12039f90 = 0;
    puRam12039f94 = &DAT_11d9d32b;
    uRam12039f98 = 1;
    _DAT_12039f9c = 0;
    uRam12039fa0 = 0;
    uRam12039fa4 = 0;
    uRam12039fa8 = 0;
  }
  *param_1 = &DAT_12039e98;
  param_1[1] = &DAT_12039f8c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

