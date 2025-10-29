int fan_uninit()
{
  dword_31136C[0] = 0;
  return pthread_join(dword_311390, 0);
}
