
// [d0] FUN_101c3720 @101c3720  (emitted in an earlier root)

// [d1] FUN_101c4430 @101c4430  (emitted in an earlier root)

// [d1] FUN_103c5000 @103c5000  (emitted in an earlier root)

// ===== [d2] FUN_101c49e0 @101c49e0  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c49e0(void)

{
  uint uVar1;
  
  if (DAT_113f249c == 0xffffffff) {
    DAT_113f249c = 10;
  }
  else {
    uVar1 = DAT_113f249c;
    if ((int)DAT_113f249c < 1) goto LAB_101c4a08;
  }
  DAT_113f249c = DAT_113f249c - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4a08:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c3d00 @101c3d00  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c3d00(void)

{
  uint uVar1;
  
  if (DAT_113f24e8 == 0xffffffff) {
    DAT_113f24e8 = 10;
  }
  else {
    uVar1 = DAT_113f24e8;
    if ((int)DAT_113f24e8 < 1) goto LAB_101c3d28;
  }
  DAT_113f24e8 = DAT_113f24e8 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c3d28:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_112beda0 @112beda0  (15 bytes) =====

/* WARNING: Removing unreachable block (ram,0x112bede8) */
/* WARNING: Removing unreachable block (ram,0x112bedf6) */
/* WARNING: Removing unreachable block (ram,0x112bee2f) */
/* WARNING: Removing unreachable block (ram,0x112bee3d) */
/* WARNING: Removing unreachable block (ram,0x112bee47) */
/* WARNING: Removing unreachable block (ram,0x112bee57) */
/* [RE-AUTO c0] */

ulonglong FUN_112beda0(void)

{
  double dVar1;
  float in_XMM0_Da;
  ulonglong in_XMM0_Qb;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  if ((((uint)ABS(in_XMM0_Da) < 0x7f800000) && (dVar1 = (double)in_XMM0_Da, dVar1 < DAT_1139e858))
     && (DAT_1139e850 <= dVar1)) {
    auVar4._0_8_ = ABS(dVar1);
    auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    uVar3 = 0;
    if (auVar4._0_8_ != 0.0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_1139e830;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_1139e838;
      auVar5 = auVar4 & auVar6 | auVar5;
      lVar7 = (ulonglong)DAT_1139e890 - ((ulonglong)auVar4._0_8_ >> 0x34);
      uVar8 = auVar5._0_8_ >> lVar7;
      iVar2 = -(uint)((int)DAT_1139e890 < (int)(uint)((ulonglong)((longlong)dVar1 << 1) >> 0x35));
      uVar3 = CONCAT44(iVar2,iVar2);
      uVar3 = ~uVar3 & uVar8 |
              auVar5._0_8_ << ((ulonglong)auVar4._0_8_ >> 0x34) - (ulonglong)DAT_1139e890 & uVar3;
      uVar3 = ~-(ulonglong)(dVar1 == auVar4._0_8_) & -uVar3 |
              uVar3 & -(ulonglong)(dVar1 == auVar4._0_8_);
      if ((0 < (int)lVar7) &&
         (auVar9._0_8_ = uVar8 << lVar7, auVar9._8_8_ = (auVar5._8_8_ >> lVar7) << lVar7,
         SUB164(auVar5 ^ auVar9,0) != 0 || SUB164(auVar5 ^ auVar9,4) != 0)) {
        FUN_112bef3d();
      }
    }
    return uVar3;
  }
  FUN_112bef3d();
  return 0x8000000000000000;
}


// ===== [d2] FUN_101c4a10 @101c4a10  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4a10(void)

{
  uint uVar1;
  
  if (DAT_113f2498 == 0xffffffff) {
    DAT_113f2498 = 10;
  }
  else {
    uVar1 = DAT_113f2498;
    if ((int)DAT_113f2498 < 1) goto LAB_101c4a38;
  }
  DAT_113f2498 = DAT_113f2498 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4a38:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c4a40 @101c4a40  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4a40(void)

{
  uint uVar1;
  
  if (DAT_113f2494 == 0xffffffff) {
    DAT_113f2494 = 10;
  }
  else {
    uVar1 = DAT_113f2494;
    if ((int)DAT_113f2494 < 1) goto LAB_101c4a68;
  }
  DAT_113f2494 = DAT_113f2494 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4a68:
  return uVar1 & 0xffffff00;
}


// [d2] _snprintf_s @EXTERNAL:00000120  (emitted in an earlier root)

// [d2] FUN_112bed8e @112bed8e  (emitted in an earlier root)

// [d2] FUN_10653dc0 @10653dc0  (emitted in an earlier root)

// [d2] FUN_100282d0 @100282d0  (emitted in an earlier root)

// [d2] FUN_1002bca0 @1002bca0  (emitted in an earlier root)

// [d2] FUN_10028a60 @10028a60  (emitted in an earlier root)
