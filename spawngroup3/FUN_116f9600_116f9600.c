
/* [RE-AUTO c0] */

int * __thiscall FUN_116f9600(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  piVar3 = param_1;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    do {
      if (piVar1[4] < *param_2) {
        piVar2 = (int *)piVar1[3];
      }
      else {
        piVar2 = (int *)piVar1[2];
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  if ((piVar3 == param_1) || (*param_2 < piVar3[4])) {
    puStack_18 = &local_20;
    local_10 = 0;
    local_c = param_2._3_1_;
    local_3c = *param_2;
    local_20 = 0;
    uStack_1c = 0;
    puStack_14 = puStack_18;
    FUN_116fb1b0(&local_20);
    FUN_116fed30(&param_2,piVar3,&local_3c);
    piVar3 = param_2;
    if (local_28 != 0) {
      FUN_10e9d500(local_34);
      local_30 = local_38;
      local_34 = 0;
      local_28 = 0;
      local_2c = local_30;
    }
    if (local_10 != 0) {
      FUN_10e9d500(uStack_1c);
    }
  }
  return piVar3 + 5;
}

