int stop_mining_base()
{
  int v0; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // t1
  int result; // r0
  int v7; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v8 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v8);
  if ( v8 <= 0 )
  {
LABEL_8:
    v7 = dev_ctrl(all_created_runtime);
    (*(void (__fastcall **)(unsigned __int8 *))(v7 + 16))(&stru_1C1F4.st_info);
    usleep(0x2710u);
    return 0;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = *all_created_runtime;
    if ( v3 )
    {
      while ( 1 )
      {
        result = (*(int (**)(void))(v3 + 20))();
        if ( result )
          break;
        v4 = dev_ctrl(0);
        (*(void (__fastcall **)(int))(v4 + 28))(v0);
        all_created_runtime = (_DWORD *)usleep((__useconds_t)&elf_hash_chain[4398]);
        if ( v8 <= ++v0 )
          goto LABEL_8;
        v5 = v2[1];
        ++v2;
        v3 = v5;
        if ( !v5 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
  }
  return result;
}
