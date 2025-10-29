int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int all_created_runtime; // r0
  int v5; // r8
  int is_psu_supported; // r0
  unsigned int is_pic_mcu_en; // r0
  int v8; // r7
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
  int v34; // r9
  double v35; // d10
  unsigned int v36; // r0
  int v37; // r0
  int device_num; // r0
  double v39; // d8
  int v40; // r6
  int v41; // r0
  int v42; // r0
  int feedback_voltage; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int k; // r5
  int v54; // r0
  int v55; // r0
  int m; // r5
  int v57; // r0
  int v58; // r0
  int n; // r5
  int v60; // r0
  int v61; // r0
  int ii; // r5
  int v63; // r0
  int v64; // r0
  int jj; // r5
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  double v77; // d8
  int v78; // r7
  int v79; // r6
  int v80; // r9
  int chain_num; // r11
  int i; // r5
  int v83; // r0
  unsigned int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int j; // r8
  int v89; // r0
  unsigned int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r0
  unsigned int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // [sp+1Ch] [bp-1018h]
  int v99; // [sp+20h] [bp-1014h]
  int v100; // [sp+24h] [bp-1010h]
  int v101; // [sp+2Ch] [bp-1008h] BYREF
  _BYTE v102[4100]; // [sp+30h] [bp-1004h] BYREF

  v101 = a2;
  all_created_runtime = get_all_created_runtime(&v101);
  if ( !platform_is_adjustable_power(all_created_runtime) )
  {
    V_LOCK(0);
    v72 = logfmt_raw((int)v102, 0x1000u);
    V_UNLOCK(v72);
    v8 = -1;
    v73 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/power_api.c",
            166,
            "power_init",
            10,
            296,
            100,
            v102);
    V_LOCK(v73);
    v74 = logfmt_raw((int)v102, 0x1000u);
    V_UNLOCK(v74);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      297,
      100,
      v102);
    return v8;
  }
  v5 = (unsigned __int16)bitmain_power_version();
  is_psu_supported = platform_is_psu_supported(v5);
  if ( !is_psu_supported )
  {
    V_LOCK(0);
    v8 = -1;
    v86 = logfmt_raw((int)v102, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      303,
      100,
      v102);
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
      v11 = logfmt_raw((int)v102, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "power_init",
        10,
        310,
        100,
        v102);
      return v8;
    }
    is_pic_mcu_en = sleep(1u);
  }
  bitmain_power_off(is_pic_mcu_en);
  byte_2D4A48 = 0;
  v10 = sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK(v10);
  v13 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    322,
    60,
    v102);
  v14 = sleep(0x3Cu);
  if ( platform_is_pic_mcu_en(v14) )
    goto LABEL_12;
  v77 = 0.0;
  v78 = 21;
  v79 = 1;
  v80 = 100;
  chain_num = platform_get_chain_num();
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v83 = i;
        read_feedback_voltage(v83);
        if ( v2 > v77 )
          v77 = v2;
      }
    }
    if ( v77 <= 10.0 )
      break;
    if ( v80 > 20 )
    {
      v80 = 20;
      v84 = sleep(1u);
      if ( !--v78 )
        goto LABEL_92;
LABEL_88:
      v79 = 1;
    }
    else
    {
      v84 = sleep(1u);
      if ( !--v78 )
        goto LABEL_92;
      if ( ++v79 > 19 )
        goto LABEL_12;
      v80 = 20;
    }
  }
  if ( v77 <= 4.0 )
    goto LABEL_12;
  if ( v80 != 2 )
  {
    v80 = 2;
    v84 = sleep(1u);
    if ( !--v78 )
      goto LABEL_92;
    goto LABEL_88;
  }
  v84 = sleep(1u);
  if ( v78 != 1 )
    goto LABEL_12;
LABEL_92:
  V_LOCK(v84);
  v85 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v85);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "wait_for_psu_discharge",
    22,
    187,
    100,
    v102);
