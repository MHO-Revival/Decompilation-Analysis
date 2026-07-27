
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

void __thiscall FUN_10fcf6d0(int param_1,int param_2)

{
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_113dd8c0 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    FUN_112bed8e();
    return;
  }
  local_408 = '\0';
  memset(local_407,0,0x3ff);
  FUN_10050f70(param_2,&DAT_113a4d50,param_1 + 0x3c,&DAT_1130bf64);
  FUN_10050f70(param_2,"EntityClass",param_1 + 0x54,&DAT_1130bf64);
  FUN_10050ed0(param_2,&DAT_113069fc,&local_408,0x400,"0,0,0");
  sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
  FUN_10050ed0(param_2,"Rotate",&local_408,0x400,"0,0,0,0");
  sscanf_s(&local_408,"%f,%f,%f,%f",param_1 + 0xc,param_1,param_1 + 4,param_1 + 8);
  FUN_10051040(param_2,"RegionID",param_1 + 0x1c,0);
  FUN_10050f70(param_2,"SwitchRegionDestination",param_1 + 0x20,&DAT_1130bf64);
  FUN_10051040(param_2,"levelinfoDestinationLevel",param_1 + 0x38,0);
  FUN_10051040(param_2,"RequiredPlayerLevel",param_1 + 0x6c,0);
  FUN_112bed8e();
  return;
}

