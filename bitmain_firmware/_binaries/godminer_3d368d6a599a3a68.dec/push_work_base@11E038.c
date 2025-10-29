int __fastcall push_work_base(int a1, int a2)
{
  unsigned __int8 *v4; // r0
  int v5; // r1
  void (__fastcall *v6)(int, int, unsigned __int8 *, unsigned int *); // r6
  unsigned __int8 *v7; // r5
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v14; // r0
  unsigned int v15; // [sp+14h] [bp-101Ch] BYREF
  _BYTE v16[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 254) && !*(_BYTE *)(a1 + 253) )
    return 13;
  v4 = (unsigned __int8 *)calloc(1u, *(_DWORD *)(a1 + 840));
  v5 = a2;
  v6 = *(void (__fastcall **)(int, int, unsigned __int8 *, unsigned int *))(a1 + 64);
  v7 = v4;
  v15 = 0;
  v6(a1, v5, v4, &v15);
  v8 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 936));
  do
  {
    v9 = dev_ctrl(v8);
    v8 = (*(int (__fastcall **)(_DWORD))(v9 + 68))(*(_DWORD *)(a1 + 244));
  }
  while ( v8 < v15 );
  v10 = dev_ctrl(v8);
  v11 = (*(int (__fastcall **)(_DWORD, unsigned __int8 *, unsigned int))(v10 + 52))(*(_DWORD *)(a1 + 244), v7, v15);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 936));
  v12 = check_and_print_uart_debug_log(a1 + 1080, v15, v7, *(_DWORD *)(a1 + 248), 1);
  if ( v11 <= 0 )
  {
    V_LOCK(v12);
    v14 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_base.c",
      171,
      "push_work_base",
      14,
      453,
      100,
      v16);
  }
  else
  {
    ++*(_QWORD *)(a1 + 440);
  }
  free(v7);
  return 0;
}
