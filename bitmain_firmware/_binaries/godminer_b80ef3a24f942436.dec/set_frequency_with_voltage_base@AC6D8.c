int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r10
  int v7; // r0
  float v8; // s20
  int v9; // r0
  int current_voltage; // r0
  int v11; // r2
  int v12; // s19
  int v13; // r0
  char *v14; // r5
  int v15; // r4
  int v16; // t1
  int v18; // r2
  char *v19; // r5
  int v20; // r4
  int v21; // t1
  int v22; // r0
  int v23; // r0
  char *v24; // r8
  int i; // r4
  int v26; // t1
  unsigned int eeprom_asic_freqs; // r7
  int v28; // r3
  int v29; // r12
  float v30; // s16
  float v31; // s16
  float *v32; // r11
  float v33; // s15
  size_t v34; // r0
  _WORD *v35; // r0
  float v36; // s17
  int v37; // r3
  int eeprom_sweep_freq; // r10
  int v39; // r0
  int v40; // [sp+18h] [bp-223Ch]
  int v41; // [sp+20h] [bp-2234h]
  int v42; // [sp+24h] [bp-2230h]
  int v43; // [sp+28h] [bp-222Ch] BYREF
  float v44; // [sp+2Ch] [bp-2228h] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v47; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  _BYTE v49[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v43 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v43);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 976);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 972);
  if ( v4 > *(float *)(a1 + 104) )
    v4 = *(float *)(a1 + 104);
  working_voltage = get_working_voltage();
  v7 = is_check_asic_voltage_enable();
  if ( !v7 )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK(v2);
    v22 = logfmt_raw((int)v49, 0x1000u);
    V_UNLOCK(v22);
    v7 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
           182,
           "set_frequency_with_voltage_base",
           31,
           519,
           40,
           v49);
  }
  if ( *(_DWORD *)(a1 + 92) != -64 )
  {
    v7 = (*(int (__fastcall **)(int))a1)(a1);
    working_voltage += v7;
  }
  v8 = v4 * *(float *)(a1 + 112);
  V_LOCK(v7);
  v9 = logfmt_raw((int)v49, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "set_frequency_with_voltage_base",
    31,
    529,
    60,
    v49);
  current_voltage = get_current_voltage();
  v41 = current_voltage;
  v11 = 1717986919 * (current_voltage - working_voltage);
  v42 = (current_voltage - working_voltage) / 10;
  v12 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v12 <= 0 )
  {
LABEL_22:
    if ( v4 == v5 || v43 <= 0 )
    {
LABEL_29:
      V_LOCK(current_voltage);
      v23 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "set_frequency_with_voltage_base",
        31,
        564,
        60,
        v49);
      if ( v43 > 0 )
      {
        v24 = all_created_runtime - 4;
        for ( i = 0; i < v43; ++i )
        {
          v26 = *((_DWORD *)v24 + 1);
          v24 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v26 + 240)) == 4 )
          {
            eeprom_asic_freqs = api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v24 + 240), &dest, &v44);
            if ( !eeprom_asic_freqs )
            {
              memset(s, 0, sizeof(s));
              v28 = *(_DWORD *)v24;
              v29 = *(_DWORD *)(*(_DWORD *)v24 + 336);
              if ( v29 )
              {
                v31 = dest;
                v32 = (float *)&v47;
                sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
                v30 = v31 + 0.0;
                strcat(s, src);
                while ( 1 )
                {
                  v28 = *(_DWORD *)v24;
                  ++eeprom_asic_freqs;
                  v29 = *(_DWORD *)(*(_DWORD *)v24 + 336);
                  if ( v29 <= eeprom_asic_freqs )
                    break;
                  v33 = *v32++;
                  v30 = v30 + v33;
                  sprintf(src, "ASIC-%03d [%.2f] ", eeprom_asic_freqs, v33);
                  v34 = strlen(s);
                  v35 = (_WORD *)stpcpy(&s[v34]);
                  if ( (eeprom_asic_freqs & 7) == 7 )
                    *v35 = 10;
                }
              }
              else
              {
                v30 = 0.0;
              }
              v36 = v30 / (float)v29;
              (*(void (__fastcall **)(int, float *))(v28 + 200))(v28, &dest);
              v37 = *(_DWORD *)v24;
              *(_DWORD *)(v37 + 464) = (int)v36;
              *(float *)(v37 + 976) = (float)(int)v36;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(i);
              V_LOCK(eeprom_sweep_freq);
              api_get_eeprom_PT2_freq(i);
              v39 = logfmt_raw((int)v49, 0x1000u);
              V_UNLOCK(v39);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                182,
                "set_frequency_with_voltage_base",
                31,
                597,
                40,
                v49);
            }
          }
        }
      }
    }
    else
    {
      v19 = all_created_runtime - 4;
      v20 = 0;
      while ( 1 )
      {
        v21 = *((_DWORD *)v19 + 1);
        v19 += 4;
        ++v20;
        v2 = (*(int (**)(void))(v21 + 188))();
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 100));
        if ( v43 <= v20 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    v40 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v43 > 0 )
        break;
LABEL_16:
      v18 = v41;
      if ( working_voltage + 20 < v41 && v8 < v5 && v12 - v42 <= v40 )
      {
        v41 -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v18 - 10);
        if ( v2 )
          return v2;
        current_voltage = usleep((__useconds_t)"ersion12VersionIndex5index17hb28023ac069c5199E");
      }
      v11 = v12;
      if ( v12 == ++v40 )
        goto LABEL_22;
    }
    v13 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v14 = all_created_runtime;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v13 + 188))(v13, 0, v11);
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 100));
        if ( v43 <= v15 )
          goto LABEL_16;
        v16 = *((_DWORD *)v14 + 1);
        v14 += 4;
        v13 = v16;
        if ( !v16 )
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
