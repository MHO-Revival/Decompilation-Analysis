// FUN_10ff1e70 @ 10ff1e70
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0] */

void FUN_10ff1e70(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar1 != (int *)0x0)) &&
     (piVar2 = (int *)piVar1[3], piVar2 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x82c))(1);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xb4))();
    *(undefined4 *)(param_1 + 0x218) = *puVar3;
    *(undefined4 *)(param_1 + 0x21c) = puVar3[1];
    *(undefined4 *)(param_1 + 0x220) = puVar3[2];
    *(undefined4 *)(param_1 + 0x224) = puVar3[3];
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}

