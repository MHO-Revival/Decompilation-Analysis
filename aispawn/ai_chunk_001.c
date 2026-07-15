/* ===== FUN_10488ad0 @ 10488ad0  size=353 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_10488ad0(uint *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_8;
  
  piVar3 = param_4;
  if ((param_4 < (int *)*param_1) || ((int *)param_1[1] <= param_4)) {
    local_8 = (int *)param_1[1];
    uVar2 = (int)local_8 - (int)param_2 >> 2;
    if (param_3 < uVar2) {
      param_4 = local_8 + -param_3;
      piVar4 = local_8;
      piVar6 = param_4;
      for (iVar5 = (int)local_8 - (int)param_4 >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar6;
          *piVar4 = iVar1;
          if (iVar1 != 0) {
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          }
        }
        piVar6 = piVar6 + 1;
        piVar4 = piVar4 + 1;
      }
      param_1[1] = param_1[1] + param_3 * 4;
      FUN_1048a930(local_8);
      FUN_1048a9b0(piVar3);
      return;
    }
    piVar3 = (int *)FUN_10489ac0(param_4);
    param_1[1] = (uint)piVar3;
    for (iVar5 = (int)local_8 - (int)param_2 >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
      if (piVar3 != (int *)0x0) {
        iVar1 = *param_2;
        *piVar3 = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    param_1[1] = param_1[1] + uVar2 * 4;
    FUN_1048a9b0(param_4);
  }
  else {
    local_8 = (int *)*param_4;
    if (local_8 != (int *)0x0) {
      local_8[1] = local_8[1] + 1;
    }
    param_4 = (int *)((uint)param_4 & 0xffffff);
    FUN_10488ad0(param_2,param_3,&local_8,(int)&param_4 + 3);
    if (local_8 != (int *)0x0) {
      piVar3 = local_8 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*local_8 + 4))();
        return;
      }
      if (local_8[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_10488eb0 @ 10488eb0  size=74 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10488eb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* ===== FUN_10489360 @ 10489360  size=110 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __fastcall FUN_10489360(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 - param_1 >> 2;
  if (0 < iVar4) {
    param_1 = param_1 - (int)param_3;
    do {
      iVar3 = *(int *)(param_1 + (int)param_3);
      if (iVar3 != 0) {
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      piVar1 = (int *)*param_3;
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*piVar1 + 4))();
        }
        else if (piVar1[1] < 0) {
          _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c)
          ;
        }
      }
      iVar4 = iVar4 + -1;
      *param_3 = *(int *)(param_1 + (int)param_3);
      param_3 = param_3 + 1;
    } while (0 < iVar4);
    return param_3;
  }
  return param_3;
}



/* ===== FUN_10489a30 @ 10489a30  size=73 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10489a30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    else if (piVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* ===== FUN_10489d60 @ 10489d60  size=74 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10489d60(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* ===== FUN_1048a240 @ 1048a240  size=81 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1048a240(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + -4) {
    piVar2 = *(int **)(param_1 + -4);
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
      else if (piVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
  }
  return;
}



/* ===== FUN_1048a2e0 @ 1048a2e0  size=73 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1048a2e0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
      else if (piVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
  }
  return;
}



/* ===== FUN_1048a3a0 @ 1048a3a0  size=79 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1048a3a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    else if (piVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return param_1;
}



/* ===== FUN_1048a3f0 @ 1048a3f0  size=80 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1048a3f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return param_1;
}



/* ===== FUN_1048a930 @ 1048a930  size=113 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __fastcall FUN_1048a930(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 - param_1 >> 2;
  if (0 < iVar4) {
    param_2 = param_2 - (int)param_3;
    do {
      iVar3 = *(int *)(param_2 + -4 + (int)param_3);
      param_3 = param_3 + -1;
      if (iVar3 != 0) {
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      piVar1 = (int *)*param_3;
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*piVar1 + 4))();
        }
        else if (piVar1[1] < 0) {
          _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c)
          ;
        }
      }
      iVar4 = iVar4 + -1;
      *param_3 = *(int *)(param_2 + (int)param_3);
    } while (0 < iVar4);
    return param_3;
  }
  return param_3;
}



/* ===== FUN_1048a9b0 @ 1048a9b0  size=97 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1048a9b0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  for (iVar3 = param_2 - (int)param_1 >> 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    if (*param_3 != 0) {
      piVar1 = (int *)(*param_3 + 4);
      *piVar1 = *piVar1 + 1;
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      piVar2 = piVar1 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
      else if (piVar1[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    *param_1 = *param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== FUN_1048ac50 @ 1048ac50  size=62 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __fastcall FUN_1048ac50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    else if (piVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_10492f90 @ 10492f90  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_10492f90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_104931f0 @ 104931f0  size=182 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_104931f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[4];
  *param_1 = &PTR_FUN_11dbae74;
  if (piVar2 != (int *)param_1[5]) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[5]);
  }
  if ((*(char *)(param_1 + 0xc) != '\0') && (param_1[0xb] != 0)) {
    FUN_104932b0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x14];
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    else if ((int)puVar1[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  puVar1 = (undefined4 *)param_1[0x12];
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 2) != '\0')) {
    piVar2 = puVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)param_1[0x11];
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 2) != '\0')) {
    piVar2 = puVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (param_1[4] != 0) {
    FUN_10c3d5d0(param_1[4]);
  }
  return;
}



/* ===== FUN_104979c0 @ 104979c0  size=132 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_104979c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x50);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *(undefined4 **)(param_1 + 0x50) = param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_104994b0 @ 104994b0  size=668 ===== */
// calls: strstr, _itoa_s
// strings:
//   "Failed to find BT file '%s' in override's reference path: \n %s."
//   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
//   "Failed to create override branch!"
//   "Failed to parse RT path:\n '%s'."

/* [RE-AUTO c0]
   src: LoadBehaviorTree.cpp
   calls: strstr, _itoa_s
   strings:
     ""Failed to find BT file '%s' in override's reference path: \n %s.""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp""
     ""Failed to create override branch!""
     ""Failed to parse RT path:\n '%s'."" */

void __thiscall FUN_104994b0(int param_1,int param_2,char *param_3,char param_4)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *local_90;
  int local_8c;
  int local_88;
  int local_84;
  char *local_80;
  undefined1 local_7c [16];
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 local_64 [16];
  undefined1 *local_54;
  undefined1 *local_50;
  char local_4c [16];
  char *local_3c;
  char *local_38;
  char local_34 [40];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_8c = param_2;
  local_84 = param_1;
  local_90 = strstr(*(char **)(param_3 + 0x20),*(char **)(*(int *)(param_2 + 0xc) + 0x38));
  local_80 = local_90;
  if (local_90 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x2c),0,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x174,"Failed to find BT file \'%s\' in override\'s reference path: \n %s.",
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x38),*(undefined4 *)(param_3 + 0x20));
  }
  local_4c[0] = '\0';
  local_54 = local_64;
  local_3c = local_4c;
  iVar5 = 0;
  local_6c = local_7c;
  local_64[0] = 0;
  local_7c[0] = 0;
  local_68 = local_6c;
  local_50 = local_54;
  local_38 = local_3c;
  while( true ) {
    pcVar2 = local_90;
    cVar3 = FUN_1047c8f0(&local_88,&local_90);
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(local_84 + 0x2c),0,
                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                   ,0x189,"Failed to parse RT path:\n \'%s\'.",pcVar2);
    }
    if (local_50 != local_54) {
      iVar5 = iVar5 + 1;
    }
    if (1 < iVar5) break;
    if (local_38 != local_3c) {
      FUN_100d9260(&DAT_11dba070,&DAT_11dba071);
    }
    _itoa_s(local_88,local_34,0x28,10);
    pcVar2 = local_34;
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    FUN_100d9260(local_34,pcVar4);
    if ((local_90 == (char *)0x0) || (*local_90 == '\0')) break;
  }
  iVar6 = local_8c;
  if ((param_4 == '\0') || (pcVar2 = local_80, iVar5 != 1)) {
    iVar5 = FUN_10498a10(local_38);
    if ((iVar5 == 0) && (iVar5 = FUN_10498ab0(local_88,local_38), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(local_84 + 0x2c),0,
                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                   ,0x1b1,"Failed to create override branch!");
    }
    local_80 = param_3;
    if ((param_3 != (char *)0x0) && (param_3[8] != '\0')) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    FUN_1049d090(&local_84,iVar5 + 0x10,&local_80);
    if (param_3 == (char *)0x0) goto LAB_10499696;
  }
  else {
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    FUN_100d83d0(local_80,pcVar4);
    if (local_4c != param_3 + 0x68) {
      FUN_100d83d0(local_38,local_3c);
    }
    iVar6 = local_8c;
    *(int *)(param_3 + 0x4c) = local_88;
    local_80 = param_3;
    if (param_3[8] != '\0') {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    FUN_1049d090(&local_84,local_8c + 0x1c,&local_80);
  }
  if (param_3[8] != '\0') {
    piVar1 = (int *)(param_3 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)param_3)(1);
    }
  }
LAB_10499696:
  *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
  if ((local_68 != local_7c) && (local_68 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_68);
  }
  if ((local_50 != local_64) && (local_50 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_50);
  }
  if ((local_38 != local_4c) && (local_38 != (char *)0x0)) {
    FUN_10c3d5d0(local_38);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10499a30 @ 10499a30  size=583 ===== */
// strings:
//   "Behavior"
//   "OverrideNode"
//   "Failed to find override root node!"
//   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
//   "Couldn't find root node in xml file!"
//   "Couldn't load XML file '%s', please ensure the file is valid behavior tree file!"
//   "Root Node is not ready when load XML file '%s'! "

/* [RE-AUTO c0]
   src: LoadBehaviorTree.cpp
   strings:
     ""Behavior""
     ""OverrideNode""
     ""Failed to find override root node!""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp""
     ""Couldn't find root node in xml file!""
     ""Couldn't load XML file '%s', please ensure the file is valid behavior tree file!""
     ""Root Node is not ready when load XML file '%s'! "" */

void __thiscall FUN_10499a30(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  undefined *puVar4;
  int *unaff_EDI;
  int **ppiVar5;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int **ppiStack_5c;
  int *piStack_58;
  int iStack_54;
  int *local_44;
  int local_40 [6];
  int *local_28;
  int local_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_44;
  local_28 = param_2;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x44);
  local_40[0] = param_1;
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    local_24 = iVar2;
    if (iVar2 != 0) {
      ppiStack_5c = &local_44;
      iStack_54 = 0;
      piStack_58 = (int *)param_2[6];
      piStack_60 = (int *)0x10499a88;
      (**(code **)(**(int **)(DAT_123bb90c + 8) + 0xc))();
      if (unaff_EDI != (int *)0x0) {
        piStack_60 = (int *)0x11dbb37c;
        piStack_64 = (int *)0x10499aa0;
        cVar1 = (**(code **)(*unaff_EDI + 0x10))();
        if (cVar1 != '\0') {
          piStack_60 = local_40;
          local_40[0] = 0;
          piStack_64 = (int *)&DAT_11dbb4b8;
          piStack_68 = (int *)0x10499ac3;
          (**(code **)(*unaff_EDI + 0x44))();
          piStack_68 = (int *)&DAT_11dbb4bc;
          *(undefined4 *)(*param_2 + 0x3c) = unaff_EBX;
          piStack_6c = (int *)0x10499ade;
          local_44 = (int *)(**(code **)(*piStack_58 + 0x6c))();
          if (local_44 == (int *)0x0) {
            piStack_6c = (int *)0x11dbb480;
            iStack_70 = 0x308;
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),&ppiStack_5c,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                        );
          }
          piStack_6c = (int *)0x10499af1;
          (**(code **)(*local_44 + 4))();
          piStack_6c = (int *)0xffffffff;
          ppiVar5 = &local_44;
          iStack_70 = iVar2;
          FUN_10499f10(param_2);
          puVar4 = (undefined *)0x0;
          piStack_60 = (int *)0x0;
          iVar2 = (**(code **)(*piStack_6c + 100))();
          if (0 < iVar2) {
            do {
              piVar3 = (int *)(**(code **)(*piStack_6c + 0x68))(puVar4);
              piStack_68 = piVar3;
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 4))();
              }
              cVar1 = (**(code **)(*piVar3 + 0x10))("OverrideNode");
              if (cVar1 != '\0') {
                piStack_64 = (int *)(**(code **)(*piVar3 + 0x6c))(&DAT_11dbb4bc);
                if (piStack_64 != (int *)0x0) {
                  (**(code **)(*piStack_64 + 4))();
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x88);
                }
                    /* WARNING: Subroutine does not return */
                FUN_10499900(*(undefined4 *)(param_1 + 0x3c),&iStack_70,
                             "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                             ,0x31a,"Failed to find override root node!");
              }
              (**(code **)(*piVar3 + 8))();
              puVar4 = (undefined *)((int)piStack_68 + 1);
              piStack_68 = (int *)puVar4;
              iVar2 = (*(code *)(*ppiVar5)[0x19])();
            } while ((int)puVar4 < iVar2);
          }
          if (((uint)param_2[0xd] >> 1 & 1) != 0) {
            FUN_10499db0(param_2,0);
          }
          (**(code **)(*unaff_ESI + 0x44))();
          local_44 = (int *)0x0;
          local_40[0] = 0;
          local_40[1] = 0;
          local_40[2] = 0;
          FUN_1049cbc0();
          if (ppiStack_5c != (int **)0x0) {
            (*(code *)(*ppiStack_5c)[2])();
          }
          if (ppiVar5 != (int **)0x0) {
            (*(code *)(*ppiVar5)[2])();
          }
          FUN_11a89daa();
          return;
        }
      }
      piStack_60 = (int *)param_2[6];
      piStack_64 = (int *)0x11dbb388;
      piStack_68 = (int *)0x2ef;
      piStack_6c = (int *)0x11dbb208;
      iStack_70 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(param_1 + 0x3c));
    }
  }
  iStack_54 = param_2[6];
  piStack_58 = (int *)0x11dbb44c;
  ppiStack_5c = (int **)0x2e0;
  piStack_60 = (int *)0x11dbb208;
  piStack_64 = (int *)0x0;
  piStack_68 = *(int **)(param_1 + 0x3c);
                    /* WARNING: Subroutine does not return */
  piStack_6c = (int *)&UNK_10499dac;
  FUN_10499900();
}



