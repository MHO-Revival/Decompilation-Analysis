
// ================= FUN_107d0200 @ 107d0200 =================

/* [RE-AUTO c0] */

void __thiscall FUN_107d0200(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  return;
}


// ================= FUN_10f15e70 @ 10f15e70 =================

/* [RE-AUTO c0]
   strings:
     ""swordflash"" */

void __fastcall FUN_10f15e70(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  
  piVar2 = (int *)(**(code **)(*param_1 + 400))();
  iVar1 = *DAT_1201ff00;
  uVar3 = (**(code **)(*piVar2 + 0xe4))();
  piVar2 = (int *)(**(code **)(iVar1 + 0x54))(uVar3);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_1 + 400))();
    iVar1 = *DAT_1201ff00;
    uVar3 = (**(code **)(*piVar2 + 0xe8))();
    piVar2 = (int *)(**(code **)(iVar1 + 0x54))(uVar3);
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  local_18 = 0x130;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "swordflash";
  local_10 = &DAT_11cbde00;
  (**(code **)(*piVar2 + 0x40))(&local_18);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x100))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x40))(&local_18);
  }
  return;
}


// ================= FUN_10fb6bf0 @ 10fb6bf0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10fb6bf0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  uStack_8 = param_1;
  FUN_10fb5990(puVar1,param_2,(int)&uStack_8 + 3,1,1);
  return;
}


// ================= FUN_10c3d580 @ 10c3d580 =================

/* [RE-AUTO c0] */

undefined4 FUN_10c3d580(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_1202e864 == 0) {
    FUN_10c495f0();
  }
  uVar1 = (*DAT_1202e834)(param_1,&local_8);
  LOCK();
  DAT_1202e824 = DAT_1202e824 + local_8;
  UNLOCK();
  LOCK();
  DAT_1202e82c = DAT_1202e82c + param_1;
  UNLOCK();
  LOCK();
  DAT_1202e830 = DAT_1202e830 + 1;
  UNLOCK();
  return uVar1;
}


// ================= CNpcSkillPlay::RegisterNodeParams @ 10aa5760 =================

/* [RE-R1]
   strings:
     ""CNpcSkillPlay""
     ""Duration""
     ""bWaitDodge"" */

void CNpcSkillPlay__RegisterNodeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("StateName","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_1c,local_34,0,1,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("Duration","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("bWaitCombo","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("bWaitDodge","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,3,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10f17060 @ 10f17060 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f17060(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x228))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 800))();
      iVar2 = FUN_1143c770();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 800))();
        FUN_1143c770(param_2);
        FUN_1143ca80();
      }
    }
  }
  return;
}


// ================= FUN_10fd05e0 @ 10fd05e0 =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10fd05e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}


// ================= FUN_104753a0 @ 104753a0 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_104753a0(int param_1,uint param_2)

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
    if (iVar5 == iVar4) goto LAB_10475414;
    if (param_2 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (piVar3 = (int *)FUN_10476e00(local_c,&param_2), *piVar3 != param_1 + 0x38)) {
      return 0;
    }
    iVar4 = FUN_10476d70(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_10475414:
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     (FUN_10476d20(local_c,&param_2), unaff_ESI != param_1 + 0x20)) {
    iVar4 = FUN_10476d70(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}


// ================= FUN_1046dc90 @ 1046dc90 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1046dc90(int param_1,uint *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x1c);
    uVar1 = FUN_11316bf0(*(undefined4 *)(param_1 + 0x9c));
    iVar2 = (**(code **)(iVar2 + 0x18))(uVar1);
    if (iVar2 != -1) {
      *param_3 = iVar2 + 1000000;
      return 1;
    }
  }
  iVar2 = param_1 + 0x2c;
  *param_3 = -1;
  iVar5 = iVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    do {
      if (*(uint *)(iVar3 + 0x10) < *param_2) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
        iVar5 = iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
    if ((iVar5 != iVar2) && (*param_2 < *(uint *)(iVar5 + 0x10))) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 == iVar2) {
    return 0;
  }
  *param_3 = *(int *)(iVar5 + 0x14);
  return 1;
}


// ================= FUN_10a4bb60 @ 10a4bb60 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_10a4bb60(int *param_1,int *param_2)

{
  int iVar1;
  
  if (-1 < *(int *)(*param_2 + -0xc)) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    FUN_10c3dab0(iVar1 + -0xc);
    return param_1;
  }
  *param_1 = (int)&DAT_1201fc98;
  return param_1;
}


// ================= FUN_10f57330 @ 10f57330 =================

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10f57330(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  FUN_10f56fa0(param_2);
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)param_1[1]) {
      return (undefined4 *)0x0;
    }
    puVar3 = &DAT_1203cce8;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*puVar2;
    }
    puVar1 = &DAT_1203cce8;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    if (puVar3 == puVar1) break;
    puVar2 = puVar2 + 2;
  }
  return puVar2;
}


// ================= FUN_10268110 @ 10268110 =================

/* [RE-AUTO c0] */

float10 __fastcall FUN_10268110(undefined4 param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_10268440(param_1);
  return (float10)(float)fVar1;
}


// ================= FUN_10f1e150 @ 10f1e150 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e150(int param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\0') {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) | 0x10;
  }
  else {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) & 0xffffffef;
  }
  *(undefined8 *)(param_1 + 0x22d0) = param_2;
  *(undefined4 *)(param_1 + 0x22d8) = param_3;
  *(undefined4 *)(param_1 + 0x2264) = 0;
  *(undefined4 *)(param_1 + 0x2268) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 0;
  *(undefined4 *)(param_1 + 0x227c) = 0;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  return;
}


// ================= _CIatan2 @ 11a89560 =================

/* [RE-AUTO c0] */

void _CIatan2(void)

{
                    /* WARNING: Could not recover jumptable at 0x11a89560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIatan2();
  return;
}


// ================= FUN_10f1e350 @ 10f1e350 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e350(int param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_11cfa338;
  uVar1 = DAT_11cd48e0;
  if (param_4 != '\x01') {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) | 0x20;
    *(undefined8 *)(param_1 + 0x22dc) = param_2;
    *(undefined4 *)(param_1 + 0x22e4) = param_3;
    return;
  }
  *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) & 0xffffffdf;
  *(ulonglong *)(param_1 + 0x22dc) = CONCAT44(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x22e4) = 0x42340000;
  return;
}


// ================= TdrDebugFormat_FloatField_at0xc @ 102717b0 =================

/* WARNING: Removing unreachable block (ram,0x102717c0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall
TdrDebugFormat_FloatField_at0xc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_WriteIndent(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_1010c010(), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f8c,&DAT_11da0cf4,
                          (double)*(float *)(param_1 + 0xc));
    }
  }
  return;
}


// ================= FUN_10f57110 @ 10f57110 =================

/* [RE-AUTO c0] */

undefined1 * __fastcall FUN_10f57110(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_1203cce8;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
  }
  return puVar1;
}


// ================= FUN_10a9eed0 @ 10a9eed0 =================

/* [RE-AUTO c0]
   strings:
     ""EffectID""
     ""CApplyEffect""
     ""TargetEntityID"" */

void FUN_10a9eed0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("EffectID","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CApplyEffect","");
  FUN_1048b080(local_1c,local_34,0,4,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetEntityID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CApplyEffect","");
  FUN_1048b080(local_34,local_1c,1,4,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_100d83d0 @ 100d83d0 =================

/* [RE-AUTO c0] */

int __thiscall FUN_100d83d0(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint _Size;
  uint _Size_00;
  void *_Dst;
  
  _Size = param_3 - (int)param_2;
  pvVar1 = *(void **)(param_1 + 0x14);
  _Size_00 = *(int *)(param_1 + 0x10) - (int)pvVar1;
  if (_Size_00 < _Size) {
    if (_Size_00 != 0) {
      memcpy(pvVar1,param_2,_Size_00);
    }
    FUN_100d9260((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)) + (int)param_2,param_3);
  }
  else {
    if (_Size != 0) {
      memcpy(pvVar1,param_2,_Size);
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    _Dst = (void *)(*(int *)(param_1 + 0x14) + _Size);
    if (_Dst != pvVar1) {
      memmove(_Dst,pvVar1,1);
      *(int *)(param_1 + 0x10) = (int)_Dst + (*(int *)(param_1 + 0x10) - (int)pvVar1);
      return param_1;
    }
  }
  return param_1;
}


// ================= atoi @ EXTERNAL:00000207 =================
// <decompile failed>

// ================= FUN_11317f30 @ 11317f30 =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_11317f30(int *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x14);
  }
  return 0;
}


// ================= FUN_10ba1fc0 @ 10ba1fc0 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10ba1fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return;
}


// ================= FUN_107d6b40 @ 107d6b40 =================

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_107d6b40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// ================= BTNode_CEnableMoveCollision::DescribeParams @ 10aa1800 =================

/* [RE-R1]
   strings:
     ""Living""
     ""CEnableMoveCollision""
     ""CombatNPCMovCol"" */

void BTNode_CEnableMoveCollision__DescribeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("Living","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("WithWall","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_34,local_1c,1,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CombatNPCMovCol","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEnableMoveCollision","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10f570a0 @ 10f570a0 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10f570a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar3 = (undefined4 *)FUN_10f56e60(&param_2);
  iVar2 = param_2;
  uVar1 = *puVar3;
  *param_1 = uVar1;
  piVar5 = (int *)(param_2 + -0xc);
  if (-1 < *piVar5) {
    iVar4 = FUN_10c3dad0(piVar5);
    if (iVar4 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar2 + -4));
      FUN_10c3d900(piVar5);
    }
  }
  return uVar1;
}


// ================= FUN_1025bc60 @ 1025bc60 =================

/* [RE-AUTO c0] */

uint FUN_1025bc60(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d4f0(param_1,*param_2);
    return uVar1;
  }
  uVar2 = FUN_11317f30();
  uVar1 = FUN_1025b630(param_1 - 1000000,uVar2);
  return uVar1;
}


// ================= _stricmp @ EXTERNAL:00000204 =================
// <decompile failed>

// ================= FUN_10c3dab0 @ 10c3dab0 =================

/* [RE-AUTO c0] */

int FUN_10c3dab0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return iVar1 + 1;
}


// ================= FUN_10d664d0 @ 10d664d0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10d664d0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (piVar2 != (int *)0x0) {
    FUN_10f19280();
    iVar3 = (**(code **)(*piVar2 + 0x790))();
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = FUN_10fd7ee0(param_2,0);
    }
    *(undefined1 *)(param_1 + 0xd71) = uVar1;
  }
  return;
}


// ================= FUN_10aa1370 @ 10aa1370 =================

/* [RE-AUTO c0]
   strings:
     ""TargetPos""
     ""CCommonRotateToPos""
     ""speedByAnimation""
     ""MinAngle""
     ""QuickReturn""
     ""FailReason"" */

