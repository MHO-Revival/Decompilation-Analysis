
// ================= FUN_10fb2130 @ 10fb2130 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_10fb2130(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  int *local_c;
  undefined1 local_5;
  
  if (param_2 != param_1) {
    iVar2 = param_2[1];
    iVar4 = *param_2;
    iVar3 = *param_1;
    local_10 = (int *)((iVar2 - iVar4) / 0xc);
    local_c = local_10;
    if ((int *)((param_1[2] - iVar3) / 0xc) < local_10) {
      iVar2 = FUN_10fae000(&local_10,iVar4,iVar2);
      FUN_10f5e610(param_1[1],*param_1,0,(int)&param_2 + 3);
      if (*param_1 != 0) {
        FUN_10c3d5d0(*param_1);
      }
      *param_1 = iVar2;
      param_1[2] = iVar2 + (int)local_10 * 0xc;
    }
    else {
      piVar1 = (int *)((param_1[1] - iVar3) / 0xc);
      if (piVar1 < local_10) {
        iVar2 = ((int)piVar1 * 0xc) / 0xc;
        local_10 = param_1;
        if (0 < iVar2) {
          iVar4 = iVar4 - iVar3;
          local_10 = param_1;
          do {
            FUN_10fb1fe0(iVar4 + iVar3);
            iVar2 = iVar2 + -1;
            iVar3 = iVar3 + 0xc;
          } while (0 < iVar2);
        }
        param_1 = local_10;
        FUN_10faf2c0(*param_2 + ((local_10[1] - *local_10) / 0xc) * 0xc,param_2[1],local_10[1],
                     &local_5,0);
      }
      else {
        for (iVar2 = (iVar2 - iVar4) / 0xc; local_10 = param_1, 0 < iVar2; iVar2 = iVar2 + -1) {
          FUN_10fb1fe0(iVar4);
          iVar4 = iVar4 + 0xc;
          iVar3 = iVar3 + 0xc;
          param_1 = local_10;
        }
        FUN_10f5e4a0(iVar3,param_1[1],0,(int)&param_2 + 3);
      }
    }
    param_1[1] = *param_1 + (int)local_c * 0xc;
  }
  return param_1;
}


// ================= FUN_10fb71a0 @ 10fb71a0 =================

/* [RE-AUTO c0] */

undefined1 FUN_10fb71a0(undefined4 param_1,undefined4 param_2)

{
  int local_bc [8];
  int local_9c;
  int local_90;
  undefined4 local_84;
  int local_80;
  int local_60;
  int local_54;
  undefined4 local_48;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined1 local_c [4];
  undefined1 local_8;
  
  FUN_10f60d20(param_2);
  local_48 = param_1;
  FUN_10f60d20(local_bc);
  if (local_90 != 0) {
    FUN_10c3d5d0(local_90);
  }
  if (local_9c != 0) {
    FUN_10c3d5d0(local_9c);
  }
  if (local_bc[0] != 0) {
    FUN_10c3d5d0(local_bc[0]);
  }
  local_84 = local_48;
  FUN_10f60d20(local_44);
  FUN_10f66a00(local_c,&local_84);
  if (local_54 != 0) {
    FUN_10c3d5d0(local_54);
  }
  if (local_60 != 0) {
    FUN_10c3d5d0(local_60);
  }
  if (local_80 != 0) {
    FUN_10c3d5d0(local_80);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return local_8;
}


// ================= FUN_1140e1d0 @ 1140e1d0 =================

/* [RE-AUTO c0] */

bool __fastcall FUN_1140e1d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  return iVar1 == 1;
}


// ================= FUN_10a78bc0 @ 10a78bc0 =================

/* [RE-AUTO c0] */

