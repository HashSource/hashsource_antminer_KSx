int check_pools_valid()
{
  int v0; // r6
  int v1; // r4
  int v2; // r0

  v0 = 0;
  pools_active = 0;
  update_miner_working_status();
  if ( total_pools <= 0 )
    goto LABEL_10;
  v1 = 0;
  do
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(pools + 4 * v1++);
      if ( *(_BYTE *)(v2 + 28) )
        break;
      if ( total_pools <= v1 )
        goto LABEL_8;
    }
    if ( stratum_check((int *)v2) )
      ++v0;
  }
  while ( total_pools > v1 );
LABEL_8:
  if ( v0 )
  {
    set_miner_6060info_network_lost_err(0);
    return v0;
  }
  else
  {
LABEL_10:
    set_miner_6060info_network_lost_err(1);
    return 0;
  }
}