/* ===== FUN_10499f10 @ 10499f10  size=2981 ===== */
// strings:
//   "Node_id"
//   "Reference"
//   "Selector"
//   "SelectorType"
//   "Random"
//   "General"
//   "RandomAttack"
//   "Sequence"
//   "SequenceType"
//   "Filter"
//   "Filter_Type"
//   "Logger"
//   "Timer"
//   "Counter"
//   "Times"
//   "Until_Fails_Limited"
//   "Until_Fails"
//   "Until_Success"
//   "Enter_Exit"
//   "Action"

/* WARNING: Removing unreachable block (ram,0x1049ab0b) */
/* WARNING: Removing unreachable block (ram,0x1049ab2b) */
/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   src: LoadBehaviorTree.cpp
   strings:
     ""Node_id""
     ""Reference""
     ""Selector""
     ""SelectorType""
     ""Random""
     ""General""
     ""RandomAttack""
     ""Sequence""
     ""SequenceType""
     ""Filter"" */

void __thiscall FUN_10499f10(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  int local_d8;
  undefined4 *local_d4;
  int local_d0 [3];
  undefined1 local_c1;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  char local_a2;
  char local_a1;
  int *local_a0;
  int *local_9c [7];
  undefined1 local_80 [20];
  undefined1 *local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  byte local_20 [16];
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_bc = *param_2;
  local_c0 = param_2;
  local_d8 = param_2[0x16];
  local_9c[0] = param_4;
  local_d4 = param_3;
  if (local_d8 == 0) {
    local_a0 = (int *)0x0;
  }
  else {
    local_a0 = *(int **)(local_d8 + 0x40);
  }
  local_d0[2] = 0;
  local_a8 = param_1;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Node_id",local_d0 + 2);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x38c,"Failed to find \'Node_id\' attribute.");
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x28))(&DAT_11dbabc0,local_20);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x39a,"Failed to find \'Type\' attribute.");
  }
  local_ac = (int *)(**(code **)(*(int *)*param_3 + 0x5c))(&DAT_11da7300);
  pbVar6 = local_c;
  local_a1 = '\x01';
  if ((param_4 == (int *)0x0) && (local_9c[0] = param_4, local_a0 != (int *)0x0)) {
    local_9c[0] = local_a0;
  }
  local_a2 = '\0';
  if (((int)local_10 - (int)local_c == 4) &&
     (iVar4 = FUN_100b7960(local_c,&DAT_11dbaf60,4), iVar4 == 0)) {
    local_a1 = '\0';
    piVar8 = local_9c[0];
    piVar10 = local_9c[0];
  }
  else {
    cVar3 = FUN_100fd0c0(local_20,"Reference");
    if (cVar3 != '\0') {
      pcVar5 = (char *)(**(code **)(*(int *)*param_3 + 0x5c))("Reference");
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        pcVar11 = pcVar5;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        if (pcVar11 != pcVar5 + 1) {
          local_28 = local_38;
          local_a0 = (int *)0x0;
          local_58 = local_68;
          local_40 = local_50;
          local_38[0] = 0;
          local_68[0] = 0;
          local_50[0] = 0;
          local_54 = local_58;
          local_3c = local_40;
          local_24 = local_28;
          cVar3 = FUN_1049c080(pcVar5,local_38,local_68,local_40);
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x3cc,"Failed to parse reference string: %s",pcVar5);
          }
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(100);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                   ,0x3b7,"Empty Reference!");
    }
    cVar3 = FUN_100fd0c0(local_20,"Selector");
    if (cVar3 != '\0') {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("SelectorType");
      if (pbVar6 == (byte *)0x0) {
LAB_1049abbf:
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x3f7,"Unsupported \'SelectorType\': \'%s\'",pbVar6);
      }
      pcVar5 = "Random";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a240:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a245;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a240;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a245:
      if (uVar7 != 0) {
        pcVar5 = "General";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a274:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a279;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a274;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a279:
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x54);
        }
        pcVar5 = "RandomAttack";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a2e2:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a2e7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a2e2;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a2e7:
        if (uVar7 != 0) goto LAB_1049abbf;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x70);
    }
    cVar3 = FUN_100fd0c0(local_20,"Sequence");
    if (cVar3 != '\0') {
      (**(code **)(*(int *)*param_3 + 0x5c))("SequenceType");
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x54);
    }
    cVar3 = FUN_100fd0c0(local_20,"Filter");
    if (cVar3 == '\0') {
      cVar3 = FUN_100fd0c0(local_20,"Action");
      if ((cVar3 == '\0') && (cVar3 = FUN_100fd0c0(local_20,"Condition"), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x493,"Unsupported Node Type: \'%s\'",pbVar6);
      }
      pcVar5 = "Action";
      do {
        bVar1 = *pbVar6;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a796:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a79b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a796;
        pbVar6 = pbVar6 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a79b:
      local_a2 = '\x01';
      iVar4 = (**(code **)(*(int *)*param_3 + 0x5c))("Operation");
      local_b4 = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x48e,"Failed to retrieve operation type!");
      }
      FUN_100b5f70(iVar4,&local_c1);
      FUN_11316810(local_80);
      cVar3 = (**(code **)(**(int **)(DAT_123bb90c + 0x14) + 0xc))(&local_b8);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x480,
                     "Failed to fined the leaf class for operation type: \'%s\', \n please ensure the corresponding leaf class has been registered in leaf factory!"
                     ,iVar4);
      }
      FUN_11316810(local_80);
      pcVar9 = (code *)(**(code **)(**(int **)(DAT_123bb90c + 0x14) + 8))
                                 (local_e0,local_9c[0],local_c0[0xe],0);
      piVar8 = (int *)(*pcVar9)();
      piVar8[0x17] = 2 - (uint)(uVar7 != 0);
      FUN_11316b10(local_b4);
      piVar10 = local_9c[0];
      if ((local_6c != local_80) && (local_6c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_6c);
        piVar10 = local_9c[0];
      }
    }
    else {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("Filter_Type");
      piVar10 = local_9c[0];
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x468,"Unsupported Filter Type: \'%s\'",0);
      }
      pcVar5 = "Logger";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a3e0:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a3e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a3e0;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a3e5:
      if (uVar7 == 0) {
        piVar8 = (int *)FUN_1049e300();
      }
      else {
        pcVar5 = "Timer";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a426:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a42b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a426;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a42b:
        if (uVar7 == 0) {
          local_d0[1] = 0xbf800000;
          cVar3 = (**(code **)(*(int *)*param_3 + 0x44))(&DAT_11dbb648,local_d0 + 1);
          piVar10 = local_9c[0];
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x422,"Failed to retrieve  \'Time\' param for Timer.");
          }
          piVar8 = (int *)FUN_1049e390();
          FUN_104bfed0();
        }
        else {
          pcVar5 = "Counter";
          pbVar12 = pbVar6;
          do {
            bVar1 = *pbVar12;
            bVar15 = bVar1 < (byte)*pcVar5;
            if (bVar1 != *pcVar5) {
LAB_1049a4a2:
              uVar7 = -(uint)bVar15 | 1;
              goto LAB_1049a4a7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar12[1];
            bVar15 = bVar1 < (byte)pcVar5[1];
            if (bVar1 != pcVar5[1]) goto LAB_1049a4a2;
            pbVar12 = pbVar12 + 2;
            pcVar5 = pcVar5 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_1049a4a7:
          if (uVar7 == 0) {
            local_d0[0] = -1;
            cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",local_d0);
            piVar10 = local_9c[0];
            if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x42f,"Failed to retrieve  \'Times\' param for Counter.");
            }
            piVar8 = (int *)FUN_1049e440();
            piVar8[0x17] = 0;
            piVar8[0x16] = local_d0[0];
          }
          else {
            pbVar13 = (byte *)&DAT_11dbb71c;
            pbVar12 = pbVar6;
            do {
              bVar1 = *pbVar12;
              bVar15 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_1049a520:
                uVar7 = -(uint)bVar15 | 1;
                goto LAB_1049a525;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar12[1];
              bVar15 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_1049a520;
              pbVar12 = pbVar12 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_1049a525:
            if (uVar7 == 0) {
              local_b4 = -1;
              cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b4);
              piVar10 = local_9c[0];
              if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                             "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                             ,0x43c,"Failed to retrieve  \'Times\' param for Loop.");
              }
              piVar8 = (int *)FUN_1049e4f0();
              piVar8[0x16] = local_b4;
              piVar8[0x17] = 0;
            }
            else {
              pcVar5 = "Until_Fails_Limited";
              pbVar12 = pbVar6;
              do {
                bVar1 = *pbVar12;
                bVar15 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_1049a5a0:
                  uVar7 = -(uint)bVar15 | 1;
                  goto LAB_1049a5a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar12[1];
                bVar15 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_1049a5a0;
                pbVar12 = pbVar12 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_1049a5a5:
              if (uVar7 == 0) {
                local_b8 = -1;
                cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b8);
                piVar10 = local_9c[0];
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                               "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                               ,0x449,"Failed to retrieve  \'Times\' param for Until_Fails_Limited."
                              );
                }
                piVar8 = (int *)FUN_1049e5a0();
                piVar8[0x16] = local_b8;
                piVar8[0x17] = 0;
              }
              else {
                pcVar5 = "Until_Fails";
                pbVar12 = pbVar6;
                do {
                  bVar1 = *pbVar12;
                  bVar15 = bVar1 < (byte)*pcVar5;
                  if (bVar1 != *pcVar5) {
LAB_1049a620:
                    uVar7 = -(uint)bVar15 | 1;
                    goto LAB_1049a625;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar12[1];
                  bVar15 = bVar1 < (byte)pcVar5[1];
                  if (bVar1 != pcVar5[1]) goto LAB_1049a620;
                  pbVar12 = pbVar12 + 2;
                  pcVar5 = pcVar5 + 2;
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_1049a625:
                if (uVar7 == 0) {
                  piVar8 = (int *)FUN_1049e650();
                }
                else {
                  pcVar5 = "Until_Success";
                  pbVar12 = pbVar6;
                  do {
                    bVar1 = *pbVar12;
                    bVar15 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_1049a666:
                      uVar7 = -(uint)bVar15 | 1;
                      goto LAB_1049a66b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar12[1];
                    bVar15 = bVar1 < (byte)pcVar5[1];
                    if (bVar1 != pcVar5[1]) goto LAB_1049a666;
                    pbVar12 = pbVar12 + 2;
                    pcVar5 = pcVar5 + 2;
                  } while (bVar1 != 0);
                  uVar7 = 0;
LAB_1049a66b:
                  if (uVar7 == 0) {
                    piVar8 = (int *)FUN_1049e6e0();
                  }
                  else {
                    pcVar5 = "Enter_Exit";
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < (byte)*pcVar5;
                      if (bVar1 != *pcVar5) {
LAB_1049a6b0:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a6b5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < (byte)pcVar5[1];
                      if (bVar1 != pcVar5[1]) goto LAB_1049a6b0;
                      pbVar12 = pbVar12 + 2;
                      pcVar5 = pcVar5 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a6b5:
                    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10c3d580(0x5c);
                    }
                    pbVar13 = &DAT_11dbb75c;
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < *pbVar13;
                      if (bVar1 != *pbVar13) {
LAB_1049a720:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a725;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < pbVar13[1];
                      if (bVar1 != pbVar13[1]) goto LAB_1049a720;
                      pbVar12 = pbVar12 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a725:
                    if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                                   ,0x462,"Unsupported filter type : \'%s\'!",pbVar6);
                    }
                    piVar8 = (int *)FUN_1049e800();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar8[9] = local_d0[2];
  FUN_113168d0(local_ac);
  FUN_11316b50(local_ac);
  piVar8[0xe] = piVar8[0xe] | local_c0[0xf];
  FUN_10493360();
  FUN_1049ae30(param_3,piVar8);
  if (((local_a1 != '\0') && (piVar10 != (int *)0x0)) && (piVar8 != piVar10)) {
    puVar2 = (undefined4 *)piVar10[5];
    if (puVar2 == (undefined4 *)piVar10[6]) {
      local_ac = piVar8;
      FUN_10495eb0(puVar2,&local_ac,piVar10 + 4,1,1);
    }
    else {
      *puVar2 = piVar8;
      piVar10[5] = piVar10[5] + 4;
      local_ac = piVar8;
    }
  }
  if (local_d8 == 0) {
    iVar4 = FUN_10494210(1,*(undefined4 *)(local_bc + 0x38));
    if ((iVar4 != 0) && (piVar8[9] != -1)) {
      local_b0 = piVar8[9];
      local_ac = piVar8;
      FUN_10495de0(local_dc,&local_b0);
      if (*(int *)(iVar4 + 0x24) != 0) {
        piVar8[0x13] = *(int *)(iVar4 + 0x24);
        if ((char)local_d8 != '\0') goto LAB_1049a979;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),0,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x4bb,"Failed to record normal node into id map!");
  }
  if (local_a0 == (int *)0x0) {
    *(int **)(local_d8 + 0x40) = piVar8;
  }
LAB_1049a979:
  if (local_a2 == '\0') {
    piVar10 = (int *)(**(code **)(*(int *)*param_3 + 0x6c))("EventBT");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x50);
    }
    piVar10 = (int *)(**(code **)(*(int *)*local_d4 + 0x6c))("Connector");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
      local_a0 = (int *)0x0;
      iVar4 = (**(code **)(*piVar10 + 100))();
      if (0 < iVar4) {
        piVar14 = (int *)0x0;
        do {
          local_9c[0] = (int *)(**(code **)(*piVar10 + 0x68))(piVar14);
          if (((local_9c[0] == (int *)0x0) ||
              ((**(code **)(*local_9c[0] + 4))(), local_9c[0] == (int *)0x0)) ||
             (cVar3 = (**(code **)(*local_9c[0] + 0x10))(&DAT_11dbb4bc), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),local_9c,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x4d7,"Unrecognized child Node!");
          }
          cVar3 = FUN_10499f10(local_c0,local_9c,piVar8,local_a0);
          if (cVar3 == '\0') {
            if (local_9c[0] != (int *)0x0) {
              (**(code **)(*local_9c[0] + 8))();
            }
            (**(code **)(*piVar10 + 8))();
            if ((local_c != local_20) && (local_c != (byte *)0x0)) {
              FUN_10c3d5d0(local_c);
            }
            FUN_11a89daa();
            return;
          }
          if (local_9c[0] != (int *)0x0) {
            (**(code **)(*local_9c[0] + 8))();
          }
          local_a0 = (int *)((int)local_a0 + 1);
          iVar4 = (**(code **)(*piVar10 + 100))();
          piVar14 = local_a0;
        } while ((int)local_a0 < iVar4);
      }
      (**(code **)(*piVar10 + 8))();
    }
  }
  if ((local_c != local_20) && (local_c != (byte *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1049ae30 @ 1049ae30  size=487 ===== */
// strings:
//   "Comment"
//   "Node_id"
//   "Failed to get %-i th attribute."
//   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"

/* [RE-AUTO c0]
   src: LoadBehaviorTree.cpp
   strings:
     ""Comment""
     ""Node_id""
     ""Failed to get %-i th attribute.""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"" */

void __thiscall FUN_1049ae30(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_44;
  byte *local_40;
  undefined1 local_39;
  undefined1 local_38 [20];
  undefined1 *local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (((int *)*param_2 != (int *)0x0) && (param_3 != 0)) {
    iVar8 = 0;
    iVar3 = (**(code **)(*(int *)*param_2 + 0x18))();
    if (0 < iVar3) {
      do {
        local_40 = (byte *)0x0;
        local_44 = 0;
        cVar2 = (**(code **)(*(int *)*param_2 + 0x1c))(iVar8,&local_40,&local_44);
        if ((cVar2 == '\0') || (local_40 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_2,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x4f3,"Failed to get %-i th attribute.",iVar8 + 1);
        }
        pcVar6 = "Comment";
        pbVar4 = local_40;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_1049aed0:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_1049aed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_1049aed0;
          pbVar4 = pbVar4 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1049aed5:
        if (uVar5 != 0) {
          pbVar7 = &DAT_11da7300;
          pbVar4 = local_40;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_1049af04:
              uVar5 = -(uint)bVar9 | 1;
              goto LAB_1049af09;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_1049af04;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_1049af09:
          if (uVar5 != 0) {
            pbVar7 = &DAT_11dbabc0;
            pbVar4 = local_40;
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_1049af38:
                uVar5 = -(uint)bVar9 | 1;
                goto LAB_1049af3d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_1049af38;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_1049af3d:
            if (uVar5 != 0) {
              pcVar6 = "Node_id";
              pbVar4 = local_40;
              do {
                bVar1 = *pbVar4;
                bVar9 = bVar1 < (byte)*pcVar6;
                if (bVar1 != *pcVar6) {
LAB_1049af70:
                  uVar5 = -(uint)bVar9 | 1;
                  goto LAB_1049af75;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar9 = bVar1 < (byte)pcVar6[1];
                if (bVar1 != pcVar6[1]) goto LAB_1049af70;
                pbVar4 = pbVar4 + 2;
                pcVar6 = pcVar6 + 2;
              } while (bVar1 != 0);
              uVar5 = 0;
LAB_1049af75:
              if (uVar5 != 0) {
                FUN_100b5f70(local_44,&local_39);
                FUN_100b5f70(local_40,&local_39);
                FUN_104934f0(local_20,local_38);
                if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_c);
                }
                if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_24);
                }
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = (**(code **)(*(int *)*param_2 + 0x18))();
      } while (iVar8 < iVar3);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1049b020 @ 1049b020  size=3363 ===== */
// strings:
//   "%s%c%-i"
//   "Failed to erase original reference node when applying override, \n RT Path: '%s' \n Current Expanding Path: %s."
//   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
//   "Failed to erase old overridden node id-map from parent group manager, RT Path: '%s' \n Current Expanding Path: %s."
//   "Failed to erase old overridden node id-map from sub-tree group manager, RT Path: '%s' \n Current Expanding Path: %s."
//   "Failed to clone override sub-tree.\n  Override RT Path: %s, \n Current Expanding Path: %s."
//   "Failed to retrieve reference node forapplying override, \n RT Path: '%s' \n Current Expanding Path: %s."
//   "Failed to find target node for applying override,\nPlease ensure the override RT path is correct:\n RT Path: '%s' \n Current Expanding Path: %s."
//   "Incorrect override RT-Path! \nRT Path: '%s' \nCurrent Expanding Path: %s."
//   "Override applying over expanded tree is not supported for the moment.\n Target Ref File: %s, \n Current Expanding Path: %s."
//   "Failed to clone sub-tree for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
//   "Target reference bt file is not a valid sub-tree, Please ensure that the BT file's root *MUST* contains single child.\n Target BT File: %s. \n Current Expanding Path: %s."
//   "Failed to find source node by RTPath,\n BTFile: %s. \n, RTPath: %s.\n Current Expanding Path: %s."
//   "Failed to create sub-tree info!\n BTFile: %s.\n Current Expanding Path: %s."
//   "Failed to load reference sub tree:\n BTFile: %s.\n Current Expanding Path: %s."
//   "Failed to find parent node for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
//   "Incorrect reference node info during expanding!\nTarget Ref File: %s, \n Current Expanding Path: %s."

/* [RE-AUTO c0]
   src: LoadBehaviorTree.cpp
   strings:
     ""%s%c%-i""
     ""Failed to erase original reference node when applying override, \n RT Path: '%s' \n Current
   Expanding Path: %s.""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp""
     ""Failed to erase old overridden node id-map from parent group manager, RT Path: '%s' \n
   Current Expanding Path: %s.""
     ""Failed to erase old overridden node id-map from sub-tree group manager, RT Path: '%s' \n
   Current Expanding Path: %s.""
     ""Failed to clone override sub-tree.\n  Override RT Path: %s, \n Current Expanding Path: %s.""
     ""Failed to retrieve reference node forapplying override, \n RT Path: '%s' \n Current Expanding
   Path: %s.""
     ""Failed to find target node for applying override,\nPlease ensure the override RT path is
   correct:\n RT Path: '%s' \n Cu…"
     ""Incorrect override RT-Path! \nRT Path: '%s' \nCurrent Expanding Path: %s.""
     ""Override applying over expanded tree is not supported for the moment.\n Target Ref File: %s,
   \n Current Expanding Path:…" */

void __thiscall FUN_1049b020(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 *extraout_ECX;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 local_c0;
  int *local_b8;
  int local_b4;
  int *local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 local_54 [12];
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar7 = *(int **)(param_2 + 0x1c);
  piVar16 = (int *)(param_2 + 0x1c);
  local_84 = param_2;
  iVar15 = 0;
  piVar3 = piVar7;
  local_80 = param_1;
  if (piVar7 == piVar16) goto LAB_1049b91a;
  do {
    piVar3 = (int *)*piVar3;
    iVar15 = iVar15 + 1;
  } while (piVar3 != piVar16);
  if (((iVar15 == 0) || (local_88 = *(int *)(*(int *)(param_2 + 0x20) + 8), local_88 == 0)) ||
     (*(int *)(local_88 + 0xc) == 0)) goto LAB_1049b91a;
  local_a4 = local_88 + 0x14;
  uVar4 = 0;
  if (piVar7 == piVar16) {
LAB_1049b64f:
    iVar15 = *(int *)(*(int *)(local_88 + 0xc) + 0x44);
    if (((iVar15 == 0) || (iVar15 = *(int *)(iVar15 + 0xc), iVar15 == 0)) ||
       (*(int *)(iVar15 + 0x48) == 0)) goto LAB_1049b91a;
  }
  else {
    do {
      piVar7 = (int *)*piVar7;
      uVar4 = uVar4 + 1;
    } while (piVar7 != piVar16);
    if (uVar4 < 2) goto LAB_1049b64f;
    piVar7 = *(int **)(local_88 + 0x1c);
    piVar16 = (int *)(local_88 + 0x1c);
    bVar17 = piVar7 == piVar16;
    while (local_b0 = piVar7, !bVar17) {
      iVar15 = piVar7[2];
      uVar18 = 0xffffffff;
      uVar6 = *(undefined4 *)(iVar15 + 100);
      local_8c = iVar15;
      puVar5 = (undefined4 *)FUN_10494490();
      local_ac = puVar5;
      if (*(undefined4 **)(local_88 + 0x10) == puVar5) {
        uVar1 = *(undefined4 *)(iVar15 + 0x20);
        puVar5 = (undefined4 *)FUN_10499820(local_24,uVar6,uVar18);
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x52f,
                     "Incorrect override RT-Path! \nRT Path: \'%s\' \nCurrent Expanding Path: %s.",
                     uVar1,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4),
                     (int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
      }
      local_b4 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        local_b4 = FUN_10498e20(*(undefined4 *)(iVar15 + 0x7c));
        if (local_b4 == 0) {
          uVar1 = *(undefined4 *)(iVar15 + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24,uVar6,uVar18);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x54f,
                       "Failed to find target node for applying override,\nPlease ensure the override RT path is correct:\n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar1,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        local_9c = *(int *)(local_b4 + 8);
        local_a8 = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x58);
        local_c0 = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x54);
        if (*(int *)(local_9c + 0x4c) == 0) goto LAB_1049b176;
        local_b8 = *(int **)(*(int *)(local_9c + 0x4c) + 0x48);
      }
      else {
        local_9c = puVar5[2];
        if (local_9c == 0) {
          local_a8 = 0xffffffff;
        }
        else {
          local_a8 = FUN_10494320(puVar5);
        }
        local_c0 = puVar5[9];
        if (puVar5[0x13] == 0) {
LAB_1049b176:
          local_b8 = (int *)0x0;
        }
        else {
          local_b8 = *(int **)(puVar5[0x13] + 0x48);
        }
      }
      if ((local_b8 != (int *)0x0) && ((char)local_b8[2] != '\0')) {
        local_b8[1] = local_b8[1] + 1;
      }
      if (puVar5 == (undefined4 *)0x0) {
        local_98 = (int *)0x0;
      }
      else {
        local_98 = (int *)puVar5[0x12];
      }
      local_a0 = local_b8;
      local_90 = local_98;
      if (local_98 == (int *)0x0) {
        FUN_1049c5e0(&local_b8);
        local_90 = local_98;
      }
      else if ((char)local_98[2] != '\0') {
        local_98[1] = local_98[1] + 1;
      }
      piVar3 = local_90;
      local_48 = 0;
      local_94 = 0;
      local_44 = 0;
      local_40 = (undefined1 *)0x0;
      local_98 = local_90;
      if (puVar5 != (undefined4 *)0x0) {
        local_30 = 0;
        local_2c = 0;
        local_28 = (undefined1 *)0x0;
        if ((*(char *)(local_8c + 0x3c) == '\0') && (*(int *)(local_8c + 0x40) != 0)) {
          FUN_1049dbf0(puVar5 + 4);
          FUN_1047eb70();
          local_94 = local_44;
          puVar5 = local_ac;
        }
        else {
          FUN_10494410(&local_30,0);
        }
        if ((piVar3 == (int *)0x0) || (cVar2 = FUN_104940c0(&local_30), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x57b,
                       "Failed to erase old overridden node id-map from sub-tree group manager, RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if ((local_a0 == (int *)0x0) || (cVar2 = FUN_10494170(puVar5,local_a0), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x584,
                       "Failed to erase old overridden node id-map from parent group manager, RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        FUN_10495720(&local_ac);
        uVar4 = 0;
        if (local_2c - local_30 >> 2 != 0) {
          do {
            cVar2 = FUN_10498ea0(*(undefined4 *)(local_30 + uVar4 * 4),0xffffffff,0);
            if (cVar2 == '\0') {
              uVar6 = *(undefined4 *)(local_8c + 0x20);
              puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x593,
                           "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                           ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],
                           (int)*(undefined8 *)(puVar5 + 4),
                           (int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)(local_2c - local_30 >> 2));
        }
        cVar2 = FUN_1049ec60();
        if (cVar2 == '\0') {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x5a1,
                       "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if (local_ac != (undefined4 *)0x0) {
          (**(code **)*local_ac)(1);
        }
        if (local_30 != 0) {
          FUN_10c3d5d0(local_30);
        }
      }
      iVar9 = local_88;
      iVar15 = local_8c;
      piVar11 = *(int **)(local_8c + 0x44);
      if (*(int *)(local_8c + 0x40) == 0) {
        iVar9 = *(int *)(*(int *)(*(int *)(local_8c + 0x80) + 0x60) + (int)piVar11 * 4);
        if ((iVar9 == 0) || (*(char *)(iVar9 + 0x5c) == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x619,
                       "Failed to retrieve reference node forapplying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if (local_b4 == 0) {
          *(undefined4 *)(iVar9 + 0x54) = local_c0;
          *(undefined4 *)(iVar9 + 0x58) = local_a8;
          uVar6 = FUN_10497b20(iVar9,local_9c,*(undefined4 *)(local_8c + 0x7c));
          piVar8 = (int *)FUN_1049d650(uVar6);
          piVar11 = *(int **)(local_a4 + 4);
          piVar8[1] = (int)piVar11;
          *piVar8 = local_a4;
          *piVar11 = (int)piVar8;
          *(int **)(local_a4 + 4) = piVar8;
          FUN_10499470();
          FUN_10499020(local_9c,*(undefined4 *)(iVar15 + 0x7c),*(int *)(local_a4 + 4) + 8);
          piVar11 = local_a0;
          goto LAB_1049b5cc;
        }
        *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x58);
        *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x54);
        FUN_1049c6f0();
        *(undefined4 *)(local_b4 + 0x24) = *(undefined4 *)(iVar15 + 0x84);
        if (local_48 != 0) {
          FUN_10c3d5d0(local_48);
        }
        FUN_10481210();
        FUN_10481210();
        piVar7 = (int *)*piVar7;
        bVar17 = piVar7 == piVar16;
      }
      else {
        local_b8 = (int *)(*(int *)(local_8c + 0x80) + 0x60);
        local_98 = piVar11;
        if (piVar11 != (int *)0xffffffff) {
          local_14 = local_24;
          local_24[0] = 0;
          local_10 = local_14;
          if ((int)piVar11 <= *(int *)(local_8c + 0x48)) {
            do {
              iVar10 = *(int *)(*local_b8 + (int)piVar11 * 4);
              local_98 = piVar11;
              FUN_104a1b30(local_24,"%s%c%-i",*(undefined4 *)(iVar15 + 0x7c),0x3a,
                           *(undefined4 *)(iVar10 + 0x54));
              uVar6 = FUN_10497b20(iVar10,*(undefined4 *)(iVar10 + 0x60),local_10,0xffffffff);
              piVar7 = (int *)FUN_1049d650(uVar6);
              puVar5 = *(undefined4 **)(iVar9 + 0x18);
              piVar7[1] = (int)puVar5;
              *piVar7 = iVar9 + 0x14;
              *puVar5 = piVar7;
              *(int **)(iVar9 + 0x18) = piVar7;
              FUN_10499470();
              FUN_10499020(*(undefined4 *)(iVar10 + 0x60),local_10,*(int *)(iVar9 + 0x18) + 8);
              piVar3 = local_90;
              piVar7 = local_b0;
              piVar11 = (int *)((int)local_98 + 1);
            } while ((int)piVar11 <= *(int *)(iVar15 + 0x48));
            local_98 = piVar11;
            if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_10);
            }
          }
        }
        piVar11 = local_a0;
        local_90 = (int *)FUN_1049bd50(local_88,local_a0,*(undefined1 *)(local_8c + 0x3c),local_9c,
                                       local_a8,*(undefined4 *)(local_8c + 0x40),1);
        if (local_90 == (int *)0x0) {
          uVar14 = 0;
          uVar4 = local_94 - local_48 >> 2;
          local_90 = (int *)0x0;
          iVar15 = local_48;
          if (uVar4 != 0) {
            do {
              puVar5 = *(undefined4 **)(iVar15 + uVar14 * 4);
              if (puVar5 != (undefined4 *)0x0) {
                (**(code **)*puVar5)(1);
                iVar15 = local_48;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar4);
          }
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x5da,
                       "Failed to clone override sub-tree.\n  Override RT Path: %s, \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],*(undefined8 *)(puVar5 + 4));
        }
        if (*(undefined4 **)(local_88 + 0x10) == local_ac) {
          *(int **)(local_88 + 0x10) = local_90;
        }
        if (*(char *)(local_8c + 0x3c) == '\0') {
          if (local_ac != (undefined4 *)0x0) {
            FUN_10498be0();
          }
          if (local_94 - local_48 >> 2 != 0) {
            FUN_1049dbf0(&local_48);
          }
          if (piVar3 != piVar11) {
            FUN_1047b540(piVar3);
          }
        }
        if ((local_b4 != 0) && (cVar2 = FUN_10498ea0(local_9c,local_a8,local_b4), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x607,
                       "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],*(undefined8 *)(puVar5 + 4));
        }
LAB_1049b5cc:
        if (local_48 != 0) {
          FUN_10c3d5d0(local_48);
        }
        if ((piVar3 != (int *)0x0) && ((char)piVar3[2] != '\0')) {
          piVar8 = piVar3 + 1;
          *piVar8 = *piVar8 + -1;
          if (*piVar8 == 0) {
            (**(code **)*piVar3)(1);
          }
        }
        if ((piVar11 != (int *)0x0) && ((char)piVar11[2] != '\0')) {
          piVar3 = piVar11 + 1;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)*piVar11)(1);
          }
        }
        piVar7 = (int *)*piVar7;
        bVar17 = piVar7 == piVar16;
      }
    }
  }
  iVar15 = local_88;
  piVar16 = *(int **)(local_88 + 0x14);
  if (piVar16 != (int *)(local_88 + 0x14)) {
    do {
      iVar9 = piVar16[3];
      local_88 = iVar9;
      if ((char)piVar16[2] != '\0') {
        if ((iVar9 == 0) || (*(int *)(iVar9 + 0x54) == -1)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x665,
                       "Incorrect reference node info during expanding!\nTarget Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        local_b0 = (int *)piVar16[4];
        if (local_b0 == (int *)0x0) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x672,
                       "Failed to find parent node for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        FUN_1047b030();
        FUN_104977f0(local_3c,local_40,iVar9 + 0xc);
        FUN_1047b160();
        puVar12 = local_3c;
        if ((local_28 != puVar12) && (local_28 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_28);
          puVar12 = extraout_ECX;
        }
        iVar9 = FUN_1047df80(local_10,*(undefined4 *)(local_80 + 0x3c),puVar12,1);
        local_94 = iVar9;
        if (iVar9 == 0) {
LAB_1049bcb3:
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x68a,
                       "Failed to load reference sub tree:\n BTFile: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(char *)(iVar9 + 8) != '\0') {
          *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
        }
        if (iVar9 == 0) goto LAB_1049bcb3;
        FUN_1047d530(local_84);
        if ((*(char *)(iVar9 + 0x40) != '\0') && (0 < *(int *)(iVar15 + 0x24))) {
          uVar6 = FUN_1047e5a0(local_10,local_80,*(undefined4 *)(local_80 + 0x3c));
          FUN_1047f3c0(uVar6);
          iVar9 = local_94;
        }
        iVar10 = FUN_10499160(iVar9,0,piVar16 + 2);
        if (iVar10 == 0) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6a0,
                       "Failed to create sub-tree info!\n BTFile: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(int *)(local_88 + 0x38) != *(int *)(local_88 + 0x34)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6c9,
                       "Failed to find source node by RTPath,\n BTFile: %s. \n, RTPath: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x38),*(undefined4 *)(local_88 + 0x20),
                       *(undefined4 *)(iVar15 + 0x14));
        }
        if (((*(int *)(iVar9 + 0x44) == 0) ||
            (iVar13 = *(int *)(*(int *)(iVar9 + 0x44) + 0xc), iVar13 == 0)) ||
           ((*(int *)(iVar13 + 0x14) - *(int *)(iVar13 + 0x10) & 0xfffffffcU) != 4)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6b7,
                       "Target reference bt file is not a valid sub-tree, Please ensure that the BT file\'s root *MUST* contains single child.\n Target BT File: %s. \n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        uVar6 = FUN_104942f0(0);
        iVar13 = local_b0[0x12];
        if (iVar13 == 0) {
          if (local_b0[0x13] == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(local_b0[0x13] + 0x48);
          }
        }
        iVar10 = FUN_1049bd50(iVar10,iVar13,1,local_b0,*(undefined4 *)(local_88 + 0x58),uVar6,0,
                              *(undefined4 *)(local_88 + 0x54));
        if (iVar10 == 0) {
LAB_1049bbe0:
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6de,
                       "Failed to clone sub-tree for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(int *)(iVar10 + 0x4c) == 0) {
          local_a4 = 0;
        }
        else {
          local_a4 = *(int *)(*(int *)(iVar10 + 0x4c) + 0x48);
        }
        iVar13 = local_b0[0x12];
        if (iVar13 == 0) {
          if (local_b0[0x13] == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(local_b0[0x13] + 0x48);
          }
        }
        if ((local_a4 != iVar13) || (*(int *)(iVar10 + 0x48) == 0)) goto LAB_1049bbe0;
        if (*(char *)(iVar9 + 0x40) == '\0') {
LAB_1049b891:
          FUN_1049b020(local_84);
        }
        else {
          if (0 < *(int *)(iVar15 + 0x24)) {
            if ((*(char *)(iVar9 + 0x40) != '\0') && (0 < *(int *)(iVar15 + 0x24))) {
              iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x6ee,
                           "Override applying over expanded tree is not supported for the moment.\n Target Ref File: %s, \n Current Expanding Path: %s."
                           ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
            }
            goto LAB_1049b891;
          }
          FUN_10499750();
        }
        FUN_1047f370();
        if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_10);
        }
        if ((local_40 != local_54) && (local_40 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_40);
        }
      }
      piVar16 = (int *)*piVar16;
    } while (piVar16 != (int *)(iVar15 + 0x14));
  }
  FUN_1049de40();
  piVar16 = *(int **)(local_84 + 0x20);
  iVar15 = *piVar16;
  piVar7 = (int *)piVar16[1];
  *piVar7 = iVar15;
  *(int **)(iVar15 + 4) = piVar7;
  puVar5 = (undefined4 *)piVar16[2];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar7 = puVar5 + 1;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_10c3d5d0(piVar16);
LAB_1049b91a:
  FUN_11a89daa();
  return;
}



/* ===== FUN_1049c650 @ 1049c650  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1049c650(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_104a2050 @ 104a2050  size=1463 ===== */
// strings:
//   "/Scripts/AI/BehaviorTree/"
//   "BTFolder"
//   "Properties.BTFolder"
//   ".AISetting.BTFolder"
//   "PropertyCustom"

/* [RE-AUTO c0]
   strings:
     ""/Scripts/AI/BehaviorTree/""
     ""BTFolder""
     ""Properties.BTFolder""
     "".AISetting.BTFolder""
     ""PropertyCustom"" */

void __thiscall
FUN_104a2050(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  int iVar9;
  uint unaff_EDI;
  undefined4 uStack_84;
  int *piStack_80;
  char *pcStack_7c;
  undefined8 uStack_74;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 *apuStack_58 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  undefined1 auStack_38 [20];
  undefined1 *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_70;
  uStack_74 = CONCAT44(auStack_70,unaff_ESI);
  local_64 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_11dbac64;
  param_1[3] = param_1[3];
  puVar8 = param_1 + 6;
  param_1[4] = param_1[4];
  param_1[5] = param_5;
  *param_1 = &PTR_FUN_11dbc480;
  *puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = puVar8;
  param_1[9] = puVar8;
  param_1[10] = 0;
  puVar8 = param_1 + 0xc;
  *puVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = puVar8;
  param_1[0xf] = puVar8;
  param_1[0x10] = 0;
  puVar8 = param_1 + 0x12;
  *puVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  pcStack_7c = param_5;
  *(undefined1 *)puVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = puVar8;
  param_1[0x15] = puVar8;
  param_1[0x16] = 0;
  piStack_80 = (int *)0x104a20f8;
  FUN_1046c910();
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = param_2;
  param_1[0x4d] = param_4;
  param_1[0x4e] = param_3;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4f] = 0;
  piStack_80 = (int *)&DAT_11d9d32b;
  param_1[0x54] = param_1 + 0x50;
  uStack_84 = &DAT_11d9d32b;
  param_1[0x55] = param_1 + 0x50;
  FUN_100b62c0();
  param_1[0x5a] = param_1 + 0x56;
  pcVar1 = (char *)(param_1 + 0x5d);
  param_1[0x5b] = param_1 + 0x56;
  *(undefined1 *)param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 1;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  FUN_104a7df0();
  param_1[0x67] = 5;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_104a7ee0(param_1 + 0x68);
  puVar8 = param_1 + 0x73;
  param_1[0x72] = 10;
  *puVar8 = puVar8;
  param_1[0x74] = puVar8;
  puVar8 = param_1 + 0x75;
  *puVar8 = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(char *)(param_1 + 0x7a) = uStack_84._3_1_;
  *(undefined1 *)puVar8 = 0;
  param_1[0x76] = 0;
  param_1[0x77] = puVar8;
  param_1[0x78] = puVar8;
  param_1[0x79] = 0;
  puVar8 = param_1 + 0x81;
  param_1[0x7f] = param_1 + 0x7b;
  param_1[0x80] = param_1 + 0x7b;
  uStack_74 = 0;
  *(undefined1 *)param_1[0x7f] = 0;
  *puVar8 = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)puVar8 = 0;
  param_1[0x82] = 0;
  param_1[0x83] = puVar8;
  param_1[0x84] = puVar8;
  param_1[0x85] = 0;
  *(char *)(param_1 + 0x86) = uStack_84._3_1_;
  FUN_104a3850();
  if (param_1[5] != 0) {
    if (param_1[4] == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(param_1[4] + 8);
    }
    if (puVar5 == (undefined8 *)(param_1 + 2)) {
      uVar2 = *(undefined8 *)(param_1 + 2);
      iVar9 = param_1[4];
      uStack_6c._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_6c._0_4_ = (undefined4)uVar2;
    }
    else {
      uStack_6c._0_4_ = 0;
      uStack_6c._4_4_ = 0;
      iVar9 = 0;
    }
    iVar3 = *(int *)(param_1[5] + 8);
    pcStack_7c = *(char **)(iVar9 + 300);
    if (*(char *)(iVar3 + 0x50) == '\0') {
      piStack_80 = (int *)(iVar3 + 8);
      FUN_10476d20(&stack0xffffff8c,&pcStack_7c);
      if (pcStack_7c != pcVar1) {
        FUN_104761b0();
      }
    }
    else {
      piStack_80 = (int *)(iVar3 + 0x20);
      FUN_10476d20(&stack0xffffff8c,&pcStack_7c);
      if (pcStack_7c != pcVar1) {
        FUN_104761b0();
      }
    }
    puVar5 = (undefined8 *)FUN_10476d70(&uStack_84);
    *puVar5 = uStack_6c;
    *(int *)(puVar5 + 1) = iVar9;
  }
  *(bool *)(param_1 + 0x30) = param_1[0x4d] == 0;
  iVar9 = DAT_123bb90c;
  if (DAT_123bb90c == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(DAT_123bb90c + 0x10);
  }
  param_1[0x1f] = uVar7;
  if ((((param_1[0x4d] != 0) || (param_1[5] == 0)) || (iVar9 == 0)) ||
     ((piVar6 = *(int **)(iVar9 + 0x10), piVar6 == (int *)0x0 ||
      (piVar6 = (int *)(**(code **)(*piVar6 + 4))(param_1[0x4b]), piVar6 == (int *)0x0))))
  goto LAB_104a25f2;
  (**(code **)(*piVar6 + 0x14))(&piStack_80);
  FUN_104a3e50("/Scripts/AI/BehaviorTree/");
  if (piStack_80 == (int *)0x0) {
LAB_104a24c7:
    uStack_84 = (undefined1 *)((uint)uStack_84 & 0xffffff);
  }
  else {
    cVar4 = (**(code **)(*piStack_80 + 0x3c))("BTFolder",&pcStack_7c);
    piVar6 = piStack_80;
    if (cVar4 == '\0') {
      unaff_EDI = 3;
      iVar9 = FUN_100b5f70("Properties.BTFolder",(int)&uStack_84 + 3);
      cVar4 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar9 + 0x14),&uStack_84);
      piVar6 = piStack_80;
      if (cVar4 == '\0') {
        unaff_EDI = 0x1f;
        uVar7 = FUN_100b5f70("PropertyCustom",(int)&uStack_84 + 3,".AISetting.BTFolder");
        iVar9 = FUN_100f2140(&stack0xffffff8c,uVar7);
        cVar4 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar9 + 0x14),&uStack_84);
        if (cVar4 == '\0') goto LAB_104a24c7;
      }
    }
    if (pcStack_7c == (char *)0x0) goto LAB_104a24c7;
    uStack_84 = (undefined1 *)CONCAT13(1,(undefined3)uStack_84);
    if (*pcStack_7c == '\0') goto LAB_104a24c7;
  }
  if ((((unaff_EDI & 0x10) != 0) &&
      (unaff_EDI = unaff_EDI & 0xffffffef, apuStack_58[0] != &uStack_6c)) &&
     (apuStack_58[0] != (undefined8 *)0x0)) {
    FUN_10c3d5d0(apuStack_58[0]);
  }
  if ((((unaff_EDI & 8) != 0) && (unaff_EDI = unaff_EDI & 0xfffffff7, puStack_3c != auStack_50)) &&
     (puStack_3c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_3c);
  }
  if ((unaff_EDI & 4) != 0) {
    unaff_EDI = unaff_EDI & 0xfffffffb;
  }
  if ((((unaff_EDI & 2) != 0) && (puStack_24 != auStack_38)) && (puStack_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_24);
  }
  if (uStack_84._3_1_ != '\0') {
    uVar7 = FUN_100b5f70(pcStack_7c,(int)&uStack_84 + 3,&DAT_11d9dc6c);
    uVar7 = FUN_100f21e0(apuStack_58,param_1 + 0x50,uVar7);
    puVar8 = (undefined4 *)FUN_100f2140(auStack_40,uVar7);
    if (puVar8 != param_1 + 0x50) {
      FUN_100d83d0(puVar8[5],puVar8[4]);
    }
    if ((puStack_24 != auStack_38) && (puStack_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_24);
    }
    if ((puStack_3c != auStack_50) && (puStack_3c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_3c);
    }
    if ((apuStack_58[0] != &uStack_6c) && (apuStack_58[0] != (undefined8 *)0x0)) {
      FUN_10c3d5d0(apuStack_58[0]);
    }
  }
  if (piStack_80 != (int *)0x0) {
    (**(code **)(*piStack_80 + 8))();
  }
