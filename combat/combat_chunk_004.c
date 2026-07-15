/* ===== FUN_1104bc00 @ 1104bc00  size=814 ===== */
// strings:
//   "OnHit"
//   "scriptHitInfo"
//   "ExecuteHitReaction"
//   "reactionParams"
//   "ExecuteDeathReaction"
//   "EndCurrentReaction"
//   "StartReactionAnim"
//   "EndReactionAnim"
//   "IsValidReaction"
//   "reactionParams, scriptHitInfo"
//   "StartInteractiveAction"
//   "szActionName"

/* [RE-AUTO c0]
   strings:
     ""OnHit""
     ""scriptHitInfo""
     ""ExecuteHitReaction""
     ""reactionParams""
     ""ExecuteDeathReaction""
     ""EndCurrentReaction""
     ""StartReactionAnim""
     ""EndReactionAnim""
     ""IsValidReaction""
     ""reactionParams, scriptHitInfo"" */

undefined4 * __thiscall FUN_1104bc00(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d0b914;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = param_3;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  piVar2 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x14] = piVar2;
  (**(code **)(*piVar2 + 8))();
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1104bf80;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "OnHit";
    local_3c = "scriptHitInfo";
    local_20 = FUN_1104cb50;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1104c070;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ExecuteHitReaction";
    local_3c = "reactionParams";
    local_20 = FUN_1104cb50;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1104c100;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ExecuteDeathReaction";
    local_3c = "reactionParams";
    local_20 = FUN_1104cb50;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_1104c190;
  pcStack_8 = FUN_1104cbf0;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "EndCurrentReaction";
    local_34 = FUN_1104c190;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1104cbf0;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_1104c370;
  pcStack_8 = FUN_1104cbf0;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "StartReactionAnim";
    local_34 = FUN_1104c370;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1104cbf0;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_1104c570;
  pcStack_8 = FUN_1104cbf0;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "EndReactionAnim";
    local_34 = FUN_1104c570;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1104cbf0;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1104c240;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "IsValidReaction";
    local_3c = "reactionParams, scriptHitInfo";
    local_20 = FUN_1104cb30;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1104c5e0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "StartInteractiveAction";
    local_3c = "szActionName";
    local_20 = FUN_1104caf0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  return param_1;
}



/* ===== FUN_1104dea0 @ 1104dea0  size=2164 ===== */
// strings:
//   "SetExtensionActivation"
//   "extension, bActivate"
//   "SetExtensionParams"
//   "extension, params"
//   "GetExtensionParams"
//   "GetStats"
//   "GetParams"
//   "Reset"
//   "Quiet"
//   "Select"
//   "select"
//   "CanPickUp"
//   "userId"
//   "CanUse"
//   "IsMounted"
//   "PlayAction"
//   "actionName"
//   "GetOwnerId"
//   "StartUse"
//   "StopUse"

/* [RE-AUTO c0]
   strings:
     ""SetExtensionActivation""
     ""extension, bActivate""
     ""SetExtensionParams""
     ""extension, params""
     ""GetExtensionParams""
     ""GetStats""
     ""GetParams""
     ""Reset""
     ""Quiet""
     ""Select"" */

void __fastcall FUN_1104dea0(int param_1)

{
  char *local_38;
  char *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  code *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104ce10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetExtensionActivation";
    local_34 = "extension, bActivate";
    local_18 = FUN_1104ef50;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104ceb0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetExtensionParams";
    local_34 = "extension, params";
    local_18 = FUN_1104ef30;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104cf40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetExtensionParams";
    local_34 = "extension, params";
    local_18 = FUN_1104ef30;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d020;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetStats";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d290;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetParams";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d460;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "Reset";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d4b0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "Quiet";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104cfd0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "Select";
    local_34 = "select";
    local_18 = FUN_1104f080;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d500;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CanPickUp";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d5b0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CanUse";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d660;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsMounted";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d710;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "PlayAction";
    local_34 = "actionName";
    local_18 = FUN_1104eef0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d790;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetOwnerId";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d840;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "StartUse";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d890;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "StopUse";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d8e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "Use";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d930;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsUsed";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104dac0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetMountedDir";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104db40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetMountedAngleLimits";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104dbc0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetMountedAngleLimits";
    local_34 = "min_pitch, max_pitch, yaw_range";
    local_18 = FUN_1104ee60;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104dc30;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "OnHit";
    local_34 = "hit";
    local_18 = FUN_1104f000;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104dcd0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsDestroyed";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104d9e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "OnUsed";
    local_34 = "userId";
    local_18 = FUN_1104efb0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104dd80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetHealth";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104de30;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetMaxHealth";
    local_34 = "";
    local_18 = FUN_1104ee40;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  return;
}



/* ===== FUN_11050cf0 @ 11050cf0  size=2938 ===== */
// strings:
//   "SetAmmoCount"
//   "GetAmmoCount"
//   "GetClipSize"
//   "IsZoomed"
//   "IsZooming"
//   "GetDamage"
//   "GetAmmoType"
//   "GetRecoil"
//   "GetSpread"
//   "GetCrosshair"
//   "GetCrosshairOpacity"
//   "GetCrosshairVisibility"
//   "ModifyCommit"
//   "SupportsAccessory"
//   "accessoryName"
//   "GetAccessory"
//   "AttachAccessoryPlaceHolder"
//   "accessory, attach"
//   "GetAttachmentHelperPos"
//   "helperName"

/* [RE-AUTO c0]
   strings:
     ""SetAmmoCount""
     ""GetAmmoCount""
     ""GetClipSize""
     ""IsZoomed""
     ""IsZooming""
     ""GetDamage""
     ""GetAmmoType""
     ""GetRecoil""
     ""GetSpread""
     ""GetCrosshair"" */

void __fastcall FUN_11050cf0(int param_1)

{
  char *local_38;
  char *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  code *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f6a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetAmmoCount";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f7a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetAmmoCount";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f820;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetClipSize";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f8a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsZoomed";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f940;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsZooming";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104f9e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetDamage";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fa60;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetAmmoType";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104faf0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRecoil";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fb70;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpread";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fbf0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetCrosshair";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fc70;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetCrosshairOpacity";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fd40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetCrosshairVisibility";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fe10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ModifyCommit";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104fe80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SupportsAccessory";
    local_34 = "accessoryName";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1104ff80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetAccessory";
    local_34 = "accessoryName";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050070;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AttachAccessoryPlaceHolder";
    local_34 = "accessory, attach";
    local_18 = FUN_110524d0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050230;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetAttachmentHelperPos";
    local_34 = "helperName";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050340;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetShooter";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110503e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ScheduleAttach";
    local_34 = "accessoryName, attach";
    local_18 = FUN_11052470;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050460;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AttachAccessory";
    local_34 = "accessoryName, attach, force";
    local_18 = FUN_11052400;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110504f0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SwitchAccessory";
    local_34 = "accessoryName";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050580;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsFiring";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050650;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "EnableFireMode";
    local_34 = "name, enable";
    local_18 = FUN_11052470;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110506d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsFireModeEnabled";
    local_34 = "name";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110507c0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetCurrentFireMode";
    local_34 = "name";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050830;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetCurrentFireMode";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110508d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetFireMode";
    local_34 = "idx";
    local_18 = FUN_11052320;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050960;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetFireModeIdx";
    local_34 = "name";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110509e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetNumOfFireModes";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050aa0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetCurrentZoomMode";
    local_34 = "name";
    local_18 = FUN_110523c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050b10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AutoShoot";
    local_34 = "nshots, autoReload";
    local_18 = FUN_11052360;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050bb0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "Reload";
    local_34 = "";
    local_18 = FUN_11052300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050c20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ActivateLamLaser";
    local_34 = "activate";
    local_18 = FUN_110524f0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11050c80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ActivateLamLight";
    local_34 = "activate";
    local_18 = FUN_110524f0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  return;
}



/* ===== FUN_110553b0 @ 110553b0  size=1154 ===== */
// calls: memset
// strings:
//   "RaycastTime"
//   "RayWorldIntersection(Game)"
//   "HeightThreshold"
//   "HeightTime"
//   "[Security]Movement error code 3"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""RaycastTime""
     ""RayWorldIntersection(Game)""
     ""HeightThreshold""
     ""HeightTime""
     ""[Security]Movement error code 3"" */

uint __thiscall FUN_110553b0(int param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [16];
  undefined1 *local_e0;
  undefined1 *local_dc;
  int **ppiStack_d8;
  undefined1 local_cc [36];
  float local_a8;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int *local_44;
  int local_3c [4];
  float local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  float local_10;
  undefined1 local_9;
  int *local_8;
  
  ppiStack_d8 = &local_28;
  local_28 = (int *)0x0;
  local_e0 = auStack_f0;
  local_dc = auStack_f0;
  FUN_100b62c0("RaycastTime","");
  FUN_11479100();
  piVar1 = (int *)FUN_1147cea0();
  if ((char)piVar1 != '\0') {
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
    uVar5 = (**(code **)(*piVar1 + 0x228))();
    local_14 = (int *)((ulonglong)uVar5 >> 0x20);
    uVar3 = (uint)uVar5;
    if (*(int *)(param_1 + 0x28) == 0 && *(int *)(param_1 + 0x2c) == 0) {
      local_8 = (int *)(uVar3 - *(uint *)(param_1 + 0x20));
      iVar4 = (int)local_14 +
              (-(uint)(uVar3 < *(uint *)(param_1 + 0x20)) - *(int *)(param_1 + 0x24));
      if ((iVar4 <= (int)local_28 >> 0x1f) &&
         ((piVar1 = local_28, iVar4 < (int)local_28 >> 0x1f || (local_8 < local_28))))
      goto LAB_11055671;
    }
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    piVar1 = DAT_1202e818;
    if ((DAT_1202e818 != (int *)0x0) &&
       (((DAT_1202e818[0x10] != 0 &&
         (piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x29c))
                                    (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4)),
         piVar1 != (int *)0x0)) && ((int *)piVar1[3] != (int *)0x0)))) {
      local_24 = 0;
      uStack_20 = 0;
      local_1c = 0xc3fa0000;
      local_8c = *param_2;
      local_2c = *(float *)(param_2 + 1) + DAT_11de98cc;
      if (DAT_11cc4cc0 < local_2c) {
        local_1c = (uint)local_2c ^ DAT_11de9c90;
      }
      local_18 = piVar1;
      iVar4 = (**(code **)(*(int *)piVar1[3] + 0x16c))();
      local_8 = (int *)DAT_1202e818[0x10];
      if (iVar4 != 0) {
        local_3c[0] = iVar4;
      }
      local_10 = (float)(uint)(iVar4 != 0);
      memset(&local_84,0,0x48);
      local_70 = local_2c;
      local_64 = local_1c;
      local_54 = local_cc;
      local_44 = local_3c;
      local_48 = local_10;
      local_78 = local_8c;
      local_6c = CONCAT44(uStack_20,local_24);
      local_60 = 0x101;
      local_5c = 0x40f;
      local_58 = 0;
      local_50 = 1;
      local_84 = 0;
      local_80 = 0;
      local_4c = 0;
      iVar4 = (**(code **)(*local_8 + 0x8c))(&local_84,"RayWorldIntersection(Game)",4);
      if (iVar4 == 0) {
        local_2c = 5000.0;
        local_24 = 0;
        uStack_20 = 0;
        local_1c = 0xc59c4000;
        iVar4 = (**(code **)(*(int *)local_18[3] + 0x16c))();
        local_18 = (int *)DAT_1202e818[0x10];
        if (iVar4 != 0) {
          local_3c[0] = iVar4;
        }
        local_8 = (int *)(uint)(iVar4 != 0);
        memset(&local_84,0,0x48);
        local_70 = local_2c;
        local_64 = local_1c;
        local_54 = local_cc;
        local_44 = local_3c;
        local_48 = (float)local_8;
        local_78 = local_8c;
        local_6c = CONCAT44(uStack_20,local_24);
        local_60 = 0x101;
        local_5c = 0x40f;
        local_58 = 0;
        local_50 = 1;
        local_84 = 0;
        local_80 = 0;
        local_4c = 0;
        iVar4 = (**(code **)(*local_18 + 0x8c))(&local_84,"RayWorldIntersection(Game)",4);
        if (iVar4 != 0) {
          local_10 = local_a8 - *(float *)(param_2 + 1);
          if (local_10 < 0.0) {
            local_10 = (float)((uint)local_10 ^ DAT_11de9c90);
          }
          local_8 = (int *)0x0;
          FUN_100b5f70("HeightThreshold",&local_9);
          FUN_11479100();
          uVar2 = FUN_1147cea0();
          if (((char)uVar2 == '\0') || (local_10 <= (float)(int)local_8)) goto LAB_110557d0;
        }
      }
      else {
        local_8 = (int *)(*(float *)(param_2 + 1) - local_a8);
        if ((float)local_8 < 0.0) {
          local_8 = (int *)((uint)local_8 ^ DAT_11de9c90);
        }
        local_10 = 0.0;
        FUN_100b5f70("HeightThreshold",&local_9);
        FUN_11479100();
        uVar2 = FUN_1147cea0();
        if (((char)uVar2 == '\0') || ((float)local_8 <= (float)(int)local_10)) {
LAB_110557d0:
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          return uVar2 & 0xffffff00;
        }
      }
      local_8 = (int *)0x0;
      FUN_100b5f70("HeightTime",&local_9);
      FUN_11479100();
      piVar1 = (int *)FUN_1147cea0();
      if ((char)piVar1 != '\0') {
        uVar2 = *(uint *)(param_1 + 0x28);
        if (uVar2 == 0 && *(int *)(param_1 + 0x2c) == 0) {
          *(uint *)(param_1 + 0x28) = uVar3;
          *(int **)(param_1 + 0x2c) = local_14;
          piVar1 = local_14;
        }
        else {
          iVar4 = (int)local_14 + (-(uint)(uVar3 < uVar2) - *(int *)(param_1 + 0x2c));
          piVar1 = local_8;
          if (((int)local_8 >> 0x1f <= iVar4) &&
             (((int)local_8 >> 0x1f < iVar4 || (local_8 < (int *)(uVar3 - uVar2))))) {
            FUN_114828f0(param_2);
            FUN_11481740(param_1,"[Security]Movement error code 3");
            uVar3 = FUN_114811e0(param_3,3);
            return uVar3;
          }
        }
      }
    }
  }
