int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  int *v1; // r9
  _DWORD *all_created_runtime; // r0
  float v4; // s15
  int v5; // r3
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r10
  int working_voltage; // r0
  int v11; // r8
  int v12; // r0
  float v13; // s16
  int v14; // r3
  int v15; // r0
  float v16; // s19
  int v17; // s18
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r6
  int i; // r5
  int v22; // t1
  float v23; // s16
  int v24; // r0
  _DWORD *v25; // r6
  int v26; // r5
  int v27; // t1
  int result; // r0
  int v29; // r0
  float v30; // s16
  int v31; // s21
  int v32; // r11
  int v33; // r0
  _DWORD *v34; // r6
  int v35; // r5
  int v36; // t1
  _DWORD *v37; // r6
  int v38; // r5
  int v39; // t1
  int k; // r6
  _BOOL4 v41; // r3
  int m; // r11
  int v43; // r0
  _DWORD *v44; // r7
  int j; // r4
  int v46; // t1
  int v47; // r2
  float v48; // s16
  int v49; // r3
  unsigned int v50; // r5
  float *v51; // r6
  float v52; // s15
  float v53; // s17
  int eeprom_sweep_freq; // r6
  int v55; // r0
  int v56; // [sp+18h] [bp-121Ch]
  int v57; // [sp+1Ch] [bp-1218h]
  int v58; // [sp+20h] [bp-1214h] BYREF
  float v59; // [sp+24h] [bp-1210h] BYREF
  int v60; // [sp+28h] [bp-120Ch] BYREF
  int v61; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  _BYTE v63[4100]; // [sp+230h] [bp-1004h] BYREF

  v58 = 0;
  all_created_runtime = get_all_created_runtime(&v58);
  v4 = *(float *)(a1 + 104);
  v5 = *all_created_runtime;
  v6 = all_created_runtime;
  v60 = -64;
  v61 = 255;
  v7 = *(float *)(v5 + 976);
  v8 = *(float *)(v5 + 972);
  if ( v7 > v4 )
    v7 = v4;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v11 = working_voltage;
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v15 = 1717986919 * (current_voltage - working_voltage);
    v57 = (current_voltage - v11) / 10;
    v16 = v7 * *(float *)(a1 + 112);
    v17 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    v12 = (*(int (__fastcall **)(int))a1)(a1);
    v13 = v7 - v8;
    v14 = *(_DWORD *)(a1 + 92);
    if ( v14 > 19 )
      v1 = &g_zc;
    v11 += v12;
    v15 = 1717986919 * (current_voltage - v11);
    v16 = v7 * *(float *)(a1 + 112);
    v57 = (current_voltage - v11) / 10;
    v17 = (int)(float)(v13 / 6.25);
    if ( v14 > 19 )
    {
LABEL_7:
      V_LOCK(v15);
      v18 = logfmt_raw((int)v63, 0x1000u);
      V_UNLOCK(v18);
      v19 = zlog(
              *v1,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
              195,
              "set_frequency_with_voltage_ks5",
              30,
              315,
              60,
              v63);
      if ( v58 > 0 )
      {
        v20 = v6 - 1;
        for ( i = 0; i < v58; ++i )
        {
          v22 = v20[1];
          ++v20;
          v19 = (*(int (**)(void))(v22 + 56))();
        }
      }
      v23 = *(float *)(*v6 + 972);
      if ( v17 <= 0 )
      {
LABEL_36:
        if ( v7 == v23 || v58 <= 0 )
        {
LABEL_52:
          V_LOCK(v19);
          v43 = logfmt_raw((int)v63, 0x1000u);
          V_UNLOCK(v43);
          zlog(
            *v1,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            195,
            "set_frequency_with_voltage_ks5",
            30,
            478,
            60,
            v63);
          if ( v58 > 0 )
          {
            v44 = v6 - 1;
            for ( j = 0; j < v58; ++j )
            {
              v46 = v44[1];
              ++v44;
              if ( api_get_eeprom_fmt_version(*(_DWORD *)(v46 + 240)) == 4
                && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v44 + 240), dest, &v59) )
              {
                v47 = *v44;
                v48 = 0.0;
                v49 = *(_DWORD *)(*v44 + 336);
                if ( v49 )
                {
                  v50 = 0;
                  v51 = (float *)dest;
                  do
                  {
                    v52 = *v51++;
                    v48 = v48 + v52;
                    printf("%-6.1f ", v52);
                    if ( (v50 & 0xF) == 0xF || (v47 = *v44, v49 = *(_DWORD *)(*v44 + 336), v49 - 1 == v50) )
                    {
                      putchar(10);
                      v47 = *v44;
                      v49 = *(_DWORD *)(*v44 + 336);
                    }
                    ++v50;
                  }
                  while ( v49 > v50 );
                }
                v53 = v48 / (float)v49;
                *(_DWORD *)(v47 + 464) = (int)v53;
                *(float *)(v47 + 976) = (float)(int)v53;
                eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
                V_LOCK(eeprom_sweep_freq);
                api_get_eeprom_PT2_freq(j);
                v55 = logfmt_raw((int)v63, 0x1000u);
                V_UNLOCK(v55);
                zlog(
                  *v1,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                  195,
                  "set_frequency_with_voltage_ks5",
                  30,
                  500,
                  40,
                  v63);
                (*(void (**)(void))(*v44 + 200))();
              }
            }
          }
          return 0;
        }
        else
        {
          v37 = v6 - 1;
          v38 = 0;
          while ( 1 )
          {
            v39 = v37[1];
            ++v37;
            ++v38;
            result = (*(int (**)(void))(v39 + 188))();
            if ( result )
              break;
            v19 = usleep(*(_DWORD *)(a1 + 100));
            if ( v58 <= v38 )
              goto LABEL_52;
          }
        }
        return result;
      }
      v56 = 0;
      while ( 1 )
      {
        v23 = v23 + 6.25;
        if ( v58 > 0 )
          break;
LABEL_30:
        if ( v11 + 20 < current_voltage && v23 > v16 && v17 - v57 <= v56 )
        {
          current_voltage -= 10;
          result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
          if ( result )
            return result;
          v19 = usleep((__useconds_t)"ersion12VersionIndex5index17hb28023ac069c5199E");
        }
        if ( ++v56 == v17 )
          goto LABEL_36;
      }
      v24 = *v6;
      if ( *v6 )
      {
        v25 = v6;
        v26 = 0;
        do
        {
          ++v26;
          result = (*(int (__fastcall **)(int, _DWORD))(v24 + 188))(v24, 0);
          if ( result )
            return result;
          v19 = usleep(*(_DWORD *)(a1 + 100));
          if ( v58 <= v26 )
            goto LABEL_30;
          v27 = v25[1];
          ++v25;
          v24 = v27;
        }
        while ( v27 );
      }
