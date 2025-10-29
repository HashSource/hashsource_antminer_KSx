int __fastcall hardware_init(int a1)
{
  int v1; // r7
  int v3; // r0
  int v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // r6
  char *v9; // r8
  char *v10; // r0
  size_t v11; // r2
  _BOOL4 v12; // r0
  char *v13; // r7
  size_t v14; // r6
  int v15; // r6
  int all_created_runtime; // r0
  _DWORD *v17; // r7
  int v18; // t1
  char *v19; // r0
  int is_adjustable_power; // r0
  int v21; // r10
  int chain_sensor_num; // r0
  int v23; // r11
  int sensor_max_chip_temp; // r0
  int v25; // r10
  int sensor_max_pcb_temp; // r0
  int v27; // r11
  int sensor_min_pcb_temp; // r0
  int v29; // r10
  int sensor_max_uneffective_count; // r0
  int psu_gpio_port; // r0
  int v32; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v34)(int); // r6
  int chain_num; // r0
  int v36; // r0
  int v37; // r6
  int v38; // r0
  int device_num; // r0
  int v40; // r8
  int v41; // r7
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r6
  int v51; // r8
  int eeprom_chain_load_state; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  unsigned __int8 pic_device_high; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int max_voltage; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r7
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r3
  int v80; // r1
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  char *ptr; // [sp+2Ch] [bp-1040h]
  int v86; // [sp+30h] [bp-103Ch] BYREF
  _DWORD v87[13]; // [sp+34h] [bp-1038h] BYREF
  char v88[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (unsigned __int8)is_test_pool;
  if ( is_test_pool )
  {
    V_LOCK(a1);
    v6 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v6);
    v7 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
           187,
           "hardware_init",
           13,
           1085,
           40,
           v88);
    result = machine_info_init(v7);
    if ( result )
      return result;
  }
  else
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "hardware_init",
      13,
      1080,
      40,
      v88);
    strcpy(v88, "Miner Bootsup");
    v4 = log_droa(v88, v1);
    result = machine_info_init(v4);
    if ( result )
      return result;
  }
  v8 = *(const char **)&aCheckWorkingVo_0[4 * a1 + 536];
  v9 = (char *)calloc(1u, 8u);
  v10 = strchr(v8, 95);
  v11 = v10 - v8;
  if ( v10 )
    v12 = v10 - v8 <= 7;
  else
    v12 = 0;
  if ( v12 )
    strncpy(v9, v8, v11);
  ptr = (char *)calloc(1u, 8u);
  v13 = strchr(v8, 95);
  if ( v13 )
  {
    v14 = strlen(v8);
    if ( v14 - strlen(v13) <= 7 )
      strcpy(ptr, v13 + 1);
  }
  v15 = 0;
  LOWORD(v87[0]) = 0;
  str2hex((int)v87, (int)ptr, 4);
  *(_DWORD *)v88 = 0;
  all_created_runtime = get_all_created_runtime(v88);
  if ( *(int *)v88 > 0 )
  {
    v17 = (_DWORD *)(all_created_runtime - 4);
    do
    {
      v18 = v17[1];
      ++v17;
      v19 = strcpy((char *)(v18 + 316), v9);
      *(_DWORD *)(*v17 + 324) = (unsigned __int16)__rev16(LOWORD(v87[0]));
      is_adjustable_power = platform_is_adjustable_power(v19);
      v21 = *v17;
      *(_DWORD *)(*v17 + 992) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v15);
      v23 = *v17;
      *(_DWORD *)(v21 + 392) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v15);
      v25 = *v17;
      *(_DWORD *)(v23 + 396) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v15);
      v27 = *v17;
      *(_DWORD *)(v25 + 400) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v15);
      v29 = *v17;
      *(_DWORD *)(v27 + 404) = sensor_min_pcb_temp;
      sensor_max_uneffective_count = platform_get_sensor_max_uneffective_count(v15++);
      *(_DWORD *)(v29 + 408) = sensor_max_uneffective_count;
    }
    while ( v15 < *(int *)v88 );
  }
  free(v9);
  free(ptr);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info(v87);
  v32 = fan_control_info_init(
          v87[0],
          v87[1],
          v87[2],
          v87[3],
          v87[4],
          v87[5],
          v87[6],
          v87[7],
          v87[8],
          v87[9],
          v87[10],
          v87[11],
          v87[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en(v32);
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v34 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 8);
  chain_num = platform_get_chain_num();
  v36 = v34(chain_num);
  v37 = v36;
  if ( v36 )
  {
    V_LOCK(v36);
    v61 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v61);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "hardware_init",
      13,
      1103,
      100,
      v88);
    return 31;
  }
  v38 = check_fan_valiad();
  device_num = query_device_num(v38);
  v40 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v81 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v81);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "hardware_init",
      13,
      1114,
      100,
      v88);
    return 31;
  }
  v41 = 0;
  do
  {
    v42 = dev_ctrl(device_num);
    (*(void (__fastcall **)(int))(v42 + 40))(v41);
    device_num = runtime_ctrl(a1);
    ++v41;
    if ( !device_num )
    {
      V_LOCK(0);
      v65 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v65);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "hardware_init",
        13,
        1123,
        80,
        v88);
      return 31;
    }
  }
  while ( v40 != v41 );
  do
  {
    v43 = V_LOCK(device_num);
    v44 = dev_ctrl(v43);
    (*(void (__fastcall **)(int))(v44 + 48))(v37);
    v45 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v45);
    v46 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "hardware_init",
            13,
            1130,
            60,
            v88);
    v47 = dev_ctrl(v46);
    v48 = (*(int (__fastcall **)(int))(v47 + 48))(v37++);
    device_num = add_eeprom_device(v48);
  }
  while ( v37 != v41 );
  v49 = eeprom_load(device_num);
  v50 = v49;
  if ( v49 )
  {
    V_LOCK(v49);
    v82 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v82);
    v83 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "hardware_init",
            13,
            1162,
            100,
            v88);
    V_LOCK(v83);
    v84 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v84);
    v78 = g_zc;
    v79 = 1163;
    LOWORD(v80) = 27572;
    goto LABEL_43;
  }
  v51 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v51);
    if ( eeprom_chain_load_state == -1 )
    {
      v62 = V_LOCK(-1);
      ++v50;
      v63 = dev_ctrl(v62);
      (*(void (__fastcall **)(int))(v63 + 48))(v51);
      v64 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v64);
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs"
                                  "/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                                  187,
                                  "hardware_init",
                                  13,
                                  1181,
                                  100,
                                  v88);
    }
    else if ( !eeprom_chain_load_state )
    {
      v53 = V_LOCK(0);
      ++v50;
      v54 = dev_ctrl(v53);
      (*(void (__fastcall **)(int))(v54 + 48))(v51);
      v55 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v55);
      v56 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
              187,
              "hardware_init",
              13,
              1184,
              100,
              v88);
      v57 = V_LOCK(v56);
      v58 = dev_ctrl(v57);
      (*(void (__fastcall **)(int))(v58 + 48))(v51);
      v59 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v59);
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs"
                                  "/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                                  187,
                                  "hardware_init",
                                  13,
                                  1185,
                                  100,
                                  v88);
    }
    ++v51;
  }
  while ( v51 != v41 );
  if ( v50 )
  {
    V_LOCK(eeprom_chain_load_state);
    v75 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v75);
    v76 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "hardware_init",
            13,
            1211,
            100,
            v88);
    V_LOCK(v76);
    v77 = logfmt_raw((int)v88, 0x1000u);
    V_UNLOCK(v77);
    v78 = g_zc;
    v79 = 1212;
    LOWORD(v80) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/root"
                                    "fs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/mac"
                                    "hine_runtime_base.c";
