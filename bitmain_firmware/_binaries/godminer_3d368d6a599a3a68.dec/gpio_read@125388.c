int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int buf; // [sp+1Ch] [bp-1848h] BYREF
  char s[64]; // [sp+20h] [bp-1844h] BYREF
  char v14[2048]; // [sp+60h] [bp-1804h] BYREF
  _BYTE v15[4100]; // [sp+860h] [bp-1004h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_30772C);
  if ( v4 )
  {
    v4 = -1;
    strcpy(v14, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v8 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_read",
      9,
      343,
      100,
      v15);
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open64(s, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = snprintf(v14, 0x800u, "Failed to open gpio %d value for reading!", a1);
      V_LOCK(v9);
      v4 = -2;
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        197,
        "gpio_read",
        9,
        350,
        100,
        v15);
      pthread_mutex_unlock(&stru_30772C);
    }
    else if ( read(v5, &buf, 4u) < 0 )
    {
      strcpy(v14, "Failed to read value!");
      V_LOCK(*(_DWORD *)"alue!");
      v4 = -3;
      v11 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        197,
        "gpio_read",
        9,
        356,
        100,
        v15);
      close(v6);
      pthread_mutex_unlock(&stru_30772C);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_30772C);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
