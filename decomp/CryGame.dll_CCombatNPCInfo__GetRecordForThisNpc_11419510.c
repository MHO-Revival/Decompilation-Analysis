
/* [RE-R1]
   calls: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo"" */

undefined * CCombatNPCInfo__GetRecordForThisNpc(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1025b060();
  iVar4 = CCombatNPCInfo__FindInfoByKey(0,"CCombatNPCInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) && (*(int *)(iVar4 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / *(int *)(iVar4 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (puVar2 = *(undefined **)(iVar1 + (iVar3 % *(int *)(iVar4 + 0x28)) * 4),
       puVar2 != (undefined *)0x0)) {
      return puVar2;
    }
  }
  if ((DAT_1218fe20 & 1) == 0) {
    DAT_1218fe20 = DAT_1218fe20 | 1;
    FUN_11418540();
    FUN_11a8911f(&LAB_11c9caf0);
  }
  return &DAT_1218fd50;
}

