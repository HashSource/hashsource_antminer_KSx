int start_api_thread()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_312570 = 3;
  pthread_attr_init((pthread_attr_t *)&algn_312574[4]);
  v0 = pthread_create(
         (pthread_t *)algn_312574,
         (const pthread_attr_t *)&algn_312574[4],
         (void *(*)(void *))sub_B5450,
         &dword_312570);
  v1 = pthread_attr_destroy((pthread_attr_t *)&algn_312574[4]);
  if ( !v0 )
    return 0;
  V_LOCK(v1);
  v3 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_pool.c",
    167,
    "start_api_thread",
    16,
    139,
    100,
    v4);
  return 5;
}
