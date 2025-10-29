int __fastcall check_test_pool(char *a1)
{
  int v1; // r4
  int v2; // r7
  int v3; // r5
  int v4; // r0
  int v5; // r0
  _BYTE v7[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  if ( total_pools > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(pools + 4 * v1);
      V_LOCK(a1);
      ++v1;
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "check_test_pool",
        15,
        1642,
        40,
        v7);
      a1 = strstr(*(const char **)(v3 + 12), "TEST");
      if ( a1 )
        ++v2;
    }
    while ( total_pools > v1 );
    v1 = v2 > 2;
  }
  V_LOCK(a1);
  v5 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/god-miner.c",
    160,
    "check_test_pool",
    15,
    1649,
    40,
    v7);
  is_test_pool = v1;
  return v1;
}
