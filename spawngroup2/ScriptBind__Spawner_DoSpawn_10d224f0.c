
/* [RE-R1]
   strings:
     ""Spawned"" */

undefined4 ScriptBind__Spawner_DoSpawn(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  uVar2 = FUN_10d1f790(param_1,1);
  local_c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar2);
  if ((((local_c != (int *)0x0) && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x9c), piVar3 != (int *)0x0)) {
    iVar4 = *piVar3;
    uVar6 = (**(code **)(*local_c + 8))();
    piVar3 = (int *)(**(code **)(iVar4 + 0xc))(uVar6);
    if (piVar3 != (int *)0x0) {
      local_8 = 0;
      iVar4 = (**(code **)(*piVar3 + 4))();
      if (iVar4 == 1) {
        local_8 = (**(code **)(*piVar3 + 0x9c))(0);
      }
      else if (iVar4 == 2) {
        param_1 = (int *)0x1;
        cVar1 = FUN_10acf5c0(2,&param_1);
        piVar5 = param_1;
        if (cVar1 == '\0') {
          piVar5 = (int *)0x1;
        }
        local_8 = (**(code **)(*piVar3 + 0xb4))(piVar5);
      }
      else {
        if (iVar4 != 3) {
          param_1 = (int *)((uint)param_1 & 0xffffff);
          uVar2 = FUN_10d1c620((int)&param_1 + 3);
          return uVar2;
        }
        param_1 = (int *)0x0;
        cVar1 = FUN_10acf5c0(2,&param_1);
        piVar5 = param_1;
        if (cVar1 == '\0') {
          piVar5 = (int *)0x0;
        }
        local_8 = (**(code **)(*piVar3 + 0xc0))(piVar5);
      }
      FUN_10b8ade0(0x10);
      local_1c = &local_8;
      local_24 = "Spawned";
      local_20 = 0;
      (**(code **)(*local_c + 0x110))(local_28);
      param_1 = (int *)CONCAT13(1,param_1._0_3_);
      uVar2 = FUN_10d32410((int)&param_1 + 3,&local_8);
      return uVar2;
    }
  }
  local_1c = (undefined4 *)0x2;
  local_18 = (int *)((uint)local_18 & 0xffffff00);
  uVar2 = (**(code **)(*piVar5 + 0x28))(&local_1c);
  if (local_1c == (undefined4 *)0x6) {
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0xc))();
      return uVar2;
    }
  }
  else if ((local_1c == (undefined4 *)0x7) && (local_18 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_18);
  }
  return uVar2;
}

