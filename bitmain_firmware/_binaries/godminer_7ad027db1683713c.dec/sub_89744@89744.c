int sub_89744()
{
  pthread_t v0; // r0
  int v1; // r6
  _DWORD *v2; // r8
  char *v3; // r6
  int v4; // r8
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r8
  char *v8; // r9
  pthread_mutex_t **v9; // r6
  pthread_t v10; // r0
  pthread_mutex_t *v11; // r7
  char *v12; // r0
  int v13; // r10
  int v14; // lr
  int *v15; // r2
  int v16; // r12
  int v17; // r1
  int v18; // t1
  signed int v19; // r3
  int lock; // r3
  _DWORD *v21; // r2
  _DWORD *v22; // r1
  int *all_created_runtime; // r0
  int *v24; // r12
  int v25; // t1
  int v26; // r3
  int v27; // r2
  int v28; // r6
  _DWORD *v29; // r8
  int v30; // r9
  int v31; // r6
  int v32; // r3
  int v33; // r6
  int *v34; // r7
  int *v35; // r6
  int v36; // r5
  int v37; // t1
  int v38; // t1
  int v40; // r6
  _DWORD *v41; // r8
  int v42; // [sp+10h] [bp-1094h]
  int v43; // [sp+14h] [bp-1090h]
  _DWORD v44[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v45[1025]; // [sp+A0h] [bp-1004h] BYREF

  v42 = total_pools;
  V_LOCK();
  logfmt_raw((char *)v45, 0x1000u, 0, "pool_change_function");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    773,
    20,
    v45);
  v0 = pthread_self();
  pthread_detach(v0);
  if ( dword_2E9764 )
  {
    v43 = 1;
    pthread_cancel(dword_2E9764);
    dword_2E9764 = 0;
    usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  else
  {
    v43 = 0;
  }
  if ( v42 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD **)(pools + 4 * v1);
      V_LOCK();
      ++v1;
      logfmt_raw((char *)v45, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v2, v2[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        789,
        20,
        v45);
    }
    while ( v42 != v1 );
  }
  if ( dword_2D26C4 > 0 )
  {
    v3 = (char *)&unk_2D26C8;
    v4 = 0;
    do
    {
      v5 = sub_88AEC();
      ++v4;
      sub_88450((void **)(v5 + 12), (_BYTE *)(v5 + 28), v3);
      set_user(v3 + 256);
      set_pass(v3 + 512);
      v3 += 768;
    }
    while ( dword_2D26C4 > v4 );
  }
  if ( total_pools == v42 )
  {
    V_LOCK();
    logfmt_raw((char *)v45, 0x1000u, 0, "Input pool error, try again");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "pool_change_function",
      20,
      799,
      100,
      v45);
    if ( !v43 )
      goto LABEL_47;
    goto LABEL_57;
  }
  V_LOCK();
  logfmt_raw((char *)v45, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v42);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    803,
    20,
    v45);
  if ( total_pools > 0 )
  {
    v6 = 0;
    do
    {
      v7 = *(_DWORD **)(pools + 4 * v6);
      V_LOCK();
      ++v6;
      logfmt_raw((char *)v45, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v7, v7[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        806,
        20,
        v45);
    }
    while ( total_pools > v6 );
  }
  if ( v42 > 0 )
  {
    v8 = (char *)&stratum_thr_info;
    v9 = (pthread_mutex_t **)v44;
    do
    {
      v10 = *((_DWORD *)v8 + 1);
      v11 = *(pthread_mutex_t **)pools;
      if ( v10 )
      {
        pthread_cancel(v10);
        *((_DWORD *)v8 + 1) = 0;
      }
      v12 = (char *)*((_DWORD *)v8 + 11);
      if ( v12 )
      {
        tq_free(v12);
        *((_DWORD *)v8 + 11) = 0;
      }
      pthread_mutex_lock(v11 + 76);
      v11[79].__size[20] = 0;
      pthread_mutex_unlock(v11 + 76);
      pthread_mutex_lock(v11 + 76);
      v11[79].__size[8] = 1;
      pthread_mutex_unlock(v11 + 76);
      v13 = total_pools;
      --dword_2D25A0;
      --dword_2D259C;
      --dword_2D2598;
      v14 = total_pools - 1;
      if ( total_pools > 0 )
      {
        v15 = (int *)pools;
        v16 = pools + 4 * total_pools;
        do
        {
          v18 = *v15++;
          v17 = v18;
          v19 = *(_DWORD *)(v18 + 4);
          if ( v19 > (signed int)v11->__count )
            *(_DWORD *)(v17 + 4) = v19 - 1;
        }
        while ( (int *)v16 != v15 );
      }
      lock = v11->__lock;
      if ( v14 > v11->__lock )
      {
        v21 = (_DWORD *)(pools + 4 * lock);
        do
        {
          v22 = (_DWORD *)v21[1];
          *v21++ = v22;
          *v22 = lock++;
        }
        while ( v14 != lock );
      }
      v8 += 48;
      v11->__lock = v13;
      total_pools = v13 - 1;
      *v9++ = v11;
    }
    while ( v8 != (char *)&stratum_thr_info + 48 * v42 );
  }
  v45[0] = 0;
  all_created_runtime = (int *)get_all_created_runtime(v45);
  if ( v45[0] > 0 )
  {
    v24 = &all_created_runtime[v45[0]];
    do
    {
      v25 = *all_created_runtime++;
      v26 = v25 + 511;
      v27 = v25 + 543;
      do
        *(_BYTE *)++v26 = 1;
      while ( v27 != v26 );
    }
    while ( v24 != all_created_runtime );
  }
  V_LOCK();
  logfmt_raw((char *)v45, 0x1000u, 0, "total_pools after removed = %d", total_pools);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    831,
    20,
    v45);
  if ( total_pools > 0 )
  {
    v28 = 0;
    do
    {
      v29 = *(_DWORD **)(pools + 4 * v28);
      V_LOCK();
      ++v28;
      logfmt_raw((char *)v45, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v29, v29[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        834,
        20,
        v45);
    }
    while ( total_pools > v28 );
  }
  V_LOCK();
  logfmt_raw((char *)v45, 0x1000u, 0, "reload new pool configuration, check pool connect");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "pool_change_function",
    20,
    837,
    40,
    v45);
  sleep(5u);
  v30 = (unsigned __int8)byte_2D26C0;
  if ( byte_2D26C0 )
  {
    create_pool_stratum_threads();
  }
  else if ( check_pools_valid() <= 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v45, 0x1000u, v30, "no new pools could be valid");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "pool_change_function",
      20,
      848,
      40,
      v45);
  }
  v31 = 0;
  do
  {
    ++v31;
    sleep(1u);
    if ( v31 == 8 )
      v32 = 0;
    else
      v32 = ((unsigned __int8)pools_active ^ 1) & 1;
  }
  while ( v32 );
  set_miner_start_time();
  api_flush();
  v33 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw((char *)v45, 0x1000u, v33, "error pool input");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "pool_change_function",
      20,
      862,
      100,
      v45);
    if ( total_pools > 0 )
    {
      do
      {
        v41 = *(_DWORD **)(pools + 4 * v33);
        V_LOCK();
        ++v33;
        logfmt_raw((char *)v45, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s", *v41, v41[3], v41[4], v41[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/pool.c",
          150,
          "pool_change_function",
          20,
          865,
          100,
          v45);
      }
      while ( total_pools > v33 );
    }
  }
  if ( v43 )
  {
LABEL_57:
    dword_2E9760 = 2;
    pthread_attr_init(&attr);
    v40 = pthread_create((pthread_t *)&dword_2E9764, &attr, (void *(*)(void *))watchpool_thread, &dword_2E9760);
    pthread_attr_destroy(&attr);
    if ( v40 )
    {
      V_LOCK();
      logfmt_raw((char *)v45, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "pool_change_function",
        20,
        875,
        100,
        v45);
      exit(1);
    }
  }
LABEL_47:
  if ( v42 <= 0 )
  {
    sleep(0xAu);
  }
  else
  {
    v34 = v44;
    v35 = v44;
    do
    {
      v37 = *v35++;
      v36 = v37;
      if ( v37 )
      {
        pthread_mutex_lock((pthread_mutex_t *)(v36 + 1824));
        *(_BYTE *)(v36 + 1904) = 1;
        pthread_cond_broadcast((pthread_cond_t *)(v36 + 1856));
        pthread_mutex_unlock((pthread_mutex_t *)(v36 + 1824));
      }
    }
    while ( &v44[v42] != v35 );
    sleep(0xAu);
    do
    {
      v38 = *v34++;
      pthread_mutex_lock((pthread_mutex_t *)(v38 + 1824));
      *(_BYTE *)(v38 + 1904) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(v38 + 1856));
      pthread_mutex_unlock((pthread_mutex_t *)(v38 + 1824));
      free((void *)v38);
    }
    while ( v34 != v35 );
  }
  newthread = 0;
  return 0;
}
