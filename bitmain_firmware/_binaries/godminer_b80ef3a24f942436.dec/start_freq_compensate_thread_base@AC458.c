int __fastcall start_freq_compensate_thread_base(void *arg)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v5; // r0
  _BYTE v6[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = pthread_create((pthread_t *)&dword_2F3B50, 0, (void *(*)(void *))check_working_freq, arg);
  if ( v1 )
  {
    V_LOCK(v1);
    v5 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_freq_compensate_thread_base",
      33,
      436,
      100,
      v6);
    return 5;
  }
  else
  {
    v2 = pthread_detach(dword_2F3B50);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_freq_compensate_thread_base",
      33,
      440,
      60,
      v6);
    return 0;
  }
}
