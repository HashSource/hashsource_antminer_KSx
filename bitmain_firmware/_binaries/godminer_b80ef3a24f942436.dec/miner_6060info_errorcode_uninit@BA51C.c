int miner_6060info_errorcode_uninit()
{
  _DWORD *v0; // r0
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  pthread_mutex_lock(&stru_2F3EB8);
  if ( byte_2F42C8 )
  {
    byte_2F42C8 = 0;
    usleep(0x3E8u);
    v0 = (_DWORD *)dword_2F42CC;
    if ( dword_2F42CC )
    {
      if ( *(_DWORD *)(dword_2F42CC + 4) != -1 )
      {
        v1 = (unsigned int *)(dword_2F42CC + 4);
        __dmb(0xBu);
        do
        {
          v2 = __ldrex(v1);
          v3 = v2 - 1;
        }
        while ( __strex(v3, v1) );
        if ( !v3 )
          json_delete(v0);
      }
    }
  }
  return pthread_mutex_unlock(&stru_2F3EB8);
}