LAB_104a25f2:
  FUN_11a89daa();
  return;
}



/* ===== FUN_104a2af0 @ 104a2af0  size=1675 ===== */
// strings:
//   "BlackBoardFile"
//   "Properties."
//   ".AISetting."
//   "PropertyCustom"
//   ".AISetting"
//   "Health"
//   "RageDec"
//   "TailFire"
//   "mh_sharemem_addrinfo"

/* [RE-AUTO c0]
   strings:
     ""BlackBoardFile""
     ""Properties.""
     "".AISetting.""
     ""PropertyCustom""
     "".AISetting""
     ""Health""
     ""RageDec""
     ""TailFire""
     ""mh_sharemem_addrinfo"" */

void __fastcall FUN_104a2af0(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int **ppiVar7;
  int ***pppiVar8;
  char cVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 auStack_134 [36];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  float fStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  undefined1 auStack_bc [12];
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  undefined1 auStack_8c [20];
  undefined1 *puStack_78;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined1 auStack_5c [20];
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_134;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar16 = false;
  local_f4 = (byte *)0x0;
  local_ec = param_1;
  if (((param_1[0x4d] != 0) || (param_1[5] == 0)) ||
     (pbVar10 = (byte *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]),
     local_f4 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_104a3164;
  iVar11 = (**(code **)(*(int *)pbVar10 + 0x24))();
  param_1[0x3f] = iVar11;
  (**(code **)(*(int *)pbVar10 + 0x14))(&piStack_e8);
  ppppiStack_b0 = &pppiStack_c0;
  ppppiStack_ac = ppppiStack_b0;
  FUN_100b62c0();
  piVar6 = piStack_e8;
  piStack_e4 = (int *)0x0;
  if (piStack_e8 == (int *)0x0) {
LAB_104a2c67:
    uStack_fc = uStack_fc & 0xffffff;
  }
  else {
    pppiStack_c4 = &ppiStack_d4;
    bVar3 = false;
    bVar2 = false;
    bVar16 = false;
    pppiStack_c0 = pppiStack_c4;
    FUN_100b62c0("Properties.","");
    iVar11 = FUN_100f21e0();
    cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
    piVar6 = piStack_e8;
    if (cVar9 == '\0') {
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar16 = true;
      uVar12 = FUN_100b5f70("PropertyCustom",(int)&uStack_fc + 3,".AISetting.",auStack_bc);
      FUN_100f2140(auStack_94,uVar12);
      iVar11 = FUN_100f21e0();
      cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
      if (cVar9 == '\0') goto LAB_104a2c67;
    }
    bVar5 = true;
    bVar4 = true;
    uStack_fc = CONCAT13(1,(undefined3)uStack_fc);
    if (piStack_e4 == (int *)0x0) goto LAB_104a2c67;
  }
  if (((bVar16) && (puStack_48 != auStack_5c)) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  if (((bVar2) && (puStack_78 != auStack_8c)) && (puStack_78 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_78);
  }
  if (((bVar3) && (puStack_60 != auStack_74)) && (puStack_60 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_60);
  }
  if (((bVar4) && (puStack_90 != auStack_a4)) && (puStack_90 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_90);
  }
  if (((bVar5) && (pppiStack_c0 != &ppiStack_d4)) && (pppiStack_c0 != (int ***)0x0)) {
    FUN_10c3d5d0(pppiStack_c0);
  }
  if (uStack_fc._3_1_ != '\0') {
    (**(code **)(*param_1 + 0x18))(piStack_e4);
    piStack_f8 = (int *)(**(code **)(*piStack_f8 + 4))();
    if (0 < (int)(param_1[0x21] - param_1[0x20] & 0xfffffff8U)) {
      puVar13 = (undefined4 *)FUN_10478dc0(&piStack_f8);
      *puVar13 = param_1 + 0x18;
    }
    piVar6 = local_ec;
    pppiStack_c8 = &ppiStack_d8;
    pcVar18 = "";
    local_f4 = (byte *)0x0;
    pcVar17 = "PropertyCustom";
    pppiStack_c4 = pppiStack_c8;
    FUN_100b62c0();
    FUN_100f2140(&ppppiStack_b0,&fStack_e0,".AISetting",pcVar17,pcVar18);
    cVar9 = (**(code **)(*piVar6 + 0x30))();
    if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_90);
    }
    if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
      FUN_10c3d5d0(pppiStack_c0);
    }
    if (cVar9 != '\0') {
      ppiStack_dc = (int **)0x0;
      cVar9 = (**(code **)(*piStack_f0 + 0x38))("Health",&ppiStack_dc);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e4)) {
        ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffffff00);
        pppiStack_cc = &ppiStack_dc;
        pppiStack_c8 = pppiStack_cc;
        FUN_104a1b30(pppiStack_cc,&DAT_11da0cf4,(double)(float)piStack_e4);
        pppiVar8 = pppiStack_c8;
        piStack_100 = (int *)0xffffffff;
        FUN_113168d0("Health",&piStack_100);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_100,pppiVar8);
        }
        if ((pppiStack_c8 != &ppiStack_dc) && (pppiStack_c8 != (int ***)0x0)) {
          FUN_10c3d5d0();
        }
      }
      fStack_e0 = 0.0;
      cVar9 = (**(code **)(*piStack_f8 + 0x38))(&DAT_11dbc56c,&fStack_e0);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e8)) {
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_d4 = &piStack_e4;
        ppiStack_d0 = ppiStack_d4;
        FUN_104a1b30(ppiStack_d4,&DAT_11da0cf4,(double)(float)piStack_e8);
        ppiVar7 = ppiStack_d0;
        piStack_108 = (int *)0xffffffff;
        FUN_113168d0(&DAT_11dbc56c,&piStack_108);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_108,ppiVar7);
        }
        if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_fc = 0;
      cVar9 = (**(code **)(*piStack_100 + 0x38))("RageDec",&uStack_fc);
      if ((cVar9 != '\0') && (0.0 < fStack_104)) {
        local_ec = (int *)((uint)local_ec & 0xffffff00);
        ppiStack_dc = &local_ec;
        ppiStack_d8 = ppiStack_dc;
        FUN_104a1b30(ppiStack_dc,&DAT_11da0cf4,(double)fStack_104);
        ppiVar7 = ppiStack_d8;
        uStack_110 = 0xffffffff;
        uVar12 = FUN_113168d0("RageDec",&uStack_110);
        cVar9 = FUN_1046dc90(uVar12);
        if (cVar9 != '\0') {
          FUN_1046d130(uStack_110,ppiVar7);
        }
        if ((ppiStack_d8 != &local_ec) && (ppiStack_d8 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_10c = 0;
      cVar9 = (**(code **)(*piStack_108 + 0x3c))("TailFire",&uStack_10c);
      if (cVar9 != '\0') {
        pbVar15 = &DAT_11d9d32b;
        pbVar10 = local_f4;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_104a30a0:
            uVar14 = -(uint)bVar16 | 1;
            goto LAB_104a30a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_104a30a0;
          pbVar10 = pbVar10 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        uVar14 = 0;
LAB_104a30a5:
        if (uVar14 != 0) {
          pppiStack_c4 = &ppiStack_d4;
          ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
          pppiStack_c0 = pppiStack_c4;
          FUN_104a1b30();
          pppiVar8 = pppiStack_c0;
          piStack_f8 = (int *)0xffffffff;
          FUN_113168d0("TailFire",&piStack_f8);
          cVar9 = FUN_1046dc90();
          if (cVar9 != '\0') {
            FUN_1046d130(piStack_f8,pppiVar8);
          }
          if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_c0);
          }
        }
      }
    }
    if (piStack_f0 != (int *)0x0) {
      (**(code **)(*piStack_f0 + 8))();
    }
  }
  if ((puStack_a8 != auStack_bc) && (puStack_a8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_a8);
  }
  if (piStack_e8 != (int *)0x0) {
    (**(code **)(*piStack_e8 + 8))();
  }
