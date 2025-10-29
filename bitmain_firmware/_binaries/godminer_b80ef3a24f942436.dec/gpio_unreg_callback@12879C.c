int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v11[4100]; // [sp+818h] [bp-1004h] BYREF

  v9 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    v7 = 173;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_311F30) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK(*(_DWORD *)"o ctrl mutex");
    v6 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v6);
    v7 = 178;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      v7,
      100,
      v11);
    return -1;
  }
  if ( exists_c_map((int *)dword_311F48, (int)&v9) == (int *)1 )
  {
    v4 = snprintf(s, 0x800u, "remove %d from callback list", v9);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      184,
      20,
      v11);
    remove_c_map((int *)dword_311F48, (int)&v9);
  }
  else
  {
    strcpy(s, "callback function not registered before");
    V_LOCK(*(_DWORD *)" before");
    v2 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      192,
      "gpio_unreg_callback",
      19,
      189,
      80,
      v11);
  }
  pthread_mutex_unlock(&stru_311F30);
  return 0;
}
