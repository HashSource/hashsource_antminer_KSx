int httpListenThread()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r10
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v6; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  char v8[4100]; // [sp+40h] [bp-1004h] BYREF

  do
  {
    v0 = socket(2, 1, 6);
    listen_sockfd = v0;
    if ( v0 < 0 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "socket creating failed, try again after 10s...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "httpListenThread",
        16,
        198,
        80,
        v8);
      sleep(0xAu);
    }
    else
    {
      *(_QWORD *)&v6.sa_family = 2887188482LL;
      *(_QWORD *)&v6.sa_data[6] = 0;
      if ( bind(v0, &v6, 0x10u) < 0 )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "http port bind failed! try again after 10s...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/common/general/http.c",
          165,
          "httpListenThread",
          16,
          211,
          80,
          v8);
      }
      else
      {
        if ( listen(listen_sockfd, 100) >= 0 )
          break;
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "http listen failed! try again after 10s...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/common/general/http.c",
          165,
          "httpListenThread",
          16,
          222,
          80,
          v8);
      }
      close(listen_sockfd);
      listen_sockfd = -1;
      sleep(0xAu);
    }
  }
  while ( !ExitServer );
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "start listen on 6060 ...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/http.c",
    165,
    "httpListenThread",
    16,
    235,
    60,
    v8);
  if ( !ExitServer )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(listen_sockfd, &addr, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_10;
      }
      v3 = (unsigned __int8)ExitServer;
      if ( ExitServer )
        break;
      V_LOCK();
      logfmt_raw(v8, 0x1000u, v3, "one client connected sock=%d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "httpListenThread",
        16,
        257,
        20,
        v8);
      statusServiceThread(v2);
      if ( ExitServer )
        goto LABEL_10;
    }
    close(v1);
  }
LABEL_10:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
