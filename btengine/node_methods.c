
//######## BASE_s15_stub @ 1047b520 ########

undefined4 FUN_1047b520(void)

{
  return 0;
}


//######## BASE_s16 @ 10494750 ########

/* [RE-AUTO c0]
   strings:
     ""Properties List""
     ""Children Ptr List"" */

void __thiscall FUN_10494750(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x50))(param_1 + 0x28,1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 8))();
    if (cVar1 == '\0') {
      uVar2 = FUN_11317f40();
    }
    else {
      uVar2 = FUN_11318b60();
    }
    iVar4 = *param_2;
    uVar2 = FUN_11317f30(uVar2,1);
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
    FUN_1047b3b0(iVar4 + 0xc);
    if (*(int *)(iVar4 + 0x38) != 0) {
      (**(code **)(*param_2 + 0x4c))(*(int *)(iVar4 + 0x30) + 0x10,*(int *)(iVar4 + 0x38) * 0x18,1);
    }
  }
  return;
}


//######## BASE_s2_stub @ 1047b460 ########

void FUN_1047b460(void)

{
  return;
}


//######## BASE_s11 @ 10264a40 ########

void FUN_10264a40(void)

{
  return;
}


//######## BASE_s20 @ 1047d690 ########

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1047d690(undefined4 param_1,byte param_2)

{
  FUN_1047d6f0();
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}


//######## BASE_s21 @ 1047d9f0 ########

/* [RE-AUTO c0] */

void FUN_1047d9f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x40);
}


//######## Gen_s2 @ 104c3330 ########

void __fastcall FUN_104c3330(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 != *(undefined4 **)(param_1 + 0x14)) {
    *(undefined4 **)(param_1 + 0x1c) = puVar4;
    piVar5 = (int *)*puVar4;
    if (piVar5 != (int *)0x0) {
      *(int **)(piVar5[8] + 0xc4) = piVar5;
      (**(code **)(*piVar5 + 8))();
      *(undefined1 *)(piVar5[0x11] + 0xc) = 1;
      piVar1 = *(int **)(piVar5[8] + 200);
      while ((piVar1 != (int *)0x0 && (piVar1 == piVar5))) {
        iVar2 = piVar5[8];
        uVar3 = *(undefined4 *)(iVar2 + 0xd0);
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xd0) = 2;
        (**(code **)(*piVar5 + 0x2c))(uVar3);
        piVar1 = *(int **)(piVar5[8] + 200);
      }
      return;
    }
  }
  return;
}


//######## Gen_s4 @ 104c3240 ########

void FUN_104c3240(void)

{
  return;
}


//######## Gen_s8 @ 104c3250 ########

void __fastcall FUN_104c3250(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  return;
}


//######## Gen_s11 @ 104c3280 ########

/* [RE-AUTO c0] */

void __thiscall FUN_104c3280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(*(int *)(param_1 + 0x20) + 0xc4) = param_1;
  *(undefined4 *)(param_1 + 0x34) = 3;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(3);
  if (param_2 != 3) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)) {
      FUN_10494ab0();
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 1;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(1);
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0xd0) = 1;
    *(int *)(iVar2 + 200) = iVar1;
    return;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 2;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(2);
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0xd0) = 2;
    *(int *)(iVar2 + 200) = iVar1;
  }
  return;
}


//######## Gen_s15 @ 104c31e0 ########

/* [RE-AUTO c0] */

void FUN_104c31e0(void)

{
  FUN_1049e1a0();
  return;
}


//######## Gen_s16 @ 104981b0 ########

/* [RE-AUTO c0] */

void __thiscall FUN_104981b0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
    FUN_10494750(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_10494750(param_2);
  return;
}


//######## Gen_s20 @ 10497d40 ########

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10497d40(undefined4 param_1,byte param_2)

{
  FUN_10497c40();
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}


//######## Seq_s2 @ 104c2f90 ########

void __fastcall FUN_104c2f90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 != *(undefined4 **)(param_1 + 0x14)) {
    *(undefined4 **)(param_1 + 0x1c) = puVar4;
    piVar5 = (int *)*puVar4;
    if (piVar5 != (int *)0x0) {
      *(int **)(piVar5[8] + 0xc4) = piVar5;
      (**(code **)(*piVar5 + 8))();
      *(undefined1 *)(piVar5[0x11] + 0xc) = 1;
      piVar1 = *(int **)(piVar5[8] + 200);
      while ((piVar1 != (int *)0x0 && (piVar1 == piVar5))) {
        iVar2 = piVar5[8];
        uVar3 = *(undefined4 *)(iVar2 + 0xd0);
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xd0) = 2;
        (**(code **)(*piVar5 + 0x2c))(uVar3);
        piVar1 = *(int **)(piVar5[8] + 200);
      }
      return;
    }
  }
  return;
}


//######## Seq_s4 @ 104c2eb0 ########

void FUN_104c2eb0(void)

