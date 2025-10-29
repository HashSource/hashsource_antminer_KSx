int gpio_uninit()
{
  int result; // r0

  if ( dword_311F2C )
  {
    dword_311F64 = 0;
    pthread_join(dword_311F68, 0);
    pthread_mutex_destroy(&stru_311F30);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_311F48);
    dword_311F2C = 0;
    return pthread_mutex_destroy(&stru_311F4C);
  }
  return result;
}
