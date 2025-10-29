int __fastcall dev_config_hal(int a1)
{
  char *all_created_runtime; // r5
  int v3; // r4
  char *v4; // r5
  int i; // r4
  int v6; // t1
  int v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v9);
  if ( (_UNKNOWN *)a1 != &unk_2DC6C0 )
  {
    if ( a1 <= (int)&unk_2DC6C0 )
    {
      if ( a1 == 921600 )
      {
        v3 = 2;
        goto LABEL_11;
      }
      if ( a1 <= 921600 )
      {
        if ( (char *)a1 == "r_alloc" )
        {
          v3 = 6;
          goto LABEL_11;
        }
        goto LABEL_20;
      }
      if ( a1 == 1500000 || a1 == 1562500 )
      {
        v3 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      if ( a1 == 6250000 )
      {
        v3 = 3;
        goto LABEL_11;
      }
      if ( a1 > 6250000 )
      {
        if ( a1 == 12500000 )
        {
          v3 = 4;
          goto LABEL_11;
        }
        if ( a1 == 25000000 )
        {
          v3 = 5;
          goto LABEL_11;
        }
        goto LABEL_20;
      }
      if ( a1 == 3125000 )
        goto LABEL_25;
    }
LABEL_20:
    v3 = 26;
    goto LABEL_11;
  }
LABEL_25:
  v3 = 0;
LABEL_11:
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", v3);
  v8 = v3;
  if ( v9 > 0 )
  {
    v4 = all_created_runtime - 4;
    for ( i = 0; i < v9; ++i )
    {
      v6 = *((_DWORD *)v4 + 1);
      v4 += 4;
      uart_set_config(*(_DWORD *)(v6 + 232), 0, &v8, 4u);
    }
  }
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
