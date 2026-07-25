// FUN_10bec040 @ 10bec040
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0]
   strings:
     ""Objects/characters/Player/male/male_skeleton_1.cdf""
     ""Objects/characters/Player/female/female_skeleton_1.cdf""
     ""mh_sharemem_addrinfo""
     ""co_0950_anim""
     ""eye_left""
     ""eye_right"" */

void __fastcall FUN_10bec040(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_54 [8];
  uint local_34;
  int *local_c;
  int *local_8;
  
  pcVar9 = "Objects/characters/Player/female/female_skeleton_1.cdf";
  if (*(int *)(param_1 + 0x138) == 0) {
    pcVar9 = "Objects/characters/Player/male/male_skeleton_1.cdf";
  }
  if (*(int *)(param_1 + 0x130) - *(int *)(param_1 + 300) >> 2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x1d4))(0,pcVar9,0);
  }
  else {
    CInfoRecord__GetModelString(pcVar9);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x1d8))(0,&local_c,(int *)(param_1 + 300),0);
    piVar5 = local_c + -3;
    if ((-1 < *piVar5) && (iVar2 = FUN_10c3dad0(piVar5), iVar2 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_c[-1]);
      FUN_10c3d900(piVar5);
    }
  }
  FUN_10ba9b00(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x9c,param_1 + 0x34,
               *(undefined4 *)(param_1 + 0x138),&DAT_40a00000,1);
  CAvatarInfo__SpawnWeaponEntities();
  DAT_1202e108 = 0;
  pbVar8 = &DAT_11d9d32b;
  pbVar3 = *(byte **)(param_1 + 0x140);
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_10bec133:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_10bec138;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10bec133;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10bec138:
  if (uVar4 == 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x120))(1);
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  (**(code **)(*piVar5 + 0xc))(*(undefined4 *)(param_1 + 0x30));
  local_8 = (int *)&DAT_1201fc98;
  switch(*(undefined4 *)(param_1 + 0x13c)) {
  case 1:
  case 7:
    FUN_1083ac30("co_0950_anim");
    break;
  case 2:
  case 8:
    FUN_1083ac30("co_0951_anim");
    break;
  case 3:
  case 9:
    FUN_1083ac30("co_0952_anim");
    break;
  case 4:
  case 10:
    FUN_1083ac30("co_0953_anim");
    break;
  case 5:
  case 0xb:
    FUN_1083ac30("co_0954_anim");
    break;
  case 6:
  case 0xc:
    FUN_1083ac30("co_0956_anim");
    break;
  default:
    FUN_1083ab70("co_0950_anim",0xc);
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x1b8))(0);
  local_c = (int *)(**(code **)(*piVar5 + 0x4c))();
  piVar5 = local_8;
  if (local_c != (int *)0x0) {
    FUN_10ab77b0(0,0);
    local_34 = local_34 | 0x283;
    local_54[0] = 0;
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x1b8))(0);
    local_8 = (int *)(**(code **)(*piVar6 + 0x60))();
    iVar2 = (**(code **)(*local_8 + 0x14))(piVar5);
    if (-1 < iVar2) {
      (**(code **)(*local_8 + 0x68))(iVar2);
      (**(code **)(*local_c + 0x28))(piVar5,local_54);
      (**(code **)(*local_c + 0x90))(0,0);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x1b8))(0);
      (**(code **)(*piVar6 + 0x11c))(0);
    }
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x1b8))(0);
    if (piVar6 != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*piVar6 + 0x4c))();
      iVar2 = (**(code **)(*piVar7 + 0x44))(0);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar7 + 0x44))(0);
        local_c = (int *)(iVar2 + -1);
        iVar2 = (**(code **)(*piVar7 + 0x4c))(0,local_c);
        if ((*(byte *)(iVar2 + 0x60) & 1) != 0) {
          (**(code **)(*piVar7 + 0x50))(0,local_c,0,0);
        }
      }
      piVar7 = (int *)(**(code **)(*piVar6 + 0x58))();
      iVar2 = (**(code **)(*piVar7 + 0x18))("eye_left");
      piVar7 = (int *)(**(code **)(*piVar6 + 0x58))();
      local_c = (int *)(**(code **)(*piVar7 + 0x18))("eye_right");
      if (iVar2 != 0) {
        piVar7 = (int *)(**(code **)(*piVar6 + 0x58))();
        (**(code **)(*piVar7 + 0x10))(iVar2);
        piVar7 = (int *)(**(code **)(*piVar6 + 0x58))();
        (**(code **)(*piVar7 + 0x10))(local_c);
      }
      (**(code **)(*piVar6 + 0x150))();
      (**(code **)(*piVar6 + 0x1bc))(0);
    }
  }
  piVar6 = piVar5 + -3;
  if ((-1 < *piVar6) && (iVar2 = FUN_10c3dad0(piVar6), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[-1]);
    FUN_10c3d900(piVar6);
  }
  return;
}

