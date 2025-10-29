int gpio_uninit()
{
  int result; // r0

  if ( dword_30C754 )
  {
    dword_30C78C = 0;
    pthread_join(dword_30C790, 0);
    pthread_mutex_destroy(&stru_30C758);
    delete_c_map((void **)dword_30C770);
    dword_30C754 = 0;
    return pthread_mutex_destroy(&stru_30C774);
  }
  return result;
}
