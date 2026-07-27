
/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     ""Index""
     ""0,0,0""
     ""Position""
     ""%f,%f,%f"" */

void __thiscall FUN_118a3b90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_428 [12];
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  uint local_40c;
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
  FUN_100f69d0(param_2,&DAT_11da7300,param_1,&DAT_11cd58ec);
  local_410 = 0;
  FUN_100f6aa0(param_2,&DAT_11cc0694,&local_410,0);
  FUN_115cb060(local_410,&local_41c);
  piVar2 = (int *)FUN_100f3ab0(&DAT_11cca8a0);
  while (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    local_40c = 0;
    FUN_100f6aa0(uVar3,"Index",&local_40c,0);
    FUN_100f6930(uVar3,"Position",&local_408,0x400,"0,0,0");
    sscanf_s(&local_408,"%f,%f,%f",&local_41c,&local_418,&local_414);
    if ((uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0xc) <= local_40c) {
      FUN_115cb060(local_40c + 1,local_428);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + local_40c * 0xc) = local_41c;
    *(undefined4 *)(iVar1 + 4 + local_40c * 0xc) = local_418;
    *(undefined4 *)(iVar1 + 8 + local_40c * 0xc) = local_414;
    piVar2 = (int *)FUN_100f3d50(&DAT_11cca8a0);
  }
  FUN_11a89daa();
  return;
}

