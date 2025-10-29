int __fastcall dev_config_one_chain_baud(int a1, char *a2)
{
  char v4; // r6
  int v5; // r2
  int v6; // r5
  speed_t v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h] BYREF

  uart_get_config(0, 0, &v8, &v9);
  v4 = 8 * a1;
  printf("%s: get zynq bt8d %08x\n", "dev_config_one_chain_baud", v8);
  if ( a2 == (char *)3000000 )
    goto LABEL_21;
  if ( (int)a2 <= 3000000 )
  {
    if ( a2 == (char *)&loc_E1000 )
    {
      v5 = 2;
      v6 = 2 << v4;
      goto LABEL_9;
    }
    if ( (int)a2 > 921600 )
    {
      if ( a2 == (char *)&loc_16E360 || a2 == (char *)&loc_17D784 )
      {
        v5 = 1;
        v6 = 1 << v4;
        goto LABEL_9;
      }
    }
    else if ( a2 == "GT$$GT$10into_inner17h8d4dcc209f7b30b6E" )
    {
      v5 = 6;
      v6 = 6 << v4;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  if ( a2 == (char *)6250000 )
  {
    v5 = 3;
    v6 = 3 << v4;
    goto LABEL_9;
  }
  if ( (int)a2 <= 6250000 )
  {
    if ( a2 != byte_2FAF08 )
      goto LABEL_14;
LABEL_21:
    v6 = 0;
    v5 = 0;
    goto LABEL_9;
  }
  if ( a2 != (char *)12500000 )
  {
    if ( a2 == (char *)25000000 )
    {
      v5 = 5;
      v6 = 5 << v4;
      goto LABEL_9;
    }
LABEL_14:
    v5 = 26;
    v6 = 26 << v4;
    goto LABEL_9;
  }
  v5 = 4;
  v6 = 4 << v4;
LABEL_9:
  printf("%s: set zynq bt8d %d\n", "dev_config_one_chain_baud", v5);
  v8 = v8 & ~(63 << v4) | v6;
  uart_set_config(a1, 0, &v8, 4u);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  uart_get_config(0, 0, &v8, &v9);
  printf("%s: after set baud, get zynq bt8d %08x\n", "dev_config_one_chain_baud", v8);
  return 0;
}
