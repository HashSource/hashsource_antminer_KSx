int gpio_uninit()
{
  int result; // r0

  if ( dword_2E86DC )
  {
    dword_2E8714 = 0;
    pthread_join(dword_2E8718, 0);
    pthread_mutex_destroy(&stru_2E86E0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_2E86F8);
    dword_2E86DC = 0;
    return pthread_mutex_destroy(&stru_2E86FC);
  }
  return result;
}
