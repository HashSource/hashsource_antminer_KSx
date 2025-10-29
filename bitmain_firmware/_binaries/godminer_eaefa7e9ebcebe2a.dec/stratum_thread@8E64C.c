int __fastcall stratum_thread(int a1)
{
  int v2; // r5
  pthread_t v3; // r0
  char *v4; // r0
  pthread_mutex_t *v5; // r4
  int v6; // r0
  char *v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  pthread_mutex_t *v12; // r1
  int v13; // r0
  int v14; // r0
  __int64 v15; // r2
  int v16; // r0
  void *v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r0
  unsigned int count; // r3
  void (__fastcall *v22)(pthread_mutex_t *); // r2
  int v23; // r0
  int v24; // r0
  int v25; // r0
  __int64 v27; // [sp+30h] [bp-1094h]
  char *v28; // [sp+3Ch] [bp-1088h]
  int v29; // [sp+44h] [bp-1080h]
  int v30; // [sp+48h] [bp-107Ch]
  int v31; // [sp+60h] [bp-1064h] BYREF
  _BYTE v32[32]; // [sp+80h] [bp-1044h] BYREF
  _BYTE v33[32]; // [sp+A0h] [bp-1024h] BYREF
  _BYTE v34[4100]; // [sp+C0h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance(a1);
  v3 = pthread_self();
  pthread_detach(v3);
  v30 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (char *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  v5 = (pthread_mutex_t *)v4;
  if ( v4 )
  {
    V_LOCK(v4);
    v6 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/stratum_handler.c",
      166,
      "stratum_thread",
      14,
      249,
      20,
      v34);
    v7 = (char *)calloc(1u, 0x40u);
    v8 = snprintf(v7, 0x40u, "%.10s_%d", "stratum_thread", v5->__lock);
    V_LOCK(v8);
    syscall(224);
    v9 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/stratum_handler.c",
      166,
      "stratum_thread",
      14,
      251,
      40,
      v34);
    prctl(15, v7);
    v4 = _strdup((const char *)v5->__kind);
    v5[1].__owner = (int)v4;
    if ( v4 )
    {
      v28 = &v5[79].__size[20];
      pool_tset((int)v5, &v5[79].__size[8], 0);
      pool_tclear((int)v5, &v5[79].__size[20], 0);
      dword_2E9004 = 0;
      v29 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = 0;
          while ( 1 )
          {
            v10 = (int)v5;
            if ( v5[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v11 = (*(int (__fastcall **)(int))v2)(v10);
              v12 = v5;
              if ( v11 )
              {
                v13 = (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v5);
                if ( v13 )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v5, v12);
              pool_tclear((int)v5, v28, 0);
              pool_died(v5);
              v14 = sub_26C9E4(v27, HIDWORD(v27), 50, 0);
              if ( !v15 )
              {
                V_LOCK(v14);
                V_INT((int)&v31, "poolno");
                v18 = logfmt_raw((int)v34, 0x1000u);
                V_UNLOCK(v18);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/stratum_handler.c",
                  166,
                  "stratum_thread",
                  14,
                  284,
                  100,
                  v34);
              }
              ++v27;
              sleep(0x1Eu);
              v10 = (int)v5;
              if ( v5[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK(v13);
            get_current_pool();
            v19 = logfmt_raw((int)v34, 0x1000u);
            V_UNLOCK(v19);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/stratum_handler.c",
              166,
              "stratum_thread",
              14,
              290,
              20,
              v34);
            pool_alive(v5);
            if ( v29 )
            {
              v29 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v10);
          if ( stratum_socket_full((int)v5, v30) )
            break;
          V_LOCK(0);
          V_INT((int)v32, "poolno");
          v20 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v20);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/stratum_handler.c",
            166,
            "stratum_thread",
            14,
            304,
            100,
            v34);
LABEL_19:
          count = v5[81].__count;
          pools_active = 0;
          ++total_go;
          v22 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          v5[81].__count = count + 1;
          v22(v5);
          pool_tclear((int)v5, v28, 0);
          v23 = pool_died(v5);
          V_LOCK(v23);
          V_INT((int)v33, "poolno");
          v24 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/stratum_handler.c",
            166,
            "stratum_thread",
            14,
            332,
            20,
            v34);
          sleep(0x1Eu);
        }
        v16 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v5);
        v17 = (void *)v16;
        if ( !v16 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v5, v16) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v17, v5);
        free(v17);
        pools_active = 1;
      }
    }
  }
  V_LOCK(v4);
  V_INT((int)v33, "poolno");
  v25 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/stratum_handler.c",
    166,
    "stratum_thread",
    14,
    339,
    60,
    v34);
  return 0;
}
