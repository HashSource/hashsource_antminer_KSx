int start_watchpool_thread()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_30CDD8 = 2;
  pthread_attr_init(&attr);
  v0 = pthread_create((pthread_t *)&dword_30CDDC, &attr, (void *(*)(void *))watchpool_thread, &dword_30CDD8);
  v1 = pthread_attr_destroy(&attr);
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
    "start_watchpool_thread",
    22,
    127,
    100,
    v4);
  return 5;
}
