int __fastcall set_miner_6060info_status_high_temp_err(char a1)
{
  int v1; // s0
  int v2; // s1
  __int64 v4; // r0
  int v5; // r0
  struct timeval tv; // [sp+10h] [bp-108Ch] BYREF
  int v8; // [sp+18h] [bp-1084h]
  struct timeval v9; // [sp+98h] [bp-1004h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_2EB9A8[0] = a1;
  if ( !byte_2EBD88 )
    sub_B94E4();
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( !byte_2EB9A8[0] )
    goto LABEL_9;
  difftime(tv.tv_sec, dword_2EB9AC);
  v4 = sub_26EB6C(v1, v2);
  if ( (int)(((unsigned __int64)(v4 - *(_QWORD *)&dword_2EB9B0) >> 32) - ((_DWORD)v4 == dword_2EB9B0)) < 0 == __OFSUB__((unsigned __int64)(v4 - *(_QWORD *)&dword_2EB9B0) >> 32, 0, (_DWORD)v4 != dword_2EB9B0) )
  {
    v8 = 3226192;
    V_LOCK(v4);
    v5 = logfmt_raw((int)&v9, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
      190,
      "set_miner_6060info_status_high_temp_err",
      39,
      103,
      100,
      &v9);
    v9.tv_sec = 0;
    v9.tv_usec = 0;
    if ( byte_2EB9A8[0] )
      goto LABEL_7;
LABEL_9:
    dword_2EB9AC = 0;
    return pthread_mutex_unlock(&miner_6060info_lock);
  }
  v9.tv_sec = 0;
  v9.tv_usec = 0;
LABEL_7:
  gettimeofday(&v9, 0);
  dword_2EB9AC = v9.tv_sec;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
