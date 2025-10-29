int uart_init()
{
  int v0; // r4
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( !dword_2E874C )
    {
      dword_2E874C = (int)new_c_map((int)sub_105090, 0, 0);
      return 0;
    }
    return 0;
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    V_LOCK();
    v0 = -1;
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_uart.c",
      192,
      "uart_init",
      9,
      39,
      100,
      v3);
  }
  return v0;
}
