int gpio_init()
{
  int v1; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_311F2C )
  {
    V_LOCK(*(_DWORD *)"gpio re init");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_init",
      9,
      92,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_311F30, 0);
    dword_311F48 = (int)new_c_map(1213380, 0, 0);
    pthread_mutex_init(&stru_311F4C, 0);
    dword_311F64 = 1;
    pthread_create((pthread_t *)&dword_311F68, 0, (void *(*)(void *))sub_12954C, 0);
    dword_311F2C = 1;
  }
  return 0;
}
