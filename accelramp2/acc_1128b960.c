// FUN_1128b960 @ 1128b960
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

void __thiscall FUN_1128b960(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  float10 fVar5;
  float fVar6;
  
  pcVar4 = (char *)(param_2 + 4);
  iVar2 = FUN_100ec320(pcVar4,param_1[0x5e]);
  if (iVar2 == 0) {
    FUN_1141f400();
    param_1[0x5f] = *(int *)(param_2 + 0x44);
    if (*(int *)(param_2 + 0x4c) != 0) {
      if (*(int *)(param_2 + 0x4c) != 1) {
        return;
      }
      if (param_1[0x62] != 1) {
        return;
      }
      if (*(int *)(param_2 + 0x48) != 1) {
        return;
      }
      piVar3 = (int *)(**(code **)(*param_1 + 0xd8))();
      if (piVar3 == (int *)0x0) {
        return;
      }
      fVar5 = (float10)(**(code **)(*piVar3 + 0xc0))();
      fVar6 = (float)fVar5 - (float)param_1[0x5f];
      if (fVar6 < 0.0) {
        fVar6 = (float)((uint)fVar6 ^ DAT_11de9c90);
      }
      if (fVar6 <= DAT_11cbbbd4) {
        return;
      }
      (**(code **)(*param_1 + 0x1d8))(*(undefined4 *)(param_2 + 0x44));
      return;
    }
    iVar2 = param_1[0x62];
    if ((iVar2 != 0) || (*(int *)(param_2 + 0x48) != 1)) {
      if ((iVar2 == 2) && (*(int *)(param_2 + 0x48) == 1)) {
        (**(code **)(*param_1 + 0x1d8))(*(undefined4 *)(param_2 + 0x44));
        (**(code **)(*param_1 + 0x1d0))(0);
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      if (*(int *)(param_2 + 0x48) != 2) {
        if (*(int *)(param_2 + 0x48) != 0) {
          return;
        }
        (**(code **)(*param_1 + 0x1d4))();
        return;
      }
      (**(code **)(*param_1 + 0x1d8))(*(undefined4 *)(param_2 + 0x44));
      (**(code **)(*param_1 + 0x1dc))();
      (**(code **)(*param_1 + 0x1d0))(1);
      return;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar4 = (char *)(param_2 + 4);
    param_1[0x5f] = *(int *)(param_2 + 0x44);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  FUN_100d83d0(param_2 + 4,pcVar4 + ((param_2 + 4) - (param_2 + 5)));
  (**(code **)(*param_1 + 0x1cc))();
  return;
}

