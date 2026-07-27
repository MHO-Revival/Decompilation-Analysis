
/* [RE-AUTO c0] */

undefined4
FUN_105c4b40(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  int *local_14;
  int *local_10;
  undefined4 local_c;
  
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_4 == (int *)0x0)) ||
     (param_3 == (int *)0x0)) {
    return 1;
  }
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  FUN_105c1830();
  (**(code **)(*param_2 + 0x18))(&local_14,0xb,0xffffffff);
  (**(code **)(*param_1 + 0x30))(local_20);
  piVar7 = local_14;
  if (local_14 != local_10) {
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1 != (int *)0x0) {
        iVar6 = *param_4;
        uVar3 = (**(code **)(*param_1 + 0x88))(*piVar1);
        cVar2 = (**(code **)(iVar6 + 0x94))(uVar3);
        if (cVar2 != '\0') {
          iVar6 = *piVar1;
          iVar4 = (**(code **)(*param_1 + 0x88))();
          if (iVar4 == iVar6) {
            (**(code **)(*param_3 + 0xac))(local_28);
            cVar2 = FUN_10a6b260();
            while (cVar2 == '\0') {
              piVar5 = (int *)FUN_10a6b2d0();
              iVar6 = *piVar1;
              iVar4 = (**(code **)(*piVar5 + 0x88))();
              if (iVar4 == iVar6) {
                FUN_10a6b130();
                goto LAB_105c4ca0;
              }
              FUN_10a6b270();
              cVar2 = FUN_10a6b260();
            }
            FUN_10a6b130();
          }
          iVar6 = (**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(piVar1[9]);
          if ((iVar6 != 0) &&
             ((iVar4 = FUN_105c4cf0(param_1,param_3), iVar4 == 0 ||
              (iVar6 = FUN_105c4920(param_1,iVar6,param_3,piVar1,param_5,param_6,param_7),
              iVar6 == 1)))) {
            uVar3 = 1;
            goto LAB_105c4cb4;
          }
        }
      }
LAB_105c4ca0:
      piVar7 = piVar7 + 1;
    } while (piVar7 != local_10);
  }
  uVar3 = 2;
LAB_105c4cb4:
  if (local_14 != (int *)0x0) {
    FUN_10653dc0(local_14);
  }
  return uVar3;
}

