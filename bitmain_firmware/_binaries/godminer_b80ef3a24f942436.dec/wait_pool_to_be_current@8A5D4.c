int __fastcall wait_pool_to_be_current(int a1)
{
  pthread_mutex_lock(&mutex);
  while ( dword_2F2D34 != a1 )
    pthread_cond_wait(&cond, &mutex);
  return pthread_mutex_unlock(&mutex);
}
