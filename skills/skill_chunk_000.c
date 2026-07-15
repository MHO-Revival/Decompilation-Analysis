/* ===== FUN_10006530 @ 10006530  size=206 ===== */
// calls: _snprintf
// strings:
//   "; failed to output value of entry<%s>, consume input buffer from %p to %p"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; failed to output value of entry<%s>, consume input buffer from %p to %p"" */

void FUN_10006530(undefined4 param_1,uint param_2,int param_3,undefined4 *param_4,void *param_5)

{
  float fVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint _MaxCount;
  char *_Dest;
  int iVar5;
  double *_Str;
  size_t _Count;
  char *_Format;
  uint local_74;
  void *local_70;
  undefined4 *local_6c;
  size_t sStack_68;
  undefined1 uStack_64;
  undefined4 uStack_63;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined2 uStack_27;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  undefined4 uStack_17;
  undefined4 uStack_13;
  undefined4 uStack_f;
  undefined4 uStack_b;
  undefined2 uStack_7;
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&local_74;
  local_74 = param_2;
  local_6c = param_4;
  local_70 = param_5;
  iVar5 = 0;
  puVar3 = (undefined1 *)FUN_1000f910();
  *puVar3 = 0;
  _Str = (double *)*param_4;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 2:
    iVar5 = func_0x10004df0();
    if (iVar5 != 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
      break;
    }
    goto code_r0x100065be;
  case 3:
  case 4:
    iVar5 = func_0x10004df0();
    if (iVar5 == 0) {
      iVar5 = FUN_1000f770(param_1,&UNK_11d74f3c,*(undefined1 *)_Str);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    else {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    break;
  case 5:
    iVar5 = func_0x10004df0();
    if (iVar5 != 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
      break;
    }
    goto code_r0x100065be;
  case 6:
    iVar5 = func_0x10004df0();
    if (iVar5 != 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
      break;
    }
    goto code_r0x100065be;
  case 7:
  case 9:
    iVar5 = func_0x10004df0();
    if (iVar5 != 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
      break;
    }
code_r0x100065be:
    iVar5 = FUN_1000f770(param_1,&DAT_11d9e0b4);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 8:
  case 10:
    iVar5 = func_0x10004df0();
    if (iVar5 == 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9f574,*(undefined4 *)_Str);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    else {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,iVar5);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    break;
  case 0xb:
    iVar5 = FUN_1000f770(param_1,&DAT_11dd6878,*(undefined4 *)_Str,*(undefined4 *)((int)_Str + 4));
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0xc:
    iVar5 = FUN_1000f770(param_1,&DAT_11da54b0,*(undefined4 *)_Str,*(undefined4 *)((int)_Str + 4));
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0xd:
    uStack_53 = 0;
    uStack_4f = 0;
    uStack_4b = 0;
    uStack_47 = 0;
    uStack_45 = 0;
    uStack_54 = 0;
    uVar4 = FUN_1000ee40(_Str,&uStack_54,0x10);
    iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,uVar4);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0xe:
    uStack_64 = 0;
    uStack_63 = 0;
    uStack_5f = 0;
    uStack_5b = 0;
    uStack_57 = 0;
    uStack_55 = 0;
    uVar4 = FUN_1000ef00(_Str,&uStack_64,0x10);
    iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,uVar4);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0xf:
    uStack_24 = 0;
    uStack_23 = 0;
    uStack_1f = 0;
    uStack_1b = 0;
    uStack_17 = 0;
    uStack_13 = 0;
    uStack_f = 0;
    uStack_b = 0;
    uStack_7 = 0;
    uStack_5 = 0;
    uVar4 = FUN_1000efa0(_Str,&uStack_24,0x20);
    iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,uVar4);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0x11:
    fVar1 = *(float *)_Str;
    goto code_r0x1000673b;
  case 0x12:
    fVar1 = (float)*_Str;
code_r0x1000673b:
    iVar5 = FUN_1000f770(param_1,&DAT_11da0cf4,(double)fVar1);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0x13:
    uStack_43 = 0;
    uStack_3f = 0;
    uStack_3b = 0;
    uStack_37 = 0;
    uStack_33 = 0;
    uStack_2f = 0;
    uStack_2b = 0;
    uStack_27 = 0;
    uStack_25 = 0;
    uStack_44 = 0;
    iVar5 = FUN_1000f0d0(*(undefined4 *)_Str,&uStack_44,0x20);
    if (iVar5 == 0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9d32b);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    else {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,&uStack_44);
      _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    }
    break;
  case 0x14:
    sStack_68 = 4;
    local_74 = 0;
    local_70 = (void *)(uint)*(ushort *)_Str;
    FUN_1000e5c0(&local_74,&sStack_68,&local_70,2);
    FUN_1000f770(param_1,&DAT_11d9e0dc,&local_74);
    _Str = (double *)((int)_Str + *(int *)(param_3 + 0x18));
    break;
  case 0x15:
    _MaxCount = *(uint *)(param_3 + 0x20);
    if (_MaxCount == 0) {
      _MaxCount = (int)local_70 - (int)_Str;
    }
    local_74 = _MaxCount;
    sStack_68 = strnlen((char *)_Str,_MaxCount);
    if (_MaxCount <= sStack_68) {
      iVar5 = -0x7dfefbfa;
      break;
    }
    iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,_Str);
    goto code_r0x100069a0;
  case 0x16:
    local_74 = *(uint *)(param_3 + 0x20);
    if (local_74 == 0) {
      local_74 = (int)local_70 - (int)_Str;
    }
    local_70 = (void *)FUN_1000e630(_Str,local_74 >> 1);
    if (local_70 == (void *)0x0) {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9d32b);
    }
    else {
      iVar5 = FUN_1000f770(param_1,&DAT_11d9e0dc,local_70);
      free(local_70);
    }
code_r0x100069a0:
    _Str = (double *)((int)_Str + local_74);
  }
  puVar2 = local_6c;
  if (iVar5 < 0) {
    _Format = "; failed to output value of entry<%s>, consume input buffer from %p to %p";
    _Count = 0x400;
    _Dest = (char *)FUN_1000f910(0x400,
                                 "; failed to output value of entry<%s>, consume input buffer from %p to %p"
                                 ,((*(int *)(param_3 + 0xc) -
                                   *(int *)((param_3 - *(int *)(param_3 + 0xa4)) + 0x3c)) -
                                  *(int *)(param_3 + 0xa4)) + param_3,*local_6c,_Str);
    _snprintf(_Dest,_Count,_Format);
    *puVar2 = _Str;
    FUN_11a89daa();
    return;
  }
  *local_6c = _Str;
  FUN_11a89daa();
  return;
}



/* ===== FUN_10009ab0 @ 10009ab0  size=262 ===== */
// calls: _snprintf
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_fp<%p>==NULL or
   a_pstHost<%p>==NULL"" */

undefined4 FUN_10009ab0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) || (param_5 == 0)) {
    pcVar5 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_5,param_2,param_3);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    pcVar5 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_3,param_3[1]);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
    param_4 = *(int *)(param_1 + 0xc);
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar5 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010401;
  }
  uVar2 = FUN_100086c0(param_1,param_4,param_5);
  return uVar2;
}



/* ===== FUN_10009bc0 @ 10009bc0  size=253 ===== */
// calls: _snprintf
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"" */

undefined4 FUN_10009bc0(int param_1,int param_2,int *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined1 auStack_10 [16];
  
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    pcVar5 = "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    pcVar5 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_3,param_3[1]);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if (param_4 == 0) {
    param_4 = *(int *)(param_1 + 0xc);
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar5 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010401;
  }
  FUN_10007840(auStack_10);
  uVar2 = FUN_100086c0(param_1,param_4,auStack_10);
  return uVar2;
}



/* ===== FUN_10009cc0 @ 10009cc0  size=320 ===== */
// calls: _snprintf
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; invalid parameters: a_pstOut->pszBuff<%p>==NULL or a_pstOut->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstOut<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; invalid parameters: a_pstOut->pszBuff<%p>==NULL or a_pstOut->iBuff<%u> <= 0 or
   a_pstHost->pszBuff<%p>==NULL or a_pstH…"
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pstOut<%p>==NULL or a_pstHost<%p>==NULL"" */

undefined4 FUN_10009cc0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  undefined1 auStack_10 [16];
  
  puVar2 = (undefined1 *)FUN_1000f910();
  *puVar2 = 0;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    pcVar6 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstOut<%p>==NULL or a_pstHost<%p>==NULL";
    sVar5 = 0x400;
    pcVar4 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstOut<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar4,sVar5,pcVar6);
    return 0x82010468;
  }
  iVar1 = *param_2;
  if (((iVar1 != 0) && (param_2[1] != 0)) && ((*param_3 != 0 && (param_3[1] != 0)))) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0xc);
    }
    if (param_4 < *(int *)(param_1 + 8)) {
      uVar3 = FUN_10003330(param_1);
      pcVar6 = 
      "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
      sVar5 = 0x400;
      pcVar4 = (char *)FUN_1000f910(0x400,
                                    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                    ,param_4,*(undefined4 *)(param_1 + 8),uVar3);
      _snprintf(pcVar4,sVar5,pcVar6);
      param_2[1] = 0;
      return 0x82010401;
    }
    FUN_10007840(auStack_10);
    uVar3 = FUN_100086c0(param_1,param_4,auStack_10);
    param_2[1] = iVar1 - *param_2;
    return uVar3;
  }
  pcVar6 = 
  "; invalid parameters: a_pstOut->pszBuff<%p>==NULL or a_pstOut->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
  ;
  sVar5 = 0x400;
  pcVar4 = (char *)FUN_1000f910(0x400,
                                "; invalid parameters: a_pstOut->pszBuff<%p>==NULL or a_pstOut->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                ,iVar1,param_2[1],*param_3,param_3[1]);
  _snprintf(pcVar4,sVar5,pcVar6);
  param_2[1] = 0;
  return 0x82010468;
}



/* ===== FUN_10009f50 @ 10009f50  size=449 ===== */
// calls: _snprintf, malloc, strncpy, free
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to allocate memory<size:%u>:"
//   "; invalid parameters: a_pstVisual->pszBuff<%p>==NULL or a_pstVisual->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_pstVisual<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf, malloc, strncpy, free
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to allocate memory<size:%u>:""
     ""; invalid parameters: a_pstVisual->pszBuff<%p>==NULL or a_pstVisual->iBuff<%u> <= 0 or
   a_pstHost->pszBuff<%p>==NULL or …"
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_pstVisual<%p>==NULL
   or a_pstHost<%p>==NULL"" */

undefined4 FUN_10009f50(int param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  char *pcVar6;
  
  puVar2 = (undefined1 *)FUN_1000f910();
  *puVar2 = 0;
  if ((((param_1 == 0) || (param_3 == (int *)0x0)) || (param_2 == (int *)0x0)) ||
     (param_5 == (undefined4 *)0x0)) {
    pcVar6 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_pstVisual<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar5 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstFormat<%p>==NULL or a_pstVisual<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_5,param_3,param_2);
    _snprintf(pcVar3,sVar5,pcVar6);
    return 0x82010468;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && ((*param_3 != 0 && (param_3[1] != 0)))) {
    pcVar3 = (char *)*param_5;
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (1 < (uint)((int)pcVar3 - (int)pcVar6)) {
        return 0x82010468;
      }
    }
    if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
      param_4 = *(int *)(param_1 + 0xc);
    }
    if (param_4 < *(int *)(param_1 + 8)) {
      uVar4 = FUN_10003330(param_1);
      pcVar6 = 
      "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
      sVar5 = 0x400;
      pcVar3 = (char *)FUN_1000f910(0x400,
                                    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                    ,param_4,*(undefined4 *)(param_1 + 8),uVar4);
      _snprintf(pcVar3,sVar5,pcVar6);
      param_3[1] = 0;
      return 0x82010401;
    }
    pcVar3 = malloc(param_3[1]);
    if (pcVar3 == (char *)0x0) {
      pcVar6 = "; failed to allocate memory<size:%u>:";
      sVar5 = 0x400;
      pcVar3 = (char *)FUN_1000f910(0x400,"; failed to allocate memory<size:%u>:",param_3[1]);
      _snprintf(pcVar3,sVar5,pcVar6);
      param_3[1] = 0;
      return 0x82010409;
    }
    strncpy(pcVar3,(char *)*param_3,param_3[1] - 1);
    pcVar3[param_3[1] + -1] = '\0';
    uVar4 = FUN_10007870(param_2,param_4,param_5);
    free(pcVar3);
    return uVar4;
  }
  pcVar6 = 
  "; invalid parameters: a_pstVisual->pszBuff<%p>==NULL or a_pstVisual->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
  ;
  sVar5 = 0x400;
  pcVar3 = (char *)FUN_1000f910(0x400,
                                "; invalid parameters: a_pstVisual->pszBuff<%p>==NULL or a_pstVisual->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                ,*param_3,param_3[1],*param_2,param_2[1]);
  _snprintf(pcVar3,sVar5,pcVar6);
  return 0x82010468;
}



/* ===== FUN_1000a1f0 @ 1000a1f0  size=5495 ===== */
// calls: __alloca_probe, _snprintf, strnlen, memcpy
// strings:
//   "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
//   "lib_src\\tdr\\tdr_net.c"
//   "; %s:%d"
//   "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
//   "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
//   "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
//   "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
//   "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"
//   "; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s> unpacked_entry_count<%d>"
//   "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> entry<%s> meta<%s> unpacked_entry_count<%d>"
//   "; entry<%s> of meta<%s> %s:%d"
//   "; meta<%s> is too complex, contains more than %d layers of children"
//   "; invalid cut-off version: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>'s versionindicator"
//   "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
//   "; invalid parameter: expect a_iVersion<%d> NOT less than base_version<%d> of meta<%s>"
//   "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>'s versionindicator"
//   "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, _snprintf, strnlen, memcpy
   strings:
     ""; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator
   offset<%u> and size<%u>""
     ""lib_src\\tdr\\tdr_net.c""
     ""; %s:%d""
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>""
     ""; sizeinfo numeric overflow: real_value<%d> value_limit<%u>""
     ""; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s>
   unpacked_entry_count<%d>"" */

