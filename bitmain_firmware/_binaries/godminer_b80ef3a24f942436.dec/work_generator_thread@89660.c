void __fastcall __noreturn work_generator_thread(int a1)
{
  int v1; // r5
  int *all_created_runtime; // r7
  int *v3; // r1
  int *v4; // r0
  int *v5; // lr
  unsigned __int64 v6; // r2
  int v7; // t1
  unsigned __int64 v8; // r6
  int v9; // r11
  char *v10; // r6
  int v11; // r0
  int v12; // r0
  pthread_mutex_t *current_pool; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r6
  char *v19; // r8
  int v20; // r2
  time_t v21; // r0
  int (__fastcall *v22)(int, _DWORD *); // r3
  int v23; // t1
  int v24; // r0
  unsigned __int64 *v25; // lr
  unsigned __int64 v26; // r0
  int v27; // r12
  int v28; // r6
  unsigned __int64 v29; // r2
  unsigned __int64 v30; // t1
  bool v31; // cf
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  void *v36; // lr
  int v37; // r1
  const char *v38; // r0
  int v39; // r0
  int v40; // r0
  unsigned __int64 v41; // [sp+10h] [bp-14BCh]
  int v42; // [sp+1Ch] [bp-14B0h]
  int v43; // [sp+20h] [bp-14ACh]
  char *v44; // [sp+38h] [bp-1494h]
  int v45; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v46; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v48[512]; // [sp+4C8h] [bp-1004h] BYREF

  v45 = 0;
  v1 = frontend_runtime_instance(a1);
  all_created_runtime = (int *)get_all_created_runtime(&v45);
  memset(s, 0, sizeof(s));
  if ( v45 <= 0 )
  {
    v43 = 0;
    v42 = -1000;
  }
  else
  {
    v3 = &all_created_runtime[v45];
    v4 = all_created_runtime;
    v5 = all_created_runtime;
    v6 = -1;
    do
    {
      v7 = *v4++;
      v8 = *(_QWORD *)(v7 + 992);
      if ( v6 > v8 )
        v6 = v8;
    }
    while ( v3 != v4 );
    all_created_runtime = v5;
    v43 = (int)v6 / 1000000;
    v42 = 1000 * (v6 - (_DWORD)&loc_F4240 * ((int)v6 / 1000000));
  }
  v9 = 0;
  v10 = (char *)calloc(1u, 0x40u);
  v11 = snprintf(v10, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK(v11);
  syscall(224);
  v44 = (char *)(all_created_runtime - 1);
  v12 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner.c",
    151,
    "work_generator_thread",
    21,
    112,
    40,
    v48);
  prctl(15, v10);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v14 = (int)current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK(current_pool);
      v32 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner.c",
        151,
        "work_generator_thread",
        21,
        133,
        20,
        v48);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)(v14 + 1904)) )
        goto LABEL_36;
      clock_gettime(1, v48);
      v46.tv_sec = (v42 + v48[0].tv_nsec) / 1000000000 + v48[0].tv_sec + v43;
      v46.tv_nsec = (v42 + v48[0].tv_nsec) % 1000000000;
      v15 = pool_twait_to_be_expected_and_set(v14, (_BYTE *)(v14 + 1916), 1, 0, &v46);
      if ( v15 == 1 )
      {
        V_LOCK(1);
        v33 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          147,
          20,
          v48);
        goto LABEL_36;
      }
      if ( v15 == 110 )
      {
        V_LOCK(110);
        v34 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v34);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          153,
          20,
          v48);
      }
      else
      {
        V_LOCK(v15);
        v16 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          157,
          20,
          v48);
      }
      pthread_mutex_lock((pthread_mutex_t *)(v14 + 1592));
      if ( pool_tget((pthread_mutex_t *)v14, (unsigned __int8 *)(v14 + 1584)) )
        break;
      if ( (*(int (__fastcall **)(_DWORD *, int))(v1 + 36))(s, v14) == 2 )
      {
        V_LOCK(2);
        v35 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v35);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          172,
          20,
          v48);
        v36 = (void *)s[281];
        v37 = *(_DWORD *)(v14 + 1632);
        ++*(_QWORD *)&total_getworks;
        *(_DWORD *)(v14 + 1632) = v37 + 1;
        if ( v36 )
        {
          free(v36);
          s[281] = 0;
        }
        v9 = 1;
        memcpy(s, (const void *)(v14 + 456), sizeof(s));
        v38 = *(const char **)(v14 + 1580);
        if ( v38 )
          s[281] = _strdup(v38);
      }
      v17 = pthread_mutex_unlock((pthread_mutex_t *)(v14 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = *(_DWORD *)(v14 + 80);
      if ( v45 > 0 )
      {
        v18 = 0;
        v19 = v44;
        do
        {
          if ( v18 )
            v20 = 0;
          else
            v20 = v9;
          ++v18;
          (**(void (__fastcall ***)(_DWORD *, int, int))(v1 + 72))(s, v14, v20);
          ++local_work;
          v21 = time(0);
          v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)(v1 + 72) + 4);
          last_getwork = v21;
          v23 = *((_DWORD *)v19 + 1);
          v19 += 4;
          v17 = v22(v23, s);
        }
        while ( v45 > v18 );
      }
      V_LOCK(v17);
      clock_gettime(1, &tp);
      v24 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v24);
      if ( v9 )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          200,
          20,
          v48);
      else
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "work_generator_thread",
          21,
          204,
          20,
          v48);
      clock_gettime(1, &tp);
      v25 = max_timeout_value;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v41 = 1000000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_312704) / 1000;
      do
      {
        v30 = *v25++;
        v29 = v30;
        v31 = v30 >= v26;
        if ( v30 < v26 )
          v28 = v27;
        ++v27;
        if ( !v31 )
          v26 = v29;
      }
      while ( v27 != 10 );
      v9 = 0;
      if ( v41 > v26 )
        max_timeout_value[v28] = v41;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v14 = (int)current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    v39 = pthread_mutex_unlock((pthread_mutex_t *)(v14 + 1592));
    V_LOCK(v39);
    v40 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner.c",
      151,
      "work_generator_thread",
      21,
      164,
      20,
      v48);
LABEL_36:
    sleep(0);
  }
}
