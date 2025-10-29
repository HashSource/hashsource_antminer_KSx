int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v12[1025]; // [sp+818h] [bp-1004h] BYREF

  v10 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      138,
      100,
      v12);
    return -1;
  }
  if ( pthread_mutex_lock(&stru_2E9BD8) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK(*(_DWORD *)"o ctrl mutex");
    v8 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      143,
      100,
      v12);
    return -1;
  }
  if ( exists_c_map(dword_2E9BF0, &v10) )
  {
    v3 = snprintf(s, 0x800u, "port %d already exist in callback map ", v10);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      155,
      20,
      v12);
  }
  else
  {
    v6 = snprintf(s, 0x800u, "add %d to callback map", v10);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      149,
      20,
      v12);
    v12[0] = a2;
    v12[1] = -1;
    insert_c_map(dword_2E9BF0, &v10, 4, v12, 8);
  }
  pthread_mutex_unlock(&stru_2E9BD8);
  return 0;
}
