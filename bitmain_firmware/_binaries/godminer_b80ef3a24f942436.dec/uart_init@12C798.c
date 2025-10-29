int uart_init()
{
  int v0; // r4
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( !dword_311FF0 )
    {
      dword_311FF0 = (int)new_c_map((int)sub_12C65C, 0, 0);
      return 0;
    }
    return 0;
  }
  else
  {
    V_LOCK(1836216166);
    v0 = -1;
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
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
