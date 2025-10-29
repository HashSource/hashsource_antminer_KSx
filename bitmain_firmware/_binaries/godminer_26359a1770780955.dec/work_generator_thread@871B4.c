void __fastcall __noreturn work_generator_thread(int a1)
{
  int v1; // r5
  int all_created_runtime; // r7
  int *v3; // r1
  int *v4; // r0
  int v5; // lr
  unsigned __int64 v6; // r2
  int v7; // t1
  unsigned __int64 v8; // r6
  int v9; // r11
  char *v10; // r6
  int v11; // r0
  int v12; // r0
  int i; // r0
  int current_pool; // r0
  int v15; // r7
  int v16; // r0
  int v17; // r0
  int v18; // r6
  int v19; // r8
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
  int v36; // r0
  void *v37; // lr
  int v38; // r1
  const char *v39; // r0
  int v40; // r0
  int v41; // r0
  unsigned __int64 v42; // [sp+10h] [bp-14BCh]
  int v43; // [sp+1Ch] [bp-14B0h]
  int v44; // [sp+20h] [bp-14ACh]
  int v45; // [sp+3Ch] [bp-1490h]
  int v46; // [sp+4Ch] [bp-1480h] BYREF
  _DWORD v47[2]; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v49[512]; // [sp+4C8h] [bp-1004h] BYREF

  v46 = 0;
  v1 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v46);
  memset(s, 0, sizeof(s));
  if ( v46 <= 0 )
  {
    v44 = 0;
    v43 = -1000;
  }
  else
  {
    v3 = (int *)(all_created_runtime + 4 * v46);
    v4 = (int *)all_created_runtime;
    v5 = all_created_runtime;
    v6 = -1;
    do
    {
      v7 = *v4++;
      v8 = *(_QWORD *)(v7 + 984);
      if ( v6 > v8 )
        v6 = v8;
    }
    while ( v3 != v4 );
    all_created_runtime = v5;
    v44 = (int)v6 / 1000000;
    v43 = 1000 * (v6 - (_DWORD)&loc_F4240 * ((int)v6 / 1000000));
  }
  v9 = 0;
  v10 = (char *)calloc(1u, 0x40u);
  v11 = snprintf(v10, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK(v11);
  syscall(224);
  v45 = all_created_runtime - 4;
  v12 = logfmt_raw((int)v49, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/god-miner.c",
    160,
    "work_generator_thread",
    21,
    205,
    40,
    v49);
  prctl(15, v10);
  for ( i = clock_gettime(1, (struct timespec *)&send_job_timer); ; i = sleep(0) )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = get_current_pool(i);
      v15 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK(current_pool);
      v33 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v33);
      i = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "work_generator_thread",
            21,
            224,
            20,
            v49);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, v15 + 1904) )
        goto LABEL_36;
      clock_gettime(1, v49);
      v47[0] = (v43 + v49[0].tv_nsec) / 1000000000 + v49[0].tv_sec + v44;
      v47[1] = (v43 + v49[0].tv_nsec) % 1000000000;
      v16 = pool_twait_to_be_expected_and_set(v15, v15 + 1916, 1, 0, v47);
      if ( v16 == 1 )
      {
        V_LOCK(1);
        v34 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v34);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          236,
          20,
          v49);
        goto LABEL_36;
      }
      if ( v16 == 110 )
      {
        V_LOCK(110);
        v35 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v35);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          240,
          20,
          v49);
      }
      else
      {
        V_LOCK(v16);
        v17 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          242,
          20,
          v49);
      }
      pthread_mutex_lock((pthread_mutex_t *)(v15 + 1592));
      if ( pool_tget(v15, v15 + 1584) )
        break;
      if ( (*(int (__fastcall **)(_DWORD *, int))(v1 + 36))(s, v15) == 2 )
      {
        V_LOCK(2);
        v36 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v36);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          255,
          20,
          v49);
        v37 = (void *)s[281];
        v38 = *(_DWORD *)(v15 + 1632);
        ++*(_QWORD *)&total_getworks;
        *(_DWORD *)(v15 + 1632) = v38 + 1;
        if ( v37 )
        {
          free(v37);
          s[281] = 0;
        }
        v9 = 1;
        memcpy(s, (const void *)(v15 + 456), sizeof(s));
        v39 = *(const char **)(v15 + 1580);
        if ( v39 )
          s[281] = _strdup(v39);
      }
      i = pthread_mutex_unlock((pthread_mutex_t *)(v15 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = *(_DWORD *)(v15 + 80);
      if ( v46 > 0 )
      {
        v18 = 0;
        v19 = v45;
        do
        {
          if ( v18 )
            v20 = 0;
          else
            v20 = v9;
          ++v18;
          (**(void (__fastcall ***)(_DWORD *, int, int))(v1 + 72))(s, v15, v20);
          ++local_work;
          v21 = time(0);
          v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)(v1 + 72) + 4);
          last_getwork = v21;
          v23 = *(_DWORD *)(v19 + 4);
          v19 += 4;
          i = v22(v23, s);
        }
        while ( v46 > v18 );
      }
      V_LOCK(i);
      clock_gettime(1, &tp);
      v24 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v24);
      if ( v9 )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          280,
          20,
          v49);
      else
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "work_generator_thread",
          21,
          282,
          20,
          v49);
      clock_gettime(1, &tp);
      v25 = max_timeout_value;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v42 = 1000000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_30844C) / 1000;
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
      if ( v42 > v26 )
        max_timeout_value[v28] = v42;
      v32 = clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = get_current_pool(v32);
      v15 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    v40 = pthread_mutex_unlock((pthread_mutex_t *)(v15 + 1592));
    V_LOCK(v40);
    v41 = logfmt_raw((int)v49, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "work_generator_thread",
      21,
      248,
      20,
      v49);
LABEL_36:
    ;
  }
}
