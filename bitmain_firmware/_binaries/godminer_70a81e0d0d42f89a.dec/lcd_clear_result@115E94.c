int lcd_clear_result()
{
  int v1; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_30CF04) )
  {
    V_LOCK(*(_DWORD *)"failed to api lock\n");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
      195,
      "lcd_clear_result",
      16,
      484,
      100,
      v2);
  }
  if ( dword_2E8EC0 > 0 )
    lcd_clear();
  return pthread_mutex_unlock(&stru_30CF04);
}
