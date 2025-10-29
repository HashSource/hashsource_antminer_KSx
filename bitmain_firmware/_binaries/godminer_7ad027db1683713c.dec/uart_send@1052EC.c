int __fastcall uart_send(int a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r9
  unsigned int v8; // r4
  int v9; // r6
  unsigned int v10; // r11
  _BOOL4 v11; // r7
  ssize_t v12; // r12
  int v13; // r4
  pthread_mutex_t *mutex; // [sp+10h] [bp-180Ch]
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v18[4100]; // [sp+818h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)((char *)&unk_2E8750 + 24 * a1);
  pthread_mutex_lock(mutex);
  v6 = sub_1050A0(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    snprintf(s, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, v6);
    v13 = -1;
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
      192,
      "uart_send",
      9,
      174,
      100,
      v18);
LABEL_10:
    pthread_mutex_unlock(mutex);
    return v13;
  }
  else
  {
    flock(v6, 2);
    if ( a3 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do
      {
        ++v9;
        v12 = write(v7, (const void *)(a2 + v10), a3 - v10);
        v8 += v12;
        if ( v12 < 0 )
        {
          v13 = v12;
          snprintf(s, 0x800u, "write %d bytes failed, ret = %d on chain %d\n", a3, v12, a1);
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
            192,
            "uart_send",
            9,
            191,
            100,
            v18);
          goto LABEL_10;
        }
        v10 = v8;
        if ( v8 == a3 )
          goto LABEL_12;
        v11 = v8 < a3;
        if ( v9 > 29 )
          v11 = 0;
        usleep((__useconds_t)&elf_hash_chain[4398]);
      }
      while ( v11 );
      flock(v7, 8);
      pthread_mutex_unlock(mutex);
      snprintf(s, 0x800u, "write %d bytes failed, ret = %d on chain %d\n", a3, v8, a1);
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "uart_send",
        9,
        207,
        100,
        v18);
      return v8;
    }
    else
    {
      v8 = 0;
LABEL_12:
      flock(v7, 8);
      pthread_mutex_unlock(mutex);
      return v8;
    }
  }
}
