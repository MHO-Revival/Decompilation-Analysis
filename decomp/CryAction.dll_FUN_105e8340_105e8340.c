
/* [RE-AUTO c0]
   strings:
     ""Position"" */

undefined4 __fastcall FUN_105e8340(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_c [7];
  undefined1 local_5;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) != '\0') {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x68))();
    iVar3 = *piVar1;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar1 = (int *)(**(code **)(iVar3 + 0xc))(uVar2);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 800))();
      if (iVar3 != 0) {
        local_5 = 1;
        FUN_10a5d620("Position");
        FUN_1055ace0(3,local_c);
        FUN_10562100(1,&local_5);
        FUN_10562100(2,&local_5);
        FUN_10562100(0,&local_5);
      }
    }
    return 3;
  }
  uVar2 = FUN_105e83f0();
  return uVar2;
}

