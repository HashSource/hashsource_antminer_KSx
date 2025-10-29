int __fastcall lcd_clear(int a1)
{
  int v1; // r1
  int v2; // r6
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_2E94B4 )
    return -2;
  if ( dword_2E94B8 == a1 )
  {
    if ( pthread_mutex_lock(&stru_2E94BC) )
    {
      strcpy(v4, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        191,
        "lcd_clear",
        9,
        112,
        100,
        v5);
      return -4;
    }
    else
    {
      v2 = dword_2E94B8;
      memset(byte_2E94D4, 32, 64);
      lseek64(dword_2E94B8, v1, 0, 0, 0);
      write(v2, byte_2E94D4, 0x40u);
      pthread_mutex_unlock(&stru_2E94BC);
      return 0;
    }
  }
  else
  {
    strcpy(v4, "bad param\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      191,
      "lcd_clear",
      9,
      107,
      80,
      v5);
    return -3;
  }
}
