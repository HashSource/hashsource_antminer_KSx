int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_2E86DC )
  {
    strcpy(v1, "gpio re init");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
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
    pthread_mutex_init(&stru_2E86E0, 0);
    dword_2E86F8 = (int)new_c_map(1058948, 0, 0);
    pthread_mutex_init(&stru_2E86FC, 0);
    dword_2E8714 = 1;
    pthread_create((pthread_t *)&dword_2E8718, 0, (void *(*)(void *))sub_103A0C, 0);
    dword_2E86DC = 1;
  }
  return 0;
}
