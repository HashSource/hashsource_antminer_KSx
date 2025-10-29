unsigned int __fastcall std::sys::unix::locks::futex_mutex::Mutex::lock_contended(unsigned int *a1)
{
  unsigned int result; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r1

  result = *a1;
  if ( result == 1 )
  {
    v3 = -99;
    do
    {
      __yield();
      result = *a1;
      if ( *a1 != 1 )
        break;
      v4 = v3++ == 0;
    }
    while ( !v4 );
  }
  if ( !result )
  {
    while ( 1 )
    {
      result = __ldrex(a1);
      if ( result )
        break;
      if ( !__strex(1u, a1) )
      {
        __dmb(0xBu);
        return result;
      }
    }
    __clrex();
  }
  while ( 1 )
  {
    if ( result != 2 )
    {
      do
        result = __ldrex(a1);
      while ( __strex(2u, a1) );
      __dmb(0xBu);
      if ( !result )
        break;
    }
    while ( *a1 == 2 && syscall(240, a1, 137, 2, 0, 0, -1) <= -1 && *_errno_location() == 4 )
      ;
    result = *a1;
    if ( *a1 == 1 )
    {
      v5 = -99;
      do
      {
        __yield();
        result = *a1;
        if ( *a1 != 1 )
          break;
        v4 = v5++ == 0;
      }
      while ( !v4 );
    }
  }
  return result;
}
