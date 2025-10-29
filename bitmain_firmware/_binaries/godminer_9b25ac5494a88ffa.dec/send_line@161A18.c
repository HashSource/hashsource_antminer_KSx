int __fastcall send_line(int a1, char *s)
{
  size_t v4; // r0
  signed int v5; // r7
  int v6; // r8
  int v7; // r9
  int v8; // r8
  int v9; // r3
  fd_set *p_tv_usec; // r3
  ssize_t v11; // r0
  int v13; // [sp+10h] [bp-1014h]
  struct timeval timeout; // [sp+18h] [bp-100Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw((char *)&writefds, 0x1000u, 0, "socket invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/socket.c",
      172,
      "send_line",
      9,
      12,
      20,
      (const char *)&writefds);
    return 0;
  }
  else
  {
    v4 = strlen(s);
    v5 = v4;
    if ( s[v4 - 1] == 10 )
    {
      if ( !v4 )
        return 1;
    }
    else
    {
      v5 = v4 + 1;
      s[v4] = 10;
      s[v4 + 1] = 0;
    }
    v6 = a1 + 31;
    v7 = 0;
    if ( a1 >= 0 )
      v6 = a1;
    v8 = v6 >> 5;
    LOBYTE(v9) = a1 & 0x1F;
    if ( a1 <= 0 )
      v9 = -(-a1 & 0x1F);
    v13 = 1 << v9;
    while ( 1 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      p_tv_usec = (fd_set *)&timeout.tv_usec;
      do
      {
        p_tv_usec->__fds_bits[1] = 0;
        p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
      }
      while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
      writefds.__fds_bits[v8] |= v13;
      if ( select(a1 + 1, 0, &writefds, 0, &timeout) <= 0 )
        break;
      v11 = send(a1, &s[v7], v5, 0x4000);
      if ( v11 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 0;
      }
      else
      {
        v5 -= v11;
        v7 += v11;
        if ( v5 <= 0 )
          return 1;
      }
    }
    return 0;
  }
}