void FUN_1000a1f0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  size_t sVar20;
  char *pcVar21;
  int *piStack_17f4;
  int iStack_17f0;
  uint local_17ec;
  uint *puStack_17e8;
  int *piStack_17e4;
  int iStack_17e0;
  int iStack_17dc;
  uint *puStack_17d8;
  uint *puStack_17d4;
  uint *puStack_17d0;
  int iStack_17cc;
  size_t sStack_17c8;
  int *piStack_17c4;
  int *piStack_17c0;
  int iStack_17bc;
  int *local_17b8;
  uint uStack_17b4;
  uint uStack_17b0;
  int *piStack_17ac;
  uint uStack_17a8;
  int *piStack_17a4;
  uint uStack_17a0;
  int *local_179c;
  uint uStack_1798;
  uint uStack_1794;
  int local_1790;
  uint uStack_1788;
  int aiStack_1784 [9];
  int iStack_1760;
  int iStack_175c;
  int iStack_1758;
  uint *puStack_1754;
  uint *puStack_1750;
  undefined4 uStack_174c;
  int aiStack_16a4 [1448];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&piStack_17f4;
  local_1790 = param_1;
  local_17b8 = param_2;
  local_179c = param_3;
  local_17ec = 0;
  puVar4 = (undefined1 *)FUN_1000f910();
  *puVar4 = 0;
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) || (param_2 == (int *)0x0)) ||
     (param_3 == (int *)0x0)) {
    pcVar21 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar20 = 0x400;
    pcVar6 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar6,sVar20,pcVar21);
  }
  else {
    puVar19 = (uint *)*param_2;
    if (((puVar19 == (uint *)0x0) || (sStack_17c8 = local_17b8[1], sStack_17c8 == 0)) ||
       ((iVar8 = *param_3, iVar8 == 0 || (param_3[1] == 0)))) {
      pcVar21 = 
      "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
      ;
      sVar20 = 0x400;
      pcVar6 = (char *)FUN_1000f910(0x400,
                                    "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
                                    ,puVar19,local_17b8[1],*param_3,param_3[1]);
      _snprintf(pcVar6,sVar20,pcVar21);
    }
    else {
      if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
        param_4 = *(int *)(param_1 + 0xc);
      }
      if ((param_4 < *(int *)(param_1 + 8)) ||
         ((*(int *)(param_1 + 0x74) != 0 && (param_4 < *(int *)(param_1 + 0x58))))) {
        param_3[1] = 0;
        local_17b8[1] = 0;
        if (param_4 < *(int *)(param_1 + 8)) {
          uVar13 = FUN_10003330(param_1);
          uVar5 = *(undefined4 *)(param_1 + 8);
          pcVar6 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than base_version<%d> of meta<%s>";
        }
        else {
          uVar13 = FUN_10003330(param_1);
          uVar5 = *(undefined4 *)(param_1 + 0x58);
          pcVar6 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
          ;
        }
        sVar20 = 0x400;
        pcVar21 = (char *)FUN_1000f910(0x400,pcVar6,param_4,uVar5,uVar13);
        _snprintf(pcVar21,sVar20,pcVar6);
      }
      else {
        puStack_17d0 = (uint *)(sStack_17c8 + (int)puVar19);
        iStack_1758 = param_3[1] + iVar8;
        sStack_17c8 = (param_1 - *(int *)(param_1 + 0x3c)) - 0x114;
        aiStack_1784[5] = *(int *)(param_1 + 100);
        puStack_17e8 = puVar19;
        iStack_17dc = param_1;
        aiStack_1784[0] = param_1;
        aiStack_1784[3] = 1;
        aiStack_1784[4] = 0;
        iStack_175c = iVar8;
        if (aiStack_1784[5] == 0) {
          aiStack_1784[5] = 0;
          aiStack_1784[6] = 0;
          puStack_1750 = (uint *)0x0;
        }
        else if (*(int *)(param_1 + 0x68) == -1) {
          puStack_1750 = (uint *)(*(int *)(param_1 + 0x5c) + (int)puVar19);
        }
        else {
          puStack_1750 = puVar19;
          puStack_17e8 = (uint *)((int)puVar19 + aiStack_1784[5]);
        }
        puVar19 = puStack_17e8;
        puStack_1754 = puStack_17e8;
        uStack_174c = 1;
        iStack_1760 = 0;
        uVar3 = (undefined1)param_4;
        if (*(int *)(param_1 + 0x74) != 0) {
          piStack_17f4 = (int *)(*(int *)(param_1 + 0x70) + iVar8);
          iVar1 = *(int *)(param_1 + 0x74);
          if (iStack_1758 - (int)piStack_17f4 < iVar1) {
            uVar5 = FUN_10003330(param_1,iVar8,iStack_1758,*(undefined4 *)(param_1 + 0x70),iVar1);
            pcVar21 = 
            "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
            ;
            sVar20 = 0x400;
            pcVar6 = (char *)FUN_1000f910(0x400,
                                          "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                                          ,uVar5);
            _snprintf(pcVar6,sVar20,pcVar21);
            local_17ec = 0x82010407;
          }
          else if (iVar1 == 2) {
            *(undefined2 *)piStack_17f4 = (undefined2)param_4;
          }
          else if (iVar1 == 4) {
            *piStack_17f4 = param_4;
          }
          else if (iVar1 == 8) {
            *piStack_17f4 = param_4;
            piStack_17f4[1] = param_4 >> 0x1f;
          }
          else {
            *(undefined1 *)piStack_17f4 = uVar3;
          }
        }
        if ((local_17ec & 0x80000000) == 0) {
          iStack_17cc = 1;
          aiStack_1784[1] = 0;
          iStack_17e0 = 0;
          piVar15 = aiStack_1784;
          do {
            puVar17 = puStack_17d0;
            if (iStack_17e0 != 0) {
              iVar8 = piVar15[5];
              iStack_17e0 = 0;
              if (iVar8 != 0) {
                uVar9 = (int)puVar19 - piVar15[0xc];
                uStack_1794 = (int)uVar9 >> 0x1f;
                uStack_1798 = uVar9;
                if ((*(int *)(&DAT_11e11424 + iVar8 * 8) < (int)uStack_1794) ||
                   ((*(int *)(&DAT_11e11424 + iVar8 * 8) <= (int)uStack_1794 &&
                    (*(uint *)(&DAT_11e11420 + iVar8 * 8) < uVar9)))) {
                  uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                  uVar5 = FUN_10004f00(piVar15[1],uVar5);
                  pcVar21 = 
                  "; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s> unpacked_entry_count<%d>"
                  ;
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                ,uVar9,*(undefined4 *)
                                                        (&DAT_11e11420 + piVar15[5] * 8),uVar5);
                  _snprintf(pcVar6,sVar20,pcVar21);
                  local_17ec = 0x82010479;
                  break;
                }
                if (iVar8 == 2) {
                  *(ushort *)piVar15[0xd] = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
                }
                else if (iVar8 == 4) {
                  *(uint *)piVar15[0xd] =
                       (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 |
                       (uVar9 * 0x10000 | uVar9 & 0xff00) << 8;
                }
                else if (iVar8 == 8) {
                  puVar19 = (uint *)piVar15[0xd];
                  *puVar19 = (uStack_1794 >> 0x10 |
                             ((uStack_1794 & 0xff0000) >> 0x10 | uStack_1794 & 0xff00) << 0x10) >> 8
                             | uStack_1794 << 0x18;
                  puVar19[1] = (uVar9 * 0x10000 |
                               ((uVar9 & 0xff00) << 0x10 | uVar9 & 0xff0000) >> 0x10) << 8 |
                               uVar9 >> 0x18;
                  puVar19 = puStack_17e8;
                }
                else {
                  *(char *)piVar15[0xd] = (char)uVar9;
                }
              }
              if (0 < piVar15[3]) {
                if (puStack_17d0 < puVar19) {
                  uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                  uVar5 = FUN_10004f00(piVar15[1],uVar5);
                  pcVar21 = 
                  "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> entry<%s> meta<%s> unpacked_entry_count<%d>"
                  ;
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                ,puVar19,puVar17,uVar5);
                  _snprintf(pcVar6,sVar20,pcVar21);
                  local_17ec = 0x82010402;
                  break;
                }
                if (piVar15[5] != 0) {
                  iVar8 = piVar15[6];
                  if (iVar8 < 0) {
                    piVar15[0xd] = (int)puVar19;
                    puVar19 = (uint *)((int)puVar19 - iVar8);
                    puStack_17e8 = puVar19;
                  }
                  else {
                    piVar15[0xd] = (int)(iVar8 + (int)puVar19);
                  }
                }
                piVar15[0xc] = (int)puVar19;
              }
              if (1 < iStack_17cc) {
                if ((*(byte *)(piVar15[1] + 0x44) & 4) == 0) {
                  piVar15[-0x26] = piVar15[-0x26] + *(int *)(iStack_17dc + 0x1c);
                }
                else {
                  piVar15[-0x26] = piVar15[-0x26] + *(int *)(piVar15[1] + 0x18);
                }
                piVar15[9] = 0;
              }
            }
            iVar8 = piVar15[3];
            if (iVar8 < 1) {
              iStack_17cc = iStack_17cc + -1;
              piVar18 = piVar15 + -0x2f;
              if (iStack_17cc < 1) break;
              iVar8 = *piVar18;
              iStack_17dc = iVar8;
              if (*(int *)(iVar8 + 0x10) == 0) {
                iVar8 = *(int *)(iVar8 + 0x1c);
                piVar15[-0x2c] = piVar15[-0x2c] + -1;
                piVar15[-0x25] = piVar15[-0x25] + iVar8;
                iStack_17e0 = piVar15[-0x21];
              }
              else {
                piVar15[-0x2b] = piVar15[-0x2b] + 1;
                if (*(int *)(iVar8 + 0x2c) <= piVar15[-0x2b]) {
                  iVar8 = *(int *)(iVar8 + 0x1c);
                  piVar15[-0x2c] = piVar15[-0x2c] + -1;
                  piVar15[-0x25] = piVar15[-0x25] + iVar8;
                  piVar15[-0x2b] = 0;
                  iStack_17e0 = piVar15[-0x21];
                }
              }
            }
            else {
              iVar12 = piVar15[4];
              iVar1 = iVar12 * 0xb4 + 0xb8 + iStack_17dc;
              iStack_17f0 = iVar1;
              piVar18 = piVar15;
              if (param_4 < *(int *)(iVar1 + 4)) {
                if (*(int *)(iStack_17dc + 0x10) == 0) {
LAB_1000a6c6:
                  piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                  piVar15[3] = iVar8 + -1;
                  iStack_17e0 = piVar15[0xe];
                }
                else {
                  iVar1 = *(int *)(iStack_17dc + 0x2c);
                  piVar15[4] = iVar12 + 1;
                  if (iVar1 <= iVar12 + 1) {
                    piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                    piVar15[4] = 0;
                    piVar15[3] = iVar8 + -1;
                    iStack_17e0 = piVar15[0xe];
                  }
                }
              }
              else if ((*(ushort *)(iVar1 + 0x44) & 2) == 0) {
                iVar8 = *(int *)(iVar1 + 0x58);
                if (iVar8 == 0) {
                  piStack_17c4 = *(int **)(iVar1 + 0x24);
                }
                else {
                  puVar16 = (ushort *)(*(int *)(iVar1 + 0x5c) + piVar15[10]);
                  if (iVar8 == 2) {
                    iStack_17bc = 0;
                    piStack_17c4 = (int *)(uint)*puVar16;
                  }
                  else if (iVar8 == 4) {
                    iStack_17bc = (int)*(int **)puVar16 >> 0x1f;
                    piStack_17c4 = *(int **)puVar16;
                  }
                  else if (iVar8 == 8) {
                    iStack_17bc = *(int *)(puVar16 + 2);
                    piStack_17c4 = *(int **)puVar16;
                  }
                  else {
                    iStack_17bc = 0;
                    piStack_17c4 = (int *)(uint)(byte)*puVar16;
                  }
                }
                piVar14 = piStack_17c4;
                if (((int)piStack_17c4 < 0) ||
                   ((*(int *)(iVar1 + 0x24) < (int)piStack_17c4 && (0 < *(int *)(iVar1 + 0x24))))) {
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910();
                  piStack_17e4 = (int *)strnlen(pcVar6,sVar20);
                  if ((int)piStack_17e4 < 0x400) {
                    sStack_17c8 = 0x400 - (int)piStack_17e4;
                  }
                  else {
                    sStack_17c8 = 0;
                  }
                  uVar5 = FUN_10003330(iStack_17dc);
                  uVar5 = FUN_10004f00(iVar1,uVar5);
                  pcVar6 = 
                  "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                  ;
                  sVar20 = sStack_17c8;
                  iVar8 = FUN_1000f910(sStack_17c8,
                                       "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                                       ,piVar14,*(undefined4 *)(iVar1 + 0x24),uVar5);
                  _snprintf((char *)(iVar8 + (int)piStack_17e4),sVar20,pcVar6);
                  local_17ec = 0x82010403;
                  piVar15[9] = *(int *)(iVar1 + 0x2c);
                  break;
                }
                if ((int)piStack_17c4 < 1) {
                  iVar8 = *(int *)(iVar1 + 0x50);
                  if (((iVar8 != 0) && (*(int *)(iVar1 + 0x54) == -1)) &&
                     (iVar12 = *(int *)(iVar1 + 0x48), iVar12 < *(int *)(iVar1 + 0x28))) {
                    if (iVar8 == 2) {
                      *(undefined2 *)(iVar12 + piVar15[0xc]) = 0;
                    }
                    else if (iVar8 == 4) {
                      *(undefined4 *)(iVar12 + piVar15[0xc]) = 0;
                    }
                    else {
                      iVar1 = piVar15[0xc];
                      if (iVar8 == 8) {
                        *(undefined4 *)(iVar12 + iVar1) = 0;
                        *(undefined4 *)(iVar12 + 4 + iVar1) = 0;
                      }
                      else {
                        *(undefined1 *)(iVar12 + iVar1) = 0;
                      }
                    }
                  }
                  if (*(int *)(iStack_17dc + 0x10) == 0) {
                    piVar15[3] = piVar15[3] + -1;
                    piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                    iStack_17e0 = piVar15[0xe];
                  }
                  else {
                    iVar1 = piVar15[4];
                    iVar8 = *(int *)(iStack_17dc + 0x2c);
                    piVar15[4] = iVar1 + 1;
                    if (iVar8 <= iVar1 + 1) {
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                      piVar15[4] = 0;
                      iStack_17e0 = piVar15[0xe];
                    }
                  }
                }
                else {
                  puStack_17d8 = (uint *)(*(int *)(iVar1 + 0x2c) + piVar15[10]);
                  if ((*(ushort *)(iVar1 + 0x44) & 4) == 0) {
                    puStack_17d4 = (uint *)piVar15[0xb];
                  }
                  else {
                    puStack_17d8 = (uint *)*puStack_17d8;
                    if (*(int *)(iVar1 + 8) < 2) {
                      puStack_17d4 = (uint *)(*(int *)(*(int *)(iVar1 + 0x78) + 0x130 + sStack_17c8)
                                             + (int)puStack_17d8);
                    }
                    else {
                      puStack_17d4 = (uint *)(*(int *)(iVar1 + 0x14) + (int)puStack_17d8);
                    }
                  }
                  puVar17 = puStack_17d8;
                  iVar8 = *(int *)(iVar1 + 8);
                  if (iVar8 < 2) {
                    if (0x1f < iStack_17cc) {
                      uVar5 = FUN_10003330(local_1790,0x20);
                      pcVar21 = 
                      "; meta<%s> is too complex, contains more than %d layers of children";
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; meta<%s> is too complex, contains more than %d layers of children"
                                                  ,uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010404;
                      piVar15[9] = *(int *)(iVar1 + 0x2c);
                      break;
                    }
                    if (iVar8 == 0) {
                      iVar8 = *(int *)(iVar1 + 100);
                      puVar11 = (uint *)(*(int *)(iVar1 + 0x68) + piVar15[10]);
                      if (iVar8 == 2) {
                        uStack_17b4 = (uint)(ushort)*puVar11;
LAB_1000b056:
                        uStack_17b0 = (int)uStack_17b4 >> 0x1f;
                      }
                      else {
                        if (iVar8 == 4) {
                          uStack_17b4 = *puVar11;
                          goto LAB_1000b056;
                        }
                        if (iVar8 != 8) {
                          uStack_17b4 = (uint)(byte)*puVar11;
                          goto LAB_1000b056;
                        }
                        uStack_17b0 = puVar11[1];
                        uStack_17b4 = *puVar11;
                      }
                      iVar8 = *(int *)(iVar1 + 0x78) + 0x114 + sStack_17c8;
                      iStack_17dc = iVar8;
                      piStack_17e4 = (int *)((*(int *)(iVar8 + 0x134) < *(int *)(iVar8 + 0x138)) - 1
                                            );
                      piVar14 = (int *)(uStack_17b4 - *(int *)(iVar8 + 0x138));
                      if (((int)piVar14 < 0) || (*(int *)(iVar8 + 0x2c) <= (int)piVar14)) {
LAB_1000b0c3:
                        iVar12 = *(int *)(iVar8 + 0x2c);
                        piVar14 = piStack_17e4;
                        if (iVar12 < 0x10) {
                          piStack_17f4 = (int *)0x0;
                          if (0 < iVar12) {
                            piVar10 = (int *)(iVar8 + 0x134);
                            do {
                              if ((piVar10[1] <= (int)uStack_17b4) &&
                                 (piVar14 = piStack_17f4, (int)uStack_17b4 <= *piVar10)) break;
                              piStack_17f4 = (int *)((int)piStack_17f4 + 1);
                              piVar10 = piVar10 + 0x2d;
                              piStack_17c0 = piVar10;
                              piVar14 = piStack_17e4;
                            } while ((int)piStack_17f4 < *(int *)(iVar8 + 0x2c));
                          }
                        }
                        else {
                          piStack_17f4 = (int *)0x0;
                          puStack_17d8 = (uint *)(iVar12 + -1);
                          if (-1 < iVar12 + -1) {
                            do {
                              piVar14 = (int *)((int)((int)puStack_17d8 + (int)piStack_17f4) >> 1);
                              iVar12 = *(int *)((int)piVar14 * 0xb4 + 0x138 + iVar8);
                              piStack_17c0 = *(int **)((int)piVar14 * 0xb4 + iVar8 + 0x134);
                              if ((int)piStack_17c0 < iVar12) {
LAB_1000b15e:
                                piStack_17f4 = (int *)((int)piVar14 + 1);
                              }
                              else {
                                if (iVar12 <= (int)uStack_17b4) {
                                  if ((int)piStack_17c0 < (int)uStack_17b4) goto LAB_1000b15e;
                                  break;
                                }
                                puStack_17d8 = (uint *)((int)piVar14 + -1);
                              }
                              piVar14 = piStack_17e4;
                            } while ((int)piStack_17f4 <= (int)puStack_17d8);
                          }
                        }
                      }
                      else {
                        piStack_17c0 = (int *)((int)piVar14 * 0xb4 + iVar8);
                        if ((piStack_17c0[0x4e] != uStack_17b4) ||
                           (piStack_17c0[0x4d] < piStack_17c0[0x4e])) goto LAB_1000b0c3;
                      }
                      if ((piVar14 == (int *)0xffffffff) ||
                         (param_4 < *(int *)((int)piVar14 * 0xb4 + 0xbc + iVar8))) {
                        iVar8 = *(int *)(iVar1 + 0x50);
                        if ((iVar8 != 0) &&
                           ((*(int *)(iVar1 + 0x54) == -1 &&
                            (iVar12 = *(int *)(iVar1 + 0x48), iVar12 < *(int *)(iVar1 + 0x28))))) {
                          if (iVar8 == 2) {
                            *(undefined2 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                          else if (iVar8 == 4) {
                            *(undefined4 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                          else if (iVar8 == 8) {
                            iVar8 = piVar15[0xc];
                            *(undefined4 *)(iVar12 + iVar8) = 0;
                            *(undefined4 *)(iVar12 + 4 + iVar8) = 0;
                          }
                          else {
                            *(undefined1 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                        }
                        iStack_17dc = *piVar15;
                        if (*(int *)(iStack_17dc + 0x10) == 0) {
                          iVar8 = *(int *)(iStack_17dc + 0x1c);
                          piVar15[3] = piVar15[3] + -1;
                          piVar15[10] = iVar8 + piVar15[10];
                          iStack_17e0 = piVar15[0xe];
                        }
                        else {
                          iVar1 = piVar15[4];
                          iVar8 = *(int *)(iStack_17dc + 0x2c);
                          piVar15[4] = iVar1 + 1;
                          if (iVar8 <= iVar1 + 1) {
                            iVar8 = *(int *)(iStack_17dc + 0x1c);
                            piVar15[3] = piVar15[3] + -1;
                            piVar15[4] = 0;
                            piVar15[10] = iVar8 + piVar15[10];
                            iStack_17e0 = piVar15[0xe];
                          }
                        }
                        goto LAB_1000b3e3;
                      }
                    }
                    else {
                      iVar8 = *(int *)(iVar1 + 0x78) + 0x114 + sStack_17c8;
                      iStack_17dc = iVar8;
                      piVar14 = (int *)0x0;
                    }
                    iStack_17dc = iVar8;
                    if (param_4 < *(int *)(iVar8 + 0x58)) {
                      uVar5 = FUN_10003330(iVar8);
                      pcVar21 = 
                      "; invalid cut-off version: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; invalid cut-off version: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                                                  ,param_4,*(undefined4 *)(iVar8 + 0x58),uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010401;
                      break;
                    }
                    iStack_17cc = iStack_17cc + 1;
                    piVar18 = piVar15 + 0x2f;
                    piVar15[0x32] = (int)piStack_17c4;
                    iVar12 = *(int *)(iVar8 + 100);
                    piVar15[0x38] = 0;
                    *piVar18 = iVar8;
                    piVar15[0x33] = (int)piVar14;
                    piVar15[0x39] = (int)puVar17;
                    piVar15[0x3b] = (int)puVar19;
                    if (iVar12 == 0) {
                      iVar12 = *(int *)(iVar1 + 0x50);
                      if (iVar12 == 0) {
                        piVar15[0x34] = 0;
                      }
                      else {
                        iVar2 = *(int *)(iVar1 + 0x54);
                        piVar15[0x34] = iVar12;
                        if (iVar2 == -1) {
                          iVar12 = *(int *)(iVar1 + 0x48);
                          if (iVar12 < *(int *)(iVar1 + 0x28)) {
                            piVar15[0x3c] = piVar15[0xc] + iVar12;
                          }
                          else {
                            iVar12 = iVar12 - *(int *)(iVar1 + 0x28);
                            piVar15[0x35] = iVar12;
                            piVar15[0x3c] = (int)(iVar12 + (int)puVar19);
                          }
                        }
                        else {
                          piVar15[0x3c] = (int)puVar19;
                          puVar19 = (uint *)((int)puVar19 + iVar12);
                          puStack_17e8 = puVar19;
                          piVar15[0x35] = -iVar12;
                        }
                      }
                    }
                    else {
                      iVar2 = *(int *)(iVar8 + 0x68);
                      piVar15[0x34] = iVar12;
                      if (iVar2 == -1) {
                        iVar12 = *(int *)(iVar8 + 0x5c);
                        piVar15[0x3c] = (int)(iVar12 + (int)puVar19);
                        piVar15[0x35] = iVar12;
                      }
                      else {
                        piVar15[0x3c] = (int)puVar19;
                        puVar19 = (uint *)((int)puVar19 + iVar12);
                        piVar15[0x35] = -iVar12;
                        puStack_17e8 = puVar19;
                      }
                    }
                    iVar12 = *(int *)(iVar8 + 0x74);
                    piVar15[0x3b] = (int)puVar19;
                    piVar15[0x3a] = (int)puStack_17d4;
                    piVar15[0x30] = iVar1;
                    piVar15[0x3d] = 1;
                    if (iVar12 != 0) {
                      piStack_17f4 = (int *)(*(int *)(iVar8 + 0x70) + (int)puVar17);
                      if ((int)puStack_17d4 - (int)piStack_17f4 < iVar12) {
                        uVar5 = FUN_10003330(iVar8,puVar17,puStack_17d4,*(int *)(iVar8 + 0x70),
                                             iVar12);
                        pcVar21 = 
                        "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                        ;
                        sVar20 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                                                  ,uVar5);
                        _snprintf(pcVar6,sVar20,pcVar21);
                        local_17ec = 0x82010407;
                      }
                      else if (iVar12 == 2) {
                        *(undefined2 *)piStack_17f4 = (undefined2)param_4;
                      }
                      else if (iVar12 == 4) {
                        *piStack_17f4 = param_4;
                      }
                      else if (iVar12 == 8) {
                        *piStack_17f4 = param_4;
                        piStack_17f4[1] = param_4 >> 0x1f;
                      }
                      else {
                        *(undefined1 *)piStack_17f4 = uVar3;
                      }
                    }
                    if ((local_17ec & 0x80000000) != 0) {
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910();
                      sVar20 = strnlen(pcVar6,sVar20);
                      if ((int)sVar20 < 0x400) {
                        sVar7 = 0x400 - sVar20;
                      }
                      else {
                        sVar7 = 0;
                      }
                      pcVar6 = "; %s:%d";
                      iVar8 = FUN_1000f910(sVar7,"; %s:%d","lib_src\\tdr\\tdr_net.c",0x1da);
                      _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
                      break;
                    }
                  }
                  else {
                    if (iVar8 == 0x15) {
                      piStack_17e4 = (int *)0x0;
                      do {
                        puVar17 = puStack_17d8;
                        piStack_17f4 = *(int **)(iStack_17f0 + 0x20);
                        if (piStack_17f4 == (int *)0x0) {
                          piStack_17f4 = (int *)((int)puStack_17d4 - (int)puStack_17d8);
                        }
                        sVar20 = strnlen((char *)puStack_17d8,(size_t)piStack_17f4);
                        if ((int)piStack_17f4 <= (int)sVar20) {
                          pcVar21 = 
                          "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                          ;
                          sVar7 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                                  ,sVar20,piStack_17f4,puVar19,puStack_17d0,
                                                  *(undefined4 *)(iStack_17f0 + 0x20));
                          _snprintf(pcVar6,sVar7,pcVar21);
                          local_17ec = 0x82010406;
                          break;
                        }
                        piVar14 = (int *)(sVar20 + 1);
                        if ((int)puStack_17d0 - (int)puVar19 <
                            *(int *)(iStack_17f0 + 0x50) + (int)piVar14) {
                          uVar5 = *(undefined4 *)(iStack_17f0 + 0x50);
                          goto LAB_1000af3b;
                        }
                        uStack_17a0 = (int)piVar14 >> 0x1f;
                        piStack_17a4 = piVar14;
                        if ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <
                             (int)uStack_17a0) ||
                           ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <=
                             (int)uStack_17a0 &&
                            (*(int **)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8) < piVar14))
                           )) {
                          uVar5 = *(undefined4 *)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8);
                          goto LAB_1000af6e;
                        }
                        iVar8 = *(int *)(iStack_17f0 + 0x50);
                        if (iVar8 == 2) {
                          *(ushort *)puVar19 = (ushort)piVar14 << 8 | (ushort)piVar14 >> 8;
                        }
                        else if (iVar8 == 4) {
                          *puVar19 = ((uint)piVar14 & 0xff0000 | (uint)piVar14 >> 0x10) >> 8 |
                                     ((int)piVar14 * 0x10000 | (uint)piVar14 & 0xff00) << 8;
                        }
                        else if (iVar8 == 8) {
                          puStack_17e8[1] =
                               ((int)piVar14 * 0x10000 |
                               (((uint)piVar14 & 0xff00) << 0x10 | (uint)piVar14 & 0xff0000) >> 0x10
                               ) << 8 | (uint)piVar14 >> 0x18;
                          *puStack_17e8 =
                               (uStack_17a0 >> 0x10 |
                               ((uStack_17a0 & 0xff0000) >> 0x10 | uStack_17a0 & 0xff00) << 0x10) >>
                               8 | uStack_17a0 << 0x18;
                          puVar17 = puStack_17d8;
                          puVar19 = puStack_17e8;
                        }
                        else {
                          *(char *)puVar19 = (char)piVar14;
                        }
                        puVar4 = (undefined1 *)((int)puVar19 + *(int *)(iStack_17f0 + 0x50));
                        piStack_17c0 = piVar14;
                        memcpy(puVar4,puVar17,(size_t)piVar14);
                        puVar17 = (uint *)((int)puVar17 + (int)piStack_17f4);
                        piStack_17e4 = (int *)((int)piStack_17e4 + 1);
                        puVar19 = (uint *)(puVar4 + (int)piVar14);
                        puStack_17e8 = puVar19;
                        puStack_17d8 = puVar17;
                      } while ((int)piStack_17e4 < (int)piStack_17c4);
                    }
                    else if (iVar8 == 0x16) {
                      piStack_17e4 = (int *)0x0;
                      do {
                        puVar17 = puStack_17d8;
                        piStack_17f4 = *(int **)(iStack_17f0 + 0x20);
                        if (piStack_17f4 == (int *)0x0) {
                          piStack_17f4 = (int *)((int)puStack_17d4 - (int)puStack_17d8);
                        }
                        iVar8 = FUN_100108a0(puStack_17d8,piStack_17f4);
                        piVar14 = (int *)(iVar8 * 2 + 2);
                        piStack_17c0 = piVar14;
                        if ((int)piStack_17f4 < (int)piVar14) {
                          pcVar21 = 
                          "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                          ;
                          sVar20 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                                  ,piVar14,piStack_17f4,puVar19,puStack_17d0,
                                                  *(undefined4 *)(iStack_17f0 + 0x20));
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010406;
                          break;
                        }
                        if ((int)puStack_17d0 - (int)puVar19 <
                            *(int *)(iStack_17f0 + 0x50) + (int)piVar14) {
                          uVar5 = *(undefined4 *)(iStack_17f0 + 0x50);
LAB_1000af3b:
                          pcVar21 = 
                          "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
                          ;
                          sVar20 = 0x400;
                          piStack_17c0 = piVar14;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
                                                  ,piVar14,uVar5,puVar19,puStack_17d0);
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010402;
                          break;
                        }
                        uStack_17a8 = (int)piVar14 >> 0x1f;
                        piStack_17ac = piVar14;
                        if ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <
                             (int)uStack_17a8) ||
                           ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <=
                             (int)uStack_17a8 &&
                            (*(int **)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8) < piVar14))
                           )) {
                          uVar5 = *(undefined4 *)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8);
LAB_1000af6e:
                          pcVar21 = "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>";
                          sVar20 = 0x400;
                          piStack_17c0 = piVar14;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"
                                                  ,piVar14,uVar5);
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010479;
                          break;
                        }
                        iVar8 = *(int *)(iStack_17f0 + 0x50);
                        if (iVar8 == 2) {
                          *(ushort *)puVar19 = (ushort)piVar14 << 8 | (ushort)piVar14 >> 8;
                        }
                        else if (iVar8 == 4) {
                          *puVar19 = ((uint)piVar14 & 0xff0000 | (uint)piVar14 >> 0x10) >> 8 |
                                     ((int)piVar14 * 0x10000 | (uint)piVar14 & 0xff00) << 8;
                        }
                        else if (iVar8 == 8) {
                          puStack_17e8[1] =
                               ((int)piVar14 * 0x10000 |
                               (((uint)piVar14 & 0xff00) << 0x10 | (uint)piVar14 & 0xff0000) >> 0x10
                               ) << 8 | (uint)piVar14 >> 0x18;
                          *puStack_17e8 =
                               (uStack_17a8 >> 0x10 |
                               ((uStack_17a8 & 0xff0000) >> 0x10 | uStack_17a8 & 0xff00) << 0x10) >>
                               8 | uStack_17a8 << 0x18;
                          puVar17 = puStack_17d8;
                          puVar19 = puStack_17e8;
                        }
                        else {
                          *(char *)puVar19 = (char)piVar14;
                        }
                        puVar19 = (uint *)((int)puVar19 + *(int *)(iStack_17f0 + 0x50));
                        puStack_17e8 = puVar19;
                        if (piVar14 < (int *)0x41) {
                          piVar10 = piVar14;
                          if (piVar14 != (int *)0x0) {
                            do {
                              *(char *)puVar19 = (char)*puVar17;
                              puVar19 = (uint *)((int)puVar19 + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                              piVar10 = (int *)((int)piVar10 - 1);
                            } while (piVar10 != (int *)0x0);
                            goto LAB_1000ac9d;
                          }
                        }
                        else {
                          memcpy(puVar19,puVar17,(size_t)piVar14);
                          puVar17 = (uint *)((int)puVar17 + (int)piVar14);
                          puVar19 = (uint *)((int)puVar19 + (int)piVar14);
LAB_1000ac9d:
                          puStack_17e8 = puVar19;
                        }
                        puVar17 = (uint *)((int)puVar17 + ((int)piStack_17f4 - (int)piVar14));
                        piStack_17e4 = (int *)((int)piStack_17e4 + 1);
                        puStack_17d8 = puVar17;
                        puStack_17e8 = puVar19;
                      } while ((int)piStack_17e4 < (int)piStack_17c4);
                    }
                    else if (puStack_17d4 <
                             (uint *)(*(int *)(iVar1 + 0x18) * (int)piStack_17c4 + (int)puStack_17d8
                                     )) {
                      pcVar21 = 
                      "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                                  ,puStack_17d8,puStack_17d4,*(int *)(iVar1 + 0x18),
                                                  piStack_17c4);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010407;
                    }
                    else {
                      iVar8 = *(int *)(iVar1 + 0x1c);
                      if (puStack_17d0 < (uint *)(iVar8 * (int)piStack_17c4 + (int)puVar19)) {
                        pcVar21 = 
                        "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                        ;
                        sVar20 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                                                  ,puVar19,puStack_17d0,iVar8,piStack_17c4);
                        _snprintf(pcVar6,sVar20,pcVar21);
                        local_17ec = 0x82010402;
                      }
                      else if (iVar8 == 1) {
                        if ((int)piStack_17c4 < 0x41) {
                          if (piStack_17c4 != (int *)0x0) {
                            do {
                              *(char *)puVar19 = (char)*puVar17;
                              puVar19 = (uint *)((int)puVar19 + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                              piVar14 = (int *)((int)piVar14 + -1);
                            } while (piVar14 != (int *)0x0);
                            puStack_17e8 = puVar19;
                          }
                        }
                        else {
                          memcpy(puVar19,puStack_17d8,(size_t)piStack_17c4);
                          puVar17 = (uint *)((int)puVar17 + (int)piStack_17c4);
                          puVar19 = (uint *)((int)puVar19 + (int)piStack_17c4);
                          puStack_17e8 = puVar19;
                        }
                      }
                      else if (iVar8 == 2) {
                        do {
                          *(ushort *)puVar19 =
                               (ushort)*(byte *)((int)puVar17 + 1) | (short)*puVar17 << 8;
                          puVar19 = (uint *)((int)puVar19 + 2);
                          puVar17 = (uint *)((int)puVar17 + 2);
                          piVar14 = (int *)((int)piVar14 + -1);
                        } while (piVar14 != (int *)0x0);
                        puStack_17e8 = puVar19;
                      }
                      else if (iVar8 == 4) {
                        do {
                          uVar9 = *puVar17;
                          *puVar19 = (uVar9 & 0xff00 | uVar9 << 0x10) << 8 | uVar9 >> 8 & 0xff00 |
                                     (uint)*(byte *)((int)puVar17 + 3);
                          puVar19 = puVar19 + 1;
                          puVar17 = puVar17 + 1;
                          piVar14 = (int *)((int)piVar14 + -1);
                        } while (piVar14 != (int *)0x0);
                        puStack_17e8 = puVar19;
                      }
                      else {
                        piStack_17e4 = piStack_17c4;
                        do {
                          uVar9 = *puStack_17d8;
                          uStack_1788 = puStack_17d8[1];
                          *puStack_17e8 =
                               (uStack_1788 >> 0x10 & 0xff | uStack_1788 & 0xff00) << 8 |
                               uStack_1788 << 0x18 | (uint)*(byte *)((int)puStack_17d8 + 7);
                          puStack_17e8[1] =
                               (uVar9 << 0x10 |
                               ((uVar9 & 0xff00) << 0x10 | uVar9 & 0xff0000) >> 0x10) << 8 |
                               uVar9 >> 0x18;
                          puVar19 = puStack_17e8 + 2;
                          puVar17 = puStack_17d8 + 2;
                          piStack_17e4 = (int *)((int)piStack_17e4 + -1);
                          puStack_17e8 = puVar19;
                          puStack_17d8 = puVar17;
                        } while (piStack_17e4 != (int *)0x0);
                      }
                    }
                    if ((local_17ec & 0x80000000) != 0) {
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910();
                      sVar20 = strnlen(pcVar6,sVar20);
                      if ((int)sVar20 < 0x400) {
                        sVar7 = 0x400 - sVar20;
                      }
                      else {
                        sVar7 = 0;
                      }
                      uVar5 = FUN_10003330(iStack_17dc,"lib_src\\tdr\\tdr_net.c",0x195);
                      uVar5 = FUN_10004f00(iStack_17f0,uVar5);
                      pcVar6 = "; entry<%s> of meta<%s> %s:%d";
                      iVar8 = FUN_1000f910(sVar7,"; entry<%s> of meta<%s> %s:%d",uVar5);
                      _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
                      break;
                    }
                    if ((*(byte *)(iStack_17f0 + 0x44) & 4) == 0) {
                      piVar15[9] = (int)puVar17 - piVar15[10];
                    }
                    else {
                      piVar15[9] = *(int *)(iStack_17f0 + 0x2c) * 2;
                    }
                    if (*(int *)(iStack_17dc + 0x10) == 0) {
                      iVar8 = *(int *)(iStack_17dc + 0x1c);
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = iVar8 + piVar15[10];
                      iStack_17e0 = piVar15[0xe];
                    }
                    else {
                      iVar1 = piVar15[4];
                      iVar8 = *(int *)(iStack_17dc + 0x2c);
                      piVar15[4] = iVar1 + 1;
                      if (iVar8 <= iVar1 + 1) {
                        iVar8 = *(int *)(iStack_17dc + 0x1c);
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[4] = 0;
                        piVar15[10] = iVar8 + piVar15[10];
                        iStack_17e0 = piVar15[0xe];
                      }
                    }
                  }
                }
              }
              else if (*(int *)(iStack_17dc + 0x10) == 0) {
                piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                piVar15[3] = iVar8 + -1;
                iStack_17e0 = piVar15[0xe];
              }
              else {
                iVar1 = *(int *)(iStack_17dc + 0x2c);
                piVar15[4] = iVar12 + 1;
                if (iVar1 <= iVar12 + 1) {
                  piVar15[4] = 0;
                  goto LAB_1000a6c6;
                }
              }
            }
