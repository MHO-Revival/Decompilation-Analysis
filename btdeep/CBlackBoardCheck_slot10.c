
// ===== [d0] FUN_10623030 @10623030  (74 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_10623030(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}


// ===== [d1] FUN_103dc700 @103dc700  (212 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc700(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60);
    cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
      FUN_103d9340(param_2);
      (**(code **)(*param_2 + 0x20))(param_1);
      (**(code **)(*param_2 + 0x20))(param_1);
      goto LAB_103dc78d;
    }
  }
  else {
    cVar2 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar2 != '\0') {
      FUN_103d9340(param_2);
      goto LAB_103dc78d;
    }
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
  }
  FUN_103d9340(param_2);
  (**(code **)(*param_2 + 0x20))(param_1);
LAB_103dc78d:
  cVar2 = (**(code **)(*param_2 + 0x50))(param_1 + 0x58,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_2 + 8))();
    if (cVar2 == '\0') {
      uVar3 = FUN_10a5ec90();
    }
    else {
      uVar3 = FUN_10a5f9d0();
    }
    iVar1 = *param_2;
    uVar3 = FUN_10a5ec80(uVar3,1);
    (**(code **)(iVar1 + 0x4c))(uVar3);
  }
  return;
}


// ===== [d2] FUN_10a5f9d0 @10a5f9d0  (16 bytes) =====

/* [RE-AUTO c0] */

int __fastcall FUN_10a5f9d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x14);
  }
  return 0;
}


// ===== [d2] FUN_103d9340 @103d9340  (271 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""Properties List""
     ""Children Ptr List"" */

void __thiscall FUN_103d9340(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x50))(param_1 + 0x28,1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 8))();
    if (cVar1 == '\0') {
      uVar2 = FUN_10a5ec90();
    }
    else {
      uVar2 = FUN_10a5f9d0();
    }
    iVar4 = *param_2;
    uVar2 = FUN_10a5ec80(uVar2,1);
    (**(code **)(iVar4 + 0x4c))(uVar2);
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 4))(param_2);
  }
  uVar2 = (**(code **)(*param_2 + 0xc))();
  uVar3 = (**(code **)(*param_2 + 0x18))(uVar2,"Properties List",1);
  (**(code **)(*param_2 + 0x10))(uVar3);
  (**(code **)(*param_2 + 0x10))(uVar2);
  uVar2 = (**(code **)(*param_2 + 0xc))();
  uVar3 = (**(code **)(*param_2 + 0x18))(uVar2,"Children Ptr List",1);
  (**(code **)(*param_2 + 0x10))(uVar3);
  iVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10) >> 2;
  if (iVar4 != 0) {
    (**(code **)(*param_2 + 0x4c))(*(int *)(param_1 + 0x10),iVar4 << 2,1);
  }
  (**(code **)(*param_2 + 0x10))(uVar2);
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 != 0) {
    (**(code **)(*param_2 + 0x4c))(iVar4,0x40,1);
    FUN_103d7690(iVar4 + 0xc);
    if (*(int *)(iVar4 + 0x38) != 0) {
      (**(code **)(*param_2 + 0x4c))(*(int *)(iVar4 + 0x30) + 0x10,*(int *)(iVar4 + 0x38) * 0x18,1);
    }
  }
  return;
}


// [d2] FUN_10a5ec80 @10a5ec80  (emitted in an earlier root)

// ===== [d2] FUN_10a5ec90 @10a5ec90  (29 bytes) =====

/* [RE-AUTO c0] */

int __fastcall FUN_10a5ec90(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((int *)param_1[5] == param_1) {
    return 0xf;
  }
  return (*param_1 - param_1[5]) + -1;
}

