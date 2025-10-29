int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r8
  int is_pic_mcu_en; // r7
  unsigned __int16 v6; // r0
  unsigned __int16 v8; // r7
  bool v9; // zf
  unsigned int v10; // r8
  int v11; // r9
  double v12; // d10
  double v13; // d9
  int device_num; // r0
  double v15; // d8
  int v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int k; // r5
  int v24; // r0
  int v25; // r0
  int m; // r5
  int v27; // r0
  int v28; // r0
  int n; // r5
  int v30; // r0
  int v31; // r0
  int ii; // r5
  int v33; // r0
  int v34; // r0
  int jj; // r5
  int v36; // r0
  double v37; // d8
  double v38; // d8
  int v39; // r7
  int v40; // r6
  int v41; // r9
  int chain_num; // r11
  int i; // r5
  int v44; // r0
  int v45; // r0
  int j; // r8
  int v47; // r0
  unsigned int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // [sp+4h] [bp-1030h]
  int v57; // [sp+4h] [bp-1030h]
  int v58; // [sp+4h] [bp-1030h]
  int v59; // [sp+1Ch] [bp-1018h]
  int v60; // [sp+20h] [bp-1014h]
  int v61; // [sp+24h] [bp-1010h]
  int v62; // [sp+2Ch] [bp-1008h] BYREF
  char v63[4100]; // [sp+30h] [bp-1004h] BYREF

  v62 = a2;
  get_all_created_runtime(&v62);
  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    logfmt_raw(v63, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    is_pic_mcu_en = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      296,
      100,
      v63);
    V_LOCK();
    logfmt_raw(v63, 0x1000u, 0, "Sweep error string = %s.", "V:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      297,
      100,
      v63);
    return is_pic_mcu_en;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    is_pic_mcu_en = -1;
    logfmt_raw(v63, 0x1000u, 0, "Not support power version, %04x", v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      303,
      100,
      v63);
    return is_pic_mcu_en;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( !is_pic_mcu_en )
  {
    v6 = bitmain_set_watchdog(0);
    v4 = v6;
    if ( v6 )
    {
      V_LOCK();
      logfmt_raw(v63, 0x1000u, 0, "disable power watchdog: %04x", v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "power_init",
        10,
        310,
        100,
        v63);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  bitmain_power_on();
  byte_2D3558 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "Initializing the power, please wait, this may take up 1 minute...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    322,
    60,
    v63);
  sleep(0x3Cu);
  if ( platform_is_pic_mcu_en() )
    goto LABEL_12;
  v38 = 0.0;
  v39 = 21;
  v40 = 1;
  v41 = 100;
  chain_num = platform_get_chain_num();
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v44 = i;
        read_feedback_voltage(v44);
        if ( v2 > v38 )
          v38 = v2;
      }
    }
    if ( v38 <= 10.0 )
      break;
    if ( v41 > 20 )
    {
      v41 = 20;
      sleep(1u);
      if ( !--v39 )
        goto LABEL_92;
LABEL_88:
      v40 = 1;
    }
    else
    {
      sleep(1u);
      if ( !--v39 )
        goto LABEL_92;
      if ( ++v40 > 19 )
        goto LABEL_12;
      v41 = 20;
    }
  }
  if ( v38 <= 4.0 )
    goto LABEL_12;
  if ( v41 != 2 )
  {
    v41 = 2;
    sleep(1u);
    if ( !--v39 )
      goto LABEL_92;
    goto LABEL_88;
  }
  sleep(1u);
  if ( v39 != 1 )
    goto LABEL_12;
LABEL_92:
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "APW discharge too slow OR pic adc wrong");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "wait_for_psu_discharge",
    22,
    187,
    100,
    v63);
