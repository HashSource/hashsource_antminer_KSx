int check_and_destroy_abnormal_runtime()
{
  int v0; // r7
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int *v9; // r3
  _DWORD *v10; // r2
  int v11; // t1
  _DWORD s[256]; // [sp+18h] [bp-1404h] BYREF
  _DWORD v14[1025]; // [sp+418h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_2E17F0);
  if ( dword_2E1808 > 0 )
  {
    v1 = 0;
    v2 = (void **)&dword_2E1808;
    v0 = 0;
    do
    {
      v4 = v2[1];
      ++v2;
      v3 = v4;
      v5 = &v14[v0];
      if ( v4[100] == v4[78] )
      {
        *(v5 - 256) = v3;
        ++v0;
      }
      else
      {
        V_LOCK(v5);
        v6 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v6);
        v7 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/backend_interface.c",
               171,
               "check_and_destroy_abnormal_runtime",
               34,
               113,
               80,
               v14);
        V_LOCK(v7);
        v8 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_interface.c",
          171,
          "check_and_destroy_abnormal_runtime",
          34,
          114,
          100,
          v14);
        (*((void (**)(void))*v2 + 5))();
        (*((void (**)(void))*v2 + 7))();
        free(*v2);
        *v2 = 0;
      }
      ++v1;
    }
    while ( dword_2E1808 > v1 );
    if ( v0 )
    {
      v9 = s;
      v10 = &unk_2E180C;
      do
      {
        v11 = *v9++;
        *v10++ = v11;
      }
      while ( v9 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_2E1808 = v0;
  return pthread_mutex_unlock(&stru_2E17F0);
}