void FUN_10aa1370(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetPos","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_1c,local_34,0);
  FUN_1048b250();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("RotateSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("speedByAnimation","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_34,local_1c,3,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("MinAngle","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_34,local_1c,2,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("QuickReturn","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_34,local_1c,4,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("FailReason","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCommonRotateToPos","");
  FUN_1048b080(local_34,local_1c,5,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10fb5690 @ 10fb5690 =================

/* [RE-AUTO c0]
   calls: puts, exit, memcpy
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_10fb5690(uint *param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  code *pcVar1;
  uint *puVar2;
  void *pvVar3;
  size_t _Size;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *_Dst;
  uint local_c;
  uint local_8;
  
  local_8 = (int)(param_1[1] - *param_1) >> 3;
  local_c = param_5;
  if (0x1fffffff - local_8 < param_5) {
    FUN_10fb5c50();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar2 = &local_8;
  if (local_8 <= param_5) {
    puVar2 = &local_c;
  }
  uVar6 = *puVar2 + local_8;
  if ((0x1fffffff < uVar6) || (uVar6 < local_8)) {
    uVar6 = 0x1fffffff;
  }
  if (0x1fffffff < uVar6) {
    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar6 * 8);
  }
  local_8 = 0;
  pvVar4 = (void *)*param_1;
  if (param_2 == pvVar4) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = memcpy((void *)0x0,pvVar4,(int)param_2 - (int)pvVar4);
    puVar7 = (undefined4 *)(((int)param_2 - (int)pvVar4) + (int)pvVar3);
  }
  if (param_5 == 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *param_3;
      puVar7[1] = param_3[1];
    }
    _Dst = puVar7 + 2;
  }
  else {
    _Dst = puVar7 + param_5 * 2;
    for (iVar5 = (int)_Dst - (int)puVar7 >> 3; 0 < iVar5; iVar5 = iVar5 + -1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *param_3;
        puVar7[1] = param_3[1];
      }
      puVar7 = puVar7 + 2;
    }
  }
  if ((param_6 == '\0') && ((void *)param_1[1] != param_2)) {
    _Size = (int)param_1[1] - (int)param_2;
    pvVar4 = memcpy(_Dst,param_2,_Size);
    _Dst = (undefined4 *)((int)pvVar4 + _Size);
  }
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  *param_1 = local_8;
  param_1[1] = (uint)_Dst;
  param_1[2] = local_8;
  return;
}


// ================= FUN_10fb5990 @ 10fb5990 =================

/* [RE-AUTO c0]
   calls: puts, exit, memcpy
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_10fb5990(uint *param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  code *pcVar1;
  uint *puVar2;
  void *pvVar3;
  size_t _Size;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *_Dst;
  uint local_c;
  uint local_8;
  
  local_8 = (int)(param_1[1] - *param_1) >> 3;
  local_c = param_5;
  if (0x1fffffff - local_8 < param_5) {
    FUN_10fb5c90();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar2 = &local_8;
  if (local_8 <= param_5) {
    puVar2 = &local_c;
  }
  uVar6 = *puVar2 + local_8;
  if ((0x1fffffff < uVar6) || (uVar6 < local_8)) {
    uVar6 = 0x1fffffff;
  }
  if (0x1fffffff < uVar6) {
    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar6 * 8);
  }
  local_8 = 0;
  pvVar4 = (void *)*param_1;
  if (param_2 == pvVar4) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = memcpy((void *)0x0,pvVar4,(int)param_2 - (int)pvVar4);
    puVar7 = (undefined4 *)(((int)param_2 - (int)pvVar4) + (int)pvVar3);
  }
  if (param_5 == 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *param_3;
      puVar7[1] = param_3[1];
    }
    _Dst = puVar7 + 2;
  }
  else {
    _Dst = puVar7 + param_5 * 2;
    for (iVar5 = (int)_Dst - (int)puVar7 >> 3; 0 < iVar5; iVar5 = iVar5 + -1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *param_3;
        puVar7[1] = param_3[1];
      }
      puVar7 = puVar7 + 2;
    }
  }
  if ((param_6 == '\0') && ((void *)param_1[1] != param_2)) {
    _Size = (int)param_1[1] - (int)param_2;
    pvVar4 = memcpy(_Dst,param_2,_Size);
    _Dst = (undefined4 *)((int)pvVar4 + _Size);
  }
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  *param_1 = local_8;
  param_1[1] = (uint)_Dst;
  param_1[2] = local_8;
  return;
}


// ================= FUN_10fdc0a0 @ 10fdc0a0 =================

/* [RE-AUTO c0]
   strings:
     ""_SWORD"" */

undefined4 __fastcall FUN_10fdc0a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    return 0;
  }
  iVar2 = FUN_10f19240();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_11399c60();
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)FUN_11399c60();
      iVar2 = (**(code **)*puVar4)();
      if (iVar2 == 0xc) {
        cVar1 = (**(code **)(*piVar3 + 0xac))();
        if (cVar1 == '\0') {
          FUN_10a4bfe0("_SWORD");
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}


// ================= FUN_10f7ba00 @ 10f7ba00 =================

/* [RE-AUTO c0]
   calls: rand */

void __fastcall FUN_10f7ba00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  undefined1 local_40 [8];
  undefined1 local_38 [20];
  undefined1 *local_24;
  int local_18;
  float local_14;
  uint local_10;
  float local_c;
  byte local_7;
  byte local_6;
  char local_5;
  
  if (((*(int *)(param_1 + 0x18) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0x100) != 0)) &&
     (local_18 = param_1, local_c = (float)FUN_10f19240(), local_c != 0.0)) {
    local_7 = 0;
    local_6 = 0;
    piVar2 = (int *)FUN_11348ac0(local_40,0x15);
    iVar4 = *piVar2;
    iVar3 = FUN_11350b20();
    local_5 = iVar4 <= iVar3;
    if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_24);
    }
    bVar5 = local_5 != '\0';
    cVar1 = FUN_11397c30(0xb);
    local_14 = (float)(uint)local_6;
    if (cVar1 != '\0') {
      local_14 = 1.4013e-45;
    }
    cVar1 = FUN_11397c30(9);
    local_10 = (uint)local_7;
    if (cVar1 != '\0') {
      local_10 = 1;
    }
    fVar6 = (float10)FUN_1134fe20();
    local_c = (float)fVar6;
    if (((bVar5) || ((char)local_10 != '\0')) || (local_14._0_1_ != '\0')) {
      fVar6 = (float10)FUN_1134fde0();
      local_c = (float)fVar6;
    }
    fVar6 = (float10)FUN_1134fe00();
    local_14 = (float)fVar6;
    iVar4 = rand();
    *(float *)(local_18 + 0x234) = (float)(iVar4 % 10) * DAT_11cbf084 * local_c * local_14 + local_c
    ;
  }
  return;
}


// ================= FUN_10f5c510 @ 10f5c510 =================

/* [RE-AUTO c0] */

bool __thiscall FUN_10f5c510(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x44);
  uStack_8 = param_1;
  iVar2 = FUN_10f5e6e0(*(undefined4 *)(param_1 + 0x40),iVar1,param_2,(int)&uStack_8 + 3);
  return iVar2 != iVar1;
}


// ================= FUN_10aa6bc0 @ 10aa6bc0 =================

/* [RE-AUTO c0]
   strings:
     ""CShowIcon"" */

void FUN_10aa6bc0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0(&DAT_11cc0a98,&DAT_11cc0a9c);
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CShowIcon","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_1010c010 @ 1010c010 =================

/* [RE-AUTO c0]
   calls: _vsnprintf */

undefined4 FUN_1010c010(int *param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_2,
                     &stack0x0000000c);
  if ((-1 < (int)uVar1) && (uVar1 < (uint)(param_1[2] - param_1[1]))) {
    param_1[1] = uVar1 + param_1[1];
    return 0;
  }
  return 0xffffffff;
}


// ================= FUN_113168d0 @ 113168d0 =================

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_113168d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_11317050(param_2);
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = FUN_11317050(&DAT_11d9d32b);
  *param_1 = uVar1;
  return param_1;
}


// ================= FUN_11316b10 @ 11316b10 =================

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_11316b10(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_11317050(param_2);
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = FUN_11317050(&DAT_11d9d32b);
  *param_1 = uVar1;
  return param_1;
}


// ================= FUN_104787d0 @ 104787d0 =================

/* [RE-AUTO c0] */

undefined4 FUN_104787d0(void)

{
  return *(undefined4 *)(DAT_123bb90c + 0x14);
}


// ================= FUN_10aa2420 @ 10aa2420 =================

/* [RE-AUTO c0]
   strings:
     ""CEntityMoveToPosEx""
     ""TargetPos""
     ""FailReason"" */

void FUN_10aa2420(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("MoveSpeed","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CEntityMoveToPosEx","");
  FUN_1048b080(local_1c,local_34,0,2,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityMoveToPosEx","");
  FUN_1048b080(local_34,local_1c,1);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityMoveToPosEx","");
  FUN_1048b080(local_34,local_1c,2);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("FailReason","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityMoveToPosEx","");
  FUN_1048b080(local_34,local_1c,3);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10aa5d50 @ 10aa5d50 =================

/* [RE-AUTO c0] */

void FUN_10aa5d50(void)

{
  return;
}


// ================= FUN_10f58fc0 @ 10f58fc0 =================

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""OnLeave"" */

void __thiscall FUN_10f58fc0(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  size_t _Size;
  undefined1 *puVar9;
  undefined1 local_84 [92];
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  char *local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 0xc4);
  local_c = param_1;
  if (puVar3 != *(undefined4 **)(param_1 + 200)) {
    do {
      if (*(int *)(param_2 + -0xc) < 0) {
        puVar9 = &DAT_1201fc98;
      }
      else {
        puVar9 = param_2;
        FUN_10c3dab0(param_2 + -0xc,param_2);
      }
      (*(code *)*puVar3)(param_1,puVar9);
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(param_1 + 200));
  }
  local_24 = param_1 + 0x124;
  pcVar7 = *(char **)(param_1 + 0x128);
  local_8 = local_24;
  if (*(char **)(param_1 + 0x128) != (char *)0x0) {
    do {
      if (*(int *)(pcVar7 + 0x10) < 9) {
        pcVar8 = *(char **)(pcVar7 + 0xc);
      }
      else {
        pcVar8 = *(char **)(pcVar7 + 8);
        local_8 = pcVar7;
      }
      pcVar7 = pcVar8;
    } while (pcVar8 != (char *)0x0);
    if ((local_8 != local_24) && (9 < *(int *)(local_8 + 0x10))) {
      local_8 = local_24;
    }
  }
  if ((local_8 != local_24) &&
     (piVar5 = *(int **)(local_8 + 0x14), piVar5 != *(int **)(local_8 + 0x18))) {
    do {
      puVar3 = (undefined4 *)piVar5[3];
      cVar2 = '\x01';
      if (puVar3 != (undefined4 *)piVar5[4]) {
        do {
          if ((code *)*puVar3 != (code *)0x0) {
            cVar2 = (*(code *)*puVar3)(param_1,local_28,puVar3[1],0);
          }
          if (cVar2 == '\0') goto LAB_10f590f1;
          puVar3 = puVar3 + 2;
        } while (puVar3 != (undefined4 *)piVar5[4]);
      }
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)piVar5[1]) {
        do {
          pcVar1 = (code *)*puVar3;
          if (pcVar1 != (code *)0x0) {
            if (*(int *)(param_2 + -0xc) < 0) {
              puVar9 = &DAT_1201fc98;
            }
            else {
              puVar9 = param_2;
              FUN_10c3dab0(param_2 + -0xc,param_2);
            }
            (*pcVar1)(local_c,puVar9);
          }
          puVar3 = puVar3 + 2;
          param_1 = local_c;
        } while (puVar3 != (undefined4 *)piVar5[1]);
      }
LAB_10f590f1:
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(local_8 + 0x18));
  }
  local_8 = *(char **)(param_1 + 0xd0);
  if (local_8 != (char *)*(undefined4 **)(param_1 + 0xd4)) {
    do {
      local_c = *(char **)((int)local_8 + 4);
      pcVar7 = &DAT_1201fc98;
      if (local_c == (char *)0x0) {
        local_c = &DAT_1203cce8;
      }
      pcVar8 = local_c;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      _Size = (int)pcVar8 - (int)(local_c + 1);
      if (_Size != 0) {
        puVar3 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
        DAT_123be268 = DAT_123be268 + _Size + 0xd;
        *puVar3 = 1;
        pcVar7 = (char *)(puVar3 + 3);
        puVar3[1] = _Size;
        puVar3[2] = _Size;
        pcVar7[_Size] = '\0';
        if (pcVar7 != local_c) {
          memcpy(pcVar7,local_c,_Size);
        }
      }
      piVar5 = (int *)(pcVar7 + -0xc);
      if (*(int *)(pcVar7 + -0xc) < 0) {
        pcVar8 = &DAT_1201fc98;
      }
      else {
        pcVar8 = pcVar7;
        FUN_10c3dab0(piVar5,pcVar7);
      }
      if (*(int *)(param_2 + -0xc) < 0) {
        puVar9 = &DAT_1201fc98;
      }
      else {
        puVar9 = param_2;
        FUN_10c3dab0(param_2 + -0xc,param_2,pcVar8);
      }
      pcVar8 = local_8;
      (**(code **)local_8)(param_1,puVar9);
      if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar7 + -4));
        FUN_10c3d900(piVar5);
      }
      local_8 = (char *)((int)pcVar8 + 8);
    } while (local_8 != (char *)*(undefined4 **)(param_1 + 0xd4));
  }
  puVar9 = *(undefined1 **)(param_1 + 0x84);
  puVar6 = &DAT_1203cce8;
  if (puVar9 != (undefined1 *)0x0) {
    puVar6 = puVar9;
  }
  if (puVar6 != &DAT_11d9d32b) {
    local_20 = 0x11d;
    local_1c = 0x4ffff;
    local_18 = &DAT_1203cce8;
    if (puVar9 != (undefined1 *)0x0) {
      local_18 = puVar9;
    }
    local_10 = 0;
    local_14 = "OnLeave";
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 4) + 0x24))(&local_20);
  }
  FUN_10f19970(&DAT_11cbc650);
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (*(int *)(param_1 + 0x18) != 0)) &&
      ((piVar5 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar5 != (int *)0x0 &&
       (piVar5 = (int *)(**(code **)(*piVar5 + 800))(), piVar5 != (int *)0x0)))) &&
     (iVar4 = (**(code **)(*piVar5 + 0xa8))(), iVar4 == 0)) {
    FUN_113f2bf0();
    puVar9 = &DAT_1203cce8;
    if (*(undefined1 **)(param_1 + 0x50) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x50);
    }
    FUN_113f3280(&DAT_11d9d32b,puVar9,0);
    FUN_113f33c0(piVar5[1]);
    FUN_113f33e0(param_2);
    (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(local_84);
    FUN_113f2de0();
  }
  piVar5 = (int *)(param_2 + -0xc);
  if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
    FUN_10c3d900(piVar5);
  }
  return;
}


