int fan_uninit()
{
  dword_2E9BAC[0] = 0;
  return pthread_join(dword_2E9BD0, 0);
}