LABEL_12:
  v15 = bitmain_power_fw_version();
  V_LOCK(v15);
  v16 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          331,
          60,
          v102);
  byte_2D4A49 = 0;
  dword_2D4A4C = 0;
  dword_2D4A50 = 0;
  byte_2D4A30 = 1;
  if ( opt_custom_voltage_swith || (v17 = is_eeprom_loaded(v17)) != 0 )
    dword_2D4A3C = opt_custom_voltage;
  byte_2D4A34 = platform_is_adjustable_power(v17);
  byte_2D4A40 = platform_is_check_asic_voltage_enable();
  dword_2D4A44 = platfrom_get_check_asic_voltage();
  V_LOCK(dword_2D4A44);
  v18 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v18);
  v19 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          352,
          40,
          v102);
  V_LOCK(v19);
  v20 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v20);
  v21 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          353,
          40,
          v102);
  V_LOCK(v21);
  v22 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          354,
          40,
          v102);
  V_LOCK(v23);
  v24 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v24);
  v25 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          355,
          40,
          v102);
  V_LOCK(v25);
  v26 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    356,
    40,
    v102);
  if ( byte_2D4A34 && byte_2D4A40 )
  {
    power_status = set_check_asic_voltage(0);
    v98 = power_status;
  }
  else
  {
    power_status = set_working_voltage(0);
    v98 = power_status;
  }
  if ( v98 )
  {
    V_LOCK(power_status);
    v87 = logfmt_raw((int)v102, 0x1000u);
    v8 = -1;
    V_UNLOCK(v87);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      364,
      100,
      v102);
    return v8;
  }
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
        v30 = logfmt_raw((int)v102, 0x1000u);
        V_UNLOCK(v30);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          378,
          100,
          v102);
      }
      power_status = sleep(3u);
      if ( v29 == 20 )
        goto LABEL_28;
    }
  }
  v8 = 0;
LABEL_28:
  V_LOCK(power_status);
  v31 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v31);
  v32 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          385,
          40,
          v102);
  v33 = bitmain_power_on(v32);
  byte_2D4A48 = 1;
  if ( opt_algo != 11 )
  {
    v33 = usleep((__useconds_t)"_common..AsInner$LT$std..sys..unix..fs..File$GT$$GT$8as_inner17h63c5977b9c2b4af0E");
    if ( v101 > 0 )
    {
      for ( j = 0; j < v101; ++j )
      {
        v89 = dev_ctrl(v33);
        (*(void (__fastcall **)(int))(v89 + 36))(j);
        v90 = sleep(1u);
        v91 = dev_ctrl(v90);
        (*(void (__fastcall **)(int))(v91 + 40))(j);
        v92 = usleep((__useconds_t)".layout..Layout$u20$as$u20$core..fmt..Debug$GT$3fmt17h035ce156eda5ea0bE");
        v93 = dev_ctrl(v92);
        (*(void (__fastcall **)(int))(v93 + 36))(j);
        v94 = sleep(1u);
        v95 = dev_ctrl(v94);
        (*(void (__fastcall **)(int))(v95 + 40))(j);
        v96 = usleep((__useconds_t)".layout..Layout$u20$as$u20$core..fmt..Debug$GT$3fmt17h035ce156eda5ea0bE");
        v97 = dev_ctrl(v96);
        v33 = (*(int (__fastcall **)(int))(v97 + 36))(j);
      }
    }
  }
  if ( byte_2D4A30 )
    v34 = dword_2D4A4C;
  else
    v34 = sub_AEE50(v33);
  v99 = 3;
  v35 = (double)v34;
  while ( 2 )
  {
    v36 = sleep(1u);
    v37 = platform_is_pic_mcu_en(v36);
    if ( v37 )
    {
      device_num = query_device_num(v37);
      v39 = 0.0;
      v100 = device_num;
      if ( device_num > 0 )
      {
        v40 = 0;
        do
        {
          v41 = dev_ctrl(device_num);
          v42 = (*(int (__fastcall **)(int))(v41 + 48))(v40);
          feedback_voltage = read_feedback_voltage(v42);
          v44 = V_LOCK(feedback_voltage);
          v45 = dev_ctrl(v44);
          (*(void (__fastcall **)(int))(v45 + 48))(v40);
          v46 = logfmt_raw((int)v102, 0x1000u);
          V_UNLOCK(v46);
          device_num = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/miner_util/power_api.c",
                         166,
                         "get_minimal_feedback_voltage",
                         28,
                         69,
                         40,
                         v102);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v39 )
            {
              if ( v39 < 0.1 )
                v39 = v2;
            }
            else
            {
              v39 = v2;
            }
          }
          ++v40;
        }
        while ( v100 != v40 );
      }
      V_LOCK(device_num);
      v47 = logfmt_raw((int)v102, 0x1000u);
      V_UNLOCK(v47);
      v48 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "get_minimal_feedback_voltage",
              28,
              74,
              20,
              v102);
      if ( (double)v34 * 0.75 / 100.0 <= v39 )
      {
        V_LOCK(v48);
        v49 = logfmt_raw((int)v102, 0x1000u);
        V_UNLOCK(v49);
        v50 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/power_api.c",
                166,
                "check_feedback_voltage",
                22,
                95,
                80,
                v102);
        goto LABEL_44;
      }
      V_LOCK(v48);
      v76 = logfmt_raw((int)v102, 0x1000u);
      V_UNLOCK(v76);
      v70 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "check_feedback_voltage",
              22,
              91,
              80,
              v102);
      goto LABEL_65;
    }
    v67 = read_feedback_voltage(0);
    V_LOCK(v67);
    v68 = logfmt_raw((int)v102, 0x1000u);
    V_UNLOCK(v68);
    v50 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/power_api.c",
            166,
            "check_feedback_voltage",
            22,
            100,
            20,
            v102);
    if ( v2 >= 0.0 )
    {
      if ( v2 * 100.0 <= v35 * 1.1 && v2 * 100.0 >= v35 * 0.9 )
        goto LABEL_44;
      V_LOCK(v50);
      v69 = logfmt_raw((int)v102, 0x1000u);
      V_UNLOCK(v69);
      v70 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "check_feedback_voltage",
              22,
              107,
              100,
              v102);
