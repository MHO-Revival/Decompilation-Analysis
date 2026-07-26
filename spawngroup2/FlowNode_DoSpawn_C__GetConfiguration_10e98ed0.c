
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FlowNode_DoSpawn_C__GetConfiguration(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a420 & 1) == 0) {
    DAT_1203a420 = DAT_1203a420 | 1;
    _DAT_1203a318 = "DoSpawn";
    _DAT_1203a31c = 0;
    _DAT_1203a320 = &DAT_11d9d32b;
    _DAT_1203a324 = 0;
    _DAT_1203a328 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203a32c,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a420 & 2) == 0) {
    DAT_1203a420 = DAT_1203a420 | 2;
    _DAT_1203a424 = "Spawned";
    uRam1203a428 = 0;
    puRam1203a42c = &DAT_11d9d32b;
    uRam1203a430 = 1;
    _DAT_1203a434 = 0;
    uRam1203a438 = 0;
    uRam1203a43c = 0;
    uRam1203a440 = 0;
  }
  *param_1 = &DAT_1203a318;
  param_1[1] = &DAT_1203a424;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

