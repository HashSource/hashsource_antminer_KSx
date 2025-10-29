int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v4; // r5
  size_t v5; // r8
  int v6; // r11
  char *v7; // r9
  size_t i; // r5
  const unsigned __int16 **v9; // r0
  int v10; // t1
  int v11; // r5
  int v13; // r0
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
  int version_file; // r0
  int v25; // r0
  int v26; // r8
  int v27; // r0
  int v28; // r7
  int hardware_version; // r9
  int v30; // r0
  int all_created_runtime; // r9
  int v32; // r0
  int started; // r0
  __sighandler_t v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  unsigned int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r12
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v57; // [sp+10h] [bp-106Ch]
  char v58[32]; // [sp+18h] [bp-1064h] BYREF
  double command[8]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf((char *)command, 0x40u, "pidof %s", "godminer");
  v4 = popen((const char *)command, "r");
  if ( !v4 )
    goto LABEL_53;
  while ( fgets(s, 256, v4) )
    ;
  v5 = 0;
  pclose(v4);
  v6 = 0;
  v7 = s;
  for ( i = 1; strlen(s) >= i; ++i )
  {
    memset(v58, 0, sizeof(v58));
    v9 = _ctype_b_loc();
    v10 = (unsigned __int8)*v7++;
    if ( ((*v9)[v10] & 0x2000) != 0 )
    {
      strncpy(v58, &s[v5], i - v5 - 1);
      v5 = i;
      if ( strtol(v58, 0, 10) > 0 )
        ++v6;
    }
  }
  if ( v6 && (printf("%d instance of %s is already Running on this machine", v6, "godminer"), v6 != 1) )
  {
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return 1;
  }
  else
  {
LABEL_53:
    if ( log_init() )
      puts("log init error!");
    ((void (*)(void))V_LOCK)();
    v13 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v13);
    v14 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4,
            1851,
            40,
            s);
    V_LOCK(v14);
    v15 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "main",
      4,
      1856,
      40,
      s);
    while ( 1 )
    {
      v16 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_27074C, 0);
      if ( v16 < 0 )
        break;
      parse_arg(v16, (char *)optarg);
    }
    if ( argc > optind )
    {
      V_LOCK(v16);
      v55 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "parse_cmdline",
        13,
        557,
        100,
        s);
      exit(1);
    }
    V_LOCK(v16);
    v17 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v17);
    v18 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4,
            1860,
            60,
            s);
    if ( opt_algo == 12 && fan_pwm_fixed )
      v18 = sub_88068(v18);
    if ( !total_pools )
    {
      V_LOCK(v18);
      v50 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v50);
      v11 = 1;
      v51 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "main",
              4,
              1877,
              80,
              s);
      V_LOCK(v51);
      v52 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "main",
        4,
        1878,
        100,
        s);
      return v11;
    }
    v19 = check_test_pool();
    V_LOCK(v19);
    v20 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4,
            1884,
            40,
            s);
    v22 = cal_log_init(v21);
    v23 = droa_macro_check(v22);
    if ( opt_version_path )
      version_file = read_version_file(v23);
    else
      version_file = make_fake_version(opt_algo);
    if ( opt_api_remote )
    {
      pools_active = 1;
      start_api_thread(version_file);
    }
    v25 = dhash_content_init(opt_algo);
    v26 = v25;
    if ( !v25 )
    {
      printf("invalid pointer(%s)!\n", "dhash_content");
      return 3;
    }
    v27 = set_frontend_runtime_type(v25, opt_algo);
    check_pool_worker(v27);
    v11 = hardware_init(opt_algo);
    if ( !v11 )
    {
      v28 = machine_runtime_init(opt_machine_type, opt_algo);
      if ( !v28 )
      {
        printf("invalid pointer(%s)!\n", "machine_runtime");
        return 3;
      }
      hardware_version = get_hardware_version();
      V_LOCK(hardware_version);
      v30 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "init_miner_version",
        18,
        634,
        40,
        s);
      sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
      check_sn(*(_DWORD *)(v28 + 120));
      (*(void (__fastcall **)(int))(v28 + 52))(v28);
      *(_DWORD *)s = 0;
      all_created_runtime = get_all_created_runtime(s);
      if ( is_eeprom_loaded() )
      {
        while ( v11 < *(int *)s )
        {
          v49 = *(_DWORD *)(all_created_runtime + 4 * v11++);
          (*(void (__fastcall **)(int, int, int))(v49 + 160))(v49, 1, opt_custom_freq);
        }
      }
      v32 = http_test_case_init();
      started = start_http_thread(v32);
      if ( check_pool_connect(started) == 35 )
        return 1;
      v11 = (*(int (__fastcall **)(int))(v28 + 48))(v28);
      if ( v11 )
        return v11;
      signal(2, (__sighandler_t)sub_87D94);
      signal(3, (__sighandler_t)sub_87D94);
      signal(15, (__sighandler_t)sub_87D94);
      signal(11, (__sighandler_t)sub_87D94);
      signal(10, (__sighandler_t)sub_87D94);
      v34 = signal(13, (__sighandler_t)1);
      V_LOCK(v34);
      v35 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v35);
      v36 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "main",
              4u,
              1988,
              40,
              s);
      if ( create_pool_connect(v36) == 35 )
        return 1;
      thr_info = 0;
      pthread_attr_init(&stru_307D30);
      v57 = pthread_create(dword_307D2C, &stru_307D30, (void *(*)(void *))work_generator_thread, &thr_info);
      v37 = pthread_attr_destroy(&stru_307D30);
      if ( v57 )
      {
        V_LOCK(v37);
        v53 = logfmt_raw((int)s, 0x1000u);
        v11 = 1;
        V_UNLOCK(v53);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "main",
          4u,
          1999,
          100,
          s);
      }
      else
      {
        dword_307D58 = 1;
        pthread_attr_init((pthread_attr_t *)&dword_307D5C[1]);
        v11 = pthread_create(
                dword_307D5C,
                (const pthread_attr_t *)&dword_307D5C[1],
                (void *(*)(void *))nonce_submit_thread,
                &dword_307D58);
        v38 = pthread_attr_destroy((pthread_attr_t *)&dword_307D5C[1]);
        if ( v11 )
        {
          V_LOCK(v38);
          v54 = logfmt_raw((int)s, 0x1000u);
          v11 = 1;
          V_UNLOCK(v54);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4u,
            2007,
            100,
            s);
        }
        else
        {
          v39 = miner_monitor_init(v38);
          if ( !is_test_pool )
          {
            V_LOCK(v39);
            v40 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v40);
            v41 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                    160,
                    "main",
                    4u,
                    2017,
                    40,
                    s);
            record_nvdata_droalog(v41);
          }
          add_chip_status_observer(godminer_chip_status_monitor);
          v42 = add_fanspeed_observer(godminer_fan_monitor);
          miner_monitor_start(v42);
          v43 = sleep(5u);
          set_miner_start_time(v43);
          v44 = set_elapsed_time_validity(1);
          start_watchpool_thread(v44);
          sleep(5u);
          (*(void (__fastcall **)(int))(v28 + 12))(v28);
          (*(void (__fastcall **)(int))(v28 + 32))(v28);
          v45 = pthread_join(dword_307D2C[0], 0);
          V_LOCK(v45);
          v46 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v46);
          v47 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                  160,
                  "main",
                  4,
                  2070,
                  80,
                  s);
          print_summary(v47);
          v48 = dhash_content_exit(v26);
          (*(void (__fastcall **)(int))(v28 + 20))(v48);
          machine_runtime_exit(0);
        }
      }
    }
  }
  return v11;
}
