int __fastcall update_temp_bias_freq_ks5(int a1, int a2)
{
  int *v4; // r12
  int v5; // lr
  int v6; // t1
  int v7; // r3
  float v8; // s16
  int v9; // r7
  int v10; // r3
  int i; // r5
  int v12; // r4
  int v13; // r0
  float v14; // s15
  int v15; // r0
  int strategy; // r0
  bool v18; // zf
  float *v19; // r3
  float *v20; // r2
  float v21; // s15
  float v22; // s16
  float *v23; // r3
  float *v24; // r2
  float v25; // s15
  double v26; // d8
  int v27; // r0
  double v28; // [sp+8h] [bp-103Ch]
  int v29; // [sp+10h] [bp-1034h]
  _DWORD v30[5]; // [sp+14h] [bp-1030h] BYREF
  _DWORD v31[6]; // [sp+28h] [bp-101Ch] BYREF
  _BYTE v32[4100]; // [sp+40h] [bp-1004h] BYREF

  if ( !byte_304D88 )
  {
    strategy = eeprom_get_strategy(a1);
    v18 = strategy == 101;
    if ( strategy != 101 )
      v18 = (strategy & 0xFFFFFFFD) == 105;
    if ( v18 )
    {
      strategy = (int)memcpy(&chip_freq_bias_topol_ks5, &chip_freq_bias_topol_ks5_2, 0x180u);
      v19 = (float *)&chip_freq_bias_topol_ks5;
      do
      {
        v20 = v19 + 12;
        do
        {
          v21 = *v19 + 2.60416666;
          *v19++ = v21;
        }
        while ( v19 != v20 );
      }
      while ( v19 != (float *)&chip_freq_bias_topol_ks5_2 );
    }
    v22 = 0.0;
    v23 = (float *)&chip_freq_bias_topol_ks5;
    do
    {
      v24 = v23 + 12;
      do
      {
        v25 = *v23++;
        v22 = v22 + v25;
      }
      while ( v23 != v24 );
    }
    while ( v23 != (float *)&chip_freq_bias_topol_ks5_2 );
    v26 = v22;
    if ( v26 > 0.01 || v26 < -0.01 )
    {
      V_LOCK(strategy);
      v27 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v27);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "update_temp_bias_freq_ks5",
        25,
        192,
        100,
        v32);
      exit(-1);
    }
    byte_304D88 = 1;
  }
  v4 = v30;
  v5 = 0;
  v29 = *(_DWORD *)"U";
  v30[0] = *(_DWORD *)"?";
  v30[1] = *(_DWORD *)"(";
  v30[2] = *(_DWORD *)"%";
  v30[3] = *(_DWORD *)"\"";
  v30[4] = 12;
  v31[0] = 1061158912;
  v31[1] = 1061158912;
  memset(&v31[2], 0, 16);
  while ( 1 )
  {
    v6 = *v4++;
    v7 = v5 + 1;
    if ( v6 < a2 && *(v4 - 2) >= a2 )
      break;
    ++v5;
    if ( v7 == 5 )
    {
      v8 = 0.0;
      goto LABEL_7;
    }
  }
  v8 = *(float *)&v31[v5];
LABEL_7:
  if ( a2 > 85 )
  {
    v8 = 0.75;
  }
  else if ( a2 <= 12 )
  {
    v8 = 0.0;
  }
  v9 = 48;
  v10 = 0;
  while ( 2 )
  {
    for ( i = v9 - 48; ; v10 = *(_DWORD *)((char *)&unk_29348C + i) )
    {
      v12 = v10 - 1;
      if ( v10 - 1 >= 0 && *(_DWORD *)(a1 + 332) > v12 )
        break;
      i += 4;
      if ( v9 == i )
        goto LABEL_17;
LABEL_13:
      ;
    }
    v13 = pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v12 + 20));
    v14 = *(float *)((char *)&chip_freq_bias_topol_ks5 + i);
    i += 4;
    *(float *)(*(_DWORD *)(a1 + 528) + 44 * v12 + 8) = (float)(v8 * v14) + 0.0;
    V_LOCK(v13);
    v28 = *(float *)(*(_DWORD *)(a1 + 528) + 44 * v12 + 8);
    v15 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "update_temp_bias_freq_ks5",
      25,
      239,
      20,
      v32);
    pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v12 + 20));
    if ( v9 != i )
      goto LABEL_13;
LABEL_17:
    if ( v9 != 384 )
    {
      v10 = *(_DWORD *)((char *)&unk_29348C + v9);
      v9 += 48;
      continue;
    }
    return 0;
  }
}
