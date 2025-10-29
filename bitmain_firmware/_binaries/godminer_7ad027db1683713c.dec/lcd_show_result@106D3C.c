int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E8A54) )
  {
    v7 = -4;
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "lcd_show_result",
      15,
      456,
      100,
      v10);
  }
  else
  {
    v6 = dword_2D0FD0;
    if ( dword_2D0FD0 < 0 )
    {
      dword_2D0FD0 = lcd_init((int)lcd_path);
      lcd_clear(dword_2D0FD0);
      v6 = dword_2D0FD0;
    }
    if ( v6 <= 0 )
    {
      snprintf(s, 0x800u, "failed to init %s\n", lcd_path);
      v7 = -1;
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
        190,
        "lcd_show_result",
        15,
        470,
        100,
        v10);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_2E8A54);
  }
  return v7;
}
