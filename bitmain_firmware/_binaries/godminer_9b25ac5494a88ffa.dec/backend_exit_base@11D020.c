int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 249) = 0;
  *(_BYTE *)(a1 + 250) = 0;
  *(_BYTE *)(a1 + 248) = 0;
  (*(void (**)(void))(a1 + 56))();
  v2 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 848);
  *(_BYTE *)(a1 + 876) = 1;
  *(_BYTE *)(a1 + 877) = 1;
  *(_BYTE *)(a1 + 878) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 852));
  queue_force_wakeup(*(_DWORD *)(a1 + 856));
  queue_force_wakeup(*(_DWORD *)(a1 + 844));
  pthread_join(*(_DWORD *)(a1 + 868), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 864), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 872), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 880));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 904));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 928));
  queue_free(*(_DWORD *)(a1 + 848));
  queue_free(*(_DWORD *)(a1 + 852));
  queue_free(*(_DWORD *)(a1 + 856));
  queue_free(*(_DWORD *)(a1 + 844));
  free(*(void **)(a1 + 480));
  free(*(void **)(a1 + 472));
  free(*(void **)(a1 + 476));
  free(*(void **)(a1 + 448));
  if ( *(int *)(a1 + 328) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(a1 + 520) + v4;
      v4 += 44;
      pthread_mutex_destroy((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 328) > v5 );
  }
  free(*(void **)(a1 + 520));
  if ( *(_DWORD *)(a1 + 840) )
    free(*(void **)(a1 + 508));
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 420) = -1;
  *(_QWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 860) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  v8 = dev_ctrl(v7);
  (*(void (__fastcall **)(_DWORD))(v8 + 28))(*(_DWORD *)(a1 + 240));
  return 0;
}
