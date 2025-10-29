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
  _DWORD *v14; // r0
  _DWORD *v15; // r9
  int hardware_version; // r8
  _DWORD *all_created_runtime; // r10
  int v18; // r8
  int v19; // r0
  int v20; // r12
  void *v22; // [sp+10h] [bp-106Ch]
  char v23[32]; // [sp+18h] [bp-1064h] BYREF
  double command[8]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf((char *)command, 0x40u, "pidof %s", "godminer");
  v4 = popen((const char *)command, "r");
  if ( !v4 )
    goto LABEL_50;
  while ( fgets(s, 256, v4) )
    ;
  v5 = 0;
  pclose(v4);
  v6 = 0;
  v7 = s;
  for ( i = 1; strlen(s) >= i; ++i )
  {
    memset(v23, 0, sizeof(v23));
    v9 = _ctype_b_loc();
    v10 = (unsigned __int8)*v7++;
    if ( ((*v9)[v10] & 0x2000) != 0 )
    {
      strncpy(v23, &s[v5], i - v5 - 1);
      v5 = i;
      if ( strtol(v23, 0, 10) > 0 )
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
LABEL_50:
    if ( log_init() )
      puts("log init error!");
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "release version");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "main",
      4,
      1579,
      40,
      s);
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "asic mode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "main",
      4,
      1584,
      40,
      s);
    while ( 1 )
    {
      v13 = sg_pcopy_to_buffer(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_25E234, 0);
      if ( v13 < 0 )
        break;
      parse_arg(v13, (char *)optarg);
    }
    if ( argc > optind )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "parse_cmdline",
        13,
        555,
        100,
        s);
      exit(1);
    }
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_25E1D8[opt_algo]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "main",
      4,
      1588,
      60,
      s);
    if ( !total_pools )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "Need to specify at least one pool server.");
      v11 = 1;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "main",
        4,
        1604,
        80,
        s);
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "Pool setup failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "main",
        4,
        1605,
        100,
        s);
      return v11;
    }
    droa_macro_check();
    if ( opt_version_path )
      read_version_file();
    else
      make_fake_version();
    if ( opt_api_remote )
    {
      pools_active = 1;
      start_api_thread();
    }
    v14 = dhash_content_init(opt_algo);
    v22 = v14;
    if ( !v14 )
    {
      printf("invalid pointer(%s)!\n", "dhash_content");
      return 3;
    }
    set_frontend_runtime_type((int)v14, opt_algo);
    check_pool_worker();
    v11 = hardware_init(opt_algo);
    if ( !v11 )
    {
      v15 = machine_runtime_init(opt_machine_type, opt_algo);
      if ( !v15 )
      {
        printf("invalid pointer(%s)!\n", "machine_runtime");
        return 3;
      }
      hardware_version = get_hardware_version();
      V_LOCK();
      logfmt_raw(
        s,
        0x1000u,
        0,
        "godminer Version = 0x%04X %s",
        (unsigned __int16)hardware_version,
        "2.0.0_release_clean_master-kas_bbb94a36ce82a80e90f8dc6cc2c4d27b1a1bb765_Sep 25 2023 21:16:23");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "init_miner_version",
        18,
        632,
        40,
        s);
      sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
      *(_DWORD *)s = 0;
      all_created_runtime = get_all_created_runtime(s);
      if ( is_eeprom_loaded() )
      {
        while ( v11 < *(int *)s )
        {
          v20 = all_created_runtime[v11++];
          (*(void (__fastcall **)(int, int, int))(v20 + 160))(v20, 1, opt_custom_freq);
        }
      }
      check_sn(v15[29]);
      http_test_case_init();
      start_http_thread();
      if ( check_pool_connect() == 35 )
        return 1;
      v11 = ((int (__fastcall *)(_DWORD *))v15[12])(v15);
      if ( v11 )
        return v11;
      if ( opt_algo == 10 )
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "start_dag_gen_engine_rvn begin!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "main",
          4,
          1682,
          40,
          s);
        start_dag_gen_engine_rvn();
      }
      signal(2, (__sighandler_t)sub_85DF8);
      signal(3, (__sighandler_t)sub_85DF8);
      signal(15, (__sighandler_t)sub_85DF8);
      signal(11, (__sighandler_t)sub_85DF8);
      signal(10, (__sighandler_t)sub_85DF8);
      signal(13, (__sighandler_t)1);
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "always catch signal!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "main",
        4u,
        1709,
        40,
        s);
      if ( create_pool_connect() == 35 )
        return 1;
      thr_info = 0;
      pthread_attr_init(&stru_2E9708);
      v18 = pthread_create(dword_2E9704, &stru_2E9708, (void *(*)(void *))work_generator_thread, &thr_info);
      pthread_attr_destroy(&stru_2E9708);
      if ( v18 )
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "work generator thread %d create failed");
        v11 = 1;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "main",
          4u,
          1719,
          100,
          s);
      }
      else
      {
        dword_2E9730 = 1;
        pthread_attr_init((pthread_attr_t *)&dword_2E9734[1]);
        v11 = pthread_create(
                dword_2E9734,
                (const pthread_attr_t *)&dword_2E9734[1],
                (void *(*)(void *))nonce_submit_thread,
                &dword_2E9730);
        v19 = pthread_attr_destroy((pthread_attr_t *)&dword_2E9734[1]);
        if ( v11 )
        {
          V_LOCK();
          logfmt_raw(s, 0x1000u, 0, "simulation submit thread create failed");
          v11 = 1;
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4u,
            1727,
            100,
            s);
        }
        else
        {
          miner_monitor_init(v19);
          V_LOCK();
          logfmt_raw(s, 0x1000u, 0, "Skip DOAROA LOG");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4u,
            1740,
            40,
            s);
          add_chip_status_observer((int)godminer_chip_status_monitor);
          add_fanspeed_observer((int)godminer_fan_monitor);
          miner_monitor_start();
          sleep(5u);
          set_miner_start_time();
          set_elapsed_time_validity(1);
          start_watchpool_thread();
          sleep(5u);
          ((void (__fastcall *)(_DWORD *))v15[3])(v15);
          ((void (__fastcall *)(_DWORD *))v15[8])(v15);
          pthread_join(dword_2E9704[0], 0);
          V_LOCK();
          logfmt_raw(s, 0x1000u, 0, "workio threads dead, exiting.");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4u,
            1787,
            80,
            s);
          print_summary();
          dhash_content_exit(v22);
          ((void (*)(void))v15[5])();
          machine_runtime_exit(0);
        }
      }
    }
  }
  return v11;
}
