
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FlowNode_DoSpawn_A__GetConfiguration(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a2f0 & 1) == 0) {
    DAT_1203a2f0 = DAT_1203a2f0 | 1;
    _DAT_1203a0b0 = "DoSpawn";
    _DAT_1203a0b4 = 0;
    _DAT_1203a0b8 = &DAT_11d9d32b;
    _DAT_1203a0bc = 0;
    _DAT_1203a0c0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203a0c4,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a2f0 & 2) == 0) {
    DAT_1203a2f0 = DAT_1203a2f0 | 2;
    _DAT_1203a2f4 = "Spawned";
    uRam1203a2f8 = 0;
    puRam1203a2fc = &DAT_11d9d32b;
    uRam1203a300 = 1;
    _DAT_1203a304 = 0;
    uRam1203a308 = 0;
    uRam1203a30c = 0;
    uRam1203a310 = 0;
  }
  *param_1 = &DAT_1203a0b0;
  param_1[1] = &DAT_1203a2f4;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

