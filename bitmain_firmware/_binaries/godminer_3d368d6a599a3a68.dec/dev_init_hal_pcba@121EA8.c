int dev_init_hal_pcba()
{
  int v0; // r0
  int v1; // r4
  unsigned int hash_on_plug; // r6
  int v3; // r0
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r12

  v0 = platform_init();
  v1 = v0;
  if ( v0 )
    return sub_121E28(v0);
  total_chain = 0;
  hash_on_plug = get_hash_on_plug();
  v3 = printf("plug_on_status: %x\n", hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v1) & 1) == 0 )
    {
      if ( ++v1 == 16 )
        goto LABEL_6;
    }
    v4 = total_chain;
    v5 = v1;
    v6 = &g_chain_info[2 * total_chain];
    *v6 = v1++;
    *((_BYTE *)v6 + 4) = 1;
    v3 = printf("chain_offset %d, chain %d\n", v4, v5);
    ++total_chain;
  }
  while ( v1 != 16 );
LABEL_6:
  enable_bypass_mode(v3);
  dev_config_hal((char *)&stru_1C1F4.st_info);
  return 0;
}