// ================= FUN_10f994e0 @ 10f994e0 =================

/* [RE-AUTO c0]
   calls: atof, memcpy
   strings:
     ""MaxAngle""
     ""RotateTime""
     ""MaxTime""
     ""state"" */

void FUN_10f994e0(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  size_t sVar12;
  int *piVar13;
  byte *_Dst;
  bool bVar14;
  double dVar15;
  byte *local_5c;
  undefined1 local_58;
  code *local_54;
  code *local_50;
  code *local_4c;
  int local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  float local_2c;
  float local_28;
  int *local_24;
  byte *local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  char local_5;
  
  piVar13 = *(int **)(param_1 + 0x1c8);
  iVar6 = param_1 + 0x1c8;
  local_5 = '\0';
  piVar10 = piVar13;
  while( true ) {
    local_44 = iVar6;
    if (piVar10 == *(int **)(param_1 + 0x1cc)) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x28);
    }
    if (*(int *)(*piVar10 + 4) == 1) break;
    piVar10 = piVar10 + 1;
  }
  for (; piVar13 != *(int **)(param_1 + 0x1cc); piVar13 = piVar13 + 1) {
    local_1c = *piVar13;
    if (*(int *)(local_1c + 4) == 1) goto LAB_10f99579;
  }
  local_1c = 0;
LAB_10f99579:
  local_28 = 0.0;
  local_2c = 0.0;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x80))("MaxAngle");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("MaxAngle");
      CInfoRecord__GetModelString(uVar2);
      dVar15 = atof(local_34);
      local_28 = (float)dVar15;
      piVar13 = (int *)(local_34 + -0xc);
      if ((-1 < *piVar13) && (iVar3 = FUN_10c3dad0(piVar13), iVar3 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_34 + -4));
        FUN_10c3d900(piVar13);
      }
    }
    cVar1 = (**(code **)(*param_2 + 0x80))("RotateTime");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("MaxTime");
      CInfoRecord__GetModelString(uVar2);
      dVar15 = atof(local_38);
      local_2c = (float)dVar15;
      piVar13 = (int *)(local_38 + -0xc);
      if ((-1 < *piVar13) && (iVar3 = FUN_10c3dad0(piVar13), iVar3 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_38 + -4));
        FUN_10c3d900(piVar13);
      }
    }
    local_40 = (**(code **)(*param_2 + 0xa0))();
    local_30 = 0;
    if (0 < local_40) {
      do {
        (**(code **)(*param_2 + 0xa8))(&local_24,local_30);
        local_18 = (byte *)(**(code **)(*local_24 + 0x20))();
        _Dst = &DAT_1201fc98;
        if (local_18 != (byte *)0x0) {
          pbVar11 = local_18;
          do {
            bVar7 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar7 != 0);
          sVar12 = (int)pbVar11 - (int)(local_18 + 1);
          if (sVar12 != 0) {
            puVar4 = (undefined4 *)FUN_10c3d780(sVar12 + 0xd);
            DAT_123be268 = DAT_123be268 + sVar12 + 0xd;
            *puVar4 = 1;
            _Dst = (byte *)(puVar4 + 3);
            puVar4[1] = sVar12;
            puVar4[2] = sVar12;
            _Dst[sVar12] = 0;
            if (_Dst != local_18) {
              memcpy(_Dst,local_18,sVar12);
            }
          }
        }
        pbVar8 = &DAT_11cfcb00;
        pbVar11 = _Dst;
        do {
          bVar7 = *pbVar11;
          bVar14 = bVar7 < *pbVar8;
          if (bVar7 != *pbVar8) {
LAB_10f99730:
            uVar5 = -(uint)bVar14 | 1;
            goto LAB_10f99735;
          }
          if (bVar7 == 0) break;
          bVar7 = pbVar11[1];
          bVar14 = bVar7 < pbVar8[1];
          if (bVar7 != pbVar8[1]) goto LAB_10f99730;
          pbVar11 = pbVar11 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar7 != 0);
        uVar5 = 0;
LAB_10f99735:
        if (uVar5 == 0) {
          uVar2 = (**(code **)(*local_24 + 0x7c))("state");
          CInfoRecord__GetModelString(uVar2);
          pbVar11 = local_14;
          local_18 = &DAT_1201fc98;
          local_5c = &DAT_1201fc98;
          if (local_14 != &DAT_1201fc98) {
            if (DAT_1201fc8c < 0) {
              if (*(int *)(local_14 + -0xc) < 0) {
                local_18 = &DAT_1201fc98;
              }
              else {
LAB_10f99813:
                local_5c = local_14;
                local_18 = local_14;
                FUN_10c3dab0(pbVar11 + -0xc);
              }
            }
            else {
              if (-1 < *(int *)(local_14 + -0xc)) {
                if ((-1 < DAT_1201fc8c) && (iVar6 = FUN_10c3dad0(&DAT_1201fc8c), iVar6 < 1)) {
                  DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
                  FUN_10c3d900(&DAT_1201fc8c);
                }
                goto LAB_10f99813;
              }
              if ((-1 < DAT_1201fc8c) && (iVar6 = FUN_10c3dad0(&DAT_1201fc8c), iVar6 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
                FUN_10c3d900(&DAT_1201fc8c);
              }
              local_18 = local_14;
              local_5c = local_14;
            }
          }
          local_3c = (byte *)(**(code **)(*local_24 + 0x7c))(&DAT_11cc4d9c);
          local_20 = &DAT_1201fc98;
          if (local_3c != (byte *)0x0) {
            pbVar11 = local_3c;
            do {
              bVar7 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar7 != 0);
            sVar12 = (int)pbVar11 - (int)(local_3c + 1);
            if (sVar12 != 0) {
              puVar4 = (undefined4 *)FUN_10c3d780(sVar12 + 0xd);
              DAT_123be268 = DAT_123be268 + sVar12 + 0xd;
              *puVar4 = 1;
              local_20 = (byte *)(puVar4 + 3);
              puVar4[1] = sVar12;
              puVar4[2] = sVar12;
              local_20[sVar12] = 0;
              if (local_20 != local_3c) {
                memcpy(local_20,local_3c,sVar12);
              }
            }
          }
          FUN_10a7ef40();
          pbVar8 = local_20;
          bVar7 = *local_20;
          pbVar11 = local_20;
          while (bVar7 != 0) {
            bVar7 = *pbVar11;
            if (('@' < (char)bVar7) && ((char)bVar7 < '[')) {
              bVar7 = bVar7 + 0x20;
            }
            *pbVar11 = bVar7;
            pbVar11 = pbVar11 + 1;
            bVar7 = *pbVar11;
          }
          pbVar9 = &DAT_11d9e058;
          pbVar11 = local_20;
          do {
            bVar7 = *pbVar11;
            bVar14 = bVar7 < *pbVar9;
            if (bVar7 != *pbVar9) {
LAB_10f998e6:
              uVar5 = -(uint)bVar14 | 1;
              goto LAB_10f998eb;
            }
            if (bVar7 == 0) break;
            bVar7 = pbVar11[1];
            bVar14 = bVar7 < pbVar9[1];
            if (bVar7 != pbVar9[1]) goto LAB_10f998e6;
            pbVar11 = pbVar11 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar7 != 0);
          uVar5 = 0;
LAB_10f998eb:
          local_58 = uVar5 == 0;
          local_3c = (byte *)(local_1c + 0x18);
          puVar4 = *(undefined4 **)(local_1c + 0x1c);
          if (puVar4 == *(undefined4 **)(local_1c + 0x20)) {
            local_9 = 0;
            local_6 = 0;
            FUN_10fb5050(puVar4,&local_5c,&local_6,1,1);
          }
          else {
            local_7 = 0;
            local_8 = 0;
            if (puVar4 != (undefined4 *)0x0) {
              if (-1 < *(int *)(local_18 + -0xc)) {
                *puVar4 = local_5c;
                FUN_10c3dab0(local_18 + -0xc);
                *(undefined1 *)(puVar4 + 1) = local_58;
                *(int *)((int)local_3c + 4) = *(int *)((int)local_3c + 4) + 8;
                pbVar8 = local_20;
                goto LAB_10f99968;
              }
              *puVar4 = &DAT_1201fc98;
              *(undefined1 *)(puVar4 + 1) = local_58;
            }
            *(int *)(local_1c + 0x1c) = *(int *)(local_1c + 0x1c) + 8;
          }
LAB_10f99968:
          pbVar11 = pbVar8 + -0xc;
          if ((-1 < *(int *)pbVar11) && (iVar6 = FUN_10c3dad0(pbVar11), iVar6 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar8 + -4));
            FUN_10c3d900(pbVar11);
          }
          pbVar11 = local_5c;
          pbVar8 = local_5c + -0xc;
          if ((-1 < *(int *)pbVar8) && (iVar6 = FUN_10c3dad0(pbVar8), iVar6 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar11 + -4));
            FUN_10c3d900(pbVar8);
          }
          pbVar11 = local_14;
          pbVar8 = local_14 + -0xc;
          if ((-1 < *(int *)pbVar8) && (iVar6 = FUN_10c3dad0(pbVar8), iVar6 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar11 + -4));
            FUN_10c3d900(pbVar8);
          }
        }
        pbVar11 = _Dst + -0xc;
        if ((-1 < *(int *)pbVar11) && (iVar6 = FUN_10c3dad0(pbVar11), iVar6 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(_Dst + -4));
          FUN_10c3d900(pbVar11);
        }
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 4))();
        }
        local_30 = local_30 + 1;
        iVar6 = local_44;
      } while (local_30 < local_40);
    }
  }
  *(undefined4 *)(local_1c + 4) = 1;
  *(float *)(local_1c + 0x10) = local_2c;
  *(float *)(local_1c + 0xc) = local_28;
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (local_5 != '\0') {
    piVar13 = *(int **)(iVar6 + 4);
    local_48 = local_1c;
    if (piVar13 == *(int **)(iVar6 + 8)) {
      FUN_108716d0(piVar13,&local_48,&local_a,1,1);
    }
    else {
      *piVar13 = local_1c;
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 4;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xb0);
    local_4c = FUN_10f6ac20;
    if (puVar4 == *(undefined4 **)(param_1 + 0xb4)) {
      FUN_108716d0(puVar4,&local_4c,&local_b,1,1);
    }
    else {
      *puVar4 = FUN_10f6ac20;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xf8);
    local_50 = FUN_10f6a950;
    if (puVar4 == *(undefined4 **)(param_1 + 0xfc)) {
      FUN_108716d0(puVar4,&local_50,&local_c,1,1);
    }
    else {
      *puVar4 = FUN_10f6a950;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
    }
    puVar4 = *(undefined4 **)(param_1 + 200);
    local_54 = FUN_10f6abb0;
    if (puVar4 == *(undefined4 **)(param_1 + 0xcc)) {
      FUN_108716d0(puVar4,&local_54,&local_d,1,1);
    }
    else {
      *puVar4 = FUN_10f6abb0;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
    }
    FUN_10f5bd40(6,&DAT_10f6ac50);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}