void __fastcall FUN_10a78bc0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar6 = param_1[8];
  fVar7 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar10 = *param_1;
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  fVar14 = fVar3 * fVar8 - fVar7 * fVar4;
  fVar1 = param_1[1];
  fVar16 = fVar11 * fVar7 - fVar1 * fVar8;
  fVar15 = fVar1 * fVar4 - fVar11 * fVar3;
  fVar13 = DAT_11de9918 / (fVar16 * fVar2 + fVar14 * fVar10 + fVar15 * fVar6);
  *param_1 = fVar14 * fVar13;
  param_1[2] = fVar15 * fVar13;
  param_1[1] = fVar16 * fVar13;
  param_1[3] = ((fVar5 * fVar8 * fVar1 + fVar9 * fVar11 * fVar3 + fVar12 * fVar4 * fVar7) -
               (fVar9 * fVar4 * fVar1 + fVar12 * fVar8 * fVar3 + fVar5 * fVar11 * fVar7)) * fVar13;
  param_1[4] = (fVar6 * fVar4 - fVar2 * fVar8) * fVar13;
  param_1[5] = (fVar10 * fVar8 - fVar11 * fVar6) * fVar13;
  param_1[6] = (fVar11 * fVar2 - fVar10 * fVar4) * fVar13;
  param_1[7] = ((fVar9 * fVar4 * fVar10 + fVar12 * fVar8 * fVar2 + fVar5 * fVar11 * fVar6) -
               (fVar5 * fVar8 * fVar10 + fVar9 * fVar11 * fVar2 + fVar12 * fVar4 * fVar6)) * fVar13;
  param_1[8] = (fVar2 * fVar7 - fVar6 * fVar3) * fVar13;
  param_1[9] = (fVar1 * fVar6 - fVar10 * fVar7) * fVar13;
  param_1[10] = (fVar10 * fVar3 - fVar1 * fVar2) * fVar13;
  param_1[0xb] = ((fVar10 * fVar7 * fVar5 + fVar6 * fVar3 * fVar12 + fVar1 * fVar2 * fVar9) -
                 (fVar1 * fVar6 * fVar5 + fVar2 * fVar7 * fVar12 + fVar10 * fVar3 * fVar9)) * fVar13
  ;
  return;
}


// ================= FUN_1025be30 @ 1025be30 =================

/* [RE-AUTO c0] */

uint FUN_1025be30(uint param_1,undefined1 *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d690();
    return uVar1;
  }
  uVar1 = FUN_1025b520(param_1 - 1000000,*param_2);
  return uVar1;
}


// ================= FUN_10ddd710 @ 10ddd710 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10ddd710(uint *param_1,float *param_2)

{
  float fVar1;
  
  if ((*param_1 & 0x40) == 0) {
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)param_2;
    fVar1 = param_2[2];
    *param_1 = *param_1 | 0x40;
    param_1[0x24] = (uint)fVar1;
    param_1[1] = param_1[1];
    return;
  }
  param_1[0x22] = (uint)((float)param_1[0x22] + *param_2);
  param_1[0x23] = (uint)(param_2[1] + (float)param_1[0x23]);
  param_1[0x24] = (uint)(param_2[2] + (float)param_1[0x24]);
  *param_1 = *param_1 | 0x40;
  param_1[1] = param_1[1];
  return;
}


// ================= FUN_10aa64f0 @ 10aa64f0 =================

/* [RE-AUTO c0] */

void FUN_10aa64f0(void)

{
  return;
}


// ================= CBuffAreaPorcess::RegisterNodeParams @ 10aa0000 =================

/* [RE-R1]
   strings:
     ""CBuffAreaPorcess""
     ""BuffIDBBName"" */

void CBuffAreaPorcess__RegisterNodeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0(&DAT_11cc0668,&DAT_11cc066c);
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CBuffAreaPorcess","");
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
  FUN_100b62c0("BuffIDBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CBuffAreaPorcess","");
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


// ================= FUN_1083ac30 @ 1083ac30 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1083ac30(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    FUN_1083ab70(0,0);
    return param_1;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_1083ab70(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return param_1;
}


// ================= FUN_10f56e50 @ 10f56e50 =================

/* [RE-AUTO c0] */

