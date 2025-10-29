int __fastcall hardware_init(int a1)
{
  int result; // r0
  const char *v3; // r4
  char *v4; // r7
  char *v5; // r0
  size_t v6; // r2
  _BOOL4 v7; // r0
  char *v8; // r9
  char *v9; // r5
  size_t v10; // r4
  int v11; // r5
  char *all_created_runtime; // r0
  char *v13; // r6
  int v14; // t1
  int is_adjustable_power; // r0
  int v16; // r10
  int chain_sensor_num; // r0
  int v18; // r11
  int sensor_max_chip_temp; // r0
  int v20; // r10
  int sensor_max_pcb_temp; // r0
  int v22; // r11
  int sensor_min_pcb_temp; // r0
  int v24; // r10
  int sensor_max_uneffective_count; // r0
  int psu_gpio_port; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v28)(int); // r5
  int chain_num; // r0
  int v30; // r5
  _DWORD *device_num; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r7
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r5
  int v42; // r8
  int eeprom_chain_load_state; // r0
  int v44; // r9
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  char pic_device_high; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  char *v55; // r0
  char *v56; // r7
  int v57; // t1
  int v58; // r3
  int v59; // r1
  int v60; // r0
  int v61; // [sp+0h] [bp-106Ch]
  int v62; // [sp+30h] [bp-103Ch] BYREF
  int v63[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v64[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init();
  if ( result )
    return result;
  v3 = *(const char **)&aCheckWorkingVo_0[4 * a1 + 436];
  v4 = (char *)calloc(1u, 8u);
  v5 = strchr(v3, 95);
  v6 = v5 - v3;
  if ( v5 )
    v7 = v5 - v3 <= 7;
  else
    v7 = 0;
  if ( v7 )
    strncpy(v4, v3, v6);
  v8 = (char *)calloc(1u, 8u);
  v9 = strchr(v3, 95);
  if ( v9 )
  {
    v10 = strlen(v3);
    if ( v10 - strlen(v9) <= 7 )
      strcpy(v8, v9 + 1);
  }
  v11 = 0;
  LOWORD(v63[0]) = 0;
  str2hex((int)v63, (int)v8, 4);
  v64[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v64);
  if ( v64[0] > 0 )
  {
    v13 = all_created_runtime - 4;
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      v13 += 4;
      strcpy((char *)(v14 + 296), v4);
      *(_DWORD *)(*(_DWORD *)v13 + 304) = (unsigned __int16)__rev16(LOWORD(v63[0]));
      is_adjustable_power = platform_is_adjustable_power();
      v16 = *(_DWORD *)v13;
      *(_DWORD *)(*(_DWORD *)v13 + 968) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v11);
      v18 = *(_DWORD *)v13;
      *(_DWORD *)(v16 + 372) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v11);
      v20 = *(_DWORD *)v13;
      *(_DWORD *)(v18 + 376) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v11);
      v22 = *(_DWORD *)v13;
      *(_DWORD *)(v20 + 380) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v11);
      v24 = *(_DWORD *)v13;
      *(_DWORD *)(v22 + 384) = sensor_min_pcb_temp;
      sensor_max_uneffective_count = platform_get_sensor_max_uneffective_count(v11++);
      *(_DWORD *)(v24 + 388) = sensor_max_uneffective_count;
    }
    while ( v11 < v64[0] );
  }
  free(v4);
  free(v8);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info((float *)v63);
  fan_control_info_init(
    v63[0],
    v63[1],
    v63[2],
    v63[3],
    v63[4],
    v63[5],
    *(float *)&v63[6],
    v63[7],
    v63[8],
    v63[9],
    v63[10],
    v63[11],
    v63[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v28 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 8);
  chain_num = platform_get_chain_num();
  v30 = v28(chain_num);
  if ( v30 )
  {
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1027,
      100,
      v64);
    return 31;
  }
  check_fan_valiad();
  device_num = (_DWORD *)query_device_num();
  v32 = device_num;
  if ( (int)device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "query_device_num error code %d and then exit", v32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1038,
      100,
      v64);
    return 31;
  }
  v33 = 0;
  do
  {
    v34 = dev_ctrl(device_num);
    (*(void (__fastcall **)(_DWORD *))(v34 + 40))(v33);
    device_num = runtime_ctrl(a1);
    v33 = (_DWORD *)((char *)v33 + 1);
    if ( !device_num )
    {
      V_LOCK();
      logfmt_raw((char *)v64, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "hardware_init",
        13,
        1047,
        80,
        v64);
      return 31;
    }
  }
  while ( v32 != v33 );
  do
  {
    v35 = V_LOCK();
    v36 = dev_ctrl(v35);
    v37 = (*(int (__fastcall **)(int))(v36 + 48))(v30);
    logfmt_raw((char *)v64, 0x1000u, 0, "eeprom add device: %d", v37);
    V_UNLOCK();
    v38 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "hardware_init",
            13,
            1054,
            60,
            v64);
    v39 = dev_ctrl(v38);
    v40 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v39 + 48))(v30++);
    add_eeprom_device(v40, SHIDWORD(v40));
  }
  while ( (_DWORD *)v30 != v33 );
  v41 = eeprom_load();
  if ( v41 )
  {
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "EEPROM load error!, pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1086,
      100,
      v64);
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
    V_UNLOCK();
    v60 = g_zc;
    v58 = 1087;
    LOWORD(v59) = 15720;
    goto LABEL_38;
  }
  v42 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v42);
    v44 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      v52 = V_LOCK();
      ++v41;
      v53 = dev_ctrl(v52);
      v54 = (*(int (__fastcall **)(int))(v53 + 48))(v42);
      logfmt_raw((char *)v64, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "hardware_init",
        13,
        1104,
        100,
        v64);
    }
    else if ( !eeprom_chain_load_state )
    {
      v45 = V_LOCK();
      ++v41;
      v46 = dev_ctrl(v45);
      v47 = (*(int (__fastcall **)(int))(v46 + 48))(v42);
      logfmt_raw((char *)v64, 0x1000u, v44, "Chain%d load EEPROM error.", v47);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "hardware_init",
        13,
        1107,
        100,
        v64);
      v48 = V_LOCK();
      v49 = dev_ctrl(v48);
      v50 = (*(int (__fastcall **)(int))(v49 + 48))(v42);
      logfmt_raw((char *)v64, 0x1000u, v44, "Sweep error string = J%d:4.", v50);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "hardware_init",
        13,
        1108,
        100,
        v64);
    }
    ++v42;
  }
  while ( (_DWORD *)v42 != v33 );
  if ( v41 )
  {
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "Error! EEPROM data corrupted. pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1132,
      100,
      v64);
    V_LOCK();
    logfmt_raw((char *)v64, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
    V_UNLOCK();
    v58 = 1133;
    LOWORD(v59) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/root"
                                    "fs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c";
    v60 = g_zc;
LABEL_38:
    HIWORD(v59) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/b"
                                "uildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c" >> 16;
    zlog(v60, v59, 182, "hardware_init", 13, v58, 100, v64);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw((char *)v64, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "hardware_init",
    13,
    1176,
    40,
    v64);
  V_LOCK();
  logfmt_raw((char *)v64, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "hardware_init",
    13,
    1177,
    40,
    v64);
  v62 = 0;
  v55 = (char *)get_all_created_runtime(&v62);
  if ( v62 > 0 )
  {
    v56 = v55 - 4;
    do
    {
      V_LOCK();
      v57 = *((_DWORD *)v56 + 1);
      v56 += 4;
      logfmt_raw((char *)v64, 0x1000u, 0, "chain[%d] %s", v41, v57 + 296);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "show_backend_info",
        17,
        78,
        20,
        v64);
      V_LOCK();
      v61 = v41++;
      logfmt_raw((char *)v64, 0x1000u, 0, "chain[%d] %x", v61, *(_DWORD *)(*(_DWORD *)v56 + 304));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "show_backend_info",
        17,
        79,
        20,
        v64);
    }
    while ( v41 < v62 );
  }
  return 0;
}
