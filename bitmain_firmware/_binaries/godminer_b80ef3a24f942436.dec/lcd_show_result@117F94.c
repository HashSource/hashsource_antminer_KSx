int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v13[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_3113C8) )
  {
    v7 = -4;
    strcpy(s, "failed to api lock\n");
    V_LOCK(*(_DWORD *)"failed to api lock\n");
    v11 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "lcd_show_result",
      15,
      456,
      100,
      v13);
  }
  else
  {
    v6 = dword_2F1794;
    if ( dword_2F1794 < 0 )
    {
      dword_2F1794 = lcd_init((int)lcd_path);
      lcd_clear(dword_2F1794);
      v6 = dword_2F1794;
    }
    if ( v6 <= 0 )
    {
      v9 = snprintf(s, 0x800u, "failed to init %s\n", lcd_path);
      v7 = -1;
      V_LOCK(v9);
      v10 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
        190,
        "lcd_show_result",
        15,
        470,
        100,
        v13);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_3113C8);
  }
  return v7;
}