LAB_104a3164:
  FUN_11a89daa();
  return;
}



/* ===== FUN_104a6720 @ 104a6720  size=497 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_104a6720(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined1 local_68 [4];
  char *local_64;
  int local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  int local_44;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  char local_24 [16];
  char *local_14;
  char *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_6c = param_5;
  local_14 = local_24;
  local_60 = param_6;
  pcVar6 = *(char **)(param_3 + 0x9c);
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  local_10 = local_14;
  FUN_100b62c0(*(char **)(param_3 + 0x9c),pcVar5);
  iVar4 = FUN_1048a080(local_24);
  if ((iVar4 == param_6) && (puVar3 = *(undefined4 **)(param_3 + 0x84), puVar3 != (undefined4 *)0x0)
     ) {
    puVar3[1] = puVar3[1] + 1;
    local_78 = local_88;
    param_7 = *(int *)(param_4 + 0x20) + param_7;
    local_74 = local_78;
    FUN_100b62c0(local_10,local_14);
    local_30 = local_40;
    local_2c = local_30;
    FUN_100b62c0(local_74,local_78);
    local_28 = param_7;
    if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_74);
    }
    local_4c = local_5c;
    local_48 = local_4c;
    FUN_100b62c0(local_2c,local_30);
    local_44 = local_28;
    FUN_10487da0(local_68,local_5c);
    if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_48);
    }
    if ((local_2c != local_40) && (local_2c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_2c);
    }
    local_64 = local_10;
    pcVar6 = local_10;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar4 = (int)pcVar6 - (int)(local_10 + 1);
    local_60 = iVar4;
    FUN_100eaf50(&local_60,4);
    if (iVar4 != 0) {
      FUN_100eaf50(local_64,iVar4);
    }
    iVar4 = *(int *)(param_4 + 0x20);
    local_64 = (char *)0x0;
    FUN_100eaf50(&local_64,4);
    FUN_104ba190(param_4,local_6c);
    if (iVar4 + 4U <= *(uint *)(param_4 + 0x18)) {
      *(int *)(*(int *)(param_4 + 0xc) + iVar4) = *(int *)(param_4 + 0x20) - iVar4;
    }
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    else if ((int)puVar3[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if ((local_10 != local_24) && (local_10 != (char *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_104a69f0 @ 104a69f0  size=834 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

uint __fastcall FUN_104a69f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint in_EAX;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  int iStack_20;
  int local_1c;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = *(uint *)(param_1 + 0x200);
    if (((in_EAX != *(uint *)(param_1 + 0x1fc)) &&
        (uVar2 = *(uint *)(DAT_123bb90c + 0x28), in_EAX = FUN_1048a120(param_1 + 0x1ec),
        in_EAX != uVar2)) && (iVar8 = *(int *)(in_EAX + 0x28), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar8 + 0x80);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 300);
      local_8 = iVar8;
      FUN_1046f170(iVar8 + 0x84);
      FUN_104a2a90();
      iVar10 = *(int *)(iVar8 + 0x10);
      while (local_10 = iVar10, iVar10 != iVar8 + 8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        uVar9 = extraout_ECX;
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          iVar10 = local_1c;
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
          FUN_11316810(*(int *)(local_8 + 0x60) + 0x10);
          FUN_113168d0(*(undefined4 *)(iVar10 + 0x9c),&local_c);
          iVar6 = FUN_113182e0();
          uVar9 = extraout_ECX_00;
          if (iVar6 == 0) {
            *(ulonglong *)(param_1 + 0x118) = CONCAT44(iStack_20,local_24);
            *(int *)(param_1 + 0x120) = iVar10;
          }
        }
        FUN_104a7460(local_18,uVar9);
        iVar10 = local_10;
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b990(*(undefined4 *)(param_1 + 0x34));
        *(int *)(param_1 + 0x38) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x3c) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      iVar8 = local_8 + 0x20;
      iVar10 = *(int *)(local_8 + 0x28);
      while (iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar6 = *(int *)(iVar10 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar10 = iVar6;
              iVar6 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar6) {
            iVar10 = iVar6;
          }
        }
        else {
          for (iVar7 = *(int *)(iVar6 + 8); iVar10 = iVar6, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8))
          {
            iVar6 = iVar7;
          }
        }
      }
      iVar8 = local_8 + 0x44;
      iVar10 = *(int *)(local_8 + 0x4c);
      iVar6 = local_8;
      while (local_8 = iVar6, iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a86b0(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar7 = *(int *)(iVar10 + 0xc);
        iVar6 = local_8;
        if (iVar7 == 0) {
          iVar7 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar10 = iVar7;
              iVar7 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar7) {
            iVar10 = iVar7;
          }
        }
        else {
          for (iVar4 = *(int *)(iVar7 + 8); iVar10 = iVar7, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8))
          {
            iVar7 = iVar4;
          }
        }
      }
      local_24 = 0;
      iStack_20 = 0;
      local_1c = 0;
      FUN_1025a680(*(undefined4 *)(iVar6 + 0x7c),&local_24);
      iVar8 = 0;
      local_10 = 0;
      if (0 < *(int *)(iVar6 + 0x7c)) {
        local_c = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar6 + 0x38) + local_10 * 4);
          if (piVar3 != (int *)0x0) {
            piVar3[1] = piVar3[1] + 1;
            iVar8 = *(int *)(param_1 + 0x10c);
            puVar5 = (undefined8 *)FUN_104a6d40(&local_24,piVar3);
            *(undefined8 *)(iVar8 + local_c) = *puVar5;
            *(undefined4 *)(iVar8 + 8 + local_c) = *(undefined4 *)(puVar5 + 1);
            piVar1 = piVar3 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
            else if (piVar3[1] < 0) {
              _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",
                       0x18c);
            }
          }
          local_c = local_c + 0xc;
          iVar8 = local_10 + 1;
          iVar6 = local_8;
          local_10 = iVar8;
        } while (iVar8 < *(int *)(local_8 + 0x7c));
      }
      *(undefined1 *)(param_1 + 0x171) = 1;
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* ===== FUN_104b4e40 @ 104b4e40  size=138 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_104b4e40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x84);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *(undefined4 **)(param_1 + 0x84) = param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_104b51a0 @ 104b51a0  size=236 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_104b51a0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_11dbc7a8;
  param_1[0x31] = 0;
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 0x20) = 0;
  }
  if (param_1[0x28] != 0) {
    FUN_1047c530(param_1);
  }
  param_1[0x29] = 0;
  param_1[0x31] = 0;
  FUN_10c3d5d0(param_1[0x2a]);
  param_1[0x2a] = 0;
  puVar2 = (undefined4 *)param_1[0x28];
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)param_1[0x27];
  if ((puVar2 != param_1 + 0x22) && (puVar2 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar2);
  }
  puVar2 = (undefined4 *)param_1[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      FUN_104b5110();
      *param_1 = &PTR_FUN_11dbac64;
      return;
    }
  }
  FUN_104b5110();
  *param_1 = &PTR_FUN_11dbac64;
  return;
}



/* ===== FUN_104b6d90 @ 104b6d90  size=130 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 * __thiscall FUN_104b6d90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_11dbc868;
  param_1[2] = 0;
  param_1[3] = param_2;
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  param_1[5] = 0;
  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x30);
  }
  *(undefined4 *)(param_1[3] + 0x1c) = param_3;
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_104b6eb0 @ 104b6eb0  size=107 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_104b6eb0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[5];
  *param_1 = &PTR_FUN_11dbc868;
  if (iVar2 != 0) {
    FUN_104b3f20();
    FUN_10c3d5d0(iVar2);
    param_1[5] = 0;
  }
  puVar3 = (undefined4 *)param_1[3];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    else if ((int)puVar3[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = &PTR_FUN_11dbac64;
      return;
    }
  }
  *param_1 = &PTR_FUN_11dbac64;
  return;
}



/* ===== FUN_104b7090 @ 104b7090  size=89 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_104b7090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0x38))(&local_8);
  FUN_10475890(param_2,param_3);
  if (local_8 != (int *)0x0) {
    piVar1 = local_8 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_8)(1);
    }
    else if (local_8[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_104b9210 @ 104b9210  size=858 ===== */
