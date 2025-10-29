int __fastcall uart_get_readable_byte_num(void *a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+818h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_30794C + 24 * (_DWORD)a1);
  v8 = 0;
  pthread_mutex_lock(v1);
  v3 = sub_127E48(a1);
  if ( v3 < 0 )
  {
    v6 = snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, v3);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
      197,
      "uart_get_readable_byte_num",
      26,
      505,
      100,
      v10);
    pthread_mutex_unlock(v1);
    return -1;
  }
  else
  {
    if ( ioctl(v3, 0x541Bu, &v8, v3) )
    {
      strcpy(s, "ioctl to FIONREAD failed\n");
      V_LOCK(*(_DWORD *)"D failed\n");
      v5 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
        197,
        "uart_get_readable_byte_num",
        26,
        511,
        80,
        v10);
      v8 = 0;
    }
    pthread_mutex_unlock(v1);
    return v8;
  }
}
