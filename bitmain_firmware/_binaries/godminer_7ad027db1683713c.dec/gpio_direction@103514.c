int __fastcall gpio_direction(int a1, int a2)
{
  int v4; // r0
  int v5; // r9
  bool v6; // zf
  const char *v7; // r5
  size_t v8; // r2
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v11[2048]; // [sp+50h] [bp-1804h] BYREF
  char v12[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E86FC) )
  {
    strcpy(v11, "failed to api lock");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_direction",
      14,
      304,
      100,
      v12);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      snprintf(v11, 0x800u, "Failed to open gpio %d direction for writing!", a1);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        192,
        "gpio_direction",
        14,
        311,
        100,
        v12);
      pthread_mutex_unlock(&stru_2E86FC);
      return -2;
    }
    else
    {
      v6 = a2 == 0;
      v7 = "out";
      if ( v6 )
      {
        v8 = 2;
        v7 = "in";
      }
      else
      {
        v8 = 3;
      }
      if ( write(v4, v7, v8) < 0 )
      {
        snprintf(v11, 0x800u, "Failed to set gpio %d direction %s !", a1, v7);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_direction",
          14,
          317,
          100,
          v12);
        close(v5);
        pthread_mutex_unlock(&stru_2E86FC);
        return -3;
      }
      else
      {
        snprintf(v11, 0x800u, "set gpio %d direction %s success!", a1, v7);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_direction",
          14,
          322,
          20,
          v12);
        close(v5);
        pthread_mutex_unlock(&stru_2E86FC);
        return 0;
      }
    }
  }
}
