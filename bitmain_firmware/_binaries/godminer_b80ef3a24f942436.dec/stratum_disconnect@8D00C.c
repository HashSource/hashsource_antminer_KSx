int __fastcall stratum_disconnect(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r6
  int kind; // r0
  int v4; // r0
  _BYTE *spins; // r3
  int v6; // r0
  _BYTE v8[28]; // [sp+28h] [bp-1020h] BYREF
  _BYTE v9[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  kind = a1[1].__kind;
  if ( kind != -1 )
  {
    shutdown(kind, 2);
    v4 = close(a1[1].__kind);
    spins = (_BYTE *)a1[1].__spins;
    a1[1].__kind = -1;
    *spins = 0;
    V_LOCK(v4);
    V_INT((int)v8, "poolno", a1->__lock);
    v6 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_disconnect",
      18,
      227,
      20,
      v9);
  }
  return pthread_mutex_unlock(v1);
}
