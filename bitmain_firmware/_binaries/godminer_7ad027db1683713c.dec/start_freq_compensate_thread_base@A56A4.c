int __fastcall start_freq_compensate_thread_base(void *arg)
{
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( pthread_create((pthread_t *)&dword_2D32D0, 0, (void *(*)(void *))check_working_freq, arg) )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "freq_compensate_thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_freq_compensate_thread_base",
      33,
      426,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(dword_2D32D0);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start freq_compensate_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_freq_compensate_thread_base",
      33,
      430,
      60,
      v2);
    return 0;
  }
}
