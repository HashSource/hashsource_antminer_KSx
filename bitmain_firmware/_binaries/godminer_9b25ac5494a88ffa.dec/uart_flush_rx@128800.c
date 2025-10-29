int __fastcall uart_flush_rx(void *a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r0
  int v5; // r0
  int v6; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_30A7FC + 24 * (_DWORD)a1);
  pthread_mutex_lock(v1);
  v3 = sub_127A6C(a1);
  if ( v3 < 0 )
  {
    v5 = snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, v3);
    V_LOCK(v5);
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
      197,
      "uart_flush_rx",
      13,
      489,
      100,
      v8);
    pthread_mutex_unlock(v1);
    return -1;
  }
  else
  {
    tcflush(v3, 1);
    pthread_mutex_unlock(v1);
    return 0;
  }
}
