int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int all_created_runtime; // r0
  int v5; // r8
  int is_psu_supported; // r0
  unsigned int is_pic_mcu_en; // r0
  int v8; // r6
  int v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int power_status; // r0
  bool v28; // zf
  unsigned int v29; // r8
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int jj; // r8
  int v35; // r0
  unsigned int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  unsigned int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r11
  int v45; // r10
  double v46; // d10
  unsigned int v47; // r0
  int v48; // r0
  int device_num; // r0
  double v50; // d8
  int v51; // r8
  int v52; // r0
  int v53; // r0
  int feedback_voltage; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int j; // r9
  int v75; // r0
  int v76; // r0
  int k; // r9
  int v78; // r0
  int v79; // r0
  int m; // r9
  int v81; // r0
  int v82; // r0
  int n; // r9
  int v84; // r0
  int ii; // r9
  int v86; // r0
  int v87; // r0
  double v88; // d8
  int v89; // r6
  int v90; // r7
  int v91; // r9
  int chain_num; // r11
  int i; // r5
  int v94; // r0
  unsigned int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // [sp+1Ch] [bp-1010h]
  int v99; // [sp+24h] [bp-1008h] BYREF
  _BYTE v100[4100]; // [sp+28h] [bp-1004h] BYREF

  v99 = a2;
  all_created_runtime = get_all_created_runtime(&v99);
  if ( !platform_is_adjustable_power(all_created_runtime) )
  {
    V_LOCK(0);
    v68 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v68);
    v8 = -1;
    v69 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
            171,
            "power_init",
            10,
            301,
            100,
            v100);
    V_LOCK(v69);
    v70 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v70);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "power_init",
      10,
      302,
      100,
      v100);
    return v8;
  }
  v5 = (unsigned __int16)bitmain_power_version();
  is_psu_supported = platform_is_psu_supported(v5);
  if ( !is_psu_supported )
  {
    V_LOCK(0);
    v8 = -1;
    v97 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v97);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "power_init",
      10,
      308,
      100,
      v100);
    return v8;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en(is_psu_supported);
  v8 = is_pic_mcu_en;
  if ( !is_pic_mcu_en )
  {
    v9 = bitmain_set_watchdog(0);
    v5 = (unsigned __int16)v9;
    if ( (_WORD)v9 )
    {
      V_LOCK(v9);
      v11 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
        171,
        "power_init",
        10,
        315,
        100,
        v100);
      return v8;
    }
    is_pic_mcu_en = sleep(1u);
  }
  byte_2EB900 = 0;
  bitmain_power_off(is_pic_mcu_en);
  v10 = sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
    {
      fan_pwm_set(0);
      sleep(0xAu);
    }
  }
  V_LOCK(v10);
  v13 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/power_api.c",
    171,
    "power_init",
    10,
    330,
    60,
    v100);
  v14 = sleep(0x3Cu);
  if ( platform_is_pic_mcu_en(v14) )
    goto LABEL_12;
  v88 = 0.0;
  v89 = 21;
  v90 = 1;
  v91 = 100;
  chain_num = platform_get_chain_num();
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v94 = i;
        read_feedback_voltage(v94);
        if ( v2 > v88 )
          v88 = v2;
      }
    }
    if ( v88 <= 10.0 )
      break;
    if ( v91 > 20 )
    {
      v91 = 20;
      v95 = sleep(1u);
      if ( !--v89 )
        goto LABEL_96;
LABEL_92:
      v90 = 1;
    }
    else
    {
      v95 = sleep(1u);
      if ( !--v89 )
        goto LABEL_96;
      if ( ++v90 > 19 )
        goto LABEL_12;
      v91 = 20;
    }
  }
  if ( v88 <= 4.0 )
    goto LABEL_12;
  if ( v91 != 2 )
  {
    v91 = 2;
    v95 = sleep(1u);
    if ( !--v89 )
      goto LABEL_96;
    goto LABEL_92;
  }
  v95 = sleep(1u);
  if ( v89 != 1 )
    goto LABEL_12;
LABEL_96:
  V_LOCK(v95);
  v96 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v96);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/power_api.c",
    171,
    "wait_for_psu_discharge",
    22,
    179,
    100,
    v100);
