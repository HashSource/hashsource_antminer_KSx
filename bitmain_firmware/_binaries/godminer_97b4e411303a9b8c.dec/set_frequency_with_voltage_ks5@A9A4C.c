int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  _DWORD *all_created_runtime; // r0
  float v3; // s15
  int v4; // r3
  _DWORD *v5; // r7
  float v6; // s17
  float v7; // s16
  int current_voltage; // r10
  int working_voltage; // r8
  float v10; // s19
  int v11; // r0
  int v12; // s18
  _DWORD *v13; // r5
  int i; // r4
  int v15; // t1
  float v16; // s16
  int v17; // r0
  _DWORD *v18; // r5
  int v19; // r4
  int v20; // t1
  int result; // r0
  _DWORD *v22; // r5
  int v23; // r4
  int v24; // t1
  int v25; // r0
  _DWORD *v26; // r7
  int j; // r4
  int v28; // t1
  int v29; // r3
  float v30; // s17
  int v31; // r2
  unsigned int v32; // r5
  float *v33; // r11
  float v34; // s15
  char v35; // r4
  float v36; // s16
  int eeprom_sweep_freq; // r11
  int v38; // r0
  int v39; // r0
  unsigned __int8 *p_st_info; // r4
  int v41; // r0
  _BOOL4 v42; // r3
  int v43; // [sp+18h] [bp-122Ch]
  int v44; // [sp+1Ch] [bp-1228h]
  int v45; // [sp+20h] [bp-1224h] BYREF
  __int64 v46; // [sp+28h] [bp-121Ch] BYREF
  struct timespec v47; // [sp+30h] [bp-1214h] BYREF
  struct timespec tp; // [sp+38h] [bp-120Ch] BYREF
  _BYTE dest[512]; // [sp+40h] [bp-1204h] BYREF
  _BYTE v50[4100]; // [sp+240h] [bp-1004h] BYREF

  v45 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v45);
  v3 = *(float *)(a1 + 108);
  v4 = *all_created_runtime;
  v5 = all_created_runtime;
  v46 = 0xFFFFFFFFC0LL;
  v6 = *(float *)(v4 + 964);
  v7 = *(float *)(v4 + 960);
  if ( v6 > v3 )
    v6 = v3;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 96) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v44 = (current_voltage - working_voltage) / 10;
  v10 = v6 * *(float *)(a1 + 116);
  V_LOCK(1717986919 * (current_voltage - working_voltage));
  v11 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "set_frequency_with_voltage_ks5",
    30,
    344,
    60,
    v50);
  v12 = (int)(float)((float)(v6 - v7) / 6.25);
  if ( v45 > 0 )
  {
    v13 = v5 - 1;
    for ( i = 0; i < v45; ++i )
    {
      v15 = v13[1];
      ++v13;
      (*(void (**)(void))(v15 + 56))();
    }
  }
  v16 = *(float *)(*v5 + 960);
  if ( v12 <= 0 )
  {
LABEL_23:
    if ( v6 == v16 || v45 <= 0 )
    {
LABEL_30:
      result = check_temperature_base(a1, &v46, (char *)&v46 + 4);
      if ( !result )
      {
        if ( (int)v46 > 79
          || SHIDWORD(v46) > 79
          || (V_LOCK(0),
              v39 = logfmt_raw((int)v50, 0x1000u),
              V_UNLOCK(v39),
              result = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                         200,
                         "set_frequency_with_voltage_ks5",
                         30,
                         508,
                         60,
                         v50),
              (int)v46 > 79)
          || SHIDWORD(v46) > 79 )
        {
LABEL_33:
          V_LOCK(result);
          v25 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v25);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "set_frequency_with_voltage_ks5",
            30,
            519,
            60,
            v50);
          if ( v45 > 0 )
          {
            v26 = v5 - 1;
            for ( j = 0; j < v45; ++j )
            {
              v28 = v26[1];
              ++v26;
              if ( api_get_eeprom_fmt_version(*(_DWORD *)(v28 + 244)) == 4
                && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v26 + 244), dest) )
              {
                v29 = *v26;
                v30 = 0.0;
                v31 = *(_DWORD *)(*v26 + 332);
                if ( v31 )
                {
                  v32 = 0;
                  v33 = (float *)dest;
                  do
                  {
                    v34 = *v33++;
                    v30 = v30 + v34;
                    printf("%-6.1f ", v34);
                    if ( (v32 & 0xF) == 0xF || (v29 = *v26, v31 = *(_DWORD *)(*v26 + 332), v31 - 1 == v32) )
                    {
                      putchar(10);
                      v29 = *v26;
                      v31 = *(_DWORD *)(*v26 + 332);
                    }
                    ++v32;
                  }
                  while ( v31 > v32 );
                }
                v36 = v30 / (float)v31;
                *(_DWORD *)(v29 + 464) = (int)v36;
                *(float *)(v29 + 964) = (float)(int)v36;
                eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
                V_LOCK(eeprom_sweep_freq);
                api_get_eeprom_PT2_freq(j);
                v38 = logfmt_raw((int)v50, 0x1000u);
                V_UNLOCK(v38);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                  200,
                  "set_frequency_with_voltage_ks5",
                  30,
                  547,
                  40,
                  v50);
                (*(void (**)(void))(*v26 + 216))();
              }
            }
          }
          v35 = 1;
          v50[0] = 1;
          result = check_temperature_base(a1, &v46, (char *)&v46 + 4);
          if ( !result )
          {
            while ( (int)v46 <= 69 && SHIDWORD(v46) <= 69 )
            {
              if ( ((unsigned __int8)v35 & v50[0]) == 0 )
                break;
              v35 = update_and_automatic_set_freq(v50);
              usleep((__useconds_t)"ore..iter..traits..iterator..Iterator$GT$4last17hc978315af0f81255E");
              result = check_temperature_base(a1, &v46, (char *)&v46 + 4);
              if ( result )
                return result;
            }
            return 0;
          }
        }
        else
        {
          p_st_info = &stru_2BF14.st_info;
          while ( 1 )
          {
            clock_gettime(1, &v47);
            fan_pwm_set(8);
            sleep(1u);
            result = check_temperature_base(a1, &v46, (char *)&v46 + 4);
            if ( result )
              break;
            V_LOCK(0);
            v41 = logfmt_raw((int)v50, 0x1000u);
            V_UNLOCK(v41);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
              200,
              "set_frequency_with_voltage_ks5",
              30,
              516,
              40,
              v50);
            clock_gettime(1, &tp);
            result = 1125899907 * (tp.tv_nsec - v47.tv_nsec);
            p_st_info += -((tp.tv_nsec - v47.tv_nsec) / 1000000) + -1000 * (tp.tv_sec - v47.tv_sec);
            if ( (int)v46 <= 79 )
            {
              v42 = SHIDWORD(v46) <= 79;
              if ( (int)p_st_info <= 0 )
                v42 = 0;
              if ( v42 )
                continue;
            }
            goto LABEL_33;
          }
        }
      }
    }
    else
    {
      v22 = v5 - 1;
      v23 = 0;
      while ( 1 )
      {
        v24 = v22[1];
        ++v22;
        ++v23;
        result = (*(int (**)(void))(v24 + 188))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 104));
        if ( v45 <= v23 )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v43 = 0;
    while ( 1 )
    {
      v16 = v16 + 6.25;
      if ( v45 > 0 )
        break;
LABEL_17:
      if ( working_voltage + 20 < current_voltage && v10 < v16 && v12 - v44 <= v43 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)"ore..iter..traits..iterator..Iterator$GT$4last17hc978315af0f81255E");
      }
      if ( v12 == ++v43 )
        goto LABEL_23;
    }
    v17 = *v5;
    if ( *v5 )
    {
      v18 = v5;
      v19 = 0;
      while ( 1 )
      {
        ++v19;
        result = (*(int (__fastcall **)(int, _DWORD))(v17 + 188))(v17, 0);
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 104));
        if ( v45 <= v19 )
          goto LABEL_17;
        v20 = v18[1];
        ++v18;
        v17 = v20;
        if ( !v20 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return result;
}
