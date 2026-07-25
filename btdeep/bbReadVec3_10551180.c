
// [d0] FUN_10551180 @10551180  (emitted in an earlier root)

// [d1] FUN_105fc040 @105fc040  (emitted in an earlier root)

// [d1] FUN_10551110 @10551110  (emitted in an earlier root)

// [d1] FUN_10550f00 @10550f00  (emitted in an earlier root)

// [d1] FUN_10551140 @10551140  (emitted in an earlier root)

// [d1] FUN_10550ed0 @10550ed0  (emitted in an earlier root)

// [d1] FUN_10550e70 @10550e70  (emitted in an earlier root)

// [d1] FUN_10550ea0 @10550ea0  (emitted in an earlier root)

// [d1] FUN_10550f60 @10550f60  (emitted in an earlier root)

// [d1] FUN_10550f30 @10550f30  (emitted in an earlier root)

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

