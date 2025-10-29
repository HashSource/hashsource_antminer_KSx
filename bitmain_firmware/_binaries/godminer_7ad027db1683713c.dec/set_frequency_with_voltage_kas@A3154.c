int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  pthread_mutex_t **all_created_runtime; // r0
  float v4; // s15
  pthread_mutex_t *v5; // r3
  pthread_mutex_t **v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r0
  float v12; // s16
  int v13; // r3
  float v14; // s19
  int v15; // s18
  pthread_mutex_t **v16; // r6
  int k; // r5
  pthread_mutex_t *v18; // t1
  float v19; // s16
  int v20; // r10
  pthread_mutex_t *v21; // r0
  pthread_mutex_t **v22; // r6
  int v23; // r5
  pthread_mutex_t *v24; // t1
  int v25; // r0
  int v26; // r10
  float v28; // s16
  int v29; // s21
  int v30; // r11
  pthread_mutex_t *v31; // r0
  pthread_mutex_t **v32; // r6
  int v33; // r5
  pthread_mutex_t *v34; // t1
  pthread_mutex_t **v35; // r6
  int v36; // r5
  pthread_mutex_t *v37; // t1
  int i; // r6
  _BOOL4 v39; // r3
  int j; // r10
  pthread_mutex_t **v41; // r7
  int m; // r4
  pthread_mutex_t *v43; // t1
  pthread_mutex_t *v44; // r2
  float v45; // s16
  int lock; // r3
  unsigned int v47; // r5
  float *v48; // r6
  float v49; // s15
  float v50; // s17
  int eeprom_sweep_freq; // r6
  int kind; // r5
  int eeprom_PT2_freq; // r0
  int v54; // [sp+18h] [bp-121Ch]
  int v55; // [sp+1Ch] [bp-1218h]
  int v56; // [sp+20h] [bp-1214h] BYREF
  float v57; // [sp+24h] [bp-1210h] BYREF
  int v58; // [sp+28h] [bp-120Ch] BYREF
  int v59; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v61[4100]; // [sp+230h] [bp-1004h] BYREF

  v56 = 0;
  all_created_runtime = (pthread_mutex_t **)get_all_created_runtime(&v56);
  v4 = *(float *)(a1 + 104);
  v5 = *all_created_runtime;
  v6 = all_created_runtime;
  v58 = -64;
  v59 = 255;
  v7 = *(float *)&v5[39].__count;
  v8 = *(float *)&v5[39].__lock;
  if ( v7 > v4 )
    v7 = v4;
  current_voltage = get_current_voltage();
  v54 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v55 = (current_voltage - working_voltage) / 10;
    v14 = v7 * *(float *)(a1 + 112);
    v15 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    v11 = (*(int (__fastcall **)(int))a1)(a1);
    v12 = v7 - v8;
    v13 = *(_DWORD *)(a1 + 92);
    if ( v13 > 19 )
      v1 = &g_zc;
    working_voltage += v11;
    v14 = v7 * *(float *)(a1 + 112);
    v55 = (current_voltage - working_voltage) / 10;
    v15 = (int)(float)(v12 / 6.25);
    if ( v13 > 19 )
      goto LABEL_7;
  }
  v1 = &g_zc;
  V_LOCK();
  logfmt_raw(v61, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "set_frequency_with_voltage_kas",
    30,
    359,
    60,
    v61);
  v28 = *(float *)&(*v6)[39].__lock;
  v29 = (int)(float)((float)(900.0 - v28) / 6.25);
  if ( v29 > 0 )
  {
    v30 = 0;
    while ( 1 )
    {
      v28 = v28 + 6.25;
      if ( v56 > 0 )
        break;
LABEL_43:
      if ( v29 == ++v30 )
        goto LABEL_44;
    }
    v31 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v32 = v6;
    v33 = 0;
    while ( 1 )
    {
      ++v33;
      v26 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v31[7].__spins)(v31, 0);
      send_fake_work_kas(*v32);
      if ( v26 )
        return v26;
      usleep(*(_DWORD *)(a1 + 100));
      if ( v56 <= v33 )
        goto LABEL_43;
      v34 = v32[1];
      ++v32;
      v31 = v34;
      if ( !v34 )
        goto LABEL_30;
    }
  }
