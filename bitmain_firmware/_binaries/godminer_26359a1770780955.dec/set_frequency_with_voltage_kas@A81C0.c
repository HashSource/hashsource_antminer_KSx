int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  _DWORD *all_created_runtime; // r0
  float v4; // s15
  int v5; // r3
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r0
  float v12; // s16
  int v13; // r3
  int v14; // r0
  float v15; // s19
  int v16; // s18
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r6
  int k; // r5
  int v21; // t1
  float v22; // s16
  int v23; // r10
  int v24; // r0
  _DWORD *v25; // r6
  int v26; // r5
  int v27; // t1
  int v28; // r0
  int v29; // r10
  int v31; // r0
  float v32; // s16
  int v33; // s21
  int v34; // r11
  int v35; // r0
  _DWORD *v36; // r6
  int v37; // r5
  int v38; // t1
  _DWORD *v39; // r6
  int v40; // r5
  int v41; // t1
  int i; // r6
  _BOOL4 v43; // r3
  int j; // r10
  int v45; // r0
  _DWORD *v46; // r7
  int m; // r4
  int v48; // t1
  int v49; // r2
  float v50; // s16
  int v51; // r3
  unsigned int v52; // r5
  float *v53; // r6
  float v54; // s15
  float v55; // s17
  int eeprom_sweep_freq; // r6
  int v57; // r0
  int v58; // [sp+18h] [bp-121Ch]
  int v59; // [sp+1Ch] [bp-1218h]
  int v60; // [sp+20h] [bp-1214h] BYREF
  int v61; // [sp+28h] [bp-120Ch] BYREF
  int v62; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  _BYTE v64[4100]; // [sp+230h] [bp-1004h] BYREF

  v60 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v60);
  v4 = *(float *)(a1 + 108);
  v5 = *all_created_runtime;
  v6 = all_created_runtime;
  v61 = -64;
  v62 = 255;
  v7 = *(float *)(v5 + 964);
  v8 = *(float *)(v5 + 960);
  if ( v7 > v4 )
    v7 = v4;
  current_voltage = get_current_voltage();
  v58 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 96) == -64 )
  {
    v14 = 1717986919 * (current_voltage - working_voltage);
    v59 = (current_voltage - working_voltage) / 10;
    v15 = v7 * *(float *)(a1 + 116);
    v16 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    v11 = (*(int (__fastcall **)(int))a1)(a1);
    v12 = v7 - v8;
    v13 = *(_DWORD *)(a1 + 96);
    if ( v13 > 19 )
      v1 = &g_zc;
    working_voltage += v11;
    v14 = 1717986919 * (current_voltage - working_voltage);
    v15 = v7 * *(float *)(a1 + 116);
    v59 = (current_voltage - working_voltage) / 10;
    v16 = (int)(float)(v12 / 6.25);
    if ( v13 > 19 )
      goto LABEL_7;
  }
  v1 = &g_zc;
  V_LOCK(v14);
  v31 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v31);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    200,
    "set_frequency_with_voltage_kas",
    30,
    310,
    60,
    v64);
  v32 = *(float *)(*v6 + 960);
  v33 = (int)(float)((float)(900.0 - v32) / 6.25);
  if ( v33 > 0 )
  {
    v34 = 0;
    while ( 1 )
    {
      v32 = v32 + 6.25;
      if ( v60 > 0 )
        break;
LABEL_43:
      if ( v33 == ++v34 )
        goto LABEL_44;
    }
    v35 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v36 = v6;
    v37 = 0;
    while ( 1 )
    {
      ++v37;
      v29 = (*(int (__fastcall **)(int, _DWORD))(v35 + 188))(v35, 0);
      send_fake_work_kas(*v36);
      if ( v29 )
        return v29;
      usleep(*(_DWORD *)(a1 + 104));
      if ( v60 <= v37 )
        goto LABEL_43;
      v38 = v36[1];
      ++v36;
      v35 = v38;
      if ( !v38 )
        goto LABEL_30;
    }
  }
