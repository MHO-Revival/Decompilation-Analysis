
/* [RE-AUTO c0] */

void __thiscall FUN_10b35b20(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
    iVar2 = *piVar1;
    (**(code **)(*param_2 + 4))();
    iVar2 = (**(code **)(iVar2 + 0xc))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xbc) != 0)) {
      iVar2 = FUN_11077cb0();
      if (iVar2 != 0) {
        uVar3 = FUN_11066f90(*(undefined4 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
    }
  }
  return;
}