// ================= TdrText_FieldLabelChar @ 1024a1e0 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall
TdrText_FieldLabelChar(undefined4 param_1,undefined4 param_2,char param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x2b);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,&DAT_11da4eb8,param_4,(int)param_3);
  }
  return;
}


// ================= FUN_10aa40c0 @ 10aa40c0 =================

/* [RE-AUTO c0]
   strings:
     ""CNpcLeaveCombo""
     ""RotateAngle"" */

void FUN_10aa40c0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("NeedRotate","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CNpcLeaveCombo","");
  FUN_1048b080(local_1c,local_34,2,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("StateName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcLeaveCombo","");
  FUN_1048b080(local_34,local_1c,0,1,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("RotateAngle","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcLeaveCombo","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10aa65c0 @ 10aa65c0 =================

/* [RE-AUTO c0]
   strings:
     ""CSceneObjectHide"" */

void FUN_10aa65c0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("Hide","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CSceneObjectHide","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_10fd05d0 @ 10fd05d0 =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10fd05d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}


// ================= FUN_10f5b8d0 @ 10f5b8d0 =================

/* [RE-AUTO c0] */

bool __fastcall FUN_10f5b8d0(int param_1)

{
  return ((byte)*(undefined4 *)(param_1 + 0x80) & 0x84) == 0x84;
}


// ================= FUN_100b62c0 @ 100b62c0 =================

/* [RE-AUTO c0]
   calls: memcpy */

void __thiscall FUN_100b62c0(int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 *_Dst;
  size_t _Size;
  uint local_8;
  
  _Size = (int)param_3 - (int)param_2;
  local_8 = _Size + 1;
  if (local_8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100b73e0();
  }
  if (0x10 < local_8) {
    iVar1 = FUN_100b6d60(local_8,&local_8);
    param_1[5] = iVar1;
    param_1[4] = iVar1;
    *param_1 = iVar1 + local_8;
  }
  _Dst = (undefined1 *)param_1[5];
  if (param_3 != param_2) {
    pvVar2 = memcpy(_Dst,param_2,_Size);
    _Dst = (undefined1 *)((int)pvVar2 + _Size);
  }
  param_1[4] = (int)_Dst;
  *_Dst = 0;
  return;
}


// ================= FUN_10f3a580 @ 10f3a580 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_10f3a580(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (0x23 < param_3) {
    CInfoRecord__GetModelString(&DAT_11d9d32b);
    return param_2;
  }
  param_1 = param_1 + param_3 * 4;
  if (-1 < *(int *)(*(int *)(param_1 + 0x380) + -0xc)) {
    iVar1 = *(int *)(param_1 + 0x380);
    *param_2 = iVar1;
    FUN_10c3dab0(iVar1 + -0xc);
    return param_2;
  }
  *param_2 = (int)&DAT_1201fc98;
  return param_2;
}


// ================= FUN_10f1e300 @ 10f1e300 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e300(int param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_11cc2be4;
  if (param_4 == '\x01') {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) & 0xffffffbf;
    param_3 = 0x43000000;
    param_2 = CONCAT44(uVar1,uVar1);
  }
  else {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) | 0x40;
  }
  *(undefined8 *)(param_1 + 0x22e8) = param_2;
  *(undefined4 *)(param_1 + 0x22f0) = param_3;
  return;
}


// ================= FUN_10aa2990 @ 10aa2990 =================

/* [RE-AUTO c0]
   strings:
     ""CEntityPursuitTarget""
     ""MinSpeed""
     ""RunSequence""
     ""Attachment""
     ""MinDistance""
     ""Offset""
     ""FailReason"" */

void FUN_10aa2990(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("MaxSpeed","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_1c,local_34,0,2,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("MinSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("AnimMoveSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,2,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,3);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("RunSequence","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,4,1,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("Attachment","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,7,1,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("MinDistance","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,5,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("Offset","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,6,0,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("FailReason","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityPursuitTarget","");
  FUN_1048b080(local_34,local_1c,8,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10aa5c00 @ 10aa5c00 =================

/* [RE-AUTO c0]
   strings:
     ""CNpcStartCombo"" */

void FUN_10aa5c00(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("ComboGroupID","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CNpcStartCombo","");
  FUN_1048b080(local_1c,local_34,0,5,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_1048b080 @ 1048b080 =================

/* [RE-AUTO c0] */

undefined4 FUN_1048b080(void)

{
  return DAT_123bb918;
}


// ================= FUN_113980d0 @ 113980d0 =================

/* [RE-AUTO c0] */

void FUN_113980d0(void)

{
  FUN_114d8080();
  return;
}


// ================= FUN_11071600 @ 11071600 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_11071600(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_10c3ed10();
  if ((param_2 != 0) && (param_3 != 0)) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_11071580(param_2);
    }
    iVar2 = FUN_11072f20(&param_2);
    if (iVar2 != param_1 + 0x50) {
      iVar2 = *(int *)(iVar2 + 0x28);
      iVar3 = FUN_10df25b0(&param_3);
      if (iVar3 != iVar2) {
        uVar1 = *(undefined4 *)(iVar3 + 0x28);
        FUN_10c3ed20();
        return uVar1;
      }
    }
  }
  FUN_10c3ed20();
  return 0;
}


// ================= FUN_104f6f60 @ 104f6f60 =================

/* [RE-AUTO c0] */

void __fastcall FUN_104f6f60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return;
}


// ================= FUN_10f595c0 @ 10f595c0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f595c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 0x10c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
      (**(code **)(*piVar2 + 0xfc))(param_2,param_3);
      (**(code **)(*piVar2 + 0x5c))();
      (**(code **)(*piVar2 + 0x54))();
    }
  }
  return;
}


// ================= FUN_1053b770 @ 1053b770 =================

/* [RE-AUTO c0] */

void __thiscall FUN_1053b770(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_48;
  local_44 = 0;
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
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
  }
  if ((iVar3 == param_1) || (*param_2 < *(uint *)(iVar3 + 0x10))) {
    local_28 = *param_2;
    local_30 = local_40;
    local_14 = local_24;
    local_40[0] = 0;
    local_2c = local_30;
    local_10 = local_14;
    FUN_100b62c0(local_30,local_30);
    FUN_1053e2b0(&stack0xffffffb4,iVar3,&local_30);
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_10);
    }
    if ((local_2c != local_40) && (local_2c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_2c);
    }
  }
  FUN_11a89daa();
  return;
}


// ================= FUN_110b1ad0 @ 110b1ad0 =================

/* [RE-AUTO c0] */

void __fastcall FUN_110b1ad0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_11cc06d8;
  iVar2 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x7c);
  puVar3 = (undefined8 *)(param_1 + 400);
  do {
    *puVar4 = 2;
    puVar4 = puVar4 + 1;
    puVar3[-0x15] = uVar1;
    *puVar3 = uVar1;
    *(undefined1 *)(param_1 + 0xd0 + iVar2) = 0;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x15);
  return;
}


// ================= FUN_10f61a70 @ 10f61a70 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10f61a70(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  return;
}


// ================= FUN_10f02dc0 @ 10f02dc0 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10f02dc0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1b8))(0);
  if (iVar1 != 0) {
    CAvatarInfo__BindSkinAttachments(iVar1,param_1 + 0x2290);
  }
  return;
}


// ================= FUN_10f69a40 @ 10f69a40 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f69a40(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x20);
  }
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x28) = *param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x14) = *(undefined4 *)(param_2 + 0x14);
    FUN_10f6a610(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18));
  }
  return;
}


// ================= FUN_10ef9bd0 @ 10ef9bd0 =================

/* [RE-AUTO c0] */

undefined1 __fastcall FUN_10ef9bd0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x19df);
}


// ================= FUN_10efa230 @ 10efa230 =================

/* [RE-AUTO c0] */

void FUN_10efa230(void)

{
  FUN_10fd7b10();
  return;
}


// ================= FUN_1106c030 @ 1106c030 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_1106c030(int param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = true;
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = param_1;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar2;
      bVar4 = *param_3 < *(uint *)(iVar3 + 0x10);
      if (bVar4) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
    } while (iVar2 != 0);
  }
  if (bVar4) {
    iVar5 = iVar3;
    if (iVar3 == *(int *)(param_1 + 8)) goto LAB_1106c07a;
    FUN_1106af10();
  }
  iVar5 = iVar2;
  if (*param_3 <= *(uint *)(iVar3 + 0x10)) {
    *param_2 = iVar3;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1106c07a:
  piVar1 = (int *)FUN_1106b760(&param_3,iVar3,param_3,iVar5,0);
  *param_2 = *piVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


// ================= _strlwr @ EXTERNAL:000001f1 =================
// <decompile failed>

// ================= FUN_102a4760 @ 102a4760 =================

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iTypeID]"" */

void __thiscall
FUN_102a4760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iTypeID]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}


// ================= TdrDebugFormat_VarsList16 @ 10273da0 =================

/* WARNING: Removing unreachable block (ram,0x10273e1f) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nCount]""
     ""[astVars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TdrDebugFormat_VarsList16(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_WriteIndent(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVars]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10273930(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ================= TdrText_ArrayElemLabel @ 1024a230 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

void __fastcall
TdrText_ArrayElemLabel
          (undefined4 param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x43);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[%u]%c",param_4,param_5,(int)param_3);
  }
  return;
}


// ================= TdrText_ArrayHeader @ 1024a3b0 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[0 : %I64i]:"" */

void __fastcall
TdrText_ArrayHeader(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                   ,int param_6)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x9d);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    FUN_1010c010(param_1,"%s[0 : %I64i]:",param_4,param_5 + -1,param_6 - (uint)(param_5 == 0));
  }
  return;
}


// ================= FUN_102713d0 @ 102713d0 =================

/* [RE-AUTO c0] */

void __thiscall
FUN_102713d0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f80,&DAT_11da0cf4,(double)*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f88,&DAT_11da0cf4,
                                (double)param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da9f84,&DAT_11da0cf4,(double)param_1[2]);
    }
  }
  return;
}


// ================= FUN_1053b850 @ 1053b850 =================

