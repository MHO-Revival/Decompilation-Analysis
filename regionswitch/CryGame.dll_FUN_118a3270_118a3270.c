
/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     ""0,0,0""
     ""%f,%f,%f""
     ""EntityClass""
     ""bShowTips""
     ""RegionID""
     ""EntityLinks""
     ""TargetId"" */

void __thiscall FUN_118a3270(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    FUN_100f6930(param_2,&DAT_11cca8a0,&local_408,0x400,"0,0,0");
    sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
    FUN_100f69d0(param_2,&DAT_11da7300,param_1 + 0x38,&DAT_11cd58ec);
    FUN_100f69d0(param_2,"EntityClass",param_1 + 0x50,&DAT_11cd58ec);
    FUN_100f6aa0(param_2,"bShowTips",param_1 + 0x74,0);
    FUN_100f6aa0(param_2,"RegionID",param_1 + 0x70,0);
    FUN_100f6aa0(param_2,&DAT_11cd7668,param_1 + 0x7c,0);
    FUN_100f6aa0(param_2,&DAT_11cd7670,param_1 + 0x80,0);
    FUN_100f6aa0(param_2,&DAT_11cd7678,param_1 + 0x84,0);
    iVar1 = FUN_100f3ce0("EntityLinks");
    if (iVar1 != 0) {
      uVar2 = FUN_100f3ce0(&DAT_11cf62c0);
      FUN_100f6aa0(uVar2,"TargetId",param_1 + 0x68,0);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}

