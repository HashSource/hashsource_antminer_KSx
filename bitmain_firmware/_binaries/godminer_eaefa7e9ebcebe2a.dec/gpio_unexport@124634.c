int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  size_t v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v17[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v18[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_307724) )
  {
    v3 = -1;
    strcpy(v17, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v12 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unexport",
      13,
      256,
      100,
      v18);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( v2 )
  {
    v9 = 0;
    v10 = snprintf(v17, 0x800u, "port %d already unexported, ret = %d", a1, v2);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unexport",
      13,
      263,
      80,
      v18);
  }
  else
  {
    v4 = open64("/sys/class/gpio/unexport", 1);
    if ( v4 >= 0 )
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        v14 = snprintf(v17, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK(v14);
        v3 = -2;
        v15 = logfmt_raw((int)v18, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_unexport",
          13,
          278,
          100,
          v18);
      }
      else
      {
        v6 = snprintf(v17, 0x800u, "unexport gpio %d success", a1);
        V_LOCK(v6);
        v7 = logfmt_raw((int)v18, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_unexport",
          13,
          283,
          20,
          v18);
      }
      close(v4);
      pthread_mutex_unlock(&stru_307724);
      return v3;
    }
    strcpy(v17, "Failed to open unexport for writing!");
    V_LOCK(*(_DWORD *)"ing!");
    v9 = -2;
    v13 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unexport",
      13,
      271,
      100,
      v18);
  }
  pthread_mutex_unlock(&stru_307724);
  return v9;
}