/* [RE-AUTO c0]
   calls: puts, exit, memmove
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_1053b850(uint *param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *_Dst;
  uint uVar5;
  size_t _Size;
  uint local_c;
  uint *local_8;
  
  uVar5 = param_5;
  uVar3 = (int)(param_1[1] - *param_1) >> 2;
  local_8 = param_1;
  local_c = param_5;
  if (0x3fffffff - uVar3 < param_5) {
    param_5 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_1053de50();
  }
  puVar1 = &param_5;
  if (uVar3 <= param_5) {
    puVar1 = &local_c;
  }
  uVar4 = *puVar1 + uVar3;
  if ((0x3fffffff < uVar4) || (uVar4 < uVar3)) {
    uVar4 = 0x3fffffff;
  }
  if (uVar4 < 0x40000000) {
    if (uVar4 == 0) {
      local_c = (int)param_2 - (int)*param_1;
      param_5 = 0;
      if (local_c == 0) {
        _Dst = (undefined4 *)0x0;
      }
      else {
        pvVar2 = memmove((void *)0x0,(void *)*param_1,local_c);
        _Dst = (undefined4 *)((int)pvVar2 + local_c);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *_Dst = *param_3;
        _Dst = _Dst + 1;
      }
      if ((param_6 == '\0') && (_Size = local_8[1] - (int)param_2, _Size != 0)) {
        pvVar2 = memmove(_Dst,param_2,_Size);
        _Dst = (undefined4 *)(_Size + (int)pvVar2);
      }
      puVar1 = local_8;
      if (*local_8 != 0) {
        FUN_10c3d5d0(*local_8);
      }
      *puVar1 = param_5;
      puVar1[1] = (uint)_Dst;
      puVar1[2] = param_5;
      return;
    }
    param_5 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar4 * 4);
  }
  param_5 = uVar3;
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// ================= CPetSupportCatSkillInfo::FindSkillEntryByKey @ 10bf1a20 =================

/* [RE-R1]
   calls: CPetSupportCatSkillInfo::GetManagers
   strings:
     ""CPetSupportCatSkillInfo"" */

undefined4 CPetSupportCatSkillInfo__FindSkillEntryByKey(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSupportCatSkillInfo__FindInfoByKey(0,"CPetSupportCatSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}


// ================= FUN_10aa3650 @ 10aa3650 =================

/* [RE-AUTO c0]
   strings:
     ""CNpcGetClientTimeTable"" */

void FUN_10aa3650(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("Interesting","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CNpcGetClientTimeTable","");
  FUN_1048b080(local_1c,local_34,0,1,1);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_10fb8080 @ 10fb8080 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10fb8080(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar6 = *(int *)(param_1 + 0xd8);
  do {
    if (iVar6 == param_1 + 0xd0) {
      uVar7 = 0;
LAB_10fb811e:
      pbVar8 = param_2 + -0xc;
      if ((-1 < *(int *)pbVar8) && (iVar6 = FUN_10c3dad0(pbVar8), iVar6 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
        FUN_10c3d900(pbVar8);
      }
      return uVar7;
    }
    if (*(int *)(iVar6 + 0x20) != 0) {
      pbVar3 = (byte *)FUN_10f57110();
      pbVar8 = param_2;
      do {
        bVar1 = *pbVar8;
        bVar9 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_10fb80d8:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_10fb80dd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar9 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_10fb80d8;
        pbVar8 = pbVar8 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10fb80dd:
      if (uVar4 == 0) {
        uVar7 = *(undefined4 *)(iVar6 + 0x20);
        goto LAB_10fb811e;
      }
    }
    iVar5 = *(int *)(iVar6 + 0xc);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar6 + 4);
      if (iVar6 == *(int *)(iVar5 + 0xc)) {
        do {
          iVar6 = iVar5;
          iVar5 = *(int *)(iVar6 + 4);
        } while (iVar6 == *(int *)(iVar5 + 0xc));
      }
      if (*(int *)(iVar6 + 0xc) != iVar5) {
        iVar6 = iVar5;
      }
    }
    else {
      for (iVar2 = *(int *)(iVar5 + 8); iVar6 = iVar5, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        iVar5 = iVar2;
      }
    }
  } while( true );
}


// ================= CPetAddGroupBuff::RegisterNodeParams @ 10aa5ed0 =================

/* [RE-R1]
   strings:
     ""GroupId""
     ""CPetAddGroupBuff"" */

void CPetAddGroupBuff__RegisterNodeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("GroupId","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CPetAddGroupBuff","");
  FUN_1048b080(local_1c,local_34,0,5,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("InputBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CPetAddGroupBuff","");
  FUN_1048b080(local_34,local_1c,1,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10aa3140 @ 10aa3140 =================

/* [RE-AUTO c0]
   strings:
     ""TargetPos""
     ""CLMGRotateToPos""
     ""MinAngle""
     ""QuickReturn""
     ""FailReason"" */

void FUN_10aa3140(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetPos","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CLMGRotateToPos","");
  FUN_1048b080(local_1c,local_34,0);
  FUN_1048b250();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("MinAngle","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CLMGRotateToPos","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("QuickReturn","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CLMGRotateToPos","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("FailReason","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CLMGRotateToPos","");
  FUN_1048b080(local_34,local_1c,3,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10fdbb90 @ 10fdbb90 =================

/* [RE-AUTO c0] */

undefined4 FUN_10fdbb90(void)

{
  char cVar1;
  
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


// ================= FUN_10f61a80 @ 10f61a80 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10f61a80(int *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_10c3d5d0(param_1[0xb]);
  }
  if (param_1[8] != 0) {
    FUN_10c3d5d0(param_1[8]);
  }
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  return;
}


// ================= FUN_10f19240 @ 10f19240 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10f19240(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10f19242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))();
  return;
}


// ================= FUN_102850c0 @ 102850c0 =================

/* [RE-AUTO c0]
   strings:
     ""[dwAttrID]""
     ""[wType]""
     ""[stValue]"" */

void __thiscall FUN_102850c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwAttrID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wType]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldLabelChar(param_4,"[stValue]",extraout_ECX);
      if (iVar1 == 0) {
        if (param_3 < 0) {
          TdrDebugFormat_Union_BaseOrBonus(*(undefined2 *)(param_1 + 1),0,param_2,param_3,param_4);
          return;
        }
        TdrDebugFormat_Union_BaseOrBonus(*(undefined2 *)(param_1 + 1),0,param_2,param_3 + 1,param_4)
        ;
      }
    }
  }
  return;
}


// ================= FUN_107d6b80 @ 107d6b80 =================

/* [RE-AUTO c0] */

void FUN_107d6b80(void)

{
  return;
}


// ================= FUN_10fdc220 @ 10fdc220 =================

/* [RE-AUTO c0]
   strings:
     ""PLInjurySignal""
     ""PLFlying""
     ""_SWORD"" */

void FUN_10fdc220(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar3;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  FUN_10f57330("PLInjurySignal",param_5);
  FUN_10f57100();
  if (param_4 == '\x01') {
    FUN_10f57330("PLFlying",param_6);
    FUN_10f57100();
  }
  FUN_10fb71a0(param_2,param_3);
  uVar1 = FUN_10f57110();
  CInfoRecord__GetModelString(uVar1);
  piVar3 = (int *)(local_18 + -0xc);
  if (*piVar3 < 0) {
    local_8 = &DAT_1201fc98;
  }
  else {
    local_8 = local_18;
    FUN_10c3dab0(piVar3);
  }
  FUN_10a4c990("_SWORD",6);
  if (local_18 != local_8) {
    if (*piVar3 < 0) {
      if (-1 < *(int *)(local_8 + -0xc)) {
LAB_10fdc2f4:
        local_18 = local_8;
        FUN_10c3dab0(local_8 + -0xc);
      }
    }
    else {
      if (-1 < *(int *)(local_8 + -0xc)) {
        FUN_1083ac70();
        goto LAB_10fdc2f4;
      }
      FUN_1083ac70();
      local_18 = local_8;
    }
  }
  piVar3 = (int *)(local_8 + -0xc);
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_8 + -4));
    FUN_10c3d900(piVar3);
  }
  uVar1 = FUN_10f57110();
  CInfoRecord__GetModelString(uVar1);
  piVar3 = (int *)(local_14 + -0xc);
  if (*piVar3 < 0) {
    local_c = &DAT_1201fc98;
  }
  else {
    local_c = local_14;
    FUN_10c3dab0(piVar3);
  }
  FUN_10a4c990("_SWORD",6);
  if (local_14 != local_c) {
    if (*piVar3 < 0) {
      if (-1 < *(int *)(local_c + -0xc)) {
LAB_10fdc3b7:
        local_14 = local_c;
        FUN_10c3dab0(local_c + -0xc);
      }
    }
    else {
      if (-1 < *(int *)(local_c + -0xc)) {
        FUN_1083ac70();
        goto LAB_10fdc3b7;
      }
      FUN_1083ac70();
      local_14 = local_c;
    }
  }
  piVar3 = (int *)(local_c + -0xc);
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
    FUN_10c3d900(piVar3);
  }
  FUN_10f57330("PLInjurySignal",local_14);
  FUN_10f57080();
  uVar1 = extraout_ECX;
  if (param_4 != '\x01') goto LAB_10fdc50d;
  uVar1 = FUN_10f57110();
  CInfoRecord__GetModelString(uVar1);
  piVar3 = (int *)(local_1c + -0xc);
  if (*piVar3 < 0) {
    local_10 = &DAT_1201fc98;
  }
  else {
    local_10 = local_1c;
    FUN_10c3dab0(piVar3);
  }
  FUN_10a4c990("_SWORD",6);
  if (local_1c != local_10) {
    if (*piVar3 < 0) {
      if (-1 < *(int *)(local_10 + -0xc)) {
LAB_10fdc497:
        local_1c = local_10;
        FUN_10c3dab0(local_10 + -0xc);
      }
    }
    else {
      if (-1 < *(int *)(local_10 + -0xc)) {
        FUN_1083ac70();
        goto LAB_10fdc497;
      }
      FUN_1083ac70();
      local_1c = local_10;
    }
  }
  piVar3 = (int *)(local_10 + -0xc);
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
    FUN_10c3d900(piVar3);
  }
  FUN_10f57330("PLFlying",local_1c);
  FUN_10f57080();
  piVar3 = (int *)(local_1c + -0xc);
  uVar1 = extraout_ECX_00;
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), uVar1 = extraout_ECX_01, iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
    FUN_10c3d900(piVar3);
    uVar1 = extraout_ECX_02;
  }
LAB_10fdc50d:
  FUN_10f56fa0(local_18,uVar1,param_3);
  FUN_10fb71a0();
  piVar3 = (int *)(local_14 + -0xc);
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_14 + -4));
    FUN_10c3d900(piVar3);
  }
  piVar3 = (int *)(local_18 + -0xc);
  if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_18 + -4));
    FUN_10c3d900(piVar3);
  }
  return;
}


// ================= FUN_10aa6870 @ 10aa6870 =================

/* [RE-AUTO c0]
   strings:
     ""CSetTimerEvent""
     ""Event"" */