LABEL_44:
  check_temperature_base(a1, &v58, &v59);
  for ( i = 180; v58 <= 19; i -= 10 )
  {
    v39 = v59 <= 19;
    if ( !i )
      v39 = 0;
    if ( !v39 )
      break;
    sleep(0xAu);
    if ( v56 > 0 )
    {
      for ( j = 0; j < v56; ++j )
      {
        check_temperature_base(a1, &v58, &v59);
        printf("min temp %d max temp %d\n", v58, v59);
      }
    }
  }
LABEL_7:
  V_LOCK();
  logfmt_raw(v61, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "set_frequency_with_voltage_kas",
    30,
    389,
    60,
    v61);
  if ( v56 > 0 )
  {
    v16 = v6 - 1;
    for ( k = 0; k < v56; ++k )
    {
      v18 = v16[1];
      ++v16;
      ((void (*)(void))v18[2].__owner)();
    }
  }
  v19 = *(float *)&(*v6)[39].__lock;
  if ( v15 > 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      v19 = v19 + 6.25;
      if ( v56 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v54 && v19 > v14 && v15 - v55 <= v20 )
      {
        v54 -= 10;
        v25 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v54);
        if ( v25 )
          return v25;
        usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
      }
      if ( ++v20 == v15 )
        goto LABEL_37;
    }
    v21 = *v6;
    if ( *v6 )
    {
      v22 = v6;
      v23 = 0;
      do
      {
        ++v23;
        v25 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v21[7].__spins)(v21, 0);
        if ( v25 )
          return v25;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v56 <= v23 )
          goto LABEL_31;
        v24 = v22[1];
        ++v22;
        v21 = v24;
      }
      while ( v24 );
    }
LABEL_30:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
LABEL_37:
  if ( v19 != v7 && v56 > 0 )
  {
    v35 = v6 - 1;
    v36 = 0;
    do
    {
      v37 = v35[1];
      ++v35;
      ++v36;
      v25 = ((int (*)(void))v37[7].__spins)();
      if ( v25 )
        return v25;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v56 > v36 );
  }
  V_LOCK();
  logfmt_raw(v61, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, v54);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "set_frequency_with_voltage_kas",
    30,
    549,
    60,
    v61);
  if ( v56 > 0 )
  {
    v41 = v6 - 1;
    for ( m = 0; m < v56; ++m )
    {
      v43 = v41[1];
      ++v41;
      if ( api_get_eeprom_fmt_version(v43[9].__kind) == 4 && !api_get_eeprom_asic_freqs((*v41)[9].__kind, dest, &v57) )
      {
        v44 = *v41;
        v45 = 0.0;
        lock = (*v41)[13].__lock;
        if ( lock )
        {
          v47 = 0;
          v48 = (float *)dest;
          do
          {
            v49 = *v48++;
            v45 = v45 + v49;
            printf("%-6.1f ", v49);
            if ( (v47 & 0xF) == 0xF || (v44 = *v41, lock = (*v41)[13].__lock, lock - 1 == v47) )
            {
              putchar(10);
              v44 = *v41;
              lock = (*v41)[13].__lock;
            }
            ++v47;
          }
          while ( lock > v47 );
        }
        v50 = v45 / (float)lock;
        v44[18].__owner = (int)v50;
        *(float *)&v44[39].__count = (float)(int)v50;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(m);
        V_LOCK();
        kind = (*v41)[9].__kind;
        eeprom_PT2_freq = api_get_eeprom_PT2_freq(m);
        logfmt_raw(
          v61,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
          kind,
          eeprom_PT2_freq,
          v50,
          eeprom_sweep_freq);
        V_UNLOCK();
        zlog(
          *v1,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          195,
          "set_frequency_with_voltage_kas",
          30,
          571,
          40,
          v61);
        ((void (*)(void))(*v41)[8].__owner)();
      }
    }
  }
  return 0;
}
