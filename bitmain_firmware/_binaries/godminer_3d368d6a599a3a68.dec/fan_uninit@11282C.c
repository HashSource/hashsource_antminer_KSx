int fan_uninit()
{
  dword_306B4C[0] = 0;
  return pthread_join(dword_306B70, 0);
}
