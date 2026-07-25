// CInfoRecord::GetModelString @ 104f6c30  depth 1  (121 bytes)


/* [RE-R1]
   calls: memcpy */

int * __thiscall CInfoRecord__GetModelString(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  *param_1 = (int)&DAT_1201fc98;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar3 - (int)(param_2 + 1);
    if (_Size != 0) {
      puVar2 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
      DAT_123be268 = DAT_123be268 + _Size + 0xd;
      *puVar2 = 1;
      *param_1 = (int)(puVar2 + 3);
      puVar2[1] = _Size;
      puVar2[2] = _Size;
      *(undefined1 *)(_Size + *param_1) = 0;
      if ((char *)*param_1 != param_2) {
        memcpy((char *)*param_1,param_2,_Size);
      }
    }
    return param_1;
  }
  return param_1;
}

