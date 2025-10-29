int __fastcall dev_init_hal(int a1)
{
  int v1; // r0
  int v2; // r4
  int hash_on_plug; // r0
  int v4; // r3
  unsigned int v5; // r8
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int sw_version; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  char v19; // [sp+27h] [bp-1005h] BYREF
  _BYTE v20[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  v2 = v1;
  if ( v1 )
  {
    V_LOCK(v1);
    v17 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
      185,
      "dev_init_hal",
      12,
      59,
      100,
      v20);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    v4 = total_chain;
    v5 = hash_on_plug;
    do
    {
      while ( ((v5 >> v2) & 1) == 0 )
      {
        if ( ++v2 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v4] = v2;
      LOBYTE(g_chain_info[2 * v4 + 1]) = 1;
      V_LOCK(hash_on_plug);
      v6 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
        185,
        "dev_init_hal",
        12,
        69,
        60,
        v20);
      hash_on_plug = platform_is_pic_mcu_en();
      if ( hash_on_plug )
      {
        if ( open_pic((unsigned __int8)v2) < 0 )
        {
          V_LOCK((unsigned __int8)v2);
          v15 = logfmt_raw((int)v20, 0x1000u);
          V_UNLOCK(v15);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
            185,
            "dev_init_hal",
            12,
            73,
            100,
            v20);
          return -1;
        }
        pic1704_reset(v2);
        usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
        pic1704_jump_to_app(v2);
        usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
        sw_version = pic1704_get_sw_version(g_chain_info[2 * total_chain], &v19);
        if ( !sw_version )
        {
          V_LOCK(0);
          v16 = logfmt_raw((int)v20, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
            185,
            "dev_init_hal",
            12,
            84,
            100,
            v20);
          return -1;
        }
        V_LOCK(sw_version);
        v12 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v12);
        hash_on_plug = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
                         185,
                         "dev_init_hal",
                         12,
                         90,
                         60,
                         v20);
      }
      ++v2;
      v4 = ++total_chain;
    }
    while ( v2 != 16 );
LABEL_7:
    if ( a1 != v4 )
    {
      v13 = set_miner_6060info_board_num_less_than_design_err(1);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
        185,
        "dev_init_hal",
        12,
        99,
        100,
        v20);
    }
    fpga_reset();
    V_LOCK(v7);
    v8 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v8);
    v9 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
           185,
           "dev_init_hal",
           12,
           103,
           60,
           v20);
    enable_bypass_mode(v9);
    dev_config_hal((char *)&stru_1C1F4.st_info);
    return 0;
  }
}
