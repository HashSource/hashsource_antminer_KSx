int check_and_destroy_abnormal_runtime()
{
  int v0; // r7
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  int *v5; // r3
  _DWORD *v6; // r2
  int v7; // t1
  _DWORD s[256]; // [sp+18h] [bp-1404h] BYREF
  char v10[4100]; // [sp+418h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_2E02F8);
  if ( dword_2E0310 > 0 )
  {
    v1 = 0;
    v2 = (void **)&dword_2E0310;
    v0 = 0;
    do
    {
      v4 = v2[1];
      ++v2;
      v3 = v4;
      if ( v4[100] == v4[78] )
      {
        s[v0++] = v3;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain %d runtime check asic number error, destroy it!", *((_DWORD *)*v2 + 58));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_interface.c",
          171,
          "check_and_destroy_abnormal_runtime",
          34,
          113,
          80,
          v10);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "Sweep error string = J%d:2.", *((_DWORD *)*v2 + 58));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_interface.c",
          171,
          "check_and_destroy_abnormal_runtime",
          34,
          114,
          100,
          v10);
        (*((void (**)(void))*v2 + 5))();
        (*((void (**)(void))*v2 + 7))();
        free(*v2);
        *v2 = 0;
      }
      ++v1;
    }
    while ( dword_2E0310 > v1 );
    if ( v0 )
    {
      v5 = s;
      v6 = &unk_2E0314;
      do
      {
        v7 = *v5++;
        *v6++ = v7;
      }
      while ( v5 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_2E0310 = v0;
  return pthread_mutex_unlock(&stru_2E02F8);
}
