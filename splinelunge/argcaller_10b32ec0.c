
/* [RE-AUTO c0] */

undefined4 FUN_10b32ec0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 8) == 6)) {
    piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
    iVar2 = *piVar1;
    (**(code **)(*param_1 + 4))();
    iVar2 = (**(code **)(iVar2 + 0xc))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xbc) != 0)) {
      iVar2 = FUN_11077cb0();
      if (iVar2 != 0) {
        iVar2 = FUN_11066f90(*(undefined4 *)(param_2 + 0x18));
        *(int *)(param_2 + 0x14) = iVar2;
        if (0 < iVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

