int __fastcall is_gpio_exist(int a1)
{
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v4[2048]; // [sp+50h] [bp-1800h] BYREF
  char v5[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E86FC) )
  {
    strcpy(v4, "failed to api lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "is_gpio_exist",
      13,
      411,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_2E86FC);
      return 0;
    }
    else
    {
      snprintf(v4, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        192,
        "is_gpio_exist",
        13,
        418,
        20,
        v5);
      pthread_mutex_unlock(&stru_2E86FC);
      return 1;
    }
  }
}