LAB_11055671:
  return (uint)piVar1 & 0xffffff00;
}



/* ===== FUN_11059000 @ 11059000  size=526 ===== */
// strings:
//   "ClientBeAttackCount"
//   "MonsterSequenceErrorRatio"
//   "MonsterAttackNameErrorRatio"
//   "MonsterProjectileErrorRatio"
//   "AttackDataErrorSanction"

/* [RE-AUTO c0]
   strings:
     ""ClientBeAttackCount""
     ""MonsterSequenceErrorRatio""
     ""MonsterAttackNameErrorRatio""
     ""MonsterProjectileErrorRatio""
     ""AttackDataErrorSanction"" */

undefined1 __fastcall FUN_11059000(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_ac [16];
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  int *piStack_94;
  char *pcStack_90;
  char *pcStack_8c;
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  undefined1 auStack_64 [16];
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  int *piStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  undefined1 auStack_40 [16];
  undefined1 *local_30;
  undefined1 *local_2c;
  int *piStack_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piStack_28 = &local_8;
  local_18 = 0;
  local_30 = auStack_40;
  local_2c = auStack_40;
  local_8 = 0;
  local_c = 0;
  pcStack_44 = "";
  uVar3 = *(undefined1 *)(param_1 + 0xa4);
  pcStack_48 = "ClientBeAttackCount";
  piStack_4c = (int *)0x11059044;
  FUN_100b62c0();
  piStack_4c = (int *)0x1105904b;
  FUN_11479100();
  piStack_4c = (int *)0x11059052;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    piStack_4c = &local_c;
    puStack_54 = auStack_64;
    puStack_50 = auStack_64;
    pcStack_68 = "";
    pcStack_6c = "MonsterSequenceErrorRatio";
    piStack_70 = (int *)0x11059079;
    FUN_100b62c0();
    piStack_70 = (int *)0x11059080;
    FUN_11479100();
    piStack_70 = (int *)0x11059087;
    cVar2 = FUN_1147cea0();
    if ((((cVar2 != '\0') && (iVar1 = *(int *)(param_1 + 0x90), local_8 <= iVar1)) && (iVar1 != 0))
       && (local_c <= (*(int *)(param_1 + 0x94) * 100) / iVar1)) {
      uVar3 = 1;
    }
  }
  piStack_4c = &local_8;
  local_10 = 0;
  puStack_54 = auStack_64;
  puStack_50 = auStack_64;
  pcStack_68 = "";
  pcStack_6c = "ClientBeAttackCount";
  piStack_70 = (int *)0x110590d2;
  FUN_100b62c0();
  piStack_70 = (int *)0x110590d9;
  FUN_11479100();
  piStack_70 = (int *)0x110590e0;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    piStack_70 = &local_10;
    puStack_78 = auStack_88;
    puStack_74 = auStack_88;
    pcStack_8c = "";
    pcStack_90 = "MonsterAttackNameErrorRatio";
    piStack_94 = (int *)0x11059102;
    FUN_100b62c0();
    piStack_94 = (int *)0x11059109;
    FUN_11479100();
    piStack_94 = (int *)0x11059110;
    cVar2 = FUN_1147cea0();
    if (((cVar2 != '\0') && (iVar1 = *(int *)(param_1 + 0x90), local_8 <= iVar1)) &&
       ((iVar1 != 0 && (local_10 <= (*(int *)(param_1 + 0x98) * 100) / iVar1)))) {
      uVar3 = 1;
    }
  }
  piStack_70 = &local_8;
  local_14 = 0;
  puStack_78 = auStack_88;
  puStack_74 = auStack_88;
  pcStack_8c = "";
  pcStack_90 = "ClientBeAttackCount";
  piStack_94 = (int *)0x1105915b;
  FUN_100b62c0();
  piStack_94 = (int *)0x11059162;
  FUN_11479100();
  piStack_94 = (int *)0x11059169;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    piStack_94 = &local_14;
    puStack_9c = auStack_ac;
    puStack_98 = auStack_ac;
    FUN_100b62c0("MonsterProjectileErrorRatio","");
    FUN_11479100();
    cVar2 = FUN_1147cea0();
    if (((cVar2 != '\0') && (iVar1 = *(int *)(param_1 + 0x90), local_8 <= iVar1)) &&
       ((iVar1 != 0 && (local_14 <= (*(int *)(param_1 + 0x9c) * 100) / iVar1)))) {
      uVar3 = 1;
    }
  }
  piStack_94 = &local_18;
  local_18 = 0;
  puStack_9c = auStack_ac;
  puStack_98 = auStack_ac;
  FUN_100b62c0("AttackDataErrorSanction","");
  FUN_11479100();
  cVar2 = FUN_1147cea0();
  if ((cVar2 != '\0') && (local_18 != 0)) {
    return uVar3;
  }
  return 0;
}



/* ===== FUN_11059210 @ 11059210  size=1163 ===== */
// strings:
//   "[EvpDamageChecker][9]Attack seq = %I64d, current seq = %I64d, last seq = %I64d"
//   "[EvpDamageChecker][9] cant find Boss netID:%d"
//   "[EvpDamageChecker][HandleClientHit] IsAttackNameValid no hashAttacker:%u, Boss netID:%d"
//   "[EvpDamageChecker][HandleClientHit][10] cant find equal hashAttacker:%u, Boss netID:%d"
//   "[EvpDamageChecker][HandleClientHit][10] cant find Boss hashFiremode:%u, Boss netID:%d"
//   "[Security]EvpDamage error code 10, firemode and AttackName verify fail, hash attack name = %u, hash firemode = %u"
//   "[Security]EvpDamage error code 11, projectile verify fail, hash attack name = %u"

/* [RE-AUTO c0]
   strings:
     ""[EvpDamageChecker][9]Attack seq = %I64d, current seq = %I64d, last seq = %I64d""
     ""[EvpDamageChecker][9] cant find Boss netID:%d""
     ""[EvpDamageChecker][HandleClientHit] IsAttackNameValid no hashAttacker:%u, Boss netID:%d""
     ""[EvpDamageChecker][HandleClientHit][10] cant find equal hashAttacker:%u, Boss netID:%d""
     ""[EvpDamageChecker][HandleClientHit][10] cant find Boss hashFiremode:%u, Boss netID:%d""
     ""[Security]EvpDamage error code 10, firemode and AttackName verify fail, hash attack name =
   %u, hash firemode = %u""
     ""[Security]EvpDamage error code 11, projectile verify fail, hash attack name = %u"" */

undefined1 __thiscall FUN_11059210(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined1 local_1b8 [408];
  int *local_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar10 = param_2;
  if ((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) {
    return 0;
  }
  local_c = param_2 + 0x49;
  piVar4 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x29c))(param_2[0x49]);
  local_10 = piVar4;
  if ((piVar4 != (int *)0x0) && (piVar4[3] != 0)) {
    (**(code **)(*piVar4 + 800))();
  }
  local_8 = piVar10 + 0x4c;
  FUN_1105a1b0(piVar10[0x4c]);
  FUN_11059cd0(piVar10[0x49]);
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  uVar11 = (**(code **)(*piVar5 + 0x228))();
  FUN_11056f00(uVar11,piVar10);
  if ((piVar4 == (int *)0x0) || (piVar4[3] == 0)) goto LAB_11059579;
  iVar6 = (**(code **)(*piVar4 + 800))();
  if (iVar6 != 0) {
    uVar7 = (**(code **)(*(int *)piVar4[3] + 0x48))();
    FUN_1083ac30(uVar7);
    piVar5 = (int *)(**(code **)(*piVar4 + 800))();
    puVar8 = (undefined4 *)(**(code **)(*piVar5 + 0xb8))();
    puVar9 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)*puVar8;
    }
    FUN_1083ac30(puVar9);
    piVar5 = (int *)(**(code **)(*piVar4 + 800))();
    iVar6 = (**(code **)(*piVar5 + 0xa8))();
    if (iVar6 == 1) {
      (**(code **)(*piVar4 + 800))();
      cVar2 = FUN_113a32e0();
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      }
    }
  }
  if ((piVar4[3] == 0) || (iVar6 = (**(code **)(*piVar4 + 800))(), iVar6 == 0)) goto LAB_11059579;
  piVar5 = (int *)(**(code **)(*piVar4 + 800))();
  iVar6 = (**(code **)(*piVar5 + 0xa8))();
  if (iVar6 != 1) goto LAB_11059579;
  (**(code **)(*piVar4 + 800))();
  cVar2 = FUN_113a32e0();
  if (cVar2 == '\0') goto LAB_11059579;
  uVar1 = piVar10[0x4c];
  if (uVar1 != 0) {
    if ((uVar1 >> 0x1c == 2) &&
       (((iVar6 = FUN_10b27fa0(uVar1), iVar6 == 0 ||
         (iVar6 = *(int *)(DAT_1202e818 + 0xd0), FUN_1105bd80(&param_2,local_c),
         param_2 == (int *)(iVar6 + 0x2c))) ||
        (piVar10 = param_2 + 5, piVar4 = (int *)FUN_10463b20(&param_2,local_8),
        (int *)*piVar4 == piVar10)))) {
      FUN_11481740(param_1,
                   "[Security]EvpDamage error code 11, projectile verify fail, hash attack name = %u"
                   ,*local_8);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    goto LAB_11059579;
  }
  iVar6 = *(int *)(DAT_1202e818 + 0xd0);
  FUN_1105bd30(&local_8,local_c);
  piVar10 = param_2;
  if (local_8 == (int *)(iVar6 + 0x14)) {
    FUN_11481740(param_1,"[EvpDamageChecker][9] cant find Boss netID:%d",*local_c);
    piVar10 = param_2;
LAB_11059439:
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  else {
    local_20 = (int *)local_8[6];
    iStack_1c = local_8[7];
    piStack_18 = (int *)local_8[8];
    iStack_14 = local_8[9];
    piVar5 = (int *)param_2[0x58];
    iVar6 = param_2[0x59];
    param_2 = piStack_18;
    if (((piVar5 != piStack_18) || (iVar6 != iStack_14)) &&
       ((piVar5 != local_20 || (iVar6 != iStack_1c)))) {
      FUN_11481740(param_1,
                   "[EvpDamageChecker][9]Attack seq = %I64d, current seq = %I64d, last seq = %I64d",
                   piVar5,iVar6,local_20,iStack_1c,piStack_18,iStack_14);
      goto LAB_11059439;
    }
  }
  cVar2 = FUN_1105a890(piVar10[0x49],piVar10[5]);
  if (cVar2 != '\0') {
    cVar2 = FUN_1105aa20(piVar4,piVar10[4],piVar10[5],piVar10[6]);
    if (cVar2 == '\0') {
      FUN_11481740(param_1,
                   "[EvpDamageChecker][HandleClientHit] IsAttackNameValid no hashAttacker:%u, Boss netID:%d"
                   ,piVar10[6],piVar10[0x49]);
      cVar2 = FUN_1105a930(piVar10[0x49],piVar10[5],piVar10[6]);
      if (cVar2 == '\0') {
        iVar6 = piVar10[0x49];
        iVar13 = piVar10[6];
        pcVar12 = 
        "[EvpDamageChecker][HandleClientHit][10] cant find equal hashAttacker:%u, Boss netID:%d";
        goto LAB_110594bc;
      }
    }
LAB_11059579:
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    FUN_1105ae50(local_1b8,param_1 + 0x28);
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar13 = *(int *)(param_1 + 0x44);
      iVar6 = param_1 + 0x44;
      while (iVar6 != iVar13) {
        param_2 = (int *)(iVar6 + 4);
        cVar2 = FUN_11056f50(local_1b8);
        if (cVar2 != '\0') break;
        iVar6 = *param_2;
      }
      if (iVar6 != *(int *)(param_1 + 0x44)) {
        if ((local_10 != (int *)0x0) && (local_10[3] != 0)) {
          (**(code **)(*local_10 + 800))();
        }
        uVar3 = FUN_114811e0(param_3,4);
        FUN_11058460();
        return uVar3;
      }
      piVar10 = (int *)(param_1 + 0x34);
      FUN_1105c050(&param_2,*piVar10,piVar10,local_1b8);
      if (param_2 != piVar10) {
        FUN_1105e8a0(&param_2,param_2);
        FUN_11058460();
        return 0;
      }
      FUN_1105f400(local_1b8);
    }
    FUN_11058460();
    return 0;
  }
  iVar6 = piVar10[0x49];
  iVar13 = piVar10[5];
  pcVar12 = "[EvpDamageChecker][HandleClientHit][10] cant find Boss hashFiremode:%u, Boss netID:%d";
LAB_110594bc:
  FUN_11481740(param_1,pcVar12,iVar13,iVar6);
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  FUN_11481740(param_1,
               "[Security]EvpDamage error code 10, firemode and AttackName verify fail, hash attack name = %u, hash firemode = %u"
               ,piVar10[6],piVar10[5]);
  uVar3 = FUN_114811e0(param_3,8);
  FUN_11058460();
  return uVar3;
}



/* ===== FUN_110597f0 @ 110597f0  size=818 ===== */
// strings:
//   "EvpDamageTime"
//   "AckTimeout"

/* WARNING: Removing unreachable block (ram,0x11059a02) */
/* [RE-AUTO c0]
   strings:
     ""EvpDamageTime""
     ""AckTimeout"" */