LAB_1000b3e3:
            piVar15 = piVar18;
          } while (0 < iStack_17cc);
          local_179c[1] = iStack_1760;
          if (((int)local_17ec < 0) && (iVar8 = 1, 1 < iStack_17cc)) {
            piVar15 = aiStack_16a4;
            do {
              if ((*(byte *)(piVar15[-8] + 0x44) & 4) != 0) {
                local_179c[1] = local_179c[1] + *(int *)(aiStack_1784[iVar8 * 0x2f + 1] + 0x18);
                goto LAB_1000b69c;
              }
              local_179c[1] = local_179c[1] + *piVar15;
              iVar8 = iVar8 + 1;
              piVar15 = piVar15 + 0x2f;
            } while (iVar8 < iStack_17cc);
            local_17b8[1] = (int)puVar19 - *local_17b8;
          }
          else {
LAB_1000b69c:
            local_17b8[1] = (int)puVar19 - *local_17b8;
          }
        }
        else {
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910();
          sVar20 = strnlen(pcVar6,sVar20);
          if ((int)sVar20 < 0x400) {
            sVar7 = 0x400 - sVar20;
          }
          else {
            sVar7 = 0;
          }
          pcVar6 = "; %s:%d";
          iVar8 = FUN_1000f910(sVar7,"; %s:%d","lib_src\\tdr\\tdr_net.c",0xf6);
          _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
          local_179c[1] = 0;
          local_17b8[1] = 0;
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1000b780 @ 1000b780  size=6140 ===== */
// calls: __alloca_probe, _snprintf, memset, memcpy, strnlen
// strings:
//   "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>'s versionindicator"
//   "; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and indicator<%d> NOT less than min_ver<%d> of meta<%s>'s versionindicator, a_iVersion<%d>"
//   "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
//   "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
//   "; has NO sapce for wstring's null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
//   "; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>, net_start<%p> length<%d> sizeinfo<%u>"
//   "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)"
//   "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
//   "; has NO sapce for string's null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
//   "; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>, net_start<%p> length<%d> sizeinfo<%u>"
//   "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> sizeinfo<%d> entry<%s> meta<%s> unpacked_entry_count<%d>"
//   "; failed to set default value, entry<%s>, count<%d>, meta<%s>, pszHostStart<%p>, pszHostEnd<%p>"
//   "lib_src\\tdr\\tdr_net.c"
//   "; entry<%s> of meta<%s> %s:%d"
//   "; meta<%s> is too complex, contains more than %d layers of children"
//   "; invalid cut-off version: expect cut-off version<%d> NOT less than max(base_ver<%d>, min_ver<%d>) about meta<%s>"
//   "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
//   "; invalid parameter: expect a_iVersion<%d> in [base_ver<%d>, cur_ver<%d>] of meta<%s>"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, _snprintf, memset, memcpy, strnlen
   strings:
     ""; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>'s
   versionindicator""
     ""; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and
   indicator<%d> NOT less than m…"
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>,
   sizeinfo<%u>)""
     ""; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)""
     ""; has NO sapce for wstring's null: length<%d> buffer_size<%d>, start<%p> end<%p>
   custom_size<%u>)""
     ""; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>,
   net_start<%p> length<%d> siz…"
     ""; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)""
     ""; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>,
   sizeinfo<%u>)"" */

