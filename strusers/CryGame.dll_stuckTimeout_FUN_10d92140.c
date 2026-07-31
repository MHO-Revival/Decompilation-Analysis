
/* [RE-AUTO c0]
   strings:
     ""PlayerStats""
     ""inAir""
     ""onGround""
     ""hasHitWall""
     ""inFreefall""
     ""landed""
     ""jumped""
     ""inMovement""
     ""inRest""
     ""inWater"" */

void __thiscall FUN_10d92140(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_2 + 0x14))("PlayerStats");
  iVar2 = (**(code **)(*param_2 + 0x28))();
  if (iVar2 != 1) {
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      uVar3 = FUN_10dac8d0();
      FUN_10daf870(uVar3);
    }
    (**(code **)(*param_2 + 0x70))("inAir",param_1,0);
    (**(code **)(*param_2 + 0x70))("onGround",param_1 + 4,0);
    (**(code **)(*param_2 + 0x74))("hasHitWall",param_1 + 8,0);
    (**(code **)(*param_2 + 0x5c))("inFreefall",(char *)(param_1 + 0xa3),0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xa4) = 1;
    }
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(bool *)(param_1 + 0xa2) = *(char *)(param_1 + 0xa3) == '\0';
    }
    (**(code **)(*param_2 + 0x74))("landed",param_1 + 0xd0,0);
    (**(code **)(*param_2 + 0x74))("jumped",param_1 + 0xd1,0);
    (**(code **)(*param_2 + 0x70))("inMovement",param_1 + 200,0);
    (**(code **)(*param_2 + 0x70))("inRest",param_1 + 0xcc,0);
    (**(code **)(*param_2 + 0x70))("inWater",param_1 + 0xc,0);
    (**(code **)(*param_2 + 0x70))("waterLevel",param_1 + 0x10,0);
    (**(code **)(*param_2 + 0x70))("flatSpeed",param_1 + 0x2c,0);
    (**(code **)(*param_2 + 0x68))("gravity",param_1 + 0x54,0);
    (**(code **)(*param_2 + 0x70))("bobCycle",param_1 + 0x98,0);
    (**(code **)(*param_2 + 0x70))("leanAmount",param_1 + 0xdc,0);
    (**(code **)(*param_2 + 0x70))("shakeAmount",param_1 + 0xe4,0);
    (**(code **)(*param_2 + 0x68))("physCamOffset",param_1 + 0xe8,0);
    (**(code **)(*param_2 + 0x70))("fallSpeed",param_1 + 0xf8,0);
    (**(code **)(*param_2 + 0x74))("isFiring",param_1 + 0x100,0);
    (**(code **)(*param_2 + 0x74))("isRagDoll",param_1 + 0xa1,0);
    (**(code **)(*param_2 + 0x74))("isWalkingOnWater",param_1 + 0x102,0);
    (**(code **)(*param_2 + 0x4c))("followCharacterHead",param_1 + 0x103,0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x104) = 1;
    }
    (**(code **)(*param_2 + 0x4c))("firstPersonBody",param_1 + 0x106,0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x107) = 1;
    }
    (**(code **)(*param_2 + 0x68))("velocity",param_1 + 0x3c,0);
    (**(code **)(*param_2 + 0x68))("velocityUnconstrained",param_1 + 0x48,0);
    (**(code **)(*param_2 + 0x74))("wasStuck",param_1 + 0xd2,0);
    (**(code **)(*param_2 + 0x74))("wasFlying",param_1 + 0xd3,0);
    (**(code **)(*param_2 + 0x70))("stuckTimeout",param_1 + 0xd4,0);
    (**(code **)(*param_2 + 0x68))("upVector",param_1 + 0x11c,0);
    (**(code **)(*param_2 + 0x68))("groundNormal",param_1 + 0x128,0);
    (**(code **)(*param_2 + 0x68))("FPWeaponPos",param_1 + 0x134,0);
    (**(code **)(*param_2 + 0x60))("FPWeaponAngles",param_1 + 0x140,0);
    (**(code **)(*param_2 + 0x68))("FPSecWeaponPos",param_1 + 0x164,0);
    (**(code **)(*param_2 + 0x60))("FPSecWeaponAngles",param_1 + 0x170,0);
    (**(code **)(*param_2 + 0x74))("isThirdPerson",param_1 + 0x101,0);
    (**(code **)(*param_2 + 0x74))("isFrozen",param_1 + 0xa9,0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xaa) = 1;
    }
    (**(code **)(*param_2 + 0x74))("isHidden",param_1 + 0xa5,0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xa6) = 1;
    }
    (**(code **)(*param_2 + 0x74))("isOnLadder",param_1 + 0x1dc,0);
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x1dd) = 1;
    }
    (**(code **)(*param_2 + 0x74))("exitingLadder",param_1 + 0x1de,0);
    (**(code **)(*param_2 + 0x68))("ladderTop",param_1 + 0x1e0,0);
    (**(code **)(*param_2 + 0x68))("ladderBottom",param_1 + 0x1ec,0);
    (**(code **)(*param_2 + 0x68))("ladderEnterPos",param_1 + 0x208,0);
    (**(code **)(*param_2 + 100))("ladderEnterRot",param_1 + 0x1f8,0);
    (**(code **)(*param_2 + 0x68))("ladderOrientation",param_1 + 0x214,0);
    (**(code **)(*param_2 + 0x68))("ladderUpDir",param_1 + 0x220,0);
    (**(code **)(*param_2 + 100))("playerRotation",param_1 + 0x238,0);
    (**(code **)(*param_2 + 0x70))("forceCrouchTime",param_1 + 0xb4,0);
    (**(code **)(*param_2 + 0x54))("grabbedHeavyObject",param_1 + 0xb8,0);
  }
  (**(code **)(*param_2 + 0x1c))();
  return;
}

