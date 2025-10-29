int __fastcall uart_set_config(int a1, speed_t a2, _DWORD *a3, unsigned int a4)
{
  pthread_mutex_t *v4; // r4
  int v9; // r0
  int v10; // r5
  int v11; // r5
  int v12; // r0
  int v13; // r0
  char *v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r0
  struct termios termios_p; // [sp+14h] [bp-183Ch] BYREF
  char s[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v21[4096]; // [sp+850h] [bp-1000h] BYREF

  v4 = (pthread_mutex_t *)((char *)&unk_311FF4 + 24 * a1);
  pthread_mutex_lock(v4);
  v9 = sub_12C66C(a1);
  v10 = v9;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      tcgetattr(v9, &termios_p);
      if ( a4 <= 3 )
      {
        v11 = -2;
        strcpy(s, "bad param to set baud, size too small\n");
        V_LOCK(*(_DWORD *)"small\n");
        v17 = logfmt_raw((int)v21, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
          192,
          "set_vmin",
          8,
          353,
          100,
          v21);
      }
      else
      {
        termios_p.c_cc[6] = *a3;
        tcsetattr(v10, 0, &termios_p);
        tcflush(v10, 2);
        v11 = 0;
      }
    }
    else
    {
      v12 = snprintf(s, 0x800u, "unknown set config type = %d\n", a2);
      v11 = -1;
      V_LOCK(v12);
      v13 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "uart_set_config",
        15,
        389,
        80,
        v21);
    }
  }
  else
  {
    tcgetattr(v9, &termios_p);
    if ( a4 <= 3 )
    {
      v11 = -2;
      strcpy(s, "bad param to set baud, size too small\n");
      V_LOCK(*(_DWORD *)"small\n");
      v18 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
        192,
        "set_baud",
        8,
        312,
        100,
        v21);
    }
    else
    {
      if ( *a3 > 0x1Au )
        a2 = 4098;
      else
        v15 = &aUartInit_0[4 * *a3];
      if ( *a3 <= 0x1Au )
        a2 = *((_DWORD *)v15 + 13);
      cfsetispeed(&termios_p, a2);
      cfsetospeed(&termios_p, a2);
      tcsetattr(v10, 1, &termios_p);
      v16 = v10;
      v11 = 0;
      tcflush(v16, 2);
    }
  }
  pthread_mutex_unlock(v4);
  return v11;
}
