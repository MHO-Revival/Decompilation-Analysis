
// [d0] FUN_10551270 @10551270  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d1] FUN_103c9820 @103c9820  (emitted in an earlier root)

// [d1] FUN_10551520 @10551520  (emitted in an earlier root)

// ===== [d2] FUN_105513b0 @105513b0  (145 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_105513b0(int param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_10551180(&local_10);
  if (((*param_2 == local_10) && (param_2[1] == local_c)) && (param_2[2] == local_8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  switch(*(int *)(param_1 + 0xc) + 1) {
  case 0:
  case 7:
    cVar2 = FUN_10550fc0(param_2,param_1 + 0x1c);
    break;
  case 1:
    cVar2 = FUN_105fc020(param_2,param_1 + 0x1c);
    break;
  case 2:
    cVar2 = FUN_105510b0(param_2,param_1 + 0x1c);
    break;
  case 3:
    cVar2 = FUN_10551020(param_2,param_1 + 0x1c);
    break;
  case 4:
    cVar2 = FUN_105510e0(param_2,param_1 + 0x1c);
    break;
  case 5:
    cVar2 = FUN_10550ff0(param_2,param_1 + 0x1c);
    break;
  case 6:
    cVar2 = FUN_10550f90(param_2,param_1 + 0x1c);
    break;
  case 8:
    cVar2 = FUN_10551080(param_2,param_1 + 0x1c);
    break;
  case 9:
    cVar2 = FUN_10551050(param_2,param_1 + 0x1c);
    break;
  default:
    cVar2 = '\0';
  }
  if ((!bVar1) && (iVar3 = *(int *)(param_1 + 0x10), iVar3 != *(int *)(param_1 + 0x14))) {
    do {
      (**(code **)(iVar3 + 4))();
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(param_1 + 0x14));
  }
  return cVar2 != '\0';
}


// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)
