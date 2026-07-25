// FUN_10059c70 @ 10059c70
// ramp offsets referenced: [537, 538]


/* [RE-AUTO c0]
   calls: memcmp
   strings:
     ""tsm_tdr_check_metalib_i""
     ""..\\..\\..\\..\\..\\lib_src\\tmng\\tsm_tdr_i.c""
     ""tsm_tdr_row_unlink_i fail (%d)""
     ""tsm_tdr_create_meta_i fail (%d)"" */

undefined4 FUN_10059c70(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  void *_Buf1;
  int iVar3;
  size_t _Size;
  undefined4 local_10;
  
  local_10 = 0;
  bVar1 = false;
  if (param_1 == 0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d820,0x219,
                 s_tsm_tdr_check_metalib_i_11e1d808,1,&DAT_11e1d7fc);
    return 0xffffffff;
  }
  iVar2 = FUN_10058c30(param_1);
  if (iVar2 != 0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d870,0x21a,
                 s_tsm_tdr_check_metalib_i_11e1d858,2,&DAT_11e1d848);
    return 0xfffffffe;
  }
  if (param_2 == (void *)0x0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d8bc,0x21b,
                 s_tsm_tdr_check_metalib_i_11e1d8a4,3,&DAT_11e1d898);
    return 0xfffffffd;
  }
  if (param_3 == 0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d908,0x21c,
                 s_tsm_tdr_check_metalib_i_11e1d8f0,4,&DAT_11e1d8e4);
    return 0xfffffffc;
  }
  if (param_5 == 0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d954,0x21d,
                 s_tsm_tdr_check_metalib_i_11e1d93c,5,&DAT_11e1d930);
    return 0xfffffffb;
  }
  if (param_5 + 0xc10 == 0) {
    FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1d9a0,0x221,
                 s_tsm_tdr_check_metalib_i_11e1d988,6,&DAT_11e1d97c);
    return 0xfffffffa;
  }
  _Buf1 = (void *)FUN_1005a630(param_5 + 0xc10,1);
  if (_Buf1 == (void *)0x0) {
    bVar1 = true;
    local_10 = 1;
    goto LAB_10059e6d;
  }
  iVar2 = FUN_100106a0(_Buf1);
  iVar3 = FUN_100106a0(param_2);
  if (iVar2 == iVar3) {
    _Size = FUN_100106a0(_Buf1);
    iVar2 = memcmp(_Buf1,param_2,_Size);
    if (iVar2 != 0) goto LAB_10059e44;
  }
  else {
LAB_10059e44:
    if (param_4 == 1) {
      bVar1 = true;
      local_10 = 1;
    }
    else {
      local_10 = 2;
    }
  }
  FUN_1005a650(_Buf1);
LAB_10059e6d:
  if (bVar1) {
    iVar2 = FUN_1005adf0(param_5,param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_10059f20(param_1,param_2,param_3);
      if (iVar2 != 0) {
        FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1da60,0x244,
                     s_tsm_tdr_check_metalib_i_11e1da48,8,s_tsm_tdr_create_meta_i_fail___d__11e1da28
                     ,iVar2);
        local_10 = 0xfffffff8;
      }
    }
    else {
      FUN_1005b6f0(0,s________________lib_src_tmng_tsm__11e1da00,0x241,
                   s_tsm_tdr_check_metalib_i_11e1d9e8,7,s_tsm_tdr_row_unlink_i_fail___d__11e1d9c8,
                   iVar2);
      local_10 = 0xfffffff9;
    }
  }
  return local_10;
}

