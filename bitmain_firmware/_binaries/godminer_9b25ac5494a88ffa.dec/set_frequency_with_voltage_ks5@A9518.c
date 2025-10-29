unsigned int __fastcall set_frequency_with_voltage_ks5(int a1)
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
  unsigned int result; // r0
  _DWORD *v22; // r5
  int v23; // r4
  int v24; // t1
  int v25; // r3
  int m; // r7
  _BOOL4 v27; // r3
  int v28; // r4
  int v29; // r0
  int v30; // r0
  _DWORD *v31; // r7
  int j; // r5
  int v33; // t1
  int v34; // r3
  float v35; // s17
  int v36; // r2
  float *v37; // r11
  unsigned int k; // r4
  float v39; // s15
  float v40; // s16
  int eeprom_sweep_freq; // r11
  int v42; // r0
  int v43; // r0
  char v44; // r4
  int v45; // [sp+18h] [bp-121Ch]
  _DWORD *v46; // [sp+18h] [bp-121Ch]
  int v47; // [sp+1Ch] [bp-1218h]
  int v48; // [sp+20h] [bp-1214h] BYREF
  __int64 v49; // [sp+28h] [bp-120Ch] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  _BYTE v51[4100]; // [sp+230h] [bp-1004h] BYREF

  v48 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v48);
  v3 = *(float *)(a1 + 108);
  v4 = *all_created_runtime;
  v5 = all_created_runtime;
  v49 = 0xFFFFFFFFC0LL;
  v6 = *(float *)(v4 + 956);
  v7 = *(float *)(v4 + 952);
  if ( v6 > v3 )
    v6 = v3;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 96) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v47 = (current_voltage - working_voltage) / 10;
  v10 = v6 * *(float *)(a1 + 116);
  V_LOCK(1717986919 * (current_voltage - working_voltage));
  v11 = logfmt_raw((int)v51, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "set_frequency_with_voltage_ks5",
    30,
    342,
    60,
    v51);
  v12 = (int)(float)((float)(v6 - v7) / 6.25);
  if ( v48 > 0 )
  {
    v13 = v5 - 1;
    for ( i = 0; i < v48; ++i )
    {
      v15 = v13[1];
      ++v13;
      (*(void (**)(void))(v15 + 56))();
    }
  }
  v16 = *(float *)(*v5 + 952);
  if ( v12 <= 0 )
  {
LABEL_23:
    if ( v16 == v6 || v48 <= 0 )
    {
LABEL_30:
      result = check_temperature_base(a1, &v49, (char *)&v49 + 4);
      if ( !result )
      {
        v25 = v49;
        if ( (int)v49 > 79 )
        {
LABEL_46:
          V_LOCK(result);
          v30 = logfmt_raw((int)v51, 0x1000u);
          V_UNLOCK(v30);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "set_frequency_with_voltage_ks5",
            30,
            519,
            60,
            v51);
          if ( v48 > 0 )
          {
            v31 = v5 - 1;
            for ( j = 0; j < v48; ++j )
            {
              v33 = v31[1];
              ++v31;
              if ( api_get_eeprom_fmt_version(*(_DWORD *)(v33 + 240)) == 4
                && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v31 + 240), dest) )
              {
                v34 = *v31;
                v35 = 0.0;
                v36 = *(_DWORD *)(*v31 + 328);
                if ( v36 )
                {
                  v37 = (float *)dest;
                  for ( k = 0; k < v36; ++k )
                  {
                    v39 = *v37++;
                    v35 = v35 + v39;
                    printf("%-6.1f ", v39);
                    if ( (k & 0xF) != 0xF )
                    {
                      v34 = *v31;
                      v36 = *(_DWORD *)(*v31 + 328);
                      if ( v36 - 1 != k )
                        continue;
                    }
                    putchar(10);
                    v34 = *v31;
                    v36 = *(_DWORD *)(*v31 + 328);
                  }
                }
                v40 = v35 / (float)v36;
                *(_DWORD *)(v34 + 456) = (int)v40;
                *(float *)(v34 + 956) = (float)(int)v40;
                eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
                V_LOCK(eeprom_sweep_freq);
                api_get_eeprom_PT2_freq(j);
                v42 = logfmt_raw((int)v51, 0x1000u);
                V_UNLOCK(v42);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                  200,
                  "set_frequency_with_voltage_ks5",
                  30,
                  547,
                  40,
                  v51);
                (*(void (**)(void))(*v31 + 212))();
              }
            }
          }
          v44 = 1;
          v51[0] = 1;
          result = check_temperature_base(a1, &v49, (char *)&v49 + 4);
          if ( !result )
          {
            while ( (int)v49 <= 69 && SHIDWORD(v49) <= 69 )
            {
              if ( ((unsigned __int8)v44 & v51[0]) == 0 )
                break;
              v44 = update_and_automatic_set_freq(v51);
              usleep((__useconds_t)"tal_ro");
              result = check_temperature_base(a1, &v49, (char *)&v49 + 4);
              if ( result )
                return result;
            }
            return 0;
          }
        }
        else
        {
          if ( SHIDWORD(v49) <= 79 )
          {
            V_LOCK(0);
            v43 = logfmt_raw((int)v51, 0x1000u);
            V_UNLOCK(v43);
            result = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                       200,
                       "set_frequency_with_voltage_ks5",
                       30,
                       506,
                       60,
                       v51);
            v25 = v49;
          }
          v46 = v5;
          for ( m = 180; ; m -= 10 )
          {
            if ( v25 > 79 )
              goto LABEL_45;
            v27 = SHIDWORD(v49) <= 79;
            if ( !m )
              v27 = 0;
            if ( !v27 )
            {
LABEL_45:
              v5 = v46;
              goto LABEL_46;
            }
            fan_pwm_set(8);
            result = sleep(0xAu);
            if ( v48 > 0 )
              break;
LABEL_44:
            v25 = v49;
          }
          v28 = 0;
          while ( 1 )
          {
            ++v28;
            result = check_temperature_base(a1, &v49, (char *)&v49 + 4);
            if ( result )
              break;
            V_LOCK(0);
            v29 = logfmt_raw((int)v51, 0x1000u);
            V_UNLOCK(v29);
            result = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                       200,
                       "set_frequency_with_voltage_ks5",
                       30,
                       515,
                       40,
                       v51);
            if ( v48 <= v28 )
              goto LABEL_44;
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
        if ( v48 <= v23 )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v45 = 0;
    while ( 1 )
    {
      v16 = v16 + 6.25;
      if ( v48 > 0 )
        break;
LABEL_17:
      if ( working_voltage + 20 < current_voltage && v10 < v16 && v12 - v47 <= v45 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)"tal_ro");
      }
      if ( v12 == ++v45 )
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
        if ( v48 <= v19 )
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
