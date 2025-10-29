void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r7
  int *v2; // r1
  int *v3; // r0
  int *v4; // lr
  unsigned __int64 v5; // r2
  int v6; // t1
  unsigned __int64 v7; // r6
  int v8; // r11
  char *v9; // r6
  int v10; // r0
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v12; // r7
  int v13; // r0
  int v14; // r6
  char *v15; // r8
  int v16; // r2
  time_t v17; // r0
  void (__fastcall *v18)(int, _DWORD *); // r3
  int v19; // t1
  int v20; // r3
  unsigned __int64 *v21; // lr
  unsigned __int64 v22; // r0
  int v23; // r12
  int v24; // r6
  unsigned __int64 v25; // r2
  unsigned __int64 v26; // t1
  bool v27; // cf
  void *v28; // lr
  int lock; // r1
  const char *spins; // r0
  unsigned __int64 v31; // [sp+10h] [bp-14BCh]
  int v32; // [sp+1Ch] [bp-14B0h]
  int v33; // [sp+20h] [bp-14ACh]
  char *v34; // [sp+3Ch] [bp-1490h]
  int v35; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v36; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v38[512]; // [sp+4C8h] [bp-1004h] BYREF

  v35 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v35);
  memset(s, 0, sizeof(s));
  if ( v35 <= 0 )
  {
    v33 = 0;
    v32 = -1000;
  }
  else
  {
    v2 = &all_created_runtime[v35];
    v3 = all_created_runtime;
    v4 = all_created_runtime;
    v5 = -1;
    do
    {
      v6 = *v3++;
      v7 = *(_QWORD *)(v6 + 960);
      if ( v5 > v7 )
        v5 = v7;
    }
    while ( v2 != v3 );
    all_created_runtime = v4;
    v33 = (int)v5 / 1000000;
    v32 = 1000 * (v5 - (_DWORD)&loc_F4240 * ((int)v5 / 1000000));
  }
  v8 = 0;
  v9 = (char *)calloc(1u, 0x40u);
  snprintf(v9, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v10 = syscall(224);
  v34 = (char *)(all_created_runtime - 1);
  logfmt_raw((char *)v38, 0x1000u, 0, "%s on pid %ld", v9, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/god-miner.c",
    155,
    "work_generator_thread",
    21,
    203,
    40,
    v38);
  prctl(15, v9);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      logfmt_raw((char *)v38, 0x1000u, (int)v12, "work generator: current pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "work_generator_thread",
        21,
        222,
        20,
        v38);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v12[79].__size[8]) )
        goto LABEL_36;
      clock_gettime(1, v38);
      v36.tv_sec = (v32 + v38[0].tv_nsec) / 1000000000 + v38[0].tv_sec + v33;
      v36.tv_nsec = (v32 + v38[0].tv_nsec) % 1000000000;
      v13 = pool_twait_to_be_expected_and_set((int)v12, &v12[79].__size[20], 1, 0, &v36);
      if ( v13 == 1 )
      {
        V_LOCK();
        logfmt_raw((char *)v38, 0x1000u, 0, "pool has been changed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          234,
          20,
          v38);
        goto LABEL_36;
      }
      if ( v13 == 110 )
      {
        V_LOCK();
        logfmt_raw((char *)v38, 0x1000u, 0, "Wait for new job timeout");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          238,
          20,
          v38);
      }
      else
      {
        V_LOCK();
        logfmt_raw((char *)v38, 0x1000u, 0, "New job has come");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          240,
          20,
          v38);
      }
      pthread_mutex_lock((pthread_mutex_t *)((char *)v12 + 1592));
      if ( pool_tget(v12, (unsigned __int8 *)&v12[66]) )
        break;
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v12) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v12->__lock,
          v12[65].__spins);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          253,
          20,
          v38);
        v28 = (void *)s[281];
        lock = v12[68].__lock;
        ++*(_QWORD *)&total_getworks;
        v12[68].__lock = lock + 1;
        if ( v28 )
        {
          free(v28);
          s[281] = 0;
        }
        v8 = 1;
        memcpy(s, &v12[19], sizeof(s));
        spins = (const char *)v12[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v12 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = v12[3].__owner;
      if ( v35 > 0 )
      {
        v14 = 0;
        v15 = v34;
        do
        {
          if ( v14 )
            v16 = 0;
          else
            v16 = v8;
          ++v14;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v12, v16);
          ++local_work;
          v17 = time(0);
          v18 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)(v0 + 72) + 4);
          last_getwork = v17;
          v19 = *((_DWORD *)v15 + 1);
          v15 += 4;
          v18(v19, s);
        }
        while ( v35 > v14 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      v20 = tp.tv_nsec - dword_2E9E24;
      if ( v8 )
      {
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + v20 / 1000000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          278,
          20,
          v38);
      }
      else
      {
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "Updated job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + v20 / 1000000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "work_generator_thread",
          21,
          280,
          20,
          v38);
      }
      clock_gettime(1, &tp);
      v21 = max_timeout_value;
      v22 = -1;
      v23 = 0;
      v24 = 0;
      v31 = 1000000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_2E9E24) / 1000;
      do
      {
        v26 = *v21++;
        v25 = v26;
        v27 = v26 >= v22;
        if ( v26 < v22 )
          v24 = v23;
        ++v23;
        if ( !v27 )
          v22 = v25;
      }
      while ( v23 != 10 );
      v8 = 0;
      if ( v31 > v22 )
        max_timeout_value[v24] = v31;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v12 + 1592));
    V_LOCK();
    logfmt_raw(
      (char *)v38,
      0x1000u,
      0,
      "work generator: jobid %p cancel %d",
      v12[65].__spins,
      (unsigned __int8)v12[66].__size[0]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "work_generator_thread",
      21,
      246,
      20,
      v38);
LABEL_36:
    sleep(0);
  }
}
