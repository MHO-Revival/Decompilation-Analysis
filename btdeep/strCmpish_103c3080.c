
// [d0] FUN_103c3080 @103c3080  (emitted in an earlier root)

// [d1] FUN_103c2d80 @103c2d80  (emitted in an earlier root)

// [d1] FUN_103c4870 @103c4870  (emitted in an earlier root)

// [d1] FUN_103c2cb0 @103c2cb0  (emitted in an earlier root)

// [d1] FUN_103c4960 @103c4960  (emitted in an earlier root)

// [d1] FUN_103c4a50 @103c4a50  (emitted in an earlier root)

// [d1] FUN_103c4b40 @103c4b40  (emitted in an earlier root)

// [d2] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// [d2] FUN_10a5d8d0 @10a5d8d0  (emitted in an earlier root)

// [d2] FUN_10a5d940 @10a5d940  (emitted in an earlier root)

// ===== [d2] FUN_10a5f090 @10a5f090  (60 bytes) =====

/* [RE-AUTO c0]
   calls: _stricmp */

void __thiscall FUN_10a5f090(int *param_1,int *param_2)

{
  char *_Str2;
  
  if (*param_2 == 0) {
    _Str2 = (char *)0x0;
  }
  else {
    _Str2 = *(char **)(*param_2 + 0x14);
  }
  if (*param_1 != 0) {
    _stricmp(*(char **)(*param_1 + 0x14),_Str2);
    return;
  }
  _stricmp((char *)0x0,_Str2);
  return;
}


// [d2] FUN_101c4350 @101c4350  (emitted in an earlier root)

// [d2] FUN_10a5d620 @10a5d620  (emitted in an earlier root)

// [d2] FUN_101c4190 @101c4190  (emitted in an earlier root)

// ===== [d2] FUN_103c3fd0 @103c3fd0  (27 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103c3fd0(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar2 = FUN_101cf6d0();
    return uVar2;
  case 1:
    uVar2 = FUN_101cdd00(param_1 + 0x1c,param_2);
    return uVar2;
  case 2:
    uVar1 = FUN_112beda0();
    *param_2 = uVar1;
    return 1;
  case 3:
    *param_2 = (uint)(*(char *)(param_1 + 0x1c) != '\0');
    return 1;
  case 7:
    uVar2 = FUN_101cf970();
    return uVar2;
  case 8:
    uVar2 = FUN_103c4cb0();
    return uVar2;
  case 0xffffffff:
  case 4:
  case 5:
  case 6:
    *param_2 = *(uint *)(param_1 + 0x1c);
    return 1;
  default:
    return 0;
  }
}


// [d2] FUN_101c4280 @101c4280  (emitted in an earlier root)

// [d2] FUN_101c4430 @101c4430  (emitted in an earlier root)
