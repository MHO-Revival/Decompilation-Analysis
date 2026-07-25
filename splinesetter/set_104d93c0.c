
/* [RE-AUTO c0] */

void __fastcall FUN_104d93c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_1202e818;
  *param_1 = &PTR_FUN_11dbe188;
  param_1[1] = &PTR_LAB_11dbe178;
  if (((iVar4 != 0) && (piVar5 = *(int **)(iVar4 + 0x34), piVar5 != (int *)0x0)) &&
     (piVar5 = (int *)(**(code **)(*piVar5 + 0x3fc))(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 4))(0);
  }
  puVar1 = param_1 + 4;
  puVar3 = (undefined4 *)param_1[4];
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_10c3d5d0(puVar3);
    puVar3 = puVar2;
  }
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  param_1[1] = &PTR_FUN_11dbe194;
  FUN_10d6e940();
  return;
}