// strings:
//   "BlackBoard"
//   "Parent"
//   "FileName"
//   "Parents"
//   "KeyVars"

/* [RE-AUTO c0]
   strings:
     ""BlackBoard""
     ""Parent""
     ""FileName""
     ""Parents""
     ""KeyVars"" */

void __thiscall FUN_104b9210(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int ***pppiVar6;
  char *pcVar7;
  char *pcVar8;
  int *unaff_ESI;
  int *unaff_EDI;
  int iVar9;
  char *pcVar10;
  int ***pppiStack_84;
  int *piStack_80;
  int *piStack_7c;
  int iStack_6c;
  int **local_68;
  undefined1 *local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [8];
  undefined4 ***pppuStack_44;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  undefined1 *puStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_6c;
  piStack_7c = (int *)0x0;
  piStack_80 = param_2;
  pppiStack_84 = &local_68;
  local_64 = param_1;
  (**(code **)(**(int **)(DAT_123bb90c + 8) + 0xc))();
  if (unaff_ESI != (int *)0x0) {
    cVar1 = (**(code **)(*unaff_ESI + 0x10))("BlackBoard");
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(*unaff_ESI + 0x6c))("Parent");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        uVar3 = (**(code **)(*piVar2 + 0x5c))("FileName");
        unaff_ESI = *(int **)(*(int *)(param_1 + 4) + 0x14);
        pppiStack_58 = &local_68;
        pcVar10 = *(char **)(DAT_123bb90c + 0x18);
        piStack_80 = (int *)(pcVar10 + 1);
        pcVar7 = pcVar10;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pppiStack_54 = pppiStack_58;
        FUN_100b62c0(pcVar10,pcVar10 + ((int)pcVar7 - (int)piStack_80));
        uVar3 = FUN_100f2140(auStack_40,&stack0xffffff90,piStack_7c,uVar3);
        FUN_100f2140(&pppiStack_58,uVar3);
        if ((puStack_2c != auStack_40) && (puStack_2c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_2c);
        }
        if ((puStack_5c != &stack0xffffff90) && (puStack_5c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_5c);
        }
        FUN_104b9210(pppuStack_44,param_3);
        if ((puStack_38 != auStack_4c) && (puStack_38 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_38);
        }
      }
      piVar4 = (int *)(**(code **)(*unaff_EDI + 0x6c))("Parents");
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      if (piVar4 != (int *)0x0) {
        iStack_6c = (**(code **)(*piVar4 + 100))();
        iVar9 = 0;
        if (0 < iStack_6c) {
          do {
            piVar2 = (int *)(**(code **)(*piVar4 + 0x68))(iVar9);
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 4))();
            }
            pcVar10 = "Parent";
            cVar1 = (**(code **)(*piVar2 + 0x10))("Parent");
            iVar5 = *piVar2;
            if (cVar1 != '\0') {
              (**(code **)(iVar5 + 0x5c))("FileName");
              piStack_7c = pppiStack_84[1][5];
              local_64 = &stack0xffffff8c;
              pcVar7 = *(char **)(DAT_123bb90c + 0x18);
              piStack_80 = (int *)(pcVar7 + 1);
              pcVar8 = pcVar7;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              puStack_60 = local_64;
              FUN_100b62c0(pcVar7,pcVar7 + ((int)pcVar8 - (int)piStack_80));
              uVar3 = FUN_100f2140(auStack_4c,&piStack_7c,pppiStack_84,pcVar10);
              FUN_100f2140(&local_64,uVar3);
              if ((puStack_38 != auStack_4c) && (puStack_38 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_38);
              }
              if ((local_68 != &piStack_7c) && (local_68 != (int **)0x0)) {
                FUN_10c3d5d0(local_68);
              }
              FUN_104b9210(uStack_50,param_3);
              if (((int ****)pppuStack_44 != &pppiStack_58) &&
                 ((int ****)pppuStack_44 != (int ****)0x0)) {
                FUN_10c3d5d0(pppuStack_44);
              }
              iVar5 = *piVar2;
            }
            (**(code **)(iVar5 + 8))();
            iVar9 = iVar9 + 1;
          } while (iVar9 < iStack_6c);
        }
      }
      pppiVar6 = (int ***)(**(code **)(*piStack_7c + 0x6c))(&DAT_11dbabac);
      if (pppiVar6 != (int ***)0x0) {
        (*(code *)(*pppiVar6)[1])();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      pppiStack_84 = pppiVar6;
      if (pppiVar6 != (int ***)0x0) {
        FUN_104b9570(&pppiStack_84,param_3);
      }
      pppiVar6 = pppiStack_84;
      piVar2 = (int *)(**(code **)(*piStack_80 + 0x6c))("KeyVars");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      if (pppiVar6 != (int ***)0x0) {
        (*(code *)(*pppiVar6)[2])();
      }
      if (piVar2 != (int *)0x0) {
        if ((char)param_3 == '\0') {
          FUN_104b98b0(&stack0xffffff88);
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
        }
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))();
    }
  }
  piStack_7c = (int *)0x104b9564;
  FUN_11a89daa();
  return;
}



