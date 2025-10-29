int lcd_show_result()
{
  int v0; // r0
  int v1; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_306BA0) )
  {
    v1 = -4;
    strcpy(s, "failed to api lock\n");
    V_LOCK(*(_DWORD *)"failed to api lock\n");
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
      195,
      "lcd_show_result",
      15,
      456,
      100,
      v7);
  }
  else
  {
    v0 = dword_2E6BB4;
    if ( dword_2E6BB4 < 0 )
    {
      dword_2E6BB4 = lcd_init(lcd_path);
      lcd_clear();
      v0 = dword_2E6BB4;
    }
    if ( v0 <= 0 )
    {
      v3 = snprintf(s, 0x800u, "failed to init %s\n", lcd_path);
      v1 = -1;
      V_LOCK(v3);
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
        195,
        "lcd_show_result",
        15,
        470,
        100,
        v7);
    }
    else
    {
      v1 = lcd_write();
    }
    pthread_mutex_unlock(&stru_306BA0);
  }
  return v1;
}