void __fastcall FUN_110597f0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint auStack_24c [3];
  undefined4 uStack_240;
  undefined1 *puStack_23c;
  uint *puStack_238;
  uint *puStack_234;
  undefined1 local_224 [524];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar2 = CONCAT44(local_c,local_14);
    if (*(char *)(param_1 + 0x70) != '\0') goto LAB_11059b14;
    puStack_234 = (uint *)0x1105981f;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    puStack_234 = (uint *)0x1105982b;
    uVar9 = (**(code **)(*piVar4 + 0x228))();
    local_10 = (uint)((ulonglong)uVar9 >> 0x20);
    local_c = (uint)uVar9;
    puStack_234 = &local_8;
    puStack_23c = (undefined1 *)auStack_24c;
    puStack_238 = auStack_24c;
    local_8 = 0;
    FUN_100b62c0("EvpDamageTime","");
    FUN_11479100();
    cVar3 = FUN_1147cea0();
    if ((cVar3 != '\0') && (piVar4 = (int *)(param_1 + 0x34), (int *)*piVar4 != piVar4)) {
      iVar6 = *piVar4;
      puVar7 = (uint *)(iVar6 + 8);
      local_10 = (local_10 - *(int *)(iVar6 + 0xc)) - (uint)(local_c < *puVar7);
      if (((int)local_8 >> 0x1f <= (int)local_10) &&
         (((int)local_8 >> 0x1f < (int)local_10 || (local_8 < local_c - *puVar7)))) {
        puStack_234 = (uint *)0x110598a4;
        local_c = FUN_10ba9b00();
        if (local_c != 0) {
          puStack_234 = (uint *)0x110598b6;
          FUN_10bb3fc0();
          puStack_234 = (uint *)(iVar6 + 0x10);
          puStack_238 = (uint *)local_224;
          puStack_23c = (undefined1 *)0x110598c9;
          cVar3 = FUN_10c37ca0();
          if (cVar3 != '\0') {
            puStack_23c = local_224;
            uStack_240 = 0x110598dc;
            (**(code **)(**(int **)(param_1 + 0x1c) + 0x5c))();
          }
          puStack_23c = (undefined1 *)0x110598e7;
          FUN_10bb8690();
        }
        puStack_238 = (uint *)0x110598f0;
        puStack_234 = puVar7;
        FUN_1105f400();
        puStack_238 = (uint *)0x110598f7;
        FUN_1105f390();
      }
    }
  }
  lVar2 = CONCAT44(local_c,local_14);
  if ((*(char *)(param_1 + 0x70) != '\0') ||
     (lVar2 = CONCAT44(local_c,local_14), *(char *)(param_1 + 0x30) != '\0')) goto LAB_11059b14;
  puStack_234 = (uint *)0x11059918;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  puStack_234 = (uint *)0x11059924;
  lVar10 = (**(code **)(*piVar4 + 0x228))();
  uVar8 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar5 = (uint)lVar10;
  local_14 = uVar5;
  local_c = uVar8;
  if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 100) == 0) {
    uVar1 = (uint)(uVar5 < *(uint *)(param_1 + 0x68));
    iVar6 = uVar8 - *(int *)(param_1 + 0x6c);
    local_18 = iVar6 - uVar1;
    lVar2 = lVar10;
    if (((int)local_18 < 0) ||
       ((local_18 == 0 || SBORROW4(uVar8,*(int *)(param_1 + 0x6c)) != SBORROW4(iVar6,uVar1) &&
        (uVar5 - *(uint *)(param_1 + 0x68) < 0x4e21)))) goto LAB_11059b14;
    puStack_234 = &local_8;
    local_8 = 0;
    puStack_23c = (undefined1 *)auStack_24c;
    puStack_238 = auStack_24c;
    FUN_100b62c0("AckTimeout","");
    FUN_11479100();
    cVar3 = FUN_1147cea0();
    lVar2 = CONCAT44(local_c,local_14);
    if (cVar3 == '\0') goto LAB_11059b14;
    puStack_234 = (uint *)0x11059aa5;
    piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x104))();
    local_14 = *piVar4;
    lVar2 = CONCAT44(local_c,local_14);
    if (piVar4 == (int *)local_14) goto LAB_11059b14;
    local_10 = (int)local_8 >> 0x1f;
    local_18 = local_8;
    while( true ) {
      piVar4 = (int *)piVar4[1];
      iVar6 = (uVar8 - piVar4[3]) - (uint)(uVar5 < (uint)piVar4[2]);
      if (((int)local_10 < iVar6) || (((int)local_10 <= iVar6 && (local_8 < uVar5 - piVar4[2]))))
      break;
      uVar8 = local_c;
      if (piVar4 == (int *)local_14) {
        puStack_234 = (uint *)0x11059ae5;
        FUN_1105ab90();
        return;
      }
    }
    puStack_234 = (uint *)0x11059af4;
    puStack_234 = (uint *)FUN_11399730();
    puStack_238 = (uint *)0x11059afd;
    FUN_11442810();
    local_c = 1;
    puStack_238 = &local_c;
  }
  else {
    puStack_234 = &local_10;
    local_10 = 0;
    puStack_23c = (undefined1 *)auStack_24c;
    puStack_238 = auStack_24c;
    FUN_100b62c0("AckTimeout","");
    FUN_11479100();
    cVar3 = FUN_1147cea0();
    lVar2 = CONCAT44(local_c,local_14);
    if (cVar3 == '\0') goto LAB_11059b14;
    local_8 = uVar5 - *(uint *)(param_1 + 0x60);
    iVar6 = (uVar8 - *(int *)(param_1 + 100)) - (uint)(uVar5 < *(uint *)(param_1 + 0x60));
    lVar2 = CONCAT44(local_c,local_14);
    if ((iVar6 < (int)local_10 >> 0x1f) ||
       ((iVar6 <= (int)local_10 >> 0x1f && (lVar2 = CONCAT44(local_c,local_14), local_8 <= local_10)
        ))) goto LAB_11059b14;
    uVar1 = (uint)(uVar5 < *(uint *)(param_1 + 0x68));
    iVar6 = uVar8 - *(int *)(param_1 + 0x6c);
    local_18 = iVar6 - uVar1;
    lVar2 = CONCAT44(local_c,local_14);
    if (((int)local_18 < 0) ||
       ((local_18 == 0 || SBORROW4(uVar8,*(int *)(param_1 + 0x6c)) != SBORROW4(iVar6,uVar1) &&
        (lVar2 = CONCAT44(local_c,local_14), uVar5 - *(uint *)(param_1 + 0x68) < 0x4e21))))
    goto LAB_11059b14;
    puStack_234 = (uint *)0x110599c8;
    piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x104))();
    lVar2 = CONCAT44(local_c,local_14);
    local_8 = *piVar4;
    if (piVar4 == (int *)local_8) goto LAB_11059b14;
    while( true ) {
      piVar4 = (int *)piVar4[1];
      if ((piVar4[3] < *(int *)(param_1 + 100)) ||
         ((piVar4[3] <= *(int *)(param_1 + 100) && ((uint)piVar4[2] <= *(uint *)(param_1 + 0x60)))))
      goto LAB_11059b14;
      if ((longlong)(int)local_10 < lVar10 - *(longlong *)(piVar4 + 2)) break;
      lVar10 = lVar2;
      if (piVar4 == (int *)local_8) {
        puStack_234 = (uint *)0x11059a18;
        FUN_1105ab90();
        return;
      }
    }
    puStack_234 = (uint *)0x11059a27;
    puStack_234 = (uint *)FUN_11399730();
    puStack_238 = (uint *)0x11059a30;
    FUN_11442810();
    local_8 = 1;
    puStack_238 = &local_8;
  }
  puStack_23c = (undefined1 *)0x11059b10;
  FUN_1139cf10();
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar2 = CONCAT44(local_c,local_14);
LAB_11059b14:
  local_c = (uint)((ulonglong)lVar2 >> 0x20);
  local_14 = (uint)lVar2;
  puStack_234 = (uint *)0x11059b1b;
  FUN_1105ab90();
  return;
}



/* ===== FUN_11059b30 @ 11059b30  size=182 ===== */
// strings:
//   "[Security]EvpDamageChecker error code 5 m_sequence = %d, iSequence = %d"
//   "[Security]EvpDamageChecker error code 5 t = %I64i (0x%x), seq = %I64i (0x%x)"

/* [RE-AUTO c0]
   strings:
     ""[Security]EvpDamageChecker error code 5 m_sequence = %d, iSequence = %d""
     ""[Security]EvpDamageChecker error code 5 t = %I64i (0x%x), seq = %I64i (0x%x)"" */

uint __thiscall
FUN_11059b30(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6
            )

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



/* ===== FUN_11059d60 @ 11059d60  size=1069 ===== */
// strings:
//   "MMGSvrAttackCount"
//   "MMGCliAttackRatio"
//   "MMZSvrAttackCount"
//   "MMZCliAttackRatio"
//   "ClientBeAttackCount"
//   "ClientAttackInfoErrorRatio"
//   "MonsterSequenceErrorRatio"
//   "MonsterAttackNameErrorRatio"
//   "MonsterProjectileErrorRatio"

/* [RE-AUTO c0]
   strings:
     ""MMGSvrAttackCount""
     ""MMGCliAttackRatio""
     ""MMZSvrAttackCount""
     ""MMZCliAttackRatio""
     ""ClientBeAttackCount""
     ""ClientAttackInfoErrorRatio""
     ""MonsterSequenceErrorRatio""
     ""MonsterAttackNameErrorRatio""
     ""MonsterProjectileErrorRatio"" */

