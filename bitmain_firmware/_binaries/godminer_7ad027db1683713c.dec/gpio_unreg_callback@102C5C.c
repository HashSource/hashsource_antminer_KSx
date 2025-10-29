int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v3; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v5[4100]; // [sp+818h] [bp-1004h] BYREF

  v3 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      173,
      100,
      v5);
    return -1;
  }
  if ( pthread_mutex_lock(&stru_2E86E0) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      178,
      100,
      v5);
    return -1;
  }
  if ( exists_c_map((int *)dword_2E86F8, (int)&v3) == (int *)1 )
  {
    snprintf(s, 0x800u, "remove %d from callback list", v3);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      184,
      20,
      v5);
    remove_c_map((int *)dword_2E86F8, (int)&v3);
  }
  else
  {
    strcpy(s, "callback function not registered before");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      189,
      80,
      v5);
  }
  pthread_mutex_unlock(&stru_2E86E0);
  return 0;
}
