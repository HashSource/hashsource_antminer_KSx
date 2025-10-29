int start_api_thread()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_307DC0 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_307DC4[1]);
  v0 = pthread_create(
         dword_307DC4,
         (const pthread_attr_t *)&dword_307DC4[1],
         (void *(*)(void *))sub_B44B0,
         &dword_307DC0);
  v1 = pthread_attr_destroy((pthread_attr_t *)&dword_307DC4[1]);
  if ( !v0 )
    return 0;
  V_LOCK(v1);
  v3 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/check_pool.c",
    172,
    "start_api_thread",
    16,
    139,
    100,
    v4);
  return 5;
}