undefined4 * __fastcall FUN_10f56e50(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}


// ================= FUN_1025bd00 @ 1025bd00 =================

/* [RE-AUTO c0] */

uint FUN_1025bd00(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d5b0(param_1);
    return uVar1;
  }
  uVar1 = FUN_1025b300(param_1 - 1000000,*param_2);
  return uVar1;
}


// ================= BTNode_CCombatNpcRotateToTarget::DescribeParams @ 10aa10c0 =================

/* [RE-R1]
   strings:
     ""CCombatNpcRotateToTarget"" */

void BTNode_CCombatNpcRotateToTarget__DescribeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetID","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CCombatNpcRotateToTarget","");
  FUN_1048b080(local_1c,local_34,0);
  FUN_1048b250();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}


// ================= FUN_10c3dad0 @ 10c3dad0 =================

/* [RE-AUTO c0] */

int FUN_10c3dad0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}


// ================= FUN_10efcf50 @ 10efcf50 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10efcf50(int param_1,int param_2,char param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  
  puVar4 = &DAT_120280a8;
  do {
    fVar1 = *(float *)(param_2 + -0x120280a8 + (int)puVar4);
    local_8 = *puVar4;
    iVar3 = FUN_10f213d0(&local_8);
    if (((iVar3 != param_1 + 0x2308) &&
        (puVar2 = *(undefined4 **)(iVar3 + 0x14), puVar2 != (undefined4 *)0x0)) &&
       ((DAT_11de9908 <=
         (double)(float)(double)((ulonglong)(double)((float)puVar2[1] - fVar1) & DAT_11de9c70) ||
        (param_3 != '\0')))) {
      puVar2[1] = fVar1;
      FUN_10b8e960(param_1,*puVar2,fVar1,puVar2 + 2);
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x12028160);
  return;
}


// ================= FUN_10f171a0 @ 10f171a0 =================

/* [RE-AUTO c0]
   strings:
     ""SelectFacialModel"" */

void __thiscall FUN_10f171a0(int *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  local_8 = param_1;
  if (((param_2 != (short)param_1[0x2d]) || ((char)param_1[0x8ff] != '\0')) || (param_4 != '\0')) {
    *(short *)(param_1 + 0x2d) = (short)param_2;
    piVar1 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
    if ((piVar1 != (int *)0x0) &&
       (piVar1 = (int *)(**(code **)(*piVar1 + 0x38))(), piVar1 != (int *)0x0)) {
      local_8 = piVar1;
      piVar2 = (int *)(**(code **)(*piVar1 + 4))();
      iVar3 = (**(code **)(*piVar2 + 0x34))(piVar1,"SelectFacialModel");
      if (iVar3 != 0) {
        FUN_10f20c20(piVar2,&local_8,&param_2);
        (**(code **)(*piVar2 + 0x44))();
      }
    }
    CPlayerInventoryExtension__ResetAndReload(0);
  }
  if (((param_1[0x575] != param_3) || ((char)param_1[0x8ff] != '\0')) || (param_4 != '\0')) {
    param_1[0x575] = param_3;
    FUN_10f12f20(param_3);
  }
  *(undefined1 *)(param_1 + 0x8ff) = 0;
  return;
}


// ================= FUN_107d15c0 @ 107d15c0 =================

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_107d15c0(undefined4 *param_1)

{
  return *param_1;
}


// ================= FUN_10fd1830 @ 10fd1830 =================

/* [RE-AUTO c0] */

undefined1 FUN_10fd1830(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + -0xc) < 0) {
    puVar4 = &DAT_1201fc98;
  }
  else {
    puVar4 = param_1;
    FUN_10c3dab0(param_1 + -0xc,param_1);
  }
  iVar2 = FUN_10fb8080(puVar4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPlayerWeaponFSM__TryRequestStateChange
                      (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                       *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),0,0,0xffffffff,
                       param_2,0,0);
  }
  piVar3 = (int *)(param_1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return uVar1;
}