/* ===== FUN_104b9f60 @ 104b9f60  size=139 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_104b9f60(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_11dbc9c4;
  if (param_1[7] == 0) {
    FUN_104bace0();
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 4))(1);
      param_1[2] = 0;
    }
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[3])(1);
      param_1[3] = 0;
    }
    param_1[0xd] = 0;
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar2 = param_1[8];
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 != 0) && (*(int *)(iVar2 + 4) < 0)) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *param_1 = &PTR_FUN_11dbac64;
  return;
}



/* ===== FUN_104bad50 @ 104bad50  size=406 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_104bad50(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  int local_c;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    piVar3 = (int *)(iVar4 + 4);
    *piVar3 = *piVar3 + -1;
    if ((*piVar3 != 0) && (*(int *)(iVar4 + 4) < 0)) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x3c) = param_2 + 0x28;
  iVar6 = 0;
  *(int *)(param_1 + 0x28) = param_3 + 0x14;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0xec);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(int *)(param_3 + 0x6c) = iVar4;
  if (0 < iVar4) {
    iVar5 = 0;
    local_c = iVar4;
    do {
      if (-1 < iVar6) {
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x1c) == 0) goto LAB_104bae5f;
          iVar2 = *(int *)(param_1 + 0x1c);
          if (iVar6 < *(int *)(iVar2 + 0x20)) {
            if (*(int *)(iVar2 + 0x10) == 0 && *(int *)(iVar2 + 0x14) == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(iVar2 + 0x10) + iVar2 + 0x10;
            }
            piVar3 = (int *)(iVar5 + iVar2);
            if (*piVar3 != 0 || piVar3[1] != 0) {
              iVar2 = *piVar3 + (int)piVar3;
              goto LAB_104bae27;
            }
          }
LAB_104bae25:
          iVar2 = 0;
        }
        else {
          if (*(int *)(iVar2 + 0x20) <= iVar6) goto LAB_104bae25;
          iVar2 = *(int *)(*(int *)(iVar2 + 8) + iVar6 * 4);
        }
LAB_104bae27:
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x28);
          local_10 = 0;
          puVar1 = *(undefined4 **)(iVar2 + 0x50);
          if (puVar1 == *(undefined4 **)(iVar2 + 0x54)) {
            FUN_104bb2c0(puVar1,&local_10);
            iVar4 = local_c;
          }
          else {
            *puVar1 = 0;
            *(int *)(iVar2 + 0x50) = *(int *)(iVar2 + 0x50) + 4;
          }
        }
      }
LAB_104bae5f:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    if (0 < *(int *)(iVar4 + 0x20)) {
      if (*(int *)(iVar4 + 0x10) == 0 && *(int *)(iVar4 + 0x14) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(iVar4 + 0x10) + iVar4 + 0x10);
      }
      if (*piVar3 != 0 || piVar3[1] != 0) {
        *(int *)(param_1 + 0x14) = *piVar3 + (int)piVar3;
        return;
      }
    }
  }
  else if (0 < *(int *)(iVar4 + 0x20)) {
    *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)(iVar4 + 8);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* ===== FUN_104bb120 @ 104bb120  size=68 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_104bb120(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 != 0) && (*(int *)(iVar2 + 4) < 0)) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *param_1 = param_2;
  return param_1;
}



/* ===== FUN_104c3ac0 @ 104c3ac0  size=70 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_104c3ac0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(char *)(param_1 + 0x10) != '\0') && ((undefined4 *)param_1[0x11] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[0x11])(1);
    }
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[2] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_104c4860 @ 104c4860  size=411 ===== */
// calls: sscanf_s, _wassert
// strings:
//   "%f,%f,%f,%f"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: sscanf_s, _wassert
   strings:
     ""%f,%f,%f,%f""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

