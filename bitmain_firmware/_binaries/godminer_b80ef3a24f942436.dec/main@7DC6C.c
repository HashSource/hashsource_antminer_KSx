int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v5; // r5
  size_t v6; // r7
  int v7; // r10
  char *v8; // r8
  size_t i; // r5
  const unsigned __int16 **v10; // r0
  int v11; // t1
  int v12; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r8
  int v23; // r0
  int v24; // r7
  int hardware_version; // r10
  int v26; // r0
  _DWORD *all_created_runtime; // r10
  int started; // r0
  int v29; // r5
  int v30; // r0
  int v31; // r0
  int v32; // r0
  __sighandler_t v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  unsigned int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r12
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // [sp+14h] [bp-1068h]
  char v55[32]; // [sp+18h] [bp-1064h] BYREF
  double command[8]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf((char *)command, 0x40u, "pidof %s", "godminer");
  v5 = popen((const char *)command, "r");
  if ( !v5 )
    goto LABEL_57;
  while ( fgets(s, 256, v5) )
    ;
  v6 = 0;
  pclose(v5);
  v7 = 0;
  v8 = s;
  for ( i = 1; strlen(s) >= i; ++i )
  {
    memset(v55, 0, sizeof(v55));
    v10 = _ctype_b_loc();
    v11 = (unsigned __int8)*v8++;
    if ( ((*v10)[v11] & 0x2000) != 0 )
    {
      strncpy(v55, &s[v6], i - v6 - 1);
      v6 = i;
      if ( strtol(v55, 0, 10) > 0 )
        ++v7;
    }
  }
  if ( v7 && (printf("%d instance of %s is already Running on this machine", v7, "godminer"), v7 != 1) )
  {
    puts("godminer is forbidden to start again as it is already started, will exit immediately.");
    return 1;
  }
  else
  {
LABEL_57:
    if ( log_init() )
      puts("log init error!");
    ((void (*)(void))V_LOCK)();
    v14 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4,
            1628,
            40,
            s);
    V_LOCK(v15);
    v16 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "main",
      4,
      1633,
      40,
      s);
    while ( 1 )
    {
      v17 = sg_pcopy_to_buffer(argc, (int)argv, "a:c:hl:p:Po:u:v:F", (const char **)"(L'", 0);
      if ( v17 < 0 )
        break;
      parse_arg(v17, (char *)optarg);
    }
    if ( argc > optind )
    {
      V_LOCK(v17);
      v53 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "parse_cmdline",
        13,
        342,
        100,
        s);
      exit(1);
    }
    V_LOCK(v17);
    v18 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v18);
    v19 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4,
            1637,
            60,
            s);
    if ( !total_pools )
    {
      V_LOCK(v19);
      v45 = logfmt_raw((int)s, 0x1000u);
      v12 = 1;
      V_UNLOCK(v45);
      v46 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/god-miner.c",
              155,
              "main",
              4,
              1653,
              80,
              s);
      V_LOCK(v46);
      v47 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "main",
        4,
        1654,
        100,
        s);
      return v12;
    }
    v20 = droa_macro_check();
    if ( opt_version_path )
      read_version_file(v20);
    else
      make_fake_version(opt_algo);
    if ( opt_api_remote )
    {
      pools_active = 1;
      start_api_thread();
    }
    v21 = dhash_content_init(opt_algo);
    v22 = v21;
    if ( !v21 )
    {
      printf("invalid pointer(%s)!\n", "dhash_content");
      return 3;
    }
    v23 = set_frontend_runtime_type(v21, opt_algo);
    check_pool_worker(v23);
    v12 = hardware_init(opt_algo);
    if ( !v12 )
    {
      v24 = machine_runtime_init(opt_machine_type, opt_algo);
      if ( !v24 )
      {
        printf("invalid pointer(%s)!\n", "machine_runtime");
        return 3;
      }
      hardware_version = get_hardware_version();
      V_LOCK(hardware_version);
      v26 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "init_miner_version",
        18,
        418,
        40,
        s);
      sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
      check_sn(*(_DWORD *)(v24 + 116));
      *(_DWORD *)s = 0;
      all_created_runtime = get_all_created_runtime(s);
      if ( is_eeprom_loaded() )
      {
        while ( v12 < *(int *)s )
        {
          v44 = all_created_runtime[v12++];
          (*(void (__fastcall **)(int, int, int))(v44 + 160))(v44, 1, opt_custom_freq);
        }
      }
      http_test_case_init();
      started = start_http_thread();
      if ( check_pool_connect(started) == 35 )
        return 1;
      v12 = (*(int (__fastcall **)(int))(v24 + 48))(v24);
      if ( v12 )
        return v12;
      v29 = *(_DWORD *)get_all_created_runtime(command);
      v30 = strcmp((const char *)(v29 + 304), "E9 Pro");
      if ( v30 )
      {
        if ( *(_BYTE *)(v29 + 304) == 69
          && *(_BYTE *)(v29 + 305) == 49
          && *(_BYTE *)(v29 + 306) == 49
          && !*(_BYTE *)(v29 + 307) )
        {
          V_LOCK(v30);
          v31 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v31);
          v32 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/god-miner.c",
                  155,
                  "main",
                  4,
                  1737,
                  40,
                  s);
          start_dag_gen_engine_2282(v32);
        }
        else if ( !strcmp((const char *)(v29 + 304), "KAWPOW") )
        {
          V_LOCK(0);
          v48 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v48);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4,
            1740,
            40,
            s);
          start_dag_gen_engine_rvn();
        }
      }
      else
      {
        V_LOCK(0);
        v49 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v49);
        v50 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/god-miner.c",
                155,
                "main",
                4,
                1734,
                40,
                s);
        start_dag_gen_engine(v50);
      }
      signal(2, (__sighandler_t)sub_87390);
      signal(3, (__sighandler_t)sub_87390);
      signal(15, (__sighandler_t)sub_87390);
      signal(11, (__sighandler_t)sub_87390);
      signal(10, (__sighandler_t)sub_87390);
      v33 = signal(13, (__sighandler_t)1);
      V_LOCK(v33);
      v34 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "main",
        4u,
        1756,
        40,
        s);
      if ( create_pool_connect() == 35 )
        return 1;
      thr_info = 0;
      pthread_attr_init(&stru_3124E8);
      v54 = pthread_create(dword_3124E4, &stru_3124E8, (void *(*)(void *))work_generator_thread, &thr_info);
      v35 = pthread_attr_destroy(&stru_3124E8);
      if ( v54 )
      {
        V_LOCK(v35);
        v51 = logfmt_raw((int)s, 0x1000u);
        v12 = 1;
        V_UNLOCK(v51);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "main",
          4u,
          1767,
          100,
          s);
      }
      else
      {
        dword_312510 = 1;
        pthread_attr_init((pthread_attr_t *)&algn_312514[4]);
        v12 = pthread_create(
                (pthread_t *)algn_312514,
                (const pthread_attr_t *)&algn_312514[4],
                (void *(*)(void *))nonce_submit_thread,
                &dword_312510);
        v36 = pthread_attr_destroy((pthread_attr_t *)&algn_312514[4]);
        if ( v12 )
        {
          V_LOCK(v36);
          v52 = logfmt_raw((int)s, 0x1000u);
          v12 = 1;
          V_UNLOCK(v52);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4u,
            1775,
            100,
            s);
        }
        else
        {
          v37 = miner_monitor_init(v36);
          V_LOCK(v37);
          v38 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v38);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4u,
            1789,
            40,
            s);
          add_chip_status_observer(godminer_chip_status_monitor);
          add_fanspeed_observer(godminer_fan_monitor);
          miner_monitor_start();
          v39 = sleep(5u);
          set_miner_start_time(v39);
          set_elapsed_time_validity(1);
          start_watchpool_thread();
          sleep(5u);
          (*(void (__fastcall **)(int))(v24 + 12))(v24);
          (*(void (__fastcall **)(int))(v24 + 32))(v24);
          v40 = pthread_join(dword_3124E4[0], 0);
          V_LOCK(v40);
          v41 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v41);
          v42 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/god-miner.c",
                  155,
                  "main",
                  4u,
                  1840,
                  80,
                  s);
          print_summary(v42);
          v43 = dhash_content_exit(v22);
          (*(void (__fastcall **)(int))(v24 + 20))(v43);
          machine_runtime_exit(0);
        }
      }
    }
  }
  return v12;
}
