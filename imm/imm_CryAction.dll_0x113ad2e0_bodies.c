
// ===== 0x113ad2e0 in FUN_101d6980@101d6980 =====

/* [RE-AUTO c0]
   src: MVMFightManager.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMFightManager.cpp""
     "u"temp.IsValid()"" */

void __thiscall FUN_101d6980(int param_1,undefined4 param_2)

{
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined1 *local_c;
  int local_8;
  
  local_10 = &PTR_FUN_113ad2e0;
  local_c = &LAB_101d7a8d;
  local_8 = param_1;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x98) + 0x1c))
            (local_1c,param_2,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  if ((local_14 == 0) &&
     (_wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMFightManager.cpp",
               0x3e), local_14 == 0)) {
    return;
  }
  FUN_101d29e0(&param_2,param_1 + 0x20,local_1c);
  return;
}


// ===== 0x113ad2e0 in FUN_101d7090@101d7090 =====

/* [RE-AUTO c0] */

undefined4 __thiscall
FUN_101d7090(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined **local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_8 = param_5;
  local_10 = &PTR_FUN_113ad2e0;
  local_c = &LAB_101d7a8d;
  (**(code **)(*param_1 + 0x1c))(param_2,param_3,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  return param_2;
}


// ===== 0x113ad2e0 in FUN_101d72e0@101d72e0 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_101d72e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_113ad2e0;
  return param_1;
}

