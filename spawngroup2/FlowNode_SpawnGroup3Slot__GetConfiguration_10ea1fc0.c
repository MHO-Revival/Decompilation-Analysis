
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""enable""
     ""spawnGroupID""
     ""monsterID""
     ""monsterCount""
     ""spawnRegionID""
     ""delay""
     ""respawnAmount""
     ""respawnDelay""
     ""scale""
     ""monsterID2"" */

void FlowNode_SpawnGroup3Slot__GetConfiguration(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203ab60 & 1) == 0) {
    DAT_1203ab60 = DAT_1203ab60 | 1;
    _DAT_1203ab18 = "enable";
    _DAT_1203ab1c = 0;
    _DAT_1203ab20 = &DAT_11d9d32b;
    _DAT_1203ab24 = 0;
    _DAT_1203ab28 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203ab2c,&uStack_8,"enable",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_1203ab40 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203ab30 = "spawnGroupID";
    _DAT_1203ab34 = 0;
    _DAT_1203ab38 = &DAT_11d9d32b;
    _DAT_1203ab3c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203ab44,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203ab58 = &DAT_11df7728;
    _DAT_1203ab48 = 0;
    uRam1203ab4c = 0;
    uRam1203ab50 = 0;
    uRam1203ab54 = 0;
    FUN_11a8911f(&LAB_11c8fff0);
  }
  if ((DAT_1203ab60 & 2) == 0) {
    DAT_1203ab60 = DAT_1203ab60 | 2;
    _DAT_1203ab68 = "monsterID";
    uRam1203ab6c = 0;
    _DAT_1203ab70 = &DAT_11d9d32b;
    uRam1203ab74 = 1;
    _DAT_1203ab78 = "monsterCount";
    uRam1203ab7c = 0;
    puRam1203ab80 = &DAT_11d9d32b;
    uRam1203ab84 = 1;
    _DAT_1203ab88 = "spawnRegionID";
    uRam1203ab8c = 0;
    puRam1203ab90 = &DAT_11d9d32b;
    uRam1203ab94 = 1;
    _DAT_1203ab98 = "delay";
    uRam1203ab9c = 0;
    puRam1203aba0 = &DAT_11d9d32b;
    uRam1203aba4 = 1;
    _DAT_1203aba8 = "respawnAmount";
    uRam1203abac = 0;
    puRam1203abb0 = &DAT_11d9d32b;
    uRam1203abb4 = 1;
    _DAT_1203abb8 = "respawnDelay";
    uRam1203abbc = 0;
    puRam1203abc0 = &DAT_11d9d32b;
    uRam1203abc4 = 1;
    _DAT_1203abc8 = "scale";
    uRam1203abcc = 0;
    puRam1203abd0 = &DAT_11d9d32b;
    uRam1203abd4 = 2;
    _DAT_1203abd8 = "monsterID2";
    uRam1203abdc = 0;
    puRam1203abe0 = &DAT_11d9d32b;
    uRam1203abe4 = 1;
    _DAT_1203abe8 = "monsterCount2";
    uRam1203abec = 0;
    puRam1203abf0 = &DAT_11d9d32b;
    uRam1203abf4 = 1;
    _DAT_1203abf8 = "spawnRegionID2";
    uRam1203abfc = 0;
    puRam1203ac00 = &DAT_11d9d32b;
    uRam1203ac04 = 1;
    _DAT_1203ac08 = "delay2";
    uRam1203ac0c = 0;
    puRam1203ac10 = &DAT_11d9d32b;
    uRam1203ac14 = 1;
    _DAT_1203ac18 = "respawnAmount2";
    uRam1203ac1c = 0;
    puRam1203ac20 = &DAT_11d9d32b;
    uRam1203ac24 = 1;
    _DAT_1203ac28 = "respawnDelay2";
    uRam1203ac2c = 0;
    puRam1203ac30 = &DAT_11d9d32b;
    uRam1203ac34 = 1;
    _DAT_1203ac38 = "scale2";
    uRam1203ac3c = 0;
    puRam1203ac40 = &DAT_11d9d32b;
    uRam1203ac44 = 2;
    _DAT_1203ac48 = "monsterID3";
    uRam1203ac4c = 0;
    puRam1203ac50 = &DAT_11d9d32b;
    uRam1203ac54 = 1;
    _DAT_1203ac58 = "monsterCount3";
    uRam1203ac5c = 0;
    puRam1203ac60 = &DAT_11d9d32b;
    uRam1203ac64 = 1;
    _DAT_1203ac68 = "spawnRegionID3";
    uRam1203ac6c = 0;
    puRam1203ac70 = &DAT_11d9d32b;
    uRam1203ac74 = 1;
    _DAT_1203ac78 = "delay3";
    uRam1203ac7c = 0;
    puRam1203ac80 = &DAT_11d9d32b;
    uRam1203ac84 = 1;
    _DAT_1203ac88 = "respawnAmount3";
    uRam1203ac8c = 0;
    puRam1203ac90 = &DAT_11d9d32b;
    uRam1203ac94 = 1;
    _DAT_1203ac98 = "respawnDelay3";
    uRam1203ac9c = 0;
    puRam1203aca0 = &DAT_11d9d32b;
    uRam1203aca4 = 1;
    _DAT_1203aca8 = "scale3";
    uRam1203acac = 0;
    puRam1203acb0 = &DAT_11d9d32b;
    uRam1203acb4 = 2;
    _DAT_1203acb8 = 0;
    uRam1203acbc = 0;
    uRam1203acc0 = 0;
    uRam1203acc4 = 0;
  }
  *param_1 = &DAT_1203ab18;
  param_1[1] = &DAT_1203ab68;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

