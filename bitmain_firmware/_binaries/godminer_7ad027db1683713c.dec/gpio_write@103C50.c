int __fastcall gpio_write(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  char *v6; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v9[2048]; // [sp+50h] [bp-1800h] BYREF
  char v10[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E86FC) )
  {
    strcpy(v9, "failed to api lock");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_write",
      10,
      383,
      100,
      v10);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open64(s, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      snprintf(v9, 0x800u, "Failed to open gpio[%d] value for writing!", a1);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        192,
        "gpio_write",
        10,
        390,
        100,
        v10);
      pthread_mutex_unlock(&stru_2E86FC);
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
        snprintf(v9, 0x800u, "Failed to write gpio[%d] value!", a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_write",
          10,
          396,
          100,
          v10);
        close(v5);
        pthread_mutex_unlock(&stru_2E86FC);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_2E86FC);
        return 0;
      }
    }
  }
}
