int __fastcall lcd_init(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_2E94B4 )
    return 0;
  if ( a1 )
  {
    result = open64(a1, 2050);
    dword_2E94B8 = result;
    if ( result < 0 )
    {
      strcpy(v2, "open lcd failed!!!\n");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        191,
        "lcd_init",
        8,
        32,
        100,
        v3);
      return -1;
    }
    else
    {
      dword_2E94B4 = 1;
    }
  }
  else
  {
    strcpy(v2, "bad param\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      191,
      "lcd_init",
      8,
      26,
      100,
      v3);
    return -3;
  }
  return result;
}
