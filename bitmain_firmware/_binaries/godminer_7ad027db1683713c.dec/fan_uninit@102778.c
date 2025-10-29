int fan_uninit()
{
  dword_2E86B4[0] = 0;
  return pthread_join(dword_2E86D8, 0);
}
