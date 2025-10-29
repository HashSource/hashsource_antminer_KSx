int __fastcall lcd_init(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  _BYTE v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_311F90 )
    return 0;
  if ( a1 )
  {
    result = open64(a1, 2050);
    dword_311F94 = result;
    if ( result < 0 )
    {
      V_LOCK(*(_DWORD *)"open lcd failed!!!\n");
      v3 = logfmt_raw((int)v4, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        191,
        "lcd_init",
        8,
        32,
        100,
        v4);
      return -1;
    }
    else
    {
      dword_311F90 = 1;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"bad param\n");
    v2 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      191,
      "lcd_init",
      8,
      26,
      100,
      v4);
    return -3;
  }
  return result;
}
