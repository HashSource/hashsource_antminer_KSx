int __fastcall sub_1DCBC8(_DWORD *a1, char *name)
{
  _BOOL4 v5; // r7
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r1
  int result; // r0
  int v10; // r0
  unsigned int v11; // r0

  if ( __ldrex((unsigned int *)&dword_2E966C) )
  {
    __clrex();
  }
  else if ( !__strex(0x3FFFFFFFu, (unsigned int *)&dword_2E966C) )
  {
    __dmb(0xBu);
    goto LABEL_4;
  }
  std::sys::unix::locks::futex_rwlock::RwLock::write_contended((unsigned int *)&dword_2E966C);
LABEL_4:
  v5 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v5 = !std::panicking::panic_count::is_zero_slow_path();
  v6 = (unsigned __int8)byte_2E9674;
  if ( unsetenv(name) == -1 )
  {
    v10 = *_errno_location();
    *a1 = 0;
    a1[1] = v10;
    if ( v6 )
    {
LABEL_8:
      if ( !v5
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
        && !std::panicking::panic_count::is_zero_slow_path() )
      {
        byte_2E9674 = 1;
      }
      __dmb(0xBu);
      do
      {
        v7 = __ldrex((unsigned int *)&dword_2E966C);
        v8 = v7 - 0x3FFFFFFF;
        result = __strex(v7 - 0x3FFFFFFF, (unsigned int *)&dword_2E966C);
      }
      while ( result );
      goto LABEL_18;
    }
  }
  else
  {
    *(_BYTE *)a1 = 4;
    if ( v6 )
      goto LABEL_8;
  }
  if ( !v5
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_2E9674 = 1;
  }
  __dmb(0xBu);
  do
  {
    v11 = __ldrex((unsigned int *)&dword_2E966C);
    v8 = v11 - 0x3FFFFFFF;
    result = __strex(v11 - 0x3FFFFFFF, (unsigned int *)&dword_2E966C);
  }
  while ( result );
LABEL_18:
  if ( v8 >= 0x40000000 )
    return std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v8);
  return result;
}