void FUN_10aa6870(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0(&DAT_11dbb648,&DAT_11dbb64c);
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CSetTimerEvent","");
  FUN_1048b080(local_1c,local_34,0,2,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("Event","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CSetTimerEvent","");
  FUN_1048b080(local_34,local_1c,1,1,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0(&DAT_11dbb71c,&DAT_11dbb720);
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CSetTimerEvent","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("LoopCount","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CSetTimerEvent","");
  FUN_1048b080(local_34,local_1c,4,6,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0(&DAT_11cc0a78,&DAT_11cc0a7e);
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CSetTimerEvent","");
  FUN_1048b080(local_34,local_1c,3,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10f1e260 @ 10f1e260 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e260(int param_1,float param_2)

{
  if ((DAT_11de9890 <= param_2) && (param_2 <= DAT_11de9990)) {
    *(float *)(param_1 + 0x229c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x229c) = 0x3f800000;
  return;
}


// ================= FUN_10fd9890 @ 10fd9890 =================

/* [RE-AUTO c0]
   calls: strncmp */

undefined4 __thiscall FUN_10fd9890(int param_1,char *param_2)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *_Str2;
  size_t _MaxCount;
  undefined4 local_8;
  
  if (param_2 != (char *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0xe8);
    local_8 = 0;
    uVar3 = (uint)((int)*(undefined4 **)(param_1 + 0xec) + (3 - (int)puVar4)) >> 2;
    uVar5 = 0;
    if (*(undefined4 **)(param_1 + 0xec) < puVar4) {
      uVar3 = 0;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        _MaxCount = 100;
        _Str2 = param_2;
        _Str1 = (char *)(**(code **)(*(int *)*puVar4 + 8))();
        iVar1 = strncmp(_Str1,_Str2,_MaxCount);
        if (iVar1 == 0) {
          local_8 = *puVar4;
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
        uVar2 = local_8;
      } while (uVar5 != uVar3);
    }
    return uVar2;
  }
  return 0;
}


// ================= FUN_10a4c990 @ 10a4c990 =================

/* [RE-AUTO c0]
   calls: memcpy */

void __thiscall FUN_10a4c990(int *param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    if (*(int *)(*param_1 + -0xc) < 2) {
      iVar2 = *param_1;
      if (*(int *)(iVar2 + -8) + param_3 <= *(uint *)(iVar2 + -4)) {
        _Dst = (void *)(*(int *)(iVar2 + -8) + iVar2);
        if (_Dst != param_2) {
          memcpy(_Dst,param_2,param_3);
        }
        *(int *)(*param_1 + -8) = *(int *)(*param_1 + -8) + param_3;
        *(undefined1 *)(*param_1 + *(int *)(*param_1 + -8)) = 0;
        return;
      }
    }
    iVar2 = *param_1;
    piVar1 = (int *)(iVar2 + -0xc);
    FUN_10a4c8f0(iVar2,*(undefined4 *)(iVar2 + -8),param_2,param_3);
    if ((-1 < *piVar1) && (iVar3 = FUN_10c3dad0(piVar1), iVar3 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar2 + -4));
      FUN_10c3d900(piVar1);
    }
  }
  return;
}


// ================= FUN_11318860 @ 11318860 =================

/* [RE-AUTO c0] */

int __fastcall FUN_11318860(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x14);
  }
  return 0;
}


// ================= FUN_10aa33e0 @ 10aa33e0 =================

/* [RE-AUTO c0]
   strings:
     ""CLocalPlayerGotoState"" */

void FUN_10aa33e0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("StateName","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CLocalPlayerGotoState","");
  FUN_1048b080(local_1c,local_34,0,1,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_10aa46b0 @ 10aa46b0 =================

/* [RE-AUTO c0] */

void FUN_10aa46b0(void)

{
  return;
}


// ================= FUN_10fdc130 @ 10fdc130 =================

/* [RE-AUTO c0] */

int __fastcall FUN_10fdc130(int param_1)

{
  return param_1 + 0x44;
}


// ================= FUN_10849e90 @ 10849e90 =================

/* [RE-AUTO c0]
   calls: CTattooInfo::GetManagers
   strings:
     ""CTattooInfo"" */

undefined4 FUN_10849e90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcf984;
  puVar2 = (undefined4 *)CTattooInfo__GetManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CTattooInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c75d4 & 1) == 0) {
        DAT_123c75d4 = DAT_123c75d4 | 1;
        FUN_108542b0();
        FUN_11a8911f(&LAB_11c72c00);
      }
      puVar2 = &DAT_123c75d8;
    }
  }
  if (((param_1 != -1) && (((param_1 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
     ((param_1 = param_1 - puVar2[0xc], -1 < param_1 && (param_1 < (int)puVar2[9])))) {
    iVar1 = *(int *)(puVar2[8] + (param_1 / (int)puVar2[10]) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % (int)puVar2[10]) * 4);
    }
  }
  return 0;
}


// ================= FUN_10f56e60 @ 10f56e60 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_10f56e60(int *param_1,int *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int *local_8;
  
  local_8 = param_1;
  if (*(int *)(*param_2 + -0xc) < 0) {
    puVar9 = &DAT_1201fc98;
  }
  else {
    puVar9 = (undefined1 *)*param_2;
    FUN_10c3dab0(puVar9 + -0xc);
  }
  iVar4 = FUN_10f571d0(puVar9);
  piVar7 = (int *)(puVar9 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_10c3dad0(piVar7), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar9 + -4));
    FUN_10c3d900(piVar7);
  }
  *param_1 = iVar4;
  if (iVar4 == 0) {
    if (*(int *)(*param_2 + -0xc) < 0) {
      puVar9 = &DAT_1201fc98;
    }
    else {
      puVar9 = (undefined1 *)*param_2;
      FUN_10c3dab0(puVar9 + -0xc,puVar9);
    }
    local_14 = FUN_10f57120(puVar9);
    pcVar8 = (char *)*param_2;
    pcVar6 = pcVar8 + 1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_10c3da60(pcVar8 + (1 - (int)pcVar6));
    piVar7 = local_8;
    *local_8 = iVar4;
    pcVar8[iVar4 - (int)pcVar6] = '\0';
    pcVar6 = (char *)*param_2;
    pcVar8 = (char *)*local_8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_10 = *local_8;
    puVar2 = &DAT_1203cd08;
    puVar3 = DAT_1203cd0c;
    while (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      if (local_14 < *(int *)(puVar3 + 0x10)) {
        puVar3 = *(undefined **)(puVar3 + 8);
      }
      else {
        puVar3 = *(undefined **)(puVar3 + 0xc);
      }
    }
    FUN_10f64050(local_c,puVar2,&local_14,0,0);
    return piVar7;
  }
  return param_1;
}


// ================= FUN_10fd4710 @ 10fd4710 =================

/* [RE-AUTO c0] */

undefined1 __fastcall FUN_10fd4710(int param_1)

{
  return *(undefined1 *)(param_1 + 0x124);
}


// ================= FUN_10c3d900 @ 10c3d900 =================

/* [RE-AUTO c0] */

int FUN_10c3d900(int param_1)

{
  int iVar1;
  
  if (DAT_1202e864 == 0) {
    FUN_10c495f0();
  }
  if (param_1 != 0) {
    iVar1 = (*DAT_1202e83c)(param_1);
    LOCK();
    DAT_1202e828 = DAT_1202e828 + iVar1;
    UNLOCK();
    return iVar1;
  }
  return 0;
}


// ================= FUN_10f9c060 @ 10f9c060 =================

/* [RE-AUTO c0] */