LABEL_29:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  v1 = &g_zc;
  V_LOCK(v15);
  v29 = logfmt_raw((int)v63, 0x1000u);
  V_UNLOCK(v29);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    195,
    "set_frequency_with_voltage_ks5",
    30,
    286,
    60,
    v63);
  v30 = *(float *)(*v6 + 972);
  v31 = (int)(float)((float)(600.0 - v30) / 6.25);
  if ( v31 <= 0 )
  {
LABEL_43:
    v15 = check_temperature_base(a1, &v60, &v61);
    for ( k = 180; v60 <= 19; k -= 10 )
    {
      v41 = v61 <= 19;
      if ( !k )
        v41 = 0;
      if ( !v41 )
        break;
      v15 = sleep(0xAu);
      if ( v58 > 0 )
      {
        for ( m = 0; m < v58; ++m )
        {
          check_temperature_base(a1, &v60, &v61);
          v15 = printf("min temp %d max temp %d\n", v60, v61);
        }
      }
    }
    goto LABEL_7;
  }
  v32 = 0;
  while ( 1 )
  {
    v30 = v30 + 6.25;
    if ( v58 > 0 )
      break;
LABEL_42:
    if ( v31 == ++v32 )
      goto LABEL_43;
  }
  v33 = *v6;
  if ( !*v6 )
    goto LABEL_29;
  v34 = v6;
  v35 = 0;
  while ( 1 )
  {
    ++v35;
    result = (*(int (__fastcall **)(int, _DWORD))(v33 + 188))(v33, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v58 <= v35 )
      goto LABEL_42;
    v36 = v34[1];
    ++v34;
    v33 = v36;
    if ( !v36 )
      goto LABEL_29;
  }
}
