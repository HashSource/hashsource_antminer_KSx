int start_heartbeat_thread()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  bool v2; // zf
  pthread_attr_t *v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // r0
  _BYTE v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = calloc(1u, 0x30u);
  *v0 = 5;
  v1 = v0;
  v2 = platform_is_pic_mcu_en(v0) == 0;
  v3 = (pthread_attr_t *)(v1 + 2);
  if ( v2 )
  {
    pthread_attr_init(v3);
    v4 = pthread_create(v1 + 1, (const pthread_attr_t *)(v1 + 2), (void *(*)(void *))psu_watchdog, v1);
    v5 = pthread_attr_destroy((pthread_attr_t *)(v1 + 2));
    if ( !v4 )
      goto LABEL_3;
  }
  else
  {
    pthread_attr_init(v3);
    v4 = pthread_create(v1 + 1, (const pthread_attr_t *)(v1 + 2), (void *(*)(void *))heartbeat_on_device, v1);
    v5 = pthread_attr_destroy((pthread_attr_t *)(v1 + 2));
    if ( !v4 )
    {
LABEL_3:
      v6 = pthread_detach(v1[1]);
      V_LOCK(v6);
      v7 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
        177,
        "start_heartbeat_thread",
        22,
        140,
        60,
        v10);
      return v4;
    }
  }
  V_LOCK(v5);
  v9 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
    177,
    "start_heartbeat_thread",
    22,
    136,
    100,
    v10);
  return 5;
}
