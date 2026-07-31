
/* [RE-AUTO c0]
   strings:
     ""ReqVelo""
     ""ReqVeloX""
     ""ReqVeloY""
     ""ReqVeloZ""
     ""ReqRotZ""
     ""PhysVelo""
     ""PhysVeloX""
     ""PhysVeloY""
     ""PhysVeloZ""
     ""PhysVeloUn"" */

void __fastcall FUN_10ecb9c0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  iVar2 = *(int *)(DAT_120286b8 + 0x6dc);
  pbVar3 = (byte *)(**(code **)(**(int **)(DAT_120286b8 + 0x6e4) + 0x10))();
  pbVar4 = (byte *)(**(code **)(**(int **)(param_1 + 0xc) + 0x48))();
  pbVar9 = &DAT_11d9e074;
  pbVar7 = pbVar3;
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_10ecba11:
      uVar8 = -(uint)bVar10 | 1;
      goto LAB_10ecba16;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_10ecba11;
    pbVar7 = pbVar7 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  uVar8 = 0;
LAB_10ecba16:
  if (uVar8 != 0) {
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10ecba40:
        uVar8 = -(uint)bVar10 | 1;
        goto LAB_10ecba45;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10ecba40;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_10ecba45:
    if (uVar8 != 0) goto LAB_10ecba4d;
  }
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1c3c) == 0) {
      piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      uVar6 = (**(code **)(*piVar5 + 0x1d4))();
      *(undefined4 *)(param_1 + 0x1c3c) = uVar6;
    }
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("ReqVelo",0,1,0xc1a00000,0x41a00000,0,&DAT_40a00000,0,0,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("ReqVeloX",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x3f800000,0,0x3f800000
               ,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("ReqVeloY",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x40000000,0,0x3f800000
               ,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("ReqVeloZ",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,&DAT_40400000,0,
               0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("ReqRotZ",0,1,0xc3b40000,0x43b40000,0xc0a00000,&DAT_40a00000,&DAT_40800000,0,
               0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVelo",0,1,0xc1a00000,0x41a00000,0,&DAT_40a00000,0,0x3f800000,0x3f800000,
               0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloX",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x3f800000,0x3f800000,
               0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloY",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x40000000,0x3f800000,
               0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloZ",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,&DAT_40400000,
               0x3f800000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloUn",0,1,0xc1a00000,0x41a00000,0,&DAT_40a00000,0,0x40000000,0x3f800000,
               0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloUnX",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x3f800000,
               0x40000000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloUnY",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,0x40000000,
               0x40000000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("PhysVeloUnZ",0,1,0xc1a00000,0x41a00000,0xc0a00000,&DAT_40a00000,&DAT_40400000,
               0x40000000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("OnGround",0,1,0,0x3f800000,0,0x3f800000,&DAT_40a00000,0x3f000000,0x3f800000,
               0x3f000000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("Jumping",0,1,0,0x3f800000,0,0x3f800000,&DAT_40a00000,0x3f800000,0x3f800000,
               0x3f000000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("Flying",0,1,0,0x3f800000,0,0x3f800000,&DAT_40a00000,0x3fc00000,0x3f800000,0x3f000000
              );
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("StuckTimer",0,1,0,0x3f000000,0,0x3f000000,&DAT_40a00000,0x40000000,0x3f800000,
               0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("InAirTimer",0,1,0,&DAT_40a00000,0,&DAT_40a00000,&DAT_40800000,0x40000000,0x3f800000,
               0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("InWaterTimer",0,1,0xc0a00000,&DAT_40a00000,0xbf000000,0x3f000000,&DAT_40800000,
               &DAT_40400000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("OnGroundTimer",0,1,0,&DAT_40a00000,0,&DAT_40a00000,&DAT_40800000,0x3f800000,
               0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("GroundSlope",0,1,0,0x42b40000,0,0x42b40000,0,&DAT_40400000,0x3f800000,0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x1c))
              ("GroundSlopeMod",0,1,0,0x42b40000,0,0x42b40000,0x3f800000,&DAT_40400000,0x3f800000,
               0x3f800000);
    return;
  }
LAB_10ecba4d:
  if (*(int **)(param_1 + 0x1c3c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10ecba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c3c) + 0x10))();
  return;
}

