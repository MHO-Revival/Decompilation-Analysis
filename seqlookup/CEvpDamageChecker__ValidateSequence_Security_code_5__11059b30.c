
/* [RE-R1]
   strings:
     ""[Security]EvpDamageChecker error code 5 m_sequence = %d, iSequence = %d""
     ""[Security]EvpDamageChecker error code 5 t = %I64i (0x%x), seq = %I64i (0x%x)"" */

uint __thiscall
CEvpDamageChecker__ValidateSequence_Security_code_5_
          (int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_5 & 0xffff0000;
  if (param_2 << 0x10 != uVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    if (3 < *(int *)(param_1 + 0x58)) {
      FUN_11481740(param_1,
                   "[Security]EvpDamageChecker error code 5 t = %I64i (0x%x), seq = %I64i (0x%x)",
                   param_2,param_3,param_2,param_3,param_4,param_5,param_4,param_5);
      uVar2 = FUN_114811e0(param_6,5);
      return uVar2;
    }
    goto LAB_11059ba5;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  uVar3 = param_5 << 0x10 | param_4 >> 0x10;
  uVar2 = (int)uVar3 >> 0x1f;
  if (iVar1 == 0) {
LAB_11059b72:
    if (uVar3 == 0) {
LAB_11059b76:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      if (3 < *(int *)(param_1 + 0x58)) {
        FUN_11481740(param_1,
                     "[Security]EvpDamageChecker error code 5 m_sequence = %d, iSequence = %d",iVar1
                     ,uVar3);
        uVar2 = FUN_114811e0(param_6,5);
        return uVar2;
      }
    }
  }
  else {
    uVar2 = uVar3 - iVar1;
    if (uVar2 != 1) goto LAB_11059b76;
    if (iVar1 == 0) goto LAB_11059b72;
  }
  *(uint *)(param_1 + 0x54) = uVar3;
LAB_11059ba5:
  return uVar2 & 0xffffff00;
}

