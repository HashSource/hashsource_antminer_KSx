int lcd_clear_result()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E8A54) )
  {
    strcpy(v1, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "lcd_clear_result",
      16,
      484,
      100,
      v2);
  }
  if ( dword_2D0FD0 > 0 )
    lcd_clear(dword_2D0FD0);
  return pthread_mutex_unlock(&stru_2E8A54);
}
