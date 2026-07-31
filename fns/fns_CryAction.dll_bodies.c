
// ===== FUN_103dd050@103dd050 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dd050(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined1 local_c [8];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = param_1 + 8;
  iVar5 = iVar4;
  if (iVar1 != 0) {
    do {
      if (*(uint *)(iVar1 + 0x10) < param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar5 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar5 == iVar4) goto LAB_103dd0c4;
    if (param_2 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (piVar3 = (int *)FUN_103de9f0(local_c,&param_2), *piVar3 != param_1 + 0x38)) {
      return 0;
    }
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_103dd0c4:
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     (FUN_103de910(local_c,&param_2), unaff_ESI != param_1 + 0x20)) {
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}

