int gpio_uninit()
{
  int result; // r0

  if ( dword_30DA6C )
  {
    dword_30DAA4 = 0;
    pthread_join(dword_30DAA8, 0);
    pthread_mutex_destroy(&stru_30DA70);
    delete_c_map((void **)dword_30DA88);
    dword_30DA6C = 0;
    return pthread_mutex_destroy(&stru_30DA8C);
  }
  return result;
}
