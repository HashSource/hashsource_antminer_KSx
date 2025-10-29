int __fastcall dev_init_hal_pcba(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  unsigned int hash_on_plug; // r6
  int v6; // r3
  int v7; // r2
  _DWORD *v8; // r12

  v3 = platform_init(a1, a2, a3);
  v4 = v3;
  if ( v3 )
    return sub_11431C(v3);
  total_chain = 0;
  hash_on_plug = get_hash_on_plug(0);
  printf("plug_on_status: %x\n", hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v4) & 1) == 0 )
    {
      if ( ++v4 == 16 )
        goto LABEL_6;
    }
    v6 = total_chain;
    v7 = v4;
    v8 = &g_chain_info[2 * total_chain];
    *v8 = v4++;
    *((_BYTE *)v8 + 4) = 1;
    printf("chain_offset %d, chain %d\n", v6, v7);
    ++total_chain;
  }
  while ( v4 != 16 );
LABEL_6:
  enable_bypass_mode();
  dev_config_hal((int)&stru_1C1FC.st_value);
  return 0;
}
