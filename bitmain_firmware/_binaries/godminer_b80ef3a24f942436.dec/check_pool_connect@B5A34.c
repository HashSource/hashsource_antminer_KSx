int check_pool_connect()
{
  int v0; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  const char *v7; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r11
  bool v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r6
  int i; // r7
  int v16; // r4
  int v17; // r0
  char *s1; // [sp+14h] [bp-1008h]
  _BYTE v19[4100]; // [sp+18h] [bp-1004h] BYREF

  v0 = check_pools_valid();
  if ( v0 > 0 )
    return 0;
  V_LOCK(v0);
  v2 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/check_pool.c",
         167,
         "check_pool_connect",
         18,
         202,
         100,
         v19);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/check_pool.c",
         167,
         "check_pool_connect",
         18,
         203,
         100,
         v19);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v6);
  v7 = (const char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c",
                       167,
                       "check_pool_connect",
                       18,
                       204,
                       100,
                       v19);
  if ( total_pools > 0 )
  {
    v8 = 0;
    do
    {
      V_LOCK(v7);
      v9 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/check_pool.c",
        167,
        "check_pool_connect",
        18,
        208,
        80,
        v19);
      v10 = *(_DWORD *)(pools + 4 * v8);
      v7 = *(const char **)(v10 + 20);
      if ( v7 )
      {
        s1 = *(char **)(v10 + 16);
        if ( s1 )
        {
          v7 = strstr(v7, "stats");
          v11 = 1;
          if ( !v7 )
          {
            v7 = (const char *)strcmp(s1, "benchmark");
            v11 = v7 == 0;
          }
          *(_BYTE *)(v10 + 1648) = v11;
        }
      }
      ++v8;
    }
    while ( total_pools > v8 );
  }
  V_LOCK(v7);
  v12 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v12);
  v13 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_pool.c",
          167,
          "check_pool_connect",
          18,
          212,
          100,
          v19);
  if ( !pools_active )
  {
    v14 = 60;
    for ( i = 1; ; v14 = 60 * i )
    {
      v16 = 0;
      do
      {
        ++v16;
        sleep(1u);
      }
      while ( !pools_active && v16 != v14 );
      if ( i >= 19 )
        i = 19;
      v13 = check_pools_valid();
      ++i;
      if ( pools_active )
        break;
    }
  }
  V_LOCK(v13);
  v17 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_pool.c",
    167,
    "check_pool_connect",
    18,
    225,
    80,
    v19);
  return 0;
}
