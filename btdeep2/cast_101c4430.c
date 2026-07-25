
// [d0] FUN_101c4430 @101c4430  (emitted in an earlier root)

// [d1] FUN_101c49e0 @101c49e0  (emitted in an earlier root)

// [d1] FUN_101c3d00 @101c3d00  (emitted in an earlier root)

// [d1] FUN_112beda0 @112beda0  (emitted in an earlier root)

// [d1] FUN_101c4a10 @101c4a10  (emitted in an earlier root)

// [d1] FUN_101c4a40 @101c4a40  (emitted in an earlier root)

// ===== [d2] FUN_1001c2c0 @1001c2c0  (127 bytes) =====

/* [RE-AUTO c0]
   calls: RaiseException
   strings:
     ""Stack"" */

void FUN_1001c2c0(void)

{
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_112bf779;
  local_14 = ExceptionList;
  local_c = DAT_113dd8c0 ^ 0x113c1e68;
  ExceptionList = &local_14;
  if (DAT_116f6354 != 0) {
    local_8 = 0;
    RaiseException(0x80000003,0,0,(ULONG_PTR *)0x0);
  }
  ExceptionList = local_14;
  return;
}