LABEL_65:
      if ( !--v99 )
      {
        V_LOCK(v70);
        v71 = logfmt_raw((int)v102, 0x1000u);
        v8 = -1;
        V_UNLOCK(v71);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          407,
          100,
          v102);
        return v8;
      }
      continue;
    }
    break;
  }
  V_LOCK(v50);
  v75 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v75);
  v50 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "check_feedback_voltage",
          22,
          102,
          80,
          v102);
LABEL_44:
  V_LOCK(v50);
  v51 = logfmt_raw((int)v102, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    412,
    40,
    v102);
  if ( opt_algo == 11 )
  {
    v52 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v101 > 0 )
    {
      for ( k = 0; k < v101; ++k )
      {
        v54 = dev_ctrl(v52);
        v52 = (*(int (__fastcall **)(int))(v54 + 36))(k);
      }
    }
    v55 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v101 > 0 )
    {
      for ( m = 0; m < v101; ++m )
      {
        v57 = dev_ctrl(v55);
        v55 = (*(int (__fastcall **)(int))(v57 + 40))(m);
      }
    }
    v58 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v101 > 0 )
    {
      for ( n = 0; n < v101; ++n )
      {
        v60 = dev_ctrl(v58);
        v58 = (*(int (__fastcall **)(int))(v60 + 36))(n);
      }
    }
    v61 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v101 > 0 )
    {
      for ( ii = 0; ii < v101; ++ii )
      {
        v63 = dev_ctrl(v61);
        v61 = (*(int (__fastcall **)(int))(v63 + 40))(ii);
      }
    }
    v64 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v101 > 0 )
    {
      for ( jj = 0; jj < v101; ++jj )
      {
        v66 = dev_ctrl(v64);
        v64 = (*(int (__fastcall **)(int))(v66 + 36))(jj);
      }
    }
  }
  return v8;
}
