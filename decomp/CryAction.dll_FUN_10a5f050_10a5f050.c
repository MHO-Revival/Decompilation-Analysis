
/* [RE-AUTO c0] */

void __thiscall FUN_10a5f050(int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_10033350(*(undefined4 *)(*param_1 + 0x14),*(undefined4 *)(*param_1 + 0x10),param_2,pcVar2);
  return;
}