LABEL_44:
  v14 = check_temperature_base(a1, &v61, &v62);
  for ( i = 180; v61 <= 19; i -= 10 )
  {
    v43 = v62 <= 19;
    if ( !i )
      v43 = 0;
    if ( !v43 )
      break;
    v14 = sleep(0xAu);
    if ( v60 > 0 )
    {
      for ( j = 0; j < v60; ++j )
      {
        check_temperature_base(a1, &v61, &v62);
        v14 = printf("min temp %d max temp %d\n", v61, v62);
      }
    }
  }
LABEL_7:
  V_LOCK(v14);
  v17 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v17);
  v18 = zlog(
          *v1,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          200,
          "set_frequency_with_voltage_kas",
          30,
          340,
          60,
          v64);
  if ( v60 > 0 )
  {
    v19 = v6 - 1;
    for ( k = 0; k < v60; ++k )
    {
      v21 = v19[1];
      ++v19;
      v18 = (*(int (**)(void))(v21 + 56))();
    }
  }
  v22 = *(float *)(*v6 + 960);
  if ( v16 > 0 )
  {
    v23 = 0;
    while ( 1 )
    {
      v22 = v22 + 6.25;
      if ( v60 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v58 && v22 > v15 && v16 - v59 <= v23 )
      {
        v58 -= 10;
        v28 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v58);
        if ( v28 )
          return v28;
        v18 = usleep((__useconds_t)"t..LowerHex$u20$for$u20$u8$GT$3fmt17hbb583368dc481f64E");
      }
      if ( ++v23 == v16 )
        goto LABEL_37;
    }
    v24 = *v6;
    if ( *v6 )
    {
      v25 = v6;
      v26 = 0;
      do
      {
        ++v26;
        v28 = (*(int (__fastcall **)(int, _DWORD))(v24 + 188))(v24, 0);
        if ( v28 )
          return v28;
        v18 = usleep(*(_DWORD *)(a1 + 104));
        if ( v60 <= v26 )
          goto LABEL_31;
        v27 = v25[1];
        ++v25;
        v24 = v27;
      }
      while ( v27 );
    }
LABEL_30:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
LABEL_37:
  if ( v22 != v7 && v60 > 0 )
  {
    v39 = v6 - 1;
    v40 = 0;
    do
    {
      v41 = v39[1];
      ++v39;
      ++v40;
      v28 = (*(int (**)(void))(v41 + 188))();
      if ( v28 )
        return v28;
      v18 = usleep(*(_DWORD *)(a1 + 104));
    }
    while ( v60 > v40 );
  }
  V_LOCK(v18);
  v45 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    200,
    "set_frequency_with_voltage_kas",
    30,
    500,
    60,
    v64);
  if ( v60 > 0 )
  {
    v46 = v6 - 1;
    for ( m = 0; m < v60; ++m )
    {
      v48 = v46[1];
      ++v46;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v48 + 244)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v46 + 244), dest) )
      {
        v49 = *v46;
        v50 = 0.0;
        v51 = *(_DWORD *)(*v46 + 332);
        if ( v51 )
        {
          v52 = 0;
          v53 = (float *)dest;
          do
          {
            v54 = *v53++;
            v50 = v50 + v54;
            printf("%-6.1f ", v54);
            if ( (v52 & 0xF) == 0xF || (v49 = *v46, v51 = *(_DWORD *)(*v46 + 332), v51 - 1 == v52) )
            {
              putchar(10);
              v49 = *v46;
              v51 = *(_DWORD *)(*v46 + 332);
            }
            ++v52;
          }
          while ( v51 > v52 );
        }
        v55 = v50 / (float)v51;
        *(_DWORD *)(v49 + 464) = (int)v55;
        *(float *)(v49 + 964) = (float)(int)v55;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(m);
        V_LOCK(eeprom_sweep_freq);
        api_get_eeprom_PT2_freq(m);
        v57 = logfmt_raw((int)v64, 0x1000u);
        V_UNLOCK(v57);
        zlog(
          *v1,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          200,
          "set_frequency_with_voltage_kas",
          30,
          522,
          40,
          v64);
        (*(void (**)(void))(*v46 + 216))();
      }
    }
  }
  return 0;
}