void __fastcall FUN_11059d60(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_144 [12];
  undefined4 uStack_138;
  undefined4 ***pppuStack_134;
  undefined4 ***pppuStack_130;
  undefined4 ***pppuStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  undefined1 auStack_120 [16];
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  uint *puStack_108;
  char *pcStack_104;
  char *pcStack_100;
  undefined1 auStack_fc [16];
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  uint *puStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  uint *puStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  uint *puStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  char *pcStack_74;
  char *pcStack_70;
  undefined1 auStack_6c [16];
  undefined1 *local_5c;
  undefined1 *local_58;
  int *piStack_54;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  undefined4 ***local_38;
  undefined4 ***local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piStack_54 = &local_c;
  local_28 = 0;
  local_5c = auStack_6c;
  local_58 = auStack_6c;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  pcStack_70 = "";
  pcStack_74 = "MMGSvrAttackCount";
  piStack_78 = (int *)0x11059dab;
  FUN_100b62c0();
  piStack_78 = (int *)0x11059db2;
  FUN_11479100();
  piStack_78 = (int *)0x11059db9;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    piStack_78 = &local_10;
    puStack_80 = auStack_90;
    puStack_7c = auStack_90;
    pcStack_94 = "";
    pcStack_98 = "MMGCliAttackRatio";
    puStack_9c = (uint *)0x11059ddb;
    FUN_100b62c0();
    puStack_9c = (uint *)0x11059de2;
    FUN_11479100();
    puStack_9c = (uint *)0x11059de9;
    cVar2 = FUN_1147cea0();
    if ((((cVar2 != '\0') && (iVar5 = *(int *)(param_1 + 0x74), local_c <= iVar5)) && (iVar5 != 0))
       && ((*(int *)(param_1 + 0x78) * 100) / iVar5 <= local_10)) {
      piStack_78 = (int *)0x6;
      puStack_7c = (undefined1 *)0x0;
      puStack_80 = (undefined1 *)0x11059e10;
      FUN_114811e0();
    }
  }
  piStack_78 = &local_14;
  puStack_80 = auStack_90;
  puStack_7c = auStack_90;
  pcStack_94 = "";
  pcStack_98 = "MMZSvrAttackCount";
  puStack_9c = (uint *)0x11059e2e;
  FUN_100b62c0();
  puStack_9c = (uint *)0x11059e35;
  FUN_11479100();
  puStack_9c = (uint *)0x11059e3c;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    puStack_9c = (uint *)&local_18;
    puStack_a4 = auStack_b4;
    puStack_a0 = auStack_b4;
    pcStack_b8 = "";
    pcStack_bc = "MMZCliAttackRatio";
    puStack_c0 = (uint *)0x11059e5e;
    FUN_100b62c0();
    puStack_c0 = (uint *)0x11059e65;
    FUN_11479100();
    puStack_c0 = (uint *)0x11059e6c;
    cVar2 = FUN_1147cea0();
    if (((cVar2 != '\0') && (iVar5 = *(int *)(param_1 + 0x7c), local_14 <= iVar5)) &&
       ((iVar5 != 0 && ((*(int *)(param_1 + 0x80) * 100) / iVar5 <= local_18)))) {
      puStack_9c = (uint *)0x7;
      puStack_a0 = (undefined1 *)0x0;
      puStack_a4 = (undefined1 *)0x11059e96;
      FUN_114811e0();
    }
  }
  puStack_9c = &local_8;
  local_8 = 0;
  puStack_a4 = auStack_b4;
  puStack_a0 = auStack_b4;
  local_1c = 0;
  pcStack_b8 = "";
  pcStack_bc = "ClientBeAttackCount";
  puStack_c0 = (uint *)0x11059ec2;
  FUN_100b62c0();
  puStack_c0 = (uint *)0x11059ec9;
  FUN_11479100();
  puStack_c0 = (uint *)0x11059ed0;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    puStack_c0 = (uint *)&local_1c;
    puStack_c8 = auStack_d8;
    puStack_c4 = auStack_d8;
    pcStack_dc = "";
    pcStack_e0 = "ClientAttackInfoErrorRatio";
    puStack_e4 = (uint *)0x11059ef6;
    FUN_100b62c0();
    puStack_e4 = (uint *)0x11059efd;
    FUN_11479100();
    puStack_e4 = (uint *)0x11059f04;
    cVar2 = FUN_1147cea0();
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)(param_1 + 0x28);
      uVar4 = 0;
      for (puVar3 = *(undefined4 **)(param_1 + 0x28); puVar3 != puVar1;
          puVar3 = (undefined4 *)*puVar3) {
        uVar4 = uVar4 + 1;
      }
      if (local_8 <= uVar4) {
        puVar3 = (undefined4 *)*puVar1;
        iVar5 = 0;
        if (puVar3 != puVar1) {
          do {
            puVar3 = (undefined4 *)*puVar3;
            iVar5 = iVar5 + 1;
          } while (puVar3 != puVar1);
          if (iVar5 != 0) {
            uVar4 = 0;
            for (puVar3 = (undefined4 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
              uVar4 = uVar4 + 1;
            }
            if (local_1c <= (int)((uint)(*(int *)(param_1 + 0x88) * 100) / uVar4)) {
              puStack_c0 = (uint *)0x8;
              puStack_c4 = (undefined1 *)0x0;
              puStack_c8 = (undefined1 *)0x11059f62;
              FUN_114811e0();
            }
          }
        }
      }
    }
  }
  puStack_c0 = &local_8;
  puStack_c8 = auStack_d8;
  puStack_c4 = auStack_d8;
  pcStack_dc = "";
  pcStack_e0 = "ClientBeAttackCount";
  puStack_e4 = (uint *)0x11059f80;
  FUN_100b62c0();
  puStack_e4 = (uint *)0x11059f87;
  FUN_11479100();
  puStack_e4 = (uint *)0x11059f8e;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    puStack_e4 = (uint *)&local_20;
    puStack_ec = auStack_fc;
    puStack_e8 = auStack_fc;
    pcStack_100 = "";
    pcStack_104 = "MonsterSequenceErrorRatio";
    puStack_108 = (uint *)0x11059fb0;
    FUN_100b62c0();
    puStack_108 = (uint *)0x11059fb7;
    FUN_11479100();
    puStack_108 = (uint *)0x11059fbe;
    cVar2 = FUN_1147cea0();
    if (((cVar2 != '\0') && (iVar5 = *(int *)(param_1 + 0x90), (int)local_8 <= iVar5)) &&
       ((iVar5 != 0 && (local_20 <= (*(int *)(param_1 + 0x94) * 100) / iVar5)))) {
      puStack_e4 = (uint *)0x9;
      puStack_e8 = (undefined1 *)0x0;
      puStack_ec = (undefined1 *)0x11059feb;
      FUN_114811e0();
    }
  }
  puStack_e4 = &local_8;
  puStack_ec = auStack_fc;
  puStack_e8 = auStack_fc;
  pcStack_100 = "";
  pcStack_104 = "ClientBeAttackCount";
  puStack_108 = (uint *)0x1105a009;
  FUN_100b62c0();
  puStack_108 = (uint *)0x1105a010;
  FUN_11479100();
  puStack_108 = (uint *)0x1105a017;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    puStack_108 = (uint *)&local_24;
    puStack_110 = auStack_120;
    puStack_10c = auStack_120;
    pcStack_124 = "";
    pcStack_128 = "MonsterAttackNameErrorRatio";
    pppuStack_12c = (undefined4 ***)0x1105a039;
    FUN_100b62c0();
    pppuStack_12c = (undefined4 ***)0x1105a040;
    FUN_11479100();
    pppuStack_12c = (undefined4 ***)0x1105a047;
    cVar2 = FUN_1147cea0();
    if ((((cVar2 != '\0') && (iVar5 = *(int *)(param_1 + 0x90), (int)local_8 <= iVar5)) &&
        (iVar5 != 0)) && (local_24 <= (*(int *)(param_1 + 0x98) * 100) / iVar5)) {
      puStack_108 = (uint *)0xa;
      puStack_10c = (undefined1 *)0x0;
      puStack_110 = (undefined1 *)0x1105a074;
      FUN_114811e0();
    }
  }
  puStack_108 = &local_8;
  puStack_110 = auStack_120;
  puStack_10c = auStack_120;
  pcStack_124 = "";
  pcStack_128 = "ClientBeAttackCount";
  pppuStack_12c = (undefined4 ***)0x1105a092;
  FUN_100b62c0();
  pppuStack_12c = (undefined4 ***)0x1105a099;
  FUN_11479100();
  pppuStack_12c = (undefined4 ***)0x1105a0a0;
  cVar2 = FUN_1147cea0();
  if (cVar2 != '\0') {
    pppuStack_12c = (undefined4 ***)&local_28;
    pppuStack_134 = (undefined4 ***)auStack_144;
    pppuStack_130 = (undefined4 ***)auStack_144;
    FUN_100b62c0("MonsterProjectileErrorRatio","");
    FUN_11479100();
    cVar2 = FUN_1147cea0();
    if (((cVar2 != '\0') && (iVar5 = *(int *)(param_1 + 0x90), (int)local_8 <= iVar5)) &&
       ((iVar5 != 0 && (local_28 <= (*(int *)(param_1 + 0x9c) * 100) / iVar5)))) {
      pppuStack_12c = (undefined4 ***)0xb;
      pppuStack_130 = (undefined4 ***)0x0;
      pppuStack_134 = (undefined4 ***)0x1105a0fd;
      FUN_114811e0();
    }
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    pppuStack_12c = (undefined4 ***)0xa;
    pppuStack_130 = (undefined4 ***)0x0;
    pppuStack_134 = (undefined4 ***)0x1105a111;
    FUN_114811e0();
  }
  local_40 = &local_40;
  local_38 = &local_38;
  pppuStack_12c = &local_30;
  pppuStack_130 = &local_38;
  pppuStack_134 = &local_40;
  uStack_138 = 0x1105a172;
  local_3c = local_40;
  local_34 = local_38;
  local_30 = pppuStack_12c;
  local_2c = pppuStack_12c;
  FUN_1105acc0();
  uStack_138 = 0x1105a17a;
  FUN_1105e570();
  uStack_138 = 0x1105a182;
  FUN_1105e570();
  uStack_138 = 0x1105a18a;
  FUN_1105e570();
  return;
}



/* ===== FUN_1105a890 @ 1105a890  size=159 ===== */
// strings:
//   "[EvpDamageChecker][HandleClientHit][10] cant find firemode in List netID:%u firemode:%u"
//   "[EvpDamageChecker][HandleClientHit][10] cant find Boss netID:%d"

/* [RE-AUTO c0]
   strings:
     ""[EvpDamageChecker][HandleClientHit][10] cant find firemode in List netID:%u firemode:%u""
     ""[EvpDamageChecker][HandleClientHit][10] cant find Boss netID:%d"" */

