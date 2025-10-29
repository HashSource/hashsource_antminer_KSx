int __fastcall lcd_clear(int a1)
{
  int v1; // r1
  int v2; // r6
  int v4; // r0
  int v5; // r0
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_30C7B8 )
    return -2;
  if ( dword_30C7BC == a1 )
  {
    if ( pthread_mutex_lock(&stru_30C7C0) )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock\n");
      v5 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        196,
        "lcd_clear",
        9,
        112,
        100,
        v6);
      return -4;
    }
    else
    {
      v2 = dword_30C7BC;
      memset(byte_30C7D8, 32, 64);
      lseek64(dword_30C7BC, v1, 0, 0, 0);
      write(v2, byte_30C7D8, 0x40u);
      pthread_mutex_unlock(&stru_30C7C0);
      return 0;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"bad param\n");
    v4 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      196,
      "lcd_clear",
      9,
      107,
      80,
      v6);
    return -3;
  }
}
