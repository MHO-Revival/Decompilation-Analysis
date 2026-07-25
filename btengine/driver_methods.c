
// ===== 103f8050 =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103f8050(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4190(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c35a0();
        return (bool)uVar2;
      }
    }
  }
  return false;
}



// ===== 105ede40 =====

/* [RE-AUTO c0] */

void FUN_105ede40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_105eedc0(param_1);
  *puVar1 = param_2;
  return;
}



// ===== 103e6980 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103e6980(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar3 = param_1 + 0x1d4;
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if ((iVar3 != param_1 + 0x1d4) && (*(uint *)(iVar3 + 0x10) <= *param_2)) {
      return *(undefined4 *)(iVar3 + 0x14);
    }
  }
  return 0;
}



// ===== 103d9340 =====

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



// ===== 105f1e40 =====

/* [RE-AUTO c0] */

int * __thiscall FUN_105f1e40(int param_1,int *param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_c [4];
  int local_8;
  
  local_8 = 0;
  if (param_3 == *(int *)(param_1 + 8)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*param_4 < *(uint *)(param_3 + 0x10)) {
        FUN_105f1040(param_2,param_3,param_4,param_3,0);
        return param_2;
      }
      if (*param_4 <= *(uint *)(param_3 + 0x10)) {
LAB_105f1e95:
        *param_2 = param_3;
        return param_2;
      }
      FUN_105f0890();
      if (param_3 == param_1) {
        FUN_105f1040(param_2,param_3,param_4,0,param_3);
        return param_2;
      }
      if (*param_4 < *(uint *)(param_3 + 0x10)) {
        iVar1 = *(int *)(param_3 + 0xc);
        iVar2 = param_3;
joined_r0x105f1fca:
        if (iVar1 != 0) {
          FUN_105f1040(param_2,iVar2,param_4,iVar2,0);
          return param_2;
        }
        FUN_105f1040(param_2,param_3,param_4,0,param_3);
        return param_2;
      }
    }
  }
  else if (param_3 == param_1) {
    if (*(uint *)(*(int *)(param_1 + 0xc) + 0x10) < *param_4) {
      FUN_105f1040(param_2,*(int *)(param_1 + 0xc),param_4,0,param_3);
      return param_2;
    }
  }
  else {
    local_8 = param_3;
    FUN_105f0920();
    bVar4 = *param_4 < *(uint *)(param_3 + 0x10);
    if ((bVar4) && (*(uint *)(local_8 + 0x10) < *param_4)) {
      if (*(int *)(local_8 + 0xc) == 0) {
        FUN_105f1040(param_2,local_8,param_4,0,local_8);
        return param_2;
      }
      FUN_105f1040(param_2,param_3,param_4,param_3,0);
      return param_2;
    }
    local_8 = param_3;
    FUN_105f0890();
    bVar5 = !bVar4;
    if (!bVar4) {
      bVar5 = *(uint *)(param_3 + 0x10) < *param_4;
      if (!bVar5) goto LAB_105f1e95;
      if ((local_8 == param_1) || (*param_4 < *(uint *)(local_8 + 0x10))) {
        iVar1 = *(int *)(param_3 + 0xc);
        iVar2 = local_8;
        goto joined_r0x105f1fca;
      }
    }
    if (bVar4 == bVar5) goto LAB_105f1e95;
  }
  piVar3 = (int *)FUN_105f2010(local_c,param_4);
  *param_2 = *piVar3;
  return param_2;
}



// ===== 10a5d8a0 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d8a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// ===== 101cbef0 =====

/* [RE-AUTO c0] */

uint FUN_101cbef0(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_101cd500(param_1,*param_2);
    return uVar1;
  }
  uVar2 = FUN_10a5ec80();
  uVar1 = FUN_101cbb50(param_1 - 1000000,uVar2);
  return uVar1;
}



// ===== 103ec-region fn @ 103ecb30 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103ecb30(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
    FUN_103d9340(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103d9340(param_2);
  return;
}