uint __thiscall FUN_1105a890(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0x48);
  iVar6 = *(int *)(DAT_1202e818 + 0xd0) + 0x44;
  iVar5 = iVar6;
  if (iVar2 != 0) {
    do {
      if (*(uint *)(iVar2 + 0x10) < param_2) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar5 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if ((iVar5 != iVar6) && (*(uint *)(iVar5 + 0x10) <= param_2)) {
      puVar1 = *(undefined4 **)(iVar5 + 0x14);
      while( true ) {
        if (puVar1 == (undefined4 *)(iVar5 + 0x14)) {
          uVar4 = FUN_11481740(param_1,
                               "[EvpDamageChecker][HandleClientHit][10] cant find firemode in List netID:%u firemode:%u"
                               ,param_2,param_3);
          return uVar4 & 0xffffff00;
        }
        if (puVar1[2] == param_3) break;
        puVar1 = (undefined4 *)*puVar1;
      }
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  uVar4 = FUN_11481740(param_1,"[EvpDamageChecker][HandleClientHit][10] cant find Boss netID:%d",
                       param_2);
  return uVar4 & 0xffffff00;
}



/* ===== FUN_1105ab90 @ 1105ab90  size=299 ===== */
// strings:
//   "EvpDamageFiremodeClearTime"

/* [RE-AUTO c0]
   strings:
     ""EvpDamageFiremodeClearTime"" */

void __fastcall FUN_1105ab90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auStack_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  uint *puStack_24;
  uint local_8;
  
  puStack_24 = &local_8;
  local_2c = auStack_3c;
  local_28 = auStack_3c;
  FUN_100b62c0("EvpDamageFiremodeClearTime","");
  FUN_11479100();
  cVar6 = FUN_1147cea0();
  if (cVar6 == '\0') {
    local_8 = 2000;
  }
  iVar1 = *(int *)(DAT_1202e818 + 0xd0);
  iVar11 = iVar1 + 0x44;
  piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  uVar12 = (**(code **)(*piVar7 + 0x228))();
  puVar5 = *(undefined4 **)(param_1 + 0x4c);
  do {
    while( true ) {
      if (puVar5 == (undefined4 *)(param_1 + 0x4c)) {
        return;
      }
      iVar9 = ((int)((ulonglong)uVar12 >> 0x20) - puVar5[5]) -
              (uint)((uint)uVar12 < (uint)puVar5[4]);
      if (((int)local_8 >> 0x1f <= iVar9) &&
         (((int)local_8 >> 0x1f < iVar9 || (local_8 < (uint)uVar12 - puVar5[4])))) break;
      puVar5 = (undefined4 *)*puVar5;
    }
    iVar9 = *(int *)(iVar1 + 0x48);
    if (iVar9 != 0) {
      iVar10 = iVar11;
      do {
        if (*(uint *)(iVar9 + 0x10) < (uint)puVar5[2]) {
          iVar8 = *(int *)(iVar9 + 0xc);
        }
        else {
          iVar8 = *(int *)(iVar9 + 8);
          iVar10 = iVar9;
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
      if ((iVar10 != iVar11) && (*(uint *)(iVar10 + 0x10) <= (uint)puVar5[2])) {
        for (piVar7 = *(int **)(iVar10 + 0x14); piVar7 != (int *)(iVar10 + 0x14);
            piVar7 = (int *)*piVar7) {
          if (piVar7[2] == puVar5[3]) {
            if (*(int **)(iVar10 + 0x14) != (int *)(iVar10 + 0x14)) {
              piVar2 = (int *)piVar7[1];
              iVar9 = *piVar7;
              *piVar2 = iVar9;
              *(int **)(iVar9 + 4) = piVar2;
              FUN_10c3d5d0(piVar7);
            }
            break;
          }
        }
      }
    }
    puVar3 = (undefined4 *)puVar5[1];
    puVar4 = (undefined4 *)*puVar5;
    *puVar3 = puVar4;
    puVar4[1] = puVar3;
    FUN_10c3d5d0(puVar5);
    puVar5 = puVar4;
  } while( true );
}



/* ===== FUN_11061560 @ 11061560  size=2236 ===== */
// strings:
//   "[Security]PveDamage error code 1 attacker region: %d, attackee %s region: %d"
//   "PositionDeviation"
//   "[Security]PveDamage error code 2"
//   "[Security]PveDamage error code 12, hash attack name = %u"
//   "[Security]PveDamage error code 4"
//   "[Security]PveDamage error code 3 skill id: %d --> %d"
//   "LanceChargeStaminaDeviation"
//   "[Security]PveDamage error code 5"
//   "PveDamageTime"
//   "[Security]PveDamage error code 9 t: %I64i --> %I64i"
//   "AckTimeoutThreshold"
//   "[Security]PveDamage error code 11 ack timeout"
//   "[Security]PveDamage error code 10 ack timeout"

/* WARNING: Removing unreachable block (ram,0x11061ceb) */
/* [RE-AUTO c0]
   strings:
     ""[Security]PveDamage error code 1 attacker region: %d, attackee %s region: %d""
     ""PositionDeviation""
     ""[Security]PveDamage error code 2""
     ""[Security]PveDamage error code 12, hash attack name = %u""
     ""[Security]PveDamage error code 4""
     ""[Security]PveDamage error code 3 skill id: %d --> %d""
     ""LanceChargeStaminaDeviation""
     ""[Security]PveDamage error code 5""
     ""PveDamageTime""
     ""[Security]PveDamage error code 9 t: %I64i --> %I64i"" */

undefined1 __thiscall
FUN_11061560(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined8 *param_5,
            int *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 local_1e4 [408];
  undefined1 local_4c [12];
  int local_40;
  undefined1 local_3c [8];
  undefined8 local_34;
  float local_2c;
  int local_28;
  undefined8 local_24;
  float local_1c;
  int local_18;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int local_8;
  
  fVar15 = (float)param_4;
  local_8 = param_1;
  local_10 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x29c))
                              (*(undefined4 *)((int)param_4 + 0x124));
  piVar5 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x29c))
                            (*(undefined4 *)((int)fVar15 + 0x128));
  local_c = piVar5;
  if (((((local_10 == (int *)0x0) || (local_10[3] == 0)) ||
       (iVar6 = (**(code **)(*local_10 + 800))(), iVar6 == 0)) ||
      ((piVar5 == (int *)0x0 || (piVar5[3] == 0)))) ||
     (iVar6 = (**(code **)(*piVar5 + 800))(), iVar6 == 0)) {
    uVar3 = FUN_114811e0(param_7,1);
    return uVar3;
  }
  (**(code **)(*(int *)local_10[3] + 200))(local_4c);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(&local_34);
  iVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x88))();
  if (iVar6 != -1) {
    piVar7 = (int *)(**(code **)(*piVar5 + 800))();
    iVar6 = (**(code **)(*piVar7 + 0x88))();
    if (iVar6 != -1) {
      piVar7 = (int *)(**(code **)(*piVar5 + 800))();
      piVar5 = *(int **)(param_1 + 0x1c);
      iVar6 = (**(code **)(*piVar7 + 0x88))();
      iVar8 = (**(code **)(*piVar5 + 0x88))();
      piVar5 = local_c;
      param_1 = local_8;
      if (iVar8 != iVar6) {
        param_4 = (int *)(**(code **)(*local_c + 800))();
        piVar5 = (int *)(**(code **)(*piVar5 + 800))();
        puVar9 = (undefined4 *)(**(code **)(*piVar5 + 0xb8))();
        piVar5 = *(int **)(local_8 + 0x1c);
        puVar13 = &DAT_11d9d32b;
        if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
          puVar13 = (undefined1 *)*puVar9;
        }
        uVar10 = (**(code **)(*param_4 + 0x88))();
        uVar10 = (**(code **)(*piVar5 + 0x88))(puVar13,uVar10);
        FUN_11481740(local_8,
                     "[Security]PveDamage error code 1 attacker region: %d, attackee %s region: %d",
                     uVar10);
        uVar3 = FUN_114811e0(param_7,1);
        return uVar3;
      }
    }
  }
  local_28 = 0;
  FUN_100b5f70("PositionDeviation",&local_11);
  FUN_11479100();
  cVar4 = FUN_1147cea0();
  if (((cVar4 != '\0') && (iVar6 = (**(code **)(*(int *)local_10[3] + 0x68))(), iVar6 == 0)) &&
     (iVar6 = (**(code **)(*(int *)piVar5[3] + 0x68))(), iVar6 == 0)) {
    local_c = (int *)(float)local_28;
    (**(code **)(*(int *)local_10[3] + 200))(&local_24);
    uVar17 = *param_5;
    local_2c = *(float *)(param_5 + 1);
    local_34._0_4_ = (float)uVar17;
    fVar16 = (float)local_24 - (float)local_34;
    local_34._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
    fVar15 = local_24._4_4_ - local_34._4_4_;
    local_34 = uVar17;
    if ((float)local_c <
        SQRT(fVar16 * fVar16 + fVar15 * fVar15 + (local_1c - local_2c) * (local_1c - local_2c))) {
LAB_110617c4:
      FUN_11481740(param_1,"[Security]PveDamage error code 2");
      uVar3 = FUN_114811e0(param_7,2);
      return uVar3;
    }
    puVar11 = (undefined8 *)(**(code **)(*(int *)piVar5[3] + 200))(&local_34);
    uVar17 = *puVar11;
    local_1c = *(float *)(puVar11 + 1);
    local_24._0_4_ = (float)uVar17;
    local_24._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
    uVar1 = *(undefined8 *)param_6;
    local_2c = *(float *)((int)param_6 + 8);
    local_34._0_4_ = (float)uVar1;
    fVar16 = (float)local_24 - (float)local_34;
    local_34._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar15 = local_24._4_4_ - local_34._4_4_;
    local_34 = uVar1;
    local_24 = uVar17;
    if ((float)local_c <
        SQRT(fVar16 * fVar16 + fVar15 * fVar15 + (local_1c - local_2c) * (local_1c - local_2c)))
    goto LAB_110617c4;
  }
  fVar15 = (float)param_4;
  uVar2 = *(uint *)((int)param_4 + 0x130);
  param_6 = (int *)((int)param_4 + 0x130);
  uVar12 = uVar2 >> 0x1c;
  if ((((uVar2 == 0) || (uVar12 == 0)) || (uVar12 == 0xb)) || ((uVar12 == 8 || (uVar12 == 1)))) {
    param_5 = (undefined8 *)0x0;
    param_6 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x14) + 0x48))();
    if (param_6 == (int *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*param_6 + 0x18))();
      param_5 = puVar11;
    }
    if ((0 < (int)*(undefined8 **)((int)fVar15 + 0x15c)) &&
       (*(undefined8 **)((int)fVar15 + 0x15c) != puVar11)) {
      param_4 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x29c))
                                 (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
      if ((param_4 != (int *)0x0) &&
         ((cVar4 = (**(code **)(*param_4 + 0x1c4))(), cVar4 != '\0' &&
          (iVar6 = (**(code **)(*param_4 + 0x790))(), iVar6 != 0)))) {
        (**(code **)(*param_4 + 0x790))();
        FUN_10fd05d0();
      }
      FUN_11481740(param_1,"[Security]PveDamage error code 3 skill id: %d --> %d",param_5,
                   *(undefined4 *)((int)fVar15 + 0x15c));
      uVar3 = FUN_114811e0(param_7,3);
      return uVar3;
    }
    if ((param_6 != (int *)0x0) &&
       (iVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x294))(), iVar6 == 3)) {
      param_5 = (undefined8 *)0x0;
      FUN_100b5f70("LanceChargeStaminaDeviation",(int)&param_4 + 3);
      FUN_11479100();
      cVar4 = FUN_1147cea0();
      if (cVar4 == '\0') {
        param_5 = (undefined8 *)0x0;
      }
      fVar14 = (float10)FUN_10268110();
      param_4 = (int *)(float)fVar14;
      fVar16 = (float)param_4;
      for (piVar5 = (int *)param_6[0x136]; piVar5 != (int *)param_6[0x137]; piVar5 = piVar5 + 1) {
        if (((*(int *)(*piVar5 + 0x160) == 0x8b) && (iVar6 = *(int *)(*piVar5 + 0x254), 0 < iVar6))
           && (fVar16 = fVar16 - (float)iVar6, (float)(int)param_5 + fVar16 < 0.0)) {
          FUN_11481740(param_1,"[Security]PveDamage error code 5");
          uVar3 = FUN_114811e0(param_7,5);
          return uVar3;
        }
      }
    }
    if (*(int *)((int)fVar15 + 0x124) == *(int *)(*(int *)(param_1 + 0x1c) + 4)) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      uVar17 = (**(code **)(*piVar5 + 0x228))();
      FUN_11056f00(uVar17,fVar15);
      FUN_11399800(*(undefined4 *)((int)fVar15 + 0x10),*(undefined4 *)((int)fVar15 + 0x14),
                   *(undefined4 *)((int)fVar15 + 0x18),local_3c);
      cVar4 = FUN_11057070(local_1e4);
      if (cVar4 == '\0') {
        FUN_11481740(param_1,"[Security]PveDamage error code 5");
        uVar10 = 5;
LAB_11061c2e:
        uVar3 = FUN_114811e0(param_7,uVar10);
        param_7._3_1_ = uVar3;
        FUN_11058460();
        return param_7._3_1_;
      }
      FUN_11058460();
    }
  }
  else {
    if (uVar12 == 2) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      uVar17 = (**(code **)(*piVar5 + 0x228))();
      FUN_11056f00(uVar17,fVar15);
      puVar11 = (undefined8 *)(param_1 + 0x20);
      FUN_11063270(&param_5,(int)fVar15 + 0x130);
      param_1 = local_8;
      if (param_5 == puVar11) {
        param_5 = (undefined8 *)0x1;
        FUN_11058460();
        cVar4 = (char)param_5;
        fVar15 = (float)param_4;
      }
      else {
        uVar10 = FUN_10b27fa0(*param_6);
        piVar5 = (int *)FUN_113f2520();
        param_1 = local_8;
        if (((piVar5 == (int *)0x0) || (*piVar5 < 1)) ||
           ((0 < *(int *)((int)param_4 + 0x15c) && (*(int *)((int)param_4 + 0x15c) == *piVar5)))) {
          cVar4 = FUN_11062a80(*(undefined4 *)((int)param_4 + 0x18),uVar10);
          param_5 = (undefined8 *)CONCAT13(cVar4 == '\0',param_5._0_3_);
          if (cVar4 == '\0') {
            FUN_11481740(param_1,"[Security]PveDamage error code 12, hash attack name = %u",
                         *(undefined4 *)((int)param_4 + 0x18));
            uVar10 = 0xc;
            goto LAB_11061c2e;
          }
          cVar4 = FUN_11057530(local_1e4);
          param_5 = (undefined8 *)((uint)param_5 >> 0x18);
          if (cVar4 == '\0') {
            param_5 = (undefined8 *)0x1;
          }
          FUN_11058460();
          cVar4 = (char)param_5;
          fVar15 = (float)param_4;
        }
        else {
          param_5 = (undefined8 *)CONCAT31((int3)((uint)param_4 >> 8),1);
          FUN_11058460();
          cVar4 = (char)param_5;
          fVar15 = (float)param_4;
        }
      }
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x90) == 0)) goto LAB_11061c7e;
      iVar6 = FUN_10263a20(uVar2,uVar12);
      cVar4 = iVar6 != 0;
    }
    if (cVar4 != '\0') {
      FUN_11481740(param_1,"[Security]PveDamage error code 4");
      uVar3 = FUN_114811e0(param_7,4);
      return uVar3;
    }
  }
LAB_11061c7e:
  local_18 = 0;
  FUN_100b5f70("PveDamageTime",(int)&param_4 + 3);
  FUN_11479100();
  cVar4 = FUN_1147cea0();
  lVar18 = CONCAT44(param_4,param_6);
  if (cVar4 != '\0') {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    lVar18 = (**(code **)(*piVar5 + 0x228))();
    param_4 = (int *)((ulonglong)lVar18 >> 0x20);
    param_6 = (int *)lVar18;
    param_5 = (undefined8 *)(lVar18 - local_18);
    if (CONCAT44(param_3,param_2) < lVar18 - local_18) {
      FUN_11481740(param_1,"[Security]PveDamage error code 9 t: %I64i --> %I64i",lVar18,param_2,
                   param_3);
      uVar3 = FUN_114811e0(param_7,9);
      return uVar3;
    }
  }
  param_4 = (int *)((ulonglong)lVar18 >> 0x20);
  param_6 = (int *)lVar18;
  if (*(int *)((int)fVar15 + 0x48) < 0) {
    param_4 = (int *)((uint)param_4 & 0xffffff);
    param_5 = (undefined8 *)0x0;
    FUN_11479100(*(undefined4 *)(param_1 + 0x10),0xf,&param_5,(int)&param_4 + 3);
    cVar4 = FUN_1147cd30();
    lVar18 = CONCAT44(param_4,param_6);
    if ((cVar4 != '\0') && (lVar18 = CONCAT44(param_4,param_6), param_4._3_1_ != '\0')) {
      uVar3 = FUN_114811e0(param_7,0xf);
      return uVar3;
    }
  }
  param_4 = (int *)((ulonglong)lVar18 >> 0x20);
  param_6 = (int *)lVar18;
  uVar10 = FUN_11399730();
  FUN_11442810(uVar10);
  if (local_40 != 1) {
    return 0;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  param_5 = (undefined8 *)0x0;
  FUN_100b5f70("AckTimeoutThreshold",(int)&param_4 + 3);
  FUN_11479100();
  cVar4 = FUN_1147cea0();
  if ((cVar4 != '\0') && ((int)param_5 < *(int *)(param_1 + 100))) {
    FUN_11481740(param_1,"[Security]PveDamage error code 11 ack timeout");
    uVar3 = FUN_114811e0(param_7,0xb);
    return uVar3;
  }
  FUN_11481740(param_1,"[Security]PveDamage error code 10 ack timeout");
  uVar3 = FUN_114811e0(param_7,10);
  return uVar3;
}



/* ===== FUN_11061f30 @ 11061f30  size=257 ===== */
// strings:
//   "[Security]PveDamage error code 6"

/* [RE-AUTO c0]
   strings:
     ""[Security]PveDamage error code 6"" */

undefined1 __thiscall FUN_11061f30(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_14 [8];
  uint local_c;
  undefined1 *local_8;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar5 = param_1 + 0x20;
  iVar6 = iVar5;
  if (iVar3 == 0) {
LAB_11061f6d:
    if (iVar6 != iVar5) goto LAB_1106200a;
  }
  else {
    do {
      if (*(uint *)(iVar3 + 0x10) < param_2) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
        iVar6 = iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
    if (iVar6 != iVar5) {
      if (param_2 < *(uint *)(iVar6 + 0x10)) {
        iVar6 = iVar5;
      }
      goto LAB_11061f6d;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (((((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 0x90), piVar1 != (int *)0x0)) &&
       (iVar5 = (**(code **)(*piVar1 + 0xb0))(), iVar5 != 0)) &&
      ((iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x18) + 0x10))(param_2),
       iVar5 != 0 && (cVar2 = FUN_110626d0(iVar5), cVar2 != '\0')))) &&
     ((cVar2 = FUN_11062c70(iVar5), cVar2 != '\0' &&
      ((cVar2 = FUN_110627a0(iVar5), cVar2 != '\0' && (cVar2 = FUN_11062a30(iVar5), cVar2 != '\0')))
      ))) {
    local_8 = (undefined1 *)FUN_11062650();
    if (local_8 == (undefined1 *)0x0) {
      return 1;
    }
    *local_8 = 1;
    local_c = param_2;
    FUN_11064a70(local_14,&local_c);
    return 1;
  }
LAB_1106200a:
  FUN_11481740(param_1,"[Security]PveDamage error code 6");
  cVar2 = FUN_114811e0(param_3,6);
  if (cVar2 != '\0') {
    return 1;
  }
  return 0;
}



/* ===== FUN_11062220 @ 11062220  size=787 ===== */
// strings:
//   "ProjDeviation"
//   "BowIgnoreProjectileIDStart"
//   "BowIgnoreProjectileIDEnd"
//   "HandleProjectileEffect"
//   "[Security]PveDamage error code 7"

/* [RE-AUTO c0]
   strings:
     ""ProjDeviation""
     ""BowIgnoreProjectileIDStart""
     ""BowIgnoreProjectileIDEnd""
     ""HandleProjectileEffect""
     ""[Security]PveDamage error code 7"" */

