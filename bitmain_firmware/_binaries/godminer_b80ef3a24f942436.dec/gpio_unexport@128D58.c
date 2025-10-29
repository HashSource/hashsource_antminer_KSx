int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  size_t v5; // r0
  int v6; // r0
  int v7; // r0
  int *v8; // r3
  int v9; // r1
  int v10; // r2
  int v12; // r5
  int v13; // r0
  int v14; // r0
  int *v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v23[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v24[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_311F4C) )
  {
    v3 = -1;
    strcpy(v23, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v18 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unexport",
      13,
      256,
      100,
      v24);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( v2 )
  {
    v12 = 0;
    v13 = snprintf(v23, 0x800u, "port %d already unexported, ret = %d", a1, v2);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v14);
    v15 = &g_zc;
    v16 = 80;
    v17 = 263;
  }
  else
  {
    v4 = open64("/sys/class/gpio/unexport", 1);
    if ( v4 >= 0 )
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        v20 = snprintf(v23, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK(v20);
        v3 = -2;
        v21 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v21);
        v8 = &g_zc;
        v9 = 100;
        v10 = 278;
      }
      else
      {
        v6 = snprintf(v23, 0x800u, "unexport gpio %d success", a1);
        V_LOCK(v6);
        v7 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v7);
        v8 = &g_zc;
        v9 = 20;
        v10 = 283;
      }
      zlog(
        *v8,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        192,
        "gpio_unexport",
        13,
        v10,
        v9,
        v24);
      close(v4);
      pthread_mutex_unlock(&stru_311F4C);
      return v3;
    }
    strcpy(v23, "Failed to open unexport for writing!");
    V_LOCK(*(_DWORD *)"ing!");
    v12 = -2;
    v19 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v19);
    v15 = &g_zc;
    v16 = 100;
    v17 = 271;
  }
  zlog(
    *v15,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
    192,
    "gpio_unexport",
    13,
    v17,
    v16,
    v24);
  pthread_mutex_unlock(&stru_311F4C);
  return v12;
}
