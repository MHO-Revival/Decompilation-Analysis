
/* [RE-R1]
   calls: memset, sscanf_s
   strings:
     ""EntityClass""
     ""0,0,0""
     ""%f,%f,%f""
     ""0,0,0,0""
     ""Rotate""
     ""%f,%f,%f,%f""
     ""LevelWeather""
     ""LevelTime""
     ""FixedMonsterID""
     ""RegionID"" */

void __thiscall MHMonsterSpawnPoint__ParseEntity(int param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int local_410;
  char *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    FUN_11a89daa();
    return;
  }
  local_408 = '\0';
  memset(local_407,0,0x3ff);
  FUN_100f69d0(param_2,&DAT_11da7300,param_1 + 0x1c,&DAT_11cd58ec);
  FUN_100f69d0(param_2,"EntityClass",param_1 + 0x34,&DAT_11cd58ec);
  FUN_100f6930(param_2,&DAT_11cca8a0,&local_408,0x400,"0,0,0");
  sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
  FUN_100f6930(param_2,"Rotate",&local_408,0x400,"0,0,0,0");
  sscanf_s(&local_408,"%f,%f,%f,%f",param_1 + 0xc,param_1,param_1 + 4,param_1 + 8);
  FUN_100f6aa0(param_2,"LevelWeather",param_1 + 0x4c,0);
  FUN_100f6aa0(param_2,"LevelTime",param_1 + 0x50,0);
  FUN_100f6aa0(param_2,"FixedMonsterID",param_1 + 0x60,0);
  FUN_100f6aa0(param_2,"RegionID",param_1 + 100,0xffffffff);
  FUN_100f6aa0(param_2,"SpawnerEnable",param_1 + 0x54,0);
  FUN_100f6930(param_2,"EntityGuid",&local_408,0xff,&DAT_11cd58ec);
  sscanf_s(&local_408,"%PRIX64",param_1 + 0x58);
  puVar5 = (undefined4 *)(param_1 + 0x68);
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  while (puVar3 != puVar5) {
    puVar1 = (undefined4 *)*puVar3;
    FUN_10c3d5d0(puVar3);
    puVar3 = puVar1;
  }
  *puVar5 = puVar5;
  *(undefined4 **)(param_1 + 0x6c) = puVar5;
  pcVar4 = (char *)FUN_100f40b0("LevelInfo");
  if (pcVar4 != (char *)0x0) {
    local_40c = (char *)0x0;
    do {
      local_410 = FUN_100ec6f0(pcVar4,&local_40c,0);
      if (0 < local_410) {
        FUN_10ea8a80(puVar5,&local_410);
      }
      pcVar2 = local_40c;
      if ((*local_40c != '\0') && (local_40c == pcVar4)) {
        pcVar2 = pcVar4;
      }
      pcVar4 = pcVar2 + 1;
    } while (*local_40c != '\0');
  }
  FUN_11a89daa();
  return;
}