{
  return;
}


//######## Seq_s8 @ 104c2ec0 ########

void __fastcall FUN_104c2ec0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  return;
}


//######## Seq_s11 @ 104c2ef0 ########

/* [RE-AUTO c0] */

void __thiscall FUN_104c2ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(*(int *)(param_1 + 0x20) + 0xc4) = param_1;
  if (param_2 != 3) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  }
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)) {
      FUN_10494ab0();
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 2;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(2);
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0xd0) = 2;
    *(int *)(iVar2 + 200) = iVar1;
    return;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 1;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(1);
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0xd0) = 1;
    *(int *)(iVar2 + 200) = iVar1;
  }
  return;
}


//######## Seq_s15 @ 104c2e50 ########

/* [RE-AUTO c0] */

void FUN_104c2e50(void)

{
  FUN_1049e120();
  return;
}


//######## Seq_s16 @ 10498150 ########

/* [RE-AUTO c0] */

void __thiscall FUN_10498150(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
    FUN_10494750(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_10494750(param_2);
  return;
}


//######## Rnd_s2 @ 104c0d10 ########

/* [RE-AUTO c0] */

void FUN_104c0d10(void)

{
  FUN_104c0e60();
  FUN_10494ab0();
  return;
}


//######## Rnd_s15 @ 104c0230 ########

/* [RE-AUTO c0] */

void FUN_104c0230(void)

{
  FUN_1049e220();
  return;
}


//######## Rnd_s16 @ 10498230 ########

/* [RE-AUTO c0] */

void __thiscall FUN_10498230(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x70);
    cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
      FUN_10494750(param_2);
      (**(code **)(*param_2 + 0x20))(param_1);
      (**(code **)(*param_2 + 0x20))(param_1);
      goto LAB_104982bc;
    }
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
    if (cVar1 != '\0') {
      FUN_10494750(param_2);
      goto LAB_104982bc;
    }
    (**(code **)(*param_2 + 0x4c))(param_1,0x54,1);
  }
  FUN_10494750(param_2);
  (**(code **)(*param_2 + 0x20))(param_1);
LAB_104982bc:
  cVar1 = (**(code **)(*param_2 + 8))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  (**(code **)(*param_2 + 0x4c))
            ((int *)(param_1 + 0x54),(iVar2 - *(int *)(param_1 + 0x54) >> 2) << 2,1);
  cVar1 = (**(code **)(*param_2 + 8))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar2 = *(int *)(param_1 + 100);
  }
  (**(code **)(*param_2 + 0x4c))
            ((int *)(param_1 + 0x60),(iVar2 - *(int *)(param_1 + 0x60) >> 2) << 2,1);
  return;
}


//######## Rnd_s20 @ 1049ad90 ########

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_1049ad90(undefined4 *param_1,byte param_2)

{
  if (param_1[0xc] != 0) {
    FUN_10487b70(param_1[9]);
    param_1[10] = param_1 + 8;
    param_1[9] = 0;
    param_1[0xb] = param_1 + 8;
    param_1[0xc] = 0;
  }
  FUN_10262b90();
  *param_1 = &PTR_FUN_11dbac64;
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}


//######## Rnd_s21 @ 104bf910 ########

/* [RE-AUTO c0] */

void __thiscall FUN_104bf910(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x4c))(param_1 + 8,0x18,1);
  FUN_104bfb20(param_1 + 0x20);
  (**(code **)(*param_2 + 0x4c))(param_1 + 0x38,0x18,1);
  return;
}


//######## Until_s15 @ 104c30e0 ########

/* [RE-AUTO c0] */

void FUN_104c30e0(void)

{
  FUN_1049e650();
  return;
}


//######## Until_s16 @ 10498470 ########

/* [RE-AUTO c0] */

void __thiscall FUN_10498470(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x58,1);
    FUN_10494750(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_10494750(param_2);
  return;
}


//######## Until_s21 @ 10498010 ########

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10498010(undefined4 param_1,byte param_2)

{
  FUN_104980b0();
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}


//######## Non_s15 @ 104c2fb0 ########

/* [RE-AUTO c0] */

void FUN_104c2fb0(void)

{
  FUN_1049e800();
  return;
}


//######## Non_s16 @ 10498750 ########

/* [RE-AUTO c0] */

void __thiscall FUN_10498750(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x58,1);
    FUN_10494750(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_10494750(param_2);
  return;
}


//######## Non_s21 @ 10497aa0 ########

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10497aa0(undefined4 param_1,byte param_2)

{
  FUN_10497ad0();
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}


//######## Loop_s15 @ 104c2c30 ########

/* [RE-AUTO c0] */

void FUN_104c2c30(void)

{
  FUN_1049e4f0();
  return;
}


//######## Loop_s16 @ 104986d0 ########

/* [RE-AUTO c0] */

void __thiscall FUN_104986d0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_10494750(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_10494750(param_2);
  return;
}

