int __fastcall reload_pool(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( newthread )
  {
    V_LOCK(a1);
    v2 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v2);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/pool.c",
             150,
             "reload_pool",
             11,
             909,
             100,
             v4);
  }
  else
  {
    result = pthread_create(&newthread, 0, (void *(*)(void *))sub_89DB0, 0);
    if ( result )
    {
      V_LOCK(result);
      v3 = logfmt_raw((int)v4, 0x1000u);
      V_UNLOCK(v3);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/pool.c",
               150,
               "reload_pool",
               11,
               907,
               100,
               v4);
    }
  }
  return result;
}
