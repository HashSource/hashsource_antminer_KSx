int start_dag_gen_engine()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
      180,
      "start_dag_gen_engine",
      20,
      326,
      100,
      v1);
    return 1;
  }
  else
  {
    pthread_create((pthread_t *)&dword_2D0980, 0, (void *(*)(void *))dag_gen_thread_func, 0);
    return 0;
  }
}
