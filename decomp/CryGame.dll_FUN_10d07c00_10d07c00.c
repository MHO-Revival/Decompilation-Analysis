
/* [RE-AUTO c0]
   strings:
     ""Steer_MinDetectionBoxLength""
     ""Steer_ObstacleBrakingWeight""
     ""Steer_UseBrakingAvoidance""
     ""Steer_UseLateralAttenuationAvoidance""
     ""Steer_ObstacleAvoidanceMethod"" */

void __fastcall FUN_10d07c00(int param_1)

{
  int local_8;
  
  local_8 = param_1;
  FUN_10d05380();
  FUN_113168d0("Steer_MinDetectionBoxLength");
  FUN_10d05610(param_1 + 0x78,&local_8);
  FUN_113168d0("Steer_ObstacleBrakingWeight");
  FUN_10d05610(param_1 + 0xd8,&local_8);
  FUN_113168d0("Steer_UseBrakingAvoidance");
  FUN_10d05610(param_1 + 0xa8,&local_8);
  FUN_113168d0("Steer_UseLateralAttenuationAvoidance");
  FUN_10d05610(param_1 + 0xc0,&local_8);
  FUN_113168d0("Steer_ObstacleAvoidanceMethod");
  FUN_10d05610(param_1 + 0x90,&local_8);
  return;
}

