
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10551820(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_58 [64];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  local_c = param_1;
  cVar1 = FUN_103dba30(0,&local_10);
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = FUN_103d8660(2);
  if (cVar1 == '\0') {
    piVar2 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
    iVar4 = *piVar2;
    uVar3 = (**(code **)(**(int **)(local_c + 0x54) + 0xc))();
    piVar2 = (int *)(**(code **)(iVar4 + 0xc))(uVar3);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x2c);
    if ((uint)(piVar2[1] - *piVar2 >> 2) < 3) {
      return 2;
    }
    if ((int)(piVar2[4] - piVar2[3] & 0xfffffffcU) < 9) {
      return 2;
    }
    if (*(int *)(piVar2[3] + 8) < 0) {
      return 2;
    }
    FUN_103d8940(*(int *)(piVar2[3] + 8),&local_18);
    cVar1 = FUN_101c3720();
    if (cVar1 == '\0') {
      return 2;
    }
    piVar2 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(local_18);
  }
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 800))(), iVar4 != 0)) {
    FUN_10a5d660();
    local_5 = FUN_103dbbb0(1,&local_14);
    if (local_5 == '\0') {
      FUN_103db9b0(3,&local_5);
      if (local_5 == '\0') {
        iVar4 = (**(code **)(*piVar2 + 800))();
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x44))(0,local_10,0,1,0x1b);
        return 2;
      }
      piVar5 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
      iVar4 = *piVar5;
      uVar3 = (**(code **)(**(int **)(local_c + 0x54) + 0xc))();
      piVar5 = (int *)(**(code **)(iVar4 + 0xc))(uVar3);
      uVar3 = 0;
      iVar4 = (**(code **)(*piVar5 + 800))();
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*piVar5 + 800))();
        uVar3 = *(undefined4 *)(iVar4 + 4);
      }
      iVar4 = (**(code **)(*piVar2 + 800))();
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x44))(uVar3,local_10,0,1,0x1b);
      return 2;
    }
    FUN_10551c90(local_14);
    iVar4 = (**(code **)(*piVar2 + 800))();
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x44))(0,local_10,local_58,1,0x1b);
    FUN_10551cf0();
  }
  return 2;
}

