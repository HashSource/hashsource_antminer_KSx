int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  void *all_created_runtime; // r0
  int v5; // r8
  int is_psu_supported; // r0
  int is_pic_mcu_en; // r7
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r0
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
  int power_status; // r0
  bool v27; // zf
  unsigned int v28; // r8
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r9
  double v33; // d10
  unsigned int v34; // r0
  int v35; // r0
  int device_num; // r0
  double v37; // d8
  int v38; // r6
  int v39; // r0
  int v40; // r0
  int feedback_voltage; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int k; // r5
  int v52; // r0
  int v53; // r0
  int m; // r5
  int v55; // r0
  int v56; // r0
  int n; // r5
  int v58; // r0
  int v59; // r0
  int ii; // r5
  int v61; // r0
  int v62; // r0
  int jj; // r5
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
  int v74; // r0
  double v75; // d8
  int v76; // r7
  int v77; // r6
  int v78; // r9
  int chain_num; // r11
  int i; // r5
  int v81; // r0
  unsigned int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int j; // r8
  int v87; // r0
  unsigned int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  unsigned int v92; // r0
  int v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // [sp+1Ch] [bp-1018h]
  int v97; // [sp+20h] [bp-1014h]
  int v98; // [sp+24h] [bp-1010h]
  int v99; // [sp+2Ch] [bp-1008h] BYREF
  _BYTE v100[4100]; // [sp+30h] [bp-1004h] BYREF

  v99 = a2;
  all_created_runtime = get_all_created_runtime(&v99);
  if ( !platform_is_adjustable_power(all_created_runtime) )
  {
    V_LOCK(0);
    v70 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v70);
    is_pic_mcu_en = -1;
    v71 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/power_api.c",
            166,
            "power_init",
            10,
            296,
            100,
            v100);
    V_LOCK(v71);
    v72 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v72);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      297,
      100,
      v100);
    return is_pic_mcu_en;
  }
  v5 = (unsigned __int16)bitmain_power_version();
  is_psu_supported = platform_is_psu_supported(v5);
  if ( !is_psu_supported )
  {
    V_LOCK(0);
    is_pic_mcu_en = -1;
    v84 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v84);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      303,
      100,
      v100);
    return is_pic_mcu_en;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en(is_psu_supported);
  if ( !is_pic_mcu_en )
  {
    v8 = bitmain_set_watchdog(0);
    v5 = (unsigned __int16)v8;
    if ( (_WORD)v8 )
    {
      V_LOCK(v8);
      v10 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/power_api.c",
        166,
        "power_init",
        10,
        310,
        100,
        v100);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  bitmain_power_on();
  byte_2F3E18 = 0;
  v9 = sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK(v9);
  v12 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    322,
    60,
    v100);
  v13 = sleep(0x3Cu);
  if ( platform_is_pic_mcu_en(v13) )
    goto LABEL_12;
  v75 = 0.0;
  v76 = 21;
  v77 = 1;
  v78 = 100;
  chain_num = platform_get_chain_num();
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v81 = i;
        read_feedback_voltage(v81);
        if ( v2 > v75 )
          v75 = v2;
      }
    }
    if ( v75 <= 10.0 )
      break;
    if ( v78 > 20 )
    {
      v78 = 20;
      v82 = sleep(1u);
      if ( !--v76 )
        goto LABEL_92;
LABEL_88:
      v77 = 1;
    }
    else
    {
      v82 = sleep(1u);
      if ( !--v76 )
        goto LABEL_92;
      if ( ++v77 > 19 )
        goto LABEL_12;
      v78 = 20;
    }
  }
  if ( v75 <= 4.0 )
    goto LABEL_12;
  if ( v78 != 2 )
  {
    v78 = 2;
    v82 = sleep(1u);
    if ( !--v76 )
      goto LABEL_92;
    goto LABEL_88;
  }
  v82 = sleep(1u);
  if ( v76 != 1 )
    goto LABEL_12;
