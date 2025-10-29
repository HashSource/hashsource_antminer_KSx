int __fastcall socket_full(int a1, __time_t a2)
{
  int v2; // r4
  fd_set *p_tv_usec; // r3
  int v4; // r3
  char *v5; // r3
  int v6; // r1
  struct timeval timeout; // [sp+10h] [bp-108Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-1084h] BYREF
  char v10[4100]; // [sp+98h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "socket invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/socket.c",
      172,
      "socket_full",
      11,
      53,
      20,
      v10);
    return 0;
  }
  else
  {
    v2 = a1;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
    v4 = a1 + 31;
    timeout.tv_sec = a2;
    if ( a1 >= 0 )
      v4 = a1;
    LOBYTE(a1) = a1 & 0x1F;
    v5 = &v10[4 * (v4 >> 5)];
    if ( v2 <= 0 )
      a1 = -(-v2 & 0x1F);
    v6 = *((_DWORD *)v5 - 32);
    timeout.tv_usec = 0;
    *((_DWORD *)v5 - 32) = v6 | (1 << a1);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "socket_full before select");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/socket.c",
      172,
      "socket_full",
      11,
      61,
      20,
      v10,
      timeout.tv_sec);
    if ( select(v2 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "socket_full select false");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/socket.c",
        172,
        "socket_full",
        11,
        66,
        20,
        v10);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "socket_full select true");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/socket.c",
        172,
        "socket_full",
        11,
        63,
        20,
        v10);
      return 1;
    }
  }
}