void FUN_1000b780(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  ushort *puVar16;
  uint *puVar17;
  uint *_Src;
  int *piVar18;
  size_t _Count;
  size_t sVar19;
  size_t sVar20;
  char *pcVar21;
  size_t sStack_180c;
  int iStack_1808;
  uint local_1804;
  uint *puStack_1800;
  uint *puStack_17fc;
  uint *puStack_17f8;
  uint uStack_17f4;
  uint *puStack_17f0;
  uint *puStack_17ec;
  uint *puStack_17e8;
  int iStack_17e4;
  int iStack_17e0;
  uint uStack_17dc;
  uint uStack_17d8;
  uint *puStack_17d4;
  uint uStack_17d0;
  uint uStack_17cc;
  uint uStack_17c8;
  uint uStack_17c4;
  int iStack_17c0;
  int *piStack_17bc;
  int local_17b8;
  int *local_17b4;
  int *local_17b0;
  uint uStack_17ac;
  undefined4 uStack_17a0;
  uint uStack_1798;
  uint uStack_1794;
  undefined4 uStack_1788;
  int aiStack_1784 [8];
  uint uStack_1764;
  int iStack_1760;
  int iStack_175c;
  byte *pbStack_1758;
  uint *puStack_1754;
  uint *puStack_1750;
  undefined4 uStack_174c;
  int aiStack_16a4 [1448];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&sStack_180c;
  local_17b8 = param_1;
  local_17b4 = param_2;
  local_17b0 = param_3;
  local_1804 = 0;
  puVar4 = (undefined1 *)FUN_1000f910();
  *puVar4 = 0;
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) || (param_3 == (int *)0x0)) ||
     (param_2 == (int *)0x0)) {
    pcVar21 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar20 = 0x400;
    pcVar6 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_3,param_2);
    _snprintf(pcVar6,sVar20,pcVar21);
    FUN_11a89daa();
    return;
  }
  _Src = (uint *)*param_3;
  if (_Src != (uint *)0x0) {
    puStack_17f8 = (uint *)param_3[1];
    if ((puStack_17f8 != (uint *)0x0) && (iVar11 = *param_2, iVar11 != 0)) {
      puStack_17fc = (uint *)param_2[1];
      if (puStack_17fc != (uint *)0x0) {
        if ((param_4 == 0) || (uVar7 = *(uint *)(param_1 + 0xc), (int)uVar7 < (int)param_4)) {
          uVar7 = *(uint *)(param_1 + 0xc);
          param_4 = uVar7;
        }
        if (((int)param_4 < *(int *)(param_1 + 8)) || ((int)uVar7 < (int)param_4)) {
          uVar5 = FUN_10003330(param_1);
          pcVar21 = 
          "; invalid parameter: expect a_iVersion<%d> in [base_ver<%d>, cur_ver<%d>] of meta<%s>";
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; invalid parameter: expect a_iVersion<%d> in [base_ver<%d>, cur_ver<%d>] of meta<%s>"
                                        ,param_4,*(undefined4 *)(param_1 + 8),
                                        *(undefined4 *)(param_1 + 0xc),uVar5);
          _snprintf(pcVar6,sVar20,pcVar21);
        }
        else {
          iVar14 = *(int *)(param_1 + 0x74);
          if ((iVar14 == 0) || (*(int *)(param_1 + 0x58) <= (int)param_4)) {
            puStack_17e8 = (uint *)((int)puStack_17f8 + (int)_Src);
            iStack_17c0 = (param_1 - *(int *)(param_1 + 0x3c)) + -0x114;
            pbStack_1758 = (byte *)((int)puStack_17fc + iVar11);
            aiStack_1784[5] = *(int *)(param_1 + 100);
            iStack_1808 = param_1;
            piStack_17bc = aiStack_1784;
            aiStack_1784[0] = param_1;
            aiStack_1784[3] = 1;
            aiStack_1784[4] = 0;
            puStack_1754 = _Src;
            iStack_175c = iVar11;
            if (aiStack_1784[5] == 0) {
              aiStack_1784[5] = 0;
              aiStack_1784[6] = 0;
              puStack_1750 = (uint *)0x0;
            }
            else if (*(int *)(param_1 + 0x68) == -1) {
              puStack_1750 = (uint *)(*(int *)(param_1 + 0x5c) + (int)_Src);
            }
            else {
              puStack_1750 = _Src;
              _Src = (uint *)((int)_Src + aiStack_1784[5]);
            }
            if (iVar14 == 0) {
              uStack_1764 = param_4;
              goto LAB_1000bb1f;
            }
            puStack_17f8 = (uint *)(*(int *)(param_1 + 0x6c) + (int)_Src);
            if ((int)puStack_17e8 - (int)puStack_17f8 < iVar14) {
LAB_1000ba9b:
              uStack_1764 = param_4;
              uVar7 = param_4;
            }
            else {
              if (iVar14 == 2) {
                uStack_1764 = ((ushort)*puStack_17f8 & 0xff) << 8 |
                              (uint)(ushort)((ushort)*puStack_17f8 >> 8);
LAB_1000ba89:
                uStack_17c4 = (int)uStack_1764 >> 0x1f;
              }
              else {
                if (iVar14 == 4) {
                  uVar7 = *puStack_17f8;
                  uStack_1764 = uVar7 >> 8 & 0xff00 | (uint)*(byte *)((int)puStack_17f8 + 3) |
                                (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
                  goto LAB_1000ba89;
                }
                if (iVar14 != 8) {
                  uStack_1764 = (uint)(byte)*puStack_17f8;
                  goto LAB_1000ba89;
                }
                uStack_17dc = *puStack_17f8;
                uStack_17d8 = puStack_17f8[1];
                uStack_1764 = (uStack_17d8 >> 0x10 & 0xff | uStack_17d8 & 0xff00) << 8 |
                              uStack_17d8 << 0x18 | (uint)*(byte *)((int)puStack_17f8 + 7);
                uStack_17c8 = uStack_1764;
                uStack_17c4 = (uStack_17dc << 0x10 |
                              ((uStack_17dc & 0xff00) << 0x10 | uStack_17dc & 0xff0000) >> 0x10) <<
                              8 | uStack_17dc >> 0x18;
                param_1 = local_17b8;
              }
              uVar7 = uStack_1764;
              if (uStack_1764 == 0) goto LAB_1000ba9b;
            }
            uStack_1764 = uVar7;
            if (((*(int *)(param_1 + 8) <= (int)uVar7) && ((int)uVar7 <= *(int *)(param_1 + 0xc)))
               && (*(int *)(param_1 + 0x58) <= (int)uVar7)) {
LAB_1000bb1f:
              iStack_17e0 = 1;
              iStack_1760 = 0;
              uStack_174c = 1;
              aiStack_1784[1] = 0;
              iStack_17e4 = 0;
              piVar15 = aiStack_1784;
LAB_1000bb50:
              iVar11 = iStack_1808;
              if (iStack_17e4 != 0) {
                iVar14 = piVar15[5];
                iStack_17e4 = 0;
                if (iVar14 != 0) {
                  if (iVar14 == 2) {
                    uVar7 = (*(ushort *)piVar15[0xd] & 0xff) << 8 |
                            (uint)(*(ushort *)piVar15[0xd] >> 8);
LAB_1000bc8b:
                    uStack_17f4 = (int)uVar7 >> 0x1f;
                  }
                  else {
                    if (iVar14 == 4) {
                      uVar7 = *(uint *)piVar15[0xd];
                      uVar7 = uVar7 >> 8 & 0xff00 | (uint)*(byte *)(piVar15[0xd] + 3) |
                              (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
                      goto LAB_1000bc8b;
                    }
                    if (iVar14 != 8) {
                      uVar7 = (uint)*(byte *)piVar15[0xd];
                      goto LAB_1000bc8b;
                    }
                    uVar12 = *(uint *)piVar15[0xd];
                    uStack_1798 = ((uint *)piVar15[0xd])[1];
                    puStack_17f8 = (uint *)0x0;
                    uVar7 = (uStack_1798 >> 0x10 & 0xff | uStack_1798 & 0xff00) << 8 |
                            uStack_1798 << 0x18 | (uint)*(byte *)(piVar15[0xd] + 7);
                    uStack_17ac = uVar7;
                    uStack_17f4 = (uVar12 << 0x10 |
                                  ((uVar12 & 0xff00) << 0x10 | uVar12 & 0xff0000) >> 0x10) << 8 |
                                  uVar12 >> 0x18;
                  }
                  _Src = (uint *)(piVar15[0xc] + uVar7);
                  if (puStack_17e8 < _Src) {
                    uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                    uVar5 = FUN_10004f00(piVar15[1],uVar5);
                    pcVar21 = 
                    "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> sizeinfo<%d> entry<%s> meta<%s> unpacked_entry_count<%d>"
                    ;
                    sVar20 = 0x400;
                    pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> sizeinfo<%d> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                  ,_Src,puStack_17e8,uVar7,uVar5);
                    _snprintf(pcVar6,sVar20,pcVar21);
                    local_1804 = 0x82010402;
                    goto LAB_1000ce7e;
                  }
                }
                if (0 < piVar15[3]) {
                  if (piVar15[5] != 0) {
                    iVar14 = piVar15[6];
                    if (iVar14 < 0) {
                      piVar15[0xd] = (int)_Src;
                      _Src = (uint *)((int)_Src - iVar14);
                    }
                    else {
                      piVar15[0xd] = (int)(iVar14 + (int)_Src);
                    }
                  }
                  piVar15[0xc] = (int)_Src;
                }
                if (1 < iStack_17e0) {
                  if ((*(byte *)(piVar15[1] + 0x44) & 4) == 0) {
                    piVar15[-0x26] = piVar15[-0x26] + *(int *)(iStack_1808 + 0x1c);
                  }
                  else {
                    piVar15[-0x26] = piVar15[-0x26] + *(int *)(piVar15[1] + 0x18);
                  }
                  piVar15[9] = 0;
                }
              }
              iVar1 = local_17b8;
              iVar14 = piVar15[3];
              if (iVar14 < 1) {
                iStack_17e0 = iStack_17e0 + -1;
                piVar18 = piVar15 + -0x2f;
                piStack_17bc = piVar18;
                if (0 < iStack_17e0) {
                  iVar11 = *piVar18;
                  iStack_1808 = iVar11;
                  if (*(int *)(iVar11 + 0x10) == 0) {
                    iVar11 = *(int *)(iVar11 + 0x1c);
                    piVar15[-0x2c] = piVar15[-0x2c] + -1;
                    piVar15[-0x25] = piVar15[-0x25] + iVar11;
                    iStack_17e4 = piVar15[-0x21];
                  }
                  else {
                    piVar15[-0x2b] = piVar15[-0x2b] + 1;
                    if (*(int *)(iVar11 + 0x2c) <= piVar15[-0x2b]) {
                      iVar11 = *(int *)(iVar11 + 0x1c);
                      piVar15[-0x2c] = piVar15[-0x2c] + -1;
                      piVar15[-0x25] = piVar15[-0x25] + iVar11;
                      piVar15[-0x2b] = 0;
                      iStack_17e4 = piVar15[-0x21];
                    }
                  }
                  goto LAB_1000ccb0;
                }
              }
              else {
                iVar2 = piVar15[4];
                sVar20 = iVar2 * 0xb4 + 0xb8 + iVar11;
                sStack_180c = sVar20;
                piVar18 = piVar15;
                if ((*(ushort *)(sVar20 + 0x44) & 2) != 0) {
                  if (*(int *)(iVar11 + 0x10) == 0) {
                    piVar15[10] = piVar15[10] + *(int *)(iVar11 + 0x1c);
                    piVar15[3] = iVar14 + -1;
                    iStack_17e4 = piVar15[0xe];
                  }
                  else {
                    iVar1 = *(int *)(iVar11 + 0x2c);
                    piVar15[4] = iVar2 + 1;
                    if (iVar1 <= iVar2 + 1) {
                      piVar15[10] = piVar15[10] + *(int *)(iVar11 + 0x1c);
                      piVar15[4] = 0;
                      piVar15[3] = iVar14 + -1;
                      iStack_17e4 = piVar15[0xe];
                    }
                  }
                  goto LAB_1000ccb0;
                }
                iVar11 = *(int *)(sVar20 + 0x58);
                if (iVar11 == 0) {
                  puStack_17f0 = *(uint **)(sVar20 + 0x24);
                }
                else {
                  puVar16 = (ushort *)(*(int *)(sVar20 + 0x5c) + piVar15[10]);
                  if (iVar11 == 2) {
                    uStack_17f4 = 0;
                    puStack_17f0 = (uint *)(uint)*puVar16;
                  }
                  else if (iVar11 == 4) {
                    uStack_17f4 = (int)*(uint **)puVar16 >> 0x1f;
                    puStack_17f0 = *(uint **)puVar16;
                  }
                  else if (iVar11 == 8) {
                    uStack_17f4 = *(uint *)(puVar16 + 2);
                    puStack_17f0 = *(uint **)puVar16;
                  }
                  else {
                    uStack_17f4 = 0;
                    puStack_17f0 = (uint *)(uint)(byte)*puVar16;
                  }
                }
                puVar17 = puStack_17f0;
                if (((int)puStack_17f0 < 0) ||
                   ((*(int *)(sVar20 + 0x24) < (int)puStack_17f0 && (0 < *(int *)(sVar20 + 0x24)))))
                {
                  uVar5 = FUN_10003330(iStack_1808);
                  uVar5 = FUN_10004f00(sVar20,uVar5);
                  pcVar21 = 
                  "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                  ;
                  sVar19 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                                                ,puVar17,*(undefined4 *)(sVar20 + 0x24),uVar5);
                  _snprintf(pcVar6,sVar19,pcVar21);
                  local_1804 = 0x82010403;
                  piVar15[9] = *(int *)(sVar20 + 0x2c);
                }
                else {
                  if (puStack_17f0 == (uint *)0x0) {
                    if (*(int *)(iStack_1808 + 0x10) == 0) {
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = piVar15[10] + *(int *)(iStack_1808 + 0x1c);
                      iStack_17e4 = piVar15[0xe];
                    }
                    else {
                      iVar11 = *(int *)(iStack_1808 + 0x2c);
                      piVar15[4] = iVar2 + 1;
                      if (iVar11 <= iVar2 + 1) {
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[10] = piVar15[10] + *(int *)(iStack_1808 + 0x1c);
                        piVar15[4] = 0;
                        iStack_17e4 = piVar15[0xe];
                      }
                    }
                    goto LAB_1000ccb0;
                  }
                  puStack_17ec = (uint *)(*(int *)(sVar20 + 0x2c) + piVar15[10]);
                  if ((*(ushort *)(sVar20 + 0x44) & 4) == 0) {
                    puStack_17d4 = (uint *)piVar15[0xb];
                  }
                  else {
                    puStack_17ec = (uint *)*puStack_17ec;
                    if (*(int *)(sVar20 + 8) < 2) {
                      puStack_17d4 = (uint *)(*(int *)(*(int *)(sVar20 + 0x78) + 0x130 + iStack_17c0
                                                      ) + (int)puStack_17ec);
                    }
                    else {
                      puStack_17d4 = (uint *)(*(int *)(sVar20 + 0x14) + (int)puStack_17ec);
                    }
                  }
                  puVar17 = puStack_17ec;
                  if (piVar15[8] < *(int *)(sVar20 + 4)) {
                    if (*(int *)(sVar20 + 0x98) == -1) {
                      iVar11 = *(int *)(sVar20 + 0x20);
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 0x18);
                      }
                      sStack_180c = iVar11 * (int)puStack_17f0;
                      if ((int)puStack_17d4 - (int)puStack_17ec < (int)sStack_180c) {
                        local_1804 = 0x82010407;
                        puVar17 = (uint *)((int)puStack_17ec + sStack_180c);
                      }
                      else {
                        memset(puStack_17ec,0,sStack_180c);
                        puVar17 = (uint *)((int)puVar17 + sStack_180c);
                      }
                    }
                    else {
                      if ((*(int *)(sVar20 + 8) == 0x15) || (*(int *)(sVar20 + 8) == 0x16)) {
                        sStack_180c = *(size_t *)(sVar20 + 0x20);
                        if (sStack_180c == 0) {
                          sStack_180c = (int)puStack_17d4 - (int)puStack_17ec;
                        }
                      }
                      else {
                        sStack_180c = *(size_t *)(sVar20 + 0x18);
                      }
                      sVar19 = (int)puStack_17d4 - (int)puStack_17ec;
                      if ((int)sVar19 < (int)sStack_180c) {
                        sStack_180c = sVar19;
                      }
                      uVar7 = *(uint *)(sVar20 + 0x8c);
                      if ((int)sStack_180c < (int)uVar7) {
                        local_1804 = 0x82010407;
                      }
                      else {
                        puStack_17f8 = (uint *)(*(int *)(sVar20 + 0x98) + 0x114 + iStack_17c0);
                        if (0 < (int)puStack_17f0) {
                          puStack_17fc = puStack_17f0;
                          do {
                            if (uVar7 < 0x41) {
                              uVar12 = 0;
                              puVar13 = puStack_17f8;
                              if (uVar7 != 0) {
                                do {
                                  *(byte *)puVar17 = (byte)*puVar13;
                                  uVar12 = uVar12 + 1;
                                  puVar17 = (uint *)((int)puVar17 + 1);
                                  puVar13 = (uint *)((int)puVar13 + 1);
                                } while (uVar12 < *(uint *)(sVar20 + 0x8c));
                              }
                            }
                            else {
                              memcpy(puVar17,puStack_17f8,uVar7);
                              puVar17 = (uint *)((int)puVar17 + *(int *)(sVar20 + 0x8c));
                            }
                            uVar7 = *(uint *)(sVar20 + 0x8c);
                            puVar17 = (uint *)((int)puVar17 + (sStack_180c - uVar7));
                            puStack_17fc = (uint *)((int)puStack_17fc + -1);
                          } while (puStack_17fc != (uint *)0x0);
                        }
                      }
                    }
                    if ((local_1804 & 0x80000000) == 0) {
                      if (*(int *)(iStack_1808 + 0x10) == 0) {
                        iVar11 = *(int *)(iStack_1808 + 0x1c);
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[10] = iVar11 + piVar15[10];
                        iStack_17e4 = piVar15[0xe];
                      }
                      else {
                        iVar14 = piVar15[4];
                        iVar11 = *(int *)(iStack_1808 + 0x2c);
                        piVar15[4] = iVar14 + 1;
                        if (iVar11 <= iVar14 + 1) {
                          iVar11 = *(int *)(iStack_1808 + 0x1c);
                          piVar15[3] = piVar15[3] + -1;
                          piVar15[4] = 0;
                          piVar15[10] = iVar11 + piVar15[10];
                          iStack_17e4 = piVar15[0xe];
                        }
                      }
                      goto LAB_1000ccb0;
                    }
                    uVar5 = FUN_10003330(iStack_1808,puVar17,puStack_17d4);
                    uVar5 = FUN_10004f00(sVar20,puStack_17f0,uVar5);
                    pcVar21 = 
                    "; failed to set default value, entry<%s>, count<%d>, meta<%s>, pszHostStart<%p>, pszHostEnd<%p>"
                    ;
                    sVar19 = 0x400;
                    pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; failed to set default value, entry<%s>, count<%d>, meta<%s>, pszHostStart<%p>, pszHostEnd<%p>"
                                                  ,uVar5);
                    _snprintf(pcVar6,sVar19,pcVar21);
                    piVar15[9] = *(int *)(sVar20 + 0x2c);
                  }
                  else {
                    iVar11 = *(int *)(sVar20 + 8);
                    if (1 < iVar11) {
                      if (iVar11 == 0x15) {
                        puStack_17f8 = (uint *)0x0;
                        if (0 < (int)puStack_17f0) {
                          do {
                            puVar17 = puStack_17ec;
                            puStack_1800 = *(uint **)(sStack_180c + 0x20);
                            if (puStack_1800 == (uint *)0x0) {
                              puStack_1800 = (uint *)((int)puStack_17d4 - (int)puStack_17ec);
                            }
                            iVar11 = *(int *)(sStack_180c + 0x50);
                            puVar13 = (uint *)(iVar11 + (int)_Src);
                            puStack_17fc = puVar13;
                            if (puStack_17e8 <= puVar13) goto LAB_1000c72d;
                            if (iVar11 == 2) {
                              puVar8 = (uint *)(((ushort)*_Src & 0xff) << 8 |
                                               (uint)(ushort)((ushort)*_Src >> 8));
LAB_1000c674:
                              uVar7 = (int)puVar8 >> 0x1f;
                            }
                            else {
                              if (iVar11 == 4) {
                                uVar7 = *_Src;
                                puVar8 = (uint *)(uVar7 >> 8 & 0xff00 |
                                                  (uint)*(byte *)((int)_Src + 3) |
                                                 (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
                                goto LAB_1000c674;
                              }
                              if (iVar11 != 8) {
                                puVar8 = (uint *)(uint)(byte)*_Src;
                                goto LAB_1000c674;
                              }
                              uStack_17d0 = *_Src;
                              uStack_17cc = _Src[1];
                              puVar8 = (uint *)((uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00)
                                                << 8 | uStack_17cc << 0x18 |
                                               (uint)*(byte *)((int)_Src + 7));
                              uStack_17a0 = 0;
                              uVar7 = (uStack_17d0 << 0x10 |
                                      ((uStack_17d0 & 0xff00) << 0x10 | uStack_17d0 & 0xff0000) >>
                                      0x10) << 8 | uStack_17d0 >> 0x18;
                            }
                            if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (puVar8 == (uint *)0x0)))) {
                              pcVar21 = 
                              "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
                                                  ,puVar8,_Src,*(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            puVar10 = (uint *)(*(int *)(sStack_180c + 0x50) + (int)puVar8);
                            if ((int)puStack_17e8 - (int)_Src < (int)puVar10) {
                              uVar5 = *(undefined4 *)(sStack_180c + 0x50);
                              puStack_17ec = puVar10;
                              goto LAB_1000c4b6;
                            }
                            if (((int)puStack_1800 >> 0x1f < (int)uVar7) ||
                               (((int)puStack_1800 >> 0x1f <= (int)uVar7 && (puStack_1800 < puVar8))
                               )) {
                              pcVar21 = 
                              "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                              ;
                              sVar20 = 0x400;
                              puStack_17ec = puVar10;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                                  ,puVar8,puStack_1800,_Src,puStack_17e8,
                                                  *(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if (((byte *)((int)puVar10 + -1))[(int)_Src] != 0) {
                              iVar11 = *(int *)(sStack_180c + 0x50);
                              uVar7 = (uint)(char)((byte *)((int)puVar8 + iVar11 + -1))[(int)_Src];
                              pcVar6 = 
                              "; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>, net_start<%p> length<%d> sizeinfo<%u>"
                              ;
                              puStack_17ec = puVar10;
                              goto LAB_1000c7ed;
                            }
                            _Src = puVar13;
                            puVar3 = puVar8;
                            if (puVar8 < (uint *)0x41) {
                              for (; puVar3 != (uint *)0x0; puVar3 = (uint *)((int)puVar3 + -1)) {
                                *(byte *)puStack_17ec = (byte)*_Src;
                                puStack_17ec = (uint *)((int)puStack_17ec + 1);
                                _Src = (uint *)((int)_Src + 1);
                              }
                            }
                            else {
                              puStack_17ec = puVar10;
                              memcpy(puVar17,puVar13,(size_t)puVar8);
                              _Src = (uint *)((int)puVar13 + (int)puVar8);
                              puStack_17ec = (uint *)((int)puVar17 + (int)puVar8);
                            }
                            puVar17 = (uint *)((int)puStack_17ec + ((int)puStack_1800 - (int)puVar8)
                                              );
                            puStack_17f8 = (uint *)((int)puStack_17f8 + 1);
                            puStack_17ec = puVar17;
                            sVar20 = sStack_180c;
                          } while ((int)puStack_17f8 < (int)puStack_17f0);
                        }
                      }
                      else if (iVar11 == 0x16) {
                        puStack_17f8 = (uint *)0x0;
                        if (0 < (int)puStack_17f0) {
                          do {
                            puVar17 = puStack_17ec;
                            puStack_1800 = *(uint **)(sStack_180c + 0x20);
                            if (puStack_1800 == (uint *)0x0) {
                              puStack_1800 = (uint *)((int)puStack_17d4 - (int)puStack_17ec);
                            }
                            iVar11 = *(int *)(sStack_180c + 0x50);
                            puVar13 = (uint *)(iVar11 + (int)_Src);
                            puStack_17fc = puVar13;
                            if (puStack_17e8 <= puVar13) goto LAB_1000c72d;
                            if (iVar11 == 2) {
                              puVar8 = (uint *)(((ushort)*_Src & 0xff) << 8 |
                                               (uint)(ushort)((ushort)*_Src >> 8));
LAB_1000c3c2:
                              uVar7 = (int)puVar8 >> 0x1f;
                            }
                            else {
                              if (iVar11 == 4) {
                                uVar7 = *_Src;
                                puVar8 = (uint *)(uVar7 >> 8 & 0xff00 |
                                                  (uint)*(byte *)((int)_Src + 3) |
                                                 (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
                                goto LAB_1000c3c2;
                              }
                              if (iVar11 != 8) {
                                puVar8 = (uint *)(uint)(byte)*_Src;
                                goto LAB_1000c3c2;
                              }
                              uStack_17d0 = *_Src;
                              uStack_17cc = _Src[1];
                              puVar8 = (uint *)((uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00)
                                                << 8 | uStack_17cc << 0x18 |
                                               (uint)*(byte *)((int)_Src + 7));
                              uStack_1788 = 0;
                              uVar7 = (uStack_17d0 << 0x10 |
                                      ((uStack_17d0 & 0xff00) << 0x10 | uStack_17d0 & 0xff0000) >>
                                      0x10) << 8 | uStack_17d0 >> 0x18;
                            }
                            if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (puVar8 < (uint *)0x2)))) {
                              pcVar21 = 
                              "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
                                                  ,puVar8,_Src,*(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            pbVar9 = (byte *)(*(int *)(sStack_180c + 0x50) + (int)puVar8);
                            if ((int)puStack_17e8 - (int)_Src < (int)pbVar9) {
                              uVar5 = *(undefined4 *)(sStack_180c + 0x50);
LAB_1000c4b6:
                              pcVar21 = 
                              "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
                                                  ,puStack_17e8,_Src,puVar8,uVar5);
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if ((0 < (int)uVar7) || ((-1 < (int)uVar7 && (puStack_1800 < puVar8))))
                            {
                              pcVar21 = 
                              "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                                  ,puVar8,puStack_1800,_Src,puStack_17e8,
                                                  *(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if (*(short *)(pbVar9 + -2 + (int)_Src) != 0) {
                              iVar11 = *(int *)(sStack_180c + 0x50);
                              uVar7 = (uint)*(ushort *)
                                             ((byte *)((int)puVar8 + iVar11 + -2) + (int)_Src);
                              pcVar6 = 
                              "; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>, net_start<%p> length<%d> sizeinfo<%u>"
                              ;
LAB_1000c7ed:
                              sVar20 = 0x400;
                              pcVar21 = (char *)FUN_1000f910(0x400,pcVar6,uVar7,_Src,puVar8,iVar11);
                              _snprintf(pcVar21,sVar20,pcVar6);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            _Src = puVar13;
                            puVar10 = puVar8;
                            if (puVar8 < (uint *)0x41) {
                              for (; puVar10 != (uint *)0x0; puVar10 = (uint *)((int)puVar10 + -1))
                              {
                                *(byte *)puStack_17ec = (byte)*_Src;
                                puStack_17ec = (uint *)((int)puStack_17ec + 1);
                                _Src = (uint *)((int)_Src + 1);
                              }
                            }
                            else {
                              memcpy(puStack_17ec,puVar13,(size_t)puVar8);
                              _Src = (uint *)((int)puVar13 + (int)puVar8);
                              puStack_17ec = (uint *)((int)puVar17 + (int)puVar8);
                            }
                            puStack_17f8 = (uint *)((int)puStack_17f8 + 1);
                            puVar17 = (uint *)((int)puStack_17ec + ((int)puStack_1800 - (int)puVar8)
                                              );
                            puStack_17ec = puVar17;
                            sVar20 = sStack_180c;
                          } while ((int)puStack_17f8 < (int)puStack_17f0);
                        }
                      }
                      else if (puStack_17d4 <
                               (uint *)(*(int *)(sVar20 + 0x18) * (int)puStack_17f0 +
                                       (int)puStack_17ec)) {
                        pcVar21 = 
                        "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                        ;
                        sVar19 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                                  ,puStack_17ec,puStack_17d4,*(int *)(sVar20 + 0x18)
                                                  ,puStack_17f0);
                        _snprintf(pcVar6,sVar19,pcVar21);
                        local_1804 = 0x82010407;
                      }
                      else {
                        iVar11 = *(int *)(sVar20 + 0x1c);
                        if (puStack_17e8 < (uint *)(iVar11 * (int)puStack_17f0 + (int)_Src)) {
                          pcVar21 = 
                          "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                          ;
                          sVar19 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                                                  ,_Src,puStack_17e8,iVar11,puStack_17f0);
                          _snprintf(pcVar6,sVar19,pcVar21);
                          local_1804 = 0x82010402;
                        }
                        else if (iVar11 == 1) {
                          puVar13 = puStack_17f0;
                          if ((int)puStack_17f0 < 0x41) {
                            for (; puVar13 != (uint *)0x0; puVar13 = (uint *)((int)puVar13 + -1)) {
                              *(byte *)puVar17 = (byte)*_Src;
                              _Src = (uint *)((int)_Src + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                            }
                          }
                          else {
                            memcpy(puStack_17ec,_Src,(size_t)puStack_17f0);
                            _Src = (uint *)((int)_Src + (int)puStack_17f0);
                            puVar17 = (uint *)((int)puVar17 + (int)puStack_17f0);
                          }
                        }
                        else if (iVar11 == 2) {
                          puVar13 = puStack_17f0;
                          if (0 < (int)puStack_17f0) {
                            do {
                              *(ushort *)puVar17 =
                                   (ushort)*(byte *)((int)_Src + 1) | (ushort)*_Src << 8;
                              puVar17 = (uint *)((int)puVar17 + 2);
                              _Src = (uint *)((int)_Src + 2);
                              puVar13 = (uint *)((int)puVar13 + -1);
                            } while (puVar13 != (uint *)0x0);
                          }
                        }
                        else if (iVar11 == 4) {
                          if (0 < (int)puStack_17f0) {
                            puStack_17fc = puStack_17f0;
                            do {
                              uVar7 = *_Src;
                              *puVar17 = (uVar7 << 0x10 | uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00
                                         | (uint)*(byte *)((int)_Src + 3);
                              puVar17 = puVar17 + 1;
                              _Src = _Src + 1;
                              puStack_17fc = (uint *)((int)puStack_17fc + -1);
                            } while (puStack_17fc != (uint *)0x0);
                          }
                        }
                        else if (0 < (int)puStack_17f0) {
                          puStack_17fc = puStack_17f0;
                          do {
                            uVar7 = *_Src;
                            uStack_17cc = _Src[1];
                            *puStack_17ec =
                                 (uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00) << 8 |
                                 uStack_17cc << 0x18 | (uint)*(byte *)((int)_Src + 7);
                            puStack_17ec[1] =
                                 (uVar7 << 0x10 |
                                 ((uVar7 & 0xff00) << 0x10 | uVar7 & 0xff0000) >> 0x10) << 8 |
                                 uVar7 >> 0x18;
                            puVar17 = puStack_17ec + 2;
                            _Src = _Src + 2;
                            puStack_17fc = (uint *)((int)puStack_17fc + -1);
                            puStack_17ec = puVar17;
                            piVar15 = piStack_17bc;
                          } while (puStack_17fc != (uint *)0x0);
                        }
                      }
                      goto LAB_1000c80d;
                    }
                    if (iStack_17e0 < 0x20) {
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 100);
                        puVar13 = (uint *)(*(int *)(sVar20 + 0x68) + piVar15[10]);
                        if (iVar11 == 2) {
                          uStack_17dc = (uint)(ushort)*puVar13;
LAB_1000c8d0:
                          uStack_17d8 = (int)uStack_17dc >> 0x1f;
                        }
                        else {
                          if (iVar11 == 4) {
                            uStack_17dc = *puVar13;
                            goto LAB_1000c8d0;
                          }
                          if (iVar11 != 8) {
                            uStack_17dc = (uint)(byte)*puVar13;
                            goto LAB_1000c8d0;
                          }
                          uStack_17d8 = puVar13[1];
                          uStack_17dc = *puVar13;
                        }
                        iStack_1808 = *(int *)(sVar20 + 0x78) + 0x114 + iStack_17c0;
                        puVar13 = (uint *)(iStack_1808 + 0x134);
                        puStack_17fc = puVar13;
                        puStack_17ec = (uint *)(((int)*puVar13 < *(int *)(iStack_1808 + 0x138)) - 1)
                        ;
                        puVar8 = (uint *)(uStack_17dc - *(int *)(iStack_1808 + 0x138));
                        puStack_1800 = puVar8;
                        if (((int)puVar8 < 0) || (*(int *)(iStack_1808 + 0x2c) <= (int)puVar8)) {
LAB_1000c94c:
                          if (*(int *)(iStack_1808 + 0x2c) < 0x10) {
                            puStack_1800 = (uint *)0x0;
                            if (0 < *(int *)(iStack_1808 + 0x2c)) {
                              do {
                                if (((int)puVar13[1] <= (int)uStack_17dc) &&
                                   ((int)uStack_17dc <= (int)*puVar13)) {
                                  puStack_17ec = puStack_1800;
                                  break;
                                }
                                puStack_1800 = (uint *)((int)puStack_1800 + 1);
                                puVar13 = puVar13 + 0x2d;
                                puStack_17f8 = puVar13;
                              } while ((int)puStack_1800 < *(int *)(iStack_1808 + 0x2c));
                            }
                          }
                          else {
                            puStack_1800 = (uint *)(*(int *)(iStack_1808 + 0x2c) + -1);
                            puStack_17fc = (uint *)0x0;
                            if (-1 < (int)puStack_1800) {
                              do {
                                puVar8 = (uint *)((int)((int)puStack_17fc + (int)puStack_1800) >> 1)
                                ;
                                iVar14 = iStack_1808 + (int)puVar8 * 0xb4;
                                iVar11 = *(int *)(iVar14 + 0x138);
                                puStack_17f8 = *(uint **)(iVar14 + 0x134);
                                if ((int)puStack_17f8 < iVar11) {
LAB_1000c9f3:
                                  puStack_17fc = (uint *)((int)puVar8 + 1);
                                }
                                else {
                                  if (iVar11 <= (int)uStack_17dc) {
                                    if ((int)puStack_17f8 < (int)uStack_17dc) goto LAB_1000c9f3;
                                    goto LAB_1000ca0a;
                                  }
                                  puStack_1800 = (uint *)((int)puVar8 + -1);
                                }
                              } while ((int)puStack_17fc <= (int)puStack_1800);
                            }
                          }
                        }
                        else {
                          puStack_17f8 = (uint *)((int)puVar8 * 0xb4 + iStack_1808);
                          if ((puStack_17f8[0x4e] != uStack_17dc) ||
                             ((int)puStack_17f8[0x4d] < (int)puStack_17f8[0x4e])) goto LAB_1000c94c;
LAB_1000ca0a:
                          puStack_17ec = puVar8;
                        }
                        if ((puStack_17ec == (uint *)0xffffffff) ||
                           (puVar13 = puStack_17ec,
                           piVar15[8] < *(int *)((int)puStack_17ec * 0xb4 + 0xbc + iStack_1808))) {
                          iStack_1808 = *piVar15;
                          if (*(int *)(iStack_1808 + 0x10) == 0) {
                            iVar11 = *(int *)(iStack_1808 + 0x1c);
                            piVar15[3] = piVar15[3] + -1;
                            piVar15[10] = iVar11 + piVar15[10];
                            iStack_17e4 = piVar15[0xe];
                          }
                          else {
                            iVar14 = piVar15[4];
                            iVar11 = *(int *)(iStack_1808 + 0x2c);
                            piVar15[4] = iVar14 + 1;
                            if (iVar11 <= iVar14 + 1) {
                              piVar15[3] = piVar15[3] + -1;
                              iVar11 = *(int *)(iStack_1808 + 0x1c);
                              piVar15[4] = 0;
                              piVar15[10] = iVar11 + piVar15[10];
                              iStack_17e4 = piVar15[0xe];
                            }
                          }
                          goto LAB_1000ccb0;
                        }
                      }
                      else {
                        iStack_1808 = *(int *)(sVar20 + 0x78) + 0x114 + iStack_17c0;
                        puVar13 = (uint *)0x0;
                      }
                      iStack_17e0 = iStack_17e0 + 1;
                      piVar18 = piVar15 + 0x2f;
                      piVar15[0x33] = (int)puVar13;
                      iVar11 = *(int *)(iStack_1808 + 100);
                      piStack_17bc = piVar18;
                      piVar15[0x38] = 0;
                      *piVar18 = iStack_1808;
                      piVar15[0x32] = (int)puStack_17f0;
                      piVar15[0x39] = (int)puVar17;
                      piVar15[0x3b] = (int)_Src;
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 0x50);
                        if (iVar11 == 0) {
                          piVar15[0x34] = 0;
                        }
                        else {
                          iVar14 = *(int *)(sVar20 + 0x54);
                          piVar15[0x34] = iVar11;
                          if (iVar14 == -1) {
                            iVar11 = *(int *)(sVar20 + 0x48);
                            if (iVar11 < *(int *)(sVar20 + 0x28)) {
                              piVar15[0x3c] = piVar15[0xc] + iVar11;
                            }
                            else {
                              iVar11 = iVar11 - *(int *)(sVar20 + 0x28);
                              piVar15[0x35] = iVar11;
                              piVar15[0x3c] = (int)(iVar11 + (int)_Src);
                            }
                          }
                          else {
                            piVar15[0x3c] = (int)_Src;
                            _Src = (uint *)((int)_Src + iVar11);
                            piVar15[0x35] = -iVar11;
                          }
                        }
                      }
                      else {
                        iVar14 = *(int *)(iStack_1808 + 0x68);
                        piVar15[0x34] = iVar11;
                        if (iVar14 == -1) {
                          iVar11 = *(int *)(iStack_1808 + 0x5c);
                          piVar15[0x3c] = (int)(iVar11 + (int)_Src);
                          piVar15[0x35] = iVar11;
                        }
                        else {
                          piVar15[0x3c] = (int)_Src;
                          piVar15[0x35] = -iVar11;
                          _Src = (uint *)((int)_Src + iVar11);
                        }
                      }
                      piVar15[0x3a] = (int)puStack_17d4;
                      iVar11 = *(int *)(iStack_1808 + 0x74);
                      piVar15[0x3b] = (int)_Src;
                      piVar15[0x30] = sVar20;
                      piVar15[0x3d] = 1;
                      if (iVar11 == 0) {
LAB_1000cc92:
                        piVar15[0x37] = piVar15[8];
                      }
                      else {
                        puStack_17f8 = (uint *)(*(int *)(iStack_1808 + 0x6c) + (int)_Src);
                        if ((int)puStack_17e8 - (int)puStack_17f8 < iVar11) {
                          piVar15[0x37] = piVar15[8];
                        }
                        else {
                          if (iVar11 == 2) {
                            uVar7 = ((ushort)*puStack_17f8 & 0xff) << 8;
                            uVar12 = (uint)(ushort)((ushort)*puStack_17f8 >> 8);
LAB_1000cc84:
                            uVar7 = uVar7 | uVar12;
LAB_1000cc86:
                            uStack_17f4 = (int)uVar7 >> 0x1f;
                          }
                          else {
                            if (iVar11 == 4) {
                              uVar12 = *puStack_17f8;
                              uVar7 = uVar12 >> 8 & 0xff00 | (uint)*(byte *)((int)puStack_17f8 + 3);
                              uVar12 = (uVar12 << 0x10 | uVar12 & 0xff00) << 8;
                              goto LAB_1000cc84;
                            }
                            if (iVar11 != 8) {
                              uVar7 = (uint)(byte)*puStack_17f8;
                              goto LAB_1000cc86;
                            }
                            uStack_17c4 = puStack_17f8[1];
                            uStack_17c8 = *puStack_17f8;
                            uVar7 = (uStack_17c4 >> 0x10 & 0xff | uStack_17c4 & 0xff00) << 8 |
                                    uStack_17c4 << 0x18 | (uint)*(byte *)((int)puStack_17f8 + 7);
                            uStack_1794 = uVar7;
                            uStack_17f4 = (uStack_17c8 << 0x10 |
                                          ((uStack_17c8 & 0xff00) << 0x10 | uStack_17c8 & 0xff0000)
                                          >> 0x10) << 8 | uStack_17c8 >> 0x18;
                          }
                          piVar15[0x37] = uVar7;
                          if (uVar7 == 0) goto LAB_1000cc92;
                        }
                      }
                      if ((*(int *)(iStack_1808 + 8) <= piVar15[0x37]) &&
                         (*(int *)(iStack_1808 + 0x58) <= piVar15[0x37])) goto LAB_1000ccb0;
                      uVar5 = FUN_10003330(local_17b8);
                      pcVar21 = 
                      "; invalid cut-off version: expect cut-off version<%d> NOT less than max(base_ver<%d>, min_ver<%d>) about meta<%s>"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; invalid cut-off version: expect cut-off version<%d> NOT less than max(base_ver<%d>, min_ver<%d>) about meta<%s>"
                                                  ,piVar15[0x37],*(undefined4 *)(iStack_1808 + 8),
                                                  *(undefined4 *)(iVar1 + 0x58),uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_1804 = 0x82010401;
                    }
                    else {
                      uVar5 = FUN_10003330(local_17b8,0x20);
                      pcVar21 = 
                      "; meta<%s> is too complex, contains more than %d layers of children";
                      sVar19 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; meta<%s> is too complex, contains more than %d layers of children"
                                                  ,uVar5);
                      _snprintf(pcVar6,sVar19,pcVar21);
                      local_1804 = 0x82010404;
                      piVar15[9] = *(int *)(sVar20 + 0x2c);
                    }
                  }
                }
              }
              goto LAB_1000ce7e;
            }
            uVar5 = FUN_10003330(param_1,param_4);
            pcVar21 = 
            "; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and indicator<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator, a_iVersion<%d>"
            ;
            sVar20 = 0x400;
            pcVar6 = (char *)FUN_1000f910(0x400,
                                          "; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and indicator<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator, a_iVersion<%d>"
                                          ,uVar7,*(undefined4 *)(param_1 + 8),
                                          *(undefined4 *)(param_1 + 0xc),uVar7,
                                          *(undefined4 *)(param_1 + 0x58),uVar5);
            _snprintf(pcVar6,sVar20,pcVar21);
            local_17b4[1] = 0;
            local_17b0[1] = 0;
            goto LAB_1000b89f;
          }
          uVar5 = FUN_10003330(param_1);
          pcVar21 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
          ;
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                                        ,param_4,*(undefined4 *)(param_1 + 0x58),uVar5);
          _snprintf(pcVar6,sVar20,pcVar21);
        }
        param_2[1] = 0;
        param_3[1] = 0;
        goto LAB_1000b89f;
      }
    }
  }
  pcVar21 = 
  "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
  ;
  sVar20 = 0x400;
  pcVar6 = (char *)FUN_1000f910(0x400,
                                "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
                                ,_Src,param_3[1],*param_2,param_2[1]);
  _snprintf(pcVar6,sVar20,pcVar21);