undefined1 __thiscall
FUN_11062220(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  int aiStack_c0 [3];
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  int *piStack_ac;
  int **ppiStack_a8;
  int *piStack_a4;
  undefined1 local_94 [100];
  undefined1 local_30 [8];
  int local_28;
  undefined8 local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar5 = param_1 + 0x20;
  iVar8 = iVar5;
  if (iVar3 != 0) {
    do {
      if (*(uint *)(iVar3 + 0x10) < param_2) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
        iVar8 = iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
    if ((iVar8 != iVar5) && (param_2 < *(uint *)(iVar8 + 0x10))) {
      iVar8 = iVar5;
    }
  }
  bVar1 = false;
  if (iVar8 == iVar5) goto LAB_1106250c;
  local_18 = *(undefined4 *)(iVar8 + 0x14);
  piStack_a4 = (int *)param_2;
  ppiStack_a8 = (int **)0x1106227c;
  iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x18) + 0x10))();
  param_2 = 0;
  local_8 = iVar5;
  if (iVar5 != 0) {
    ppiStack_a8 = (int **)0x11062291;
    param_2 = FUN_113f23d0();
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  ppiStack_a8 = (int **)&local_14;
  puStack_b0 = (undefined1 *)aiStack_c0;
  piStack_ac = aiStack_c0;
  local_14 = 0;
  FUN_100b62c0("ProjDeviation","");
  FUN_11479100();
  cVar2 = FUN_1147cea0();
  piStack_a4 = (int *)DAT_11de9918;
  if (cVar2 != '\0') {
    piStack_a4 = (int *)((float)local_14 / DAT_11de9a30 + DAT_11de9918);
  }
  if (param_2 == 0) {
    if (iVar5 != 0) {
      if (DAT_11df9d70 == -1) {
        DAT_11df9d70 = 1;
      }
      else if (DAT_11df9d70 < 1) goto LAB_1106250c;
      DAT_11df9d70 = DAT_11df9d70 + -1;
      piStack_a4 = (int *)0x11d0cbc0;
      ppiStack_a8 = (int **)0x11062509;
      FUN_100b3cd0();
    }
    goto LAB_1106250c;
  }
  ppiStack_a8 = (int **)0x11062308;
  piVar6 = (int *)FUN_10d80ae0();
  if (piVar6 == (int *)0x0) goto LAB_1106250c;
  local_28 = param_5[3];
  local_24 = *(undefined8 *)(param_5 + 1);
  local_1c = local_28;
  if ((*param_5 == 0) || (*param_5 == 1)) {
    bVar1 = true;
    if (*(int **)(param_2 + 0xc) != (int *)0x0) {
      piStack_a4 = (int *)local_30;
      ppiStack_a8 = (int **)0x11062381;
      puVar7 = (undefined8 *)(**(code **)(**(int **)(param_2 + 0xc) + 200))();
      local_24 = *puVar7;
      local_1c = *(int *)(puVar7 + 1);
    }
  }
  else {
    piStack_a4 = (int *)&local_24;
    ppiStack_a8 = (int **)0x1106234d;
    iVar5 = (**(code **)(*piVar6 + 0x20))();
    if (iVar5 == 0) {
      piStack_a4 = (int *)0x63;
      ppiStack_a8 = (int **)local_94;
      puStack_b0 = (undefined1 *)0x11062364;
      piStack_ac = piVar6;
      FUN_110612c0();
    }
    else {
      bVar1 = true;
    }
  }
  piStack_a4 = (int *)0x11062397;
  (**(code **)(*piVar6 + 0xc))();
  piStack_a4 = (int *)param_5[0xd];
  if (piStack_a4 == (int *)0x0) {
LAB_11062489:
    if (!bVar1) {
LAB_1106248d:
      piStack_a4 = (int *)((int)&param_2 + 3);
      local_c = (int *)0x0;
      ppiStack_a8 = &local_c;
      param_2 = param_2 & 0xffffff;
      piStack_ac = (int *)0x7;
      puStack_b0 = *(undefined1 **)(param_1 + 0x10);
      uStack_b4 = 0x110624ac;
      FUN_11479100();
      uStack_b4 = 0x110624b3;
      cVar2 = FUN_1147cd30();
      if ((cVar2 != '\0') && (param_2._3_1_ != '\0')) goto LAB_1106250c;
    }
  }
  else {
    ppiStack_a8 = (int **)0x110623b7;
    local_c = (int *)(**(code **)(**(int **)(*(int *)(local_8 + 0xc) + 0x90) + 0x7c))();
    if (local_c == (int *)0x0) goto LAB_11062489;
    if (!bVar1) {
LAB_11062481:
      bVar1 = false;
      goto LAB_1106248d;
    }
    piStack_a4 = (int *)0x110623d4;
    iVar5 = (**(code **)(*local_c + 0xa8))();
    if (iVar5 == 1) {
      piStack_a4 = (int *)0x110623e4;
      iVar5 = FUN_113f2660();
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0x10);
        piStack_a4 = &local_10;
        local_10 = 0;
        local_8 = 0;
        aiStack_c0[0] = (int)&param_2 + 3;
        FUN_100b5f70("BowIgnoreProjectileIDStart");
        FUN_11479100();
        cVar2 = FUN_1147cea0();
        if (cVar2 != '\0') {
          piStack_a4 = &local_8;
          aiStack_c0[0] = (int)&param_2 + 3;
          FUN_100b5f70("BowIgnoreProjectileIDEnd");
          FUN_11479100();
          cVar2 = FUN_1147cea0();
          if (((cVar2 != '\0') && (local_10 <= iVar5)) && (iVar5 <= local_8)) goto LAB_11062485;
        }
      }
      piStack_a4 = (int *)0x11062462;
      piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piStack_a4 = (int *)0x11062469;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
      piStack_a4 = (int *)local_c[2];
      ppiStack_a8 = (int **)0x11062476;
      (**(code **)(*piVar6 + 0xc))();
      ppiStack_a8 = (int **)0x11062481;
      FUN_10a70600();
      goto LAB_11062481;
    }
LAB_11062485:
    bVar1 = true;
  }
  piStack_a4 = (int *)*param_5;
  ppiStack_a8 = (int **)&local_24;
  piStack_ac = (int *)0x110624ce;
  FUN_11057980();
  if (bVar1) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    return 1;
  }
LAB_1106250c:
  piStack_a4 = (int *)0x11d0cc10;
  piStack_ac = (int *)0x11062517;
  ppiStack_a8 = (int **)param_1;
  FUN_11481740();
  piStack_a4 = (int *)0x7;
  ppiStack_a8 = (int **)param_7;
  piStack_ac = (int *)0x11062526;
  cVar2 = FUN_114811e0();
  if (cVar2 != '\0') {
    return 1;
  }
  return 0;
}



/* ===== FUN_110626d0 @ 110626d0  size=108 ===== */
// strings:
//   "[PveDamageChecker][5][Projectile]projectile verify launch type unknown"
//   "[PveDamageChecker][5][Projectile]projectile verify skill failed"

/* [RE-AUTO c0]
   strings:
     ""[PveDamageChecker][5][Projectile]projectile verify launch type unknown""
     ""[PveDamageChecker][5][Projectile]projectile verify skill failed"" */

undefined4 __fastcall FUN_110626d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_113f2520();
  if (iVar1 == 0) {
LAB_1106274a:
    FUN_11481740(param_1,"[PveDamageChecker][5][Projectile]projectile verify launch type unknown");
    goto LAB_11062758;
  }
  piVar2 = (int *)FUN_113f2520();
  iVar1 = *piVar2;
  iVar3 = FUN_113f2520();
  uVar4 = *(uint *)(iVar3 + 0x4c);
  switch(uVar4) {
  case 0:
  case 5:
    piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x14) + 0x48))();
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    if (iVar3 == iVar1) {
      return 1;
    }
    break;
  case 1:
  case 6:
    return 1;
  case 2:
    goto LAB_11062761;
  case 3:
  case 4:
    iVar1 = FUN_11062c20();
    if (iVar1 != 0) {
      return 1;
    }
    break;
  default:
    goto LAB_1106274a;
  }
LAB_11062758:
  if ((-1 < (int)uVar4) && (uVar4 < 7)) {
LAB_11062761:
    FUN_11481740(param_1,"[PveDamageChecker][5][Projectile]projectile verify skill failed");
  }
  return 0;
}



/* ===== FUN_110627a0 @ 110627a0  size=654 ===== */
// calls: strstr
// strings:
//   "ProjLaunchDist"
//   "HeavyShandan"
//   "[PveDamageChecker][6][Projectile]projectile verify launch position failed"

/* [RE-AUTO c0]
   calls: strstr
   strings:
     ""ProjLaunchDist""
     ""HeavyShandan""
     ""[PveDamageChecker][6][Projectile]projectile verify launch position failed"" */

undefined1 __fastcall FUN_110627a0(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  float *pfStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  bool local_11;
  
  local_11 = true;
  puStack_54 = (undefined4 *)0x110627cb;
  iVar3 = FUN_113f2520();
  if (iVar3 != 0) {
    puStack_54 = (undefined4 *)0x110627da;
    pfVar4 = (float *)FUN_113f2530();
    puStack_54 = &uStack_3c;
    local_1c = *pfVar4;
    local_18 = pfVar4[1];
    local_20 = pfVar4[2];
    pfStack_58 = (float *)0x11062805;
    puVar5 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x30))();
    uVar1 = *puVar5;
    fStack_34 = *(float *)(puVar5 + 1);
    local_2c._0_4_ = (float)uVar1;
    local_1c = (float)local_2c - local_1c;
    local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_18 = local_2c._4_4_ - local_18;
    local_20 = (fStack_34 + DAT_11de9918) - local_20;
    pfStack_58 = (float *)0x1106285d;
    local_2c = uVar1;
    local_24 = fStack_34;
    iVar3 = FUN_113f2520();
    if (*(int *)(iVar3 + 0x4c) == 0) {
      pfStack_58 = &local_1c;
      fVar9 = local_18 * local_18;
      fVar8 = local_1c * local_1c;
      puStack_60 = auStack_70;
      puStack_5c = auStack_70;
      local_1c = 0.0;
      fVar10 = local_20 * local_20;
      local_18 = 0.0;
      uStack_3c = 0;
      uStack_38 = 0;
      fStack_34 = 0.0;
      FUN_100b62c0("ProjLaunchDist","");
      FUN_11479100();
      cVar2 = FUN_1147cea0();
      if (cVar2 != '\0') {
        local_18 = (float)(int)local_1c / DAT_11de9a44 + 0.0;
      }
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x14) + 0x48))();
      fVar7 = local_18;
      if ((iVar3 != 0) &&
         (pcVar6 = strstr(*(char **)(iVar3 + 0xd4),"HeavyShandan"), fVar7 = local_18,
         pcVar6 != (char *)0x0)) {
        fVar7 = local_18 * DAT_11de9990 + local_18;
      }
      local_11 = SQRT(fVar8 + fVar9 + fVar10) < fVar7 * fVar7;
      if (local_11) {
        return 1;
      }
    }
    else {
      if (*(int *)(iVar3 + 0x4c) != 5) {
        return local_11;
      }
      pfStack_58 = &local_18;
      fVar8 = local_18 * local_18;
      puStack_60 = auStack_70;
      puStack_5c = auStack_70;
      local_18 = 0.0;
      fVar9 = SQRT(local_1c * local_1c + fVar8);
      local_1c = DAT_11cc4180;
      uStack_3c = 0;
      uStack_38 = 0;
      fStack_34 = 0.0;
      FUN_100b62c0("ProjLaunchDist","");
      FUN_11479100();
      cVar2 = FUN_1147cea0();
      fVar8 = DAT_11cbf0b8;
      if (cVar2 != '\0') {
        local_1c = (float)(int)local_18 / DAT_11de9a44 + DAT_11cc4180;
        fVar8 = DAT_11cbf0b8 - (float)(int)local_18 / DAT_11de9a44;
      }
      if ((fVar9 < local_1c) && (fVar8 < fVar9)) {
        return 1;
      }
      local_11 = false;
    }
    FUN_11481740(param_1,"[PveDamageChecker][6][Projectile]projectile verify launch position failed"
                );
  }
  return local_11;
}



/* ===== FUN_11062a30 @ 11062a30  size=80 ===== */
// strings:
//   "[PveDamageChecker][7][Projectile]projectile verify launch count failed"

/* [RE-AUTO c0]
   strings:
     ""[PveDamageChecker][7][Projectile]projectile verify launch count failed"" */

undefined1 __fastcall FUN_11062a30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  iVar2 = FUN_113f2520();
  if (iVar2 != 0) {
    iVar2 = FUN_113f2520();
    if (*(int *)(iVar2 + 0x4c) != 2) {
      iVar2 = FUN_113f2520();
      if (*(int *)(iVar2 + 0x4c) != 1) {
        piVar1 = (int *)(param_1 + 0x38);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar3 = 0;
          FUN_11481740(param_1,
                       "[PveDamageChecker][7][Projectile]projectile verify launch count failed");
        }
      }
    }
  }
  return uVar3;
}



/* ===== FUN_110baa60 @ 110baa60  size=5569 ===== */
// strings:
//   "v_exit"
//   "v_changeseat"
//   "v_changeseat1"
//   "v_changeseat2"
//   "v_changeseat3"
//   "v_changeseat4"
//   "v_changeseat5"
//   "v_changeview"
//   "v_viewoption"
//   "v_zoom_in"
//   "v_zoom_out"
//   "v_attack1"
//   "v_attack2"
//   "xi_zoom"
//   "xi_v_attack1"
//   "xi_v_attack2"
//   "v_lights"
//   "v_horn"
//   "v_rotateyaw"
//   "v_rotatepitch"

/* [RE-AUTO c0]
   strings:
     ""v_exit""
     ""v_changeseat""
     ""v_changeseat1""
     ""v_changeseat2""
     ""v_changeseat3""
     ""v_changeseat4""
     ""v_changeseat5""
     ""v_changeview""
     ""v_viewoption""
     ""v_zoom_in"" */

