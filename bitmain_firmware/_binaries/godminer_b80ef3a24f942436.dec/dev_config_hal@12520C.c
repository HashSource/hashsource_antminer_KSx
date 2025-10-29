int __fastcall dev_config_hal(char *a1)
{
  char *all_created_runtime; // r5
  int v3; // r4
  char *v4; // r5
  int i; // r4
  int v6; // t1
  int v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v9);
  if ( a1 != (char *)3000000 )
  {
    if ( (int)a1 <= 3000000 )
    {
      if ( a1 == (char *)&loc_E1000 )
      {
        v3 = 2;
        goto LABEL_11;
      }
      if ( (int)a1 <= 921600 )
      {
        if ( a1 == "GT$$GT$10into_inner17h8d4dcc209f7b30b6E" )
        {
          v3 = 6;
          goto LABEL_11;
        }
        goto LABEL_20;
      }
      if ( a1 == (char *)&loc_16E360 || a1 == (char *)&loc_17D784 )
      {
        v3 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      if ( a1 == (char *)6250000 )
      {
        v3 = 3;
        goto LABEL_11;
      }
      if ( (int)a1 > 6250000 )
      {
        if ( a1 == (char *)12500000 )
        {
          v3 = 4;
          goto LABEL_11;
        }
        if ( a1 == (char *)25000000 )
        {
          v3 = 5;
          goto LABEL_11;
        }
        goto LABEL_20;
      }
      if ( a1 == byte_2FAF08 )
        goto LABEL_25;
    }
LABEL_20:
    v3 = 26;
    goto LABEL_11;
  }
LABEL_25:
  v3 = 0;
LABEL_11:
  printf("%s: set zynq bt8d %d\n", 2771536, v3);
  v8 = v3;
  if ( v9 > 0 )
  {
    v4 = all_created_runtime - 4;
    for ( i = 0; i < v9; ++i )
    {
      v6 = *((_DWORD *)v4 + 1);
      v4 += 4;
      uart_set_config(*(_DWORD *)(v6 + 248), 0, &v8, 4u);
    }
  }
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
