// FUN_10bad5e0 @ 10bad5e0
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

int __thiscall FUN_10bad5e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x1c8)) && (0 < param_2)) {
    piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
    do {
      if (*(int *)(param_1 + 0x1d8) == *(int *)(param_1 + 0x1c8)) {
        return param_2;
      }
      cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x104))(8);
      if (cVar3 == '\0') {
        return param_2;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x1c8);
      uVar2 = *puVar4;
      if (puVar4 == (undefined4 *)(*(int *)(param_1 + 0x1d0) + -4)) {
        if (*(int *)(param_1 + 0x1cc) != 0) {
          FUN_10c3d5d0(*(int *)(param_1 + 0x1cc));
        }
        piVar5 = (int *)(*(int *)(param_1 + 0x1d4) + 4);
        *(int **)(param_1 + 0x1d4) = piVar5;
        iVar7 = *piVar5;
        *(int *)(param_1 + 0x1cc) = iVar7;
        *(int *)(param_1 + 0x1d0) = iVar7 + 0x80;
        puVar4 = *(undefined4 **)(param_1 + 0x1cc);
      }
      else {
        puVar4 = puVar4 + 1;
      }
      *(undefined4 **)(param_1 + 0x1c8) = puVar4;
      piVar5 = (int *)(**(code **)(*piVar1 + 0x7c))(uVar2);
      if (((piVar5 != (int *)0x0) &&
          (piVar6 = (int *)(**(code **)(*piVar5 + 0xd8))(), piVar6 != (int *)0x0)) &&
         (iVar7 = (**(code **)(*piVar6 + 0x18))(), iVar7 == -1)) {
        (**(code **)(*piVar6 + 0x1c))(piVar5);
        param_2 = param_2 + -1;
      }
    } while (0 < param_2);
  }
  return param_2;
}

