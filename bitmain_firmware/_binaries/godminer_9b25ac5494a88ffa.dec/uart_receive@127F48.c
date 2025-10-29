ssize_t __fastcall uart_receive(void *a1, void *a2, size_t a3)
{
  pthread_mutex_t *v3; // r4
  int v7; // r0
  ssize_t v8; // r5
  void *v10; // r3
  int v11; // r0
  int v12; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+810h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)((char *)&unk_30A97C + 24 * (_DWORD)a1);
  pthread_mutex_lock(v3);
  v7 = sub_127A6C(a1);
  if ( v7 < 0 )
  {
    v10 = a1;
    v8 = -1;
    v11 = snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", v10, v7);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
      197,
      "uart_receive",
      12,
      234,
      100,
      v14);
    pthread_mutex_unlock(v3);
  }
  else
  {
    v8 = read(v7, a2, a3);
    pthread_mutex_unlock(v3);
  }
  return v8;
}
