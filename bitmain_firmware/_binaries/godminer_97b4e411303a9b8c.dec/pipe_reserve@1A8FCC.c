int __fastcall pipe_reserve(pthread_mutex_t *mutex, int a2)
{
  int lock; // r5
  pthread_mutex_t *v3; // r6
  pthread_mutex_t *v4; // r7
  unsigned int v6; // r5
  pthread_mutex_t *v7; // r0
  unsigned int v8; // r3
  unsigned int spins; // r1
  int kind; // r2
  bool v11; // cf
  unsigned int v12; // r3
  _DWORD v14[7]; // [sp+0h] [bp-24h] BYREF
  char v15[5]; // [sp+1Fh] [bp-5h] BYREF

  v3 = (pthread_mutex_t *)((char *)mutex + 60);
  lock = mutex->__lock;
  v4 = (pthread_mutex_t *)((char *)mutex + 36);
  v15[0] = 1;
  v6 = lock * a2;
  v7 = (pthread_mutex_t *)((char *)mutex + 60);
  if ( !v6 )
    v6 = 32;
  pthread_mutex_lock(v7);
  pthread_mutex_lock(v4);
  v8 = mutex[1].__lock;
  spins = mutex->__spins;
  kind = mutex->__kind;
  v11 = spins >= v8;
  if ( spins < v8 )
  {
    v12 = v8 - spins;
  }
  else
  {
    kind = v8 - kind;
    v12 = mutex->__nusers - spins;
  }
  if ( v11 )
    v12 += kind;
  if ( v6 > v12 - mutex->__lock )
    sub_1A82E8(v14, &mutex->__lock, v6, v15);
  pthread_mutex_unlock(v4);
  return pthread_mutex_unlock(v3);
}
