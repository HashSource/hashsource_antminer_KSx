int __fastcall sub_8B5F4(int a1)
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
  char *v13; // r9
  pthread_mutex_t **v14; // r6
  pthread_t v15; // r0
  pthread_mutex_t *v16; // r7
  char *v17; // r0
  int v18; // r10
  int v19; // lr
  int *v20; // r2
  int v21; // r12
  int v22; // r1
  int v23; // t1
  signed int v24; // r3
  int lock; // r3
  _DWORD *v26; // r2
  _DWORD *v27; // r1
  int *all_created_runtime; // r0
  int *v29; // r12
  int v30; // t1
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r0
  int v35; // r6
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r6
  int v40; // r3
  double *v41; // r0
  int v42; // r6
  int *v43; // r7
  int *v44; // r6
  int v45; // r5
  int v46; // t1
  int v47; // t1
  int v49; // r0
  int v50; // r6
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // [sp+10h] [bp-1094h]
  int v58; // [sp+14h] [bp-1090h]
  _DWORD v59[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v60[1025]; // [sp+A0h] [bp-1004h] BYREF

  v57 = total_pools;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v60, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    796,
    20,
    v60);
  v2 = pthread_self();
  pthread_detach(v2);
  v3 = dword_312544;
  if ( dword_312544 )
  {
    v58 = 1;
    pthread_cancel(dword_312544);
    dword_312544 = 0;
    v3 = usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  else
  {
    v58 = 0;
  }
  if ( v57 > 0 )
  {
    v4 = 0;
    do
    {
      V_LOCK(v3);
      ++v4;
      v5 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v5);
      v3 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/pool.c",
             150,
             "pool_change_function",
             20,
             812,
             20,
             v60);
    }
    while ( v57 != v4 );
  }
  if ( dword_2F2E9C > 0 )
  {
    v6 = (char *)&unk_2F2EA0;
    v7 = 0;
    do
    {
      v8 = sub_8A8C0();
      ++v7;
      sub_8A274((void **)(v8 + 12), (_BYTE *)(v8 + 28), v6);
      set_user(v6 + 256);
      v3 = set_pass(v6 + 512);
      v6 += 768;
    }
    while ( dword_2F2E9C > v7 );
  }
  if ( total_pools == v57 )
  {
    V_LOCK(v3);
    v49 = logfmt_raw((int)v60, 0x1000u);
    V_UNLOCK(v49);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "pool_change_function",
      20,
      822,
      100,
      v60);
    if ( !v58 )
      goto LABEL_47;
    goto LABEL_57;
  }
  V_LOCK(v3);
  v9 = logfmt_raw((int)v60, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/pool.c",
          150,
          "pool_change_function",
          20,
          826,
          20,
          v60);
  if ( total_pools > 0 )
  {
    v11 = 0;
    do
    {
      V_LOCK(v10);
      ++v11;
      v12 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v12);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/pool.c",
              150,
              "pool_change_function",
              20,
              829,
              20,
              v60);
    }
    while ( total_pools > v11 );
  }
  if ( v57 > 0 )
  {
    v13 = (char *)&stratum_thr_info;
    v14 = (pthread_mutex_t **)v59;
    do
    {
      v15 = *((_DWORD *)v13 + 1);
      v16 = *(pthread_mutex_t **)pools;
      if ( v15 )
      {
        pthread_cancel(v15);
        *((_DWORD *)v13 + 1) = 0;
      }
      v17 = (char *)*((_DWORD *)v13 + 11);
      if ( v17 )
      {
        tq_free(v17);
        *((_DWORD *)v13 + 11) = 0;
      }
      pthread_mutex_lock(v16 + 76);
      v16[79].__size[20] = 0;
      pthread_mutex_unlock(v16 + 76);
      pthread_mutex_lock(v16 + 76);
      v16[79].__size[8] = 1;
      pthread_mutex_unlock(v16 + 76);
      v18 = total_pools;
      --dword_2F2D78;
      --dword_2F2D74;
      --dword_2F2D70;
      v19 = total_pools - 1;
      if ( total_pools > 0 )
      {
        v20 = (int *)pools;
        v21 = pools + 4 * total_pools;
        do
        {
          v23 = *v20++;
          v22 = v23;
          v24 = *(_DWORD *)(v23 + 4);
          if ( v24 > (signed int)v16->__count )
            *(_DWORD *)(v22 + 4) = v24 - 1;
        }
        while ( (int *)v21 != v20 );
      }
      lock = v16->__lock;
      if ( v19 > v16->__lock )
      {
        v26 = (_DWORD *)(pools + 4 * lock);
        do
        {
          v27 = (_DWORD *)v26[1];
          *v26++ = v27;
          *v27 = lock++;
        }
        while ( v19 != lock );
      }
      v13 += 48;
      v16->__lock = v18;
      total_pools = v18 - 1;
      *v14++ = v16;
    }
    while ( v13 != (char *)&stratum_thr_info + 48 * v57 );
  }
  v60[0] = 0;
  all_created_runtime = (int *)get_all_created_runtime(v60);
  if ( v60[0] > 0 )
  {
    v29 = &all_created_runtime[v60[0]];
    do
    {
      v30 = *all_created_runtime++;
      v31 = v30 + 535;
      v32 = v30 + 567;
      do
        *(_BYTE *)++v31 = 1;
      while ( v32 != v31 );
    }
    while ( v29 != all_created_runtime );
  }
  V_LOCK(all_created_runtime);
  v33 = logfmt_raw((int)v60, 0x1000u);
  V_UNLOCK(v33);
  v34 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/pool.c",
          150,
          "pool_change_function",
          20,
          854,
          20,
          v60);
  if ( total_pools > 0 )
  {
    v35 = 0;
    do
    {
      V_LOCK(v34);
      ++v35;
      v36 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v36);
      v34 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/pool.c",
              150,
              "pool_change_function",
              20,
              857,
              20,
              v60);
    }
    while ( total_pools > v35 );
  }
  V_LOCK(v34);
  v37 = logfmt_raw((int)v60, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    860,
    40,
    v60);
  sleep(5u);
  if ( byte_2F2E98 )
  {
    create_pool_stratum_threads();
  }
  else
  {
    v38 = check_pools_valid();
    if ( v38 <= 0 )
    {
      V_LOCK(v38);
      v56 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        871,
        40,
        v60);
    }
  }
  v39 = 0;
  do
  {
    ++v39;
    sleep(1u);
    if ( v39 == 8 )
      v40 = 0;
    else
      v40 = ((unsigned __int8)pools_active ^ 1) & 1;
  }
  while ( v40 );
  set_miner_start_time();
  v41 = api_flush();
  v42 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK(v41);
    v53 = logfmt_raw((int)v60, 0x1000u);
    V_UNLOCK(v53);
    v54 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/pool.c",
            150,
            "pool_change_function",
            20,
            885,
            100,
            v60);
    if ( total_pools > 0 )
    {
      do
      {
        V_LOCK(v54);
        ++v42;
        v55 = logfmt_raw((int)v60, 0x1000u);
        V_UNLOCK(v55);
        v54 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/pool.c",
                150,
                "pool_change_function",
                20,
                888,
                100,
                v60);
      }
      while ( total_pools > v42 );
    }
  }
  if ( v58 )
  {
LABEL_57:
    dword_312540 = 2;
    pthread_attr_init(&attr);
    v50 = pthread_create((pthread_t *)&dword_312544, &attr, (void *(*)(void *))watchpool_thread, &dword_312540);
    v51 = pthread_attr_destroy(&attr);
    if ( v50 )
    {
      V_LOCK(v51);
      v52 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        898,
        100,
        v60);
      exit(1);
    }
  }
LABEL_47:
  if ( v57 <= 0 )
  {
    sleep(0xAu);
  }
  else
  {
    v43 = v59;
    v44 = v59;
    do
    {
      v46 = *v44++;
      v45 = v46;
      if ( v46 )
      {
        pthread_mutex_lock((pthread_mutex_t *)(v45 + 1824));
        *(_BYTE *)(v45 + 1904) = 1;
        pthread_cond_broadcast((pthread_cond_t *)(v45 + 1856));
        pthread_mutex_unlock((pthread_mutex_t *)(v45 + 1824));
      }
    }
    while ( &v59[v57] != v44 );
    sleep(0xAu);
    do
    {
      v47 = *v43++;
      pthread_mutex_lock((pthread_mutex_t *)(v47 + 1824));
      *(_BYTE *)(v47 + 1904) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(v47 + 1856));
      pthread_mutex_unlock((pthread_mutex_t *)(v47 + 1824));
      free((void *)v47);
    }
    while ( v43 != v44 );
  }
  newthread = 0;
  return 0;
}
