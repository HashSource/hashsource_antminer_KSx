int __fastcall set_frequency_bias_ks5(int a1)
{
  float v1; // s0
  int v3; // r0
  int v4; // r0
  float v5; // s14
  char *v6; // r2
  float v7; // s15
  float *i; // r3
  int v9; // r6
  int v10; // r4
  int j; // r5
  unsigned int v12; // r4
  float v13; // s16
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
         63,
         60,
         v17);
  v5 = 0.0;
  v6 = (char *)&unk_290BAC;
  v7 = 0.0;
  while ( 1 )
  {
    for ( i = (float *)(v6 - 44); ; ++i )
    {
      v7 = v7 + v5;
      if ( i == (float *)v6 )
        break;
      v5 = *i;
    }
    v6 += 48;
    if ( v6 == "q_ks5" )
      break;
    v5 = *((float *)v6 - 12);
  }
  if ( v7 > 0.01 || v7 < -0.01 )
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
      73,
      100,
      v17);
    return 16;
  }
  v9 = 48;
  v10 = 0;
  while ( 2 )
  {
    for ( j = v9 - 48; ; v10 = *(_DWORD *)((char *)&unk_290D64 + j) )
    {
      v12 = v10 - 1;
      if ( v12 <= 0x5B )
        break;
      j += 4;
      if ( j == v9 )
        goto LABEL_15;
LABEL_12:
      ;
    }
    v13 = *(float *)((char *)&unk_290B7C + j);
    j += 4;
    pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 520) + 44 * v12 + 20));
    v14 = *(_DWORD *)(a1 + 520) + 44 * v12;
    *(float *)(v14 + 8) = v1 * v13;
    pthread_mutex_unlock((pthread_mutex_t *)(v14 + 20));
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(a1 + 192))(a1, 0, (unsigned __int8)v12);
    if ( j != v9 )
      goto LABEL_12;
LABEL_15:
    if ( v9 != 384 )
    {
      v10 = *(_DWORD *)((char *)&unk_290D64 + v9);
      v9 += 48;
      continue;
    }
    return 0;
  }
}
