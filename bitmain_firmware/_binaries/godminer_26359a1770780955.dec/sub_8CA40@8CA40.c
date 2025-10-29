int __fastcall sub_8CA40(int a1)
{
  int v1; // r0
  pthread_t v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  char *v6; // r6
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  _DWORD *v13; // r9
  pthread_mutex_t **v14; // r6
  pthread_t v15; // r0
  pthread_mutex_t *v16; // r7
  int v17; // r10
  int v18; // lr
  int *v19; // r2
  int v20; // r12
  int v21; // r1
  int v22; // t1
  signed int v23; // r3
  int lock; // r3
  _DWORD *v25; // r2
  _DWORD *v26; // r1
  int *all_created_runtime; // r0
  int *v28; // r12
  int v29; // t1
  int v30; // r3
  int v31; // r2
  int v32; // r0
  int v33; // r0
  int v34; // r6
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r6
  int v39; // r3
  double *v40; // r0
  int v41; // r6
  int *v42; // r7
  int *v43; // r6
  int v44; // r5
  int v45; // t1
  int v46; // t1
  int v48; // r0
  int v49; // r6
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // [sp+10h] [bp-1094h]
  int v57; // [sp+14h] [bp-1090h]
  _DWORD v58[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v59[1025]; // [sp+A0h] [bp-1004h] BYREF

  v56 = total_pools;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/pool.c",
    155,
    "pool_change_function",
    20,
    810,
    20,
    v59);
  v2 = pthread_self();
  pthread_detach(v2);
  v3 = dword_307D8C;
  if ( dword_307D8C )
  {
    v57 = 1;
    pthread_cancel(dword_307D8C);
    dword_307D8C = 0;
    v3 = usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  else
  {
    v57 = 0;
  }
  if ( v56 > 0 )
  {
    v4 = 0;
    do
    {
      V_LOCK(v3);
      ++v4;
      v5 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v5);
      v3 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/pool.c",
             155,
             "pool_change_function",
             20,
             826,
             20,
             v59);
    }
    while ( v56 != v4 );
  }
  if ( dword_2E86FC > 0 )
  {
    v6 = (char *)&unk_2E8700;
    v7 = 0;
    do
    {
      v8 = sub_8BD0C();
      ++v7;
      sub_8B6C0((void **)(v8 + 12), (_BYTE *)(v8 + 28), v6);
      set_user(v6 + 256);
      v3 = set_pass(v6 + 512);
      v6 += 768;
    }
    while ( dword_2E86FC > v7 );
  }
  if ( total_pools == v56 )
  {
    V_LOCK(v3);
    v48 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v48);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/pool.c",
      155,
      "pool_change_function",
      20,
      836,
      100,
      v59);
    if ( !v57 )
      goto LABEL_47;
    goto LABEL_57;
  }
  V_LOCK(v3);
  v9 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/pool.c",
          155,
          "pool_change_function",
          20,
          840,
          20,
          v59);
  if ( total_pools > 0 )
  {
    v11 = 0;
    do
    {
      V_LOCK(v10);
      ++v11;
      v12 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v12);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/pool.c",
              155,
              "pool_change_function",
              20,
              843,
              20,
              v59);
    }
    while ( total_pools > v11 );
  }
  if ( v56 > 0 )
  {
    v13 = &stratum_thr_info;
    v14 = (pthread_mutex_t **)v58;
    do
    {
      v15 = v13[1];
      v16 = *(pthread_mutex_t **)pools;
      if ( v15 )
      {
        pthread_cancel(v15);
        v13[1] = 0;
      }
      if ( v13[11] )
      {
        tq_free();
        v13[11] = 0;
      }
      pthread_mutex_lock(v16 + 76);
      v16[79].__size[20] = 0;
      pthread_mutex_unlock(v16 + 76);
      pthread_mutex_lock(v16 + 76);
      v16[79].__size[8] = 1;
      pthread_mutex_unlock(v16 + 76);
      v17 = total_pools;
      --dword_2E85D8;
      --dword_2E85D4;
      --dword_2E85D0;
      v18 = total_pools - 1;
      if ( total_pools > 0 )
      {
        v19 = (int *)pools;
        v20 = pools + 4 * total_pools;
        do
        {
          v22 = *v19++;
          v21 = v22;
          v23 = *(_DWORD *)(v22 + 4);
          if ( v23 > (signed int)v16->__count )
            *(_DWORD *)(v21 + 4) = v23 - 1;
        }
        while ( (int *)v20 != v19 );
      }
      lock = v16->__lock;
      if ( v18 > v16->__lock )
      {
        v25 = (_DWORD *)(pools + 4 * lock);
        do
        {
          v26 = (_DWORD *)v25[1];
          *v25++ = v26;
          *v26 = lock++;
        }
        while ( v18 != lock );
      }
      v13 += 12;
      v16->__lock = v17;
      total_pools = v17 - 1;
      *v14++ = v16;
    }
    while ( v13 != (_DWORD *)((char *)&stratum_thr_info + 48 * v56) );
  }
  v59[0] = 0;
  all_created_runtime = (int *)get_all_created_runtime(v59);
  if ( v59[0] > 0 )
  {
    v28 = &all_created_runtime[v59[0]];
    do
    {
      v29 = *all_created_runtime++;
      v30 = v29 + 535;
      v31 = v29 + 567;
      do
        *(_BYTE *)++v30 = 1;
      while ( v31 != v30 );
    }
    while ( v28 != all_created_runtime );
  }
  V_LOCK(all_created_runtime);
  v32 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v32);
  v33 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/pool.c",
          155,
          "pool_change_function",
          20,
          868,
          20,
          v59);
  if ( total_pools > 0 )
  {
    v34 = 0;
    do
    {
      V_LOCK(v33);
      ++v34;
      v35 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v35);
      v33 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/pool.c",
              155,
              "pool_change_function",
              20,
              871,
              20,
              v59);
    }
    while ( total_pools > v34 );
  }
  V_LOCK(v33);
  v36 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v36);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/pool.c",
    155,
    "pool_change_function",
    20,
    874,
    40,
    v59);
  sleep(5u);
  if ( byte_2E86F8 )
  {
    create_pool_stratum_threads();
  }
  else
  {
    v37 = check_pools_valid();
    if ( v37 <= 0 )
    {
      V_LOCK(v37);
      v55 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/pool.c",
        155,
        "pool_change_function",
        20,
        885,
        40,
        v59);
    }
  }
  v38 = 0;
  do
  {
    ++v38;
    sleep(1u);
    if ( v38 == 8 )
      v39 = 0;
    else
      v39 = ((unsigned __int8)pools_active ^ 1) & 1;
  }
  while ( v39 );
  set_miner_start_time();
  v40 = api_flush();
  v41 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK(v40);
    v52 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v52);
    v53 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/pool.c",
            155,
            "pool_change_function",
            20,
            899,
            100,
            v59);
    if ( total_pools > 0 )
    {
      do
      {
        V_LOCK(v53);
        ++v41;
        v54 = logfmt_raw((int)v59, 0x1000u);
        V_UNLOCK(v54);
        v53 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/pool.c",
                155,
                "pool_change_function",
                20,
                902,
                100,
                v59);
      }
      while ( total_pools > v41 );
    }
  }
  if ( v57 )
  {
LABEL_57:
    dword_307D88 = 2;
    pthread_attr_init(&attr);
    v49 = pthread_create((pthread_t *)&dword_307D8C, &attr, (void *(*)(void *))watchpool_thread, &dword_307D88);
    v50 = pthread_attr_destroy(&attr);
    if ( v49 )
    {
      V_LOCK(v50);
      v51 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/pool.c",
        155,
        "pool_change_function",
        20,
        912,
        100,
        v59);
      exit(1);
    }
  }
LABEL_47:
  if ( v56 <= 0 )
  {
    sleep(0xAu);
  }
  else
  {
    v42 = v58;
    v43 = v58;
    do
    {
      v45 = *v43++;
      v44 = v45;
      if ( v45 )
      {
        pthread_mutex_lock((pthread_mutex_t *)(v44 + 1824));
        *(_BYTE *)(v44 + 1904) = 1;
        pthread_cond_broadcast((pthread_cond_t *)(v44 + 1856));
        pthread_mutex_unlock((pthread_mutex_t *)(v44 + 1824));
      }
    }
    while ( &v58[v56] != v43 );
    sleep(0xAu);
    do
    {
      v46 = *v42++;
      pthread_mutex_lock((pthread_mutex_t *)(v46 + 1824));
      *(_BYTE *)(v46 + 1904) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(v46 + 1856));
      pthread_mutex_unlock((pthread_mutex_t *)(v46 + 1824));
      free((void *)v46);
    }
    while ( v42 != v43 );
  }
  newthread = 0;
  return 0;
}
