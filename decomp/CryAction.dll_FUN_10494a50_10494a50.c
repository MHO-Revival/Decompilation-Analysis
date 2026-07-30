
/* [RE-AUTO c0] */

void __fastcall FUN_10494a50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x60))();
  uVar2 = (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

