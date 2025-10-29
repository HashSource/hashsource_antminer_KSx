int __fastcall gpio_export(int a1)
{
  int v2; // r6
  size_t v3; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v6[2048]; // [sp+50h] [bp-1804h] BYREF
  char v7[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E86FC) )
  {
    strcpy(v6, "failed to api lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_export",
      11,
      209,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      v2 = open64("/sys/class/gpio/export", 1);
      if ( v2 < 0 )
      {
        strcpy(v6, "Failed to open export for writing!");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_export",
          11,
          224,
          100,
          v7);
        pthread_mutex_unlock(&stru_2E86FC);
        return -2;
      }
      else
      {
        v3 = snprintf(s, 0x40u, "%d", a1);
        if ( write(v2, s, v3) < 0 )
        {
          snprintf(v6, 0x800u, "Failed to export gpio %d!", a1);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            192,
            "gpio_export",
            11,
            231,
            100,
            v7);
          close(v2);
          pthread_mutex_unlock(&stru_2E86FC);
          return -3;
        }
        else
        {
          snprintf(v6, 0x800u, "export gpio %d success", a1);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            192,
            "gpio_export",
            11,
            236,
            20,
            v7);
          close(v2);
          pthread_mutex_unlock(&stru_2E86FC);
          return 0;
        }
      }
    }
    else
    {
      snprintf(v6, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        192,
        "gpio_export",
        11,
        216,
        80,
        v7);
      pthread_mutex_unlock(&stru_2E86FC);
      return 0;
    }
  }
}