undefined4 __fastcall FUN_110baa60(int param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10db3db0(*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0xc) = param_1 + 4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x10) = param_1 + 4;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_1083aa90("v_exit");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 1;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 2;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 3;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 4;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat3");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 5;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat4");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 6;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat5");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 7;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeview");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1b;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_viewoption");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1c;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_zoom_in");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x22;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_zoom_out");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x23;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_attack1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_attack2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_zoom");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_attack1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_attack2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("firemode");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1d;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_lights");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x20;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_horn");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x21;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotateyaw");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 9;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotatepitch");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 8;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90(&DAT_11cfa8fc);
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x31;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rage2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x32;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveforward");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xd;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveback");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xe;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveup");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x19;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_movedown");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1a;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_turnleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x10;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_turnright");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x11;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_strafeleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x13;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_straferight");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x14;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rollleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x15;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rollright");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x16;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotateroll");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 10;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_rotateyaw");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xc;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_rotatepitch");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xb;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_movey");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xf;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_movex");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x12;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_accelerate");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2b;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_deccelerate");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2c;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_pitchup");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x26;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_pitchdown");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x27;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_brake");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x18;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_afterburner");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x17;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_boost");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x25;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_debug_1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x28;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_debug_2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x29;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changebullet1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changebullet2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changefiremode");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x30;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  return 1;
}



/* ===== FUN_110bf030 @ 110bf030  size=45 ===== */
// strings:
//   "VehicleDamageBehaviorCameraShake"

/* [RE-AUTO c0]
   strings:
     ""VehicleDamageBehaviorCameraShake"" */

undefined4 __thiscall FUN_110bf030(int param_1,int *param_2)

{
  *(int **)(param_1 + 4) = param_2;
  if (*(char *)(DAT_1202e818 + 0x208) != '\0') {
    (**(code **)(*param_2 + 0x138))(param_1,"VehicleDamageBehaviorCameraShake");
  }
  return 1;
}



/* ===== FUN_110bf130 @ 110bf130  size=255 ===== */
// strings:
//   "VehicleDamageBehaviorCameraShake"

/* [RE-AUTO c0]
   strings:
     ""VehicleDamageBehaviorCameraShake"" */

void __thiscall
FUN_110bf130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x68))();
  piVar2 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  iVar3 = (**(code **)(*piVar2 + 0x128))();
  iVar5 = 1;
  iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
  if (iVar4 != 1) {
    do {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe0))(iVar5);
      if (((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 0x1c))(0), iVar4 == iVar3)) &&
         (piVar2 = (int *)(**(code **)(*piVar1 + 0xc))(iVar4), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x17c))
                  (param_2,param_3,param_4,param_5,0,0,5,"VehicleDamageBehaviorCameraShake");
      }
      iVar5 = iVar5 + 1;
      iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    } while (iVar5 != iVar4);
  }
  return;
}



/* ===== CVehicleDamageBehaviorBlowTire::Init @ 110bfd70  size=166 ===== */
// strings:
//   "effect"
//   "CVehicleDamageBehaviorBlowTire::Init"

/* [RE-AUTO c3]
   id: CVehicleDamageBehaviorBlowTire::Init
   strings:
     ""effect""
     ""CVehicleDamageBehaviorBlowTire::Init"" */

undefined4 __thiscall CVehicleDamageBehaviorBlowTire__Init(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_10 [4];
  int *local_c;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  FUN_1083ab70(&DAT_11d9d32b,0);
  FUN_110b8a00(local_10,"BlowTire");
  if (local_c != (int *)0x0) {
    pcVar2 = (char *)FUN_110b8a80("effect");
    if (pcVar2 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar4 - (int)(pcVar2 + 1);
    }
    FUN_1083ab70(pcVar2,iVar3);
    if (*(int *)(*(int *)(param_1 + 0x10) + -8) != 0) {
      (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                (*(int *)(param_1 + 0x10),"CVehicleDamageBehaviorBlowTire::Init",1,1);
    }
    (**(code **)(*local_c + 4))();
  }
  return 1;
}



/* ===== FUN_110fd1a0 @ 110fd1a0  size=2393 ===== */
// strings:
//   "WeaponAmmo"
//   "AmmoAmount"
//   "Bullets"
//   "BonusAmmoAmount"
//   "minDroppedAmmo"
//   "WeaponStats"
//   "silencer"
//   "numFiremodes"
//   "hasZoom"
//   "ZoomMode"
//   "Zoomed"
//   "ZoomStep"
//   "FireModeReloading"
//   "Alternation"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""WeaponAmmo""
     ""AmmoAmount""
     ""Bullets""
     ""BonusAmmoAmount""
     ""minDroppedAmmo""
     ""WeaponStats""
     ""silencer""
     ""numFiremodes""
     ""hasZoom""
     ""ZoomMode"" */

void __thiscall FUN_110fd1a0(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c [2];
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  char *local_14;
  int *local_10;
  int local_c;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  
  bVar1 = false;
  local_44 = (int *)0x0;
  local_10 = param_1;
  FUN_10cb4e60(param_2);
  (**(code **)(*param_2 + 0x14))("WeaponAmmo");
  cVar4 = (**(code **)(*param_2 + 0x20))();
  if (cVar4 != '\0') {
    FUN_10ab55c0();
    FUN_10ab55c0();
    FUN_10ab55c0();
  }
  local_c = param_1[0xee];
  iVar8 = param_1[0xec];
  (**(code **)(*param_2 + 0x54))("AmmoAmount",&local_c,0);
  local_30 = 0;
  if (0 < local_c) {
    do {
      local_20 = 0;
      local_18 = &DAT_1201fc98;
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if ((cVar4 == '\0') && (*(int **)(iVar8 + 0x10) != (int *)0x0)) {
        pcVar5 = (char *)(**(code **)(**(int **)(iVar8 + 0x10) + 8))();
        if (pcVar5 == (char *)0x0) {
          iVar9 = 0;
        }
        else {
          pcVar10 = pcVar5;
          do {
            cVar4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          iVar9 = (int)pcVar10 - (int)(pcVar5 + 1);
        }
        FUN_1083ab70(pcVar5,iVar9);
        local_20 = *(int *)(iVar8 + 0x14);
      }
      (**(code **)(*param_2 + 0x14))(&DAT_11ddfa14);
      FUN_10a7d250("AmmoName",&local_18,0);
      (**(code **)(*param_2 + 0x54))("Bullets",&local_20,0);
      (**(code **)(*param_2 + 0x1c))();
      cVar4 = (**(code **)(*param_2 + 0x20))();
      puVar12 = local_18;
      if (cVar4 != '\0') {
        piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
        uVar7 = (**(code **)(*piVar6 + 0xc))(puVar12);
        puVar12 = local_18;
        piVar11 = local_10 + 0xea;
        piVar6 = (int *)local_10[0xeb];
        while (piVar6 != (int *)0x0) {
          if ((uint)piVar6[4] < uVar7) {
            piVar6 = (int *)piVar6[3];
          }
          else {
            piVar11 = piVar6;
            piVar6 = (int *)piVar6[2];
          }
        }
        if (piVar11 == local_10 + 0xea) {
LAB_110fd320:
          local_6 = '\x01';
        }
        else {
          bVar1 = true;
          local_6 = '\0';
          if (uVar7 < (uint)piVar11[4]) goto LAB_110fd320;
        }
        if (bVar1) {
          bVar1 = false;
        }
        if (local_6 != '\0') {
          local_4c[1] = 0;
          local_4c[0] = uVar7;
          FUN_10cc06b0(&local_3c,piVar11,local_4c);
          piVar11 = local_3c;
        }
        piVar11[5] = local_20;
      }
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 == '\0') {
        iVar9 = *(int *)(iVar8 + 0xc);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar8 + 4);
          if (iVar8 == *(int *)(iVar9 + 0xc)) {
            do {
              iVar8 = iVar9;
              iVar9 = *(int *)(iVar8 + 4);
            } while (iVar8 == *(int *)(iVar9 + 0xc));
          }
          if (*(int *)(iVar8 + 0xc) != iVar9) {
            iVar8 = iVar9;
          }
        }
        else {
          for (iVar3 = *(int *)(iVar9 + 8); iVar8 = iVar9, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8))
          {
            iVar9 = iVar3;
          }
        }
      }
      piVar6 = (int *)(puVar12 + -0xc);
      if ((-1 < *piVar6) && (iVar9 = FUN_10c3dad0(piVar6), iVar9 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(puVar12 + -4) + 0xd);
        FUN_10c3d900(piVar6);
      }
      local_30 = local_30 + 1;
      param_1 = local_10;
    } while (local_30 < local_c);
  }
  bVar1 = false;
  local_c = param_1[0xf4];
  iVar8 = param_1[0xf2];
  (**(code **)(*param_2 + 0x54))("BonusAmmoAmount",&local_c,0);
  local_30 = 0;
  if (0 < local_c) {
    do {
      local_24 = 0;
      local_1c = &DAT_1201fc98;
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if ((cVar4 == '\0') && (*(int **)(iVar8 + 0x10) != (int *)0x0)) {
        pcVar5 = (char *)(**(code **)(**(int **)(iVar8 + 0x10) + 8))();
        if (pcVar5 == (char *)0x0) {
          iVar9 = 0;
        }
        else {
          pcVar10 = pcVar5;
          do {
            cVar4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          iVar9 = (int)pcVar10 - (int)(pcVar5 + 1);
        }
        FUN_1083ab70(pcVar5,iVar9);
        local_24 = *(int *)(iVar8 + 0x14);
      }
      (**(code **)(*param_2 + 0x14))(&DAT_11ddfa14);
      FUN_10a7d250("AmmoName",&local_1c,0);
      (**(code **)(*param_2 + 0x54))("Bullets",&local_24,0);
      (**(code **)(*param_2 + 0x1c))();
      cVar4 = (**(code **)(*param_2 + 0x20))();
      puVar12 = local_1c;
      if (cVar4 != '\0') {
        piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
        uVar7 = (**(code **)(*piVar6 + 0xc))(puVar12);
        puVar12 = local_1c;
        piVar11 = local_10 + 0xf0;
        piVar6 = (int *)local_10[0xf1];
        while (piVar6 != (int *)0x0) {
          if ((uint)piVar6[4] < uVar7) {
            piVar6 = (int *)piVar6[3];
          }
          else {
            piVar11 = piVar6;
            piVar6 = (int *)piVar6[2];
          }
        }
        if (piVar11 == local_10 + 0xf0) {
LAB_110fd510:
          local_6 = '\x01';
        }
        else {
          bVar1 = true;
          local_6 = '\0';
          if (uVar7 < (uint)piVar11[4]) goto LAB_110fd510;
        }
        if (bVar1) {
          bVar1 = false;
        }
        if (local_6 != '\0') {
          local_50 = 0;
          local_5c[2] = uVar7;
          FUN_10cc06b0(&local_40,piVar11,local_5c + 2);
          piVar11 = local_40;
        }
        piVar11[5] = local_24;
      }
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 == '\0') {
        iVar9 = *(int *)(iVar8 + 0xc);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar8 + 4);
          if (iVar8 == *(int *)(iVar9 + 0xc)) {
            do {
              iVar8 = iVar9;
              iVar9 = *(int *)(iVar8 + 4);
            } while (iVar8 == *(int *)(iVar9 + 0xc));
          }
          if (*(int *)(iVar8 + 0xc) != iVar9) {
            iVar8 = iVar9;
          }
        }
        else {
          for (iVar3 = *(int *)(iVar9 + 8); iVar8 = iVar9, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8))
          {
            iVar9 = iVar3;
          }
        }
      }
      piVar6 = (int *)(puVar12 + -0xc);
      if ((-1 < *piVar6) && (iVar9 = FUN_10c3dad0(piVar6), iVar9 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(puVar12 + -4) + 0xd);
        FUN_10c3d900(piVar6);
      }
      local_30 = local_30 + 1;
      param_1 = local_10;
    } while (local_30 < local_c);
  }
  bVar1 = false;
  iVar8 = param_1[0xfe];
  local_c = local_10[0x100];
  (**(code **)(*param_2 + 0x54))("minDroppedAmmo",&local_c,0);
  local_30 = 0;
  if (0 < local_c) {
    do {
      local_28 = 0;
      local_14 = &DAT_1201fc98;
      cVar4 = (**(code **)(*param_2 + 0x20))();
      pcVar5 = &DAT_1201fc98;
      if ((cVar4 == '\0') && (*(int **)(iVar8 + 0x10) != (int *)0x0)) {
        pcVar5 = (char *)(**(code **)(**(int **)(iVar8 + 0x10) + 8))();
        if (pcVar5 == (char *)0x0) {
          iVar9 = 0;
        }
        else {
          pcVar10 = pcVar5;
          do {
            cVar4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          iVar9 = (int)pcVar10 - (int)(pcVar5 + 1);
        }
        FUN_1083ab70(pcVar5,iVar9);
        local_28 = *(int *)(iVar8 + 0x14);
        pcVar5 = local_14;
      }
      (**(code **)(*param_2 + 0x14))(&DAT_11ddfa14);
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 == '\0') {
        if ((DAT_12020950 & 1) == 0) {
          DAT_12020950 = DAT_12020950 | 1;
          DAT_1202094c = &DAT_1201fc98;
          FUN_11a8911f(&LAB_11c7e3f0);
        }
        uVar7 = 0;
        cVar4 = *pcVar5;
        while ((cVar4 != '\0' && (uVar7 < *(uint *)(pcVar5 + -8)))) {
          uVar7 = uVar7 + 1;
          cVar4 = pcVar5[uVar7];
        }
        FUN_1083ab70(pcVar5,uVar7);
        (**(code **)(*param_2 + 8))("AmmoName",&DAT_1202094c,0);
      }
      else {
        iVar9 = (**(code **)(*param_2 + 0x28))();
        if (iVar9 != 2) {
          FUN_1083ab70(&DAT_11d9d32b,0);
          pcVar5 = local_14;
        }
        if ((DAT_12020950 & 1) == 0) {
          DAT_12020950 = DAT_12020950 | 1;
          DAT_1202094c = &DAT_1201fc98;
          FUN_11a8911f(&LAB_11c7e3f0);
        }
        uVar7 = 0;
        cVar4 = *pcVar5;
        while ((cVar4 != '\0' && (uVar7 < *(uint *)(pcVar5 + -8)))) {
          uVar7 = uVar7 + 1;
          cVar4 = pcVar5[uVar7];
        }
        FUN_1083ab70(pcVar5,uVar7);
        (**(code **)(*param_2 + 4))("AmmoName",&DAT_1202094c,0);
        if (DAT_1202094c == (char *)0x0) {
          iVar9 = 0;
        }
        else {
          pcVar5 = DAT_1202094c;
          do {
            cVar4 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar4 != '\0');
          iVar9 = (int)pcVar5 - (int)(DAT_1202094c + 1);
        }
        FUN_1083ab70(DAT_1202094c,iVar9);
        pcVar5 = local_14;
      }
      (**(code **)(*param_2 + 0x54))("Bullets",&local_28,0);
      (**(code **)(*param_2 + 0x1c))();
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 != '\0') {
        piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
        uVar7 = (**(code **)(*piVar6 + 0xc))(pcVar5);
        pcVar5 = local_14;
        piVar11 = local_10 + 0xfc;
        piVar6 = (int *)local_10[0xfd];
        while (piVar6 != (int *)0x0) {
          if ((uint)piVar6[4] < uVar7) {
            piVar6 = (int *)piVar6[3];
          }
          else {
            piVar11 = piVar6;
            piVar6 = (int *)piVar6[2];
          }
        }
        if ((piVar11 == local_10 + 0xfc) || (bVar1 = true, uVar7 < (uint)piVar11[4])) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar1) {
          bVar1 = false;
        }
        if (bVar2) {
          local_5c[1] = 0;
          local_5c[0] = uVar7;
          FUN_10cc06b0(&local_44,piVar11,local_5c);
          piVar11 = local_44;
        }
        piVar11[5] = local_28;
      }
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 == '\0') {
        iVar9 = *(int *)(iVar8 + 0xc);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar8 + 4);
          if (iVar8 == *(int *)(iVar9 + 0xc)) {
            do {
              iVar8 = iVar9;
              iVar9 = *(int *)(iVar8 + 4);
            } while (iVar8 == *(int *)(iVar9 + 0xc));
          }
          if (*(int *)(iVar8 + 0xc) != iVar9) {
            iVar8 = iVar9;
          }
        }
        else {
          for (iVar3 = *(int *)(iVar9 + 8); iVar8 = iVar9, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8))
          {
            iVar9 = iVar3;
          }
        }
      }
      piVar6 = (int *)(pcVar5 + -0xc);
      if ((-1 < *piVar6) && (iVar9 = FUN_10c3dad0(piVar6), iVar9 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar5 + -4));
        FUN_10c3d900(piVar6);
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_c);
  }
  (**(code **)(*param_2 + 0x1c))();
  cVar4 = (**(code **)(*param_2 + 0x20))();
  piVar6 = local_10;
  if (cVar4 != '\0') {
    _DAT_11dfa274 = 0x100;
    DAT_11dfa278 = _DAT_11cc2810;
    DAT_11dfa27c = _UNK_11cc2814;
    DAT_11dfa280 = _UNK_11cc2818;
    DAT_11dfa284 = _UNK_11cc281c;
    _DAT_11dfa288 = 0x3f800000;
  }
  iVar8 = (**(code **)(*local_10 + 0x68))();
  if (iVar8 != 0) {
    (**(code **)(*param_2 + 0x14))("WeaponStats");
    (**(code **)(*param_2 + 0x74))("silencer",piVar6 + 0x10f,0);
    piVar11 = piVar6 + 0xd3;
    local_2c = (**(code **)(piVar6[0xd3] + 0x70))();
    (**(code **)(*param_2 + 0x54))("numFiremodes",&local_2c,0);
    cVar4 = (**(code **)(*param_2 + 0x20))();
    if (cVar4 != '\0') {
      (**(code **)(*piVar11 + 0x70))();
    }
    iVar8 = 0;
    if (0 < local_2c) {
      do {
        (**(code **)(**(int **)(piVar6[0xde] + iVar8 * 4) + 300))(param_2);
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_2c);
    }
    local_7 = piVar6[0xd6] != 0;
    (**(code **)(*param_2 + 0x74))("hasZoom",&local_7,0);
    if (local_7 != '\0') {
      local_34 = piVar6[0xd7];
      (**(code **)(*param_2 + 0x54))("ZoomMode",&local_34,0);
      local_8 = (**(code **)(*(int *)piVar6[0xd6] + 0x4c))();
      (**(code **)(*param_2 + 0x74))("Zoomed",&local_8,0);
      local_38 = (**(code **)(*(int *)piVar6[0xd6] + 0x34))();
      (**(code **)(*param_2 + 0x54))("ZoomStep",&local_38,0);
      (**(code **)(*(int *)piVar6[0xd6] + 0x68))(param_2);
      cVar4 = (**(code **)(*param_2 + 0x20))();
      if (cVar4 != '\0') {
        if (piVar6[0xd7] != local_34) {
          (**(code **)(*piVar11 + 0xa4))(local_34);
        }
        *(char *)((int)piVar6 + 0x409) = local_8;
        iVar8 = 1;
        if (local_38 < 2) {
          iVar8 = local_38;
        }
        piVar6[0x103] = iVar8;
        if (local_8 == '\0') {
          (**(code **)(*(int *)piVar6[0xd6] + 0x30))(0);
        }
      }
    }
    local_5 = '\0';
    cVar4 = (**(code **)(*param_2 + 0x20))();
    if (cVar4 == '\0') {
      if ((int *)piVar6[0xd4] == (int *)0x0) {
        local_5 = '\0';
      }
      else {
        local_5 = (**(code **)(*(int *)piVar6[0xd4] + 0x50))(1);
      }
    }
    (**(code **)(*param_2 + 0x74))("FireModeReloading",&local_5,0);
    cVar4 = (**(code **)(*param_2 + 0x20))();
    if ((cVar4 != '\0') && (local_5 != '\0')) {
      (**(code **)(*piVar11 + 0x50))(0);
    }
    (**(code **)(*param_2 + 0x74))("Alternation",piVar6 + 0x102,0);
    (**(code **)(*param_2 + 0x1c))();
  }
  return;
}



