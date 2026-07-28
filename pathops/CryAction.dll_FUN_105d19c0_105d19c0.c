
/* [RE-AUTO c0]
   strings:
     ""PathBBName""
     ""CSetPathPointByIndex""
     ""PosBBName""
     ""IndexBBName"" */

void FUN_105d19c0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("PathBBName","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CSetPathPointByIndex","");
  FUN_103cf720(local_1c,local_34,0,1,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("PosBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSetPathPointByIndex","");
  FUN_103cf720(local_34,local_1c,1,1,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("IndexBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSetPathPointByIndex","");
  FUN_103cf720(local_34,local_1c,2,1,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}

