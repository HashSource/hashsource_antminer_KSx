int gpio_uninit()
{
  int result; // r0

  if ( dword_307704 )
  {
    dword_30773C = 0;
    pthread_join(dword_307740, 0);
    pthread_mutex_destroy(&stru_307708);
    delete_c_map((void **)dword_307720);
    dword_307704 = 0;
    return pthread_mutex_destroy(&stru_307724);
  }
  return result;
}
