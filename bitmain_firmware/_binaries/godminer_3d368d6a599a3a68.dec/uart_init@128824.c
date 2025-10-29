int uart_init()
{
  int v0; // r4
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( !dword_3077D0 )
    {
      dword_3077D0 = (int)new_c_map((int)sub_1286E8, 0, 0);
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
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_uart.c",
      197,
      "uart_init",
      9,
      39,
      100,
      v3);
  }
  return v0;
}
