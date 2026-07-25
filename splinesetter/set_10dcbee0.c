
/* [RE-AUTO c0]
   strings:
     ""RayWorldIntersection(Game)"" */

void __thiscall FUN_10dcbee0(int param_1,undefined8 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_70 [28];
  undefined8 local_54;
  undefined4 local_4c;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((*(int **)(DAT_1202e818 + 0x34) != (int *)0x0) && (*(int *)(DAT_1202e818 + 0x10) != 0)) &&
     (*(int *)(DAT_1202e818 + 0x90) != 0)) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3fc))();
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0x18))();
      if (cVar1 != '\0') {
        local_c = 0.0;
        local_8 = 0.0;
        (**(code **)(**(int **)(DAT_1202e818 + 0x90) + 0x30))(&local_c,&local_8);
        iVar4 = *piVar2;
        uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0xc) + 200))(&local_30);
        (**(code **)(iVar4 + 0xc))((int)local_c,(int)local_8,uVar3);
        local_18 = 0.0;
        local_14 = 0.0;
        local_10 = 0.0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        cVar1 = (**(code **)(*piVar2 + 0x44))(&local_18,&local_24);
        if (cVar1 != '\0') {
          local_30 = local_18 * DAT_11de9a30;
          local_2c = local_14 * DAT_11de9a30;
          local_28 = local_10 * DAT_11de9a30;
          iVar4 = FUN_10a798b0(&local_24,&local_30,0x11f,0xf,0x100000,local_70,1,0,0,0,0,
                               "RayWorldIntersection(Game)",0,4);
          if (iVar4 != 0) {
            *param_2 = local_54;
            *(undefined4 *)(param_2 + 1) = local_4c;
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}

