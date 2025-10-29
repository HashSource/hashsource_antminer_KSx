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
  int v24; // r0
  int v25; // r0
  int version_file; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r8
  int hardware_version; // r7
  int v31; // r0
  int all_created_runtime; // r7
  int v33; // r12
  int v34; // r0
  int started; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  __sighandler_t v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r11
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v62; // [sp+10h] [bp-106Ch]
  char v63[32]; // [sp+18h] [bp-1064h] BYREF
  double command[8]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf((char *)command, 0x40u, "pidof %s", "godminer");
  v4 = popen((const char *)command, "r");
  if ( !v4 )
    goto LABEL_14;
  while ( fgets(s, 256, v4) )
    ;
  v5 = 0;
  pclose(v4);
  v6 = 0;
  v7 = s;
  for ( i = 1; strlen(s) >= i; ++i )
  {
    memset(v63, 0, sizeof(v63));
    v9 = _ctype_b_loc();
    v10 = (unsigned __int8)*v7++;
    if ( ((*v9)[v10] & 0x2000) != 0 )
    {
      strncpy(v63, &s[v5], i - v5 - 1);
      v5 = i;
      if ( strtol(v63, 0, 10) > 0 )
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
LABEL_14:
    v13 = log_init();
    if ( v13 )
      v13 = puts("log init error!");
    V_LOCK(v13);
    v14 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4,
            1953,
            40,
            s);
    V_LOCK(v15);
    v16 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "main",
      4,
      1958,
      40,
      s);
    while ( 1 )
    {
      v17 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", "(3'", 0);
      if ( v17 < 0 )
        break;
      parse_arg(v17, (char *)optarg);
    }
    if ( argc > optind )
    {
      V_LOCK(v17);
      v58 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v58);
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
    V_LOCK(v17);
    v18 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v18);
    v19 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "main",
            4,
            1962,
            60,
            s);
    v20 = custom_param_check(v19);
    if ( total_pools )
    {
      v21 = check_test_pool(v20);
      V_LOCK(v21);
      v22 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v22);
      v23 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "main",
              4,
              1986,
              40,
              s);
      v24 = cal_log_init(v23);
      v25 = droa_macro_check(v24);
      if ( opt_version_path )
        version_file = read_version_file(v25);
      else
        version_file = make_fake_version(opt_algo);
      if ( opt_api_remote )
      {
        pools_active = 1;
        start_api_thread(version_file);
      }
      v27 = dhash_content_init(opt_algo);
      v62 = v27;
      if ( v27 )
      {
        v28 = set_frontend_runtime_type(v27, opt_algo);
        check_pool_worker(v28);
        v11 = hardware_init(opt_algo);
        if ( !v11 )
        {
          v29 = machine_runtime_init(opt_machine_type, opt_algo);
          if ( v29 )
          {
            hardware_version = get_hardware_version();
            V_LOCK(hardware_version);
            v31 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v31);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "init_miner_version",
              18,
              634,
              40,
              s);
            sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
            check_sn(*(_DWORD *)(v29 + 120));
            (*(void (__fastcall **)(int))(v29 + 52))(v29);
            *(_DWORD *)s = 0;
            all_created_runtime = get_all_created_runtime(s);
            if ( is_eeprom_loaded() )
            {
              while ( v11 < *(int *)s )
              {
                v33 = *(_DWORD *)(all_created_runtime + 4 * v11++);
                (*(void (__fastcall **)(int, int, int))(v33 + 160))(v33, 1, opt_custom_freq);
              }
            }
            v34 = http_test_case_init();
            started = start_http_thread(v34);
            if ( check_pool_connect(started) == 35 )
              return 1;
            v36 = (*(int (__fastcall **)(int))(v29 + 48))(v29);
            if ( v36 )
            {
              V_LOCK(v36);
              v37 = logfmt_raw((int)s, 0x1000u);
              V_UNLOCK(v37);
              v38 = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                      160,
                      "main",
                      4,
                      2061,
                      80,
                      s);
              power_off(v38);
              fan_pwm_set(40);
              while ( 1 )
                sleep(0x3Cu);
            }
            signal(2, (__sighandler_t)sub_8808C);
            signal(3, (__sighandler_t)sub_8808C);
            signal(15, (__sighandler_t)sub_8808C);
            signal(11, (__sighandler_t)sub_8808C);
            signal(10, (__sighandler_t)sub_8808C);
            v42 = signal(13, (__sighandler_t)1);
            V_LOCK(v42);
            v43 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v43);
            v44 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                    160,
                    "main",
                    4u,
                    2098,
                    40,
                    s);
            if ( create_pool_connect(v44) == 35 )
            {
              return 1;
            }
            else
            {
              thr_info = 0;
              pthread_attr_init((pthread_attr_t *)algn_30E098);
              v45 = pthread_create(
                      (pthread_t *)&dword_30E094,
                      (const pthread_attr_t *)algn_30E098,
                      (void *(*)(void *))work_generator_thread,
                      &thr_info);
              v46 = pthread_attr_destroy((pthread_attr_t *)algn_30E098);
              if ( v45 )
              {
                V_LOCK(v46);
                v60 = logfmt_raw((int)s, 0x1000u);
                v11 = 1;
                V_UNLOCK(v60);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                  160,
                  "main",
                  4u,
                  2109,
                  100,
                  s);
              }
              else
              {
                dword_30E0C0 = 1;
                pthread_attr_init((pthread_attr_t *)&dword_30E0C4[1]);
                v11 = pthread_create(
                        dword_30E0C4,
                        (const pthread_attr_t *)&dword_30E0C4[1],
                        (void *(*)(void *))nonce_submit_thread,
                        &dword_30E0C0);
                v47 = pthread_attr_destroy((pthread_attr_t *)&dword_30E0C4[1]);
                if ( v11 )
                {
                  V_LOCK(v47);
                  v59 = logfmt_raw((int)s, 0x1000u);
                  v11 = 1;
                  V_UNLOCK(v59);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                    160,
                    "main",
                    4u,
                    2117,
                    100,
                    s);
                }
                else
                {
                  v48 = miner_monitor_init(v47);
                  if ( !is_test_pool )
                  {
                    V_LOCK(v48);
                    v49 = logfmt_raw((int)s, 0x1000u);
                    V_UNLOCK(v49);
                    v50 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                            160,
                            "main",
                            4u,
                            2127,
                            40,
                            s);
                    record_nvdata_droalog(v50);
                  }
                  add_chip_status_observer(godminer_chip_status_monitor);
                  v51 = add_fanspeed_observer(godminer_fan_monitor);
                  miner_monitor_start(v51);
                  v52 = sleep(5u);
                  set_miner_start_time(v52);
                  v53 = set_elapsed_time_validity(1);
                  start_watchpool_thread(v53);
                  sleep(5u);
                  (*(void (__fastcall **)(int))(v29 + 12))(v29);
                  (*(void (__fastcall **)(int))(v29 + 32))(v29);
                  v54 = pthread_join(dword_30E094, 0);
                  V_LOCK(v54);
                  v55 = logfmt_raw((int)s, 0x1000u);
                  V_UNLOCK(v55);
                  v56 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                          160,
                          "main",
                          4,
                          2184,
                          80,
                          s);
                  print_summary(v56);
                  v57 = dhash_content_exit(v62);
                  (*(void (__fastcall **)(int))(v29 + 20))(v57);
                  machine_runtime_exit(0);
                }
              }
            }
          }
          else
          {
            printf("invalid pointer(%s)!\n", "machine_runtime");
            return 3;
          }
        }
      }
      else
      {
        printf("invalid pointer(%s)!\n", "dhash_content");
        return 3;
      }
    }
    else
    {
      V_LOCK(v20);
      v39 = logfmt_raw((int)s, 0x1000u);
      v11 = 1;
      V_UNLOCK(v39);
      v40 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "main",
              4,
              1979,
              80,
              s);
      V_LOCK(v40);
      v41 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v41);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "main",
        4,
        1980,
        100,
        s);
    }
  }
  return v11;
}
