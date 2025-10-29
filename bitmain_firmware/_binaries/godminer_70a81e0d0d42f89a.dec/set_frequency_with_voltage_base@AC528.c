int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  int all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r10
  int v7; // r0
  float v8; // s20
  int v9; // r0
  int v10; // r0
  int current_voltage; // r0
  int v12; // r2
  int v13; // s19
  int v14; // r0
  int v15; // r5
  int v16; // r4
  int v17; // t1
  int v19; // r2
  int v20; // r5
  int v21; // r4
  int v22; // t1
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r8
  int i; // r4
  int v27; // t1
  unsigned int eeprom_asic_freqs; // r7
  int v29; // r3
  int v30; // r12
  float v31; // s16
  float v32; // s16
  float *v33; // r11
  float v34; // s15
  size_t v35; // r0
  _WORD *v36; // r0
  float v37; // s17
  int v38; // r3
  int eeprom_sweep_freq; // r10
  int v40; // r0
  int v41; // [sp+18h] [bp-223Ch]
  int v42; // [sp+20h] [bp-2234h]
  int v43; // [sp+24h] [bp-2230h]
  int v44; // [sp+28h] [bp-222Ch] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v47; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  _BYTE v49[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v44 = 0;
  all_created_runtime = get_all_created_runtime(&v44);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 964);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 960);
  if ( v4 > *(float *)(a1 + 108) )
    v4 = *(float *)(a1 + 108);
  working_voltage = get_working_voltage();
  v7 = is_check_asic_voltage_enable();
  if ( !v7 )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK(v2);
    v23 = logfmt_raw((int)v49, 0x1000u);
    V_UNLOCK(v23);
    v7 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
           187,
           "set_frequency_with_voltage_base",
           31,
           606,
           40,
           v49);
  }
  if ( *(_DWORD *)(a1 + 96) != -64 )
  {
    v7 = (*(int (__fastcall **)(int))a1)(a1);
    working_voltage += v7;
  }
  v8 = v4 * *(float *)(a1 + 116);
  V_LOCK(v7);
  v9 = logfmt_raw((int)v49, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "set_frequency_with_voltage_base",
          31,
          616,
          60,
          v49);
  current_voltage = get_current_voltage(v10);
  v42 = current_voltage;
  v12 = 1717986919 * (current_voltage - working_voltage);
  v43 = (current_voltage - working_voltage) / 10;
  v13 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v13 <= 0 )
  {
LABEL_22:
    if ( v4 == v5 || v44 <= 0 )
    {
LABEL_29:
      V_LOCK(current_voltage);
      v24 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "set_frequency_with_voltage_base",
        31,
        651,
        60,
        v49);
      if ( v44 > 0 )
      {
        v25 = (_DWORD *)(all_created_runtime - 4);
        for ( i = 0; i < v44; ++i )
        {
          v27 = v25[1];
          ++v25;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v27 + 244)) == 4 )
          {
            eeprom_asic_freqs = api_get_eeprom_asic_freqs(*(_DWORD *)(*v25 + 244), &dest);
            if ( !eeprom_asic_freqs )
            {
              memset(s, 0, sizeof(s));
              v29 = *v25;
              v30 = *(_DWORD *)(*v25 + 332);
              if ( v30 )
              {
                v32 = dest;
                v33 = (float *)&v47;
                sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
                v31 = v32 + 0.0;
                strcat(s, src);
                while ( 1 )
                {
                  v29 = *v25;
                  ++eeprom_asic_freqs;
                  v30 = *(_DWORD *)(*v25 + 332);
                  if ( v30 <= eeprom_asic_freqs )
                    break;
                  v34 = *v33++;
                  v31 = v31 + v34;
                  sprintf(src, "ASIC-%03d [%.2f] ", eeprom_asic_freqs, v34);
                  v35 = strlen(s);
                  v36 = (_WORD *)stpcpy(&s[v35]);
                  if ( (eeprom_asic_freqs & 7) == 7 )
                    *v36 = 10;
                }
              }
              else
              {
                v31 = 0.0;
              }
              v37 = v31 / (float)v30;
              (*(void (__fastcall **)(int, float *))(v29 + 216))(v29, &dest);
              v38 = *v25;
              *(_DWORD *)(v38 + 464) = (int)v37;
              *(float *)(v38 + 964) = (float)(int)v37;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(i);
              V_LOCK(eeprom_sweep_freq);
              api_get_eeprom_PT2_freq(i);
              v40 = logfmt_raw((int)v49, 0x1000u);
              V_UNLOCK(v40);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                187,
                "set_frequency_with_voltage_base",
                31,
                684,
                40,
                v49);
            }
          }
        }
      }
    }
    else
    {
      v20 = all_created_runtime - 4;
      v21 = 0;
      while ( 1 )
      {
        v22 = *(_DWORD *)(v20 + 4);
        v20 += 4;
        ++v21;
        v2 = (*(int (**)(void))(v22 + 188))();
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 104));
        if ( v44 <= v21 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    v41 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v44 > 0 )
        break;
LABEL_16:
      v19 = v42;
      if ( working_voltage + 20 < v42 && v8 < v5 && v13 - v43 <= v41 )
      {
        v42 -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v19 - 10);
        if ( v2 )
          return v2;
        current_voltage = usleep((__useconds_t)"u20$core..fmt..Debug$GT$3fmt17h0889c43153a0c703E");
      }
      v12 = v13;
      if ( v13 == ++v41 )
        goto LABEL_22;
    }
    v14 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v15 = all_created_runtime;
      v16 = 0;
      while ( 1 )
      {
        ++v16;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v14 + 188))(v14, 0, v12);
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 104));
        if ( v44 <= v16 )
          goto LABEL_16;
        v17 = *(_DWORD *)(v15 + 4);
        v15 += 4;
        v14 = v17;
        if ( !v17 )
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
