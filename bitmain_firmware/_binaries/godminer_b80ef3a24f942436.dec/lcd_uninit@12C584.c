int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_311F90 )
    return 0;
  result = close(a1);
  if ( result )
  {
    V_LOCK(*(_DWORD *)"!!!\n");
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      191,
      "lcd_uninit",
      10,
      135,
      100,
      v3);
    result = -1;
  }
  dword_311F90 = 0;
  return result;
}