// ================= FUN_11070f80 @ 11070f80 =================

/* [RE-AUTO c0] */

undefined4 FUN_11070f80(void)

{
  return DAT_1203e5cc;
}


// ================= FUN_10f58d40 @ 10f58d40 =================

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: memcpy */

void __fastcall FUN_10f58d40(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  char *_Src;
  char *pcVar8;
  size_t _Size;
  float10 fVar9;
  undefined4 local_1c;
  int local_14;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  fVar9 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0xc))();
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(float *)(param_1 + 0x58) = (float)fVar9;
  CInfoRecord__GetModelString();
  iVar6 = *(int *)(param_1 + 0x18);
  fVar9 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0xc))();
  *(float *)(iVar6 + 200) = (float)fVar9;
  FUN_10f128b0();
  FUN_10f19970();
  puVar4 = *(undefined4 **)(param_1 + 0xac);
  if (puVar4 != *(undefined4 **)(param_1 + 0xb0)) {
    do {
      (*(code *)*puVar4)();
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0xb0));
  }
  iVar2 = *(int *)(param_1 + 0x128);
  iVar6 = param_1 + 0x124;
  local_8 = iVar6;
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x10) < 7) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        local_8 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if ((local_8 != iVar6) && (7 < *(int *)(local_8 + 0x10))) {
      local_8 = iVar6;
    }
  }
  if ((local_8 != iVar6) &&
     (piVar7 = *(int **)(local_8 + 0x14), piVar7 != *(int **)(local_8 + 0x18))) {
    do {
      puVar4 = (undefined4 *)piVar7[3];
      cVar1 = '\x01';
      if (puVar4 != (undefined4 *)piVar7[4]) {
        do {
          if ((code *)*puVar4 != (code *)0x0) {
            cVar1 = (*(code *)*puVar4)(param_1,local_1c,puVar4[1]);
          }
          if (cVar1 == '\0') goto LAB_10f58e84;
          puVar4 = puVar4 + 2;
        } while (puVar4 != (undefined4 *)piVar7[4]);
      }
      puVar4 = (undefined4 *)*piVar7;
      if (puVar4 != (undefined4 *)piVar7[1]) {
        do {
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)();
          }
          puVar4 = puVar4 + 2;
        } while (puVar4 != (undefined4 *)piVar7[1]);
      }
LAB_10f58e84:
      piVar7 = piVar7 + 6;
    } while (piVar7 != *(int **)(local_8 + 0x18));
  }
  puVar4 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar4 != *(undefined4 **)(param_1 + 0xbc)) {
    do {
      _Src = &DAT_1203cce8;
      if ((char *)puVar4[1] != (char *)0x0) {
        _Src = (char *)puVar4[1];
      }
      if (_Src != (char *)0x0) {
        pcVar8 = _Src;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        _Size = (int)pcVar8 - (int)(_Src + 1);
        if (_Size != 0) {
          puVar5 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
          DAT_123be268 = DAT_123be268 + _Size + 0xd;
          *puVar5 = 1;
          pcVar8 = (char *)(puVar5 + 3);
          puVar5[1] = _Size;
          puVar5[2] = _Size;
          pcVar8[_Size] = '\0';
          if (pcVar8 != _Src) {
            memcpy(pcVar8,_Src,_Size);
          }
        }
      }
      (*(code *)*puVar4)(param_1);
      puVar4 = puVar4 + 2;
    } while (puVar4 != *(undefined4 **)(param_1 + 0xbc));
  }
  if ((((*(int *)(param_1 + 0x18) != 0) &&
       (piVar7 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar7 != (int *)0x0)) &&
      (cVar1 = (**(code **)(*piVar7 + 0x228))(), cVar1 != '\0')) &&
     ((DAT_120286c8 != 0 && (iVar6 = FUN_10ba9b00(), iVar6 != 0)))) {
    piVar7 = (int *)FUN_10ba9b00();
    (**(code **)(*piVar7 + 0x318))();
  }
  if ((-1 < *(int *)(local_14 + -0xc)) && (iVar6 = FUN_10c3dad0(), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_14 + -4));
    FUN_10c3d900();
  }
  return;
}