LAB_1000b89f:
  FUN_11a89daa();
  return;
LAB_1000c72d:
  puVar17 = puStack_17ec;
  sVar20 = sStack_180c;
  pcVar21 = "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)";
  sVar19 = 0x400;
  pcVar6 = (char *)FUN_1000f910(0x400,
                                "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)"
                                ,puStack_17e8,_Src,iVar11);
  _snprintf(pcVar6,sVar19,pcVar21);
  local_1804 = 0x82010402;
LAB_1000c80d:
  if ((local_1804 & 0x80000000) != 0) {
    sVar19 = 0x400;
    pcVar6 = (char *)FUN_1000f910();
    sVar19 = strnlen(pcVar6,sVar19);
    if ((int)sVar19 < 0x400) {
      _Count = 0x400 - sVar19;
    }
    else {
      _Count = 0;
    }
    uVar5 = FUN_10003330(iStack_1808,"lib_src\\tdr\\tdr_net.c",0x315);
    uVar5 = FUN_10004f00(sVar20,uVar5);
    pcVar6 = "; entry<%s> of meta<%s> %s:%d";
    iVar11 = FUN_1000f910(_Count,"; entry<%s> of meta<%s> %s:%d",uVar5);
    _snprintf((char *)(iVar11 + sVar19),_Count,pcVar6);
    goto LAB_1000ce7e;
  }
  if ((*(byte *)(sVar20 + 0x44) & 4) == 0) {
    piVar15[9] = (int)puVar17 - piVar15[10];
  }
  else {
    piVar15[9] = *(int *)(sVar20 + 0x18) + *(int *)(sVar20 + 0x2c);
  }
  piVar18 = piVar15;
  if (*(int *)(iStack_1808 + 0x10) == 0) {
    iVar11 = *(int *)(iStack_1808 + 0x1c);
    piVar15[3] = piVar15[3] + -1;
    piVar15[10] = iVar11 + piVar15[10];
    iStack_17e4 = piVar15[0xe];
  }
  else {
    iVar14 = piVar15[4];
    iVar11 = *(int *)(iStack_1808 + 0x2c);
    piVar15[4] = iVar14 + 1;
    if (iVar11 <= iVar14 + 1) {
      piVar15[3] = piVar15[3] + -1;
      iVar11 = *(int *)(iStack_1808 + 0x1c);
      piVar15[4] = 0;
      piVar15[10] = iVar11 + piVar15[10];
      iStack_17e4 = piVar15[0xe];
    }
  }
