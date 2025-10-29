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
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/pool.c",
             155,
             "reload_pool",
             11,
             956,
             100,
             v4);
  }
  else
  {
    result = pthread_create(&newthread, 0, (void *(*)(void *))sub_8CE6C, 0);
    if ( result )
    {
      V_LOCK(result);
      v3 = logfmt_raw((int)v4, 0x1000u);
      V_UNLOCK(v3);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/pool.c",
               155,
               "reload_pool",
               11,
               954,
               100,
               v4);
    }
  }
  return result;
}
