int fan_uninit()
{
  dword_30BB94[0] = 0;
  return pthread_join(dword_30BBB8, 0);
}
