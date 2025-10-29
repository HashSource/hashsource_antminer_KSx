int __fastcall gpio_direction(int a1, int a2)
{
  int v4; // r0
  int v5; // r9
  bool v6; // zf
  const char *v7; // r5
  size_t v8; // r2
  int v9; // r0
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v18[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v19[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_30C774) )
  {
    strcpy(v18, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v12 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_direction",
      14,
      304,
      100,
      v19);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v15 = snprintf(v18, 0x800u, "Failed to open gpio %d direction for writing!", a1);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        197,
        "gpio_direction",
        14,
        311,
        100,
        v19);
      pthread_mutex_unlock(&stru_30C774);
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
        v13 = snprintf(v18, 0x800u, "Failed to set gpio %d direction %s !", a1, v7);
        V_LOCK(v13);
        v14 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_direction",
          14,
          317,
          100,
          v19);
        close(v5);
        pthread_mutex_unlock(&stru_30C774);
        return -3;
      }
      else
      {
        v9 = snprintf(v18, 0x800u, "set gpio %d direction %s success!", a1, v7);
        V_LOCK(v9);
        v10 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_direction",
          14,
          322,
          20,
          v19);
        close(v5);
        pthread_mutex_unlock(&stru_30C774);
        return 0;
      }
    }
  }
}
