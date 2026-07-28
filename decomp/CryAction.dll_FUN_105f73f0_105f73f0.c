
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffb : 0x105f7411 */
/* WARNING: Removing unreachable block (ram,0x105f740d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0] */

float10 __fastcall FUN_105f73f0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(char *)(param_1 + 0x38) != *(char *)(param_1 + 0x39)) {
    fVar1 = (float10)FUN_101d15e0();
    return fVar1;
  }
  fVar1 = (float10)FUN_101d15e0();
  fVar2 = (float10)FUN_101d15e0();
  fVar3 = (float10)FUN_101d15e0();
  fVar4 = (float10)FUN_101d15e0();
  fVar5 = (float10)FUN_101d15e0();
  fVar6 = (float10)FUN_101d15e0();
  return ((float10)(float)fVar5 * (float10)DAT_113063e0 + (float10)DAT_113c12d0) *
         ((float10)(float)fVar2 + (float10)(float)fVar1 + (float10)(float)fVar3 +
         (float10)(float)fVar4) + fVar6;
}

