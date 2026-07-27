
/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     ""EntityClass""
     ""0,0,0""
     ""%f,%f,%f""
     ""0,0,0,0""
     ""Rotate""
     ""%f,%f,%f,%f""
     ""RegionID""
     ""SwitchRegionDestination""
     ""levelinfoDestinationLevel""
     ""RequiredPlayerLevel"" */

void __thiscall FUN_118a2e90(int param_1,int param_2)

{
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
  FUN_100f69d0(param_2,&DAT_11da7300,param_1 + 0x3c,&DAT_11cd58ec);
  FUN_100f69d0(param_2,"EntityClass",param_1 + 0x54,&DAT_11cd58ec);
  FUN_100f6930(param_2,&DAT_11cca8a0,&local_408,0x400,"0,0,0");
  sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
  FUN_100f6930(param_2,"Rotate",&local_408,0x400,"0,0,0,0");
  sscanf_s(&local_408,"%f,%f,%f,%f",param_1 + 0xc,param_1,param_1 + 4,param_1 + 8);
  FUN_100f6aa0(param_2,"RegionID",param_1 + 0x1c,0);
  FUN_100f69d0(param_2,"SwitchRegionDestination",param_1 + 0x20,&DAT_11cd58ec);
  FUN_100f6aa0(param_2,"levelinfoDestinationLevel",param_1 + 0x38,0);
  FUN_100f6aa0(param_2,"RequiredPlayerLevel",param_1 + 0x6c,0);
  FUN_11a89daa();
  return;
}

