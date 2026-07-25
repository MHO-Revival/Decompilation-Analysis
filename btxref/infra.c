
// ######## 105fc120 FUN_105fc120@105fc120 size=18140 ########
// <decompile failed>

// ######## 103cf720 FUN_103cf720@103cf720 size=6 ########

/* [RE-AUTO c0] */

undefined4 FUN_103cf720(void)

{
  return DAT_116f75d0;
}


// ######## 103cf810 FUN_103cf810@103cf810 size=216 ########

/* [RE-AUTO c0] */

void __thiscall
FUN_103cf810(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_34;
  undefined1 uStack_30;
  undefined1 auStack_2c [8];
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&iStack_34;
  if (*(char *)(param_1 + 0x50) == '\0') {
    local_14 = local_24;
    local_10 = local_14;
    FUN_1001ea30(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
    FUN_103cf770();
    uStack_30 = param_6;
    iStack_34 = param_4;
    FUN_103d10f0(auStack_2c,extraout_ECX,param_3);
    puVar1 = (undefined8 *)FUN_103d1200();
    *puVar1 = CONCAT44(unaff_ESI,unaff_EDI);
    *(undefined4 *)(puVar1 + 1) = param_5;
    piVar2 = (int *)FUN_103d12c0(&iStack_34);
    if (*piVar2 <= param_4) {
      piVar2 = (int *)FUN_103d12c0(local_24);
      *piVar2 = param_4 + 1;
    }
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10653dc0(local_10);
    }
  }
  FUN_112bed8e();
  return;
}


// ######## 1001ea30 FUN_1001ea30@1001ea30 size=107 ########

/* [RE-AUTO c0]
   calls: memcpy */

void __thiscall FUN_1001ea30(int *param_1,void *param_2,void *param_3)

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
    FUN_1001fb50();
  }
  if (0x10 < local_8) {
    iVar1 = FUN_1001f4d0(local_8,&local_8);
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

