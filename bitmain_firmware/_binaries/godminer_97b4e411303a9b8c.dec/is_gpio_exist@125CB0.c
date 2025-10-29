int __fastcall is_gpio_exist(int a1)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v7[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_30C774) )
  {
    strcpy(v7, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "is_gpio_exist",
      13,
      411,
      100,
      v8);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_30C774);
      return 0;
    }
    else
    {
      v3 = snprintf(v7, 0x800u, "port %d already exported", a1);
      V_LOCK(v3);
      v4 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        197,
        "is_gpio_exist",
        13,
        418,
        20,
        v8);
      pthread_mutex_unlock(&stru_30C774);
      return 1;
    }
  }
}
