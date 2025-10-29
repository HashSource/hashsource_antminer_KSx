int fan_uninit()
{
  dword_309B74[0] = 0;
  return pthread_join(dword_309B98, 0);
}
