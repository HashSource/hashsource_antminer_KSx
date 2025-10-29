int gpio_uninit()
{
  int result; // r0

  if ( dword_2E9BD4 )
  {
    dword_2E9C0C = 0;
    pthread_join(dword_2E9C10, 0);
    pthread_mutex_destroy(&stru_2E9BD8);
    delete_c_map(dword_2E9BF0);
    dword_2E9BD4 = 0;
    return pthread_mutex_destroy(&stru_2E9BF4);
  }
  return result;
}
