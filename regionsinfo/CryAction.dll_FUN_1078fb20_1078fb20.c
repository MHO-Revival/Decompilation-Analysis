
/* [RE-AUTO c0]
   strings:
     ""cl_EnableRegionWeather"" */

void __thiscall FUN_1078fb20(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    if ((DAT_113fec50 & 1) == 0) {
      DAT_113fec50 = DAT_113fec50 | 1;
      DAT_113fec4c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x2c) + 0x54))
                                      ("cl_EnableRegionWeather");
    }
    if ((DAT_113fec4c != (int *)0x0) && (iVar1 = (**(code **)(*DAT_113fec4c + 8))(), iVar1 != 0)) {
      FUN_1043b4b0(param_2[1]);
      *(int *)(param_1 + 0x18) = param_2[2];
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}

