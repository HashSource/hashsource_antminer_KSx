int __fastcall sub_125BF0(int a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = open_pic(LOBYTE(g_chain_info[2 * a1]));
  if ( v2 < 0 )
  {
    V_LOCK(v2);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_pic_for_one_chain",
      26,
      147,
      100,
      v7);
    return -1;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    v4 = printf("chain offset %d, id %d, reset pic error!\n", a1, g_chain_info[2 * a1]);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_pic_for_one_chain",
      26,
      153,
      100,
      v7);
    return -1;
  }
  usleep((__useconds_t)"1a378b912f98865E");
  if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
  {
    usleep((__useconds_t)"1a378b912f98865E");
    return 0;
  }
  else
  {
    printf("chain offset %d, id %d, pic jump to app error!\n", a1, g_chain_info[2 * a1]);
    return -1;
  }
}
