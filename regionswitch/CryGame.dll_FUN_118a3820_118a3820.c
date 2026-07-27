
/* WARNING: Removing unreachable block (ram,0x118a3939) */
/* [RE-AUTO c0]
   calls: memset, memmove, sscanf_s
   strings:
     ""WayPoint""
     ""Index""
     ""0,0,0""
     ""Position""
     ""%f,%f,%f"" */

void __thiscall FUN_118a3820(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_440 [12];
  int local_434;
  undefined4 local_430;
  uint local_42c;
  int local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  uint *local_418;
  int local_414;
  undefined1 local_40d;
  uint local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_434 = param_2;
  if (param_2 != 0) {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    local_42c = 0;
    FUN_100f6aa0(param_2,&DAT_11cc0694,&local_42c,0);
    *param_1 = local_42c;
    local_418 = param_1 + 1;
    FUN_115cb060(local_42c,&local_424);
    local_424 = 0;
    puVar1 = param_1 + 4;
    local_420 = 0;
    local_41c = 0;
    FUN_115ceea0(*param_1,&local_424);
    local_40c = 0;
    if (0 < (int)*param_1) {
      local_414 = 0;
      local_428 = 0;
      do {
        uVar5 = *param_1;
        piVar7 = (int *)(*puVar1 + local_428);
        iVar8 = piVar7[1];
        uVar2 = iVar8 - *piVar7 >> 2;
        if (uVar5 < uVar2) {
          iVar6 = *piVar7 + uVar5 * 4;
          if (iVar6 != iVar8) {
            local_430 = 0;
            piVar7[1] = iVar6;
          }
        }
        else {
          uVar5 = uVar5 - uVar2;
          if (uVar5 != 0) {
            if ((uint)(piVar7[2] - iVar8 >> 2) < uVar5) {
              FUN_10463c40(iVar8,&local_414,&local_40d,uVar5,0);
            }
            else {
              FUN_10465900(iVar8,uVar5,&local_414,&local_40d);
            }
          }
        }
        local_40c = local_40c + 1;
        local_428 = local_428 + 0xc;
      } while ((int)local_40c < (int)*param_1);
    }
    iVar8 = 0;
    if (0 < (int)*param_1) {
      iVar6 = 0;
      do {
        iVar4 = 0;
        if (0 < (int)*param_1) {
          do {
            *(undefined4 *)(*(int *)(iVar6 + *puVar1) + iVar4 * 4) = 0;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)*param_1);
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar8 < (int)*param_1);
    }
    piVar7 = (int *)FUN_100f3ab0("WayPoint");
    while (piVar7 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar7 + 0x14))();
      local_40c = 0;
      FUN_100f6aa0(uVar3,"Index",&local_40c,0);
      FUN_100f6930(uVar3,"Position",&local_408,0x400,"0,0,0");
      sscanf_s(&local_408,"%f,%f,%f",&local_424,&local_420,&local_41c);
      if ((uint)((int)(local_418[1] - *local_418) / 0xc) <= local_40c) {
        FUN_115cb060(local_40c + 1,local_440);
      }
      uVar5 = *local_418;
      *(undefined4 *)(uVar5 + local_40c * 0xc) = local_424;
      *(undefined4 *)(uVar5 + 4 + local_40c * 0xc) = local_420;
      *(undefined4 *)(uVar5 + 8 + local_40c * 0xc) = local_41c;
      piVar7 = (int *)FUN_100f3ab0(&DAT_11cf62c0);
      while (piVar7 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar7 + 0x14))();
        local_414 = 0;
        FUN_100f6aa0(uVar3,"Index",&local_414,0);
        *(undefined4 *)(*(int *)(*puVar1 + local_40c * 0xc) + local_414 * 4) = 1;
        *(undefined4 *)(*(int *)(*puVar1 + local_414 * 0xc) + local_40c * 4) = 1;
        piVar7 = (int *)FUN_100f3d50(&DAT_11cf62c0);
      }
      piVar7 = (int *)FUN_100f3d50("WayPoint");
    }
    FUN_11a89daa();
    return;
  }
  FUN_11a89daa();
  return;
}

