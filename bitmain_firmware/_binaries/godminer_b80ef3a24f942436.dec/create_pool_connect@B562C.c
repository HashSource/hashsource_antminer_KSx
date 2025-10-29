int create_pool_connect()
{
  int pool_stratum_threads; // r0
  int v1; // r8
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  const char *v11; // r0
  int v12; // r5
  int v13; // r0
  const char *v14; // r6
  bool v15; // r2
  int v16; // r0
  char *all_created_runtime; // r0
  int v18; // r3
  char *v19; // r4
  int v20; // t1
  int v21; // r0
  unsigned int i; // r0
  int v23; // r0
  _DWORD v24[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  v1 = pool_stratum_threads;
  if ( pool_stratum_threads )
  {
    V_LOCK(pool_stratum_threads);
    v4 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      153,
      100,
      v24);
    return 1;
  }
  else
  {
    v2 = 60;
    do
    {
      v3 = sleep(1u);
      if ( pools_active )
        return 0;
      --v2;
    }
    while ( v2 );
    V_LOCK(v3);
    v6 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v6);
    v7 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/miner_util/check_pool.c",
           167,
           "create_pool_connect",
           19,
           165,
           100,
           v24);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v8);
    v9 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/miner_util/check_pool.c",
           167,
           "create_pool_connect",
           19,
           166,
           100,
           v24);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v10);
    v11 = (const char *)zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c",
                          167,
                          "create_pool_connect",
                          19,
                          167,
                          100,
                          v24);
    if ( total_pools > 0 )
    {
      do
      {
        v12 = *(_DWORD *)(pools + 4 * v2);
        V_LOCK(v11);
        v13 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_pool.c",
          167,
          "create_pool_connect",
          19,
          173,
          80,
          v24);
        v11 = *(const char **)(v12 + 20);
        if ( v11 )
        {
          v14 = *(const char **)(v12 + 16);
          if ( v14 )
          {
            v11 = strstr(v11, "stats");
            v15 = 1;
            if ( !v11 )
            {
              v11 = (const char *)strcmp(v14, "benchmark");
              v15 = v11 == 0;
            }
            *(_BYTE *)(v12 + 1648) = v15;
          }
        }
        ++v2;
      }
      while ( total_pools > v2 );
    }
    V_LOCK(v11);
    v16 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      179,
      100,
      v24);
    v24[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v24);
    v18 = v24[0];
    if ( v24[0] > 0 )
    {
      v19 = all_created_runtime - 4;
      do
      {
        v20 = *((_DWORD *)v19 + 1);
        v19 += 4;
        ++v1;
        (*(void (**)(void))(v20 + 20))();
        (*(void (**)(void))(*(_DWORD *)v19 + 28))();
        v18 = v24[0];
      }
      while ( v1 < v24[0] );
    }
    if ( v18 )
      fan_pwm_set(0x14u);
    v21 = green_led_on();
    for ( i = red_led_on(v21); !pools_active; i = sleep(1u) )
      ;
    V_LOCK(i);
    v23 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_pool.c",
      167,
      "create_pool_connect",
      19,
      181,
      80,
      v24);
    return 0;
  }
}
