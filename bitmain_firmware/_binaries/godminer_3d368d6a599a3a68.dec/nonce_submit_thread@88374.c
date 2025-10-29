void __fastcall __noreturn nonce_submit_thread(int a1)
{
  int v1; // r10
  int *all_created_runtime; // r5
  char *v3; // r4
  int v4; // r0
  int v5; // r0
  pthread_t v6; // r0
  int v7; // r6
  int v8; // r4
  const char *v9; // r0
  int v10; // r11
  int v11; // r0
  double v12; // d16
  double v13; // d18
  double v14; // d17
  _BYTE v15[4]; // [sp+2Ch] [bp-2030h] BYREF
  void *dest[284]; // [sp+30h] [bp-202Ch] BYREF
  _QWORD v17[372]; // [sp+4A0h] [bp-1BBCh] BYREF
  _BYTE v18[4100]; // [sp+1058h] [bp-1004h] BYREF

  v1 = frontend_runtime_instance(a1);
  all_created_runtime = (int *)get_all_created_runtime(v15);
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK(v4);
  syscall(224);
  v5 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/god-miner.c",
    160,
    "nonce_submit_thread",
    19,
    308,
    40,
    v18);
  prctl(15, v3);
  v6 = pthread_self();
  pthread_detach(v6);
  v7 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v7 + 40))(v7, v17);
      if ( v17[0] < (unsigned __int64)total_pools )
      {
        v8 = *(_DWORD *)(pools + 4 * LODWORD(v17[0]));
        if ( v8 )
          break;
      }
      V_LOCK(total_pools);
      v11 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "nonce_submit_thread",
        19,
        323,
        80,
        v18);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v8 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v8 + 456), sizeof(dest));
    v9 = *(const char **)(v8 + 1580);
    if ( v9 )
      dest[281] = _strdup(v9);
    v10 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v1 + 72) + 8))(dest, v8, v17);
    pthread_mutex_unlock((pthread_mutex_t *)(v8 + 1592));
    if ( v10 == 1 )
    {
      v12 = *(double *)(v8 + 1808);
      v13 = total_diff_stale;
      ++*(_DWORD *)(v8 + 1640);
      v14 = *(double *)(v8 + 1816);
      ++*(_QWORD *)&total_stale;
      total_diff_stale = v13 + v12;
      *(double *)(v8 + 1816) = v14 + v12;
    }
    else
    {
      workio_submit_work((int)dest, v8);
    }
  }
}