LAB_1000ccb0:
  piVar15 = piVar18;
  if (iStack_17e0 < 1) goto LAB_1000ce7e;
  goto LAB_1000bb50;
LAB_1000ce7e:
  local_17b4[1] = iStack_1760;
  if (((int)local_1804 < 0) && (iVar11 = 1, 1 < iStack_17e0)) {
    piVar15 = aiStack_16a4;
    do {
      if ((*(byte *)(piVar15[-8] + 0x44) & 4) != 0) {
        local_17b4[1] = local_17b4[1] + *(int *)(aiStack_1784[iVar11 * 0x2f + 1] + 0x18);
        goto LAB_1000ceec;
      }
      local_17b4[1] = local_17b4[1] + *piVar15;
      iVar11 = iVar11 + 1;
      piVar15 = piVar15 + 0x2f;
    } while (iVar11 < iStack_17e0);
    local_17b0[1] = (int)_Src - *local_17b0;
  }
  else {
LAB_1000ceec:
    local_17b0[1] = (int)_Src - *local_17b0;
  }
  goto LAB_1000b89f;
}



/* ===== FUN_1000cfa0 @ 1000cfa0  size=2121 ===== */
// calls: _snprintf, memcpy, strnlen
// strings:
//   "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
//   "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
//   "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
//   "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
//   "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"

