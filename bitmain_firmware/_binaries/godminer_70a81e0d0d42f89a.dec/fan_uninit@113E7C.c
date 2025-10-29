int fan_uninit()
{
  dword_30CEA4[0] = 0;
  return pthread_join(dword_30CEC8, 0);
}
