int check_and_destroy_abnormal_runtime()
{
  int v0; // r6
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  _DWORD *v5; // r0
  int v6; // r0
  int *v7; // r3
  _DWORD *v8; // r2
  int v9; // t1
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  _DWORD v12[1025]; // [sp+410h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_2F67F0);
  if ( dword_2F6808 > 0 )
  {
    v1 = 0;
    v2 = (void **)&dword_2F6808;
    v0 = 0;
    do
    {
      v4 = v2[1];
      ++v2;
      v3 = v4;
      v5 = &v12[v0];
      if ( v4[106] == v4[83] )
      {
        *(v5 - 256) = v3;
        ++v0;
      }
      else
      {
        V_LOCK(v5);
        v6 = logfmt_raw((int)v12, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_interface.c",
          176,
          "check_and_destroy_abnormal_runtime",
          34,
          116,
          80,
          v12);
        set_miner_6060info_asic_num_less_than_design_err(*((_DWORD *)*v2 + 62), 1);
        (*((void (**)(void))*v2 + 5))();
        (*((void (**)(void))*v2 + 7))();
        free(*v2);
        *v2 = 0;
      }
      ++v1;
    }
    while ( dword_2F6808 > v1 );
    if ( v0 )
    {
      v7 = s;
      v8 = &unk_2F680C;
      do
      {
        v9 = *v7++;
        *v8++ = v9;
      }
      while ( v7 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_2F6808 = v0;
  return pthread_mutex_unlock(&stru_2F67F0);
}