LABEL_12:
  v15 = bitmain_power_fw_version();
  V_LOCK(v15);
  v16 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
          171,
          "power_init",
          10,
          339,
          60,
          v100);
  byte_2EB901 = 0;
  dword_2EB904 = 0;
  dword_2EB908 = 0;
  power_info = 1;
  if ( opt_custom_voltage_swith || (v17 = is_eeprom_loaded(v17)) != 0 )
    dword_2EB8F4 = opt_custom_voltage;
  byte_2EB8EC = platform_is_adjustable_power(v17);
  byte_2EB8F8 = platform_is_check_asic_voltage_enable();
  dword_2EB8FC = platfrom_get_check_asic_voltage();
  V_LOCK(dword_2EB8FC);
  v18 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v18);
  v19 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
          171,
          "power_init",
          10,
          360,
          40,
          v100);
  V_LOCK(v19);
  v20 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v20);
  v21 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
          171,
          "power_init",
          10,
          361,
          40,
          v100);
  V_LOCK(v21);
  v22 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
          171,
          "power_init",
          10,
          362,
          40,
          v100);
  V_LOCK(v23);
  v24 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v24);
  v25 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
          171,
          "power_init",
          10,
          363,
          40,
          v100);
  V_LOCK(v25);
  v26 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/power_api.c",
    171,
    "power_init",
    10,
    364,
    40,
    v100);
  if ( byte_2EB8EC && byte_2EB8F8 )
    power_status = set_check_asic_voltage(0);
  else
    power_status = set_working_voltage(0);
  if ( power_status )
  {
    V_LOCK(power_status);
    v87 = logfmt_raw((int)v100, 0x1000u);
    v8 = -1;
    V_UNLOCK(v87);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "power_init",
      10,
      372,
      100,
      v100);
  }
  else
  {
    v28 = v5 == 113;
    if ( v5 != 113 )
      v28 = v5 == 116;
    v29 = 0;
    if ( !v28 )
    {
      while ( 1 )
      {
        power_status = bitmain_get_power_status(power_status);
        ++v29;
        v8 = power_status;
        if ( !power_status )
          break;
        if ( v29 == 5 * (v29 / 5) )
        {
          V_LOCK(power_status);
          v30 = logfmt_raw((int)v100, 0x1000u);
          V_UNLOCK(v30);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
            171,
            "power_init",
            10,
            386,
            100,
            v100);
        }
        power_status = sleep(3u);
        if ( v29 == 20 )
          goto LABEL_28;
      }
    }
    v8 = 0;
