
/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""VoiceListener""
     ""Interactor"" */

void __fastcall FUN_10ef3d10(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  *param_1 = (int)&PTR_FUN_11cf8700;
  param_1[5] = (int)&PTR_LAB_11cf8f34;
  param_1[6] = (int)&PTR_LAB_11cf8f40;
  param_1[7] = (int)&PTR_LAB_11cf8f4c;
  param_1[8] = (int)&PTR_LAB_11cf8f54;
  param_1[0x560] = (int)&PTR_LAB_11cf8f58;
  param_1[0x561] = (int)&PTR_LAB_11cf8f60;
  param_1[0x562] = 0;
  local_10 = param_1;
  if (param_1[0x8e2] != 0) {
    FUN_10ae40b0();
    if ((int *)param_1[0x8e2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x8e2] + 0x10))();
    }
    param_1[0x8e2] = 0;
  }
  FUN_10f96ed0(param_1);
  FUN_10f83cf0(param_1);
  FUN_10f86200(param_1);
  FUN_10f99010(param_1);
  piVar7 = param_1 + 0x8c2;
  piVar10 = (int *)param_1[0x8c4];
  piVar9 = piVar7;
  while (local_c = piVar9, piVar10 != piVar7) {
    local_14 = (int *)piVar10[5];
    if (local_14 != (int *)0x0) {
      iVar8 = *local_14;
      piVar9 = (int *)(iVar8 + -0xc);
      if ((-1 < *piVar9) && (iVar4 = FUN_10c3dad0(piVar9), iVar4 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
        FUN_10c3d900(piVar9);
      }
      FUN_10c3d5d0(local_14);
      piVar10[5] = 0;
    }
    piVar5 = (int *)piVar10[3];
    piVar9 = local_c;
    param_1 = local_10;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)piVar10[1];
      if (piVar10 == (int *)piVar5[3]) {
        do {
          piVar10 = piVar5;
          piVar5 = (int *)piVar10[1];
        } while (piVar10 == (int *)piVar5[3]);
      }
      if ((int *)piVar10[3] != piVar5) {
        piVar10 = piVar5;
      }
    }
    else {
      for (piVar2 = (int *)piVar5[2]; piVar10 = piVar5, piVar2 != (int *)0x0;
          piVar2 = (int *)piVar2[2]) {
        piVar5 = piVar2;
      }
    }
  }
  if (piVar9[4] != 0) {
    FUN_10afdb00(piVar9[1]);
    piVar9[2] = (int)piVar9;
    piVar9[1] = 0;
    piVar9[3] = (int)piVar9;
    piVar9[4] = 0;
  }
  if ((undefined4 *)param_1[0x565] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x565])(1);
    param_1[0x565] = 0;
  }
  iVar8 = DAT_1203c830;
  local_18 = param_1;
  pvVar6 = (void *)FUN_10f21870(DAT_1203c82c,DAT_1203c830,&local_18,&local_5);
  if (pvVar6 != (void *)iVar8) {
    pvVar1 = (void *)((int)pvVar6 + 4);
    if ((pvVar1 != (void *)iVar8) && (iVar8 - (int)pvVar1 != 0)) {
      memmove(pvVar6,pvVar1,iVar8 - (int)pvVar1);
      iVar8 = DAT_1203c830;
    }
    DAT_1203c830 = iVar8 + -4;
  }
  iVar8 = DAT_1203c83c;
  local_1c = param_1;
  pvVar6 = (void *)FUN_10f21870(DAT_1203c838,DAT_1203c83c,&local_1c,&local_6);
  if (pvVar6 != (void *)iVar8) {
    pvVar1 = (void *)((int)pvVar6 + 4);
    if ((pvVar1 != (void *)iVar8) && (iVar8 - (int)pvVar1 != 0)) {
      memmove(pvVar6,pvVar1,iVar8 - (int)pvVar1);
      iVar8 = DAT_1203c83c;
    }
    DAT_1203c83c = iVar8 + -4;
  }
  if ((int *)param_1[0x8dd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x8dd] + 0x18))();
    if ((undefined4 *)param_1[0x8dd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x8dd])(1);
    }
  }
  if (param_1[0x86f] != -1) {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f8))();
    piVar7 = (int *)(**(code **)(*piVar7 + 4))(0);
    (**(code **)(*piVar7 + 0xc))();
    if (param_1[0x870] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    FUN_100ea6a0(param_1[0x86f]);
  }
  if (param_1[0x873] != -1) {
    if (param_1[0x870] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    FUN_100ea6a0(param_1[0x873]);
    param_1[0x873] = -1;
  }
  iVar8 = param_1[0x870];
  if (iVar8 != 0) {
    FUN_100ea5e0();
    FUN_10c3d5d0(iVar8);
    param_1[0x870] = 0;
  }
  FUN_10f10170();
  FUN_10a50da0();
  if ((undefined4 *)param_1[0x714] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x714])(1);
  }
  param_1[0x714] = 0;
  piVar7 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
  if (piVar7 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x50))();
    (**(code **)(*piVar7 + 0x48))(0,0);
  }
  if (param_1[0x752] != 0) {
    piVar7 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar7 = (int *)(**(code **)(*piVar7 + 0x80))();
    (**(code **)(*piVar7 + 0x80))(0);
    if ((undefined4 *)param_1[0x752] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x752])(1);
    }
  }
  if ((DAT_120286c8[0x34] != 0) && (*(int *)(DAT_120286c8[0x34] + 0x5c) != 0)) {
    FUN_10b43730(0,&DAT_41800000);
    param_1[0x757] = -1;
    if ((char)param_1[0x79c] != '\0') {
      (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 100))(param_1 + 0x561);
      *(undefined1 *)(param_1 + 0x79c) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x756) = 0;
  (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 100))(param_1 + 0x561);
  cVar3 = (**(code **)(*param_1 + 0x228))();
  if (((cVar3 != '\0') && (param_1[3] != 0)) && (DAT_11de9890 < (float)param_1[0x584])) {
    *(int *)(DAT_120286b8 + 0x1e0) = param_1[0x584];
  }
  if (param_1[0x786] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("VoiceListener",3);
  }
  if (param_1[0x787] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("Interactor",3);
  }
  cVar3 = FUN_10a50da0();
  if (cVar3 != '\0') {
    (**(code **)(**(int **)(DAT_1202e818 + 0x38) + 0x1c))(param_1 + 0x560);
  }
  cVar3 = (**(code **)(*(int *)param_1[1] + 0x90))();
  if (cVar3 != '\0') {
    FUN_10f20f40(param_1);
  }
  if ((undefined4 *)param_1[0x798] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x798])(1);
  }
  cVar3 = (**(code **)(*(int *)param_1[1] + 0x90))();
  if ((cVar3 == '\0') && (param_1[0x828] != 0)) {
    if ((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
       ((piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 != (int *)0x0 &&
        (iVar8 = (**(code **)(*piVar7 + 0x7c))(param_1[0x828]), iVar8 != 0)))) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*(undefined4 *)(iVar8 + 8));
      (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x1c))(iVar8);
    }
    *(undefined1 *)(param_1 + 0x827) = 0;
    param_1[0x828] = 0;
  }
  if ((int *)param_1[0x566] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x566] + 4))(1);
    param_1[0x566] = 0;
  }
  if (param_1[0x796] != 0) {
    FUN_10c6c940(7);
  }
  iVar8 = param_1[0x564];
  if (iVar8 != 0) {
    FUN_10c86150();
    FUN_10c3d5d0(iVar8);
    param_1[0x564] = 0;
  }
  if ((undefined4 *)param_1[0x8f4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8f4])(1);
    param_1[0x8f4] = 0;
  }
  if ((undefined4 *)param_1[0x900] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x900])(1);
    param_1[0x900] = 0;
  }
  if (param_1[0x8fc] != 0) {
    FUN_10c3d5d0(param_1[0x8fc]);
  }
  if ((int *)param_1[0x8e2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x8e2] + 0x10))();
  }
  if (piVar9[4] != 0) {
    FUN_10afdb00(piVar9[1]);
    piVar9[2] = (int)piVar9;
    piVar9[1] = 0;
    piVar9[3] = (int)piVar9;
    piVar9[4] = 0;
  }
  FUN_10516930();
  iVar8 = param_1[0x872];
  piVar7 = (int *)(iVar8 + -0xc);
  if ((-1 < *piVar7) && (iVar4 = FUN_10c3dad0(piVar7), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
    FUN_10c3d900(piVar7);
  }
  param_1 = param_1 + 0x7fd;
  local_c = (int *)0x9;
  do {
    iVar8 = param_1[-2];
    param_1 = param_1 + -4;
    piVar7 = (int *)(iVar8 + -0xc);
    if ((-1 < *piVar7) && (iVar4 = FUN_10c3dad0(piVar7), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
      FUN_10c3d900(piVar7);
    }
    iVar8 = *param_1;
    piVar7 = (int *)(iVar8 + -0xc);
    if ((-1 < *piVar7) && (iVar4 = FUN_10c3dad0(piVar7), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
      FUN_10c3d900(piVar7);
    }
    piVar7 = local_10;
    local_c = (int *)((int)local_c + -1);
  } while (-1 < (int)local_c);
  iVar8 = local_10[2000];
  piVar10 = (int *)(iVar8 + -0xc);
  if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
    FUN_10c3d900(piVar10);
  }
  local_c = piVar7 + 0x7ca;
  if (piVar7[0x7ce] != 0) {
    iVar8 = piVar7[0x7cb];
    while (iVar8 != 0) {
      FUN_10f28c20(*(undefined4 *)(iVar8 + 0xc));
      iVar4 = *(int *)(iVar8 + 8);
      FUN_10c3d5d0(iVar8);
      iVar8 = iVar4;
      piVar7 = local_10;
    }
    local_c[2] = (int)local_c;
    local_c[1] = 0;
    local_c[3] = (int)local_c;
    local_c[4] = 0;
  }
  if (piVar7[0x7c8] != 0) {
    FUN_10f28c60(piVar7[0x7c5]);
    piVar7[0x7c6] = (int)(piVar7 + 0x7c4);
    piVar7[0x7c5] = 0;
    piVar7[0x7c7] = (int)(piVar7 + 0x7c4);
    piVar7[0x7c8] = 0;
  }
  piVar7 = piVar7 + 0x7c6;
  local_c = (int *)0x1;
  do {
    iVar8 = piVar7[-4];
    piVar7 = piVar7 + -0xc;
    piVar10 = (int *)(iVar8 + -0xc);
    if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
      FUN_10c3d900(piVar10);
    }
    iVar8 = *piVar7;
    piVar10 = (int *)(iVar8 + -0xc);
    if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
      FUN_10c3d900(piVar10);
    }
    local_c = (int *)((int)local_c + -1);
  } while (-1 < (int)local_c);
  local_c = local_10 + 0x7a4;
  if (local_10[0x7a8] != 0) {
    iVar8 = local_10[0x7a5];
    while (iVar8 != 0) {
      FUN_10f28ba0(*(undefined4 *)(iVar8 + 0xc));
      iVar4 = *(int *)(iVar8 + 8);
      FUN_10c3d5d0(iVar8);
      iVar8 = iVar4;
    }
    local_c[2] = (int)local_c;
    local_c[1] = 0;
    local_c[3] = (int)local_c;
    local_c[4] = 0;
  }
  piVar7 = local_10;
  iVar8 = local_10[0x79b];
  piVar10 = (int *)(iVar8 + -0xc);
  if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
    FUN_10c3d900(piVar10);
  }
  iVar8 = piVar7[0x79a];
  piVar10 = (int *)(iVar8 + -0xc);
  if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar8 + -4));
    FUN_10c3d900(piVar10);
  }
  piVar10 = (int *)piVar7[0x797];
  if (piVar10 != (int *)0x0) {
    LOCK();
    iVar8 = piVar10[1] + -1;
    piVar10[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      (**(code **)(*piVar10 + 4))();
      LOCK();
      iVar8 = piVar10[2] + -1;
      piVar10[2] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        (**(code **)(*piVar10 + 8))();
      }
    }
  }
  piVar10 = (int *)piVar7[0x795];
  if (piVar10 != (int *)0x0) {
    LOCK();
    iVar8 = piVar10[1] + -1;
    piVar10[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      (**(code **)(*piVar10 + 4))();
      LOCK();
      iVar8 = piVar10[2] + -1;
      piVar10[2] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        (**(code **)(*piVar10 + 8))();
      }
    }
  }
  local_10 = (int *)0x2;
  piVar10 = piVar7 + 0x785;
  do {
    piVar5 = piVar10 + -2;
    piVar9 = (int *)piVar10[-2];
    while (piVar9 != piVar5) {
      piVar2 = (int *)*piVar9;
      FUN_10c3d5d0(piVar9);
      piVar9 = piVar2;
    }
    local_10 = (int *)((int)local_10 + -1);
    *piVar5 = (int)piVar5;
    piVar10[-1] = (int)piVar5;
    piVar10 = piVar5;
  } while (-1 < (int)local_10);
  if (piVar7[0x77c] != 0) {
    FUN_10c3d5d0(piVar7[0x77c]);
  }
  piVar10 = (int *)piVar7[0x72a];
  if (piVar10 != (int *)0x0) {
    LOCK();
    iVar8 = piVar10[1] + -1;
    piVar10[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      (**(code **)(*piVar10 + 4))();
      piVar9 = piVar10 + 2;
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*piVar10 + 8))();
      }
    }
  }
  if ((undefined4 *)piVar7[0x714] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar7[0x714])(1);
  }
  FUN_10b53270();
  FUN_10b57220();
  FUN_10dad3c0();
  if (*(int *)(piVar7[0x573] + -4) != 0) {
    FUN_10c3d900((int *)(piVar7[0x573] + -4));
  }
  piVar10 = piVar7 + 0x56b;
  piVar9 = (int *)piVar7[0x56b];
  while (piVar9 != piVar10) {
    piVar5 = (int *)*piVar9;
    FUN_10c3d5d0(piVar9);
    piVar9 = piVar5;
  }
  *piVar10 = (int)piVar10;
  piVar7[0x56c] = (int)piVar10;
  piVar7[0x561] = (int)&PTR_FUN_11cf86d0;
  piVar7[0x560] = (int)&PTR_FUN_11ce7318;
  CPlayerInventoryExtension___Reset();
  return;
}

