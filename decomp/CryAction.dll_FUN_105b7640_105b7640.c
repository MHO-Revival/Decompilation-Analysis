
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: __allmul */

uint __fastcall FUN_105b7640(int param_1)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  longlong lVar9;
  char local_5;
  
  local_5 = '\0';
  cVar3 = FUN_103db9b0(8,&local_5);
  lVar9 = CONCAT44(DAT_113f227c,DAT_113f2278);
  if ((cVar3 != '\0') && (lVar9 = CONCAT44(DAT_113f227c,DAT_113f2278), local_5 == '\0')) {
    lVar9 = __allmul(DAT_113f2278,DAT_113f227c,0x343fd,0);
    uVar1 = DAT_113c1410;
    lVar9 = lVar9 + 0x269ec3;
    uVar4 = (uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) * 0x10000;
    fVar2 = (float)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar2 = fVar2 + _DAT_112fe674;
    }
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      pfVar5 = *(float **)(param_1 + 0x70);
      iVar6 = *(int *)(param_1 + 0x7c) - (int)pfVar5;
      fVar8 = DAT_113c1280;
      do {
        fVar8 = fVar8 + *(float *)(iVar6 + (int)pfVar5) + *pfVar5;
        if (fVar2 * _DAT_113c1290 * DAT_113c12f4 < fVar8) {
          uVar7 = 0;
          if (uVar4 != *(uint *)(param_1 + 0x88)) {
            if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2 != 0) {
              do {
                DAT_113f227c = (undefined4)((ulonglong)lVar9 >> 0x20);
                DAT_113f2278 = (undefined4)lVar9;
                *(undefined4 *)(*(int *)(param_1 + 0x7c) + uVar7 * 4) = 0;
                lVar9 = CONCAT44(DAT_113f227c,DAT_113f2278);
                uVar7 = uVar7 + 1;
              } while (uVar7 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2));
            }
            DAT_113f227c = (undefined4)((ulonglong)lVar9 >> 0x20);
            DAT_113f2278 = (undefined4)lVar9;
            *(uint *)(param_1 + 0x88) = uVar4;
            return uVar4;
          }
          do {
            DAT_113f227c = (undefined4)((ulonglong)lVar9 >> 0x20);
            DAT_113f2278 = (undefined4)lVar9;
            if (uVar7 == uVar4) {
              *(uint *)(*(int *)(param_1 + 0x7c) + uVar7 * 4) =
                   *(uint *)(*(int *)(param_1 + 0x70) + uVar7 * 4) ^ uVar1;
            }
            else {
              *(float *)(*(int *)(param_1 + 0x7c) + uVar7 * 4) =
                   *(float *)(*(int *)(param_1 + 0x70) + uVar4 * 4) /
                   (float)(*(int *)(param_1 + 0x6c) + -1);
            }
            lVar9 = CONCAT44(DAT_113f227c,DAT_113f2278);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < *(int *)(param_1 + 0x6c));
          *(uint *)(param_1 + 0x88) = uVar4;
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        pfVar5 = pfVar5 + 1;
      } while ((int)uVar4 < *(int *)(param_1 + 0x6c));
    }
  }
  DAT_113f227c = (undefined4)((ulonglong)lVar9 >> 0x20);
  DAT_113f2278 = (undefined4)lVar9;
  uVar1 = *(uint *)(param_1 + 0x6c);
  uVar4 = FUN_10655d90();
  return (uint)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
}