LABEL_28:
    V_LOCK(power_status);
    v31 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v31);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
            171,
            "power_init",
            10,
            393,
            40,
            v100);
    bitmain_power_on(v32);
    byte_2EB900 = 1;
    if ( (unsigned int)(opt_algo - 11) > 1 )
      goto LABEL_29;
    v73 = usleep((__useconds_t)"u20$core..fmt..Debug$GT$3fmt17h0889c43153a0c703E");
    if ( v99 > 0 )
    {
      for ( j = 0; j < v99; ++j )
      {
        v75 = dev_ctrl(v73);
        v73 = (*(int (__fastcall **)(int))(v75 + 36))(j);
      }
    }
    v76 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( k = 0; k < v99; ++k )
      {
        v78 = dev_ctrl(v76);
        v76 = (*(int (__fastcall **)(int))(v78 + 40))(k);
      }
    }
    v79 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( m = 0; m < v99; ++m )
      {
        v81 = dev_ctrl(v79);
        v79 = (*(int (__fastcall **)(int))(v81 + 36))(m);
      }
    }
    v82 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( n = 0; n < v99; ++n )
      {
        v84 = dev_ctrl(v82);
        v82 = (*(int (__fastcall **)(int))(v84 + 40))(n);
      }
    }
    v33 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( ii = 0; ii < v99; ++ii )
      {
        v86 = dev_ctrl(v33);
        v33 = (*(int (__fastcall **)(int))(v86 + 36))(ii);
      }
    }
    if ( (unsigned int)(opt_algo - 11) > 1 )
    {
LABEL_29:
      v33 = usleep((__useconds_t)"s$u20$core..fmt..Debug$GT$3fmt17h5868a220a5159e3dE");
      if ( v99 > 0 )
      {
        for ( jj = 0; jj < v99; ++jj )
        {
          v35 = dev_ctrl(v33);
          (*(void (__fastcall **)(int))(v35 + 36))(jj);
          v36 = sleep(1u);
          v37 = dev_ctrl(v36);
          (*(void (__fastcall **)(int))(v37 + 40))(jj);
          v38 = usleep((__useconds_t)"ve");
          v39 = dev_ctrl(v38);
          (*(void (__fastcall **)(int))(v39 + 36))(jj);
          v40 = sleep(1u);
          v41 = dev_ctrl(v40);
          (*(void (__fastcall **)(int))(v41 + 40))(jj);
          v42 = usleep((__useconds_t)"ve");
          v43 = dev_ctrl(v42);
          v33 = (*(int (__fastcall **)(int))(v43 + 36))(jj);
        }
      }
    }
    if ( power_info )
      v44 = dword_2EB904;
    else
      v44 = sub_B5BD0(v33);
    v45 = 3;
    v46 = (double)v44;
    do
    {
      v47 = sleep(1u);
      v48 = platform_is_pic_mcu_en(v47);
      if ( v48 )
      {
        device_num = query_device_num(v48);
        v50 = 0.0;
        v98 = device_num;
        if ( device_num > 0 )
        {
          v51 = 0;
          do
          {
            v52 = dev_ctrl(device_num);
            v53 = (*(int (__fastcall **)(int))(v52 + 48))(v51);
            feedback_voltage = read_feedback_voltage(v53);
            v55 = V_LOCK(feedback_voltage);
            v56 = dev_ctrl(v55);
            (*(void (__fastcall **)(int))(v56 + 48))(v51);
            v57 = logfmt_raw((int)v100, 0x1000u);
            V_UNLOCK(v57);
            device_num = zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildr"
                           "oot/tmp/release/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                           171,
                           "get_minimal_feedback_voltage",
                           28,
                           61,
                           40,
                           v100);
            if ( v2 > 0.1 )
            {
              if ( v2 >= v50 )
              {
                if ( v50 < 0.1 )
                  v50 = v2;
              }
              else
              {
                v50 = v2;
              }
            }
            ++v51;
          }
          while ( v98 != v51 );
        }
        V_LOCK(device_num);
        v58 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v58);
        v59 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                171,
                "get_minimal_feedback_voltage",
                28,
                66,
                20,
                v100);
        if ( (double)v44 * 0.75 / 100.0 <= v50 )
        {
          V_LOCK(v59);
          v60 = logfmt_raw((int)v100, 0x1000u);
          V_UNLOCK(v60);
          v61 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                  171,
                  "check_feedback_voltage",
                  22,
                  87,
                  80,
                  v100);
LABEL_48:
          V_LOCK(v61);
          v62 = logfmt_raw((int)v100, 0x1000u);
          V_UNLOCK(v62);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
            171,
            "power_init",
            10,
            449,
            40,
            v100);
          return v8;
        }
        V_LOCK(v59);
        v72 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v72);
        v66 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                171,
                "check_feedback_voltage",
                22,
                83,
                80,
                v100);
      }
      else
      {
        v63 = read_feedback_voltage(0);
        V_LOCK(v63);
        v64 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v64);
        v61 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                171,
                "check_feedback_voltage",
                22,
                92,
                20,
                v100);
        if ( v2 < 0.0 )
        {
          V_LOCK(v61);
          v71 = logfmt_raw((int)v100, 0x1000u);
          V_UNLOCK(v71);
          v61 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                  171,
                  "check_feedback_voltage",
                  22,
                  94,
                  80,
                  v100);
          goto LABEL_48;
        }
        if ( v2 * 100.0 <= v46 * 1.1 && v2 * 100.0 >= v46 * 0.9 )
          goto LABEL_48;
        V_LOCK(v61);
        v65 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v65);
        v66 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
                171,
                "check_feedback_voltage",
                22,
                99,
                100,
                v100);
      }
      --v45;
    }
    while ( v45 );
    V_LOCK(v66);
    v67 = logfmt_raw((int)v100, 0x1000u);
    v8 = -1;
    V_UNLOCK(v67);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "power_init",
      10,
      444,
      100,
      v100);
  }
  return v8;
}
