void platform_uninit()
{
  int v0; // r6
  int i; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( platform_inited[0] )
  {
    v0 = hal_chain_max_num();
    fpga_uninit();
    if ( v0 > 0 )
    {
      for ( i = 0; v0 != i; ++i )
      {
        while ( 1 )
        {
          v3 = hal_chain_plug_addr(i);
          if ( v3 >= 0 )
            break;
          v4 = snprintf(s, 0x800u, "fail to get socket for chain %d\n", i);
          V_LOCK(v4);
          v5 = logfmt_raw((int)v11, 0x1000u);
          V_UNLOCK(v5);
          v6 = g_zc;
          v7 = 112;
LABEL_8:
          ++i;
          zlog(
            v6,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_common.c",
            199,
            "platform_uninit",
            15,
            v7,
            80,
            v11);
          if ( v0 == i )
            goto LABEL_9;
        }
        gpio_unexport(v3);
        v2 = hal_chain_reset_addr(i);
        if ( v2 < 0 )
        {
          v8 = snprintf(s, 0x800u, "fail to get reset for chain %d\n", i);
          V_LOCK(v8);
          v9 = logfmt_raw((int)v11, 0x1000u);
          V_UNLOCK(v9);
          v6 = g_zc;
          v7 = 120;
          goto LABEL_8;
        }
        gpio_unexport(v2);
      }
    }
LABEL_9:
    uart_uninit();
    fan_uninit();
    ui_uninit();
    gpio_uninit();
    platform_inited[0] = 0;
  }
}
