int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v10[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unreg_callback",
      19,
      173,
      100,
      v10);
    return -1;
  }
  if ( pthread_mutex_lock(&stru_307710) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK(*(_DWORD *)"o ctrl mutex");
    v6 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unreg_callback",
      19,
      178,
      100,
      v10);
    return -1;
  }
  if ( exists_c_map((_DWORD *)dword_307728) == (_DWORD *)1 )
  {
    v4 = snprintf(s, 0x800u, "remove %d from callback list", a1);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unreg_callback",
      19,
      184,
      20,
      v10);
    remove_c_map((_DWORD *)dword_307728);
  }
  else
  {
    strcpy(s, "callback function not registered before");
    V_LOCK(*(_DWORD *)" before");
    v2 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      197,
      "gpio_unreg_callback",
      19,
      189,
      80,
      v10);
  }
  pthread_mutex_unlock(&stru_307710);
  return 0;
}