/* [RE-AUTO c0]
   calls: _snprintf, memcpy, strnlen
   strings:
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>""
     ""; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"" */

int FUN_1000cfa0(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *_Size;
  uint *_Dst;
  undefined1 *_Dst_00;
  uint *_Str;
  size_t _Count;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  undefined4 uVar14;
  int local_20;
  int local_1c;
  uint *local_10;
  int local_c;
  uint *local_8;
  uint local_4;
  
  iVar2 = param_2 * 0xb4 + 0xb8 + param_1;
  _Dst = (uint *)*param_3;
  iVar8 = param_3[1];
  puVar1 = (uint *)(iVar8 + (int)_Dst);
  _Str = (uint *)*param_4;
  iVar7 = *(int *)(iVar2 + 8);
  puVar10 = (uint *)(param_4[1] + (int)_Str);
  local_20 = 0;
  if (iVar7 == 1) {
    iVar7 = *(int *)(iVar2 + 0x78);
    iVar3 = *(int *)(param_1 + 0x3c);
    param_2 = 0;
    if (0 < *(int *)(iVar2 + 0x24)) {
      while( true ) {
        local_10 = (uint *)(*(int *)(iVar2 + 0x18) * param_2 + (int)_Str);
        local_c = (int)puVar10 - (int)local_10;
        local_8 = _Dst;
        local_4 = iVar8;
        local_20 = FUN_1000a1f0((iVar7 - iVar3) + param_1,&local_8,&local_10,param_5);
        if (local_20 != 0) break;
        iVar8 = iVar8 - local_4;
        _Dst = (uint *)((int)_Dst + local_4);
        param_2 = param_2 + 1;
        if (*(int *)(iVar2 + 0x24) <= param_2) {
          param_3[1] = (int)_Dst - *param_3;
          return 0;
        }
      }
    }
  }
  else if (iVar7 == 0x15) {
    local_1c = 0;
    if (0 < *(int *)(iVar2 + 0x24)) {
      while( true ) {
        sVar13 = *(size_t *)(iVar2 + 0x20);
        if (sVar13 == 0) {
          sVar13 = (int)puVar10 - (int)_Str;
        }
        sVar11 = strnlen((char *)_Str,sVar13);
        if ((int)sVar13 <= (int)sVar11) {
          pcVar12 = 
          "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
          ;
          _Count = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                        ,sVar11,sVar13,_Dst,puVar1,*(undefined4 *)(iVar2 + 0x20));
          _snprintf(pcVar6,_Count,pcVar12);
          param_3[1] = (int)_Dst - *param_3;
          return -0x7dfefbfa;
        }
        _Size = (uint *)(sVar11 + 1);
        if ((int)puVar1 - (int)_Dst < *(int *)(iVar2 + 0x50) + (int)_Size) break;
        local_4 = (int)_Size >> 0x1f;
        iVar8 = *(int *)(iVar2 + 0x50);
        if ((*(int *)(&DAT_11e11424 + iVar8 * 8) < (int)local_4) ||
           ((*(int *)(&DAT_11e11424 + iVar8 * 8) <= (int)local_4 &&
            (*(uint **)(&DAT_11e11420 + iVar8 * 8) < _Size)))) {
          uVar14 = *(undefined4 *)(&DAT_11e11420 + iVar8 * 8);
          goto LAB_1000d7bf;
        }
        if (iVar8 == 2) {
          *(ushort *)_Dst = (ushort)_Size << 8 | (ushort)_Size >> 8;
        }
        else if (iVar8 == 4) {
          *_Dst = ((uint)_Size & 0xff0000 | (uint)_Size >> 0x10) >> 8 |
                  ((int)_Size * 0x10000 | (uint)_Size & 0xff00) << 8;
        }
        else if (iVar8 == 8) {
          *_Dst = (local_4 >> 0x10 | ((local_4 & 0xff0000) >> 0x10 | local_4 & 0xff00) << 0x10) >> 8
                  | local_4 << 0x18;
          _Dst[1] = ((int)_Size * 0x10000 |
                    (((uint)_Size & 0xff00) << 0x10 | (uint)_Size & 0xff0000) >> 0x10) << 8 |
                    (uint)_Size >> 0x18;
        }
        else {
          *(char *)_Dst = (char)_Size;
        }
        _Dst_00 = (undefined1 *)((int)_Dst + *(int *)(iVar2 + 0x50));
        local_10 = _Size;
        local_8 = _Size;
        memcpy(_Dst_00,_Str,(size_t)_Size);
        _Str = (uint *)((int)_Str + sVar13);
        local_1c = local_1c + 1;
        _Dst = (uint *)(_Dst_00 + (int)_Size);
        if (*(int *)(iVar2 + 0x24) <= local_1c) {
          param_3[1] = (int)_Dst - *param_3;
          return 0;
        }
      }
      uVar14 = *(undefined4 *)(iVar2 + 0x50);
LAB_1000d55a:
      pcVar12 = "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>";
      sVar13 = 0x400;
      local_10 = _Size;
      pcVar6 = (char *)FUN_1000f910(0x400,
                                    "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
                                    ,_Size,uVar14,_Dst,puVar1);
      _snprintf(pcVar6,sVar13,pcVar12);
      param_3[1] = (int)_Dst - *param_3;
      return -0x7dfefbfe;
    }
  }
  else if (iVar7 == 0x16) {
    local_1c = 0;
    if (0 < *(int *)(iVar2 + 0x24)) {
      while( true ) {
        iVar8 = *(int *)(iVar2 + 0x20);
        if (iVar8 == 0) {
          iVar8 = (int)puVar10 - (int)_Str;
        }
        iVar7 = FUN_100108a0(_Str,iVar8);
        _Size = (uint *)(iVar7 * 2 + 2);
        local_10 = _Size;
        if (iVar8 < (int)_Size) {
          pcVar12 = 
          "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
          ;
          sVar13 = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                        ,_Size,iVar8,_Dst,puVar1,*(undefined4 *)(iVar2 + 0x20));
          _snprintf(pcVar6,sVar13,pcVar12);
          param_3[1] = (int)_Dst - *param_3;
          return -0x7dfefbfa;
        }
        if ((int)puVar1 - (int)_Dst < *(int *)(iVar2 + 0x50) + (int)_Size) break;
        local_4 = (int)_Size >> 0x1f;
        iVar7 = *(int *)(iVar2 + 0x50);
        if ((*(int *)(&DAT_11e11424 + iVar7 * 8) < (int)local_4) ||
           ((*(int *)(&DAT_11e11424 + iVar7 * 8) <= (int)local_4 &&
            (*(uint **)(&DAT_11e11420 + iVar7 * 8) < _Size)))) {
          uVar14 = *(undefined4 *)(&DAT_11e11420 + iVar7 * 8);
LAB_1000d7bf:
          pcVar12 = "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>";
          sVar13 = 0x400;
          local_10 = _Size;
          local_8 = _Size;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"
                                        ,_Size,uVar14);
          _snprintf(pcVar6,sVar13,pcVar12);
          local_20 = -0x7dfefb87;
          goto LAB_1000d7e1;
        }
        if (iVar7 == 2) {
          *(ushort *)_Dst = (ushort)_Size << 8 | (ushort)_Size >> 8;
        }
        else if (iVar7 == 4) {
          *_Dst = ((uint)_Size & 0xff0000 | (uint)_Size >> 0x10) >> 8 |
                  ((int)_Size * 0x10000 | (uint)_Size & 0xff00) << 8;
        }
        else if (iVar7 == 8) {
          *_Dst = (local_4 >> 0x10 | ((local_4 & 0xff0000) >> 0x10 | local_4 & 0xff00) << 0x10) >> 8
                  | local_4 << 0x18;
          _Dst[1] = ((int)_Size * 0x10000 |
                    (((uint)_Size & 0xff00) << 0x10 | (uint)_Size & 0xff0000) >> 0x10) << 8 |
                    (uint)_Size >> 0x18;
        }
        else {
          *(char *)_Dst = (char)_Size;
        }
        _Dst = (uint *)((int)_Dst + *(int *)(iVar2 + 0x50));
        puVar5 = _Size;
        local_8 = _Size;
        if (_Size < (uint *)0x41) {
          for (; puVar5 != (uint *)0x0; puVar5 = (uint *)((int)puVar5 - 1)) {
            *(char *)_Dst = (char)*_Str;
            _Dst = (uint *)((int)_Dst + 1);
            _Str = (uint *)((int)_Str + 1);
          }
        }
        else {
          memcpy(_Dst,_Str,(size_t)_Size);
          _Str = (uint *)((int)_Str + (int)_Size);
          _Dst = (uint *)((int)_Dst + (int)_Size);
        }
        _Str = (uint *)((int)_Str + (iVar8 - (int)_Size));
        local_1c = local_1c + 1;
        if (*(int *)(iVar2 + 0x24) <= local_1c) {
          param_3[1] = (int)_Dst - *param_3;
          return 0;
        }
      }
      uVar14 = *(undefined4 *)(iVar2 + 0x50);
      goto LAB_1000d55a;
    }
  }
  else {
    sVar13 = *(size_t *)(iVar2 + 0x24);
    if (puVar10 < (uint *)(*(int *)(iVar2 + 0x18) * sVar13 + (int)_Str)) {
      pcVar12 = "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>";
      sVar11 = 0x400;
      pcVar6 = (char *)FUN_1000f910(0x400,
                                    "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                    ,_Str,puVar10,*(int *)(iVar2 + 0x18),sVar13);
      _snprintf(pcVar6,sVar11,pcVar12);
      param_3[1] = (int)_Dst - *param_3;
      return -0x7dfefbf9;
    }
    iVar8 = *(int *)(iVar2 + 0x1c);
    if (puVar1 < (uint *)(iVar8 * sVar13 + (int)_Dst)) {
      pcVar12 = "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>";
      sVar11 = 0x400;
      pcVar6 = (char *)FUN_1000f910(0x400,
                                    "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                                    ,_Dst,puVar1,iVar8,sVar13);
      _snprintf(pcVar6,sVar11,pcVar12);
      param_3[1] = (int)_Dst - *param_3;
      return -0x7dfefbfe;
    }
    if (iVar8 == 1) {
      if (0x40 < (int)sVar13) {
        memcpy(_Dst,_Str,sVar13);
        param_3[1] = (int)((int)_Dst + (*(int *)(iVar2 + 0x24) - *param_3));
        return 0;
      }
      uVar9 = 0;
      if (sVar13 != 0) {
        do {
          *(char *)_Dst = (char)*_Str;
          uVar9 = uVar9 + 1;
          _Dst = (uint *)((int)_Dst + 1);
          _Str = (uint *)((int)_Str + 1);
        } while (uVar9 < *(uint *)(iVar2 + 0x24));
        param_3[1] = (int)_Dst - *param_3;
        return 0;
      }
    }
    else if (iVar8 == 2) {
      iVar8 = 0;
      if (0 < (int)sVar13) {
        do {
          *(ushort *)_Dst = (ushort)*(byte *)((int)_Str + 1) | (short)*_Str << 8;
          iVar8 = iVar8 + 1;
          _Dst = (uint *)((int)_Dst + 2);
          _Str = (uint *)((int)_Str + 2);
        } while (iVar8 < *(int *)(iVar2 + 0x24));
        param_3[1] = (int)_Dst - *param_3;
        return 0;
      }
    }
    else if (iVar8 == 4) {
      iVar8 = 0;
      if (0 < (int)sVar13) {
        do {
          uVar9 = *_Str;
          *_Dst = (uVar9 << 0x10 | uVar9 & 0xff00) << 8 | uVar9 >> 8 & 0xff00 |
                  (uint)*(byte *)((int)_Str + 3);
          iVar8 = iVar8 + 1;
          _Dst = _Dst + 1;
          _Str = _Str + 1;
        } while (iVar8 < *(int *)(iVar2 + 0x24));
        param_3[1] = (int)_Dst - *param_3;
        return 0;
      }
    }
    else {
      param_1 = 0;
      if (0 < (int)sVar13) {
        do {
          uVar9 = *_Str;
          uVar4 = _Str[1];
          *_Dst = (uVar4 >> 0x10 & 0xff | uVar4 & 0xff00) << 8 | uVar4 << 0x18 |
                  (uint)*(byte *)((int)_Str + 7);
          _Dst[1] = (uVar9 << 0x10 | ((uVar9 & 0xff00) << 0x10 | uVar9 & 0xff0000) >> 0x10) << 8 |
                    uVar9 >> 0x18;
          param_1 = param_1 + 1;
          _Str = _Str + 2;
          _Dst = _Dst + 2;
        } while (param_1 < *(int *)(iVar2 + 0x24));
        param_3[1] = (int)_Dst - *param_3;
        return 0;
      }
    }
  }
LAB_1000d7e1:
  param_3[1] = (int)_Dst - *param_3;
  return local_20;
}



/* ===== FUN_1000d800 @ 1000d800  size=2263 ===== */
// calls: _snprintf, memcpy
// strings:
//   "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
//   "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
//   "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
//   "; has NO sapce for wstring's null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
//   "; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>, net_start<%p> length<%d> sizeinfo<%u>"
//   "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)"
//   "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
//   "; has NO sapce for string's null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
//   "; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>, net_start<%p> length<%d> sizeinfo<%u>"

/* [RE-AUTO c0]
   calls: _snprintf, memcpy
   strings:
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>,
   sizeinfo<%u>)""
     ""; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)""
     ""; has NO sapce for wstring's null: length<%d> buffer_size<%d>, start<%p> end<%p>
   custom_size<%u>)""
     ""; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>,
   net_start<%p> length<%d> siz…"
     ""; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)""
     ""; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>,
   sizeinfo<%u>)""
     ""; has NO sapce for string's null: length<%d> buffer_size<%d>, start<%p> end<%p>
   custom_size<%u>)""
     ""; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>,
   net_start<%p> length<%d> sizeinf…" */

int FUN_1000d800(uint *param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *_Src;
  uint *puVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  int local_28;
  int local_24;
  int local_1c;
  uint *local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  undefined4 local_4;
  
  iVar13 = param_2 * 0xb4 + 0xb8 + (int)param_1;
  _Src = (uint *)*param_4;
  local_24 = param_4[1];
  puVar12 = (uint *)(local_24 + (int)_Src);
  puVar7 = (uint *)*param_3;
  iVar4 = *(int *)(iVar13 + 8);
  puVar8 = (uint *)(param_3[1] + (int)puVar7);
  local_28 = 0;
  if (iVar4 == 1) {
    iVar4 = *(int *)(iVar13 + 0x78);
    iVar1 = *(int *)((int)param_1 + 0x3c);
    param_2 = 0;
    if (0 < *(int *)(iVar13 + 0x24)) {
      while( true ) {
        local_18 = (uint *)(*(int *)(iVar13 + 0x18) * param_2 + (int)puVar7);
        local_14 = (int)puVar8 - (int)local_18;
        local_c = local_24;
        local_10 = _Src;
        local_28 = FUN_1000b780((iVar4 - iVar1) + (int)param_1,&local_18,&local_10,param_5);
        if (local_28 != 0) break;
        local_24 = local_24 - local_c;
        _Src = (uint *)((int)_Src + local_c);
        param_2 = param_2 + 1;
        if (*(int *)(iVar13 + 0x24) <= param_2) {
          param_4[1] = (int)_Src - *param_4;
          return 0;
        }
      }
    }
    goto LAB_1000e0c2;
  }
  local_18 = puVar8;
  if (iVar4 == 0x15) {
    local_1c = 0;
    if (0 < *(int *)(iVar13 + 0x24)) {
      do {
        uVar5 = *(uint *)(iVar13 + 0x20);
        if (uVar5 == 0) {
          uVar5 = (int)local_18 - (int)puVar7;
        }
        iVar4 = *(int *)(iVar13 + 0x50);
        puVar8 = (uint *)(iVar4 + (int)_Src);
        if (puVar12 <= puVar8) goto LAB_1000dfd8;
        if (iVar4 == 2) {
          uVar3 = ((ushort)*_Src & 0xff) << 8 | (uint)(ushort)((ushort)*_Src >> 8);
LAB_1000df24:
          uVar6 = (int)uVar3 >> 0x1f;
        }
        else {
          if (iVar4 == 4) {
            uVar3 = *_Src;
            uVar3 = uVar3 >> 8 & 0xff00 | (uint)*(byte *)((int)_Src + 3) |
                    (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
            goto LAB_1000df24;
          }
          if (iVar4 != 8) {
            uVar3 = (uint)(byte)*_Src;
            goto LAB_1000df24;
          }
          uVar6 = *_Src;
          local_c = _Src[1];
          uVar3 = (local_c >> 0x10 & 0xff | local_c & 0xff00) << 8 | local_c << 0x18 |
                  (uint)*(byte *)((int)_Src + 7);
          local_4 = 0;
          uVar6 = (uVar6 << 0x10 | ((uVar6 & 0xff00) << 0x10 | uVar6 & 0xff0000) >> 0x10) << 8 |
                  uVar6 >> 0x18;
        }
        if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar3 == 0)))) {
          pcVar11 = 
          "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
          ;
          sVar10 = 0x400;
          pcVar2 = (char *)FUN_1000f910(0x400,
                                        "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
                                        ,uVar3,_Src,*(undefined4 *)(iVar13 + 0x50));
          _snprintf(pcVar2,sVar10,pcVar11);
          param_4[1] = (int)_Src - *param_4;
          return -0x7dfefbfe;
        }
        iVar4 = *(int *)(iVar13 + 0x50) + uVar3;
        if ((int)puVar12 - (int)_Src < iVar4) goto LAB_1000dd7c;
        if (((int)uVar5 >> 0x1f < (int)uVar6) ||
           (((int)uVar5 >> 0x1f <= (int)uVar6 && (uVar5 < uVar3)))) {
          pcVar11 = 
          "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
          ;
          sVar10 = 0x400;
          pcVar2 = (char *)FUN_1000f910(0x400,
                                        "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                        ,uVar3,uVar5,_Src,puVar12,*(undefined4 *)(iVar13 + 0x50));
          _snprintf(pcVar2,sVar10,pcVar11);
          param_4[1] = (int)_Src - *param_4;
          return -0x7dfefbfa;
        }
        if (*(byte *)(iVar4 + -1 + (int)_Src) != 0) {
          iVar13 = *(int *)(iVar13 + 0x50);
          uVar5 = (uint)(char)*(byte *)(uVar3 + iVar13 + -1 + (int)_Src);
          pcVar2 = 
          "; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>, net_start<%p> length<%d> sizeinfo<%u>"
          ;
          goto LAB_1000e0a6;
        }
        _Src = puVar8;
        uVar6 = uVar3;
        if (uVar3 < 0x41) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(byte *)puVar7 = (byte)*_Src;
            puVar7 = (uint *)((int)puVar7 + 1);
            _Src = (uint *)((int)_Src + 1);
          }
        }
        else {
          memcpy(puVar7,puVar8,uVar3);
          _Src = (uint *)((int)puVar8 + uVar3);
          puVar7 = (uint *)((int)puVar7 + uVar3);
        }
        puVar7 = (uint *)((int)puVar7 + (uVar5 - uVar3));
        local_1c = local_1c + 1;
        if (*(int *)(iVar13 + 0x24) <= local_1c) {
          param_4[1] = (int)_Src - *param_4;
          return 0;
        }
      } while( true );
    }
    goto LAB_1000e0c2;
  }
  if (iVar4 == 0x16) {
    local_1c = 0;
    if (0 < *(int *)(iVar13 + 0x24)) {
      do {
        uVar5 = *(uint *)(iVar13 + 0x20);
        if (uVar5 == 0) {
          uVar5 = (int)local_18 - (int)puVar7;
        }
        iVar4 = *(int *)(iVar13 + 0x50);
        puVar8 = (uint *)(iVar4 + (int)_Src);
        if (puVar12 <= puVar8) {
LAB_1000dfd8:
          pcVar11 = "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)";
          sVar10 = 0x400;
          pcVar2 = (char *)FUN_1000f910(0x400,
                                        "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)"
                                        ,puVar12,_Src,iVar4);
          _snprintf(pcVar2,sVar10,pcVar11);
          param_4[1] = (int)_Src - *param_4;
          return -0x7dfefbfe;
        }
        if (iVar4 == 2) {
          uVar3 = ((ushort)*_Src & 0xff) << 8 | (uint)(ushort)((ushort)*_Src >> 8);
LAB_1000dc92:
          uVar6 = (int)uVar3 >> 0x1f;
        }
        else {
          if (iVar4 == 4) {
            uVar3 = *_Src;
            uVar3 = uVar3 >> 8 & 0xff00 | (uint)*(byte *)((int)_Src + 3) |
                    (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
            goto LAB_1000dc92;
          }
          if (iVar4 != 8) {
            uVar3 = (uint)(byte)*_Src;
            goto LAB_1000dc92;
          }
          uVar6 = *_Src;
          local_c = _Src[1];
          uVar3 = (local_c >> 0x10 & 0xff | local_c & 0xff00) << 8 | local_c << 0x18 |
                  (uint)*(byte *)((int)_Src + 7);
          local_4 = 0;
          uVar6 = (uVar6 << 0x10 | ((uVar6 & 0xff00) << 0x10 | uVar6 & 0xff0000) >> 0x10) << 8 |
                  uVar6 >> 0x18;
        }
        if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar3 < 2)))) {
          pcVar11 = 
          "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
          ;
          sVar10 = 0x400;
          pcVar2 = (char *)FUN_1000f910(0x400,
                                        "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
                                        ,uVar3,_Src,*(undefined4 *)(iVar13 + 0x50));
          _snprintf(pcVar2,sVar10,pcVar11);
          param_4[1] = (int)_Src - *param_4;
          return -0x7dfefbfe;
        }
        iVar4 = *(int *)(iVar13 + 0x50) + uVar3;
        if ((int)puVar12 - (int)_Src < iVar4) goto LAB_1000dd7c;
        if ((0 < (int)uVar6) || ((-1 < (int)uVar6 && (uVar5 < uVar3)))) {
          pcVar11 = 
          "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
          ;
          sVar10 = 0x400;
          pcVar2 = (char *)FUN_1000f910(0x400,
                                        "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                        ,uVar3,uVar5,_Src,puVar12,*(undefined4 *)(iVar13 + 0x50));
          _snprintf(pcVar2,sVar10,pcVar11);
          param_4[1] = (int)_Src - *param_4;
          return -0x7dfefbfa;
        }
        if (*(short *)(iVar4 + -2 + (int)_Src) != 0) {
          iVar13 = *(int *)(iVar13 + 0x50);
          uVar5 = (uint)*(ushort *)(uVar3 + iVar13 + -2 + (int)_Src);
          pcVar2 = 
          "; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>, net_start<%p> length<%d> sizeinfo<%u>"
          ;
LAB_1000e0a6:
          sVar10 = 0x400;
          pcVar11 = (char *)FUN_1000f910(0x400,pcVar2,uVar5,_Src,uVar3,iVar13);
          _snprintf(pcVar11,sVar10,pcVar2);
          local_28 = -0x7dfefbfa;
          break;
        }
        _Src = puVar8;
        uVar6 = uVar3;
        if (uVar3 < 0x41) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(byte *)puVar7 = (byte)*_Src;
            puVar7 = (uint *)((int)puVar7 + 1);
            _Src = (uint *)((int)_Src + 1);
          }
        }
        else {
          memcpy(puVar7,puVar8,uVar3);
          _Src = (uint *)((int)puVar8 + uVar3);
          puVar7 = (uint *)((int)puVar7 + uVar3);
        }
        puVar7 = (uint *)((int)puVar7 + (uVar5 - uVar3));
        local_1c = local_1c + 1;
        if (*(int *)(iVar13 + 0x24) <= local_1c) {
          param_4[1] = (int)_Src - *param_4;
          return 0;
        }
      } while( true );
    }
    goto LAB_1000e0c2;
  }
  sVar10 = *(size_t *)(iVar13 + 0x24);
  if (puVar8 < (uint *)(*(int *)(iVar13 + 0x18) * sVar10 + (int)puVar7)) {
    pcVar11 = "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>";
    sVar9 = 0x400;
    pcVar2 = (char *)FUN_1000f910(0x400,
                                  "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                  ,puVar7,puVar8,*(int *)(iVar13 + 0x18),sVar10);
    _snprintf(pcVar2,sVar9,pcVar11);
    local_28 = -0x7dfefbf9;
    goto LAB_1000e0c2;
  }
  uVar3 = *(uint *)(iVar13 + 0x1c);
  if ((uint *)(uVar3 * sVar10 + (int)_Src) <= puVar12) {
    if (uVar3 == 1) {
      if (0x40 < (int)sVar10) {
        memcpy(puVar7,_Src,sVar10);
        param_4[1] = (int)((int)_Src + (*(int *)(iVar13 + 0x24) - *param_4));
        return 0;
      }
      uVar5 = 0;
      if (sVar10 != 0) {
        do {
          *(byte *)puVar7 = (byte)*_Src;
          uVar5 = uVar5 + 1;
          puVar7 = (uint *)((int)puVar7 + 1);
          _Src = (uint *)((int)_Src + 1);
        } while (uVar5 < *(uint *)(iVar13 + 0x24));
        param_4[1] = (int)_Src - *param_4;
        return 0;
      }
    }
    else if (uVar3 == 2) {
      iVar4 = 0;
      if (0 < (int)sVar10) {
        do {
          *(ushort *)puVar7 = (ushort)*(byte *)((int)_Src + 1) | (ushort)*_Src << 8;
          iVar4 = iVar4 + 1;
          puVar7 = (uint *)((int)puVar7 + 2);
          _Src = (uint *)((int)_Src + 2);
        } while (iVar4 < *(int *)(iVar13 + 0x24));
        param_4[1] = (int)_Src - *param_4;
        return 0;
      }
    }
    else if (uVar3 == 4) {
      iVar4 = 0;
      if (0 < (int)sVar10) {
        do {
          uVar5 = *_Src;
          *puVar7 = (uVar5 << 0x10 | uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 |
                    (uint)*(byte *)((int)_Src + 3);
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 1;
          _Src = _Src + 1;
        } while (iVar4 < *(int *)(iVar13 + 0x24));
        param_4[1] = (int)_Src - *param_4;
        return 0;
      }
    }
    else {
      param_2 = 0;
      param_1 = puVar7;
      if (0 < (int)sVar10) {
        do {
          uVar5 = *_Src;
          uVar3 = _Src[1];
          *param_1 = (uVar3 >> 0x10 & 0xff | uVar3 & 0xff00) << 8 | uVar3 << 0x18 |
                     (uint)*(byte *)((int)_Src + 7);
          param_1[1] = (uVar5 << 0x10 | ((uVar5 & 0xff00) << 0x10 | uVar5 & 0xff0000) >> 0x10) << 8
                       | uVar5 >> 0x18;
          param_1 = param_1 + 2;
          param_2 = param_2 + 1;
          _Src = _Src + 2;
        } while (param_2 < *(int *)(iVar13 + 0x24));
        param_4[1] = (int)_Src - *param_4;
        return 0;
      }
    }
    goto LAB_1000e0c2;
  }
  pcVar2 = "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>";
  puVar7 = _Src;
  goto LAB_1000d95e;
LAB_1000dd7c:
  sVar10 = *(size_t *)(iVar13 + 0x50);
  pcVar2 = "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)";
  puVar7 = puVar12;
  puVar12 = _Src;
LAB_1000d95e:
  sVar9 = 0x400;
  pcVar11 = (char *)FUN_1000f910(0x400,pcVar2,puVar7,puVar12,uVar3,sVar10);
  _snprintf(pcVar11,sVar9,pcVar2);
  local_28 = -0x7dfefbfe;
LAB_1000e0c2:
  param_4[1] = (int)_Src - *param_4;
  return local_28;
}



