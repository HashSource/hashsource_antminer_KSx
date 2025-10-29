int reload_pool()
{
  int result; // r0
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( newthread )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "config too fast, pool is changing, please wait");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/pool.c",
             150,
             "reload_pool",
             11,
             903,
             100,
             v1);
  }
  else
  {
    result = pthread_create(&newthread, 0, (void *(*)(void *))sub_89744, 0);
    if ( result )
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Failed to create pool_change_thread");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/pool.c",
               150,
               "reload_pool",
               11,
               901,
               100,
               v1);
    }
  }
  return result;
}