uint __thiscall FUN_104c4860(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  char *_Src;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  if ((uVar1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_104cd660(param_2);
    uVar1 = 0;
    if ((iVar2 != 0) &&
       (_Src = (char *)(*(int *)(iVar2 + 0x18) + 8), uVar1 = 0, _Src != (char *)0x0)) {
      uVar1 = sscanf_s(_Src,"%f,%f,%f,%f",&fStack_28,&fStack_1c,&fStack_20,&fStack_24);
      if (uVar1 == 4) {
        if ((((DAT_11de98c4 < (float)(double)((ulonglong)(double)fStack_28 & DAT_11de9c70)) ||
             (DAT_11de98c4 < (float)(double)((ulonglong)(double)fStack_1c & DAT_11de9c70))) ||
            (DAT_11de98c4 < (float)(double)((ulonglong)(double)fStack_20 & DAT_11de9c70))) ||
           (DAT_11de98c4 < (float)(double)((ulonglong)(double)fStack_24 & DAT_11de9c70))) {
          fStack_18 = fStack_1c;
          fStack_10 = fStack_24;
          param_3[3] = (uint)fStack_28;
          fStack_14 = fStack_20;
          if (((((uint)fStack_1c & 0x7f800000) == 0x7f800000) ||
              (((uint)fStack_20 & 0x7f800000) == 0x7f800000)) ||
             (((uint)fStack_24 & 0x7f800000) == 0x7f800000)) {
            _wassert(L"this->IsValid()",
                     L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95
                    );
          }
          *(ulonglong *)param_3 = CONCAT44(fStack_14,fStack_18);
          param_3[2] = (uint)fStack_24;
          uVar1 = *param_3 & 0x7f800000;
          if (((uVar1 != 0x7f800000) && (uVar1 = param_3[1] & 0x7f800000, uVar1 != 0x7f800000)) &&
             (uVar1 = (uint)fStack_24 & 0x7f800000, uVar1 != 0x7f800000)) {
            return CONCAT31((int3)((param_3[3] & 0x7f800000) >> 8),
                            (param_3[3] & 0x7f800000) != 0x7f800000);
          }
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}



/* ===== FUN_104f7900 @ 104f7900  size=2344 ===== */
// calls: CActivityMgr::GetActivityState, atoi
// strings:
//   "mh.view.WildHunt.Data.WildHunt_ActivityData"
//   "ActivityId"
//   "SignUpBeginTime"
//   "SignUpEndTime"
//   "HuntBeginTime"
//   "HuntEndTime"
//   "AwardBeginTime"
//   "AwardEndTime"
//   "HuntSoul"
//   "HuntSoul_Level"
//   "HuntSoul_LevelLimit"
//   "HuntSoul_Task"
//   "HuntSoul_Camp"
//   "HasSignedGuild"
//   "IsGuildAwardFetched"
//   "IsCampAwardFetched"
//   "PersonAwardDatas"
//   "mh.view.WildHunt.Data.WildHunt_AwardData"
//   "NeedSoul"
//   "ItemId"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""mh.view.WildHunt.Data.WildHunt_ActivityData""
     ""ActivityId""
     ""SignUpBeginTime""
     ""SignUpEndTime""
     ""HuntBeginTime""
     ""HuntEndTime""
     ""AwardBeginTime""
     ""AwardEndTime""
     ""HuntSoul""
     ""HuntSoul_Level"" */

void FUN_104f7900(void)

{
  int *****pppppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined1 uVar4;
  int iVar5;
  int *****pppppiVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  int iVar15;
  int *piVar16;
  undefined8 uVar17;
  int ****in_stack_00000018;
  char cVar18;
  int ****ppppiStack_d4;
  int ****ppppiStack_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  int *piStack_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int ****ppppiStack_b4;
  int ***pppiStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int *piStack_a4;
  undefined4 uStack_94;
  int *piStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  int *piStack_84;
  int ****ppppiStack_7c;
  int ***pppiStack_78;
  int ***local_74;
  int ****ppppiStack_70;
  int ***pppiStack_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  undefined4 uStack_58;
  int ***pppiStack_50;
  char *pcStack_4c;
  int ****ppppiStack_48;
  int ***pppiStack_44;
  undefined4 uStack_40;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_94;
  piStack_a4 = (int *)0x0;
  iStack_a8 = 0;
  piStack_ac = (int *)0x11dbe200;
  pppiStack_b0 = (int ***)in_stack_00000018;
  local_74 = (int ***)in_stack_00000018;
  ppppiStack_b4 = (int ****)0x104f793a;
  FUN_11a98de0();
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) {
    ppppiStack_b4 = (int ****)0x104f796c;
    iVar5 = (**(code **)(*piVar9 + 0xb4))();
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x260fc) != 0)) {
      ppppiStack_b4 = (int ****)0x104f7989;
      ppppiStack_b4 = (int ****)FUN_104f9760();
      ppppiStack_b8 = (int ****)0x104f7991;
      local_74 = (int ***)CActivityMgr__GetActivityState();
      if ((int ****)local_74 != (int ****)0x0) {
        ppppiStack_b4 = (int ****)0x104f79a4;
        pppppiVar6 = (int *****)FUN_104f9820();
        if (pppppiVar6 != (int *****)0x0) {
          ppppiStack_b4 = (int ****)0x40;
          ppppiStack_bc = (int ****)0x104f79b8;
          ppppiStack_b8 = (int ****)pppppiVar6;
          iVar5 = FUN_1162bb70();
          if (iVar5 != 0) {
            ppppiStack_b4 = (int ****)0x104f79cc;
            FUN_111f8d20();
            pppiStack_6c = *(int ****)(iVar5 + 0xb);
            pppppiVar6 = *(int ******)(iVar5 + 3);
            piVar9 = *(int **)(iVar5 + 7);
            uStack_94 = *(undefined4 *)(iVar5 + 0xf);
            pppppiVar1 = *(int ******)(iVar5 + 0x113);
            ppppiStack_70 = *(int *****)(iVar5 + 0x117);
            ppppiStack_b4 = (int ****)*local_74;
            ppppiStack_b8 = (int ****)0x11dbe3f4;
            ppppiStack_bc = (int ****)0x104f7a0e;
            FUN_104d1440();
            piVar16 = piStack_84;
            ppppiStack_c0 = (int ****)0x11dbe46c;
            piStack_c4 = (int *)0x104f7a21;
            ppppiStack_bc = (int ****)pppppiVar6;
            FUN_104d1550();
            ppppiStack_c8 = (int ****)0x11dbe45c;
            ppppiStack_cc = (int ****)0x104f7a30;
            piStack_c4 = piVar9;
            FUN_104d1550();
            ppppiStack_d0 = (int ****)0x11dbe44c;
            ppppiStack_d4 = (int ****)0x104f7a42;
            ppppiStack_cc = (int ****)pppppiVar1;
            FUN_104d1550();
            ppppiStack_d4 = ppppiStack_70;
            FUN_104d1550();
            FUN_104d1550();
            FUN_104d1550("AwardEndTime");
            ppppiStack_b4 = (int ****)0x104f7a80;
            iVar7 = FUN_107cb5c0();
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2acc) != 0)) {
              ppppiStack_b4 = (int ****)0x104f7aa5;
              ppppiStack_b4 = (int ****)FUN_1025b060();
              ppppiStack_b8 = (int ****)&DAT_11dbe488;
              ppppiStack_bc = (int ****)0x104f7ab4;
              FUN_104d1550();
              ppppiStack_b4 = (int ****)0x104f7ac6;
              ppppiStack_b4 = (int ****)FUN_1025b060();
              ppppiStack_b8 = (int ****)0x11dbe47c;
              ppppiStack_bc = (int ****)0x104f7ad5;
              FUN_104d1550();
              ppppiStack_b4 = (int ****)0x104f7ae7;
              ppppiStack_b4 = (int ****)FUN_1025b060();
              ppppiStack_b8 = (int ****)0x11dbe4e4;
              ppppiStack_bc = (int ****)0x104f7af6;
              FUN_104d1550();
              ppppiStack_bc = (int ****)0x104f7afb;
              iVar7 = FUN_117414c0();
              ppppiStack_bc = *(int *****)(iVar7 + 0x40);
              ppppiStack_c0 = (int ****)0x11dbe4d0;
              piStack_c4 = (int *)0x104f7b0c;
              FUN_104d1550();
              ppppiStack_b4 = (int ****)0x104f7b1e;
              ppppiStack_b4 = (int ****)FUN_1025b060();
              ppppiStack_b8 = (int ****)0x11dbe4c0;
              ppppiStack_bc = (int ****)0x104f7b2d;
              FUN_104d1550();
              ppppiStack_b4 = (int ****)0x104f7b3f;
              ppppiStack_b4 = (int ****)FUN_1025b060();
              ppppiStack_b8 = (int ****)0x11dbe4b0;
              ppppiStack_bc = (int ****)0x104f7b4e;
              FUN_104d1550();
              ppppiStack_b4 = (int ****)0x104f7b60;
              uVar17 = FUN_104fa060();
              uVar8 = (uint)uVar17 | (uint)((ulonglong)uVar17 >> 0x20);
              if (uVar8 == 0) {
                ppppiStack_b4 = (int ****)0x0;
              }
              else {
                ppppiStack_b4 = (int ****)CONCAT31((int3)(uVar8 >> 8),1);
              }
              ppppiStack_b8 = (int ****)0x11dbe530;
              ppppiStack_bc = (int ****)0x104f7b79;
              FUN_104d15e0();
              ppppiStack_b4 = (int ****)&DAT_00000006;
              ppppiStack_b8 = (int ****)0x104f7b8a;
              piVar9 = (int *)FUN_11513880();
              if (piVar9 != (int *)0x0) {
                ppppiStack_b8 = (int ****)0x104f7b97;
                uVar4 = (**(code **)(*piVar9 + 0x18))();
                piStack_a4 = (int *)CONCAT31(piStack_a4._1_3_,uVar4);
              }
              ppppiStack_b8 = (int ****)piStack_a4;
              ppppiStack_bc = (int ****)0x11dbe51c;
              ppppiStack_c0 = (int ****)0x104f7bad;
              FUN_104d15e0();
              piStack_a4 = (int *)((uint)piStack_a4 & 0xffffff00);
              ppppiStack_b8 = (int ****)&DAT_00000007;
              ppppiStack_bc = (int ****)0x104f7bbe;
              piVar9 = (int *)FUN_11513880();
              if (piVar9 != (int *)0x0) {
                ppppiStack_bc = (int ****)0x104f7bcb;
                uVar4 = (**(code **)(*piVar9 + 0x18))();
                iStack_a8 = CONCAT31(iStack_a8._1_3_,uVar4);
              }
              ppppiStack_bc = (int ****)iStack_a8;
              ppppiStack_c0 = (int ****)0x11dbe508;
              piStack_c4 = (int *)0x104f7be1;
              FUN_104d15e0();
              ppppiStack_70 = (int ****)0x0;
              ppppiStack_bc = (int ****)&ppppiStack_70;
              pppiStack_6c = (int ***)0x0;
              ppppiStack_c0 = (int ****)0x104f7c00;
              FUN_11a98a70();
              ppppiStack_c0 = &local_74;
              piStack_c4 = (int *)0x11dbe4f4;
              ppppiStack_c8 = (int ****)0x104f7c11;
              FUN_104d12b0();
              iVar7 = 0;
              if (*(char *)((int)piStack_a4 + 0xad2) != '\0') {
                iVar15 = (int)piStack_a4 + 0xae5;
                do {
                  if ((*(char *)(iVar15 + -0x11) == '0') && (*(char *)(iVar15 + -2) == '\f')) {
                    ppppiStack_c0 = (int ****)0x0;
                    piStack_c4 = (int *)0x0;
                    ppppiStack_c8 = (int ****)0x11dbe1d4;
                    ppppiStack_cc = (int ****)&ppppiStack_5c;
                    ppppiStack_5c = (int ****)0x0;
                    uStack_58 = 0;
                    ppppiStack_d0 = (int ****)0x104f7c69;
                    FUN_11a98de0();
                    ppppiStack_d0 = &pppiStack_6c;
                    ppppiStack_d4 = ppppiStack_7c;
                    (**(code **)(*piStack_84 + 0x3c))();
                    FUN_104d1550();
                    FUN_104d1440();
                    FUN_104d1550("ItemCount",(int)*(short *)(iVar15 + -0xb));
                    FUN_104d1550("EntryId",*(undefined1 *)(iVar15 + -0x12));
                    iVar10 = FUN_107e6320();
                    FUN_104d15e0("IsFetched",*(short *)(iVar15 + 0x28) <= iVar10);
                    FUN_104d7c10();
                  }
                  iVar7 = iVar7 + 1;
                  iVar15 = iVar15 + 0x423;
                  piVar16 = piStack_90;
                } while (iVar7 < (int)(uint)*(byte *)((int)piStack_a4 + 0xad2));
              }
              ppppiStack_c0 = &pppiStack_44;
              pppiStack_44 = (int ***)0x0;
              uStack_40 = 0;
              piStack_c4 = (int *)0x104f7d43;
              FUN_11a98a70();
              ppppiStack_c8 = (int ****)&ppppiStack_48;
              piStack_a4 = (int *)CONCAT31(piStack_a4._1_3_,((byte)piVar16[1] & 0x8f) == 10);
              piStack_c4 = piStack_a4;
              ppppiStack_cc = (int ****)0x11dbe58c;
              ppppiStack_d0 = (int ****)piVar16[2];
              ppppiStack_d4 = (int ****)0x104f7d6a;
              (**(code **)(*(int *)*piVar16 + 0x14))();
              ppppiVar2 = ppppiStack_bc;
              ppppiStack_60 = (int ****)&ppppiStack_70;
              pppiStack_b0 = (int ***)0x0;
              piStack_ac = (int *)0x0;
              iStack_a8 = 0;
              pcVar12 = (char *)((int)ppppiStack_bc + 0x13);
              do {
                cVar18 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar18 != '\0');
              ppppiStack_d4 =
                   (int ****)
                   ((char *)((int)ppppiStack_bc + 0x13) + ((int)pcVar12 - (int)(ppppiStack_bc + 5)))
              ;
              ppppiStack_5c = ppppiStack_60;
              FUN_100b62c0();
              iVar7 = FUN_100e4b30();
              if ((ppppiStack_64 != &pppiStack_78) && ((int *****)ppppiStack_64 != (int *****)0x0))
              {
                FUN_10c3d5d0();
              }
              if ((0 < iVar7) &&
                 (ppppiStack_c0 = ppppiStack_b8, pppppiVar6 = (int *****)ppppiStack_b8,
                 piVar16 = piStack_ac, ppppiStack_b8 != ppppiStack_b4)) {
                do {
                  iStack_a8 = 0;
                  piStack_a4 = (int *)0x0;
                  ppppiStack_c0 = (int ****)pppppiVar6;
                  iVar7 = FUN_100e4b30();
                  if (iVar7 == 3) {
                    pppiStack_78 = (int ***)0x0;
                    local_74 = (int ***)0x0;
                    FUN_11a98de0(&pppiStack_78);
                    (*(code *)(*ppppiStack_70)[0xf])(ppppiStack_68,auStack_88);
                    ppppiVar3 = ppppiStack_c0;
                    ppppiStack_d4 = (int ****)atoi((char *)ppppiStack_c0[5]);
                    iVar7 = atoi((char *)ppppiVar3[0xb]);
                    iVar15 = atoi((char *)ppppiVar3[0x11]);
                    FUN_104d1550("NeedSoul",ppppiStack_d4);
                    FUN_104d1550("ItemId",iVar7);
                    FUN_104d1550("ItemCount",iVar15);
                    pppppiVar6 = (int *****)ppppiStack_c0;
                    if (((uint)local_74 >> 6 & 1) != 0) {
                      (*(code *)(*pppiStack_78)[2])();
                      pppppiVar6 = (int *****)ppppiStack_c0;
                    }
                  }
                  iVar7 = iStack_a8;
                  FUN_100e4590(piStack_a4);
                  if (iVar7 != 0) {
                    FUN_10c3d5d0();
                  }
                  ppppiStack_c0 = (int ****)(pppppiVar6 + 6);
                  pppppiVar6 = (int *****)ppppiStack_c0;
                  piVar16 = piStack_ac;
                } while (ppppiStack_c0 != ppppiStack_b4);
              }
              pcVar14 = atoi_exref;
              FUN_100e4590(ppppiStack_b4);
              if ((int *****)ppppiStack_b8 != (int *****)0x0) {
                FUN_10c3d5d0();
              }
              if (((uint)ppppiStack_5c >> 6 & 1) != 0) {
                (*(code *)(*ppppiStack_60)[2])();
              }
              pppiStack_78 = (int ***)0x0;
              local_74 = (int ***)0x0;
              FUN_11a98a70();
              ppppiStack_c0 =
                   (int ****)CONCAT31(ppppiStack_c0._1_3_,((byte)piVar16[1] & 0x8f) == 10);
              (**(code **)(*(int *)*piVar16 + 0x14))(piVar16[2]);
              ppppiStack_64 = &local_74;
              pcVar13 = (char *)((int)ppppiVar2 + 0xa6);
              ppppiStack_cc = (int ****)0x0;
              ppppiStack_c8 = (int ****)0x0;
              piStack_c4 = (int *)0x0;
              pcVar12 = pcVar13;
              do {
                cVar18 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar18 != '\0');
              ppppiStack_60 = ppppiStack_64;
              FUN_100b62c0(pcVar13,pcVar13 + ((int)pcVar12 - ((int)ppppiVar2 + 0xa7)));
              iVar7 = FUN_100e4b30(&ppppiStack_7c,&ppppiStack_d4,0x3b);
              cVar18 = 0 < iVar7;
              if (((int *****)ppppiStack_68 != &ppppiStack_7c) &&
                 ((int *****)ppppiStack_68 != (int *****)0x0)) {
                FUN_10c3d5d0(ppppiStack_68);
              }
              if ((cVar18 != '\0') &&
                 (pppppiVar6 = (int *****)ppppiStack_d4, ppppiStack_d4 != ppppiStack_d0)) {
                do {
                  piStack_c4 = (int *)0x0;
                  ppppiStack_c0 = (int ****)0x0;
                  ppppiStack_bc = (int ****)0x0;
                  iVar7 = FUN_100e4b30(pppppiVar6,&piStack_c4,0x2c);
                  if (iVar7 == 2) {
                    ppppiStack_7c = (int ****)0x0;
                    pppiStack_78 = (int ***)0x0;
                    FUN_11a98de0(&ppppiStack_7c,"mh.view.WildHunt.Data.WildHunt_AwardData",0,0);
                    (**(code **)(*piStack_a4 + 0x3c))(iVar5,auStack_8c);
                    uVar11 = (*pcVar14)(ppppiStack_64);
                    iVar7 = atoi(pcStack_4c);
                    FUN_104d1550("ItemId",uVar11);
                    FUN_104d1550("ItemCount",iVar7);
                    if (((uint)pppiStack_78 >> 6 & 1) != 0) {
                      (*(code *)(*ppppiStack_7c)[2])(&ppppiStack_7c,local_74);
                    }
                  }
                  piVar9 = piStack_c4;
                  FUN_100e4590(ppppiStack_c0,piStack_c4,0,&stack0xffffff1b);
                  if (piVar9 != (int *)0x0) {
                    FUN_10c3d5d0(piVar9);
                  }
                  pppppiVar6 = pppppiVar6 + 6;
                  pcVar14 = atoi_exref;
                } while (pppppiVar6 != (int *****)ppppiStack_d0);
              }
              ppppiVar2 = ppppiStack_d4;
              FUN_100e4590(ppppiStack_d0,ppppiStack_d4,0,&stack0xffffff1b);
              if ((int *****)ppppiVar2 != (int *****)0x0) {
                ppppiStack_b4 = ppppiVar2;
                ppppiStack_b8 = (int ****)0x104f81dd;
                FUN_10c3d5d0();
              }
              if (((uint)pcStack_4c >> 6 & 1) != 0) {
                ppppiStack_b8 = &pppiStack_50;
                ppppiStack_b4 = ppppiStack_48;
                ppppiStack_bc = (int ****)0x104f81fd;
                (*(code *)(*pppiStack_50)[2])();
              }
              if (((uint)ppppiStack_64 >> 6 & 1) != 0) {
                ppppiStack_b8 = (int ****)&ppppiStack_68;
                ppppiStack_b4 = ppppiStack_60;
                ppppiStack_bc = (int ****)0x104f821a;
                (*(code *)(*ppppiStack_68)[2])();
              }
            }
          }
        }
      }
    }
  }
  iStack_a8 = 0x104f822b;
  FUN_11a89daa();
  return;
}