void FUN_10f9c060(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 *in_stack_ffffff60;
  undefined4 in_stack_ffffff64;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_44;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  code *local_c;
  code *local_8;
  
  iVar4 = param_1;
  for (piVar8 = *(int **)(param_1 + 0x1c8); piVar8 != *(int **)(param_1 + 0x1cc);
      piVar8 = piVar8 + 1) {
    if (*(int *)(*piVar8 + 4) == 0) goto LAB_10f9c549;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  FUN_10f9bf80(iVar4);
  puVar1 = *(undefined4 **)(iVar4 + 0xb0);
  local_8 = FUN_10f6fe20;
  if (puVar1 == *(undefined4 **)(iVar4 + 0xb4)) {
    FUN_108716d0(puVar1,&local_8,(int)&param_1 + 3,1,1);
  }
  else {
    *puVar1 = FUN_10f6fe20;
    *(int *)(iVar4 + 0xb0) = *(int *)(iVar4 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(iVar4 + 0xf8);
  local_8 = FUN_10f70050;
  if (puVar1 == *(undefined4 **)(iVar4 + 0xfc)) {
    FUN_108716d0(puVar1,&local_8,(int)&param_1 + 3,1,1);
  }
  else {
    *puVar1 = FUN_10f70050;
    *(int *)(iVar4 + 0xf8) = *(int *)(iVar4 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(iVar4 + 200);
  local_8 = FUN_10f9bc80;
  if (puVar1 == *(undefined4 **)(iVar4 + 0xcc)) {
    FUN_108716d0(puVar1,&local_8,(int)&param_1 + 3,1,1);
  }
  else {
    *puVar1 = FUN_10f9bc80;
    *(int *)(iVar4 + 200) = *(int *)(iVar4 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9b8d0);
  FUN_10f60eb0();
  local_8 = (code *)0x0;
  local_c = FUN_10f9bd10;
  if (local_64 == local_60) {
    FUN_10f64330(local_64,&local_c,(int)&param_1 + 3,1,1);
  }
  else {
    if (local_64 != (undefined4 *)0x0) {
      *local_64 = FUN_10f9bd10;
      local_64[1] = 0;
    }
    local_64 = local_64 + 2;
  }
  iVar9 = iVar4 + 0x124;
  iVar5 = *(int *)(iVar4 + 0x128);
  iVar3 = iVar9;
  if (*(int *)(iVar4 + 0x128) == 0) {
LAB_10f9c1d3:
    if (iVar3 == iVar9) goto LAB_10f9c224;
    param_1 = 4;
    iVar3 = FUN_10f5cd60(&param_1);
    iVar5 = *(int *)(iVar3 + 4);
    if (iVar5 == *(int *)(iVar3 + 8)) {
      FUN_10f64840(iVar5,&local_68,(int)&param_1 + 3,1,1);
    }
    else {
      if (iVar5 != 0) {
        FUN_10f60e30(&local_68);
      }
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 0x18;
    }
  }
  else {
    do {
      if (*(int *)(iVar5 + 0x10) < 4) {
        iVar2 = *(int *)(iVar5 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar5 + 8);
        iVar3 = iVar5;
      }
      iVar5 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != iVar9) {
      if (4 < *(int *)(iVar3 + 0x10)) {
        iVar3 = iVar9;
      }
      goto LAB_10f9c1d3;
    }
LAB_10f9c224:
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_10f64840(0,&local_68,(int)&param_1 + 3,1,1);
    iVar3 = local_18;
    FUN_10f5fc90((local_14 - local_18) / 0x18,(int)&param_1 + 3);
    uVar6 = FUN_10f5e810(iVar3,local_14,in_stack_ffffff64,(int)&param_1 + 3,0);
    uVar7 = FUN_10f5f2a0(local_38,4);
    FUN_10f5cc40(uVar7,uVar6);
    in_stack_ffffff60 = local_28;
    FUN_10f66cf0(&local_c,in_stack_ffffff60);
    iVar5 = local_24;
    FUN_10f5e540(local_20,local_24,0,(int)&param_1 + 3);
    if (iVar5 != 0) {
      FUN_10c3d5d0(iVar5);
    }
    FUN_10f5e540(local_30,local_34,0,(int)&param_1 + 3);
    if (local_34 != 0) {
      FUN_10c3d5d0(local_34);
    }
    FUN_10f5e540(local_14,iVar3,0,(int)&param_1 + 3);
    if (iVar3 != 0) {
      FUN_10c3d5d0(iVar3);
    }
  }
  FUN_10f60eb0();
  local_8 = (code *)0x0;
  local_c = FUN_10f9be30;
  if (local_4c == local_48) {
    FUN_10f64330(local_4c,&local_c,(int)&param_1 + 3,1,1);
  }
  else {
    if (local_4c != (undefined4 *)0x0) {
      *local_4c = FUN_10f9be30;
      local_4c[1] = 0;
    }
    local_4c = local_4c + 2;
  }
  iVar5 = *(int *)(iVar4 + 0x128);
  iVar3 = iVar9;
  if (*(int *)(iVar4 + 0x128) == 0) {
LAB_10f9c3a5:
    if (iVar3 != iVar9) {
      param_1 = 5;
      iVar5 = FUN_10f5cd60(&param_1);
      iVar4 = *(int *)(iVar5 + 4);
      if (iVar4 == *(int *)(iVar5 + 8)) {
        FUN_10f64840(iVar4,&local_50,(int)&param_1 + 3,1,1);
      }
      else {
        if (iVar4 != 0) {
          FUN_10f60e30(&local_50);
        }
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 0x18;
      }
      goto LAB_10f9c509;
    }
  }
  else {
    do {
      if (*(int *)(iVar5 + 0x10) < 5) {
        iVar4 = *(int *)(iVar5 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar5 + 8);
        iVar3 = iVar5;
      }
      iVar5 = iVar4;
    } while (iVar4 != 0);
    if (iVar3 != iVar9) {
      if (5 < *(int *)(iVar3 + 0x10)) {
        iVar3 = iVar9;
      }
      goto LAB_10f9c3a5;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_10f64840(0,&local_50,(int)&param_1 + 3,1,1);
  iVar4 = local_18;
  FUN_10f5fc90((local_14 - local_18) / 0x18,(int)&param_1 + 3);
  uVar6 = FUN_10f5e810(iVar4,local_14,in_stack_ffffff60,(int)&param_1 + 3,0);
  uVar7 = FUN_10f5f2a0(local_28,5);
  FUN_10f5cc40(uVar7,uVar6);
  FUN_10f66cf0(&local_c,local_38);
  FUN_10f5e540(local_30,local_34,0,(int)&param_1 + 3);
  if (local_34 != 0) {
    FUN_10c3d5d0(local_34);
  }
  FUN_10f5e540(local_20,local_24,0,(int)&param_1 + 3);
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  FUN_10f5e540(local_14,iVar4,0,(int)&param_1 + 3);
  if (iVar4 != 0) {
    FUN_10c3d5d0(iVar4);
  }
LAB_10f9c509:
  if (local_44 != 0) {
    FUN_10c3d5d0(local_44);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_68 != 0) {
    FUN_10c3d5d0(local_68);
  }
LAB_10f9c549:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}


// ================= FUN_10f1e010 @ 10f1e010 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e010(int param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\x01') {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) | 4;
  }
  *(undefined8 *)(param_1 + 0x22b8) = param_2;
  *(undefined4 *)(param_1 + 0x22c0) = param_3;
  *(undefined4 *)(param_1 + 0x2264) = 0;
  *(undefined4 *)(param_1 + 0x2268) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 0;
  *(undefined4 *)(param_1 + 0x227c) = 0;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  return;
}


// ================= FUN_10de9ff0 @ 10de9ff0 =================

/* [RE-AUTO c0] */

void FUN_10de9ff0(int *param_1)

{
  int *piVar1;
  undefined4 local_4cc [306];
  
  FUN_10b944a0();
  local_4cc[0] = 0x14;
  piVar1 = (int *)(**(code **)(*param_1 + 0x198))();
  (**(code **)(*piVar1 + 0x14))(local_4cc);
  FUN_10b94680();
  return;
}


// ================= TdrDebugFormat_ByteThenFloatSub @ 10271b90 =================

/* WARNING: Removing unreachable block (ram,0x10271ba0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void TdrDebugFormat_ByteThenFloatSub(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_WriteIndent(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,&DAT_11da9f98,(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = TdrDebugFormat_FloatField_at0xc(param_1,iVar1,param_3);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_3,&DAT_11da9f94,extraout_ECX), iVar1 == 0)) {
      if (param_2 < 0) {
        FUN_102713d0(param_1,param_2,param_3);
        return;
      }
      FUN_102713d0(param_1,param_2 + 1,param_3);
    }
  }
  return;
}


// ================= FUN_1083ac70 @ 1083ac70 =================

/* [RE-AUTO c0] */

void __fastcall FUN_1083ac70(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (-1 < *(int *)(*param_1 + -0xc)) {
    iVar1 = *param_1;
    piVar3 = (int *)(iVar1 + -0xc);
    if (-1 < *piVar3) {
      iVar2 = FUN_10c3dad0(piVar3);
      if (iVar2 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
        FUN_10c3d900(piVar3);
      }
    }
    *param_1 = (int)&DAT_1201fc98;
  }
  return;
}


// ================= FUN_10f70f40 @ 10f70f40 =================

/* [RE-AUTO c0] */

void FUN_10f70f40(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    param_1 = 0x29;
    cVar2 = FUN_10f5c510(&param_1,1);
    if ((cVar2 != '\0') && (*(int *)(iVar1 + 0x18) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x30);
    }
  }
  return;
}


// ================= FUN_107d0240 @ 107d0240 =================

/* [RE-AUTO c0] */

void __fastcall FUN_107d0240(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  return;
}


// ================= CAvatarInfo::ApplyAppearanceData @ 10f02190 =================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void __thiscall CAvatarInfo__ApplyAppearanceData(int *param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  size_t _Size;
  int aiStack_80 [8];
  int local_60 [9];
  char *local_3c;
  int local_38;
  undefined1 local_32;
  undefined1 local_31;
  undefined **local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined **local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  undefined1 local_11;
  int local_10;
  char *local_c;
  char local_5;
  
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  uVar13 = 1;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  do {
    local_10 = 0;
    if (uVar13 == 6) {
      local_10 = atoi(*(char **)(param_2 + 0x2c));
    }
    else {
      local_60[8] = param_2 + 0x4c;
      iVar10 = *(int *)(param_2 + 0x50);
      iVar7 = local_60[8];
      if (iVar10 != 0) {
        do {
          if (*(uint *)(iVar10 + 0x10) < uVar13) {
            iVar5 = *(int *)(iVar10 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar10 + 8);
            iVar7 = iVar10;
          }
          iVar10 = iVar5;
        } while (iVar5 != 0);
        if ((iVar7 != local_60[8]) && (uVar13 < *(uint *)(iVar7 + 0x10))) {
          iVar7 = local_60[8];
        }
      }
      if (iVar7 != local_60[8]) {
        local_10 = atoi(*(char **)(iVar7 + 0x28));
      }
    }
    iVar10 = local_10;
    if (local_10 != param_1[uVar13 + 0x899]) {
      local_28 = &PTR_FUN_11dc0b20;
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar6 = (undefined *)*DAT_123be968;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)CInfoManager__FindByName(&local_28,"CAvatarInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be73c = DAT_123be73c | 1;
          FUN_1053c940();
          FUN_11a8911f(&LAB_11c91650);
        }
        puVar6 = &DAT_123be704;
      }
      local_28 = &PTR_FUN_11da54a8;
      if ((iVar10 != -1) &&
         ((((iVar10 != 0 || (*(int *)(puVar6 + 0x30) == 0)) && (*(int *)(puVar6 + 0x28) != 0)) &&
          ((iVar7 = iVar10 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
           (iVar7 < *(int *)(puVar6 + 0x24))))))) {
        iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
        if ((iVar5 != 0) &&
           (iVar7 = *(int *)(iVar5 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4), iVar7 != 0)) {
          uVar11 = *(undefined4 *)(iVar7 + 0x2c);
          local_60[uVar13] = iVar7;
          piVar8 = (int *)CInfoRecord__GetModelString(uVar11);
          if (*(int *)(*piVar8 + -0xc) < 0) {
            local_18 = &DAT_1201fc98;
          }
          else {
            local_18 = (undefined1 *)*piVar8;
            FUN_10c3dab0(local_18 + -0xc);
          }
          FUN_10a79ae0(&local_18);
          FUN_10a4c990(&DAT_11d9f004,1);
          FUN_10a4c990(&DAT_11cbc0f0,3);
          iVar10 = local_38;
          piVar8 = (int *)(local_38 + -0xc);
          if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 - (*(int *)(iVar10 + -4) + 0xd);
            FUN_10c3d900(piVar8);
          }
          puVar1 = local_18;
          local_5 = '\0';
          cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_18,0);
          cVar3 = local_5;
          if ((cVar2 != '\0') &&
             (cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(puVar1), cVar3 = local_5
             , cVar2 != '\0')) {
            *(undefined1 *)(param_1 + 0x8ff) = 1;
            cVar3 = '\x01';
          }
          if (cVar3 != *(char *)(uVar13 + 0x2284 + (int)param_1)) {
            *(char *)(uVar13 + 0x2284 + (int)param_1) = cVar3;
            *(undefined1 *)(param_1 + 0x8ff) = 1;
          }
          piVar8 = (int *)(puVar1 + -0xc);
          iVar10 = local_10;
          if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar10 = local_10, iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 - (*(int *)(puVar1 + -4) + 0xd);
            FUN_10c3d900(piVar8);
            iVar10 = local_10;
          }
          goto LAB_10f0242b;
        }
      }
      if (*(char *)(uVar13 + 0x2284 + (int)param_1) != '\0') {
        *(undefined1 *)(uVar13 + 0x2284 + (int)param_1) = 0;
        *(undefined1 *)(param_1 + 0x8ff) = 1;
      }
    }
LAB_10f0242b:
    aiStack_80[uVar13] = iVar10;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 7);
  if ((char)param_1[0x8ff] != '\0') {
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = (int *)0x0;
    local_10 = 1;
    do {
      iVar10 = local_10;
      if (*(char *)((int)param_1 + local_10 + 0x2284) != '\0') {
        iVar7 = local_60[local_10];
        if (iVar7 == 0) {
          iVar7 = aiStack_80[local_10];
          local_30 = &PTR_FUN_11dc0b20;
          if ((DAT_123be984 & 1) == 0) {
            DAT_123be984 = DAT_123be984 | 1;
            StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CAvatarInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fd80);
          }
          puVar6 = (undefined *)*DAT_123be968;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)CInfoManager__FindByName(&local_30,"CAvatarInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be73c & 1) == 0) {
              DAT_123be708 = 0;
              DAT_123be718 = 0;
              uRam123be71c = 0;
              _DAT_123be720 = 0;
              DAT_123be724 = 0;
              DAT_123be73c = DAT_123be73c | 1;
              _DAT_123be704 = &PTR_FUN_11dc0d54;
              DAT_123be728 = _DAT_11de9ae0;
              DAT_123be72c = _UNK_11de9ae4;
              uRam123be730 = _UNK_11de9ae8;
              DAT_123be734 = _UNK_11de9aec;
              DAT_123be738 = 1;
              DAT_123be70c = puVar6;
              _DAT_123be710 = puVar6;
              _DAT_123be714 = puVar6;
              FUN_11a8911f(&LAB_11c91650);
            }
            puVar6 = &DAT_123be704;
          }
          local_30 = &PTR_FUN_11da54a8;
          if (((iVar7 == -1) ||
              (((iVar7 == 0 && (*(int *)(puVar6 + 0x30) != 0)) || (*(int *)(puVar6 + 0x28) == 0))))
             || ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), iVar7 < 0 ||
                 (*(int *)(puVar6 + 0x24) <= iVar7)))) {
LAB_10f02589:
            iVar7 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
            if (iVar5 == 0) goto LAB_10f02589;
            iVar7 = *(int *)(iVar5 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4);
          }
          if (iVar7 == 0) goto LAB_10f026fd;
        }
        local_3c = *(char **)(iVar7 + 0x2c);
        pcVar12 = &DAT_1201fc98;
        if (local_3c != (char *)0x0) {
          pcVar14 = local_3c;
          do {
            cVar3 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar3 != '\0');
          _Size = (int)pcVar14 - (int)(local_3c + 1);
          iVar10 = local_10;
          if (_Size != 0) {
            puVar9 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar9 = 1;
            local_c = (char *)(puVar9 + 3);
            puVar9[1] = _Size;
            puVar9[2] = _Size;
            local_c[_Size] = '\0';
            pcVar12 = local_c;
            iVar10 = local_10;
            if (local_c != local_3c) {
              memcpy(local_c,local_3c,_Size);
              pcVar12 = local_c;
              iVar10 = local_10;
            }
          }
        }
        piVar8 = (int *)(pcVar12 + -0xc);
        if (*(int *)(pcVar12 + -0xc) < 0) {
          local_c = &DAT_1201fc98;
        }
        else {
          local_c = pcVar12;
          FUN_10c3dab0(piVar8);
        }
        FUN_10a79ae0(&local_c);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar12 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
        if (local_20 == local_1c) {
          local_2a = 0;
          local_11 = 0;
          FUN_10af2cd0(local_20,&local_c,&local_11,1,1);
        }
        else {
          local_31 = 0;
          local_29 = 0;
          if (local_20 != (int *)0x0) {
            if (-1 < *(int *)(local_c + -0xc)) {
              *local_20 = (int)local_c;
              FUN_10c3dab0(*local_20 + -0xc);
              local_20 = local_20 + 1;
              goto LAB_10f026d0;
            }
            *local_20 = (int)&DAT_1201fc98;
          }
          local_20 = local_20 + 1;
        }