LABEL_43:
    HIWORD(v80) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/b"
                                "uildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c" >> 16;
    zlog(v78, v80, 187, "hardware_init", 13, v79, 100, v88);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq(eeprom_chain_load_state);
  max_voltage = eeprom_get_max_voltage();
  opt_custom_voltage = max_voltage;
  if ( opt_algo == 12 )
    max_voltage = set_target_temp_by_eeprom_chip_ft();
  V_LOCK(max_voltage);
  v67 = logfmt_raw((int)v88, 0x1000u);
  V_UNLOCK(v67);
  v68 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "hardware_init",
          13,
          1271,
          40,
          v88);
  V_LOCK(v68);
  v69 = logfmt_raw((int)v88, 0x1000u);
  V_UNLOCK(v69);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
    187,
    "hardware_init",
    13,
    1272,
    40,
    v88);
  v86 = 0;
  v70 = get_all_created_runtime(&v86);
  if ( v86 > 0 )
  {
    v71 = v70 - 4;
    do
    {
      V_LOCK(v70);
      v71 += 4;
      v72 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v72);
      v73 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
              187,
              "show_backend_info",
              17,
              79,
              20,
              v88);
      V_LOCK(v73);
      ++v50;
      v74 = logfmt_raw((int)v88, 0x1000u);
      V_UNLOCK(v74);
      v70 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
              187,
              "show_backend_info",
              17,
              80,
              20,
              v88);
    }
    while ( v50 < v86 );
  }
  return 0;
}
