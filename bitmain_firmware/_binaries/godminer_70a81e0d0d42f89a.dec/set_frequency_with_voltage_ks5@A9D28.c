int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  int v2; // r3
  int all_created_runtime; // r0
  int v4; // r7
  float v5; // s17
  float v6; // s19
  float v7; // s16
  int working_voltage; // r8
  float v9; // s20
  int v10; // r0
  int v11; // r0
  int v12; // s18
  int v13; // r5
  int i; // r4
  int v15; // t1
  int v16; // r4
  int fan_percent_min; // r0
  int v18; // r4
  float v19; // s16
  int v20; // r0
  int v21; // r5
  int v22; // r4
  int v23; // t1
  int v24; // r0
  int v25; // r2
  char *v27; // r10
  int v28; // r5
  int v29; // r4
  int v30; // t1
  int v31; // r4
  int v32; // r1
  int v33; // r4
  int v34; // r5
  int v35; // r0
  int v36; // r5
  int v37; // r4
  int v38; // t1
  int v39; // r0
  _DWORD *v40; // r7
  int k; // r5
  int v42; // t1
  int v43; // r3
  float v44; // s17
  int v45; // r2
  float *v46; // r11
  unsigned int m; // r4
  float v48; // s15
  float v49; // s16
  int eeprom_sweep_freq; // r11
  int v51; // r0
  char v52; // r4
  int v53; // r0
  int v54; // r0
  int v55; // r0
  bool v56; // cc
  int v57; // r5
  int j; // r4
  int v59; // t1
  int v60; // [sp+18h] [bp-123Ch]
  int current_voltage; // [sp+20h] [bp-1234h]
  int v62; // [sp+24h] [bp-1230h]
  int v63; // [sp+28h] [bp-122Ch]
  int v64; // [sp+2Ch] [bp-1228h]
  int v65; // [sp+30h] [bp-1224h] BYREF
  __int64 v66; // [sp+38h] [bp-121Ch] BYREF
  struct timespec tp; // [sp+40h] [bp-1214h] BYREF
  struct timespec v68; // [sp+48h] [bp-120Ch] BYREF
  _BYTE dest[512]; // [sp+50h] [bp-1204h] BYREF
  _BYTE v70[4100]; // [sp+250h] [bp-1004h] BYREF

  v65 = 0;
  if ( eeprom_get_strategy() == 107 )
    v2 = 70;
  else
    v2 = 80;
  v63 = v2;
  all_created_runtime = get_all_created_runtime(&v65);
  v4 = all_created_runtime;
  if ( *(int *)(a1 + 96) >= -10 )
  {
    v5 = *(float *)(a1 + 108);
    v6 = *(float *)(*(_DWORD *)all_created_runtime + 964);
    v7 = *(float *)(*(_DWORD *)all_created_runtime + 960);
    if ( v6 > v5 )
    {
      v27 = (char *)&stru_2BF20;
      v6 = *(float *)(a1 + 108);
    }
    else
    {
      v5 = *(float *)(*(_DWORD *)all_created_runtime + 964);
      v27 = (char *)&stru_2BF20;
    }
    v64 = 0;
  }
  else
  {
    v5 = *(float *)(a1 + 108);
    v6 = *(float *)(*(_DWORD *)all_created_runtime + 964);
    v7 = *(float *)(*(_DWORD *)all_created_runtime + 960);
    if ( v6 > v5 )
      v6 = *(float *)(a1 + 108);
    v27 = "like..linux..pthread_rwlockattr_t$u20$as$u20$core..clone..Clone$GT$5clone17h7114bd5a05f1bb2cE";
    if ( v5 >= 650.0 )
      v5 = 650.0;
    v64 = 1;
  }
  v66 = 0xFFFFFFFFC0LL;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 96) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v62 = (current_voltage - working_voltage) / 10;
  v9 = v5 * *(float *)(a1 + 116);
  V_LOCK(1717986919 * (current_voltage - working_voltage));
  v10 = logfmt_raw((int)v70, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          200,
          "set_frequency_with_voltage_ks5",
          30,
          347,
          60,
          v70);
  v12 = (int)(float)((float)(v5 - v7) / 6.25);
  if ( v65 > 0 )
  {
    v13 = v4 - 4;
    for ( i = 0; i < v65; ++i )
    {
      v15 = *(_DWORD *)(v13 + 4);
      v13 += 4;
      v11 = (*(int (**)(void))(v15 + 56))();
    }
  }
  v16 = *(_DWORD *)(a1 + 96);
  fan_percent_min = get_fan_percent_min(v11);
  v18 = 2 * v16 + 15;
  if ( v18 >= fan_percent_min )
    fan_percent_min = v18;
  fan_pwm_set(fan_percent_min);
  v19 = *(float *)(*(_DWORD *)v4 + 960);
  if ( v12 > 0 )
  {
    v60 = 0;
    while ( 1 )
    {
      v19 = v19 + 6.25;
      if ( v65 > 0 )
        break;
LABEL_32:
      if ( working_voltage + 20 < current_voltage && v9 < v19 && v12 - v62 <= v60 )
      {
        current_voltage -= 10;
        v24 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( v24 )
          return v24;
        usleep((__useconds_t)"u20$core..fmt..Debug$GT$3fmt17h0889c43153a0c703E");
      }
      if ( v12 == ++v60 )
        goto LABEL_38;
    }
    v20 = *(_DWORD *)v4;
    if ( !*(_DWORD *)v4 )
    {
LABEL_44:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
    v21 = v4;
    v22 = 0;
    while ( 1 )
    {
      ++v22;
      v24 = (*(int (__fastcall **)(int, _DWORD))(v20 + 188))(v20, 0);
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 104));
      if ( v65 <= v22 )
        goto LABEL_32;
      v23 = *(_DWORD *)(v21 + 4);
      v21 += 4;
      v20 = v23;
      if ( !v23 )
        goto LABEL_44;
    }
  }
