int gpio_init()
{
  int v1; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_307704 )
  {
    V_LOCK(*(_DWORD *)"gpio re init");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_init",
      9,
      92,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_307708, 0);
    dword_307720 = (int)new_c_map(1195168, 0, 0);
    pthread_mutex_init(&stru_307724, 0);
    dword_30773C = 1;
    pthread_create((pthread_t *)&dword_307740, 0, (void *(*)(void *))sub_124E28, 0);
    dword_307704 = 1;
  }
  return 0;
}
