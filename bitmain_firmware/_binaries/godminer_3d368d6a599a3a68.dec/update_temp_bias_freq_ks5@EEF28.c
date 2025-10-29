int __fastcall update_temp_bias_freq_ks5(int a1, int a2)
{
  float v3; // s14
  char *v4; // r2
  float v5; // s15
  float *i; // r3
  int *v7; // r12
  int v8; // lr
  int v9; // t1
  int v10; // r3
  float v11; // s16
  int v12; // r7
  int v13; // r3
  int j; // r5
  int v15; // r4
  int v16; // r0
  float v17; // s15
  int v18; // r0
  int v20; // r0
  double v21; // [sp+8h] [bp-103Ch]
  int v22; // [sp+10h] [bp-1034h]
  _DWORD v23[5]; // [sp+14h] [bp-1030h] BYREF
  _DWORD v24[6]; // [sp+28h] [bp-101Ch] BYREF
  _BYTE v25[4100]; // [sp+40h] [bp-1004h] BYREF

  if ( !byte_2FEA30 )
  {
    v3 = 0.0;
    v4 = (char *)&unk_291B5C;
    v5 = 0.0;
    while ( 1 )
    {
      for ( i = (float *)(v4 - 44); ; ++i )
      {
        v5 = v5 + v3;
        if ( i == (float *)v4 )
          break;
        v3 = *i;
      }
      v4 += 48;
      if ( v4 == "q_ks5" )
        break;
      v3 = *((float *)v4 - 12);
    }
    if ( v5 > 0.01 || v5 < -0.01 )
    {
      V_LOCK(a1);
      v20 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "update_temp_bias_freq_ks5",
        25,
        166,
        100,
        v25);
      exit(-1);
    }
    byte_2FEA30 = 1;
  }
  v7 = v23;
  v8 = 0;
  v22 = *(_DWORD *)"U";
  v23[0] = *(_DWORD *)"?";
  v23[1] = *(_DWORD *)"(";
  v23[2] = *(_DWORD *)"%";
  v23[3] = *(_DWORD *)"\"";
  v23[4] = 12;
  v24[0] = 1061158912;
  v24[1] = 1061158912;
  memset(&v24[2], 0, 16);
  while ( 1 )
  {
    v9 = *v7++;
    v10 = v8 + 1;
    if ( v9 < a2 && *(v7 - 2) >= a2 )
      break;
    ++v8;
    if ( v10 == 5 )
    {
      v11 = 0.0;
      goto LABEL_17;
    }
  }
  v11 = *(float *)&v24[v8];
LABEL_17:
  if ( a2 > 85 )
  {
    v11 = 0.75;
  }
  else if ( a2 <= 12 )
  {
    v11 = 0.0;
  }
  v12 = 48;
  v13 = 0;
  while ( 2 )
  {
    for ( j = v12 - 48; ; v13 = *(_DWORD *)((char *)&unk_291974 + j) )
    {
      v15 = v13 - 1;
      if ( v13 - 1 >= 0 && *(_DWORD *)(a1 + 332) > v15 )
        break;
      j += 4;
      if ( j == v12 )
        goto LABEL_27;
LABEL_23:
      ;
    }
    v16 = pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v15 + 20));
    v17 = *(float *)((char *)&unk_291B2C + j);
    j += 4;
    *(float *)(*(_DWORD *)(a1 + 528) + 44 * v15 + 8) = (float)(v11 * v17) + 0.0;
    V_LOCK(v16);
    v21 = *(float *)(*(_DWORD *)(a1 + 528) + 44 * v15 + 8);
    v18 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "update_temp_bias_freq_ks5",
      25,
      213,
      20,
      v25);
    pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v15 + 20));
    if ( j != v12 )
      goto LABEL_23;
LABEL_27:
    if ( v12 != 384 )
    {
      v13 = *(_DWORD *)((char *)&unk_291974 + v12);
      v12 += 48;
      continue;
    }
    return 0;
  }
}
