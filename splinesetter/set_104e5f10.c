
/* [RE-AUTO c0] */

void __fastcall FUN_104e5f10(uint param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  DAT_123bb934 = 0;
  if (((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x34) != (int *)0x0)) &&
     (piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3fc))(), piVar1 != (int *)0x0
     )) {
    FUN_113f3640();
    iVar2 = FUN_1115abd0();
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_1143c770(), iVar2 != 0)) {
      if (((undefined4 **)DAT_123bcaf8 == &DAT_123bcaf8) || (*(int *)(iVar2 + 0x20) != 0)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      param_1 = (uint)bVar3;
      (**(code **)(*piVar1 + 4))(param_1);
      if (bVar3 == 0) {
        FUN_104d98e0(0);
      }
    }
  }
  if ((DAT_120212a0 != 0) && (*(int *)(DAT_120212a0 + 4) != 0)) {
    FUN_10acfb10(1,0,param_1);
    FUN_10acfb10(2,0);
  }
  return;
}

