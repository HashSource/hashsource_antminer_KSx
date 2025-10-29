int __fastcall set_miner_6060info_status_low_temp_err(int a1)
{
  int v3; // r0
  int v4; // r0
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_2F3ED8 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    v3 = gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_2F3ED8;
    dword_2F3EDC = tv.tv_sec;
    if ( !byte_2F40E0 )
    {
      if ( byte_2F3ED8 )
      {
        V_LOCK(v3);
        v4 = logfmt_raw((int)&tv, 0x1000u);
        V_UNLOCK(v4);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          185,
          "set_miner_6060info_status_low_temp_err",
          38,
          92,
          100,
          &tv);
        LOBYTE(a1) = byte_2F3ED8;
      }
    }
  }
  byte_2F40E0 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
