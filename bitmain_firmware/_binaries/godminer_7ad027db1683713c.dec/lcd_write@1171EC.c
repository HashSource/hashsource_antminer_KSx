int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r11
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r10
  unsigned __int8 v10; // r5
  size_t v11; // r6
  char v14[2048]; // [sp+10h] [bp-1804h] BYREF
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_2E94B4 )
    return -2;
  v5 = a4;
  if ( dword_2E94B8 != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    strcpy(v14, "bad param\n");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      191,
      "lcd_write",
      9,
      60,
      80,
      v15);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_2E94BC);
    if ( v9 )
    {
      strcpy(v14, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v15, 0x1000u, v7, v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        191,
        "lcd_write",
        9,
        66,
        100,
        v15);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        memcpy(&byte_2E94D4[16 * v4], (const void *)(a3 + v9), v11);
        v5 -= v11;
        v4 = (char)v10;
        v9 += v11;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_2E94B8, byte_2E94D4, 0x40u);
      pthread_mutex_unlock(&stru_2E94BC);
      return 0;
    }
  }
}
