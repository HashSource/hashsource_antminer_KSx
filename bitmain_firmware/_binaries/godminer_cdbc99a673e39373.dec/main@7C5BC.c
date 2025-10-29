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
  int version_file; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r9
  int hardware_version; // r8
  int v25; // r0
  int all_created_runtime; // r10
  int v27; // r0
  int v28; // r0
  int started; // r0
  __sighandler_t v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r8
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
  int v44; // r0
  int v45; // r12
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v55; // [sp+10h] [bp-106Ch]
  char v56[32]; // [sp+18h] [bp-1064h] BYREF
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
    memset(v56, 0, sizeof(v56));
    v9 = _ctype_b_loc();
    v10 = (unsigned __int8)*v7++;
    if ( ((*v9)[v10] & 0x2000) != 0 )
    {
      strncpy(v56, &s[v5], i - v5 - 1);
      v5 = i;
      if ( strtol(v56, 0, 10) > 0 )
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
    ((void (*)(void))V_LOCK)();
    v13 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v13);
    v14 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4,
            1579,
            40,
            s);
    V_LOCK(v14);
    v15 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v15);
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
      v16 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_25F4E0, 0);
      if ( v16 < 0 )
        break;
      parse_arg(v16, (char *)optarg);
    }
    if ( argc > optind )
    {
      V_LOCK(v16);
      v53 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v53);
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
    V_LOCK(v16);
    v17 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v17);
    v18 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "main",
            4,
            1588,
            60,
            s);
    if ( !total_pools )
    {
      V_LOCK(v18);
      v46 = logfmt_raw((int)s, 0x1000u);
      v11 = 1;
      V_UNLOCK(v46);
      v47 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/god-miner.c",
              155,
              "main",
              4,
              1604,
              80,
              s);
      V_LOCK(v47);
      v48 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v48);
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
    v19 = droa_macro_check(v18);
    if ( opt_version_path )
      version_file = read_version_file(v19);
    else
      version_file = make_fake_version(opt_algo);
    if ( opt_api_remote )
    {
      pools_active = 1;
      start_api_thread(version_file);
    }
    v21 = dhash_content_init(opt_algo);
    v55 = v21;
    if ( !v21 )
    {
      printf("invalid pointer(%s)!\n", "dhash_content");
      return 3;
    }
    v22 = set_frontend_runtime_type(v21, opt_algo);
    check_pool_worker(v22);
    v11 = hardware_init(opt_algo);
    if ( !v11 )
    {
      v23 = machine_runtime_init(opt_machine_type, opt_algo);
      if ( !v23 )
      {
        printf("invalid pointer(%s)!\n", "machine_runtime");
        return 3;
      }
      hardware_version = get_hardware_version();
      V_LOCK(hardware_version);
      v25 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v25);
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
          v45 = *(_DWORD *)(all_created_runtime + 4 * v11++);
          (*(void (__fastcall **)(int, int, int))(v45 + 160))(v45, 1, opt_custom_freq);
        }
      }
      v27 = check_sn(*(_DWORD *)(v23 + 116));
      v28 = http_test_case_init(v27);
      started = start_http_thread(v28);
      if ( check_pool_connect(started) == 35 )
        return 1;
      v11 = (*(int (__fastcall **)(int))(v23 + 48))(v23);
      if ( v11 )
        return v11;
      if ( opt_algo == 10 )
      {
        V_LOCK(0);
        v50 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v50);
        v51 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/god-miner.c",
                155,
                "main",
                4,
                1682,
                40,
                s);
        start_dag_gen_engine_rvn(v51);
      }
      signal(2, (__sighandler_t)sub_86144);
      signal(3, (__sighandler_t)sub_86144);
      signal(15, (__sighandler_t)sub_86144);
      signal(11, (__sighandler_t)sub_86144);
      signal(10, (__sighandler_t)sub_86144);
      v30 = signal(13, (__sighandler_t)1);
      V_LOCK(v30);
      v31 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v31);
      v32 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/god-miner.c",
              155,
              "main",
              4u,
              1709,
              40,
              s);
      if ( create_pool_connect(v32) == 35 )
        return 1;
      thr_info = 0;
      pthread_attr_init(&stru_2EAC00);
      v33 = pthread_create(dword_2EABFC, &stru_2EAC00, (void *(*)(void *))work_generator_thread, &thr_info);
      v34 = pthread_attr_destroy(&stru_2EAC00);
      if ( v33 )
      {
        V_LOCK(v34);
        v49 = logfmt_raw((int)s, 0x1000u);
        v11 = 1;
        V_UNLOCK(v49);
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
        dword_2EAC28 = 1;
        pthread_attr_init((pthread_attr_t *)&dword_2EAC2C[1]);
        v11 = pthread_create(
                dword_2EAC2C,
                (const pthread_attr_t *)&dword_2EAC2C[1],
                (void *(*)(void *))nonce_submit_thread,
                &dword_2EAC28);
        v35 = pthread_attr_destroy((pthread_attr_t *)&dword_2EAC2C[1]);
        if ( v11 )
        {
          V_LOCK(v35);
          v52 = logfmt_raw((int)s, 0x1000u);
          v11 = 1;
          V_UNLOCK(v52);
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
          v36 = miner_monitor_init(v35);
          V_LOCK(v36);
          v37 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v37);
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
          add_chip_status_observer(godminer_chip_status_monitor);
          v38 = add_fanspeed_observer(godminer_fan_monitor);
          miner_monitor_start(v38);
          v39 = sleep(5u);
          set_miner_start_time(v39);
          v40 = set_elapsed_time_validity(1);
          start_watchpool_thread(v40);
          sleep(5u);
          (*(void (__fastcall **)(int))(v23 + 12))(v23);
          (*(void (__fastcall **)(int))(v23 + 32))(v23);
          v41 = pthread_join(dword_2EABFC[0], 0);
          V_LOCK(v41);
          v42 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v42);
          v43 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/god-miner.c",
                  155,
                  "main",
                  4u,
                  1787,
                  80,
                  s);
          print_summary(v43);
          v44 = dhash_content_exit(v55);
          (*(void (__fastcall **)(int))(v23 + 20))(v44);
          machine_runtime_exit(0);
        }
      }
    }
  }
  return v11;
}
