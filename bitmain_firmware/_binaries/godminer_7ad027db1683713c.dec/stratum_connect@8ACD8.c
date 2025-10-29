bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  _BYTE *v6; // r0
  int v7; // r0
  int *v8; // r0
  char *v9; // r0
  int v10; // r0
  int *v11; // r0
  char *v12; // r0
  struct hostent *v13; // r0
  char *v14; // r3
  unsigned __int16 v15; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  __int64 optval; // [sp+40h] [bp-1124h] BYREF
  int v18; // [sp+48h] [bp-111Ch]
  int v19; // [sp+4Ch] [bp-1118h]
  int v20; // [sp+50h] [bp-1114h]
  int v21; // [sp+54h] [bp-1110h]
  int v22; // [sp+58h] [bp-110Ch]
  int v23; // [sp+5Ch] [bp-1108h]
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  char v25[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 48);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 32);
  if ( !strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    && (server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v15)) )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "url: %s, server: %s, port: %d", *(_DWORD *)(a1 + 32), cp, v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_connect",
      15,
      120,
      20,
      v25);
    v6 = *(_BYTE **)(a1 + 44);
    if ( !v6 )
    {
      v6 = calloc(0x4000u, 1u);
      *(_DWORD *)(a1 + 40) = 0x4000;
      *(_DWORD *)(a1 + 44) = v6;
    }
    *v6 = 0;
    if ( *(_DWORD *)(a1 + 36) == -1 )
    {
      v10 = socket(2, 1, 6);
      *(_DWORD *)(a1 + 36) = v10;
      if ( v10 == -1 )
      {
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "stratum socket creat failed");
        server_port_from_url = 0;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          135,
          100,
          v25);
        goto LABEL_4;
      }
      LODWORD(optval) = 1;
      if ( setsockopt(v10, 1, 2, &optval, 4u) )
      {
        V_LOCK();
        v11 = _errno_location();
        v12 = strerror(*v11);
        logfmt_raw(v25, 0x1000u, 0, "API setsockopt SO_REUSEADDR failed (ignored): %s", v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          145,
          100,
          v25);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 36));
        *(_DWORD *)(a1 + 36) = -1;
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "poolno %d res_init error", *(_DWORD *)a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          160,
          100,
          v25);
        goto LABEL_4;
      }
      v13 = gethostbyname(cp);
      if ( !v13 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 36));
        *(_DWORD *)(a1 + 36) = -1;
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "ip address config error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          169,
          20,
          v25);
        goto LABEL_4;
      }
      v14 = *v13->h_addr_list;
      if ( v14 )
        *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v14;
    }
    else
    {
      *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
    }
    addr.sa_family = 2;
    v7 = *(_DWORD *)(a1 + 36);
    *(_WORD *)addr.sa_data = __rev16(v15);
    if ( connect(v7, &addr, 0x10u) >= 0 )
    {
      keep_sockalive(*(_DWORD *)(a1 + 36));
    }
    else
    {
      if ( dword_2D2FCC <= 3 )
      {
        V_LOCK();
        v8 = _errno_location();
        v9 = strerror(*v8);
        logfmt_raw(v25, 0x1000u, 0, "Error connecting to server, error code: %s", v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          197,
          100,
          v25);
      }
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
    }
  }
  else
  {
    V_LOCK();
    server_port_from_url = 0;
    V_STR(&optval, "pool", *(const char **)(a1 + 32));
    logfmt_raw(v25, 0x1000u, 0, v23, optval, v18, v19, v20, v21, v22, v23, "prase url err!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_connect",
      15,
      117,
      100,
      v25);
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
