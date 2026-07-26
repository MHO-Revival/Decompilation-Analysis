
/* [RE-AUTO c0] */

int * __thiscall FUN_116f9500(int *param_1,int *param_2)

{
  int ***pppiVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int ***pppiVar5;
  int local_20;
  int **local_1c;
  int **local_18;
  undefined8 local_14;
  int **local_c;
  int **local_8;
  
  piVar4 = param_1;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    do {
      if (piVar2[4] < *param_2) {
        piVar3 = (int *)piVar2[3];
      }
      else {
        piVar3 = (int *)piVar2[2];
        piVar4 = piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  if ((piVar4 == param_1) || (*param_2 < piVar4[4])) {
    local_c = (int **)&local_c;
    local_20 = *param_2;
    local_14 = 0;
    local_1c = (int **)&local_1c;
    local_18 = local_1c;
    local_8 = local_c;
    FUN_10ea8330(&local_1c,&local_c,&local_c,(int)&param_2 + 3);
    FUN_116fea20(&param_2,piVar4,&local_20);
    piVar4 = param_2;
    pppiVar5 = (int ***)local_1c;
    if ((int ***)local_1c != &local_1c) {
      do {
        pppiVar1 = (int ***)*pppiVar5;
        FUN_10c3d5d0(pppiVar5);
        pppiVar5 = pppiVar1;
      } while (pppiVar1 != &local_1c);
    }
    local_1c = (int **)&local_1c;
    pppiVar5 = (int ***)local_c;
    local_18 = local_1c;
    if ((int ***)local_c != &local_c) {
      do {
        pppiVar1 = (int ***)*pppiVar5;
        FUN_10c3d5d0(pppiVar5);
        pppiVar5 = pppiVar1;
      } while (pppiVar1 != &local_c);
    }
  }
  return piVar4 + 5;
}

