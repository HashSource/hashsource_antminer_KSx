int __fastcall platform_uninit(int result)
{
  int v1; // r6
  int v2; // r0
  int i; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v14[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( platform_inited[0] )
  {
    v1 = hal_chain_max_num(result);
    v2 = fpga_uninit();
    if ( v1 > 0 )
    {
      for ( i = 0; v1 != i; ++i )
      {
        while ( hal_chain_plug_addr(i) < 0 )
        {
          v4 = snprintf(s, 0x800u, "fail to get socket for chain %d\n", i);
          V_LOCK(v4);
          v5 = logfmt_raw((int)v14, 0x1000u);
          V_UNLOCK(v5);
          v6 = g_zc;
          v7 = 112;
LABEL_8:
          ++i;
          v2 = zlog(
                 v6,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
                 194,
                 "platform_uninit",
                 15,
                 v7,
                 80,
                 v14);
          if ( v1 == i )
            goto LABEL_9;
        }
        gpio_unexport();
        if ( hal_chain_reset_addr(i) < 0 )
        {
          v11 = snprintf(s, 0x800u, "fail to get reset for chain %d\n", i);
          V_LOCK(v11);
          v12 = logfmt_raw((int)v14, 0x1000u);
          V_UNLOCK(v12);
          v6 = g_zc;
          v7 = 120;
          goto LABEL_8;
        }
        v2 = gpio_unexport();
      }
    }
LABEL_9:
    v8 = uart_uninit(v2);
    v9 = fan_uninit(v8);
    v10 = ui_uninit(v9);
    result = gpio_uninit(v10);
    platform_inited[0] = 0;
  }
  return result;
}
