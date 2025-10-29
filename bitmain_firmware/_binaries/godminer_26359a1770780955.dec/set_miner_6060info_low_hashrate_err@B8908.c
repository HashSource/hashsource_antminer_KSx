int __fastcall set_miner_6060info_low_hashrate_err(int a1, int a2)
{
  int v3; // r6
  char *v4; // r8
  int v6; // r10
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char s[128]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK(a1);
    v3 = 0;
    v9 = logfmt_raw((int)&tv, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
      190,
      "set_miner_6060info_low_hashrate_err",
      35,
      97,
      40,
      &tv);
  }
  else
  {
    v3 = a1;
  }
  v4 = (char *)&stru_2E968C + 8 * v3 + 88;
  tv.tv_sec = 0;
  v4[24] = a2;
  tv.tv_usec = 0;
  if ( a2 )
  {
    gettimeofday(&tv, 0);
    v6 = (unsigned __int8)v4[544];
    a2 = (unsigned __int8)v4[24];
    *((_DWORD *)v4 + 7) = tv.tv_sec;
    if ( !v6 )
    {
      if ( a2 )
      {
        v7 = snprintf(s, 0x80u, "R%d:1", v3);
        V_LOCK(v7);
        v8 = logfmt_raw((int)&tv, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
          190,
          "set_miner_6060info_low_hashrate_err",
          35,
          99,
          100,
          &tv);
        LOBYTE(a2) = v4[24];
      }
    }
  }
  *((_BYTE *)&stru_2E968C + 8 * v3 + 632) = a2;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