LABEL_38:
  if ( v5 == v19 )
  {
    v5 = v19;
  }
  else if ( v65 > 0 )
  {
    v28 = v4 - 4;
    v29 = 0;
    do
    {
      v30 = *(_DWORD *)(v28 + 4);
      v28 += 4;
      ++v29;
      v24 = (*(int (**)(void))(v30 + 188))();
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 104));
    }
    while ( v65 > v29 );
  }
  v25 = check_temperature_base(a1, &v66, (char *)&v66 + 4);
  if ( v25 )
    return v25;
  v31 = *(_DWORD *)(a1 + 96);
  v24 = get_fan_percent_min(0);
  v32 = v66;
  v33 = 2 * v31 - 25;
  if ( v33 >= v24 )
    v24 = v33;
  if ( v24 >= 80 )
    v34 = 80;
  else
    v34 = v24;
  if ( v63 <= (int)v66
    || v63 <= SHIDWORD(v66)
    || (V_LOCK(v24),
        v53 = logfmt_raw((int)v70, 0x1000u),
        V_UNLOCK(v53),
        v24 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                200,
                "set_frequency_with_voltage_ks5",
                30,
                527,
                60,
                v70),
        v32 = v66,
        (int)v66 >= v63)
    || v63 <= SHIDWORD(v66) )
  {
LABEL_54:
    if ( v32 > 70 || SHIDWORD(v66) > 70 )
    {
      if ( v34 < 30 )
        v35 = 30;
      else
        v35 = v34;
      v24 = fan_pwm_set(v35);
    }
    if ( v64 )
    {
      while ( (float)(v5 - 6.25) > v6 )
      {
        if ( v65 > 0 )
        {
          v36 = v4 - 4;
          v37 = 0;
          do
          {
            v38 = *(_DWORD *)(v36 + 4);
            v36 += 4;
            ++v37;
            v25 = (*(int (**)(void))(v38 + 188))();
            if ( v25 )
              return v25;
            v24 = usleep((__useconds_t)&elf_hash_chain[4398]);
          }
          while ( v65 > v37 );
        }
        v5 = v5 - 6.25;
      }
      if ( v5 == v6 || v65 <= 0 )
        goto LABEL_68;
      v57 = v4 - 4;
      for ( j = 0; j < v65; ++j )
      {
        v59 = *(_DWORD *)(v57 + 4);
        v57 += 4;
        v24 = (*(int (**)(void))(v59 + 188))();
        if ( v24 )
          return v24;
      }
    }
LABEL_68:
    V_LOCK(v24);
    v39 = logfmt_raw((int)v70, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "set_frequency_with_voltage_ks5",
      30,
      568,
      60,
      v70);
    if ( v65 > 0 )
    {
      v40 = (_DWORD *)(v4 - 4);
      for ( k = 0; k < v65; ++k )
      {
        v42 = v40[1];
        ++v40;
        if ( api_get_eeprom_fmt_version(*(_DWORD *)(v42 + 244)) == 4
          && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v40 + 244), dest) )
        {
          v43 = *v40;
          v44 = 0.0;
          v45 = *(_DWORD *)(*v40 + 332);
          if ( v45 )
          {
            v46 = (float *)dest;
            for ( m = 0; m < v45; ++m )
            {
              v48 = *v46++;
              v44 = v44 + v48;
              printf("%-6.1f ", v48);
              if ( (m & 0xF) != 0xF )
              {
                v43 = *v40;
                v45 = *(_DWORD *)(*v40 + 332);
                if ( m != v45 - 1 )
                  continue;
              }
              putchar(10);
              v43 = *v40;
              v45 = *(_DWORD *)(*v40 + 332);
            }
          }
          v49 = v44 / (float)v45;
          *(_DWORD *)(v43 + 464) = (int)v49;
          *(float *)(v43 + 964) = (float)(int)v49;
          eeprom_sweep_freq = api_get_eeprom_sweep_freq(k);
          V_LOCK(eeprom_sweep_freq);
          api_get_eeprom_PT2_freq(k);
          v51 = logfmt_raw((int)v70, 0x1000u);
          V_UNLOCK(v51);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "set_frequency_with_voltage_ks5",
            30,
            596,
            40,
            v70);
          (*(void (**)(void))(*v40 + 216))();
        }
      }
    }
    v52 = 1;
    v70[0] = 1;
    v25 = check_temperature_base(a1, &v66, (char *)&v66 + 4);
    if ( !v25 )
    {
      while ( (int)v66 <= 69 && SHIDWORD(v66) <= 69 )
      {
        if ( ((unsigned __int8)v52 & v70[0]) == 0 )
          break;
        v52 = update_and_automatic_set_freq(v70);
        usleep((__useconds_t)"u20$core..fmt..Debug$GT$3fmt17h0889c43153a0c703E");
        v24 = check_temperature_base(a1, &v66, (char *)&v66 + 4);
        if ( v24 )
          return v24;
      }
      return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      clock_gettime(1, &tp);
      fan_pwm_set(v34);
      sleep(1u);
      v54 = check_temperature_base(a1, &v66, (char *)&v66 + 4);
      if ( v54 )
        return v54;
      V_LOCK(0);
      v55 = logfmt_raw((int)v70, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "set_frequency_with_voltage_ks5",
        30,
        535,
        40,
        v70);
      clock_gettime(1, &v68);
      v24 = v68.tv_sec - tp.tv_sec;
      v32 = v66;
      v27 += -((v68.tv_nsec - tp.tv_nsec) / 1000000) + -1000 * (v68.tv_sec - tp.tv_sec);
      if ( v63 > (int)v66 )
      {
        v56 = v63 <= SHIDWORD(v66);
        if ( v63 > SHIDWORD(v66) )
          v56 = (int)v27 <= 0;
        if ( !v56 )
          continue;
      }
      goto LABEL_54;
    }
  }
  return v25;
}
