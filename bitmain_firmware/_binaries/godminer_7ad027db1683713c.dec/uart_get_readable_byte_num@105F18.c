int __fastcall uart_get_readable_byte_num(int a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r0
  int v5; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v7[4096]; // [sp+818h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_2E88D0 + 24 * a1);
  v5 = 0;
  pthread_mutex_lock(v1);
  v3 = sub_1050A0(a1);
  if ( v3 < 0 )
  {
    snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, v3);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
      192,
      "uart_get_readable_byte_num",
      26,
      505,
      100,
      v7);
    pthread_mutex_unlock(v1);
    return -1;
  }
  else
  {
    if ( ioctl(v3, 0x541Bu, &v5, v3) )
    {
      strcpy(s, "ioctl to FIONREAD failed\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "uart_get_readable_byte_num",
        26,
        511,
        80,
        v7);
      v5 = 0;
    }
    pthread_mutex_unlock(v1);
    return v5;
  }
}
