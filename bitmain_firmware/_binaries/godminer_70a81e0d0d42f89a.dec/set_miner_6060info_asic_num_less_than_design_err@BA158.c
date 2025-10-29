int __fastcall set_miner_6060info_asic_num_less_than_design_err(int a1, char a2)
{
  int v2; // s0
  int v3; // s1
  int v5; // r8
  int v6; // r7
  int v7; // r3
  __int64 v8; // r0
  int v9; // r11
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v14; // r0
  struct timeval tv; // [sp+10h] [bp-1088h] BYREF
  char s[128]; // [sp+18h] [bp-1080h] BYREF
  struct timeval v17; // [sp+98h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK(a1);
    v5 = 0;
    v14 = logfmt_raw((int)&v17, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
      190,
      "set_miner_6060info_asic_num_less_than_design_err",
      48,
      150,
      40,
      &v17);
  }
  else
  {
    v5 = a1;
  }
  v6 = v5 + 43;
  pthread_mutex_lock(&miner_6060info_lock);
  v7 = (unsigned __int8)byte_2EBD88;
  byte_2EB9A8[16 * v5 + 688] = a2;
  if ( !v7 )
    sub_B94E4();
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( !byte_2EB9A8[16 * v6] )
    goto LABEL_11;
  difftime(tv.tv_sec, *(_DWORD *)&byte_2EB9A8[16 * v6 + 4]);
  v8 = sub_26EB6C(v2, v3);
  v9 = (unsigned __int64)(v8 - *(_QWORD *)&byte_2EB9A8[16 * v5 + 696]) >> 32;
  if ( v9 - ((_DWORD)v8 == *(_DWORD *)&byte_2EB9A8[16 * v5 + 696]) < 0 == __OFSUB__(
                                                                            v9,
                                                                            0,
                                                                            (_DWORD)v8 != *(_DWORD *)&byte_2EB9A8[16 * v5 + 696]) )
  {
    v10 = snprintf(s, 0x80u, "J%d:2", v5);
    V_LOCK(v10);
    v11 = logfmt_raw((int)&v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
      190,
      "set_miner_6060info_asic_num_less_than_design_err",
      48,
      153,
      100,
      &v17);
    v12 = (unsigned __int8)byte_2EB9A8[16 * v6];
    v17.tv_sec = 0;
    v17.tv_usec = 0;
    if ( v12 )
      goto LABEL_9;
LABEL_11:
    *(_DWORD *)&byte_2EB9A8[16 * v6 + 4] = 0;
    return pthread_mutex_unlock(&miner_6060info_lock);
  }
  v17.tv_sec = 0;
  v17.tv_usec = 0;
LABEL_9:
  gettimeofday(&v17, 0);
  *(_DWORD *)&byte_2EB9A8[16 * v6 + 4] = v17.tv_sec;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
