int __fastcall uart_get_config(int a1, int a2, speed_t *a3, _DWORD *a4)
{
  pthread_mutex_t *v4; // r4
  int v9; // r10
  int v10; // r6
  speed_t v12; // r6
  struct termios termios_p; // [sp+14h] [bp-1840h] BYREF
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  char v15[4100]; // [sp+850h] [bp-1004h] BYREF

  v4 = (pthread_mutex_t *)((char *)&unk_2E8750 + 24 * a1);
  pthread_mutex_lock(v4);
  v9 = sub_1050A0(a1);
  snprintf(s, 0x800u, "get config of chain %d\n", a1);
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
    192,
    "uart_get_config",
    15,
    409,
    20,
    v15);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      tcgetattr(v9, &termios_p);
      if ( *a4 <= 3u )
      {
        v10 = -2;
        strcpy(s, "bad param to get vmin, size too small\n");
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
          192,
          "get_vmin",
          8,
          336,
          100,
          v15);
      }
      else
      {
        v10 = 0;
        *a3 = termios_p.c_cc[6];
        *a4 = 4;
      }
    }
    else
    {
      v10 = -1;
      snprintf(s, 0x800u, "unknown get config type = %d\n", a2);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "uart_get_config",
        15,
        419,
        80,
        v15);
    }
  }
  else
  {
    tcgetattr(v9, &termios_p);
    v12 = cfgetispeed(&termios_p);
    if ( v12 == cfgetospeed(&termios_p) )
    {
      if ( *a4 <= 3u )
      {
        v10 = -2;
        strcpy(s, "bad param to get baud, size too small\n");
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
          192,
          "get_baud",
          8,
          265,
          100,
          v15);
      }
      else
      {
        *a3 = v12;
        v10 = 0;
        *a4 = 4;
      }
    }
    else
    {
      v10 = -1;
      strcpy(s, "input and output speed not match\n");
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "get_baud",
        8,
        260,
        100,
        v15);
    }
  }
  pthread_mutex_unlock(v4);
  return v10;
}
