ssize_t __fastcall sub_82008(int *a1, char *s)
{
  char *v3; // r7
  int v4; // r9
  signed int v5; // r6
  fd_set *p_tv_usec; // r3
  int v7; // r0
  int v8; // r12
  int v9; // lr
  int v10; // r12
  int v11; // r0
  ssize_t result; // r0
  _BOOL4 v13; // r3
  int *v14; // r0
  int *v15; // r10
  int v16; // r0
  int v17; // r0
  int v18; // r0
  struct timeval timeout; // [sp+18h] [bp-108Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1084h] BYREF
  _BYTE v21[4100]; // [sp+A0h] [bp-1004h] BYREF

  v3 = s;
  v4 = 0;
  v5 = strlen(s) + 1;
  while ( 1 )
  {
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&writefds.__fds_bits[31] );
    v7 = *a1;
    v8 = *a1 + 31;
    v9 = *a1 & 0x1F;
    if ( *a1 >= 0 )
      v8 = *a1;
    v10 = v8 >> 5;
    if ( v7 <= 0 )
      v9 = -(-v7 & 0x1F);
    writefds.__fds_bits[v10] |= 1 << v9;
    v11 = select(v7 + 1, 0, &writefds, 0, &timeout);
    if ( v11 <= 0 )
      break;
    result = send(*a1, v3, v5, 0);
    if ( result < 0 )
    {
      v14 = _errno_location();
      if ( *v14 != 11 )
      {
        v15 = v14;
        V_LOCK(v14);
        strerror(*v15);
        v16 = logfmt_raw((int)v21, 0x1000u);
        V_UNLOCK(v16);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/api_new.c",
                 158,
                 "send_api_result",
                 15,
                 2583,
                 100,
                 v21);
      }
      V_LOCK(v14);
      ++v4;
      v17 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v17);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/api_new.c",
                 158,
                 "send_api_result",
                 15,
                 2579,
                 20,
                 v21);
      v13 = v4 > 2;
      if ( v5 <= 0 )
        v13 = 1;
    }
    else
    {
      if ( !result )
        ++v4;
      v5 -= result;
      v3 += result;
      v13 = v4 > 2;
      if ( v5 <= 0 )
        v13 = 1;
    }
    if ( v13 )
      return result;
  }
  V_LOCK(v11);
  v18 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v18);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/api_new.c",
           158,
           "send_api_result",
           15,
           2569,
           100,
           v21);
}
