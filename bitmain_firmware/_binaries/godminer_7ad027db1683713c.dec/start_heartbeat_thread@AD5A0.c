int start_heartbeat_thread()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  bool v2; // zf
  pthread_attr_t *v3; // r0
  int v4; // r5
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = calloc(1u, 0x30u);
  *v0 = 5;
  v1 = v0;
  v2 = platform_is_pic_mcu_en() == 0;
  v3 = (pthread_attr_t *)(v1 + 2);
  if ( v2 )
  {
    pthread_attr_init(v3);
    v4 = pthread_create(v1 + 1, (const pthread_attr_t *)(v1 + 2), (void *(*)(void *))psu_watchdog, v1);
    pthread_attr_destroy((pthread_attr_t *)(v1 + 2));
    if ( !v4 )
      goto LABEL_3;
  }
  else
  {
    pthread_attr_init(v3);
    v4 = pthread_create(v1 + 1, (const pthread_attr_t *)(v1 + 2), (void *(*)(void *))heartbeat_on_device, v1);
    pthread_attr_destroy((pthread_attr_t *)(v1 + 2));
    if ( !v4 )
    {
LABEL_3:
      pthread_detach(v1[1]);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, v4, "start_heartbeat_thread");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
        172,
        "start_heartbeat_thread",
        22,
        136,
        60,
        v6);
      return v4;
    }
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "heartbeat thread create failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_heartbeat.c",
    172,
    "start_heartbeat_thread",
    22,
    132,
    100,
    v6);
  return 5;
}
