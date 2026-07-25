// FUN_10bad820 @ 10bad820
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0] */

int __thiscall FUN_10bad820(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x218))) {
    iVar6 = 0;
    piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + 0x228) == *(int *)(param_1 + 0x218)) {
          return iVar6;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x218);
        uVar2 = *puVar3;
        if (puVar3 == (undefined4 *)(*(int *)(param_1 + 0x220) + -4)) {
          if (*(int *)(param_1 + 0x21c) != 0) {
            FUN_10c3d5d0(*(int *)(param_1 + 0x21c));
          }
          piVar4 = (int *)(*(int *)(param_1 + 0x224) + 4);
          *(int **)(param_1 + 0x224) = piVar4;
          iVar5 = *piVar4;
          *(int *)(param_1 + 0x21c) = iVar5;
          *(int *)(param_1 + 0x220) = iVar5 + 0x80;
          puVar3 = *(undefined4 **)(param_1 + 0x21c);
        }
        else {
          puVar3 = puVar3 + 1;
        }
        *(undefined4 **)(param_1 + 0x218) = puVar3;
        piVar4 = (int *)(**(code **)(*piVar1 + 0x7c))(uVar2);
        if ((((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0xa8))(), iVar5 == 8)) ||
            ((piVar4 = (int *)(**(code **)(*piVar1 + 0x7c))(uVar2), piVar4 != (int *)0x0 &&
             (iVar5 = (**(code **)(*piVar4 + 0xa8))(), iVar5 == 0xd)))) &&
           ((piVar4 = (int *)(**(code **)(*piVar4 + 0xd8))(), piVar4 != (int *)0x0 &&
            (iVar5 = (**(code **)(*piVar4 + 0x18))(), iVar5 != -1)))) {
          (**(code **)(*piVar4 + 0x20))(1);
          iVar6 = iVar6 + 1;
        }
      } while (iVar6 < param_2);
    }
    return iVar6;
  }
  return param_2;
}

