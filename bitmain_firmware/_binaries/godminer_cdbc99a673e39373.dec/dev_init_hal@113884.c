int __fastcall dev_init_hal(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int hash_on_plug; // r0
  int v6; // r3
  unsigned int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int sw_version; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  char v21; // [sp+27h] [bp-1005h] BYREF
  _BYTE v22[4100]; // [sp+28h] [bp-1004h] BYREF

  v3 = platform_init(a1, a2, a3);
  v4 = v3;
  if ( v3 )
  {
    V_LOCK(v3);
    v19 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_hal",
      12,
      57,
      100,
      v22);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug(0);
    v6 = total_chain;
    v7 = hash_on_plug;
    do
    {
      while ( ((v7 >> v4) & 1) == 0 )
      {
        if ( ++v4 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v6] = v4;
      LOBYTE(g_chain_info[2 * v6 + 1]) = 1;
      V_LOCK(hash_on_plug);
      v8 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
        180,
        "dev_init_hal",
        12,
        67,
        60,
        v22);
      hash_on_plug = platform_is_pic_mcu_en();
      if ( hash_on_plug )
      {
        if ( open_pic((unsigned __int8)v4) < 0 )
        {
          V_LOCK((unsigned __int8)v4);
          v17 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v17);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
            180,
            "dev_init_hal",
            12,
            71,
            100,
            v22);
          return -1;
        }
        pic1704_reset(v4);
        usleep((__useconds_t)".layout..Layout$u20$as$u20$core..fmt..Debug$GT$3fmt17h035ce156eda5ea0bE");
        pic1704_jump_to_app(v4);
        usleep((__useconds_t)".layout..Layout$u20$as$u20$core..fmt..Debug$GT$3fmt17h035ce156eda5ea0bE");
        sw_version = pic1704_get_sw_version(g_chain_info[2 * total_chain], &v21);
        if ( !sw_version )
        {
          V_LOCK(0);
          v18 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
            180,
            "dev_init_hal",
            12,
            82,
            100,
            v22);
          return -1;
        }
        V_LOCK(sw_version);
        v13 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v13);
        hash_on_plug = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
                         180,
                         "dev_init_hal",
                         12,
                         88,
                         60,
                         v22);
      }
      ++v4;
      v6 = ++total_chain;
    }
    while ( v4 != 16 );
LABEL_7:
    if ( a1 != v6 )
    {
      V_LOCK(hash_on_plug);
      v14 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v14);
      v15 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
              180,
              "dev_init_hal",
              12,
              96,
              100,
              v22);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
        180,
        "dev_init_hal",
        12,
        97,
        100,
        v22);
    }
    fpga_reset();
    V_LOCK(v9);
    v10 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
      180,
      "dev_init_hal",
      12,
      101,
      60,
      v22);
    enable_bypass_mode();
    dev_config_hal((int)&stru_1C1FC.st_value);
    return 0;
  }
}
