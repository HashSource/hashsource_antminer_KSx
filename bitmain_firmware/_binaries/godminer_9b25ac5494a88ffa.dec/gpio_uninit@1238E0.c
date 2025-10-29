int gpio_uninit()
{
  int result; // r0

  if ( dword_30A734 )
  {
    dword_30A76C = 0;
    pthread_join(dword_30A770, 0);
    pthread_mutex_destroy(&stru_30A738);
    delete_c_map((void **)dword_30A750);
    dword_30A734 = 0;
    return pthread_mutex_destroy(&stru_30A754);
  }
  return result;
}
