int __fastcall gpio_write(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  char *v6; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v14[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v15[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_307724) )
  {
    strcpy(v14, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v8 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_write",
      10,
      383,
      100,
      v15);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open64(s, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = snprintf(v14, 0x800u, "Failed to open gpio[%d] value for writing!", a1);
      V_LOCK(v9);
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        197,
        "gpio_write",
        10,
        390,
        100,
        v15);
      pthread_mutex_unlock(&stru_307724);
      return -2;
    }
    else
    {
      if ( a2 )
        v6 = "1";
      else
        v6 = "01";
      if ( write(v4, v6, 1u) < 0 )
      {
        v11 = snprintf(v14, 0x800u, "Failed to write gpio[%d] value!", a1);
        V_LOCK(v11);
        v12 = logfmt_raw((int)v15, 0x1000u);
        V_UNLOCK(v12);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_write",
          10,
          396,
          100,
          v15);
        close(v5);
        pthread_mutex_unlock(&stru_307724);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_307724);
        return 0;
      }
    }
  }
}