// ================= FUN_10fd9120 @ 10fd9120 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10fd9120(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x10c))();
  (**(code **)(*piVar1 + 0x104))
            ((float)(*(int *)(param_1 + 0x1a8) * *(int *)(param_1 + 0x1a4) *
                     *(int *)(param_1 + 0x1a0) * *(int *)(param_1 + 0x19c)) * DAT_11de98a8);
  return;
}


// ================= FUN_10a76eb0 @ 10a76eb0 =================

/* [RE-AUTO c0]
   strings:
     ""CFaceInfo"" */

undefined4 FUN_10a76eb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_108538f0(0,"CFaceInfo",0);
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


// ================= TdrText_FieldValueFmt @ 1024a410 =================

/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __fastcall
TdrText_FieldValueFmt
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    _wassert(L"NULL != variable",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp",0xaf);
  }
  iVar1 = TdrText_WriteIndent(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1010c010(param_1,&DAT_11da4ec0,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1010c010(param_1,&DAT_11d9e0dc,param_5);
      if (iVar1 == 0) {
        TdrBuf_PutU8Z(param_3);
      }
    }
  }
  return;
}


// ================= FUN_10f117f0 @ 10f117f0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f117f0(int param_1,undefined4 param_2)

{
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
    Player__LeaveLadder_10f11880(param_2);
    return;
  }
  local_24 = *(undefined4 *)(param_1 + 0x196c);
  local_2c = *(undefined8 *)(param_1 + 0x1964);
  local_18 = *(undefined4 *)(param_1 + 0x1978);
  local_c = *(undefined4 *)(param_1 + 0x19a0);
  local_20 = *(undefined8 *)(param_1 + 0x1970);
  local_8 = param_2;
  local_14 = *(undefined8 *)(param_1 + 0x1998);
  FUN_10f20af0(DAT_1203c848,&local_2c,0x100,0,0,0xffffffff,0);
  return;
}


// ================= FUN_10aa1d10 @ 10aa1d10 =================

/* [RE-AUTO c0]
   strings:
     ""CEntityFollowTarget""
     ""MinSpeed""
     ""MaxDistance""
     ""MinDistance""
     ""Offset""
     ""WalkSequnece""
     ""Attachment""
     ""FailReason"" */

void FUN_10aa1d10(void)

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
  FUN_100b62c0("CEntityFollowTarget","");
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
  FUN_100b62c0("CEntityFollowTarget","");
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
  FUN_100b62c0("MaxDistance","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityFollowTarget","");
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
  FUN_100b62c0("MinDistance","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,3,2,0);
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
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,7,0,0);
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
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,4);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("WalkSequnece","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,5,1,0);
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
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,8,1,0);
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
  FUN_100b62c0("CEntityFollowTarget","");
  FUN_1048b080(local_34,local_1c,6,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= BTNode_CCombatNpcRotateToPos::DescribeParams @ 10aa0760 =================

/* [RE-R1]
   strings:
     ""CCombatNpcRotateToPos""
     ""RotateAngle""
     ""TargetPos"" */

void BTNode_CCombatNpcRotateToPos__DescribeParams(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("TargetOrientation","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CCombatNpcRotateToPos","");
  FUN_1048b080(local_1c,local_34,0,1,1);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("RotateAngle","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCombatNpcRotateToPos","");
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
  FUN_100b62c0("TargetPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CCombatNpcRotateToPos","");
  FUN_1048b080(local_34,local_1c,2);
  FUN_1048b250();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_10aa0200 @ 10aa0200 =================

/* [RE-AUTO c0]
   strings:
     ""CChangeArea"" */

void FUN_10aa0200(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0(&DAT_11cc0694,&DAT_11cc0698);
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CChangeArea","");
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

