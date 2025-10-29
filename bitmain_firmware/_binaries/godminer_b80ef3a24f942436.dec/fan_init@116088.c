int fan_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    dword_31136C[0] = 1;
    pthread_create((pthread_t *)&dword_311390, 0, (void *(*)(void *))sub_115C4C, 0);
    return 0;
  }
  else
  {
    V_LOCK(1836216166);
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
      191,
      "fan_init",
      8,
      101,
      100,
      v2);
    return -1;
  }
}
