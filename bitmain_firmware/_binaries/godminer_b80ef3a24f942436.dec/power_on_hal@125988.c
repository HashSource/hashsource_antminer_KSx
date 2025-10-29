int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int is_pic_mcu_en; // r4
  int v8; // r4
  int v9; // r0
  int v10; // r0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    v8 = pic1704_reset(g_chain_info[2 * a1]);
    usleep((__useconds_t)"1a378b912f98865E");
    is_pic_mcu_en = v8 + pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep((__useconds_t)"1a378b912f98865E");
    if ( a3 )
      goto LABEL_3;
  }
  else if ( a3 )
  {
    goto LABEL_3;
  }
  if ( !platform_is_pic_mcu_en() )
  {
LABEL_3:
    if ( !platform_is_pic_mcu_en() )
      goto LABEL_4;
    goto LABEL_10;
  }
  set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en() )
    goto LABEL_4;
LABEL_10:
  v9 = pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( is_pic_mcu_en + v9 != 3 )
  {
    V_LOCK(v9);
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "power_on_hal",
      12,
      457,
      100,
      v11);
    return -1;
  }
LABEL_4:
  if ( (unsigned int)(opt_algo - 11) > 1 )
    sleep(1u);
  return 0;
}
