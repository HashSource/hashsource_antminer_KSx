int __fastcall set_frequency_bias_ks5(int a1)
{
  float v1; // s0
  int v3; // r0
  int v4; // r0
  float v5; // s15
  float *v6; // r3
  float *v7; // r2
  float v8; // s14
  int v9; // r8
  int v10; // r4
  int i; // r5
  unsigned int v12; // r4
  float *v13; // r9
  int v14; // r3
  int v16; // r0
  _BYTE v17[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v3 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
         192,
         "set_frequency_bias_ks5",
         22,
         83,
         60,
         v17);
  v5 = 0.0;
  v6 = (float *)&chip_freq_bias_topol_ks5;
  do
  {
    v7 = v6 + 12;
    do
    {
      v8 = *v6++;
      v5 = v5 + v8;
    }
    while ( v6 != v7 );
  }
  while ( v6 != (float *)&chip_freq_bias_topol_ks5_2 );
  if ( v5 > 0.01 || v5 < -0.01 )
  {
    V_LOCK(v4);
    v16 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "set_frequency_bias_ks5",
      22,
      93,
      100,
      v17);
    return 16;
  }
  v9 = 48;
  v10 = 0;
  while ( 2 )
  {
    for ( i = v9 - 48; ; v10 = *(_DWORD *)((char *)&unk_29348C + i) )
    {
      v12 = v10 - 1;
      if ( v12 <= 0x5B )
        break;
      i += 4;
      if ( v9 == i )
        goto LABEL_13;
LABEL_10:
      ;
    }
    v13 = (float *)((char *)&chip_freq_bias_topol_ks5 + i);
    i += 4;
    pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v12 + 20));
    v14 = *(_DWORD *)(a1 + 528) + 44 * v12;
    *(float *)(v14 + 8) = *v13 * v1;
    pthread_mutex_unlock((pthread_mutex_t *)(v14 + 20));
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(a1 + 192))(a1, 0, (unsigned __int8)v12);
    if ( v9 != i )
      goto LABEL_10;
LABEL_13:
    if ( v9 != 384 )
    {
      v10 = *(_DWORD *)((char *)&unk_29348C + v9);
      v9 += 48;
      continue;
    }
    return 0;
  }
}
