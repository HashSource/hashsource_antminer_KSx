int __fastcall uart_flush(int a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v6[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_2E8750 + 24 * a1);
  pthread_mutex_lock(v1);
  v3 = sub_1050A0(a1);
  if ( v3 < 0 )
  {
    snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, v3);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
      192,
      "uart_flush",
      10,
      455,
      100,
      v6);
    pthread_mutex_unlock(v1);
    return -1;
  }
  else
  {
    tcflush(v3, 2);
    pthread_mutex_unlock(v1);
    return 0;
  }
}
