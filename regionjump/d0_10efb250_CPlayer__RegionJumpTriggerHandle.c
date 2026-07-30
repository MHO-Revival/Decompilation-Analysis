
/* [RE-AUTO c3]
   id: CPlayer::RegionJumpTriggerHandle
   strings:
     ""g_iRegionJumpFadeTime""
     ""CPlayer::RegionJumpTriggerHandle"" */

void __thiscall CPlayer__RegionJumpTriggerHandle(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x871] == '\0') {
    uVar3 = 1000;
    if ((DAT_1203c94c & 1) == 0) {
      DAT_1203c94c = DAT_1203c94c | 1;
      DAT_1203c948 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                      ("g_iRegionJumpFadeTime");
    }
    if (DAT_1203c948 != (int *)0x0) {
      uVar3 = (**(code **)(*DAT_1203c948 + 8))();
    }
    *(undefined1 *)(param_1 + 0x871) = 1;
    FUN_10f27cf0(param_2);
    (**(code **)(*param_1 + 800))();
    piVar1 = (int *)FUN_11398e60();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1ac))(uVar3,0);
    }
    FUN_10f1de80();
    iVar2 = FUN_100ea610("CPlayer::RegionJumpTriggerHandle",uVar3,1,param_1,FUN_10efb370,0);
    param_1[0x86f] = iVar2;
  }
  return;
}

