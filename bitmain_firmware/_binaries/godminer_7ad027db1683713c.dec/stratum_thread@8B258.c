int __fastcall stratum_thread(int a1)
{
  int v2; // r5
  pthread_t v3; // r0
  pthread_mutex_t *v4; // r4
  char *v5; // r6
  int v6; // r0
  char *v7; // r0
  int v8; // r0
  int v9; // r0
  pthread_mutex_t *v10; // r1
  __int64 v11; // r2
  int v12; // r0
  void *v13; // r6
  int owner; // r10
  int lock; // r6
  _DWORD *current_pool; // r0
  unsigned int count; // r3
  void (__fastcall *v18)(pthread_mutex_t *); // r2
  __int64 v20; // [sp+30h] [bp-1094h]
  char *v21; // [sp+3Ch] [bp-1088h]
  int v22; // [sp+44h] [bp-1080h]
  __time_t v23; // [sp+48h] [bp-107Ch]
  _DWORD v24[7]; // [sp+60h] [bp-1064h] BYREF
  int v25; // [sp+7Ch] [bp-1048h]
  _DWORD v26[7]; // [sp+80h] [bp-1044h] BYREF
  int v27; // [sp+9Ch] [bp-1028h]
  int v28; // [sp+A0h] [bp-1024h] BYREF
  int v29; // [sp+A4h] [bp-1020h]
  int v30; // [sp+A8h] [bp-101Ch]
  int v31; // [sp+ACh] [bp-1018h]
  int v32; // [sp+B0h] [bp-1014h]
  int v33; // [sp+B4h] [bp-1010h]
  int v34; // [sp+B8h] [bp-100Ch]
  int v35; // [sp+BCh] [bp-1008h]
  char v36[4100]; // [sp+C0h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v23 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (pthread_mutex_t *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "stratum_thread pool %s", v4->__kind);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_thread",
      14,
      249,
      20,
      v36);
    v5 = (char *)calloc(1u, 0x40u);
    snprintf(v5, 0x40u, "%.10s_%d", "stratum_thread", v4->__lock);
    V_LOCK();
    v6 = syscall(224);
    logfmt_raw(v36, 0x1000u, 0, "%s on pid %ld", v5, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_thread",
      14,
      251,
      40,
      v36);
    prctl(15, v5);
    v7 = _strdup((const char *)v4->__kind);
    v4[1].__owner = (int)v7;
    if ( v7 )
    {
      v21 = &v4[79].__size[20];
      pool_tset((int)v4, &v4[79].__size[8], 0);
      pool_tclear((int)v4, &v4[79].__size[20], 0);
      dword_2D2FCC = 0;
      v22 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = 0;
          while ( 1 )
          {
            v8 = (int)v4;
            if ( v4[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v9 = (*(int (__fastcall **)(int))v2)(v8);
              v10 = v4;
              if ( v9 )
              {
                if ( (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v4) )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v4, v10);
              pool_tclear((int)v4, v21, 0);
              pool_died(&v4->__lock);
              sub_25A61C(v20, SHIDWORD(v20), 50);
              if ( !v11 )
              {
                V_LOCK();
                V_INT((int)v24, "poolno", v4->__lock);
                logfmt_raw(
                  v36,
                  0x1000u,
                  0,
                  v25,
                  v24[0],
                  v24[1],
                  v24[2],
                  v24[3],
                  v24[4],
                  v24[5],
                  v24[6],
                  v25,
                  "...retry after %d seconds failures %d",
                  30,
                  v20 + 1);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/stratum_handler.c",
                  161,
                  "stratum_thread",
                  14,
                  284,
                  100,
                  v36);
              }
              ++v20;
              sleep(0x1Eu);
              v8 = (int)v4;
              if ( v4[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK();
            owner = v4[1].__owner;
            lock = v4->__lock;
            current_pool = (_DWORD *)get_current_pool();
            logfmt_raw(v36, 0x1000u, 0, "pool %d is active, pool url %s, current_pool %d", lock, owner, *current_pool);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/stratum_handler.c",
              161,
              "stratum_thread",
              14,
              290,
              20,
              v36);
            pool_alive(v4);
            if ( v22 )
            {
              v22 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v8);
          if ( stratum_socket_full((int)v4, v23) )
            break;
          V_LOCK();
          V_INT((int)v26, "poolno", v4->__lock);
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "stratum connection timeout");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_thread",
            14,
            304,
            100,
            v36);
LABEL_19:
          count = v4[81].__count;
          pools_active = 0;
          ++total_go;
          v18 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          v4[81].__count = count + 1;
          v18(v4);
          pool_tclear((int)v4, v21, 0);
          pool_died(&v4->__lock);
          V_LOCK();
          V_INT((int)&v28, "poolno", v4->__lock);
          logfmt_raw(v36, 0x1000u, 0, v35, v28, v29, v30, v31, v32, v33, v34, v35, "stratum connection interrupted");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_thread",
            14,
            332,
            20,
            v36);
          sleep(0x1Eu);
        }
        v12 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v4);
        v13 = (void *)v12;
        if ( !v12 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v4, v12) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v13, v4);
        free(v13);
        pools_active = 1;
      }
    }
  }
  V_LOCK();
  V_INT((int)&v28, "poolno", v4->__lock);
  logfmt_raw(v36, 0x1000u, 0, v35, v28, v29, v30, v31, v32, v33, v34, v35, "stratum thread out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/stratum_handler.c",
    161,
    "stratum_thread",
    14,
    339,
    60,
    v36);
  return 0;
}
