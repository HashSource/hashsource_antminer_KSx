unsigned int __fastcall std::sys::unix::locks::futex_rwlock::RwLock::read_contended(unsigned int *a1)
{
  unsigned int result; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r5
  unsigned int v9; // r1
  int v10; // r1
  _DWORD v11[6]; // [sp+10h] [bp-18h] BYREF

  result = *a1;
  if ( result == 0x3FFFFFFF )
  {
    v3 = -99;
    do
    {
      __yield();
      result = *a1;
      if ( *a1 != 0x3FFFFFFF )
        break;
      v4 = v3++ == 0;
    }
    while ( !v4 );
  }
  do
  {
    while ( result > 0x3FFFFFFF || (result & 0x3FFFFFFE) == 0x3FFFFFFE )
    {
      if ( (result & 0x3FFFFFFF) == 0x3FFFFFFE )
      {
        v11[2] = &off_2CBC98;
        v11[3] = 1;
        v11[5] = 0;
        v11[0] = 0;
        v11[4] = aRustc9eb3afe9e;
        core::panicking::panic_fmt(v11, &off_2CBCA0);
      }
      v8 = result | 0x40000000;
      if ( (result & 0x40000000) != 0 )
      {
LABEL_21:
        v11[0] = 0;
        while ( *a1 == v8 && syscall(240, a1, 137, v8, v11[0], 0, -1) <= -1 && *_errno_location() == 4 )
          ;
        result = *a1;
        if ( *a1 == 0x3FFFFFFF )
        {
          v10 = -99;
          do
          {
            __yield();
            result = *a1;
            if ( *a1 != 0x3FFFFFFF )
              break;
            v4 = v10++ == 0;
          }
          while ( !v4 );
        }
      }
      else
      {
        while ( 1 )
        {
          v9 = __ldrex(a1);
          if ( v9 != result )
            break;
          if ( !__strex(v8, a1) )
            goto LABEL_21;
        }
        __clrex();
        result = v9;
      }
    }
    v6 = __ldrex(a1);
    if ( v6 == result )
    {
      v7 = __strex(result + 1, a1);
      v5 = 0;
      if ( !v7 )
      {
        __dmb(0xBu);
        v5 = 1;
      }
    }
    else
    {
      v5 = 0;
      __clrex();
    }
    v4 = v5 == 0;
    result = v6;
  }
  while ( v4 );
  return result;
}
