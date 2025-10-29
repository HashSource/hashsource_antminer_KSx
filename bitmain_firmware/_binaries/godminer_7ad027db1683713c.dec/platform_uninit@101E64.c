void platform_uninit()
{
  int v0; // r6
  int i; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r3
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( platform_inited[0] )
  {
    v0 = hal_chain_max_num();
    fpga_uninit(v0);
    if ( v0 > 0 )
    {
      for ( i = 0; v0 != i; ++i )
      {
        while ( 1 )
        {
          v3 = hal_chain_plug_addr(i);
          if ( v3 >= 0 )
            break;
          snprintf(s, 0x800u, "fail to get socket for chain %d\n", i);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, s);
          V_UNLOCK();
          v4 = g_zc;
          v5 = 112;
LABEL_8:
          ++i;
          zlog(
            v4,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
            194,
            "platform_uninit",
            15,
            v5,
            80,
            v7);
          if ( v0 == i )
            goto LABEL_9;
        }
        gpio_unexport(v3);
        v2 = hal_chain_reset_addr(i);
        if ( v2 < 0 )
        {
          snprintf(s, 0x800u, "fail to get reset for chain %d\n", i);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, s);
          V_UNLOCK();
          v4 = g_zc;
          v5 = 120;
          goto LABEL_8;
        }
        gpio_unexport(v2);
      }
    }
LABEL_9:
    diag_LogFileClose();
    fan_uninit();
    ui_uninit();
    gpio_uninit();
    platform_inited[0] = 0;
  }
}
