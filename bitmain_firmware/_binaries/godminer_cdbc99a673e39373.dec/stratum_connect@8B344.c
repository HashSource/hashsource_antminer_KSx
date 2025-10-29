int __fastcall stratum_connect(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r7
  const char *owner; // r4
  int server_port_from_url; // r0
  int v5; // r8
  int v6; // r0
  int v8; // r0
  _BYTE *spins; // r0
  int kind; // r0
  int v11; // r0
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int *v16; // r0
  int v17; // r0
  struct hostent *v18; // r0
  char *v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned __int16 v25; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[8]; // [sp+40h] [bp-1124h] BYREF
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  _BYTE v29[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  owner = (const char *)a1[1].__owner;
  server_port_from_url = strncasecmp(owner, "stratum+tcp://", 0xEu);
  if ( !server_port_from_url
    && (server_port_from_url = get_server_port_from_url(owner + 14, cp, &v25), (v5 = server_port_from_url) != 0) )
  {
    V_LOCK(server_port_from_url);
    v8 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_connect",
      15,
      120,
      20,
      v29);
    spins = (_BYTE *)a1[1].__spins;
    if ( !spins )
    {
      spins = calloc(0x4000u, 1u);
      a1[1].__nusers = 0x4000;
      a1[1].__spins = (int)spins;
    }
    *spins = 0;
    if ( a1[1].__kind == -1 )
    {
      v14 = socket(2, 1, 6);
      a1[1].__kind = v14;
      if ( v14 == -1 )
      {
        V_LOCK(-1);
        v20 = logfmt_raw((int)v29, 0x1000u);
        v5 = 0;
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          135,
          100,
          v29);
        goto LABEL_4;
      }
      optval[0] = 1;
      v15 = setsockopt(v14, 1, 2, optval, 4u);
      if ( v15 )
      {
        V_LOCK(v15);
        v16 = _errno_location();
        strerror(*v16);
        v17 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          145,
          100,
          v29);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        v5 = 0;
        v21 = close(a1[1].__kind);
        a1[1].__kind = -1;
        V_LOCK(v21);
        v22 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          160,
          100,
          v29);
        goto LABEL_4;
      }
      v18 = gethostbyname(cp);
      if ( !v18 )
      {
        v5 = 0;
        v23 = close(a1[1].__kind);
        a1[1].__kind = -1;
        V_LOCK(v23);
        v24 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          169,
          20,
          v29);
        goto LABEL_4;
      }
      v19 = *v18->h_addr_list;
      if ( v19 )
        *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v19;
    }
    else
    {
      *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
    }
    addr.sa_family = 2;
    kind = a1[1].__kind;
    *(_WORD *)addr.sa_data = __rev16(v25);
    v11 = connect(kind, &addr, 0x10u);
    if ( v11 >= 0 )
    {
      keep_sockalive(a1[1].__kind);
    }
    else
    {
      if ( dword_2D44BC <= 3 )
      {
        V_LOCK(v11);
        v12 = _errno_location();
        strerror(*v12);
        v13 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/stratum_handler.c",
          161,
          "stratum_connect",
          15,
          197,
          100,
          v29);
      }
      v5 = 0;
      close(a1[1].__kind);
      a1[1].__kind = -1;
    }
  }
  else
  {
    V_LOCK(server_port_from_url);
    v5 = 0;
    V_STR((int)optval, "pool");
    v6 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_connect",
      15,
      117,
      100,
      v29);
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return v5;
}
