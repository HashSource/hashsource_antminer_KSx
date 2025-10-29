int __fastcall queue_dequeue_for(int a1, char *a2, unsigned int a3, int *a4)
{
  pthread_mutex_t *v4; // r7
  int v9; // r12
  int v10; // lr
  int v11; // r4
  struct timespec tp; // [sp+18h] [bp-1008h] BYREF
  char v14[4096]; // [sp+20h] [bp-1000h] BYREF

  v4 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &tp);
  v9 = a4[1] + tp.tv_nsec;
  v10 = *a4;
  v11 = 0;
  tp.tv_sec += v9 / 1000000000 + v10;
  tp.tv_nsec = v9 % 1000000000;
  while ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v11 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), v4, &tp);
    if ( v11 == 110 )
      goto LABEL_7;
  }
  if ( pipe_pop(*(int **)(a1 + 8), a2, a3) != a3 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s, unkown error", "queue_dequeue_for");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/thread_safe_queue.c",
      178,
      "queue_dequeue_for",
      17,
      114,
      100,
      v14);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_7:
  pthread_mutex_unlock(v4);
  return v11;
}