/* ===== FUN_104f8c00 @ 104f8c00  size=1855 ===== */
// calls: _localtime64_s
// strings:
//   "mh.view.WildHunt.Data.WildHunt_TaskSummaryData"
//   "MaxFreeRefreshCount"
//   "FreeRefreshCount"
//   "RefreshCost"
//   "MaxCreditRefreshCount"
//   "CreditRefreshCount"
//   "SubmitTaskCount"
//   "MaxSubmitTaskCount"
//   "CanGetExtraSubmitCount"
//   "TaskDatas"
//   "mh.view.WildHunt.Data.WildHunt_TaskData"
//   "HuntSoulBase"
//   "HuntSoulScale"
//   "IsAccept"
//   "IsComplete"
//   "TaskTargets"
//   "mh.model.quest.QuestTrackVo"
//   "strTarget4"
//   "nOpType"
//   "nTargetID1"

/* WARNING: Removing unreachable block (ram,0x104f925d) */
/* [RE-AUTO c0]
   calls: _localtime64_s
   strings:
     ""mh.view.WildHunt.Data.WildHunt_TaskSummaryData""
     ""MaxFreeRefreshCount""
     ""FreeRefreshCount""
     ""RefreshCost""
     ""MaxCreditRefreshCount""
     ""CreditRefreshCount""
     ""SubmitTaskCount""
     ""MaxSubmitTaskCount""
     ""CanGetExtraSubmitCount""
     ""TaskDatas"" */

void __thiscall FUN_104f8c00(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  int in_stack_00000018;
  undefined1 *puVar12;
  uint uVar13;
  char *pcStack_dc;
  int *piVar14;
  int local_c4;
  int local_c0;
  int local_bc;
  int *piStack_b4;
  int *piStack_ac;
  int *piStack_a8;
  undefined1 auStack_98 [8];
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined8 uStack_40;
  tm tStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_c4;
  local_c4 = param_3;
  local_c0 = in_stack_00000018;
  local_bc = param_1;
  uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40);
  if (((DAT_1202e818 != 0) &&
      (uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40), *(int *)(DAT_1202e818 + 0xd0) != 0))
     && (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
        uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40), piVar9 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar9 + 0xb4))();
    uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40);
    if (((iVar5 != 0) &&
        (piStack_ac = *(int **)(iVar5 + 0x2b0c),
        uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40), piStack_ac != (int *)0x0)) &&
       (iStack_8c = *(int *)(iVar5 + 0x2ab0), uStack_40 = CONCAT44(uStack_40._4_4_,(int *)uStack_40)
       , iStack_8c != 0)) {
      pcStack_dc = "mh.view.WildHunt.Data.WildHunt_TaskSummaryData";
      FUN_11a98de0(in_stack_00000018);
      iVar6 = FUN_11531e20();
      iVar5 = FUN_117414c0();
      iVar5 = *(int *)(iVar5 + 0x38);
      iVar7 = FUN_117414c0();
      iVar7 = *(int *)(iVar7 + 0x34);
      FUN_104d1550("MaxFreeRefreshCount",iVar7);
      local_c0 = 0;
      local_c4 = iVar7 - iVar6;
      piVar9 = &local_c4;
      if (iVar7 - iVar6 < 1) {
        piVar9 = &local_c0;
      }
      FUN_104d1550("FreeRefreshCount",*piVar9);
      uVar8 = FUN_11531be0();
      FUN_104d1550("RefreshCost",uVar8);
      FUN_104d1550("MaxCreditRefreshCount",iVar5 - iVar7);
      local_c0 = iVar5 - iVar6;
      local_c4 = 0;
      piVar9 = &local_c0;
      if (local_c0 < 1) {
        piVar9 = &local_c4;
      }
      FUN_104d1550("CreditRefreshCount",*piVar9);
      uVar8 = FUN_11531bc0();
      FUN_104d1550("SubmitTaskCount",uVar8);
      uVar8 = FUN_11531d70();
      FUN_104d1550("MaxSubmitTaskCount",uVar8);
      FUN_117414c0();
      iVar5 = FUN_104f9820();
      if (iVar5 != 0) {
        local_bc = *(int *)(iVar5 + 0x11b1d);
        uStack_40 = FUN_111f8d20();
        pcStack_dc = (char *)0x104f8df6;
        _localtime64_s(&tStack_38,&uStack_40);
        pcStack_dc = (char *)0x104f8e30;
        FUN_104d15e0();
        piStack_58 = (int *)0x0;
        uStack_54 = 0;
        FUN_11a98a70();
        pcStack_dc = "TaskDatas";
        FUN_104d12b0();
        piStack_74 = (int *)0x0;
        piStack_70 = (int *)0x0;
        piStack_6c = (int *)0x0;
        pcStack_dc = (char *)0x104f8e89;
        FUN_11531e40();
        piStack_b4 = piStack_70;
        piVar9 = piStack_70;
        if (piStack_70 != piStack_6c) {
          do {
            local_bc = *piVar9;
            uVar3 = uStack_40;
            if ((local_bc != 0) &&
               (iVar5 = *(int *)(local_bc + 0x2c), iStack_90 = iVar5, iVar5 != 0)) {
              local_c4 = *(int *)(local_bc + 0x10);
              pcStack_dc = "mh.view.WildHunt.Data.WildHunt_TaskData";
              piStack_88 = (int *)0x0;
              piStack_84 = (int *)0x0;
              piStack_b4 = piVar9;
              FUN_11a98de0(&piStack_88);
              puVar12 = auStack_98;
              (**(code **)(*piStack_68 + 0x3c))(uStack_60,puVar12);
              FUN_104d1550(&DAT_11dbe654,pcStack_dc);
              FUN_104d1670(&DAT_11dbe64c,*(undefined4 *)(iVar5 + 0xd8));
              FUN_104d1790(&DAT_11da7300,iVar5 + 8);
              FUN_104d1790(&DAT_11dbe644,iVar5 + 0xc);
              FUN_104d1550(&DAT_11dbe63c,*(undefined4 *)(iVar5 + 0xe8));
              uVar8 = FUN_117c2710();
              FUN_104d1550("HuntSoulBase",uVar8);
              pcVar1 = pcStack_dc;
              fVar11 = (float10)FUN_11531dc0(pcStack_dc);
              piVar14 = (int *)(float)fVar11;
              FUN_104d14d0("HuntSoulScale");
              cVar4 = (**(code **)(*piStack_a8 + 0x4c))(pcVar1);
              FUN_104d15e0("IsAccept",cVar4);
              uVar13 = 0;
              if (cVar4 != '\0') {
                iVar5 = (**(code **)(*piStack_ac + 0x50))(puVar12);
                if (iVar5 != 0) {
                  uVar13 = (uint)(*(int *)(iVar5 + 0x14) == 4);
                }
              }
              FUN_104d15e0("IsComplete",uVar13);
              uStack_60 = 0;
              uStack_5c = 0;
              FUN_11a98a70(&uStack_60);
              FUN_104d12b0("TaskTargets",auStack_64);
              piStack_b4 = piStack_b4 + 5;
              if (((char *)*piStack_b4 == (char *)0x0) || (*(char *)*piStack_b4 == '\0')) {
                piStack_88 = (int *)0x0;
                piStack_84 = (int *)0x0;
                uStack_80 = 0;
                FUN_107fa640();
                piVar2 = piStack_84;
                if (piStack_88 != piStack_84) {
                  piVar10 = piStack_88 + 2;
                  piVar9 = piVar14;
                  do {
                    FUN_11a98de0(&stack0xffffff34,"mh.model.quest.QuestTrackVo",0,0);
                    (**(code **)(*piStack_74 + 0x3c))(piStack_6c,&pcStack_dc);
                    FUN_104d1550("nTargetID1",piVar10[-2]);
                    FUN_104d1550("nTargetID2",piVar10[-1]);
                    FUN_104d1550("nTargetID3",*piVar10);
                    FUN_104d1550("nTargetID4",piVar10[1]);
                    FUN_104d1550("nTargetID5",piVar10[2]);
                    FUN_104d1670("strTarget1",piVar10[0xb]);
                    FUN_104d1670("strTarget2",piVar10[0x11]);
                    FUN_104d1670("strTarget3",piVar10[0x17]);
                    FUN_104d1670("strTarget4",piVar10[0x1d]);
                    FUN_104d1670("strTarget5",piVar10[0x23]);
                    FUN_104d1550("nOpType",piVar10[3]);
                    FUN_104d1550("nCurCount",piVar10[4]);
                    FUN_104d1550("nMaxCount",piVar10[5]);
                    piVar14 = piVar10 + 0x39;
                    piVar10 = piVar10 + 0x3b;
                  } while (piVar14 != piVar2);
                }
                FUN_104f9a70();
              }
              else {
                FUN_11a98de0(&stack0xffffff34,"mh.model.quest.QuestTrackVo",0,0);
                (**(code **)(*piStack_74 + 0x3c))(piStack_6c,&pcStack_dc);
                FUN_104d1790("strTarget4",0);
                FUN_104d1550("nOpType",0x1f);
                FUN_104d7c10();
              }
              if (((uint)(uStack_40 >> 0x26) & 1) != 0) {
                pcStack_dc = (char *)0x104f92b6;
                (**(code **)(*(int *)uStack_40 + 8))();
                uStack_40._0_4_ = (int *)0x0;
              }
              uStack_40._4_4_ = 0;
              uVar3 = ZEXT48((int *)uStack_40);
              if (((uint)piStack_84 >> 6 & 1) != 0) {
                pcStack_dc = (char *)0x104f92e9;
                (**(code **)(*piStack_88 + 8))();
                uVar3 = CONCAT44(uStack_40._4_4_,(int *)uStack_40);
              }
            }
            uStack_40 = uVar3;
            piStack_b4 = piVar9 + 1;
            piVar9 = piStack_b4;
          } while (piStack_b4 != piStack_6c);
        }
        if (piStack_70 != (int *)0x0) {
          FUN_10c3d5d0();
        }
        if ((uStack_54 >> 6 & 1) != 0) {
          pcStack_dc = (char *)0x104f932b;
          (**(code **)(*piStack_58 + 8))();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