/* ===== FUN_110fdf60 @ 110fdf60  size=1134 ===== */
// strings:
//   "WeaponAmmo"
//   "AmmoAmount"
//   "Bullets"
//   "WeaponStats"
//   "silencer"
//   "numFiremodes"
//   "currentFireMode"
//   "hasZoom"
//   "ZoomMode"
//   "Zoomed"
//   "ZoomStep"
//   "FireModeReloading"
//   "Alternation"

/* [RE-AUTO c0]
   strings:
     ""WeaponAmmo""
     ""AmmoAmount""
     ""Bullets""
     ""WeaponStats""
     ""silencer""
     ""numFiremodes""
     ""currentFireMode""
     ""hasZoom""
     ""ZoomMode""
     ""Zoomed"" */

void __thiscall FUN_110fdf60(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  char cVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint local_38 [2];
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  uint local_c;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  
  local_c = 0;
  FUN_10cb5d20(param_2);
  (**(code **)(*param_2 + 0x14))("WeaponAmmo");
  cVar5 = (**(code **)(*param_2 + 0x20))();
  if (cVar5 != '\0') {
    FUN_10ab55c0();
    FUN_10ab55c0();
    param_1[0x11b] = 0;
  }
  local_18 = param_1[0xee];
  iVar9 = param_1[0xec];
  (**(code **)(*param_2 + 0x54))("AmmoAmount",&local_18,0);
  local_20 = 0;
  if (0 < local_18) {
    do {
      local_14 = 0;
      local_10 = &DAT_1201fc98;
      cVar5 = (**(code **)(*param_2 + 0x20))();
      if ((cVar5 == '\0') && (*(int **)(iVar9 + 0x10) != (int *)0x0)) {
        pcVar6 = (char *)(**(code **)(**(int **)(iVar9 + 0x10) + 8))();
        if (pcVar6 == (char *)0x0) {
          iVar10 = 0;
        }
        else {
          pcVar11 = pcVar6;
          do {
            cVar5 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar5 != '\0');
          iVar10 = (int)pcVar11 - (int)(pcVar6 + 1);
        }
        FUN_1083ab70(pcVar6,iVar10);
        local_14 = *(int *)(iVar9 + 0x14);
      }
      (**(code **)(*param_2 + 0x14))(&DAT_11ddfa14);
      FUN_10a7d250("AmmoName",&local_10,0);
      (**(code **)(*param_2 + 0x54))("Bullets",&local_14,0);
      (**(code **)(*param_2 + 0x1c))();
      cVar5 = (**(code **)(*param_2 + 0x20))();
      puVar3 = local_10;
      if (cVar5 != '\0') {
        piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
        uVar8 = (**(code **)(*piVar7 + 0xc))(puVar3);
        piVar4 = (int *)param_1[0xeb];
        piVar7 = param_1 + 0xea;
        while (piVar1 = piVar4, piVar1 != (int *)0x0) {
          if ((uint)piVar1[4] < uVar8) {
            piVar4 = (int *)piVar1[3];
          }
          else {
            piVar4 = (int *)piVar1[2];
            piVar7 = piVar1;
          }
        }
        if (piVar7 == param_1 + 0xea) {
LAB_110fe0e4:
          local_6 = '\x01';
        }
        else {
          local_c = local_c | 1;
          local_6 = '\0';
          if (uVar8 < (uint)piVar7[4]) goto LAB_110fe0e4;
        }
        if ((local_c & 1) != 0) {
          local_c = local_c & 0xfffffffe;
        }
        if (local_6 != '\0') {
          local_38[1] = 0;
          local_38[0] = uVar8;
          FUN_10cc06b0(&local_30,piVar7,local_38);
          piVar7 = local_30;
        }
        piVar7[5] = local_14;
      }
      piVar7 = (int *)(puVar3 + -0xc);
      if ((-1 < *piVar7) && (iVar10 = FUN_10c3dad0(piVar7), iVar10 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
        FUN_10c3d900(piVar7);
      }
      iVar10 = *(int *)(iVar9 + 0xc);
      local_20 = local_20 + 1;
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar9 + 4);
        if (iVar9 == *(int *)(iVar10 + 0xc)) {
          do {
            iVar9 = iVar10;
            iVar10 = *(int *)(iVar9 + 4);
          } while (iVar9 == *(int *)(iVar10 + 0xc));
        }
        if (*(int *)(iVar9 + 0xc) != iVar10) {
          iVar9 = iVar10;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar10 + 8); iVar9 = iVar10, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8))
        {
          iVar10 = iVar2;
        }
      }
    } while (local_20 < local_18);
  }
  (**(code **)(*param_2 + 0x1c))();
  iVar9 = (**(code **)(*param_1 + 0x68))();
  if (iVar9 != 0) {
    (**(code **)(*param_2 + 0x14))("WeaponStats");
    (**(code **)(*param_2 + 0x74))("silencer",param_1 + 0x10f,0);
    piVar7 = param_1 + 0xd3;
    local_1c = (**(code **)(param_1[0xd3] + 0x70))();
    (**(code **)(*param_2 + 0x54))("numFiremodes",&local_1c,0);
    cVar5 = (**(code **)(*param_2 + 0x20))();
    if (cVar5 != '\0') {
      (**(code **)(*piVar7 + 0x70))();
    }
    iVar9 = 0;
    if (0 < local_1c) {
      do {
        (**(code **)(**(int **)(param_1[0xde] + iVar9 * 4) + 300))(param_2);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_1c);
    }
    local_24 = (**(code **)(*piVar7 + 0x80))();
    (**(code **)(*param_2 + 0x54))("currentFireMode",&local_24,0);
    cVar5 = (**(code **)(*param_2 + 0x20))();
    if (cVar5 != '\0') {
      (**(code **)(*piVar7 + 0x88))(local_24);
    }
    local_7 = param_1[0xd6] != 0;
    (**(code **)(*param_2 + 0x74))("hasZoom",&local_7,0);
    if (local_7 != '\0') {
      local_28 = param_1[0xd7];
      (**(code **)(*param_2 + 0x54))("ZoomMode",&local_28,0);
      local_8 = (**(code **)(*(int *)param_1[0xd6] + 0x4c))();
      (**(code **)(*param_2 + 0x74))("Zoomed",&local_8,0);
      local_2c = (**(code **)(*(int *)param_1[0xd6] + 0x34))();
      (**(code **)(*param_2 + 0x54))("ZoomStep",&local_2c,0);
      (**(code **)(*(int *)param_1[0xd6] + 0x68))(param_2);
      cVar5 = (**(code **)(*param_2 + 0x20))();
      if (cVar5 != '\0') {
        if (param_1[0xd7] != local_28) {
          (**(code **)(*piVar7 + 0xa4))(local_28);
        }
        *(char *)((int)param_1 + 0x409) = local_8;
        param_1[0x103] = local_2c;
        if (local_8 == '\0') {
          (**(code **)(*(int *)param_1[0xd6] + 0x30))(0);
        }
      }
    }
    local_5 = '\0';
    cVar5 = (**(code **)(*param_2 + 0x20))();
    if (cVar5 == '\0') {
      if ((int *)param_1[0xd4] == (int *)0x0) {
        local_5 = '\0';
      }
      else {
        local_5 = (**(code **)(*(int *)param_1[0xd4] + 0x50))(1);
      }
    }
    (**(code **)(*param_2 + 0x74))("FireModeReloading",&local_5,0);
    cVar5 = (**(code **)(*param_2 + 0x20))();
    if ((cVar5 != '\0') && (local_5 != '\0')) {
      (**(code **)(*piVar7 + 0x50))(0);
    }
    (**(code **)(*param_2 + 0x74))("Alternation",param_1 + 0x102,0);
    (**(code **)(*param_2 + 0x1c))();
  }
  return;
}



