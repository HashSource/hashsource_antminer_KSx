int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  int hash_on_plug; // r0
  int v3; // r3
  unsigned int v4; // r8
  unsigned __int8 v7; // [sp+27h] [bp-1005h] BYREF
  char v8[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "platform init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_hal",
      12,
      57,
      100,
      v8);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    v3 = total_chain;
    v4 = hash_on_plug;
    do
    {
      while ( ((v4 >> v1) & 1) == 0 )
      {
        if ( ++v1 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v3] = v1;
      LOBYTE(g_chain_info[2 * v3 + 1]) = 1;
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "chain_offset %d, chain %d", total_chain, g_chain_info[2 * total_chain]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
        180,
        "dev_init_hal",
        12,
        67,
        60,
        v8);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(
            v8,
            0x1000u,
            0,
            "chain_offset %d, chain %d, open pic error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
            180,
            "dev_init_hal",
            12,
            71,
            100,
            v8);
          return -1;
        }
        pic1704_reset(v1);
        usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
        pic1704_jump_to_app(v1);
        usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
        if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v7) )
        {
          V_LOCK();
          logfmt_raw(
            v8,
            0x1000u,
            0,
            "chain_offset %d, chain %d, get_sw_version error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
            180,
            "dev_init_hal",
            12,
            82,
            100,
            v8);
          return -1;
        }
        V_LOCK();
        logfmt_raw(
          v8,
          0x1000u,
          0,
          "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
          total_chain,
          g_chain_info[2 * total_chain],
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
          180,
          "dev_init_hal",
          12,
          88,
          60,
          v8);
      }
      ++v1;
      v3 = ++total_chain;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v3 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "Sweep error string = %s.", "J0:8");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
        180,
        "dev_init_hal",
        12,
        96,
        100,
        v8);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
        180,
        "dev_init_hal",
        12,
        97,
        100,
        v8);
    }
    fpga_reset();
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "reset fpga");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_hal",
      12,
      101,
      60,
      v8);
    enable_bypass_mode();
    dev_config_hal((int)&stru_1C200);
    return 0;
  }
}
