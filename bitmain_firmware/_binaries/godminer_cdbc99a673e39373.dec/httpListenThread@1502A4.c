int httpListenThread()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v12; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  _BYTE v14[4100]; // [sp+40h] [bp-1004h] BYREF

  do
  {
    v0 = socket(2, 1, 6);
    listen_sockfd = v0;
    if ( v0 < 0 )
    {
      V_LOCK(v0);
      v8 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "httpListenThread",
        16,
        198,
        80,
        v14);
      v2 = sleep(0xAu);
    }
    else
    {
      memset(&v12.sa_data[2], 0, 12);
      *(_DWORD *)&v12.sa_family = -1407778814;
      v1 = bind(v0, &v12, 0x10u);
      if ( v1 < 0 )
      {
        V_LOCK(v1);
        v9 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/common/general/http.c",
          165,
          "httpListenThread",
          16,
          211,
          80,
          v14);
      }
      else
      {
        v2 = listen(listen_sockfd, 100);
        if ( v2 >= 0 )
          break;
        V_LOCK(v2);
        v10 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/common/general/http.c",
          165,
          "httpListenThread",
          16,
          222,
          80,
          v14);
      }
      close(listen_sockfd);
      listen_sockfd = -1;
      v2 = sleep(0xAu);
    }
  }
  while ( !ExitServer );
  V_LOCK(v2);
  v3 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/http.c",
    165,
    "httpListenThread",
    16,
    235,
    60,
    v14);
  if ( !ExitServer )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v4 = accept(listen_sockfd, &addr, &addr_len);
        v5 = v4;
        if ( v4 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_10;
      }
      if ( ExitServer )
        break;
      V_LOCK(v4);
      v6 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "httpListenThread",
        16,
        257,
        20,
        v14);
      statusServiceThread(v5);
      if ( ExitServer )
        goto LABEL_10;
    }
    close(v4);
  }
LABEL_10:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