LABEL_92:
  V_LOCK(v82);
  v83 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v83);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "wait_for_psu_discharge",
    22,
    187,
    100,
    v100);
LABEL_12:
  v14 = bitmain_power_fw_version();
  V_LOCK(v14);
  v15 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v15);
  v16 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          331,
          60,
          v100);
  byte_2F3E19 = 0;
  dword_2F3E1C = 0;
  dword_2F3E20 = 0;
  byte_2F3E00 = 1;
  if ( opt_custom_voltage_swith || (v16 = is_eeprom_loaded()) != 0 )
    dword_2F3E0C = opt_custom_voltage;
  byte_2F3E04 = platform_is_adjustable_power(v16);
  byte_2F3E10 = platform_is_check_asic_voltage_enable();
  dword_2F3E14 = platfrom_get_check_asic_voltage();
  V_LOCK(dword_2F3E14);
  v17 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v17);
  v18 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          352,
          40,
          v100);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          353,
          40,
          v100);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v21);
  v22 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          354,
          40,
          v100);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          355,
          40,
          v100);
  V_LOCK(v24);
  v25 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    356,
    40,
    v100);
  if ( byte_2F3E04 && byte_2F3E10 )
  {
    power_status = set_check_asic_voltage(0);
    v96 = power_status;
  }
  else
  {
    power_status = set_working_voltage(0);
    v96 = power_status;
  }
  if ( v96 )
  {
    V_LOCK(power_status);
    v85 = logfmt_raw((int)v100, 0x1000u);
    is_pic_mcu_en = -1;
    V_UNLOCK(v85);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "power_init",
      10,
      364,
      100,
      v100);
    return is_pic_mcu_en;
  }
  v27 = v5 == 113;
  if ( v5 != 113 )
    v27 = v5 == 116;
  v28 = 0;
  if ( !v27 )
  {
    while ( 1 )
    {
      power_status = bitmain_get_power_status(power_status);
      ++v28;
      is_pic_mcu_en = power_status;
      if ( !power_status )
        break;
      if ( v28 == 5 * (v28 / 5) )
      {
        V_LOCK(power_status);
        v29 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v29);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          378,
          100,
          v100);
      }
      power_status = sleep(3u);
      if ( v28 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK(power_status);
  v30 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v30);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    385,
    40,
    v100);
  v31 = bitmain_power_off_0();
  byte_2F3E18 = 1;
  if ( (unsigned int)(opt_algo - 11) > 1 )
  {
    v31 = usleep((__useconds_t)"r17hb863d821ff89472fE");
    if ( v99 > 0 )
    {
      for ( j = 0; j < v99; ++j )
      {
        v87 = dev_ctrl(v31);
        (*(void (__fastcall **)(int))(v87 + 48))(j);
        v88 = sleep(1u);
        v89 = dev_ctrl(v88);
        (*(void (__fastcall **)(int))(v89 + 52))(j);
        v90 = usleep((__useconds_t)"1a378b912f98865E");
        v91 = dev_ctrl(v90);
        (*(void (__fastcall **)(int))(v91 + 48))(j);
        v92 = sleep(1u);
        v93 = dev_ctrl(v92);
        (*(void (__fastcall **)(int))(v93 + 52))(j);
        v94 = usleep((__useconds_t)"1a378b912f98865E");
        v95 = dev_ctrl(v94);
        v31 = (*(int (__fastcall **)(int))(v95 + 48))(j);
      }
    }
  }
  if ( byte_2F3E00 )
    v32 = dword_2F3E1C;
  else
    v32 = sub_B6168(v31);
  v97 = 3;
  v33 = (double)v32;
  while ( 2 )
  {
    v34 = sleep(1u);
    v35 = platform_is_pic_mcu_en(v34);
    if ( v35 )
    {
      device_num = query_device_num(v35);
      v37 = 0.0;
      v98 = device_num;
      if ( device_num > 0 )
      {
        v38 = 0;
        do
        {
          v39 = dev_ctrl(device_num);
          v40 = (*(int (__fastcall **)(int))(v39 + 60))(v38);
          feedback_voltage = read_feedback_voltage(v40);
          v42 = V_LOCK(feedback_voltage);
          v43 = dev_ctrl(v42);
          (*(void (__fastcall **)(int))(v43 + 60))(v38);
          v44 = logfmt_raw((int)v100, 0x1000u);
          V_UNLOCK(v44);
          device_num = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/miner_util/power_api.c",
                         166,
                         "get_minimal_feedback_voltage",
                         28,
                         69,
                         40,
                         v100);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v37 )
            {
              if ( v37 < 0.1 )
                v37 = v2;
            }
            else
            {
              v37 = v2;
            }
          }
          ++v38;
        }
        while ( v98 != v38 );
      }
      V_LOCK(device_num);
      v45 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v45);
      v46 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "get_minimal_feedback_voltage",
              28,
              74,
              20,
              v100);
      if ( (double)v32 * 0.75 / 100.0 <= v37 )
      {
        V_LOCK(v46);
        v47 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v47);
        v48 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/power_api.c",
                166,
                "check_feedback_voltage",
                22,
                95,
                80,
                v100);
        goto LABEL_44;
      }
      V_LOCK(v46);
      v74 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v74);
      v68 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "check_feedback_voltage",
              22,
              91,
              80,
              v100);
      goto LABEL_65;
    }
    v65 = read_feedback_voltage(0);
    V_LOCK(v65);
    v66 = logfmt_raw((int)v100, 0x1000u);
    V_UNLOCK(v66);
    v48 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/power_api.c",
            166,
            "check_feedback_voltage",
            22,
            100,
            20,
            v100);
    if ( v2 >= 0.0 )
    {
      if ( v2 * 100.0 <= v33 * 1.1 && v2 * 100.0 >= v33 * 0.9 )
        goto LABEL_44;
      V_LOCK(v48);
      v67 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v67);
      v68 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/power_api.c",
              166,
              "check_feedback_voltage",
              22,
              107,
              100,
              v100);
