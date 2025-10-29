void __noreturn nonce_submit_thread()
{
  int v0; // r10
  int *all_created_runtime; // r5
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r6
  int v6; // r4
  const char *v7; // r0
  int v8; // r11
  double v9; // d16
  double v10; // d18
  double v11; // d17
  int v12; // [sp+2Ch] [bp-2030h] BYREF
  void *dest[284]; // [sp+30h] [bp-202Ch] BYREF
  _QWORD v14[372]; // [sp+4A0h] [bp-1BBCh] BYREF
  char v15[4100]; // [sp+1058h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v12);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v15, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/god-miner.c",
    155,
    "nonce_submit_thread",
    19,
    306,
    40,
    v15);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 40))(v5, v14);
      if ( v14[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v14[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "nonce_submit_thread",
        19,
        321,
        80,
        v15);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v6 + 456), sizeof(dest));
    v7 = *(const char **)(v6 + 1580);
    if ( v7 )
      dest[281] = _strdup(v7);
    v8 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v0 + 72) + 8))(dest, v6, v14);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1592));
    if ( v8 == 1 )
    {
      v9 = *(double *)(v6 + 1808);
      v10 = total_diff_stale;
      ++*(_DWORD *)(v6 + 1640);
      v11 = *(double *)(v6 + 1816);
      ++*(_QWORD *)&total_stale;
      total_diff_stale = v10 + v9;
      *(double *)(v6 + 1816) = v11 + v9;
    }
    else
    {
      workio_submit_work((int)dest, (pthread_mutex_t *)v6);
    }
  }
}
