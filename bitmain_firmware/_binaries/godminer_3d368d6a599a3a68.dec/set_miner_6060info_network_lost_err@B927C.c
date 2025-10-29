int __fastcall set_miner_6060info_network_lost_err(int a1)
{
  int v3; // r0
  int v4; // r0
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_2E9884 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    v3 = gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_2E9884;
    dword_2E9888 = tv.tv_sec;
    if ( !byte_2E9A8C )
    {
      if ( byte_2E9884 )
      {
        V_LOCK(v3);
        v4 = logfmt_raw((int)&tv, 0x1000u);
        V_UNLOCK(v4);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
          190,
          "set_miner_6060info_network_lost_err",
          35,
          117,
          100,
          &tv);
        LOBYTE(a1) = byte_2E9884;
      }
    }
  }
  byte_2E9A8C = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
