int __fastcall uart_get_config(void *a1, int a2, speed_t *a3, _DWORD *a4)
{
  pthread_mutex_t *v4; // r4
  int v9; // r10
  int v10; // r0
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r0
  speed_t v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r0
  struct termios termios_p; // [sp+14h] [bp-1840h] BYREF
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v22[4100]; // [sp+850h] [bp-1004h] BYREF

  v4 = (pthread_mutex_t *)((char *)&unk_30C81C + 24 * (_DWORD)a1);
  pthread_mutex_lock(v4);
  v9 = sub_128958(a1);
  v10 = snprintf(s, 0x800u, "get config of chain %d\n", a1);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
    197,
    "uart_get_config",
    15,
    409,
    20,
    v22);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      tcgetattr(v9, &termios_p);
      if ( *a4 <= 3u )
      {
        v12 = -2;
        strcpy(s, "bad param to get vmin, size too small\n");
        V_LOCK(*(_DWORD *)"small\n");
        v19 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
          197,
          "get_vmin",
          8,
          336,
          100,
          v22);
      }
      else
      {
        v12 = 0;
        *a3 = termios_p.c_cc[6];
        *a4 = 4;
      }
    }
    else
    {
      v12 = -1;
      v13 = snprintf(s, 0x800u, "unknown get config type = %d\n", a2);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
        197,
        "uart_get_config",
        15,
        419,
        80,
        v22);
    }
  }
  else
  {
    tcgetattr(v9, &termios_p);
    v16 = cfgetispeed(&termios_p);
    if ( v16 == cfgetospeed(&termios_p) )
    {
      if ( *a4 <= 3u )
      {
        v12 = -2;
        strcpy(s, "bad param to get baud, size too small\n");
        V_LOCK(*(_DWORD *)"small\n");
        v17 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
          197,
          "get_baud",
          8,
          265,
          100,
          v22);
      }
      else
      {
        *a3 = v16;
        v12 = 0;
        *a4 = 4;
      }
    }
    else
    {
      v12 = -1;
      strcpy(s, "input and output speed not match\n");
      V_LOCK(*(_DWORD *)" speed not match\n");
      v18 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
        197,
        "get_baud",
        8,
        260,
        100,
        v22);
    }
  }
  pthread_mutex_unlock(v4);
  return v12;
}
