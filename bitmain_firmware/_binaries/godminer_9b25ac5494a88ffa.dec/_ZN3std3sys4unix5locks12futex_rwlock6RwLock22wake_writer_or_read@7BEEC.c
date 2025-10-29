int __fastcall std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(unsigned int *a1, unsigned int a2)
{
  int result; // r0
  unsigned int v4; // r1
  unsigned int *v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r1
  unsigned int *v8; // r1
  unsigned int v9; // r0

  result = 0x3FFFFFFF;
  if ( (a2 & 0x3FFFFFFF) != 0 )
    core::panicking::panic(aAssertionFaile_16, 36, &off_2DECB0);
  if ( a2 == 0x80000000 )
  {
    do
    {
      a2 = __ldrex(a1);
      if ( a2 != 0x80000000 )
      {
        result = 0;
        __clrex();
        goto LABEL_6;
      }
    }
    while ( __strex(0, a1) );
    v8 = a1 + 1;
    __dmb(0xBu);
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    return syscall(240, v8, 129, 1);
  }
  else
  {
LABEL_6:
    if ( a2 == 0x40000000 )
    {
LABEL_14:
      result = 0;
      while ( 1 )
      {
        v7 = __ldrex(a1);
        if ( v7 != 0x40000000 )
          break;
        if ( !__strex(0, a1) )
          return syscall(240, a1, 129, 0x7FFFFFFF);
      }
    }
    else
    {
      if ( a2 != -1073741824 )
        return result;
      result = 0x40000000;
      while ( 1 )
      {
        v4 = __ldrex(a1);
        if ( v4 != -1073741824 )
          break;
        if ( !__strex(0x40000000u, a1) )
        {
          v5 = a1 + 1;
          __dmb(0xBu);
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 + 1, v5) );
          result = syscall(240, v5, 129, 1);
          if ( result > 0 )
            return result;
          goto LABEL_14;
        }
      }
    }
    __clrex();
  }
  return result;
}
