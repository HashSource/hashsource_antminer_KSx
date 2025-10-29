int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  size_t v5; // r0
  int v7; // r5
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v9[2048]; // [sp+50h] [bp-1804h] BYREF
  char v10[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E86FC) )
  {
    v3 = -1;
    strcpy(v9, "failed to api lock");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unexport",
      13,
      256,
      100,
      v10);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( v2 )
  {
    v7 = 0;
    snprintf(v9, 0x800u, "port %d already unexported, ret = %d", a1, v2);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unexport",
      13,
      263,
      80,
      v10);
  }
  else
  {
    v4 = open64("/sys/class/gpio/unexport", 1);
    if ( v4 >= 0 )
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        snprintf(v9, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK();
        v3 = -2;
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_unexport",
          13,
          278,
          100,
          v10);
      }
      else
      {
        snprintf(v9, 0x800u, "unexport gpio %d success", a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_unexport",
          13,
          283,
          20,
          v10);
      }
      close(v4);
      pthread_mutex_unlock(&stru_2E86FC);
      return v3;
    }
    strcpy(v9, "Failed to open unexport for writing!");
    V_LOCK();
    v7 = -2;
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unexport",
      13,
      271,
      100,
      v10);
  }
  pthread_mutex_unlock(&stru_2E86FC);
  return v7;
}