LABEL_65:
      if ( !--v97 )
      {
        V_LOCK(v68);
        v69 = logfmt_raw((int)v100, 0x1000u);
        is_pic_mcu_en = -1;
        V_UNLOCK(v69);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "power_init",
          10,
          407,
          100,
          v100);
        return is_pic_mcu_en;
      }
      continue;
    }
    break;
  }
  V_LOCK(v48);
  v73 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v73);
  v48 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/power_api.c",
          166,
          "check_feedback_voltage",
          22,
          102,
          80,
          v100);
LABEL_44:
  V_LOCK(v48);
  v49 = logfmt_raw((int)v100, 0x1000u);
  V_UNLOCK(v49);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "power_init",
    10,
    412,
    40,
    v100);
  if ( (unsigned int)(opt_algo - 11) <= 1 )
  {
    v50 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( k = 0; k < v99; ++k )
      {
        v52 = dev_ctrl(v50);
        v50 = (*(int (__fastcall **)(int))(v52 + 48))(k);
      }
    }
    v53 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( m = 0; m < v99; ++m )
      {
        v55 = dev_ctrl(v53);
        v53 = (*(int (__fastcall **)(int))(v55 + 52))(m);
      }
    }
    v56 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( n = 0; n < v99; ++n )
      {
        v58 = dev_ctrl(v56);
        v56 = (*(int (__fastcall **)(int))(v58 + 48))(n);
      }
    }
    v59 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( ii = 0; ii < v99; ++ii )
      {
        v61 = dev_ctrl(v59);
        v59 = (*(int (__fastcall **)(int))(v61 + 52))(ii);
      }
    }
    v62 = usleep((__useconds_t)&elf_hash_chain[4398]);
    if ( v99 > 0 )
    {
      for ( jj = 0; jj < v99; ++jj )
      {
        v64 = dev_ctrl(v62);
        v62 = (*(int (__fastcall **)(int))(v64 + 48))(jj);
      }
    }
  }
  return is_pic_mcu_en;
}
