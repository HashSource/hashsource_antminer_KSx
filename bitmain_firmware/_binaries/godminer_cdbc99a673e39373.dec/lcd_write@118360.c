int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r11
  unsigned int v5; // r4
  bool v6; // cc
  int v8; // r10
  unsigned __int8 v9; // r5
  size_t v10; // r6
  int v13; // r0
  int v14; // r0
  _BYTE v15[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_2EA9AC )
    return -2;
  v5 = a4;
  if ( dword_2EA9B0 != a1 )
    goto LABEL_15;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  if ( v6 )
  {
LABEL_15:
    V_LOCK(*(_DWORD *)"bad param\n");
    v13 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v13);
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
    v8 = pthread_mutex_lock(&stru_2EA9B4);
    if ( v8 )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock\n");
      v14 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v14);
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
        v9 = v4 + 1;
        if ( v5 >= 0x10 )
          v10 = 16;
        else
          v10 = v5;
        memcpy(&byte_2EA9CC[16 * v4], (const void *)(a3 + v8), v10);
        v5 -= v10;
        v4 = (char)v9;
        v8 += v10;
      }
      while ( v9 <= 3u && v5 != 0 );
      write(dword_2EA9B0, byte_2EA9CC, 0x40u);
      pthread_mutex_unlock(&stru_2EA9B4);
      return 0;
    }
  }
}
