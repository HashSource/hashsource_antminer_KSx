int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  int v3; // r5
  const char *v4; // r0
  const char *v5; // r6
  char *v6; // r0
  bool v7; // r2
  char *all_created_runtime; // r0
  int v9; // r3
  char *v10; // r4
  int v11; // t1
  _DWORD v12[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    logfmt_raw((char *)v12, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      153,
      100,
      v12);
    return 1;
  }
  else
  {
    v1 = 60;
    do
    {
      sleep(1u);
      if ( pools_active )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    logfmt_raw((char *)v12, 0x1000u, 0, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      165,
      100,
      v12);
    V_LOCK();
    logfmt_raw((char *)v12, 0x1000u, 0, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      166,
      100,
      v12);
    V_LOCK();
    logfmt_raw(
      (char *)v12,
      0x1000u,
      0,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      167,
      100,
      v12);
    if ( total_pools > 0 )
    {
      do
      {
        v3 = *(_DWORD *)(pools + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v12,
          0x1000u,
          0,
          "Pool: %d  URL: %s\tUser: %s  Password: %s",
          *(_DWORD *)v3,
          *(_DWORD *)(v3 + 12),
          *(_DWORD *)(v3 + 16),
          *(_DWORD *)(v3 + 20));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_pool.c",
          167,
          "create_pool_connect",
          19,
          173,
          80,
          v12);
        v4 = *(const char **)(v3 + 20);
        if ( v4 )
        {
          v5 = *(const char **)(v3 + 16);
          if ( v5 )
          {
            v6 = strstr(v4, "stats");
            v7 = 1;
            if ( !v6 )
              v7 = strcmp(v5, "benchmark") == 0;
            *(_BYTE *)(v3 + 1648) = v7;
          }
        }
        ++v1;
      }
      while ( total_pools > v1 );
    }
    V_LOCK();
    logfmt_raw((char *)v12, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      179,
      100,
      v12);
    v12[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v12);
    v9 = v12[0];
    if ( v12[0] > 0 )
    {
      v10 = all_created_runtime - 4;
      do
      {
        v11 = *((_DWORD *)v10 + 1);
        v10 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v11 + 20))();
        (*(void (**)(void))(*(_DWORD *)v10 + 28))();
        v9 = v12[0];
      }
      while ( pool_stratum_threads < v12[0] );
    }
    if ( v9 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !pools_active )
      sleep(1u);
    V_LOCK();
    logfmt_raw((char *)v12, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      181,
      80,
      v12);
    return 0;
  }
}
