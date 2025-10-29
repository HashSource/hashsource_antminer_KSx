int miner_6060info_errorcode_uninit()
{
  _DWORD *v0; // r0
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  pthread_mutex_lock(&stru_2EBD8C);
  if ( byte_2EBDBC )
  {
    byte_2EBDBC = 0;
    usleep(0x3E8u);
    v0 = (_DWORD *)dword_2EBDC0;
    if ( dword_2EBDC0 )
    {
      if ( *(_DWORD *)(dword_2EBDC0 + 4) != -1 )
      {
        v1 = (unsigned int *)(dword_2EBDC0 + 4);
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
  return pthread_mutex_unlock(&stru_2EBD8C);
}
