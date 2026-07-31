
/* [RE-AUTO c0] */

void __thiscall FUN_10db6960(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  cVar3 = (**(code **)(*param_1 + 0x388))();
  if (cVar3 == '\0') {
    param_1[0x741] = *param_2;
    *(undefined8 *)(param_1 + 0x79b) = *(undefined8 *)(param_2 + 0x5a);
    param_1[0x79d] = param_2[0x5c];
    param_1[0x79e] = param_2[0x5d];
    param_1[0x79f] = param_2[0x5e];
    param_1[0x7a0] = param_2[0x5f];
    param_1[0x7a1] = param_2[0x60];
    param_1[0x78a] = param_1[0x78a] | param_2[0x49];
    param_1[0x78d] = param_1[0x78d] & 0xffffe3f0;
    param_1[0x78d] = param_1[0x78d] | param_2[0x4c];
    param_1[0x78a] = param_1[0x78a] | 4;
    *(undefined8 *)(param_1 + 0x78e) = *(undefined8 *)(param_2 + 0x4d);
    param_1[0x790] = param_2[0x4f];
    *(undefined8 *)(param_1 + 0x791) = *(undefined8 *)(param_2 + 0x50);
    param_1[0x793] = param_2[0x52];
    *(undefined8 *)(param_1 + 0x797) = *(undefined8 *)(param_2 + 0x56);
    param_1[0x799] = param_2[0x58];
    param_1[0x78c] = param_2[0x4b];
    *(undefined8 *)(param_1 + 0x7c7) = *(undefined8 *)(param_2 + 0x86);
    param_1[0x7c9] = param_2[0x88];
    *(undefined1 *)((int)param_1 + 0x1f1b) = *(undefined1 *)((int)param_2 + 0x217);
    param_1[0x7ca] = param_2[0x89];
    param_1[0x7cb] = param_2[0x8a];
    if ((char)param_2[1] != '\0') {
      piVar5 = param_2 + 1;
      piVar6 = param_1 + 0x742;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      param_1[0x7a2] = param_2[0x61];
    }
    iVar4 = param_2[0x42];
    iVar1 = param_2[0x43];
    iVar2 = param_2[0x44];
    param_1[0x782] = param_2[0x41];
    param_1[0x783] = iVar4;
    param_1[0x784] = iVar1;
    param_1[0x785] = iVar2;
    *(undefined8 *)(param_1 + 0x786) = *(undefined8 *)(param_2 + 0x45);
    param_1[0x788] = param_2[0x47];
    *(short *)(param_1 + 0x789) = (short)param_2[0x48];
  }
  return;
}

