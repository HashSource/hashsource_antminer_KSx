int __fastcall push_work_base(int a1, int a2)
{
  void *v4; // r0
  int v5; // r1
  void (__fastcall *v6)(int, int, void *, unsigned int *); // r5
  void *v7; // r6
  unsigned int v8; // r0
  int (**v9)(); // r0
  int (**v10)(); // r0
  int v11; // r5
  unsigned int v13; // [sp+14h] [bp-101Ch] BYREF
  char v14[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 238) && !*(_BYTE *)(a1 + 237) )
    return 13;
  v4 = calloc(1u, *(_DWORD *)(a1 + 816));
  v5 = a2;
  v6 = *(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 64);
  v7 = v4;
  v13 = 0;
  v6(a1, v5, v4, &v13);
  v8 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 912));
  do
  {
    v9 = dev_ctrl(v8);
    v8 = ((int (__fastcall *)(_DWORD))v9[17])(*(_DWORD *)(a1 + 228));
  }
  while ( v8 < v13 );
  v10 = dev_ctrl(v8);
  v11 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v10[13])(*(_DWORD *)(a1 + 228), v7, v13);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 912));
  if ( v11 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 228), v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_base.c",
      166,
      "push_work_base",
      14,
      378,
      100,
      v14);
  }
  else
  {
    ++*(_QWORD *)(a1 + 416);
  }
  free(v7);
  return 0;
}
