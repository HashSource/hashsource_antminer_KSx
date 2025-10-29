ssize_t __fastcall uart_receive(int a1, void *a2, size_t a3)
{
  pthread_mutex_t *v3; // r4
  int v7; // r0
  ssize_t v8; // r5
  int v10; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v12[4100]; // [sp+810h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)((char *)&unk_2E88D0 + 24 * a1);
  pthread_mutex_lock(v3);
  v7 = sub_1050A0(a1);
  if ( v7 < 0 )
  {
    v10 = a1;
    v8 = -1;
    snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", v10, v7);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
      192,
      "uart_receive",
      12,
      234,
      100,
      v12);
    pthread_mutex_unlock(v3);
  }
  else
  {
    v8 = read(v7, a2, a3);
    pthread_mutex_unlock(v3);
  }
  return v8;
}
