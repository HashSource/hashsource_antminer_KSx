int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v4; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v6[1025]; // [sp+818h] [bp-1004h] BYREF

  v4 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK();
    logfmt_raw((char *)v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      138,
      100,
      v6);
    return -1;
  }
  if ( pthread_mutex_lock(&stru_2E86E0) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw((char *)v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      143,
      100,
      v6);
    return -1;
  }
  if ( exists_c_map((int *)dword_2E86F8, (int)&v4) )
  {
    snprintf(s, 0x800u, "port %d already exist in callback map ", v4);
    V_LOCK();
    logfmt_raw((char *)v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      155,
      20,
      v6);
  }
  else
  {
    snprintf(s, 0x800u, "add %d to callback map", v4);
    V_LOCK();
    logfmt_raw((char *)v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_reg_callback",
      17,
      149,
      20,
      v6);
    v6[0] = a2;
    v6[1] = -1;
    insert_c_map((int *)dword_2E86F8, &v4, 4u, v6, 8u);
  }
  pthread_mutex_unlock(&stru_2E86E0);
  return 0;
}
