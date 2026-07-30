
/* [RE-AUTO c0]
   calls: sprintf_s, MessageBoxA, GetCurrentProcess, TerminateProcess
   strings:
     ""[TPREGION] InstID[%d] LevelID[%d] TP OverTime"" */

void __fastcall FUN_10efb4f0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  HWND hWnd;
  HANDLE hProcess;
  LPCSTR lpText;
  LPCSTR lpCaption;
  UINT UVar3;
  char local_104 [256];
  
  piVar1 = (int *)(**(code **)(*param_1 + 800))();
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x6c))();
    sprintf_s(local_104,0x100,"[TPREGION] InstID[%d] LevelID[%d] TP OverTime",
              *(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0x74),uVar2);
    (**(code **)(*piVar1 + 0x360))(local_104,3);
    piVar1 = param_1 + 0x874;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      param_1[0x873] = -1;
      UVar3 = 0;
      lpCaption = &DAT_11cf9778;
      lpText = &DAT_11cf9780;
      hWnd = (HWND)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x50c))();
      MessageBoxA(hWnd,lpText,lpCaption,UVar3);
      UVar3 = 0;
      hProcess = GetCurrentProcess();
      TerminateProcess(hProcess,UVar3);
    }
  }
  return;
}

