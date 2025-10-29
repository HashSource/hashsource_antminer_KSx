int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r10
  float v7; // s20
  int v8; // r2
  int v9; // s19
  int v10; // r0
  char *v11; // r5
  int v12; // r4
  int v13; // t1
  int v15; // r2
  char *v16; // r5
  int v17; // r4
  int v18; // t1
  char *v19; // r8
  int i; // r4
  int v21; // t1
  unsigned int eeprom_asic_freqs; // r7
  int v23; // r3
  int v24; // r12
  float v25; // s16
  float v26; // s16
  float *v27; // r11
  float v28; // s15
  size_t v29; // r0
  _WORD *v30; // r0
  float v31; // s17
  int v32; // r3
  int eeprom_sweep_freq; // r10
  int v34; // r7
  int eeprom_PT2_freq; // r0
  int v36; // [sp+18h] [bp-223Ch]
  int current_voltage; // [sp+20h] [bp-2234h]
  int v38; // [sp+24h] [bp-2230h]
  int v39; // [sp+28h] [bp-222Ch] BYREF
  float v40; // [sp+2Ch] [bp-2228h] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v43; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  char v45[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v39 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v39);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 940);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 936);
  if ( v4 > *(float *)(a1 + 104) )
    v4 = *(float *)(a1 + 104);
  working_voltage = get_working_voltage();
  if ( !is_check_asic_voltage_enable() )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "set high voltage befor rise freq.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "set_frequency_with_voltage_base",
      31,
      510,
      40,
      v45);
  }
  if ( *(_DWORD *)(a1 + 92) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v7 = v4 * *(float *)(a1 + 112);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "set_frequency_with_voltage_base",
    31,
    520,
    60,
    v45);
  current_voltage = get_current_voltage();
  v8 = 1717986919 * (current_voltage - working_voltage);
  v38 = (current_voltage - working_voltage) / 10;
  v9 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v9 <= 0 )
  {
LABEL_22:
    if ( v4 == v5 || v39 <= 0 )
    {
LABEL_29:
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v4, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "set_frequency_with_voltage_base",
        31,
        555,
        60,
        v45);
      if ( v39 > 0 )
      {
        v19 = all_created_runtime - 4;
        for ( i = 0; i < v39; ++i )
        {
          v21 = *((_DWORD *)v19 + 1);
          v19 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v21 + 228)) == 4 )
          {
            eeprom_asic_freqs = api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v19 + 228), &dest, &v40);
            if ( !eeprom_asic_freqs )
            {
              memset(s, 0, sizeof(s));
              v23 = *(_DWORD *)v19;
              v24 = *(_DWORD *)(*(_DWORD *)v19 + 312);
              if ( v24 )
              {
                v26 = dest;
                v27 = (float *)&v43;
                sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
                v25 = v26 + 0.0;
                strcat(s, src);
                while ( 1 )
                {
                  v23 = *(_DWORD *)v19;
                  ++eeprom_asic_freqs;
                  v24 = *(_DWORD *)(*(_DWORD *)v19 + 312);
                  if ( v24 <= eeprom_asic_freqs )
                    break;
                  v28 = *v27++;
                  v25 = v25 + v28;
                  sprintf(src, "ASIC-%03d [%.2f] ", eeprom_asic_freqs, v28);
                  v29 = strlen(s);
                  v30 = (_WORD *)stpcpy(&s[v29], src);
                  if ( (eeprom_asic_freqs & 7) == 7 )
                    *v30 = 10;
                }
              }
              else
              {
                v25 = 0.0;
              }
              v31 = v25 / (float)v24;
              (*(void (__fastcall **)(int, float *))(v23 + 200))(v23, &dest);
              v32 = *(_DWORD *)v19;
              *(_DWORD *)(v32 + 440) = (int)v31;
              *(float *)(v32 + 940) = (float)(int)v31;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(i);
              V_LOCK();
              v34 = *(_DWORD *)(*(_DWORD *)v19 + 228);
              eeprom_PT2_freq = api_get_eeprom_PT2_freq(i);
              logfmt_raw(
                v45,
                0x1000u,
                0,
                "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s",
                v34,
                eeprom_PT2_freq,
                v31,
                eeprom_sweep_freq,
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                182,
                "set_frequency_with_voltage_base",
                31,
                588,
                40,
                v45);
            }
          }
        }
      }
    }
    else
    {
      v16 = all_created_runtime - 4;
      v17 = 0;
      while ( 1 )
      {
        v18 = *((_DWORD *)v16 + 1);
        v16 += 4;
        ++v17;
        v2 = (*(int (**)(void))(v18 + 188))();
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v17 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    v36 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v39 > 0 )
        break;
LABEL_16:
      v15 = current_voltage;
      if ( working_voltage + 20 < current_voltage && v7 < v5 && v9 - v38 <= v36 )
      {
        current_voltage -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v15 - 10);
        if ( v2 )
          return v2;
        usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
      }
      v8 = v9;
      if ( v9 == ++v36 )
        goto LABEL_22;
    }
    v10 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v11 = all_created_runtime;
      v12 = 0;
      while ( 1 )
      {
        ++v12;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v10 + 188))(v10, 0, v8);
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v12 )
          goto LABEL_16;
        v13 = *((_DWORD *)v11 + 1);
        v11 += 4;
        v10 = v13;
        if ( !v13 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return v2;
}