LABEL_12:
  v8 = bitmain_power_fw_version();
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "bitmain power fw version: %04x", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    331,
    60,
    v63);
  byte_2D3559 = 0;
  dword_2D355C = 0;
  dword_2D3560 = 0;
  byte_2D3540 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_2D354C = opt_custom_voltage;
  byte_2D3544 = platform_is_adjustable_power();
  byte_2D3550 = platform_is_check_asic_voltage_enable();
  dword_2D3554 = platfrom_get_check_asic_voltage();
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "Power init:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    352,
    40,
    v63);
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_2D355C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    353,
    40,
    v63);
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_2D354C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    354,
    40,
    v63);
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_2D3550);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    355,
    40,
    v63);
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_2D3554);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    356,
    40,
    v63);
  if ( byte_2D3544 && byte_2D3550 )
    v59 = set_check_asic_voltage(0);
  else
    v59 = set_working_voltage(0);
  if ( v59 )
  {
    V_LOCK();
    logfmt_raw(v63, 0x1000u, 0, "set_voltage_by_steps error!");
    is_pic_mcu_en = -1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      364,
      100,
      v63);
    return is_pic_mcu_en;
  }
  v9 = v4 == 113;
  if ( v4 != 113 )
    v9 = v4 == 116;
  v10 = 0;
  if ( !v9 )
  {
    while ( 1 )
    {
      ++v10;
      is_pic_mcu_en = bitmain_get_power_status();
      if ( !is_pic_mcu_en )
        break;
      if ( v10 == 5 * (v10 / 5) )
      {
        V_LOCK();
        logfmt_raw(v63, 0x1000u, v10 % 5, ">> bitmain_get_power_status failed(%d) <<", is_pic_mcu_en);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          378,
          100,
          v63);
      }
      sleep(3u);
      if ( v10 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "bitmain_get_power_status end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    385,
    40,
    v63);
  bitmain_power_off_0();
  byte_2D3558 = 1;
  if ( opt_algo != 11 )
  {
    v45 = usleep((__useconds_t)"");
    if ( v62 > 0 )
    {
      for ( j = 0; j < v62; ++j )
      {
        v47 = dev_ctrl(v45);
        (*(void (__fastcall **)(int))(v47 + 36))(j);
        v48 = sleep(1u);
        v49 = dev_ctrl(v48);
        (*(void (__fastcall **)(int))(v49 + 40))(j);
        v50 = usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
        v51 = dev_ctrl(v50);
        (*(void (__fastcall **)(int))(v51 + 36))(j);
        v52 = sleep(1u);
        v53 = dev_ctrl(v52);
        (*(void (__fastcall **)(int))(v53 + 40))(j);
        v54 = usleep((__useconds_t)"_unchecked17h85e970fb54b21a76E");
        v55 = dev_ctrl(v54);
        v45 = (*(int (__fastcall **)(int))(v55 + 36))(j);
      }
    }
  }
  if ( byte_2D3540 )
    v11 = dword_2D355C;
  else
    v11 = sub_AE708();
  v60 = 3;
  v12 = (double)v11;
  v13 = (double)v11 * 0.75 / 100.0;
  while ( 2 )
  {
    sleep(1u);
    if ( platform_is_pic_mcu_en() )
    {
      device_num = query_device_num();
      v15 = 0.0;
      v61 = device_num;
      if ( device_num > 0 )
      {
        v16 = 0;
        do
        {
          v17 = dev_ctrl(device_num);
          v18 = (*(int (__fastcall **)(int))(v17 + 48))(v16);
          read_feedback_voltage(v18);
          v19 = V_LOCK();
          v20 = dev_ctrl(v19);
          v21 = (*(int (__fastcall **)(int))(v20 + 48))(v16);
          logfmt_raw(v63, 0x1000u, 0, "chain %d feedback voltage = %.2f", v21, v56, v2);
          V_UNLOCK();
          device_num = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/miner_util/power_api.c",
                         166,
                         "get_minimal_feedback_voltage",
                         28,
                         69,
                         40,
                         v63);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v15 )
            {
              if ( v15 < 0.1 )
                v15 = v2;
            }
            else
            {
              v15 = v2;
            }
          }
          ++v16;
        }
        while ( v61 != v16 );
      }
      V_LOCK();
      logfmt_raw(v63, 0x1000u, 0, "the minimal voltage = %.2f", v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "get_minimal_feedback_voltage",
        28,
        74,
        20,
        v63);
      if ( v13 <= v15 )
      {
        V_LOCK();
        logfmt_raw(
          v63,
          0x1000u,
          0,
          "power voltage qualified! centi_voltage %d feedback_voltage %f qualified_vol %f",
          v11,
          v57,
          v15,
          v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "check_feedback_voltage",
          22,
          95,
          80,
          v63);
        goto LABEL_44;
      }
      V_LOCK();
      logfmt_raw(
        v63,
        0x1000u,
        0,
        "power voltage can not meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f",
        v11,
        v57,
        v15,
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "check_feedback_voltage",
        22,
        91,
        80,
        v63);
      goto LABEL_65;
    }
    read_feedback_voltage(0);
    V_LOCK();
    logfmt_raw(v63, 0x1000u, 0, "read fb voltage %.2f", v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "check_feedback_voltage",
      22,
      100,
      20,
      v63);
    if ( v2 >= 0.0 )
    {
      v37 = v2 * 100.0;
      if ( v2 * 100.0 <= v12 * 1.1 && v37 >= v12 * 0.9 )
        goto LABEL_44;
      V_LOCK();
      logfmt_raw(v63, 0x1000u, 0, "power voltage qualified! centi_voltage %d fb_vol %f", v11, v58, v37);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "check_feedback_voltage",
        22,
        107,
        100,
        v63);
LABEL_65:
      if ( !--v60 )
      {
        V_LOCK();
        logfmt_raw(v63, 0x1000u, 0, "check_feedback_voltage error!");
        is_pic_mcu_en = -1;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          407,
          100,
          v63);
        return is_pic_mcu_en;
      }
      continue;
    }
    break;
  }
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "read_feedback_voltage_from_psu failed!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "check_feedback_voltage",
    22,
    102,
    80,
    v63);
LABEL_44:
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "check_feedback_voltage end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    412,
    40,
    v63);
  if ( opt_algo == 11 )
  {
    v22 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v62 > 0 )
    {
      for ( k = 0; k < v62; ++k )
      {
        v24 = dev_ctrl(v22);
        v22 = (*(int (__fastcall **)(int))(v24 + 36))(k);
      }
    }
    v25 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v62 > 0 )
    {
      for ( m = 0; m < v62; ++m )
      {
        v27 = dev_ctrl(v25);
        v25 = (*(int (__fastcall **)(int))(v27 + 40))(m);
      }
    }
    v28 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v62 > 0 )
    {
      for ( n = 0; n < v62; ++n )
      {
        v30 = dev_ctrl(v28);
        v28 = (*(int (__fastcall **)(int))(v30 + 36))(n);
      }
    }
    v31 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v62 > 0 )
    {
      for ( ii = 0; ii < v62; ++ii )
      {
        v33 = dev_ctrl(v31);
        v31 = (*(int (__fastcall **)(int))(v33 + 40))(ii);
      }
    }
    v34 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v62 > 0 )
    {
      for ( jj = 0; jj < v62; ++jj )
      {
        v36 = dev_ctrl(v34);
        v34 = (*(int (__fastcall **)(int))(v36 + 36))(jj);
      }
    }
  }
  return is_pic_mcu_en;
}