LAB_10f026d0:
        pcVar12 = local_c;
        piVar8 = (int *)(local_c + -0xc);
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar12 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
      }
LAB_10f026fd:
      local_10 = iVar10 + 1;
    } while (iVar10 + 1 < 7);
    (**(code **)(*(int *)param_1[3] + 0x1dc))(&local_24);
    if (param_3 != '\0') {
      (**(code **)(*param_1 + 0x4b0))(0);
      param_1[0x899] = 0;
      param_1[0x89a] = 0;
      param_1[0x89b] = 0;
      param_1[0x89c] = 0;
      param_1[0x89d] = 0;
      param_1[0x89e] = 0;
      param_1[0x89f] = 0;
      param_1[0x8a0] = 0;
      FUN_10f12f20(param_1[0x575]);
      FUN_10efd220();
      iVar10 = (**(code **)(*(int *)param_1[3] + 0x1b8))(0);
      if (iVar10 != 0) {
        CAvatarInfo__BindSkinAttachments(iVar10,param_1 + 0x8a4);
      }
      if (*(char *)((int)param_1 + 0x2405) != '\0') {
        *(undefined1 *)((int)param_1 + 0x240d) = 1;
      }
      *(undefined1 *)(param_1 + 0x8ff) = 0;
    }
    CryStringVector__Free(local_20,local_24,0,&local_32);
    if (local_24 != 0) {
      FUN_10c3d5d0(local_24);
    }
  }
  sVar4 = (**(code **)(*param_1 + 0x2ec))();
  if (sVar4 != 0) {
    if (*(char *)(param_2 + 0x8e) == '\0') {
      iVar10 = (**(code **)(*param_1 + 800))();
      if (iVar10 != 0) {
        piVar8 = (int *)(**(code **)(*param_1 + 800))();
        uVar11 = (**(code **)(*piVar8 + 0x1c8))();
        CAvatarInfo__UpdatePetOrMountController(uVar11);
        return;
      }
      CAvatarInfo__UpdatePetOrMountController(0);
    }
    else if (*(char *)(param_2 + 0x8d) == '\0') {
      *(undefined1 *)(param_1 + 0x8e3) = 0;
      piVar8 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 0x50))();
        (**(code **)(*piVar8 + 0x134))(0,0x3dcccccd);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x8e3) = 1;
      piVar8 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))();
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 0x50))();
        (**(code **)(*piVar8 + 0x134))(1,0x3dcccccd);
        return;
      }
    }
  }
  return;
}


// ================= FUN_10f59630 @ 10f59630 =================

/* [RE-AUTO c0] */

uint __thiscall FUN_10f59630(int param_1,byte *param_2)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 0x60);
  if (puVar5 == *(undefined4 **)(param_1 + 100)) {
    return in_EAX & 0xffffff00;
  }
  do {
    pbVar2 = &DAT_1203cce8;
    pbVar4 = param_2;
    if ((byte *)*puVar5 != (byte *)0x0) {
      pbVar2 = (byte *)*puVar5;
    }
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10f59673:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_10f59678;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10f59673;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10f59678:
    if (uVar3 == 0) {
      return 1;
    }
    puVar5 = puVar5 + 1;
    if (puVar5 == *(undefined4 **)(param_1 + 100)) {
      return uVar3 & 0xffffff00;
    }
  } while( true );
}


// ================= FUN_10d67730 @ 10d67730 =================

/* [RE-AUTO c0]
   calls: memset */

void FUN_10d67730(void)

{
  int *piVar1;
  int iVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [84];
  undefined1 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (piVar1 != (int *)0x0) {
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    local_8 = 0;
    memset(local_5c,0,0x54);
    FUN_10f1e4d0(&local_6c);
    iVar2 = 1;
    do {
      (**(code **)(*piVar1 + 0x578))(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    if ((int *)piVar1[3] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)piVar1[3] + 0x1b8))(0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x150))();
      }
    }
  }
  return;
}


// ================= FUN_10520070 @ 10520070 =================

/* [RE-AUTO c0] */

int __fastcall FUN_10520070(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_5;
  
  puVar1 = (undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x28) = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = param_1 + 0x18;
  **(undefined1 **)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x40) = param_1 + 0x30;
  *(int *)(param_1 + 0x44) = param_1 + 0x30;
  **(undefined1 **)(param_1 + 0x40) = 0;
  local_5 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = local_5;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 **)(param_1 + 0x54) = puVar1;
  *(undefined4 **)(param_1 + 0x58) = puVar1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  puVar1 = (undefined4 *)(param_1 + 100);
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = local_5;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 **)(param_1 + 0x6c) = puVar1;
  *(undefined4 **)(param_1 + 0x70) = puVar1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  return param_1;
}


// ================= FUN_10a9feb0 @ 10a9feb0 =================

/* [RE-AUTO c0]
   strings:
     ""CBTObjEnableItemListener"" */

void FUN_10a9feb0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("bEnable","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CBTObjEnableItemListener","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= TdrBuf_PutU8Z @ 1010c060 =================

/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

undefined4 __thiscall TdrBuf_PutU8Z(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xc4);
  }
  if ((uint)(param_1[2] - param_1[1]) < 2) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return 0;
}


// ================= CPetApplyGroupEffect::RegisterFlowNodePorts @ 10aa61d0 =================

/* [RE-R1]
   strings:
     ""GroupId""
     ""CPetApplyGroupEffect""
     ""TargetEntityID"" */

void CPetApplyGroupEffect__RegisterFlowNodePorts(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("GroupId","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CPetApplyGroupEffect","");
  FUN_1048b080(local_1c,local_34,0,5,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("InputBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CPetApplyGroupEffect","");
  FUN_1048b080(local_34,local_1c,1,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetEntityID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CPetApplyGroupEffect","");
  FUN_1048b080(local_34,local_1c,2,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10fdb820 @ 10fdb820 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10fdb820(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 600);
  do {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
    (**(code **)(*piVar1 + 0x110))(puVar3 + -8,iVar4);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
    uVar2 = (**(code **)(*piVar1 + 0xf8))(iVar4);
    *puVar3 = uVar2;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
    fVar5 = (float10)(**(code **)(*piVar1 + 0xf4))(iVar4);
    puVar3[1] = (float)fVar5;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 10;
  } while (iVar4 < 2);
  return;
}


// ================= FUN_10f3a2b0 @ 10f3a2b0 =================

/* WARNING: Removing unreachable block (ram,0x10f3a300) */
/* [RE-AUTO c0]
   calls: memmove */

void __fastcall FUN_10f3a2b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x8fc);
  if (iVar1 != 0) {
    FUN_1086c640();
    FUN_10c3d5d0(iVar1);
    *(undefined4 *)((int)param_1 + 0x8fc) = 0;
  }
  FUN_10f3a220();
  FUN_10f39d70(0);
  if (*(int *)(param_1 + 0x8a) != *(int *)((int)param_1 + 0x454)) {
    *(int *)((int)param_1 + 0x454) = *(int *)(param_1 + 0x8a);
  }
  *param_1 = DAT_11cc06d8;
  puVar2 = param_1;
  puVar3 = param_1 + 1;
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 4);
    puVar3 = (undefined8 *)((int)puVar3 + 4);
  }
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined4 *)((int)param_1 + 0x86c) = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)((int)param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  *(undefined4 *)((int)param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)((int)param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  *(undefined4 *)((int)param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined4 *)((int)param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x113) = 0;
  *(undefined4 *)((int)param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)((int)param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  *(undefined4 *)((int)param_1 + 0x8ac) = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined4 *)((int)param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined4 *)((int)param_1 + 0x8bc) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)((int)param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined4 *)((int)param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)((int)param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0;
  *(undefined4 *)((int)param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)((int)param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  *(undefined4 *)((int)param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  return;
}


// ================= FUN_1052c870 @ 1052c870 =================

/* [RE-AUTO c0]
   calls: CUnderclothesInfo::GetManagers
   strings:
     ""CUnderclothesInfo"" */

undefined4 FUN_1052c870(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0b08;
  puVar2 = (undefined4 *)CUnderclothesInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CUnderclothesInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123be610 & 1) == 0) {
        DAT_123be610 = DAT_123be610 | 1;
        FUN_1053cda0();
        FUN_11a8911f(&LAB_11c6ff90);
      }
      puVar2 = &DAT_123be5d8;
    }
  }
  if (((param_1 != -1) && (((param_1 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
     ((param_1 = param_1 - puVar2[0xc], -1 < param_1 && (param_1 < (int)puVar2[9])))) {
    iVar1 = *(int *)(puVar2[8] + (param_1 / (int)puVar2[10]) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % (int)puVar2[10]) * 4);
    }
  }
  return 0;
}


// ================= FUN_10516930 @ 10516930 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10516930(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_10c3d5d0(*(int *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_1051ff60(*(undefined4 *)(param_1 + 0x68));
    *(int *)(param_1 + 0x6c) = param_1 + 100;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x70) = param_1 + 100;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1051fc10(*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x54) = param_1 + 0x4c;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(int *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if ((iVar1 != param_1 + 0x30) && (iVar1 != 0)) {
    FUN_10c3d5d0(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != param_1 + 0x18) && (iVar1 != 0)) {
    FUN_10c3d5d0(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != param_1) && (iVar1 != 0)) {
    FUN_10c3d5d0(iVar1);
  }
  return;
}


// ================= TdrText_FieldScalar @ 1024a290 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert, _vsnprintf
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

int TdrText_FieldScalar(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5
                       )

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0x5b);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      uVar2 = _vsnprintf((char *)(*param_1 + param_1[1]),param_1[2] - param_1[1],param_5,
                         &stack0x00000018);
      if ((-1 < (int)uVar2) && (uVar2 < (uint)(param_1[2] - param_1[1]))) {
        param_1[1] = uVar2 + param_1[1];
        iVar1 = TdrBuf_PutU8Z(param_3);
        return iVar1;
      }
      iVar1 = -1;
    }
  }
  return iVar1;
}


// ================= FUN_11a894ef @ 11a894ef =================

/* [RE-AUTO c0] */

uint __fastcall FUN_11a894ef(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (uVar2 == param_2) {
    return uVar2;
  }
  if ((int)param_2 < 0) {
    uVar2 = FUN_11a8945e();
    return uVar2;
  }
  if (param_2 == 0) {
    return uVar2;
  }
  iVar1 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x20 - iVar1;
}


// ================= FUN_10f1e0a0 @ 10f1e0a0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e0a0(int param_1,float param_2,char param_3)

{
  if ((param_2 == 0.0) || (param_3 != '\0')) {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) & 0xfffffffd;
    *(undefined8 *)(param_1 + 0x22ac) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2290) = *(uint *)(param_1 + 0x2290) | 2;
    *(ulonglong *)(param_1 + 0x22ac) = (ulonglong)(uint)param_2;
  }
  *(undefined4 *)(param_1 + 0x22b4) = 0;
  *(undefined4 *)(param_1 + 0x2264) = 0;
  *(undefined4 *)(param_1 + 0x2268) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 0;
  *(undefined4 *)(param_1 + 0x227c) = 0;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  return;
}


// ================= FUN_10fdb8a0 @ 10fdb8a0 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10fdb8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  piVar3 = (int *)(param_1 + 600);
  do {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
    iVar2 = (**(code **)(*piVar1 + 0xf8))(local_8);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
      (**(code **)(*piVar1 + 0xec))(*piVar3,local_8);
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
      (**(code **)(*piVar1 + 0xf0))(piVar3[1],local_8);
    }
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
    (**(code **)(*piVar1 + 0x114))(piVar3 + -8,local_8);
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 10;
  } while (local_8 < 2);
  return;
}


// ================= FUN_116db5e0 @ 116db5e0 =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_116db5e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}

