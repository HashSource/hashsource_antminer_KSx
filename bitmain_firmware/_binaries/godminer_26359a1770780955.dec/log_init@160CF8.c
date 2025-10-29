int log_init()
{
  char *v0; // r12
  int v1; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v0 = (char *)opt_zlog_conf_file;
  if ( !opt_zlog_conf_file )
  {
    v0 = (char *)malloc(0xFu);
    if ( v0 )
      strcpy(v0, "/etc/zlog.conf");
    opt_zlog_conf_file = (int)v0;
  }
  v1 = zlog_init(v0);
  if ( v1 )
  {
    puts("zlog init failed");
    return -1;
  }
  else
  {
    g_zc = zlog_get_category("miner_zc");
    if ( g_zc )
    {
      g_temp_zc = zlog_get_category("miner_temp_zc");
      if ( g_temp_zc )
      {
        g_fan_zc = zlog_get_category("miner_fan_zc");
        if ( g_fan_zc )
        {
          g_hash_zc = zlog_get_category("miner_hash_zc");
          if ( g_hash_zc )
          {
            g_droa_zc = zlog_get_category("miner_droa");
            if ( g_droa_zc )
            {
              puts("zlog init OK!");
            }
            else
            {
              v7 = puts("zlog get miner_droa category fail");
              v1 = -5;
              zlog_fini(v7);
            }
          }
          else
          {
            v6 = puts("zlog get miner_hash_zc category fail");
            v1 = -4;
            zlog_fini(v6);
          }
        }
        else
        {
          v5 = puts("zlog get miner_fan_zc category fail");
          v1 = -3;
          zlog_fini(v5);
        }
      }
      else
      {
        v3 = puts("zlog get miner_temp_zc category fail");
        v1 = -3;
        zlog_fini(v3);
      }
    }
    else
    {
      v4 = puts("zlog get miner_zc category fail");
      v1 = -2;
      zlog_fini(v4);
    }
  }
  return v1;
}
