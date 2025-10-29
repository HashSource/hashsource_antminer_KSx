int fan_uninit()
{
  dword_306B44[0] = 0;
  return pthread_join(dword_306B68, 0);
}
