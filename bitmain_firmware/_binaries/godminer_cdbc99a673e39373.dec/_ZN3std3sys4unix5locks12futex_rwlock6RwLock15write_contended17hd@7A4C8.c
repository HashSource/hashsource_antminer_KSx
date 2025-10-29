int __fastcall std::sys::unix::locks::futex_rwlock::RwLock::write_contended(unsigned int *a1)
{
  int v2; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r11
  unsigned int v6; // r1
  unsigned int v7; // r6
  int v8; // r1
  unsigned int v9; // r2
  int result; // r0

  v2 = *a1;
  if ( v2 >= 0 && (v2 & 0x3FFFFFFF) != 0 )
  {
    v3 = -99;
    do
    {
      __yield();
      v2 = *a1;
      if ( (*a1 & 0x80000000) != 0 )
        break;
      if ( (v2 & 0x3FFFFFFF) == 0 )
        break;
      v4 = v3++ == 0;
    }
    while ( !v4 );
  }
  v5 = 0x3FFFFFFF;
  while ( (v2 & 0x3FFFFFFF) != 0 )
  {
    if ( v2 <= -1 )
    {
LABEL_14:
      v7 = a1[1];
      __dmb(0xBu);
      v2 = *a1;
      v5 = -1073741825;
      if ( (int)*a1 <= -1 && (v2 & 0x3FFFFFFF) != 0 )
      {
        while ( a1[1] == v7 && syscall(240, a1 + 1, 137, v7, 0, 0, -1) <= -1 && *_errno_location() == 4 )
          ;
        v2 = *a1;
        if ( (*a1 & 0x80000000) == 0 && (v2 & 0x3FFFFFFF) != 0 )
        {
          v8 = -99;
          do
          {
            __yield();
            v2 = *a1;
            if ( (*a1 & 0x80000000) != 0 )
              break;
            if ( (*a1 & 0x3FFFFFFF) == 0 )
              break;
            v4 = v8++ == 0;
          }
          while ( !v4 );
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = __ldrex(a1);
        if ( v6 != v2 )
          break;
        if ( !__strex(v2 | 0x80000000, a1) )
          goto LABEL_14;
      }
      __clrex();
LABEL_32:
      v2 = v6;
    }
  }
  v6 = __ldrex(a1);
  if ( v6 == v2 )
  {
    v9 = __strex(v5 | v2, a1);
    result = 0;
    if ( !v9 )
    {
      __dmb(0xBu);
      result = 1;
    }
  }
  else
  {
    result = 0;
    __clrex();
  }
  if ( !result )
    goto LABEL_32;
  return result;
}
