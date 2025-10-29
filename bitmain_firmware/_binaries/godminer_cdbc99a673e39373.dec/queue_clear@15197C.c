int __fastcall queue_clear(int a1)
{
  pthread_mutex_t *v1; // r6
  size_t v3; // r0
  void *v4; // r5
  int v5; // r3
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v3 = pipe_elem_size(*(_DWORD *)a1);
  v4 = calloc(1u, v3);
  if ( *(int *)(a1 + 12) > 0 )
  {
    do
    {
      if ( pipe_pop(*(_DWORD *)(a1 + 8), v4) != 1 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "%s, unkown error", "queue_clear");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/common/general/thread_safe_queue.c",
          178,
          "queue_clear",
          11,
          129,
          100,
          v7);
        exit(-1);
      }
      v5 = *(_DWORD *)(a1 + 12) - 1;
      *(_DWORD *)(a1 + 12) = v5;
    }
    while ( v5 > 0 );
  }
  free(v4);
  return pthread_mutex_unlock(v1);
}
