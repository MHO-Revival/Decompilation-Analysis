
/* [RE-R1]
   strings:
     ""Steer_Enabled""
     ""RequestedMoveAnim""
     ""MoveSpeedMultiplier"" */

void __thiscall MovementRequestProxy__ApplyAnimGraphInputs(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  uVar1 = param_2;
  FUN_10dba240(param_1 + 0x1f3c);
  if (*(int *)(param_1 + 0xbc) != 0) {
    local_8 = *(undefined4 **)(*(int *)(param_1 + 0xbc) + 0x18);
    if (local_8 != (undefined4 *)0x0) {
      local_c = *local_8;
      uVar3 = FUN_11316bf0();
      CInfoRecord__GetModelString(uVar3);
      if ((*(uint *)(local_10 + -8) != 0) && (*(uint *)(local_10 + -8) < 0x100)) {
        FUN_100ebf60(uVar1 + 4,0x100,local_10);
        *(undefined4 *)(uVar1 + 0x184) = local_8[3];
      }
      piVar5 = (int *)(local_10 + -0xc);
      if (-1 < *piVar5) {
        iVar4 = FUN_10c3dad0(piVar5);
        if (iVar4 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
          FUN_10c3d900(piVar5);
        }
      }
    }
  }
  param_2 = param_2 & 0xffffff;
  if (*(int *)(param_1 + 0x1cdc) != 0) {
    uVar3 = FUN_113168d0("Steer_Enabled",&local_14);
    cVar2 = FUN_1046dc90(uVar3);
    if (cVar2 != '\0') {
      FUN_1025bef0(local_14,(int)&param_2 + 3);
      *(undefined1 *)(uVar1 + 0x165) = param_2._3_1_;
    }
    FUN_11316910();
    uVar3 = FUN_113168d0("RequestedMoveAnim",&local_18);
    FUN_1046dc90(uVar3);
    FUN_10497060(local_18,&local_8);
    piVar5 = (int *)FUN_113168d0(&DAT_11d9d32b);
    if (local_8 != (undefined4 *)*piVar5) {
      piVar5 = (int *)FUN_113168d0(&DAT_11dbab60);
      if (local_8 != (undefined4 *)*piVar5) {
        uVar3 = FUN_11317f30();
        FUN_100ebf60(uVar1 + 4,0x100,uVar3);
      }
    }
    uVar3 = FUN_113168d0("MoveSpeedMultiplier",&local_1c);
    FUN_1046dc90(uVar3);
    FUN_10264630(local_1c,&local_20);
    *(undefined4 *)(uVar1 + 0x184) = local_20;
  }
  return;
}

