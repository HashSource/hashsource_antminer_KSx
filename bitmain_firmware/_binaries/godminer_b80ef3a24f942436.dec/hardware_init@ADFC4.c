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
  char *v15; // r0
  int is_adjustable_power; // r0
  int v17; // r10
  int chain_sensor_num; // r0
  int v19; // r11
  int sensor_max_chip_temp; // r0
  int v21; // r10
  int sensor_max_pcb_temp; // r0
  int v23; // r11
  int sensor_min_pcb_temp; // r0
  int v25; // r10
  int sensor_max_uneffective_count; // r0
  int psu_gpio_port; // r0
  int v28; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v30)(int); // r5
  int chain_num; // r0
  int v32; // r0
  int v33; // r5
  int v34; // r0
  int device_num; // r0
  int v36; // r6
  int v37; // r7
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  int v45; // r0
  int v46; // r5
  int v47; // r8
  int eeprom_chain_load_state; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  unsigned __int8 pic_device_high; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  char *v65; // r0
  char *v66; // r7
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r3
  int v74; // r1
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // [sp+30h] [bp-103Ch] BYREF
  int v81[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v82[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init(a1);
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
  LOWORD(v81[0]) = 0;
  str2hex((int)v81, (int)v8, 4);
  v82[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v82);
  if ( v82[0] > 0 )
  {
    v13 = all_created_runtime - 4;
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      v13 += 4;
      v15 = strcpy((char *)(v14 + 320), v4);
      *(_DWORD *)(*(_DWORD *)v13 + 328) = (unsigned __int16)__rev16(LOWORD(v81[0]));
      is_adjustable_power = platform_is_adjustable_power(v15);
      v17 = *(_DWORD *)v13;
      *(_DWORD *)(*(_DWORD *)v13 + 1000) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v11);
      v19 = *(_DWORD *)v13;
      *(_DWORD *)(v17 + 396) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v11);
      v21 = *(_DWORD *)v13;
      *(_DWORD *)(v19 + 400) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v11);
      v23 = *(_DWORD *)v13;
      *(_DWORD *)(v21 + 404) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v11);
      v25 = *(_DWORD *)v13;
      *(_DWORD *)(v23 + 408) = sensor_min_pcb_temp;
      sensor_max_uneffective_count = platform_get_sensor_max_uneffective_count(v11++);
      *(_DWORD *)(v25 + 412) = sensor_max_uneffective_count;
    }
    while ( v11 < v82[0] );
  }
  free(v4);
  free(v8);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info((float *)v81);
  v28 = fan_control_info_init(
          v81[0],
          v81[1],
          v81[2],
          v81[3],
          v81[4],
          v81[5],
          *(float *)&v81[6],
          v81[7],
          v81[8],
          v81[9],
          v81[10],
          v81[11],
          v81[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en(v28);
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v30 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 12);
  chain_num = platform_get_chain_num();
  v32 = v30(chain_num);
  v33 = v32;
  if ( v32 )
  {
    V_LOCK(v32);
    v57 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v57);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1025,
      100,
      v82);
    return 31;
  }
  v34 = check_fan_valiad();
  device_num = query_device_num(v34);
  v36 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v76 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v76);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "hardware_init",
      13,
      1038,
      100,
      v82);
    return 31;
  }
  v37 = 0;
  do
  {
    v38 = dev_ctrl(device_num);
    (*(void (__fastcall **)(int))(v38 + 52))(v37);
    device_num = runtime_ctrl(a1);
    ++v37;
    if ( !device_num )
    {
      V_LOCK(0);
      v61 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v61);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "hardware_init",
        13,
        1047,
        80,
        v82);
      return 31;
    }
  }
  while ( v36 != v37 );
  do
  {
    v39 = V_LOCK(device_num);
    v40 = dev_ctrl(v39);
    (*(void (__fastcall **)(int))(v40 + 60))(v33);
    v41 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v41);
    v42 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "hardware_init",
            13,
            1054,
            60,
            v82);
    v43 = dev_ctrl(v42);
    v44 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v43 + 60))(v33++);
    device_num = add_eeprom_device(v44, SHIDWORD(v44));
  }
  while ( v33 != v37 );
  v45 = eeprom_load();
  v46 = v45;
  if ( v45 )
  {
    V_LOCK(v45);
    v77 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v77);
    v78 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "hardware_init",
            13,
            1087,
            100,
            v82);
    V_LOCK(v78);
    v79 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v79);
    v75 = g_zc;
    v73 = 1088;
    LOWORD(v74) = -23320;
    goto LABEL_38;
  }
  v47 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v47);
    if ( eeprom_chain_load_state == -1 )
    {
      v58 = V_LOCK(-1);
      ++v46;
      v59 = dev_ctrl(v58);
      (*(void (__fastcall **)(int))(v59 + 60))(v47);
      v60 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v60);
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs"
                                  "/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                  182,
                                  "hardware_init",
                                  13,
                                  1106,
                                  100,
                                  v82);
    }
    else if ( !eeprom_chain_load_state )
    {
      v49 = V_LOCK(0);
      ++v46;
      v50 = dev_ctrl(v49);
      (*(void (__fastcall **)(int))(v50 + 60))(v47);
      v51 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v51);
      v52 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              182,
              "hardware_init",
              13,
              1109,
              100,
              v82);
      v53 = V_LOCK(v52);
      v54 = dev_ctrl(v53);
      (*(void (__fastcall **)(int))(v54 + 60))(v47);
      v55 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v55);
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs"
                                  "/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                  182,
                                  "hardware_init",
                                  13,
                                  1110,
                                  100,
                                  v82);
    }
    ++v47;
  }
  while ( v47 != v37 );
  if ( v46 )
  {
    V_LOCK(eeprom_chain_load_state);
    v70 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v70);
    v71 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "hardware_init",
            13,
            1136,
            100,
            v82);
    V_LOCK(v71);
    v72 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v72);
    v73 = 1137;
    LOWORD(v74) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/root"
                                    "fs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c";
    v75 = g_zc;
LABEL_38:
    HIWORD(v74) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/b"
                                "uildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c" >> 16;
    zlog(v75, v74, 182, "hardware_init", 13, v73, 100, v82);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK(opt_custom_voltage);
  v62 = logfmt_raw((int)v82, 0x1000u);
  V_UNLOCK(v62);
  v63 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
          182,
          "hardware_init",
          13,
          1180,
          40,
          v82);
  V_LOCK(v63);
  v64 = logfmt_raw((int)v82, 0x1000u);
  V_UNLOCK(v64);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "hardware_init",
    13,
    1181,
    40,
    v82);
  v80 = 0;
  v65 = (char *)get_all_created_runtime(&v80);
  if ( v80 > 0 )
  {
    v66 = v65 - 4;
    do
    {
      V_LOCK(v65);
      v66 += 4;
      v67 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v67);
      v68 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              182,
              "show_backend_info",
              17,
              78,
              20,
              v82);
      V_LOCK(v68);
      ++v46;
      v69 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v69);
      v65 = (char *)zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                      182,
                      "show_backend_info",
                      17,
                      79,
                      20,
                      v82);
    }
    while ( v46 < v80 );
  }
  return 0;
}
