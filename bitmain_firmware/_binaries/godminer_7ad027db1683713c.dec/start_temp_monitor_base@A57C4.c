int __fastcall start_temp_monitor_base(void *arg)
{
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( pthread_create((pthread_t *)&dword_2D32D4, 0, (void *(*)(void *))check_working_temp, arg) )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "temp monitor create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_temp_monitor_base",
      23,
      452,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(dword_2D32D4);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start_temp_monitor");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_temp_monitor_base",
      23,
      456,
      60,
      v2);
    return 0;
  }
}
