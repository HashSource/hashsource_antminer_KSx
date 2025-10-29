int __fastcall json_object_seed(int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // r0
  int v4; // r5
  ssize_t v5; // r7
  int v6; // r5
  struct timeval v7; // [sp+0h] [bp-Ch] BYREF

  if ( !hashtable_seed )
  {
    do
      v1 = __ldrex((unsigned __int8 *)&unk_2E9014);
    while ( __strex(1u, (unsigned __int8 *)&unk_2E9014) );
    if ( v1 )
    {
      do
      {
        result = sched_yield();
        v2 = hashtable_seed;
        __dmb(0xBu);
      }
      while ( !v2 );
    }
    else
    {
      if ( !result )
      {
        v3 = open64("/dev/urandom", 0);
        v4 = v3;
        if ( v3 == -1 || (v5 = read(v3, &v7, 4u), close(v4), v5 != 4) )
        {
          gettimeofday(&v7, 0);
          v6 = v7.tv_usec ^ v7.tv_sec;
          result = getpid() ^ v6;
        }
        else
        {
          result = HIBYTE(v7.tv_sec) | ((BYTE2(v7.tv_sec) | ((BYTE1(v7.tv_sec) | (LOBYTE(v7.tv_sec) << 8)) << 8)) << 8);
        }
        if ( !result )
          result = 1;
      }
      __dmb(0xBu);
      hashtable_seed = result;
    }
  }
  return result;
}
