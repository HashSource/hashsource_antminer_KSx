int __fastcall sub_112FFC(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "chain offset %d, id %d, open pic error!\n", a1, g_chain_info[2 * a1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_pic_for_one_chain",
      26,
      145,
      100,
      v3);
    return -1;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    printf("chain offset %d, id %d, reset pic error!\n", a1, g_chain_info[2 * a1]);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Sweep error string = J%d:5.", g_chain_info[2 * a1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_pic_for_one_chain",
      26,
      151,
      100,
      v3);
    return -1;
  }
  usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
  if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
  {
    usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
    return 0;
  }
  else
  {
    printf("chain offset %d, id %d, pic jump to app error!\n", a1, g_chain_info[2 * a1]);
    return -1;
  }
}
